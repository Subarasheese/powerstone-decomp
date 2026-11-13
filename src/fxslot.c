/* 8 record slots (144 bytes) at 0xc7f3238: clear, start by priority level, HUD/effect sprite helpers (0c05eea0-0c05f6d8) */

struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o7C_float { char p[0x7C]; float v; };
int FUN_0c05f59c(int, int, int, int);
typedef struct { int a, b, c, d; } S16;
typedef struct {
    char b0, b1, b2, b3, b4;
    char pad5[3];
    int w8;
    int w12;
    short h16;
    short h18;
    char pad20[60];
    S16 s80;
    char pad96[20];
    float f116;
    char pad120[24];
} Rec;
int FUN_0c0e07c0(int);
int FUN_0c0e0800(int);
int thunk_FUN_0c0fbcf0(int);
struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float math_signed_sqrt(float);
int FUN_0c0e0820(float);
typedef struct { int w[4]; } Stk4;
int FUN_0c05f4cc(int, ...);

int fxslot_clear_all(void);

static int test(unsigned char *entry, int score)
{
    return entry[0] != 0 && (unsigned char)score < entry[1];
}

int fxslot_clear_all(void)
{
    register int t0;
    register int t2;

    t0 = 0x0;
    for (;;) {
        *(unsigned char *)((((short)(((((t0 << 2) << 1) + t0) << 2) << 2) + 0xC7F3238) + 0x0)) = 0x0;
        t2 = ((short)(((((t0 << 2) << 1) + t0) << 2) << 2) + 0xC7F3238);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t2 + 0x1)) = 0x0;
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    (((struct o4_uint *)0xC38380C)->v) = 0x0;
    (((struct o0_uint *)0xC38380C)->v) = 0x0;
    return 0x0;
}

int FUN_0c05eed2(void)
{
    register int t0;
    register float u2;
    register int t3;

    t0 = 0x0;
    for (;;) {
        u2 = *(float *)((0xC14D7E8 + (t0 << 2)));
        t3 = ((short)(((((t0 << 2) << 1) + t0) << 2) << 2) + 0xC7F3238);
        t0 = (t0 + 0x1);
        (((struct o7C_float *)(t3))->v) = u2;
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return fxslot_clear_all();
}

Rec *fxslot_start(int idx, int level, int b3, int w8, float f, S16 *src, signed char *tbl)
{
    Rec *r = (Rec *)(0x0C7F3238 + (short)((signed char)idx * 144));
    if ((unsigned char)level >= (unsigned char)r->b1) {
        r->b0 = 1;
        r->b4 = 0;
        r->b1 = level;
        r->b2 = 1;
        r->w8 = w8;
        r->w12 = (int)tbl;
        r->f116 = f;
        if (tbl != 0)
            r->h16 = tbl[(unsigned char)r->b2 * 32 + 1];
        r->h18 = 0;
        r->s80 = *src;
        r->b3 = b3;
    }
    return r;
}

int FUN_0c05f136(void)
{
    register int t0;
    register int t1;

    t0 = 0xC494B18;
    t1 = 0x0;
    for (;;) {
        t1 = (t1 + 0x1);
        *(float *)((t0 + 0x0)) = 0.0f;
        t0 = (t0 + 0x4);
        if ((int)t1 >= (int)0x81) {
            break;
        }
    }
    thunk_FUN_0c0fbcf0(0xC494B18);
    FUN_0c0e07c0(0x101010);
    return FUN_0c0e0800(0xFF09);
}

int FUN_0c05f194(void)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    u0 = (((struct o0_float *)0xC05F2A0)->v);
    t0 = 0xC494B18;
    t1 = 0x0;
    for (;;) {
        t1 = (t1 + 0x1);
        *(float *)((t0 + 0x0)) = 1.0f;
        t0 = (t0 + 0x4);
        if (!(u0 > (float)t1)) {
            break;
        }
    }
    u0 = (((struct o4_float *)0xC05F2A0)->v);
    u1 = (((struct o8_float *)0xC05F2A0)->v);
    u2 = (((struct oC_float *)0xC05F2A0)->v);
    t0 = 0x8;
    for (;;) {
        t1 = t0;
        t2 = t0;
        t0 = (t0 + 0x1);
        *(float *)((0xC494B18 + (t1 << 2))) = (1.0f - (((float)t2 + u1) / u0));
        if (!(u2 > (float)t0)) {
            break;
        }
    }
    t0 = 0xC494CD8;
    t1 = 0x70;
    for (;;) {
        t1 = (t1 + 0x1);
        *(float *)((t0 + 0x0)) = 0.0f;
        t0 = (t0 + 0x4);
        if ((int)t1 >= (int)0x81) {
            break;
        }
    }
    thunk_FUN_0c0fbcf0(0xC494B18);
    FUN_0c0e07c0(0x8DA295);
    return FUN_0c0e0800(0xFF0E);
}

int FUN_0c05f20e(int a4, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    u0 = math_signed_sqrt((f5 / (f4 / 16384.0f)));
    if ((int)((int)((-u0) + 128.0f) & 0x7F) > 0) {
        t0 = 0x0;
        for (;;) {
            t1 = t0;
            t2 = t0;
            t0 = (t0 + 0x1);
            *(float *)((0xC494B18 + (t1 << 2))) = (1.0f - ((float)t2 / (float)((int)((-u0) + 128.0f) & 0x7F)));
            if ((int)t0 >= (int)((int)((-u0) + 128.0f) & 0x7F)) {
                break;
            }
        }
    }
    if ((int)((int)((-u0) + 128.0f) & 0x7F) < (int)0x81) {
        t0 = ((((int)((-u0) + 128.0f) & 0x7F) << 2) + 0xC494B18);
        t1 = ((int)((-u0) + 128.0f) & 0x7F);
        for (;;) {
            t1 = (t1 + 0x1);
            *(float *)((t0 + 0x0)) = 0.0f;
            t0 = (t0 + 0x4);
            if ((int)t1 >= (int)0x81) {
                break;
            }
        }
    }
    thunk_FUN_0c0fbcf0(0xC494B18);
    FUN_0c0e07c0(a4);
    return FUN_0c0e0820(f4);
}

int FUN_0c05f56e(Stk4 s)
{
    return (FUN_0c05f4cc((((((signed char)(s.w[0] >> 0)) << 2) << 2) + 0xC14D768)));
}

int FUN_0c05f68c(int a4, int a5, int a6)
{
    int stk[4];

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned short *)(((int)stk + 12)) = a6;
    *(int *)((int)stk + 0) = ((*(short *)(((int)stk + 12))));
    return (FUN_0c05f59c(0x80, 0x0, ((((*(signed char *)(((int)stk + 4))) << 2) << 2) + 0xC14D768), (*(int *)(((int)stk + 8)))));
}
