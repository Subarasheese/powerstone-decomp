/* Spawns a hit spark / impact effect of kind 0..8 for an attacker `src`: a new effect object (FUN_0c059132) copies the
   attacker's side, position (+0x20) and angles (+0x2C), gets the update callback 0x0C0BF86E, zero velocity, the effect
   model of its kind (FUN_0c06233a with the side's palette entry of g_0c6002d0, 24 bytes each), the blend mode 543 or 1055,
   per-kind scales and a lifetime at +0xEC (20, 30, 60 or 61 frames). Kind 1 is attached to the attacker's targeted body
   part (FUN_0c062242). */
char *FUN_0c059132(int a, int b, int c, int d);
void FUN_0c06233a(char *model, char *palette, int kind);
void thunk_FUN_0c062242(char *slot, float *pos);

typedef struct { float x, y, z; } VEC3;

#define PL(i) ((char *)((unsigned short)((unsigned short)(i) * (unsigned short)0x72D0) + 0xC7E40C4))
#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define MDL(e) (*(char **)((e) + 0x2E0))
#define PAL(src) ((char *)0x0C6002D0 + (signed char)(B(src, 3) * 24))

static void model(char *e, char *src, int kind, int blend)
{
    FUN_0c06233a(MDL(e), PAL(src), kind);
    MDL(e)[0] = 1;
    H(MDL(e), 2) = blend;
    F(MDL(e), 64) = 1.0f;
}

static void mscale(char *e)
{
    F(MDL(e), 76) = 1.0f;
    F(MDL(e), 72) = 1.0f;
    F(MDL(e), 68) = 1.0f;
}

static void escale(char *e, float x, float y, float z)
{
    F(e, 80) = x;
    F(e, 84) = y;
    F(e, 88) = z;
}

void FUN_0c0bf488(char *src, char kind)
{
    char *e, *pl;

    e = FUN_0c059132(1, 1, 1, 0);
    if (e == 0)
        return;
    e[0] = 1;
    e[3] = src[3];
    e[1] = 1;
    H(e, 6) = 31;
    e[5] = 25;
    *(int *)(e + 16) = 0x0C0BF86E;
    *(VEC3 *)(e + 32) = *(VEC3 *)(src + 32);
    *(VEC3 *)(e + 44) = *(VEC3 *)(src + 44);
    F(e, 64) = 0.0f;
    F(e, 60) = 0.0f;
    F(e, 56) = 0.0f;
    escale(e, 0.0f, 0.0f, 0.0f);
    e[8] = kind;
    e[9] = 0;
    switch (kind) {
    case 0:
        model(e, src, 10, 543);
        mscale(e);
        escale(e, 1.0f, 1.0f, 1.0f);
        *(char **)(e + 28) = src;
        H(e, 0xEC) = 61;
        break;
    case 1:
        model(e, src, 11, 543);
        mscale(e);
        *(char **)(e + 28) = src;
        escale(e, 0.599999964f, 0.599999964f, 0.599999964f);
        pl = PL(B(src, 3));
        thunk_FUN_0c062242(pl + 0x300 + (short)(B(pl, 0x71F1) * 3520) + 0x160, (float *)(e + 32));
        H(e, 0xEC) = 20;
        break;
    case 2:
        model(e, src, 8, 543);
        mscale(e);
        escale(e, 1.0f, 1.0f, 1.0f);
        *(char **)(e + 28) = src;
        H(e, 0xEC) = 60;
        break;
    case 3:
        model(e, src, 9, 543);
        mscale(e);
        escale(e, 1.0f, 1.0f, 1.0f);
        *(char **)(e + 28) = src;
        H(e, 0xEC) = 60;
        break;
    case 4:
        model(e, src, 8, 1055);
        *(char **)(e + 28) = src;
        escale(e, 1.0f, 1.0f, 1.0f);
        H(e, 0xEC) = 30;
        break;
    case 5:
        model(e, src, 19, 1055);
        *(char **)(e + 28) = src;
        escale(e, 0.199999988f, 1.0f, 0.199999988f);
        H(e, 0xEC) = 60;
        break;
    case 6:
        model(e, src, 18, 1055);
        *(char **)(e + 28) = src;
        escale(e, 1.0f, 1.0f, 1.0f);
        H(e, 0xEC) = 60;
        break;
    case 7:
        model(e, src, 14, 543);
        mscale(e);
        *(char **)(e + 28) = src;
        escale(e, 0.0f, 0.0f, 0.0f);
        H(e, 0xEC) = 60;
        break;
    case 8:
        model(e, src, 13, 543);
        mscale(e);
        *(char **)(e + 28) = src;
        escale(e, 1.0f, 1.0f, 1.0f);
        H(e, 0xEC) = 20;
        break;
    }
}
