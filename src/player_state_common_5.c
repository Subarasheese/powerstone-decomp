/* shared fighter code: item pickup, mode enter/update handlers (modes 1..15), hit/knock-back states (0c064cc8-0c06588c) */

struct o3C_float { char p[0x3C]; float v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
int pl_step_motion(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_landed(int);
int pl_change_state(int, int, int);
int cam_set_shake_ramp(int, int);
int pl_start_motion(int, int, int);
int pl_angle_to_opponent(int);
struct o710C_uchar { char p[0x710C]; unsigned char v; };
int pl_end_action_choose_state(int);
int FUN_0c0a3cb0(int, int);
int pl_start_motion(int a4, int a5, int a6);
struct o0_float { float v; };
struct o24_float { char p[0x24]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int pl_start_motion(int, int, int);
int pl_get_hit_count_of_opponent(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
struct o7205_uchar { char p[0x7205]; unsigned char v; };
int pl_apply_motion_translation(int);
struct o719E_short { char p[0x719E]; short v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o7243_uchar { char p[0x7243]; unsigned char v; };
int pl_turn_to_opponent(int, int);
int pl_set_velocity_forward(int, int, float);
int FUN_0c09c45a(int);
struct oF0_ushort { char p[0xF0]; unsigned short v; };

int pl_mode08_09_enter_v0(int a4);
int pl_mode08_09_enter_v1(int a4);
int pl_mode08_09_update_v1(int a4);
int pl_mode11_phase0(int a4);

int pl_mode10_phase3(int a4)
{
    register int t2;

    pl_step_motion(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t2 = pl_landed(a4);
        if ((signed char)t2 != 0) {
            return pl_change_state(a4, 0x6, 0x0);
        }
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int pl_mode08_09_enter_v0(int a4)
{
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    return pl_start_motion(a4, 0x1, 0xA2);
}

int pl_mode08_09_enter_v1(int a4)
{
    register int t2;
    register int t3;

    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    pl_start_motion(a4, 0x1, 0x47);
    t2 = *(signed char *)((a4 + 0x4));
    t3 = t2;
    if (t2 == 8) {
        (((struct o710C_uchar *)(a4))->v) = 0x2;
        t3 = 0x710C;
    }
    return t3;
}

int pl_mode08_enter(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721E));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_mode08_09_enter_v1(a4);
    }
    return pl_mode08_09_enter_v0(a4);
}

int pl_mode08_09_phase1(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    if ((*(signed char *)((a4 + 0x4))) == 7) {
        t0 = pl_landed(a4);
        if ((signed char)t0 == 0) {
            return ((int (*)(void))(0xC0650A2))();
        }
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        pl_start_motion(a4, 0x1, 0xA4);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0xA)) = 0x6;
        return ((int (*)(void))(0xC0650A2))();
    }
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t0 = pl_get_hit_count_of_opponent(a4);
        if ((signed char)t0 != 0) {
            pl_start_motion(a4, 0x1, 0xAA);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC0650FC)->v))));
            (((struct o40_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC0650FC)->v))));
            (((struct o3C_float *)(a4))->v) = ((((struct o8_float *)0xC0650FC)->v));
            (((struct o48_float *)(a4))->v) = ((((struct oC_float *)0xC0650FC)->v));
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o44_float *)(a4))->v) = 0.0f;
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            *(unsigned int *)((a4 + 0x2C)) = 0x0;
            *(unsigned char *)((a4 + 0xA)) = 0x5;
            t0 = 0x5;
        } else {
            t1 = pl_landed(a4);
            if ((signed char)t1 != 0) {
                *(unsigned int *)((a4 + 0x34)) = 0x0;
                *(unsigned int *)((a4 + 0x2C)) = 0x0;
                (((struct o24_float *)(a4))->v) = ((((struct o2D4_float *)(a4))->v));
                pl_start_motion(a4, 0x1, 0xAB);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                *(unsigned char *)((a4 + 0xA)) = 0x6;
                t1 = 0x6;
            } else {
                *(volatile short *)((a4 + 0xEC));
                t1 = 0xEC;
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        t0 = pl_landed(a4);
        if ((signed char)t0 != 0) {
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            *(unsigned int *)((a4 + 0x2C)) = 0x0;
            (((struct o24_float *)(a4))->v) = ((((struct o2D4_float *)(a4))->v));
            pl_start_motion(a4, 0x1, 0xAB);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            *(unsigned char *)((a4 + 0xA)) = 0x6;
            t0 = 0x6;
        } else {
            *(volatile short *)((a4 + 0xEC));
            t0 = 0xEC;
        }
        t1 = t0;
    }
    return t1;
}

int pl_wait_anim_end_to_state14(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_change_state(a4, 0xE, 0x0);
    }
    return (signed char)t0;
}

int pl_mode08_09_phase2_fall(int a4)
{
    register int t2;

    pl_step_motion(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t2 = pl_landed(a4);
        if ((signed char)t2 != 0) {
            cam_set_shake_ramp(0xA, 0xA);
            (((struct o71BC_uchar *)(a4))->v) = 0x3;
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        }
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int pl_mode08_09_phase4(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        (((struct o7205_uchar *)(a4))->v) = 0x1;
        return pl_change_state(a4, 0x10, 0x0);
    }
    return (signed char)t0;
}

int pl_mode08_09_phase5_fall(int a4)
{
    register int t2;

    pl_step_motion(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t2 = pl_landed(a4);
        if ((signed char)t2 != 0) {
            return pl_change_state(a4, 0x6, 0x0);
        }
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int pl_wait_anim_end_move(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return pl_apply_motion_translation(a4);
}

int pl_mode08_09_update_v1(int a4)
{
    int stk[2];
    register int t1;
    register int t2;
    register int t5;
    register int t7;

    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 3.0f);
    t1 = pl_step_motion(a4);
    if ((signed char)t1 != 0) {
        (((struct o7236_uchar *)(a4))->v) = 0x0;
        t2 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(pl_end_action_choose_state))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    }
    t5 = *(signed char *)((a4 + 0x4));
    if (t5 == 9) {
        t7 = (((struct o719E_short *)(a4))->v);
        if ((unsigned short)t7 == 37) {
            (((struct o7236_uchar *)(a4))->v) = 0x0;
            return ((int (*)(int))(pl_end_action_choose_state))(a4);
        }
        return (unsigned short)t7;
    }
    return t5;
}

int pl_mode08_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721E));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_mode08_09_update_v1(a4);
    }
    return ((int (*)(int, int, int, int))(0xC065214))(a4, a5, a6, a7);
}

int pl_mode09_enter(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721E));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(0xC0652F0))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0652EC))(a4, a5, a6, a7);
    }
    return pl_mode08_09_enter_v0(a4);
}

int pl_mode09_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721E));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_mode08_09_update_v1(a4);
    }
    return ((int (*)(int, int, int, int))(0xC065214))(a4, a5, a6, a7);
}

int pl_mode11_enter(int a4)
{
    pl_start_motion(a4, 0x1, 0x9C);
    return FUN_0c0a3cb0((*(signed char *)((a4 + 0x3))), 0x1);
}

int pl_mode11_phase0(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x1, 0x9D);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct o710B_uchar *)(a4))->v) = 0x1;
        (((struct o710C_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
        pl_turn_to_opponent(a4, 0x1555);
        t0 = 0x54;
        u0 = 15.0f;
        if ((*(signed char *)((a4 + 0x4))) != 4) {
            t0 = 0x2C;
            u0 = 30.0f;
        }
        pl_set_velocity_forward(a4, t0, u0);
        (((struct o7243_uchar *)(a4))->v) = 0x4;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_mode11_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0653C8))(a4, a5, a6, a7);
    }
    return pl_mode11_phase0(a4);
}

int pl_mode12_enter(int a4)
{
    return pl_start_motion(a4, 0x1, 0x9F);
}

int pl_mode12_phase0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t4;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x1, 0xA0);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
        pl_turn_to_opponent(a4, 0x4000);
        t4 = *(signed char *)((a4 + 0x4));
        if (t4 != 5) {
            if (t4 == 9) {
                return ((int (*)(int, int, int, int, float, float))(0xC06550C))(t4, a5, a6, a7, 40.0f, -2.5999999f);
            }
            return ((int (*)(int, int, int, int))(0xC065504))(t4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int, float, float))(0xC06550C))(t4, a5, a6, a7, 40.0f, -2.5999999f);
    }
    return (signed char)t0;
}

int pl_mode12_phase1(int a4)
{
    int t0;

    pl_step_motion(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t0 = pl_landed(a4);
        if ((signed char)t0 != 0) {
            t0 = *(signed char *)((a4 + 0x4));
            if ((t0 != 5) && (t0 != 9)) {
                if ((*(signed char *)((a4 + 0x4))) == 4) {
                    FUN_0c09c45a(a4);
                } else {
                    if ((*(signed char *)((a4 + 0x108))) != 0) {
                        t0 = pl_get_hit_count_of_opponent(a4);
                        if ((signed char)t0 != 0) {
                            return pl_change_state(a4, 0x6, 0x0);
                        }
                    }
                }
                pl_start_motion(a4, 0x1, 0xA1);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                t0 = *(signed char *)((a4 + 0xA));
                *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
                return (t0 + 0x1);
            }
            FUN_0c09c45a(a4);
            pl_start_motion(a4, 0x1, 0xA1);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            *(unsigned char *)((a4 + 0xA)) = 0x3;
            return 0x3;
        }
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int pl_wait_anim_end_c(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int pl_mode13_enter(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721E));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            pl_start_motion(a4, 0x1, 0x39);
        }
    } else {
        pl_start_motion(a4, 0x1, 0x4A);
    }
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    return 0xF0;
}

int pl_mode14_enter(int a4)
{
    register int t1;

    t1 = 0x4B;
    if ((*(signed char *)((a4 + 0x7205))) != 0) {
        t1 = 0x4C;
    }
    return pl_start_motion(a4, 0x1, t1);
}
