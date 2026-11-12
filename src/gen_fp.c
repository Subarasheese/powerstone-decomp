/* Straight-line functions with calls and guards (batch gen_fp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o720C_short { char p[0x720C]; short v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c0209c6(int, float);
int FUN_0c034bfc(int);
int FUN_0c0555dc(void);
int FUN_0c058f3a(void);
int FUN_0c058f44(void);
int FUN_0c058fa2(void);
int FUN_0c059330(int, int, int, int);
int FUN_0c060c88(int);
int FUN_0c062050(int, int, int);
int FUN_0c06206e(int, int, int);
int FUN_0c06231c(int, int, int);
int FUN_0c0623a6(int, int, int);
int FUN_0c09db78(int);
int FUN_0c0a32dc(void);
int FUN_0c0a3796(int, int);
int FUN_0c0a445c(void);
int FUN_0c0a4544(void);
int FUN_0c0a4604(void);
int FUN_0c0ac5c4(int, int, int, int);
float FUN_0c0df340(float);
int FUN_0c0df360(int, int, int, int, float);
int FUN_0c0df400(int, int, int, int, float, float);
float FUN_0c0df4d0(int);
int FUN_0c0df920(void);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e0160(void);
int FUN_0c0e0210(int, int);
int FUN_0c0e24f0(int);
extern int FUN_0c0e6e5c();
int FUN_0c0e6f24(int);
int FUN_0c0e6fdc(int);
int FUN_0c0e6fe8(void);
int thunk_FUN_0c062242(int);
int FUN_0c0a28bc(int a4, int a5, int a6, int a7);
int FUN_0c0c7c2c(int a4, int a5, int a6, int a7);
int FUN_0c05d594(int a4, int a5, int a6, float f4);
float FUN_0c0b8f9a(int a4, int a5, int a6, int a7);
int FUN_0c0a9d9c(int a4, int a5, int a6, int a7);
int FUN_0c0e02c0(int a4, int a5);
int FUN_0c0a4f28(int a4, int a5, int a6, int a7);
int FUN_0c025a0e(int a4, int a5, int a6, int a7);
int FUN_0c0a3988(int a4, int a5, int a6, int a7);

int FUN_0c0a28bc(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t31;
    register int t52;
    register int t68;
    register float u70;
    register float u71;
    register float u72;
    register int t74;
    register int t75;
    register int t76;
    register int t77;
    register int t83;
    register int t84;
    register int t85;
    register float u88;
    register float u89;
    register float u90;
    register int t92;
    register int t93;
    register int t94;
    register int t95;
    register int t101;
    register int t102;
    register int t103;
    register int t110;
    register float u112;
    register float u113;
    register float u115;
    register float u116;
    register int t125;
    register int t129;
    register float u135;
    register int t137;
    int t142;
    register float u146;
    register float u147;
    register float u148;
    register int t151;
    register float u153;
    register float u154;
    register float u155;
    register int t158;
    register int t159;
    register int t175;
    register float u177;
    register float u178;
    register float u179;
    register int t181;
    register int t182;
    register int t183;
    register int t184;
    register int t190;
    register int t191;
    register int t192;
    register float u195;
    register float u196;
    register float u197;
    register int t199;
    register int t200;
    register int t201;
    register int t202;
    register int t208;
    register int t209;
    register int t210;
    register int t217;
    register float u219;
    register float u220;
    register float u222;
    register float u223;
    register int t232;
    register int t236;
    register float u242;
    register int t244;
    int t249;
    register float u253;
    register float u254;
    register float u255;
    register int t258;
    register float u260;
    register float u261;
    register float u262;
    register int t265;
    register int t282;
    register int t303;
    register int t319;
    register float u321;
    register float u322;
    register float u323;
    register int t325;
    register int t326;
    register int t327;
    register int t328;
    register int t334;
    register int t335;
    register int t336;
    register float u339;
    register float u340;
    register float u341;
    register int t343;
    register int t344;
    register int t345;
    register int t346;
    register int t352;
    register int t353;
    register int t354;
    register int t361;
    register float u363;
    register float u364;
    register float u366;
    register float u367;
    register int t376;
    register int t380;
    register float u386;
    register int t388;
    int t393;
    register float u397;
    register float u398;
    register float u399;
    register int t402;
    register float u404;
    register float u405;
    register float u406;
    register int t409;
    register int t410;
    register int t426;
    register float u428;
    register float u429;
    register float u430;
    register int t432;
    register int t433;
    register int t434;
    register int t435;
    register int t441;
    register int t442;
    register int t443;
    register float u446;
    register float u447;
    register float u448;
    register int t450;
    register int t451;
    register int t452;
    register int t453;
    register int t459;
    register int t460;
    register int t461;
    register int t468;
    register float u470;
    register float u471;
    register float u473;
    register float u474;
    register int t483;
    register int t487;
    register float u493;
    register int t495;
    int t500;
    register float u504;
    register float u505;
    register float u506;
    register int t509;
    register float u511;
    register float u512;
    register float u513;
    register int t516;
    int t12;
    register int t13;
    int t51;
    int t302;

    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x4))) == 10) {
        return ((int (*)(int, int, int, int))(0xC0A2BE2))(a4, a5, a6, a7);
    }
    if (((unsigned char)(*(signed char *)((a5 + 0x0))) == 3) && (t12 = *(int *)((a4 + 0x1C)), t13 = *(signed char *)((0x71BA + t12)), t13 == 24)) {
        if ((*(signed char *)(((((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BA))) << 2) + 0xC338D38) + 0x2))) == 0) {
            return ((int (*)(int, int, int, int))(0xC0A2BE2))(0xC338D38, a5, a6, a7);
        }
        t31 = *(signed char *)((a4 + 0x71BA));
        if ((*(signed char *)(((0xC338D38 + (t31 << 2)) + 0x1))) == 0) {
            return ((int (*)(int, int, int, int))(0xC0A2BE2))((0xC338D38 + (t31 << 2)), a5, a6, a7);
        }
        if ((*(signed char *)((a4 + 0x71BA))) == 10) {
            if ((*(signed char *)((((*(signed char *)((a4 + 0x721F))) << 1) + 0xC338DE9))) == 0) {
                return ((int (*)(int, int, int, int))(0xC0A2BE2))((0xC338D38 + (t31 << 2)), a5, a6, a7);
            }
            if (((*(signed char *)((a4 + 0x71BA))) == 10) && (t51 = *(signed char *)((a4 + 0x721F)), t51 == 2)) {
                return ((int (*)(int, int, int, int))(0xC0A2BE2))((0xC338D38 + (t31 << 2)), a5, a6, a7);
            }
            t52 = *(signed char *)((a5 + 0x0));
            if ((unsigned char)t52 != 0) {
                if ((unsigned char)t52 != 1) {
                    if ((unsigned char)t52 == 2) {
                        if ((*(signed char *)((a4 + 0x71BC))) != 0) {
                            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t31 << 2)), a5, a6, a7, 100.0f);
                        }
                        t68 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
                        if (t68 != 0) {
                            if (t68 == 1) {
                                u70 = (((struct o24_float *)(a4))->v);
                                u71 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                                u72 = (u70 - u71);
                                if (0.0f > (u70 - u71)) {
                                    u72 = (u71 - u70);
                                }
                                if (100.0f > u72) {
                                    t74 = *(int *)((a4 + 0x30));
                                    t75 = FUN_0c09db78(a4);
                                    t76 = *(int *)((a5 + 0x10));
                                    t77 = (unsigned short)(t74 - t75);
                                    if (((unsigned short)(t74 - t75) & 0x8000) != 0) {
                                        t77 = ((unsigned short)(t74 - t75) | 0xFFFF0000);
                                    }
                                    if ((int)t77 >= (int)(-t76)) {
                                        if ((int)t77 <= (int)t76) {
                                            t83 = *(int *)((a4 + 0x30));
                                            t84 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x30));
                                            t85 = (unsigned short)(t83 - t84);
                                            if ((0x8000 & (unsigned short)(t83 - t84)) != 0) {
                                                t85 = ((unsigned short)(t83 - t84) | 0xFFFF0000);
                                            }
                                            if ((int)t85 >= (int)0xFFFFD556) {
                                                if ((int)t85 <= (int)0x2AAA) {
                                                    return ((int (*)(int, int, int, int))(0xC0A2BD0))(t85, t76, a6, a7);
                                                }
                                                return ((int (*)(int, int, int, int))(0xC0A2BE2))(t85, t76, a6, a7);
                                            }
                                            return ((int (*)(int, int, int, int))(0xC0A2BE2))(t85, t76, a6, a7);
                                        }
                                        return ((int (*)(int, int, int, int))(0xC0A2BE2))(t77, t76, a6, a7);
                                    }
                                    return ((int (*)(int, int, int, int))(0xC0A2BE2))(t77, t76, a6, a7);
                                }
                                return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t68, a5, a6, a7, 100.0f, u71, u70, (u70 - u71));
                            }
                            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t68, a5, a6, a7, 100.0f);
                        }
                        u88 = (((struct o24_float *)(a4))->v);
                        u89 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                        u90 = (u88 - u89);
                        if (0.0f > (u88 - u89)) {
                            u90 = (u89 - u88);
                        }
                        if (100.0f > u90) {
                            t92 = *(int *)((a4 + 0x30));
                            t93 = FUN_0c09db78(a4);
                            t94 = *(int *)((a5 + 0x10));
                            t95 = (unsigned short)(t92 - t93);
                            if (((unsigned short)(t92 - t93) & 0x8000) != 0) {
                                t95 = ((unsigned short)(t92 - t93) | 0xFFFF0000);
                            }
                            if ((int)t95 >= (int)(-t94)) {
                                if ((int)t95 <= (int)t94) {
                                    t101 = *(int *)((a4 + 0x30));
                                    t102 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x30));
                                    t103 = (unsigned short)(t101 - t102);
                                    if ((0x8000 & (unsigned short)(t101 - t102)) != 0) {
                                        t103 = ((unsigned short)(t101 - t102) | 0xFFFF0000);
                                    }
                                    if ((int)t103 >= (int)0xFFFFD556) {
                                        if ((int)t103 <= (int)0x2AAA) {
                                            return ((int (*)(int, int, int, int))(0xC0A2BD0))(t103, t94, a6, a7);
                                        }
                                        return ((int (*)(int, int, int, int))(0xC0A2BE2))(t103, t94, a6, a7);
                                    }
                                    return ((int (*)(int, int, int, int))(0xC0A2BE2))(t103, t94, a6, a7);
                                }
                                return ((int (*)(int, int, int, int))(0xC0A2BE2))(t95, t94, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(0xC0A2BE2))(t95, t94, a6, a7);
                        }
                        return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t68, a5, a6, a7, 100.0f, u89, u88, (u88 - u89));
                    }
                    if ((unsigned char)t52 == 3) {
                        if ((*(signed char *)((a4 + 0x71BC))) == 0) {
                            if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                                t110 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
                                if (t110 != 0) {
                                    if (t110 == 1) {
                                        u112 = (((struct o24_float *)(a4))->v);
                                        u113 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                                        if (0.0f > (u112 - u113)) {
                                            return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAE))(t110, a5, a6, a7, 100.0f, u112, u113, (u112 - u113));
                                        }
                                        return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAC))(t110, a5, a6, a7, 100.0f, u112, u113, (u112 - u113));
                                    }
                                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t110, a5, a6, a7, 100.0f);
                                }
                                u115 = (((struct o24_float *)(a4))->v);
                                u116 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                                if (0.0f > (u115 - u116)) {
                                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAE))(t110, a5, a6, a7, 100.0f, u115, u116, (u115 - u116));
                                }
                                return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAC))(t110, a5, a6, a7, 100.0f, u115, u116, (u115 - u116));
                            }
                            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t31 << 2)), a5, a6, a7, 100.0f);
                        }
                        return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t31 << 2)), a5, a6, a7, 100.0f);
                    }
                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t31 << 2)), a5, a6, a7, 100.0f);
                }
                if ((*(signed char *)((a4 + 0x71BC))) != 2) {
                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t31 << 2)), a5, a6, a7, 100.0f);
                }
                if ((*(signed char *)((0x71BC + (*(int *)((a4 + 0x1C)))))) != 2) {
                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t31 << 2)), a5, a6, a7, 100.0f);
                }
                if (50.0f > ((((struct o24_float *)(a4))->v))) {
                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t31 << 2)), a5, a6, a7, 100.0f);
                }
                t125 = *(signed char *)((a4 + 0x3));
                *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t125 * (unsigned short)0x72D0) + 0xC7E40C4);
                thunk_FUN_0c062242((((((unsigned short)((unsigned short)t125 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t125 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
                t129 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
                *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t129 * (unsigned short)0x72D0) + 0xC7E40C4);
                thunk_FUN_0c062242((((((unsigned short)((unsigned short)t129 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t129 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
                u135 = (((struct oC_float *)(a5))->v);
                if (((((*(float *)(((int)stk + 20))) + ((((struct o8_float *)(a5))->v))) - (*(float *)(((int)stk + 8)))) + u135) > (u135 * 2.0f)) {
                    return ((int (*)(float))(0xC0A2BE2))(u135);
                }
                t137 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
                if (t137 == 0) {
                    return ((int (*)(void))(0xC0A2BE2))();
                }
                return ((int (*)(void))(0xC0A2BDE))();
            }
            if ((*(signed char *)((a4 + 0x71BC))) != 0) {
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t31 << 2)), a5, a6, a7, 100.0f);
            }
            t142 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
            if ((t142 != 0) && (t142 != 1)) {
                if (t142 != 2) {
                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t142, a5, a6, a7, 100.0f);
                }
                if (((((struct o24_float *)(a4))->v)) > (((((struct o2D4_float *)(a4))->v)) + 50.0f)) {
                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t142, a5, a6, a7, 100.0f);
                }
                u146 = (((struct o24_float *)(a4))->v);
                u147 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                u148 = (u146 - u147);
                if (0.0f > (u146 - u147)) {
                    u148 = (u147 - u146);
                }
                if (!(100.0f > u148)) {
                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t142, a5, a6, a7, 100.0f, (u146 - u147), u146, u147);
                }
                t151 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
                if (t151 == 0) {
                    return ((int (*)(void))(0xC0A2BE2))();
                }
                return ((int (*)(void))(0xC0A2BDE))();
            }
            u153 = (((struct o24_float *)(a4))->v);
            u154 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
            u155 = (u153 - u154);
            if (0.0f > (u153 - u154)) {
                u155 = (u154 - u153);
            }
            if (!(100.0f > u155)) {
                return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t142, a5, a6, a7, 100.0f, (u153 - u154), u153, u154);
            }
            t158 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
            if (t158 == 0) {
                return ((int (*)(void))(0xC0A2BE2))();
            }
            return ((int (*)(void))(0xC0A2BDE))();
        }
        t159 = *(signed char *)((a5 + 0x0));
        if ((unsigned char)t159 != 0) {
            if ((unsigned char)t159 != 1) {
                if ((unsigned char)t159 == 2) {
                    if ((*(signed char *)((a4 + 0x71BC))) != 0) {
                        return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t31 << 2)), a5, a6, a7, 100.0f);
                    }
                    t175 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
                    if (t175 != 0) {
                        if (t175 == 1) {
                            u177 = (((struct o24_float *)(a4))->v);
                            u178 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                            u179 = (u177 - u178);
                            if (0.0f > (u177 - u178)) {
                                u179 = (u178 - u177);
                            }
                            if (100.0f > u179) {
                                t181 = *(int *)((a4 + 0x30));
                                t182 = FUN_0c09db78(a4);
                                t183 = *(int *)((a5 + 0x10));
                                t184 = (unsigned short)(t181 - t182);
                                if (((unsigned short)(t181 - t182) & 0x8000) != 0) {
                                    t184 = ((unsigned short)(t181 - t182) | 0xFFFF0000);
                                }
                                if ((int)t184 >= (int)(-t183)) {
                                    if ((int)t184 <= (int)t183) {
                                        t190 = *(int *)((a4 + 0x30));
                                        t191 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x30));
                                        t192 = (unsigned short)(t190 - t191);
                                        if ((0x8000 & (unsigned short)(t190 - t191)) != 0) {
                                            t192 = ((unsigned short)(t190 - t191) | 0xFFFF0000);
                                        }
                                        if ((int)t192 >= (int)0xFFFFD556) {
                                            if ((int)t192 <= (int)0x2AAA) {
                                                return ((int (*)(int, int, int, int))(0xC0A2BD0))(t192, t183, a6, a7);
                                            }
                                            return ((int (*)(int, int, int, int))(0xC0A2BE2))(t192, t183, a6, a7);
                                        }
                                        return ((int (*)(int, int, int, int))(0xC0A2BE2))(t192, t183, a6, a7);
                                    }
                                    return ((int (*)(int, int, int, int))(0xC0A2BE2))(t184, t183, a6, a7);
                                }
                                return ((int (*)(int, int, int, int))(0xC0A2BE2))(t184, t183, a6, a7);
                            }
                            return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t175, a5, a6, a7, 100.0f, u178, u177, (u177 - u178));
                        }
                        return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t175, a5, a6, a7, 100.0f);
                    }
                    u195 = (((struct o24_float *)(a4))->v);
                    u196 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                    u197 = (u195 - u196);
                    if (0.0f > (u195 - u196)) {
                        u197 = (u196 - u195);
                    }
                    if (100.0f > u197) {
                        t199 = *(int *)((a4 + 0x30));
                        t200 = FUN_0c09db78(a4);
                        t201 = *(int *)((a5 + 0x10));
                        t202 = (unsigned short)(t199 - t200);
                        if (((unsigned short)(t199 - t200) & 0x8000) != 0) {
                            t202 = ((unsigned short)(t199 - t200) | 0xFFFF0000);
                        }
                        if ((int)t202 >= (int)(-t201)) {
                            if ((int)t202 <= (int)t201) {
                                t208 = *(int *)((a4 + 0x30));
                                t209 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x30));
                                t210 = (unsigned short)(t208 - t209);
                                if ((0x8000 & (unsigned short)(t208 - t209)) != 0) {
                                    t210 = ((unsigned short)(t208 - t209) | 0xFFFF0000);
                                }
                                if ((int)t210 >= (int)0xFFFFD556) {
                                    if ((int)t210 <= (int)0x2AAA) {
                                        return ((int (*)(int, int, int, int))(0xC0A2BD0))(t210, t201, a6, a7);
                                    }
                                    return ((int (*)(int, int, int, int))(0xC0A2BE2))(t210, t201, a6, a7);
                                }
                                return ((int (*)(int, int, int, int))(0xC0A2BE2))(t210, t201, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(0xC0A2BE2))(t202, t201, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC0A2BE2))(t202, t201, a6, a7);
                    }
                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t175, a5, a6, a7, 100.0f, u196, u195, (u195 - u196));
                }
                if ((unsigned char)t159 == 3) {
                    if ((*(signed char *)((a4 + 0x71BC))) == 0) {
                        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                            t217 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
                            if (t217 != 0) {
                                if (t217 == 1) {
                                    u219 = (((struct o24_float *)(a4))->v);
                                    u220 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                                    if (0.0f > (u219 - u220)) {
                                        return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAE))(t217, a5, a6, a7, 100.0f, u219, u220, (u219 - u220));
                                    }
                                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAC))(t217, a5, a6, a7, 100.0f, u219, u220, (u219 - u220));
                                }
                                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t217, a5, a6, a7, 100.0f);
                            }
                            u222 = (((struct o24_float *)(a4))->v);
                            u223 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                            if (0.0f > (u222 - u223)) {
                                return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAE))(t217, a5, a6, a7, 100.0f, u222, u223, (u222 - u223));
                            }
                            return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAC))(t217, a5, a6, a7, 100.0f, u222, u223, (u222 - u223));
                        }
                        return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t31 << 2)), a5, a6, a7, 100.0f);
                    }
                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t31 << 2)), a5, a6, a7, 100.0f);
                }
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t31 << 2)), a5, a6, a7, 100.0f);
            }
            if ((*(signed char *)((a4 + 0x71BC))) != 2) {
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t31 << 2)), a5, a6, a7, 100.0f);
            }
            if ((*(signed char *)((0x71BC + (*(int *)((a4 + 0x1C)))))) != 2) {
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t31 << 2)), a5, a6, a7, 100.0f);
            }
            if (50.0f > ((((struct o24_float *)(a4))->v))) {
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t31 << 2)), a5, a6, a7, 100.0f);
            }
            t232 = *(signed char *)((a4 + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t232 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t232 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t232 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
            t236 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t236 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t236 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t236 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
            u242 = (((struct oC_float *)(a5))->v);
            if (((((*(float *)(((int)stk + 20))) + ((((struct o8_float *)(a5))->v))) - (*(float *)(((int)stk + 8)))) + u242) > (u242 * 2.0f)) {
                return ((int (*)(float))(0xC0A2BE2))(u242);
            }
            t244 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
            if (t244 == 0) {
                return ((int (*)(void))(0xC0A2BE2))();
            }
            return ((int (*)(void))(0xC0A2BDE))();
        }
        if ((*(signed char *)((a4 + 0x71BC))) != 0) {
            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t31 << 2)), a5, a6, a7, 100.0f);
        }
        t249 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
        if ((t249 != 0) && (t249 != 1)) {
            if (t249 != 2) {
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t249, a5, a6, a7, 100.0f);
            }
            if (((((struct o24_float *)(a4))->v)) > (((((struct o2D4_float *)(a4))->v)) + 50.0f)) {
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t249, a5, a6, a7, 100.0f);
            }
            u253 = (((struct o24_float *)(a4))->v);
            u254 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
            u255 = (u253 - u254);
            if (0.0f > (u253 - u254)) {
                u255 = (u254 - u253);
            }
            if (!(100.0f > u255)) {
                return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t249, a5, a6, a7, 100.0f, (u253 - u254), u253, u254);
            }
            t258 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
            if (t258 == 0) {
                return ((int (*)(void))(0xC0A2BE2))();
            }
            return ((int (*)(void))(0xC0A2BDE))();
        }
        u260 = (((struct o24_float *)(a4))->v);
        u261 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
        u262 = (u260 - u261);
        if (0.0f > (u260 - u261)) {
            u262 = (u261 - u260);
        }
        if (!(100.0f > u262)) {
            return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t249, a5, a6, a7, 100.0f, (u260 - u261), u260, u261);
        }
        t265 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
        if (t265 == 0) {
            return ((int (*)(void))(0xC0A2BE2))();
        }
        return ((int (*)(void))(0xC0A2BDE))();
    }
    if (((((struct o720C_short *)(a4))->v)) != 0) {
        return ((int (*)(int, int, int, int))(0xC0A2BE2))(a4, a5, a6, a7);
    }
    if (((((struct o720C_short *)((*(int *)((a4 + 0x1C)))))->v)) != 0) {
        return ((int (*)(int, int, int, int))(0xC0A2BE2))(a4, a5, a6, a7);
    }
    if ((*(signed char *)(((((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BA))) << 2) + 0xC338D38) + 0x2))) == 0) {
        return ((int (*)(int, int, int, int))(0xC0A2BE2))(0xC338D38, a5, a6, a7);
    }
    t282 = *(signed char *)((a4 + 0x71BA));
    if ((*(signed char *)(((0xC338D38 + (t282 << 2)) + 0x1))) == 0) {
        return ((int (*)(int, int, int, int))(0xC0A2BE2))((0xC338D38 + (t282 << 2)), a5, a6, a7);
    }
    if ((*(signed char *)((a4 + 0x71BA))) == 10) {
        if ((*(signed char *)((((*(signed char *)((a4 + 0x721F))) << 1) + 0xC338DE9))) == 0) {
            return ((int (*)(int, int, int, int))(0xC0A2BE2))((0xC338D38 + (t282 << 2)), a5, a6, a7);
        }
        if (((*(signed char *)((a4 + 0x71BA))) == 10) && (t302 = *(signed char *)((a4 + 0x721F)), t302 == 2)) {
            return ((int (*)(int, int, int, int))(0xC0A2BE2))((0xC338D38 + (t282 << 2)), a5, a6, a7);
        }
        t303 = *(signed char *)((a5 + 0x0));
        if ((unsigned char)t303 != 0) {
            if ((unsigned char)t303 != 1) {
                if ((unsigned char)t303 == 2) {
                    if ((*(signed char *)((a4 + 0x71BC))) != 0) {
                        return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t282 << 2)), a5, a6, a7, 100.0f);
                    }
                    t319 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
                    if (t319 != 0) {
                        if (t319 == 1) {
                            u321 = (((struct o24_float *)(a4))->v);
                            u322 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                            u323 = (u321 - u322);
                            if (0.0f > (u321 - u322)) {
                                u323 = (u322 - u321);
                            }
                            if (100.0f > u323) {
                                t325 = *(int *)((a4 + 0x30));
                                t326 = FUN_0c09db78(a4);
                                t327 = *(int *)((a5 + 0x10));
                                t328 = (unsigned short)(t325 - t326);
                                if (((unsigned short)(t325 - t326) & 0x8000) != 0) {
                                    t328 = ((unsigned short)(t325 - t326) | 0xFFFF0000);
                                }
                                if ((int)t328 >= (int)(-t327)) {
                                    if ((int)t328 <= (int)t327) {
                                        t334 = *(int *)((a4 + 0x30));
                                        t335 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x30));
                                        t336 = (unsigned short)(t334 - t335);
                                        if ((0x8000 & (unsigned short)(t334 - t335)) != 0) {
                                            t336 = ((unsigned short)(t334 - t335) | 0xFFFF0000);
                                        }
                                        if ((int)t336 >= (int)0xFFFFD556) {
                                            if ((int)t336 <= (int)0x2AAA) {
                                                return ((int (*)(int, int, int, int))(0xC0A2BD0))(t336, t327, a6, a7);
                                            }
                                            return ((int (*)(int, int, int, int))(0xC0A2BE2))(t336, t327, a6, a7);
                                        }
                                        return ((int (*)(int, int, int, int))(0xC0A2BE2))(t336, t327, a6, a7);
                                    }
                                    return ((int (*)(int, int, int, int))(0xC0A2BE2))(t328, t327, a6, a7);
                                }
                                return ((int (*)(int, int, int, int))(0xC0A2BE2))(t328, t327, a6, a7);
                            }
                            return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t319, a5, a6, a7, 100.0f, u322, u321, (u321 - u322));
                        }
                        return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t319, a5, a6, a7, 100.0f);
                    }
                    u339 = (((struct o24_float *)(a4))->v);
                    u340 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                    u341 = (u339 - u340);
                    if (0.0f > (u339 - u340)) {
                        u341 = (u340 - u339);
                    }
                    if (100.0f > u341) {
                        t343 = *(int *)((a4 + 0x30));
                        t344 = FUN_0c09db78(a4);
                        t345 = *(int *)((a5 + 0x10));
                        t346 = (unsigned short)(t343 - t344);
                        if (((unsigned short)(t343 - t344) & 0x8000) != 0) {
                            t346 = ((unsigned short)(t343 - t344) | 0xFFFF0000);
                        }
                        if ((int)t346 >= (int)(-t345)) {
                            if ((int)t346 <= (int)t345) {
                                t352 = *(int *)((a4 + 0x30));
                                t353 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x30));
                                t354 = (unsigned short)(t352 - t353);
                                if ((0x8000 & (unsigned short)(t352 - t353)) != 0) {
                                    t354 = ((unsigned short)(t352 - t353) | 0xFFFF0000);
                                }
                                if ((int)t354 >= (int)0xFFFFD556) {
                                    if ((int)t354 <= (int)0x2AAA) {
                                        return ((int (*)(int, int, int, int))(0xC0A2BD0))(t354, t345, a6, a7);
                                    }
                                    return ((int (*)(int, int, int, int))(0xC0A2BE2))(t354, t345, a6, a7);
                                }
                                return ((int (*)(int, int, int, int))(0xC0A2BE2))(t354, t345, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(0xC0A2BE2))(t346, t345, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC0A2BE2))(t346, t345, a6, a7);
                    }
                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t319, a5, a6, a7, 100.0f, u340, u339, (u339 - u340));
                }
                if ((unsigned char)t303 == 3) {
                    if ((*(signed char *)((a4 + 0x71BC))) == 0) {
                        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                            t361 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
                            if (t361 != 0) {
                                if (t361 == 1) {
                                    u363 = (((struct o24_float *)(a4))->v);
                                    u364 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                                    if (0.0f > (u363 - u364)) {
                                        return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAE))(t361, a5, a6, a7, 100.0f, u363, u364, (u363 - u364));
                                    }
                                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAC))(t361, a5, a6, a7, 100.0f, u363, u364, (u363 - u364));
                                }
                                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t361, a5, a6, a7, 100.0f);
                            }
                            u366 = (((struct o24_float *)(a4))->v);
                            u367 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                            if (0.0f > (u366 - u367)) {
                                return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAE))(t361, a5, a6, a7, 100.0f, u366, u367, (u366 - u367));
                            }
                            return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAC))(t361, a5, a6, a7, 100.0f, u366, u367, (u366 - u367));
                        }
                        return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t282 << 2)), a5, a6, a7, 100.0f);
                    }
                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t282 << 2)), a5, a6, a7, 100.0f);
                }
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t282 << 2)), a5, a6, a7, 100.0f);
            }
            if ((*(signed char *)((a4 + 0x71BC))) != 2) {
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t282 << 2)), a5, a6, a7, 100.0f);
            }
            if ((*(signed char *)((0x71BC + (*(int *)((a4 + 0x1C)))))) != 2) {
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t282 << 2)), a5, a6, a7, 100.0f);
            }
            if (50.0f > ((((struct o24_float *)(a4))->v))) {
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t282 << 2)), a5, a6, a7, 100.0f);
            }
            t376 = *(signed char *)((a4 + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t376 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t376 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t376 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
            t380 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t380 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t380 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t380 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
            u386 = (((struct oC_float *)(a5))->v);
            if (((((*(float *)(((int)stk + 20))) + ((((struct o8_float *)(a5))->v))) - (*(float *)(((int)stk + 8)))) + u386) > (u386 * 2.0f)) {
                return ((int (*)(float))(0xC0A2BE2))(u386);
            }
            t388 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
            if (t388 == 0) {
                return ((int (*)(void))(0xC0A2BE2))();
            }
            return ((int (*)(void))(0xC0A2BDE))();
        }
        if ((*(signed char *)((a4 + 0x71BC))) != 0) {
            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t282 << 2)), a5, a6, a7, 100.0f);
        }
        t393 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
        if ((t393 != 0) && (t393 != 1)) {
            if (t393 != 2) {
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t393, a5, a6, a7, 100.0f);
            }
            if (((((struct o24_float *)(a4))->v)) > (((((struct o2D4_float *)(a4))->v)) + 50.0f)) {
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t393, a5, a6, a7, 100.0f);
            }
            u397 = (((struct o24_float *)(a4))->v);
            u398 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
            u399 = (u397 - u398);
            if (0.0f > (u397 - u398)) {
                u399 = (u398 - u397);
            }
            if (!(100.0f > u399)) {
                return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t393, a5, a6, a7, 100.0f, (u397 - u398), u397, u398);
            }
            t402 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
            if (t402 == 0) {
                return ((int (*)(void))(0xC0A2BE2))();
            }
            return ((int (*)(void))(0xC0A2BDE))();
        }
        u404 = (((struct o24_float *)(a4))->v);
        u405 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
        u406 = (u404 - u405);
        if (0.0f > (u404 - u405)) {
            u406 = (u405 - u404);
        }
        if (!(100.0f > u406)) {
            return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t393, a5, a6, a7, 100.0f, (u404 - u405), u404, u405);
        }
        t409 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
        if (t409 == 0) {
            return ((int (*)(void))(0xC0A2BE2))();
        }
        return ((int (*)(void))(0xC0A2BDE))();
    }
    t410 = *(signed char *)((a5 + 0x0));
    if ((unsigned char)t410 != 0) {
        if ((unsigned char)t410 != 1) {
            if ((unsigned char)t410 == 2) {
                if ((*(signed char *)((a4 + 0x71BC))) != 0) {
                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t282 << 2)), a5, a6, a7, 100.0f);
                }
                t426 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
                if (t426 != 0) {
                    if (t426 == 1) {
                        u428 = (((struct o24_float *)(a4))->v);
                        u429 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                        u430 = (u428 - u429);
                        if (0.0f > (u428 - u429)) {
                            u430 = (u429 - u428);
                        }
                        if (100.0f > u430) {
                            t432 = *(int *)((a4 + 0x30));
                            t433 = FUN_0c09db78(a4);
                            t434 = *(int *)((a5 + 0x10));
                            t435 = (unsigned short)(t432 - t433);
                            if (((unsigned short)(t432 - t433) & 0x8000) != 0) {
                                t435 = ((unsigned short)(t432 - t433) | 0xFFFF0000);
                            }
                            if ((int)t435 >= (int)(-t434)) {
                                if ((int)t435 <= (int)t434) {
                                    t441 = *(int *)((a4 + 0x30));
                                    t442 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x30));
                                    t443 = (unsigned short)(t441 - t442);
                                    if ((0x8000 & (unsigned short)(t441 - t442)) != 0) {
                                        t443 = ((unsigned short)(t441 - t442) | 0xFFFF0000);
                                    }
                                    if ((int)t443 >= (int)0xFFFFD556) {
                                        if ((int)t443 <= (int)0x2AAA) {
                                            return ((int (*)(int, int, int, int))(0xC0A2BD0))(t443, t434, a6, a7);
                                        }
                                        return ((int (*)(int, int, int, int))(0xC0A2BE2))(t443, t434, a6, a7);
                                    }
                                    return ((int (*)(int, int, int, int))(0xC0A2BE2))(t443, t434, a6, a7);
                                }
                                return ((int (*)(int, int, int, int))(0xC0A2BE2))(t435, t434, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(0xC0A2BE2))(t435, t434, a6, a7);
                        }
                        return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t426, a5, a6, a7, 100.0f, u429, u428, (u428 - u429));
                    }
                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t426, a5, a6, a7, 100.0f);
                }
                u446 = (((struct o24_float *)(a4))->v);
                u447 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                u448 = (u446 - u447);
                if (0.0f > (u446 - u447)) {
                    u448 = (u447 - u446);
                }
                if (100.0f > u448) {
                    t450 = *(int *)((a4 + 0x30));
                    t451 = FUN_0c09db78(a4);
                    t452 = *(int *)((a5 + 0x10));
                    t453 = (unsigned short)(t450 - t451);
                    if (((unsigned short)(t450 - t451) & 0x8000) != 0) {
                        t453 = ((unsigned short)(t450 - t451) | 0xFFFF0000);
                    }
                    if ((int)t453 >= (int)(-t452)) {
                        if ((int)t453 <= (int)t452) {
                            t459 = *(int *)((a4 + 0x30));
                            t460 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x30));
                            t461 = (unsigned short)(t459 - t460);
                            if ((0x8000 & (unsigned short)(t459 - t460)) != 0) {
                                t461 = ((unsigned short)(t459 - t460) | 0xFFFF0000);
                            }
                            if ((int)t461 >= (int)0xFFFFD556) {
                                if ((int)t461 <= (int)0x2AAA) {
                                    return ((int (*)(int, int, int, int))(0xC0A2BD0))(t461, t452, a6, a7);
                                }
                                return ((int (*)(int, int, int, int))(0xC0A2BE2))(t461, t452, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(0xC0A2BE2))(t461, t452, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC0A2BE2))(t453, t452, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC0A2BE2))(t453, t452, a6, a7);
                }
                return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t426, a5, a6, a7, 100.0f, u447, u446, (u446 - u447));
            }
            if ((unsigned char)t410 == 3) {
                if ((*(signed char *)((a4 + 0x71BC))) == 0) {
                    if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                        t468 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
                        if (t468 != 0) {
                            if (t468 == 1) {
                                u470 = (((struct o24_float *)(a4))->v);
                                u471 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                                if (0.0f > (u470 - u471)) {
                                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAE))(t468, a5, a6, a7, 100.0f, u470, u471, (u470 - u471));
                                }
                                return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAC))(t468, a5, a6, a7, 100.0f, u470, u471, (u470 - u471));
                            }
                            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t468, a5, a6, a7, 100.0f);
                        }
                        u473 = (((struct o24_float *)(a4))->v);
                        u474 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                        if (0.0f > (u473 - u474)) {
                            return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAE))(t468, a5, a6, a7, 100.0f, u473, u474, (u473 - u474));
                        }
                        return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAC))(t468, a5, a6, a7, 100.0f, u473, u474, (u473 - u474));
                    }
                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t282 << 2)), a5, a6, a7, 100.0f);
                }
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t282 << 2)), a5, a6, a7, 100.0f);
            }
            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t282 << 2)), a5, a6, a7, 100.0f);
        }
        if ((*(signed char *)((a4 + 0x71BC))) != 2) {
            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t282 << 2)), a5, a6, a7, 100.0f);
        }
        if ((*(signed char *)((0x71BC + (*(int *)((a4 + 0x1C)))))) != 2) {
            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t282 << 2)), a5, a6, a7, 100.0f);
        }
        if (50.0f > ((((struct o24_float *)(a4))->v))) {
            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t282 << 2)), a5, a6, a7, 100.0f);
        }
        t483 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t483 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t483 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t483 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
        t487 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t487 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t487 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t487 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
        u493 = (((struct oC_float *)(a5))->v);
        if (((((*(float *)(((int)stk + 20))) + ((((struct o8_float *)(a5))->v))) - (*(float *)(((int)stk + 8)))) + u493) > (u493 * 2.0f)) {
            return ((int (*)(float))(0xC0A2BE2))(u493);
        }
        t495 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
        if (t495 == 0) {
            return ((int (*)(void))(0xC0A2BE2))();
        }
        return ((int (*)(void))(0xC0A2BDE))();
    }
    if ((*(signed char *)((a4 + 0x71BC))) != 0) {
        return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((0xC338D38 + (t282 << 2)), a5, a6, a7, 100.0f);
    }
    t500 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
    if ((t500 != 0) && (t500 != 1)) {
        if (t500 != 2) {
            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t500, a5, a6, a7, 100.0f);
        }
        if (((((struct o24_float *)(a4))->v)) > (((((struct o2D4_float *)(a4))->v)) + 50.0f)) {
            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t500, a5, a6, a7, 100.0f);
        }
        u504 = (((struct o24_float *)(a4))->v);
        u505 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
        u506 = (u504 - u505);
        if (0.0f > (u504 - u505)) {
            u506 = (u505 - u504);
        }
        if (!(100.0f > u506)) {
            return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t500, a5, a6, a7, 100.0f, (u504 - u505), u504, u505);
        }
        t509 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
        if (t509 == 0) {
            return ((int (*)(void))(0xC0A2BE2))();
        }
        return ((int (*)(void))(0xC0A2BDE))();
    }
    u511 = (((struct o24_float *)(a4))->v);
    u512 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
    u513 = (u511 - u512);
    if (0.0f > (u511 - u512)) {
        u513 = (u512 - u511);
    }
    if (!(100.0f > u513)) {
        return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t500, a5, a6, a7, 100.0f, (u511 - u512), u511, u512);
    }
    t516 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
    if (t516 == 0) {
        return ((int (*)(void))(0xC0A2BE2))();
    }
    return ((int (*)(void))(0xC0A2BDE))();
}

int FUN_0c0c7c2c(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F1;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_1 = a4;
    v0_0 = a5;
    v0_0 = a6;
    v0_0 = a7;
    v0_3 = (((struct oEE_short *)(v0_1))->v);
    (((struct oEE_ushort *)(v0_1))->v) = (v0_3 - 1);
    v0_2 = (0xEE);
    v0_0 = (0xC0DF940);
    v0_0 = (v0_1);
    w0_1 = (1.0f);
    w0_0 = (255.0f);
    if (((short)(v0_3 - 1) == 0)) goto L_C0C7C5C;
    L_C0C7DB8:;
    v0_4 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_4);
    v0_3 = (0xC06231C);
    v0_3 = (0xC6002D0);
    if ((v0_4 == 0)) goto L_C0C7DE4;
    if ((v0_2 == 1)) goto L_C0C7E48;
    if ((v0_2 == 2)) goto L_C0C7DE4;
    if ((v0_2 == 3)) goto L_C0C7E48;
    L_C0C7F14:;
    return v0_2;
    L_C0C7E48:;
    v0_2 = (((struct o2E0_int *)(v0_0))->v);
    w0_1 = FUN_0c0df940();
    v0_2 = ((v0_2 + 0x44));
    w0_3 = (2.14748365e+09f);
    w0_2 = ((w0_1 * w0_0));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_1 * w0_0))) goto L_C0C7E64;
    w0_2 = ((w0_2 - (w0_3 + w0_3)));
    L_C0C7E64:;
    FUN_0c0e6f24(v0_1);
    FUN_0c0e6fe8();
    *(volatile int *)(((0x2E0 + v0_0) + 0x0));
    *(volatile int *)(((0x2E0 + v0_0) + 0x4));
    FUN_0c0e6fdc((0x2E0 + v0_0));
    v0_1 = (((struct oF0_short *)(v0_0))->v);
    (((struct oF0_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_2 = (0xF0);
    if (((short)(v0_1 - 1) != 0)) goto L_C0C7F14;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    v0_1 = *(signed char *)((v0_0 + 0x3));
    FUN_0c06231c(((((struct o2E0_int *)(v0_0))->v)), ((signed char)((((v0_1 << 1) + v0_1) << 2) << 1) + v0_3), 0x21);
    v0_1 = *(signed char *)((v0_0 + 0x3));
    FUN_0c06231c(((((struct o2E4_int *)(v0_0))->v)), ((signed char)((((v0_1 << 1) + v0_1) << 2) << 1) + v0_3), 0x21);
    *(unsigned short *)((((((struct o2E0_int *)(v0_0))->v)) + 0x2)) = 0x21F;
    *(unsigned short *)(((*(int *)(((0x2E0 + v0_0) + 0x4))) + 0x2)) = (*(short *)((((((struct o2E0_int *)(v0_0))->v)) + 0x2)));
    v0_2 = (0x2E0);
    goto L_C0C7F14;
    L_C0C7DE4:;
    v0_1 = (((struct oF0_short *)(v0_0))->v);
    (((struct oF0_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_2 = (0xF0);
    if (((short)(v0_1 - 1) == 0)) goto L_C0C7DF6;
    goto L_C0C7F14;
    L_C0C7DF6:;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    v0_1 = *(signed char *)((v0_0 + 0x3));
    FUN_0c06231c(((((struct o2E0_int *)(v0_0))->v)), ((signed char)((((v0_1 << 1) + v0_1) << 2) << 1) + v0_3), 0x12);
    v0_1 = *(signed char *)((v0_0 + 0x3));
    FUN_0c06231c(((((struct o2E4_int *)(v0_0))->v)), ((signed char)((((v0_1 << 1) + v0_1) << 2) << 1) + v0_3), 0x12);
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    *(unsigned short *)((v0_1 + 0x2)) = ((*(short *)((v0_1 + 0x2))) | 0x200);
    v0_1 = (((struct o2E4_int *)(v0_0))->v);
    *(unsigned short *)((v0_1 + 0x2)) = ((*(short *)((v0_1 + 0x2))) | 0x200);
    (((struct oF0_ushort *)(v0_0))->v) = 0x6;
    v0_1 = (0x200);
    goto L_C0C7E48;
    L_C0C7C5C:;
    *(unsigned short *)((v0_0 + v0_2)) = 0x2;
    v0_2 = (((struct o2E0_int *)(v0_0))->v);
    w0_4 = FUN_0c0df940();
    v0_2 = ((v0_2 + 0x18));
    w0_3 = (2.14748365e+09f);
    w0_2 = ((w0_4 * w0_0));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_4 * w0_0))) goto L_C0C7C7A;
    w0_2 = ((w0_2 - (w0_3 + w0_3)));
    L_C0C7C7A:;
    v0_3 = FUN_0c0e6f24(v0_1);
    w0_2 = ((float)(((v0_3 << 2) + v0_3) << 1));
    FPUL_ = ((((v0_3 << 2) + v0_3) << 1));
    if (((int)(((v0_3 << 2) + v0_3) << 1) >= 0)) goto L_C0C7C9C;
    w0_2 = ((w0_2 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C0C7C9C:;
    *(unsigned int *)((v0_2 + 0x0)) = (int)((w0_2 * 65536.0f) / 360.0f);
    v0_2 = (((struct o2E4_int *)(v0_0))->v);
    w0_4 = FUN_0c0df940();
    v0_2 = ((v0_2 + 0x18));
    w0_3 = (2.14748365e+09f);
    w0_2 = ((w0_4 * w0_0));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_4 * w0_0))) goto L_C0C7CC8;
    w0_2 = ((w0_2 - (w0_3 + w0_3)));
    L_C0C7CC8:;
    v0_3 = FUN_0c0e6f24(v0_1);
    w0_2 = ((float)(((v0_3 << 2) + v0_3) << 1));
    FPUL_ = ((((v0_3 << 2) + v0_3) << 1));
    if (((int)(((v0_3 << 2) + v0_3) << 1) >= 0)) goto L_C0C7CEA;
    w0_2 = ((w0_2 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C0C7CEA:;
    *(unsigned int *)((v0_2 + 0x0)) = (int)((w0_2 * 65536.0f) / 360.0f);
    v0_3 = (((struct o2E0_int *)(v0_0))->v);
    w0_4 = FUN_0c0df940();
    v0_2 = ((v0_3 + 0x24));
    v0_3 = ((v0_3 + 0x1C));
    w0_3 = (2.14748365e+09f);
    w0_2 = ((w0_4 * w0_0));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_4 * w0_0))) goto L_C0C7D1E;
    w0_2 = ((w0_2 - (w0_3 + w0_3)));
    L_C0C7D1E:;
    v0_4 = FUN_0c0e6f24(v0_1);
    w0_2 = ((float)v0_4);
    FPUL_ = (v0_4);
    if (((int)v0_4 >= 0)) goto L_C0C7D38;
    w0_2 = ((w0_2 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C0C7D38:;
    *(float *)((v0_2 + 0x0)) = ((w0_2 / 100.0f) + w0_1);
    *(float *)((v0_3 + 0x0)) = ((w0_2 / 100.0f) + w0_1);
    v0_3 = (((struct o2E4_int *)(v0_0))->v);
    w0_4 = FUN_0c0df940();
    v0_2 = ((v0_3 + 0x24));
    v0_3 = ((v0_3 + 0x1C));
    w0_3 = (2.14748365e+09f);
    w0_2 = ((w0_4 * w0_0));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_4 * w0_0))) goto L_C0C7D66;
    w0_2 = ((w0_2 - (w0_3 + w0_3)));
    L_C0C7D66:;
    v0_4 = FUN_0c0e6f24(v0_1);
    w0_2 = ((float)v0_4);
    v0_5 = ((((int)v0_4 >= 0)));
    FPUL_ = (v0_4);
    if ((v0_5)) goto L_C0C7DAC;
    w0_2 = ((w0_2 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C0C7DAC:;
    *(float *)((v0_2 + 0x0)) = ((w0_2 / 100.0f) + w0_1);
    *(float *)((v0_3 + 0x0)) = ((w0_2 / 100.0f) + w0_1);
    goto L_C0C7DB8;
}

int FUN_0c05d594(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register float u0;
    register float u1;
    register float u2;

    t3 = *(signed char *)((a4 + 0x9));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 == 2) {
                t3 = (((struct o2E0_int *)(a4))->v);
                t4 = *(int *)((t3 + 0x10));
                *(unsigned int *)((t3 + 0x10)) = (t4 + 0x2D8);
                t5 = 0xC05D7A0;
                t6 = (t4 + 0x2D8);
                t4 = 0x2D8;
                t7 = t3;
                t3 = 0x8;
                t8 = 0x8;
                t9 = 0x2;
                t10 = 0x8;
                for (;;) {
                    if ((int)t9 >= (int)0x5) {
                        break;
                    }
                    t4 = 0x2E0;
                    t5 = 0x2C;
                    t10 = 0x2E0;
                    t6 = 0x28;
                    t4 = (t4 + a4);
                    t4 = (t4 + t3);
                    t7 = (*(int *)((t4 + 0x0)));
                    t10 = (t10 + a4);
                    t10 = (t10 + t3);
                    u0 = (*(float *)((t7 + t5)));
                    u0 = (u0 + -1.0f);
                    *(float *)((t7 + t5)) = u0;
                    t5 = 0x4;
                    t10 = (*(int *)((t10 + 0x0)));
                    t6 = (t6 + t10);
                    u1 = (*(float *)((t10 + t5)));
                    u0 = (*(float *)((t6 + 0x0)));
                    t6 = 0x2C;
                    u1 = (u1 + u0);
                    *(float *)((t10 + t5)) = u1;
                    t5 = 0x8;
                    t10 = 0x2E0;
                    t10 = (t10 + a4);
                    t10 = (t10 + t3);
                    t10 = (*(int *)((t10 + 0x0)));
                    t6 = (t6 + t10);
                    u1 = (*(float *)((t10 + t5)));
                    u0 = (*(float *)((t6 + 0x0)));
                    u1 = (u1 + u0);
                    *(float *)((t10 + t5)) = u1;
                    t10 = 0x2E0;
                    t10 = (t10 + a4);
                    t10 = (t10 + t3);
                    t7 = 0x2E0;
                    t10 = (*(int *)((t10 + 0x0)));
                    t6 = 0x30;
                    t5 = 0xC;
                    t6 = (t6 + t10);
                    u1 = (*(float *)((t10 + t5)));
                    u0 = (*(float *)((t6 + 0x0)));
                    t7 = (t7 + a4);
                    t7 = (t7 + t3);
                    u1 = (u1 + u0);
                    *(float *)((t10 + t5)) = u1;
                    t5 = 0x8;
                    t4 = (*(int *)((t7 + 0x0)));
                    u0 = (*(float *)((t4 + t5)));
                    t9 = (t9 + 0x1);
                    if (!(u0 > -40.0f)) {
                        t4 = 0x2E0;
                        t4 = (t4 + a4);
                        t4 = (t4 + t8);
                        t7 = (*(int *)((t4 + 0x0)));
                        *(float *)((t7 + t5)) = -40.0f;
                        t5 = 0x28;
                        t7 = 0x2E0;
                        t7 = (t7 + a4);
                        t7 = (t7 + t8);
                        t4 = (*(int *)((t7 + 0x0)));
                        t7 = 0x2E0;
                        *(float *)((t4 + t5)) = 0.0f;
                        t5 = 0x2C;
                        t7 = (t7 + a4);
                        t7 = (t7 + t8);
                        t4 = (*(int *)((t7 + 0x0)));
                        t7 = 0x2E0;
                        *(float *)((t4 + t5)) = 0.0f;
                        t5 = 0x30;
                        t7 = (t7 + a4);
                        t7 = (t7 + t8);
                        t4 = (*(int *)((t7 + 0x0)));
                        *(float *)((t4 + t5)) = 0.0f;
                    }
                    t3 = (t3 + 0x4);
                    t8 = (t8 + 0x4);
                }
                t3 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t3 + 0x1);
                t4 = 0xEC;
                if ((int)(short)(t3 + 0x1) >= (int)0x1E) {
                    t4 = ((*(signed char *)((a4 + 0x9))) + 0x1);
                }
                return t4;
            }
            return ((int (*)(int, int, int, int))(0xC05D876))(0x2, a5, a6, 0x8);
        }
        *(volatile short *)((a4 + 0xEC));
        t3 = ((int (*)(int))(FUN_0c0e6e5c))(0x2);
        if (t3 == 0) {
            u0 = (((struct o20_float *)(a4))->v);
            (((struct o20_float *)(a4))->v) = (u0 + f4);
            u1 = (u0 + f4);
        } else {
            *(volatile short *)((a4 + 0xEC));
            t3 = ((int (*)(void))(FUN_0c0e6e5c))();
            if (t3 == 2) {
                u0 = (((struct o20_float *)(a4))->v);
                (((struct o20_float *)(a4))->v) = (u0 - f4);
                u2 = (u0 - f4);
            }
            u1 = u2;
        }
        t3 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t3 + 0x1);
        if ((int)(short)(t3 + 0x1) < (int)0x6) {
            return 0xEC;
        }
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x0;
        t4 = 0xC05D6A0;
        t5 = 0x6;
        t6 = (short)(t3 + 0x1);
        t3 = t0;
        t0 = t1;
        u0 = u1;
        for (;;) {
            if ((int)t3 >= (int)0x5) {
                break;
            }
            t5 = 0x2E0;
            t5 = (t5 + a4);
            t5 = (t5 + t0);
            t6 = (*(int *)((t5 + 0x0)));
            t5 = 0x28;
            t5 = (t5 + t6);
            t4 = (FUN_0c0df920());
            t6 = 0xC0E6E5C;
            t4 = 0xA;
            t4 = (((int (*)(void))(FUN_0c0e6e5c))());
            t4 = (t4 - 10);
            t6 = 0x2E0;
            t6 = (t6 + a4);
            t6 = (t6 + t0);
            u0 = (float)t4;
            *(float *)(((t5) + 0x0)) = u0;
            t5 = (*(int *)((t6 + 0x0)));
            t6 = 0x2C;
            t6 = (t6 + t5);
            t1 = t6;
            t4 = (FUN_0c0df920());
            t4 = 0xA;
            t4 = (((int (*)(void))(FUN_0c0e6e5c))());
            t4 = (t4 + 0x28);
            t6 = 0x2E0;
            t6 = (t6 + a4);
            t6 = (t6 + t0);
            u0 = (float)t4;
            *(float *)((t1 + 0x0)) = u0;
            t5 = (*(int *)((t6 + 0x0)));
            t6 = 0x30;
            t6 = (t6 + t5);
            t1 = t6;
            t4 = (FUN_0c0df920());
            t4 = 0x14;
            t4 = (((int (*)(void))(FUN_0c0e6e5c))());
            u0 = (float)t4;
            t6 = 0xC0E24F0;
            u0 = (-u0);
            *(float *)((t1 + 0x0)) = u0;
            t4 = (FUN_0c0e24f0(((*(int *)((((0x2E0 + a4) + t0) + 0x0))) + 0x28)));
            t5 = 0x2E0;
            t4 = 0x28;
            t3 = (t3 + 0x1);
            t5 = (t5 + a4);
            t5 = (t5 + t0);
            t6 = (*(int *)((t5 + 0x0)));
            u0 = (*(float *)((t6 + t4)));
            u0 = (u0 * 10.0f);
            *(float *)((t6 + t4)) = u0;
            t4 = 0x2C;
            t6 = 0x2E0;
            t6 = (t6 + a4);
            t6 = (t6 + t0);
            t5 = (*(int *)((t6 + 0x0)));
            t6 = 0x2E0;
            u0 = (*(float *)((t5 + t4)));
            t6 = (t6 + a4);
            u0 = (u0 * 10.0f);
            t6 = (t6 + t0);
            t0 = (t0 + 0x4);
            *(float *)((t5 + t4)) = u0;
            t4 = 0x30;
            t5 = (*(int *)((t6 + 0x0)));
            u0 = (*(float *)((t5 + t4)));
            u0 = (u0 * 10.0f);
            *(float *)((t5 + t4)) = u0;
        }
        return FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0x2D);
    }
    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 + 0x1);
    if (((int)(short)(t0 + 0x1) < (int)0x12C) && (t2 = *(signed char *)((a4 + 0x30D)), t2 == 0)) {
        t0 = FUN_0c0ac5c4(a4, a5, a6, 0x8);
        t1 = t0;
        if (t0 == 0) {
        } else {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            (((struct o106_uchar *)(a4))->v) = 0x1;
            (((struct o107_uchar *)(a4))->v) = 0x1;
            *(unsigned char *)((((((struct o2F4_int *)(a4))->v)) + 0x0)) = 0x0;
            t1 = 0x2F4;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x0;
        (((struct o106_uchar *)(a4))->v) = 0x1;
        (((struct o107_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct o2F4_int *)(a4))->v)) + 0x0)) = 0x0;
        t0 = 0x2F4;
    }
    return t0;
}

float FUN_0c0b8f9a(int a4, int a5, int a6, int a7)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R11;
    int R13;
    register float F0;
    register float F1;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_4 = a5;
    v0_2 = a6;
    v0_3 = a7;
    v0_6 = *(signed char *)((v0_1 + 0x8));
    v0_5 = (v0_6);
    v0_0 = (v0_1);
    if ((v0_6 == 0)) goto L_C0B8FC8;
    if ((v0_5 == 1)) goto L_C0B8FE0;
    if ((v0_5 != 2)) goto L_C0B8FB8;
    w0_0 = (((struct o50_float *)(v0_0))->v);
    (((struct o50_float *)(v0_0))->v) = (w0_0 - 0.099999994f);
    (((struct o58_float *)(v0_0))->v) = (w0_0 - 0.099999994f);
    (((struct o54_float *)(v0_0))->v) = (w0_0 - 0.099999994f);
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_5 = (0xEC);
    FPUL_ = (0x3DCCCCCC);
    if (((short)(v0_1 - 1) != 0)) goto L_C0B924C;
    L_C0B923A:;
    *(unsigned char *)((v0_0 + 0x8)) = 0x4;
    v0_5 = (0x4);
    L_C0B924C:;
    return F0;
    L_C0B8FB8:;
    if ((v0_5 != 3)) goto L_C0B8FC0;
    FUN_0c034bfc(v0_0);
    L_C0B9246:;
    v0_5 = ((FUN_0c059330(v0_0, v0_4, v0_2, v0_3)));
    goto L_C0B924C;
    L_C0B8FC0:;
    goto L_C0B9246;
    L_C0B8FE0:;
    v0_5 = (((struct o2E0_int *)(v0_0))->v);
    *(unsigned int *)((v0_5 + 0x14)) = ((*(int *)((v0_5 + 0x14))) + 0x11C7);
    v0_5 = (0xF0);
    if (!((((((struct oF0_short *)(v0_0))->v)) != 0))) goto L_C0B91BA;
    *(unsigned short *)((v0_0 + v0_5)) = ((*(short *)((v0_0 + v0_5))) - 1);
    v0_6 = *(short *)((v0_0 + (v0_5 - 2)));
    *(unsigned short *)((v0_0 + (v0_5 - 2))) = (v0_6 - 1);
    if (((short)(v0_6 - 1) == 0)) goto L_C0B9010;
    goto L_C0B91BA;
    L_C0B91BA:;
    FUN_0c062050((v0_0 + 0x20), (v0_0 + 0x20), (v0_0 + 0x38));
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) - 1);
    v0_1 = (0x0);
    if ((((((struct oEC_short *)(v0_0))->v)) != 0)) goto L_C0B91EC;
    (((struct o101_uchar *)(v0_0))->v) = v0_1;
    (((struct o102_uchar *)(v0_0))->v) = v0_1;
    *(unsigned char *)((v0_0 + 0x8)) = 0x2;
    (((struct oEC_ushort *)(v0_0))->v) = 0xA;
    L_C0B91EC:;
    if (((*(signed char *)((v0_0 + 0x108))) != 0)) goto L_C0B91FC;
    if (((*(signed char *)((v0_0 + 0x10A))) == 0)) goto L_C0B9208;
    L_C0B91FC:;
    (((struct o101_uchar *)(v0_0))->v) = v0_1;
    (((struct o102_uchar *)(v0_0))->v) = v0_1;
    *(unsigned char *)((v0_0 + 0x8)) = 0x3;
    L_C0B9208:;
    v0_1 = FUN_0c0555dc();
    v0_5 = (v0_1);
    if ((v0_1 != 0)) goto L_C0B923A;
    goto L_C0B924C;
    L_C0B9010:;
    v0_5 = *(signed char *)((v0_0 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)((-v0_5) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242(((((unsigned short)((unsigned short)((-v0_5) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-v0_5) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
    FUN_0c06206e((((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC), (v0_0 + 0x20));
    if (((*(float *)(((int)stk + 12))) != 0.0f)) goto L_C0B9062;
    *(float *)(((int)stk + 12)) = 9.99999997e-07f;
    L_C0B9062:;
    v0_5 = !(0.0f > (*(float *)(((int)stk + 12))));
    R13 = (0x8000);
    v0_1 = ((0xFFFF & (FUN_0c0df360(v0_1, v0_4, v0_2, v0_3, ((-(*(float *)(((int)stk + 20)))) / (*(float *)(((int)stk + 12))))))));
    if (v0_5) goto L_C0B9086;
    v0_1 = ((v0_1 + R13));
    L_C0B9086:;
    v0_4 = *(int *)((v0_0 + 0x30));
    v0_5 = ((unsigned short)((unsigned short)(0x4000 + v0_1) - v0_4) & R13) == 0;
    v0_1 = ((unsigned short)((unsigned short)(0x4000 + v0_1) - v0_4));
    if (v0_5) goto L_C0B909C;
    v0_1 = ((v0_1 | 0xFFFF0000));
    L_C0B909C:;
    if (((int)v0_1 <= 0)) goto L_C0B90E0;
    v0_4 = (0xAAA);
    if (((int)v0_1 <= (int)0xAAA)) goto L_C0B90E8;
    v0_1 = (v0_4);
    L_C0B90E8:;
    *(unsigned int *)((v0_0 + 0x30)) = (unsigned short)((*(int *)((v0_0 + 0x30))) + v0_1);
    w0_0 = *(float *)(((int)stk + 12));
    *(float *)(((int)stk + 8)) = w0_0;
    w0_1 = *(float *)(((int)stk + 20));
    *(float *)(((int)stk + 4)) = w0_1;
    w0_1 = (w0_1 * w0_1);
    w0_1 = w0_1 + w0_0 * (*(float *)(((int)stk + 8)));
    w0_0 = FUN_0c0df340(w0_1);
    w0_1 = (w0_0);
    if ((w0_0 != 0.0f)) goto L_C0B911C;
    w0_1 = (9.99999997e-07f);
    L_C0B911C:;
    v0_2 = FUN_0c0df400(v0_1, v0_4, v0_2, v0_3, (-(*(float *)(((int)stk + 16)))), w0_1);
    v0_3 = *(int *)((v0_0 + 0x2C));
    v0_1 = ((unsigned short)(v0_2 - v0_3));
    if (((R13 & (unsigned short)(v0_2 - v0_3)) == 0)) goto L_C0B9136;
    v0_1 = ((v0_1 | 0xFFFF0000));
    L_C0B9136:;
    if (((int)v0_1 <= 0)) goto L_C0B9158;
    v0_4 = (0x71C);
    if (((int)v0_1 <= (int)0x71C)) goto L_C0B9160;
    v0_1 = (v0_4);
    L_C0B9160:;
    *(unsigned int *)((v0_0 + 0x2C)) = (unsigned short)((*(int *)((v0_0 + 0x2C))) + v0_1);
    (((struct oEE_ushort *)(v0_0))->v) = 0x1;
    (((struct o44_float *)(v0_0))->v) = (((((struct o44_float *)(v0_0))->v)) + 0.277777761f);
    (((struct o3C_float *)(v0_0))->v) = ((FUN_0c0dfa50((-(*(int *)((v0_0 + 0x2C)))))) * ((((struct o44_float *)(v0_0))->v)));
    (((struct o38_float *)(v0_0))->v) = ((FUN_0c0df4d0(((-(*(int *)((v0_0 + 0x30)))) + 0x14000))) * ((((struct o44_float *)(v0_0))->v)));
    (((struct o40_float *)(v0_0))->v) = ((FUN_0c0dfa50(((-(*(int *)((v0_0 + 0x30)))) + 0x14000))) * ((((struct o44_float *)(v0_0))->v)));
    goto L_C0B91BA;
    L_C0B9158:;
    v0_4 = (0xFFFFF8E4);
    if (((int)v0_1 >= (int)0xFFFFF8E4)) goto L_C0B9160;
    v0_1 = (v0_4);
    goto L_C0B9160;
    L_C0B90E0:;
    v0_4 = (0xFFFFF556);
    if (((int)v0_1 >= (int)0xFFFFF556)) goto L_C0B90E8;
    v0_1 = (v0_4);
    goto L_C0B90E8;
    L_C0B8FC8:;
    (((struct oEC_ushort *)(v0_0))->v) = 0x5A;
    (((struct oEE_ushort *)(v0_0))->v) = 0x19;
    (((struct oF0_ushort *)(v0_0))->v) = 0x28;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C0B8FE0;
}

int FUN_0c0a9d9c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 == 1) {
            t3 = *(signed char *)((a4 + 0x9));
            if (t3 != 0) {
                if (t3 != 1) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                    t3 = 0xEE;
                    if (((*(signed char *)((a4 + 0x4))) != 0) && (t0 = (((struct oEE_short *)(a4))->v), (int)t0 <= (int)0x7)) {
                    } else {
                        *(unsigned char *)((a4 + 0x9)) = 0x2;
                        t3 = 0x2;
                    }
                    t0 = t3;
                } else {
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 10.0f);
                    if (!(((((struct o24_float *)(a4))->v)) > 0.0f)) {
                    } else {
                        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                        (((struct o24_float *)(a4))->v) = 0.0f;
                    }
                    t0 = 0x24;
                }
                t3 = t0;
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct o24_float *)(a4))->v) = -100.0f;
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 10.0f);
                if (!(((((struct o24_float *)(a4))->v)) > 0.0f)) {
                } else {
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                    (((struct o24_float *)(a4))->v) = 0.0f;
                }
                t3 = 0x24;
            }
            return t3;
        }
        if (t2 == 2) {
            t0 = *(signed char *)((a4 + 0x9));
            if (t0 != 0) {
                if (t0 != 1) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                    *(unsigned int *)(((*(int *)((((((((struct oF0_short *)(a4))->v)) << 2) + (0x2E0 + a4)) + 0x0))) + 0x10)) = 0xFFFFEFA5;
                    t0 = 0xF0;
                } else {
                    t3 = *(int *)((((((((struct oF0_short *)(a4))->v)) << 2) + (0x2E0 + a4)) + 0x0));
                    *(unsigned int *)((t3 + 0x10)) = ((*(int *)((t3 + 0x10))) - 0x1000);
                    t3 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t3 - 1);
                    t4 = 0xEC;
                    if ((int)(short)(t3 - 1) >= 0) {
                    } else {
                        t3 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t3 + 0x1);
                        t4 = (t3 + 0x1);
                    }
                    t0 = t4;
                }
                t3 = t0;
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x1E;
                t0 = *(int *)((((((((struct oF0_short *)(a4))->v)) << 2) + (0x2E0 + a4)) + 0x0));
                *(unsigned int *)((t0 + 0x10)) = ((*(int *)((t0 + 0x10))) - 0x1000);
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                t4 = 0xEC;
                if ((int)(short)(t0 - 1) >= 0) {
                } else {
                    t0 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
                    t4 = (t0 + 0x1);
                }
                t3 = t4;
            }
            return t3;
        }
        if (t2 == 3) {
            t0 = *(signed char *)((a4 + 0x9));
            if (t0 != 0) {
                if (t0 != 1) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                    t0 = 0x0;
                } else {
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 10.0f);
                    t2 = 0x24;
                    if ((*(float *)0xC0AA0A4) > ((((struct o24_float *)(a4))->v))) {
                        t3 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t3 + 0x1);
                        t2 = (t3 + 0x1);
                    }
                    t0 = t2;
                }
                t2 = t0;
            } else {
                t0 = *(signed char *)0xC7F2EE7;
                t3 = (unsigned char)t0;
                if ((int)(unsigned char)t0 >= (int)0x4) {
                    t0 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
                    t3 = (t0 + 0x1);
                }
                t2 = t3;
            }
            return t2;
        }
        return FUN_0c059330(a4, a5, a6, a7);
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    (((struct oEE_ushort *)(a4))->v) = ((((struct oF0_short *)(a4))->v));
    if ((int)((((struct oF0_short *)(a4))->v)) >= (int)0x7) {
        (((struct oF0_ushort *)(a4))->v) = 0x7;
    }
    if ((int)((((struct oF0_short *)(a4))->v)) < 0) {
        (((struct oF0_ushort *)(a4))->v) = 0x0;
    }
    t0 = 0x0;
    if ((unsigned char)(*(signed char *)0xC7F2EE6) != 2) {
        t0 = 0x1;
    }
    *(unsigned char *)((a4 + 0x4)) = t0;
    t2 = t0;
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)0x8) {
            break;
        }
        t2 = (*(signed char *)((a4 + 0x3)));
        t3 = 0xC7F2E45;
        t4 = t0;
        t4 = (t4 << 2);
        t2 = ((unsigned short)t2 * (unsigned short)0x78);
        t2 = (unsigned char)t2;
        t2 = (*(signed char *)((t3 + t2)));
        t5 = t2;
        t2 = (t2 << 2);
        t2 = (t2 << 1);
        t2 = (t2 + t5);
        t5 = 0xC0623A6;
        t2 = (signed char)t2;
        t2 = (FUN_0c0623a6((*(int *)((((0x2E0 + a4) + t4) + 0x0))), 0xC664A78, ((*(signed char *)((((0xC1525BF + t2) + t0) + 0x0))) + 0x3A)));
        t2 = 0xF2;
        if ((int)t0 < (int)(*(short *)((a4 + t2)))) {
            t5 = 0x2E0;
            t5 = (t5 + a4);
            t5 = (t5 + t4);
            *(unsigned char *)(((*(int *)((t5 + 0x0))) + 0x0)) = 0x1;
        }
        t5 = 0x2E0;
        t5 = (t5 + a4);
        t5 = (t5 + t4);
        t6 = *(int *)((t5 + 0x0));
        t2 = 0xF;
        t3 = 0x2E0;
        t5 = t0;
        *(unsigned short *)((t6 + 0x2)) = t2;
        t5 = (t5 << 1);
        t2 = 0xC1529F4;
        t3 = (t3 + a4);
        t5 = (t5 + t0);
        t3 = (t3 + t4);
        t5 = (t5 << 2);
        t3 = (*(int *)((t3 + 0x0)));
        t5 = (signed char)t5;
        t3 = (t3 + 0x4);
        t5 = (t5 + t2);
        t2 = 0xC;
        t2 = (FUN_0c0e6fe8());
        t2 = 0xEE;
        if ((int)t0 >= (int)(*(short *)((a4 + t2)))) {
            t5 = 0x2E0;
            t5 = (t5 + a4);
            t5 = (t5 + t4);
            t4 = *(int *)((t5 + 0x0));
            t5 = 0x8000;
            t3 = (*(int *)((t4 + 0x10)));
            t3 = (t3 + t5);
            *(unsigned int *)((t4 + 0x10)) = t3;
            t4 = t3;
            t6 = t5;
        }
        t2 = (*(signed char *)((a4 + 0x4)));
        t3 = t4;
        t5 = t6;
        t0 = (t0 + 0x1);
        if (t2 == 0) {
            t2 = 0xF0;
            t5 = 0x2E0;
            t5 = (t5 + a4);
            t3 = (*(int *)(((((*(short *)((a4 + t2))) << 2) + t5) + 0x0)));
            *(unsigned int *)((t3 + 0x10)) = 0xFFFFEFA5;
        }
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x9)) = 0x0;
            t0 = 0xEE;
            if (((*(signed char *)((a4 + 0x4))) != 0) && (t1 = (((struct oEE_short *)(a4))->v), (int)t1 <= (int)0x7)) {
            } else {
                *(unsigned char *)((a4 + 0x9)) = 0x2;
                t0 = 0x2;
            }
            t1 = t0;
        } else {
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 10.0f);
            if (!(((((struct o24_float *)(a4))->v)) > 0.0f)) {
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct o24_float *)(a4))->v) = 0.0f;
            }
            t1 = 0x24;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        (((struct o24_float *)(a4))->v) = -100.0f;
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 10.0f);
        if (!(((((struct o24_float *)(a4))->v)) > 0.0f)) {
        } else {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            (((struct o24_float *)(a4))->v) = 0.0f;
        }
        t0 = 0x24;
    }
    return t0;
}

int FUN_0c0e02c0(int a4, int a5)
{
    int stk[2];

    register int R2;
    register int R6;
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
    v0_6 = a4;
    v0_7 = a5;
    v0_0 = (0xC7F89F0);
    v0_1 = (0x0);
    v0_2 = (0xC7F8C08);
    R13 = (0x3);
    v0_3 = (v0_7);
    v0_4 = (0x8);
    v0_5 = (v0_6);
    L_C0E0550:;
    v0_7 = *(signed char *)((v0_5 + 0x0));
    v0_6 = (v0_7);
    if (((signed char)v0_7 == 0)) goto L_C0E055C;
    if (((signed char)v0_6 == 37)) goto L_C0E02FA;
    L_C0E0504:;
    *(unsigned char *)((v0_0 + v0_1)) = v0_6;
    v0_1 = ((v0_1 + 0x1));
    L_C0E054E:;
    v0_5 = ((v0_5 + 0x1));
    goto L_C0E0550;
    L_C0E02FA:;
    v0_7 = *(signed char *)(((v0_5 + 0x1) + 0x0));
    v0_8 = ((signed char)v0_7);
    v0_6 = (v0_7);
    v0_5 = ((v0_5 + 0x1));
    if (((signed char)v0_7 != 45)) goto L_C0E0310;
    v0_8 = (((*(signed char *)((v0_2 + 0x3))) | 0x80));
    L_C0E0348:;
    *(unsigned char *)((v0_2 + 0x3)) = v0_8;
    goto L_C0E02FA;
    L_C0E0310:;
    if ((v0_8 != 43)) goto L_C0E0320;
    v0_8 = (((*(signed char *)((v0_2 + 0x3))) | 0x40));
    goto L_C0E0348;
    L_C0E0320:;
    if (((signed char)v0_6 == 32)) goto L_C0E02FA;
    v0_8 = ((signed char)v0_6);
    if (((signed char)v0_6 != 35)) goto L_C0E0340;
    v0_8 = (((*(signed char *)((v0_2 + 0x3))) | 0x20));
    goto L_C0E0348;
    L_C0E0340:;
    if ((v0_8 != 48)) goto L_C0E0350;
    v0_8 = (((*(signed char *)((v0_2 + 0x3))) | 0x10));
    goto L_C0E0348;
    L_C0E0350:;
    v0_7 = ((signed char)v0_6);
    if (((signed char)v0_6 == 100)) goto L_C0E0380;
    if ((v0_7 == 120)) goto L_C0E0380;
    if ((v0_7 == 88)) goto L_C0E0380;
    if ((v0_7 == 115)) goto L_C0E0380;
    if ((v0_7 == 102)) goto L_C0E0380;
    if ((v0_7 == 112)) goto L_C0E0380;
    if ((v0_7 == 99)) goto L_C0E0380;
    if ((v0_7 != 0)) goto L_C0E02FA;
    L_C0E0380:;
    v0_8 = ((signed char)v0_6);
    if (((signed char)v0_6 != 88)) goto L_C0E038A;
    *(unsigned int *)(((int)stk + 4)) = (v0_3 + 0x4);
    if ((((v0_3 + 0x4) & R13) == 0)) goto L_C0E04A0;
    v0_3 = ((v0_3 + 0x8));
    L_C0E04A2:;
    *(unsigned int *)(((int)stk + 0)) = (v0_3 - 4);
    if ((((v0_3 - 4) & R13) == 0)) goto L_C0E04C0;
    v0_6 = ((v0_3 - 8));
    L_C0E04C2:;
    *(volatile int *)((v0_6 + 0x0));
    v0_8 = ((FUN_0c0e0160()));
    L_C0E04C6:;
    v0_1 = ((v0_1 + v0_8));
    goto L_C0E054E;
    L_C0E04C0:;
    v0_6 = ((*(int *)(((int)stk + 0))));
    goto L_C0E04C2;
    L_C0E04A0:;
    v0_3 = ((*(int *)(((int)stk + 4))));
    goto L_C0E04A2;
    L_C0E038A:;
    if ((v0_8 != 99)) goto L_C0E0392;
    v0_7 = ((v0_3 + 0x4));
    if ((((v0_3 + 0x4) & R13) == 0)) goto L_C0E04E0;
    v0_3 = ((v0_3 + 0x8));
    L_C0E04E2:;
    v0_6 = ((v0_3 - 4));
    if ((((v0_3 - 4) & R13) == 0)) goto L_C0E0500;
    v0_6 = ((v0_3 - 8));
    L_C0E0502:;
    v0_6 = ((*(int *)((v0_6 + 0x0))));
    goto L_C0E0504;
    L_C0E0500:;
    v0_6 = (v0_6);
    goto L_C0E0502;
    L_C0E04E0:;
    v0_3 = (v0_7);
    goto L_C0E04E2;
    L_C0E0392:;
    if ((v0_8 == 100)) goto L_C0E03C0;
    if ((v0_8 != 102)) goto L_C0E039E;
    goto L_C0E054E;
    L_C0E039E:;
    if ((v0_8 == 112)) goto L_C0E0410;
    if ((v0_8 != 115)) goto L_C0E03AA;
    v0_7 = ((v0_3 + 0x4));
    if ((((v0_3 + 0x4) & R13) == 0)) goto L_C0E0520;
    v0_3 = ((v0_3 + 0x8));
    L_C0E0522:;
    v0_6 = ((v0_3 - 4));
    if ((((v0_3 - 4) & R13) == 0)) goto L_C0E0530;
    v0_6 = ((v0_3 - 8));
    L_C0E0530:;
    v0_6 = ((*(int *)((v0_6 + 0x0))));
    L_C0E0548:;
    if (((*(signed char *)((v0_6 + 0x0))) != 0)) goto L_C0E0540;
    goto L_C0E054E;
    L_C0E0540:;
    *(unsigned char *)((v0_0 + v0_1)) = (*(signed char *)((v0_6 + 0x0)));
    v0_1 = ((v0_1 + 0x1));
    v0_6 = ((v0_6 + 0x1));
    goto L_C0E0548;
    L_C0E0520:;
    v0_3 = (v0_7);
    goto L_C0E0522;
    L_C0E03AA:;
    if ((v0_8 == 120)) goto L_C0E041E;
    goto L_C0E054E;
    L_C0E041E:;
    *(unsigned int *)(((int)stk + 0)) = (v0_3 + 0x4);
    if ((((v0_3 + 0x4) & R13) == 0)) goto L_C0E0440;
    v0_3 = ((v0_3 + 0x8));
    L_C0E0442:;
    *(unsigned int *)(((int)stk + 4)) = (v0_3 - 4);
    if ((((v0_3 - 4) & R13) == 0)) goto L_C0E0460;
    v0_6 = ((v0_3 - 8));
    L_C0E0462:;
    *(volatile int *)((v0_6 + 0x0));
    v0_8 = ((FUN_0c0e0160()));
    goto L_C0E04C6;
    L_C0E0460:;
    v0_6 = ((*(int *)(((int)stk + 4))));
    goto L_C0E0462;
    L_C0E0440:;
    v0_3 = ((*(int *)(((int)stk + 0))));
    goto L_C0E0442;
    L_C0E0410:;
    *(unsigned char *)((v0_2 + 0x3)) = ((*(signed char *)((v0_2 + 0x3))) | 0x2);
    *(unsigned char *)((v0_2 + 0x3)) = ((*(signed char *)((v0_2 + 0x3))) | 0x8);
    *(unsigned int *)((v0_2 + 0xC)) = v0_4;
    goto L_C0E041E;
    L_C0E03C0:;
    *(unsigned int *)(((int)stk + 0)) = (v0_3 + 0x4);
    v0_7 = ((v0_1 + v0_0));
    if ((((v0_3 + 0x4) & R13) == 0)) goto L_C0E03E0;
    v0_3 = ((v0_3 + 0x8));
    L_C0E03E2:;
    *(unsigned int *)(((int)stk + 4)) = (v0_3 - 4);
    if ((((v0_3 - 4) & R13) == 0)) goto L_C0E0400;
    v0_6 = ((v0_3 - 8));
    L_C0E0402:;
    v0_8 = ((FUN_0c0e0210((*(int *)((v0_6 + 0x0))), v0_7)));
    goto L_C0E04C6;
    L_C0E0400:;
    v0_6 = ((*(int *)(((int)stk + 4))));
    goto L_C0E0402;
    L_C0E03E0:;
    v0_3 = ((*(int *)(((int)stk + 0))));
    goto L_C0E03E2;
    L_C0E055C:;
    *(unsigned char *)((v0_0 + v0_1)) = 0x0;
    return v0_1;
}

int FUN_0c0a4f28(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE5;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                return FUN_0c0a4604();
            }
            return FUN_0c0a4544();
        }
        *(unsigned char *)0xC7F2EE5 = ((*(signed char *)0xC7F2EE5) + 0x1);
        FUN_0c058f3a();
        FUN_0c058f44();
        FUN_0c058fa2();
        FUN_0c0a32dc();
        FUN_0c060c88(0x5);
        *(unsigned char *)0xC7F3082 = 0x0;
        return FUN_0c0a445c();
    }
    *(unsigned char *)0xC7F2EE5 = 0x2;
    FUN_0c058f3a();
    FUN_0c058f44();
    FUN_0c058fa2();
    FUN_0c060c88(0x5);
    return FUN_0c0a445c();
}

int FUN_0c025a0e(int a4, int a5, int a6, int a7)
{
    return ((int (*)(int, int, int, int))(0xC025CDE))(a4, a5, a6, a7);
}

int FUN_0c0a3988(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)(((0x71A5 + a4) + 0x0));
    t1 = *(signed char *)((a4 + 0x71A4));
    if (((t1 << 8) + (unsigned char)t0) == 83) {
        return ((int (*)(int, int, int, int))(0xC0A3CA2))(a4, 0x0, 0xF, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x154) {
        return ((int (*)(int, int, int, int))(0xC0A3CA2))(a4, 0xB, 0x8, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x200) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x203) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x206) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x209) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x20C) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x20F) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x212) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x21B) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x221) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x224) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x227) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x22A) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x22D) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x230) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x233) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x23C) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x23F) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x245) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x24A) {
        return ((int (*)(int, int, int, int))(0xC0A3CA2))(a4, 0x4, 0x5, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x24B) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x256) {
        return ((int (*)(int, int, int, int))(0xC0A3CA2))(a4, 0x9, 0x3, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x258) {
        return ((int (*)(int, int, int, int))(0xC0A3CA2))(a4, 0x9, 0x3, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x260) {
        return ((int (*)(int, int, int, int))(0xC0A3C96))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x265) {
        return ((int (*)(int, int, int, int))(0xC0A3CA2))(a4, 0x4, 0x5, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x26C) {
        return ((int (*)(int, int, int, int))(0xC0A3C96))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x270) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x274) {
        return ((int (*)(int, int, int, int))(0xC0A3C96))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x280) {
        return ((int (*)(int, int, int, int))(0xC0A3C96))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x298) {
        return ((int (*)(int, int, int, int))(0xC0A3C96))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2A0) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2A1) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2A2) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2A3) {
        return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) != 0x2AE) {
        if (((t1 << 8) + (unsigned char)t0) != 0x2B0) {
            if (((t1 << 8) + (unsigned char)t0) == 0x2B1) {
                return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
            }
            if (((t1 << 8) + (unsigned char)t0) != 0x2B4) {
                if (((t1 << 8) + (unsigned char)t0) == 0x2B9) {
                    return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
                }
                if (((t1 << 8) + (unsigned char)t0) == 0x2BB) {
                    return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
                }
                if (((t1 << 8) + (unsigned char)t0) == 0x2BD) {
                    return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
                }
                if (((t1 << 8) + (unsigned char)t0) != 0x2BF) {
                    if ((((t1 << 8) + (unsigned char)t0) != 0x2C5) && (((t1 << 8) + (unsigned char)t0) != 0x2C9)) {
                        if ((((t1 << 8) + (unsigned char)t0) != 0x2EB) && (((t1 << 8) + (unsigned char)t0) != 0x2EC)) {
                            if ((((t1 << 8) + (unsigned char)t0) != 0x2F3) && (((t1 << 8) + (unsigned char)t0) != 0x2F4)) {
                                if ((((t1 << 8) + (unsigned char)t0) != 0x2F5) && (((t1 << 8) + (unsigned char)t0) != 0x2F6)) {
                                    if ((((t1 << 8) + (unsigned char)t0) != 0x2FD) && (((t1 << 8) + (unsigned char)t0) != 0x2FE)) {
                                        if (((t1 << 8) + (unsigned char)t0) == 0x307) {
                                            return ((int (*)(int, int, int, int))(0xC0A3CA2))(a4, 0x0, 0x1, a7);
                                        }
                                        return ((t1 << 8) + (unsigned char)t0);
                                    }
                                    return ((int (*)(int, int, int, int))(0xC0A3CA2))(a4, 0xA, 0x5, a7);
                                }
                                return ((int (*)(int, int, int, int))(0xC0A3CA2))(a4, 0x5, 0x5, a7);
                            }
                            return ((int (*)(int, int, int, int))(0xC0A3CA2))(a4, 0x16, 0x5, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC0A3CA2))(a4, 0x10, 0x3, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC0A3CA2))(a4, 0x4, 0x4, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0A3C2E))(a4, a5, a6, a7);
            }
        }
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            return ((int (*)(int, int, int, int))(0xC0A3CA2))(a4, 0x0, 0xD, a7);
        }
        return 0x71D4;
    }
    return ((int (*)(int, int, int, int))(0xC0A3CA2))(a4, 0x24, 0xE, a7);
}
