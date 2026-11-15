"""Give a model the observation's newer features (features.SENSORS: the surroundings), keeping what it learned.

    python3 port/rl/expand.py OLD.pt NEW.pt RECORDING.psrec[:SIDE]

The new inputs are added after each history slot's old ones (features.stack puts the slots side by side), with zero
weights, so the model acts exactly as before until training uses them; their normalisation comes from the recording."""
import sys
import numpy as np
import torch
import features as F
import psrec


def main():
    old_path, new_path, rec = sys.argv[1], sys.argv[2], sys.argv[3]
    side = int(rec.rsplit(':', 1)[1]) - 1 if rec.rsplit(':', 1)[-1].isdigit() else 0
    rec = rec.rsplit(':', 1)[0] if rec.rsplit(':', 1)[-1].isdigit() else rec
    ck = torch.load(old_path, map_location='cpu', weights_only=False)
    r = psrec.Index(rec).rows[::7]
    F.SENSORS = False
    old, _ = F.observe(r, side, F.camera_yaw(r))
    F.SENSORS = True
    new, _ = F.observe(r, side, F.camera_yaw(r))
    d_old, d_new, k = old.shape[1], new.shape[1], len(F.HISTORY)
    assert ck['n_obs'] == d_old * k, (ck['n_obs'], d_old, k)
    add = new[:, d_old:]
    mean_add, std_add = add.mean(0), add.std(0) + 1e-3
    mean = np.concatenate([np.concatenate([ck['mean'][i * d_old:(i + 1) * d_old], mean_add]) for i in range(k)])
    std = np.concatenate([np.concatenate([ck['std'][i * d_old:(i + 1) * d_old], std_add]) for i in range(k)])
    w = ck['state']['fighter.0.weight']               # [256, n_obs + extras]
    old_in = ck['n_obs']
    cols = []
    for i in range(k):
        cols += [w[:, i * d_old:(i + 1) * d_old], torch.zeros(w.shape[0], d_new - d_old)]
    cols.append(w[:, old_in:])
    ck['state']['fighter.0.weight'] = torch.cat(cols, 1)
    ck['n_obs'] = d_new * k
    ck['mean'], ck['std'] = mean.astype(np.float32), std.astype(np.float32)
    torch.save(ck, new_path)
    print('%s: %d -> %d observation inputs; saved %s' % (old_path, d_old * k, d_new * k, new_path))


if __name__ == '__main__':
    main()
