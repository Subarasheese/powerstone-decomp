/* Spawns a weapon-swing trail effect of kind `kind` on fighter `src`'s weapon hand (part +0x300 + 3520 * costume +
   176): a new effect object (FUN_0c059132) with the update callback 0x0C0CA67E, offset and turned by the kind's tables
   (0x0C33C9AC positions, 0x0C33C9F4 angles in degrees, from the base angles 0x0C33C9A0), half scale, six hidden models
   in the side's palette (g_0c6002d0) set up as two crossed blades, a glow, a streak and two flares (default scale
   0x0C153380), all at scale 2, then its action 114 (FUN_0c0a1d88). */
char *FUN_0c059132(int a, int b, int c, int d);
void FUN_0c06233a(char *model, char *palette, int kind);
void FUN_0c0a1d88(char *e, int action);

typedef struct { float x, y, z; } VEC3;

#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define MDL(e, i) (*(char **)((e) + 0x2E0 + (i) * 4))
#define PAL(src) ((char *)0x0C6002D0 + (signed char)(B(src, 3) * 24))

static void scale(char *m, float s)
{
    F(m, 36) = s;
    F(m, 32) = s;
    F(m, 28) = s;
}

void FUN_0c0ca268(char *src, char kind)
{
    char *e;
    float *v;

    e = FUN_0c059132(1, 1, 6, 0);
    if (e == 0)
        return;
    e[0] = 1;
    e[3] = src[3];
    e[1] = 1;
    H(e, 6) = 1055;
    e[5] = 25;
    I(e, 16) = 0x0C0CA67E;
    F(e, 64) = 0.0f;
    F(e, 60) = 0.0f;
    F(e, 56) = 0.0f;
    *(char **)(e + 28) = src;
    *(char **)(e + 0x118) = src + 0x300 + (short)(B(src, 0x71F1) * 3520) + 176;
    e[14] = kind;
    v = (float *)((char *)0x0C33C9AC + B(e, 14) * 12);
    F(e, 32) = F(e, 32) + v[0];
    v = (float *)((char *)0x0C33C9AC + B(e, 14) * 12);
    F(e, 36) = F(e, 36) + v[1];
    v = (float *)((char *)0x0C33C9AC + B(e, 14) * 12);
    F(e, 40) = F(e, 40) + v[2];
    *(VEC3 *)(e + 44) = *(VEC3 *)0x0C33C9A0;
    I(e, 44) = I(e, 44) + (int)(((float *)((char *)0x0C33C9F4 + B(e, 14) * 12))[0] * 65536.0f / 360.0f);
    I(e, 48) = I(e, 48) + (int)(((float *)((char *)0x0C33C9F4 + B(e, 14) * 12))[1] * 65536.0f / 360.0f);
    I(e, 52) = I(e, 52) + (int)(((float *)((char *)0x0C33C9F4 + B(e, 14) * 12))[2] * 65536.0f / 360.0f);
    I(e, 44) = I(e, 44) & 0xFFFF;
    I(e, 48) = I(e, 48) & 0xFFFF;
    I(e, 52) = I(e, 52) & 0xFFFF;
    F(e, 88) = 0.5f;
    F(e, 84) = 0.5f;
    F(e, 80) = 0.5f;
    FUN_0c06233a(MDL(e, 0), PAL(src), 0);
    MDL(e, 0)[0] = 0;
    H(MDL(e, 0), 2) = 1055;
    F(MDL(e, 0), 64) = 1.0f;
    I(MDL(e, 0), 16) = I(MDL(e, 0), 16) + 0x4000;
    scale(MDL(e, 0), 2.0f);
    FUN_0c06233a(MDL(e, 1), PAL(src), 1);
    MDL(e, 1)[0] = 0;
    H(MDL(e, 1), 2) = 1055;
    F(MDL(e, 1), 64) = 1.0f;
    F(MDL(e, 1), 28) = 1.0f;
    F(MDL(e, 1), 32) = 1.0f;
    F(MDL(e, 1), 36) = 1.0f;
    I(MDL(e, 1), 16) = I(MDL(e, 1), 16) - 0x4000;
    scale(MDL(e, 1), 2.0f);
    FUN_0c06233a(MDL(e, 2), PAL(src), 4);
    MDL(e, 2)[0] = 0;
    H(MDL(e, 2), 2) = 1055;
    F(MDL(e, 2), 64) = 1.0f;
    F(MDL(e, 2), 28) = 0.0999999940f;
    F(MDL(e, 2), 32) = 0.0999999940f;
    F(MDL(e, 2), 36) = 0.0999999940f;
    scale(MDL(e, 2), 2.0f);
    FUN_0c06233a(MDL(e, 3), PAL(src), 5);
    MDL(e, 3)[0] = 0;
    H(MDL(e, 3), 2) = 1055;
    F(MDL(e, 3), 64) = 1.0f;
    F(MDL(e, 3), 28) = 0.0f;
    F(MDL(e, 3), 32) = 1.0f;
    F(MDL(e, 3), 36) = 0.0f;
    scale(MDL(e, 3), 2.0f);
    FUN_0c06233a(MDL(e, 4), PAL(src), 2);
    MDL(e, 4)[0] = 0;
    H(MDL(e, 4), 2) = 1055;
    F(MDL(e, 4), 64) = 1.0f;
    *(VEC3 *)(MDL(e, 4) + 28) = *(VEC3 *)0x0C153380;
    scale(MDL(e, 4), 2.0f);
    FUN_0c06233a(MDL(e, 5), PAL(src), 2);
    MDL(e, 5)[0] = 0;
    H(MDL(e, 5), 2) = 1055;
    F(MDL(e, 5), 64) = 1.0f;
    *(VEC3 *)(MDL(e, 5) + 28) = *(VEC3 *)0x0C153380;
    I(MDL(e, 5), 16) = I(MDL(e, 5), 16) - 0x8000;
    scale(MDL(e, 5), 2.0f);
    e[0x101] = 1;
    e[0x102] = 1;
    FUN_0c0a1d88(e, 114);
}
