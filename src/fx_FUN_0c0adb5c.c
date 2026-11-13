/* Resets an actor's animation state from table entry e[0x314] (10-byte entries at 0xC33BFD8), then sets its speed vector from a 24-byte-entry table and calls FUN_0c0ad1b8. */
typedef struct { int a, b, c; } S12;
extern void FUN_0c0a1e0a(char *, int);
extern float FUN_0c0df4d0(int);
extern float FUN_0c0dfa50(int);
extern void FUN_0c0ad1b8(char *);

void FUN_0c0adb5c(char *e)
{
    signed char *t;
    signed char *q;
    float s;

    e[8] += 1;
    e[3] = (*(signed char **)(e + 28))[3];
    *(short *)(e + 0xEC) = 0;
    *(short *)(e + 0xEE) = 0;
    *(short *)(e + 0xF0) = 0;
    e[0x2D9] = 0;
    t = (signed char *)0xC33BFD8 + (signed char)e[0x314] * 10;
    e[0x101] = t[4];
    e[0x102] = t[5];
    FUN_0c0a1e0a(e, t[3]);
    *(S12 *)(e + 44) = *(S12 *)(*(char **)(e + 28) + 44);
    q = (signed char *)0xC33C05C + (*(signed char **)(e + 28))[4] * 24;
    if (t[7] != 0) {
        s = *(float *)(q + 12);
    } else {
        s = *(float *)(q + 8);
    }
    *(float *)(e + 56) = -(FUN_0c0df4d0(0x14000 - *(int *)(e + 48)) * s);
    *(float *)(e + 60) = 0.0f;
    *(float *)(e + 64) = -(FUN_0c0dfa50(0x14000 - *(int *)(e + 48)) * s);
    *(S12 *)(e + 68) = *(S12 *)0xC339FA8;
    FUN_0c0ad1b8(e);
}
