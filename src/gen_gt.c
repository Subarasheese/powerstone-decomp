/* Straight-line functions with calls and guards (batch gen_gt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0555dc(void);
int FUN_0c059330(int);
float FUN_0c0df340(float);
extern int FUN_0c0df360();
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e6f24(void);
int thunk_FUN_0c062242(int);
int FUN_0c0bb4f2(int a4);

int FUN_0c0bb4f2(int a4)
{
    int stk[5];
    register int t0;
    register int t3;
    register int t4;
    register int t7;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u18;
    register float u20;
    register float u22;
    register float t23;
    register int t35;
    register int t41;
    register int t47;
    register float u50;
    register int t53;
    register int t65;
    register int t71;
    register int t77;
    register float u80;
    register int t83;
    register int t89;
    register float u92;
    register int t100;
    register float u102;
    register float t106;
    register float u109;
    register float u116;
    register int t117;
    register int t134;
    register int t137;
    register int t149;
    register int t160;
    register int t162;
    register int t164;
    register int t223;
    register int t226;
    register int t246;
    register int t247;
    register float u248;
    register float u249;
    register float u250;
    register float u251;
    register float u252;
    register float u253;
    register float u254;
    register float u256;
    register float u258;
    register float u260;
    register float t261;
    register int t262;
    register float t263;
    register float u266;
    register float t270;
    register float u273;
    register int t281;
    register int t284;
    register int t289;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x7;
    }
    t3 = *(signed char *)((a4 + 0x8));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 == 2) {
                t4 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t4 - 1);
                t289 = 0xEC;
                if ((short)(t4 - 1) != 0) {
                } else {
                    t7 = *(signed char *)(((*(int *)(((*(int *)((a4 + 0x1C))) + 0x1C))) + 0x3));
                    *(unsigned int *)(((int)stk + 4)) = ((unsigned short)((unsigned short)t7 * (unsigned short)0x72D0) + 0xC7E40C4);
                    thunk_FUN_0c062242(((((unsigned short)((unsigned short)t7 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t7 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
                    u10 = (((struct o20_float *)(a4))->v);
                    u11 = *(float *)(((int)stk + 8));
                    u12 = (((struct o24_float *)(a4))->v);
                    u13 = *(float *)(((int)stk + 12));
                    u14 = (((struct o28_float *)(a4))->v);
                    u15 = *(float *)(((int)stk + 16));
                    u16 = (u11 - u10);
                    if ((u11 - u10) == 0.0f) {
                        u16 = 9.99999997e-07f;
                    }
                    u18 = (u13 - u12);
                    if ((u13 - u12) == 0.0f) {
                        u18 = 9.99999997e-07f;
                    }
                    u20 = (u15 - u14);
                    if ((u15 - u14) == 0.0f) {
                        u20 = 9.99999997e-07f;
                    }
                    u22 = (u20 * u20);
                    u22 = u22 + u16 * u16;
                    t23 = FUN_0c0df340(u22);
                    *(unsigned int *)(((int)stk + 4)) = (((int (*)(float))(FUN_0c0df360))(((-t23) / u18)));
                    if (0.0f > u18) {
                        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x8000);
                    }
                    FUN_0c0df940();
                    t35 = (FUN_0c0e6f24());
                    *(int *)((int)stk + 0) = t35;
                    FUN_0c0df940();
                    t41 = FUN_0c0e6f24();
                    *(int *)((int)stk + 0) = (t41 + t35);
                    FUN_0c0df940();
                    t47 = FUN_0c0e6f24();
                    u50 = (float)((t47 + (t41 + t35)) + 0x4B);
                    if ((int)((t47 + (t41 + t35)) + 0x4B) < 0) {
                        u50 = ((float)((t47 + (t41 + t35)) + 0x4B) + 4.2949673e+09f);
                    }
                    t53 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t53 + (int)((u50 * 65536.0f) / 360.0f));
                    *(unsigned int *)((a4 + 0x2C)) = (-(unsigned short)(t53 + (int)((u50 * 65536.0f) / 360.0f)));
                    *(unsigned int *)(((int)stk + 4)) = (((int (*)(int, float))(FUN_0c0df360))((-(unsigned short)(t53 + (int)((u50 * 65536.0f) / 360.0f))), ((-u20) / u16)));
                    if (0.0f > u16) {
                        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x8000);
                    }
                    FUN_0c0df940();
                    t65 = (FUN_0c0e6f24());
                    *(int *)((int)stk + 0) = t65;
                    FUN_0c0df940();
                    t71 = FUN_0c0e6f24();
                    *(int *)((int)stk + 0) = (t71 + t65);
                    FUN_0c0df940();
                    t77 = FUN_0c0e6f24();
                    u80 = (float)((t77 + (t71 + t65)) + 0x4B);
                    if ((int)((t77 + (t71 + t65)) + 0x4B) < 0) {
                        u80 = ((float)((t77 + (t71 + t65)) + 0x4B) + 4.2949673e+09f);
                    }
                    t83 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t83 + (int)((u80 * 65536.0f) / 360.0f));
                    *(unsigned int *)((a4 + 0x30)) = (unsigned short)(t83 + (int)((u80 * 65536.0f) / 360.0f));
                    FUN_0c0df940();
                    t89 = FUN_0c0e6f24();
                    u92 = (float)t89;
                    if ((int)t89 < 0) {
                        u92 = ((float)t89 + 4.2949673e+09f);
                    }
                    *(unsigned int *)((a4 + 0x34)) = (int)u92;
                    FUN_0c0df940();
                    t100 = FUN_0c0e6f24();
                    u102 = (float)(t100 + 0x32);
                    if (0.0f > (float)(t100 + 0x32)) {
                        u102 = ((float)(t100 + 0x32) + 4.2949673e+09f);
                    }
                    t106 = FUN_0c0dfa50(((-(*(int *)((a4 + 0x2C)))) + 0x14000));
                    *(float *)(((int)stk + 0)) = (u102 * t106);
                    u109 = (u102 * t106);
                    (((struct o38_float *)(a4))->v) = (u109 * (FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))));
                    (((struct o3C_float *)(a4))->v) = (u102 * (FUN_0c0df4d0(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
                    u116 = (u102 * (FUN_0c0dfa50(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
                    (((struct o40_float *)(a4))->v) = (u116 * (FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))));
                    (((struct oEC_ushort *)(a4))->v) = 0x14;
                    t117 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t117 + 0x1);
                    t289 = (t117 + 0x1);
                }
            } else {
                if (t3 == 3) {
                    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - ((((struct o3C_float *)(a4))->v)));
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
                    t134 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t134 - 1);
                    t289 = 0xEC;
                    if ((short)(t134 - 1) == 0) {
                        (((struct oEC_ushort *)(a4))->v) = 0x3C;
                        *(unsigned char *)((a4 + 0x8)) = 0x4;
                        t289 = 0x4;
                    }
                } else {
                    if (t3 == 4) {
                        t137 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t137 - 1);
                        if ((short)(t137 - 1) == 0) {
                            *(unsigned char *)((a4 + 0x8)) = 0x7;
                        }
                        if ((*(signed char *)((a4 + 0x2D8))) != 0) {
                            (((struct o101_uchar *)(a4))->v) = 0x0;
                            (((struct o102_uchar *)(a4))->v) = 0x0;
                            (((struct oEC_ushort *)(a4))->v) = 0x3C;
                            *(unsigned char *)((a4 + 0x8)) = 0x5;
                        }
                        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
                        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - ((((struct o3C_float *)(a4))->v)));
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
                        t289 = 0x28;
                    } else {
                        if (t3 == 5) {
                            t149 = (((struct oEC_short *)(a4))->v);
                            (((struct oEC_ushort *)(a4))->v) = (t149 - 1);
                            t289 = 0xEC;
                            if ((short)(t149 - 1) == 0) {
                                *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x41F;
                                *(unsigned short *)((((((struct o2E4_int *)(a4))->v)) + 0x2)) = 0x41F;
                                (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
                                (((struct o40_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
                                (((struct oEC_ushort *)(a4))->v) = 0x14;
                                *(unsigned char *)((a4 + 0x8)) = 0x6;
                                t289 = 0x6;
                            }
                        } else {
                            if (t3 == 6) {
                                t160 = (((struct o2E0_int *)(a4))->v);
                                (((struct o40_float *)(t160))->v) = (((((struct o40_float *)(t160))->v)) - 0.049999997f);
                                t162 = (((struct o2E4_int *)(a4))->v);
                                (((struct o40_float *)(t162))->v) = (((((struct o40_float *)(t162))->v)) - 0.049999997f);
                                t164 = (((struct oEC_short *)(a4))->v);
                                (((struct oEC_ushort *)(a4))->v) = (t164 - 1);
                                t289 = 0xEC;
                                if ((short)(t164 - 1) == 0) {
                                    *(unsigned char *)((a4 + 0x8)) = 0x7;
                                    t289 = 0x7;
                                }
                            } else {
                                t289 = t3;
                                if (t3 == 7) {
                                    t289 = (FUN_0c059330(a4));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - ((((struct o3C_float *)(a4))->v)));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
            t223 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t223 - 1);
            t289 = 0xEC;
            if ((short)(t223 - 1) != 0) {
            } else {
                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
                (((struct oEC_ushort *)(a4))->v) = 0x1;
                t226 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t226 + 0x1);
                t289 = (t226 + 0x1);
            }
        }
    } else {
        t246 = *(int *)((a4 + 0x1C));
        t247 = *(int *)((t246 + 0x1C));
        u248 = (((struct o20_float *)(t246))->v);
        u249 = (((struct o20_float *)(t247))->v);
        u250 = (((struct o24_float *)(t247))->v);
        u251 = (((struct o24_float *)(t246))->v);
        u252 = (((struct o28_float *)(t247))->v);
        u253 = (((struct o28_float *)(t246))->v);
        u254 = (u249 - u248);
        if ((u249 - u248) == 0.0f) {
            u254 = 9.99999997e-07f;
        }
        u256 = (u250 - u251);
        if ((u250 - u251) == 0.0f) {
            u256 = 9.99999997e-07f;
        }
        u258 = (u252 - u253);
        if ((u252 - u253) == 0.0f) {
            u258 = 9.99999997e-07f;
        }
        u260 = (u258 * u258);
        u260 = u260 + u254 * u254;
        t261 = FUN_0c0df340(u260);
        t262 = ((int (*)(float))(FUN_0c0df360))(((-t261) / u256));
        *(unsigned int *)((a4 + 0x2C)) = 0xFFFFC000;
        t263 = FUN_0c0dfa50(0x18000);
        *(float *)(((int)stk + 0)) = t263;
        u266 = (t263 * (FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))));
        (((struct o38_float *)(a4))->v) = (u266 * 50.0f);
        (((struct o3C_float *)(a4))->v) = ((FUN_0c0df4d0(((-(*(int *)((a4 + 0x2C)))) + 0x14000))) * 50.0f);
        t270 = FUN_0c0dfa50(((-(*(int *)((a4 + 0x2C)))) + 0x14000));
        *(float *)(((int)stk + 0)) = t270;
        u273 = (t270 * (FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))));
        (((struct o40_float *)(a4))->v) = (u273 * 50.0f);
        (((struct o2D9_uchar *)(a4))->v) = 0x2;
        (((struct oEC_ushort *)(a4))->v) = 0x14;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - ((((struct o3C_float *)(a4))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
        t281 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t281 - 1);
        t289 = 0xEC;
        if ((short)(t281 - 1) != 0) {
        } else {
            *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
            (((struct oEC_ushort *)(a4))->v) = 0x1;
            t284 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t284 + 0x1);
            t289 = (t284 + 0x1);
        }
    }
    return t289;
}
