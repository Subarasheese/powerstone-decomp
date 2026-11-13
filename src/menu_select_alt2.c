/* player-select and stage-select flow (init update and VS announce); pad button helpers (0c0a41a0-0c0a71c4) */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
int menu_stage_select_open(int);
int menu_stage_select_state_step(int, int, int, int);
int FUN_0c0a58f4(int);
struct V3 { float x, y, z; };
struct Obj {
    char live;
    char pad1[15];
    void (*update)(void);   /* 16 */
    char pad20[60];
    struct V3 pos;          /* 80 */
};
struct Obj *obj_create(int, int, int, int);
void menu_ui_task_01(void);
struct Vec3 { float x, y, z; };
struct Obj_r3 {
    char live;
    char pad1[15];
    void (*update)(void);   /* 16 */
    char pad20[60];
    struct Vec3 pos;          /* 80 */
};
void menu_ui_task_07(void);
int ui_task_create(void);
int menu_ui_spawn_10(int);

int menu_stage_select_step_dispatch(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F2EE6;
    t1 = *(signed char *)0xC7F3071;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    (((struct o0_uchar *)0xC7F2EE5)->v) = 0x3;
                    (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
                    return 0x0;
                }
                FUN_0c0a58f4((t1 - 1));
                return ((int (*)(void))(0xC0A4FEA))();
            }
            menu_stage_select_state_step((t1 - 1), a5, a6, a7);
            t0 = *(signed char *)0xC7F2EE7;
            if ((int)(unsigned char)t0 > (int)0x1) {
                return ((int (*)(void))(0xC0A4FEA))();
            }
            return (unsigned char)t0;
        }
        menu_stage_select_open((t1 - 1));
        return ((int (*)(void))(0xC0A4FEA))();
    }
    return ((int (*)(int, int, int, int))(0xC0A5612))((t1 - 1), a5, a6, a7);
}

void menu_ui_spawn_01(void)
{
    struct V3 vec;
    struct Obj *obj;
    vec = *(struct V3 *)0xC152AAC;
    obj = obj_create(5, 1, 1, 0);
    if (obj != 0) {
        obj->live = 1;
        obj->pos = vec;
        obj->update = menu_ui_task_01;
    }
}

void menu_ui_spawn_07(void)
{
    struct Vec3 pos_tmp;
    struct Obj_r3 *obj;
    pos_tmp = *(struct Vec3 *)0xC152B00;
    obj = obj_create(5, 1, 1, 0);
    if (obj != 0) {
        obj->live = 1;
        obj->pos = pos_tmp;
        obj->update = menu_ui_task_07;
    }
}

int menu_ui_spawn_08(void)
{
    register int t0;

    t0 = ui_task_create();
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC0A6CAE;
    }
    return menu_ui_spawn_10(t0);
}

int menu_ui_spawn_09(int a4)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = ui_task_create();
    t2 = t0;
    if (t0 != 0) {
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x4)) = t2;
        *(unsigned int *)((t0 + 0x10)) = 0xC0A6FA0;
    }
    return t2;
}
