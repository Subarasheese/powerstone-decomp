/* shared fighter code: item pickup, mode enter/update handlers (modes 1..15), hit/knock-back states (0c0641a0-0c064a1c) */

int FUN_0c06428a(int a4);
int pl_mode10_update(int a4, int a5, int a6, int a7);
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o7254_float { char p[0x7254]; float v; };
struct o7258_float { char p[0x7258]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int pl_step_motion(int);
int pl_angle_to_opponent(int);
int pl_end_action_choose_state(int);
int _divls(void);
int pl_apply_motion_translation(int);
int pl_update_hit_reaction(int);
int pl_start_motion(int, int, int);
struct o7236_uchar { char p[0x7236]; unsigned char v; };
int FUN_0c0645f6(int);
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o71C8_int { char p[0x71C8]; int v; };
int math_angle_between_points_xz(int, int);
int snd_play_side_se(int, int);
int obj_can_interact(int, int, int);
struct o2D4_float { char p[0x2D4]; float v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
int fx_spawn_effect_at_point(int, int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int FUN_0c0a022e(int, float);
int pl_set_velocity_forward(int, int, float);
int FUN_0c0a3e64(int, int);
int thunk_math_mat_get_translate(int, int);

int FUN_0c06428a(int a4);
int FUN_0c064534(int a4);
int FUN_0c0645a0(int a4);
int FUN_0c0645ee(int a4);
int FUN_0c06469e(int a4);
int FUN_0c0646da(int a4);
int FUN_0c0646fe(int a4);

float FUN_0c0641a0(int a4, float f4, float f5)
{
    float u0;
    register float u1;
    register float u2;
    register float u3;

    u1 = *(float *)0xC494D1C;
    u2 = u1;
    if ((*(signed char *)((a4 + 0x4))) == 4) {
        u2 = (u1 + ((((struct o0_float *)0xC0642D8)->v)));
    }
    u1 = f4;
    if ((((((struct o4_float *)0xC0642D8)->v)) > u2) && (u0 = (((struct o8_float *)0xC0642D8)->v), f4 > u0)) {
        u1 = (f4 / ((((struct oC_float *)0xC0642D8)->v)));
    }
    u0 = u2;
    if (!(u2 > 1.0f)) {
        u0 = 1.0f;
    }
    u2 = (((struct o10_float *)0xC0642D8)->v);
    u3 = u0;
    if (!(u2 > u0)) {
        u3 = u2;
    }
    u0 = (f5 * (-(u1 / f5)));
    u2 = (u0 * (-(u1 / f5)));
    u0 = (((struct oC_float *)0xC0642D8)->v);
    (((struct o7254_float *)(a4))->v) = (((((u1 * (-(u1 / f5)))) - u2) / u0) + _builtin_fabsf((((((struct o24_float *)(a4))->v)) - ((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v)))));
    (((struct o4_float *)((0x7254 + a4)))->v) = ((math_signed_sqrt(((((((struct o7254_float *)(a4))->v)) * u0) / (-f5)))) + (-(u1 / f5)));
    u0 = (((struct o7258_float *)(a4))->v);
    (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * (u3 / u0));
    u2 = math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
    (((struct o40_float *)(a4))->v) = (u2 * (u3 / u0));
    (((struct o3C_float *)(a4))->v) = u1;
    (((struct o48_float *)(a4))->v) = f5;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    return (u2 * (u3 / u0));
}


int FUN_0c064534(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct oEC_short *)(a4))->v);
    if (((int)t0 < (int)0x14) && ((short)t0 != 0)) {
        t0 = pl_angle_to_opponent(a4);
        t1 = *(int *)((a4 + 0x30));
        t2 = (unsigned short)(t0 - t1);
        if ((0x8000 & (unsigned short)(t0 - t1)) != 0) {
            t2 = ((unsigned short)(t0 - t1) | 0xFFFF0000);
        }
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + ((int)((int)t2 / (int)((((struct oEC_short *)(a4))->v)))));
    }
    if (((((struct oEC_short *)(a4))->v)) != 0) {
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    }
    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int FUN_0c0645a0(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return pl_apply_motion_translation(a4);
}

int pl_mode07_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c0645a0(a4);
            }
            return FUN_0c064534(a4);
        }
        return pl_update_hit_reaction(a4);
    }
    return FUN_0c06428a(a4);
}

int FUN_0c0645ee(int a4)
{
    return pl_start_motion(a4, 0x2, 0x5A);
}

int FUN_0c06469e(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x1, 0x56);
        (((struct o7236_uchar *)(a4))->v) = 0x0;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        return (t0 + 0x1);
    }
    return pl_apply_motion_translation(a4);
}

int FUN_0c0646da(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return pl_apply_motion_translation(a4);
}

int FUN_0c0646fe(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c0646da(a4);
        }
        return FUN_0c06469e(a4);
    }
    return FUN_0c0645f6(a4);
}

int pl_mode10_enter(int a4)
{
    int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0x4));
    if ((t1 != 4) && ((t1 != 5) && ((t1 != 9) && (t0 = *(signed char *)((a4 + 0x71F1)), t0 == 0)))) {
        if (((((struct o71C8_int *)(a4))->v)) != 0) {
            t0 = obj_can_interact(((((struct o71C8_int *)(a4))->v)), 0x1, (*(signed char *)((a4 + 0x3))));
            if (t0 != 0) {
                *(unsigned int *)((a4 + 0x30)) = (math_angle_between_points_xz((a4 + 0x20), (((((struct o71C8_int *)(a4))->v)) + 0x20)));
                (((struct o20_float *)(a4))->v) = ((((struct o20_float *)(((((struct o71C8_int *)(a4))->v))))->v));
                (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(((((struct o71C8_int *)(a4))->v))))->v));
            }
        }
        snd_play_side_se((*(signed char *)((a4 + 0x3))), 0xE);
        (((struct o2D9_uchar *)(a4))->v) = 0x2;
        pl_start_motion(a4, 0x1, 0x93);
        (((struct oEC_ushort *)(a4))->v) = 0x14;
        return 0xEC;
    }
    return FUN_0c0645ee(a4);
}

int FUN_0c0647f0(int a4, int a5)
{
    register int t0;

    (((struct o2D9_uchar *)(a4))->v) = 0x2;
    if (((((struct oEC_short *)(a4))->v)) != 0) {
        t0 = *(int *)((a4 + 0x30));
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)(t0 + ((int)((int)(unsigned short)((pl_angle_to_opponent(a4)) - t0) / (int)((((struct oEC_short *)(a4))->v)))));
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    }
    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        (((struct o71BC_uchar *)(a4))->v) = 0x2;
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 50.0f);
        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
        pl_set_velocity_forward(a4, 0x1E, 30.0f);
        (((struct o48_float *)(a4))->v) = -1.5f;
        pl_start_motion(a4, 0x1, 0x94);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct o710B_uchar *)(a4))->v) = 0x1;
        (((struct o710C_uchar *)(a4))->v) = 0x1;
        FUN_0c0a3e64((*(signed char *)((a4 + 0x3))), 0x0);
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    }
    return FUN_0c0a022e(a4, 0.0f);
}

int FUN_0c0648d4(int a4)
{
    int stk[4];
    register int t2;
    register int t18;
    register int t21;
    register int t20;
    int t1;

    if (((*(signed char *)((a4 + 0x4))) != 2) && (t1 = *(int *)0xC7F307C, (t1 & 3) == 0)) {
        t2 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0xC60), (int)stk + 4);
        *(float *)(((int)stk + 8)) = ((((struct o2D4_float *)(a4))->v));
        fx_spawn_effect_at_point((*(signed char *)((a4 + 0x3))), (((int)stk + 0) + 0x4));
    }
    if (((((struct oEC_short *)(a4))->v)) != 0) {
        pl_apply_velocity(a4);
        pl_apply_acceleration(a4);
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    }
    t18 = pl_step_motion(a4);
    t21 = (signed char)t18;
    if ((signed char)t18 != 0) {
        pl_start_motion(a4, 0x1, 0x95);
        (((struct o710B_uchar *)(a4))->v) = 0x1;
        (((struct o710C_uchar *)(a4))->v) = 0x1;
        t20 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t20 + 0x1);
        t21 = (t20 + 0x1);
    }
    return t21;
}

int pl_wait_anim_end_b(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

