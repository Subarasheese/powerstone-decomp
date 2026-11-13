/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b13c8-0c0b1b34) */

struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int math_vec3_sub(int, int, int);
float math_vec3_length(int);
int FUN_0c0b13c8(int, int);
int FUN_0c0b147c(int, int, int);
int FUN_0c0b1508(int, int, int);
int FUN_0c0b1536(int, int);
int stage_gimmick_20_pick_random_point(int, int);
extern float FUN_0c0b1652();
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int FUN_0c0e6f24(void);

int stage_gimmick_20_run(int a4, int a5, int a6, int a7, float f4)
{
    int stk[5];
    register float u210;
    register int t1;
    register float t3;
    register int t6;
    register int t10;
    register float u17;
    register float u21;
    register float t27;
    register int t32;
    register int t35;
    register int t38;
    register float u43;
    register float u47;
    register float t53;
    register int t58;
    register int t61;
    register int t64;
    register int t68;
    register float u73;
    register float u77;
    register int t84;
    register float u91;
    register float u95;
    register int t102;
    register int t103;
    register int t104;
    register float t105;
    register float t112;
    register int t119;
    register float t120;
    register int t126;
    register float t127;
    register int t138;
    register float t139;
    register int t145;
    register float t146;
    register int t152;
    register int t153;
    register float t154;
    register float t161;
    register int t168;
    register float t169;
    register int t175;
    register float t176;
    register int t187;
    register float t188;
    register int t194;
    register float t195;
    register int t211;
    register int t215;
    register float u225;
    register float u229;
    register float t235;
    register int t249;
    register int t253;
    register float u258;
    register float u262;
    register int t269;
    register float u276;
    register float u280;
    register int t287;
    register int t288;
    register int t289;
    register int t312;
    register int t320;
    register int t321;
    register int t344;
    register int t204;
    register int t205;
    int t26;
    int t52;
    int t234;

    t204 = *(signed char *)((a5 + 0x0));
    u210 = f4;
    if ((t204 != 1) && (t204 != 2)) {
        t205 = a5;
    } else {
        t1 = 0x0;
        for (;;) {
            math_vec3_sub((((int)stk + 4) + 0x4), (((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20), (a4 + 0x4));
            t3 = math_vec3_length((((int)stk + 4) + 0x4));
            if (!(t3 > 100.0f)) {
                break;
            }
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x2) {
                t6 = *(signed char *)((a5 + 0x0));
                t1 = 0x1;
                switch (t6) {
                case 0:
                    *(unsigned char *)((a5 + 0x0)) = t1;
                    *(unsigned char *)((a5 + 0x1)) = 0x0;
                    (((struct o19_uchar *)(a5))->v) = 0xFFFFFFFF;
                    t152 = *(signed char *)((a5 + 0x1));
                    if (t152 != 0) {
                        if (t152 != 1) {
                            return ((int (*)(float))(0xC0B1A38))(t3);
                        }
                        t153 = *(short *)((a5 + 0x14));
                        *(unsigned short *)((a5 + 0x14)) = (t153 - 1);
                        if ((short)(t153 - 1) != 0) {
                            return ((int (*)(float))(0xC0B1A38))(t3);
                        }
                        t154 = math_rand_float();
                    } else {
                        *(unsigned char *)((a5 + 0x1)) = ((*(signed char *)((a5 + 0x1))) + 0x1);
                        t161 = math_rand_float();
                        if (!(2.14748365e+09f > (t161 * 255.0f))) {
                            *(unsigned short *)((a5 + 0x14)) = ((short)((FUN_0c0e6f24()) + 0x1) * (short)0x3C);
                            (((struct o18_uchar *)(a5))->v) = 0x0;
                            FUN_0c0b13c8(a4, a5);
                            if ((*(signed char *)((a5 + 0x1A))) != (*(signed char *)((a5 + 0x19)))) {
                                stage_gimmick_20_pick_random_point(a4, a5);
                                t168 = *(short *)((a5 + 0x14));
                                *(unsigned short *)((a5 + 0x14)) = (t168 - 1);
                                if ((short)(t168 - 1) != 0) {
                                    return ((int (*)(void))(0xC0B1A38))();
                                }
                                t169 = math_rand_float();
                            } else {
                                t175 = *(short *)((a5 + 0x14));
                                *(unsigned short *)((a5 + 0x14)) = (t175 - 1);
                                if ((short)(t175 - 1) != 0) {
                                    return ((int (*)(void))(0xC0B1A38))();
                                }
                                t176 = math_rand_float();
                            }
                        } else {
                            *(unsigned short *)((a5 + 0x14)) = ((short)((FUN_0c0e6f24()) + 0x1) * (short)0x3C);
                            (((struct o18_uchar *)(a5))->v) = 0x0;
                            FUN_0c0b13c8(a4, a5);
                            if ((*(signed char *)((a5 + 0x1A))) != (*(signed char *)((a5 + 0x19)))) {
                                stage_gimmick_20_pick_random_point(a4, a5);
                                t187 = *(short *)((a5 + 0x14));
                                *(unsigned short *)((a5 + 0x14)) = (t187 - 1);
                                if ((short)(t187 - 1) != 0) {
                                    return ((int (*)(void))(0xC0B1A38))();
                                }
                                t188 = math_rand_float();
                            } else {
                                t194 = *(short *)((a5 + 0x14));
                                *(unsigned short *)((a5 + 0x14)) = (t194 - 1);
                                if ((short)(t194 - 1) != 0) {
                                    return ((int (*)(void))(0xC0B1A38))();
                                }
                                t195 = math_rand_float();
                            }
                        }
                    }
                    *(unsigned char *)((a5 + 0x0)) = (*(signed char *)((0xC152FF0 + (FUN_0c0e6f24()))));
                    break;
                case 1:
                    t103 = *(signed char *)((a5 + 0x1));
                    if (t103 != 0) {
                        if (t103 != 1) {
                            return ((int (*)(float))(0xC0B1A38))(t3);
                        }
                        t104 = *(short *)((a5 + 0x14));
                        *(unsigned short *)((a5 + 0x14)) = (t104 - 1);
                        if ((short)(t104 - 1) != 0) {
                            return ((int (*)(float))(0xC0B1A38))(t3);
                        }
                        t105 = math_rand_float();
                    } else {
                        *(unsigned char *)((a5 + 0x1)) = ((*(signed char *)((a5 + 0x1))) + 0x1);
                        t112 = math_rand_float();
                        if (!(2.14748365e+09f > (t112 * 255.0f))) {
                            *(unsigned short *)((a5 + 0x14)) = ((short)((FUN_0c0e6f24()) + 0x1) * (short)0x3C);
                            (((struct o18_uchar *)(a5))->v) = 0x0;
                            FUN_0c0b13c8(a4, a5);
                            if ((*(signed char *)((a5 + 0x1A))) != (*(signed char *)((a5 + 0x19)))) {
                                stage_gimmick_20_pick_random_point(a4, a5);
                                t119 = *(short *)((a5 + 0x14));
                                *(unsigned short *)((a5 + 0x14)) = (t119 - 1);
                                if ((short)(t119 - 1) != 0) {
                                    return ((int (*)(void))(0xC0B1A38))();
                                }
                                t120 = math_rand_float();
                            } else {
                                t126 = *(short *)((a5 + 0x14));
                                *(unsigned short *)((a5 + 0x14)) = (t126 - 1);
                                if ((short)(t126 - 1) != 0) {
                                    return ((int (*)(void))(0xC0B1A38))();
                                }
                                t127 = math_rand_float();
                            }
                        } else {
                            *(unsigned short *)((a5 + 0x14)) = ((short)((FUN_0c0e6f24()) + 0x1) * (short)0x3C);
                            (((struct o18_uchar *)(a5))->v) = 0x0;
                            FUN_0c0b13c8(a4, a5);
                            if ((*(signed char *)((a5 + 0x1A))) != (*(signed char *)((a5 + 0x19)))) {
                                stage_gimmick_20_pick_random_point(a4, a5);
                                t138 = *(short *)((a5 + 0x14));
                                *(unsigned short *)((a5 + 0x14)) = (t138 - 1);
                                if ((short)(t138 - 1) != 0) {
                                    return ((int (*)(void))(0xC0B1A38))();
                                }
                                t139 = math_rand_float();
                            } else {
                                t145 = *(short *)((a5 + 0x14));
                                *(unsigned short *)((a5 + 0x14)) = (t145 - 1);
                                if ((short)(t145 - 1) != 0) {
                                    return ((int (*)(void))(0xC0B1A38))();
                                }
                                t146 = math_rand_float();
                            }
                        }
                    }
                    *(unsigned char *)((a5 + 0x0)) = (*(signed char *)((0xC152FF0 + (FUN_0c0e6f24()))));
                    break;
                case 2:
                    t68 = *(signed char *)((a5 + 0x1));
                    if (t68 != 0) {
                        if (t68 != 1) {
                            return ((int (*)(float))(0xC0B1A38))(t3);
                        }
                        FUN_0c0b147c(a4, a5, 0x2);
                        *(int *)((int)stk + 0) = (a4 + 0x4);
                        u73 = ((((struct o4_float *)(a4))->v));
                        u73 = u73 + 0.799999952f * (math_sin_angle16((*(int *)((a4 + 0x14)))));
                        (((struct o4_float *)(a4))->v) = u73;
                        *(int *)((int)stk + 0) = (a4 + 0xC);
                        u77 = ((((struct oC_float *)(a4))->v));
                        u77 = u77 + 0.799999952f * (math_cos_angle16((*(int *)((a4 + 0x14)))));
                        (((struct oC_float *)(a4))->v) = u77;
                        (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a4))->v)) + ((((struct o8_float *)(a5))->v)));
                        (((struct o8_float *)(a5))->v) = (((((struct o8_float *)(a5))->v)) + 0.0799999982f);
                        if (22.0f > ((((struct o8_float *)(a4))->v))) {
                            return ((int (*)(void))(0xC0B1A38))();
                        }
                        if (0.0f > ((((struct o8_float *)(a5))->v))) {
                            return ((int (*)(void))(0xC0B1A38))();
                        }
                        (((struct o8_float *)(a4))->v) = 22.0f;
                        (((struct o8_float *)(a5))->v) = -0.5f;
                        t84 = *(short *)((a5 + 0x14));
                        *(unsigned short *)((a5 + 0x14)) = (t84 - 1);
                        if ((short)(t84 - 1) != 0) {
                            return ((int (*)(void))(0xC0B1A38))();
                        }
                    } else {
                        *(unsigned char *)((a5 + 0x1)) = ((*(signed char *)((a5 + 0x1))) + 0x1);
                        *(unsigned short *)((a5 + 0x14)) = 0x6;
                        (((struct o8_float *)(a5))->v) = -0.5f;
                        FUN_0c0b1536(a4, a5);
                        FUN_0c0b147c(a4, a5, 0x2);
                        *(int *)((int)stk + 0) = (a4 + 0x4);
                        u91 = ((((struct o4_float *)(a4))->v));
                        u91 = u91 + 0.799999952f * (math_sin_angle16((*(int *)((a4 + 0x14)))));
                        (((struct o4_float *)(a4))->v) = u91;
                        *(int *)((int)stk + 0) = (a4 + 0xC);
                        u95 = ((((struct oC_float *)(a4))->v));
                        u95 = u95 + 0.799999952f * (math_cos_angle16((*(int *)((a4 + 0x14)))));
                        (((struct oC_float *)(a4))->v) = u95;
                        (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a4))->v)) + ((((struct o8_float *)(a5))->v)));
                        (((struct o8_float *)(a5))->v) = (((((struct o8_float *)(a5))->v)) + 0.0799999982f);
                        if (22.0f > ((((struct o8_float *)(a4))->v))) {
                            return ((int (*)(void))(0xC0B1A38))();
                        }
                        if (0.0f > ((((struct o8_float *)(a5))->v))) {
                            return ((int (*)(void))(0xC0B1A38))();
                        }
                        (((struct o8_float *)(a4))->v) = 22.0f;
                        (((struct o8_float *)(a5))->v) = -0.5f;
                        t102 = *(short *)((a5 + 0x14));
                        *(unsigned short *)((a5 + 0x14)) = (t102 - 1);
                        if ((short)(t102 - 1) != 0) {
                            return ((int (*)(void))(0xC0B1A38))();
                        }
                    }
                    *(unsigned char *)((a5 + 0x0)) = t1;
                    break;
                default:
                    if (t6 == 3) {
                        t10 = *(signed char *)((a5 + 0x1));
                        if (t10 != 0) {
                            if (t10 != 1) {
                                return ((int (*)(float))(0xC0B1A38))(t3);
                            }
                            *(float *)(((int)stk + 4)) = (((float (*)(int, int, float))(FUN_0c0b1652))(a4, a5, t3));
                            if ((*(short *)((a5 + 0x16))) == 0) {
                                FUN_0c0b147c(a4, a5, 0x4);
                                *(int *)((int)stk + 0) = (a4 + 0x4);
                                u17 = ((((struct o4_float *)(a4))->v));
                                u17 = u17 + 8.0f * (math_sin_angle16((*(int *)((a4 + 0x14)))));
                                (((struct o4_float *)(a4))->v) = u17;
                                *(int *)((int)stk + 0) = (a4 + 0xC);
                                u21 = ((((struct oC_float *)(a4))->v));
                                u21 = u21 + 8.0f * (math_cos_angle16((*(int *)((a4 + 0x14)))));
                                (((struct oC_float *)(a4))->v) = u21;
                                (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a4))->v)) + ((((struct o8_float *)(a5))->v)));
                                (((struct o8_float *)(a5))->v) = (((((struct o8_float *)(a5))->v)) + -0.399999976f);
                                if (((unsigned char)(*(signed char *)((a5 + 0x1B))) == 0xFF) && (t26 = *(short *)((a5 + 0x16)), t26 == 0)) {
                                    t27 = ((float (*)(int, int))(FUN_0c0b1652))(a4, a5);
                                    if (t27 > (*(float *)(((int)stk + 4)))) {
                                        *(unsigned short *)((a5 + 0x16)) = t1;
                                        FUN_0c0b1536(a4, a5);
                                        if (!(((((struct o8_float *)(a4))->v)) > 22.0f)) {
                                            (((struct o8_float *)(a4))->v) = 22.0f;
                                            FUN_0c0b13c8(a4, a5);
                                            t32 = *(signed char *)((a5 + 0x19));
                                            if ((t32 != 4) && ((int)t32 < (int)0x9)) {
                                                *(unsigned char *)((a5 + 0x0)) = t1;
                                                return ((int (*)(int, int, int, int))(0xC0B1A0C))(t32, a5, a6, a7);
                                            }
                                            *(unsigned char *)((a5 + 0x1)) = 0x0;
                                            return ((int (*)(int, int, int, int))(0xC0B1A38))(t32, a5, a6, a7);
                                        }
                                        return ((int (*)(void))(0xC0B1A16))();
                                    }
                                    if (!(((((struct o8_float *)(a4))->v)) > 22.0f)) {
                                        (((struct o8_float *)(a4))->v) = 22.0f;
                                        FUN_0c0b13c8(a4, a5);
                                        t35 = *(signed char *)((a5 + 0x19));
                                        if ((t35 != 4) && ((int)t35 < (int)0x9)) {
                                            *(unsigned char *)((a5 + 0x0)) = t1;
                                            return ((int (*)(int, int, int, int))(0xC0B1A0C))(t35, a5, a6, a7);
                                        }
                                        *(unsigned char *)((a5 + 0x1)) = 0x0;
                                        return ((int (*)(int, int, int, int))(0xC0B1A38))(t35, a5, a6, a7);
                                    }
                                    return ((int (*)(void))(0xC0B1A16))();
                                }
                                if (!(((((struct o8_float *)(a4))->v)) > 22.0f)) {
                                    (((struct o8_float *)(a4))->v) = 22.0f;
                                    FUN_0c0b13c8(a4, a5);
                                    t38 = *(signed char *)((a5 + 0x19));
                                    if ((t38 != 4) && ((int)t38 < (int)0x9)) {
                                        *(unsigned char *)((a5 + 0x0)) = t1;
                                        return ((int (*)(int, int, int, int))(0xC0B1A0C))(t38, a5, a6, a7);
                                    }
                                    *(unsigned char *)((a5 + 0x1)) = 0x0;
                                    return ((int (*)(int, int, int, int))(0xC0B1A38))(t38, a5, a6, a7);
                                }
                                return ((int (*)(void))(0xC0B1A16))();
                            }
                            FUN_0c0b1508(a4, a5, 0xA);
                            *(int *)((int)stk + 0) = (a4 + 0x4);
                            u43 = ((((struct o4_float *)(a4))->v));
                            u43 = u43 + 8.0f * (math_sin_angle16((*(int *)((a4 + 0x14)))));
                            (((struct o4_float *)(a4))->v) = u43;
                            *(int *)((int)stk + 0) = (a4 + 0xC);
                            u47 = ((((struct oC_float *)(a4))->v));
                            u47 = u47 + 8.0f * (math_cos_angle16((*(int *)((a4 + 0x14)))));
                            (((struct oC_float *)(a4))->v) = u47;
                            (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a4))->v)) + ((((struct o8_float *)(a5))->v)));
                            (((struct o8_float *)(a5))->v) = (((((struct o8_float *)(a5))->v)) + -0.399999976f);
                            if (((unsigned char)(*(signed char *)((a5 + 0x1B))) == 0xFF) && (t52 = *(short *)((a5 + 0x16)), t52 == 0)) {
                                t53 = ((float (*)(int, int))(FUN_0c0b1652))(a4, a5);
                                if (t53 > (*(float *)(((int)stk + 4)))) {
                                    *(unsigned short *)((a5 + 0x16)) = t1;
                                    FUN_0c0b1536(a4, a5);
                                    if (!(((((struct o8_float *)(a4))->v)) > 22.0f)) {
                                        (((struct o8_float *)(a4))->v) = 22.0f;
                                        FUN_0c0b13c8(a4, a5);
                                        t58 = *(signed char *)((a5 + 0x19));
                                        if ((t58 != 4) && ((int)t58 < (int)0x9)) {
                                            *(unsigned char *)((a5 + 0x0)) = t1;
                                            return ((int (*)(int, int, int, int))(0xC0B1A0C))(t58, a5, a6, a7);
                                        }
                                        *(unsigned char *)((a5 + 0x1)) = 0x0;
                                        return ((int (*)(int, int, int, int))(0xC0B1A38))(t58, a5, a6, a7);
                                    }
                                    return ((int (*)(void))(0xC0B1A16))();
                                }
                                if (!(((((struct o8_float *)(a4))->v)) > 22.0f)) {
                                    (((struct o8_float *)(a4))->v) = 22.0f;
                                    FUN_0c0b13c8(a4, a5);
                                    t61 = *(signed char *)((a5 + 0x19));
                                    if ((t61 != 4) && ((int)t61 < (int)0x9)) {
                                        *(unsigned char *)((a5 + 0x0)) = t1;
                                        return ((int (*)(int, int, int, int))(0xC0B1A0C))(t61, a5, a6, a7);
                                    }
                                    *(unsigned char *)((a5 + 0x1)) = 0x0;
                                    return ((int (*)(int, int, int, int))(0xC0B1A38))(t61, a5, a6, a7);
                                }
                                return ((int (*)(void))(0xC0B1A16))();
                            }
                            if (!(((((struct o8_float *)(a4))->v)) > 22.0f)) {
                                (((struct o8_float *)(a4))->v) = 22.0f;
                                FUN_0c0b13c8(a4, a5);
                                t64 = *(signed char *)((a5 + 0x19));
                                if ((t64 != 4) && ((int)t64 < (int)0x9)) {
                                    *(unsigned char *)((a5 + 0x0)) = t1;
                                    return ((int (*)(int, int, int, int))(0xC0B1A0C))(t64, a5, a6, a7);
                                }
                                *(unsigned char *)((a5 + 0x1)) = 0x0;
                                return ((int (*)(int, int, int, int))(0xC0B1A38))(t64, a5, a6, a7);
                            }
                            return ((int (*)(void))(0xC0B1A16))();
                        }
                        *(unsigned char *)((a5 + 0x1)) = ((*(signed char *)((a5 + 0x1))) + 0x1);
                        *(unsigned short *)((a5 + 0x14)) = 0x4;
                        *(unsigned short *)((a5 + 0x16)) = 0x0;
                        (((struct o18_uchar *)(a5))->v) = t1;
                        (((struct o8_float *)(a5))->v) = 8.0f;
                        stage_gimmick_20_pick_random_point(a4, a5);
                        FUN_0c0b1536(a4, a5);
                        return ((int (*)(void))(0xC0B1A38))();
                    }
                    return ((int (*)(float))(0xC0B1A38))(t3);
                }
                *(unsigned char *)((a5 + 0x1)) = 0x0;
                return ((int (*)(void))(0xC0B1A38))();
            }
        }
        *(unsigned char *)((a5 + 0x0)) = 0x3;
        *(unsigned char *)((a5 + 0x1)) = 0x0;
        u210 = t3;
    }
    t211 = *(signed char *)((a5 + 0x0));
    switch (t211) {
    case 0:
        *(unsigned char *)((a5 + 0x0)) = 0x1;
        *(unsigned char *)((a5 + 0x1)) = 0x0;
        (((struct o19_uchar *)(a5))->v) = 0xFFFFFFFF;
        t320 = *(signed char *)((a5 + 0x1));
        if (t320 != 0) {
            if (t320 != 1) {
                return ((int (*)(int, int, int, int, float))(0xC0B1A38))(t204, t205, a6, a7, u210);
            }
            t321 = *(short *)((a5 + 0x14));
            *(unsigned short *)((a5 + 0x14)) = (t321 - 1);
            if ((short)(t321 - 1) != 0) {
                return ((int (*)(int, int, int, int, float))(0xC0B1A38))(t204, t205, a6, a7, u210);
            }
        } else {
            *(unsigned char *)((a5 + 0x1)) = ((*(signed char *)((a5 + 0x1))) + 0x1);
            math_rand_float();
    
            *(unsigned short *)((a5 + 0x14)) = ((short)((FUN_0c0e6f24()) + 0x1) * (short)0x3C);
            (((struct o18_uchar *)(a5))->v) = 0x0;
            FUN_0c0b13c8(a4, a5);
            if ((*(signed char *)((a5 + 0x1A))) != (*(signed char *)((a5 + 0x19)))) {
                stage_gimmick_20_pick_random_point(a4, a5);
            }
            t344 = *(short *)((a5 + 0x14));
            *(unsigned short *)((a5 + 0x14)) = (t344 - 1);
            if ((short)(t344 - 1) != 0) {
                return ((int (*)(void))(0xC0B1A38))();
            }
        }
        math_rand_float();
    
        *(unsigned char *)((a5 + 0x0)) = (*(signed char *)((0xC152FF0 + (FUN_0c0e6f24()))));
        break;
    case 1:
        t288 = *(signed char *)((a5 + 0x1));
        if (t288 != 0) {
            if (t288 != 1) {
                return ((int (*)(int, int, int, int, float))(0xC0B1A38))(t204, t205, a6, a7, u210);
            }
            t289 = *(short *)((a5 + 0x14));
            *(unsigned short *)((a5 + 0x14)) = (t289 - 1);
            if ((short)(t289 - 1) != 0) {
                return ((int (*)(int, int, int, int, float))(0xC0B1A38))(t204, t205, a6, a7, u210);
            }
        } else {
            *(unsigned char *)((a5 + 0x1)) = ((*(signed char *)((a5 + 0x1))) + 0x1);
            math_rand_float();
        
            *(unsigned short *)((a5 + 0x14)) = ((short)((FUN_0c0e6f24()) + 0x1) * (short)0x3C);
            (((struct o18_uchar *)(a5))->v) = 0x0;
            FUN_0c0b13c8(a4, a5);
            if ((*(signed char *)((a5 + 0x1A))) != (*(signed char *)((a5 + 0x19)))) {
                stage_gimmick_20_pick_random_point(a4, a5);
            }
            t312 = *(short *)((a5 + 0x14));
            *(unsigned short *)((a5 + 0x14)) = (t312 - 1);
            if ((short)(t312 - 1) != 0) {
                return ((int (*)(void))(0xC0B1A38))();
            }
        }
        math_rand_float();
        
        *(unsigned char *)((a5 + 0x0)) = (*(signed char *)((0xC152FF0 + (FUN_0c0e6f24()))));
        break;
    case 2:
        t253 = *(signed char *)((a5 + 0x1));
        if (t253 != 0) {
            if (t253 != 1) {
                return ((int (*)(int, int, int, int, float))(0xC0B1A38))(t204, t205, a6, a7, u210);
            }
            FUN_0c0b147c(a4, a5, 0x2);
            *(int *)((int)stk + 0) = (a4 + 0x4);
            u258 = ((((struct o4_float *)(a4))->v));
            u258 = u258 + 0.799999952f * (math_sin_angle16((*(int *)((a4 + 0x14)))));
            (((struct o4_float *)(a4))->v) = u258;
            *(int *)((int)stk + 0) = (a4 + 0xC);
            u262 = ((((struct oC_float *)(a4))->v));
            u262 = u262 + 0.799999952f * (math_cos_angle16((*(int *)((a4 + 0x14)))));
            (((struct oC_float *)(a4))->v) = u262;
            (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a4))->v)) + ((((struct o8_float *)(a5))->v)));
            (((struct o8_float *)(a5))->v) = (((((struct o8_float *)(a5))->v)) + 0.0799999982f);
            if (22.0f > ((((struct o8_float *)(a4))->v))) {
                return ((int (*)(void))(0xC0B1A38))();
            }
            if (0.0f > ((((struct o8_float *)(a5))->v))) {
                return ((int (*)(void))(0xC0B1A38))();
            }
            (((struct o8_float *)(a4))->v) = 22.0f;
            (((struct o8_float *)(a5))->v) = -0.5f;
            t269 = *(short *)((a5 + 0x14));
            *(unsigned short *)((a5 + 0x14)) = (t269 - 1);
            if ((short)(t269 - 1) != 0) {
                return ((int (*)(void))(0xC0B1A38))();
            }
        } else {
            *(unsigned char *)((a5 + 0x1)) = ((*(signed char *)((a5 + 0x1))) + 0x1);
            *(unsigned short *)((a5 + 0x14)) = 0x6;
            (((struct o8_float *)(a5))->v) = -0.5f;
            FUN_0c0b1536(a4, a5);
            FUN_0c0b147c(a4, a5, 0x2);
            *(int *)((int)stk + 0) = (a4 + 0x4);
            u276 = ((((struct o4_float *)(a4))->v));
            u276 = u276 + 0.799999952f * (math_sin_angle16((*(int *)((a4 + 0x14)))));
            (((struct o4_float *)(a4))->v) = u276;
            *(int *)((int)stk + 0) = (a4 + 0xC);
            u280 = ((((struct oC_float *)(a4))->v));
            u280 = u280 + 0.799999952f * (math_cos_angle16((*(int *)((a4 + 0x14)))));
            (((struct oC_float *)(a4))->v) = u280;
            (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a4))->v)) + ((((struct o8_float *)(a5))->v)));
            (((struct o8_float *)(a5))->v) = (((((struct o8_float *)(a5))->v)) + 0.0799999982f);
            if (22.0f > ((((struct o8_float *)(a4))->v))) {
                return ((int (*)(void))(0xC0B1A38))();
            }
            if (0.0f > ((((struct o8_float *)(a5))->v))) {
                return ((int (*)(void))(0xC0B1A38))();
            }
            (((struct o8_float *)(a4))->v) = 22.0f;
            (((struct o8_float *)(a5))->v) = -0.5f;
            t287 = *(short *)((a5 + 0x14));
            *(unsigned short *)((a5 + 0x14)) = (t287 - 1);
            if ((short)(t287 - 1) != 0) {
                return ((int (*)(void))(0xC0B1A38))();
            }
        }
        *(unsigned char *)((a5 + 0x0)) = 0x1;
        break;
    default:
        if (t211 == 3) {
            t215 = *(signed char *)((a5 + 0x1));
            if (t215 != 0) {
                if (t215 != 1) {
                    return ((int (*)(int, int, int, int, float))(0xC0B1A38))(t204, t205, a6, a7, u210);
                }
                *(float *)(((int)stk + 4)) = (((float (*)(int, int, float))(FUN_0c0b1652))(a4, a5, u210));
                if ((*(short *)((a5 + 0x16))) == 0) {
                    FUN_0c0b147c(a4, a5, 0x4);
                } else {
                    FUN_0c0b1508(a4, a5, 0xA);
                }
                *(int *)((int)stk + 0) = (a4 + 0x4);
                u225 = ((((struct o4_float *)(a4))->v));
                u225 = u225 + 8.0f * (math_sin_angle16((*(int *)((a4 + 0x14)))));
                (((struct o4_float *)(a4))->v) = u225;
                *(int *)((int)stk + 0) = (a4 + 0xC);
                u229 = ((((struct oC_float *)(a4))->v));
                u229 = u229 + 8.0f * (math_cos_angle16((*(int *)((a4 + 0x14)))));
                (((struct oC_float *)(a4))->v) = u229;
                (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a4))->v)) + ((((struct o8_float *)(a5))->v)));
                (((struct o8_float *)(a5))->v) = (((((struct o8_float *)(a5))->v)) + -0.399999976f);
                if (((unsigned char)(*(signed char *)((a5 + 0x1B))) == 0xFF) && (t234 = *(short *)((a5 + 0x16)), t234 == 0)) {
                    t235 = ((float (*)(int, int))(FUN_0c0b1652))(a4, a5);
                    if (t235 > (*(float *)(((int)stk + 4)))) {
                        *(unsigned short *)((a5 + 0x16)) = 0x1;
                        FUN_0c0b1536(a4, a5);
                    }
                }
                if (!(((((struct o8_float *)(a4))->v)) > 22.0f)) {
                    (((struct o8_float *)(a4))->v) = 22.0f;
                    FUN_0c0b13c8(a4, a5);
                    t249 = *(signed char *)((a5 + 0x19));
                    if ((t249 != 4) && ((int)t249 < (int)0x9)) {
                        *(unsigned char *)((a5 + 0x0)) = 0x1;
                        return ((int (*)(int, int, int, int))(0xC0B1A0C))(t249, a5, a6, a7);
                    }
                    *(unsigned char *)((a5 + 0x1)) = 0x0;
                    return ((int (*)(int, int, int, int))(0xC0B1A38))(t249, a5, a6, a7);
                }
                return ((int (*)(void))(0xC0B1A16))();
            }
            *(unsigned char *)((a5 + 0x1)) = ((*(signed char *)((a5 + 0x1))) + 0x1);
            *(unsigned short *)((a5 + 0x14)) = 0x4;
            *(unsigned short *)((a5 + 0x16)) = 0x0;
            (((struct o18_uchar *)(a5))->v) = 0x1;
            (((struct o8_float *)(a5))->v) = 8.0f;
            stage_gimmick_20_pick_random_point(a4, a5);
            FUN_0c0b1536(a4, a5);
            return ((int (*)(void))(0xC0B1A38))();
        }
        return ((int (*)(int, int, int, int, float))(0xC0B1A38))(t204, t205, a6, a7, u210);
    }
    *(unsigned char *)((a5 + 0x1)) = 0x0;
    return ((int (*)(void))(0xC0B1A38))();
}
