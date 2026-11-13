/* Straight-line functions with calls and guards (batch gen_hk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10B_uchar { char p[0x10B]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o38E0_uchar { char p[0x38E0]; unsigned char v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71E4_float { char p[0x71E4]; float v; };
struct o71E8_float { char p[0x71E8]; float v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o720A_uchar { char p[0x720A]; unsigned char v; };
struct o7216_uchar { char p[0x7216]; unsigned char v; };
struct o721A_uchar { char p[0x721A]; unsigned char v; };
struct o7243_uchar { char p[0x7243]; unsigned char v; };
struct o7254_float { char p[0x7254]; float v; };
struct o72A4_short { char p[0x72A4]; short v; };
struct o72A4_ushort { char p[0x72A4]; unsigned short v; };
struct o72AC_uchar { char p[0x72AC]; unsigned char v; };
struct o94_uchar { char p[0x94]; unsigned char v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
int FUN_0c039090(int);
int FUN_0c03af38(int, int);
int FUN_0c03b384(int, int);
int FUN_0c0496f0(int, int, int, int, int, int, int, int, int);
int FUN_0c0555dc(void);
int FUN_0c08e4bc(int);
int FUN_0c08e57e(int);
int FUN_0c08e704(int);
int FUN_0c08e8d6(int);
int FUN_0c08e980(int);
int FUN_0c08ed08(int);
int FUN_0c08eef4(int);
int FUN_0c091eee(int, int, int, int);
int FUN_0c091f0a(int);
int FUN_0c092814(int, int, int, int);
int FUN_0c098c82(void);
int FUN_0c099b60(int);
int FUN_0c09a7ba(int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09c3f8(int, int);
int FUN_0c09c4c0(int);
int FUN_0c09c894(int);
int FUN_0c09d544(int, int, float);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09da1c(int);
int FUN_0c09db78(int);
extern int FUN_0c0a2080();
int FUN_0c0a2712(int, int);
int FUN_0c0c08a4(int, int, int);
int FUN_0c0c0c70(int);
int FUN_0c0c1360(int);
int FUN_0c0d905e(void);
int FUN_0c0dab92(int, int);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c0e6d00(void);
int FUN_0c0e6fe8(int);
int FUN_0c0ebe90(int, int, int, int);
int FUN_0c0ec09a(int, int, int);
int FUN_0c0ec0f2(int);
int FUN_0c0ec102(int);
int FUN_0c0eda64(int, int, int, int);
int strlen(int);
int FUN_0c07eb60(int a4);
int FUN_0c0eb758(int a4, int a5, int a6, int a7, int a8);
int FUN_0c08ed56(int a4, int a5, int a6, int a7);

int FUN_0c07eb60(int a4)
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
                                    return ((int (*)(int))(FUN_0c0a2080))(a4);
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
                                        return FUN_0c0a2712(a4, 0x3);
                                    }
                                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                                    if ((*(signed char *)((a4 + 0xB))) == 0) {
                                        FUN_0c09a910(a4);
                                        t5 = FUN_0c0555dc();
                                        if ((t5 == 0) && ((t6 = *(int *)((a4 + 0x1C)), t7 = *(signed char *)((t6 + 0x4)), t7 != 10) && (t8 = *(signed char *)((a4 + 0x108)), t8 != 0))) {
                                            t9 = FUN_0c09c894(a4);
                                            if ((signed char)t9 != 0) {
                                                t10 = *(signed char *)((a4 + 0xA));
                                                *(unsigned char *)((a4 + 0xA)) = (t10 + 0x1);
                                                return (t10 + 0x1);
                                            }
                                            t11 = FUN_0c09d544(a4, (0x7254 + a4), 60.0f);
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
                                            t39 = FUN_0c09d544(a4, (0x7254 + a4), 60.0f);
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
                                            FUN_0c09a808(a4, 0x0, 0x1A);
                                            (((struct o44_float *)(a4))->v) = ((-((((struct o38_float *)(a4))->v))) / 40.0f);
                                            (((struct o48_float *)(a4))->v) = ((((struct o71E4_float *)(a4))->v));
                                            (((struct o4C_float *)(a4))->v) = ((-((((struct o40_float *)(a4))->v))) / 40.0f);
                                        }
                                        return FUN_0c09d990(a4);
                                    }
                                    FUN_0c09d9bc(a4);
                                    t68 = FUN_0c09a910(a4);
                                    if ((signed char)t68 != 0) {
                                        t69 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0a2080))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 24), *(int *)((int)stk + 24 + 4), *(int *)((int)stk + 24 + 8), *(int *)((int)stk + 24 + 12), *(int *)((int)stk + 24 + 16), *(int *)((int)stk + 24 + 20), *(int *)((int)stk + 24 + 24), *(int *)((int)stk + 24 + 28));
                                    }
                                    return FUN_0c09d990(a4);
                                }
                                *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
                                FUN_0c09a808(a4, 0x1, 0x69);
                                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                                *(unsigned char *)((a4 + 0xB)) = 0x0;
                                (((struct oEC_ushort *)(a4))->v) = 0x0;
                                (((struct o38_float *)(a4))->v) = ((FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 30.0f);
                                (((struct o3C_float *)(a4))->v) = 0.0f;
                                (((struct o40_float *)(a4))->v) = ((FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 30.0f);
                                (((struct o44_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) / 30.0f);
                                (((struct o48_float *)(a4))->v) = 0.0f;
                                (((struct o4C_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) / 30.0f);
                                (((struct o7243_uchar *)(a4))->v) = 0x4;
                                FUN_0c039090(a4);
                                return FUN_0c09c4c0(a4);
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
                                            FUN_0c0c0c70(a4);
                                        }
                                    }
                                } else {
                                    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x3) {
                                        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                                        (((struct o38E0_uchar *)(a4))->v) = 0x0;
                                        FUN_0c03b384(a4, 0x1C);
                                    }
                                }
                                FUN_0c09a910(a4);
                                FUN_0c09da1c(a4);
                                if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x5A) {
                                    (((struct o3C_float *)(a4))->v) = 0.0f;
                                    return ((int (*)(int))(FUN_0c0a2080))(a4);
                                }
                                return 0xEC;
                            }
                            FUN_0c09a808(a4, 0x1, 0x68);
                            (((struct o71A9_uchar *)(a4))->v) = 0x1;
                            (((struct o71A8_uchar *)(a4))->v) = 0x1;
                            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                            *(unsigned char *)((a4 + 0xB)) = 0x0;
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                            *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
                            *(int *)((int)stk + 16) = 0xC337400;
                            *(int *)((int)stk + 12) = 0xC3373F4;
                            *(int *)((int)stk + 8) = 0x52;
                            *(int *)((int)stk + 4) = 0x1E;
                            *(int *)((int)stk + 0) = 0x16;
                            t117 = *(signed char *)((a4 + 0x3));
                            (((struct o14_uchar *)(((int)stk + 0)))->v) = t117;
                            FUN_0c0496f0((*(signed char *)(((int)stk + 20))), 0x0, 0x7, ((signed char)((((t117 << 1) + t117) << 2) << 1) + 0xC6002D0), 0x16, 0x1E, 0x52, 0xC3373F4, 0xC337400);
                            return FUN_0c09c4c0(a4);
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
                                return FUN_0c0a2712(a4, 0x3);
                            }
                            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                            if ((*(signed char *)((a4 + 0xB))) == 0) {
                                FUN_0c09a910(a4);
                                t126 = FUN_0c0555dc();
                                if ((t126 == 0) && ((t127 = *(int *)((a4 + 0x1C)), t128 = *(signed char *)((t127 + 0x4)), t128 != 10) && (t129 = *(signed char *)((a4 + 0x108)), t129 != 0))) {
                                    t130 = FUN_0c09c894(a4);
                                    if ((signed char)t130 != 0) {
                                        t131 = *(signed char *)((a4 + 0xA));
                                        *(unsigned char *)((a4 + 0xA)) = (t131 + 0x1);
                                        return (t131 + 0x1);
                                    }
                                    t132 = FUN_0c09d544(a4, (0x7254 + a4), 60.0f);
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
                                    t160 = FUN_0c09d544(a4, (0x7254 + a4), 60.0f);
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
                                    FUN_0c09a808(a4, 0x0, 0x1A);
                                    (((struct o44_float *)(a4))->v) = ((-((((struct o38_float *)(a4))->v))) / 40.0f);
                                    (((struct o48_float *)(a4))->v) = ((((struct o71E4_float *)(a4))->v));
                                    (((struct o4C_float *)(a4))->v) = ((-((((struct o40_float *)(a4))->v))) / 40.0f);
                                }
                                return FUN_0c09d990(a4);
                            }
                            FUN_0c09d9bc(a4);
                            t189 = FUN_0c09a910(a4);
                            if ((signed char)t189 != 0) {
                                t190 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0a2080))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 24), *(int *)((int)stk + 24 + 4), *(int *)((int)stk + 24 + 8), *(int *)((int)stk + 24 + 12), *(int *)((int)stk + 24 + 16), *(int *)((int)stk + 24 + 20), *(int *)((int)stk + 24 + 24), *(int *)((int)stk + 24 + 28));
                            }
                            return FUN_0c09d990(a4);
                        }
                        *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
                        FUN_0c09a808(a4, 0x1, 0x69);
                        (((struct o71A9_uchar *)(a4))->v) = 0x1;
                        (((struct o71A8_uchar *)(a4))->v) = 0x1;
                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                        *(unsigned char *)((a4 + 0xB)) = 0x0;
                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                        (((struct o38_float *)(a4))->v) = ((FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 30.0f);
                        (((struct o3C_float *)(a4))->v) = 0.0f;
                        (((struct o40_float *)(a4))->v) = ((FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 30.0f);
                        (((struct o44_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) / 30.0f);
                        (((struct o48_float *)(a4))->v) = 0.0f;
                        (((struct o4C_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) / 30.0f);
                        (((struct o7243_uchar *)(a4))->v) = 0x4;
                        FUN_0c039090(a4);
                        return FUN_0c09c4c0(a4);
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
                                    FUN_0c0c0c70(a4);
                                }
                            }
                        } else {
                            if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x3) {
                                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                (((struct oEC_ushort *)(a4))->v) = 0x0;
                                (((struct o38E0_uchar *)(a4))->v) = 0x0;
                                FUN_0c03b384(a4, 0x1D);
                            }
                        }
                        FUN_0c09a910(a4);
                        FUN_0c09da1c(a4);
                        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x5A) {
                            return ((int (*)(int))(FUN_0c0a2080))(a4);
                        }
                        return 0xEC;
                    }
                    FUN_0c09a808(a4, 0x1, 0x67);
                    (((struct o71A9_uchar *)(a4))->v) = 0x1;
                    (((struct o71A8_uchar *)(a4))->v) = 0x1;
                    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                    *(unsigned char *)((a4 + 0xB)) = 0x0;
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                    *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
                    *(int *)((int)stk + 16) = 0xC337400;
                    *(int *)((int)stk + 12) = 0xC3373F4;
                    *(int *)((int)stk + 8) = 0x52;
                    *(int *)((int)stk + 4) = 0x1E;
                    *(int *)((int)stk + 0) = 0x16;
                    t238 = *(signed char *)((a4 + 0x3));
                    (((struct o14_uchar *)(((int)stk + 0)))->v) = t238;
                    FUN_0c0496f0((*(signed char *)(((int)stk + 20))), 0x0, 0x7, ((signed char)((((t238 << 1) + t238) << 2) << 1) + 0xC6002D0), 0x16, 0x1E, 0x52, 0xC3373F4, 0xC337400);
                    return FUN_0c09c4c0(a4);
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
                                    t244 = FUN_0c09a910(a4);
                                    if ((signed char)t244 != 0) {
                                        t245 = *(int *)(((int)stk + 24));
                                        return ((int (*)(int))(FUN_0c0a2080))(t245);
                                    }
                                    return (signed char)t244;
                                }
                                t247 = (((struct oEC_short *)(a4))->v);
                                u248 = (float)(t247 * t247);
                                *(unsigned int *)((a4 + 0x30)) = ((int)((((struct o44_float *)(a4))->v)) - (((int)((((u248 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF) << 2));
                                t250 = (((struct oEC_short *)(a4))->v);
                                (((struct oEC_ushort *)(a4))->v) = (t250 - 1);
                                if ((int)(short)(t250 - 1) < 0) {
                                    return ((int (*)(int, int))(FUN_0c0a2080))(a4, t247);
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
                                FUN_0c03af38((a4 + 0x20), (*(signed char *)((a4 + 0x3))));
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
                    t289 = FUN_0c09a910(a4);
                    t292 = (signed char)t289;
                    if ((signed char)t289 != 0) {
                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                        (((struct o44_float *)(a4))->v) = (float)(*(int *)((a4 + 0x30)));
                        t292 = 0x44;
                    }
                    return t292;
                }
                FUN_0c09a808(a4, 0x1, 0x61);
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
                        FUN_0c09a910(a4);
                        FUN_0c09da1c(a4);
                        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                        t306 = *(signed char *)((a4 + 0xB));
                        if (t306 != 0) {
                            if (t306 != 1) {
                                if (t306 != 2) {
                                    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                        (((struct o3C_float *)(a4))->v) = 0.0f;
                                        return ((int (*)(int))(FUN_0c0a2080))(a4);
                                    }
                                    return 0x71AA;
                                }
                                t324 = 0xEC;
                                if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x5) {
                                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                                    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                                    *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
                                    FUN_0c0c08a4(a4, ((((struct oEE_short *)(a4))->v)), 0x1);
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
                                *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
                                return FUN_0c0c08a4(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
                            }
                            return 0xEC;
                        }
                        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x3) {
                            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                            (((struct o38E0_uchar *)(a4))->v) = 0x0;
                            return FUN_0c03b384(a4, 0xF);
                        }
                        return 0xEC;
                    }
                    *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
                    FUN_0c09a808(a4, 0x1, 0x65);
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
                FUN_0c09a910(a4);
                FUN_0c09da1c(a4);
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
                                    return ((int (*)(int))(FUN_0c0a2080))(a4);
                                }
                                return 0x71AA;
                            }
                            t370 = 0xEC;
                            if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x5) {
                                (((struct oEC_ushort *)(a4))->v) = 0x0;
                                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                                *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
                                FUN_0c0c08a4(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
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
                            *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
                            return FUN_0c0c08a4(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
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
                                    return ((int (*)(int))(FUN_0c0a2080))(a4);
                                }
                                return 0x71AA;
                            }
                            t399 = 0xEC;
                            if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x5) {
                                (((struct oEC_ushort *)(a4))->v) = 0x0;
                                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                                *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
                                FUN_0c0c08a4(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
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
                            *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
                            return FUN_0c0c08a4(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
                        }
                        return 0xEC;
                    }
                }
                if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x3) {
                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                    (((struct o38E0_uchar *)(a4))->v) = 0x0;
                    return FUN_0c03b384(a4, 0xF);
                }
                return 0xEC;
            }
            FUN_0c09a808(a4, 0x1, 0x65);
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
                            t420 = FUN_0c09a910(a4);
                            if ((signed char)t420 != 0) {
                                t421 = *(int *)(((int)stk + 24));
                                return ((int (*)(int))(FUN_0c0a2080))(t421);
                            }
                            return (signed char)t420;
                        }
                        t423 = (((struct oEC_short *)(a4))->v);
                        u424 = (float)(t423 * t423);
                        *(unsigned int *)((a4 + 0x30)) = ((int)((((struct o44_float *)(a4))->v)) - (((int)((((u424 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF) << 2));
                        t426 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t426 - 1);
                        if ((int)(short)(t426 - 1) < 0) {
                            return ((int (*)(int, int))(FUN_0c0a2080))(a4, t423);
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
                        FUN_0c03af38((a4 + 0x20), (*(signed char *)((a4 + 0x3))));
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
            t465 = FUN_0c09a910(a4);
            t468 = (signed char)t465;
            if ((signed char)t465 != 0) {
                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x0;
                (((struct o44_float *)(a4))->v) = (float)(*(int *)((a4 + 0x30)));
                t468 = 0x44;
            }
            return t468;
        }
        FUN_0c09a808(a4, 0x1, 0x61);
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
                FUN_0c09a910(a4);
                FUN_0c09da1c(a4);
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                t482 = *(signed char *)((a4 + 0xB));
                if (t482 != 0) {
                    if (t482 != 1) {
                        if (t482 != 2) {
                            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                return ((int (*)(int))(FUN_0c0a2080))(a4);
                            }
                            return 0x71AA;
                        }
                        t500 = 0xEC;
                        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x5) {
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                            *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
                            FUN_0c0c08a4(a4, ((((struct oEE_short *)(a4))->v)), 0x1);
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
                        *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
                        return FUN_0c0c08a4(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
                    }
                    return 0xEC;
                }
                if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x3) {
                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                    (((struct o38E0_uchar *)(a4))->v) = 0x0;
                    return FUN_0c03b384(a4, 0xB);
                }
                return 0xEC;
            }
            *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
            FUN_0c09a808(a4, 0x1, 0x63);
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
        FUN_0c09a910(a4);
        FUN_0c09da1c(a4);
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
                            return ((int (*)(int))(FUN_0c0a2080))(a4);
                        }
                        return 0x71AA;
                    }
                    t546 = 0xEC;
                    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x5) {
                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                        *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
                        FUN_0c0c08a4(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
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
                    *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
                    return FUN_0c0c08a4(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
                }
                return 0xEC;
            }
        } else {
            t557 = *(signed char *)((a4 + 0xB));
            if (t557 != 0) {
                if (t557 != 1) {
                    if (t557 != 2) {
                        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                            return ((int (*)(int))(FUN_0c0a2080))(a4);
                        }
                        return 0x71AA;
                    }
                    t575 = 0xEC;
                    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x5) {
                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                        *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
                        FUN_0c0c08a4(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
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
                    *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
                    return FUN_0c0c08a4(a4, ((((struct oEE_short *)(a4))->v)), 0x0);
                }
                return 0xEC;
            }
        }
        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x3) {
            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            (((struct o38E0_uchar *)(a4))->v) = 0x0;
            return FUN_0c03b384(a4, 0xB);
        }
        return 0xEC;
    }
    *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
    FUN_0c09a808(a4, 0x1, 0x63);
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

int FUN_0c0eb758(int a4, int a5, int a6, int a7, int a8)
{
    int stk[62];
    int t9;

    int R7;
    int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    stk[53] = a8;
    v0_6 = a4;
    v0_7 = a5;
    v0_4 = a6;
    R7 = a7;
    (((struct oC0_uint *)(((int)stk + 4)))->v) = 0x0;
    *(unsigned int *)(((0xC0 + ((int)stk + 4)) + 0x4)) = 0x0;
    *(unsigned int *)(((0xC0 + ((int)stk + 4)) + 0x8)) = 0x0;
    (((struct o94_uchar *)(((int)stk + 4)))->v) = 0x0;
    *(unsigned char *)(((0x94 + ((int)stk + 4)) + 0x1)) = 0x0;
    *(unsigned short *)(((0x94 + ((int)stk + 4)) + 0x2)) = 0x0;
    *(unsigned int *)(((0x94 + ((int)stk + 4)) + 0x4)) = 0x0;
    *(unsigned int *)(((0x94 + ((int)stk + 4)) + 0x8)) = 0x0;
    *(unsigned int *)(((0x94 + ((int)stk + 4)) + 0x10)) = 0x0;
    *(unsigned int *)(((0x94 + ((int)stk + 4)) + 0x14)) = 0x0;
    *(unsigned int *)(((0x94 + ((int)stk + 4)) + 0x18)) = 0x0;
    *(unsigned int *)(((0x94 + ((int)stk + 4)) + 0x1C)) = 0x0;
    *(unsigned int *)(((0x94 + ((int)stk + 4)) + 0x20)) = 0x0;
    *(unsigned int *)(((0x94 + ((int)stk + 4)) + 0x24)) = 0x0;
    *(unsigned int *)(((0x94 + ((int)stk + 4)) + 0x28)) = 0x0;
    v0_0 = ((0xC0 + ((int)stk + 4)));
    v0_1 = (0x0);
    v0_2 = (R7);
    v0_3 = ((0x94 + ((int)stk + 4)));
    if ((v0_6 != 0)) goto L_C0EB7D2;
    if ((v0_4 != 0)) goto L_C0EB7A8;
    *(unsigned int *)0xC7FD4D0 = 0x452;
    L_C0EB7E6:;
    v0_6 = (0xFFFFFFFF);
    L_C0EBE78:;
    return v0_6;
    L_C0EB7A8:;
    if ((((*(signed char *)((v0_4 + 0x10))) & 7) != 0)) goto L_C0EB7B8;
    *(unsigned int *)0xC7FD4D0 = 0x514;
    goto L_C0EB7E6;
    L_C0EB7B8:;
    t9 = *(signed char *)((v0_4 + 0x10));
    R7 = (t9);
    if (((0x4 & t9) != 0)) goto L_C0EB7D0;
    if (((0x1 & R7) == 0)) goto L_C0EB7D0;
    *(unsigned int *)0xC7FD4D0 = 0x516;
    goto L_C0EB7E6;
    L_C0EB7D0:;
    *(unsigned int *)((v0_0 + 0xC)) = v0_7;
    L_C0EB7D2:;
    *(unsigned int *)((v0_0 + 0x0)) = v0_6;
    *(unsigned int *)((v0_0 + 0x4)) = v0_4;
    *(unsigned int *)((v0_0 + 0x8)) = v0_1;
    *(unsigned char *)((v0_3 + 0x0)) = v0_1;
    *(unsigned char *)(((int)stk + 12)) = 0x30;
    v0_4 = (FUN_0c0ec102(v0_0)) == 0;
    if (v0_4) goto L_C0EB7EA;
    goto L_C0EB7E6;
    L_C0EB7EA:;
    *(unsigned int *)(((int)stk + 20)) = (((int)stk + 4) + 0x14);
    R13 = (0x3);
    v0_4 = (0x518);
    v0_5 = ((((int)stk + 4) + 0x14));
    L_C0EBE5A:;
    if (((*(signed char *)((v0_2 + 0x0))) == 0)) goto L_C0EBE72;
    v0_6 = (FUN_0c0ec102(v0_0)) != 0;
    if (v0_6) goto L_C0EBE72;
    if ((((*(signed char *)((v0_3 + 0x0))) & 1) != 0)) goto L_C0EBE72;
    if (((*(signed char *)((v0_2 + 0x0))) == 37)) goto L_C0EB802;
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    L_C0EBE40:;
    v0_7 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x0));
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C0EBE4E;
    if (!((v0_6 != 37))) goto L_C0EBE4E;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    goto L_C0EBE40;
    L_C0EBE4E:;
    FUN_0c0ec09a(v0_2, ((*(int *)(((int)stk + 4))) - v0_2), v0_0);
    v0_2 = ((*(int *)(((int)stk + 4))));
    goto L_C0EBE5A;
    L_C0EB802:;
    *(unsigned char *)((v0_3 + 0x0)) = v0_1;
    *(unsigned int *)((v0_3 + 0x10)) = v0_5;
    *(unsigned int *)((v0_3 + 0x14)) = v0_5;
    *(unsigned int *)((v0_3 + 0x18)) = v0_1;
    *(unsigned int *)((v0_3 + 0x1C)) = v0_1;
    *(unsigned int *)((v0_3 + 0x20)) = v0_1;
    *(unsigned int *)((v0_3 + 0x24)) = v0_1;
    *(unsigned int *)((v0_3 + 0x28)) = v0_1;
    v0_2 = ((v0_2 + 0x1));
    L_C0EB85C:;
    v0_7 = *(signed char *)((v0_2 + 0x0));
    v0_6 = (v0_7);
    if ((v0_7 == 45)) goto L_C0EB816;
    if ((v0_6 == 43)) goto L_C0EB816;
    if ((v0_6 == 32)) goto L_C0EB816;
    if ((v0_6 == 35)) goto L_C0EB816;
    *(unsigned char *)((v0_3 + 0x1)) = 0x20;
    if (((*(signed char *)((v0_2 + 0x0))) != 48)) goto L_C0EB886;
    *(unsigned char *)((v0_3 + 0x1)) = 0x30;
    v0_2 = ((v0_2 + 0x1));
    L_C0EB886:;
    *(unsigned int *)((v0_3 + 0x4)) = v0_1;
    if (((*(signed char *)((v0_2 + 0x0))) != 42)) goto L_C0EB8E4;
    v0_6 = ((a8 + 0x4));
    if ((((a8 + 0x4) & R13) == 0)) goto L_C0EB8A2;
    v0_9 = ((a8 + 0x8));
    L_C0EB8A4:;
    v0_7 = v0_9;
    *(unsigned int *)(((int)stk + 212)) = v0_7;
    v0_7 = ((v0_9 - 4));
    if ((((v0_9 - 4) & R13) == 0)) goto L_C0EB8B8;
    v0_8 = ((v0_9 - 8));
    L_C0EB8BA:;
    v0_7 = *(int *)((v0_8 + 0x0));
    *(unsigned int *)((v0_3 + 0x4)) = v0_7;
    if (((int)v0_7 >= 0)) goto L_C0EB8D0;
    *(unsigned char *)((v0_3 + 0x0)) = ((*(signed char *)((v0_3 + 0x0))) | 0x2);
    *(unsigned int *)((v0_3 + 0x4)) = (-(*(int *)((v0_3 + 0x4))));
    L_C0EB8D0:;
    v0_2 = ((v0_2 + 0x1));
    if (((int)(*(int *)((v0_3 + 0x4))) <= (int)0x200)) goto L_C0EB8E4;
    *(unsigned char *)((v0_3 + 0x0)) = ((*(signed char *)((v0_3 + 0x0))) | 0x1);
    *(unsigned int *)0xC7FD4D0 = v0_4;
    L_C0EB8E4:;
    if ((((unsigned char)(*(signed char *)((0xC159D08 + (unsigned char)(*(signed char *)((v0_2 + 0x0)))))) & 4) == 0)) goto L_C0EB944;
    *(unsigned int *)((v0_3 + 0x4)) = v0_1;
    L_C0EB936:;
    if (!((((unsigned char)(*(signed char *)((0xC159D08 + (unsigned char)(*(signed char *)((v0_2 + 0x0)))))) & 4) != 0))) goto L_C0EB944;
    *(volatile signed char *)((v0_2 + 0x0));
    v0_7 = (int)(FUN_0c0e6d00()) < (int)(*(int *)((v0_3 + 0x4)));
    v0_2 = ((v0_2 + 0x1));
    if (v0_7) goto L_C0EB92C;
    v0_7 = *(int *)((v0_3 + 0x4));
    *(unsigned int *)((v0_3 + 0x4)) = ((((v0_7 << 2) + v0_7) << 1) + v0_6);
    goto L_C0EB936;
    L_C0EB944:;
    *(unsigned int *)((v0_3 + 0x8)) = 0xFFFFFFFF;
    if (((*(signed char *)((v0_2 + 0x0))) != 46)) goto L_C0EBA04;
    v0_7 = (*(signed char *)(((v0_2 + 0x1) + 0x0))) != 42;
    v0_2 = ((v0_2 + 0x1));
    if (v0_7) goto L_C0EB9A4;
    v0_6 = ((a8 + 0x4));
    if ((((a8 + 0x4) & R13) == 0)) goto L_C0EB96A;
    v0_9 = ((a8 + 0x8));
    L_C0EB96C:;
    v0_7 = v0_9;
    *(unsigned int *)(((int)stk + 212)) = v0_7;
    v0_7 = ((v0_9 - 4));
    if ((((v0_9 - 4) & R13) == 0)) goto L_C0EB980;
    v0_8 = ((v0_9 - 8));
    L_C0EB982:;
    v0_7 = *(int *)((v0_8 + 0x0));
    *(unsigned int *)((v0_3 + 0x8)) = v0_7;
    if (((int)v0_7 >= 0)) goto L_C0EB990;
    *(unsigned int *)((v0_3 + 0x8)) = 0xFFFFFFFF;
    L_C0EB990:;
    v0_2 = ((v0_2 + 0x1));
    if (((int)(*(int *)((v0_3 + 0x8))) <= (int)0x200)) goto L_C0EB9A4;
    *(unsigned char *)((v0_3 + 0x0)) = ((*(signed char *)((v0_3 + 0x0))) | 0x1);
    *(unsigned int *)0xC7FD4D0 = v0_4;
    L_C0EB9A4:;
    if ((((unsigned char)(*(signed char *)((0xC159D08 + (unsigned char)(*(signed char *)((v0_2 + 0x0)))))) & 4) == 0)) goto L_C0EBA04;
    *(unsigned int *)((v0_3 + 0x8)) = v0_1;
    L_C0EB9F6:;
    if (!((((unsigned char)(*(signed char *)((0xC159D08 + (unsigned char)(*(signed char *)((v0_2 + 0x0)))))) & 4) != 0))) goto L_C0EBA04;
    *(volatile signed char *)((v0_2 + 0x0));
    v0_7 = (int)(FUN_0c0e6d00()) < (int)(*(int *)((v0_3 + 0x8)));
    v0_2 = ((v0_2 + 0x1));
    if (v0_7) goto L_C0EB9EC;
    v0_7 = *(int *)((v0_3 + 0x8));
    *(unsigned int *)((v0_3 + 0x8)) = ((((v0_7 << 2) + v0_7) << 1) + v0_6);
    goto L_C0EB9F6;
    L_C0EBA04:;
    *(unsigned int *)((v0_3 + 0xC)) = 0x20;
    v0_7 = *(signed char *)((v0_2 + 0x0));
    v0_6 = (v0_7);
    if ((v0_7 == 104)) goto L_C0EBA1C;
    if ((v0_6 == 108)) goto L_C0EBA1C;
    if ((v0_6 != 76)) goto L_C0EBA20;
    L_C0EBA1C:;
    *(unsigned int *)((v0_3 + 0xC)) = (*(signed char *)((v0_2 + 0x0)));
    v0_2 = ((v0_2 + 0x1));
    L_C0EBA20:;
    v0_7 = *(signed char *)((v0_2 + 0x0));
    v0_6 = (v0_7);
    if ((v0_7 != 37)) goto L_C0EBA2A;
    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x0)) = 0x25;
    L_C0EBD0E:;
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    *(unsigned int *)(((int)stk + 16)) = 0x1;
    *(unsigned int *)((v0_3 + 0x14)) = v0_5;
    *(unsigned int *)((v0_3 + 0x20)) = v0_1;
    *(unsigned int *)((v0_3 + 0x28)) = ((*(int *)((v0_3 + 0x4))) - 1);
    L_C0EBD2A:;
    if (!(((*(signed char *)((v0_2 + 0x0))) != 110))) goto L_C0EBE32;
    if ((((*(signed char *)((v0_3 + 0x0))) & 1) != 0)) goto L_C0EBE32;
    if ((((*(signed char *)((v0_3 + 0x0))) & 2) != 0)) goto L_C0EBD60;
    if (((int)(*(int *)((v0_3 + 0x28))) <= 0)) goto L_C0EBD60;
    goto L_C0EBD5A;
    L_C0EBE32:;
    v0_2 = ((v0_2 + 0x1));
    goto L_C0EBE5A;
    L_C0EBD5A:;
    if (!(((int)(*(int *)((v0_3 + 0x28))) > 0))) goto L_C0EBD60;
    FUN_0c0ec09a((v0_3 + 0x1), 0x1, v0_0);
    *(unsigned int *)((v0_3 + 0x28)) = ((*(int *)((v0_3 + 0x28))) - 1);
    goto L_C0EBD5A;
    L_C0EBD60:;
    if (((*(int *)((v0_3 + 0x1C))) != 0)) goto L_C0EBD7E;
    if (((*(int *)((v0_3 + 0x20))) != 0)) goto L_C0EBD7E;
    if (((*(int *)((v0_3 + 0x24))) != 0)) goto L_C0EBD7E;
    FUN_0c0ec09a((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 16))), v0_0);
    L_C0EBE0C:;
    if ((((*(signed char *)((v0_3 + 0x0))) & 2) == 0)) goto L_C0EBE32;
    if (((int)(*(int *)((v0_3 + 0x28))) <= 0)) goto L_C0EBE32;
    L_C0EBE2C:;
    if (((int)(*(int *)((v0_3 + 0x28))) > 0)) goto L_C0EBE1C;
    goto L_C0EBE32;
    L_C0EBE1C:;
    FUN_0c0ec09a((v0_3 + 0x1), 0x1, v0_0);
    *(unsigned int *)((v0_3 + 0x28)) = ((*(int *)((v0_3 + 0x28))) - 1);
    goto L_C0EBE2C;
    L_C0EBD7E:;
    v0_6 = *(int *)((v0_3 + 0x10));
    v0_9 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 4)) = (v0_6 - v0_9);
    v0_8 = (v0_9);
    v0_7 = ((v0_6 - v0_9));
    if (((int)(v0_6 - v0_9) <= 0)) goto L_C0EBDB0;
    FUN_0c0ec09a(v0_8, v0_7, v0_0);
    L_C0EBDB0:;
    if (((int)(*(int *)((v0_3 + 0x1C))) > 0)) goto L_C0EBDA0;
    v0_6 = *(int *)((v0_3 + 0x14));
    v0_8 = *(int *)((v0_3 + 0x10));
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + (v0_6 - v0_8));
    v0_7 = ((v0_6 - v0_8));
    if (((int)(v0_6 - v0_8) <= 0)) goto L_C0EBDE0;
    FUN_0c0ec09a((*(int *)((v0_3 + 0x10))), v0_7, v0_0);
    L_C0EBDE0:;
    if (((int)(*(int *)((v0_3 + 0x20))) > 0)) goto L_C0EBDD0;
    FUN_0c0ec09a((*(int *)((v0_3 + 0x14))), ((*(int *)(((int)stk + 16))) - (*(int *)(((int)stk + 4)))), v0_0);
    L_C0EBE06:;
    if (((int)(*(int *)((v0_3 + 0x24))) > 0)) goto L_C0EBDF6;
    goto L_C0EBE0C;
    L_C0EBDF6:;
    FUN_0c0ec09a((((int)stk + 4) + 0x8), 0x1, v0_0);
    *(unsigned int *)((v0_3 + 0x24)) = ((*(int *)((v0_3 + 0x24))) - 1);
    goto L_C0EBE06;
    L_C0EBDD0:;
    FUN_0c0ec09a((((int)stk + 4) + 0x8), 0x1, v0_0);
    *(unsigned int *)((v0_3 + 0x20)) = ((*(int *)((v0_3 + 0x20))) - 1);
    goto L_C0EBDE0;
    L_C0EBDA0:;
    FUN_0c0ec09a((((int)stk + 4) + 0x8), 0x1, v0_0);
    *(unsigned int *)((v0_3 + 0x1C)) = ((*(int *)((v0_3 + 0x1C))) - 1);
    goto L_C0EBDB0;
    L_C0EBA2A:;
    if (!((v0_6 != 69))) goto L_C0EBBCC;
    if ((v0_6 != 71)) goto L_C0EBA3A;
    goto L_C0EBBCC;
    L_C0EBBCC:;
    FUN_0c0eda64((0xF0 + ((int)stk + 4)), v0_5, (*(signed char *)((v0_2 + 0x0))), v0_3);
    v0_6 = _builtin_get_fpscr();
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    _builtin_set_fpscr((v0_6 & 0xFFF7FFFF));
    v0_6 = ((strlen(v0_5)));
    L_C0EBCD0:;
    *(unsigned int *)(((int)stk + 16)) = v0_6;
    goto L_C0EBD2A;
    L_C0EBA3A:;
    if ((v0_6 == 88)) goto L_C0EBA8E;
    if ((v0_6 != 99)) goto L_C0EBA46;
    v0_9 = ((*(int *)(((int)stk + 20))));
    v0_8 = ((a8 + 0x4));
    v0_6 = ((a8 + 0x4));
    if ((((a8 + 0x4) & R13) == 0)) goto L_C0EBC02;
    v0_8 = ((a8 + 0x8));
    L_C0EBC02:;
    v0_7 = v0_8;
    *(unsigned int *)(((int)stk + 212)) = v0_7;
    v0_7 = ((v0_8 - 4));
    if ((((v0_8 - 4) & R13) == 0)) goto L_C0EBC16;
    v0_8 = ((v0_8 - 8));
    L_C0EBC18:;
    *(unsigned char *)((v0_9 + 0x0)) = (*(int *)((v0_8 + 0x0)));
    goto L_C0EBD0E;
    L_C0EBC16:;
    v0_8 = (v0_7);
    goto L_C0EBC18;
    L_C0EBA46:;
    if ((v0_6 == 100)) goto L_C0EBA8E;
    if ((v0_6 != 101)) goto L_C0EBA52;
    goto L_C0EBBCC;
    L_C0EBA52:;
    if ((v0_6 != 102)) goto L_C0EBA5A;
    goto L_C0EBBCC;
    L_C0EBA5A:;
    if ((v0_6 != 103)) goto L_C0EBA62;
    goto L_C0EBBCC;
    L_C0EBA62:;
    if ((v0_6 == 105)) goto L_C0EBA8E;
    if ((v0_6 != 110)) goto L_C0EBA6E;
    v0_6 = ((a8 + 0x4));
    if ((((a8 + 0x4) & R13) == 0)) goto L_C0EBCE8;
    v0_9 = ((a8 + 0x8));
    L_C0EBCEA:;
    v0_7 = v0_9;
    *(unsigned int *)(((int)stk + 212)) = v0_7;
    v0_7 = ((v0_9 - 4));
    if ((((v0_9 - 4) & R13) == 0)) goto L_C0EBCFE;
    v0_8 = ((v0_9 - 8));
    L_C0EBD00:;
    v0_6 = *(int *)((v0_8 + 0x0));
    *(unsigned int *)((v0_6 + 0x0)) = (*(int *)((v0_0 + 0x8)));
    v0_6 = (v0_6);
    goto L_C0EBD2A;
    L_C0EBCFE:;
    v0_8 = (v0_7);
    goto L_C0EBD00;
    L_C0EBCE8:;
    v0_9 = (v0_6);
    goto L_C0EBCEA;
    L_C0EBA6E:;
    if ((v0_6 == 111)) goto L_C0EBA8E;
    if ((v0_6 != 112)) goto L_C0EBA7A;
    v0_7 = ((a8 + 0x4));
    if ((((a8 + 0x4) & R13) == 0)) goto L_C0EBC9C;
    v0_8 = ((a8 + 0x8));
    L_C0EBC9E:;
    v0_7 = v0_8;
    *(unsigned int *)(((int)stk + 212)) = v0_7;
    v0_6 = ((v0_8 - 4));
    if ((((v0_8 - 4) & R13) == 0)) goto L_C0EBCB2;
    v0_8 = ((v0_8 - 8));
    L_C0EBCB4:;
    v0_6 = ((*(int *)((v0_8 + 0x0))));
    R7 = (v0_3);
    if (((*(int *)((v0_3 + 0x8))) != -1)) goto L_C0EBCC2;
    *(unsigned int *)((v0_3 + 0x8)) = 0x1;
    L_C0EBCC2:;
    FUN_0c0ebe90(v0_6, v0_5, 0x78, R7);
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    v0_6 = ((strlen(v0_5)));
    goto L_C0EBCD0;
    L_C0EBCB2:;
    v0_8 = (v0_6);
    goto L_C0EBCB4;
    L_C0EBC9C:;
    v0_8 = (v0_7);
    goto L_C0EBC9E;
    L_C0EBA7A:;
    if ((v0_6 != 115)) goto L_C0EBA82;
    v0_6 = ((a8 + 0x4));
    if ((((a8 + 0x4) & R13) == 0)) goto L_C0EBC34;
    v0_8 = ((a8 + 0x8));
    L_C0EBC36:;
    v0_7 = v0_8;
    *(unsigned int *)(((int)stk + 212)) = v0_7;
    v0_7 = ((v0_8 - 4));
    if ((((v0_8 - 4) & R13) == 0)) goto L_C0EBC4A;
    v0_8 = ((v0_8 - 8));
    L_C0EBC4C:;
    v0_6 = *(int *)((v0_8 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = v0_6;
    *(unsigned int *)(((int)stk + 16)) = (strlen(v0_6));
    v0_7 = *(int *)((v0_3 + 0x8));
    v0_6 = (v0_7);
    if ((v0_7 == -1)) goto L_C0EBC6A;
    if (((int)v0_6 >= (int)(*(int *)(((int)stk + 16))))) goto L_C0EBC6A;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)((v0_3 + 0x8)));
    L_C0EBC6A:;
    *(unsigned int *)((v0_3 + 0x14)) = v0_5;
    *(unsigned int *)((v0_3 + 0x20)) = v0_1;
    *(unsigned int *)((v0_3 + 0x28)) = ((*(int *)((v0_3 + 0x4))) - (*(int *)(((int)stk + 16))));
    goto L_C0EBD2A;
    L_C0EBC4A:;
    v0_8 = (v0_7);
    goto L_C0EBC4C;
    L_C0EBC34:;
    v0_8 = (v0_6);
    goto L_C0EBC36;
    L_C0EBA82:;
    if ((v0_6 == 117)) goto L_C0EBA8E;
    if ((v0_6 == 120)) goto L_C0EBA8E;
    *(unsigned int *)0xC7FD4D0 = v0_4;
    *(unsigned char *)((v0_3 + 0x0)) = ((*(signed char *)((v0_3 + 0x0))) | 0x1);
    goto L_C0EBD2A;
    L_C0EBA8E:;
    v0_7 = *(int *)((v0_3 + 0xC));
    v0_6 = (v0_7);
    if ((v0_7 != 108)) goto L_C0EBAC8;
    v0_6 = ((a8 + 0x4));
    if ((((a8 + 0x4) & R13) == 0)) goto L_C0EBAA6;
    v0_6 = ((a8 + 0x8));
    L_C0EBAA6:;
    v0_7 = v0_6;
    *(unsigned int *)(((int)stk + 212)) = v0_7;
    v0_8 = ((v0_6 - 4) & R13) == 0;
    v0_7 = (v0_6 - 4);
    v0_6 = ((v0_6 - 4));
    v0_7 = v0_7;
    if (v0_8) goto L_C0EBABA;
    v0_6 = ((a8 - 8));
    L_C0EBABA:;
    v0_6 = ((*(int *)((v0_6 + 0x0))));
    L_C0EBBAE:;
    R7 = (v0_3);
    if (((*(int *)((v0_3 + 0x8))) != -1)) goto L_C0EBBBA;
    *(unsigned int *)((v0_3 + 0x8)) = 0x1;
    L_C0EBBBA:;
    FUN_0c0ebe90(v0_6, v0_5, (*(signed char *)((v0_2 + 0x0))), R7);
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    v0_6 = ((strlen(v0_5)));
    goto L_C0EBCD0;
    L_C0EBAC8:;
    if ((v0_6 != 104)) goto L_C0EBB3E;
    v0_7 = *(signed char *)((v0_2 + 0x0));
    v0_6 = (v0_7);
    if ((v0_7 == 117)) goto L_C0EBAE6;
    if ((v0_6 == 88)) goto L_C0EBAE6;
    if ((v0_6 == 120)) goto L_C0EBAE6;
    if (!((v0_6 != 111))) goto L_C0EBAE6;
    v0_6 = ((a8 + 0x4));
    v0_7 = ((a8 + 0x4));
    if ((((a8 + 0x4) & R13) == 0)) goto L_C0EBB24;
    v0_6 = ((a8 + 0x8));
    goto L_C0EBB24;
    L_C0EBAE6:;
    v0_6 = ((a8 + 0x4));
    v0_7 = ((a8 + 0x4));
    if ((((a8 + 0x4) & R13) == 0)) goto L_C0EBAF8;
    v0_6 = ((a8 + 0x8));
    L_C0EBAF8:;
    v0_7 = v0_6;
    *(unsigned int *)(((int)stk + 212)) = v0_7;
    v0_7 = ((v0_6 - 4) & R13) == 0;
    v0_6 = ((v0_6 - 4));
    if (v0_7) goto L_C0EBB0C;
    v0_6 = ((a8 - 8));
    L_C0EBB0C:;
    v0_6 = ((unsigned short)(*(int *)((v0_6 + 0x0))));
    goto L_C0EBBAE;
    L_C0EBB24:;
    v0_7 = v0_6;
    *(unsigned int *)(((int)stk + 212)) = v0_7;
    v0_7 = ((v0_6 - 4) & R13) == 0;
    v0_6 = ((v0_6 - 4));
    if (v0_7) goto L_C0EBB38;
    v0_6 = ((a8 - 8));
    L_C0EBB38:;
    v0_6 = ((short)(*(int *)((v0_6 + 0x0))));
    goto L_C0EBBAE;
    L_C0EBB3E:;
    v0_7 = *(signed char *)((v0_2 + 0x0));
    v0_6 = (v0_7);
    if ((v0_7 == 117)) goto L_C0EBB58;
    if ((v0_6 == 88)) goto L_C0EBB58;
    if ((v0_6 == 120)) goto L_C0EBB58;
    if (!((v0_6 != 111))) goto L_C0EBB58;
    v0_6 = ((a8 + 0x4));
    v0_7 = ((a8 + 0x4));
    if ((((a8 + 0x4) & R13) == 0)) goto L_C0EBB98;
    v0_6 = ((a8 + 0x8));
    goto L_C0EBB98;
    L_C0EBB58:;
    v0_6 = ((a8 + 0x4));
    v0_7 = ((a8 + 0x4));
    if ((((a8 + 0x4) & R13) == 0)) goto L_C0EBB6A;
    v0_6 = ((a8 + 0x8));
    L_C0EBB6A:;
    v0_7 = v0_6;
    *(unsigned int *)(((int)stk + 212)) = v0_7;
    v0_7 = ((v0_6 - 4) & R13) == 0;
    v0_6 = ((v0_6 - 4));
    if (v0_7) goto L_C0EBBAC;
    v0_6 = ((a8 - 8));
    L_C0EBBAC:;
    v0_6 = ((*(int *)((v0_6 + 0x0))));
    goto L_C0EBBAE;
    L_C0EBB98:;
    v0_7 = v0_6;
    *(unsigned int *)(((int)stk + 212)) = v0_7;
    v0_7 = ((v0_6 - 4) & R13) == 0;
    v0_6 = ((v0_6 - 4));
    if (v0_7) goto L_C0EBBAC;
    v0_6 = ((a8 - 8));
    goto L_C0EBBAC;
    L_C0EB9EC:;
    *(unsigned char *)((v0_3 + 0x0)) = ((*(signed char *)((v0_3 + 0x0))) | 0x1);
    *(unsigned int *)0xC7FD4D0 = v0_4;
    goto L_C0EB9F6;
    L_C0EB980:;
    v0_8 = (v0_7);
    goto L_C0EB982;
    L_C0EB96A:;
    v0_9 = (v0_6);
    goto L_C0EB96C;
    L_C0EB92C:;
    *(unsigned char *)((v0_3 + 0x0)) = ((*(signed char *)((v0_3 + 0x0))) | 0x1);
    *(unsigned int *)0xC7FD4D0 = v0_4;
    goto L_C0EB936;
    L_C0EB8B8:;
    v0_8 = (v0_7);
    goto L_C0EB8BA;
    L_C0EB8A2:;
    v0_9 = (v0_6);
    goto L_C0EB8A4;
    L_C0EB816:;
    v0_7 = *(signed char *)((v0_2 + 0x0));
    v0_6 = (v0_7);
    if ((v0_7 == 32)) goto L_C0EB834;
    if ((v0_6 == 35)) goto L_C0EB854;
    if ((v0_6 == 43)) goto L_C0EB82E;
    if ((v0_6 != 45)) goto L_C0EB85A;
    v0_6 = (((*(signed char *)((v0_3 + 0x0))) | 0x2));
    L_C0EB858:;
    *(unsigned char *)((v0_3 + 0x0)) = v0_6;
    L_C0EB85A:;
    v0_2 = ((v0_2 + 0x1));
    goto L_C0EB85C;
    L_C0EB82E:;
    v0_6 = (((*(signed char *)((v0_3 + 0x0))) | 0x8));
    goto L_C0EB858;
    L_C0EB854:;
    v0_6 = (((*(signed char *)((v0_3 + 0x0))) | 0x4));
    goto L_C0EB858;
    L_C0EB834:;
    if ((((*(signed char *)((v0_3 + 0x0))) & 8) != 0)) goto L_C0EB85A;
    *(unsigned char *)((v0_3 + 0x0)) = ((*(signed char *)((v0_3 + 0x0))) | 0x10);
    goto L_C0EB85A;
    L_C0EBE72:;
    FUN_0c0ec0f2(v0_0);
    v0_6 = ((*(int *)((v0_0 + 0x8))));
    goto L_C0EBE78;
}

