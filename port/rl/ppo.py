"""Reinforcement learning (PPO) from the decisions the agents log while they play (agent.py with PS_RL_DIR).

    python3 port/rl/ppo.py RUN_DIR [--init MODEL.pt]

RUN_DIR/model.pt is the policy every agent plays with (they load it again when it changes); RUN_DIR/env_*/ hold the chunks
they write. Each update takes the chunks that arrived, computes advantages (GAE) from the rewards and the values the agents
saw, and runs a few epochs of clipped PPO on the GPU. The values are kept in the units the imitation model learned them in
(returns normalised by g_mean, g_std). A KL term to the starting policy (--init, the imitation model) keeps the policy from
forgetting what it knew while the value head is still poor; its weight decays over the first updates.

Writes RUN_DIR/model.pt (atomically), RUN_DIR/ckpt_NNNN.pt every 20 updates, and a line per update to RUN_DIR/log.txt:
decisions, rounds won / lost / won without damage (the Perfect rate), mean damage taken per round, losses, entropy."""
import argparse
import glob
import os
import time
import numpy as np
import torch
import torch.nn as nn
from bc_train import Policy
import features as F

GAMMA = 0.985         # per decision (2 frames)
LAMBDA = 0.95
CLIP = 0.2
EPOCHS = 3
BATCH = 1024
LR = 1e-4
ENTROPY = 0.01
KL0, KL_DECAY = 0.5, 0.97
MIN_DECISIONS = int(os.environ.get("PS_PPO_MIN", "40000"))


def load_chunks(paths):
    data = []
    for p in paths:
        try:
            with np.load(p) as z:
                data.append({k: z[k] for k in z.files})
        except Exception:
            continue
    return data


def advantages(chunk, g_mean, g_std):
    r = chunk['reward'].astype(np.float64)
    v = chunk['value'].astype(np.float64) * g_std + g_mean
    d = chunk['done'].astype(np.float64)
    n = len(r)
    adv = np.zeros(n)
    last = 0.0
    for t in range(n - 1, -1, -1):
        nv = 0.0 if d[t] else (v[t + 1] if t + 1 < n else v[t])
        delta = r[t] + GAMMA * nv - v[t]
        last = delta + GAMMA * LAMBDA * (0.0 if d[t] else last)
        adv[t] = last
    ret = adv + v
    return adv, (ret - g_mean) / g_std


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('run')
    ap.add_argument('--init', help='the starting policy (imitation); also the KL anchor unless --ref')
    ap.add_argument('--ref', help='the KL anchor, when it is not --init')
    a = ap.parse_args()
    dev = 'cuda'
    model_path = os.path.join(a.run, 'model.pt')
    ck = torch.load(a.init or model_path, map_location='cpu', weights_only=False)
    model = Policy(ck['n_obs'], len(ck['kinds'])).to(dev)
    model.load_state_dict(ck['state'])
    ref = Policy(ck['n_obs'], len(ck['kinds'])).to(dev)
    ref.load_state_dict(torch.load(a.ref or a.init, map_location='cpu', weights_only=False)['state'] if (a.ref or a.init) else ck['state'])
    ref.eval()
    g_mean, g_std = float(ck['g_mean']), float(ck['g_std'])
    opt = torch.optim.Adam(model.parameters(), LR)
    update = int(ck.get('update', 0))
    kl_w = KL0 * KL_DECAY ** update

    def save():
        ck['state'] = {k: v.detach().cpu() for k, v in model.state_dict().items()}
        ck['update'] = update
        tmp = model_path + '.tmp'
        torch.save(ck, tmp)
        os.replace(tmp, model_path)
        if update % 20 == 0:
            torch.save(ck, os.path.join(a.run, 'ckpt_%04d.pt' % update))

    os.makedirs(a.run, exist_ok=True)
    if not os.path.exists(model_path):
        save()
    seen = set()
    logf = open(os.path.join(a.run, 'log.txt'), 'a')
    while True:
        paths = sorted(p for p in glob.glob(os.path.join(a.run, 'env_*', 'chunk_*.npz')) if p not in seen)
        chunks = load_chunks(paths)
        n = sum(len(c['action']) for c in chunks)
        if n < MIN_DECISIONS:
            time.sleep(10)
            continue
        seen.update(paths)
        for p in paths:
            os.remove(p)
        advs, rets = zip(*(advantages(c, g_mean, g_std) for c in chunks))
        cat = lambda k: np.concatenate([c[k] for c in chunks])
        T = lambda x, t=torch.float32: torch.as_tensor(x, dtype=t, device=dev)
        O, X, C = T(cat('obs')), T(cat('extra')), T(cat('cats'), torch.long)
        OF, OC, OM = T(cat('ofeat')), T(cat('ocats'), torch.long), T(cat('omask'), torch.bool)
        A, LP = T(cat('action'), torch.long), T(cat('logp'))
        ADV = T(np.concatenate(advs))
        ADV = (ADV - ADV.mean()) / (ADV.std() + 1e-8)
        RET = T(np.concatenate(rets))
        model.train()
        stats = []
        for _ in range(EPOCHS):
            perm = torch.randperm(len(A), device=dev)
            for i in range(0, len(perm), BATCH):
                b = perm[i:i + BATCH]
                logits, value = model(O[b], X[b], C[b], OF[b], OC[b], OM[b])
                logp_all = torch.log_softmax(logits, 1)
                lp = logp_all.gather(1, A[b, None])[:, 0]
                ratio = torch.exp(lp - LP[b])
                pg = -torch.min(ratio * ADV[b], torch.clamp(ratio, 1 - CLIP, 1 + CLIP) * ADV[b]).mean()
                vl = ((value - RET[b]) ** 2).mean()
                ent = -(logp_all.exp() * logp_all).sum(1).mean()
                with torch.no_grad():
                    ref_lp = torch.log_softmax(ref(O[b], X[b], C[b], OF[b], OC[b], OM[b])[0], 1)
                kl = (logp_all.exp() * (logp_all - ref_lp)).sum(1).mean()
                loss = pg + 0.5 * vl - ENTROPY * ent + kl_w * kl
                opt.zero_grad()
                loss.backward()
                nn.utils.clip_grad_norm_(model.parameters(), 0.5)
                opt.step()
                stats.append((pg.item(), vl.item(), ent.item(), kl.item(), ((ratio - 1).abs() > CLIP).float().mean().item()))
        model.eval()
        update += 1
        kl_w *= KL_DECAY
        save()
        evs = [c['events'] for c in chunks if len(c['events'])]
        ev = np.concatenate([np.pad(e, ((0, 0), (0, 5 - e.shape[1]))) for e in evs]) if evs else np.zeros((0, 5))
        rounds = len(ev)
        won, lost, perf, tout = (ev[:, 0].sum(), ev[:, 1].sum(), ev[:, 2].sum(), ev[:, 4].sum()) if rounds else (0, 0, 0, 0)
        s = np.mean(stats, 0)
        line = ('update %4d  decisions %6d  rounds %3d: KO wins %3d lost %3d time-outs %3d Perfect %3d (%.0f%% of rounds)  '
                'damage taken/round %.0f  reward/decision %.3f  pg %.3f value %.3f entropy %.2f kl %.3f (w %.3f) clipped %.2f' % (
                    update, len(A), rounds, won, lost, tout, perf, 100 * perf / max(1, rounds),
                    ev[:, 3].mean() if rounds else 0, cat('reward').mean(), *s[:4], kl_w, s[4]))
        print(line, flush=True)
        logf.write(time.strftime('%H:%M:%S ') + line + '\n')
        logf.flush()


if __name__ == '__main__':
    main()
