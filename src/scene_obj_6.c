/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c056bb4-0c056e2c) */

struct vec12 { int a, b, c; };
extern int FUN_0c0d5188(void);
extern int FUN_0c055634(void);
extern void FUN_0c06233a(char *p, int q, int n);
extern void obj_destroy(char *obj);

void fx_tick_056e2c(char *obj)
{
    if (FUN_0c0d5188() != 0 || FUN_0c055634() != 0)
        obj[8] = 2;
    switch (obj[8]) {
    case 0:
        obj[1] = 1;
        *(short *)(obj + 6) = 31;
        obj[5] = 25;
        FUN_0c06233a(*(char **)(obj + 736), 0xC4CFA80, ((signed char *)0xC14B10C)[(signed char)(obj[4] * 28) + 24]);
        **(char **)(obj + 736) = 0;
        *(struct vec12 *)(*(char **)(obj + 736) + 4) = *(struct vec12 *)(0xC14B10C + (signed char)(obj[4] * 28));
        *(struct vec12 *)(*(char **)(obj + 736) + 28) = *(struct vec12 *)(0xC14B10C + (signed char)(obj[4] * 28) + 12);
        *(short *)(*(char **)(obj + 736) + 2) = 1823;
        *(float *)(*(char **)(obj + 736) + 64) = 1.0f;
        *(float *)(*(char **)(obj + 736) + 68) = 1.0f;
        *(float *)(*(char **)(obj + 736) + 72) = 0.7f;
        *(float *)(*(char **)(obj + 736) + 76) = 0.0f;
        FUN_0c06233a(*(char **)(obj + 740), 0xC4CFA80, ((signed char *)0xC14B10C)[(signed char)(obj[4] * 28) + 25] + 1);
        **(char **)(obj + 740) = 0;
        *(struct vec12 *)(*(char **)(obj + 740) + 4) = *(struct vec12 *)(0xC14B10C + (signed char)(obj[4] * 28));
        *(struct vec12 *)(*(char **)(obj + 740) + 28) = *(struct vec12 *)(0xC14B10C + (signed char)(obj[4] * 28) + 12);
        *(short *)(*(char **)(obj + 740) + 2) = 287;
        *(short *)(obj + 236) = 1;
        obj[8]++;
        /* fall through */
    case 1:
        switch (obj[9]) {
        case 0:
            *(short *)(obj + 236) = *(short *)(obj + 236) - 1;
            if (*(short *)(obj + 236) == 0) {
                *(short *)(obj + 236) = 1;
                obj[9]++;
            }
            /* fall through */
        case 1:
            *(short *)(obj + 236) = *(short *)(obj + 236) - 1;
            if (*(short *)(obj + 236) != 0) return;
            **(char **)(obj + 740) = 1;
            *(float *)(*(char **)(obj + 740) + 36) = 0.0f;
            obj[9]++;
            return;
        case 2:
            *(float *)(*(char **)(obj + 740) + 36) += 0.049999997f;
            if (!(*(float *)(*(char **)(obj + 740) + 36) > 0.5f)) return;
            **(char **)(obj + 736) = 1;
            obj[9]++;
            return;
        case 3:
            *(float *)(*(char **)(obj + 740) + 36) -= 0.049999997f;
            if (!(0.0f > *(float *)(*(char **)(obj + 740) + 36))) return;
            **(char **)(obj + 740) = 0;
            *(short *)(obj + 236) = 60;
            obj[9]++;
            return;
        case 4:
            *(short *)(obj + 236) = *(short *)(obj + 236) - 1;
            if (*(short *)(obj + 236) != 0) return;
            obj[9]++;
            return;
        case 5:
            *(float *)(*(char **)(obj + 736) + 64) -= 0.099999994f;
            if (!(0.0f > *(float *)(*(char **)(obj + 736) + 64))) return;
            obj[8]++;
            return;
        default:
            return;
        }
    default:
        obj_destroy(obj);
        return;
    }
}
