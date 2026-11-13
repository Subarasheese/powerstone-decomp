/* character 2 (Wang Tang) (0c06e37e-0c06f4f0) */

struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c01015c(void);
int pl_step_motion(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
int FUN_0c0641a0(int, float, float);
int pl_start_motion(int, int, int);
int pl_angle_to_opponent(int);
struct o0_float { float v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o8_float { char p[0x8]; float v; };
int pl_get_hit_count_of_opponent(int);
int pl_landed(int);
struct o102_uchar { char p[0x102]; unsigned char v; };
int pl_enter_state_27_28(int, int, int, int, int, int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_step_motion_owner(int);
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o722C_float { char p[0x722C]; float v; };
struct o7250_float { char p[0x7250]; float v; };
int pl_turn_to_opponent(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
struct oC_float { char p[0xC]; float v; };
int pl_set_velocity_forward(int, int, float);
int pl_wangtang_attack_kind68(int, int, int, int);
int pl_wangtang_attack_kind13(int, int, int, int, float, float, float);
int pl_wangtang_attack_kind57(int);
int pl_wangtang_attack_kind24(int);

int pl_wangtang_mode12_phase0(int a4);
int pl_wangtang_mode12_phase1(int a4);
int pl_wangtang_mode12_phase2(int a4);
int pl_wangtang_wait_anim_end(int a4);
int pl_wangtang_mode07_phase1(int a4);
int pl_wangtang_mode07_phase2(int a4);
int pl_wangtang_special3_phase1(int a4);
int pl_wangtang_special3_phase2(int a4);
int pl_wangtang_mode11_phase0(int a4);
int pl_wangtang_mode11_phase1(int a4);
int pl_wangtang_wait_anim_end_b(int a4);
int pl_wangtang_mode10_phase2(int a4);
int pl_wangtang_mode10_phase3(int a4);

int pl_wangtang_update_action_default(int a4)
{
    register int t1;

    if ((*(signed char *)((a4 + 0x71F1))) != 0) {
        t1 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t1 + 0x1);
        if ((short)(t1 + 0x1) == 10) {
            *(volatile signed char *)((a4 + 0x3));
            FUN_0c01015c();
        }
    }
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int pl_wangtang_update_action_22(int a4)
{
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int pl_wangtang_mode12_phase0(int a4)
{
    register int t0;
    register int t4;

    t0 = pl_step_motion(a4);
    t4 = (signed char)t0;
    if ((signed char)t0 != 0) {
        (((struct o71BC_uchar *)(a4))->v) = 0x2;
        pl_start_motion(a4, 0x1, 0xFFFFFFA0);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
        FUN_0c0641a0(a4, 35.0f, -3.5f);
        *(unsigned char *)((a4 + 0xA)) = 0x1;
        t4 = 0x1;
    }
    return t4;
}

int pl_wangtang_mode12_phase1(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    pl_step_motion(a4);
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t0 = pl_get_hit_count_of_opponent(a4);
        if ((signed char)t0 == 1) {
            (((struct o108_uchar *)(a4))->v) = 0x0;
            pl_start_motion(a4, 0x1, 0xFFFFFFA7);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            u0 = (((struct o0_float *)0xC06EB44)->v);
            (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) / u0);
            (((struct o44_float *)(a4))->v) = 0.0f;
            (((struct o3C_float *)(a4))->v) = ((((struct o4_float *)0xC06EB44)->v));
            (((struct o48_float *)(a4))->v) = ((((struct o8_float *)0xC06EB44)->v));
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) / u0);
            (((struct o4C_float *)(a4))->v) = 0.0f;
            *(unsigned char *)((a4 + 0xA)) = 0x2;
            return 0x2;
        }
    }
    t0 = 0x3C;
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t1 = pl_landed(a4);
        t0 = (signed char)t1;
        if ((signed char)t1 != 0) {
            pl_start_motion(a4, 0x1, 0xFFFFFFA1);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            *(unsigned char *)((a4 + 0xA)) = 0x3;
            t0 = 0x3;
        }
    }
    return t0;
}

int pl_wangtang_mode12_phase2(int a4)
{
    register int t2;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t2 = pl_step_motion(a4);
    if ((signed char)t2 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t2;
}

int pl_wangtang_wait_anim_end(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int pl_wangtang_mode12_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return pl_wangtang_wait_anim_end(a4);
            }
            return pl_wangtang_mode12_phase2(a4);
        }
        return pl_wangtang_mode12_phase1(a4);
    }
    return pl_wangtang_mode12_phase0(a4);
}

int pl_wangtang_mode07_phase1(int a4)
{
    int stk[2];
    register int t6;
    register int t16;
    register int t10;
    register int t12;
    register int t28;
    register int t22;
    register int t24;
    int t4;
    register int t5;

    pl_step_motion(a4);
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    if (((*(signed char *)((a4 + 0x108))) != 0) && (t4 = *(int *)((a4 + 0x1C)), t5 = *(signed char *)((t4 + 0x4)), t5 != 10)) {
        t6 = pl_get_hit_count_of_opponent(a4);
        if ((signed char)t6 == 1) {
            (((struct o108_uchar *)(a4))->v) = 0x0;
            pl_enter_state_27_28(a4, 0x3, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
            (((struct o102_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0xC;
            return 0x102;
        }
        t16 = 0x3C;
        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
            t10 = pl_landed(a4);
            t16 = (signed char)t10;
            if ((signed char)t10 != 0) {
                pl_start_motion(a4, 0x1, 0xFFFFFF98);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                t12 = *(signed char *)((a4 + 0xA));
                *(unsigned char *)((a4 + 0xA)) = (t12 + 0x1);
                t16 = (t12 + 0x1);
            }
        }
        return t16;
    }
    t28 = 0x3C;
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t22 = pl_landed(a4);
        t28 = (signed char)t22;
        if ((signed char)t22 != 0) {
            pl_start_motion(a4, 0x1, 0xFFFFFF98);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            t24 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t24 + 0x1);
            t28 = (t24 + 0x1);
        }
    }
    return t28;
}

int pl_wangtang_mode07_phase2(int a4)
{
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int pl_wangtang_mode07_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return pl_wangtang_mode07_phase2(a4);
        }
        return pl_wangtang_mode07_phase1(a4);
    }
    return ((int (*)(int, int, int, int))(0xC06EB82))(a4, a5, a6, a7);
}

int pl_wangtang_special3_phase1(int a4)
{
    register int t18;
    register int t17;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    pl_apply_velocity((*(int *)((a4 + 0x1C))));
    pl_apply_acceleration((*(int *)((a4 + 0x1C))));
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_step_motion_owner((*(int *)((a4 + 0x1C))));
    pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
    (((struct o102_uchar *)(a4))->v) = 0xC;
    (((struct o102_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0xC;
    t18 = 0x71AA;
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71AA))) != 0) {
        obj_set_owner_hit_record(a4, 0x34);
        obj_force_owner_state27(a4, 0x34);
        t17 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t17 + 0x1);
        t18 = (t17 + 0x1);
    }
    return t18;
}

int pl_wangtang_special3_phase2(int a4)
{
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int pl_wangtang_special3_dispatch(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return pl_wangtang_special3_phase2(a4);
        }
        return pl_wangtang_special3_phase1(a4);
    }
    return ((int (*)(int, int, int, int))(0xC06ECDE))(a4, a5, a6, a7);
}

int pl_wangtang_mode11_phase0(int a4)
{
    register int t0;
    register float u10;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x1, 0xFFFFFF9D);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct o710B_uchar *)(a4))->v) = 0x1;
        (((struct o710C_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
        pl_turn_to_opponent(a4, 0x1555);
        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
        (((struct o7250_float *)(a4))->v) = ((((struct o722C_float *)(a4))->v));
        if (!(((((struct o7250_float *)(a4))->v)) > 100.0f)) {
            (((struct o7250_float *)(a4))->v) = 100.0f;
        }
        if (!(500.0f > ((((struct o7250_float *)(a4))->v)))) {
            (((struct o7250_float *)(a4))->v) = 500.0f;
        }
        u10 = (((struct o7250_float *)(a4))->v);
        (((struct o7250_float *)(a4))->v) = (u10 - ((200.0f - u10) / 4.0f));
        (((struct o7250_float *)(a4))->v) = (((((struct o7250_float *)(a4))->v)) / 20.0f);
        (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o7250_float *)(a4))->v)));
        (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o7250_float *)(a4))->v)));
        (((struct o3C_float *)(a4))->v) = 10.0f;
        (((struct o48_float *)(a4))->v) = -3.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    }
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    return pl_apply_motion_translation(a4);
}

int pl_wangtang_mode11_phase1(int a4)
{
    register int t0;
    register int t1;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t0 = pl_step_motion(a4);
    if ((signed char)t0 == 0) {
        t0 = pl_landed(a4);
        t1 = (signed char)t0;
        if ((signed char)t0 != 0) {
            *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
            pl_start_motion(a4, 0x1, 0xFFFFFF9E);
            t0 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        t0 = t1;
    } else {
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
        pl_start_motion(a4, 0x1, 0xFFFFFF9E);
        t1 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int pl_wangtang_wait_anim_end_b(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int pl_wangtang_mode11_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return pl_wangtang_wait_anim_end_b(a4);
        }
        return pl_wangtang_mode11_phase1(a4);
    }
    return pl_wangtang_mode11_phase0(a4);
}

int pl_wangtang_mode10_phase2(int a4)
{
    register int t0;
    register int t1;

    pl_apply_motion_translation(a4);
    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        (((struct o71BC_uchar *)(a4))->v) = 0x2;
        pl_start_motion(a4, 0x1, 0xFFFFFFA9);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        pl_set_velocity_forward(a4, 0x1E, ((((struct o0_float *)0xC06F2B0)->v)));
        (((struct o3C_float *)(a4))->v) = ((((struct o8_float *)0xC06F2B0)->v));
        (((struct o48_float *)(a4))->v) = ((((struct oC_float *)0xC06F2B0)->v));
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_wangtang_mode10_phase3(int a4)
{
    register int t3;

    pl_apply_motion_translation(a4);
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t3 = pl_step_motion(a4);
    if ((signed char)t3 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t3;
}

int pl_wangtang_mode10_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return pl_wangtang_mode10_phase3(a4);
            }
            return pl_wangtang_mode10_phase2(a4);
        }
        return ((int (*)(int, int, int, int))(0xC06F160))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC06F098))(a4, a5, a6, a7);
}

int pl_wangtang_attack_state_update(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x7223));
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    if (t0 != 5) {
                        if (t0 != 6) {
                            if (t0 != 7) {
                                if (t0 != 8) {
                                    return t0;
                                }
                                return pl_wangtang_attack_kind68(a4, a5, a6, a7);
                            }
                            return pl_wangtang_attack_kind57(a4);
                        }
                        return pl_wangtang_attack_kind68(a4, a5, a6, a7);
                    }
                    return pl_wangtang_attack_kind57(a4);
                }
                return pl_wangtang_attack_kind24(a4);
            }
            return pl_wangtang_attack_kind13(a4, a5, a6, a7, f4, f5, f6);
        }
        return pl_wangtang_attack_kind24(a4);
    }
    return pl_wangtang_attack_kind13(a4, a5, a6, a7, f4, f5, f6);
}
