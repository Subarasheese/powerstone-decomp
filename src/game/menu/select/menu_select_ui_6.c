/* UI task objects (spawn/update pairs) of the player-select and stage-select screens (0c0a8600-0c0a8d6c) */

/* named globals (symbols.txt) */
extern char g_res_csel_csel[];
struct vec3 { float x, y, z; };
struct spawned {
    char live;
    char pad_01[2];
    char tag;               /* 3 */
    char pad_04[12];
    void (*update)(void);   /* 16 */
    char pad_14[60];
    struct vec3 pos;          /* 80 */
};
struct spawned *obj_create(int, int, int, int);
void menu_ui_task_19(void);
extern void FUN_0c0623a6(char *p, int q, int n);
extern void obj_destroy(char *obj);
int ui_task_create(void);

void menu_ui_spawn_19(void)
{
    struct vec3 spawn_pos;
    struct spawned *obj;
    int idx;
    spawn_pos = *(struct vec3 *)0xC152B78;
    for (idx = 0; idx < 2; idx++) {
        obj = obj_create(5, 1, 1, 0);
        if (obj != 0) {
            obj->live = 1;
            obj->pos = spawn_pos;
            obj->update = menu_ui_task_19;
            obj->tag = idx;
        }
    }
}

void menu_ui_task_20(char *obj)
{
    int i;
    switch (obj[8]) {
    case 0:
        obj[8]++;
        obj[9] = 0;
        *(short *)(obj + 236) = 10;
        obj[1] = 1;
        *(short *)(obj + 6) = 15;
        obj[5] = 25;
        for (i = 0; i < 10; i++) {
            float *row;
            FUN_0c0623a6(*(char **)(obj + 736 + i * 4), ((int)g_res_csel_csel), 0);
            if (i != 8 && i != 9)
                **(char **)(obj + 736 + i * 4) = 1;
            *(short *)(*(char **)(obj + 736 + i * 4) + 2) = 15;
            row = (float *)(0xC152644 + (unsigned char)(((signed char *)0xC152624)[i] * 12));
            *(float *)(*(char **)(obj + 736 + i * 4) + 4) = row[0];
            *(float *)(*(char **)(obj + 736 + i * 4) + 8) = row[1];
            *(float *)(*(char **)(obj + 736 + i * 4) + 12) = row[2] + -1.0f;
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

int menu_ui_spawn_21(int a4)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = ui_task_create();
    t2 = t0;
    if (t0 != 0) {
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x3)) = t2;
        *(unsigned int *)((t0 + 0x10)) = 0xC0A8A86;
    }
    return t2;
}
