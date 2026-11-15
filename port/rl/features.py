"""Features and actions for learning from --record files (psrec.py), from one fighter's point of view.

Directions are made relative to the line to the opponent, so a policy does not depend on where the camera is:
  the game moves a fighter at (pad angle + camera yaw) (pl_stick_dir_angle, g_cam_yaw16); a held direction is stored here as
  one of 8 sectors around the bearing to the opponent (0 = towards them), and turned back into a pad direction when played.
Angles are the game's 16-bit units (65536 = a turn); a heading a moves by (sin a, cos a) in (x, z).

Actions: 9 directions (none, then sectors 0..7) x 8 button sets (punch/kick/jump as the game's bits 0x4, 0x200, 0x400):
index = dir * 8 + buttons, 72 in all."""
import numpy as np
import psrec

TURN = 65536.0
PAD_DIRS = {0x10: 0x8000, 0x90: 0x6000, 0x80: 0x4000, 0xA0: 0x2000, 0x20: 0x0000, 0x60: 0xE000, 0x40: 0xC000, 0x50: 0xA000}
BUTTONS = (0x4, 0x200, 0x400)
N_ACTIONS = 72
N_STATE = 64          # categories of the fighter state byte 0x71BA
N_CHAR = 16
# fighter ids (g_players[i] + 4): the game's own order (the fighter files FOKER.BIN, RYOUM.BIN, ... at 0x0C180EF8, the
# per-fighter tables at 0x0C339070), checked on screen: id 1 shows "RYOMA" on the HUD
CHAR_NAMES = ('Falcon', 'Ryoma', 'Wang-Tang', 'Jack', 'Gunrock', 'Galuda', 'Ayame', 'Rouge', 'Kraken', 'Valgas', 'Valgas (final)')
BONES = range(0x148, 0x248, 0x10)


def f32(rows, side, off):
    return psrec.field(rows, side, off, '<f4').astype(np.float64)


def angle_of(dx, dz):
    return np.mod(np.arctan2(dx, dz) * TURN / (2 * np.pi), TURN)


def pad_angle(word0):
    a = np.full(len(word0), np.nan)
    for bits, ang in PAD_DIRS.items():
        a[(word0 & 0xF0) == bits] = ang
    return a


def words(rows, side):
    return np.ascontiguousarray(rows['pl'][:, side]['input']).view('<u4')


def camera_yaw(rows):
    """the recorded yaw (version 2), or for version 1 an estimate from side 1's movement: heading minus pad angle, a running
    circular median of the frames where a direction is held and the fighter moves"""
    if 'cam_yaw' in rows.dtype.names:
        return np.mod(rows['cam_yaw'].astype(np.float64), TURN)
    n = len(rows)
    x, z = f32(rows, 0, 0x20), f32(rows, 0, 0x28)
    pad = pad_angle(words(rows, 0)[:, 0])
    dx, dz = np.r_[np.diff(x), 0], np.r_[np.diff(z), 0]
    pad_next = np.r_[pad[1:], np.nan]                    # the input that made the move from t to t+1
    moving = (np.hypot(dx, dz) > 2.0) & np.isfinite(pad_next)
    est = np.where(moving, np.mod(angle_of(dx, dz) - pad_next, TURN), np.nan)
    ang = est * 2 * np.pi / TURN
    s, c = np.where(moving, np.sin(ang), 0), np.where(moving, np.cos(ang), 0)
    k = np.ones(121)
    ss, cc = np.convolve(s, k, 'same'), np.convolve(c, k, 'same')
    yaw = np.mod(np.arctan2(ss, cc) * TURN / (2 * np.pi), TURN)
    good = np.convolve(moving.astype(float), k, 'same') > 5
    idx = np.arange(n)
    if good.any():
        yaw = np.interp(idx, idx[good], np.unwrap(yaw[good] * 2 * np.pi / TURN) * TURN / (2 * np.pi))
    return np.mod(yaw, TURN)


def bearing(rows, side):
    me, op = side, 1 - side
    return angle_of(f32(rows, op, 0x20) - f32(rows, me, 0x20), f32(rows, op, 0x28) - f32(rows, me, 0x28))


def encode_actions(rows, side, yaw):
    """the action each record's input block holds (the input of the frame that led to this record)"""
    w0 = words(rows, side)[:, 0]
    pad = pad_angle(w0)
    rel = np.mod(pad + yaw - bearing(rows, side), TURN)
    sector = np.where(np.isfinite(rel), np.mod(np.round(np.nan_to_num(rel) / 8192), 8) + 1, 0).astype(np.int64)
    btn = sum(((w0 & b) != 0).astype(np.int64) << i for i, b in enumerate(BUTTONS))
    return sector * 8 + btn


def decode_action(index, bearing_angle, yaw):
    """pad bits for an action, for a fighter whose bearing to the opponent is bearing_angle, under camera yaw"""
    d, btn = divmod(int(index), 8)
    bits = 0
    if d:
        want = np.mod((d - 1) * 8192 + bearing_angle - yaw, TURN)
        bits = min(PAD_DIRS, key=lambda k: abs(((PAD_DIRS[k] - want + TURN / 2) % TURN) - TURN / 2))
    for i, b in enumerate(BUTTONS):
        if btn >> i & 1:
            bits |= b
    return bits


def observe(rows, side, yaw):
    """float features [N, D] and categories [N, 6] (own state, opponent state, own character, opponent character, and
    each character combined with whether it is in super: the moves differ by character and change in super)"""
    me, op = side, 1 - side
    br = bearing(rows, side)
    cols = []

    def rot(dx, dz):        # into the frame of the bearing to the opponent: (sideways, forwards)
        a = br * 2 * np.pi / TURN
        return dx * np.cos(a) - dz * np.sin(a), dx * np.sin(a) + dz * np.cos(a)

    for s in (me, op):
        x, y, z = f32(rows, s, 0x20), f32(rows, s, 0x24), f32(rows, s, 0x28)
        cols += [x / 500, y / 200, z / 500]
        vx, vz = rot(np.r_[0, np.diff(x)], np.r_[0, np.diff(z)])
        cols += [vx / 10, np.r_[0, np.diff(y)] / 10, vz / 10]
        face = np.mod(psrec.field(rows, s, 0x30, '<i4').astype(np.float64) - br, TURN) * 2 * np.pi / TURN
        cols += [np.sin(face), np.cos(face)]
        cols += [psrec.field(rows, s, 0x71D4, '<i2') / 240.0,
                 (psrec.field(rows, s, 0x71F1, 'u1') != 0).astype(float),          # super (power form; pl_set_power_form_on)
                 np.clip(psrec.field(rows, s, 0x71F4, '<i2'), 0, 2400) / 2400.0,    # super time left (starts at 2400 frames)
                 (psrec.field(rows, s, 0x71F3, 'u1') != 0).astype(float),
                 np.clip(psrec.field(rows, s, 0x71F8, '<i2'), 0, 2000) / 1664.0,
                 psrec.field(rows, s, 0x7230, 'u1') / 3.0]                          # stones (3: super)
        cols += [np.clip(f32(rows, s, o), -50, 50) / 10 for o in (0x50, 0x54, 0x58, 0x6C, 0x74, 0x80, 0x8C, 0x94)]
        cols += [np.clip(f32(rows, s, 0x7120), -500, 500) / 100, np.clip(f32(rows, s, 0x722C) - y, -500, 500) / 200]
        for o in BONES:
            bx, bz = rot(f32(rows, s, o) - x, f32(rows, s, o + 8) - z)
            cols += [np.clip(bx, -300, 300) / 100, np.clip(f32(rows, s, o + 4) - y, -300, 300) / 100, np.clip(bz, -300, 300) / 100]
        if s == op:     # the opponent's commands (not the fighter's own: a policy fed its own last input learns to
                        # repeat it, the 'copycat' failure of imitation, and stands still)
            w = words(rows, s)
            cols += [((w[:, 0] >> b) & 1).astype(float) for b in (2, 4, 5, 6, 7, 9, 10)]
            cols += [((w[:, 2] >> b) & 1).astype(float) for b in (2, 9, 10)]
        cols += [(psrec.field(rows, s, 0x102, 'u1') == v).astype(float) for v in (0, 2, 5, 10, 12, 13)]
    dist = np.hypot(f32(rows, op, 0x20) - f32(rows, me, 0x20), f32(rows, op, 0x28) - f32(rows, me, 0x28))
    cols += [dist / 500, rows['gs'][:, 0x21] / 99.0, rows['level'] / 31.0]
    obs = np.stack(cols, 1).astype(np.float32)
    if SENSORS:     # what is around each fighter (surroundings): after the rest, so older models extend (expand.py)
        obs = np.concatenate([obs, surroundings(rows, me), surroundings(rows, op)], 1)
    sup = lambda s: (psrec.field(rows, s, 0x71F1, 'u1') != 0).astype(np.int64)
    cats = np.stack([psrec.field(rows, me, 0x71BA, 'u1') % N_STATE, psrec.field(rows, op, 0x71BA, 'u1') % N_STATE,
                     psrec.field(rows, me, 4, 'u1') % N_CHAR, psrec.field(rows, op, 4, 'u1') % N_CHAR,
                     (psrec.field(rows, me, 4, 'u1') % N_CHAR) * 2 + sup(me),         # this character, in super or not
                     (psrec.field(rows, op, 4, 'u1') % N_CHAR) * 2 + sup(op)], 1).astype(np.int64)
    return np.nan_to_num(obs), cats


SENSORS = True        # observe() adds surroundings(); False gives the observation the first models were trained on
HISTORY = (0, 3, 8)   # the frames a sample sees: now and these many frames before


def stack(obs, frame):
    """obs at t, t-3, t-8 side by side (clamped at the start of each run of consecutive frames)"""
    n = len(obs)
    start = np.zeros(n, np.int64)
    brk = np.r_[True, np.diff(frame.astype(np.int64)) != 1]
    start = np.maximum.accumulate(np.where(brk, np.arange(n), 0))
    parts = [obs[np.maximum(np.arange(n) - h, start)] for h in HISTORY]
    return np.concatenate(parts, 1)


# ---- the objects around the fighters (version 3 records: every live object of classes 1..4) ----

K_OBJ = 32            # the nearest objects a sample sees
OBJ_FLOATS = (0x2C, 0x30, 0x34, 0x50, 0x54, 0x58, 0x6C, 0x70, 0x74)
N_OBJ_FEAT = 3 + 3 + 2 + 2 + len(OBJ_FLOATS) + 1


def _ofloat(head, off):
    return np.clip(np.nan_to_num(np.ascontiguousarray(head[..., off:off + 4]).view('<f4')[..., 0].astype(np.float64)), -1e4, 1e4)


def observe_objects(rows, objs, nobj, side, kinds):
    """the K_OBJ objects nearest the fighter, as float features [N, K, F], categories [N, K, 4] (kind from the handler,
    class, type byte +4, state byte +8) and a mask [N, K]. kinds maps handler console addresses to ids (0 = unknown).
    Positions and velocities are relative to the fighter, in the frame of its bearing to the opponent; an object's
    velocity comes from its position in the record before (the first record of a block has none)."""
    n = len(rows)
    feat = np.zeros((n, K_OBJ, N_OBJ_FEAT), np.float32)
    cats = np.zeros((n, K_OBJ, 4), np.int16)
    mask = np.zeros((n, K_OBJ), bool)
    if objs is None:
        return feat, cats, mask
    me, op = side, 1 - side
    mx, my, mz = f32(rows, me, 0x20), f32(rows, me, 0x24), f32(rows, me, 0x28)
    br = bearing(rows, side) * 2 * np.pi / TURN
    held_me = psrec.field(rows, me, 0x71CC, '<u4')
    held_op = psrec.field(rows, op, 0x71CC, '<u4')
    kind_of = np.vectorize(lambda h: kinds.get(int(h), 0), otypes=[np.int64])
    prev_addr = np.zeros(0, np.uint32)
    prev_pos = np.zeros((0, 3))
    for t in range(n):
        k = int(nobj[t])
        if k == 0:
            prev_addr = np.zeros(0, np.uint32)
            continue
        o = objs[t, :k]
        head = o['head']
        pos = np.stack([_ofloat(head, 0x20), _ofloat(head, 0x24), _ofloat(head, 0x28)], 1)
        dx, dy, dz = pos[:, 0] - mx[t], pos[:, 1] - my[t], pos[:, 2] - mz[t]
        d = np.hypot(dx, dz)
        sel = np.argsort(d)[:K_OBJ]
        m = len(sel)
        addr = o['addr']
        # velocity from the same object in the record before
        pv = pos[sel].copy()
        if len(prev_addr):
            srt = np.argsort(prev_addr)
            at = np.searchsorted(prev_addr[srt], addr[sel])
            at = np.minimum(at, len(srt) - 1)
            hit = prev_addr[srt][at] == addr[sel]
            pv[hit] = prev_pos[srt][at][hit]
        v = pos[sel] - pv
        v[np.abs(v).sum(1) > 200] = 0           # a pool slot reused by a new object
        c, s_ = np.cos(br[t]), np.sin(br[t])
        f = np.zeros((m, N_OBJ_FEAT))
        f[:, 0] = (dx[sel] * c - dz[sel] * s_) / 500
        f[:, 1] = dy[sel] / 200
        f[:, 2] = (dx[sel] * s_ + dz[sel] * c) / 500
        f[:, 3] = (v[:, 0] * c - v[:, 2] * s_) / 10
        f[:, 4] = v[:, 1] / 10
        f[:, 5] = (v[:, 0] * s_ + v[:, 2] * c) / 10
        f[:, 6] = addr[sel] == held_me[t]
        f[:, 7] = addr[sel] == held_op[t]
        f[:, 8] = d[sel] / 500
        f[:, 9] = head[sel, 1] != 0
        for j, off in enumerate(OBJ_FLOATS):
            f[:, 10 + j] = _ofloat(head[sel], off) / 10
        f[:, 10 + len(OBJ_FLOATS)] = o['tail'][sel, 0x0C] / 16.0
        feat[t, :m] = np.clip(f, -50, 50)
        cats[t, :m, 0] = kind_of(o['handler'][sel])
        cats[t, :m, 1] = head[sel, 2] % 8
        cats[t, :m, 2] = head[sel, 4] % 64
        cats[t, :m, 3] = head[sel, 8] % 64
        mask[t, :m] = True
        prev_addr, prev_pos = addr.copy(), pos
    return feat, cats, mask


def fighter_extra(rows, side):
    """what the object list adds to a fighter: does it hold an item (and the item's kind byte), its stones"""
    cols = []
    for s in (side, 1 - side):
        cols += [(psrec.field(rows, s, 0x71CC, '<u4') != 0).astype(np.float32),
                 psrec.field(rows, s, 0x7230, 'u1').astype(np.float32) / 3.0]
    return np.stack(cols, 1)


# ---- what is around each fighter: the stage's own collision volumes (boxes and cylinders, the same the hit system tests
# the fighters and objects against: tables 0x0C33EB20 / 0x0C33EAA0 by stage, counts at 0x0C33EC20). The stage number only
# picks the geometry; the policy sees distances and heights around the fighters, in the frame of the bearing to the
# opponent, so the same situation reads the same on any stage.

import os
import struct

_GEOM = {}
SENSE_DIRS = 8
WALL_HEIGHTS = (60.0, 160.0)
WALL_MAX = 800.0
GROUND_RADII = (120.0, 300.0)
N_SENSE = SENSE_DIRS * len(WALL_HEIGHTS) + SENSE_DIRS * len(GROUND_RADII) + 1 + 2 + 2


def _binary():
    return os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', '1ST_READ.BIN')


def stage_geometry(stage):
    """the stage's volumes as boxes (min, max corners) [n, 2, 3] with their 2-byte kinds [n, 2]: the cylinders go in as the
    boxes around them"""
    if stage in _GEOM:
        return _GEOM[stage]
    d = open(_binary(), 'rb').read()
    base = 0x0C010000
    u32 = lambda a: struct.unpack('<I', d[a - base:a - base + 4])[0]
    nc, nb, ns = d[0x0C33EC20 - base + stage * 3:0x0C33EC20 - base + stage * 3 + 3]
    lo, hi, kind = [], [], []
    bx, bid = u32(0x0C33EB20 + 4 * stage), u32(0x0C33EB60 + 4 * stage)
    for i in range(nb):
        cx, cy, cz, hx, hy, hz = struct.unpack('<6f', d[bx - base + 24 * i:bx - base + 24 * i + 24])
        lo.append((cx - hx, cy - hy, cz - hz))
        hi.append((cx + hx, cy + hy, cz + hz))
        kind.append(tuple(d[bid - base + 2 * i:bid - base + 2 * i + 2]))
    cy_, cid = u32(0x0C33EAA0 + 4 * stage), u32(0x0C33EAE0 + 4 * stage)
    for i in range(nc):
        cx, cyy, cz, r, hh = struct.unpack('<5f', d[cy_ - base + 20 * i:cy_ - base + 20 * i + 20])
        lo.append((cx - r, cyy - hh, cz - r))
        hi.append((cx + r, cyy + hh, cz + r))
        kind.append(tuple(d[cid - base + 2 * i:cid - base + 2 * i + 2]))
    g = (np.array(lo, np.float64).reshape(-1, 3), np.array(hi, np.float64).reshape(-1, 3), np.array(kind, np.float64).reshape(-1, 2))
    _GEOM[stage] = g
    return g


def _ray(o, dxz, lo, hi):
    """distance along the horizontal direction dxz [N, D, 2] from o [N, D, 3] to the first volume, at most WALL_MAX"""
    ox, oy, oz = o[..., 0, None], o[..., 1, None], o[..., 2, None]
    dx, dz = dxz[..., 0, None], dxz[..., 1, None]
    inside_y = (oy >= lo[:, 1]) & (oy <= hi[:, 1])
    with np.errstate(divide='ignore', invalid='ignore'):
        tx1, tx2 = (lo[:, 0] - ox) / dx, (hi[:, 0] - ox) / dx
        tz1, tz2 = (lo[:, 2] - oz) / dz, (hi[:, 2] - oz) / dz
    tx1 = np.where(dx == 0, np.where((ox >= lo[:, 0]) & (ox <= hi[:, 0]), -np.inf, np.inf), tx1)
    tx2 = np.where(dx == 0, np.where((ox >= lo[:, 0]) & (ox <= hi[:, 0]), np.inf, -np.inf), tx2)
    tz1 = np.where(dz == 0, np.where((oz >= lo[:, 2]) & (oz <= hi[:, 2]), -np.inf, np.inf), tz1)
    tz2 = np.where(dz == 0, np.where((oz >= lo[:, 2]) & (oz <= hi[:, 2]), np.inf, -np.inf), tz2)
    tnear = np.maximum(np.minimum(tx1, tx2), np.minimum(tz1, tz2))
    tfar = np.minimum(np.maximum(tx1, tx2), np.maximum(tz1, tz2))
    hit = inside_y & (tnear <= tfar) & (tfar > 0)
    t = np.where(hit, np.maximum(tnear, 0.0), WALL_MAX)
    return np.minimum(t.min(-1), WALL_MAX)


def _columns(px, pz, y, lo, hi, kind):
    """for points (px, pz) [N, P] and the fighter height y [N, 1]: the floor under each point (the highest volume top at
    most a step above y) relative to y, the ceiling over it (the lowest volume bottom above y + 100) relative to y, and the
    ceiling's kind"""
    inx = (px[..., None] >= lo[:, 0]) & (px[..., None] <= hi[:, 0]) & (pz[..., None] >= lo[:, 2]) & (pz[..., None] <= hi[:, 2])
    top, bot = hi[:, 1], lo[:, 1]
    yy = y[..., None]
    floor_ok = inx & (top <= yy + 80)
    floor = np.where(floor_ok, top, -np.inf).max(-1)
    floor = np.where(np.isfinite(floor), floor - y, -400.0)
    ceil_ok = inx & (bot >= yy + 100)
    cb = np.where(ceil_ok, bot, np.inf)
    j = cb.argmin(-1)
    ceil = np.take_along_axis(cb, j[..., None], -1)[..., 0]
    has = np.isfinite(ceil)
    ceil = np.where(has, ceil - y, 1200.0)
    ck = np.where(has[..., None], kind[j], 0.0)
    return floor, ceil, ck


def surroundings(rows, side):
    """sensors around one fighter [N, N_SENSE]: wall distances in 8 directions at two heights, the floor at 8 points near
    and 8 farther, the floor under the fighter, the ceiling over and just ahead of it, and the ceiling's kind"""
    n = len(rows)
    out = np.zeros((n, N_SENSE), np.float32)
    stages = rows['gs'][:, 0x25]
    x, y, z = f32(rows, side, 0x20), f32(rows, side, 0x24), f32(rows, side, 0x28)
    br = bearing(rows, side) * 2 * np.pi / TURN
    ang = br[:, None] + np.arange(SENSE_DIRS) * (2 * np.pi / SENSE_DIRS)
    dxz = np.stack([np.sin(ang), np.cos(ang)], -1)            # a heading a moves by (sin a, cos a)
    for st in np.unique(stages):
        m = stages == st
        lo, hi, kind = stage_geometry(int(st))
        if len(lo) == 0:
            continue
        cols = []
        for h in WALL_HEIGHTS:
            o = np.stack([np.repeat(x[m, None], SENSE_DIRS, 1), np.repeat(y[m, None] + h, SENSE_DIRS, 1),
                          np.repeat(z[m, None], SENSE_DIRS, 1)], -1)
            cols.append(_ray(o, dxz[m], lo, hi) / WALL_MAX)
        for r in GROUND_RADII:
            fl, _, _ = _columns(x[m, None] + r * dxz[m, :, 0], z[m, None] + r * dxz[m, :, 1], y[m, None], lo, hi, kind)
            cols.append(np.clip(fl, -400, 100) / 200)
        px = np.stack([x[m], x[m] + 150 * dxz[m, 0, 0]], 1)
        pz = np.stack([z[m], z[m] + 150 * dxz[m, 0, 1]], 1)
        fl, ce, ck = _columns(px, pz, y[m, None], lo, hi, kind)
        cols.append(np.clip(fl[:, :1], -400, 100) / 200)
        cols.append(np.clip(ce, 0, 1200) / 600)
        cols.append(ck[:, 0, :] / 16.0)
        out[m] = np.concatenate(cols, 1)
    return out
