/* obs.c: the policy's observation (obs.h). Plain C, no allocation; the port links it, obsc.py loads it. */
#include "obs.h"

#include <math.h>
#include <string.h>

#define TURN 65536.0f
#define PI2 6.28318530718f

static float rf(const uint8_t *p) { float v; memcpy(&v, p, 4); return isfinite(v) ? v : 0.0f; }
static int32_t ri(const uint8_t *p) { int32_t v; memcpy(&v, p, 4); return v; }
static uint32_t ru(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return v; }
static int16_t rs(const uint8_t *p) { int16_t v; memcpy(&v, p, 2); return v; }
static uint16_t rw(const uint8_t *p) { uint16_t v; memcpy(&v, p, 2); return v; }
static float clampf(float v, float lo, float hi) { return v < lo ? lo : v > hi ? hi : v; }

/* a fighter field by its offset in the fighter struct: the record holds 0..0x300 and 0x7100..0x7300 */
static const uint8_t *fld(const uint8_t *rec, int i, uint32_t off)
{
    static const uint8_t zero[8];
    const uint8_t *p = rec + PSO_PLAYER_AT(i);
    if (off + 4 <= 0x300)
        return p + 36 + off;
    if (off >= 0x7100 && off + 4 <= 0x7300)
        return p + 36 + 0x300 + (off - 0x7100);
    return zero;
}
#define F32(rec, i, off) rf(fld(rec, i, off))
#define U8(rec, i, off) (*fld(rec, i, off))

static float bearing_of(const uint8_t *rec, int side)
{
    float dx = F32(rec, 1 - side, 0x20) - F32(rec, side, 0x20);
    float dz = F32(rec, 1 - side, 0x28) - F32(rec, side, 0x28);
    float a = atan2f(dx, dz) * (TURN / PI2);
    return a < 0 ? a + TURN : a;
}

typedef struct {
    float c, s, x, y, z;          /* the observer's frame: rotation by its bearing, its position */
} frame_t;

static void to_frame(const frame_t *f, float wx, float wy, float wz, float *out)
{
    float dx = wx - f->x, dz = wz - f->z;
    out[0] = dx * f->c - dz * f->s;
    out[1] = wy - f->y;
    out[2] = dx * f->s + dz * f->c;
}

static void rot2(const frame_t *f, float dx, float dz, float *sx, float *fz)
{
    *sx = dx * f->c - dz * f->s;
    *fz = dx * f->s + dz * f->c;
}

/* ---- the stage's collision volumes and the sensors ---- */

void pso_stage_geometry(const uint8_t *mem, uint32_t base, uint32_t len, int stage, pso_geom *g)
{
#define AT(a) ((a) >= base && (a) - base + 4 <= len ? mem + ((a) - base) : 0)
    g->n = 0;
    const uint8_t *cnt = AT(0x0C33EC20u + (uint32_t)stage * 3);
    if (!cnt || stage < 0 || stage > 11)
        return;
    int nc = cnt[0], nb = cnt[1];
    const uint8_t *pb = AT(0x0C33EB20u + 4u * stage), *pbi = AT(0x0C33EB60u + 4u * stage);
    const uint8_t *pc = AT(0x0C33EAA0u + 4u * stage), *pci = AT(0x0C33EAE0u + 4u * stage);
    if (!pb || !pbi || !pc || !pci)
        return;
    uint32_t bx = ru(pb), bid = ru(pbi), cy = ru(pc), cid = ru(pci);
    for (int i = 0; i < nb && g->n < PSO_GEOM_MAX; i++) {
        const uint8_t *v = AT(bx + 24u * i), *k = AT(bid + 2u * i);
        if (!v || !k || !AT(bx + 24u * i + 20))
            break;
        float cx = rf(v), cyy = rf(v + 4), cz = rf(v + 8), hx = rf(v + 12), hy = rf(v + 16), hz = rf(v + 20);
        g->lo[g->n][0] = cx - hx, g->lo[g->n][1] = cyy - hy, g->lo[g->n][2] = cz - hz;
        g->hi[g->n][0] = cx + hx, g->hi[g->n][1] = cyy + hy, g->hi[g->n][2] = cz + hz;
        g->kind[g->n][0] = k[0], g->kind[g->n][1] = k[1];
        g->n++;
    }
    for (int i = 0; i < nc && g->n < PSO_GEOM_MAX; i++) {
        const uint8_t *v = AT(cy + 20u * i), *k = AT(cid + 2u * i);
        if (!v || !k || !AT(cy + 20u * i + 16))
            break;
        float cx = rf(v), cyy = rf(v + 4), cz = rf(v + 8), r = rf(v + 12), hh = rf(v + 16);
        g->lo[g->n][0] = cx - r, g->lo[g->n][1] = cyy - hh, g->lo[g->n][2] = cz - r;
        g->hi[g->n][0] = cx + r, g->hi[g->n][1] = cyy + hh, g->hi[g->n][2] = cz + r;
        g->kind[g->n][0] = k[0], g->kind[g->n][1] = k[1];
        g->n++;
    }
#undef AT
}

#define WALL_MAX 800.0f

static float ray(const pso_geom *g, float ox, float oy, float oz, float dx, float dz)
{
    float best = WALL_MAX;
    for (int b = 0; b < g->n; b++) {
        if (oy < g->lo[b][1] || oy > g->hi[b][1])
            continue;
        float t0 = -INFINITY, t1 = INFINITY;
        float o[2] = {ox, oz}, d[2] = {dx, dz}, lo[2] = {g->lo[b][0], g->lo[b][2]}, hi[2] = {g->hi[b][0], g->hi[b][2]};
        int miss = 0;
        for (int a = 0; a < 2; a++) {
            if (d[a] == 0.0f) {
                if (o[a] < lo[a] || o[a] > hi[a])
                    miss = 1;
                continue;
            }
            float ta = (lo[a] - o[a]) / d[a], tb = (hi[a] - o[a]) / d[a];
            if (ta > tb) {
                float t = ta;
                ta = tb;
                tb = t;
            }
            if (ta > t0)
                t0 = ta;
            if (tb < t1)
                t1 = tb;
        }
        if (miss || t0 > t1 || t1 <= 0)
            continue;
        float t = t0 > 0 ? t0 : 0;
        if (t < best)
            best = t;
    }
    return best;
}

/* the floor under (px, pz): the highest top at most a step above y, relative to y (-400: none); the ceiling over it:
   the lowest bottom above y + 100, relative to y (1200: none), and its kind */
static void column(const pso_geom *g, float px, float pz, float y, float *floor_, float *ceil_, float *k0, float *k1)
{
    float fl = -INFINITY, ce = INFINITY;
    int cb = -1;
    for (int b = 0; b < g->n; b++) {
        if (px < g->lo[b][0] || px > g->hi[b][0] || pz < g->lo[b][2] || pz > g->hi[b][2])
            continue;
        if (g->hi[b][1] <= y + 80 && g->hi[b][1] > fl)
            fl = g->hi[b][1];
        if (g->lo[b][1] >= y + 100 && g->lo[b][1] < ce)
            ce = g->lo[b][1], cb = b;
    }
    *floor_ = isfinite(fl) ? fl - y : -400.0f;
    *ceil_ = isfinite(ce) ? ce - y : 1200.0f;
    *k0 = cb >= 0 ? g->kind[cb][0] : 0;
    *k1 = cb >= 0 ? g->kind[cb][1] : 0;
}

static void sense(const pso_geom *g, float x, float y, float z, float bearing_rad, float *out)
{
    int k = 0;
    float d[8][2];
    for (int i = 0; i < 8; i++) {
        float a = bearing_rad + i * (PI2 / 8);
        d[i][0] = sinf(a);
        d[i][1] = cosf(a);
    }
    static const float heights[2] = {60.0f, 160.0f};
    for (int h = 0; h < 2; h++)
        for (int i = 0; i < 8; i++)
            out[k++] = (g ? ray(g, x, y + heights[h], z, d[i][0], d[i][1]) : WALL_MAX) / WALL_MAX;
    static const float radii[2] = {120.0f, 300.0f};
    float fl, ce, k0, k1;
    for (int r = 0; r < 2; r++)
        for (int i = 0; i < 8; i++) {
            if (g)
                column(g, x + radii[r] * d[i][0], z + radii[r] * d[i][1], y, &fl, &ce, &k0, &k1);
            else
                fl = -400;
            out[k++] = clampf(fl, -400, 100) / 200;
        }
    float fl0 = -400, ce0 = 1200, ce1 = 1200, kk0 = 0, kk1 = 0;
    if (g) {
        column(g, x, z, y, &fl0, &ce0, &kk0, &kk1);
        float t0, t1;
        column(g, x + 150 * d[0][0], z + 150 * d[0][1], y, &fl, &ce1, &t0, &t1);
    }
    out[k++] = clampf(fl0, -400, 100) / 200;
    out[k++] = clampf(ce0, 0, 1200) / 600;
    out[k++] = clampf(ce1, 0, 1200) / 600;
    out[k++] = kk0 / 16.0f;
    out[k++] = kk1 / 16.0f;
}

/* ---- one fighter's block ---- */

static const uint8_t *g_mem;
static uint32_t g_mem_base, g_mem_len;

static int attack_power(uint32_t p)
{
    if (!g_mem || p < g_mem_base || p - g_mem_base + 2 > g_mem_len)
        return 0;
    return g_mem[p - g_mem_base + 1];
}

static int fighter(const uint8_t *rec, const uint8_t *prev, int s, int me, const frame_t *fr, float *o)
{
    float *o0 = o;
    (void)o0;
    int k = 0;
    float x = F32(rec, s, 0x20), y = F32(rec, s, 0x24), z = F32(rec, s, 0x28), v[3];
    if (s == me)
        o[k++] = 0, o[k++] = 0, o[k++] = 0;
    else {
        to_frame(fr, x, y, z, v);
        o[k++] = v[0] / 500, o[k++] = v[1] / 200, o[k++] = v[2] / 500;
    }
    float vx = 0, vy = 0, vz = 0;
    if (prev) {
        vx = x - F32(prev, s, 0x20), vy = y - F32(prev, s, 0x24), vz = z - F32(prev, s, 0x28);
        if (fabsf(vx) + fabsf(vy) + fabsf(vz) > 300)
            vx = vy = vz = 0;
    }
    float sx, fz;
    rot2(fr, vx, vz, &sx, &fz);
    o[k++] = sx / 10, o[k++] = vy / 10, o[k++] = fz / 10;
    float bear = atan2f(fr->s, fr->c);             /* the observer's bearing, radians (c = cos, s = sin) */
    float face = ri(fld(rec, s, 0x30)) * (PI2 / TURN) - bear;
    o[k++] = sinf(face), o[k++] = cosf(face);
    o[k++] = rs(fld(rec, s, 0x71D4)) / 240.0f;
    o[k++] = U8(rec, s, 0x71F1) != 0;
    o[k++] = clampf(rs(fld(rec, s, 0x71F4)), 0, 2400) / 2400.0f;
    o[k++] = U8(rec, s, 0x71F3) != 0;
    o[k++] = clampf(rs(fld(rec, s, 0x71F8)), 0, 2000) / 1664.0f;
    o[k++] = U8(rec, s, 0x7230) / 3.0f;
    static const uint16_t mf[8] = {0x50, 0x54, 0x58, 0x6C, 0x74, 0x80, 0x8C, 0x94};
    for (int i = 0; i < 8; i++)
        o[k++] = clampf(F32(rec, s, mf[i]), -50, 50) / 10;
    o[k++] = clampf(F32(rec, s, 0x7120), -500, 500) / 100;
    o[k++] = clampf(F32(rec, s, 0x722C), -500, 500) / 200;
    /* attack spheres (+0x148, 4 x {x, y, z, r}): live when an attack set is on (+0x101), not suppressed (+0x105) */
    int atk_on = U8(rec, s, 0x101) != 0 && U8(rec, s, 0x105) == 0;
    for (int i = 0; i < 4; i++) {
        uint32_t a = 0x148 + 16 * i;
        float r = F32(rec, s, a + 12);
        to_frame(fr, F32(rec, s, a), F32(rec, s, a + 4), F32(rec, s, a + 8), v);
        o[k++] = clampf(v[0], -600, 600) / 100, o[k++] = clampf(v[1], -600, 600) / 100, o[k++] = clampf(v[2], -600, 600) / 100;
        o[k++] = clampf(r, 0, 300) / 100;
        o[k++] = atk_on && r != 0;
    }
    o[k++] = atk_on;
    o[k++] = attack_power(ru(fld(rec, s, 0xF4))) / 50.0f;
    o[k++] = (int8_t)U8(rec, s, 0x105) / 30.0f;
    /* hurt spheres (+0x188 + 16 j, j = 1..11): hurtable unless the invulnerable time (+0x106) runs */
    int8_t inv = (int8_t)U8(rec, s, 0x106);
    for (int j = 1; j <= 11; j++) {
        uint32_t a = 0x188 + 16 * j;
        to_frame(fr, F32(rec, s, a), F32(rec, s, a + 4), F32(rec, s, a + 8), v);
        o[k++] = clampf(v[0], -600, 600) / 100, o[k++] = clampf(v[1], -600, 600) / 100, o[k++] = clampf(v[2], -600, 600) / 100;
        o[k++] = clampf(F32(rec, s, a + 12), 0, 300) / 100;
    }
    o[k++] = inv == 0;
    o[k++] = inv < 0 ? 1.0f : clampf(inv, 0, 60) / 60.0f;
    o[k++] = U8(rec, s, 0x107) != 0;
    /* the move's attack timing from its hit rows (8 bytes each: [1] attack set, [3] the motion frame the row ends on;
       ff fe ends the move's rows) and the motion frame counter (+0x719E, one a frame): how long the attack live now
       lasts, and in how many frames the next two start and how long they last */
    const uint8_t *rows = rec + PSO_PLAYER_AT(s) + 36 + 0x300 + 0x200;
    int c = rw(fld(rec, s, 0x719E));
    int live_now = rows[1] != 0 && !(rows[2] == 0xFF && rows[3] == 0xFE);
    o[k++] = live_now;
    o[k++] = live_now ? clampf(rows[3] - c + 1, 0, 32) / 16.0f : 0;
    int found = 0, end_prev = rows[3];
    for (int i = 1; i < 16 && found < 2; i++) {
        const uint8_t *row = rows + 8 * i;
        if (row[2] == 0xFF && row[3] == 0xFE)
            break;
        if (row[1] != 0) {
            float until = clampf(end_prev + 1 - c, 0, 64), len = clampf(row[3] - end_prev, 0, 32);
            o[k++] = 1, o[k++] = until / 32.0f, o[k++] = len / 16.0f;
            if (found == 0)
                o[k++] = row[1] / 8.0f;
            found++;
        }
        end_prev = row[3];
    }
    for (; found < 2; found++) {        /* none: far away */
        o[k++] = 0, o[k++] = 2.0f, o[k++] = 0;
        if (found == 0)
            o[k++] = 0;
    }
    o[k++] = clampf(c, 0, 128) / 64.0f;
    o[k++] = U8(rec, s, 0x71A2) / 32.0f;
    o[k++] = ru(fld(rec, s, 0xFC)) != 0;
    o[k++] = U8(rec, s, 0x108) != 0;
    o[k++] = U8(rec, s, 0x7226) / 64.0f;
    o[k++] = clampf(rw(fld(rec, s, 0x7228)), 0, 16) / 8.0f;
    o[k++] = U8(rec, s, 8) == 1 && U8(rec, s, 9) == 3;
    o[k++] = ru(fld(rec, s, 0x71C8)) != 0;
    o[k++] = ru(fld(rec, s, 0x71CC)) != 0;
    const uint8_t *in = rec + PSO_PLAYER_AT(s);
    uint32_t w0 = ru(in), w2 = ru(in + 8);
    static const int b0[7] = {2, 4, 5, 6, 7, 9, 10}, b2[3] = {2, 9, 10};
    for (int i = 0; i < 7; i++)
        o[k++] = s == me ? 0 : (float)((w0 >> b0[i]) & 1);
    for (int i = 0; i < 3; i++)
        o[k++] = s == me ? 0 : (float)((w2 >> b2[i]) & 1);
    static const uint8_t pv[6] = {0, 2, 5, 10, 12, 13};
    for (int i = 0; i < 6; i++)
        o[k++] = U8(rec, s, 0x102) == pv[i];
    return k;      /* PSO_FIGHTER: frame_vector checks it */
}

static const pso_geom *geom_for(const pso_geom *geoms, int n_geoms, int stage)
{
    return geoms && stage >= 0 && stage < n_geoms && geoms[stage].n > 0 ? &geoms[stage] : 0;
}

static void frame_vector(const uint8_t *rec, const uint8_t *prev, int me, const pso_geom *g, float *o)
{
    int op = 1 - me;
    float br = bearing_of(rec, me) * (PI2 / TURN);
    frame_t fr = {cosf(br), sinf(br), F32(rec, me, 0x20), F32(rec, me, 0x24), F32(rec, me, 0x28)};
    int k = 0;
    k += fighter(rec, prev, me, me, &fr, o + k);
    k += fighter(rec, prev, op, me, &fr, o + k);
    if (k != 2 * PSO_FIGHTER)               /* the layout and PSO_FIGHTER disagree: a build error, fail loudly */
        __builtin_trap();
    float dx = F32(rec, op, 0x20) - fr.x, dz = F32(rec, op, 0x28) - fr.z;
    o[k++] = sqrtf(dx * dx + dz * dz) / 500;
    o[k++] = rec[8 + 0x21] / 99.0f;
    sense(g, fr.x, fr.y, fr.z, br, o + k);
    k += PSO_SENSE;
    float obr = bearing_of(rec, op) * (PI2 / TURN);
    sense(g, F32(rec, op, 0x20), F32(rec, op, 0x24), F32(rec, op, 0x28), obr, o + k);
}

static int kind_id(const uint32_t *keys, int n, uint32_t h)
{
    if (n == 0)                 /* no list: a hash of the tick handler's address, 1..PSO_KIND_HASH */
        return h ? 1 + (int)((h >> 1) % PSO_KIND_HASH) : 0;
    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        int m = (lo + hi) / 2;
        if (keys[m] == h)
            return m + 1;
        if (keys[m] < h)
            lo = m + 1;
        else
            hi = m - 1;
    }
    return 0;
}

int pso_observe(const uint8_t *const *frames, const uint32_t *lens, int n, int side, const uint32_t *kind_keys, int n_kinds,
                const pso_geom *geoms, int n_geoms, const uint8_t *mem, uint32_t mem_base, uint32_t mem_len, pso_out *out)
{
    memset(out, 0, sizeof *out);
    if (n < 1)
        return -1;
    for (int i = 0; i < n; i++)
        if (lens[i] < PSO_REC_FIXED + 4)
            return -1;
    g_mem = mem, g_mem_base = mem_base, g_mem_len = mem_len;
    const uint8_t *now = frames[n - 1];
    const pso_geom *g = geom_for(geoms, n_geoms, now[8 + 0x25]);
    /* the history: now, 3 and 8 frames before, within the run of consecutive frames */
    int start = n - 1;
    while (start > 0 && ru(frames[start]) - ru(frames[start - 1]) == 1)
        start--;
    static const int hist[PSO_HISTORY] = {0, 3, 8};
    for (int h = 0; h < PSO_HISTORY; h++) {
        int i = n - 1 - hist[h];
        if (i < start)
            i = start;
        frame_vector(frames[i], i > start ? frames[i - 1] : 0, side, g, out->obs + h * PSO_FRAME);
    }
    int me = side, op = 1 - side;
    out->cats[0] = U8(now, me, 0x71BA) % 64;
    out->cats[1] = U8(now, op, 0x71BA) % 64;
    out->cats[2] = U8(now, me, 4) % 16;
    out->cats[3] = U8(now, op, 4) % 16;
    out->cats[4] = (U8(now, me, 4) % 16) * 2 + (U8(now, me, 0x71F1) != 0);
    out->cats[5] = (U8(now, op, 4) % 16) * 2 + (U8(now, op, 0x71F1) != 0);
    out->cats[6] = U8(now, me, 0x71A5);
    out->cats[7] = U8(now, op, 0x71A5);
    float br = bearing_of(now, me) * (PI2 / TURN);
    out->bearing = br * (TURN / PI2);
    out->yaw = (float)(ri(now + 104) & 0xFFFF);
    frame_t fr = {cosf(br), sinf(br), F32(now, me, 0x20), F32(now, me, 0x24), F32(now, me, 0x28)};
    /* the objects: the K nearest (on the ground plane), with their velocity from the record before */
    int cnt = rw(now + PSO_REC_FIXED);
    if (lens[n - 1] < PSO_REC_FIXED + 4u + (uint32_t)cnt * PSO_OBJ_SIZE)
        cnt = (lens[n - 1] - PSO_REC_FIXED - 4) / PSO_OBJ_SIZE;
    const uint8_t *obj0 = now + PSO_REC_FIXED + 4;
    int order[128], m = 0;
    float dist[128];
    for (int i = 0; i < cnt && m < 128; i++) {
        const uint8_t *ob = obj0 + i * PSO_OBJ_SIZE + 8;
        float dx = rf(ob + 0x20) - fr.x, dz = rf(ob + 0x28) - fr.z;
        dist[m] = sqrtf(dx * dx + dz * dz);
        order[m++] = i;
    }
    for (int i = 1; i < m; i++) {           /* insertion sort by distance */
        int oi = order[i];
        float d = dist[i];
        int j = i - 1;
        while (j >= 0 && dist[j] > d) {
            dist[j + 1] = dist[j], order[j + 1] = order[j];
            j--;
        }
        dist[j + 1] = d, order[j + 1] = oi;
    }
    const uint8_t *prev = n >= 2 && ru(now) - ru(frames[n - 2]) == 1 ? frames[n - 2] : 0;
    int pcnt = prev ? rw(prev + PSO_REC_FIXED) : 0;
    if (prev && lens[n - 2] < PSO_REC_FIXED + 4u + (uint32_t)pcnt * PSO_OBJ_SIZE)
        pcnt = (lens[n - 2] - PSO_REC_FIXED - 4) / PSO_OBJ_SIZE;
    uint32_t held_me = ru(fld(now, me, 0x71CC)), held_op = ru(fld(now, op, 0x71CC));
    for (int j = 0; j < m && j < PSO_K; j++) {
        const uint8_t *e = obj0 + order[j] * PSO_OBJ_SIZE, *ob = e + 8, *tail = ob + PSO_OBJ_HEAD;
        uint32_t addr = ru(e);
        float *f = out->ofeat[j], v[3];
        float x = rf(ob + 0x20), y = rf(ob + 0x24), z = rf(ob + 0x28);
        to_frame(&fr, x, y, z, v);
        f[0] = v[0] / 500, f[1] = v[1] / 200, f[2] = v[2] / 500;
        float vx = 0, vy = 0, vz = 0;
        for (int q = 0; q < pcnt; q++) {
            const uint8_t *pe = prev + PSO_REC_FIXED + 4 + q * PSO_OBJ_SIZE;
            if (ru(pe) == addr) {
                vx = x - rf(pe + 8 + 0x20), vy = y - rf(pe + 8 + 0x24), vz = z - rf(pe + 8 + 0x28);
                if (fabsf(vx) + fabsf(vy) + fabsf(vz) > 200)
                    vx = vy = vz = 0;
                break;
            }
        }
        float sx, fz;
        rot2(&fr, vx, vz, &sx, &fz);
        f[3] = sx / 10, f[4] = vy / 10, f[5] = fz / 10;
        f[6] = addr == held_me, f[7] = addr == held_op;
        f[8] = dist[j] / 500;
        f[9] = ob[1] != 0;
        static const uint16_t of[9] = {0x2C, 0x30, 0x34, 0x50, 0x54, 0x58, 0x6C, 0x70, 0x74};
        for (int q = 0; q < 9; q++)
            f[10 + q] = clampf(rf(ob + of[q]), -1e4f, 1e4f) / 10;
        f[19] = tail[0x0C] / 16.0f;
        float r = rf(ob + 0x148 + 12);
        to_frame(&fr, rf(ob + 0x148), rf(ob + 0x148 + 4), rf(ob + 0x148 + 8), v);
        f[20] = clampf(v[0], -600, 600) / 100, f[21] = clampf(v[1], -600, 600) / 100, f[22] = clampf(v[2], -600, 600) / 100;
        f[23] = clampf(r, 0, 300) / 100;
        f[24] = ob[0x101] != 0 && ob[0x105] == 0 && r != 0;
        for (int q = 0; q < PSO_OF; q++)
            f[q] = clampf(f[q], -50, 50);
        out->ocats[j][0] = kind_id(kind_keys, n_kinds, ru(e + 4));
        out->ocats[j][1] = ob[2] % 8;
        out->ocats[j][2] = ob[4] % 64;
        out->ocats[j][3] = ob[8] % 64;
        out->omask[j] = 1;
    }
    return 0;
}

uint32_t pso_decode(int action, float bearing, float yaw)
{
    static const uint32_t bits[8] = {0x10, 0x90, 0x80, 0xA0, 0x20, 0x60, 0x40, 0x50};
    static const float ang[8] = {0x8000, 0x6000, 0x4000, 0x2000, 0x0000, 0xE000, 0xC000, 0xA000};
    int d = action / 8, btn = action % 8;
    uint32_t out = 0;
    if (d) {
        float want = fmodf((d - 1) * 8192.0f + bearing - yaw, TURN);
        if (want < 0)
            want += TURN;
        float best = 1e9f;
        for (int i = 0; i < 8; i++) {
            float e = fabsf(fmodf(ang[i] - want + TURN * 1.5f, TURN) - TURN / 2);
            if (e < best)
                best = e, out = bits[i];
        }
    }
    static const uint32_t b[3] = {0x4, 0x200, 0x400};
    for (int i = 0; i < 3; i++)
        if (btn >> i & 1)
            out |= b[i];
    return out;
}

int pso_encode(uint32_t held, float bearing, float yaw)
{
    static const uint32_t bits[8] = {0x10, 0x90, 0x80, 0xA0, 0x20, 0x60, 0x40, 0x50};
    static const float ang[8] = {0x8000, 0x6000, 0x4000, 0x2000, 0x0000, 0xE000, 0xC000, 0xA000};
    int d = 0;
    for (int i = 0; i < 8; i++)
        if ((held & 0xF0) == bits[i]) {
            float rel = fmodf(ang[i] + yaw - bearing + 2 * TURN, TURN);
            d = ((int)floorf(rel / 8192.0f + 0.5f)) % 8 + 1;
        }
    int btn = ((held & 0x4) != 0) | ((held & 0x200) != 0) << 1 | ((held & 0x400) != 0) << 2;
    return d * 8 + btn;
}

void pso_sizes(int out[9])
{
    out[0] = PSO_FRAME, out[1] = PSO_HISTORY, out[2] = PSO_CATS, out[3] = PSO_K, out[4] = PSO_OF, out[5] = PSO_GEOM_MAX;
    out[6] = PSO_ACTIONS, out[7] = (int)sizeof(pso_out), out[8] = (int)sizeof(pso_geom);
}
