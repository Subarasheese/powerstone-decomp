/* video.c: the NAOMI library's drawing, on the host. The library's own C keeps the matrix stacks, the object set-up
   and the texture bookkeeping (the SH-4's XMTRX is shim.c's port_xmtrx); this file is what the library hands to the
   PowerVR: textures (Kamui's surfaces, decoded from the PowerVR formats into OpenGL), the models' vertex kernel
   (nl_objasm_draw_obj: transform, light, strips) and the sprites (nl_sprite_draw). Plus the matrix functions the
   library has no C for.

   Screen space as the PowerVR takes it: x, y in pixels of 640x480, and W (the depth test compares 1/W, greater is
   nearer). render.h's vertices carry W in z. */
#define GL_GLEXT_PROTOTYPES
#include <GL/gl.h>
#include <GL/glext.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "play_math.h"
#include "port.h"
#include "render.h"

extern float port_xmtrx[16];
unsigned port_host_fp_enter(void);
void port_host_fp_leave(unsigned);

#define U32(a) (*(uint32_t *)(uintptr_t)(a))
#define I32(a) (*(int32_t *)(uintptr_t)(a))
#define S16(a) (*(int16_t *)(uintptr_t)(a))
#define F32(a) (*(float *)(uintptr_t)(a))

/* a console function by name, for the library C this file calls on to */
#define CALL(name, ...) name(__VA_ARGS__)
void nlStoreMatrix(uint32_t dst);
void nlLoadMatrix(uint32_t src);
int32_t nlInitMatrixStack(uint32_t desc, uint32_t buf, int32_t depth);
void FUN_0c0e3510(void);
void nl_set_virtual_screen(float w, float h);

/* --- matrices ------------------------------------------------------------------------------------------------------ */

/* M = M . m, column-major (XF0-XF3 the first column) */
static void post_multiply(const float *m)
{
    float r[16];
    for (int c = 0; c < 4; c++)
        for (int rr = 0; rr < 4; rr++)
            r[c * 4 + rr] = port_xmtrx[rr] * m[c * 4] + port_xmtrx[4 + rr] * m[c * 4 + 1] + port_xmtrx[8 + rr] * m[c * 4 + 2] +
                            port_xmtrx[12 + rr] * m[c * 4 + 3];
    memcpy(port_xmtrx, r, sizeof r);
}

/* nlMultiMatrix(m): M = M . m (m in the natural layout) */
void nl_multi_matrix(uint32_t m) __asm__("nlMultiMatrix");
void nl_multi_matrix(uint32_t m)
{
    float t[16];
    memcpy(t, (void *)(uintptr_t)m, sizeof t);
    post_multiply(t);
}

/* nlScale(sx, sy, sz): M = M . S */
void nl_scale(float sx, float sy, float sz) __asm__("nlScale");
void nl_scale(float sx, float sy, float sz)
{
    for (int i = 0; i < 4; i++) {
        port_xmtrx[i] *= sx;
        port_xmtrx[4 + i] *= sy;
        port_xmtrx[8 + i] *= sz;
    }
}

#define ACTIVE 0x0C7FCCB4u /* the active stack's descriptor (12 bytes); stack k's own at ACTIVE + 12 k */
#define SELECT 0x0C7FCCB0u

/* nlSelectMatrixStack(n): switch to matrix stack n (1 model, 2 view, 3 projection): the current matrix goes to the old
   stack's top, the new stack's top becomes current */
void nl_select_stack(int32_t n) __asm__("nlSelectMatrixStack");
void nl_select_stack(int32_t n)
{
    nlStoreMatrix(0);
    int8_t old = *(int8_t *)(uintptr_t)SELECT;
    memcpy((void *)(uintptr_t)(ACTIVE + (uint32_t)(old * 12)), (void *)(uintptr_t)ACTIVE, 12);
    *(int8_t *)(uintptr_t)SELECT = (int8_t)n;
    memcpy((void *)(uintptr_t)ACTIVE, (void *)(uintptr_t)(ACTIVE + (uint32_t)((int8_t)n * 12)), 12);
    nlLoadMatrix(U32(ACTIVE + 8));
}

/* nlInitMatrix(buffer, depth): the three stacks; the model stack (1) becomes the active one */
int32_t nl_init_matrix(uint32_t buf, int32_t depth) __asm__("nlInitMatrix");
int32_t nl_init_matrix(uint32_t buf, int32_t depth)
{
    nlInitMatrixStack(ACTIVE + 24, 0x0C7FCCE4u, 3);
    nlInitMatrixStack(ACTIVE + 36, 0x0C7FCDA4u, 3);
    int32_t r = nlInitMatrixStack(ACTIVE + 12, buf, depth + 1);
    *(int8_t *)(uintptr_t)SELECT = 1;
    memcpy((void *)(uintptr_t)ACTIVE, (void *)(uintptr_t)(ACTIVE + 12), 12);
    return r;
}

/* nlPerspective(fov, aspect, near, far): M = M . perspective (gluPerspective, fov as a 16-bit angle), then the screen
   matrices (FUN_0c0e3510) */
void nl_perspective(int32_t fov, float aspect, float n, float f) __asm__("nlPerspective");
void nl_perspective(int32_t fov, float aspect, float n, float f)
{
    float sc[2];
    sa_fsca((uint32_t)(fov / 2), sc);
    float cot = sc[1] / sc[0];
    float p[16] = {0};
    p[0] = cot / aspect;
    p[5] = cot;
    p[10] = (f + n) / (n - f);
    p[11] = -1.0f;
    p[14] = 2.0f * f * n / (n - f);
    post_multiply(p);
    FUN_0c0e3510();
}

/* 0x0C0E1280: the load of XMTRX from memory, natural layout (nlLoadMatrix's C jumps there for it) */
void port_entry_0c0e1280(uint32_t p) { memcpy(port_xmtrx, (void *)(uintptr_t)p, sizeof port_xmtrx); }

/* nl_sprite_tables_init(base, records, ids): the sprite textures' tables: an id -> record map (s16, -1 none), a bitmap of
   free records, the 32-byte records; and the virtual screen (640x480) */
void sprite_tables_init(uint32_t base, int32_t records, int32_t ids) __asm__("nl_sprite_tables_init");
void sprite_tables_init(uint32_t base, int32_t records, int32_t ids)
{
    U32(0x0C7FD040) = 0xFFFFFFFF;
    nl_set_virtual_screen(640.0f, 480.0f);
    U32(0x0C7FD048) = (uint32_t)records;
    U32(0x0C7FD044) = base;
    uint32_t bitmap = (base + (uint32_t)ids * 2 + 3) & ~3u;
    U32(0x0C7FD04C) = bitmap;
    uint32_t words = ((uint32_t)records + 31) / 32;
    U32(0x0C7FD050) = (bitmap + words * 4 + 3) & ~3u;
    for (int32_t i = 0; i < ids; i++)
        S16(base + (uint32_t)i * 2) = -1;
    for (uint32_t i = 0; i < words; i++)
        U32(bitmap + i * 4) = 0;
}

/* gfx_set_fog_color(colour): the fog colour (fog comes later) */
void fog_colour(uint32_t c) __asm__("gfx_set_fog_color");
void fog_colour(uint32_t c) { (void)c; }

/* --- textures ------------------------------------------------------------------------------------------------------ */

#define MAX_TEX 8192
static struct tex {
    uint32_t surface;
    GLuint gl;
    int w, h, type, alpha;
} tex[MAX_TEX];
static int ntex, next_tex;

/* a surface's current texture: every creation takes a fresh index (meshes bound earlier keep the texture they were
   bound to, as their TCWs keep the old VRAM address on the console); indices are reused round the ring */
#define SURFACES 4096
static struct { uint32_t surface; int index; } surfaces[SURFACES];

static struct tex *tex_of_surface(uint32_t s)
{
    for (int i = 0; i < SURFACES; i++)
        if (surfaces[i].surface == s)
            return &tex[surfaces[i].index];
    return 0;
}

static struct tex *tex_new(uint32_t s)
{
    int i = next_tex;
    next_tex = (next_tex + 1) % MAX_TEX;
    if (ntex < MAX_TEX)
        ntex++;
    struct tex *t = &tex[i];
    if (t->gl) {
        unsigned game = port_host_fp_enter();
        glDeleteTextures(1, &t->gl);
        port_host_fp_leave(game);
        t->gl = 0;
    }
    t->surface = s;
    int slot = -1;
    for (int k = 0; k < SURFACES; k++)
        if (surfaces[k].surface == s) { slot = k; break; }
    for (int k = 0; k < SURFACES && slot < 0; k++)
        if (!surfaces[k].surface) slot = k;
    if (slot >= 0) {
        surfaces[slot].surface = s;
        surfaces[slot].index = i;
    }
    return t;
}

/* the texture a TCW names (the port puts the index + 1 in its address bits) */
static struct tex *tex_of_tcw(uint32_t tcw)
{
    uint32_t i = tcw & 0x1FFFFF;
    return i >= 1 && i <= (uint32_t)ntex ? &tex[i - 1] : 0;
}

static int size_code(int n)
{
    int c = 0;
    while ((8 << c) < n && c < 7)
        c++;
    return c;
}

/* kmCreateTextureSurface(surface, w, h, type): kmCreateTextureSurface. The surface's TSP size bits (+0x30) and TCW (+0x34) are
   what the library copies into the meshes and sprite records */
int32_t km_create_texture(uint32_t surface, int32_t w, int32_t h, uint32_t type) __asm__("kmCreateTextureSurface");
int32_t km_create_texture(uint32_t surface, int32_t w, int32_t h, uint32_t type)
{
    struct tex *t = tex_new(surface);
    if (getenv("PORT_DEBUG"))
        fprintf(stderr, "tex create surf %08X %dx%d type %X -> %ld\n", surface, w & 0xFFFF, h & 0xFFFF, type, (long)(t - tex + 1));
    t->w = w & 0xFFFF;
    t->h = h & 0xFFFF;
    t->type = (int)type;
    U32(surface + 0x30) = (uint32_t)(size_code(t->w) << 3 | size_code(t->h));
    U32(surface + 0x34) = ((type & 7) << 27) | (uint32_t)(t - tex + 1);
    return 0;
}

static uint32_t twiddle(uint32_t x, uint32_t y)
{
    uint32_t r = 0;
    for (int b = 0; b < 11; b++)
        r |= ((y >> b) & 1) << (2 * b) | ((x >> b) & 1) << (2 * b + 1);
    return r;
}

/* the index of (x, y) in a twiddled w x h picture: square blocks along the longer side */
static uint32_t twiddled_index(uint32_t x, uint32_t y, uint32_t w, uint32_t h)
{
    uint32_t m = w < h ? w : h;
    uint32_t block = w < h ? y / m : x / m;
    return block * m * m + twiddle(x % m, y % m);
}

static uint32_t to_rgba(uint16_t p, int fmt)
{
    uint32_t r, g, b, a;
    switch (fmt) {
    case 0: /* ARGB1555 */
        a = p & 0x8000 ? 255 : 0;
        r = (p >> 10) & 31; g = (p >> 5) & 31; b = p & 31;
        r = r << 3 | r >> 2; g = g << 3 | g >> 2; b = b << 3 | b >> 2;
        break;
    case 1: /* RGB565 */
        a = 255;
        r = (p >> 11) & 31; g = (p >> 5) & 63; b = p & 31;
        r = r << 3 | r >> 2; g = g << 2 | g >> 4; b = b << 3 | b >> 2;
        break;
    default: /* ARGB4444 */
        a = (p >> 12) & 15; r = (p >> 8) & 15; g = (p >> 4) & 15; b = p & 15;
        a *= 17; r *= 17; g *= 17; b *= 17;
        break;
    }
    return r | g << 8 | b << 16 | a << 24;
}

/* kmLoadTexture(surface, data, ...): kmLoadTexture. Decodes the PowerVR data into an OpenGL texture */
int32_t km_load_texture(uint32_t surface, uint32_t data, uint32_t a, uint32_t b) __asm__("kmLoadTexture");
int32_t km_load_texture(uint32_t surface, uint32_t data, uint32_t a, uint32_t b)
{
    (void)a;
    (void)b;
    struct tex *t = tex_of_surface(surface);
    if (getenv("PORT_DEBUG"))
        fprintf(stderr, "tex load surf %08X data %08X -> %s\n", surface, data, t ? "ok" : "unknown surface");
    if (!t || t->w <= 0 || t->h <= 0 || t->w > 1024 || t->h > 1024)
        return -1;
    int w = t->w, h = t->h, fmt = t->type & 0xFF, kind = (t->type >> 8) & 0xFF;
    uint32_t *px = malloc(sizeof(uint32_t) * w * h);
    const uint8_t *d = (const uint8_t *)(uintptr_t)data;
    int alpha = 0;
    for (int y = 0; y < h; y++)
        for (int x = 0; x < w; x++) {
            uint16_t p;
            if (kind == 3 || kind == 4) { /* VQ: a 2048-byte codebook, then twiddled indices per 2x2 block */
                uint32_t off = 2048;
                if (kind == 4)
                    for (int s = 2; s <= w / 2; s *= 2)
                        off += (uint32_t)((s / 2) * (s / 2));
                if (kind == 4)
                    off += 1;
                uint8_t idx = d[off + twiddled_index((uint32_t)x / 2, (uint32_t)y / 2, (uint32_t)w / 2, (uint32_t)h / 2)];
                const uint16_t *cb = (const uint16_t *)d + idx * 4;
                p = cb[(x & 1) * 2 + (y & 1)];
            } else if (kind == 9 || kind == 0xD) { /* rectangle */
                p = ((const uint16_t *)d)[y * w + x];
            } else { /* twiddled, with mipmaps (2): the full level after the smaller ones */
                uint32_t off = 0;
                if (kind == 2) {
                    off = 8;
                    for (int s = 2; s <= w / 2; s *= 2)
                        off += (uint32_t)(2 * s * s);
                }
                p = *(const uint16_t *)(d + off + 2 * twiddled_index((uint32_t)x, (uint32_t)y, (uint32_t)w, (uint32_t)h));
            }
            uint32_t c = to_rgba(p, fmt);
            if ((c >> 24) != 255)
                alpha = 1;
            px[y * w + x] = c;
        }
    if (getenv("PORT_DUMP_TEX")) { /* each decoded texture as a PPM (debugging) */
        char name[512];
        snprintf(name, sizeof name, "%s/t%03ld_%08X_%dx%d_%03X.ppm", getenv("PORT_DUMP_TEX"), (long)(t - tex + 1), data, w, h, t->type);
        FILE *f = fopen(name, "wb");
        if (f) {
            fprintf(f, "P6\n%d %d\n255\n", w, h);
            for (int i = 0; i < w * h; i++)
                fwrite(&px[i], 1, 3, f);
            fclose(f);
        }
    }
    unsigned game = port_host_fp_enter();
    if (!t->gl)
        glGenTextures(1, &t->gl);
    glBindTexture(GL_TEXTURE_2D, t->gl);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, px);
    port_host_fp_leave(game);
    t->alpha = alpha;
    free(px);
    return 0;
}

/* kmFreeTexture-like calls: the GL texture stays until the surface is created again */

/* --- the models' vertex kernel ----------------------------------------------------------------------------------- */

#define LIGHT_COLOUR 0x0C3468B0u
#define SPEC_COLOUR 0x0C3468C0u
#define SPEC_TABLE 0x0C7F4780u

static int clampc(float v)
{
    int i = (int)(v * 255.0f);
    return i < 0 ? 0 : i > 255 ? 255 : i;
}

static uint32_t argb(float a, float r, float g, float b)
{
    return (uint32_t)clampc(a) << 24 | (uint32_t)clampc(r) << 16 | (uint32_t)clampc(g) << 8 | (uint32_t)clampc(b);
}

static void project(const float *p, struct rvert *v)
{
    float in[4] = {p[0], p[1], p[2], 1.0f}, o[4];
    sa_ftrv(port_xmtrx, in, o);
    /* the screen matrix gives (W, X W, Y W, -W) */
    float w = o[0];
    v->z = w;
    if (w != 0.0f) {
        v->x = o[1] / w;
        v->y = o[2] / w;
    } else {
        v->x = v->y = 0;
    }
}

struct mesh_state {
    struct rdraw mode;
    float face[4], ofs[4], amb;
    int shading;
    float alpha;
};

static void light_vertex(const struct mesh_state *m, uint32_t light, const float *n, struct rvert *v)
{
    float inten = 1.0f, spec = 0.0f;
    if (m->shading != -1) {
        float lx = F32(light + 0x10), ly = F32(light + 0x14), lz = F32(light + 0x18);
        float scale = F32(0x0C7FD648);
        if (scale != 0.0f) {
            lx /= scale;
            ly /= scale;
            lz /= scale;
        }
        float d = n[0] * lx + n[1] * ly + n[2] * lz;
        inten = m->amb * F32(light + 0x1C) + (d > 0 ? d : 0);
        if (m->shading > 0) {
            float h = n[0] * F32(light) + n[1] * F32(light + 4) + n[2] * F32(light + 8);
            int idx = (int)h;
            if (idx > 309) {
                int col = idx - 309 > 127 ? 127 : idx - 309;
                int row = m->shading > 31 ? 31 : m->shading;
                spec = F32(SPEC_TABLE + (uint32_t)(row * 128 + col) * 4);
            }
        }
    }
    v->argb = argb(m->face[0] * m->alpha, m->face[1] * inten * F32(LIGHT_COLOUR), m->face[2] * inten * F32(LIGHT_COLOUR + 4),
                   m->face[3] * inten * F32(LIGHT_COLOUR + 8));
    v->offset = argb(0, m->ofs[1] * spec * F32(SPEC_COLOUR), m->ofs[2] * spec * F32(SPEC_COLOUR + 4),
                     m->ofs[3] * spec * F32(SPEC_COLOUR + 8));
}

static void decode_tsp(uint32_t tsp, struct rdraw *d)
{
    d->src = (uint8_t)((tsp >> 29) & 7);
    d->dst = (uint8_t)((tsp >> 26) & 7);
    d->clamp_u = (uint8_t)((tsp >> 16) & 1);
    d->clamp_v = (uint8_t)((tsp >> 15) & 1);
    d->flip_u = (uint8_t)((tsp >> 18) & 1);
    d->flip_v = (uint8_t)((tsp >> 17) & 1);
    d->filter = (uint8_t)(((tsp >> 13) & 3) != 0);
}

/* the PowerVR's cull test on a screen-space triangle: mode 2 culls a negative area, 3 a positive one (W > 0 only: a
   triangle crossing the eye plane is left to the clipper) */
static int culled(const struct rvert *t, int mode)
{
    if (mode < 2 || t[0].z <= 0 || t[1].z <= 0 || t[2].z <= 0)
        return 0;
    float det = (t[1].x - t[0].x) * (t[2].y - t[0].y) - (t[2].x - t[0].x) * (t[1].y - t[0].y);
    return mode == 2 ? det < 0 : det > 0;
}

static void draw_object(uint32_t obj, uint32_t light, float alpha)
{
    uint32_t fmt = U32(obj);
    if (fmt > 1)
        return;
    uint32_t mesh = obj + 0x18;
    uint32_t pcw_or = U32(0x0C7FD4C8), tsp_or = U32(0x0C7FD4CC);
    static struct rvert tri[4096 * 3];
    for (int guard = 0; guard < 4096 && U32(mesh) != 0; guard++) {
        uint32_t pcw = U32(mesh) | pcw_or, isp = U32(mesh + 4), tsp = U32(mesh + 8) | tsp_or, tcw = U32(mesh + 0xC);
        uint32_t size = U32(mesh + 0x4C);
        struct mesh_state m;
        memset(&m, 0, sizeof m);
        m.shading = I32(mesh + 0x24);
        m.amb = F32(mesh + 0x28);
        for (int i = 0; i < 4; i++) {
            m.face[i] = F32(mesh + 0x2C + 4 * i);
            m.ofs[i] = F32(mesh + 0x3C + 4 * i);
        }
        m.alpha = alpha;
        struct tex *t = (pcw & 8) ? tex_of_tcw(tcw) : 0;
        if (getenv("PORT_DEBUG"))
            fprintf(stderr, "mesh obj %08X pcw %08X tsp %08X tcw %08X texno %d tex %s%ld alpha %g col %g %g %g %g\n", obj, pcw, tsp, tcw,
                    I32(mesh + 0x20), t ? "yes" : "no", t ? (long)(t - tex + 1) : 0L, alpha, F32(mesh + 0x2C), F32(mesh + 0x30), F32(mesh + 0x34), F32(mesh + 0x38));
        m.mode.texture = t ? t->gl : 0;
        if (getenv("PORT_DEBUG") && (pcw & 8) && (!t || !t->gl))
            fprintf(stderr, "notex obj %08X tcw %08X index %u ntex %d found %d\n", obj, tcw, tcw & 0x1FFFFF, ntex, t != 0);
        decode_tsp(tsp, &m.mode);
        int list = (pcw >> 24) & 7;
        m.mode.blend = list == 2 || alpha < 1.0f ? 2 : list == 4 ? 1 : 0;
        if (alpha < 1.0f) {
            m.mode.src = 4;
            m.mode.dst = 5;
        }
        m.mode.depth_func = (uint8_t)((isp >> 29) & 7);
        m.mode.depth_write = m.mode.blend != 2 && !((isp >> 26) & 1);
        uint32_t p = mesh + 0x50, end = p + size;
        struct rvert win[2];
        int n_tri = 0;
        int mirror = (U32(0x0C7FD4C8) >> 31) & 1;
        while (p + 8 <= end) {
            uint32_t flags = U32(p);
            int32_t count = I32(p + 4);
            p += 8;
            /* the PowerVR's culling: 2 drops triangles whose screen area is negative, 3 positive ones */
            int cull = (int)(flags & 3) ^ (mirror && (flags & 2) ? 1 : 0);
            int strip = flags & 0x10;
            int nv = strip ? count : count * 3;
            for (int k = 0; k < nv && p < end; k++) {
                uint32_t vp = p;
                if (!(U32(p) & 1)) { /* a reference to an earlier vertex */
                    vp = p + 8 + (uint32_t)I32(p + 4);
                    p += 8;
                } else
                    p += 32;
                float pos[3] = {F32(vp), F32(vp + 4), F32(vp + 8)};
                float nrm[3] = {F32(vp + 12), F32(vp + 16), F32(vp + 20)};
                struct rvert v;
                project(pos, &v);
                if (k == 0 && getenv("PORT_DEBUG_VTX"))
                    fprintf(stderr, "vtx obj %08X pos %g %g %g -> x %g y %g w %g  m0 %g %g %g %g  m3 %g %g %g %g\n", obj, pos[0],
                            pos[1], pos[2], v.x, v.y, v.z, port_xmtrx[0], port_xmtrx[4], port_xmtrx[8], port_xmtrx[12],
                            port_xmtrx[3], port_xmtrx[7], port_xmtrx[11], port_xmtrx[15]);
                v.u = F32(vp + 24);
                v.v = F32(vp + 28);
                light_vertex(&m, light, nrm, &v);
                if (strip) {
                    if (k >= 2 && n_tri + 3 <= (int)(sizeof tri / sizeof tri[0])) {
                        if (k & 1) {
                            tri[n_tri++] = win[1];
                            tri[n_tri++] = win[0];
                        } else {
                            tri[n_tri++] = win[0];
                            tri[n_tri++] = win[1];
                        }
                        tri[n_tri++] = v;
                        if (culled(&tri[n_tri - 3], cull))
                            n_tri -= 3;
                    }
                    win[0] = win[1];
                    win[1] = v;
                    if (k == 0)
                        win[0] = v;
                } else if (n_tri < (int)(sizeof tri / sizeof tri[0])) {
                    tri[n_tri++] = v;
                    if (k % 3 == 2 && culled(&tri[n_tri - 3], cull))
                        n_tri -= 3;
                }
            }
        }
        if (n_tri)
            render_tris(tri, (unsigned)n_tri, &m.mode);
        mesh = mesh + 0x50 + size;
    }
}

/* nl_objasm_draw_obj(obj, light block, alpha) and its entry with alpha 1 (nl_objasm_draw_obj_opaque) */
void nl_draw_obj(uint32_t obj, uint32_t light, float alpha) __asm__("nl_objasm_draw_obj");
void nl_draw_obj(uint32_t obj, uint32_t light, float alpha) { draw_object(obj, light, alpha); }
void nl_draw_obj1(uint32_t obj, uint32_t light) __asm__("nl_objasm_draw_obj_opaque");
void nl_draw_obj1(uint32_t obj, uint32_t light) { draw_object(obj, light, 1.0f); }

/* --- sprites ------------------------------------------------------------------------------------------------------- */

/* nl_sprite_draw(request): a screen sprite. The request: +0 texture id, +4 x, +8 y, +12 z (depth 1/z), +16 sx, +20 sy,
   +24 u0 v0 u1 v1, +40 angle, +44 alpha, +48 mode, +52 flags */
void sprite_draw(uint32_t req) __asm__("nl_sprite_draw");
void sprite_draw(uint32_t req)
{
    int32_t id = I32(req);
    uint32_t map = U32(0x0C7FD044);
    if (!map || id < 0 || id >= 4096)
        return;
    int16_t rec_i = S16(map + (uint32_t)id * 2);
    if (rec_i < 0)
        return;
    uint32_t rec = U32(0x0C7FD050) + (uint32_t)rec_i * 32;
    struct tex *t = tex_of_tcw(U32(rec + 0xC));
    float tw = F32(rec + 0x18), th = F32(rec + 0x1C);
    if (getenv("PORT_DEBUG"))
        fprintf(stderr, "sprite id %d rec %d tcw %08X tex %s %gx%g\n", id, rec_i, U32(rec + 0xC), t ? "yes" : "no", tw, th);
    float x = F32(req + 4), y = F32(req + 8), z = F32(req + 12);
    float sx = F32(req + 16), sy = F32(req + 20);
    float u0 = F32(req + 24), v0 = F32(req + 28), u1 = F32(req + 32), v1 = F32(req + 36);
    int32_t angle = I32(req + 40);
    float alpha = F32(req + 44);
    int32_t mode = I32(req + 48);
    uint32_t flags = U32(req + 52);
    float sc[2];
    sa_fsca((uint32_t)angle, sc);
    float s = sc[0], c = sc[1];
    float hw = sx * tw * 0.5f, hh = sy * th * 0.5f;
    int ax = 1, ay = 1;
    if (flags & 15) {
        ax = flags & 3;
        ay = (flags >> 2) & 3;
    }
    static const int corner[4][2] = {{1, 1}, {3, 1}, {3, 3}, {1, 3}};
    float uv[4][2] = {{u0, v0}, {u1, v0}, {u1, v1}, {u0, v1}};
    struct rvert q[4];
    float r = 1.0f, g = 1.0f, b = 1.0f;
    if (flags & 0x2000) {
        r = F32(LIGHT_COLOUR);
        g = F32(LIGHT_COLOUR + 4);
        b = F32(LIGHT_COLOUR + 8);
    }
    for (int i = 0; i < 4; i++) {
        float dx = (float)(corner[i][0] - ax), dy = (float)(corner[i][1] - ay);
        q[i].x = x + dx * hw * c + dy * hh * s;
        q[i].y = y - dx * hw * s + dy * hh * c;
        q[i].z = z;
        q[i].u = flags & 0x10 ? 1.0f - uv[i][0] : uv[i][0];
        q[i].v = flags & 0x20 ? uv[i][1] : 1.0f - uv[i][1];
        q[i].argb = argb(alpha, r, g, b);
        q[i].offset = 0;
    }
    struct rdraw d;
    memset(&d, 0, sizeof d);
    d.texture = t ? t->gl : 0;
    int blended = mode == 2 || (mode != 0 && (alpha < 1.0f || (t && t->alpha)));
    d.blend = blended ? 2 : 0;
    d.src = 4;
    d.dst = 5;
    int cmp = (flags >> 8) & 7;
    d.depth_func = (uint8_t)(cmp ? cmp : 4);
    d.depth_write = !blended;
    d.filter = (flags & 0x1000) != 0;
    d.clamp_u = d.clamp_v = 1;
    struct rvert tri[6] = {q[0], q[1], q[2], q[0], q[2], q[3]};
    render_tris(tri, 6, &d);
}

/* --- sprite texture sets ------------------------------------------------------------------------------------------- */

int32_t nl_texture_slot_alloc(void);                                  /* a free texture slot */
int32_t nl_texture_slot_load(uint32_t entry, int32_t slot, uint32_t data); /* create the slot's surface and load it, 0 done */
void nl_texture_slot_finish(int32_t slot);

/* nl_sprite_record_alloc: a free sprite record (the bitmap at *0xC7FD04C, *0xC7FD048 records), -1 none */
int32_t sprite_record_alloc(void) __asm__("nl_sprite_record_alloc");
int32_t sprite_record_alloc(void)
{
    uint32_t bitmap = U32(0x0C7FD04C), n = U32(0x0C7FD048);
    for (uint32_t i = 0; i < n; i++)
        if (!(U32(bitmap + (i / 32) * 4) & (1u << (i % 32)))) {
            U32(bitmap + (i / 32) * 4) |= 1u << (i % 32);
            return (int32_t)i;
        }
    return -1;
}

/* nl_sprite_record_build(record, slot): the sprite's polygon record from the slot's surface: +0x0C TCW, +0x14 has alpha,
   +0x18 width, +0x1C height */
void sprite_record_build(uint32_t rec, int32_t slot) __asm__("nl_sprite_record_build");
void sprite_record_build(uint32_t rec, int32_t slot)
{
    uint32_t surf = U32(0x0C7FC4F0) + (uint32_t)slot * 60;
    uint32_t tcw = U32(surf + 0x34);
    struct tex *t = tex_of_tcw(tcw);
    U32(rec + 0x0) = 0x82840012u;
    U32(rec + 0x4) = 0x80000000u;
    U32(rec + 0x8) = 0x94800000u | U32(surf + 0x30);
    U32(rec + 0xC) = tcw;
    U32(rec + 0x10) = 0xFFFFFFFFu;
    U32(rec + 0x14) = t ? (uint32_t)t->alpha : 0;
    F32(rec + 0x18) = t ? (float)t->w : 0.0f;
    F32(rec + 0x1C) = t ? (float)t->h : 0.0f;
}

/* nl_sprite_texture_bind(list, palettes, i): entry i of a sprite texture list (16 bytes: w, h, type, data) bound to global id
   *0xC7FD490 + i: a texture slot (shared, counted), its surface loaded once, and the id's sprite record. The palette
   part (palettes != 0) is not taken: the game's sprite lists have no palette textures */
int32_t sprite_texture_bind(uint32_t list, uint32_t pal, int32_t i) __asm__("nl_sprite_texture_bind");
int32_t sprite_texture_bind(uint32_t list, uint32_t pal, int32_t i)
{
    (void)pal;
    int32_t g = I32(0x0C7FD490) + i;
    uint32_t entry = list + (uint32_t)i * 16;
    uint32_t te = U32(0x0C7F87C8) + (uint32_t)g * 8;
    if (U32(te) == 0)
        U32(te + 4) = (uint32_t)nl_texture_slot_alloc();
    U32(te) += 1;
    int32_t slot = I32(te + 4);
    uint32_t surf = U32(0x0C7FC4F0) + (uint32_t)slot * 60;
    uint32_t map = U32(0x0C7FD044);
    if (S16(map + (uint32_t)g * 2) == -1)
        S16(map + (uint32_t)g * 2) = (int16_t)sprite_record_alloc();
    int16_t rec_i = S16(map + (uint32_t)g * 2);
    if (U32(surf + 44) == 0) {
        if (nl_texture_slot_load(entry, slot, U32(entry + 8)) != 0)
            fprintf(stderr, "powerstone: sprite texture %d did not load\n", g);
        nl_texture_slot_finish(slot);
        U32(surf + 56) = (uint32_t)slot;
        if (rec_i >= 0)
            sprite_record_build(U32(0x0C7FD050) + (uint32_t)rec_i * 32, slot);
    }
    U32(surf + 44) += 1;
    return 0;
}

/* kmFreeTexture(surface): kmFreeTexture. The texture stays: meshes may still hold its index; the ring reuses it */
int32_t km_free_texture(uint32_t surface) __asm__("kmFreeTexture");
int32_t km_free_texture(uint32_t surface) { (void)surface; return 0; }

/* nl_texture_surface_words(surface): the surface's TSP size bits and TCW from Kamui's surface fields; the port wrote both when it
   created the surface (km_create_texture), with its own texture's index in the TCW */
int32_t surface_words(uint32_t surface) __asm__("nl_texture_surface_words");
int32_t surface_words(uint32_t surface) { (void)surface; return 0; }

/* nl_texture_slot_alloc: a free texture slot from the bitmap at *0xC7F87CC (*0xC3468E4 words), -1 none */
int32_t texture_slot_alloc(void) __asm__("nl_texture_slot_alloc");
int32_t texture_slot_alloc(void)
{
    uint32_t bitmap = U32(0x0C7F87CC);
    int32_t words = I32(0x0C3468E4);
    for (int32_t w = 0; w < words; w++) {
        uint32_t bits = U32(bitmap + (uint32_t)w * 4);
        if (bits == 0xFFFFFFFFu)
            continue;
        for (int b = 0; b < 32; b++)
            if (!(bits & (1u << b))) {
                U32(bitmap + (uint32_t)w * 4) = bits | (1u << b);
                return w * 32 + b;
            }
    }
    return -1;
}

/* nl_model_bind_textures(model, texture list): binds every textured mesh of a model to its texture (global id = *0xC7FD490 +
   the mesh's number): the slot is shared and counted, the texture loaded on its first use, the mesh's TSP size bits and
   TCW patched (nl_mesh_set_texture). Untextured meshes get the PCW's bit 0 and the ISP's 0x400000; every mesh gets the
   global PCW bits. One pass over all meshes (the library resumes nl_model_bind_step mesh by mesh) */
void nl_mesh_set_texture(uint32_t mesh, int32_t slot);
int32_t model_bind(uint32_t model, uint32_t list) __asm__("nl_model_bind_textures");
int32_t model_bind(uint32_t model, uint32_t list)
{
    if (I32(model) < 0)
        return 0;
    int32_t err = 0;
    uint32_t mesh = model + 0x18;
    for (int guard = 0; guard < 4096 && U32(mesh) != 0; guard++) {
        int32_t texno = I32(mesh + 0x20);
        int32_t slot = -1;
        if (texno >= 0) {
            int32_t g = I32(0x0C7FD490) + texno;
            uint32_t te = U32(0x0C7F87C8) + (uint32_t)g * 8;
            if (U32(te) == 0)
                U32(te + 4) = (uint32_t)texture_slot_alloc();
            U32(te) += 1;
            slot = I32(te + 4);
            uint32_t surf = U32(0x0C7FC4F0) + (uint32_t)slot * 60;
            if (U32(surf + 0x2C) == 0) {
                uint32_t entry = list + (uint32_t)texno * 16;
                err |= nl_texture_slot_load(entry, slot, U32(entry + 8));
                nl_texture_slot_finish(slot);
                U32(surf + 0x38) = (uint32_t)slot;
            }
            U32(surf + 0x2C) += 1;
        } else {
            U32(mesh) |= 1;
            U32(mesh + 4) |= 0x400000;
        }
        U32(mesh) = (U32(mesh) & 0xFFFCFFFFu) | (U32(0x0C3468EC) << 16) | 0x8C0000u;
        if (slot >= 0)
            nl_mesh_set_texture(mesh, slot);
        mesh = mesh + 0x50 + U32(mesh + 0x4C);
    }
    return err;
}
