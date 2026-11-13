/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c05821c-0c0584e8) */

struct vec12 { int a, b, c; };
extern int FUN_0c0d5188(void);
extern void FUN_0c06233a(char *p, int q, int n);
extern void obj_destroy(char *obj);

void fx_tick_058460(char *obj)
{
    if (FUN_0c0d5188() != 0)
        obj[8] = 2;
    switch (obj[8]) {
    case 0:
        obj[1] = 1;
        *(short *)(obj + 6) = 31;
        obj[5] = 25;
        FUN_0c06233a(*(char **)(obj + 736), 0xC4CFA80, ((signed char *)0xC14BB70)[(unsigned char)(obj[4] * 28) + 24]);
        **(char **)(obj + 736) = 0;
        *(struct vec12 *)(*(char **)(obj + 736) + 4) = *(struct vec12 *)(0xC14BB70 + (unsigned char)(obj[4] * 28));
        *(struct vec12 *)(*(char **)(obj + 736) + 28) = *(struct vec12 *)(0xC14BB70 + (unsigned char)(obj[4] * 28) + 12);
        *(short *)(*(char **)(obj + 736) + 2) = 799;
        *(float *)(*(char **)(obj + 736) + 68) = 1.0f;
        *(float *)(*(char **)(obj + 736) + 72) = 0.0f;
        *(float *)(*(char **)(obj + 736) + 76) = 0.0f;
        FUN_0c06233a(*(char **)(obj + 740), 0xC4CFA80, ((signed char *)0xC14BB70)[(unsigned char)(obj[4] * 28) + 25] + 1);
        **(char **)(obj + 740) = 0;
        *(struct vec12 *)(*(char **)(obj + 740) + 4) = *(struct vec12 *)(0xC14BB70 + (unsigned char)(obj[4] * 28));
        *(struct vec12 *)(*(char **)(obj + 740) + 28) = *(struct vec12 *)(0xC14BB70 + (unsigned char)(obj[4] * 28) + 12);
        *(short *)(*(char **)(obj + 740) + 2) = 799;
        *(float *)(*(char **)(obj + 740) + 68) = 0.79999995f;
        *(float *)(*(char **)(obj + 740) + 72) = 0.79999995f;
        *(float *)(*(char **)(obj + 740) + 76) = 0.79999995f;
        *(short *)(obj + 236) = 1;
        obj[8]++;
        /* fall through */
    case 1:
        switch (obj[9]) {
        case 0:
            *(short *)(obj + 236) = *(short *)(obj + 236) - 1;
            if (*(short *)(obj + 236) != 0) return;
            *(short *)(obj + 236) = 1;
            obj[9]++;
            return;
        case 1:
            *(short *)(obj + 236) = *(short *)(obj + 236) - 1;
            if (*(short *)(obj + 236) != 0) return;
            **(char **)(obj + 740) = 1;
            *(float *)(*(char **)(obj + 740) + 12) = 0.0f;
            *(float *)(*(char **)(obj + 740) + 36) = 1.0f;
            obj[9]++;
            return;
        case 2:
            *(float *)(*(char **)(obj + 740) + 12) -= 0.19999999f;
            if (*(float *)(*(char **)(obj + 740) + 12) > -5.0f) return;
            obj[9]++;
            return;
        case 3:
            *(float *)(*(char **)(obj + 740) + 36) -= 0.02f;
            if (!(0.0f > *(float *)(*(char **)(obj + 740) + 36))) return;
            **(char **)(obj + 736) = 1;
            *(short *)(obj + 236) = 600;
            obj[9]++;
            return;
        case 4:
            *(short *)(obj + 236) = *(short *)(obj + 236) - 1;
            if (*(short *)(obj + 236) != 0) return;
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
