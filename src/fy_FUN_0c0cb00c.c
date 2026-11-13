/* Spawns a two-particle spark effect (list 1/1, kind 2) at the shooter a: copies its position, sets the template words, primes the two particles (pointers at +736/+740 via FUN_0c06233a), gives the second a random size (u % 6 / 10 + 0.5, its quarter) and a random frame (u % 4 + 1), then hands the effect to FUN_0c0cb3b8. */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);
extern void FUN_0c06233a(int a, char *b, int c);
extern float FUN_0c0df940(void);
extern void FUN_0c0cb3b8(char *e);
void FUN_0c0cb00c(char *a)
{
    char *e;
    char *p;
    S12 *t1 = (S12 *)0xC1533A4;
    S12 *t2 = (S12 *)0xC1533B0;
    float f;
    unsigned u;

    e = FUN_0c059132(1, 1, 2, 0);
    if (e == 0)
        return;
    e[0] = 1;
    e[3] = a[3];
    e[1] = 1;
    *(short *)(e + 6) = 15;
    e[5] = 25;
    *(int *)(e + 16) = 0xC0CB344;
    *(S12 *)(e + 32) = *(S12 *)(a + 32);
    *(S12 *)(e + 80) = *t1;
    *(S12 *)(e + 44) = *t2;
    *(int *)(e + 280) = 0;
    e[257] = 0;
    e[258] = 0;
    e[261] = 1;
    e[262] = 1;
    e[263] = 1;
    p = (char *)*(int *)(e + 736);
    *p = 1;
    FUN_0c06233a((int)p, (char *)(0xC6002D0 + (signed char)(e[3] * 24)), 8);
    *(short *)(p + 2) = 543;
    *(S12 *)(p + 4) = *(S12 *)0xC153398;
    *(S12 *)(p + 16) = *t2;
    *(float *)(p + 28) = 0.899999976f;
    *(float *)(p + 32) = 0.0999999940f;
    *(float *)(p + 40) = 0.0199999996f;
    *(float *)(p + 44) = 0.399999976f;
    *(int *)(p + 52) = 8;
    *(S12 *)(p + 68) = *t1;
    p = (char *)*(int *)(e + 740);
    *p = 0;
    FUN_0c06233a((int)p, (char *)(0xC6002D0 + (signed char)(e[3] * 24)), 34);
    *(short *)(p + 2) = 1055;
    *(S12 *)(p + 4) = *(S12 *)0xC153398;
    *(float *)(p + 12) = *(float *)(p + 12) + 30.0f;
    *(S12 *)(p + 16) = *t2;
    *(S12 *)(p + 28) = *t1;
    *(float *)(p + 64) = 0.0f;
    u = (unsigned)(FUN_0c0df940() * 255.0f);
    f = (float)(u % 6);
    *(float *)(p + 68) = f / 10.0f + 0.5f;
    *(float *)(p + 72) = *(float *)(p + 68) / 4.0f;
    u = (unsigned)(FUN_0c0df940() * 255.0f);
    *(int *)(p + 52) = u % 4 + 1;
    *(float *)(p + 44) = 50.0f;
    *(float *)(p + 48) = 8.0f;
    FUN_0c0cb3b8(e);
}
