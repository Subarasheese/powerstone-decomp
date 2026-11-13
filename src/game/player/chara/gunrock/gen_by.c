/* Straight-line functions with calls and guards (batch gen_by): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3C_float { char p[0x3C]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o7223_uchar { char p[0x7223]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c0a3d5c(int, int);
int FUN_0c0a3dcc(int, int);
int cam_set_shake_ramp(int, int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_apply_velocity(int);
int pl_change_state(int, int, int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int pl_landed(int);
int pl_spawn_hit_effect_with_se(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int pl_timer_arm_forever(int);
int FUN_0c0797ec(int a4);
int FUN_0c0910c0(int a4);
int FUN_0c07c392(int a4);
int FUN_0c07c4ec(int a4);
int FUN_0c091498(int a4);
int FUN_0c09168c(int a4);
int FUN_0c08982c(int a4);
int FUN_0c090c16(int a4);

int FUN_0c0797ec(int a4)
{
    int stk[2];
    register int t17;
    int t8;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_step_motion_owner((*(int *)((a4 + 0x1C))));
    pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
    if (((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71AA))) != 0) && (t8 = (((struct oEC_short *)(a4))->v), t8 == 0)) {
        (((struct oEC_ushort *)(a4))->v) = 0x1;
        obj_set_owner_hit_record(a4, 0x30);
        obj_force_owner_state27(a4, 0x30);
    }
    t17 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
        pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t17 = 0x71A8;
    }
    return t17;
}

int FUN_0c0910c0(int a4)
{
    register int t7;

    if (((((struct oEC_short *)(a4))->v)) != 0) {
        pl_apply_velocity(a4);
        pl_apply_acceleration(a4);
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    }
    t7 = pl_step_motion(a4);
    if ((signed char)t7 != 0) {
        if (((((struct oEE_short *)(a4))->v)) == 0) {
            pl_start_motion(a4, 0x2, 0xBA);
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
            return 0xEE;
        }
        return pl_change_state(a4, 0x18, 0x0);
    }
    return (signed char)t7;
}

int FUN_0c07c392(int a4)
{
    register int t3;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t3 = pl_landed(a4);
        if ((signed char)t3 != 0) {
            pl_spawn_hit_effect_with_se(a4);
            (((struct o3C_float *)(a4))->v) = 0.0f;
            (((struct o48_float *)(a4))->v) = 0.0f;
            (((struct o71BC_uchar *)(a4))->v) = 0x0;
            (((struct o7223_uchar *)(a4))->v) = 0x0;
            return pl_change_state(a4, 0x6, 0x0);
        }
        return (signed char)t3;
    }
    return 0x3C;
}

int FUN_0c07c4ec(int a4)
{
    int stk[2];
    register int t10;
    int t2;

    if (((((*(signed char *)((a4 + 0x71A4))) << 8) + (unsigned char)(*(signed char *)(((0x71A5 + a4) + 0x0)))) == 0x300) && (t2 = (((struct o719E_short *)(a4))->v), (unsigned short)t2 == 55)) {
        FUN_0c0a3dcc((*(signed char *)((a4 + 0x3))), (*(signed char *)((a4 + 0x27C))));
    }
    t10 = pl_step_motion(a4);
    if ((signed char)t10 != 0) {
        pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        return pl_timer_arm_forever(a4);
    }
    return (signed char)t10;
}

int FUN_0c091498(int a4)
{
    register int t1;

    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t1 = pl_landed(a4);
        if ((signed char)t1 != 0) {
            cam_set_shake_ramp(0x5, 0x5);
            return pl_change_state(a4, 0xF, 0x0);
        }
    }
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    return pl_step_motion(a4);
}

int FUN_0c09168c(int a4)
{
    register int t1;

    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t1 = pl_landed(a4);
        if ((signed char)t1 != 0) {
            cam_set_shake_ramp(0x5, 0x5);
            return pl_change_state(a4, 0xF, 0x0);
        }
    }
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    return pl_step_motion(a4);
}

int FUN_0c08982c(int a4)
{
    int stk[2];
    register int t0;
    register int t5;
    register int t7;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        pl_timer_arm_forever(a4);
    }
    t5 = *(signed char *)((a4 + 0xB));
    if (t5 != 0) {
        t7 = (((struct o719E_short *)(a4))->v);
        if ((unsigned short)t7 == 51) {
            return FUN_0c0a3d5c((*(signed char *)((a4 + 0x3))), (*(signed char *)((a4 + 0x27C))));
        }
        return (unsigned short)t7;
    }
    return t5;
}

int FUN_0c090c16(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            return pl_change_state(a4, 0x10, 0x0);
        }
        return pl_change_state(a4, 0xF, (*(signed char *)((a4 + 0x7205))));
    }
    return (signed char)t0;
}
