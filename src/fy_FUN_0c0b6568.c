/* Spawns a projectile slot (type 2) for a shot fired from position a with the heading stored in b: fills its state bytes, copies the positions, sets the speeds from the cos/sin of the heading (x 30.0), starts its handler FUN_0c0b6702 and sets up the child effect at +0x2E0 with a random angle. */
typedef struct { int a, b, c; } S12;
typedef struct { char used; char s1; char pad2; char s3; char pad4; char s5; short h6; char s8; char s9; } Hd;
extern char *FUN_0c059132(int, int, int, int);
extern float FUN_0c0df4d0(int);
extern float FUN_0c0dfa50(int);
extern void FUN_0c0a1e0a(char *, int);
extern void FUN_0c06233a(char *, char *, int);
extern int FUN_0c0df920(void);
extern void FUN_0c0b6702(void);

void FUN_0c0b6568(S12 *a, S12 *b, char c, char d)
{
    char *s;
    char *t;
    int x;

    s = FUN_0c059132(2, 1, 1, 0);
    if (s == 0) {
        return;
    }
    s[0] = 1;
    s[1] = 1;
    s[3] = c;
    *(short *)(s + 6) = 1;
    s[5] = 25;
    s[8] = 0;
    s[9] = 0;
    *(short *)(s + 0xEC) = 0;
    *(short *)(s + 0xEE) = 0;
    *(S12 *)(s + 32) = *a;
    *(S12 *)(s + 44) = *b;
    *(S12 *)(s + 80) = *(S12 *)0xC33C1EC;
    *(float *)(s + 56) = FUN_0c0df4d0(0x14000 - ((int *)b)[1]) * 30.0f;
    *(float *)(s + 60) = 0.0f;
    *(float *)(s + 64) = FUN_0c0dfa50(0x14000 - ((int *)b)[1]) * 30.0f;
    *(float *)(s + 68) = *(float *)(s + 56) / -30.0f;
    *(float *)(s + 72) = 0.0999999940f;
    *(float *)(s + 76) = *(float *)(s + 64) / -30.0f;
    if (d != 0) {
        s[0x101] = 5;
        s[0x105] = 0;
    } else {
        s[0x101] = 0;
        s[0x105] = 1;
    }
    s[0x106] = 1;
    s[0x107] = 1;
    FUN_0c0a1e0a(s, 4);
    *(int *)(s + 0x118) = 0;
    *(void (**)(void))(s + 16) = FUN_0c0b6702;
    t = *(char **)(s + 0x2E0);
    FUN_0c06233a(t, (char *)0xC4CFA68, 72);
    t[0] = 1;
    *(short *)(t + 2) = 569;
    x = FUN_0c0df920();
    *(int *)(t + 24) = (int)((float)(x % 360) * 65536.0f / 360.0f + 0.5f) & 0xFFFF;
    *(S12 *)(t + 28) = *(S12 *)0xC33C1F8;
    *(float *)(t + 68) = 0.0f;
    *(float *)(t + 72) = 0.0f;
    *(float *)(t + 76) = 0.0f;
}
