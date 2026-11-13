/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c033c-0c0c07bc) */

char *obj_create(int a, int b, int c, int d);
void FUN_0c06233a(char *model, char *palette, int kind);
void FUN_0c0c0532(char *e);
typedef struct { float x, y, z; } VEC3;
#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define MDL(e, i) (*(char **)((e) + 0x2E0 + (i) * 4))

void FUN_0c0c033c(char *src, char kind)
{
    char *e;
    int i;

    e = obj_create(1, 1, 2, 0);
    if (e == 0)
        return;
    e[0] = 1;
    e[3] = src[3];
    e[1] = 1;
    H(e, 6) = 31;
    e[5] = 25;
    *(void (**)(char *))(e + 16) = FUN_0c0c0532;
    *(VEC3 *)(e + 32) = *(VEC3 *)(src + 32);
    *(VEC3 *)(e + 44) = *(VEC3 *)(src + 44);
    F(e, 64) = 0.0f;
    F(e, 60) = 0.0f;
    F(e, 56) = 0.0f;
    F(e, 88) = 1.0f;
    F(e, 84) = 1.0f;
    F(e, 80) = 1.0f;
    for (i = 0; i < 2; i++) {
        MDL(e, i)[0] = 1;
        H(MDL(e, i), 2) = 1055;
        FUN_0c06233a(MDL(e, i), (char *)0x0C6002D0 + (signed char)(B(src, 3) * 24), i);
        F(MDL(e, i), 64) = 1.0f;
    }
    *(char **)(e + 28) = src;
    e[9] = kind;
    if (kind == 0) {
        e[8] = 10;
        e[0x107] = 1;
        e[0x106] = 1;
        e[0x105] = 1;
        *(char **)(e + 0x118) = src + 0x300 + (short)(B(src, 0x71F1) * 3520) + 0x840;
        F(e, 32) = -20.0f;
        F(e, 36) = 0.0f;
        F(e, 40) = 0.0f;
        F(e, 80) = 0.0f;
        F(e, 84) = 0.0f;
        F(e, 88) = 0.0f;
        I(e, 44) = I(e, 44) + 0x4000;
        I(e, 52) = I(e, 52) + 910;
    } else if (kind == 10) {
        e[0x107] = 1;
        e[0x106] = 1;
        e[0x105] = 1;
        e[8] = 10;
        F(e, 32) = F(e, 32) + 0.0f;
        F(e, 36) = F(e, 36) + 100.0f;
        F(e, 40) = F(e, 40) + 0.0f;
        F(e, 80) = 0.0f;
        F(e, 84) = 0.0f;
        F(e, 88) = 0.0f;
        I(e, 44) = I(e, 44) - 0x4000;
        I(e, 48) = I(e, 48) + 0x4000;
    } else {
        return;
    }
    *(*(char **)(e + 0x2E4)) = 0;
    H(e, 0xEC) = 20;
    H(e, 0xEE) = 50;
    H(e, 0xF0) = 64;
}
