/* Spawns a burst slot (type 5) with a5 child particles: each child gets its three records (from the optional arrays a7 / a8 / a9, else a default record), a random angle (FUN_0c0df940 * 255 mod 16, shifted into a 65536-per-turn angle) and the child initialisation FUN_0c06233a; returns the slot or 0. */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);
extern void FUN_0c06233a(char *, char *, int);
extern float FUN_0c0df940(void);
extern void FUN_0c043706(void);

char *FUN_0c042f48(char a4, char a5, char a6, S12 *a7, S12 *a8, S12 *a9)
{
    char *s, *c;
    int i, n;

    s = FUN_0c059132(5, 1, a5, 0);
    if (s == 0) {
        return 0;
    }
    s[0] = 1;
    s[3] = a4;
    s[4] = a6;
    *(short *)(s + 6) = 15;
    s[5] = 25;
    *(void (**)(void))(s + 16) = FUN_0c043706;
    *(int *)(s + 52) = 0;
    *(int *)(s + 48) = 0;
    *(int *)(s + 44) = 0;
    *(float *)(s + 88) = 1.0f;
    *(float *)(s + 84) = 1.0f;
    *(float *)(s + 80) = 1.0f;
    *(int *)(s + 0x118) = 0;
    n = a5;
    if (n > 0) {
        i = 0;
        do {
            FUN_0c06233a(*(char **)(s + 0x2E0 + (signed char)i * 4), (char *)0xC4CFA68, 33);
            c = *(char **)(s + 0x2E0 + (signed char)i * 4);
            c[0] = 0;
            c = *(char **)(s + 0x2E0 + (signed char)i * 4);
            *(short *)(c + 2) = 1592;
            if (a7 != 0) {
                *(S12 *)(*(char **)(s + 0x2E0 + (signed char)i * 4) + 4) = a7[(signed char)i];
            } else {
                *(S12 *)(*(char **)(s + 0x2E0 + (signed char)i * 4) + 4) = *(S12 *)0xC149DD0;
            }
            if (a8 != 0) {
                *(S12 *)(*(char **)(s + 0x2E0 + (signed char)i * 4) + 40) = a8[(signed char)i];
            } else {
                *(S12 *)(*(char **)(s + 0x2E0 + (signed char)i * 4) + 40) = *(S12 *)0xC149DD0;
            }
            if (a9 != 0) {
                *(S12 *)(*(char **)(s + 0x2E0 + (signed char)i * 4) + 52) = a9[i];
            } else {
                *(S12 *)(*(char **)(s + 0x2E0 + (signed char)i * 4) + 52) = *(S12 *)0xC149DD0;
            }
            *(int *)(*(char **)(s + 0x2E0 + i * 4) + 24) = ((unsigned int)(FUN_0c0df940() * 255.0f) % 16) << 12;
            i++;
        } while ((signed char)i < n);
    }
    return s;
}
