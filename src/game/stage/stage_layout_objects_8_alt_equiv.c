/* stage placement records: spawners and update/mode handlers for record types 1 2 3 4 8 11 12 and debris (0c0ae1b4-0c0ae77c) */

struct o71CC_uint { char p[0x71CC]; unsigned int v; };
int obj_set_mode_owner(int, int, int);
int FUN_0c0ae276(int);
int FUN_0c0ae284(void);
int stage_type02_break_step(int);
int FUN_0c0ae396(void);
int stage_obj_on_break(int);
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_int { char p[0x308]; int v; };
int FUN_0c06233a(int, int, int);
int stage_obj_load_layout_pos(int);
int stage_type02_mode_03(void);

int stage_type02_mode_05_held(int a4);
int stage_type02_mode_18_held(int a4);

int stage_type02_mode_05_held(int a4)
{
    register int t0;
    register int t3;

    t0 = *(int *)((a4 + 0x1C));
    if ((*(signed char *)((t0 + 0x7236))) == 0) {
        return obj_set_mode_owner(a4, 0x0, 0x2);
    }
    t3 = *(signed char *)((a4 + 0x8));
    if (t3 != 0) {
        if (t3 != 1) {
        } else {
            FUN_0c0ae284();
        }
    } else {
        FUN_0c0ae276(a4);
    }
    (((struct o71CC_uint *)(t0))->v) = a4;
    return 0x71CC;
}

int stage_type02_mode_18_held(int a4)
{
    register int t0;
    register int t4;

    t0 = *(int *)((a4 + 0x1C));
    if ((*(signed char *)((t0 + 0x7236))) == 0) {
        return obj_set_mode_owner(a4, 0x4, (*(signed char *)((t0 + 0x3))));
    }
    t4 = *(signed char *)((a4 + 0x8));
    if (t4 != 0) {
        if (t4 != 1) {
        } else {
            FUN_0c0ae396();
        }
    } else {
        stage_type02_break_step(a4);
    }
    (((struct o71CC_uint *)(t0))->v) = a4;
    return 0x71CC;
}

int FUN_0c0ae4c0(int a4, int a5, int a6, int a7)
{
    int stk[1];

    *(int *)((int)stk + 0) = a4;
    stage_obj_on_break(a4);
    return obj_set_mode_owner((*(int *)(((int)stk + 0))), 0x3, 0x2);
}

int FUN_0c0ae4f0(int a4)
{
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    *(unsigned char *)((a4 + 0x3)) = 0x2;
    FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664958, (*(signed char *)((((((struct o308_int *)(a4))->v)) + 0x2))));
    return stage_obj_load_layout_pos(a4);
}

int stage_type02_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x30D));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 18) {
                                return t0;
                            }
                            return stage_type02_mode_18_held(a4);
                        }
                        return stage_type02_mode_05_held(a4);
                    }
                    return ((int (*)(int, int, int, int))(0xC0AE712))(a4, a5, a6, a7);
                }
                return stage_type02_mode_03();
            }
            return ((int (*)(int, int, int, int))(0xC0AE4D6))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0AE490))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0AE25C))(a4, a5, a6, a7);
}
