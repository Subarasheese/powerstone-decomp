/* Spawns an effect slot (type 5) for an object: copies its character number, position floats and angles, installs FUN_0c0377ac as its handler, and fills the slot's child with three random angles (FUN_0c0df940 * 255 mod 360, scaled to 65536 per turn). */
extern char *FUN_0c059132(int, int, int, int);
extern char g_0c6002d0[];
extern void FUN_0c06233a(char *, char *, int);
extern float FUN_0c0df940(void);
extern void FUN_0c0377ac(void);

void FUN_0c0375d4(char *o)
{
    char *s, *c;
    int *d;

    s = FUN_0c059132(5, 1, 1, 0);
    if (s == 0) {
        return;
    }
    s[0] = 1;
    s[1] = 1;
    s[3] = o[3];
    *(void (**)(void))(s + 16) = FUN_0c0377ac;
    *(short *)(s + 6) = 15;
    s[5] = 25;
    *(char **)(s + 28) = o;
    *(float *)(s + 32) = *(float *)(o + 32);
    *(float *)(s + 36) = *(float *)(o + 36);
    *(float *)(s + 40) = *(float *)(o + 40);
    *(int *)(s + 44) = *(int *)(o + 44);
    *(int *)(s + 48) = *(int *)(o + 48);
    *(int *)(s + 52) = *(int *)(o + 52);
    *(float *)(s + 56) = 0.0f;
    *(float *)(s + 60) = 0.0f;
    *(float *)(s + 64) = 0.0f;
    FUN_0c06233a(*(char **)(s + 0x2E0), g_0c6002d0 + (signed char)(o[3] * 24), 18);
    c = *(char **)(s + 0x2E0);
    c[0] = 1;
    c = *(char **)(s + 0x2E0);
    *(short *)(c + 2) = 1055;
    c = *(char **)(s + 0x2E0);
    *(float *)(c + 28) = 0.0f;
    c = *(char **)(s + 0x2E0);
    *(float *)(c + 32) = 0.0f;
    c = *(char **)(s + 0x2E0);
    *(float *)(c + 36) = 0.0f;
    d = (int *)(*(char **)(s + 0x2E0) + 16);
    *d = (int)((float)((unsigned int)(FUN_0c0df940() * 255.0f) % 360) * 65536.0f / 360.0f);
    d = (int *)(*(char **)(s + 0x2E0) + 20);
    *d = (int)((float)((unsigned int)(FUN_0c0df940() * 255.0f) % 360) * 65536.0f / 360.0f);
    d = (int *)(*(char **)(s + 0x2E0) + 24);
    *d = (int)((float)((unsigned int)(FUN_0c0df940() * 255.0f) % 360) * 65536.0f / 360.0f);
    *(float *)(*(char **)(s + 0x2E0) + 64) = 1.0f;
}
