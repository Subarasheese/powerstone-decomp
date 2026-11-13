/* character 1 (Ryoma) (0c069a98-0c06ce50) */

int pl_ryoma_motion_sfx(int);
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
int pl_start_motion(int, int, int);
int pl_angle_to_opponent(int);
int FUN_0c0a022e(int, float);
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0641a0(int, float, float);
int pl_step_motion(int);
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
int pl_spawn_hit_effect_with_se(int);
int pl_get_hit_count_of_opponent(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_turn_to_opponent(int, int);
int pl_landed(int);
int pl_enter_state_27_28(int, int, int, int, int, int);
int FUN_0c0a3762(int, int);
int thunk_FUN_0c062242(int);
int pl_ryoma_mode04_phase2(int);
int pl_ryoma_wait_anim_end(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int pl_start_motion(int a4, int a5, int a6);
struct o0_float { float v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
int pl_start_motion(int, int, int);
struct o3360_uchar { char p[0x3360]; unsigned char v; };
struct o4540_uchar { char p[0x4540]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct oF0_short { char p[0xF0]; short v; };
int FUN_0c0645ee(int);
int math_angle_between_points_xz(int, int);
int snd_play_side_se(int, int);
int obj_can_interact(int, int, int);
int FUN_0c0646fe(int);
int pl_ryoma_mode10_phase2(int);
struct o8_float { char p[0x8]; float v; };
int hit_probe_step_two_lists(int, int, float);
int pl_change_state(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
int FUN_0c0496f0(int, int, int, int, int, int, int, int, int);
int snd_play_char_voice(int, int);
float math_signed_sqrt(float);
int fx_spawn_034530(int);
int fx_spawn_13(int);
int cam_set_shake_ramp(int, int);
int pl_ryoma_wait_anim_end_b(int);
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct o71E4_float { char p[0x71E4]; float v; };
int fx_spawn_034884(int);
int pl_ryoma_attack_kind2_phase4(int);
int pl_ryoma_attack_kind4_phase5(int);
struct o2230_uchar { char p[0x2230]; unsigned char v; };
struct o36D0_uchar { char p[0x36D0]; unsigned char v; };
struct o40_uchar { char p[0x40]; unsigned char v; };
int fx_spawn_0342a0(int);
int fx_spawn_0355cc(int);
int fx_spawn_035c84(int);
int pl_detect_special_input(int, int);

int pl_ryoma_mode07_phase0(int a4);
int pl_ryoma_mode07_phase1(int a4);
int pl_ryoma_mode07_phase2(int a4);
int pl_ryoma_mode04_phase0(int a4);
int pl_ryoma_mode04_phase1(int a4);
int pl_ryoma_mode01_03_enter_v0(int a4);
int pl_ryoma_attack_kind68_phase1(int a4);
int pl_ryoma_attack_kind68_phase2(int a4);
int FUN_0c06b5b2(int a4);
int pl_ryoma_attack_kind3_phase0(int a4);
int FUN_0c06b868(int a4, int a5);
int pl_ryoma_attack_kind2_phase0(int a4);
int pl_ryoma_attack_kind2_phase2(int a4);
int pl_ryoma_cue_table_next(int a4, int a5, int a6, int a7);

int pl_ryoma_frame_hook(int a4)
{
    pl_ryoma_motion_sfx(a4);
    return 0x0;
}

int pl_ryoma_mode07_enter(int a4)
{
    (((struct o2D9_uchar *)(a4))->v) = 0x2;
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    pl_start_motion(a4, 0x1, 0x96);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    return FUN_0c0a022e(a4, (*(float *)0xC069B58));
}

int pl_ryoma_mode07_phase0(int a4)
{
    register int t0;
    register int t6;

    (((struct o2D9_uchar *)(a4))->v) = 0x2;
    t0 = pl_step_motion(a4);
    t6 = (signed char)t0;
    if ((signed char)t0 != 0) {
        (((struct o71BC_uchar *)(a4))->v) = 0x2;
        pl_start_motion(a4, 0x1, 0x97);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
        FUN_0c0a022e(a4, 0.099999994f);
        FUN_0c0641a0(a4, 35.0f, -3.5f);
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x2;
        t6 = 0xEC;
    }
    return t6;
}

int pl_ryoma_mode07_phase1(int a4)
{
    int stk[7];
    register int t3;
    register int t15;
    register int t24;
    register int t28;
    register int t41;
    register int t54;
    register int t71;
    register int t85;
    int t16;
    register int t17;
    int t26;

    pl_step_motion(a4);
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t3 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t3 - 1);
    if ((int)(short)(t3 - 1) > 0) {
        (((struct o2D9_uchar *)(a4))->v) = 0x2;
    }
    if (0.0f > ((((struct o274_float *)(a4))->v))) {
        (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) / 2.0f);
    }
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t15 = pl_get_hit_count_of_opponent(a4);
        if (((signed char)t15 == 1) && (t16 = *(int *)((a4 + 0x1C)), t17 = *(signed char *)((t16 + 0x4)), t17 != 10)) {
            t24 = *(int *)((a4 + 0x1C));
            if (((*(signed char *)((t24 + 0x71F1))) == 0) && (t26 = *(signed char *)((t24 + 0x9)), t26 != 1)) {
                t85 = 0x3C;
                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                    t28 = pl_landed(a4);
                    t85 = (signed char)t28;
                    if ((signed char)t28 != 0) {
                        pl_start_motion(a4, 0x1, 0x98);
                        (((struct o71A9_uchar *)(a4))->v) = 0x1;
                        (((struct o71A8_uchar *)(a4))->v) = 0x1;
                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                        t85 = (pl_spawn_hit_effect_with_se(a4));
                    }
                }
            } else {
                (((struct o108_uchar *)(a4))->v) = 0x0;
                pl_enter_state_27_28(a4, 0x3, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
                t41 = *(signed char *)((a4 + 0x3));
                *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)((-t41) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
                thunk_FUN_0c062242((((((unsigned short)((unsigned short)((-t41) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t41) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0));
                fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x2, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                t85 = (FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x0));
            }
        } else {
            t85 = 0x3C;
            if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                t54 = pl_landed(a4);
                t85 = (signed char)t54;
                if ((signed char)t54 != 0) {
                    pl_start_motion(a4, 0x1, 0x98);
                    (((struct o71A9_uchar *)(a4))->v) = 0x1;
                    (((struct o71A8_uchar *)(a4))->v) = 0x1;
                    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                    t85 = (pl_spawn_hit_effect_with_se(a4));
                }
            }
        }
    } else {
        t85 = 0x3C;
        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
            t71 = pl_landed(a4);
            t85 = (signed char)t71;
            if ((signed char)t71 != 0) {
                pl_start_motion(a4, 0x1, 0x98);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                t85 = (pl_spawn_hit_effect_with_se(a4));
            }
        }
    }
    return t85;
}

int pl_ryoma_mode07_phase2(int a4)
{
    int stk[2];
    register int t4;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t4 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t4 = 0x71A8;
    }
    return t4;
}

int pl_ryoma_mode07_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return pl_ryoma_mode07_phase2(a4);
        }
        return pl_ryoma_mode07_phase1(a4);
    }
    return pl_ryoma_mode07_phase0(a4);
}

int pl_ryoma_mode04_enter(int a4)
{
    pl_start_motion(a4, 0x1, 0x35);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC069DEC)->v));
    (((struct o48_float *)(a4))->v) = ((((struct o4_float *)0xC069DEC)->v));
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    return 0x0;
}

int pl_ryoma_mode04_phase0(int a4)
{
    register int t3;
    register int t6;

    pl_turn_to_opponent(a4, 0x9F4);
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t3 = pl_step_motion(a4);
    t6 = (signed char)t3;
    if ((signed char)t3 != 0) {
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = -25.0f;
        (((struct o48_float *)(a4))->v) = -1.0f;
        pl_start_motion(a4, 0x1, 0x36);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        t6 = 0xEE;
    }
    return t6;
}

int pl_ryoma_mode04_phase1(int a4)
{
    register int t0;
    register int t1;

    pl_turn_to_opponent(a4, 0x1555);
    pl_step_motion(a4);
    if (200.0f > (*(float *)0xC494D1C)) {
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o20_float *)(a4))->v))) / 8.0f));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o28_float *)(a4))->v))) / 8.0f));
    }
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t0 = pl_get_hit_count_of_opponent(a4);
        if ((signed char)t0 != 0) {
            (((struct oEE_ushort *)(a4))->v) = 0x1;
        }
    }
    t0 = pl_landed(a4);
    if ((signed char)t0 != 0) {
        if (((((struct oEE_short *)(a4))->v)) != 0) {
            pl_start_motion(a4, 0x1, 0x37);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                t0 = 0xC14EECC;
                t1 = 0xC14EEC0;
            } else {
                t0 = 0xC14EEE4;
                t1 = 0xC14EED8;
            }
            fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x1, 0x5, 0x1, 0x15, 0x52, t1, t0);
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            pl_turn_to_opponent(a4, 0x78E3);
        } else {
            pl_start_motion(a4, 0x1, 0x38);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            *(unsigned char *)((a4 + 0xA)) = 0x3;
        }
        return pl_spawn_hit_effect_with_se(a4);
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int pl_ryoma_mode04_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return pl_ryoma_wait_anim_end(a4);
            }
            return pl_ryoma_mode04_phase2(a4);
        }
        return pl_ryoma_mode04_phase1(a4);
    }
    return pl_ryoma_mode04_phase0(a4);
}

int pl_ryoma_mode10_enter(int a4)
{
    register int t5;

    if ((*(signed char *)((a4 + 0x71F1))) != 0) {
        return FUN_0c0645ee(a4);
    }
    if (((((struct o71C8_int *)(a4))->v)) != 0) {
        t5 = obj_can_interact(((((struct o71C8_int *)(a4))->v)), 0x1, (*(signed char *)((a4 + 0x3))));
        if (t5 != 0) {
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

int pl_ryoma_mode10_update(int a4, int a5, int a6, int a7)
{
    register int t2;

    if ((*(signed char *)((a4 + 0x71F1))) != 0) {
        return FUN_0c0646fe(a4);
    }
    t2 = *(signed char *)((a4 + 0xA));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                return t2;
            }
            return pl_ryoma_mode10_phase2(a4);
        }
        return ((int (*)(int, int, int, int))(0xC06A146))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC06A098))(a4, a5, a6, a7);
}

int pl_ryoma_mode01_03_enter_v0(int a4)
{
    pl_start_motion(a4, 0x1, 0xA);
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    return 0xF0;
}

int pl_ryoma_mode01_03_enter_v1(int a4)
{
    pl_start_motion(a4, 0x1, 0xC);
    (((struct oEC_ushort *)(a4))->v) = 0x8;
    (((struct o710C_uchar *)(a4))->v) = 0x1;
    return 0x710C;
}

int pl_ryoma_mode01_03_update_v1(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = pl_step_motion(a4);
                if ((signed char)t1 == 0) {
                    t1 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                    t2 = 0xEC;
                    if ((short)(t1 - 1) == 0) {
                        t1 = *(signed char *)((a4 + 0xA));
                        *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
                        t2 = (t1 + 0x1);
                    }
                    t1 = t2;
                } else {
                    t2 = *(signed char *)((a4 + 0xA));
                    *(unsigned char *)((a4 + 0xA)) = (t2 + 0x1);
                    t1 = (t2 + 0x1);
                }
                return t1;
            }
            if (t0 == 3) {
                pl_step_motion(a4);
                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                    t1 = pl_landed(a4);
                    if ((signed char)t1 != 0) {
                        return pl_change_state(a4, 0x6, 0x0);
                    }
                }
                pl_apply_velocity(a4);
                return pl_apply_acceleration(a4);
            }
            return t0;
        }
        pl_step_motion(a4);
        t0 = pl_get_hit_count_of_opponent(a4);
        if ((signed char)t0 == 0) {
            t1 = hit_probe_step_two_lists(a4, (0x7254 + a4), 0.0f);
            if ((signed char)t1 != 0) {
                pl_start_motion(a4, 0x2, 0xCD);
                (((struct oEC_ushort *)(a4))->v) = 0x3;
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 6.0f));
                (((struct o40_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 6.0f));
                (((struct o3C_float *)(a4))->v) = 15.0f;
                (((struct o48_float *)(a4))->v) = -1.2249999f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                t1 = *(signed char *)((a4 + 0xA));
                *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
                return (t1 + 0x1);
            }
            if ((signed char)t0 == 2) {
                pl_start_motion(a4, 0x0, 0x8);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC06A664)->v))));
                (((struct o40_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC06A664)->v))));
                (((struct o3C_float *)(a4))->v) = ((((struct o4_float *)0xC06A664)->v));
                (((struct o48_float *)(a4))->v) = ((((struct o8_float *)0xC06A664)->v));
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                *(unsigned char *)((a4 + 0xA)) = 0x3;
                return 0x3;
            }
            t1 = pl_landed(a4);
            if ((signed char)t1 == 0) {
                pl_apply_velocity(a4);
                return pl_apply_acceleration(a4);
            }
            return pl_change_state(a4, 0x6, 0x0);
        }
        if ((signed char)t0 == 2) {
            pl_start_motion(a4, 0x0, 0x8);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC06A664)->v))));
            (((struct o40_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC06A664)->v))));
            (((struct o3C_float *)(a4))->v) = ((((struct o4_float *)0xC06A664)->v));
            (((struct o48_float *)(a4))->v) = ((((struct o8_float *)0xC06A664)->v));
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o44_float *)(a4))->v) = 0.0f;
            *(unsigned char *)((a4 + 0xA)) = 0x3;
            return 0x3;
        }
        t0 = pl_landed(a4);
        if ((signed char)t0 == 0) {
            pl_apply_velocity(a4);
            return pl_apply_acceleration(a4);
        }
        return pl_change_state(a4, 0x6, 0x0);
    }
    pl_step_motion(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) != 0) {
    } else {
        (((struct o3C_float *)(a4))->v) = -17.5f;
        (((struct o48_float *)(a4))->v) = 0.0f;
        if ((*(signed char *)((a4 + 0x721F))) == 3) {
            u0 = ((((struct o38_float *)(a4))->v));
            u0 = u0 + 17.5f * (math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
            (((struct o38_float *)(a4))->v) = u0;
            u0 = ((((struct o40_float *)(a4))->v));
            u0 = u0 + 17.5f * (math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
            (((struct o40_float *)(a4))->v) = u0;
        } else {
            (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 17.5f);
            (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 17.5f);
        }
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_ryoma_mode01_03_enter(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721E));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC06A386))(a4, a5, a6, a7);
    }
    return pl_ryoma_mode01_03_enter_v0(a4);
}

int pl_ryoma_attack_kind68_phase1(int a4)
{
    int stk[6];
    register int t7;
    register int t10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u17;
    register float t18;
    register float u19;
    register int t21;
    register int t28;
    register int t30;
    register int t41;

    (((struct o105_uchar *)(a4))->v) = 0x0;
    if (((((struct oEC_short *)(a4))->v)) == 1) {
        snd_play_char_voice(a4, 0x34);
    }
    t7 = 0xAAA;
    if (300.0f > (*(float *)0xC494D1C)) {
        t7 = 0x8000;
    }
    pl_turn_to_opponent(a4, t7);
    t10 = *(int *)((a4 + 0x1C));
    u11 = (((struct o20_float *)(a4))->v);
    u12 = (((struct o20_float *)(t10))->v);
    u13 = (((struct o28_float *)(a4))->v);
    u14 = (((struct o28_float *)(t10))->v);
    u17 = ((u13 - u14) * (u13 - u14));
    u17 = u17 + ((u11 - u12)) * ((u11 - u12));
    t18 = math_signed_sqrt(u17);
    u19 = t18;
    if (t18 > 50.0f) {
        u19 = 50.0f;
    }
    t21 = (((struct oEC_short *)(a4))->v);
    (((struct o40_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x30))))) * (u19 / (((float)t21 / 2.0f) + 1.0f)));
    (((struct o38_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x30))))) * (u19 / (((float)t21 / 2.0f) + 1.0f)));
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t28 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t28 + 0x1);
    if ((int)(short)(t28 + 0x1) >= (int)0x24) {
        pl_start_motion(a4, 0x1, 0x66);
        *(int *)((int)stk + 16) = 0xC14EEE4;
        *(int *)((int)stk + 12) = 0xC14EED8;
        *(int *)((int)stk + 8) = 0x0;
        *(int *)((int)stk + 4) = 0x11;
        *(int *)((int)stk + 0) = 0x6;
        t30 = *(signed char *)((a4 + 0x3));
        (((struct o14_uchar *)(((int)stk + 0)))->v) = t30;
        FUN_0c0496f0((*(signed char *)(((int)stk + 20))), 0x1, 0x5, ((signed char)((((t30 << 1) + t30) << 2) << 1) + 0xC6002D0), 0x6, 0x11, 0x0, 0xC14EED8, 0xC14EEE4);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct oEC_ushort *)(a4))->v) = 0x13;
        (((struct o48_float *)(a4))->v) = -3.0f;
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    }
    t41 = pl_step_motion(a4);
    if ((signed char)t41 != 0) {
        return pl_start_motion(a4, 0x1, 0x65);
    }
    return (signed char)t41;
}

int pl_ryoma_attack_kind68_phase2(int a4)
{
    int stk[6];
    register int t2;
    register int t4;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t2 = pl_landed(a4);
    if ((signed char)t2 != 0) {
        pl_start_motion(a4, 0x1, 0x67);
        *(int *)((int)stk + 16) = 0xC14EECC;
        *(int *)((int)stk + 12) = 0xC14EEC0;
        *(int *)((int)stk + 8) = 0x42;
        *(int *)((int)stk + 4) = 0x10;
        *(int *)((int)stk + 0) = 0x6;
        t4 = *(signed char *)((a4 + 0x3));
        (((struct o14_uchar *)(((int)stk + 0)))->v) = t4;
        FUN_0c0496f0((*(signed char *)(((int)stk + 20))), 0x1, 0x5, ((signed char)((((t4 << 1) + t4) << 2) << 1) + 0xC6002D0), 0x6, 0x10, 0x42, 0xC14EEC0, 0xC14EECC);
        fx_spawn_034530(a4);
        cam_set_shake_ramp(0x14, 0x14);
        (((struct o71BC_uchar *)(a4))->v) = 0x0;
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        fx_spawn_13(a4);
        pl_spawn_hit_effect_with_se(a4);
        snd_play_char_voice(a4, 0x35);
    }
    pl_step_motion(a4);
    return pl_apply_motion_translation(a4);
}

int pl_ryoma_attack_kind68(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return pl_ryoma_wait_anim_end_b(a4);
                }
                return ((int (*)(int, int, int, int))(0xC06B4C0))(a4, a5, a6, a7);
            }
            return pl_ryoma_attack_kind68_phase2(a4);
        }
        return pl_ryoma_attack_kind68_phase1(a4);
    }
    return ((int (*)(int, int, int, int))(0xC06B13A))(a4, a5, a6, a7);
}

int FUN_0c06b5b2(int a4)
{
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 10.0f;
    (((struct o48_float *)(a4))->v) = -0.399999976f;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    pl_start_motion(a4, 0x1, 0x63);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    *(unsigned char *)((a4 + 0xB)) = 0x1;
    return 0x1;
}

int pl_ryoma_attack_kind3_phase0(int a4)
{
    register int t1;

    FUN_0c06b5b2(a4);
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    t1 = (((struct o71F4_short *)(a4))->v);
    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t1 - 360.0f);
    if ((int)(short)(int)((float)t1 - 360.0f) < 0) {
        (((struct o71F4_ushort *)(a4))->v) = 0x0;
    }
    return 0x71F4;
}

int pl_ryoma_attack_kind3(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC06B630))(a4, a5, a6, a7);
    }
    return pl_ryoma_attack_kind3_phase0(a4);
}

int FUN_0c06b868(int a4, int a5)
{
    if ((a5 & ((((struct o2DC_int *)(a4))->v))) != 0) {
        return 0x1;
    }
    return 0x0;
}

int pl_ryoma_attack_kind2_phase0(int a4)
{
    register int t7;
    register int t4;

    pl_turn_to_opponent(a4, 0x8000);
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_start_motion(a4, 0x1, 0x69);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x2;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    (((struct oF2_ushort *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    (((struct o710B_uchar *)(a4))->v) = 0x2;
    (((struct o710C_uchar *)(a4))->v) = 0x3;
    (((struct o4540_uchar *)(a4))->v) = 0x1;
    (((struct o3360_uchar *)(a4))->v) = 0x1;
    t7 = 0xF2;
    if (((((struct oF2_short *)(a4))->v)) != 0) {
        t4 = FUN_0c06b868(a4, 0x200);
        t7 = t4;
        if (t4 == 0) {
            (((struct oF2_ushort *)(a4))->v) = 0x0;
            t7 = 0xF2;
        }
    }
    return t7;
}

int FUN_0c06b8ee(int a4, int a5)
{
    register int t0;

    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    t0 = (((struct oF0_short *)(a4))->v);
    if (((((struct oEC_short *)(a4))->v)) == (*(int *)((((((t0 << 2) + t0) << 2) + a5) + 0x0)))) {
        t0 = (((struct oF0_short *)(a4))->v);
        (((struct o710B_uchar *)(a4))->v) = (*(int *)((((((t0 << 2) + t0) << 2) + a5) + 0x4)));
        t0 = (((struct oF0_short *)(a4))->v);
        (((struct o710C_uchar *)(a4))->v) = (*(int *)((((((t0 << 2) + t0) << 2) + a5) + 0x8)));
        t0 = (((struct oF0_short *)(a4))->v);
        (((struct o4540_uchar *)(a4))->v) = (*(int *)((((((t0 << 2) + t0) << 2) + a5) + 0xC)));
        t0 = (((struct oF0_short *)(a4))->v);
        (((struct o3360_uchar *)(a4))->v) = (*(int *)(((a5 + (((t0 << 2) + t0) << 2)) + 0x10)));
        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
    }
    return 0xF0;
}

int pl_ryoma_attack_kind2_phase2(int a4)
{
    int t0;

    pl_step_motion(a4);
    if (!(((((struct o274_float *)(a4))->v)) > 0.0f) && (t0 = *(signed char *)((a4 + 0x2D9)), t0 != 2)) {
        (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o71E4_float *)(a4))->v)));
    } else {
        (((struct o3C_float *)(a4))->v) = 0.0f;
    }
    pl_apply_velocity(a4);
    if ((int)((((struct o71F4_short *)(a4))->v)) > 0) {
        if (((((struct oF2_short *)(a4))->v)) != 0) {
            t0 = FUN_0c06b868(a4, 0x200);
            if (t0 == 0) {
                (((struct oF2_ushort *)(a4))->v) = 0x0;
            }
        }
    } else {
        (((struct oF2_ushort *)(a4))->v) = 0x0;
    }
    if (((((struct oF2_short *)(a4))->v)) != 0) {
        return pl_turn_to_opponent(a4, 0x16C);
    }
    fx_spawn_034884(a4);
    pl_start_motion(a4, 0x1, 0x6F);
    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    *(unsigned char *)((a4 + 0xC)) = 0x0;
    t0 = (((struct o71F4_short *)(a4))->v);
    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t0 - 240.0f);
    if ((int)(short)(int)((float)t0 - 240.0f) < 0) {
        (((struct o71F4_ushort *)(a4))->v) = 0x0;
    }
    return 0x71F4;
}

int pl_ryoma_attack_kind2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return pl_ryoma_attack_kind2_phase4(a4);
                }
                return ((int (*)(int, int, int, int))(0xC06BAEC))(a4, a5, a6, a7);
            }
            return pl_ryoma_attack_kind2_phase2(a4);
        }
        return ((int (*)(int, int, int, int))(0xC06B98C))(a4, a5, a6, a7);
    }
    return pl_ryoma_attack_kind2_phase0(a4);
}

int pl_ryoma_attack_kind4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return pl_ryoma_attack_kind4_phase5(a4);
                    }
                    return ((int (*)(int, int, int, int))(0xC06BF90))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC06BE98))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC06BE24))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC06BD5E))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC06BCCC))(a4, a5, a6, a7);
}

int pl_ryoma_attack_kind5(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC06C2AC))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC06C1C8))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC06C15E))(a4, a5, a6, a7);
}

int pl_ryoma_attack_kind7(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC06C4E0))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC06C3A8))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC06C348))(a4, a5, a6, a7);
}

int pl_ryoma_cue_table_next(int a4, int a5, int a6, int a7)
{
    register int t4;

    if ((*(signed char *)((a5 + 0x0))) == (short)a6) {
        (((struct o710B_uchar *)(a4))->v) = (*(signed char *)(((a5 + 0x1) + 0x0)));
        (((struct o710C_uchar *)(a4))->v) = (*(signed char *)((((a5 + 0x1) + 0x1) + 0x0)));
        *(unsigned short *)((a7 + 0x0)) = ((*(short *)((a7 + 0x0))) + 0x1);
        t4 = 0x710C;
    }
    return t4;
}

int pl_ryoma_state11_update(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        pl_step_motion(a4);
        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
        t0 = *(signed char *)((a4 + 0xB));
        t1 = *(signed char *)0xC7F2F08;
        if (t0 != 0) {
            if (t0 != 1) {
                t2 = t0;
                if (t0 != 2) {
                    t0 = (((struct oF0_short *)(a4))->v);
                    t3 = t0;
                    if (t0 == 34) {
                        if ((unsigned char)t1 != 1) {
                            fx_spawn_0355cc(a4);
                        }
                        t0 = 0x36D0;
                        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                            t0 = 0x2230;
                        }
                        *(unsigned char *)((a4 + t0)) = 0x0;
                        t3 = t0;
                    }
                    t2 = t3;
                }
                t0 = t2;
            } else {
                t2 = 0xF0;
                if (((((struct oF0_short *)(a4))->v)) == 0x9F) {
                    t3 = (unsigned char)t1;
                    if ((unsigned char)t1 != 1) {
                        t1 = 0x3864;
                        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                            t1 = 0x23C4;
                        }
                        *(float *)((a4 + t1)) = 0.0f;
                        t3 = t1;
                    }
                    t2 = t3;
                }
                t0 = t2;
            }
            return t0;
        }
        t0 = *(signed char *)((a4 + 0xF2));
        return pl_ryoma_cue_table_next(a4, ((signed char)((t0 << 1) + t0) + 0xC14F1F4), ((((struct oF0_short *)(a4))->v)), (0xF2 + a4));
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                pl_start_motion(a4, 0x3, 0x5);
            } else {
                pl_start_motion(a4, 0x3, 0x6);
                (((struct o710C_uchar *)(a4))->v) = 0x1;
            }
        } else {
            pl_start_motion(a4, 0x3, 0x3);
            (((struct o710B_uchar *)(a4))->v) = 0x3;
            (((struct o710C_uchar *)(a4))->v) = 0x2;
            (((struct o40_uchar *)(((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0x14A0) + (0x1E80 + a4))))->v) = 0x0;
            t0 = 0xC;
            for (;;) {
                fx_spawn_0342a0(a4);
                t0 = (t0 - 0x1);
                if (t0 == 0) {
                    break;
                }
            }
        }
    } else {
        pl_start_motion(a4, 0x3, 0x2);
        (((struct o710C_uchar *)(a4))->v) = 0x1;
        fx_spawn_035c84(a4);
        t0 = 0xC;
        for (;;) {
            fx_spawn_0342a0(a4);
            t0 = (t0 - 0x1);
            if (t0 == 0) {
                break;
            }
        }
    }
    (((struct o2230_uchar *)(a4))->v) = 0x1;
    (((struct o36D0_uchar *)(a4))->v) = 0x1;
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    (((struct oF2_ushort *)(a4))->v) = 0x0;
    return 0xF2;
}

int pl_ryoma_state12_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if ((*(signed char *)((a4 + 0xB))) == 0) {
            return ((int (*)(int, int, int, int))(0xC06C852))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC06C8B0))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC06C7B4))(a4, a5, a6, a7);
}

int pl_ryoma_state31_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC06C9CC))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC06C964))(a4, a5, a6, a7);
}

int pl_ryoma_check_special_input(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_detect_special_input(a4, 0xC14F224);
    t1 = 0x1;
    if ((signed char)t0 != 0) {
    } else {
        t0 = pl_detect_special_input(a4, 0xC14F210);
        t1 = 0x0;
        if ((signed char)t0 != 0) {
        } else {
            t0 = pl_detect_special_input(a4, 0xC14F238);
            t1 = 0x63;
            if ((signed char)t0 != 0) {
                t1 = 0x2;
            }
        }
    }
    return t1;
}

int pl_ryoma_special_move_dispatch(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)((a4 + 0x7209))) << 2) + 0xC336D54));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}
