/* Spawns a thrown item (type-2 object) of the given kind (0..3) at src with a random phase from FUN_0c0df920, then a child effect object (FUN_0c06233a) animated by that phase and tinted by the kind. */
struct V3 { float x, y, z; };
char *FUN_0c059132(int, int, int, int);
int FUN_0c0df920(void);
void FUN_0c0a1e0a(char *, int);
void FUN_0c06233a(char *, int, int);
void FUN_0c0b6a9c(struct V3 *src, signed char kind)
{
    char *o;
    char *p;
    int phase;

    o = FUN_0c059132(2, 1, 2, 0);
    if (o == 0)
        return;
    o[0] = 1;
    o[1] = 1;
    o[3] = 2;
    *(short *)(o + 6) = 1;
    o[5] = 25;
    o[8] = 0;
    o[9] = 0;
    *(short *)(o + 0xEC) = 0;
    *(short *)(o + 0xEE) = FUN_0c0df920() % 16;
    *(void (**)(void))(o + 16) = (void (*)(void))0xC0B6C5C;
    o[0x30e] = kind;
    o[0x30f] = 2;
    switch (kind) {
    case 0:
    case 3:
        o[0x101] = 6;
        o[0x102] = 14;
        FUN_0c0a1e0a(o, 10);
        break;
    case 1:
        o[0x101] = 33;
        o[0x102] = 14;
        FUN_0c0a1e0a(o, 38);
        break;
    case 2:
        o[0x101] = 21;
        o[0x102] = 14;
        FUN_0c0a1e0a(o, 64);
        break;
    }
    o[0x106] = 1;
    *(struct V3 *)(o + 32) = *src;
    *(struct V3 *)(o + 44) = *(struct V3 *)0xC33C270;
    *(struct V3 *)(o + 80) = *(struct V3 *)0xC33C264;
    *(struct V3 *)(o + 56) = *(struct V3 *)0xC33C258;
    *(struct V3 *)(o + 68) = *(struct V3 *)0xC33C27C;
    p = *(char **)(o + 0x2e0);
    phase = *(short *)(o + 0xEE);
    FUN_0c06233a(p, 0xC4CFA68, 132 + phase / 2 % 8);
    p[0] = 1;
    *(short *)(p + 2) = 561;
    *(float *)(p + 68) = 1.0f;
    *(float *)(p + 72) = 1.0f;
    *(float *)(p + 76) = 1.0f;
    switch (kind) {
    case 0:
        *(float *)(p + 28) = 0.699999988f;
        *(float *)(p + 32) = 0.699999988f;
        break;
    case 1:
    case 2:
        *(float *)(p + 28) = 1.0f;
        *(float *)(p + 32) = 1.0f;
        break;
    case 3:
        *(float *)(p + 28) = 1.5f;
        *(float *)(p + 32) = 1.0f;
        break;
    }
}
