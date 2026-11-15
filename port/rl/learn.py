"""The learner for observation version 2: takes the chunks serve.py writes, trains the policy, saves it for the server.

    python3 port/rl/learn.py RUN_DIR imitate [--steps N]
    python3 port/rl/learn.py RUN_DIR ppo [--ref MODEL]

RUN_DIR/model.pt is the policy (created if missing); RUN_DIR/chunks holds the chunks (each one is read once and deleted);
RUN_DIR/learn.log gets a line per update.

imitate: the game's AI's decisions (--teach instances), as advantage-weighted regression: the policy copies the AI's
  action, weighted by how much better than expected the next few seconds went (exp(advantage / BETA), clipped), so the
  AI's good decisions are copied and its mistakes much less; the value head learns the returns. The observation's
  normaliser is set from the first chunks.
ppo: the policy's own decisions (--agent instances): clipped PPO with generalised advantages, the value head on returns
  normalised by a running estimate, and two guards against drifting into random play: the entropy is held near a target
  (its coefficient adapts, and turns into a penalty above the target) and a KL term keeps the policy near --ref (the
  imitation model) early on, fading slowly.

Each line reports the rounds the chunks closed, per opponent level: knock-outs won, lost (by knock-out or behind when
the time ran out), Perfect, time-outs, damage taken, lost by knock-out; and the rounds against Valgas's final form again,
on their own."""
import argparse
import glob
import os
import sys
import time
import numpy as np
import torch
import torch.nn as nn

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import policy2

GAMMA, LAMBDA = 0.99, 0.95        # per decision (2 frames)
BETA, W_MAX = 1.0, 20.0           # imitation: advantage weights
CLIP, EPOCHS, BATCH = 0.15, 3, 4096
ENT_TARGET0, ENT_TARGET1, ENT_STEPS = 0.8, 0.6, 2000   # the entropy target falls from 0.8 to 0.6 over 2000 updates
# (just above the imitation policy's own, about 0.55: a guard against drifting either way, not a push to random play)
KL0, KL_HALF = 0.3, 300           # the KL weight to --ref halves every 300 updates
MIN_ROWS = {'imitate': 16384, 'ppo': 65536}


class RunningNorm:
    def __init__(self, mean=0.0, var=1.0, count=1e-4):
        self.mean, self.var, self.count = mean, var, count

    def update(self, x):
        bm, bv, bc = float(np.mean(x)), float(np.var(x)), len(x)
        d = bm - self.mean
        tot = self.count + bc
        self.mean += d * bc / tot
        self.var = (self.var * self.count + bv * bc + d * d * self.count * bc / tot) / tot
        self.count = tot

    @property
    def std(self):
        return max(1e-3, self.var ** 0.5)


def gae(r, v, d, last_v):
    """generalised advantages and returns along one connection's chunk; d[t] = the round ended after decision t"""
    n = len(r)
    adv = np.zeros(n, np.float32)
    acc = 0.0
    for t in range(n - 1, -1, -1):
        nv = 0.0 if d[t] else (v[t + 1] if t + 1 < n else last_v)
        delta = r[t] + GAMMA * nv - v[t]
        acc = delta + GAMMA * LAMBDA * (0.0 if d[t] else acc)
        adv[t] = acc
    return adv, adv + v


def take(chunks_dir, mode, min_rows):
    os.makedirs(chunks_dir, exist_ok=True)
    paths = sorted(glob.glob(os.path.join(chunks_dir, 'chunk_*_%s.npz' % ('teach' if mode == 'imitate' else 'act'))))
    out, n = [], 0
    for p in paths:
        try:
            with np.load(p) as z:
                out.append({k: z[k] for k in z.files})
        except Exception:
            pass
        os.remove(p)
        n += len(out[-1]['action']) if out else 0
        if n >= 4 * min_rows:
            break
    return out


def report(chunks):
    evs = [c['events'] for c in chunks if len(c['events'])]
    if not evs:
        return 'no rounds ended'
    ev = np.concatenate([e if e.shape[1] == 7 else np.insert(e, 5, -1, axis=1) for e in evs])   # (older chunks: no character)
    parts = []

    def line(label, e):
        ko_lost = (e[:, 1] > 0) & (e[:, 4] == 0)       # lost before the time ran out
        return '%s: %d rounds, KO %.0f%% lost %.0f%% Perfect %.1f%% time-out %.0f%% damage %.0f KO-lost %.0f%%' % (
            label, len(e), 100 * e[:, 0].mean(), 100 * e[:, 1].mean(), 100 * e[:, 2].mean(), 100 * e[:, 4].mean(),
            e[:, 3].mean(), 100 * ko_lost.mean())
    for lv in sorted(set(ev[:, 6].astype(int))):
        parts.append(line('level %d' % lv, ev[ev[:, 6] == lv]))
    for lv in sorted(set(ev[ev[:, 5] == 10][:, 6].astype(int))):       # Valgas's final form apart: the hardest fight
        parts.append(line('final Valgas at level %d' % lv, ev[(ev[:, 5] == 10) & (ev[:, 6] == lv)]))
    return '; '.join(parts)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('run')
    ap.add_argument('mode', choices=('imitate', 'ppo'))
    ap.add_argument('--ref', help='ppo: the model the KL term holds the policy near (the imitation model)')
    ap.add_argument('--steps', type=int, default=0, help='stop after N updates (0: never)')
    ap.add_argument('--lr', type=float, default=0)
    a = ap.parse_args()
    dev = 'cuda'
    model_path = os.path.join(a.run, 'model.pt')
    chunks_dir = os.path.join(a.run, 'chunks')
    os.makedirs(chunks_dir, exist_ok=True)
    if os.path.exists(model_path):
        model, meta = policy2.load(model_path, dev)
    else:
        model, meta = policy2.Policy2().to(dev), {}
        policy2.save(model, model_path, g_mean=0.0, g_std=1.0, update=0, normalised=False)
    meta.pop('state', None)
    gnorm = RunningNorm(meta.get('g_mean', 0.0), meta.get('g_std', 1.0) ** 2, 1e4 if meta.get('normalised') else 1e-4)
    update = int(meta.get('update', 0))
    ref = None
    if a.mode == 'ppo' and a.ref:
        ref, _ = policy2.load(a.ref, dev)
    lr = a.lr or (3e-4 if a.mode == 'imitate' else 5e-5)
    opt = torch.optim.AdamW(model.parameters(), lr, weight_decay=1e-4 if a.mode == 'imitate' else 0.0)
    ent_coef = 0.0
    log = open(os.path.join(a.run, 'learn.log'), 'a')
    steps = 0
    waiting = []        # chunks read but not enough for an update yet: held here (written back, they would fill the
                        # servers' backlog and stop them writing: a deadlock)
    while not a.steps or steps < a.steps:
        waiting += take(chunks_dir, a.mode, MIN_ROWS[a.mode])
        if sum(len(c['action']) for c in waiting) < MIN_ROWS[a.mode]:
            time.sleep(2)
            continue
        chunks, waiting = waiting, []
        t0 = time.time()
        cat = lambda k: np.concatenate([c[k] for c in chunks])
        T = lambda x, t=torch.float32: torch.as_tensor(x).to(dev, t)
        O, C = T(cat('obs')), T(cat('cats'), torch.long)
        OF, OC, OM = T(cat('ofeat')), T(cat('ocats'), torch.long), T(cat('omask'), torch.bool)
        A = T(cat('action'), torch.long)
        if not meta.get('normalised'):
            model.set_normaliser(O[:200000], OF[:200000], OM[:200000])
            meta['normalised'] = True
        # values for the advantages: from the model now (imitation) or as the policy saw them (ppo)
        with torch.no_grad():
            if a.mode == 'imitate':
                vs = torch.cat([model(O[i:i + 8192], C[i:i + 8192], OF[i:i + 8192], OC[i:i + 8192], OM[i:i + 8192])[1]
                                for i in range(0, len(A), 8192)]).float().cpu().numpy()
            else:
                vs = cat('value').astype(np.float32)
        v_raw = vs * gnorm.std + gnorm.mean
        advs, rets, k = [], [], 0
        for c in chunks:
            n = len(c['action'])
            ad, rt = gae(c['reward'].astype(np.float32), v_raw[k:k + n], c['done'].astype(bool), v_raw[k + n - 1])
            advs.append(ad), rets.append(rt)
            k += n
        adv, ret = np.concatenate(advs), np.concatenate(rets)
        gnorm.update(ret)
        RET = T((ret - gnorm.mean) / gnorm.std)
        ADV = T(adv / gnorm.std)
        if a.mode == 'ppo':
            ADV = (ADV - ADV.mean()) / (ADV.std() + 1e-8)
            LP = T(cat('logp'))
            REF = None
            if ref is not None:     # the anchor's log-probabilities, once per update (not once per minibatch and epoch)
                with torch.no_grad(), torch.autocast('cuda', torch.bfloat16):
                    REF = torch.cat([torch.log_softmax(ref(O[i:i + 8192], C[i:i + 8192], OF[i:i + 8192], OC[i:i + 8192],
                                                           OM[i:i + 8192])[0].float(), 1) for i in range(0, len(A), 8192)])
        if a.mode == 'imitate':     # how well the model copies the AI on data it has not trained on yet
            with torch.no_grad():
                m = min(len(A), 32768)
                acc = (torch.cat([model(O[i:i + 8192], C[i:i + 8192], OF[i:i + 8192], OC[i:i + 8192], OM[i:i + 8192])[0].argmax(1)
                                  for i in range(0, m, 8192)]) == A[:m]).float().mean().item()
        stats = []
        model.train()
        for _ in range(EPOCHS if a.mode == 'ppo' else 1):
            perm = torch.randperm(len(A), device=dev)
            for i in range(0, len(perm), BATCH):
                b = perm[i:i + BATCH]
                with torch.autocast('cuda', torch.bfloat16):
                    logits, value = model(O[b], C[b], OF[b], OC[b], OM[b])
                logp = torch.log_softmax(logits.float(), 1)
                lp = logp.gather(1, A[b, None])[:, 0]
                ent = -(logp.exp() * logp).sum(1).mean()
                vl = ((value.float() - RET[b]) ** 2).mean()
                if a.mode == 'imitate':
                    w = torch.clamp(torch.exp(ADV[b] / BETA), max=W_MAX)
                    pl = -(w * lp).sum() / w.sum()
                    loss = pl + 0.5 * vl
                    clipped = kl = 0.0
                else:
                    ratio = torch.exp(lp - LP[b])
                    pl = -torch.min(ratio * ADV[b], torch.clamp(ratio, 1 - CLIP, 1 + CLIP) * ADV[b]).mean()
                    kl_w = KL0 * 0.5 ** (update / KL_HALF) if ref is not None else 0.0
                    if REF is not None:
                        kl = (logp.exp() * (logp - REF[b])).sum(1).mean()
                    else:
                        kl = torch.zeros((), device=dev)
                    loss = pl + 0.5 * vl - ent_coef * ent + kl_w * kl
                    clipped = ((ratio - 1).abs() > CLIP).float().mean().item()
                    kl = kl.item()
                opt.zero_grad()
                loss.backward()
                nn.utils.clip_grad_norm_(model.parameters(), 0.5)
                opt.step()
                stats.append((pl.item(), vl.item(), ent.item(), kl, clipped))
        model.eval()
        s = np.mean(stats, 0)
        if a.mode == 'ppo':     # hold the entropy near its target: a bonus below it, a penalty above
            target = ENT_TARGET0 + (ENT_TARGET1 - ENT_TARGET0) * min(1.0, update / ENT_STEPS)
            ent_coef = float(np.clip(ent_coef + 0.002 * (target - s[2]), -0.02, 0.02))
        update += 1
        steps += 1
        meta.update(g_mean=gnorm.mean, g_std=gnorm.std, update=update)
        policy2.save(model, model_path, **meta)
        if update % 50 == 0:
            policy2.save(model, os.path.join(a.run, 'ckpt_%05d.pt' % update), **meta)
        line = '%s %s update %d  rows %d  %.1fs  policy %.3f value %.3f entropy %.2f kl %.3f clipped %.2f ent_coef %+.4f | %s' % (
            time.strftime('%H:%M:%S'), a.mode, update, len(A), time.time() - t0, *s, ent_coef, report(chunks))
        if a.mode == 'imitate':
            line += ' | copies the AI %.1f%% (on this data before training on it)' % (100 * acc)
        print(line, flush=True)
        log.write(line + '\n')
        log.flush()


if __name__ == '__main__':
    main()
