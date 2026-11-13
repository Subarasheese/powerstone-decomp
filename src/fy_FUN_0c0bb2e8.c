/* Spawns a projectile (list 1/1, kind 3) from the shooter a with variant b: copies the shooter's colour words, sets its callback FUN_0c0bb4f2, scale 1.0, position offset by the variant's table entries (0xC33C378 amplitude / 0xC33C3B8 angle in degrees, cos for x and sin for z), tags it with b and primes its three trail particles (pointers at +736) with FUN_0c06233a, then clears the shooter-linked flag. */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);
extern int thunk_FUN_0c062242(int, float *);
extern float FUN_0c0df4d0(int a);
extern float FUN_0c0dfa50(int a);
extern void FUN_0c0a1d88(char *e, int a);
extern void FUN_0c06233a(int a, char *b, int c);
void FUN_0c0bb2e8(char *a, char b)
{
    char *e;
    char *base;
    float one, two, amp, cs;
    int i, k, m, ang;

    e = FUN_0c059132(1, 1, 3, 0);
    if (e == 0)
        return;
    e[0] = 1;
    e[1] = 1;
    e[3] = a[3];
    *(int *)(e + 16) = 0xC0BB4F2;
    *(int *)(e + 28) = (int)a;
    *(short *)(e + 6) = 31;
    e[5] = 25;
    one = 1.0f;
    *(int *)(e + 44) = *(int *)(a + 44);
    *(int *)(e + 48) = *(int *)(a + 48);
    *(int *)(e + 52) = *(int *)(a + 52);
    *(float *)(e + 80) = one;
    *(float *)(e + 84) = one;
    *(float *)(e + 88) = one;
    k = (unsigned short)(a[3] * 29392);
    base = (char *)(0xC7E40C4 + k);
    m = (signed char)base[0x71F1];
    thunk_FUN_0c062242((int)(base + 768 + (short)(m * 3520)), (float *)(e + 32));
    amp = *(float *)(0xC33C378 + (unsigned char)b * 4);
    ang = (int)(*(float *)(0xC33C3B8 + (unsigned char)b * 4) * 65536.0f / 360.0f);
    cs = FUN_0c0df4d0(ang + 16384);
    *(float *)(e + 32) = *(float *)(e + 32) + cs * amp;
    ang = (int)(*(float *)(0xC33C3B8 + (unsigned char)b * 4) * 65536.0f / 360.0f);
    cs = FUN_0c0dfa50(ang + 16384);
    *(float *)(e + 40) = *(float *)(e + 40) + cs * amp;
    *(short *)(e + 242) = (unsigned char)b;
    e[257] = 1;
    e[258] = 1;
    FUN_0c0a1d88(e, 120);
    two = 2.0f;
    for (i = 0; i < 3; i++) {
        FUN_0c06233a(*(int *)(e + 736 + i * 4), (char *)(0xC6002D0 + (signed char)(a[3] * 24)), i + 2);
        *(char *)*(int *)(e + 736 + i * 4) = 1;
        *(short *)(*(int *)(e + 736 + i * 4) + 2) = 31;
        *(float *)(*(int *)(e + 736 + i * 4) + 28) = one;
        *(float *)(*(int *)(e + 736 + i * 4) + 32) = one;
        *(float *)(*(int *)(e + 736 + i * 4) + 36) = two;
    }
    **(char **)(e + 740) = 0;
}
