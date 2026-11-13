/* UI task objects (spawn/update pairs) of the player-select and stage-select screens (0c0a8388-0c0a84d4) */

/* named globals (symbols.txt) */
extern char g_res_csel_ksel[];
struct Vec12 { int x, y, z; };
extern void FUN_0c0623a6(char *p, int q, int n);
extern void obj_destroy(char *obj);

void menu_ui_task_17(char *obj)
{
    int part;
    switch (obj[8]) {
    case 0:
        obj[8]++;
        obj[9] = 0;
        *(short *)(obj + 236) = 10;
        obj[1] = 1;
        *(short *)(obj + 6) = 15;
        obj[5] = 25;
        for (part = 0; part < 10; part++) {
            FUN_0c0623a6(*(char **)(obj + 736 + part * 4), ((int)g_res_csel_ksel), part + 48);
            if (part != 8 && part != 9)
                **(char **)(obj + 736 + part * 4) = 1;
            *(short *)(*(char **)(obj + 736 + part * 4) + 2) = 15;
            *(struct Vec12 *)(*(char **)(obj + 736 + part * 4) + 4) =
                *(struct Vec12 *)(0xC152644 + (unsigned char)(((signed char *)0xC152624)[part] * 12));
        }
        /* fall through */
    case 1:
        if (*(unsigned char *)0xC7F2EE4 >= 3)
            obj[8]++;
        return;
    case 2:
        *(float *)(obj + 36) -= 4.0f;
        if (*(float *)(obj + 36) == -100.0f)
            obj[8]++;
        return;
    default:
        obj_destroy(obj);
        return;
    }
}
