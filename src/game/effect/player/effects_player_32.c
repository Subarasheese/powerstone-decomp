/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0bf488-0c0bfe20) */

char *obj_create(int a, int b, int c, int d);
void FUN_0c06233a(char *model, char *palette, int kind);
void thunk_math_mat_get_translate(char *slot, float *pos);
typedef struct { float x, y, z; } VEC3;
#define PL(i) ((char *)((unsigned short)((unsigned short)(i) * (unsigned short)0x72D0) + 0xC7E40C4))
#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define MDL(e) (*(char **)((e) + 0x2E0))
#define PAL(src) ((char *)0x0C6002D0 + (signed char)(B(src, 3) * 24))

static void escale(char *e, float x, float y, float z)
{
    F(e, 80) = x;
    F(e, 84) = y;
    F(e, 88) = z;
}

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

void FUN_0c0bf488(char *src, char kind)
{
    char *e, *pl;

    e = obj_create(1, 1, 1, 0);
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
        thunk_math_mat_get_translate(pl + 0x300 + (short)(B(pl, 0x71F1) * 3520) + 0x160, (float *)(e + 32));
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
