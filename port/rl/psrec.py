"""Reader for the port's --record files (port/runtime/record.c): one record per game frame of a fight.

    python3 port/rl/psrec.py FILE...      a summary of each file: frames, rounds, life, damage, wins, Perfects

As a module: load(path) returns a numpy structured array, one row per record."""
import sys
import numpy as np

HDR = 32


def make_dtype(ver, a, b):
    """the fixed part of a record (versions 2 and 3 share it; 3 adds the objects after it)"""
    pl = np.dtype([('input', 'u1', 36), ('head', 'u1', int(a)), ('tail', 'u1', int(b))])
    head = [('frame', '<u4'), ('scene', 'u1'), ('mode', 'u1'), ('sub', 'u1'), ('level', 'u1'), ('gs', 'u1', 96)]
    if ver == b'PSREC2':
        head += [('cam_yaw', '<i4'), ('extra', 'u1', 28)]
    return np.dtype(head + [('pl', pl, 2)])


OBJ_HEAD = 0x120
MAX_OBJ = 96


def obj_dtype(size):
    return np.dtype([('addr', '<u4'), ('handler', '<u4'), ('head', 'u1', OBJ_HEAD), ('tail', 'u1', size - 8 - OBJ_HEAD)])


def parse(raw, want_objects=False):
    """rows (and, for version 3 with want_objects, objects [N, MAX_OBJ] and their counts [N]) from a file's bytes"""
    ver = raw[:6]
    if ver not in (b'PSREC1', b'PSREC2', b'PSREC3'):
        raise ValueError('not a --record file')
    size, hsize, a, b, osize = np.frombuffer(raw, '<u4', 5, 8)
    dt = make_dtype(b'PSREC2' if ver == b'PSREC3' else ver, a, b)
    assert dt.itemsize == size, (dt.itemsize, size)
    if ver != b'PSREC3':
        rows = np.frombuffer(raw, dt, (len(raw) - hsize) // size, hsize)
        return (rows, None, None) if want_objects else rows
    odt = obj_dtype(int(osize))
    offs, counts = [], []
    pos, end = int(hsize), len(raw)
    while pos + size + 4 <= end:
        n = int.from_bytes(raw[pos + size:pos + size + 2], 'little')
        nxt = pos + size + 4 + n * int(osize)
        if nxt > end:
            break
        offs.append(pos)
        counts.append(n)
        pos = nxt
    buf = np.frombuffer(raw, np.uint8)
    idx = np.asarray(offs, np.int64)[:, None] + np.arange(size)
    rows = buf[idx].copy().view(dt).reshape(-1)
    if not want_objects:
        return rows
    objs = np.zeros((len(offs), MAX_OBJ), odt)
    flat = objs.view(np.uint8).reshape(len(offs), MAX_OBJ * int(osize))
    for i, (o, n) in enumerate(zip(offs, counts)):
        k = min(n, MAX_OBJ) * int(osize)
        flat[i, :k] = buf[o + size + 4:o + size + 4 + k]
    return rows, objs, np.minimum(np.asarray(counts), MAX_OBJ)


class Index:
    """a version 3 file read lazily: the fixed part of every record (rows) at once, the objects block by block (objects).
    Files with all their objects can be gigabytes."""

    def __init__(self, path):
        import mmap
        self.f = open(path, 'rb')
        self.buf = mmap.mmap(self.f.fileno(), 0, access=mmap.ACCESS_READ)
        raw = self.buf
        ver = raw[:6]
        size, hsize, a, b, osize = np.frombuffer(raw[:32], '<u4', 5, 8)
        self.size, self.osize = int(size), int(osize)
        self.dt = make_dtype(b'PSREC2' if ver == b'PSREC3' else ver, a, b)
        self.v3 = ver == b'PSREC3'
        offs, counts = [], []
        pos, end = int(hsize), len(raw)
        step = self.size + 4 if self.v3 else self.size
        while pos + step <= end:
            n = int.from_bytes(raw[pos + self.size:pos + self.size + 2], 'little') if self.v3 else 0
            nxt = pos + step + n * self.osize
            if nxt > end:
                break
            offs.append(pos)
            counts.append(n)
            pos = nxt
        self.offs = np.asarray(offs, np.int64)
        self.counts = np.minimum(np.asarray(counts, np.int64), MAX_OBJ)
        mem = np.frombuffer(raw, np.uint8)
        self.rows = mem[self.offs[:, None] + np.arange(self.size)].view(self.dt).reshape(-1)

    def __len__(self):
        return len(self.offs)

    def objects(self, i0, i1):
        """objects [i1-i0, MAX_OBJ] and their counts for records i0..i1 (None for files without objects)"""
        if not self.v3:
            return None, None
        odt = obj_dtype(self.osize)
        n = i1 - i0
        objs = np.zeros((n, MAX_OBJ), odt)
        flat = objs.view(np.uint8).reshape(n, MAX_OBJ * self.osize)
        mem = np.frombuffer(self.buf, np.uint8)
        for j in range(n):
            o, k = self.offs[i0 + j], self.counts[i0 + j] * self.osize
            flat[j, :k] = mem[o + self.size + 4:o + self.size + 4 + k]
        return objs, self.counts[i0:i1]


def load(path, want_objects=False):
    return parse(open(path, 'rb').read(), want_objects)


def field(rows, side, off, typ):
    """a fighter field by its offset in the fighter struct (the snapshot holds 0..A and 0x7100..0x7100+B)"""
    t = np.dtype(typ)
    head = rows['pl'][:, side]['head']
    if off + t.itemsize <= head.shape[1]:
        buf = head[:, off:off + t.itemsize]
    else:
        buf = rows['pl'][:, side]['tail'][:, off - 0x7100:off - 0x7100 + t.itemsize]
    return np.ascontiguousarray(buf).view(t).reshape(-1)


def life(rows, side):
    return field(rows, side, 0x71D4, '<i2')


def summary(path):
    r, objs, nobj = load(path, True)
    if nobj is not None:
        print('  objects per frame: mean %.1f, max %d; kinds (handlers) seen: %d' % (nobj.mean(), nobj.max(),
              len(np.unique(np.concatenate([objs[i, :n]['handler'] for i, n in enumerate(nobj)])))))
    print('%s: %d records, frames %d..%d, %.1f min of fight' % (path, len(r), r['frame'][0], r['frame'][-1], len(r) / 3600))
    gaps = np.flatnonzero(np.diff(r['frame'].astype(np.int64)) != 1)
    print('  gaps in the frame numbers: %d (between fights)' % len(gaps))
    print('  computer level:', sorted(set(r['level'].tolist())))
    l0, l1 = life(r, 0), life(r, 1)
    fight = r['mode'] == 3
    print('  life side 1: %d..%d   side 2: %d..%d' % (l0.min(), l0.max(), l1.min(), l1.max()))
    # rounds: a run of mode-3 frames; the round ends when one life reaches 0 (or time)
    starts = np.flatnonzero(fight & ~np.r_[False, fight[:-1]])
    ends = np.flatnonzero(fight & ~np.r_[fight[1:], False])
    won = lost = perfect = 0
    for s, e in zip(starts, ends):
        taken = int(l0[s] - l0[e])
        dealt = int(l1[s] - l1[e])
        res = 'won' if l1[e] <= 0 < l0[e] else 'lost' if l0[e] <= 0 < l1[e] else 'time/draw'
        won += res == 'won'
        lost += res == 'lost'
        perfect += res == 'won' and l0[s:e + 1].min() == l0[s]
        print('  round at record %6d: %5d frames, side 1 took %3d, dealt %3d, %s%s' % (
            s, e - s + 1, taken, dealt, res, ' (Perfect)' if res == 'won' and l0[s:e + 1].min() == l0[s] else ''))
    print('  rounds won %d, lost %d, Perfect %d' % (won, lost, perfect))
    inp = r['pl'][:, 0]['input']
    print('  side 1 input frames with any command: %.0f%%' % (100 * (inp[fight].any(1)).mean() if fight.any() else 0))


if __name__ == '__main__':
    for p in sys.argv[1:]:
        summary(p)
