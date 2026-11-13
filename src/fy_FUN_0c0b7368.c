/* Spawns a thrown projectile (list 1/1, kind 2) from the shooter a with throw type b (0..3): copies the shooter's position words, sets its callback FUN_0c0b7590 and two trail particles (pointers at +736, FUN_0c06233a), links it to the shooter (+28), sets timer 180 and, per type, its velocity (30 * cos/sin of the shooter's angle, type 1 and 3 first turn the angle word +44 by 8192) before FUN_0c0a1d88 starts it with 112 (types 0 and 1) or 115 (types 2 and 3). */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);
extern int thunk_FUN_0c062242(int, float *);
extern void FUN_0c06233a(int a, char *b, int c);
extern float FUN_0c0df4d0(int a);
extern float FUN_0c0dfa50(int a);
extern void FUN_0c0a1d88(char *e, int a);
void FUN_0c0b7368(char *a, char b)
{
    char *e;
    char *base;
    float one, k30;
    int i, m;

    e = FUN_0c059132(1, 1, 2, 0);
    if (e == 0)
        return;
    e[0] = 1;
    e[3] = a[3];
    e[1] = 1;
    *(short *)(e + 6) = 15;
    e[5] = 25;
    *(int *)(e + 16) = 0xC0B7590;
    *(S12 *)(e + 32) = *(S12 *)(a + 32);
    *(S12 *)(e + 44) = *(S12 *)(a + 44);
    one = 1.0f;
    *(float *)(e + 88) = one;
    *(float *)(e + 84) = one;
    *(float *)(e + 80) = one;
    base = (char *)(0xC7E40C4 + (unsigned short)(a[3] * 29392));
    m = (signed char)base[0x71F1];
    thunk_FUN_0c062242((int)(base + 768 + (short)(m * 3520) + 1408), (float *)(e + 32));
    for (i = 0; i < 2; i++) {
        *(char *)*(int *)(e + 736 + i * 4) = 1;
        *(short *)(*(int *)(e + 736 + i * 4) + 2) = 31;
        FUN_0c06233a(*(int *)(e + 736 + i * 4), (char *)(0xC6002D0 + (signed char)(a[3] * 24)), i);
        *(float *)(*(int *)(e + 736 + i * 4) + 36) = one;
        *(float *)(*(int *)(e + 736 + i * 4) + 32) = one;
        *(float *)(*(int *)(e + 736 + i * 4) + 28) = one;
    }
    *(int *)(e + 28) = (int)a;
    *(short *)(e + 236) = 180;
    e[776] = 5;
    e[777] = 0;
    e[257] = 1;
    e[258] = 1;
    e[8] = b;
    k30 = 30.0f;
    switch (b) {
    case 0:
    case 1:
        if (b == 1)
            *(int *)(e + 44) = (unsigned short)(*(int *)(e + 44) + 8192);
        *(short *)(e + 238) = 1;
        *(short *)(e + 240) = 0;
        FUN_0c0a1d88(e, 112);
        break;
    case 2:
    case 3:
        if (b == 3)
            *(int *)(e + 44) = (unsigned short)(*(int *)(e + 44) + 8192);
        *(float *)(e + 56) = FUN_0c0df4d0(0x14000 - *(int *)(e + 48)) * k30;
        if (b == 2) {
            *(float *)(e + 60) = 0.0f;
        } else {
            *(float *)(e + 60) = -(FUN_0c0df4d0(0x14000 - *(int *)(e + 44)) * k30);
        }
        *(float *)(e + 64) = FUN_0c0dfa50(0x14000 - *(int *)(e + 48)) * k30;
        FUN_0c0a1d88(e, 115);
        break;
    }
}
