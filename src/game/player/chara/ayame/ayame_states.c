/* Ayame state11 update (large) and specials (0c07eb60-0c080804) */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o38E0_uchar { char p[0x38E0]; unsigned char v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71E4_float { char p[0x71E4]; float v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o720A_uchar { char p[0x720A]; unsigned char v; };
struct o7243_uchar { char p[0x7243]; unsigned char v; };
struct o7254_float { char p[0x7254]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int fx_spawn_039090(int);
int fx_spawn_03af38(int, int);
int fx_spawn_03b384(int, int);
int FUN_0c0496f0(int, int, int, int, int, int, int, int, int);
int FUN_0c0555dc(void);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int FUN_0c09c3f8(int, int);
int pl_start_hit_freeze(int);
int pl_get_hit_count_of_opponent(int);
int hit_probe_step_max(int, int, float);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_angle_to_opponent(int);
extern int pl_end_action_choose_state();
int pl_enter_state_27_28(int, int);
int fx_spawn_state11_pulse(int, int, int);
int fx_spawn_22(int);
int FUN_0c0c1360(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int _quick_odd_mvn(int);
int fx_spawn_03a024(int);
int FUN_0c03a12c(int);
int pl_ayame_state22_phase1(int);
int pl_detect_special_input(int, int);

int pl_ayame_state22_phase0(int a4);

void pl_ayame_state11_update(int a4)
{
    int stk[8];
    register int t0;
    register int t1;
    register int t5;
    register int t9;
    register int t11;
    register int t12;
    register int t39;
    register int t40;
    register int t68;
    register int t69;
    register int t82;
    register int t84;
    register int t117;
    register int t122;
    register int t126;
    register int t130;
    register int t132;
    register int t133;
    register int t160;
    register int t161;
    register int t189;
    register int t190;
    register int t203;
    register int t205;
    register int t238;
    register int t243;
    register int t244;
    register int t247;
    register float u248;
    register int t250;
    register int t251;
    register int t268;
    register float u269;
    register int t271;
    register int t272;
    register int t285;
    register int t295;
    register int t298;
    register int t302;
    register int t334;
    register int t336;
    register int t346;
    register int t348;
    register int t377;
    register int t408;
    register int t410;
    register int t415;
    register int t416;
    register int t419;
    register float u420;
    register int t422;
    register int t423;
    register int t440;
    register float u441;
    register int t443;
    register int t444;
    register int t457;
    register int t467;
    register int t470;
    register int t474;
    register int t506;
    register int t508;
    register int t518;
    register int t520;
    register int t549;
    register int t581;
    register int t583;
    register int t6;
    register int t7;
    int t8;
    register int t127;
    register int t128;
    int t129;
    register int t257;
    int t345;
    register int t429;
    int t517;

    t0 = *(signed char *)((a4 + 0x7223));
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    if (t0 != 5) {
                        if (t0 != 6) {
                            if (t0 != 7) {
                                if (t0 != 8) {
                                    ((int (*)(int))(pl_end_action_choose_state))(a4);
    return;
                                }
                                t1 = *(signed char *)((a4 + 0xA));
                                if (t1 != 0) {
                                    if (t1 != 1) {
                                        if (t1 != 2) {
                                            if (t1 != 3) {
                                                if (t1 != 4) {
                                                    if (t1 != 5) {
                                                        return;
                                                    }
                                                    return;
                                                }
                                                return;
                                            }
                                            return;
                                        }
                                        (((struct o720A_uchar *)(a4))->v) = 0x0;
                                        pl_enter_state_27_28(a4, 0x3);
    return;
                                    }
                                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                                    if ((*(signed char *)((a4 + 0xB))) == 0) {
                                        pl_step_motion(a4);
                                        t5 = FUN_0c0555dc();
                                        if ((t5 == 0) && ((t6 = *(int *)((a4 + 0x1C)), t7 = *(signed char *)((t6 + 0x4)), t7 != 10) && (t8 = *(signed char *)((a4 + 0x108)), t8 != 0))) {
                                            t9 = pl_get_hit_count_of_opponent(a4);
                                            if ((signed char)t9 != 0) {
                                                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                                                return;
                                            }
                                            t11 = hit_probe_step_max(a4, (0x7254 + a4), 60.0f);
                                            if ((signed char)t11 == 2) {
                                                t12 = *(signed char *)((a4 + 0x7243));
                                                (((struct o7243_uchar *)(a4))->v) = (t12 - 1);
                                                if ((signed char)(t12 - 1) == 0) {
                                                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o7254_float *)(a4))->v)));
                                                    (((struct o7243_uchar *)(a4))->v) = 0x4;
                                                }
                                            } else {
                                                (((struct o7243_uchar *)(a4))->v) = 0x4;
                                            }
                                            if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x14) {
                                                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                                pl_start_motion(a4, 0x0, 0x1A);
                                                (((struct o44_float *)(a4))->v) = ((-((((struct o38_float *)(a4))->v))) / 40.0f);
                                                (((struct o48_float *)(a4))->v) = ((((struct o71E4_float *)(a4))->v));
                                                (((struct o4C_float *)(a4))->v) = ((-((((struct o40_float *)(a4))->v))) / 40.0f);
                                            }
                                            pl_apply_velocity(a4);
    return;
                                        }
                                        t39 = hit_probe_step_max(a4, (0x7254 + a4), 60.0f);
                                        if ((signed char)t39 == 2) {
                                            t40 = *(signed char *)((a4 + 0x7243));
                                            (((struct o7243_uchar *)(a4))->v) = (t40 - 1);
                                            if ((signed char)(t40 - 1) == 0) {
                                                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o7254_float *)(a4))->v)));
                                                (((struct o7243_uchar *)(a4))->v) = 0x4;
                                            }
                                        } else {
                                            (((struct o7243_uchar *)(a4))->v) = 0x4;
                                        }
                                        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x14) {
                                            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                            pl_start_motion(a4, 0x0, 0x1A);
                                            (((struct o44_float *)(a4))->v) = ((-((((struct o38_float *)(a4))->v))) / 40.0f);
                                            (((struct o48_float *)(a4))->v) = ((((struct o71E4_float *)(a4))->v));
                                            (((struct o4C_float *)(a4))->v) = ((-((((struct o40_float *)(a4))->v))) / 40.0f);
                                        }
                                        pl_apply_velocity(a4);
    return;
                                    }
                                    pl_apply_acceleration(a4);
                                    t68 = pl_step_motion(a4);
                                    if ((signed char)t68 != 0) {
                                        t69 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(pl_end_action_choose_state))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 24), *(int *)((int)stk + 24 + 4), *(int *)((int)stk + 24 + 8), *(int *)((int)stk + 24 + 12), *(int *)((int)stk + 24 + 16), *(int *)((int)stk + 24 + 20), *(int *)((int)stk + 24 + 24), *(int *)((int)stk + 24 + 28));
                                    }
                                    pl_apply_velocity(a4);
    return;
                                }
                                *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                                pl_start_motion(a4, 0x1, 0x69);
                                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                                *(unsigned char *)((a4 + 0xB)) = 0x0;
                                (((struct oEC_ushort *)(a4))->v) = 0x0;
                                (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 30.0f);
                                (((struct o3C_float *)(a4))->v) = 0.0f;
                                (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 30.0f);
                                (((struct o44_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) / 30.0f);
                                (((struct o48_float *)(a4))->v) = 0.0f;
                                (((struct o4C_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) / 30.0f);
                                (((struct o7243_uchar *)(a4))->v) = 0x4;
                                fx_spawn_039090(a4);
                                pl_start_hit_freeze(a4);
    return;
                            }
                            t82 = *(signed char *)((a4 + 0xA));
                            if (t82 != 0) {
                                if (t82 != 1) {
                                    if (t82 != 2) {
                                        if (t82 != 3) {
                                            if (t82 != 4) {
                                                if (t82 != 5) {
                                                    return;
                                                }
                                                return;
                                            }
                                            return;
                                        }
                                        return;
                                    }
                                    return;
                                }
                                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                                t84 = *(signed char *)((a4 + 0xB));
                                if (t84 != 0) {
                                    if (t84 != 1) {
                                    } else {
                                        if (((((struct oEC_short *)(a4))->v)) == 27) {
                                            fx_spawn_22(a4);
                                        }
                                    }
                                } else {
                                    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x3) {
                                        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                                        (((struct o38E0_uchar *)(a4))->v) = 0x0;
                                        fx_spawn_03b384(a4, 0x1C);
                                    }
                                }
                                pl_step_motion(a4);
                                pl_apply_motion_translation(a4);
                                if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x5A) {
                                    (((struct o3C_float *)(a4))->v) = 0.0f;
                                    ((int (*)(int))(pl_end_action_choose_state))(a4);
    return;
                                }
                                return;
                            }
                            pl_start_motion(a4, 0x1, 0x68);
                            (((struct o71A9_uchar *)(a4))->v) = 0x1;
                            (((struct o71A8_uchar *)(a4))->v) = 0x1;
                            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                            *(unsigned char *)((a4 + 0xB)) = 0x0;
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                            *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                            *(int *)((int)stk + 16) = 0xC337400;
                            *(int *)((int)stk + 12) = 0xC3373F4;
                            *(int *)((int)stk + 8) = 0x52;
                            *(int *)((int)stk + 4) = 0x1E;
                            *(int *)((int)stk + 0) = 0x16;
                            t117 = *(signed char *)((a4 + 0x3));
                            (((struct o14_uchar *)(((int)stk + 0)))->v) = t117;
                            FUN_0c0496f0((*(signed char *)(((int)stk + 20))), 0x0, 0x7, ((signed char)((((t117 << 1) + t117) << 2) << 1) + 0xC6002D0), 0x16, 0x1E, 0x52, 0xC3373F4, 0xC337400);
                            pl_start_hit_freeze(a4);
    return;
                        }
                        t122 = *(signed char *)((a4 + 0xA));
                        if (t122 != 0) {
                            if (t122 != 1) {
                                if (t122 != 2) {
                                    if (t122 != 3) {
                                        if (t122 != 4) {
                                            if (t122 != 5) {
                                                return;
                                            }
                                            return;
                                        }
                                        return;
                                    }
                                    return;
                                }
                                (((struct o720A_uchar *)(a4))->v) = 0x0;
                                pl_enter_state_27_28(a4, 0x3);
    return;
                            }
                            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                            if ((*(signed char *)((a4 + 0xB))) == 0) {
                                pl_step_motion(a4);
                                t126 = FUN_0c0555dc();
                                if ((t126 == 0) && ((t127 = *(int *)((a4 + 0x1C)), t128 = *(signed char *)((t127 + 0x4)), t128 != 10) && (t129 = *(signed char *)((a4 + 0x108)), t129 != 0))) {
                                    t130 = pl_get_hit_count_of_opponent(a4);
                                    if ((signed char)t130 != 0) {
                                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                                        return;
                                    }
                                    t132 = hit_probe_step_max(a4, (0x7254 + a4), 60.0f);
                                    if ((signed char)t132 == 2) {
                                        t133 = *(signed char *)((a4 + 0x7243));
                                        (((struct o7243_uchar *)(a4))->v) = (t133 - 1);
                                        if ((signed char)(t133 - 1) == 0) {
                                            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o7254_float *)(a4))->v)));
                                            (((struct o7243_uchar *)(a4))->v) = 0x4;
                                        }
                                    } else {
                                        (((struct o7243_uchar *)(a4))->v) = 0x4;
                                    }
                                    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x14) {
                                        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                        pl_start_motion(a4, 0x0, 0x1A);
                                        (((struct o44_float *)(a4))->v) = ((-((((struct o38_float *)(a4))->v))) / 40.0f);
                                        (((struct o48_float *)(a4))->v) = ((((struct o71E4_float *)(a4))->v));
                                        (((struct o4C_float *)(a4))->v) = ((-((((struct o40_float *)(a4))->v))) / 40.0f);
                                    }
                                    pl_apply_velocity(a4);
    return;
                                }
                                t160 = hit_probe_step_max(a4, (0x7254 + a4), 60.0f);
                                if ((signed char)t160 == 2) {
                                    t161 = *(signed char *)((a4 + 0x7243));
                                    (((struct o7243_uchar *)(a4))->v) = (t161 - 1);
                                    if ((signed char)(t161 - 1) == 0) {
                                        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o7254_float *)(a4))->v)));
                                        (((struct o7243_uchar *)(a4))->v) = 0x4;
                                    }
                                } else {
                                    (((struct o7243_uchar *)(a4))->v) = 0x4;
                                }
                                if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x14) {
                                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                    pl_start_motion(a4, 0x0, 0x1A);
                                    (((struct o44_float *)(a4))->v) = ((-((((struct o38_float *)(a4))->v))) / 40.0f);
                                    (((struct o48_float *)(a4))->v) = ((((struct o71E4_float *)(a4))->v));
                                    (((struct o4C_float *)(a4))->v) = ((-((((struct o40_float *)(a4))->v))) / 40.0f);
                                }
                                pl_apply_velocity(a4);
    return;
                            }
                            pl_apply_acceleration(a4);
                            t189 = pl_step_motion(a4);
                            if ((signed char)t189 != 0) {
                                t190 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(pl_end_action_choose_state))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 24), *(int *)((int)stk + 24 + 4), *(int *)((int)stk + 24 + 8), *(int *)((int)stk + 24 + 12), *(int *)((int)stk + 24 + 16), *(int *)((int)stk + 24 + 20), *(int *)((int)stk + 24 + 24), *(int *)((int)stk + 24 + 28));
                            }
                            pl_apply_velocity(a4);
    return;
                        }
                        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                        pl_start_motion(a4, 0x1, 0x69);
                        (((struct o71A9_uchar *)(a4))->v) = 0x1;
                        (((struct o71A8_uchar *)(a4))->v) = 0x1;
                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                        *(unsigned char *)((a4 + 0xB)) = 0x0;
                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                        (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 30.0f);
                        (((struct o3C_float *)(a4))->v) = 0.0f;
                        (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 30.0f);
                        (((struct o44_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) / 30.0f);
                        (((struct o48_float *)(a4))->v) = 0.0f;
                        (((struct o4C_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) / 30.0f);
                        (((struct o7243_uchar *)(a4))->v) = 0x4;
                        fx_spawn_039090(a4);
                        pl_start_hit_freeze(a4);
    return;
                    }
                    t203 = *(signed char *)((a4 + 0xA));
                    if (t203 != 0) {
                        if (t203 != 1) {
                            if (t203 != 2) {
                                if (t203 != 3) {
                                    if (t203 != 4) {
                                        if (t203 != 5) {
                                            return;
                                        }
                                        return;
                                    }
                                    return;
                                }
                                return;
                            }
                            return;
                        }
                        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                        t205 = *(signed char *)((a4 + 0xB));
                        if (t205 != 0) {
                            if (t205 != 1) {
                            } else {
                                if (((((struct oEC_short *)(a4))->v)) == 28) {
                                    fx_spawn_22(a4);
                                }
                            }
                        } else {
                            if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x3) {
                                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                (((struct oEC_ushort *)(a4))->v) = 0x0;
                                (((struct o38E0_uchar *)(a4))->v) = 0x0;
                                fx_spawn_03b384(a4, 0x1D);
                            }
                        }
                        pl_step_motion(a4);
                        pl_apply_motion_translation(a4);
                        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x5A) {
                            ((int (*)(int))(pl_end_action_choose_state))(a4);
    return;
                        }
                        return;
                    }
                    pl_start_motion(a4, 0x1, 0x67);
                    (((struct o71A9_uchar *)(a4))->v) = 0x1;
                    (((struct o71A8_uchar *)(a4))->v) = 0x1;
                    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                    *(unsigned char *)((a4 + 0xB)) = 0x0;
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                    *(int *)((int)stk + 16) = 0xC337400;
                    *(int *)((int)stk + 12) = 0xC3373F4;
                    *(int *)((int)stk + 8) = 0x52;
                    *(int *)((int)stk + 4) = 0x1E;
                    *(int *)((int)stk + 0) = 0x16;
                    t238 = *(signed char *)((a4 + 0x3));
                    (((struct o14_uchar *)(((int)stk + 0)))->v) = t238;
                    FUN_0c0496f0((*(signed char *)(((int)stk + 20))), 0x0, 0x7, ((signed char)((((t238 << 1) + t238) << 2) << 1) + 0xC6002D0), 0x16, 0x1E, 0x52, 0xC3373F4, 0xC337400);
                    pl_start_hit_freeze(a4);
    return;
                }
                t243 = *(signed char *)((a4 + 0xA));
                if (t243 != 0) {
                    if (t243 != 1) {
                        if (t243 != 2) {
                            if (t243 != 3) {
                                if (t243 != 4) {
                                    if (t243 != 5) {
                                        return;
                                    }
                                    *(unsigned int *)(((int)stk + 24)) = a4;
                                    t244 = pl_step_motion(a4);
                                    if ((signed char)t244 != 0) {
                                        ((int (*)(int))(pl_end_action_choose_state))((*(int *)(((int)stk + 24))));
    return;
                                    }
                                    return;
                                }
                                t247 = (((struct oEC_short *)(a4))->v);
                                u248 = (float)(t247 * t247);
                                *(unsigned int *)((a4 + 0x30)) = ((int)((((struct o44_float *)(a4))->v)) - (((int)((((u248 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF) << 2));
                                t250 = (((struct oEC_short *)(a4))->v);
                                (((struct oEC_ushort *)(a4))->v) = (t250 - 1);
                                if ((int)(short)(t250 - 1) < 0) {
                                    ((int (*)(int, int))(pl_end_action_choose_state))(a4, t247);
    return;
                                }
                                return;
                            }
                            t251 = (((struct oEC_short *)(a4))->v);
                            (((struct oEC_ushort *)(a4))->v) = (t251 + 0x1);
                            if ((int)(short)((t251 + 0x1) - 1) >= (int)0xF) {
                                *(unsigned char *)((a4 + 0x1)) = 0x1;
                                (((struct oEC_ushort *)(a4))->v) = 0xA;
                                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                                if ((*(signed char *)((a4 + 0x71BC))) == 0) {
                                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 250.0f);
                                    t257 = 0x2;
                                } else {
                                    (((struct o24_float *)(a4))->v) = (((((struct o2D4_float *)(a4))->v)) + -1.0f);
                                    t257 = 0x0;
                                }
                                (((struct o71BC_uchar *)(a4))->v) = t257;
                            }
                            return;
                        }
                        t268 = (((struct oEC_short *)(a4))->v);
                        u269 = (float)(t268 * t268);
                        *(unsigned int *)((a4 + 0x30)) = ((int)((((struct o44_float *)(a4))->v)) + (((int)((((u269 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF) << 2));
                        t271 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t271 + 0x1);
                        if ((int)(short)((t271 + 0x1) - 1) >= (int)0xA) {
                            t272 = 0x6;
                            for (;;) {
                                fx_spawn_03af38((a4 + 0x20), (*(signed char *)((a4 + 0x3))));
                                t272 = (t272 - 0x1);
                                if (t272 == 0) {
                                    break;
                                }
                            }
                            *(unsigned char *)((a4 + 0x1)) = 0x0;
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x38)) = *(struct mv3 *)(0xC337368); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x44)) = *(struct mv3 *)(0xC337368); }
                        }
                        return;
                    }
                    t285 = pl_step_motion(a4);
                    if ((signed char)t285 != 0) {
                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                        (((struct o44_float *)(a4))->v) = (float)(*(int *)((a4 + 0x30)));
                    }
                    return;
                }
                pl_start_motion(a4, 0x1, 0x61);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                t295 = (((struct o71F4_short *)(a4))->v);
                (((struct o71F4_ushort *)(a4))->v) = (int)((float)t295 - 240.0f);
                if ((int)(short)(int)((float)t295 - 240.0f) < 0) {
                    (((struct o71F4_ushort *)(a4))->v) = 0x0;
                }
                FUN_0c0c1360(a4);
    return;
            }
            t298 = *(signed char *)((a4 + 0xA));
            if (t298 != 0) {
                if (t298 != 1) {
                    if (t298 != 2) {
                        if (t298 != 3) {
                            if (t298 != 4) {
                                if (t298 != 5) {
                                    return;
                                }
                                return;
                            }
                            return;
                        }
                        pl_step_motion(a4);
                        pl_apply_motion_translation(a4);
                        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                        t302 = *(signed char *)((a4 + 0xB));
                        if (t302 != 0) {
                            if (t302 != 1) {
                                if (t302 != 2) {
                                    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                        (((struct o3C_float *)(a4))->v) = 0.0f;
                                        ((int (*)(int))(pl_end_action_choose_state))(a4);
    return;
                                    }
                                    return;
                                }
                                if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x5) {
                                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                                    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                                    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                                    fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x1);
                                    if ((int)((((struct oEE_short *)(a4))->v)) >= (int)0x2) {
                                        (((struct o38E0_uchar *)(a4))->v) = 0x1;
                                        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                                    }
                                }
                                return;
                            }
                            if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0xA) {
                                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                (((struct oEC_ushort *)(a4))->v) = 0x0;
                                (((struct oEE_ushort *)(a4))->v) = 0x0;
                                *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                                fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
    return;
                            }
                            return;
                        }
                        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x3) {
                            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                            (((struct o38E0_uchar *)(a4))->v) = 0x0;
                            fx_spawn_03b384(a4, 0xF);
    return;
                        }
                        return;
                    }
                    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                    pl_start_motion(a4, 0x1, 0x65);
                    (((struct o71A9_uchar *)(a4))->v) = 0x1;
                    (((struct o71A8_uchar *)(a4))->v) = 0x1;
                    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                    *(unsigned char *)((a4 + 0xB)) = 0x0;
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                    t334 = (((struct o71F4_short *)(a4))->v);
                    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t334 - 288.0f);
                    if ((int)(short)(int)((float)t334 - 288.0f) < 0) {
                        (((struct o71F4_ushort *)(a4))->v) = 0x0;
                    }
                    *(int *)((int)stk + 16) = 0xC337400;
                    *(int *)((int)stk + 12) = 0xC3373F4;
                    *(int *)((int)stk + 8) = 0x52;
                    *(int *)((int)stk + 4) = 0x1E;
                    *(int *)((int)stk + 0) = 0x16;
                    t336 = *(signed char *)((a4 + 0x3));
                    (((struct o14_uchar *)(((int)stk + 0)))->v) = t336;
                    FUN_0c0496f0((*(signed char *)(((int)stk + 20))), 0x0, 0x7, ((signed char)((((t336 << 1) + t336) << 2) << 1) + 0xC6002D0), 0x16, 0x1E, 0x52, 0xC3373F4, 0xC337400);
                    return;
                }
                pl_step_motion(a4);
                pl_apply_motion_translation(a4);
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                if (((int)(unsigned short)((((struct o719E_short *)(a4))->v)) > (int)0x1E) && (t345 = (((struct o71F4_short *)(a4))->v), (int)t345 > 0)) {
                    t346 = FUN_0c09c3f8(a4, 0x400);
                    if ((signed char)t346 != 0) {
                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                        return;
                    }
                    t348 = *(signed char *)((a4 + 0xB));
                    if (t348 != 0) {
                        if (t348 != 1) {
                            if (t348 != 2) {
                                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                    (((struct o3C_float *)(a4))->v) = 0.0f;
                                    ((int (*)(int))(pl_end_action_choose_state))(a4);
    return;
                                }
                                return;
                            }
                            if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x5) {
                                (((struct oEC_ushort *)(a4))->v) = 0x0;
                                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                                *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                                fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
                                if ((int)((((struct oEE_short *)(a4))->v)) >= (int)0x2) {
                                    (((struct o38E0_uchar *)(a4))->v) = 0x1;
                                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                                }
                            }
                            return;
                        }
                        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0xE) {
                            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                            (((struct oEE_ushort *)(a4))->v) = 0x0;
                            *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                            fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
    return;
                        }
                        return;
                    }
                } else {
                    t377 = *(signed char *)((a4 + 0xB));
                    if (t377 != 0) {
                        if (t377 != 1) {
                            if (t377 != 2) {
                                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                    (((struct o3C_float *)(a4))->v) = 0.0f;
                                    ((int (*)(int))(pl_end_action_choose_state))(a4);
        return;
                                }
                                return;
                            }
                            if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x5) {
                                (((struct oEC_ushort *)(a4))->v) = 0x0;
                                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                                *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                                fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
                                if ((int)((((struct oEE_short *)(a4))->v)) >= (int)0x2) {
                                    (((struct o38E0_uchar *)(a4))->v) = 0x1;
                                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                                }
                            }
                            return;
                        }
                        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0xE) {
                            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                            (((struct oEE_ushort *)(a4))->v) = 0x0;
                            *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                            fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
        return;
                        }
                        return;
                    }
                }
                if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x3) {
                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                    (((struct o38E0_uchar *)(a4))->v) = 0x0;
                    fx_spawn_03b384(a4, 0xF);
    return;
                }
                return;
            }
            pl_start_motion(a4, 0x1, 0x65);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            *(unsigned char *)((a4 + 0xB)) = 0x0;
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            t408 = (((struct o71F4_short *)(a4))->v);
            (((struct o71F4_ushort *)(a4))->v) = (int)((float)t408 - 288.0f);
            if ((int)(short)(int)((float)t408 - 288.0f) < 0) {
                (((struct o71F4_ushort *)(a4))->v) = 0x0;
            }
            *(int *)((int)stk + 16) = 0xC337400;
            *(int *)((int)stk + 12) = 0xC3373F4;
            *(int *)((int)stk + 8) = 0x52;
            *(int *)((int)stk + 4) = 0x1E;
            *(int *)((int)stk + 0) = 0x16;
            t410 = *(signed char *)((a4 + 0x3));
            (((struct o14_uchar *)(((int)stk + 0)))->v) = t410;
            FUN_0c0496f0((*(signed char *)(((int)stk + 20))), 0x0, 0x7, ((signed char)((((t410 << 1) + t410) << 2) << 1) + 0xC6002D0), 0x16, 0x1E, 0x52, 0xC3373F4, 0xC337400);
            return;
        }
        t415 = *(signed char *)((a4 + 0xA));
        if (t415 != 0) {
            if (t415 != 1) {
                if (t415 != 2) {
                    if (t415 != 3) {
                        if (t415 != 4) {
                            if (t415 != 5) {
                                return;
                            }
                            *(unsigned int *)(((int)stk + 24)) = a4;
                            t416 = pl_step_motion(a4);
                            if ((signed char)t416 != 0) {
                                ((int (*)(int))(pl_end_action_choose_state))((*(int *)(((int)stk + 24))));
    return;
                            }
                            return;
                        }
                        t419 = (((struct oEC_short *)(a4))->v);
                        u420 = (float)(t419 * t419);
                        *(unsigned int *)((a4 + 0x30)) = ((int)((((struct o44_float *)(a4))->v)) - (((int)((((u420 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF) << 2));
                        t422 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t422 - 1);
                        if ((int)(short)(t422 - 1) < 0) {
                            ((int (*)(int, int))(pl_end_action_choose_state))(a4, t419);
    return;
                        }
                        return;
                    }
                    t423 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t423 + 0x1);
                    if ((int)(short)((t423 + 0x1) - 1) >= (int)0xF) {
                        *(unsigned char *)((a4 + 0x1)) = 0x1;
                        (((struct oEC_ushort *)(a4))->v) = 0xA;
                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                        if ((*(signed char *)((a4 + 0x71BC))) == 0) {
                            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 250.0f);
                            t429 = 0x2;
                        } else {
                            (((struct o24_float *)(a4))->v) = (((((struct o2D4_float *)(a4))->v)) + -1.0f);
                            t429 = 0x0;
                        }
                        (((struct o71BC_uchar *)(a4))->v) = t429;
                    }
                    return;
                }
                t440 = (((struct oEC_short *)(a4))->v);
                u441 = (float)(t440 * t440);
                *(unsigned int *)((a4 + 0x30)) = ((int)((((struct o44_float *)(a4))->v)) + (((int)((((u441 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF) << 2));
                t443 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t443 + 0x1);
                if ((int)(short)((t443 + 0x1) - 1) >= (int)0xA) {
                    t444 = 0x6;
                    for (;;) {
                        fx_spawn_03af38((a4 + 0x20), (*(signed char *)((a4 + 0x3))));
                        t444 = (t444 - 0x1);
                        if (t444 == 0) {
                            break;
                        }
                    }
                    *(unsigned char *)((a4 + 0x1)) = 0x0;
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x38)) = *(struct mv3 *)(0xC337368); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x44)) = *(struct mv3 *)(0xC337368); }
                }
                return;
            }
            t457 = pl_step_motion(a4);
            if ((signed char)t457 != 0) {
                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x0;
                (((struct o44_float *)(a4))->v) = (float)(*(int *)((a4 + 0x30)));
            }
            return;
        }
        pl_start_motion(a4, 0x1, 0x61);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        t467 = (((struct o71F4_short *)(a4))->v);
        (((struct o71F4_ushort *)(a4))->v) = (int)((float)t467 - 240.0f);
        if ((int)(short)(int)((float)t467 - 240.0f) < 0) {
            (((struct o71F4_ushort *)(a4))->v) = 0x0;
        }
        FUN_0c0c1360(a4);
    return;
    }
    t470 = *(signed char *)((a4 + 0xA));
    if (t470 != 0) {
        if (t470 != 1) {
            if (t470 != 2) {
                if (t470 != 3) {
                    if (t470 != 4) {
                        if (t470 != 5) {
                            return;
                        }
                        return;
                    }
                    return;
                }
                pl_step_motion(a4);
                pl_apply_motion_translation(a4);
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                t474 = *(signed char *)((a4 + 0xB));
                if (t474 != 0) {
                    if (t474 != 1) {
                        if (t474 != 2) {
                            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                ((int (*)(int))(pl_end_action_choose_state))(a4);
    return;
                            }
                            return;
                        }
                        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x5) {
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                            *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                            fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x1);
                            if ((int)((((struct oEE_short *)(a4))->v)) >= (int)0x2) {
                                (((struct o38E0_uchar *)(a4))->v) = 0x1;
                                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                (((struct oEC_ushort *)(a4))->v) = 0x0;
                            }
                        }
                        return;
                    }
                    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0xA) {
                        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                        (((struct oEE_ushort *)(a4))->v) = 0x0;
                        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                        fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
    return;
                    }
                    return;
                }
                if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x3) {
                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                    (((struct o38E0_uchar *)(a4))->v) = 0x0;
                    fx_spawn_03b384(a4, 0xB);
    return;
                }
                return;
            }
            *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
            pl_start_motion(a4, 0x1, 0x63);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            *(unsigned char *)((a4 + 0xB)) = 0x0;
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            t506 = (((struct o71F4_short *)(a4))->v);
            (((struct o71F4_ushort *)(a4))->v) = (int)((float)t506 - 288.0f);
            if ((int)(short)(int)((float)t506 - 288.0f) < 0) {
                (((struct o71F4_ushort *)(a4))->v) = 0x0;
            }
            *(int *)((int)stk + 16) = 0xC337400;
            *(int *)((int)stk + 12) = 0xC3373F4;
            *(int *)((int)stk + 8) = 0x52;
            *(int *)((int)stk + 4) = 0x1E;
            *(int *)((int)stk + 0) = 0x16;
            t508 = *(signed char *)((a4 + 0x3));
            (((struct o14_uchar *)(((int)stk + 0)))->v) = t508;
            FUN_0c0496f0((*(signed char *)(((int)stk + 20))), 0x0, 0x7, ((signed char)((((t508 << 1) + t508) << 2) << 1) + 0xC6002D0), 0x16, 0x1E, 0x52, 0xC3373F4, 0xC337400);
            return;
        }
        pl_step_motion(a4);
        pl_apply_motion_translation(a4);
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        if (((int)(unsigned short)((((struct o719E_short *)(a4))->v)) > (int)0x1E) && (t517 = (((struct o71F4_short *)(a4))->v), (int)t517 > 0)) {
            t518 = FUN_0c09c3f8(a4, 0x400);
            if ((signed char)t518 != 0) {
                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                return;
            }
            t520 = *(signed char *)((a4 + 0xB));
            if (t520 != 0) {
                if (t520 != 1) {
                    if (t520 != 2) {
                        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                            ((int (*)(int))(pl_end_action_choose_state))(a4);
    return;
                        }
                        return;
                    }
                    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x5) {
                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                        fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
                        if ((int)((((struct oEE_short *)(a4))->v)) >= (int)0x2) {
                            (((struct o38E0_uchar *)(a4))->v) = 0x1;
                            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                        }
                    }
                    return;
                }
                if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0xA) {
                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                    (((struct oEE_ushort *)(a4))->v) = 0x0;
                    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                    fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
    return;
                }
                return;
            }
            if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x3) {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x0;
                (((struct o38E0_uchar *)(a4))->v) = 0x0;
                fx_spawn_03b384(a4, 0xB);
    return;
            }
            return;
        }
        t549 = *(signed char *)((a4 + 0xB));
        if (t549 != 0) {
            if (t549 != 1) {
                if (t549 != 2) {
                    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                        ((int (*)(int))(pl_end_action_choose_state))(a4);
    return;
                    }
                    return;
                }
                if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x5) {
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                    fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
                    if ((int)((((struct oEE_short *)(a4))->v)) >= (int)0x2) {
                        (((struct o38E0_uchar *)(a4))->v) = 0x1;
                        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                    }
                }
                return;
            }
            if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0xA) {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x0;
                (((struct oEE_ushort *)(a4))->v) = 0x0;
                *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
    return;
            }
            return;
        }
        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x3) {
            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            (((struct o38E0_uchar *)(a4))->v) = 0x0;
            fx_spawn_03b384(a4, 0xB);
    return;
        }
        return;
    }
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    pl_start_motion(a4, 0x1, 0x63);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    *(unsigned char *)((a4 + 0xB)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    t581 = (((struct o71F4_short *)(a4))->v);
    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t581 - 288.0f);
    if ((int)(short)(int)((float)t581 - 288.0f) < 0) {
        (((struct o71F4_ushort *)(a4))->v) = 0x0;
    }
    *(int *)((int)stk + 16) = 0xC337400;
    *(int *)((int)stk + 12) = 0xC3373F4;
    *(int *)((int)stk + 8) = 0x52;
    *(int *)((int)stk + 4) = 0x1E;
    *(int *)((int)stk + 0) = 0x16;
    t583 = *(signed char *)((a4 + 0x3));
    (((struct o14_uchar *)(((int)stk + 0)))->v) = t583;
    FUN_0c0496f0((*(signed char *)(((int)stk + 20))), 0x0, 0x7, ((signed char)((((t583 << 1) + t583) << 2) << 1) + 0xC6002D0), 0x16, 0x1E, 0x52, 0xC3373F4, 0xC337400);
}

int pl_ayame_state21_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_step_motion(a4);
    }
    t0 = *(signed char *)((a4 + 0xB));
    switch (t0) {
    case 0:
        pl_start_motion(a4, 0x3, 0x2);
        break;
    case 1:
        pl_start_motion(a4, 0x3, 0x3);
        break;
    case 2:
        pl_start_motion(a4, 0x3, 0x5);
        break;
    case 3:
        pl_start_motion(a4, 0x3, 0x6);
        break;
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int pl_ayame_state22_phase0(int a4)
{
    register int t7;

    if ((*(signed char *)((a4 + 0xB))) != 0) {
        FUN_0c03a12c(a4);
        pl_start_motion(a4, 0x3, 0x0);
    } else {
        fx_spawn_03a024(a4);
        pl_start_motion(a4, 0x3, 0x1);
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t7 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t7 + 0x1);
    return (t7 + 0x1);
}

int pl_ayame_state22_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_ayame_state22_phase1(a4);
    }
    return pl_ayame_state22_phase0(a4);
}

int pl_ayame_state31_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC07FC84))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC07FC34))(a4, a5, a6, a7);
}

int pl_ayame_get_state28_action(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_detect_special_input(a4, 0xC337420);
    t1 = 0x1;
    if ((signed char)t0 != 0) {
    } else {
        t0 = pl_detect_special_input(a4, 0xC33740C);
        t1 = 0x0;
        if ((signed char)t0 != 0) {
        } else {
            t0 = pl_detect_special_input(a4, 0xC337434);
            t1 = 0x63;
            if ((signed char)t0 != 0) {
                t1 = 0x2;
            }
        }
    }
    return t1;
}
