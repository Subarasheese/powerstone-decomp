"""The policy side of --agent (port/runtime/agent.c): reads the game's records on stdin, answers pad bits on stdout.

    started by the game as: python3 port/rl/agent.py MODEL.pt

Protocol: u32 format version (3) once; then per frame u8 side, u32 length and one record (record.c, version 3: the fixed
part, then every live object); the answer is u32 held bits in the game's command form (directions 0xF0, punch / kick / jump
0x4 / 0x200 / 0x400). Features are computed exactly as in training (features.py) over the last few records.

Environment:
  PS_AGENT_TEMP     sampling temperature (default 1.0; 0 = always the most likely action)
  PS_RL_DIR         reinforcement learning (ppo.py): log every decision made in a fight (the inputs, the action, its
                    log-probability, the value, the reward since the decision before, the end of a round) to numbered
                    chunks in this folder, and load the model again whenever its file changes
  PS_REPEAT         decide every N frames and hold the action between (default 1; ppo.py uses 2)
  PS_INFER_SOCK     run the policy in infer_server.py (on the GPU, for all agents at once) through this Unix socket instead
                    of here; the model file still gives the normalisation and the object kinds"""
import os
import struct
import sys
import time
import socket
import numpy as np
import torch

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import features as F
import psrec
from bc_train import Policy

WINDOW = max(F.HISTORY) + 2
HEADER = b'PSREC3\0\0' + struct.pack('<6I', 0, 32, 0x300, 0x200, 8 + psrec.OBJ_HEAD + 0x10, 0)
CHUNK = 2048

# the reward, as bc_train.returns counts it: damage dealt +1, damage taken -4 per point; a round won by knock-out +60,
# without damage +240 more (a Perfect), sooner more (SPEED); lost (knocked out, or behind when the time runs out) -120; the time running out
# while ahead -60: only a knock-out wins
# the sooner the knock-out the better: the knock-out earns up to SPEED more, in proportion to the round time left, and every
# decision of the round costs TICK (about 0.6 a second, small beside a point of damage taken)
DEALT, TAKEN = 1.0, 4.0
WIN, PERFECT, LOSS, TIMEOUT = 60.0, 240.0, 120.0, 60.0
SPEED, TICK = 120.0, 0.02


def read(stream, n):
    buf = b''
    while len(buf) < n:
        k = stream.read(n - len(buf))
        if not k:
            return None
        buf += k
    return buf


def observation(rows, side, mean, std):
    """the policy's fighter input for the last record, as features.stack(features.observe(...)) gives it, from only the
    records it uses (the last and HISTORY frames before it, each with the record before for velocities)"""
    n = len(rows)
    frame = rows['frame'].astype(np.int64)
    start = n - 1
    while start > 0 and frame[start] - frame[start - 1] == 1:
        start -= 1
    need = [max(n - 1 - h, start) for h in F.HISTORY]
    sel = sorted({j for i in need for j in (i - 1, i) if j >= 0})
    sub = rows[sel]
    obs, cats = F.observe(sub, side, F.camera_yaw(sub))
    at = {j: k for k, j in enumerate(sel)}
    stacked = np.concatenate([obs[at[i]] for i in need])[None]
    return ((stacked - mean) / std).astype(np.float32), cats[at[n - 1]][None]


class Remote:
    """the policy in infer_server.py"""

    def __init__(self, path, n_obs):
        import infer_server
        self.s = socket.socket(socket.AF_UNIX, socket.SOCK_STREAM)
        for _ in range(60):
            try:
                self.s.connect(path)
                break
            except OSError:
                time.sleep(1)
        self.n_obs = n_obs
        self.pack = infer_server.pack

    def __call__(self, obs, extra, cats, ofeat, ocats, omask):
        self.s.sendall(self.pack(self.n_obs, obs=obs[0], extra=extra[0], cats=cats[0], ofeat=ofeat[0], ocats=ocats[0],
                                 omask=omask[0]))
        buf = self._recv((F.N_ACTIONS + 1) * 4)
        out = np.frombuffer(buf, np.float32)
        return out[:F.N_ACTIONS], float(out[F.N_ACTIONS])

    def _recv(self, n):
        buf = b''
        while len(buf) < n:
            k = self.s.recv(n - len(buf))
            if not k:
                raise EOFError('the inference server went away')
            buf += k
        return buf


def load(path):
    ck = torch.load(path, map_location='cpu', weights_only=False)
    model = Policy(ck['n_obs'], len(ck['kinds']))
    model.load_state_dict(ck['state'])
    model.eval()
    return model, ck


class Log:
    """the decisions of one agent, written in chunks for ppo.py"""

    def __init__(self, folder):
        self.folder = folder
        os.makedirs(folder, exist_ok=True)
        self.n = 0
        self.rows = []
        self.events = []        # per finished round: won by knock-out, lost, a Perfect, damage taken, the time ran out

    def add(self, row):
        self.rows.append(row)
        if len(self.rows) >= CHUNK:
            self.flush()

    def flush(self):
        if not self.rows:
            return
        out = {k: np.stack([r[k] for r in self.rows]) for k in self.rows[0]}
        out['events'] = np.asarray(self.events, np.float32).reshape(-1, 5)
        tmp = os.path.join(self.folder, '.tmp_%06d.npz' % self.n)
        with open(tmp, 'wb') as f:
            np.savez(f, **out)
        os.replace(tmp, os.path.join(self.folder, 'chunk_%06d_%d.npz' % (self.n, int(time.time()))))
        self.n += 1
        self.rows, self.events = [], []


def main():
    model_path = sys.argv[1]
    model, ck = load(model_path)
    mtime = os.path.getmtime(model_path)
    remote = Remote(os.environ['PS_INFER_SOCK'], ck['n_obs']) if os.environ.get('PS_INFER_SOCK') else None
    temp = float(os.environ.get('PS_AGENT_TEMP', '1.0'))
    repeat = max(1, int(os.environ.get('PS_REPEAT', '1')))
    rl_dir = os.environ.get('PS_RL_DIR')
    log = Log(rl_dir) if rl_dir else None
    torch.set_num_threads(1)
    inp, out = sys.stdin.buffer, sys.stdout.buffer
    if read(inp, 4) is None:
        return
    fixed = psrec.make_dtype(b'PSREC2', 0x300, 0x200).itemsize
    header = bytearray(HEADER)
    header[8:12] = struct.pack('<I', fixed)
    window = []
    rng = np.random.default_rng()
    bits, frames, decisions = 0, 0, 0
    pending = None              # the last decision, collecting its reward until the next one
    round_on, round_taken, last, fight_life, time_left = False, 0, None, (0, 0), 0

    def answer(b):
        out.write(struct.pack('<I', b))
        out.flush()

    while True:
        head = read(inp, 5)
        raw = read(inp, struct.unpack('<I', head[1:])[0]) if head else None
        if raw is None:
            if log:
                log.flush()
            return
        side = head[0]
        window.append(raw)
        if len(window) > WINDOW:
            window.pop(0)
        frames += 1
        if log:
            # the reward of the last decision: damage since the frame before; a round's end closes it
            fixed_rows = psrec.parse(bytes(header) + raw, False)
            mode = int(fixed_rows['mode'][0])
            me = int(psrec.life(fixed_rows, side)[0])
            op = int(psrec.life(fixed_rows, 1 - side)[0])
            if last is not None and round_on:
                dealt, taken = max(0, last[1] - op), max(0, last[0] - me)
                round_taken += taken
                if pending is not None:
                    pending['reward'] += DEALT * dealt - TAKEN * taken
            last = (me, op)
            if mode == 3:
                fight_life = (me, op)     # the lives in the round's last fight frame: the agent is not asked between rounds
                time_left = int(fixed_rows['gs'][0, 0x21])   # the round timer, in seconds (99 at the start)
            if mode == 3 and not round_on:
                round_on, round_taken = True, 0
            elif mode != 3 and round_on:
                round_on = False
                me, op = fight_life
                ko_win, ko_loss = op <= 0 < me, me <= 0 < op
                timeout = not ko_win and not ko_loss          # the time ran out (or both fell): never a win
                if pending is not None:
                    if ko_win:
                        pending['reward'] += WIN + (PERFECT if round_taken == 0 else 0) + SPEED * min(time_left, 99) / 99.0
                    elif ko_loss or me < op:
                        pending['reward'] -= LOSS
                    else:
                        pending['reward'] -= TIMEOUT
                    pending['done'] = np.float32(1)
                    log.add(pending)
                    pending = None
                log.events.append((ko_win, ko_loss or (timeout and me < op), ko_win and round_taken == 0, round_taken, timeout))
            if mode != 3:
                answer(0)
                continue
        if (frames - 1) % repeat:
            answer(bits)
            continue
        decisions += 1
        if log and not remote and decisions % 600 == 0:
            try:
                if os.path.getmtime(model_path) != mtime:
                    model, ck = load(model_path)
                    mtime = os.path.getmtime(model_path)
            except Exception:
                pass
        kinds, mean, std = ck['kinds'], ck['mean'], ck['std']
        rows = psrec.parse(bytes(header) + b''.join(window), False)
        _, objs, nobj = psrec.parse(bytes(header) + b''.join(window[-2:]), True)
        yaw = F.camera_yaw(rows[-1:])
        obs, cats = observation(rows, side, mean, std)
        extra = F.fighter_extra(rows[-1:], side)
        ofeat, ocats, omask = F.observe_objects(rows[-2:], objs, nobj, side, kinds)
        if remote:
            logits, v = remote(obs, extra, cats, ofeat[-1:], ocats[-1:], omask[-1:])
            value = np.array([v])
        else:
            T = torch.as_tensor
            with torch.no_grad():
                logits, value = model(T(obs), T(extra), T(cats), T(ofeat[-1:]), T(ocats[-1:]).long(), T(omask[-1:]))
            logits, value = logits[0].numpy(), value.numpy()
        logits = logits.astype(np.float64)
        lp = logits - logits.max()
        lp = lp - np.log(np.exp(lp).sum())
        if temp <= 0:
            a = int(logits.argmax())
        else:
            p = np.exp(lp / temp)
            a = int(rng.choice(len(p), p=p / p.sum()))
        bits = F.decode_action(a, F.bearing(rows[-1:], side)[-1], yaw[-1])
        answer(bits)
        if log:
            if pending is not None:
                log.add(pending)
            pending = dict(obs=obs[0].astype(np.float16), extra=extra[0].astype(np.float16), cats=cats[0].astype(np.int16),
                           ofeat=ofeat[-1].astype(np.float16), ocats=ocats[-1].astype(np.int16), omask=omask[-1],
                           action=np.int16(a), logp=np.float32(lp[a]), value=np.float32(value[0]),
                           reward=np.float32(-TICK), done=np.float32(0))


if __name__ == '__main__':
    main()
