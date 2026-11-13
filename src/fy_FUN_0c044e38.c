/* Spawns a ring of eight particles (list 6/1, kind 8) around fighter a: primes the eight particle slots (pointers at +736) with FUN_0c06233a, places each at the fighter's block position (table byte 0xC14A640+i selects the offset, FUN_0c062242 fills the vector) plus a random jitter of -15..14 per axis, marks each as live (flag 1, short +2 = 33), and sets the effect's callback FUN_0c045048. */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);
extern void FUN_0c06233a(int a, int b, int c);
extern int thunk_FUN_0c062242(int, float *);
extern float FUN_0c0df940(void);
void FUN_0c044e38(char a)
{
    char *e;
    char *base;
    signed char *tbl = (signed char *)0xC14A640;
    float v[3];
    float k = -15.0f;
    float scale = 255.0f;
    int i, m;
    char *slot;

    e = FUN_0c059132(6, 1, 8, 0);
    if (e == 0)
        return;
    e[0] = 1;
    e[1] = 1;
    e[3] = a;
    *(short *)(e + 6) = 15;
    e[5] = 32;
    *(int *)(e + 16) = 0xC045048;
    *(int *)(e + 280) = 0;
    *(int *)(e + 52) = 0;
    *(int *)(e + 48) = 0;
    *(int *)(e + 44) = 0;
    *(float *)(e + 88) = 1.0f;
    *(float *)(e + 84) = 1.0f;
    *(float *)(e + 80) = 1.0f;
    base = (char *)(0xC7E40C4 + (unsigned short)(a * 29392));
    for (i = 0; i < 8; i++) {
        FUN_0c06233a(*(int *)(e + 736 + i * 4), 0xC4CFA68, 92);
        m = base[0x71F1];
        thunk_FUN_0c062242((int)(base + 768 + (short)(m * 3520) + (short)(tbl[i] * 176)), v);
        v[0] = v[0] + ((float)((unsigned)(FUN_0c0df940() * scale) % 30) + k);
        v[1] = v[1] + ((float)((unsigned)(FUN_0c0df940() * scale) % 30) + k);
        v[2] = v[2] + ((float)((unsigned)(FUN_0c0df940() * scale) % 30) + k);
        slot = (char *)*(int *)(e + 736 + i * 4);
        *(S12 *)(slot + 4) = *(S12 *)v;
        *slot = 1;
        *(short *)(slot + 2) = 33;
    }
}
