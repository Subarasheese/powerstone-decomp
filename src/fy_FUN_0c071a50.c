/* Resets a paired object: mirrors the angle (+48 plus half a turn) and the 12-byte record at +32 into its partner (pointer at +28), zeroes the motion floats, clamps the float at +72 to -2.0, sets both objects' flags and loads the timers (20, 14). */
typedef struct { int a, b, c; } S12;
extern void FUN_0c09c974(char *, int, float);
extern void FUN_0c09a808(char *, int, int);
extern void FUN_0c09a828(char *, int, int);

void FUN_0c071a50(char *o)
{
    char *q;

    q = *(char **)(o + 28);
    *(int *)(q + 48) = (unsigned short)(*(int *)(o + 48) + 0x8000);
    *(S12 *)(*(char **)(o + 28) + 32) = *(S12 *)(o + 32);
    FUN_0c09c974(o, 0, 100.0f);
    *(float *)(o + 64) = 0.0f;
    *(float *)(o + 56) = 0.0f;
    *(float *)(o + 76) = 0.0f;
    *(float *)(o + 68) = 0.0f;
    *(float *)(o + 60) = 0.0f;
    if (*(float *)(o + 72) > -2.0f) {
        *(float *)(o + 72) = -2.0f;
    }
    FUN_0c09a808(o, 4, 3);
    o[0x71A9] = 1;
    o[0x71A8] = 1;
    FUN_0c09a828(*(char **)(o + 28), 4, 57);
    q = *(char **)(o + 28);
    q[0x71A9] = 1;
    q[0x71A8] = 1;
    *(char *)(*(char **)(o + 28) + 10) = 1;
    *(short *)(o + 0xEC) = 20;
    *(short *)(o + 0xEE) = 14;
    o[10]++;
}
