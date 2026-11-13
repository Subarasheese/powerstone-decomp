/* Spawns a flying-debris slot (type 1) for an object in one of three modes a5 (0: flung up, 1: dropped, 2: flung back): copies its character number and position records, points the child at the object's table entry (0x300 + 3520 per row + 1408 / 2112 / 176 / 352), tilts its angles by 0x4000 and sets its start height / time (FUN_0c09b068 - 10). */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);
extern char g7e40c4[];
extern char g_0c6002d0[];
extern void thunk_FUN_0c062242(char *, char *);
extern void FUN_0c06233a(char *, char *, int);
extern int FUN_0c09b068(char *);
extern void FUN_0c0be25c(void);

void FUN_0c0bdf9c(char *o, char a5)
{
    char *s, *c, *p;
    float z;

    s = FUN_0c059132(1, 1, 1, 0);
    if (s == 0) {
        return;
    }
    z = 0.0f;
    s[0] = 1;
    s[3] = o[3];
    s[1] = 1;
    *(void (**)(void))(s + 16) = FUN_0c0be25c;
    *(short *)(s + 6) = 31;
    s[5] = 25;
    *(S12 *)(s + 32) = *(S12 *)(o + 32);
    *(S12 *)(s + 44) = *(S12 *)(o + 44);
    *(float *)(s + 64) = z;
    *(float *)(s + 60) = z;
    *(float *)(s + 56) = z;
    *(float *)(s + 88) = 1.0f;
    *(float *)(s + 84) = 1.0f;
    *(float *)(s + 80) = 1.0f;
    c = *(char **)(s + 0x2E0);
    c[0] = 1;
    c = *(char **)(s + 0x2E0);
    *(short *)(c + 2) = 1055;
    FUN_0c06233a(*(char **)(s + 0x2E0), g_0c6002d0 + (signed char)(o[3] * 24), 2);
    p = g7e40c4 + (unsigned short)((unsigned short)o[3] * 0x72D0);
    if (a5 == 0) {
        thunk_FUN_0c062242(p + 0x300 + (short)(p[0x71F1] * 3520) + 1408, s + 32);
        c = *(char **)(s + 0x2E0);
        *(float *)(c + 36) = 0.699999988f;
        *(float *)(c + 32) = 0.699999988f;
        *(float *)(c + 28) = 0.699999988f;
        c = *(char **)(s + 0x2E0);
        *(int *)(c + 144) = (int)(o + 0x300 + (short)(o[0x71F1] * 3520) + 1408);
        c = *(char **)(s + 0x2E0);
        *(int *)(c + 16) = *(int *)(c + 16) + 0x4000;
        c = *(char **)(s + 0x2E0);
        *(float *)(c + 4) = *(float *)(c + 4) - 10.0f;
    } else if (a5 == 1) {
        thunk_FUN_0c062242(p + 0x300 + (short)(p[0x71F1] * 3520) + 2112, s + 32);
        c = *(char **)(s + 0x2E0);
        *(float *)(c + 36) = z;
        *(float *)(c + 32) = z;
        *(float *)(c + 28) = z;
        c = *(char **)(s + 0x2E0);
        *(int *)(c + 144) = (int)(o + 0x300 + (short)(o[0x71F1] * 3520) + 2112);
        c = *(char **)(s + 0x2E0);
        *(int *)(c + 16) = *(int *)(c + 16) + 0x4000;
        c = *(char **)(s + 0x2E0);
        *(float *)(c + 4) = *(float *)(c + 4) + z;
    } else if (a5 == 2) {
        thunk_FUN_0c062242(p + 0x300 + (short)(p[0x71F1] * 3520) + 176, s + 32);
        c = *(char **)(s + 0x2E0);
        *(float *)(c + 36) = z;
        *(float *)(c + 32) = z;
        *(float *)(c + 28) = z;
        c = *(char **)(s + 0x2E0);
        *(int *)(c + 144) = (int)(o + 0x300 + (short)(o[0x71F1] * 3520) + 352);
        c = *(char **)(s + 0x2E0);
        *(int *)(c + 16) = *(int *)(c + 16) - 0x4000;
        c = *(char **)(s + 0x2E0);
        *(int *)(c + 20) = *(int *)(c + 20) + 0x4000;
        c = *(char **)(s + 0x2E0);
        *(float *)(c + 12) = *(float *)(c + 12) + 20.0f;
    }
    c = *(char **)(s + 0x2E0);
    *(float *)(c + 64) = z;
    s[9] = a5;
    *(char **)(s + 28) = o;
    s[8] = 0;
    *(short *)(s + 236) = FUN_0c09b068(o) - 10;
    *(short *)(s + 238) = 0;
}
