/* adx.c: CRI's ADX player (ADXT) on the host. The game streams its music and narration by file name
   (bgm_start_file: ADXT_StartFname with a name from the table at 0x0C180BD0) on two handles it creates at start-up;
   these host functions take the places of ADXT's, read the .ADX file from the data folder and decode it on the
   mixer's thread. CRI's own stream, RNA and AICA-stream code never runs.

   ADX: big-endian header (0x80 0x00, data offset at +2, encoding 3, block size 18, 4 bits, channels at +7, rate at +8,
   samples at +12, loop data at +0x18.. when the data offset reaches 0x2C), then 18-byte blocks interleaved by
   channel: a 16-bit scale and 32 signed nibbles. s = nibble * scale + (c1 * h1 + c2 * h2) >> 12, with the
   coefficients of a 500 Hz cut-off at 44.1 kHz. */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "port.h"
#include "sound.h"

int port_data_path(const char *name, char *out, size_t size);

#define ADXT_STAT_STOP 0
#define ADXT_STAT_PLAYING 3
#define ADXT_STAT_PLAYEND 5
#define HANDLES 8

struct adxt {
    uint32_t h;            /* the handle the game holds: its work area in console memory */
    int used, stat, loop;
    int vol;               /* 0.1 dB */
    unsigned char *file;
    size_t size;
    int channels, data, total;
    int loop_start, loop_end, has_loop;
    int pos;               /* the next sample */
    int16_t hist[2][2];
    int16_t loop_hist[2][2]; /* the predictor as it stood at the loop start, the first time through */
    int16_t cur[2];
    struct voice *voice;
};
static struct adxt players[HANDLES];
static const int c1 = 7334, c2 = -3283;

static uint32_t be16(const unsigned char *p) { return (uint32_t)p[0] << 8 | p[1]; }
static uint32_t be32(const unsigned char *p) { return be16(p) << 16 | be16(p + 2); }

static struct adxt *player(uint32_t h)
{
    for (int i = 0; i < HANDLES; i++)
        if (players[i].used && players[i].h == h)
            return &players[i];
    return 0;
}

static float gain(int vol)
{
    if (vol > 0)
        vol = 0;
    if (vol < -960)
        return 0.0f;
    return powf(10.0f, (float)vol / 200.0f);
}

/* the sample at pos of channel ch, decoded in order (pos only moves forward, or back to the loop start) */
static int16_t decode_at(struct adxt *a, int ch, int pos)
{
    int block = pos / 32, nib = pos % 32;
    const unsigned char *b = a->file + a->data + ((size_t)block * a->channels + ch) * 18;
    if ((size_t)(b - a->file) + 18 > a->size)
        return 0;
    int scale = (int)be16(b);
    int v = b[2 + nib / 2];
    int n = nib & 1 ? v & 15 : v >> 4;
    if (n & 8)
        n -= 16;
    int s = n * scale + ((c1 * a->hist[ch][0] + c2 * a->hist[ch][1]) >> 12);
    s = s > 32767 ? 32767 : s < -32768 ? -32768 : s;
    a->hist[ch][1] = a->hist[ch][0];
    a->hist[ch][0] = (int16_t)s;
    return (int16_t)s;
}


static void step(struct voice *v)
{
    struct adxt *a = v->data;
    a->pos++;
    int end = a->loop && a->has_loop ? a->loop_end : a->total;
    if (a->pos >= end) {
        if (a->loop && a->has_loop) {
            memcpy(a->hist, a->loop_hist, sizeof a->hist);
            a->pos = a->loop_start;
        } else {
            a->stat = ADXT_STAT_PLAYEND;
            v->active = 0;
            return;
        }
    }
    if (a->pos == a->loop_start && a->has_loop && a->pos < a->loop_end)
        memcpy(a->loop_hist, a->hist, sizeof a->hist);
    for (int ch = 0; ch < a->channels; ch++)
        a->cur[ch] = decode_at(a, ch, a->pos);
}

static int fetch(struct voice *v, int16_t *l, int16_t *r)
{
    struct adxt *a = v->data;
    if (a->stat != ADXT_STAT_PLAYING)
        return 0;
    v->volume = gain(a->vol);
    *l = a->cur[0];
    *r = a->channels > 1 ? a->cur[1] : a->cur[0];
    return 1;
}

static void stop(struct adxt *a)
{
    sound_lock();
    if (a->voice && a->voice->data == a)
        a->voice->active = 0;
    a->voice = 0;
    a->stat = ADXT_STAT_STOP;
    sound_unlock();
    free(a->file);
    a->file = 0;
}

/* ADXT_Init, ADXT_Finish */
void adxt_init(void) __asm__("FUN_0c0f4644");
void adxt_init(void) {}
void adxt_finish(void) __asm__("FUN_0c0f4686");
void adxt_finish(void)
{
    for (int i = 0; i < HANDLES; i++)
        if (players[i].used)
            stop(&players[i]);
}

/* ADXT_Create(channels, work, size): the handle is the work area */
uint32_t adxt_create(int32_t maxnch, uint32_t work, int32_t worksize) __asm__("FUN_0c0f46d0");
uint32_t adxt_create(int32_t maxnch, uint32_t work, int32_t worksize)
{
    (void)maxnch;
    (void)worksize;
    for (int i = 0; i < HANDLES; i++)
        if (!players[i].used) {
            memset(&players[i], 0, sizeof players[i]);
            players[i].used = 1;
            players[i].h = work;
            players[i].loop = 1;
            *(uint8_t *)(uintptr_t)(work + 1) = ADXT_STAT_STOP;
            return work;
        }
    return 0;
}

/* ADXT_StartFname(handle, name) */
void adxt_start_fname(uint32_t h, uint32_t name) __asm__("FUN_0c0f4a06");
void adxt_start_fname(uint32_t h, uint32_t name)
{
    struct adxt *a = player(h);
    char path[1024];
    if (getenv("PORT_DEBUG"))
        fprintf(stderr, "adx start %08X %s (player %s)\n", h, (const char *)(uintptr_t)name, a ? "ok" : "unknown");
    if (!a)
        return;
    stop(a);
    if (!port_data_path((const char *)(uintptr_t)name, path, sizeof path)) {
        fprintf(stderr, "powerstone: no %s in the data folder\n", (const char *)(uintptr_t)name);
        return;
    }
    FILE *f = fopen(path, "rb");
    if (!f)
        return;
    fseek(f, 0, SEEK_END);
    a->size = (size_t)ftell(f);
    fseek(f, 0, SEEK_SET);
    a->file = malloc(a->size);
    if (!a->file || fread(a->file, 1, a->size, f) != a->size || a->size < 0x24 || be16(a->file) != 0x8000) {
        fclose(f);
        free(a->file);
        a->file = 0;
        return;
    }
    fclose(f);
    unsigned char *p = a->file;
    a->data = (int)be16(p + 2) + 4;
    a->channels = p[7] == 2 ? 2 : 1;
    int rate = (int)be32(p + 8);
    a->total = (int)be32(p + 12);
    a->has_loop = 0;
    if (a->data >= 0x2C && be32(p + 0x18)) {
        a->has_loop = 1;
        a->loop_start = (int)be32(p + 0x1C);
        a->loop_end = (int)be32(p + 0x24);
    }
    memset(a->hist, 0, sizeof a->hist);
    memset(a->loop_hist, 0, sizeof a->loop_hist);
    a->pos = 0;
    for (int ch = 0; ch < a->channels; ch++)
        a->cur[ch] = decode_at(a, ch, 0);
    sound_lock();
    struct voice *v = sound_voice_alloc();
    if (v) {
        v->rate = (uint32_t)rate;
        v->volume = gain(a->vol);
        v->pan = 0;
        v->fetch = fetch;
        v->advance = step;
        v->data = a;
        v->active = 1;
        a->voice = v;
        a->stat = ADXT_STAT_PLAYING;
    }
    sound_unlock();
}

/* ADXT_Stop(handle) */
void adxt_stop(uint32_t h) __asm__("FUN_0c0f4c2c");
void adxt_stop(uint32_t h)
{
    struct adxt *a = player(h);
    if (a)
        stop(a);
}

/* ADXT_GetStat(handle) */
int32_t adxt_get_stat(uint32_t h) __asm__("FUN_0c0f4cc6");
int32_t adxt_get_stat(uint32_t h)
{
    struct adxt *a = player(h);
    if (getenv("PORT_DEBUG")) {
        static uint32_t last_h; static int last_s = -1;
        if (h != last_h || (a ? a->stat : -2) != last_s)
            fprintf(stderr, "adx stat %08X -> %d\n", h, a ? a->stat : -2);
        last_h = h; last_s = a ? a->stat : -2;
    }
    if (!a)
        return ADXT_STAT_STOP;
    *(uint8_t *)(uintptr_t)(h + 1) = (uint8_t)a->stat;
    return a->stat;
}

/* ADXT_SetOutVol(handle, vol) and ADXT_GetOutVol: 0.1 dB, 0 full, -960 silent */
void adxt_set_out_vol(uint32_t h, int32_t vol) __asm__("FUN_0c0f4db4");
void adxt_set_out_vol(uint32_t h, int32_t vol)
{
    struct adxt *a = player(h);
    if (a)
        a->vol = vol;
    if (h)
        *(int32_t *)(uintptr_t)(h + 0x40) = vol;
}
int32_t adxt_get_out_vol(uint32_t h) __asm__("FUN_0c0f4dc8");
int32_t adxt_get_out_vol(uint32_t h)
{
    struct adxt *a = player(h);
    return a ? a->vol : 0;
}

/* ADXT_ExecServer: the decoding happens on the mixer's thread */
void adxt_exec_server(void) __asm__("FUN_0c0f4eac");
void adxt_exec_server(void)
{
    for (int i = 0; i < HANDLES; i++)
        if (players[i].used)
            *(uint8_t *)(uintptr_t)(players[i].h + 1) = (uint8_t)players[i].stat;
}

/* ADXT_GetErrCode, ADXT_ClearErrCode */
int32_t adxt_get_err_code(uint32_t h) __asm__("FUN_0c0f4f14");
int32_t adxt_get_err_code(uint32_t h) { (void)h; return 0; }
void adxt_clear_err_code(uint32_t h) __asm__("FUN_0c0f4f1a");
void adxt_clear_err_code(uint32_t h) { (void)h; }

/* ADXT_SetLpFlg(handle, flag) */
void adxt_set_lp_flg(uint32_t h, int32_t flg) __asm__("FUN_0c0f4f28");
void adxt_set_lp_flg(uint32_t h, int32_t flg)
{
    struct adxt *a = player(h);
    if (a)
        a->loop = flg != 0;
}
