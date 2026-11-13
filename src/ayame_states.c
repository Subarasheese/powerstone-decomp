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
int FUN_0c0e6fe8(int);
int fx_spawn_03a024(int);
int FUN_0c03a12c(int);
int pl_ayame_state22_phase1(int);
int pl_detect_special_input(int, int);

int pl_ayame_state22_phase0(int a4);

int pl_ayame_state11_update(int a4)
{
    int stk[8];
    register int t0;
    register int t1;
    register int t5;
    register int t9;
    register int t10;
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
    register int t131;
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
    register int t245;
    register int t247;
    register float u248;
    register int t250;
    register int t251;
    register int t261;
    register int t268;
    register float u269;
    register int t271;
    register int t279;
    register int t272;
    register int t289;
    register int t292;
    register int t299;
    register int t302;
    register int t306;
    register int t324;
    register int t338;
    register int t340;
    register int t350;
    register int t351;
    register int t352;
    register int t370;
    register int t381;
    register int t399;
    register int t412;
    register int t414;
    register int t419;
    register int t420;
    register int t421;
    register int t423;
    register float u424;
    register int t426;
    register int t427;
    register int t437;
    register int t444;
    register float u445;
    register int t447;
    register int t455;
    register int t448;
    register int t465;
    register int t468;
    register int t475;
    register int t478;
    register int t482;
    register int t500;
    register int t514;
    register int t516;
    register int t526;
    register int t527;
    register int t528;
    register int t546;
    register int t557;
    register int t575;
    register int t589;
    register int t591;
    register int t6;
    register int t7;
    int t8;
    register int t127;
    register int t128;
    int t129;
    register int t257;
    register int t277;
    int t349;
    register int t433;
    register int t453;
    int t525;

    t0 = *(signed char *)((a4 + 0x7223));
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    if (t0 != 5) {
                        if (t0 != 6) {
                            if (t0 != 7) {
                                if (t0 != 8) {
                                    return ((int (*)(int))(pl_end_action_choose_state))(a4);
                                }
                                t1 = *(signed char *)((a4 + 0xA));
                                if (t1 != 0) {
                                    if (t1 != 1) {
                                        if (t1 != 2) {
                                            if (t1 != 3) {
                                                if (t1 != 4) {
                                                    if (t1 != 5) {
                                                        return t1;
                                                    }
                                                    return t1;
                                                }
                                                return t1;
                                            }
                                            return t1;
                                        }
                                        (((struct o720A_uchar *)(a4))->v) = 0x0;
                                        return pl_enter_state_27_28(a4, 0x3);
                                    }
                                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                                    if ((*(signed char *)((a4 + 0xB))) == 0) {
                                        pl_step_motion(a4);
                                        t5 = FUN_0c0555dc();
                                        if ((t5 == 0) && ((t6 = *(int *)((a4 + 0x1C)), t7 = *(signed char *)((t6 + 0x4)), t7 != 10) && (t8 = *(signed char *)((a4 + 0x108)), t8 != 0))) {
                                            t9 = pl_get_hit_count_of_opponent(a4);
                                            if ((signed char)t9 != 0) {
                                                t10 = *(signed char *)((a4 + 0xA));
                                                *(unsigned char *)((a4 + 0xA)) = (t10 + 0x1);
                                                return (t10 + 0x1);
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
                                        } else {
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
                                        }
                                        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x14) {
                                            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                            pl_start_motion(a4, 0x0, 0x1A);
                                            (((struct o44_float *)(a4))->v) = ((-((((struct o38_float *)(a4))->v))) / 40.0f);
                                            (((struct o48_float *)(a4))->v) = ((((struct o71E4_float *)(a4))->v));
                                            (((struct o4C_float *)(a4))->v) = ((-((((struct o40_float *)(a4))->v))) / 40.0f);
                                        }
                                        return pl_apply_velocity(a4);
                                    }
                                    pl_apply_acceleration(a4);
                                    t68 = pl_step_motion(a4);
                                    if ((signed char)t68 != 0) {
                                        t69 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(pl_end_action_choose_state))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 24), *(int *)((int)stk + 24 + 4), *(int *)((int)stk + 24 + 8), *(int *)((int)stk + 24 + 12), *(int *)((int)stk + 24 + 16), *(int *)((int)stk + 24 + 20), *(int *)((int)stk + 24 + 24), *(int *)((int)stk + 24 + 28));
                                    }
                                    return pl_apply_velocity(a4);
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
                                return pl_start_hit_freeze(a4);
                            }
                            t82 = *(signed char *)((a4 + 0xA));
                            if (t82 != 0) {
                                if (t82 != 1) {
                                    if (t82 != 2) {
                                        if (t82 != 3) {
                                            if (t82 != 4) {
                                                if (t82 != 5) {
                                                    return t82;
                                                }
                                                return t82;
                                            }
                                            return t82;
                                        }
                                        return t82;
                                    }
                                    return t82;
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
                                    return ((int (*)(int))(pl_end_action_choose_state))(a4);
                                }
                                return 0xEC;
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
                            return pl_start_hit_freeze(a4);
                        }
                        t122 = *(signed char *)((a4 + 0xA));
                        if (t122 != 0) {
                            if (t122 != 1) {
                                if (t122 != 2) {
                                    if (t122 != 3) {
                                        if (t122 != 4) {
                                            if (t122 != 5) {
                                                return t122;
                                            }
                                            return t122;
                                        }
                                        return t122;
                                    }
                                    return t122;
                                }
                                (((struct o720A_uchar *)(a4))->v) = 0x0;
                                return pl_enter_state_27_28(a4, 0x3);
                            }
                            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                            if ((*(signed char *)((a4 + 0xB))) == 0) {
                                pl_step_motion(a4);
                                t126 = FUN_0c0555dc();
                                if ((t126 == 0) && ((t127 = *(int *)((a4 + 0x1C)), t128 = *(signed char *)((t127 + 0x4)), t128 != 10) && (t129 = *(signed char *)((a4 + 0x108)), t129 != 0))) {
                                    t130 = pl_get_hit_count_of_opponent(a4);
                                    if ((signed char)t130 != 0) {
                                        t131 = *(signed char *)((a4 + 0xA));
                                        *(unsigned char *)((a4 + 0xA)) = (t131 + 0x1);
                                        return (t131 + 0x1);
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
                                } else {
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
                                }
                                if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x14) {
                                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                    pl_start_motion(a4, 0x0, 0x1A);
                                    (((struct o44_float *)(a4))->v) = ((-((((struct o38_float *)(a4))->v))) / 40.0f);
                                    (((struct o48_float *)(a4))->v) = ((((struct o71E4_float *)(a4))->v));
                                    (((struct o4C_float *)(a4))->v) = ((-((((struct o40_float *)(a4))->v))) / 40.0f);
                                }
                                return pl_apply_velocity(a4);
                            }
                            pl_apply_acceleration(a4);
                            t189 = pl_step_motion(a4);
                            if ((signed char)t189 != 0) {
                                t190 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(pl_end_action_choose_state))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 24), *(int *)((int)stk + 24 + 4), *(int *)((int)stk + 24 + 8), *(int *)((int)stk + 24 + 12), *(int *)((int)stk + 24 + 16), *(int *)((int)stk + 24 + 20), *(int *)((int)stk + 24 + 24), *(int *)((int)stk + 24 + 28));
                            }
                            return pl_apply_velocity(a4);
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
                        return pl_start_hit_freeze(a4);
                    }
                    t203 = *(signed char *)((a4 + 0xA));
                    if (t203 != 0) {
                        if (t203 != 1) {
                            if (t203 != 2) {
                                if (t203 != 3) {
                                    if (t203 != 4) {
                                        if (t203 != 5) {
                                            return t203;
                                        }
                                        return t203;
                                    }
                                    return t203;
                                }
                                return t203;
                            }
                            return t203;
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
                            return ((int (*)(int))(pl_end_action_choose_state))(a4);
                        }
                        return 0xEC;
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
                    return pl_start_hit_freeze(a4);
                }
                t243 = *(signed char *)((a4 + 0xA));
                if (t243 != 0) {
                    if (t243 != 1) {
                        if (t243 != 2) {
                            if (t243 != 3) {
                                if (t243 != 4) {
                                    if (t243 != 5) {
                                        return t243;
                                    }
                                    *(unsigned int *)(((int)stk + 24)) = a4;
                                    t244 = pl_step_motion(a4);
                                    if ((signed char)t244 != 0) {
                                        t245 = *(int *)(((int)stk + 24));
                                        return ((int (*)(int))(pl_end_action_choose_state))(t245);
                                    }
                                    return (signed char)t244;
                                }
                                t247 = (((struct oEC_short *)(a4))->v);
                                u248 = (float)(t247 * t247);
                                *(unsigned int *)((a4 + 0x30)) = ((int)((((struct o44_float *)(a4))->v)) - (((int)((((u248 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF) << 2));
                                t250 = (((struct oEC_short *)(a4))->v);
                                (((struct oEC_ushort *)(a4))->v) = (t250 - 1);
                                if ((int)(short)(t250 - 1) < 0) {
                                    return ((int (*)(int, int))(pl_end_action_choose_state))(a4, t247);
                                }
                                return 0xEC;
                            }
                            t251 = (((struct oEC_short *)(a4))->v);
                            (((struct oEC_ushort *)(a4))->v) = (t251 + 0x1);
                            t261 = 0xEC;
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
                                t261 = 0x71BC;
                            }
                            return t261;
                        }
                        t268 = (((struct oEC_short *)(a4))->v);
                        u269 = (float)(t268 * t268);
                        *(unsigned int *)((a4 + 0x30)) = ((int)((((struct o44_float *)(a4))->v)) + (((int)((((u269 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF) << 2));
                        t271 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t271 + 0x1);
                        t279 = 0xEC;
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
                            FUN_0c0e6fe8(0xC337368);
                            t279 = (FUN_0c0e6fe8(t277));
                        }
                        return t279;
                    }
                    t289 = pl_step_motion(a4);
                    t292 = (signed char)t289;
                    if ((signed char)t289 != 0) {
                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                        (((struct o44_float *)(a4))->v) = (float)(*(int *)((a4 + 0x30)));
                        t292 = 0x44;
                    }
                    return t292;
                }
                pl_start_motion(a4, 0x1, 0x61);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                t299 = (((struct o71F4_short *)(a4))->v);
                (((struct o71F4_ushort *)(a4))->v) = (int)((float)t299 - 240.0f);
                if ((int)(short)(int)((float)t299 - 240.0f) < 0) {
                    (((struct o71F4_ushort *)(a4))->v) = 0x0;
                }
                return FUN_0c0c1360(a4);
            }
            t302 = *(signed char *)((a4 + 0xA));
            if (t302 != 0) {
                if (t302 != 1) {
                    if (t302 != 2) {
                        if (t302 != 3) {
                            if (t302 != 4) {
                                if (t302 != 5) {
                                    return t302;
                                }
                                return t302;
                            }
                            return t302;
                        }
                        pl_step_motion(a4);
                        pl_apply_motion_translation(a4);
                        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                        t306 = *(signed char *)((a4 + 0xB));
                        if (t306 != 0) {
                            if (t306 != 1) {
                                if (t306 != 2) {
                                    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                        (((struct o3C_float *)(a4))->v) = 0.0f;
                                        return ((int (*)(int))(pl_end_action_choose_state))(a4);
                                    }
                                    return 0x71AA;
                                }
                                t324 = 0xEC;
                                if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x5) {
                                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                                    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                                    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                                    fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x1);
                                    t324 = 0xEE;
                                    if ((int)((((struct oEE_short *)(a4))->v)) >= (int)0x2) {
                                        (((struct o38E0_uchar *)(a4))->v) = 0x1;
                                        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                                        t324 = 0xEC;
                                    }
                                }
                                return t324;
                            }
                            if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0xA) {
                                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                (((struct oEC_ushort *)(a4))->v) = 0x0;
                                (((struct oEE_ushort *)(a4))->v) = 0x0;
                                *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                                return fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
                            }
                            return 0xEC;
                        }
                        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x3) {
                            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                            (((struct o38E0_uchar *)(a4))->v) = 0x0;
                            return fx_spawn_03b384(a4, 0xF);
                        }
                        return 0xEC;
                    }
                    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                    pl_start_motion(a4, 0x1, 0x65);
                    (((struct o71A9_uchar *)(a4))->v) = 0x1;
                    (((struct o71A8_uchar *)(a4))->v) = 0x1;
                    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                    *(unsigned char *)((a4 + 0xB)) = 0x0;
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                    t338 = (((struct o71F4_short *)(a4))->v);
                    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t338 - 288.0f);
                    if ((int)(short)(int)((float)t338 - 288.0f) < 0) {
                        (((struct o71F4_ushort *)(a4))->v) = 0x0;
                    }
                    *(int *)((int)stk + 16) = 0xC337400;
                    *(int *)((int)stk + 12) = 0xC3373F4;
                    *(int *)((int)stk + 8) = 0x52;
                    *(int *)((int)stk + 4) = 0x1E;
                    *(int *)((int)stk + 0) = 0x16;
                    t340 = *(signed char *)((a4 + 0x3));
                    (((struct o14_uchar *)(((int)stk + 0)))->v) = t340;
                    return (FUN_0c0496f0((*(signed char *)(((int)stk + 20))), 0x0, 0x7, ((signed char)((((t340 << 1) + t340) << 2) << 1) + 0xC6002D0), 0x16, 0x1E, 0x52, 0xC3373F4, 0xC337400));
                }
                pl_step_motion(a4);
                pl_apply_motion_translation(a4);
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                if (((int)(unsigned short)((((struct o719E_short *)(a4))->v)) > (int)0x1E) && (t349 = (((struct o71F4_short *)(a4))->v), (int)t349 > 0)) {
                    t350 = FUN_0c09c3f8(a4, 0x400);
                    if ((signed char)t350 != 0) {
                        t351 = *(signed char *)((a4 + 0xA));
                        *(unsigned char *)((a4 + 0xA)) = (t351 + 0x1);
                        return (t351 + 0x1);
                    }
                    t352 = *(signed char *)((a4 + 0xB));
                    if (t352 != 0) {
                        if (t352 != 1) {
                            if (t352 != 2) {
                                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                    (((struct o3C_float *)(a4))->v) = 0.0f;
                                    return ((int (*)(int))(pl_end_action_choose_state))(a4);
                                }
                                return 0x71AA;
                            }
                            t370 = 0xEC;
                            if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x5) {
                                (((struct oEC_ushort *)(a4))->v) = 0x0;
                                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                                *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                                fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
                                t370 = 0xEE;
                                if ((int)((((struct oEE_short *)(a4))->v)) >= (int)0x2) {
                                    (((struct o38E0_uchar *)(a4))->v) = 0x1;
                                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                                    t370 = 0xEC;
                                }
                            }
                            return t370;
                        }
                        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0xE) {
                            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                            (((struct oEE_ushort *)(a4))->v) = 0x0;
                            *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                            return fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
                        }
                        return 0xEC;
                    }
                } else {
                    t381 = *(signed char *)((a4 + 0xB));
                    if (t381 != 0) {
                        if (t381 != 1) {
                            if (t381 != 2) {
                                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                    (((struct o3C_float *)(a4))->v) = 0.0f;
                                    return ((int (*)(int))(pl_end_action_choose_state))(a4);
                                }
                                return 0x71AA;
                            }
                            t399 = 0xEC;
                            if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x5) {
                                (((struct oEC_ushort *)(a4))->v) = 0x0;
                                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                                *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                                fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
                                t399 = 0xEE;
                                if ((int)((((struct oEE_short *)(a4))->v)) >= (int)0x2) {
                                    (((struct o38E0_uchar *)(a4))->v) = 0x1;
                                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                                    t399 = 0xEC;
                                }
                            }
                            return t399;
                        }
                        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0xE) {
                            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                            (((struct oEE_ushort *)(a4))->v) = 0x0;
                            *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                            return fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
                        }
                        return 0xEC;
                    }
                }
                if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x3) {
                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                    (((struct o38E0_uchar *)(a4))->v) = 0x0;
                    return fx_spawn_03b384(a4, 0xF);
                }
                return 0xEC;
            }
            pl_start_motion(a4, 0x1, 0x65);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            *(unsigned char *)((a4 + 0xB)) = 0x0;
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            t412 = (((struct o71F4_short *)(a4))->v);
            (((struct o71F4_ushort *)(a4))->v) = (int)((float)t412 - 288.0f);
            if ((int)(short)(int)((float)t412 - 288.0f) < 0) {
                (((struct o71F4_ushort *)(a4))->v) = 0x0;
            }
            *(int *)((int)stk + 16) = 0xC337400;
            *(int *)((int)stk + 12) = 0xC3373F4;
            *(int *)((int)stk + 8) = 0x52;
            *(int *)((int)stk + 4) = 0x1E;
            *(int *)((int)stk + 0) = 0x16;
            t414 = *(signed char *)((a4 + 0x3));
            (((struct o14_uchar *)(((int)stk + 0)))->v) = t414;
            return (FUN_0c0496f0((*(signed char *)(((int)stk + 20))), 0x0, 0x7, ((signed char)((((t414 << 1) + t414) << 2) << 1) + 0xC6002D0), 0x16, 0x1E, 0x52, 0xC3373F4, 0xC337400));
        }
        t419 = *(signed char *)((a4 + 0xA));
        if (t419 != 0) {
            if (t419 != 1) {
                if (t419 != 2) {
                    if (t419 != 3) {
                        if (t419 != 4) {
                            if (t419 != 5) {
                                return t419;
                            }
                            *(unsigned int *)(((int)stk + 24)) = a4;
                            t420 = pl_step_motion(a4);
                            if ((signed char)t420 != 0) {
                                t421 = *(int *)(((int)stk + 24));
                                return ((int (*)(int))(pl_end_action_choose_state))(t421);
                            }
                            return (signed char)t420;
                        }
                        t423 = (((struct oEC_short *)(a4))->v);
                        u424 = (float)(t423 * t423);
                        *(unsigned int *)((a4 + 0x30)) = ((int)((((struct o44_float *)(a4))->v)) - (((int)((((u424 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF) << 2));
                        t426 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t426 - 1);
                        if ((int)(short)(t426 - 1) < 0) {
                            return ((int (*)(int, int))(pl_end_action_choose_state))(a4, t423);
                        }
                        return 0xEC;
                    }
                    t427 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t427 + 0x1);
                    t437 = 0xEC;
                    if ((int)(short)((t427 + 0x1) - 1) >= (int)0xF) {
                        *(unsigned char *)((a4 + 0x1)) = 0x1;
                        (((struct oEC_ushort *)(a4))->v) = 0xA;
                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                        if ((*(signed char *)((a4 + 0x71BC))) == 0) {
                            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 250.0f);
                            t433 = 0x2;
                        } else {
                            (((struct o24_float *)(a4))->v) = (((((struct o2D4_float *)(a4))->v)) + -1.0f);
                            t433 = 0x0;
                        }
                        (((struct o71BC_uchar *)(a4))->v) = t433;
                        t437 = 0x71BC;
                    }
                    return t437;
                }
                t444 = (((struct oEC_short *)(a4))->v);
                u445 = (float)(t444 * t444);
                *(unsigned int *)((a4 + 0x30)) = ((int)((((struct o44_float *)(a4))->v)) + (((int)((((u445 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF) << 2));
                t447 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t447 + 0x1);
                t455 = 0xEC;
                if ((int)(short)((t447 + 0x1) - 1) >= (int)0xA) {
                    t448 = 0x6;
                    for (;;) {
                        fx_spawn_03af38((a4 + 0x20), (*(signed char *)((a4 + 0x3))));
                        t448 = (t448 - 0x1);
                        if (t448 == 0) {
                            break;
                        }
                    }
                    *(unsigned char *)((a4 + 0x1)) = 0x0;
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                    FUN_0c0e6fe8(0xC337368);
                    t455 = (FUN_0c0e6fe8(t453));
                }
                return t455;
            }
            t465 = pl_step_motion(a4);
            t468 = (signed char)t465;
            if ((signed char)t465 != 0) {
                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x0;
                (((struct o44_float *)(a4))->v) = (float)(*(int *)((a4 + 0x30)));
                t468 = 0x44;
            }
            return t468;
        }
        pl_start_motion(a4, 0x1, 0x61);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        t475 = (((struct o71F4_short *)(a4))->v);
        (((struct o71F4_ushort *)(a4))->v) = (int)((float)t475 - 240.0f);
        if ((int)(short)(int)((float)t475 - 240.0f) < 0) {
            (((struct o71F4_ushort *)(a4))->v) = 0x0;
        }
        return FUN_0c0c1360(a4);
    }
    t478 = *(signed char *)((a4 + 0xA));
    if (t478 != 0) {
        if (t478 != 1) {
            if (t478 != 2) {
                if (t478 != 3) {
                    if (t478 != 4) {
                        if (t478 != 5) {
                            return t478;
                        }
                        return t478;
                    }
                    return t478;
                }
                pl_step_motion(a4);
                pl_apply_motion_translation(a4);
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                t482 = *(signed char *)((a4 + 0xB));
                if (t482 != 0) {
                    if (t482 != 1) {
                        if (t482 != 2) {
                            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                return ((int (*)(int))(pl_end_action_choose_state))(a4);
                            }
                            return 0x71AA;
                        }
                        t500 = 0xEC;
                        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x5) {
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                            *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                            fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x1);
                            t500 = 0xEE;
                            if ((int)((((struct oEE_short *)(a4))->v)) >= (int)0x2) {
                                (((struct o38E0_uchar *)(a4))->v) = 0x1;
                                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                (((struct oEC_ushort *)(a4))->v) = 0x0;
                                t500 = 0xEC;
                            }
                        }
                        return t500;
                    }
                    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0xA) {
                        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                        (((struct oEE_ushort *)(a4))->v) = 0x0;
                        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                        return fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
                    }
                    return 0xEC;
                }
                if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x3) {
                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                    (((struct o38E0_uchar *)(a4))->v) = 0x0;
                    return fx_spawn_03b384(a4, 0xB);
                }
                return 0xEC;
            }
            *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
            pl_start_motion(a4, 0x1, 0x63);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            *(unsigned char *)((a4 + 0xB)) = 0x0;
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            t514 = (((struct o71F4_short *)(a4))->v);
            (((struct o71F4_ushort *)(a4))->v) = (int)((float)t514 - 288.0f);
            if ((int)(short)(int)((float)t514 - 288.0f) < 0) {
                (((struct o71F4_ushort *)(a4))->v) = 0x0;
            }
            *(int *)((int)stk + 16) = 0xC337400;
            *(int *)((int)stk + 12) = 0xC3373F4;
            *(int *)((int)stk + 8) = 0x52;
            *(int *)((int)stk + 4) = 0x1E;
            *(int *)((int)stk + 0) = 0x16;
            t516 = *(signed char *)((a4 + 0x3));
            (((struct o14_uchar *)(((int)stk + 0)))->v) = t516;
            return (FUN_0c0496f0((*(signed char *)(((int)stk + 20))), 0x0, 0x7, ((signed char)((((t516 << 1) + t516) << 2) << 1) + 0xC6002D0), 0x16, 0x1E, 0x52, 0xC3373F4, 0xC337400));
        }
        pl_step_motion(a4);
        pl_apply_motion_translation(a4);
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        if (((int)(unsigned short)((((struct o719E_short *)(a4))->v)) > (int)0x1E) && (t525 = (((struct o71F4_short *)(a4))->v), (int)t525 > 0)) {
            t526 = FUN_0c09c3f8(a4, 0x400);
            if ((signed char)t526 != 0) {
                t527 = *(signed char *)((a4 + 0xA));
                *(unsigned char *)((a4 + 0xA)) = (t527 + 0x1);
                return (t527 + 0x1);
            }
            t528 = *(signed char *)((a4 + 0xB));
            if (t528 != 0) {
                if (t528 != 1) {
                    if (t528 != 2) {
                        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                            return ((int (*)(int))(pl_end_action_choose_state))(a4);
                        }
                        return 0x71AA;
                    }
                    t546 = 0xEC;
                    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x5) {
                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                        fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
                        t546 = 0xEE;
                        if ((int)((((struct oEE_short *)(a4))->v)) >= (int)0x2) {
                            (((struct o38E0_uchar *)(a4))->v) = 0x1;
                            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                            t546 = 0xEC;
                        }
                    }
                    return t546;
                }
                if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0xA) {
                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                    (((struct oEE_ushort *)(a4))->v) = 0x0;
                    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                    return fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
                }
                return 0xEC;
            }
        } else {
            t557 = *(signed char *)((a4 + 0xB));
            if (t557 != 0) {
                if (t557 != 1) {
                    if (t557 != 2) {
                        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                            return ((int (*)(int))(pl_end_action_choose_state))(a4);
                        }
                        return 0x71AA;
                    }
                    t575 = 0xEC;
                    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x5) {
                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                        fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
                        t575 = 0xEE;
                        if ((int)((((struct oEE_short *)(a4))->v)) >= (int)0x2) {
                            (((struct o38E0_uchar *)(a4))->v) = 0x1;
                            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                            t575 = 0xEC;
                        }
                    }
                    return t575;
                }
                if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0xA) {
                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                    (((struct oEE_ushort *)(a4))->v) = 0x0;
                    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                    return fx_spawn_state11_pulse(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
                }
                return 0xEC;
            }
        }
        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x3) {
            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            (((struct o38E0_uchar *)(a4))->v) = 0x0;
            return fx_spawn_03b384(a4, 0xB);
        }
        return 0xEC;
    }
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    pl_start_motion(a4, 0x1, 0x63);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    *(unsigned char *)((a4 + 0xB)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    t589 = (((struct o71F4_short *)(a4))->v);
    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t589 - 288.0f);
    if ((int)(short)(int)((float)t589 - 288.0f) < 0) {
        (((struct o71F4_ushort *)(a4))->v) = 0x0;
    }
    *(int *)((int)stk + 16) = 0xC337400;
    *(int *)((int)stk + 12) = 0xC3373F4;
    *(int *)((int)stk + 8) = 0x52;
    *(int *)((int)stk + 4) = 0x1E;
    *(int *)((int)stk + 0) = 0x16;
    t591 = *(signed char *)((a4 + 0x3));
    (((struct o14_uchar *)(((int)stk + 0)))->v) = t591;
    return (FUN_0c0496f0((*(signed char *)(((int)stk + 20))), 0x0, 0x7, ((signed char)((((t591 << 1) + t591) << 2) << 1) + 0xC6002D0), 0x16, 0x1E, 0x52, 0xC3373F4, 0xC337400));
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
