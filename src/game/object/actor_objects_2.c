/* secondary actor objects (arena clamp, angle helpers, owner transforms) (part 2 of 6 of the same module) (0c08a7d4-0c08bf90) */

struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
int FUN_0c0421ee(int, int);
int math_mat_transform_point(int, int);
int FUN_0c08b7d6(int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int obj_place_linked_ahead(int, int, float);
int pl_apply_motion_translation(int);
int FUN_0c0a3762(int, int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int FUN_0c0a3d5c(int, int);
struct o7223_uchar { char p[0x7223]; unsigned char v; };
int pl_end_action_reset(int);
int math_vec3_sub(int, int, int);
int math_atan_angle16(float);
struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
float math_vec3_length(int);
struct o24_float { char p[0x24]; float v; };
struct o7244_int { char p[0x7244]; int v; };
struct o7244_uint { char p[0x7244]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int fx_spawn_03fd08(int);
int FUN_0c0c9834(int, int);
int FUN_0c0ca268(int, int);
float math_signed_sqrt(float);
float math_rand_float(void);
int FUN_0c0e6f24(void);
extern int FUN_0c0e6fe8();
struct o720A_uchar { char p[0x720A]; unsigned char v; };
int pl_get_hit_count_of_opponent(int);
int FUN_0c0a2830(int, int, int, int, int, int);
int FUN_0c08b9c2(int);
int FUN_0c08bbce(int);

int FUN_0c08a846(int a4);
int pl_rel_angle_to_linked(int a4);
int FUN_0c08b81e(int a4);
int FUN_0c08b844(int a4);
int FUN_0c08b8b8(int a4);
int FUN_0c08b8fc(int a4);
int FUN_0c08b96e(int a4);
int FUN_0c08bab6(int a4);
int FUN_0c08bb22(int a4);
int FUN_0c08bb46(int a4);
int FUN_0c08bb84(int a4);
int FUN_0c08bc16(int a4);
int FUN_0c08bcd4(int a4);
int FUN_0c08bd78(int a4);
int FUN_0c08bde8(int a4);
int FUN_0c08bea0(int a4);
int FUN_0c08bef8(int a4);
int FUN_0c08bf28(int a4, int a5, int a6, int a7);

int FUN_0c08a7d4(int a4, int a5)
{
    int stk[3];
    register int t0;

    t0 = 0x8;
    if ((signed char)a5 != 0) {
        t0 = 0xC;
    }
    FUN_0c0a3d5c((*(signed char *)((a4 + 0x3))), 0x2);
    *(float *)(((int)stk + 0)) = 0.0f;
    *(float *)(((int)stk + 4)) = (*(float *)0xC08A90C);
    *(float *)(((int)stk + 8)) = 0.0f;
    math_mat_transform_point(((int)stk + 0), (((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0xDC0) + (0x300 + a4)) + (short)((short)t0 * (short)0xB0)));
    *(float *)(((int)stk + 4)) = 0.0f;
    return (FUN_0c0421ee(((int)stk + 0), 0x2));
}

int FUN_0c08a842(int a4)
{
    return FUN_0c08a846(a4);
}

int FUN_0c08a846(int a4)
{
    int stk[3];
    register int t8;
    register int t10;
    register int t11;

    math_vec3_sub(((int)stk + 0), ((*(int *)((a4 + 0x1C))) + 0x20), (a4 + 0x20));
    if ((*(float *)(((int)stk + 8))) == 0.0f) {
        *(float *)(((int)stk + 8)) = (*(float *)0xC08A91C);
    }
    t8 = math_atan_angle16(((*(float *)(((int)stk + 0))) / (*(float *)(((int)stk + 8)))));
    t10 = *(int *)((a4 + 0x30));
    t11 = t8;
    if (0.0f > (*(float *)(((int)stk + 8)))) {
        t11 = (t8 + 0x8000);
    }
    if ((int)(unsigned short)(t11 - t10) >= (int)0x8000) {
        return 0x0;
    }
    return 0x1;
}

int pl_rel_angle_to_linked(int a4)
{
    int stk[3];
    register int t7;
    register int t10;

    math_vec3_sub(((int)stk + 0), ((*(int *)((a4 + 0x1C))) + 0x20), (a4 + 0x20));
    if ((*(float *)(((int)stk + 8))) == 0.0f) {
        *(float *)(((int)stk + 8)) = 9.99999975e-05f;
    }
    t7 = math_atan_angle16(((*(float *)(((int)stk + 0))) / (*(float *)(((int)stk + 8)))));
    t10 = t7;
    if (0.0f > (*(float *)(((int)stk + 8)))) {
        t10 = (t7 + 0x8000);
    }
    return (unsigned short)(t10 - (*(int *)((a4 + 0x30))));
}

int FUN_0c08a928(int a4)
{
    int stk[3];
    register float t2;
    register int t11;
    register int t14;

    math_vec3_sub(((int)stk + 0), ((*(int *)((a4 + 0x1C))) + 0x20), (a4 + 0x20));
    *(float *)(((int)stk + 4)) = 0.0f;
    t2 = math_vec3_length(((int)stk + 0));
    if (((((struct o0_float *)0xC08AA08)->v)) > t2) {
        if ((*(float *)(((int)stk + 8))) == 0.0f) {
            *(float *)(((int)stk + 8)) = ((((struct o4_float *)0xC08AA08)->v));
        }
        t11 = math_atan_angle16(((*(float *)(((int)stk + 0))) / (*(float *)(((int)stk + 8)))));
        t14 = t11;
        if (0.0f > (*(float *)(((int)stk + 8)))) {
            t14 = (t11 + 0x8000);
        }
        if ((int)(unsigned short)((unsigned short)(t14 - (*(int *)((a4 + 0x30)))) + 0x2000) <= (int)0x4000) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c08a9a8(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t0;
    register int t1;
    register int t4;
    register int t18;
    register int t20;
    register int t25;
    register int t38;
    register int t44;
    register int t92;
    register int t54;
    register int t55;
    register int t59;
    register float u61;
    register float u62;
    register float u64;
    register float t65;
    register float u67;
    register int t70;
    register int t71;
    register int t73;
    register int t99;
    register int t102;
    register int t116;
    register int t118;
    register int t123;
    register int t136;
    register int t142;
    register int t190;
    register int t152;
    register int t153;
    register int t157;
    register float u159;
    register float u160;
    register float u162;
    register float t163;
    register float u165;
    register int t168;
    register int t169;
    register int t171;
    register int t197;
    register int t201;
    register int t200;
    register int t226;
    register int t223;
    register int t232;
    register int t233;
    register int t236;
    register int t245;
    register int t244;
    register int t264;
    register int t270;
    register int t282;
    register int t283;
    register int t290;
    register int t296;
    register int t307;
    register int t306;
    register int t323;
    register int t312;
    register int t314;
    register int t318;
    register int t328;
    register int t330;
    register int t334;
    register int t342;
    register int t351;
    register int t354;
    register int t360;
    register int t365;
    register int t373;
    register int t384;
    register int t391;
    register int t405;
    register int t422;
    register int t416;
    register int t428;
    register int t433;
    register int t432;
    register int t438;
    register int t440;
    register int t441;
    register int t442;
    int t5;
    register int t30;
    int t39;
    int t103;
    register int t128;
    int t137;
    int t239;
    int t265;
    register int t276;

    t0 = *(signed char *)((a4 + 0x7223));
    switch (t0) {
    case 1:
        t428 = *(signed char *)((a4 + 0xA));
        if (t428 != 0) {
            if (t428 != 1) {
                if (t428 != 2) {
                    return t428;
                }
                (((struct o7223_uchar *)(a4))->v) = 0x0;
                return pl_end_action_reset(a4);
            }
            pl_step_motion(a4);
            pl_apply_motion_translation(a4);
            t433 = 0x71AA;
            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                t432 = *(signed char *)((a4 + 0xA));
                *(unsigned char *)((a4 + 0xA)) = (t432 + 0x1);
                t433 = (t432 + 0x1);
            }
            return t433;
        }
        t438 = 0x0;
        if (!((((((struct o24_float *)(a4))->v)) + 50.0f) > ((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v)))) {
            t438 = 0xE;
        }
        t440 = FUN_0c08a846(a4);
        t441 = *(signed char *)((a4 + 0xA));
        t442 = t438;
        if (t440 != 0) {
            t442 = (t438 + 0x1);
        }
        *(unsigned char *)((a4 + 0xA)) = (t441 + 0x1);
        pl_start_motion(a4, 0x1, t442);
        break;
    case 2:
        t334 = *(signed char *)((a4 + 0xA));
        if (t334 != 0) {
            if (t334 != 1) {
                if (t334 != 2) {
                    if (t334 != 3) {
                        if (t334 != 4) {
                            return t334;
                        }
                        (((struct o7223_uchar *)(a4))->v) = 0x0;
                        return pl_end_action_reset(a4);
                    }
                    pl_step_motion(a4);
                    pl_apply_motion_translation(a4);
                    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                    }
                    if (((((struct oF0_short *)(a4))->v)) != 0) {
                        t342 = (((struct oF0_short *)(a4))->v);
                        (((struct oF0_ushort *)(a4))->v) = (t342 - 1);
                        if ((short)(t342 - 1) == 0) {
                            snd_play_char_voice(a4, 0x33);
                        }
                    }
                    if (((((struct oF2_short *)(a4))->v)) != 0) {
                        t351 = (((struct oF2_short *)(a4))->v);
                        (((struct oF2_ushort *)(a4))->v) = (t351 - 1);
                        if ((short)(t351 - 1) == 0) {
                            return snd_play_char_voice(a4, 0x34);
                        }
                        return 0xF2;
                    }
                    return 0xF2;
                }
                pl_step_motion(a4);
                pl_apply_motion_translation(a4);
                t354 = (((struct oEE_short *)(a4))->v);
                (((struct oEE_ushort *)(a4))->v) = (t354 - 1);
                if ((short)(t354 - 1) == 0) {
                    (((struct oEE_ushort *)(a4))->v) = 0x1E;
                    math_rand_float();
                    t360 = FUN_0c0e6f24();
                    FUN_0c0ca268(a4, t360);
                }
                t365 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t365 - 1);
                if ((short)(t365 - 1) == 0) {
                    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                    pl_start_motion(a4, 0x1, 0x68);
                    (((struct o71A9_uchar *)(a4))->v) = 0x1;
                    (((struct o71A8_uchar *)(a4))->v) = 0x1;
                }
                if (((((struct oF0_short *)(a4))->v)) != 0) {
                    t373 = (((struct oF0_short *)(a4))->v);
                    (((struct oF0_ushort *)(a4))->v) = (t373 - 1);
                    if ((short)(t373 - 1) == 0) {
                        snd_play_char_voice(a4, 0x33);
                    }
                }
                if (((((struct oF2_short *)(a4))->v)) != 0) {
                    t384 = (((struct oF2_short *)(a4))->v);
                    (((struct oF2_ushort *)(a4))->v) = (t384 - 1);
                    if ((short)(t384 - 1) == 0) {
                        return snd_play_char_voice(a4, 0x34);
                    }
                    return 0xF2;
                }
                return 0xF2;
            }
            pl_step_motion(a4);
            pl_apply_motion_translation(a4);
            if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 10) {
                snd_play_char_voice(a4, 0x9);
            }
            t391 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t391 - 1);
            if ((short)(t391 - 1) == 0) {
                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                math_rand_float();
                (((struct oEC_ushort *)(a4))->v) = ((short)((FUN_0c0e6f24()) + 0x1) * (short)0x1E);
                (((struct oEE_ushort *)(a4))->v) = 0x1;
                pl_start_motion(a4, 0x1, 0x62);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
            }
            if (((((struct oF0_short *)(a4))->v)) != 0) {
                t405 = (((struct oF0_short *)(a4))->v);
                (((struct oF0_ushort *)(a4))->v) = (t405 - 1);
                if ((short)(t405 - 1) == 0) {
                    snd_play_char_voice(a4, 0x33);
                }
            }
            t422 = 0xF2;
            if (((((struct oF2_short *)(a4))->v)) != 0) {
                t416 = (((struct oF2_short *)(a4))->v);
                (((struct oF2_ushort *)(a4))->v) = (t416 - 1);
                t422 = 0xF2;
                if ((short)(t416 - 1) == 0) {
                    t422 = (snd_play_char_voice(a4, 0x34));
                }
            }
            return t422;
        }
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x1E;
        (((struct oF0_ushort *)(a4))->v) = 0x36;
        (((struct oF2_ushort *)(a4))->v) = 0x58;
        pl_start_motion(a4, 0x1, 0x61);
        break;
    case 3:
        t290 = *(signed char *)((a4 + 0xA));
        if (t290 != 0) {
            if (t290 != 1) {
                if (t290 != 2) {
                    if (t290 != 3) {
                        return t290;
                    }
                    (((struct o7223_uchar *)(a4))->v) = 0x0;
                    return pl_end_action_reset(a4);
                }
                pl_step_motion(a4);
                if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 7) {
                    FUN_0c0a3d5c((*(signed char *)((a4 + 0x3))), 0x2);
                    *(float *)(((int)stk + 16)) = 0.0f;
                    *(float *)(((int)stk + 20)) = 50.0f;
                    *(float *)(((int)stk + 24)) = 0.0f;
                    t296 = 0x8;
                    if (((((struct oEC_short *)(a4))->v)) != 0) {
                        t296 = 0xC;
                    }
                    math_mat_transform_point(((int)stk + 16), (((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0xDC0) + (0x300 + a4)) + (short)((short)t296 * (short)0xB0)));
                    *(float *)(((int)stk + 20)) = 0.0f;
                    FUN_0c0421ee(((int)stk + 16), 0x2);
                }
                t307 = 0x71AA;
                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                    t306 = *(signed char *)((a4 + 0xA));
                    *(unsigned char *)((a4 + 0xA)) = (t306 + 0x1);
                    t307 = (t306 + 0x1);
                }
                return t307;
            }
            pl_step_motion(a4);
            t323 = 0x71AA;
            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                t312 = pl_rel_angle_to_linked(a4);
                t314 = 0x9;
                if (((((struct oEC_short *)(a4))->v)) != 0) {
                    t314 = 0xD;
                }
                t318 = t314;
                if ((int)(unsigned short)(0x8E3 + t312) > (int)0x1000) {
                    t318 = (t314 - 1);
                    if ((int)(unsigned short)(t312 + 0x1000) < (int)0x2000) {
                        t318 = ((t314 - 1) - 1);
                    }
                }
                pl_start_motion(a4, 0x1, t318);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                t323 = 0x71A8;
            }
            return t323;
        }
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x0;
        t328 = FUN_0c08a846(a4);
        t330 = 0x6;
        if (t328 != 0) {
            (((struct oEC_ushort *)(a4))->v) = 0x1;
            t330 = 0xA;
        }
        pl_start_motion(a4, 0x1, t330);
        break;
    default:
        if (t0 != 4) {
            if (t0 != 5) {
                if (t0 != 6) {
                    if (t0 != 7) {
                        if (t0 != 8) {
                            if (t0 != 9) {
                                if (t0 != 10) {
                                    if (t0 != 11) {
                                        return t0;
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
                                                        (((struct o7223_uchar *)(a4))->v) = 0x0;
                                                        return pl_end_action_reset(a4);
                                                    }
                                                    pl_step_motion(a4);
                                                    pl_apply_motion_translation(a4);
                                                    t4 = (((struct oEC_short *)(a4))->v);
                                                    (((struct oEC_ushort *)(a4))->v) = (t4 - 1);
                                                    if (((short)(t4 - 1) == 0) && (t5 = (((struct oEE_short *)(a4))->v), t5 == 0)) {
                                                        (((struct oEE_ushort *)(a4))->v) = 0x1;
                                                    }
                                                    if (((((struct oEE_short *)(a4))->v)) == 0) {
                                                        (((struct o7244_uint *)(a4))->v) = (int)((float)((((struct o7244_int *)(a4))->v)) - 79.1304321f);
                                                    }
                                                    t18 = 0x71AA;
                                                    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                                        *(unsigned char *)((a4 + 0xA)) = 0x5;
                                                        t18 = 0x5;
                                                    }
                                                    return t18;
                                                }
                                                (((struct oEC_ushort *)(a4))->v) = 0x2E;
                                                *(unsigned char *)((a4 + 0xA)) = 0x2;
                                                t20 = pl_rel_angle_to_linked(a4);
                                                if ((int)(unsigned short)(t20 + 0x71C) <= (int)0xE38) {
                                                    if ((int)((((struct o7244_int *)(a4))->v)) >= (int)0x1555) {
                                                        *(unsigned char *)((a4 + 0xA)) = 0x4;
                                                    }
                                                    t30 = 0x64;
                                                } else {
                                                    t25 = FUN_0c08a846(a4);
                                                    t30 = 0x67;
                                                    if (t25 != 0) {
                                                        t30 = 0x65;
                                                    }
                                                }
                                                pl_start_motion(a4, 0x1, t30);
                                                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                                                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                                                return 0x71A8;
                                            }
                                            pl_step_motion(a4);
                                            pl_apply_motion_translation(a4);
                                            t38 = (((struct oEC_short *)(a4))->v);
                                            (((struct oEC_ushort *)(a4))->v) = (t38 - 1);
                                            if (((short)(t38 - 1) == 0) && (t39 = (((struct oEE_short *)(a4))->v), t39 == 0)) {
                                                (((struct oEE_ushort *)(a4))->v) = 0x1;
                                            }
                                            t44 = 0x71AA;
                                            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                                *(unsigned char *)((a4 + 0xA)) = 0x5;
                                                t44 = 0x5;
                                            }
                                            return t44;
                                        }
                                        pl_step_motion(a4);
                                        pl_apply_motion_translation(a4);
                                        t92 = 0x71AA;
                                        if ((*(signed char *)((a4 + 0x71AA))) == 0) {
                                        } else {
                                            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                                            pl_start_motion(a4, 0x1, 0x64);
                                            (((struct o71A9_uchar *)(a4))->v) = 0x1;
                                            (((struct o71A8_uchar *)(a4))->v) = 0x1;
                                            (((struct oEC_ushort *)(a4))->v) = 0x2E;
                                            (((struct oEE_ushort *)(a4))->v) = 0x0;
                                            (((struct oF0_ushort *)(a4))->v) = 0x0;
                                            if ((*(signed char *)((a4 + 0x7223))) == 11) {
                                                FUN_0c0c9834(a4, 0x1);
                                                (((struct o7244_uint *)(a4))->v) = 0x71C;
                                            } else {
                                                FUN_0c0c9834(a4, 0x0);
                                                t54 = pl_rel_angle_to_linked(a4);
                                                if ((int)(unsigned short)(t54 + 0x4000) > (int)0x8000) {
                                                    (((struct o7244_uint *)(a4))->v) = 0x1555;
                                                } else {
                                                    t55 = ((int (*)(int))(FUN_0c0e6fe8))((unsigned short)(t54 + 0x4000));
                                                    math_mat_transform_point((((int)stk + 0) + 0x8), (0x47C0 + a4));
                                                    *(float *)(((int)stk + 12)) = (((((struct o24_float *)(a4))->v)) + 200.0f);
                                                    *(volatile int *)((a4 + 0x1C));
                                                    t59 = ((int (*)(void))(FUN_0c0e6fe8))();
                                                    *(float *)(((int)stk + 24)) = 0.0f;
                                                    math_vec3_sub((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8));
                                                    u61 = *(float *)(((int)stk + 8));
                                                    *(float *)(((int)stk + 4)) = u61;
                                                    u62 = *(float *)(((int)stk + 16));
                                                    *(float *)(((int)stk + 0)) = u62;
                                                    u64 = (u62 * u62);
                                                    u64 = u64 + u61 * (*(float *)(((int)stk + 4)));
                                                    t65 = math_signed_sqrt(u64);
                                                    u67 = t65;
                                                    if (t65 == 0.0f) {
                                                        u67 = 9.99999975e-06f;
                                                    }
                                                    t70 = math_atan_angle16(((*(float *)(((int)stk + 12))) / u67));
                                                    t71 = (0xFFFF & ((-t70) + 0x10000));
                                                    if ((int)(0xFFFF & ((-t70) + 0x10000)) > (int)0x2AAA) {
                                                        t71 = 0x2AAA;
                                                    }
                                                    t73 = t71;
                                                    if ((int)t71 < (int)0x71C) {
                                                        t73 = 0x71C;
                                                    }
                                                    (((struct o7244_uint *)(a4))->v) = t73;
                                                }
                                            }
                                            t92 = (snd_play_char_voice(a4, 0x31));
                                        }
                                        return t92;
                                    }
                                    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                                    pl_start_motion(a4, 0x1, 0x63);
                                    (((struct o71A9_uchar *)(a4))->v) = 0x1;
                                    (((struct o71A8_uchar *)(a4))->v) = 0x1;
                                    return fx_spawn_03fd08(a4);
                                }
                                return FUN_0c08bf28(a4, a5, a6, a7);
                            }
                            return FUN_0c08bb84(a4);
                        }
                        return ((int (*)(int, int, int, int))(0xC08B7B4))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC08B6B0))(a4, a5, a6, a7);
                }
                t99 = *(signed char *)((a4 + 0xA));
                if (t99 != 0) {
                    if (t99 != 1) {
                        if (t99 != 2) {
                            if (t99 != 3) {
                                if (t99 != 4) {
                                    if (t99 != 5) {
                                        return t99;
                                    }
                                    (((struct o7223_uchar *)(a4))->v) = 0x0;
                                    return pl_end_action_reset(a4);
                                }
                                pl_step_motion(a4);
                                pl_apply_motion_translation(a4);
                                t102 = (((struct oEC_short *)(a4))->v);
                                (((struct oEC_ushort *)(a4))->v) = (t102 - 1);
                                if (((short)(t102 - 1) == 0) && (t103 = (((struct oEE_short *)(a4))->v), t103 == 0)) {
                                    (((struct oEE_ushort *)(a4))->v) = 0x1;
                                }
                                if (((((struct oEE_short *)(a4))->v)) == 0) {
                                    (((struct o7244_uint *)(a4))->v) = (int)((float)((((struct o7244_int *)(a4))->v)) - 79.1304321f);
                                }
                                t116 = 0x71AA;
                                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                    *(unsigned char *)((a4 + 0xA)) = 0x5;
                                    t116 = 0x5;
                                }
                                return t116;
                            }
                            (((struct oEC_ushort *)(a4))->v) = 0x2E;
                            *(unsigned char *)((a4 + 0xA)) = 0x2;
                            t118 = pl_rel_angle_to_linked(a4);
                            if ((int)(unsigned short)(t118 + 0x71C) <= (int)0xE38) {
                                if ((int)((((struct o7244_int *)(a4))->v)) >= (int)0x1555) {
                                    *(unsigned char *)((a4 + 0xA)) = 0x4;
                                }
                                t128 = 0x64;
                            } else {
                                t123 = FUN_0c08a846(a4);
                                t128 = 0x67;
                                if (t123 != 0) {
                                    t128 = 0x65;
                                }
                            }
                            pl_start_motion(a4, 0x1, t128);
                            (((struct o71A9_uchar *)(a4))->v) = 0x1;
                            (((struct o71A8_uchar *)(a4))->v) = 0x1;
                            return 0x71A8;
                        }
                        pl_step_motion(a4);
                        pl_apply_motion_translation(a4);
                        t136 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t136 - 1);
                        if (((short)(t136 - 1) == 0) && (t137 = (((struct oEE_short *)(a4))->v), t137 == 0)) {
                            (((struct oEE_ushort *)(a4))->v) = 0x1;
                        }
                        t142 = 0x71AA;
                        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                            *(unsigned char *)((a4 + 0xA)) = 0x5;
                            t142 = 0x5;
                        }
                        return t142;
                    }
                    pl_step_motion(a4);
                    pl_apply_motion_translation(a4);
                    t190 = 0x71AA;
                    if ((*(signed char *)((a4 + 0x71AA))) == 0) {
                    } else {
                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                        pl_start_motion(a4, 0x1, 0x64);
                        (((struct o71A9_uchar *)(a4))->v) = 0x1;
                        (((struct o71A8_uchar *)(a4))->v) = 0x1;
                        (((struct oEC_ushort *)(a4))->v) = 0x2E;
                        (((struct oEE_ushort *)(a4))->v) = 0x0;
                        (((struct oF0_ushort *)(a4))->v) = 0x0;
                        if ((*(signed char *)((a4 + 0x7223))) == 11) {
                            FUN_0c0c9834(a4, 0x1);
                            (((struct o7244_uint *)(a4))->v) = 0x71C;
                        } else {
                            FUN_0c0c9834(a4, 0x0);
                            t152 = pl_rel_angle_to_linked(a4);
                            if ((int)(unsigned short)(t152 + 0x4000) > (int)0x8000) {
                                (((struct o7244_uint *)(a4))->v) = 0x1555;
                            } else {
                                t153 = ((int (*)(int))(FUN_0c0e6fe8))((unsigned short)(t152 + 0x4000));
                                math_mat_transform_point((((int)stk + 0) + 0x8), (0x47C0 + a4));
                                *(float *)(((int)stk + 12)) = (((((struct o24_float *)(a4))->v)) + 200.0f);
                                *(volatile int *)((a4 + 0x1C));
                                t157 = ((int (*)(void))(FUN_0c0e6fe8))();
                                *(float *)(((int)stk + 24)) = 0.0f;
                                math_vec3_sub((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8));
                                u159 = *(float *)(((int)stk + 8));
                                *(float *)(((int)stk + 4)) = u159;
                                u160 = *(float *)(((int)stk + 16));
                                *(float *)(((int)stk + 0)) = u160;
                                u162 = (u160 * u160);
                                u162 = u162 + u159 * (*(float *)(((int)stk + 4)));
                                t163 = math_signed_sqrt(u162);
                                u165 = t163;
                                if (t163 == 0.0f) {
                                    u165 = 9.99999975e-06f;
                                }
                                t168 = math_atan_angle16(((*(float *)(((int)stk + 12))) / u165));
                                t169 = (0xFFFF & ((-t168) + 0x10000));
                                if ((int)(0xFFFF & ((-t168) + 0x10000)) > (int)0x2AAA) {
                                    t169 = 0x2AAA;
                                }
                                t171 = t169;
                                if ((int)t169 < (int)0x71C) {
                                    t171 = 0x71C;
                                }
                                (((struct o7244_uint *)(a4))->v) = t171;
                            }
                        }
                        t190 = (snd_play_char_voice(a4, 0x31));
                    }
                    return t190;
                }
                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                pl_start_motion(a4, 0x1, 0x63);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                return fx_spawn_03fd08(a4);
            }
            t197 = *(signed char *)((a4 + 0xA));
            if (t197 != 0) {
                if (t197 != 1) {
                    if (t197 != 2) {
                        if (t197 != 3) {
                            return t197;
                        }
                        (((struct o7223_uchar *)(a4))->v) = 0x0;
                        return pl_end_action_reset(a4);
                    }
                    pl_step_motion(a4);
                    t201 = 0x71AA;
                    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                        t200 = *(signed char *)((a4 + 0xA));
                        *(unsigned char *)((a4 + 0xA)) = (t200 + 0x1);
                        t201 = (t200 + 0x1);
                    }
                    return t201;
                }
                pl_step_motion(a4);
                if (((((struct oEE_short *)(a4))->v)) == 0) {
                    if ((unsigned short)((((struct o719E_short *)(a4))->v)) != 2) {
                    } else {
                        snd_play_char_voice(a4, 0x5);
                    }
                } else {
                    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 9) {
                        snd_play_char_voice(a4, 0x5);
                    }
                }
                t226 = 0x71AA;
                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                    t223 = 0x10;
                    if (((((struct oEE_short *)(a4))->v)) != 0) {
                        t223 = 0x11;
                    }
                    pl_start_motion(a4, 0x1, t223);
                    (((struct o71A9_uchar *)(a4))->v) = 0x1;
                    (((struct o71A8_uchar *)(a4))->v) = 0x1;
                    t226 = 0x71A8;
                }
                return t226;
            }
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            t232 = FUN_0c08a846(a4);
            (((struct oEE_ushort *)(a4))->v) = t232;
            t233 = 0x4;
            if ((short)t232 != 0) {
                t233 = 0x5;
            }
            pl_start_motion(a4, 0x1, t233);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            return 0x71A8;
        }
        t236 = *(signed char *)((a4 + 0xA));
        if (t236 != 0) {
            if (t236 != 1) {
                if (t236 != 2) {
                    if (t236 != 3) {
                        return t236;
                    }
                    (((struct o7223_uchar *)(a4))->v) = 0x0;
                    return pl_end_action_reset(a4);
                }
                pl_step_motion(a4);
                if ((((((struct oEE_short *)(a4))->v)) != 0) && (t239 = (((struct o719E_short *)(a4))->v), (unsigned short)t239 == 9)) {
                    snd_play_char_voice(a4, 0x3);
                }
                t245 = 0x71AA;
                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                    t244 = *(signed char *)((a4 + 0xA));
                    *(unsigned char *)((a4 + 0xA)) = (t244 + 0x1);
                    t245 = (t244 + 0x1);
                }
                return t245;
            }
            pl_step_motion(a4);
            if (((((struct oEE_short *)(a4))->v)) == 0) {
                if ((unsigned short)((((struct o719E_short *)(a4))->v)) != 23) {
                } else {
                    snd_play_char_voice(a4, 0x5);
                }
            } else {
                if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 16) {
                    snd_play_char_voice(a4, 0x5);
                }
            }
            t264 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t264 - 1);
            if (((short)(t264 - 1) == 0) && (t265 = (((struct oF0_short *)(a4))->v), t265 != 0)) {
                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                t270 = 0x10;
                if (((((struct oEE_short *)(a4))->v)) != 0) {
                    t270 = 0x11;
                }
                pl_start_motion(a4, 0x1, t270);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                t276 = 0x71A8;
            } else {
                t276 = 0x71AA;
                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                    *(unsigned char *)((a4 + 0xA)) = 0x3;
                    t276 = 0x3;
                }
            }
            return t276;
        }
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        t282 = FUN_0c08a846(a4);
        (((struct oEE_ushort *)(a4))->v) = t282;
        t283 = 0x2;
        if ((short)t282 != 0) {
            t283 = 0x3;
        }
        pl_start_motion(a4, 0x1, t283);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        if (((((struct oEE_short *)(a4))->v)) == 0) {
            (((struct oEC_ushort *)(a4))->v) = 0x28;
        } else {
            (((struct oEC_ushort *)(a4))->v) = 0x2D;
        }
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        return 0xF0;
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    return 0x71A8;
}

int FUN_0c08b81e(int a4)
{
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    pl_start_motion(a4, 0x4, 0x2);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    return 0x71A8;
}

int FUN_0c08b844(int a4)
{
    int stk[2];
    register int t1;
    register int t6;
    register int t18;
    register int t17;
    int t2;
    register int t3;

    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t1 = pl_get_hit_count_of_opponent(a4);
        if (((signed char)t1 == 1) && (t2 = *(int *)((a4 + 0x1C)), t3 = *(signed char *)((t2 + 0x4)), t3 != 10)) {
            *(unsigned char *)((a4 + 0xA)) = 0x3;
            pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x32);
            t6 = *(int *)((a4 + 0x1C));
            (((struct o71A9_uchar *)(t6))->v) = 0x1;
            (((struct o71A8_uchar *)(t6))->v) = 0x1;
            (((struct o720A_uchar *)(a4))->v) = 0x0;
            FUN_0c0a2830(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
            *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x0;
            FUN_0c08b7d6(a4);
        }
    }
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t18 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t17 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t17 + 0x1);
        t18 = (t17 + 0x1);
    }
    return t18;
}

int FUN_0c08b8b8(int a4)
{
    (((struct o7223_uchar *)(a4))->v) = 0x0;
    return pl_end_action_reset(a4);
}

int FUN_0c08b8fc(int a4)
{
    register int t12;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_step_motion_owner((*(int *)((a4 + 0x1C))));
    pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
    FUN_0c08b7d6(a4);
    if ((int)(unsigned short)((((struct o719E_short *)(a4))->v)) >= (int)0x3E) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        pl_start_motion(a4, 0x4, 0x0);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x30);
        t12 = *(int *)((a4 + 0x1C));
        (((struct o71A9_uchar *)(t12))->v) = 0x1;
        (((struct o71A8_uchar *)(t12))->v) = 0x1;
        return obj_place_linked_ahead(a4, 0x0, (*(float *)0xC08BA2C));
    }
    return 0x719E;
}

int FUN_0c08b96e(int a4)
{
    int stk[6];

    *(float *)(((int)stk + 0)) = 0.0f;
    *(float *)(((int)stk + 4)) = ((((struct o0_float *)0xC08BA34)->v));
    *(float *)(((int)stk + 8)) = ((((struct o4_float *)0xC08BA34)->v));
    math_mat_transform_point(((int)stk + 0), (((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0xDC0) + (0x300 + a4)) + 0x2C0));
    return (fx_spawn_hit_effect(((int)stk + 0), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x6, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
}

int FUN_0c08bab6(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_step_motion_owner((*(int *)((a4 + 0x1C))));
    pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 16) {
        snd_play_side_se((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3))), 0x14);
        snd_play_char_voice((*(int *)((a4 + 0x1C))), 0xA);
        obj_set_owner_hit_record(a4, 0x32);
        FUN_0c08b96e(a4);
    }
    t0 = (((struct o719E_short *)(a4))->v);
    t1 = (unsigned short)t0;
    if ((unsigned short)t0 == 104) {
        obj_set_owner_hit_record(a4, 0x30);
        obj_force_owner_state27(a4, 0x30);
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c08bb22(int a4)
{
    register int t4;
    register int t3;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t4 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t3 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t3 + 0x1);
        t4 = (t3 + 0x1);
    }
    return t4;
}

int FUN_0c08bb46(int a4)
{
    (((struct o7223_uchar *)(a4))->v) = 0x0;
    return pl_end_action_reset(a4);
}

int FUN_0c08bb84(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    return t0;
                                }
                                return FUN_0c08bb46(a4);
                            }
                            return FUN_0c08bb22(a4);
                        }
                        return FUN_0c08bab6(a4);
                    }
                    return FUN_0c08b9c2(a4);
                }
                return FUN_0c08b8fc(a4);
            }
            return FUN_0c08b8b8(a4);
        }
        return FUN_0c08b844(a4);
    }
    return FUN_0c08b81e(a4);
}

int FUN_0c08bc16(int a4)
{
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    pl_start_motion(a4, 0x4, 0x3);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    return 0x71A8;
}

int FUN_0c08bcd4(int a4)
{
    register int t12;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_step_motion_owner((*(int *)((a4 + 0x1C))));
    pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
    FUN_0c08bbce(a4);
    if ((int)(unsigned short)((((struct o719E_short *)(a4))->v)) >= (int)0x3E) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        pl_start_motion(a4, 0x4, 0x1);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x31);
        t12 = *(int *)((a4 + 0x1C));
        (((struct o71A9_uchar *)(t12))->v) = 0x1;
        (((struct o71A8_uchar *)(t12))->v) = 0x1;
        return obj_place_linked_ahead(a4, 0x0, 150.0f);
    }
    return 0x719E;
}

int FUN_0c08bd78(int a4)
{
    int stk[3];

    FUN_0c0a3d5c((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3))), 0x2);
    snd_play_char_voice((*(int *)((a4 + 0x1C))), 0xB);
    FUN_0c0a3762((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3))), 0x3);
    *(float *)(((int)stk + 0)) = 0.0f;
    *(float *)(((int)stk + 4)) = 50.0f;
    *(float *)(((int)stk + 8)) = 0.0f;
    math_mat_transform_point(((int)stk + 0), (((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0xDC0) + (0x300 + a4)) + 0x840));
    *(float *)(((int)stk + 4)) = 0.0f;
    return (FUN_0c0421ee(((int)stk + 0), 0x2));
}

int FUN_0c08bde8(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_step_motion_owner((*(int *)((a4 + 0x1C))));
    pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
    t0 = (((struct o719E_short *)(a4))->v);
    if (((unsigned short)t0 == 66) || ((unsigned short)t0 == 123)) {
        obj_set_owner_hit_record(a4, 0x33);
        FUN_0c08bd78(a4);
    }
    t0 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        pl_start_motion(a4, 0x4, 0x5);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x34);
        t1 = *(int *)((a4 + 0x1C));
        (((struct o71A9_uchar *)(t1))->v) = 0x1;
        (((struct o71A8_uchar *)(t1))->v) = 0x1;
        t0 = 0x71A8;
    }
    return t0;
}

int FUN_0c08bea0(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_step_motion_owner((*(int *)((a4 + 0x1C))));
    pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 26) {
        obj_set_owner_hit_record(a4, 0x33);
        FUN_0c08bd78(a4);
    }
    t0 = (((struct o719E_short *)(a4))->v);
    t1 = (unsigned short)t0;
    if ((unsigned short)t0 == 107) {
        obj_set_owner_hit_record(a4, 0x31);
        obj_force_owner_state27(a4, 0x31);
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c08bef8(int a4)
{
    register int t4;
    register int t3;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t4 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t3 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t3 + 0x1);
        t4 = (t3 + 0x1);
    }
    return t4;
}

int FUN_0c08bf28(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    return t0;
                                }
                                return ((int (*)(int, int, int, int))(0xC08BF1C))(a4, a5, a6, a7);
                            }
                            return FUN_0c08bef8(a4);
                        }
                        return FUN_0c08bea0(a4);
                    }
                    return FUN_0c08bde8(a4);
                }
                return FUN_0c08bcd4(a4);
            }
            return ((int (*)(int, int, int, int))(0xC08BCC8))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC08BC54))(a4, a5, a6, a7);
    }
    return FUN_0c08bc16(a4);
}
