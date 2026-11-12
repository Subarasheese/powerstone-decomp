/* Straight-line functions with calls and guards (batch gen_fk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c02f3a6(int, int);
int FUN_0c03c5c0(int, int);
int FUN_0c0555c4(void);
int FUN_0c059330(int);
int FUN_0c06206e(int, int, int);
float FUN_0c0620a4(int);
int FUN_0c0b13c8(int, int);
int FUN_0c0b147c(int, int, int);
int FUN_0c0b1508(int, int, int);
int FUN_0c0b1536(int, int);
int FUN_0c0b15a0(int, int);
extern float FUN_0c0b1652();
int FUN_0c0ccefc(int, float, float);
int FUN_0c0ce910(int, int);
int FUN_0c0ce96c(void);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e6d00(void);
int FUN_0c0e6e5c(void);
int FUN_0c0e6f24(void);
int FUN_0c0f059e(int);
int FUN_0c0f0cba(int, int);
int FUN_0c0f7d04(int, int, int);
int FUN_0c0fa42e(int, int, int, int, int);
int FUN_0c0fa540(int, int, int, int, int, int);
int FUN_0c0fa8c0(int);
int FUN_0c0fa966(int, int, int, int, int, int, int);
int FUN_0c0ff1ac(int, int, int, int);
int FUN_0c109440(int, int, int);
int FUN_0c110c26(int, ...);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int gdFsCheckMedia(int);
int gdFsGetDirEnt(int, int, int, int);
int gdFsGetLE4(int);
int gdFsReadWG(int, int, int);
int gdFsReopenHn(int, int, int, int);
int gdFsWaitCompleteReq(int, int, int, int);
int FUN_0c0b16d8(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0cedfe(void);
int FUN_0c02f3f2(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c0f05c8(int a4, int a5, int a6, int a7);
int FUN_0c0c2f50(int a4);
int FUN_0c0f94a0(int a4, int a5, int a6, int a7, int a8);

int FUN_0c0b16d8(int a4, int a5, int a6, int a7, float f4)
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
            FUN_0c06206e((((int)stk + 4) + 0x4), (((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20), (a4 + 0x4));
            t3 = FUN_0c0620a4((((int)stk + 4) + 0x4));
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
                        t154 = FUN_0c0df940();
                    } else {
                        *(unsigned char *)((a5 + 0x1)) = ((*(signed char *)((a5 + 0x1))) + 0x1);
                        t161 = FUN_0c0df940();
                        if (!(2.14748365e+09f > (t161 * 255.0f))) {
                            *(unsigned short *)((a5 + 0x14)) = ((short)((FUN_0c0e6f24()) + 0x1) * (short)0x3C);
                            (((struct o18_uchar *)(a5))->v) = 0x0;
                            FUN_0c0b13c8(a4, a5);
                            if ((*(signed char *)((a5 + 0x1A))) != (*(signed char *)((a5 + 0x19)))) {
                                FUN_0c0b15a0(a4, a5);
                                t168 = *(short *)((a5 + 0x14));
                                *(unsigned short *)((a5 + 0x14)) = (t168 - 1);
                                if ((short)(t168 - 1) != 0) {
                                    return ((int (*)(void))(0xC0B1A38))();
                                }
                                t169 = FUN_0c0df940();
                            } else {
                                t175 = *(short *)((a5 + 0x14));
                                *(unsigned short *)((a5 + 0x14)) = (t175 - 1);
                                if ((short)(t175 - 1) != 0) {
                                    return ((int (*)(void))(0xC0B1A38))();
                                }
                                t176 = FUN_0c0df940();
                            }
                        } else {
                            *(unsigned short *)((a5 + 0x14)) = ((short)((FUN_0c0e6f24()) + 0x1) * (short)0x3C);
                            (((struct o18_uchar *)(a5))->v) = 0x0;
                            FUN_0c0b13c8(a4, a5);
                            if ((*(signed char *)((a5 + 0x1A))) != (*(signed char *)((a5 + 0x19)))) {
                                FUN_0c0b15a0(a4, a5);
                                t187 = *(short *)((a5 + 0x14));
                                *(unsigned short *)((a5 + 0x14)) = (t187 - 1);
                                if ((short)(t187 - 1) != 0) {
                                    return ((int (*)(void))(0xC0B1A38))();
                                }
                                t188 = FUN_0c0df940();
                            } else {
                                t194 = *(short *)((a5 + 0x14));
                                *(unsigned short *)((a5 + 0x14)) = (t194 - 1);
                                if ((short)(t194 - 1) != 0) {
                                    return ((int (*)(void))(0xC0B1A38))();
                                }
                                t195 = FUN_0c0df940();
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
                        t105 = FUN_0c0df940();
                    } else {
                        *(unsigned char *)((a5 + 0x1)) = ((*(signed char *)((a5 + 0x1))) + 0x1);
                        t112 = FUN_0c0df940();
                        if (!(2.14748365e+09f > (t112 * 255.0f))) {
                            *(unsigned short *)((a5 + 0x14)) = ((short)((FUN_0c0e6f24()) + 0x1) * (short)0x3C);
                            (((struct o18_uchar *)(a5))->v) = 0x0;
                            FUN_0c0b13c8(a4, a5);
                            if ((*(signed char *)((a5 + 0x1A))) != (*(signed char *)((a5 + 0x19)))) {
                                FUN_0c0b15a0(a4, a5);
                                t119 = *(short *)((a5 + 0x14));
                                *(unsigned short *)((a5 + 0x14)) = (t119 - 1);
                                if ((short)(t119 - 1) != 0) {
                                    return ((int (*)(void))(0xC0B1A38))();
                                }
                                t120 = FUN_0c0df940();
                            } else {
                                t126 = *(short *)((a5 + 0x14));
                                *(unsigned short *)((a5 + 0x14)) = (t126 - 1);
                                if ((short)(t126 - 1) != 0) {
                                    return ((int (*)(void))(0xC0B1A38))();
                                }
                                t127 = FUN_0c0df940();
                            }
                        } else {
                            *(unsigned short *)((a5 + 0x14)) = ((short)((FUN_0c0e6f24()) + 0x1) * (short)0x3C);
                            (((struct o18_uchar *)(a5))->v) = 0x0;
                            FUN_0c0b13c8(a4, a5);
                            if ((*(signed char *)((a5 + 0x1A))) != (*(signed char *)((a5 + 0x19)))) {
                                FUN_0c0b15a0(a4, a5);
                                t138 = *(short *)((a5 + 0x14));
                                *(unsigned short *)((a5 + 0x14)) = (t138 - 1);
                                if ((short)(t138 - 1) != 0) {
                                    return ((int (*)(void))(0xC0B1A38))();
                                }
                                t139 = FUN_0c0df940();
                            } else {
                                t145 = *(short *)((a5 + 0x14));
                                *(unsigned short *)((a5 + 0x14)) = (t145 - 1);
                                if ((short)(t145 - 1) != 0) {
                                    return ((int (*)(void))(0xC0B1A38))();
                                }
                                t146 = FUN_0c0df940();
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
                        u73 = u73 + 0.799999952f * (FUN_0c0dfa50((*(int *)((a4 + 0x14)))));
                        (((struct o4_float *)(a4))->v) = u73;
                        *(int *)((int)stk + 0) = (a4 + 0xC);
                        u77 = ((((struct oC_float *)(a4))->v));
                        u77 = u77 + 0.799999952f * (FUN_0c0df4d0((*(int *)((a4 + 0x14)))));
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
                        u91 = u91 + 0.799999952f * (FUN_0c0dfa50((*(int *)((a4 + 0x14)))));
                        (((struct o4_float *)(a4))->v) = u91;
                        *(int *)((int)stk + 0) = (a4 + 0xC);
                        u95 = ((((struct oC_float *)(a4))->v));
                        u95 = u95 + 0.799999952f * (FUN_0c0df4d0((*(int *)((a4 + 0x14)))));
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
                                u17 = u17 + 8.0f * (FUN_0c0dfa50((*(int *)((a4 + 0x14)))));
                                (((struct o4_float *)(a4))->v) = u17;
                                *(int *)((int)stk + 0) = (a4 + 0xC);
                                u21 = ((((struct oC_float *)(a4))->v));
                                u21 = u21 + 8.0f * (FUN_0c0df4d0((*(int *)((a4 + 0x14)))));
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
                            u43 = u43 + 8.0f * (FUN_0c0dfa50((*(int *)((a4 + 0x14)))));
                            (((struct o4_float *)(a4))->v) = u43;
                            *(int *)((int)stk + 0) = (a4 + 0xC);
                            u47 = ((((struct oC_float *)(a4))->v));
                            u47 = u47 + 8.0f * (FUN_0c0df4d0((*(int *)((a4 + 0x14)))));
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
                        FUN_0c0b15a0(a4, a5);
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
            FUN_0c0df940();
    
            *(unsigned short *)((a5 + 0x14)) = ((short)((FUN_0c0e6f24()) + 0x1) * (short)0x3C);
            (((struct o18_uchar *)(a5))->v) = 0x0;
            FUN_0c0b13c8(a4, a5);
            if ((*(signed char *)((a5 + 0x1A))) != (*(signed char *)((a5 + 0x19)))) {
                FUN_0c0b15a0(a4, a5);
            }
            t344 = *(short *)((a5 + 0x14));
            *(unsigned short *)((a5 + 0x14)) = (t344 - 1);
            if ((short)(t344 - 1) != 0) {
                return ((int (*)(void))(0xC0B1A38))();
            }
        }
        FUN_0c0df940();
    
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
            FUN_0c0df940();
        
            *(unsigned short *)((a5 + 0x14)) = ((short)((FUN_0c0e6f24()) + 0x1) * (short)0x3C);
            (((struct o18_uchar *)(a5))->v) = 0x0;
            FUN_0c0b13c8(a4, a5);
            if ((*(signed char *)((a5 + 0x1A))) != (*(signed char *)((a5 + 0x19)))) {
                FUN_0c0b15a0(a4, a5);
            }
            t312 = *(short *)((a5 + 0x14));
            *(unsigned short *)((a5 + 0x14)) = (t312 - 1);
            if ((short)(t312 - 1) != 0) {
                return ((int (*)(void))(0xC0B1A38))();
            }
        }
        FUN_0c0df940();
        
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
            u258 = u258 + 0.799999952f * (FUN_0c0dfa50((*(int *)((a4 + 0x14)))));
            (((struct o4_float *)(a4))->v) = u258;
            *(int *)((int)stk + 0) = (a4 + 0xC);
            u262 = ((((struct oC_float *)(a4))->v));
            u262 = u262 + 0.799999952f * (FUN_0c0df4d0((*(int *)((a4 + 0x14)))));
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
            u276 = u276 + 0.799999952f * (FUN_0c0dfa50((*(int *)((a4 + 0x14)))));
            (((struct o4_float *)(a4))->v) = u276;
            *(int *)((int)stk + 0) = (a4 + 0xC);
            u280 = ((((struct oC_float *)(a4))->v));
            u280 = u280 + 0.799999952f * (FUN_0c0df4d0((*(int *)((a4 + 0x14)))));
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
                u225 = u225 + 8.0f * (FUN_0c0dfa50((*(int *)((a4 + 0x14)))));
                (((struct o4_float *)(a4))->v) = u225;
                *(int *)((int)stk + 0) = (a4 + 0xC);
                u229 = ((((struct oC_float *)(a4))->v));
                u229 = u229 + 8.0f * (FUN_0c0df4d0((*(int *)((a4 + 0x14)))));
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
            FUN_0c0b15a0(a4, a5);
            FUN_0c0b1536(a4, a5);
            return ((int (*)(void))(0xC0B1A38))();
        }
        return ((int (*)(int, int, int, int, float))(0xC0B1A38))(t204, t205, a6, a7, u210);
    }
    *(unsigned char *)((a5 + 0x1)) = 0x0;
    return ((int (*)(void))(0xC0B1A38))();
}

int FUN_0c0cedfe(void)
{
    int stk[10];
    register int t1;
    int t9;
    register int t10;
    register int t14;
    register int t42;
    register int t45;
    register int t70;
    register int t73;
    register int t109;
    register int t110;
    register int t20;
    register float u23;
    register float u24;
    int t38;
    register int t39;
    register int t40;
    int t41;
    register int t51;
    register float u54;
    register float u55;
    register int t79;
    register float u82;
    register float u83;
    register int t101;
    register float u104;
    register float u105;

    FUN_0c0ce910(0xC33F4F0, 0xB);
    *(unsigned int *)(((int)stk + 28)) = 0xC1534C0;
    *(unsigned int *)(((int)stk + 32)) = 0xC153500;
    *(unsigned int *)(((int)stk + 36)) = 0xC153540;
    t1 = 0x0;
    for (;;) {
        *(unsigned int *)(((int)stk + 16)) = 0x0;
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        *(unsigned int *)(((int)stk + 0)) = (*(int *)(((int)stk + 28)));
        *(unsigned int *)(((int)stk + 12)) = (*(int *)(((int)stk + 28)));
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 28)));
        *(unsigned int *)(((int)stk + 24)) = ((signed char)(((t1 << 2) + t1) << 2) + 0xC361BF0);
        for (;;) {
            t9 = *(int *)((((*(int *)(((int)stk + 8))) + ((t1 << 2) << 1)) + 0x0));
            if (((unsigned short)(*(short *)(((*(int *)(((int)stk + 24))) + 0x8))) & t9) == t9) {
                *(unsigned int *)(((int)stk + 16)) = 0x1;
                t10 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 20)) = (t10 + ((t1 << 2) << 1));
                t20 = 0xC153D2C;
                u23 = ((float)(*(signed char *)(((*(int *)(((int)stk + 20))) + 0x4))) * 8.0f);
                u24 = ((float)(*(signed char *)(((t10 + ((t1 << 2) << 1)) + 0x5))) * 8.0f);
            } else {
                t14 = *(int *)(((int)stk + 0));
                *(unsigned int *)(((int)stk + 20)) = (t14 + ((t1 << 2) << 1));
                t20 = 0xC153D28;
                u23 = ((float)(*(signed char *)(((t14 + ((t1 << 2) << 1)) + 0x4))) * 8.0f);
                u24 = ((float)(*(signed char *)(((t14 + ((t1 << 2) << 1)) + 0x5))) * 8.0f);
            }
            FUN_0c0ccefc(t20, u23, u24);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x10);
            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x10);
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x10);
            if ((int)(*(int *)(((int)stk + 4))) >= (int)0x4) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 4)) = 0x4;
        *(unsigned int *)(((int)stk + 12)) = (*(int *)(((int)stk + 32)));
        *(unsigned int *)(((int)stk + 0)) = (*(int *)(((int)stk + 32)));
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 32)));
        *(unsigned int *)(((int)stk + 24)) = ((signed char)(((t1 << 2) + t1) << 2) + 0xC361BF0);
        *(unsigned int *)(((int)stk + 20)) = ((((*(int *)(((int)stk + 16))) == 0)) ? 1 : 0);
        for (;;) {
            if (((*(int *)(((int)stk + 20))) != 0) && (t38 = *(int *)(((int)stk + 8)), t39 = *(int *)(((int)stk + 24)), t40 = *(short *)((t39 + 0x8)), t41 = *(int *)(((t38 + ((t1 << 2) << 1)) + 0x0)), ((unsigned short)t40 & t41) != 0)) {
                t42 = *(int *)(((int)stk + 0));
                *(unsigned int *)(((int)stk + 16)) = (t42 + ((t1 << 2) << 1));
                t51 = 0xC153D2C;
                u54 = ((float)(*(signed char *)(((t42 + ((t1 << 2) << 1)) + 0x4))) * 8.0f);
                u55 = ((float)(*(signed char *)(((t42 + ((t1 << 2) << 1)) + 0x5))) * 8.0f);
            } else {
                t45 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 16)) = (t45 + ((t1 << 2) << 1));
                t51 = 0xC153D28;
                u54 = ((float)(*(signed char *)(((t45 + ((t1 << 2) << 1)) + 0x4))) * 8.0f);
                u55 = ((float)(*(signed char *)(((t45 + ((t1 << 2) << 1)) + 0x5))) * 8.0f);
            }
            FUN_0c0ccefc(t51, u54, u55);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x10);
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x10);
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x10);
            if ((int)(*(int *)(((int)stk + 4))) >= (int)0x8) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 4)) = 0x8;
        *(unsigned int *)(((int)stk + 0)) = (*(int *)(((int)stk + 36)));
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 36)));
        *(unsigned int *)(((int)stk + 12)) = (*(int *)(((int)stk + 36)));
        *(unsigned int *)(((int)stk + 20)) = ((signed char)(((t1 << 2) + t1) << 2) + 0xC361BF0);
        for (;;) {
            if (((unsigned short)(*(short *)(((*(int *)(((int)stk + 20))) + 0x8))) & (*(int *)((((*(int *)(((int)stk + 12))) + ((t1 << 2) << 1)) + 0x0)))) != 0) {
                t70 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 16)) = (t70 + ((t1 << 2) << 1));
                t79 = 0xC153D2C;
                u82 = ((float)(*(signed char *)(((t70 + ((t1 << 2) << 1)) + 0x4))) * 8.0f);
                u83 = ((float)(*(signed char *)(((t70 + ((t1 << 2) << 1)) + 0x5))) * 8.0f);
            } else {
                t73 = *(int *)(((int)stk + 0));
                *(unsigned int *)(((int)stk + 16)) = (t73 + ((t1 << 2) << 1));
                t79 = 0xC153D28;
                u82 = ((float)(*(signed char *)(((t73 + ((t1 << 2) << 1)) + 0x4))) * 8.0f);
                u83 = ((float)(*(signed char *)(((t73 + ((t1 << 2) << 1)) + 0x5))) * 8.0f);
            }
            FUN_0c0ccefc(t79, u82, u83);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x10);
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x10);
            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x10);
            if ((int)(*(int *)(((int)stk + 4))) >= (int)0xD) {
                break;
            }
        }
        t1 = (t1 + 0x1);
        if ((int)t1 < (int)0x2) continue;
        break;
    }
    if (0x0 != 0) {
        *(unsigned int *)(((int)stk + 0)) = 0xC153590;
        t101 = 0xC153D2C;
        u104 = ((float)(*(signed char *)0xC153594) * 8.0f);
        u105 = ((float)(*(signed char *)0xC153595) * 8.0f);
    } else {
        *(unsigned int *)(((int)stk + 0)) = 0xC153590;
        t101 = 0xC153D28;
        u104 = ((float)(*(signed char *)0xC153594) * 8.0f);
        u105 = ((float)(*(signed char *)0xC153595) * 8.0f);
    }
    FUN_0c0ccefc(t101, u104, u105);
    t109 = FUN_0c0ce96c();
    t110 = (signed char)t109;
    if ((signed char)t109 != 0) {
        (((struct o0_uchar *)0xC7F2EE5)->v) = 0x1;
        (((struct o2_uchar *)0xC7F2EE5)->v) = 0x0;
        (((struct o3_uchar *)0xC7F2EE5)->v) = 0x0;
        (((struct o4_uchar *)0xC7F2EE5)->v) = 0x0;
        t110 = 0x0;
    }
    return t110;
}

int FUN_0c02f3f2(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[17];
    register int t36;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t21;
    register int t40;
    register int t101;
    register int t45;
    register int t46;
    register int t43;
    register int t48;
    register int t49;
    int t50;
    int t51;
    register int t52;
    register int t53;
    register int t54;
    register float u57;
    register float u58;
    register int t18;
    register int t19;
    register float u104;
    register float u105;
    register int t55;
    register float u56;
    register int t64;
    register int t67;
    register float u68;
    register float u69;
    register float u70;

    *(unsigned short *)((a4 + 0x8)) = (*(short *)((0xC7EB298 + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0))));
    *(unsigned short *)((a4 + 0xA)) = (*(short *)((0xC7EB29C + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0))));
    t36 = a4;
    if ((int)(*(short *)((a4 + 0xC))) < (int)(*(short *)((0xC7EB29A + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0))))) {
        *(unsigned short *)((a4 + 0xC)) = (*(short *)((0xC7EB29A + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0))));
        t9 = 0xC7EB298;
        t10 = 0xC7EB29A;
        t11 = 0x72D0;
        t12 = 0x0;
        for (;;) {
            if ((int)t12 >= (int)0x8) {
                break;
            }
            t11 = t12;
            t11 = (t11 << 2);
            t10 = t12;
            t11 = (t11 + t10);
            t9 = a4;
            t11 = (t11 << 2);
            t9 = (t9 + 0x10);
            t11 = (unsigned char)t11;
            t11 = (t11 + t9);
            t12 = (t12 + 0x1);
            *(unsigned char *)((t11 + 0x0)) = 0x0;
        }
        if ((int)(*(short *)((0xC7EB29A + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0)))) > 0) {
            *(volatile short *)(((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0) + 0xC7EB29A));
            *(unsigned char *)((a4 + 0x2)) = ((FUN_0c0e6d00()) + 0x1);
            t21 = 0x0;
            for (;;) {
                if ((int)t21 >= (int)(*(signed char *)((a4 + 0x2)))) {
                    break;
                }
                t19 = t21;
                t18 = t21;
                t19 = (t19 << 1);
                t19 = (t19 + t18);
                t18 = 0xC366CC4;
                t19 = (t19 << 2);
                t19 = (t19 << 2);
                t19 = (unsigned char)t19;
                t21 = (t21 + 0x1);
                t19 = (t19 + ((short)((short)(*(signed char *)((a4 + 0x1))) * (short)(0xF0)) + t18));
                *(unsigned char *)((t19 + 0x0)) = 0x0;
            }
            t36 = t21;
        } else {
            *(unsigned char *)((a4 + 0x2)) = 0x1;
            *(unsigned char *)(((0xC366CC4 + (short)((short)(*(signed char *)((a4 + 0x1))) * (short)0xF0)) + 0x0)) = 0x0;
            t36 = t12;
        }
    }
    t46 = *(short *)((0xC7EB29A + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0)));
    t40 = *(short *)((a4 + 0xC));
    *(unsigned short *)(((int)stk + 4)) = (t40 - t46);
    t101 = t36;
    if ((int)(short)(t40 - t46) <= 0) {
    } else {
        t43 = *(short *)(((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0) + 0xC7EB29A));
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        t45 = t43;
        if ((int)(short)t43 > (int)0x30) {
            for (;;) {
                t43 = (t43 - 48);
                *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
                if ((int)(short)t43 <= (int)0x30) {
                    break;
                }
            }
            t45 = t43;
            t46 = (short)t43;
        }
        t48 = *(short *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        t49 = t48;
        t50 = 0xC7EB29A;
        t51 = t46;
        t52 = t36;
        t53 = (t48 + t45);
        t54 = t45;
        u57 = f4;
        u58 = f5;
        for (;;) {
            if (((int)(*(int *)(((int)stk + 8))) < (int)0x8) && (t50 = (short)t53, (int)t50 > 0)) {
                t49 = (*(signed char *)((a4 + 0xF)));
                t51 = a4;
                t51 = (t51 + 0x10);
                t55 = t49;
                t55 = (t55 << 2);
                t55 = (t55 + t49);
                t55 = (t55 << 2);
                t52 = t49;
                t55 = (unsigned char)t55;
                t55 = (t55 + t51);
                t49 = (t49 + 0x1);
                t49 = (t49 & 0x7);
                *(unsigned char *)((a4 + 0xF)) = t49;
                if ((*(signed char *)((t55 + 0x0))) != 0) {
                    t52 = t55;
                    t49 = (FUN_0c02f3a6(t52, a4));
                } else {
                    t64 = t50;
                    t67 = t52;
                    u68 = u56;
                    u69 = u57;
                    u70 = u58;
                }
                u56 = u68;
                u57 = u69;
                u58 = u70;
                t50 = t64;
                t51 = 0x1;
                t52 = t67;
                *(unsigned char *)((t55 + 0x0)) = t51;
                t49 = 0x0;
                t52 = 0x3C;
                *(unsigned short *)((t55 + 0x4)) = t49;
                t49 = t52;
                *(unsigned char *)((t55 + 0x1)) = t49;
                if ((int)(short)t54 > 0) {
                    t51 = 0x30;
                    if ((int)(short)t53 < (int)t51) {
                        t49 = (*(short *)(((int)stk + 4)));
                        u56 = (float)t49;
                        t49 = 0x10;
                        *(float *)((t55 + t49)) = u56;
                        u56 = (float)(short)t54;
                        t49 = 0xC;
                        *(float *)((t55 + t49)) = u56;
                    } else {
                        if (((int)(short)t54 > 0) && (t51 = 0x30, (int)(short)t53 >= (int)t51)) {
                            t50 = (short)t54;
                            u56 = (float)(0x30 - t50);
                            t49 = 0x10;
                            *(float *)((t55 + t49)) = u56;
                            u56 = (float)(short)t54;
                            t49 = 0xC;
                            *(float *)((t55 + t49)) = u56;
                        } else {
                            t51 = (short)t53;
                            if ((int)t51 < (int)0x30) {
                                t49 = 0x10;
                                u56 = (float)(short)t53;
                                *(float *)((t55 + t49)) = u56;
                            } else {
                                t49 = 0xC02F6BC;
                                u57 = (*(float *)((t49 + 0x0)));
                                t49 = 0x10;
                                *(float *)((t55 + t49)) = u57;
                            }
                            t49 = 0xC;
                            u57 = 0.0f;
                            *(float *)((t55 + t49)) = u57;
                        }
                    }
                } else {
                    t51 = (short)t53;
                    if ((int)t51 < (int)0x30) {
                        t49 = 0x10;
                        u56 = (float)(short)t53;
                        *(float *)((t55 + t49)) = u56;
                    } else {
                        t49 = 0xC02F6BC;
                        u57 = (*(float *)((t49 + 0x0)));
                        t49 = 0x10;
                        *(float *)((t55 + t49)) = u57;
                    }
                    t49 = 0xC;
                    u57 = 0.0f;
                    *(float *)((t55 + t49)) = u57;
                }
                t49 = 0xC02F6C0;
                u57 = (*(float *)((t49 + 0x0)));
                t49 = 0xC;
                u56 = (*(float *)((t55 + t49)));
                u56 = (-u56);
                u56 = (u56 + u57);
                *(float *)((t55 + t49)) = u56;
                t49 = 0xC02F6C4;
                u58 = (*(float *)((t49 + 0x0)));
                t49 = (*(signed char *)((a4 + 0x1)));
                u56 = (float)(*(int *)(((int)stk + 0)));
                u57 = u56;
                u57 = (u57 * u58);
                if (t49 == 0) {
                    t49 = 0xC02F6C8;
                    u58 = (*(float *)((t49 + 0x0)));
                    t49 = 0x8;
                    u57 = (u57 + u58);
                    *(float *)((t55 + t49)) = u57;
                } else {
                    t49 = 0xC02F6CC;
                    u58 = (*(float *)((t49 + 0x0)));
                    t49 = 0x8;
                    u56 = u58;
                    u56 = (u56 - u57);
                    *(float *)((t55 + t49)) = u56;
                }
                t54 = (t54 - 48);
                t53 = (t53 - 48);
                *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
                t51 = (*(int *)(((int)stk + 8)));
                t51 = (t51 + 0x1);
                *(unsigned int *)(((int)stk + 8)) = t51;
                continue;
            }
            break;
        }
        t101 = t52;
        u104 = u57;
        u105 = u58;
    }
    *(unsigned short *)((a4 + 0xC)) = (*(short *)((0xC7EB29A + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0))));
    return ((int (*)(int, int, int, int, float, float))(0xC02F764))(t101, a5, a6, a7, u104, u105);
}

int FUN_0c0f05c8(int a4, int a5, int a6, int a7)
{
    int stk[9];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 4) + 0x18) + 0x4);
    v0_0 = _builtin_get_imask();
    *(unsigned int *)(((int)stk + 20)) = 0xC7FE6AC;
    *(unsigned int *)(((int)stk + 4)) = 0xC7FE6AE;
    *(unsigned int *)(((int)stk + 8)) = 0xC7FE6AF;
    *(unsigned int *)(((int)stk + 16)) = v0_0;
    _builtin_set_imask(0xF);
    v0_3 = ((((int)stk + 4) + 0x18));
    v0_2 = (0xC346BDC);
    v0_1 = (0xC0FF1AC);
    v0_0 = (0xC346BD8);
    v0_4 = (0xC7FE6AF);
    v0_5 = (0xC7FE6A0);
    if ((((((struct o0_int *)0xC346BDC)->v)) != 0)) goto L_C0F0626;
    *(unsigned int *)((v0_2 + 0x0)) = (FUN_0c0ff1ac(0x900, 0xC0F0590, 0x50, (*(int *)((v0_0 + 0x0)))));
    L_C0F0626:;
    v0_2 = (0xC346BE0);
    if ((((((struct o4_int *)0xC346BDC)->v)) != 0)) goto L_C0F063C;
    *(unsigned int *)((v0_2 + 0x0)) = (FUN_0c0ff1ac(0xA40, 0xC0F0576, 0x10, (*(int *)((v0_0 + 0x0)))));
    L_C0F063C:;
    v0_6 = gdFsReopenHn((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x14))), 0x0, 0x0, 0x0);
    v0_2 = (0xC0F1622);
    v0_1 = (v0_6);
    if ((v0_6 == 0)) goto L_C0F06BE;
    v0_2 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0xC))) + 0x1C)))))(v0_4, R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    v0_4 = (v0_2);
    if ((v0_2 == 0)) goto L_C0F06BE;
    *(unsigned int *)((v0_1 + 0x3C)) = v0_4;
    (((struct o50_ushort *)(v0_1))->v) = 0x4;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x1C)) = v0_1;
    v0_2 = gdFsWaitCompleteReq(v0_1, R5, R6, R7);
    v0_1 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0xC))) + 0x20)))))(v0_3, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24))) == 0;
    v0_3 = (v0_2);
    v0_6 = (0x4);
    if (v0_1) goto L_C0F06BE;
    if ((v0_3 == 0)) goto L_C0F069E;
    if (!((v0_3 == -29))) goto L_C0F087E;
    if (((*(int *)(((int)stk + 28))) == 6)) goto L_C0F069A;
    goto L_C0F087E;
    L_C0F087E:;
    v0_4 = (v0_3);
    L_C0F08AA:;
    _builtin_set_imask(((unsigned int)((((*(int *)(((int)stk + 16))) & 0xF) << 2) << 2) >> 4));
    return v0_4;
    L_C0F069A:;
    R5 = (0xFFFFFFE9);
    L_C0F0896:;
    v0_4 = (R5);
    goto L_C0F08AA;
    L_C0F069E:;
    if (!(((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) == 0x80))) goto L_C0F0894;
    v0_1 = gdFsReopenHn((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x14))), 0x0, 0x0, 0x0);
    v0_2 = (v0_1);
    if ((v0_1 != 0)) goto L_C0F06F0;
    goto L_C0F06BE;
    L_C0F0894:;
    R5 = (0xFFFFFFFB);
    goto L_C0F0896;
    L_C0F06BE:;
    R5 = (0xFFFFFFFE);
    goto L_C0F0896;
    L_C0F06F0:;
    *(unsigned int *)(((*(int *)((v0_0 + 0x0))) + 0x2C)) = 0x0;
    v0_3 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o4C_int *)((*(int *)(((*(int *)((v0_0 + 0x0))) + 0xC)))))->v))))(v0_5, R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    v0_1 = (0x0);
    v0_4 = (v0_3);
    if ((v0_3 == 0)) goto L_C0F074C;
    *(unsigned int *)((v0_2 + 0x3C)) = v0_4;
    (((struct o50_ushort *)(v0_2))->v) = v0_6;
    *(unsigned int *)(((*(int *)((v0_2 + 0x0))) + 0x1C)) = v0_2;
    v0_2 = gdFsWaitCompleteReq(v0_2, R5, R6, R7);
    v0_4 = (v0_2);
    if ((v0_2 != 0)) goto L_C0F074C;
    v0_2 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_2 + 0x2C)) = ((*(int *)((v0_2 + 0x2C))) | (((*(signed char *)(((*(int *)(((int)stk + 20))) + 0x0))) - 48) << 16));
    v0_2 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_2 + 0x2C)) = ((*(int *)((v0_2 + 0x2C))) | (((*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))) - 48) << 8));
    v0_2 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_2 + 0x2C)) = ((*(int *)((v0_2 + 0x2C))) | ((*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))) - 48));
    L_C0F074C:;
    v0_2 = (gdFsReadWG((*(int *)0xC15A270), 0x1, ((*(int *)((v0_0 + 0x0))) + 0x40))) == 0;
    if (!(v0_2)) goto L_C0F0886;
    v0_2 = (gdFsCheckMedia(((*(int *)((v0_0 + 0x0))) + 0x40))) != 0;
    if (v0_2) goto L_C0F0770;
    goto L_C0F0894;
    L_C0F0886:;
    R5 = (0xFFFFFFFC);
    goto L_C0F0896;
    L_C0F0770:;
    v0_2 = *(int *)((v0_0 + 0x0));
    *(int *)((int)stk + 0) = (0x4 + v0_2);
    *(unsigned int *)(((0x4 + v0_2) + 0x0)) = (gdFsGetLE4((((*(int *)((v0_0 + 0x0))) + 0x40) + 0x8C)));
    v0_2 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_2 + 0x4)) = ((*(int *)((v0_2 + 0x4))) + 0x96);
    v0_2 = *(int *)((v0_0 + 0x0));
    *(int *)((int)stk + 0) = (0x8 + v0_2);
    *(unsigned int *)(((0x8 + v0_2) + 0x0)) = (gdFsGetLE4((((*(int *)((v0_0 + 0x0))) + 0x40) + 0x84)));
    (((struct o18_uint *)0xC7FE6C0)->v) = 0xC7FE6C0;
    (((struct o0_ushort *)0xC7FE6C0)->v) = (*(signed char *)0x8C0080FC);
    v0_3 = (0x96);
    v0_2 = (0xC7FE6D8);
    v0_4 = (0x8C0080F0);
    if (((*(short *)((((((struct o18_int *)0xC7FE6C0)->v)) + 0x0))) != 1)) goto L_C0F07E4;
    *(unsigned short *)(((*(int *)((v0_2 + 0x0))) + 0x2)) = (*(signed char *)((v0_4 + 0xD)));
    *(unsigned int *)(((*(int *)((v0_2 + 0x0))) + 0x4)) = v0_1;
    v0_5 = v0_4;
    v0_4 = (v0_1);
    R5 = v0_5;
    R6 = (((*(int *)((v0_2 + 0x0))) + 0x8));
    L_C0F07CE:;
    if (((*(signed char *)((R5 + 0x0))) == 32)) goto L_C0F07E2;
    *(unsigned char *)((R6 + 0x0)) = (*(signed char *)((R5 + 0x0)));
    v0_5 = (int)(v0_4 + 0x1) < (int)0xC;
    v0_4 = ((v0_4 + 0x1));
    R5 = ((R5 + 0x1));
    R6 = ((R6 + 0x1));
    if (v0_5) goto L_C0F07CE;
    L_C0F07E2:;
    *(unsigned char *)((R6 + 0x0)) = v0_1;
    L_C0F07E4:;
    v0_4 = gdFsGetLE4((((*(int *)((v0_0 + 0x0))) + 0x40) + 0x9E));
    v0_5 = gdFsGetLE4((((*(int *)((v0_0 + 0x0))) + 0x40) + 0xA6));
    *(unsigned int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))) + 0x8)) = v0_1;
    v0_4 = gdFsGetDirEnt(((*(int *)((v0_0 + 0x0))) + 0x40), (v0_4 + v0_3), (*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))), v0_5);
    v0_3 = (v0_4);
    if ((v0_4 == -12)) goto L_C0F087E;
    if ((v0_3 != 0)) goto L_C0F0886;
    if (((*(int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))) + 0x0))) == 0)) goto L_C0F0894;
    v0_4 = *(int *)((v0_2 + 0x0));
    v0_3 = (v0_4);
    if (((*(short *)((v0_4 + 0x0))) != 1)) goto L_C0F08A0;
    v0_3 = (FUN_0c0f0cba((v0_3 + 0x8), (((int)stk + 4) + 0x14))) != 0;
    if (v0_3) goto L_C0F0886;
    v0_3 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((*(int *)((v0_2 + 0x0))) + 0x4)) = v0_3;
    v0_2 = gdFsGetDirEnt(((*(int *)((v0_0 + 0x0))) + 0x40), v0_3, (*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))), 0x1);
    v0_3 = (v0_2);
    if ((v0_2 != -12)) goto L_C0F0882;
    goto L_C0F087E;
    L_C0F0882:;
    if ((v0_3 == 0)) goto L_C0F088A;
    goto L_C0F0886;
    L_C0F088A:;
    if (((*(int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))) + 0x0))) != 0)) goto L_C0F089A;
    goto L_C0F0894;
    L_C0F089A:;
    FUN_0c0f059e((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))));
    L_C0F08A0:;
    (((struct o38_ushort *)((*(int *)((v0_0 + 0x0)))))->v) = 0x1;
    v0_4 = (v0_1);
    goto L_C0F08AA;
}

int FUN_0c0c2f50(int a4)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t5;
    register int t6;
    register int t10;
    register int t12;
    register int t14;
    register int t42;
    register int t59;
    register int t73;
    register int t75;
    register int t78;
    register int t85;
    register int t102;
    register int t116;
    register int t118;
    register int t121;
    int t2;
    register int t43;
    register int t44;
    register int t45;
    register int t46;
    int t47;
    register int t86;
    register int t87;
    register int t88;
    register int t89;
    int t90;

    t0 = *(int *)((a4 + 0x1C));
    t1 = FUN_0c0555c4();
    if ((t1 != 0) && (t2 = *(int *)((a4 + 0x1C)), t2 != 0)) {
        t5 = *(signed char *)((a4 + 0x8));
        if (t5 != 0) {
            if (t5 != 1) {
                if (t5 == 2) {
                    t6 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t6 - 1);
                    if ((short)(t6 - 1) == 0) {
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    }
                    t10 = (((struct o2E0_int *)(a4))->v);
                    (((struct o44_float *)(t10))->v) = (((((struct o44_float *)(t10))->v)) - 0.099999994f);
                    t12 = (((struct o2E0_int *)(a4))->v);
                    (((struct o48_float *)(t12))->v) = (((((struct o48_float *)(t12))->v)) - 0.099999994f);
                    t14 = (((struct o2E0_int *)(a4))->v);
                    (((struct o4C_float *)(t14))->v) = (((((struct o4C_float *)(t14))->v)) - 0.099999994f);
                    if (0.0f > ((((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                        (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                    }
                    if (0.0f > ((((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                        (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                    }
                    if (0.0f > ((((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                        (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                    }
                    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x200);
                    *(unsigned short *)(((int)stk + 0)) = ((((struct oEE_short *)(a4))->v));
                    (((struct o24_float *)(a4))->v) = ((FUN_0c0dfa50((*(short *)(((int)stk + 0))))) * 20.0f);
                    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
                    *(unsigned int *)((a4 + 0x30)) = (((*(int *)((a4 + 0x30))) + 0x1111) & 0xFFFF);
                    return 0x28;
                }
                return FUN_0c059330(a4);
            }
            t42 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t42 - 1);
            if (((short)(t42 - 1) != 0) && ((t43 = *(signed char *)((a4 + 0x108)), t43 == 0) && ((t44 = *(signed char *)((a4 + 0x2D8)), t44 == 0) && ((t45 = *(signed char *)((t0 + 0x71BA)), t45 == 11) && ((t46 = *(signed char *)((t0 + 0x9)), t46 != 2) && (t47 = *(signed char *)((t0 + 0xA)), (int)t47 < (int)0x2)))))) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0xA;
                (((struct o105_uchar *)(a4))->v) = 0x1;
                (((struct o106_uchar *)(a4))->v) = 0x1;
                (((struct o107_uchar *)(a4))->v) = 0x1;
                *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x21F;
                (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
                (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
                (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            }
            t59 = *(int *)((a4 + 0x30));
            *(unsigned int *)((a4 + 0x30)) = ((t59 + 0x222) & 0xFFFF);
            (((struct o38_float *)(a4))->v) = ((FUN_0c0dfa50(((t59 + 0x222) & 0xFFFF))) * 10.0f);
            (((struct o40_float *)(a4))->v) = ((FUN_0c0df4d0((*(int *)((a4 + 0x30))))) * 10.0f);
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x200);
            *(unsigned short *)(((int)stk + 0)) = ((((struct oEE_short *)(a4))->v));
            (((struct o24_float *)(a4))->v) = ((FUN_0c0dfa50((*(short *)(((int)stk + 0))))) * 20.0f);
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
            t73 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t73 + 0x14)) = ((*(int *)((t73 + 0x14))) + 0x1111);
            t75 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t75 + 0x14)) = ((*(int *)((t75 + 0x14))) & 0xFFFF);
            *(volatile short *)((a4 + 0xEC));
            t78 = FUN_0c0e6e5c();
            if (t78 != 0) {
                return t78;
            }
            return FUN_0c03c5c0(a4, 0x0);
        }
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x78;
        (((struct o38_float *)(a4))->v) = ((FUN_0c0dfa50((*(int *)((a4 + 0x30))))) * 8.0f);
        (((struct o40_float *)(a4))->v) = ((FUN_0c0df4d0((*(int *)((a4 + 0x30))))) * 8.0f);
        (((struct o3C_float *)(a4))->v) = ((((struct o24_float *)(a4))->v));
        t85 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t85 - 1);
        if (((short)(t85 - 1) != 0) && ((t86 = *(signed char *)((a4 + 0x108)), t86 == 0) && ((t87 = *(signed char *)((a4 + 0x2D8)), t87 == 0) && ((t88 = *(signed char *)((t0 + 0x71BA)), t88 == 11) && ((t89 = *(signed char *)((t0 + 0x9)), t89 != 2) && (t90 = *(signed char *)((t0 + 0xA)), (int)t90 < (int)0x2)))))) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0xA;
            (((struct o105_uchar *)(a4))->v) = 0x1;
            (((struct o106_uchar *)(a4))->v) = 0x1;
            (((struct o107_uchar *)(a4))->v) = 0x1;
            *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x21F;
            (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        }
        t102 = *(int *)((a4 + 0x30));
        *(unsigned int *)((a4 + 0x30)) = ((t102 + 0x222) & 0xFFFF);
        (((struct o38_float *)(a4))->v) = ((FUN_0c0dfa50(((t102 + 0x222) & 0xFFFF))) * 10.0f);
        (((struct o40_float *)(a4))->v) = ((FUN_0c0df4d0((*(int *)((a4 + 0x30))))) * 10.0f);
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x200);
        *(unsigned short *)(((int)stk + 0)) = ((((struct oEE_short *)(a4))->v));
        (((struct o24_float *)(a4))->v) = ((FUN_0c0dfa50((*(short *)(((int)stk + 0))))) * 20.0f);
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
        t116 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t116 + 0x14)) = ((*(int *)((t116 + 0x14))) + 0x1111);
        t118 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t118 + 0x14)) = ((*(int *)((t118 + 0x14))) & 0xFFFF);
        *(volatile short *)((a4 + 0xEC));
        t121 = FUN_0c0e6e5c();
        if (t121 != 0) {
            return t121;
        }
        return FUN_0c03c5c0(a4, 0x0);
    }
    return FUN_0c059330(a4);
}

int FUN_0c0f94a0(int a4, int a5, int a6, int a7, int a8)
{
    int stk[26];
    register int t11;
    register int t17;
    register int t18;
    register int t22;
    register int t24;
    register int t25;
    register int t26;
    register int t32;
    register int t33;
    register int t36;
    register int t37;
    register int t38;
    register int t39;
    register int t40;
    register int t56;
    register int t58;
    register int t60;
    register int t64;
    register int t68;
    register int t71;
    register int t75;
    register int t77;
    int t78;
    register int t88;
    register int t89;
    register int t90;
    register int t91;
    register int t54;

    stk[17] = a8;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a6;
    *(unsigned int *)(((int)stk + 24)) = a7;
    *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x0)) = ((((struct o0_int *)0xC15AA30)->v));
    *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x4)) = ((((struct o4_int *)0xC15AA30)->v));
    *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x8)) = ((((struct o8_int *)0xC15AA30)->v));
    *(unsigned int *)(((((int)stk + 16) + 0x14) + 0xC)) = ((((struct oC_int *)0xC15AA30)->v));
    (((struct o0_uint *)0xC803DCC)->v) = 0x1;
    if (((*(int *)0xC816FC8) & 64) != 0) {
        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x20);
    }
    (((struct o0_uint *)0xC803D78)->v) = a4;
    (((struct o4_uint *)0xC803D78)->v) = (*(int *)(((int)stk + 16)));
    (((struct o8_uint *)0xC803D78)->v) = (*(int *)(((int)stk + 20)));
    (((struct oC_uint *)0xC803D78)->v) = (*(int *)(((int)stk + 24)));
    (((struct o10_uint *)0xC803D78)->v) = a8;
    t11 = (((struct o0_int *)0xC3471D0)->v);
    if (t11 != 0x80000000) {
        return ((int (*)(int, int, int, int))(0xC0F9840))(0xC3471D0, 0x80000000, t11, a7);
    }
    *(int *)((int)stk + 12) = 0x0;
    *(unsigned int *)(((int)stk + 28)) = (FUN_0c0fa42e((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 24))), a8, 0x0));
    *(unsigned int *)((a4 + 0x10)) = ((((struct o10_int *)0xC817410)->v));
    (((struct o4_uint *)0xC3471D0)->v) = 0x0;
    t17 = 0xC803E60;
    t18 = 0x0;
    for (;;) {
        *(unsigned int *)((t17 + 0x0)) = 0x0;
        t18 = (t18 + 0x2);
        t17 = (t17 + 0x4);
        *(unsigned int *)((t17 + 0x0)) = 0x0;
        t17 = (t17 + 0x4);
        if ((unsigned int)t18 >= (unsigned int)0x4) {
            break;
        }
    }
    *(int *)((int)stk + 12) = 0x0;
    *(int *)((int)stk + 8) = 0x0;
    t22 = FUN_0c0fa540((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 24))), a8, 0x0, 0x0);
    *(unsigned int *)(((int)stk + 32)) = t22;
    FUN_0c0fa8c0(t22);
    t24 = *(int *)(((int)stk + 16));
    t25 = *(int *)(((int)stk + 20));
    t26 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((int)stk + 28)) = (((((*(int *)(((int)stk + 28))) << 2) << 1) + (((t24 + t25) + t26) + a8)) + 0xA0);
    *(unsigned int *)(((((int)stk + 16) + 0x24) + 0x0)) = (*(int *)(((int)stk + 16)));
    *(unsigned int *)(((((int)stk + 16) + 0x24) + 0x4)) = (*(int *)(((int)stk + 20)));
    *(unsigned int *)(((((int)stk + 16) + 0x24) + 0x8)) = (*(int *)(((int)stk + 24)));
    *(unsigned int *)(((((int)stk + 16) + 0x24) + 0xC)) = a8;
    t32 = *(int *)(((((int)stk + 16) + 0x24) + 0x0));
    t36 = t32;
    if (t32 != 0) {
        t33 = *(int *)(((((int)stk + 16) + 0x24) + 0x0));
        *(unsigned int *)(((((int)stk + 16) + 0x24) + 0x0)) = (t33 - 16);
        t36 = (t33 - 16);
    }
    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 16) + 0x24) + 0x4);
    t37 = a8;
    t38 = ((((int)stk + 16) + 0x24) + 0x4);
    t39 = ((((int)stk + 16) + 0x24) + 0x4);
    t40 = 0x1;
    for (;;) {
        if ((unsigned int)t40 >= (unsigned int)0x4) {
            break;
        }
        t36 = (*(int *)((t38 + 0x0)));
        t40 = (t40 + 0x1);
        if (t36 != 0) {
            t37 = (*(int *)((t39 + 0x0)));
            t37 = (t37 - 16);
            *(unsigned int *)((t39 + 0x0)) = t37;
        }
        t38 = (t38 + 0x4);
        t39 = (t39 + 0x4);
    }
    (((struct o4_uint *)0xC803D78)->v) = (*(int *)(((((int)stk + 16) + 0x24) + 0x0)));
    (((struct o8_uint *)0xC803D78)->v) = (*(int *)((((((int)stk + 16) + 0x24) + 0x4) + 0x0)));
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 16) + 0x24) + 0x8);
    (((struct oC_uint *)0xC803D78)->v) = (*(int *)((((((int)stk + 16) + 0x24) + 0x8) + 0x0)));
    (((struct o10_uint *)0xC803D78)->v) = (*(int *)((((((int)stk + 16) + 0x24) + 0xC) + 0x0)));
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((((int)stk + 16) + 0x24) + 0x0)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((((((int)stk + 16) + 0x24) + 0x4) + 0x0)));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((*(int *)(((int)stk + 20))) + 0x0)));
    t54 = (*(int *)((((((int)stk + 16) + 0x24) + 0xC) + 0x0)));
    *(unsigned int *)(((int)stk + 68)) = t54;
    t56 = 0x2;
    if ((*(int *)0xC8172FC) == 1) {
        t56 = 0x1;
    }
    t58 = t56;
    *(int *)((int)stk + 12) = t58;
    t60 = (*(int *)(((int)stk + 28)));
    *(int *)((int)stk + 8) = t60;
    *(int *)((int)stk + 4) = 0x0;
    t64 = FUN_0c0fa966((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 24))), (*(int *)(((int)stk + 20))), t54, 0x0, t60, t58);
    if (t64 != 0) {
        return t64;
    }
    FUN_0c0f7d04(0xFF, ((((struct o18_int *)0xC803D78)->v)), ((((struct o24_int *)0xC803D78)->v)));
    t68 = (((t24 + t25) + t26) + a8);
    if ((unsigned int)(((t24 + t25) + t26) + a8) < (unsigned int)0x10000) {
        t68 = 0x10000;
    }
    (((struct o4_uint *)0xC803DCC)->v) = ((t68 << 2) + ((((struct o10_int *)0xC803DCC)->v)));
    t71 = (((struct oC_int *)0xC803DCC)->v);
    if ((unsigned int)((((struct o4_int *)0xC803DCC)->v)) > (unsigned int)((-t71) + 0x200000)) {
        (((struct o4_uint *)0xC803DCC)->v) = ((-t71) + 0x200000);
    }
    t75 = FUN_0c109440(((((struct o4_int *)0xC803DCC)->v)), 0xC803E58, 0xC803E5C);
    if (t75 != 0) {
        return ((int (*)(void))(0xC0F985C))();
    }
    (((struct o0_uint *)0xC817410)->v) = ((((struct o4_int *)0xC803DCC)->v));
    *(int *)((int)stk + 12) = 0x0;
    t77 = (((struct o18_int *)0xC803D78)->v);
    t78 = *(int *)(((int)stk + 32));
    *(int *)((int)stk + 8) = ((~t77) & t78);
    *(volatile int *)0xC817038;
    *(volatile int *)0xC817034;
    *(volatile int *)0xC817030;
    *(volatile int *)0xC81702C;
    FUN_0c110c26(((~t77) & t78));
    (((struct o20_uint *)0xC803E0C)->v) = ((((struct o38_int *)0xC803DCC)->v));
    (((struct o24_uint *)0xC803E0C)->v) = ((((struct o3C_int *)0xC803DCC)->v));
    (((struct o28_uint *)0xC803E0C)->v) = ((((struct o0_int *)0xC803E0C)->v));
    (((struct o2C_uint *)0xC803E0C)->v) = ((((struct o4_int *)0xC803E0C)->v));
    t88 = 0x0;
    t89 = 0x0;
    for (;;) {
        t90 = *(int *)((0xC803E2C + t88));
        t91 = t88;
        t88 = (t88 + 0x4);
        *(unsigned int *)((0xC803E40 + t91)) = t90;
        t89 = (t89 + 0x2);
        *(unsigned int *)((0xC803E40 + t88)) = (*(int *)((0xC803E2C + t88)));
        t88 = (t88 + 0x4);
        if ((unsigned int)t89 >= (unsigned int)0x4) {
            break;
        }
    }
    (((struct o14_uint *)0xC803DCC)->v) = 0x0;
    (((struct o18_uint *)0xC803DCC)->v) = 0x0;
    (((struct o1C_uint *)0xC803DCC)->v) = 0x0;
    (((struct o20_uint *)0xC803DCC)->v) = 0x0;
    (((struct o24_uint *)0xC803DCC)->v) = 0xC803E04;
    (((struct o28_uint *)0xC803DCC)->v) = 0xC803E2C;
    if ((unsigned int)0x0 < (unsigned int)t56) {
        return 0xC803DFC;
    }
    return ((int (*)(int, int, int, int))(0xC0F9784))(0x0, t89, 0xC803E04, 0xC803E40);
}
