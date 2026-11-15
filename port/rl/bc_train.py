"""Behaviour cloning from --record files: a policy that predicts a fighter's next input from everything around it.

    python3 port/rl/bc_train.py OUT.pt FILE.psrec:SIDE[:WEIGHT] ... [--epochs N]

Each FILE:SIDE names a recording and the side to learn from (1 or 2). The policy (Policy) is a transformer over entities:
the fighter itself (its state now and 3 and 8 frames ago, and the opponent's, features.observe), and the K_OBJ nearest
objects (features.observe_objects: projectiles, stage objects, items and stones, gimmicks, each with its kind). Weights
follow the goal of Perfect wins, as advantage-weighted regression: each frame's return is the discounted sum of the
reward that followed it in its round (reward(): damage dealt, damage taken counted 4x as much, a round won, a round won
without damage); a value head learns the expected return of a state, and a frame's action is weighted by
exp(advantage / beta), so the actions that led to better than expected are copied and the teacher's mistakes are not.
Frames in super count 2x more, frames where the action changes 3x (the decisions). Validation is on whole rounds held out."""
import argparse
import numpy as np
import torch
import torch.nn as nn
import features as F
import psrec

PRE_HIT = 45


class Policy(nn.Module):
    def __init__(self, n_obs, n_kinds, d=128, layers=3):
        super().__init__()
        self.state_emb = nn.Embedding(F.N_STATE, 16)
        self.char_emb = nn.Embedding(F.N_CHAR, 8)
        self.char_super_emb = nn.Embedding(F.N_CHAR * 2, 16)
        self.fighter = nn.Sequential(nn.Linear(n_obs + 4 + 2 * 16 + 2 * 8 + 2 * 16, 256), nn.ReLU(), nn.Linear(256, d))
        self.kind_emb = nn.Embedding(n_kinds + 1, 16)
        self.cls_emb = nn.Embedding(8, 4)
        self.type_emb = nn.Embedding(64, 8)
        self.ostate_emb = nn.Embedding(64, 8)
        self.obj = nn.Sequential(nn.Linear(F.N_OBJ_FEAT + 36, 128), nn.ReLU(), nn.Linear(128, d))
        layer = nn.TransformerEncoderLayer(d, 4, 4 * d, dropout=0.1, batch_first=True, norm_first=True)
        self.encoder = nn.TransformerEncoder(layer, layers)
        self.head = nn.Sequential(nn.LayerNorm(d), nn.Linear(d, 256), nn.ReLU(), nn.Linear(256, F.N_ACTIONS))
        self.value = nn.Sequential(nn.LayerNorm(d), nn.Linear(d, 256), nn.ReLU(), nn.Linear(256, 1))

    def forward(self, obs, extra, cats, ofeat, ocats, omask):
        e = torch.cat([self.state_emb(cats[:, 0]), self.state_emb(cats[:, 1]),
                       self.char_emb(cats[:, 2]), self.char_emb(cats[:, 3]),
                       self.char_super_emb(cats[:, 4]), self.char_super_emb(cats[:, 5])], 1)
        me = self.fighter(torch.cat([obs, extra, e], 1))[:, None]
        oe = torch.cat([ofeat, self.kind_emb(ocats[..., 0]), self.cls_emb(ocats[..., 1]),
                        self.type_emb(ocats[..., 2]), self.ostate_emb(ocats[..., 3])], -1)
        tokens = torch.cat([me, self.obj(oe)], 1)
        pad = torch.cat([torch.zeros_like(omask[:, :1]), ~omask], 1)
        h = self.encoder(tokens, src_key_padding_mask=pad)[:, 0]
        return self.head(h), self.value(h)[:, 0]


GAMMA = 0.99          # per frame: about 1.7 s of look-ahead
BETA = 1.0            # temperature of the advantage weights (advantages are normalised)
W_MAX = 20.0
CHUNK = 20000


def reward(rows, side):
    """per-frame reward for side, the Perfect-first goal: +1 per point of damage dealt, -4 per point taken (the round's end
    adds, in returns(): +60 for a knock-out, +240 more if without damage, -120 for a loss, -60 for a round the time ended
    while ahead)"""
    me = psrec.life(rows, side).astype(np.float64)
    op = psrec.life(rows, 1 - side).astype(np.float64)
    taken = np.maximum(0, np.r_[0, -np.diff(me)])
    dealt = np.maximum(0, np.r_[0, -np.diff(op)])
    return dealt - 4.0 * taken


def returns(rows, side, rnd):
    r = reward(rows, side)
    me, op = psrec.life(rows, side), psrec.life(rows, 1 - side)
    g = np.zeros(len(r))
    for k in np.unique(rnd[rnd >= 0]):
        idx = np.flatnonzero(rnd == k)
        s, e = idx[0], idx[-1]
        rr = r[s:e + 1].copy()
        rr -= 0.01                                      # every frame costs a little: the sooner the knock-out the better
        if op[e] <= 0 < me[e]:                          # a knock-out: the only way to win; sooner earns more
            rr[-1] += 60 + (240 if me[s:e + 1].min() == me[s] else 0) + 120 * min(int(rows['gs'][e, 0x21]), 99) / 99.0
        elif me[e] <= 0 < op[e] or me[e] < op[e]:      # knocked out, or behind when the time ran out
            rr[-1] -= 120
        else:                                           # the time ran out while ahead: no win
            rr[-1] -= 60
        acc = 0.0
        for t in range(len(rr) - 1, -1, -1):
            acc = rr[t] + GAMMA * acc
            g[s + t] = acc
    return g


def kinds_of(files):
    hs = set()
    for path, _, _ in files:
        ix = psrec.Index(path)
        for i0 in range(0, len(ix), CHUNK):
            objs, n = ix.objects(i0, min(len(ix), i0 + CHUNK))
            if objs is None:
                break
            for i, k in enumerate(n):
                hs.update(objs[i, :k]['handler'].tolist())
    return {h: i + 1 for i, h in enumerate(sorted(hs))}


def samples(path, side, base_weight, kinds):
    ix = psrec.Index(path)
    r = ix.rows
    yaw = F.camera_yaw(r)
    obs, cats = F.observe(r, side, yaw)
    obs = F.stack(obs, r['frame']).astype(np.float32)
    extra = F.fighter_extra(r, side)
    parts = []
    for i0 in range(0, len(ix), CHUNK):
        lo = max(0, i0 - 1)
        i1 = min(len(ix), i0 + CHUNK)
        objs, n = ix.objects(lo, i1)
        f, c, m = F.observe_objects(r[lo:i1], objs, n, side, kinds)
        parts.append((f[i0 - lo:], c[i0 - lo:], m[i0 - lo:]))
    ofeat, ocats, omask = (np.concatenate(x) for x in zip(*parts))
    act = F.encode_actions(r, side, yaw)
    # the action taken from record t is the input block of record t+1, when t+1 follows t and both are in the fight
    nxt = np.r_[np.diff(r['frame'].astype(np.int64)) == 1, False]
    fight = r['mode'] == 3
    ok = nxt & fight & np.r_[fight[1:], False]
    target = np.r_[act[1:], 0]
    starts = np.flatnonzero(fight & ~np.r_[False, fight[:-1]])
    ends = np.flatnonzero(fight & ~np.r_[fight[1:], False])
    rnd = np.full(len(r), -1)
    for k, (s, e) in enumerate(zip(starts, ends)):
        rnd[s:e + 1] = k
    g = returns(r, side, rnd)
    w = np.full(len(r), base_weight)
    w[psrec.field(r, side, 0x71F1, 'u1') != 0] *= 2.0       # super is rare and changes every move: weigh it up
    w[target != np.r_[target[:1], target[:-1]]] *= 3.0      # the frames where the action changes: the decisions
    m = ok & (rnd >= 0)
    tag = np.array(['%s:%d:%d' % (path, side, k) for k in rnd[m]])
    return obs[m], extra[m], cats[m], ofeat[m], ocats[m], omask[m], target[m], w[m], g[m].astype(np.float32), tag


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('out')
    ap.add_argument('files', nargs='+', help='FILE:SIDE[:WEIGHT]')
    ap.add_argument('--epochs', type=int, default=40)
    a = ap.parse_args()
    files = []
    for spec in a.files:
        parts = spec.rsplit(':', 2) if spec.count(':') >= 2 else spec.rsplit(':', 1)
        files.append((parts[0], int(parts[1]) - 1, float(parts[2]) if len(parts) > 2 else 1.0))
    kinds = kinds_of(files)
    data = [samples(p, s, w, kinds) for p, s, w in files]
    obs, extra, cats, ofeat, ocats, omask, y, w, g, tag = (np.concatenate(x) for x in zip(*data))
    del data
    rounds = np.unique(tag)
    rng = np.random.default_rng(0)
    val_rounds = set(rng.choice(rounds, max(1, len(rounds) // 6), replace=False))
    val = np.array([t in val_rounds for t in tag])
    print('samples %d (val %d), rounds %d, fighter features %d, object kinds %d' % (len(y), val.sum(), len(rounds), obs.shape[1], len(kinds)))
    mean, std = obs[~val].mean(0), obs[~val].std(0) + 1e-3
    dev = 'cuda' if torch.cuda.is_available() else 'cpu'
    T = lambda x, t=torch.float32: torch.as_tensor(x, dtype=t, device=dev)
    O, X, C = T((obs - mean) / std), T(extra), T(cats, torch.long)
    OF, OC, OM = T(ofeat), T(ocats, torch.long), T(omask, torch.bool)
    Y, W = T(y, torch.long), T(w)
    g_mean, g_std = g[~val].mean(), g[~val].std() + 1e-6
    G = T((g - g_mean) / g_std)
    print('returns: mean %.1f, std %.1f' % (g_mean, g_std))
    tr, va = T(np.flatnonzero(~val), torch.long), T(np.flatnonzero(val), torch.long)
    model = Policy(obs.shape[1], len(kinds)).to(dev)
    opt = torch.optim.AdamW(model.parameters(), 3e-4, weight_decay=1e-2)
    sched = torch.optim.lr_scheduler.CosineAnnealingLR(opt, a.epochs)
    lossf = nn.CrossEntropyLoss(reduction='none', label_smoothing=0.05)
    run = lambda i, noise=0.0: model(O[i] + noise * torch.randn_like(O[i]), X[i], C[i], OF[i], OC[i].long(), OM[i])
    best = (1e9, None)
    for ep in range(a.epochs):
        model.train()
        perm = tr[torch.randperm(len(tr), device=dev)]
        for i in range(0, len(perm), 256):
            b = perm[i:i + 256]
            logits, value = run(b, 0.02)
            adv = (G[b] - value).detach()
            aw = torch.clamp(torch.exp(adv / BETA), max=W_MAX) * W[b]
            loss = (lossf(logits, Y[b]) * aw).sum() / aw.sum() + 0.5 * ((value - G[b]) ** 2).mean()
            opt.zero_grad()
            loss.backward()
            nn.utils.clip_grad_norm_(model.parameters(), 1.0)
            opt.step()
        sched.step()
        model.eval()
        with torch.no_grad():
            outs = [run(va[i:i + 2048]) for i in range(0, len(va), 2048)]
            lv = torch.cat([o[0] for o in outs])
            vv = torch.cat([o[1] for o in outs])
            v_err = ((vv - G[va]) ** 2).mean().item()
            vl = ((lossf(lv, Y[va]) * W[va]).sum() / W[va].sum()).item()
            pred = lv.argmax(1)
            acc = (pred == Y[va]).float().mean().item()
            d_acc = (pred // 8 == Y[va] // 8).float().mean().item()
            b_acc = (pred % 8 == Y[va] % 8).float().mean().item()
        if vl < best[0]:
            best = (vl, {k: v.detach().cpu().clone() for k, v in model.state_dict().items()})
        print('epoch %3d  train %.3f  val %.3f  val acc %.3f (direction %.3f, buttons %.3f)  value error %.3f' % (ep, loss.item(), vl, acc, d_acc, b_acc, v_err), flush=True)
    torch.save({'state': best[1], 'mean': mean, 'std': std, 'n_obs': obs.shape[1], 'kinds': kinds,
                'history': F.HISTORY, 'version': 3, 'g_mean': g_mean, 'g_std': g_std}, a.out)
    print('saved %s (best val loss %.3f)' % (a.out, best[0]))


if __name__ == '__main__':
    main()
