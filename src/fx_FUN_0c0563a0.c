/* Two-part drop-in effect (arg): state 0 loads both part records from the row table, state 1 waits, lifts both by 4, then lowers them by 0.1 per frame until the first is below -4; other states run FUN_0c059330. */
struct T12 { int a, b, c; };
extern int FUN_0c0d5188(void);
extern void FUN_0c06233a(char *p, int q, int n);
extern void FUN_0c059330(char *o);
void FUN_0c0563a0(char *o)
{
    if (FUN_0c0d5188() != 0)
        o[8] = 2;
    switch (o[8]) {
    case 0:
        o[1] = 1;
        *(short *)(o + 6) = 31;
        o[5] = 25;
        FUN_0c06233a(*(char **)(o + 736), 0xC4CFA80, ((signed char *)0xC14AE9C)[(unsigned char)(o[4] * 28) + 24]);
        **(char **)(o + 736) = 1;
        *(struct T12 *)(*(char **)(o + 736) + 4) = *(struct T12 *)(0xC14AE9C + (unsigned char)(o[4] * 28));
        *(struct T12 *)(*(char **)(o + 736) + 28) = *(struct T12 *)(0xC14AE9C + (unsigned char)(o[4] * 28) + 12);
        *(short *)(*(char **)(o + 736) + 2) = 287;
        FUN_0c06233a(*(char **)(o + 740), 0xC4CFA80, ((signed char *)0xC14AE9C)[(unsigned char)(o[4] * 28) + 25] + 1);
        **(char **)(o + 740) = 1;
        *(struct T12 *)(*(char **)(o + 740) + 4) = *(struct T12 *)(0xC14AE9C + (unsigned char)(o[4] * 28));
        *(struct T12 *)(*(char **)(o + 740) + 28) = *(struct T12 *)(0xC14AE9C + (unsigned char)(o[4] * 28) + 12);
        *(short *)(*(char **)(o + 740) + 2) = 799;
        *(float *)(*(char **)(o + 740) + 68) = 0.0f;
        *(float *)(*(char **)(o + 740) + 72) = 0.0f;
        *(float *)(*(char **)(o + 740) + 76) = 1.0f;
        *(short *)(o + 236) = 1;
        o[8]++;
        /* fall through */
    case 1:
        switch (o[9]) {
        case 0:
            *(short *)(o + 236) = *(short *)(o + 236) - 1;
            if (*(short *)(o + 236) == 0) {
                *(short *)(o + 236) = 1;
                o[9]++;
            }
            /* fall through */
        case 1:
            *(short *)(o + 236) = *(short *)(o + 236) - 1;
            if (*(short *)(o + 236) != 0) return;
            **(char **)(o + 736) = 1;
            **(char **)(o + 740) = 1;
            *(float *)(*(char **)(o + 736) + 4) += 4.0f;
            *(float *)(*(char **)(o + 740) + 4) += 4.0f;
            *(float *)(*(char **)(o + 740) + 36) = 0.29999998f;
            o[9]++;
            return;
        case 2:
            *(float *)(*(char **)(o + 736) + 4) -= 0.099999994f;
            *(float *)(*(char **)(o + 740) + 4) -= 0.099999994f;
            if (-4.0f > *(float *)(*(char **)(o + 736) + 4))
                o[8]++;
            return;
        default:
            return;
        }
    default:
        FUN_0c059330(o);
        return;
    }
}
