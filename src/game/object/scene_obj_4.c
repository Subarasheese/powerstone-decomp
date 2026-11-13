/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c056340-0c0567c4) */

/* named globals (symbols.txt) */
extern char g_res_font[];
typedef struct { int x, y, z; } S12;
extern char *obj_create(int, int, int, int);
extern void fx_tick_056340(void);
struct vec12 { int a, b, c; };
extern int FUN_0c0d5188(void);
extern void FUN_0c06233a(char *p, int q, int n);
extern void obj_destroy(char *obj);
typedef struct { int x, y, z; } Vec12;
struct Vec3i { int x, y, z; };
extern void FUN_0c06233a(char *part, int src, int index);

void fx_spawn_056340(void)
{
    S12 tmpl;
    char *task;
    int idx;

    tmpl = *(S12 *)0x0C14AE90;
    for (idx = 0; idx < 2; idx++) {
        task = obj_create(6, 1, 2, 0);
        if (task) {
            *task = 1;
            task[4] = idx;
            *(void (**)(void))(task + 16) = fx_tick_056340;
            *(S12 *)(task + 80) = tmpl;
        }
    }
}

void fx_tick_0565b4(char *obj)
{
    if (FUN_0c0d5188() != 0)
        obj[8] = 2;
    switch (obj[8]) {
    case 0:
        obj[1] = 1;
        *(short *)(obj + 6) = 31;
        obj[5] = 25;
        FUN_0c06233a(*(char **)(obj + 736), ((int)g_res_font), ((signed char *)0xC14AE9C)[(unsigned char)(obj[4] * 28) + 24]);
        **(char **)(obj + 736) = 1;
        *(struct vec12 *)(*(char **)(obj + 736) + 4) = *(struct vec12 *)(0xC14AE9C + (unsigned char)(obj[4] * 28));
        *(struct vec12 *)(*(char **)(obj + 736) + 28) = *(struct vec12 *)(0xC14AE9C + (unsigned char)(obj[4] * 28) + 12);
        *(short *)(*(char **)(obj + 736) + 2) = 287;
        FUN_0c06233a(*(char **)(obj + 740), ((int)g_res_font), ((signed char *)0xC14AE9C)[(unsigned char)(obj[4] * 28) + 25] + 1);
        **(char **)(obj + 740) = 1;
        *(struct vec12 *)(*(char **)(obj + 740) + 4) = *(struct vec12 *)(0xC14AE9C + (unsigned char)(obj[4] * 28));
        *(struct vec12 *)(*(char **)(obj + 740) + 28) = *(struct vec12 *)(0xC14AE9C + (unsigned char)(obj[4] * 28) + 12);
        *(short *)(*(char **)(obj + 740) + 2) = 799;
        *(float *)(*(char **)(obj + 740) + 68) = 0.0f;
        *(float *)(*(char **)(obj + 740) + 72) = 0.0f;
        *(float *)(*(char **)(obj + 740) + 76) = 1.0f;
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
            **(char **)(obj + 736) = 1;
            **(char **)(obj + 740) = 1;
            *(float *)(*(char **)(obj + 736) + 4) += 4.0f;
            *(float *)(*(char **)(obj + 740) + 4) += 4.0f;
            *(float *)(*(char **)(obj + 740) + 36) = 0.29999998f;
            obj[9]++;
            return;
        case 2:
            *(float *)(*(char **)(obj + 736) + 4) -= 0.099999994f;
            *(float *)(*(char **)(obj + 740) + 4) -= 0.099999994f;
            if (-4.0f > *(float *)(*(char **)(obj + 736) + 4))
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

void fx_spawn_0565b4(void)
{
    Vec12 tmpl;
    char *obj;
    int i;

    tmpl = *(Vec12 *)0xC14AF44;
    for (i = 0; i < 6; i++) {
        obj = obj_create(6, 1, 2, 0);
        if (obj) {
            *obj = 1;
            obj[4] = i;
            *(int *)(obj + 16) = 0xC0563A0;
            *(Vec12 *)(obj + 80) = tmpl;
        }
    }
}

void fx_tick_0567c4(char *obj)
{
    char *unused_row;
    if (FUN_0c0d5188() != 0)
        obj[8] = 2;
    switch (obj[8]) {
    case 0:
        obj[1] = 1;
        *(short *)(obj + 6) = 31;
        obj[5] = 25;
        FUN_0c06233a(*(char **)(obj + 736), ((int)g_res_font), ((signed char *)0xC14AF50)[(unsigned char)(obj[4] * 28) + 24]);
        **(char **)(obj + 736) = 1;
        *(struct Vec3i *)(*(char **)(obj + 736) + 4) = *(struct Vec3i *)(0xC14AF50 + (unsigned char)(obj[4] * 28));
        *(struct Vec3i *)(*(char **)(obj + 736) + 28) = *(struct Vec3i *)(0xC14AF50 + (unsigned char)(obj[4] * 28) + 12);
        *(short *)(*(char **)(obj + 736) + 2) = 1823;
        *(float *)(*(char **)(obj + 736) + 64) = 0.59999996f;
        *(float *)(*(char **)(obj + 736) + 68) = 1.0f;
        *(float *)(*(char **)(obj + 736) + 72) = 0.0f;
        *(float *)(*(char **)(obj + 736) + 76) = 0.0f;
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
            **(char **)(obj + 736) = 1;
            *(float *)(*(char **)(obj + 736) + 4) += 4.0f;
            obj[9]++;
            return;
        case 2:
            *(float *)(*(char **)(obj + 736) + 4) -= 0.099999994f;
            if (-4.0f > *(float *)(*(char **)(obj + 736) + 4))
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
