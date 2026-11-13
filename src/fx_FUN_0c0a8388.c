/* Three-state intro of a ten-part effect (arg): state 0 sets up its ten part records, state 1 waits for the frame counter, state 2 sinks the height by 4 per frame to -100; other states run FUN_0c059330. */
struct T12 { int a, b, c; };
extern void FUN_0c0623a6(char *p, int q, int n);
extern void FUN_0c059330(char *o);
void FUN_0c0a8388(char *o)
{
    int i;
    switch (o[8]) {
    case 0:
        o[8]++;
        o[9] = 0;
        *(short *)(o + 236) = 10;
        o[1] = 1;
        *(short *)(o + 6) = 15;
        o[5] = 25;
        for (i = 0; i < 10; i++) {
            FUN_0c0623a6(*(char **)(o + 736 + i * 4), 0xC664A78, i + 48);
            if (i != 8 && i != 9)
                **(char **)(o + 736 + i * 4) = 1;
            *(short *)(*(char **)(o + 736 + i * 4) + 2) = 15;
            *(struct T12 *)(*(char **)(o + 736 + i * 4) + 4) =
                *(struct T12 *)(0xC152644 + (unsigned char)(((signed char *)0xC152624)[i] * 12));
        }
        /* fall through */
    case 1:
        if (*(unsigned char *)0xC7F2EE4 >= 3)
            o[8]++;
        return;
    case 2:
        *(float *)(o + 36) -= 4.0f;
        if (*(float *)(o + 36) == -100.0f)
            o[8]++;
        return;
    default:
        FUN_0c059330(o);
        return;
    }
}
