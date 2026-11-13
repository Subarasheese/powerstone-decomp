/* Three-step state machine on the byte at +8: step 0 wobbles a float in the +0x2E0 block (+5 / -5 by the parity of the countdown at +0xEC) and counts down; step 1 ticks the float at +60 down by 1, adds it to the float at +36 and, while the float at +0x274 is positive, fires an effect (FUN_0c0ace56, FUN_0c0a3ebc, FUN_0c0b6a9c), resets the countdown to 30 and bumps +9; step 2 counts down; any other step frees the object (FUN_0c059330). */
extern void FUN_0c0ace56(char *);
extern void FUN_0c0a3ebc(int, int, int);
extern void FUN_0c0b6a9c(char *, int);
extern void FUN_0c059330(char *);

void FUN_0c0b5c42(char *o)
{
    char *blk;
    float f;

    switch (o[8]) {
    case 0:
        blk = *(char **)(o + 0x2E0);
        if (*(short *)(o + 0xEC) % 2 == 0)
            f = 5.0f;
        else
            f = -5.0f;
        *(float *)(blk + 4) = f;
        *(short *)(o + 0xEC) = *(short *)(o + 0xEC) - 1;
        if (*(short *)(o + 0xEC) > 0)
            return;
        o[8] = o[8] + 1;
        *(float *)(*(char **)(o + 0x2E0) + 4) = 0.0f;
        break;
    case 1:
        *(float *)(o + 60) = *(float *)(o + 60) - 1.0f;
        *(float *)(o + 36) = *(float *)(o + 36) + *(float *)(o + 60);
        if (*(float *)(o + 0x274) > 0.0f) {
            *(float *)(o + 60) = 0.0f;
            FUN_0c0ace56(o);
            FUN_0c0a3ebc(*(signed char *)0x0C7F3051, o[3], 3);
            FUN_0c0b6a9c(o + 32, 1);
            *(short *)(o + 0xEC) = 30;
            o[9] = o[9] + 1;
        }
        break;
    case 2:
        *(short *)(o + 0xEC) = *(short *)(o + 0xEC) - 1;
        if (*(short *)(o + 0xEC) < 0)
            o[8] = o[8] + 1;
        break;
    default:
        FUN_0c059330(o);
        break;
    }
}
