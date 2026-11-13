/* Spawns a hit-spark slot (type 1) for an object: copies its character number, position and angle records, takes the target position table entry (0xC7E40C4 + 0x72D0 per player, row from the byte at +0x71F1), starts its child, and either offsets the angle by 0xF8E4 (mode 0) or aims it at the other player (mode 1) with FUN_0c0df340 / FUN_0c0df400. */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);
extern char g7e40c4[];
extern char g_0c6002d0[];
extern void thunk_FUN_0c062242(char *, char *);
extern void FUN_0c0a1d88(char *, int);
extern void FUN_0c06233a(char *, char *, int);
extern float FUN_0c0df340(float);
extern int FUN_0c0df400(float, float);
extern void FUN_0c0bc3da(void);

void FUN_0c0bc1ec(char *o, char a5)
{
    char *s, *c, *p;
    float d[3];
    float fx, fz;
    int n;

    s = FUN_0c059132(1, 1, 1, 0);
    if (s == 0) {
        return;
    }
    s[0] = 1;
    s[3] = o[3];
    s[1] = 1;
    *(void (**)(void))(s + 16) = FUN_0c0bc3da;
    *(short *)(s + 6) = 31;
    s[5] = 25;
    *(S12 *)(s + 32) = *(S12 *)(o + 32);
    *(S12 *)(s + 44) = *(S12 *)(o + 44);
    *(float *)(s + 64) = 0.0f;
    *(float *)(s + 60) = 0.0f;
    *(float *)(s + 56) = 0.0f;
    *(float *)(s + 88) = 1.0f;
    *(float *)(s + 84) = 1.0f;
    *(float *)(s + 80) = 1.0f;
    p = g7e40c4 + (unsigned short)((unsigned short)o[3] * 0x72D0);
    thunk_FUN_0c062242(p + 0x300 + (short)(p[0x71F1] * 3520) + 1408, s + 32);
    s[0x101] = 1;
    s[0x102] = 1;
    FUN_0c0a1d88(s, 113);
    c = *(char **)(s + 0x2E0);
    c[0] = 1;
    c = *(char **)(s + 0x2E0);
    *(short *)(c + 2) = 15;
    FUN_0c06233a(*(char **)(s + 0x2E0), g_0c6002d0 + (signed char)(o[3] * 24), 0);
    *(char **)(s + 28) = o;
    *(short *)(s + 236) = 180;
    s[8] = a5;
    s[9] = 0;
    if (a5 == 0) {
        *(int *)(s + 44) = (unsigned short)(*(int *)(s + 44) + 0xF8E4);
    } else if (a5 == 1) {
        p = g7e40c4 + (unsigned short)((unsigned short)(1 - s[3]) * 0x72D0);
        thunk_FUN_0c062242(p + 0x300 + (short)(p[0x71F1] * 3520), (char *)d);
        d[1] = d[1] - *(float *)(s + 36);
        d[0] = d[0] - *(float *)(s + 32);
        d[2] = d[2] - *(float *)(s + 40);
        fx = d[0];
        fz = d[2];
        n = (int)FUN_0c0df340(fz * fz + d[0] * fx);
        *(int *)(s + 44) = FUN_0c0df400((float)n, d[1]) - 0x4000;
    }
}
