/* UI task objects (spawn/update pairs) of the player-select and stage-select screens (0c0a7320-0c0a80c4) */

/* named globals (symbols.txt) */
extern char g_res_csel_ksel[];
struct o2E0_int { char p[0x2E0]; int v; };
int obj_destroy(int, int, int, int);
int FUN_0c0623a6(int, int, int);
int obj_create(int, int, int);

int menu_ui_spawn_16(int a4);

int menu_ui_task_12(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if ((t0 != 1) && (t0 != 2)) {
            if (t0 != 3) {
                return obj_destroy(a4, a5, a6, a7);
            }
            t1 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
            return (t1 + 0x1);
        }
        return t0;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0x1F;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), ((int)g_res_csel_ksel), 0xE);
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x1F;
    return 0x1F;
}

int menu_ui_spawn_13(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x1, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t0 + 0x10)) = 0xC0A7546;
    }
    return menu_ui_spawn_16((*(signed char *)(((int)stk + 0))));
}

int menu_ui_spawn_14(int a4)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x2, 0x0);
    t2 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x3)) = t2;
        *(unsigned int *)((t0 + 0x10)) = 0xC0A7A2E;
    }
    return t2;
}

int menu_ui_spawn_16(int a4)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x1, 0x0);
    t2 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x3)) = t2;
        *(unsigned int *)((t0 + 0x10)) = 0xC0A80C4;
    }
    return t2;
}
