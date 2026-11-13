/* Six-phase two-part effect (arg): state 0 loads the part records from the signed-offset row table; state 1 waits, pops part 2 in, fades it up to 0.5, fades it down to 0, waits 60 and then shrinks part 1; other states run FUN_0c059330. */
struct T12 { int a, b, c; };
extern int FUN_0c0d5188(void);
extern int FUN_0c055634(void);
extern void FUN_0c06233a(char *p, int q, int n);
extern void FUN_0c059330(char *o);
void FUN_0c056bb4(char *o)
{
    if (FUN_0c0d5188() != 0 || FUN_0c055634() != 0)
        o[8] = 2;
    switch (o[8]) {
    case 0:
        o[1] = 1;
        *(short *)(o + 6) = 31;
        o[5] = 25;
        FUN_0c06233a(*(char **)(o + 736), 0xC4CFA80, ((signed char *)0xC14B10C)[(signed char)(o[4] * 28) + 24]);
        **(char **)(o + 736) = 0;
        *(struct T12 *)(*(char **)(o + 736) + 4) = *(struct T12 *)(0xC14B10C + (signed char)(o[4] * 28));
        *(struct T12 *)(*(char **)(o + 736) + 28) = *(struct T12 *)(0xC14B10C + (signed char)(o[4] * 28) + 12);
        *(short *)(*(char **)(o + 736) + 2) = 1823;
        *(float *)(*(char **)(o + 736) + 64) = 1.0f;
        *(float *)(*(char **)(o + 736) + 68) = 1.0f;
        *(float *)(*(char **)(o + 736) + 72) = 0.7f;
        *(float *)(*(char **)(o + 736) + 76) = 0.0f;
        FUN_0c06233a(*(char **)(o + 740), 0xC4CFA80, ((signed char *)0xC14B10C)[(signed char)(o[4] * 28) + 25] + 1);
        **(char **)(o + 740) = 0;
        *(struct T12 *)(*(char **)(o + 740) + 4) = *(struct T12 *)(0xC14B10C + (signed char)(o[4] * 28));
        *(struct T12 *)(*(char **)(o + 740) + 28) = *(struct T12 *)(0xC14B10C + (signed char)(o[4] * 28) + 12);
        *(short *)(*(char **)(o + 740) + 2) = 287;
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
            *(short *)(o + 236) = 60;
            o[9]++;
            return;
        case 4:
            *(short *)(o + 236) = *(short *)(o + 236) - 1;
            if (*(short *)(o + 236) != 0) return;
            o[9]++;
            return;
        case 5:
            *(float *)(*(char **)(o + 736) + 64) -= 0.099999994f;
            if (!(0.0f > *(float *)(*(char **)(o + 736) + 64))) return;
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
