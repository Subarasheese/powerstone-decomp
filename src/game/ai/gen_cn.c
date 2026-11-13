/* Straight-line functions with calls and guards (batch gen_cn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o54_ushort { char p[0x54]; unsigned short v; };
struct o56_ushort { char p[0x56]; unsigned short v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o64_short { char p[0x64]; short v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o68_float { char p[0x68]; float v; };
struct o68_short { char p[0x68]; short v; };
struct o68_ushort { char p[0x68]; unsigned short v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o7205_uchar { char p[0x7205]; unsigned char v; };
struct o720A_uchar { char p[0x720A]; unsigned char v; };
struct o7223_uchar { char p[0x7223]; unsigned char v; };
struct o7230_uchar { char p[0x7230]; unsigned char v; };
struct o80_short { char p[0x80]; short v; };
struct o82_short { char p[0x82]; short v; };
struct o84_short { char p[0x84]; short v; };
struct o84_ushort { char p[0x84]; unsigned short v; };
struct o86_short { char p[0x86]; short v; };
struct o86_ushort { char p[0x86]; unsigned short v; };
struct o88_short { char p[0x88]; short v; };
struct o88_ushort { char p[0x88]; unsigned short v; };
struct o8A_short { char p[0x8A]; short v; };
struct o8A_ushort { char p[0x8A]; unsigned short v; };
struct o8C_int { char p[0x8C]; int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o9A_ushort { char p[0x9A]; unsigned short v; };
struct oA0_short { char p[0xA0]; short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
int FUN_0c0646fe(int);
int FUN_0c07c3ea(int, int, int, int);
int FUN_0c081a46(int, int, int, int);
int FUN_0c081b98(int, int, int, int);
int FUN_0c0a2666(int, int, int);
int FUN_0c0bed78(int, int);
int FUN_0c0bfecc(int, int);
int FUN_0c0c033c(int, int);
int FUN_0c0d21fc(int);
int ai_clear_op_state(void);
int fx_spawn_garuda_debris(int, int);
int fx_spawn_garuda_fan_shot(int, int);
int fx_spawn_state11_aura(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int menu_ui_setup_subobject(int, int, int);
int menu_ui_spawn_34(int);
int obj_destroy(int);
int pl_angle_to_opponent(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_apply_velocity(int);
int pl_change_state(int, int, int);
int pl_end_action_choose_state(int);
int pl_enter_state_27_28(int, int);
int pl_get_hit_count_of_opponent(int);
int pl_landed(int);
int pl_mode01_03_update(int);
int pl_mode04_update(int);
int pl_mode05_enter(int);
int pl_mode05_update(int);
int pl_mode06_enter(int);
int pl_mode06_update(int);
int pl_mode07_update(int);
int pl_mode08_enter(int);
int pl_mode08_update(int, int, int, int);
int pl_mode09_enter(int);
int pl_mode09_update(int, int, int, int);
int pl_mode10_update(int);
int pl_mode11_enter(int);
int pl_mode11_update(int, int, int, int);
int pl_mode12_enter(int);
int pl_mode12_update(int, int, int, int);
int pl_mode13_enter(int);
int pl_mode13_update(int);
int pl_mode14_enter(int);
int pl_mode14_update(int);
int pl_mode15_enter(int, int, int);
int pl_mode15_update(int);
int pl_ryoma_mode01_03_enter(int, int, int, int);
int pl_ryoma_mode04_enter(int);
int pl_ryoma_mode04_update(int);
int pl_ryoma_mode07_enter(int);
int pl_ryoma_mode07_update(int);
int pl_ryoma_mode10_enter(int);
int pl_ryoma_mode10_update(int, int, int, int);
int pl_set_power_form_off(int);
int pl_spawn_hit_effect_with_se(int);
int pl_start_hit_freeze(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_wangtang_mode07_update(int, int, int, int);
int pl_wangtang_mode10_update(int, int, int, int);
int pl_wangtang_mode11_update(int);
int pl_wangtang_mode12_update(int);
int snd_play_char_voice(int, int);
int FUN_0c07b3cc(int a4, int a5, int a6, int a7);
int FUN_0c0a94f0(int a4);
int FUN_0c0d1e64(int a4);
int FUN_0c0d1aec(int a4);
int FUN_0c0d19ac(int a4);
int FUN_0c06a69e(int a4, int a5, int a6, int a7);
int FUN_0c06e2c0(int a4, int a5, int a6, int a7);
int FUN_0c07eaa4(int a4, int a5, int a6, int a7);
int FUN_0c06a8ac(int a4, int a5, int a6, int a7);
int FUN_0c0d18f8(int a4, int a5, int a6);
int FUN_0c0d1848(int a4);
int FUN_0c04fa64(int a4);
int FUN_0c0d2328(int a4);
int FUN_0c04fc3c(void);
int FUN_0c082eac(int a4, int a5, int a6, int a7);
int FUN_0c04ef24(int a4);
int FUN_0c0921bc(int a4);
int FUN_0c090304(int a4, int a5, int a6, int a7);
int FUN_0c090540(int a4, int a5, int a6, int a7);
int FUN_0c0900d4(int a4, int a5, int a6, int a7);
int FUN_0c0552d0(int a4, int a5, int a6, int a7);
int FUN_0c079c90(int a4, int a5, int a6, int a7);
int FUN_0c091304(int a4, int a5, int a6, int a7);
int FUN_0c0923f0(int a4, int a5, int a6, int a7);
int FUN_0c04edbc(int a4);
int FUN_0c04eac4(void);

int FUN_0c07b3cc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

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
                                t0 = *(signed char *)((a4 + 0xB));
                                if (t0 != 0) {
                                    if (t0 != 1) {
                                        if (t0 != 2) {
                                            if (t0 != 3) {
                                                if (t0 != 4) {
                                                    if (t0 != 5) {
                                                        return t0;
                                                    }
                                                    (((struct o7223_uchar *)(a4))->v) = 0x0;
                                                    return ((int (*)(int, int, int, int))(pl_change_state))(a4, 0x6, 0x0, a7);
                                                }
                                                pl_step_motion(a4);
                                                pl_apply_velocity(a4);
                                                pl_apply_acceleration(a4);
                                                t0 = 0x3C;
                                                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                                                    t1 = pl_landed(a4);
                                                    t2 = (signed char)t1;
                                                    if ((signed char)t1 != 0) {
                                                        pl_spawn_hit_effect_with_se(a4);
                                                        (((struct o3C_float *)(a4))->v) = 0.0f;
                                                        (((struct o48_float *)(a4))->v) = 0.0f;
                                                        (((struct o71BC_uchar *)(a4))->v) = 0x0;
                                                        t1 = *(signed char *)((a4 + 0xB));
                                                        *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
                                                        t2 = (t1 + 0x1);
                                                    }
                                                    t0 = t2;
                                                }
                                                return t0;
                                            }
                                            pl_apply_velocity(a4);
                                            pl_apply_acceleration(a4);
                                            t0 = pl_step_motion(a4);
                                            t1 = (signed char)t0;
                                            if ((signed char)t0 != 0) {
                                                (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 3.0f);
                                                (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 3.0f);
                                                (((struct o3C_float *)(a4))->v) = -5.0f;
                                                (((struct o48_float *)(a4))->v) = -1.0f;
                                                t0 = *(signed char *)((a4 + 0xB));
                                                *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                                                t1 = (t0 + 0x1);
                                            }
                                            return t1;
                                        }
                                        pl_step_motion(a4);
                                        pl_apply_velocity(a4);
                                        pl_apply_acceleration(a4);
                                        if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x4))) != 10) {
                                            t0 = pl_get_hit_count_of_opponent(a4);
                                            if ((signed char)t0 == 1) {
                                                (((struct o720A_uchar *)(a4))->v) = 0x0;
                                                return pl_enter_state_27_28(a4, 0x5);
                                            }
                                        }
                                        t0 = (((struct oEC_short *)(a4))->v);
                                        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                                        t1 = 0xEC;
                                        if ((short)(t0 - 1) == 0) {
                                            pl_start_motion(a4, 0x1, 0x66);
                                            (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 5.0f);
                                            (((struct o3C_float *)(a4))->v) = 1.0f;
                                            (((struct o48_float *)(a4))->v) = 0.0f;
                                            (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 5.0f);
                                            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                            t0 = *(signed char *)((a4 + 0xF));
                                            *(unsigned char *)((a4 + 0xF)) = (t0 + 0x1);
                                            t1 = (t0 + 0x1);
                                        }
                                        return t1;
                                    }
                                    pl_apply_motion_translation(a4);
                                    t0 = pl_step_motion(a4);
                                    t1 = (signed char)t0;
                                    if ((signed char)t0 != 0) {
                                        pl_start_hit_freeze(a4);
                                        (((struct o71BC_uchar *)(a4))->v) = 0x2;
                                        pl_start_motion(a4, 0x1, 0x71);
                                        snd_play_char_voice(a4, 0x19);
                                        (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 30.0f);
                                        (((struct o3C_float *)(a4))->v) = 40.0f;
                                        (((struct o48_float *)(a4))->v) = -1.0f;
                                        (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 30.0f);
                                        (((struct oEC_ushort *)(a4))->v) = 0xF;
                                        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                        t0 = *(signed char *)((a4 + 0xF));
                                        *(unsigned char *)((a4 + 0xF)) = (t0 + 0x1);
                                        t1 = (t0 + 0x1);
                                    }
                                    return t1;
                                }
                                (((struct o71BC_uchar *)(a4))->v) = 0x2;
                                pl_start_motion(a4, 0x1, 0x67);
                                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                                *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                                (((struct o3C_float *)(a4))->v) = 0.0f;
                                (((struct o40_float *)(a4))->v) = 0.0f;
                                (((struct o38_float *)(a4))->v) = 0.0f;
                                (((struct o48_float *)(a4))->v) = 0.0f;
                                (((struct o4C_float *)(a4))->v) = 0.0f;
                                (((struct o44_float *)(a4))->v) = 0.0f;
                                FUN_0c0bfecc(a4, 0x1);
                                *(unsigned char *)((a4 + 0xF)) = 0x0;
                                (((struct oEC_ushort *)(a4))->v) = 0xA;
                                t0 = *(signed char *)((a4 + 0xB));
                                *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                                return (t0 + 0x1);
                            }
                            return FUN_0c07c3ea(a4, a5, a6, a7);
                        }
                        t0 = *(signed char *)((a4 + 0xB));
                        if (t0 != 0) {
                            if (t0 != 1) {
                                if (t0 != 2) {
                                    if (t0 != 3) {
                                        if (t0 != 4) {
                                            if (t0 != 5) {
                                                return t0;
                                            }
                                            (((struct o7223_uchar *)(a4))->v) = 0x0;
                                            return ((int (*)(int, int, int, int))(pl_change_state))(a4, 0x6, 0x0, a7);
                                        }
                                        pl_step_motion(a4);
                                        pl_apply_velocity(a4);
                                        pl_apply_acceleration(a4);
                                        t0 = 0x3C;
                                        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                                            t1 = pl_landed(a4);
                                            t2 = (signed char)t1;
                                            if ((signed char)t1 != 0) {
                                                pl_spawn_hit_effect_with_se(a4);
                                                (((struct o3C_float *)(a4))->v) = 0.0f;
                                                (((struct o48_float *)(a4))->v) = 0.0f;
                                                (((struct o71BC_uchar *)(a4))->v) = 0x0;
                                                t1 = *(signed char *)((a4 + 0xB));
                                                *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
                                                t2 = (t1 + 0x1);
                                            }
                                            t0 = t2;
                                        }
                                        return t0;
                                    }
                                    pl_apply_velocity(a4);
                                    pl_apply_acceleration(a4);
                                    t0 = pl_step_motion(a4);
                                    t1 = (signed char)t0;
                                    if ((signed char)t0 != 0) {
                                        (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 3.0f);
                                        (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 3.0f);
                                        (((struct o3C_float *)(a4))->v) = -5.0f;
                                        (((struct o48_float *)(a4))->v) = -1.0f;
                                        t0 = *(signed char *)((a4 + 0xB));
                                        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                                        t1 = (t0 + 0x1);
                                    }
                                    return t1;
                                }
                                pl_step_motion(a4);
                                pl_apply_velocity(a4);
                                pl_apply_acceleration(a4);
                                if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x4))) != 10) {
                                    t0 = pl_get_hit_count_of_opponent(a4);
                                    if ((signed char)t0 == 1) {
                                        (((struct o720A_uchar *)(a4))->v) = 0x0;
                                        return pl_enter_state_27_28(a4, 0x5);
                                    }
                                }
                                t0 = (((struct oEC_short *)(a4))->v);
                                (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                                t1 = 0xEC;
                                if ((short)(t0 - 1) == 0) {
                                    pl_start_motion(a4, 0x1, 0x66);
                                    (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 5.0f);
                                    (((struct o3C_float *)(a4))->v) = 1.0f;
                                    (((struct o48_float *)(a4))->v) = 0.0f;
                                    (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 5.0f);
                                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                    t0 = *(signed char *)((a4 + 0xF));
                                    *(unsigned char *)((a4 + 0xF)) = (t0 + 0x1);
                                    t1 = (t0 + 0x1);
                                }
                                return t1;
                            }
                            pl_apply_motion_translation(a4);
                            t0 = pl_step_motion(a4);
                            t1 = (signed char)t0;
                            if ((signed char)t0 != 0) {
                                pl_start_hit_freeze(a4);
                                (((struct o71BC_uchar *)(a4))->v) = 0x2;
                                pl_start_motion(a4, 0x1, 0x71);
                                snd_play_char_voice(a4, 0x19);
                                (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 30.0f);
                                (((struct o3C_float *)(a4))->v) = 40.0f;
                                (((struct o48_float *)(a4))->v) = -1.0f;
                                (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 30.0f);
                                (((struct oEC_ushort *)(a4))->v) = 0xF;
                                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                t0 = *(signed char *)((a4 + 0xF));
                                *(unsigned char *)((a4 + 0xF)) = (t0 + 0x1);
                                t1 = (t0 + 0x1);
                            }
                            return t1;
                        }
                        (((struct o3C_float *)(a4))->v) = 0.0f;
                        (((struct o40_float *)(a4))->v) = 0.0f;
                        (((struct o38_float *)(a4))->v) = 0.0f;
                        (((struct o48_float *)(a4))->v) = 0.0f;
                        (((struct o4C_float *)(a4))->v) = 0.0f;
                        (((struct o44_float *)(a4))->v) = 0.0f;
                        (((struct o71BC_uchar *)(a4))->v) = 0x0;
                        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                        pl_start_motion(a4, 0x1, 0x65);
                        (((struct o71A9_uchar *)(a4))->v) = 0x1;
                        (((struct o71A8_uchar *)(a4))->v) = 0x1;
                        FUN_0c0bfecc(a4, 0x1);
                        *(unsigned char *)((a4 + 0xF)) = 0x0;
                        (((struct oEC_ushort *)(a4))->v) = 0xA;
                        t0 = *(signed char *)((a4 + 0xB));
                        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                        return (t0 + 0x1);
                    }
                    t0 = *(signed char *)((a4 + 0xB));
                    if (t0 != 0) {
                        if (t0 != 1) {
                            if (t0 != 2) {
                                if (t0 != 3) {
                                    if (t0 != 4) {
                                        if (t0 != 5) {
                                            return t0;
                                        }
                                        (((struct o7223_uchar *)(a4))->v) = 0x0;
                                        return pl_end_action_choose_state(a4);
                                    }
                                    pl_apply_motion_translation(a4);
                                    t0 = pl_step_motion(a4);
                                    t1 = (signed char)t0;
                                    if ((signed char)t0 != 0) {
                                        t0 = *(signed char *)((a4 + 0xB));
                                        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                                        t1 = (t0 + 0x1);
                                    }
                                    return t1;
                                }
                                pl_step_motion(a4);
                                pl_apply_motion_translation(a4);
                                t0 = (((struct oEC_short *)(a4))->v);
                                (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                                t1 = 0xEC;
                                if ((short)(t0 - 1) == 0) {
                                    pl_start_motion(a4, 0x1, 0x69);
                                    t0 = *(signed char *)((a4 + 0xB));
                                    *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                                    t1 = (t0 + 0x1);
                                }
                                return t1;
                            }
                            t0 = (((struct oF0_short *)(a4))->v);
                            (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
                            if ((short)(t0 - 1) == 0) {
                                pl_start_hit_freeze(a4);
                                snd_play_char_voice(a4, 0x1D);
                            }
                            t0 = (((struct oEC_short *)(a4))->v);
                            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                            if ((short)(t0 - 1) == 0) {
                                t0 = 0x0;
                                for (;;) {
                                    FUN_0c0bed78(a4, t0);
                                    t0 = (t0 + 0x1);
                                    if ((int)t0 >= (int)0xA) {
                                        break;
                                    }
                                }
                                snd_play_char_voice(a4, 0x31);
                            }
                            pl_apply_motion_translation(a4);
                            t0 = pl_step_motion(a4);
                            t1 = (signed char)t0;
                            if ((signed char)t0 != 0) {
                                (((struct oEC_ushort *)(a4))->v) = 0x1E;
                                t0 = *(signed char *)((a4 + 0xB));
                                *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                                t1 = (t0 + 0x1);
                            }
                            return t1;
                        }
                        pl_step_motion(a4);
                        pl_apply_motion_translation(a4);
                        t0 = (((struct oEE_short *)(a4))->v);
                        (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
                        t1 = 0xEE;
                        if ((short)(t0 - 1) != 0) {
                            t0 = *(signed char *)((a4 + 0xB));
                            *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                            t1 = (t0 + 0x1);
                        }
                        return t1;
                    }
                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                    (((struct o40_float *)(a4))->v) = 0.0f;
                    (((struct o3C_float *)(a4))->v) = 0.0f;
                    (((struct o38_float *)(a4))->v) = 0.0f;
                    (((struct o4C_float *)(a4))->v) = 0.0f;
                    (((struct o48_float *)(a4))->v) = 0.0f;
                    (((struct o44_float *)(a4))->v) = 0.0f;
                    (((struct o71BC_uchar *)(a4))->v) = 0x0;
                    pl_start_motion(a4, 0x1, 0x62);
                    (((struct o71A9_uchar *)(a4))->v) = 0x1;
                    (((struct o71A8_uchar *)(a4))->v) = 0x1;
                    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                    fx_spawn_garuda_debris(a4, 0x1);
                    FUN_0c0c033c(a4, 0x0);
                    fx_spawn_state11_aura(a4);
                    (((struct oEC_ushort *)(a4))->v) = 0x40;
                    (((struct oEE_ushort *)(a4))->v) = 0xA;
                    (((struct oF0_ushort *)(a4))->v) = 0x3C;
                    return 0xF0;
                }
                t0 = *(signed char *)((a4 + 0xB));
                if (t0 != 0) {
                    if (t0 != 1) {
                        if (t0 != 2) {
                            if (t0 != 3) {
                                if (t0 != 4) {
                                    return t0;
                                }
                                (((struct o7223_uchar *)(a4))->v) = 0x0;
                                return pl_end_action_choose_state(a4);
                            }
                            t0 = FUN_0c0a2666(a4, 0x0, a6);
                            t1 = (signed char)t0;
                            if ((signed char)t0 == 0) {
                                pl_apply_motion_translation(a4);
                                t0 = pl_step_motion(a4);
                                t2 = (signed char)t0;
                                if ((signed char)t0 != 0) {
                                    t0 = *(signed char *)((a4 + 0xB));
                                    *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                                    t2 = (t0 + 0x1);
                                }
                                t1 = t2;
                            }
                            return t1;
                        }
                        pl_step_motion(a4);
                        pl_apply_velocity(a4);
                        pl_apply_acceleration(a4);
                        t0 = 0x3C;
                        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                            t1 = pl_landed(a4);
                            t2 = (signed char)t1;
                            if ((signed char)t1 != 0) {
                                pl_start_motion(a4, 0x1, 0x70);
                                (((struct o40_float *)(a4))->v) = 0.0f;
                                (((struct o3C_float *)(a4))->v) = 0.0f;
                                (((struct o38_float *)(a4))->v) = 0.0f;
                                (((struct o4C_float *)(a4))->v) = 0.0f;
                                (((struct o48_float *)(a4))->v) = 0.0f;
                                (((struct o44_float *)(a4))->v) = 0.0f;
                                (((struct o71BC_uchar *)(a4))->v) = 0x0;
                                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                t1 = *(signed char *)((a4 + 0xF));
                                *(unsigned char *)((a4 + 0xF)) = (t1 + 0x1);
                                t2 = (t1 + 0x1);
                            }
                            t0 = t2;
                        }
                        return t0;
                    }
                    pl_apply_motion_translation(a4);
                    t0 = pl_step_motion(a4);
                    t1 = (signed char)t0;
                    if ((signed char)t0 != 0) {
                        pl_start_motion(a4, 0x1, 0x6F);
                        snd_play_char_voice(a4, 0x19);
                        (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 20.0f);
                        (((struct o3C_float *)(a4))->v) = -20.0f;
                        (((struct o48_float *)(a4))->v) = -0.0f;
                        (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 20.0f);
                        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                        t0 = *(signed char *)((a4 + 0xF));
                        *(unsigned char *)((a4 + 0xF)) = (t0 + 0x1);
                        t1 = (t0 + 0x1);
                    }
                    return t1;
                }
                (((struct o3C_float *)(a4))->v) = 0.0f;
                (((struct o40_float *)(a4))->v) = 0.0f;
                (((struct o38_float *)(a4))->v) = 0.0f;
                (((struct o48_float *)(a4))->v) = 0.0f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                (((struct o71BC_uchar *)(a4))->v) = 0x2;
                *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                pl_start_motion(a4, 0x1, 0x6E);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                t0 = (((struct o71F4_short *)(a4))->v);
                (((struct o71F4_ushort *)(a4))->v) = (int)((float)t0 - 480.0f);
                if ((int)(short)(int)((float)t0 - 480.0f) < 0) {
                    (((struct o71F4_ushort *)(a4))->v) = 0x0;
                }
                FUN_0c0bfecc(a4, 0x0);
                *(unsigned char *)((a4 + 0xF)) = 0x0;
                t0 = *(signed char *)((a4 + 0xB));
                *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                return (t0 + 0x1);
            }
            t0 = *(signed char *)((a4 + 0xB));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        return t0;
                    }
                    pl_apply_velocity(a4);
                    pl_apply_acceleration(a4);
                    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                        t0 = pl_landed(a4);
                        if ((signed char)t0 != 0) {
                            pl_spawn_hit_effect_with_se(a4);
                            (((struct o3C_float *)(a4))->v) = 0.0f;
                            (((struct o48_float *)(a4))->v) = 0.0f;
                            (((struct o71BC_uchar *)(a4))->v) = 0x0;
                            (((struct o7223_uchar *)(a4))->v) = 0x0;
                            return ((int (*)(int, int, int))(pl_change_state))(a4, 0x6, 0x0);
                        }
                        return (signed char)t0;
                    }
                    return 0x3C;
                }
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    fx_spawn_garuda_fan_shot(a4, 0x0);
                    fx_spawn_garuda_fan_shot(a4, 0x1);
                    fx_spawn_garuda_fan_shot(a4, 0x2);
                    snd_play_char_voice(a4, 0x18);
                    snd_play_char_voice(a4, 0x31);
                }
                pl_step_motion(a4);
                pl_apply_motion_translation(a4);
                t0 = 0x71AA;
                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                    (((struct o3C_float *)(a4))->v) = -1.0f;
                    (((struct o48_float *)(a4))->v) = -1.19999993f;
                    t1 = *(signed char *)((a4 + 0xB));
                    *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
                    t0 = (t1 + 0x1);
                }
                return t0;
            }
            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
            (((struct o40_float *)(a4))->v) = 0.0f;
            (((struct o3C_float *)(a4))->v) = 0.0f;
            (((struct o38_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o48_float *)(a4))->v) = 0.0f;
            (((struct o44_float *)(a4))->v) = 0.0f;
            (((struct o71BC_uchar *)(a4))->v) = 0x2;
            pl_start_motion(a4, 0x1, 0x61);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            t0 = (((struct o71F4_short *)(a4))->v);
            (((struct o71F4_ushort *)(a4))->v) = (int)((float)t0 - 360.0f);
            if ((int)(short)(int)((float)t0 - 360.0f) < 0) {
                (((struct o71F4_ushort *)(a4))->v) = 0x0;
            }
            *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
            (((struct oEC_ushort *)(a4))->v) = 0x10;
            return fx_spawn_garuda_debris(a4, 0x0);
        }
        t0 = *(signed char *)((a4 + 0xB));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 3) {
                        if (t0 != 4) {
                            if (t0 != 5) {
                                return t0;
                            }
                            (((struct o7223_uchar *)(a4))->v) = 0x0;
                            return ((int (*)(int, int, int, int))(pl_change_state))(a4, 0x6, 0x0, a7);
                        }
                        t0 = FUN_0c0a2666(a4, 0x0, a6);
                        t1 = (signed char)t0;
                        if ((signed char)t0 == 0) {
                            pl_step_motion(a4);
                            pl_apply_velocity(a4);
                            pl_apply_acceleration(a4);
                            t0 = 0x3C;
                            if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                                t2 = pl_landed(a4);
                                t0 = (signed char)t2;
                                if ((signed char)t2 != 0) {
                                    pl_spawn_hit_effect_with_se(a4);
                                    (((struct o3C_float *)(a4))->v) = 0.0f;
                                    (((struct o48_float *)(a4))->v) = 0.0f;
                                    (((struct o71BC_uchar *)(a4))->v) = 0x0;
                                    t2 = *(signed char *)((a4 + 0xB));
                                    *(unsigned char *)((a4 + 0xB)) = (t2 + 0x1);
                                    t0 = (t2 + 0x1);
                                }
                            }
                            t1 = t0;
                        }
                        return t1;
                    }
                    pl_apply_velocity(a4);
                    pl_apply_acceleration(a4);
                    t0 = pl_step_motion(a4);
                    t1 = (signed char)t0;
                    if ((signed char)t0 != 0) {
                        (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 3.0f);
                        (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 3.0f);
                        (((struct o3C_float *)(a4))->v) = -3.0f;
                        (((struct o48_float *)(a4))->v) = -1.0f;
                        t0 = *(signed char *)((a4 + 0xB));
                        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                        t1 = (t0 + 0x1);
                    }
                    return t1;
                }
                pl_step_motion(a4);
                pl_apply_velocity(a4);
                pl_apply_acceleration(a4);
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                t1 = 0xEC;
                if ((short)(t0 - 1) == 0) {
                    pl_start_motion(a4, 0x1, 0x6D);
                    (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 5.0f);
                    (((struct o3C_float *)(a4))->v) = 1.0f;
                    (((struct o48_float *)(a4))->v) = 0.0f;
                    (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 5.0f);
                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                    t0 = *(signed char *)((a4 + 0xF));
                    *(unsigned char *)((a4 + 0xF)) = (t0 + 0x1);
                    t1 = (t0 + 0x1);
                }
                return t1;
            }
            pl_apply_motion_translation(a4);
            t0 = pl_step_motion(a4);
            t1 = (signed char)t0;
            if ((signed char)t0 != 0) {
                (((struct o71BC_uchar *)(a4))->v) = 0x2;
                pl_start_motion(a4, 0x1, 0x6C);
                snd_play_char_voice(a4, 0x19);
                (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 30.0f);
                (((struct o3C_float *)(a4))->v) = 40.0f;
                (((struct o48_float *)(a4))->v) = -2.0f;
                (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 30.0f);
                (((struct oEC_ushort *)(a4))->v) = 0xC;
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                t0 = *(signed char *)((a4 + 0xF));
                *(unsigned char *)((a4 + 0xF)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            }
            return t1;
        }
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o71BC_uchar *)(a4))->v) = 0x0;
        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
        pl_start_motion(a4, 0x1, 0x6B);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t0 = (((struct o71F4_short *)(a4))->v);
        (((struct o71F4_ushort *)(a4))->v) = (int)((float)t0 - 480.0f);
        if ((int)(short)(int)((float)t0 - 480.0f) < 0) {
            (((struct o71F4_ushort *)(a4))->v) = 0x0;
        }
        FUN_0c0bfecc(a4, 0x0);
        *(unsigned char *)((a4 + 0xF)) = 0x0;
        t0 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
        return (t0 + 0x1);
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            (((struct o7223_uchar *)(a4))->v) = 0x0;
            return pl_end_action_choose_state(a4);
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            fx_spawn_garuda_fan_shot(a4, 0x0);
            fx_spawn_garuda_fan_shot(a4, 0x1);
            fx_spawn_garuda_fan_shot(a4, 0x2);
            snd_play_char_voice(a4, 0x18);
            snd_play_char_voice(a4, 0x31);
        }
        pl_step_motion(a4);
        pl_apply_motion_translation(a4);
        t0 = 0x71AA;
        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
            t1 = *(signed char *)((a4 + 0xB));
            *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
        return t0;
    }
    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_start_motion(a4, 0x1, 0x60);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t0 = (((struct o71F4_short *)(a4))->v);
    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t0 - 360.0f);
    if ((int)(short)(int)((float)t0 - 360.0f) < 0) {
        (((struct o71F4_ushort *)(a4))->v) = 0x0;
    }
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    (((struct oEC_ushort *)(a4))->v) = 0x11;
    return fx_spawn_garuda_debris(a4, 0x0);
}

int FUN_0c0a94f0(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return obj_destroy(a4);
    }
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 == 3) {
                    if ((*(signed char *)((a4 + 0xC))) == 0) {
                        if ((*(signed char *)((a4 + 0xA))) == 0) {
                            if (((((struct o38_float *)(a4))->v)) > -400.0f) {
                                (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - 50.0f);
                            } else {
                                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                            }
                        } else {
                            if (400.0f > ((((struct o38_float *)(a4))->v))) {
                                (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + 50.0f);
                            } else {
                                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                            }
                        }
                    } else {
                        t1 = *(signed char *)((a4 + 0x9));
                        if (t1 != 0) {
                            if (t1 != 1) {
                                if (t1 != 2) {
                                    if (t1 != 3) {
                                        t1 = *(signed char *)((a4 + 0x8));
                                        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                                        t2 = (t1 + 0x1);
                                    } else {
                                        t1 = (((struct oEE_short *)(a4))->v);
                                        (((struct oEE_ushort *)(a4))->v) = (t1 - 1);
                                        if ((short)(t1 - 1) == 0) {
                                            t1 = *(signed char *)((a4 + 0x9));
                                            *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                                            t3 = (t1 + 0x1);
                                        } else {
                                            u0 = *(float *)0xC0A99B8;
                                            t1 = (((struct o2E0_int *)(a4))->v);
                                            (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) - u0);
                                            t1 = (((struct o2E4_int *)(a4))->v);
                                            u1 = (((struct o2C_float *)(t1))->v);
                                            (((struct o2C_float *)(t1))->v) = (u1 - u0);
                                            t3 = 0x2C;
                                            u2 = (u1 - u0);
                                        }
                                        t2 = t3;
                                        u0 = u2;
                                    }
                                    t1 = t2;
                                    u1 = u0;
                                } else {
                                    t2 = *(signed char *)0xC7F2EE7;
                                    t3 = (unsigned char)t2;
                                    if ((int)(unsigned char)t2 >= (int)0x4) {
                                        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                                        (((struct oEE_ushort *)(a4))->v) = 0x1E;
                                        t3 = 0xEE;
                                    }
                                    t1 = t3;
                                }
                                t2 = t1;
                                u0 = u1;
                            } else {
                                t1 = (((struct oEE_short *)(a4))->v);
                                (((struct oEE_ushort *)(a4))->v) = (t1 - 1);
                                if ((short)(t1 - 1) == 0) {
                                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                                }
                                u1 = (((struct o2C_float *)(((((struct o2E0_int *)(a4))->v))))->v);
                                u2 = u1;
                                if (u1 > 0.0f) {
                                    t1 = (((struct o2E0_int *)(a4))->v);
                                    (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) - 4.0f);
                                    t1 = (((struct o2E4_int *)(a4))->v);
                                    u1 = (((struct o2C_float *)(t1))->v);
                                    (((struct o2C_float *)(t1))->v) = (u1 - 4.0f);
                                    u2 = (u1 - 4.0f);
                                }
                                if ((*(signed char *)((a4 + 0xA))) == 0) {
                                    t1 = (((struct o2E8_int *)(a4))->v);
                                    (((struct o28_float *)(t1))->v) = (((((struct o28_float *)(t1))->v)) - 10.0f);
                                    u1 = (((struct o28_float *)(((((struct o2E8_int *)(a4))->v))))->v);
                                    if (!(u1 > -600.0f)) {
                                        (((struct o28_float *)(((((struct o2E8_int *)(a4))->v))))->v) = -600.0f;
                                    }
                                    u3 = u1;
                                    u1 = -600.0f;
                                } else {
                                    t1 = (((struct o2E8_int *)(a4))->v);
                                    (((struct o28_float *)(t1))->v) = (((((struct o28_float *)(t1))->v)) + 10.0f);
                                    u4 = (((struct o28_float *)(((((struct o2E8_int *)(a4))->v))))->v);
                                    if (!(600.0f > u4)) {
                                        (((struct o28_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 600.0f;
                                    }
                                    u3 = u2;
                                    u1 = u4;
                                }
                                t2 = 0x28;
                                u2 = u3;
                                u0 = u1;
                            }
                            t1 = t2;
                            t2 = 0x1;
                            u1 = u2;
                            u2 = u0;
                        } else {
                            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                            (((struct oEE_ushort *)(a4))->v) = 0x1E;
                            menu_ui_spawn_34(a4);
                            t3 = (((struct oEE_short *)(a4))->v);
                            (((struct oEE_ushort *)(a4))->v) = (t3 - 1);
                            if ((short)(t3 - 1) == 0) {
                                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                            }
                            u0 = (((struct o2C_float *)(((((struct o2E0_int *)(a4))->v))))->v);
                            u3 = u0;
                            if (u0 > 0.0f) {
                                t3 = (((struct o2E0_int *)(a4))->v);
                                (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(t3))->v)) - 4.0f);
                                t3 = (((struct o2E4_int *)(a4))->v);
                                u0 = (((struct o2C_float *)(t3))->v);
                                (((struct o2C_float *)(t3))->v) = (u0 - 4.0f);
                                u3 = (u0 - 4.0f);
                            }
                            if ((*(signed char *)((a4 + 0xA))) == 0) {
                                t3 = (((struct o2E8_int *)(a4))->v);
                                (((struct o28_float *)(t3))->v) = (((((struct o28_float *)(t3))->v)) - 10.0f);
                                u0 = (((struct o28_float *)(((((struct o2E8_int *)(a4))->v))))->v);
                                if (!(u0 > -600.0f)) {
                                    (((struct o28_float *)(((((struct o2E8_int *)(a4))->v))))->v) = -600.0f;
                                }
                                u4 = u0;
                                u0 = -600.0f;
                            } else {
                                t3 = (((struct o2E8_int *)(a4))->v);
                                (((struct o28_float *)(t3))->v) = (((((struct o28_float *)(t3))->v)) + 10.0f);
                                u5 = (((struct o28_float *)(((((struct o2E8_int *)(a4))->v))))->v);
                                if (!(600.0f > u5)) {
                                    (((struct o28_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 600.0f;
                                }
                                u4 = u3;
                                u0 = u5;
                            }
                            t1 = 0x28;
                            u1 = u4;
                            u2 = u0;
                        }
                        t3 = t1;
                        t1 = 0x0;
                        t4 = 0x0;
                        t5 = t2;
                        u0 = u1;
                        u1 = u2;
                        for (;;) {
                            if ((int)t4 >= (int)0x3) {
                                break;
                            }
                            t5 = 0x2E0;
                            t3 = 0x28;
                            u0 = (*(float *)((a4 + t3)));
                            t4 = (t4 + 0x1);
                            t5 = (t5 + a4);
                            t5 = (t5 + t1);
                            t5 = (*(int *)((t5 + 0x0)));
                            u1 = (*(float *)((t5 + t3)));
                            t3 = 0x4;
                            u0 = (u0 * u1);
                            u0 = (u0 * 1.0f);
                            u0 = (-u0);
                            u0 = (u0 / 640.0f);
                            *(float *)((t5 + t3)) = u0;
                            t3 = 0x2C;
                            t5 = 0x2E0;
                            t5 = (t5 + a4);
                            t5 = (t5 + t1);
                            t5 = (*(int *)((t5 + 0x0)));
                            t1 = (t1 + 0x4);
                            u1 = (*(float *)((t5 + t3)));
                            t3 = 0x28;
                            u0 = (*(float *)((a4 + t3)));
                            t3 = 0x8;
                            u0 = (u0 * u1);
                            u0 = (u0 * 1.0f);
                            u0 = (-u0);
                            u0 = (u0 / 480.0f);
                            *(float *)((t5 + t3)) = u0;
                        }
                    }
                    u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o38_float *)(a4))->v)));
                    (((struct o20_float *)(a4))->v) = ((-(u0 * 1.0f)) / 640.0f);
                    u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o3C_float *)(a4))->v)));
                    (((struct o24_float *)(a4))->v) = ((-(u0 * 1.0f)) / 480.0f);
                    return 0x24;
                }
                return obj_destroy(a4);
            }
            t1 = *(signed char *)((a4 + 0x9));
            switch (t1) {
            case 0:
                t1 = *(int *)((a4 + 0x1C));
                if (((*(signed char *)((t1 + 0x8))) == 2) && (t0 = *(signed char *)((t1 + 0x9)), t0 == 3)) {
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                    *(unsigned char *)((a4 + 0xA)) = (*(signed char *)((0xF0 + (*(int *)((a4 + 0x1C))))));
                    t0 = 0xFFFFFFFF;
                    if ((*(signed char *)((a4 + 0xA))) == 0) {
                        t0 = 0x1;
                    }
                    (((struct o38_float *)(a4))->v) = (float)(t0 * 0x258);
                    *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7F3051))));
                    menu_ui_setup_subobject(a4, 0x0, (*(signed char *)((a4 + 0xA))));
                    menu_ui_setup_subobject(a4, 0x1, (*(signed char *)((a4 + 0xA))));
                    menu_ui_setup_subobject(a4, 0x2, (*(signed char *)((a4 + 0xA))));
                }
                break;
            case 1:
                if ((*(signed char *)((a4 + 0xA))) == 0) {
                    if (!(((((struct o38_float *)(a4))->v)) > 0.0f)) {
                        (((struct o38_float *)(a4))->v) = 0.0f;
                        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                    } else {
                        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - 50.0f);
                    }
                } else {
                    if (!(0.0f > ((((struct o38_float *)(a4))->v)))) {
                        (((struct o38_float *)(a4))->v) = 0.0f;
                        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                    } else {
                        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + 50.0f);
                    }
                }
                break;
            case 2:
                t1 = *(signed char *)0xC7F3051;
                if ((*(signed char *)((a4 + 0x4))) != (*(signed char *)(((t1 + 0xC1525B4) + 0x0)))) {
                    *(unsigned char *)((a4 + 0x4)) = (*(signed char *)(((t1 + 0xC1525B4) + 0x0)));
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                }
                break;
            default:
                if ((*(signed char *)((a4 + 0xA))) == 0) {
                    if (((((struct o38_float *)(a4))->v)) > -600.0f) {
                        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - 50.0f);
                    } else {
                        *(unsigned char *)((a4 + 0x9)) = 0x0;
                    }
                } else {
                    if (600.0f > ((((struct o38_float *)(a4))->v))) {
                        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + 50.0f);
                    } else {
                        *(unsigned char *)((a4 + 0x9)) = 0x0;
                    }
                }
                break;
            }
            if ((*(signed char *)((a4 + 0xC))) == 0) {
                if ((unsigned char)(*(signed char *)0xC7F2EE5) != 3) {
                } else {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                }
            } else {
                if ((int)(unsigned char)(*(signed char *)0xC7F2EE8) < (int)0x2) {
                } else {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                }
            }
            u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o38_float *)(a4))->v)));
            (((struct o20_float *)(a4))->v) = ((-(u0 * 1.0f)) / 640.0f);
            u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o3C_float *)(a4))->v)));
            (((struct o24_float *)(a4))->v) = ((-(u0 * 1.0f)) / 480.0f);
            return 0x24;
        }
        if ((*(signed char *)((a4 + 0xC))) == 0) {
            t0 = *(signed char *)0xC7F2EE6;
            t1 = (unsigned char)t0;
            if ((int)(unsigned char)t0 < (int)0x1) {
            } else {
                t0 = *(signed char *)0xC7F2EE7;
                t2 = (unsigned char)t0;
                if ((int)(unsigned char)t0 < (int)0x1) {
                } else {
                    t0 = *(signed char *)0xC7F2EE8;
                    t3 = (unsigned char)t0;
                    if ((int)(unsigned char)t0 < (int)0x1) {
                    } else {
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                        *(unsigned char *)((a4 + 0x9)) = 0x0;
                        t3 = 0x0;
                    }
                    t2 = t3;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            t1 = *(signed char *)0xC7F2EE6;
            t2 = (unsigned char)t1;
            if ((int)(unsigned char)t1 < (int)0x3) {
            } else {
                t1 = *(signed char *)0xC7F2EE7;
                t3 = (unsigned char)t1;
                if ((int)(unsigned char)t1 < (int)0x3) {
                } else {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                    t3 = 0x0;
                }
                t2 = t3;
            }
            t0 = t2;
        }
        return t0;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    t0 = 0x1;
    if ((unsigned char)(*(signed char *)0xC7F2EE5) == 1) {
        t0 = 0x0;
    }
    *(unsigned char *)((a4 + 0xC)) = t0;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0x1F;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7F3051))));
    (((struct o20_float *)(a4))->v) = 0.0f;
    (((struct o24_float *)(a4))->v) = 0.0f;
    (((struct o28_float *)(a4))->v) = -20.0f;
    (((struct o50_float *)(a4))->v) = 1.0f;
    (((struct o54_float *)(a4))->v) = 1.0f;
    (((struct o58_float *)(a4))->v) = 1.0f;
    (((struct o38_float *)(a4))->v) = 600.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    menu_ui_setup_subobject(a4, 0x0, (*(signed char *)((a4 + 0xA))));
    menu_ui_setup_subobject(a4, 0x1, (*(signed char *)((a4 + 0xA))));
    menu_ui_setup_subobject(a4, 0x2, (*(signed char *)((a4 + 0xA))));
    u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o38_float *)(a4))->v)));
    (((struct o20_float *)(a4))->v) = ((-(u0 * 1.0f)) / 640.0f);
    u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o3C_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = ((-(u0 * 1.0f)) / 480.0f);
    return 0x24;
}

int FUN_0c0d1e64(int a4)
{
    register int t0;
    register int t1;

    (((struct o8C_uint *)(a4))->v) = (((((unsigned short)((((struct o82_short *)(a4))->v)) * (unsigned short)((((struct o68_short *)(a4))->v))) << 2) + (*(int *)(((((((unsigned short)((((struct oA0_short *)(a4))->v)) << 2) << 2) << 1) + 0xC7D08E0) + 0x4)))) + ((unsigned short)((((struct o8A_short *)(a4))->v)) << 2));
    t0 = (((struct o44_int *)(a4))->v);
    if ((t0 == 16) || ((t0 == 32) || ((t0 == 64) || (t0 == 0x80)))) {
        t0 = (((struct o88_short *)(a4))->v);
        if ((unsigned short)t0 != 0) {
            if ((unsigned short)t0 != 1) {
                if ((unsigned short)t0 != 2) {
                } else {
                    if ((0x40 & ((((struct o48_int *)(a4))->v))) != 0) {
                        t0 = (((struct o8C_int *)(a4))->v);
                        *(unsigned short *)((t0 + 0x2)) = ((*(short *)((t0 + 0x2))) - 1);
                    }
                    if ((0x80 & ((((struct o48_int *)(a4))->v))) != 0) {
                        t0 = (((struct o8C_int *)(a4))->v);
                        *(unsigned short *)((t0 + 0x2)) = ((*(short *)((t0 + 0x2))) + 0x1);
                    }
                    t0 = (((struct o8C_int *)(a4))->v);
                    t1 = *(signed char *)((t0 + 0x1));
                    if ((int)(unsigned short)(*(short *)((t0 + 0x2))) >= (int)(unsigned short)(*(short *)(((0xC33F604 + (signed char)((t1 << 1) + (t1 << 2))) + ((*(signed char *)((a4 + 0x4))) << 1))))) {
                        *(unsigned short *)((((((struct o8C_int *)(a4))->v)) + 0x2)) = 0x0;
                    }
                }
            } else {
                if ((0x40 & ((((struct o48_int *)(a4))->v))) != 0) {
                    t0 = (((struct o8C_int *)(a4))->v);
                    t1 = *(signed char *)((t0 + 0x1));
                    *(unsigned char *)((t0 + 0x1)) = (t1 - 1);
                    if ((int)(signed char)(t1 - 1) < 0) {
                        *(unsigned char *)((((((struct o8C_int *)(a4))->v)) + 0x1)) = 0x2;
                    }
                }
                if ((0x80 & ((((struct o48_int *)(a4))->v))) != 0) {
                    t0 = (((struct o8C_int *)(a4))->v);
                    t1 = *(signed char *)((t0 + 0x1));
                    *(unsigned char *)((t0 + 0x1)) = (t1 + 0x1);
                    if ((int)(signed char)(t1 + 0x1) > (int)0x2) {
                        *(unsigned char *)((((((struct o8C_int *)(a4))->v)) + 0x1)) = 0x0;
                    }
                }
            }
        } else {
            if ((0x40 & ((((struct o48_int *)(a4))->v))) != 0) {
                t0 = (((struct o8C_int *)(a4))->v);
                t1 = *(signed char *)((t0 + 0x0));
                *(unsigned char *)((t0 + 0x0)) = (t1 - 1);
                if ((int)(signed char)(t1 - 1) < (int)0xFFFFFFFF) {
                    *(unsigned char *)((((((struct o8C_int *)(a4))->v)) + 0x0)) = 0x12;
                }
            }
            if ((0x80 & ((((struct o48_int *)(a4))->v))) != 0) {
                t0 = (((struct o8C_int *)(a4))->v);
                t1 = *(signed char *)((t0 + 0x0));
                *(unsigned char *)((t0 + 0x0)) = (t1 + 0x1);
                if ((int)(signed char)(t1 + 0x1) > (int)0x12) {
                    *(unsigned char *)((((((struct o8C_int *)(a4))->v)) + 0x0)) = 0xFFFFFFFF;
                }
            }
        }
    }
    (((struct o9A_ushort *)(a4))->v) = (*(short *)((0xC33F628 + ((*(signed char *)((((((struct o8C_int *)(a4))->v)) + 0x1))) << 1))));
    t0 = (((struct o8C_int *)(a4))->v);
    (((struct o90_uint *)(a4))->v) = ((((unsigned short)(*(short *)((0xC33F628 + ((*(signed char *)((t0 + 0x1))) << 1)))) * (unsigned short)(*(short *)((t0 + 0x2)))) << 1) + (*(int *)(((0xC7D08E0 + ((((unsigned short)((((struct oA0_short *)(a4))->v)) << 2) << 2) << 1)) + 0x8))));
    if ((0x2 & ((((struct o48_int *)(a4))->v))) != 0) {
        (((struct o56_ushort *)(a4))->v) = 0x1;
    }
    t0 = (((struct o48_int *)(a4))->v);
    t1 = t0;
    if ((t0 & 4) != 0) {
        (((struct o56_ushort *)(a4))->v) = 0x3;
        t1 = 0x56;
    }
    return t1;
}

int FUN_0c0d1aec(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = (((struct o44_int *)(a4))->v);
    if ((t0 == 16) || ((t0 == 32) || ((t0 == 64) || (t0 == 0x80)))) {
        if ((((((struct o48_int *)(a4))->v)) & 16) != 0) {
            t0 = (((struct o88_short *)(a4))->v);
            (((struct o88_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(unsigned short)(t0 - 1) > (int)0x2) {
                (((struct o88_ushort *)(a4))->v) = 0x2;
            }
        }
        if ((((((struct o48_int *)(a4))->v)) & 32) != 0) {
            t0 = (((struct o88_short *)(a4))->v);
            (((struct o88_ushort *)(a4))->v) = (t0 + 0x1);
            if ((int)(unsigned short)(t0 + 0x1) > (int)0x2) {
                (((struct o88_ushort *)(a4))->v) = 0x0;
            }
        }
        if ((((((struct o48_int *)(a4))->v)) & 64) != 0) {
            t0 = (((struct o8A_short *)(a4))->v);
            (((struct o8A_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(unsigned short)(t0 - 1) > (int)((unsigned short)((((struct o82_short *)(a4))->v)) - 1)) {
                (((struct o8A_ushort *)(a4))->v) = (((((struct o82_short *)(a4))->v)) + 0xFFFF);
            }
        }
        if ((((((struct o48_int *)(a4))->v)) & 128) != 0) {
            t0 = (((struct o8A_short *)(a4))->v);
            (((struct o8A_ushort *)(a4))->v) = (t0 + 0x1);
            if ((int)(unsigned short)(t0 + 0x1) > (int)((unsigned short)((((struct o82_short *)(a4))->v)) - 1)) {
                (((struct o8A_ushort *)(a4))->v) = 0x0;
            }
        }
    }
    if ((((((struct o48_int *)(a4))->v)) & 0x2) != 0) {
        (((struct o56_ushort *)(a4))->v) = 0x0;
    }
    t0 = (((struct o48_int *)(a4))->v);
    t1 = t0;
    if ((t0 & 4) != 0) {
        (((struct o56_ushort *)(a4))->v) = 0x2;
        if (((((struct o8A_short *)(a4))->v)) == 0) {
            (((struct o54_ushort *)(a4))->v) = 0x2;
            (((struct o8C_uint *)(a4))->v) = (((((unsigned short)((((struct o82_short *)(a4))->v)) * (unsigned short)((((struct o68_short *)(a4))->v))) << 2) + (*(int *)(((((((unsigned short)((((struct oA0_short *)(a4))->v)) << 2) << 2) << 1) + 0xC7D08E0) + 0x4)))) + ((unsigned short)((((struct o8A_short *)(a4))->v)) << 2));
            t0 = (((struct o8C_int *)(a4))->v);
            t2 = *(signed char *)((t0 + 0x1));
            t3 = (((unsigned short)(*(short *)((0xC33F62E + (t2 << 1)))) * (unsigned short)(*(short *)((t0 + 0x2)))) << 1);
            t0 = (*(int *)((((0xC7D08E0 + ((((unsigned short)((((struct oA0_short *)(a4))->v)) << 2) << 2) << 1)) + (t2 << 2)) + 0xC)));
            t2 = 0xC33F62E;
        } else {
            (((struct o8C_uint *)(a4))->v) = (((((unsigned short)((((struct o82_short *)(a4))->v)) * (unsigned short)((((struct o68_short *)(a4))->v))) << 2) + (*(int *)(((((((unsigned short)((((struct oA0_short *)(a4))->v)) << 2) << 2) << 1) + 0xC7D08E0) + 0x4)))) + ((unsigned short)((((struct o8A_short *)(a4))->v)) << 2));
            t4 = (((struct o8C_int *)(a4))->v);
            t3 = (((unsigned short)(*(short *)((0xC33F628 + ((*(signed char *)((t4 + 0x1))) << 1)))) * (unsigned short)(*(short *)((t4 + 0x2)))) << 1);
            t0 = (*(int *)(((0xC7D08E0 + ((((unsigned short)((((struct oA0_short *)(a4))->v)) << 2) << 2) << 1)) + 0x8)));
            t2 = 0xC33F628;
        }
        (((struct o90_uint *)(a4))->v) = (t3 + t0);
        (((struct o9A_ushort *)(a4))->v) = (*(short *)((t2 + ((*(signed char *)((((((struct o8C_int *)(a4))->v)) + 0x1))) << 1))));
        t1 = 0x9A;
    }
    return t1;
}

int FUN_0c0d19ac(int a4)
{
    register int t0;
    register int t1;

    t0 = (((struct o44_int *)(a4))->v);
    if ((t0 == 16) || ((t0 == 32) || ((t0 == 64) || (t0 == 0x80)))) {
        if ((((((struct o48_int *)(a4))->v)) & 16) != 0) {
            t0 = (((struct o84_short *)(a4))->v);
            (((struct o84_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(unsigned short)(t0 - 1) > (int)0x2) {
                (((struct o84_ushort *)(a4))->v) = 0x2;
            }
        }
        if ((((((struct o48_int *)(a4))->v)) & 32) != 0) {
            t0 = (((struct o84_short *)(a4))->v);
            (((struct o84_ushort *)(a4))->v) = (t0 + 0x1);
            if ((int)(unsigned short)(t0 + 0x1) > (int)0x2) {
                (((struct o84_ushort *)(a4))->v) = 0x0;
            }
        }
        if ((((((struct o48_int *)(a4))->v)) & 64) != 0) {
            t0 = (((struct o86_short *)(a4))->v);
            (((struct o86_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(unsigned short)(t0 - 1) > (int)((unsigned short)((((struct o80_short *)(a4))->v)) - 1)) {
                (((struct o86_ushort *)(a4))->v) = (((((struct o80_short *)(a4))->v)) + 0xFFFF);
            }
        }
        if ((((((struct o48_int *)(a4))->v)) & 128) != 0) {
            t0 = (((struct o86_short *)(a4))->v);
            (((struct o86_ushort *)(a4))->v) = (t0 + 0x1);
            if ((int)(unsigned short)(t0 + 0x1) > (int)((unsigned short)((((struct o80_short *)(a4))->v)) - 1)) {
                (((struct o86_ushort *)(a4))->v) = 0x0;
            }
        }
    }
    if ((((((struct o48_int *)(a4))->v)) & 0x2) != 0) {
        (((struct o56_ushort *)(a4))->v) = 0x0;
    }
    t0 = (((struct o48_int *)(a4))->v);
    t1 = t0;
    if ((t0 & 4) != 0) {
        (((struct o56_ushort *)(a4))->v) = 0x2;
        (((struct o8C_uint *)(a4))->v) = (((((unsigned short)((((struct o80_short *)(a4))->v)) * (unsigned short)((((struct o64_short *)(a4))->v))) << 2) + (*(int *)(((((((unsigned short)((((struct oA0_short *)(a4))->v)) << 2) << 2) << 1) + 0xC7D08E0) + 0x0)))) + ((unsigned short)((((struct o86_short *)(a4))->v)) << 2));
        t0 = (((struct o8C_int *)(a4))->v);
        (((struct o90_uint *)(a4))->v) = ((((unsigned short)(*(short *)((0xC33F628 + ((*(signed char *)((t0 + 0x1))) << 1)))) * (unsigned short)(*(short *)((t0 + 0x2)))) << 1) + (*(int *)(((0xC7D08E0 + ((((unsigned short)((((struct oA0_short *)(a4))->v)) << 2) << 2) << 1)) + 0x8))));
        (((struct o9A_ushort *)(a4))->v) = (*(short *)((0xC33F628 + ((*(signed char *)((((((struct o8C_int *)(a4))->v)) + 0x1))) << 1))));
        t1 = 0x9A;
    }
    return t1;
}

int FUN_0c06a69e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721F));
    if ((unsigned int)t0 < (unsigned int)0x10) {
        switch ((t0 << 1)) {
            case 0:
            case 4:
            {
                (((struct oF0_ushort *)(a4))->v) = 0x0;
                t0 = ((int (*)(int, int, int, int))((*(int *)((((*(signed char *)((a4 + 0x7238))) << 2) + 0xC336CA8)))))(a4, a5, a6, a7);
            }
                break;
            case 2:
            case 6:
            {
                pl_ryoma_mode01_03_enter(a4, a5, a6, a7);
            }
                break;
            case 8:
            {
                pl_ryoma_mode04_enter(a4);
            }
                break;
            case 10:
            {
                pl_mode05_enter(a4);
            }
                break;
            case 12:
            {
                pl_mode06_enter(a4);
            }
                break;
            case 14:
            {
                pl_ryoma_mode07_enter(a4);
            }
                break;
            case 16:
            {
                pl_mode08_enter(a4);
            }
                break;
            case 18:
            {
                pl_mode09_enter(a4);
            }
                break;
            case 20:
            {
                pl_ryoma_mode10_enter(a4);
            }
                break;
            case 22:
            {
                pl_mode11_enter(a4);
            }
                break;
            case 24:
            {
                pl_mode12_enter(a4);
            }
                break;
            case 26:
            {
                pl_mode13_enter(a4);
            }
                break;
            case 28:
            {
                pl_mode14_enter(a4);
            }
                break;
            default:
            {
                pl_mode15_enter(a4, a5, a6);
            }
                break;
        }
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    return 0x71A8;
}

int FUN_0c06e2c0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t3;

    t0 = *(signed char *)((a4 + 0x721F));
    if ((unsigned int)t0 < (unsigned int)0x10) {
        switch ((t0 << 1)) {
            case 0:
            case 4:
            {
                t3 = *(int *)((((*(signed char *)((a4 + 0x7238))) << 2) + 0xC336EC4));
                return ((int (*)(int, int, int, int))(t3))(a4, a5, a6, a7);
            }
            case 2:
            case 6:
            {
                return pl_mode01_03_update(a4);
            }
            case 8:
            {
                return ((int (*)(int, int, int, int))(0xC06E984))(a4, a5, a6, a7);
            }
            case 10:
            {
                return pl_mode05_update(a4);
            }
            case 12:
            {
                return pl_mode06_update(a4);
            }
            case 14:
            {
                return pl_wangtang_mode07_update(a4, a5, a6, a7);
            }
            case 16:
            {
                return pl_mode08_update(a4, a5, a6, a7);
            }
            case 18:
            {
                return pl_mode09_update(a4, a5, a6, a7);
            }
            case 20:
            {
                if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                    return pl_wangtang_mode10_update(a4, a5, a6, a7);
                }
                return FUN_0c0646fe(a4);
            }
            case 22:
            {
                return pl_wangtang_mode11_update(a4);
            }
            case 24:
            {
                return pl_wangtang_mode12_update(a4);
            }
            case 26:
            {
                return pl_mode13_update(a4);
            }
            case 28:
            {
                return pl_mode14_update(a4);
            }
            default:
            {
                return pl_mode15_update(a4);
            }
        }
    }
    return t0;
}

int FUN_0c07eaa4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721F));
    if ((unsigned int)t0 < (unsigned int)0x10) {
        switch ((t0 << 1)) {
            case 0:
            case 4:
            {
                t0 = *(int *)((((*(signed char *)((a4 + 0x7238))) << 2) + 0xC3373B4));
                return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
            }
            case 2:
            case 6:
            {
                return pl_mode01_03_update(a4);
            }
            case 8:
            {
                return pl_mode04_update(a4);
            }
            case 10:
            {
                return pl_mode05_update(a4);
            }
            case 12:
            {
                return pl_mode06_update(a4);
            }
            case 14:
            {
                return pl_mode07_update(a4);
            }
            case 16:
            {
                return pl_mode08_update(a4, a5, a6, a7);
            }
            case 18:
            {
                return pl_mode09_update(a4, a5, a6, a7);
            }
            case 20:
            {
                return pl_mode10_update(a4);
            }
            case 22:
            {
                return pl_mode11_update(a4, a5, a6, a7);
            }
            case 24:
            {
                return pl_mode12_update(a4, a5, a6, a7);
            }
            case 26:
            {
                return pl_mode13_update(a4);
            }
            case 28:
            {
                return pl_mode14_update(a4);
            }
            default:
            {
                return pl_mode15_update(a4);
            }
        }
    }
    return pl_end_action_choose_state(a4);
}

int FUN_0c06a8ac(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t3;

    t0 = *(signed char *)((a4 + 0x721F));
    if ((unsigned int)t0 < (unsigned int)0x10) {
        switch ((t0 << 1)) {
            case 0:
            case 4:
            {
                t3 = *(int *)((((*(signed char *)((a4 + 0x7238))) << 2) + 0xC336D00));
                return ((int (*)(int, int, int, int))(t3))(a4, a5, a6, a7);
            }
            case 2:
            case 6:
            {
                return ((int (*)(int, int, int, int))(0xC06A680))(a4, a5, a6, a7);
            }
            case 8:
            {
                return pl_ryoma_mode04_update(a4);
            }
            case 10:
            {
                return pl_mode05_update(a4);
            }
            case 12:
            {
                return pl_mode06_update(a4);
            }
            case 14:
            {
                return pl_ryoma_mode07_update(a4);
            }
            case 16:
            {
                return pl_mode08_update(a4, a5, a6, a7);
            }
            case 18:
            {
                return pl_mode09_update(a4, a5, a6, a7);
            }
            case 20:
            {
                return pl_ryoma_mode10_update(a4, a5, a6, a7);
            }
            case 22:
            {
                return pl_mode11_update(a4, a5, a6, a7);
            }
            case 24:
            {
                return pl_mode12_update(a4, a5, a6, a7);
            }
            case 26:
            {
                return pl_mode13_update(a4);
            }
            case 28:
            {
                return pl_mode14_update(a4);
            }
            default:
            {
                return pl_mode15_update(a4);
            }
        }
    }
    return t0;
}

int FUN_0c0d18f8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = (((struct o44_int *)(a4))->v);
    if ((t0 == 16) || ((t0 == 32) || ((t0 == 64) || (t0 == 0x80)))) {
        if ((((((struct o48_int *)(a4))->v)) & 16) != 0) {
            (((struct o54_ushort *)(a4))->v) = 0x0;
        }
        if ((((((struct o48_int *)(a4))->v)) & 32) != 0) {
            (((struct o54_ushort *)(a4))->v) = 0x0;
        }
        if ((((((struct o48_int *)(a4))->v)) & 64) != 0) {
            t0 = (((struct o68_short *)(a4))->v);
            (((struct o68_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(unsigned short)(t0 - 1) > (int)((unsigned short)(*(short *)(((((*(signed char *)((a4 + 0x4))) << 1) + 0xC33F5F8) + 0x6))) - 1)) {
                (((struct o68_ushort *)(a4))->v) = ((*(short *)(((((*(signed char *)((a4 + 0x4))) << 1) + 0xC33F5F8) + 0x6))) + 0xFFFF);
            }
        }
        if ((((((struct o48_int *)(a4))->v)) & 128) != 0) {
            t0 = (((struct o68_short *)(a4))->v);
            (((struct o68_ushort *)(a4))->v) = (t0 + 0x1);
            if ((int)(unsigned short)(t0 + 0x1) > (int)((unsigned short)(*(short *)(((0xC33F5F8 + ((*(signed char *)((a4 + 0x4))) << 1)) + 0x6))) - 1)) {
                (((struct o68_ushort *)(a4))->v) = 0x0;
            }
        }
    }
    t0 = (((struct o48_int *)(a4))->v);
    t1 = t0;
    if ((t0 & 4) != 0) {
        (((struct o56_ushort *)(a4))->v) = 0x1;
        t1 = 0x56;
    }
    return t1;
}

int FUN_0c0d1848(int a4)
{
    register int t0;
    register int t1;

    t0 = (((struct o44_int *)(a4))->v);
    if ((t0 == 16) || ((t0 == 32) || ((t0 == 64) || (t0 == 0x80)))) {
        if ((((((struct o48_int *)(a4))->v)) & 16) != 0) {
            (((struct o54_ushort *)(a4))->v) = 0x1;
        }
        if ((((((struct o48_int *)(a4))->v)) & 32) != 0) {
            (((struct o54_ushort *)(a4))->v) = 0x1;
        }
        if ((((((struct o48_int *)(a4))->v)) & 64) != 0) {
            t0 = (((struct o64_short *)(a4))->v);
            (((struct o64_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(unsigned short)(t0 - 1) > (int)((unsigned short)(*(short *)(((((*(signed char *)((a4 + 0x4))) << 1) + 0xC33F5F8) + 0x0))) - 1)) {
                (((struct o64_ushort *)(a4))->v) = ((*(short *)((0xC33F5F8 + ((*(signed char *)((a4 + 0x4))) << 1)))) + 0xFFFF);
            }
        }
        if ((((((struct o48_int *)(a4))->v)) & 128) != 0) {
            t0 = (((struct o64_short *)(a4))->v);
            (((struct o64_ushort *)(a4))->v) = (t0 + 0x1);
            if ((int)(unsigned short)(t0 + 0x1) > (int)((unsigned short)(*(short *)(((0xC33F5F8 + ((*(signed char *)((a4 + 0x4))) << 1)) + 0x0))) - 1)) {
                (((struct o64_ushort *)(a4))->v) = 0x0;
            }
        }
    }
    t0 = (((struct o48_int *)(a4))->v);
    t1 = t0;
    if ((t0 & 4) != 0) {
        (((struct o56_ushort *)(a4))->v) = 0x1;
        t1 = 0x56;
    }
    return t1;
}

int FUN_0c04fa64(int a4)
{
    register int t0;
    register float u0;

    (((struct o6C_uint *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = (*(int *)((a4 + 0x1C)));
    t0 = *(signed char *)0xC3673EE;
    u0 = (((struct o20_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o60_float *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v) = u0;
    t0 = *(signed char *)0xC3673EE;
    u0 = (((struct o24_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o64_float *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v) = u0;
    t0 = *(signed char *)0xC3673EE;
    u0 = (((struct o28_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o68_float *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v) = u0;
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t0;
}

int FUN_0c0d2328(int a4)
{
    register int t11;

    if ((((((struct o48_int *)(a4))->v)) & 0x2) != 0) {
        (((struct o56_ushort *)(a4))->v) = 0x2;
    }
    (((struct o8C_uint *)(a4))->v) = (((((unsigned short)((((struct o82_short *)(a4))->v)) * (unsigned short)((((struct o68_short *)(a4))->v))) << 2) + (*(int *)(((((((unsigned short)((((struct oA0_short *)(a4))->v)) << 2) << 2) << 1) + 0xC7D08E0) + 0x4)))) + ((unsigned short)((((struct o8A_short *)(a4))->v)) << 2));
    t11 = (((struct o8C_int *)(a4))->v);
    (((struct o90_uint *)(a4))->v) = ((((unsigned short)(*(short *)((0xC33F628 + ((*(signed char *)((t11 + 0x1))) << 1)))) * (unsigned short)(*(short *)((t11 + 0x2)))) << 1) + (*(int *)(((0xC7D08E0 + ((((unsigned short)((((struct oA0_short *)(a4))->v)) << 2) << 2) << 1)) + 0x8))));
    return FUN_0c0d21fc(a4);
}

int FUN_0c04fc3c(void)
{
    register int t5;

    (((struct o60_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = 0.0f;
    (((struct o64_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = 0.0f;
    (((struct o68_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = 0.0f;
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t5 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t5;
}

int FUN_0c082eac(int a4, int a5, int a6, int a7)
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
                                return ((int (*)(int, int, int, int))(0xC082E5A))(a4, a5, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(0xC082B42))(a4, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC082A18))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC082574))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC082466))(a4, a5, a6, a7);
            }
            return FUN_0c081b98(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC082012))(a4, a5, a6, a7);
    }
    return FUN_0c081a46(a4, a5, a6, a7);
}

int FUN_0c04ef24(int a4)
{
    register int t5;

    (((struct o26_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = (*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BA)));
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t5 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t5;
}

int FUN_0c0921bc(int a4)
{
    int t1;

    if (((int)((((struct o71D4_short *)(a4))->v)) < 0) && (t1 = *(signed char *)((a4 + 0x71F3)), t1 != 0)) {
        pl_set_power_form_off(a4);
        (((struct o7230_uchar *)(a4))->v) = 0x0;
    }
    (((struct o7205_uchar *)(a4))->v) = (*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x6)));
    return pl_change_state(a4, 0xF, (*(signed char *)((a4 + 0x7205))));
}

int FUN_0c090304(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0xB))) > 0) && (t0 = *(signed char *)((a4 + 0x10B)), t0 != 0)) {
        return 0x10B;
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC090260))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0901D0))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC09014C))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC090104))(a4, a5, a6, a7);
}

int FUN_0c090540(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0xB))) > 0) && (t0 = *(signed char *)((a4 + 0x10B)), t0 != 0)) {
        return 0x10B;
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC0904A4))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC090404))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC090374))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC09033C))(a4, a5, a6, a7);
}

int FUN_0c0900d4(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0xB))) > 0) && (t0 = *(signed char *)((a4 + 0x10B)), t0 != 0)) {
        return 0x10B;
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC090030))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC08FFA0))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08FEA8))(a4, a5, a6, a7);
}

int FUN_0c0552d0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC7F302D;
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o0_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302C) + 0x1);
            (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
            (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
            (((struct o3_uchar *)0xC7F302C)->v) = 0x0;
            return 0x0;
        }
        return ((int (*)(int, int, int, int))(0xC0551B4))(0xC7F302C, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC054E46))(0xC7F302C, a5, a6, a7);
}

int FUN_0c079c90(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC079B5C))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC079B30))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC079AF4))(a4, a5, a6, a7);
}

int FUN_0c091304(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC091260))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0911CE))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC091184))(a4, a5, a6, a7);
}

int FUN_0c0923f0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC092370))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0922A4))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0921FA))(a4, a5, a6, a7);
}

int FUN_0c04edbc(int a4)
{
    register int t2;

    t2 = *(signed char *)((0x7231 + (*(int *)((a4 + 0x1C)))));
    *(unsigned short *)(((0xC366F66 + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = t2;
    return t2;
}

int FUN_0c04eac4(void)
{
    *(unsigned char *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F64)) = 0x1;
    return 0xC366F64;
}
