/* Spawns a spark effect slot (type 5) for an object: copies its character number, position and angle records, scatters it with random offsets and velocities (FUN_0c0df940 * 255 mod 20 / 16, through cos and sin of a random angle), and initialises the slot's children from the object tables. */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);
extern float FUN_0c0df940(void);
extern float FUN_0c0dfa50(int);
extern float FUN_0c0df4d0(int);
extern void FUN_0c06233a(char *, char *, int);
extern char g_0c6002d0[];
extern void FUN_0c03449e(void);

void FUN_0c0342a0(char *o)
{
    char *s, *c;
    int i, ang;
    float sn, cs, r;

    s = FUN_0c059132(5, 1, 1, 0);
    if (s == 0) {
        return;
    }
    s[0] = 1;
    s[3] = o[3];
    s[1] = 1;
    *(short *)(s + 6) = 15;
    *(char **)(s + 28) = o;
    s[5] = (o[3] != 0) ? 4 : 2;
    *(void (**)(void))(s + 16) = FUN_0c03449e;
    *(S12 *)(s + 44) = *(S12 *)(o + 44);
    *(S12 *)(s + 32) = *(S12 *)(o + 32);
    r = (float)((unsigned int)(FUN_0c0df940() * 255.0f) % 20);
    *(float *)(s + 36) = *(float *)(s + 36) + (50.0f + 20.0f * r);
    ang = ((unsigned int)(FUN_0c0df940() * 255.0f) % 16) << 12;
    sn = FUN_0c0dfa50(ang);
    cs = FUN_0c0df4d0(ang);
    *(float *)(s + 32) = *(float *)(s + 32) + 150.0f * sn;
    *(float *)(s + 40) = *(float *)(s + 40) + 150.0f * cs;
    *(float *)(s + 60) = -2.0f;
    ang = ((unsigned int)(FUN_0c0df940() * 255.0f) % 16) << 10;
    sn = FUN_0c0dfa50(ang);
    cs = FUN_0c0df4d0(ang);
    *(float *)(s + 56) = -(sn * 2.0f);
    *(float *)(s + 64) = -(cs * 2.0f);
    for (i = 0; i < *(signed char *)(s + 0x2DC); i++) {
        c = *(char **)(s + 0x2E0 + i * 4);
        c[0] = 1;
        *(short *)(c + 2) = 15;
        FUN_0c06233a(c, g_0c6002d0 + (signed char)(o[3] * 24), *(int *)0xC149650);
    }
}
