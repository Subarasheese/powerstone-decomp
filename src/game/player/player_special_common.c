/* three shared 2-phase special/grab moves (start, update, dispatch) (0c06734c-0c067870) */

struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o7243_uchar { char p[0x7243]; unsigned char v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int obj_place_linked_ahead(int, int, float);
int thunk_math_mat_get_translate(int, int);
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct oEE_short { char p[0xEE]; short v; };
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int);
int pl_special_b_update(int);
int pl_special_c_update(int);

int pl_special_a_start(int a4);
int pl_special_a_update(int a4);
int pl_special_b_start(int a4);
int pl_special_c_start(int a4);

int pl_special_a_start(int a4)
{
    int stk[8];
    register int t3;
    register int t6;
    register int t14;

    pl_start_motion(a4, 0x4, 0x7);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x42);
    t3 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t3))->v) = 0x1;
    (((struct o71A8_uchar *)(t3))->v) = 0x1;
    (((struct o710B_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o710C_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    t6 = *(signed char *)((a4 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t6 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t6 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t6 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840), (int)stk + 4);
    fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    obj_place_linked_ahead(a4, 0x1, (*(float *)0xC0674A0));
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xA)) = 0x1;
    (((struct oEE_ushort *)(a4))->v) = 0xA;
    (((struct o7243_uchar *)(a4))->v) = 0x0;
    t14 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t14 + 0x1);
    return (t14 + 0x1);
}

int pl_special_a_update(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    pl_apply_motion_translation(a4);
    if ((int)(unsigned short)((((struct o719E_short *)(a4))->v)) < (int)0x4C) {
        pl_step_motion_owner((*(int *)((a4 + 0x1C))));
        pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
    }
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 76) {
        obj_set_owner_hit_record(a4, 0x33);
        obj_force_owner_state27(a4, 0x33);
    }
    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEE;
    if ((short)(t0 - 1) == 0) {
        t0 = 0x71F1;
        if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
            (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
            t0 = 0x710A;
        }
        t1 = t0;
    }
    return t1;
}

int pl_special_a_dispatch(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_special_a_update(a4);
    }
    return pl_special_a_start(a4);
}

int pl_special_b_start(int a4)
{
    int stk[8];
    register int t3;
    register int t6;
    register int t14;

    pl_start_motion(a4, 0x4, 0x7);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x42);
    t3 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t3))->v) = 0x1;
    (((struct o71A8_uchar *)(t3))->v) = 0x1;
    (((struct o710B_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o710C_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    t6 = *(signed char *)((a4 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t6 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t6 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t6 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840), (int)stk + 4);
    fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    obj_place_linked_ahead(a4, 0x1, (*(float *)0xC0675E4));
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xA)) = 0x1;
    (((struct oEE_ushort *)(a4))->v) = 0xA;
    (((struct o7243_uchar *)(a4))->v) = 0x0;
    t14 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t14 + 0x1);
    return (t14 + 0x1);
}

int pl_special_b_dispatch(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_special_b_update(a4);
    }
    return pl_special_b_start(a4);
}

int pl_special_c_start(int a4)
{
    int stk[8];
    int t2;
    register int t11;
    register int t14;
    register int t20;
    register float u9;

    pl_start_motion(a4, 0x4, 0x7);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t2 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x4));
    if ((t2 != 3) && ((t2 != 4) && (t2 != 5))) {
        pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x43);
        u9 = (*(float *)0xC067824);
    } else {
        pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x42);
        u9 = 170.0f;
    }
    obj_place_linked_ahead(a4, 0x1, u9);
    t11 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t11))->v) = 0x1;
    (((struct o71A8_uchar *)(t11))->v) = 0x1;
    (((struct o710B_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o710C_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    t14 = *(signed char *)((a4 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t14 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t14 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t14 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840), (int)stk + 4);
    fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xA)) = 0x1;
    (((struct oEE_ushort *)(a4))->v) = 0xA;
    (((struct o7243_uchar *)(a4))->v) = 0x0;
    t20 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t20 + 0x1);
    return (t20 + 0x1);
}

int pl_special_c_dispatch(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_special_c_update(a4);
    }
    return pl_special_c_start(a4);
}
