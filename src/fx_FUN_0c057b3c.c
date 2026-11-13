/* Five-phase two-part effect (arg) that ends when the mode byte at 0xC7F302C is 7: state 0 loads both part records, state 1 waits, fades part 2 in to 0.5, out to 0, waits and ends; other states run FUN_0c059330. */
struct T12 { int a, b, c; };
extern int FUN_0c0d5188(void);
extern void FUN_0c06233a(char *p, int q, int n);
extern void FUN_0c059330(char *o);
void FUN_0c057b3c(char *o)
{
    if (FUN_0c0d5188() != 0)
        o[8] = 2;
    switch (o[8]) {
    case 0:
        o[1] = 1;
        *(short *)(o + 6) = 31;
        o[5] = 25;
        FUN_0c06233a(*(char **)(o + 736), 0xC4CFA80, ((signed char *)0xC14BA40)[(unsigned char)(o[4] * 28) + 24]);
        **(char **)(o + 736) = 0;
        *(struct T12 *)(*(char **)(o + 736) + 4) = *(struct T12 *)(0xC14BA40 + (unsigned char)(o[4] * 28));
        *(struct T12 *)(*(char **)(o + 736) + 28) = *(struct T12 *)(0xC14BA40 + (unsigned char)(o[4] * 28) + 12);
        *(short *)(*(char **)(o + 736) + 2) = 799;
        *(float *)(*(char **)(o + 736) + 68) = 0.0f;
        *(float *)(*(char **)(o + 736) + 72) = 0.0f;
        *(float *)(*(char **)(o + 736) + 76) = 1.0f;
        FUN_0c06233a(*(char **)(o + 740), 0xC4CFA80, ((signed char *)0xC14BA40)[(unsigned char)(o[4] * 28) + 25] + 1);
        **(char **)(o + 740) = 0;
        *(struct T12 *)(*(char **)(o + 740) + 4) = *(struct T12 *)(0xC14BA40 + (unsigned char)(o[4] * 28));
        *(struct T12 *)(*(char **)(o + 740) + 28) = *(struct T12 *)(0xC14BA40 + (unsigned char)(o[4] * 28) + 12);
        *(short *)(*(char **)(o + 740) + 2) = 799;
        *(float *)(*(char **)(o + 740) + 68) = 0.0f;
        *(float *)(*(char **)(o + 740) + 72) = 0.0f;
        *(float *)(*(char **)(o + 740) + 76) = 1.0f;
        *(short *)(o + 236) = 1;
        o[8]++;
        /* fall through */
    case 1:
        if (*(signed char *)0xC7F302C != 7)
            o[8]++;
        switch (o[9]) {
        case 0:
            *(short *)(o + 236) = *(short *)(o + 236) - 1;
            if (*(short *)(o + 236) == 0) {
                *(short *)(o + 236) = o[4] * 10 + 1;
                o[9]++;
            }
            /* fall through */
        case 1:
            *(short *)(o + 236) = *(short *)(o + 236) - 1;
            if (*(short *)(o + 236) != 0) return;
            **(char **)(o + 740) = 1;
            *(float *)(*(char **)(o + 740) + 36) = 0.0f;
            o[9]++;
            return;
        case 2:
            *(float *)(*(char **)(o + 740) + 36) += 0.049999997f;
            if (!(*(float *)(*(char **)(o + 740) + 36) > 0.5f)) return;
            **(char **)(o + 736) = 1;
            o[9]++;
            return;
        case 3:
            *(float *)(*(char **)(o + 740) + 36) -= 0.049999997f;
            if (!(0.0f > *(float *)(*(char **)(o + 740) + 36))) return;
            **(char **)(o + 740) = 0;
            *(short *)(o + 236) = 1000 - o[4] * 10;
            o[9]++;
            return;
        case 4:
            *(short *)(o + 236) = *(short *)(o + 236) - 1;
            if (*(short *)(o + 236) != 0) return;
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
