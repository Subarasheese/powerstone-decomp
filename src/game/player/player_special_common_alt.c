/* three shared 2-phase special/grab moves (start, update, dispatch) (0c06734c-0c067870) */

struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);

int pl_special_b_update(int a4)
{
    int stk[2];
    register int t0;
    register int t20;
    register int t30;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
        pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        return 0x71A8;
    }
    pl_apply_motion_translation(a4);
    if ((int)(unsigned short)((((struct o719E_short *)(a4))->v)) < (int)0x20) {
        pl_step_motion_owner((*(int *)((a4 + 0x1C))));
        pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
    }
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 32) {
        obj_set_owner_hit_record(a4, 0x33);
        obj_force_owner_state27(a4, 0x33);
    }
    t20 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t20 - 1);
    t30 = 0xEE;
    if ((short)(t20 - 1) == 0) {
        t30 = 0x71F1;
        if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
            (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
            t30 = 0x710A;
        }
    }
    return t30;
}

int pl_special_c_update(int a4)
{
    int stk[2];
    register int t0;
    register int t4;
    register int t19;
    register int t29;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
        pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        return 0x71A8;
    }
    pl_apply_motion_translation(a4);
    t4 = (((struct o719E_short *)(a4))->v);
    if (((int)(unsigned short)t4 >= (int)0x7) && ((int)(unsigned short)t4 <= (int)0x28)) {
        pl_step_motion_owner((*(int *)((a4 + 0x1C))));
        pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
    }
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 40) {
        obj_set_owner_hit_record(a4, 0x33);
        obj_force_owner_state27(a4, 0x33);
    }
    t19 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t19 - 1);
    t29 = 0xEE;
    if ((short)(t19 - 1) == 0) {
        t29 = 0x71F1;
        if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
            (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
            t29 = 0x710A;
        }
    }
    return t29;
}
