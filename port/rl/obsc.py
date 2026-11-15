"""The C observation (obs.c, built as libpsobs.so) from Python: the same numbers the port computes live.

    python3 port/rl/obsc.py FILE.psrec [SIDE]     observe a recording (format 4) and print a summary

As a module: Obs(kinds) observes records (bytes); geometry and attack records come from 1ST_READ.BIN."""
import ctypes
import os
import subprocess
import sys
import numpy as np

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.normpath(os.path.join(HERE, '..', '..'))
LIB = os.path.join(HERE, 'libpsobs.so')

FRAME, HISTORY, CATS, K, OF, GEOM_MAX, ACTIONS = 332, 3, 8, 32, 25, 64, 72
OBS = FRAME * HISTORY
REC_FIXED, OBJ_SIZE = 3024, 648


def build():
    src = os.path.join(HERE, 'obs.c')
    if not os.path.exists(LIB) or os.path.getmtime(LIB) < os.path.getmtime(src):
        subprocess.check_call(['gcc', '-O2', '-shared', '-fPIC', '-o', LIB, src, '-lm'])


class Geom(ctypes.Structure):
    _fields_ = [('n', ctypes.c_int), ('lo', (ctypes.c_float * 3) * GEOM_MAX), ('hi', (ctypes.c_float * 3) * GEOM_MAX),
                ('kind', (ctypes.c_float * 2) * GEOM_MAX)]


class Out(ctypes.Structure):
    _fields_ = [('obs', ctypes.c_float * OBS), ('cats', ctypes.c_int16 * CATS), ('ofeat', (ctypes.c_float * OF) * K),
                ('ocats', (ctypes.c_int16 * 4) * K), ('omask', ctypes.c_uint8 * K), ('bearing', ctypes.c_float),
                ('yaw', ctypes.c_float)]


class Obs:
    def __init__(self, kinds=()):
        build()
        self.lib = ctypes.CDLL(LIB)
        sizes = (ctypes.c_int * 9)()
        self.lib.pso_sizes(sizes)
        want = [FRAME, HISTORY, CATS, K, OF, GEOM_MAX, ACTIONS, ctypes.sizeof(Out), ctypes.sizeof(Geom)]
        if list(sizes) != want:
            raise RuntimeError('obs.c and obsc.py disagree on sizes: C %s, Python %s' % (list(sizes), want))
        self.lib.pso_observe.restype = ctypes.c_int
        self.lib.pso_decode.restype = ctypes.c_uint32
        self.lib.pso_encode.restype = ctypes.c_int
        self.lib.pso_decode.argtypes = [ctypes.c_int, ctypes.c_float, ctypes.c_float]
        self.lib.pso_encode.argtypes = [ctypes.c_uint32, ctypes.c_float, ctypes.c_float]
        self.mem = open(os.path.join(REPO, '1ST_READ.BIN'), 'rb').read()
        self.mem_buf = ctypes.create_string_buffer(self.mem, len(self.mem))
        self.geoms = (Geom * 12)()
        for st in range(12):
            self.lib.pso_stage_geometry(self.mem_buf, ctypes.c_uint32(0x0C010000), ctypes.c_uint32(len(self.mem)), st,
                                        ctypes.byref(self.geoms[st]))
        self.set_kinds(kinds)
        self.out = Out()

    def set_kinds(self, kinds):
        self.kinds = sorted(int(k) for k in kinds)
        self.kind_arr = (ctypes.c_uint32 * max(1, len(self.kinds)))(*self.kinds)

    def observe(self, recs, side):
        """recs: up to 10 consecutive records (bytes), oldest first; returns a pso_out (numpy views)"""
        n = len(recs)
        bufs = [ctypes.create_string_buffer(r, len(r)) for r in recs]
        ptrs = (ctypes.c_char_p * n)(*[ctypes.cast(b, ctypes.c_char_p) for b in bufs])
        lens = (ctypes.c_uint32 * n)(*[len(r) for r in recs])
        rc = self.lib.pso_observe(ptrs, lens, n, side, self.kind_arr, len(self.kinds), self.geoms, 12, self.mem_buf,
                                  ctypes.c_uint32(0x0C010000), ctypes.c_uint32(len(self.mem)), ctypes.byref(self.out))
        if rc:
            raise ValueError('malformed record')
        o = self.out
        return dict(obs=np.ctypeslib.as_array(o.obs).copy(), cats=np.ctypeslib.as_array(o.cats).copy(),
                    ofeat=np.ctypeslib.as_array(o.ofeat).copy(), ocats=np.ctypeslib.as_array(o.ocats).copy(),
                    omask=np.ctypeslib.as_array(o.omask).copy(), bearing=o.bearing, yaw=o.yaw)

    def decode(self, action, bearing, yaw):
        return self.lib.pso_decode(int(action), float(bearing), float(yaw))

    def encode(self, held, bearing, yaw):
        return self.lib.pso_encode(int(held), float(bearing), float(yaw))


def records(path):
    """the records of a format-4 file, as bytes"""
    raw = open(path, 'rb').read()
    assert raw[:6] == b'PSREC4', 'not a format-4 recording'
    size, hsize = int.from_bytes(raw[8:12], 'little'), int.from_bytes(raw[12:16], 'little')
    assert size == REC_FIXED, size
    pos, out = hsize, []
    while pos + size + 4 <= len(raw):
        n = int.from_bytes(raw[pos + size:pos + size + 2], 'little')
        end = pos + size + 4 + n * OBJ_SIZE
        if end > len(raw):
            break
        out.append(raw[pos:end])
        pos = end
    return out


if __name__ == '__main__':
    import time
    recs = records(sys.argv[1])
    side = int(sys.argv[2]) - 1 if len(sys.argv) > 2 else 0
    ob = Obs()
    t = time.time()
    rows = [ob.observe(recs[max(0, i - 9):i + 1], side) for i in range(len(recs))]
    dt = (time.time() - t) / len(recs)
    O = np.stack([r['obs'] for r in rows])
    print('%d records, %.0f us per observation, obs %s, finite %s' % (len(recs), dt * 1e6, O.shape, np.isfinite(O).all()))
    print('objects per frame %.1f' % np.mean([r['omask'].sum() for r in rows]))
    f = O[:, :FRAME]
    print('features never changing (of %d in a frame): %d' % (FRAME, int((f.std(0) == 0).sum())))

