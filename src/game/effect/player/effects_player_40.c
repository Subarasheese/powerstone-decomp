/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c1360-0c0c18ec) */

char *obj_create(int a, int b, int c, int d);
void thunk_FUN_0c062242(char *slot, float *pos);
void obj_set_record_char(char *e, int action);
void FUN_0c06233a(char *model, char *palette, int kind);
int math_rand_next(void);
float math_rand_float(void);
typedef struct { float x, y, z; } VEC3;
#define PL(i) ((char *)((unsigned short)((unsigned short)(i) * (unsigned short)0x72D0) + 0xC7E40C4))
#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define PAL(src) ((char *)0x0C6002D0 + (signed char)(B(src, 3) * 24))

void FUN_0c0c1360(char *src, char kind)
{
    struct { char **next; } s;
    char *e, *m, *pl;
    int j;

    e = obj_create(1, 1, 10, 0);
    if (e == 0)
        return;
    e[0] = 1;
    e[1] = 1;
    e[3] = src[3];
    H(e, 6) = 1;
    e[5] = 25;
    e[8] = 0;
    e[9] = 0;
    H(e, 0xEC) = 0;
    H(e, 0xEE) = 0;
    e[4] = kind;
    *(char **)(e + 28) = src;
    pl = PL(B(src, 3));
    thunk_FUN_0c062242(pl + 0x300 + (short)(B(pl, 0x71F1) * 3520), (float *)(e + 32));
    *(VEC3 *)(e + 44) = *(VEC3 *)(src + 44);
    *(VEC3 *)(e + 80) = *(VEC3 *)0x0C33C764;
    I(e, 0x118) = 0;
    I(e, 16) = 0x0C0C15BE;
    e[0x101] = 2;
    e[0x102] = 0;
    e[0x106] = 1;
    e[0x107] = 1;
    obj_set_record_char(e, 112);
    m = *(char **)(e + 0x2E0);
    FUN_0c06233a(m, PAL(src), 2);
    m[0] = 1;
    H(m, 2) = 533;
    F(m, 8) = 0.0f;
    F(m, 68) = 1.0f;
    F(m, 72) = 1.0f;
    F(m, 76) = 1.0f;
    s.next = (char **)(e + 0x2E0 + 4);
    for (j = 1; j < 10; j++) {
        m = *s.next++;
        FUN_0c06233a(m, PAL(src), 1);
        m[0] = 1;
        H(m, 2) = 533;
        F(m, 4) = (float)(math_rand_next() % 100) + -50.0f;
        F(m, 8) = (float)(math_rand_next() % 200) + -100.0f;
        F(m, 12) = (float)(math_rand_next() % 100) + -50.0f;
        I(m, 20) = (int)((float)(math_rand_next() % 360) * 65536.0f / 360.0f + 0.5f) & 0xFFFF;
        F(m, 32) = 0.5f + 2.0f * math_rand_float();
        F(m, 68) = 1.0f;
        F(m, 72) = 1.0f;
        F(m, 76) = 1.0f;
    }
}
