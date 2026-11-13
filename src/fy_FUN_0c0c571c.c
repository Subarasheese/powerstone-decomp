/* Spawns the marker slot (type 1) for a fighter object: copies its character number and position records, installs FUN_0c0c5920 as its handler, and fills the three child slots (list at +0x2E0) from the object's tables; returns the slot, or 0 when none is free. */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);
extern char g7e40c4[];
extern char g_0c6002d0[];
extern void thunk_FUN_0c062242(char *, char *);
extern void FUN_0c0a1d88(char *, int);
extern void FUN_0c06233a(char *, char *, int);
extern void FUN_0c0c5920(void);

char *FUN_0c0c571c(char *o, char a5)
{
    char *s, *c, *p;
    int i, v;

    s = FUN_0c059132(1, 1, 3, 0);
    if (s == 0) {
        return 0;
    }
    s[0] = 1;
    s[3] = o[3];
    s[1] = 1;
    *(short *)(s + 6) = 31;
    s[5] = (o[3] != 0) ? 4 : 2;
    *(void (**)(void))(s + 16) = FUN_0c0c5920;
    p = g7e40c4 + (unsigned short)((unsigned short)o[3] * 0x72D0);
    thunk_FUN_0c062242(p + 0x300 + (short)(p[0x71F1] * 3520) + 1408, s + 32);
    *(S12 *)(s + 44) = *(S12 *)(o + 44);
    *(char **)(s + 28) = o;
    s[4] = a5;
    s[0x101] = 1;
    s[0x102] = 1;
    FUN_0c0a1d88(s, s[4] * 3 + 120);
    for (i = 0; i < 3; i++) {
        c = *(char **)(s + 0x2E0 + i * 4);
        c[0] = 1;
        *(short *)(c + 2) = 31;
        FUN_0c06233a(c, g_0c6002d0 + (signed char)(o[3] * 24), 0);
        c = *(char **)(s + 0x2E0 + i * 4);
        *(float *)(c + 36) = 1.0f;
        *(float *)(c + 32) = 1.0f;
        *(float *)(c + 28) = 1.0f;
        if (i == 0) {
            v = *(int *)(o + 7808 + (short)(o[0x71F1] * 5280) + 848);
            *(int *)(c + 156) = v;
        } else if (i == 1) {
            v = *(int *)(o + 7808 + (short)(o[0x71F1] * 5280) + 1024);
            *(int *)(c + 156) = v;
        } else if (i == 2) {
            v = *(int *)(o + 21888 + (short)(o[0x71F1] * 1760) + 144);
            *(int *)(c + 156) = v;
        }
    }
    s[0x308] = 1;
    return s;
}
