/* Drop-in effect (arg): state 0 loads its part record from the row table, state 1 waits two ticks, rises by 4, then sinks by 0.1 per frame to -4 and ends; other states run FUN_0c059330. */
struct T12 { int a, b, c; };
extern int FUN_0c0d5188(void);
extern void FUN_0c06233a(char *p, int q, int n);
extern void FUN_0c059330(char *o);
void FUN_0c056614(char *o)
{
    char *row;
    if (FUN_0c0d5188() != 0)
        o[8] = 2;
    switch (o[8]) {
    case 0:
        o[1] = 1;
        *(short *)(o + 6) = 31;
        o[5] = 25;
        FUN_0c06233a(*(char **)(o + 736), 0xC4CFA80, ((signed char *)0xC14AF50)[(unsigned char)(o[4] * 28) + 24]);
        **(char **)(o + 736) = 1;
        *(struct T12 *)(*(char **)(o + 736) + 4) = *(struct T12 *)(0xC14AF50 + (unsigned char)(o[4] * 28));
        *(struct T12 *)(*(char **)(o + 736) + 28) = *(struct T12 *)(0xC14AF50 + (unsigned char)(o[4] * 28) + 12);
        *(short *)(*(char **)(o + 736) + 2) = 1823;
        *(float *)(*(char **)(o + 736) + 64) = 0.59999996f;
        *(float *)(*(char **)(o + 736) + 68) = 1.0f;
        *(float *)(*(char **)(o + 736) + 72) = 0.0f;
        *(float *)(*(char **)(o + 736) + 76) = 0.0f;
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
            *(float *)(*(char **)(o + 736) + 4) += 4.0f;
            o[9]++;
            return;
        case 2:
            *(float *)(*(char **)(o + 736) + 4) -= 0.099999994f;
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
