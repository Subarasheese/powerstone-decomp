/* Straight-line functions with calls and guards (batch gen_dq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o7223_uchar { char p[0x7223]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int fx_spawn_15(int, int);
int math_atan_angle16(float);
float math_signed_sqrt(float);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_apply_velocity(int);
int pl_end_action_choose_state(int);
int pl_step_motion(int);
int FUN_0c070e84(int a4);
int FUN_0c073b6e(int a4);
int pl_rouge_attack_motion_update(int a4);
int FUN_0c089158(int a4);

int FUN_0c070e84(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    t0 = *(int *)((a4 + 0x1C));
    u0 = (((struct o20_float *)(a4))->v);
    u1 = (((struct o20_float *)(t0))->v);
    u2 = (((struct o24_float *)(t0))->v);
    u3 = (((struct o24_float *)(a4))->v);
    u4 = (((struct o28_float *)(t0))->v);
    u5 = (((struct o28_float *)(a4))->v);
    u6 = *(float *)0xC070FB0;
    u7 = (u1 - u0);
    if ((u1 - u0) == 0.0f) {
        u7 = u6;
    }
    u0 = (u2 - u3);
    if ((u2 - u3) == 0.0f) {
        u0 = u6;
    }
    u1 = (u4 - u5);
    if ((u4 - u5) == 0.0f) {
        u1 = u6;
    }
    t0 = math_atan_angle16(((-u1) / u7));
    t1 = t0;
    if (0.0f > u7) {
        t1 = (t0 + 0x8000);
    }
    u2 = (u1 * u1);
    u2 = u2 + u7 * u7;
    *(unsigned int *)((a4 + 0x30)) = (unsigned short)(t1 + 0x4000);
    u1 = math_signed_sqrt(u2);
    t0 = math_atan_angle16(((-u1) / u0));
    t1 = t0;
    if (0.0f > u0) {
        t1 = (t0 + 0x8000);
    }
    *(unsigned int *)((a4 + 0x2C)) = (-(unsigned short)(t1 + 0x4000));
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    if (((((struct oEC_short *)(a4))->v)) == 14) {
        fx_spawn_15(a4, 0x2);
    }
    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int FUN_0c073b6e(int a4)
{
    register int t2;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t2 = pl_step_motion(a4);
    if ((signed char)t2 != 0) {
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t2;
}

int pl_rouge_attack_motion_update(int a4)
{
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int FUN_0c089158(int a4)
{
    (((struct o7223_uchar *)(a4))->v) = 0x0;
    return pl_end_action_choose_state(a4);
}
