/* Spawns a four-particle trail effect (list 1/1, kind 4) at the shooter a: copies its position, zeroes the velocity words, links it to the shooter and primes the four particles (pointers at +736..+748 via FUN_0c06233a with kinds 4, 5, 6, 6), giving each its scale/colour floats and a timer (20, 18, 1, 10) in the effect. */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);
extern void FUN_0c06233a(int a, char *b, int c);
void FUN_0c0be7dc(char *a)
{
    char *e;
    char *s;
    float zero, one, tenth;

    e = FUN_0c059132(1, 1, 4, 0);
    if (e == 0)
        return;
    e[0] = 1;
    e[3] = a[3];
    e[1] = 1;
    *(short *)(e + 6) = 31;
    e[5] = 25;
    *(int *)(e + 16) = 0xC0BEA16;
    *(S12 *)(e + 32) = *(S12 *)(a + 32);
    zero = 0.0f;
    one = 1.0f;
    *(int *)(e + 52) = 0;
    *(int *)(e + 48) = 0;
    *(int *)(e + 44) = 0;
    *(float *)(e + 64) = zero;
    *(float *)(e + 60) = zero;
    *(float *)(e + 56) = zero;
    *(float *)(e + 88) = one;
    *(float *)(e + 84) = one;
    *(float *)(e + 80) = one;
    *(int *)(e + 28) = (int)a;
    e[15] = 0;
    e[8] = 0;
    e[9] = 0;
    e[10] = 0;
    e[11] = 0;
    tenth = 0.0999999940f;

    FUN_0c06233a(*(int *)(e + 736), (char *)(0xC6002D0 + (signed char)(a[3] * 24)), 4);
    s = (char *)*(int *)(e + 736);
    *s = 1;
    *(short *)(*(int *)(e + 736) + 2) = 1055;
    *(float *)(*(int *)(e + 736) + 64) = one;
    *(float *)(*(int *)(e + 736) + 28) = one;
    *(float *)(*(int *)(e + 736) + 32) = tenth;
    *(float *)(*(int *)(e + 736) + 36) = one;
    *(int *)(*(int *)(e + 736) + 16) = 0;
    *(int *)(*(int *)(e + 736) + 20) = 0;
    *(int *)(*(int *)(e + 736) + 24) = 0;
    *(short *)(e + 236) = 20;

    FUN_0c06233a(*(int *)(e + 740), (char *)(0xC6002D0 + (signed char)(a[3] * 24)), 5);
    s = (char *)*(int *)(e + 740);
    *s = 1;
    *(short *)(*(int *)(e + 740) + 2) = 1055;
    *(float *)(*(int *)(e + 740) + 64) = one;
    *(float *)(*(int *)(e + 740) + 28) = tenth;
    *(float *)(*(int *)(e + 740) + 32) = tenth;
    *(float *)(*(int *)(e + 740) + 36) = tenth;
    *(int *)(*(int *)(e + 740) + 16) = 0;
    *(int *)(*(int *)(e + 740) + 20) = 0;
    *(int *)(*(int *)(e + 740) + 24) = 0;
    *(short *)(e + 238) = 18;

    FUN_0c06233a(*(int *)(e + 744), (char *)(0xC6002D0 + (signed char)(a[3] * 24)), 6);
    s = (char *)*(int *)(e + 744);
    *s = 1;
    *(short *)(*(int *)(e + 744) + 2) = 31;
    *(float *)(*(int *)(e + 744) + 64) = one;
    *(float *)(*(int *)(e + 744) + 28) = zero;
    *(float *)(*(int *)(e + 744) + 32) = one;
    *(float *)(*(int *)(e + 744) + 36) = zero;
    *(int *)(*(int *)(e + 744) + 16) = 0;
    *(int *)(*(int *)(e + 744) + 20) = 0;
    *(int *)(*(int *)(e + 744) + 24) = 0;
    *(short *)(e + 240) = 1;

    FUN_0c06233a(*(int *)(e + 748), (char *)(0xC6002D0 + (signed char)(a[3] * 24)), 6);
    s = (char *)*(int *)(e + 748);
    *s = 1;
    *(short *)(*(int *)(e + 748) + 2) = 31;
    *(float *)(*(int *)(e + 748) + 64) = one;
    *(float *)(*(int *)(e + 748) + 28) = zero;
    *(float *)(*(int *)(e + 748) + 32) = one;
    *(float *)(*(int *)(e + 748) + 36) = zero;
    *(int *)(*(int *)(e + 748) + 16) = 0;
    *(int *)(*(int *)(e + 748) + 20) = 0;
    *(int *)(*(int *)(e + 748) + 24) = 0;
    *(short *)(e + 242) = 10;
}
