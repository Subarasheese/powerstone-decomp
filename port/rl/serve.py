"""The policy's server: answers the game instances' decisions (port/runtime/agent.c) on a Unix socket, in batches on the
GPU, and keeps what each decision earned for learning.

    python3 port/rl/serve.py MODEL SOCKET [--out DIR] [--max-backlog N] [--temp T]

MODEL is a policy file (policy2.py); it is loaded again whenever the file changes. With --out, every decision becomes a
transition (the inputs, the action: the policy's or, from a --teach instance, the game AI's; its log-probability and
value; the reward it earned and whether a round ended there), written in chunks of CHUNK transitions to DIR for
learn.py, with the rounds' results. When DIR holds more than --max-backlog unread chunks, new data is dropped (the
learner is behind; nothing piles up on the disk).

The protocol: agent.c's header and psa_req; the answer to an act request is an i32 action."""
import argparse
import os
import selectors
import socket
import struct
import sys
import time
import numpy as np
import torch

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import obsc
import policy2

CHUNK = 4096
REQ = np.dtype([('obs', '<f4', (obsc.OBS,)), ('cats', '<i2', (obsc.CATS,)), ('ofeat', '<f4', (obsc.K, obsc.OF)),
                ('ocats', '<i2', (obsc.K, 4)), ('omask', 'u1', (obsc.K,)), ('teacher', '<i4'), ('reward', '<f4'),
                ('done', 'u1'), ('has_event', 'u1'), ('pad', 'u1', (2,)), ('event', '<f4', (6,))])


class Conn:
    def __init__(self, sock, cid):
        self.sock, self.cid, self.buf = sock, cid, b''
        self.side = self.mode = None
        self.level = -1
        self.pending = None          # the last decision, waiting for the reward the next request brings
        self.rows, self.events = [], []


class Writer:
    def __init__(self, out, max_backlog):
        self.out, self.max_backlog, self.n, self.dropped, self.written = out, max_backlog, 0, 0, 0
        if out:
            os.makedirs(out, exist_ok=True)

    def write(self, rows, events, mode):
        if not self.out or not rows:
            return
        os.makedirs(self.out, exist_ok=True)        # the folder may have been removed by hand: make it again
        backlog = sum(1 for f in os.listdir(self.out) if f.endswith('.npz'))
        if backlog >= self.max_backlog:
            self.dropped += len(rows)
            return
        d = {k: np.stack([r[k] for r in rows]) for k in rows[0]}
        d['events'] = np.asarray(events, np.float32).reshape(-1, 7)   # won by KO, lost, Perfect, damage taken, time out, opponent's character, tag
        d['mode'] = np.int8(mode)
        name = 'chunk_%d_%06d_%s.npz' % (os.getpid(), self.n, 'teach' if mode else 'act')
        tmp = os.path.join(self.out, '.' + name)
        with open(tmp, 'wb') as f:
            np.savez(f, **d)
        os.replace(tmp, os.path.join(self.out, name))
        self.n += 1
        self.written += len(rows)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('model')
    ap.add_argument('socket')
    ap.add_argument('--out')
    ap.add_argument('--max-backlog', type=int, default=30)
    ap.add_argument('--temp', type=float, default=1.0)
    a = ap.parse_args()
    dev = 'cuda' if torch.cuda.is_available() else 'cpu'
    model, _ = policy2.load(a.model, dev)
    mtime, checked = os.path.getmtime(a.model), time.time()
    writer = Writer(a.out, a.max_backlog)
    if os.path.exists(a.socket):
        os.remove(a.socket)
    srv = socket.socket(socket.AF_UNIX, socket.SOCK_STREAM)
    srv.bind(a.socket)
    srv.listen(256)
    sel = selectors.DefaultSelector()
    sel.register(srv, selectors.EVENT_READ)
    conns, next_id = {}, 0
    rng = np.random.default_rng()
    stats_t, stats_n = time.time(), 0
    while True:
        ready = []          # (conn, request)
        for key, _ in sel.select(timeout=1.0):
            if key.fileobj is srv:
                c, _ = srv.accept()
                c.setblocking(False)
                sel.register(c, selectors.EVENT_READ)
                conns[c] = Conn(c, next_id)
                next_id += 1
                continue
            c = key.fileobj
            cn = conns.get(c)
            try:
                data = c.recv(1 << 22)
            except BlockingIOError:
                continue
            except OSError:
                data = b''
            if not data:
                sel.unregister(c)
                c.close()
                if cn:
                    writer.write(cn.rows, cn.events, cn.mode)
                conns.pop(c, None)
                continue
            cn.buf += data
            if cn.side is None and len(cn.buf) >= 16:
                magic, cn.side, cn.mode, cn.level = cn.buf[:4], *struct.unpack('<IIi', cn.buf[4:16])
                cn.buf = cn.buf[16:]
                if magic != b'PSA2':
                    sel.unregister(c)
                    c.close()
                    conns.pop(c, None)
                    continue
            while cn.side is not None and len(cn.buf) >= REQ.itemsize:
                ready.append((cn, np.frombuffer(cn.buf[:REQ.itemsize], REQ)[0]))
                cn.buf = cn.buf[REQ.itemsize:]
        if ready:
            # close the decisions before: their reward and round end came with these requests
            for cn, r in ready:
                if cn.pending is not None:
                    p = cn.pending
                    p['reward'] = np.float32(r['reward'])
                    p['done'] = np.uint8(r['done'])
                    cn.rows.append(p)
                    cn.pending = None
                if r['has_event']:
                    cn.events.append(np.r_[r['event'], cn.level].astype(np.float32))
                if a.out and cn.mode == 1 and r['teacher'] >= 0:
                    # a teaching instance does not wait for an answer, so one batch can hold several of its decisions:
                    # each becomes the pending one in turn, in order (the next closes it)
                    cn.pending = dict(obs=r['obs'].astype(np.float16), cats=r['cats'].copy(),
                                      ofeat=r['ofeat'].astype(np.float16), ocats=r['ocats'].copy(), omask=r['omask'].copy(),
                                      action=np.int16(r['teacher']), logp=np.float32(0), value=np.float32(0),
                                      reward=np.float32(0), done=np.uint8(0))
                if len(cn.rows) >= CHUNK:
                    writer.write(cn.rows, cn.events, cn.mode)
                    cn.rows, cn.events = [], []
            acts = [(cn, r) for cn, r in ready if cn.mode == 0]
            if acts:
                T = lambda k, t: torch.as_tensor(np.stack([r[k] for _, r in acts])).to(dev, t)
                with torch.inference_mode(), torch.autocast('cuda', torch.float16, enabled=dev == 'cuda'):
                    logits, value = model(T('obs', torch.float32), T('cats', torch.long), T('ofeat', torch.float32),
                                          T('ocats', torch.long), T('omask', torch.bool))
                    lp = torch.log_softmax(logits.float() / a.temp, 1)
                    act = torch.multinomial(lp.exp(), 1)[:, 0]
                    alp = lp.gather(1, act[:, None])[:, 0]
                act, alp, value = act.cpu().numpy(), alp.cpu().numpy(), value.float().cpu().numpy()
                for i, (cn, r) in enumerate(acts):
                    try:
                        cn.sock.setblocking(True)
                        cn.sock.sendall(struct.pack('<i', int(act[i])))
                        cn.sock.setblocking(False)
                    except OSError:
                        pass
                    if a.out:
                        cn.pending = dict(obs=r['obs'].astype(np.float16), cats=r['cats'].copy(),
                                          ofeat=r['ofeat'].astype(np.float16), ocats=r['ocats'].copy(), omask=r['omask'].copy(),
                                          action=np.int16(act[i]), logp=np.float32(alp[i]), value=np.float32(value[i]),
                                          reward=np.float32(0), done=np.uint8(0))
            stats_n += len(ready)
        if time.time() - stats_t > 60:
            print('%s  %d connections  %.0f decisions/s  written %d  dropped %d' % (
                time.strftime('%H:%M:%S'), len(conns), stats_n / (time.time() - stats_t), writer.written, writer.dropped),
                flush=True)
            stats_t, stats_n = time.time(), 0
        if time.time() - checked > 5:
            checked = time.time()
            try:
                if os.path.getmtime(a.model) != mtime:
                    model, _ = policy2.load(a.model, dev)
                    mtime = os.path.getmtime(a.model)
            except Exception:
                pass


if __name__ == '__main__':
    main()
