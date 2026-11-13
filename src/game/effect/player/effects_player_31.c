/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0bed78-0c0bf488) */

char *obj_create(int a, int b, int c, int d);
void FUN_0c0bf046(char *e);
void obj_set_record_char(char *e, int action);
void FUN_0c06233a(char *model, char *palette, int kind);
typedef struct { float x, y, z; } VEC3;
#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define MDL(e, i) (*(char **)((e) + 0x2E0 + (i) * 4))
#define PAL(src) ((char *)0x0C6002D0 + (signed char)(B(src, 3) * 24))

void FUN_0c0bed78(char *src, char kind)
{
    char *e;

    e = obj_create(1, 1, 5, 0);
    if (e == 0)
        return;
    e[0] = 1;
    e[3] = src[3];
    e[1] = 1;
    H(e, 6) = 31;
    e[5] = 25;
    *(void (**)(char *))(e + 16) = FUN_0c0bf046;
    *(VEC3 *)(e + 32) = *(VEC3 *)(src + 32);
    F(e, 56) = 0.0f;
    F(e, 60) = -40.0f;
    F(e, 64) = 0.0f;
    F(e, 68) = 0.0f;
    F(e, 72) = -1.0f;
    F(e, 76) = 0.0f;
    F(e, 88) = 1.0f;
    F(e, 84) = 1.0f;
    F(e, 80) = 1.0f;
    I(e, 44) = 0x4000;
    I(e, 48) = 0;
    I(e, 52) = 0;
    *(char **)(e + 28) = src;
    e[1] = 0;
    e[15] = kind;
    e[0x101] = 2;
    e[0x102] = 2;
    if (B(e, 15) >= 5)
        obj_set_record_char(e, 113);
    else
        obj_set_record_char(e, 117);
    e[0x107] = 1;
    e[0x106] = 1;
    e[0x105] = 1;
    FUN_0c06233a(MDL(e, 0), PAL(src), 0);
    MDL(e, 0)[0] = 1;
    H(MDL(e, 0), 2) = 1055;
    F(MDL(e, 0), 64) = 1.0f;
    F(MDL(e, 0), 36) = 3.0f;
    H(e, 0xEC) = ((unsigned char *)0x0C33C600)[B(e, 15)] + 10;
    FUN_0c06233a(MDL(e, 1), PAL(src), 1);
    MDL(e, 1)[0] = 1;
    H(MDL(e, 1), 2) = 1055;
    F(MDL(e, 1), 64) = 1.0f;
    F(MDL(e, 1), 36) = 3.0f;
    FUN_0c06233a(MDL(e, 2), PAL(src), 15);
    MDL(e, 2)[0] = 1;
    H(MDL(e, 2), 2) = 1055;
    F(MDL(e, 2), 64) = 1.0f;
    F(MDL(e, 2), 12) = F(MDL(e, 2), 12) + 350.0f;
    F(MDL(e, 2), 28) = 0.0f;
    F(MDL(e, 2), 32) = 0.0f;
    F(MDL(e, 2), 36) = 0.0f;
    FUN_0c06233a(MDL(e, 3), PAL(src), 16);
    MDL(e, 3)[0] = 1;
    H(MDL(e, 3), 2) = 1055;
    F(MDL(e, 3), 64) = 1.0f;
    F(MDL(e, 3), 12) = F(MDL(e, 3), 12) + 100.0f;
    F(MDL(e, 3), 28) = 0.0f;
    F(MDL(e, 3), 32) = 0.0f;
    F(MDL(e, 3), 36) = 0.0f;
    H(e, 0xEE) = 10;
    FUN_0c06233a(MDL(e, 4), PAL(src), 17);
    MDL(e, 4)[0] = 1;
    H(MDL(e, 4), 2) = 1055;
    F(MDL(e, 4), 64) = 1.0f;
    F(MDL(e, 4), 12) = F(MDL(e, 4), 12) - 100.0f;
    F(MDL(e, 4), 28) = 1.0f;
    F(MDL(e, 4), 32) = 1.0f;
    F(MDL(e, 4), 36) = 1.0f;
}
