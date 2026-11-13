/* 3-state object update (state byte at +8): state 0 launches it from its owner, state 1 moves it or hands it on, state 2 frees it. */
struct v3 { int a, b, c; };
extern float FUN_0c0df4d0(int);
extern float FUN_0c0dfa50(int);
extern int FUN_0c0ac5c4(char *);
extern char FUN_0c026554(char *);
extern void FUN_0c0abe44(char *, int, int);
extern void FUN_0c0e21b0(char *, char *);
extern void FUN_0c059330(char *);
extern void thunk_FUN_0c062242(int, float *);
extern void FUN_0c0c07bc(char *, float *, float *, int, float);

void FUN_0c05be4a(char *o)
{
    char *p;
    float s;
    float *tab;
    float A[3], B[3];
    char *base;
    int b;

    switch (o[8]) {
    case 0:
        p = *(char **)(o + 0x1C);
        o[3] = 2;
        o[8] = o[8] + 1;
        *(int *)(o + 0x1C) = 0;
        o[0x107] = 0;
        *(int *)(o + 0x118) = 0;
        s = *(float *)(p + 0x7298);
        *(struct v3 *)(o + 32) = *(struct v3 *)(p + 32);
        *(float *)(o + 32) = *(float *)(o + 32) + 100.0f * (FUN_0c0df4d0(0x14000 - *(int *)(p + 48)) * s);
        *(float *)(o + 36) = *(float *)(o + 36) + 180.0f * s;
        *(float *)(o + 40) = *(float *)(o + 40) + 100.0f * (FUN_0c0dfa50(0x14000 - *(int *)(p + 48)) * s);
        *(struct v3 *)(o + 44) = *(struct v3 *)(p + 44);
        tab = (float *)(0xC33C05C + 24 * p[4]);
        if (o[0x30C] == 9)
            s = tab[1];
        else
            s = tab[0];
        *(struct v3 *)A = *(struct v3 *)(o + 32);
        base = (char *)0xC7E40C4 + (unsigned short)((unsigned short)(1 - p[3]) * (unsigned short)0x72D0);
        b = *(signed char *)(base + 0x71F1);
        thunk_FUN_0c062242((int)(base + 0x300 + 0x2C0 + (short)(b * 3520)), B);
        FUN_0c0c07bc(o + 56, A, B, *(int *)(p + 48), s);
        *(struct v3 *)(o + 68) = *(struct v3 *)0xC336298;
        return;
    case 1:
        if (FUN_0c0ac5c4(o) != 0) {
            FUN_0c0abe44(o, 17, o[3]);
            return;
        }
        if (FUN_0c026554(o) != 0) {
            FUN_0c0abe44(o, 0, o[3]);
            return;
        }
        *(int *)(o + 0x2C) = *(int *)(o + 0x2C) + 910;
        FUN_0c0e21b0(o + 32, o + 56);
        FUN_0c0e21b0(o + 56, o + 68);
        return;
    case 2:
        FUN_0c059330(o);
        return;
    default:
        return;
    }
}
