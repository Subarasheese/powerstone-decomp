/* Spawns a burst effect for owner type a4 at position a6 (5 slots, FUN_0c059132(5,1,5,0)): initialises the parent and its first child record with the constant vectors at 0xC149AE0 / 0xC149AEC / 0xC149AF8 and random start angles, then fills children 1..4 with random angle, speed (10..19), lift (20..39 scaled) and a random life 4..7. */
struct V { int x, y, z; };
extern unsigned char *FUN_0c059132(int, int, int, int);
extern int FUN_0c06233a(unsigned char *, int, int);
extern float FUN_0c0df4d0(int);
extern float FUN_0c0df940(void);
extern float FUN_0c0dfa50(int);
extern int FUN_0c040a42(void);

#define RND(n) ((unsigned int)(FUN_0c0df940() * 255.0f) % (n))

void FUN_0c040550(char a4, char a5, struct V *a6)
{
    unsigned char *o;
    unsigned char *q;
    unsigned char *c;
    int base;
    int i;
    int ang;
    float f12;
    float f3;

    o = FUN_0c059132(5, 1, 5, 0);
    if (!o)
        return;
    o[0] = 1;
    o[3] = a4;
    o[1] = 1;
    *(short *)(o + 6) = 15;
    o[5] = 25;
    *(void **)(o + 16) = (void *)FUN_0c040a42;
    *(struct V *)(o + 32) = *a6;
    *(struct V *)(o + 80) = *(struct V *)0xC149AEC;
    *(struct V *)(o + 44) = *(struct V *)0xC149AF8;
    *(int *)(o + 280) = 0;
    q = *(unsigned char **)(o + 736);
    q[0] = 1;
    FUN_0c06233a(q, (signed char)(a4 * 24) + 0xC6002D0, a5 + 9);
    *(short *)(q + 2) = 543;
    *(struct V *)(q + 28) = *(struct V *)0xC149AE0;
    *(struct V *)(q + 16) = *(struct V *)0xC149AF8;
    *(int *)(q + 20) = (int)((float)(RND(36) * 10) * 65536.0f / 360.0f);
    *(struct V *)(q + 68) = *(struct V *)0xC149AEC;
    *(float *)(q + 48) = 0.125f;
    *(float *)(q + 44) = 0.125f;
    *(float *)(q + 40) = 0.125f;
    *(float *)(q + 64) = 10.0f;
    base = (signed char)(a4 * 24) + 0xC6002D0;
    for (i = 1; i < 5; i++) {
        c = *(unsigned char **)(o + 736 + 4 * i);
        c[0] = 0;
        *(float *)(c + 64) = 0.0f;
        FUN_0c06233a(c, base, i % 2 + 14);
        *(short *)(c + 2) = 575;
        *(struct V *)(c + 4) = *(struct V *)0xC149AE0;
        *(struct V *)(c + 28) = *(struct V *)0xC149AEC;
        *(struct V *)(c + 16) = *(struct V *)0xC149AF8;
        *(int *)(c + 24) = (int)((float)(RND(36) * 10) * 65536.0f / 360.0f);
        *(struct V *)(c + 68) = *(struct V *)0xC149AEC;
        ang = (int)((float)RND(16) * 1474560.0f / 360.0f);
        f12 = (float)RND(10) + 10.0f;
        *(float *)(c + 40) = FUN_0c0dfa50(ang) * f12;
        *(float *)(c + 48) = FUN_0c0df4d0(ang) * f12;
        f3 = (float)RND(20) + 20.0f;
        *(float *)(c + 44) = f3;
        *(float *)(c + 56) = -(f3 / 10.0f);
        *(int *)(c + 52) = RND(4) + 4;
    }
}
