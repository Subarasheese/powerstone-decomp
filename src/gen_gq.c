/* Straight-line functions with calls and guards (batch gen_gq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o55_uchar { char p[0x55]; unsigned char v; };
struct o58_float { char p[0x58]; float v; };
struct o5A_uchar { char p[0x5A]; unsigned char v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5E_uchar { char p[0x5E]; unsigned char v; };
struct o60_short { char p[0x60]; short v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o62_short { char p[0x62]; short v; };
struct o62_ushort { char p[0x62]; unsigned short v; };
struct o64_uchar { char p[0x64]; unsigned char v; };
struct o71EC_uchar { char p[0x71EC]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c02bc0e(int, int, int, int);
int FUN_0c02bcba(void);
int FUN_0c02d9e0(int, int, float, float, float, float);
int FUN_0c059132(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0a3796(int, int);
int FUN_0c0a3f30(int);
int FUN_0c0a41a0(int);
int FUN_0c0a751a(int);
int FUN_0c0a77aa(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e6f24(void);
int sprintf(int, int, int, int, int);
int FUN_0c0a4724(int a4, int a5, int a6, int a7);
int FUN_0c02b164(int a4);
int FUN_0c0172e0(int a4, int a5);
int FUN_0c02bd8c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);

int FUN_0c0a4724(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t2;
    register int t4;
    register int t8;
    register int t9;
    register int t12;
    register int t15;
    register int t34;
    register int t106;
    register int t117;
    register int t200;
    register int t201;
    register int t203;
    register int t220;
    register int t224;
    register int t227;
    register int t231;
    register int t240;
    register int t257;
    register int t274;
    register int t276;
    register int t280;
    register int t289;
    register int t306;
    register int t323;
    register int t325;
    register int t326;
    register int t327;
    register int t331;
    register int t335;
    register int t346;
    register int t358;
    register int t359;
    register int t361;
    register int t379;
    register int t384;
    register int t395;
    register int t396;
    register int t398;
    register int t405;
    register int t190;
    register int t191;
    register int t192;
    register int t101;
    register int t102;
    register int t103;
    int t32;
    register int t33;
    int t115;
    register int t116;
    register int t271;
    register int t272;
    int t237;
    int t254;
    register int t320;
    register int t321;
    int t286;
    int t303;
    int t337;
    register int t338;
    int t345;

    t0 = *(signed char *)0xC7F3074;
    t2 = *(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x5A) + 0x0));
    if (t2 != 0) {
        if (t2 == 1) {
            if (((~(signed char)t0) & ((*(signed char *)((a4 + 0x3))) + 0x1)) == 0) {
                return ((int (*)(int, int, int, int))(0xC0A4EF6))(0xC7F31F0, 0x0, (~(signed char)t0), 0x14);
            }
            t4 = *(signed char *)((a4 + 0x3));
            (((struct o5A_uchar *)(((unsigned char)((unsigned short)t4 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = ((*(signed char *)(((((unsigned char)((unsigned short)t4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x5A) + 0x0))) + 0x1);
            (((struct o71EC_uchar *)(a4))->v) = 0x0;
            return FUN_0c0a751a((*(signed char *)((a4 + 0x3))));
        }
        if (t2 == 2) {
            *(unsigned char *)(((int)stk + 8)) = (*(signed char *)0xC7F4751);
            t8 = *(signed char *)((a4 + 0x3));
            t9 = *(signed char *)(((int)stk + 8));
            if (((*(int *)((((signed char)((((t8 << 2) << 1) + t8) << 2) + 0xC7F31F0) + 0x8))) & 128) == 0) {
                t12 = *(signed char *)((a4 + 0x3));
                if (((*(int *)((((signed char)((((t12 << 2) << 1) + t12) << 2) + 0xC7F31F0) + 0x8))) & 64) == 0) {
                    t101 = 0x0;
                    t102 = 0x9;
                    t103 = t9;
                } else {
                    t15 = *(signed char *)((a4 + 0x3));
                    (((struct o64_uchar *)(((unsigned char)((unsigned short)t15 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = ((*(signed char *)(((((unsigned char)((unsigned short)t15 * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) - 1);
                    switch (t9) {
                    case 0:
                        if ((int)(*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) >= (int)0x1) {
                        } else {
                            (((struct o64_uchar *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x8;
                        }
                        break;
                    case 1:
                        if ((int)(*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) < 0) {
                            (((struct o64_uchar *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x8;
                        }
                        break;
                    case 2:
                        if ((int)(*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) >= 0) {
                        } else {
                            (((struct o64_uchar *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x9;
                        }
                        break;
                    case 3:
                        if ((*(signed char *)0xC7F301C) != 0) {
                            if ((int)(*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) < 0) {
                                (((struct o64_uchar *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0xA;
                            }
                            if (((*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) == 10) && (t32 = *(int *)((a4 + 0x1C)), t33 = *(signed char *)((t32 + 0x4)), t33 == 10)) {
                                t34 = *(signed char *)((a4 + 0x3));
                                (((struct o64_uchar *)(((unsigned char)((unsigned short)t34 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = ((*(signed char *)(((((unsigned char)((unsigned short)t34 * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) - 1);
                            }
                        } else {
                            if ((int)(*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) < 0) {
                                (((struct o64_uchar *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x9;
                            }
                        }
                        break;
                    }
                    FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0x41);
                }
                t190 = t101;
                t191 = t102;
                t192 = t103;
            } else {
                t106 = *(signed char *)((a4 + 0x3));
                (((struct o64_uchar *)(((unsigned char)((unsigned short)t106 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = ((*(signed char *)(((((unsigned char)((unsigned short)t106 * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) + 0x1);
                switch (t9) {
                case 0:
                    if ((int)(*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) <= (int)0x8) {
                    } else {
                        (((struct o64_uchar *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x1;
                    }
                    break;
                case 1:
                    if ((int)(*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) <= (int)0x8) {
                    } else {
                        (((struct o64_uchar *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x0;
                    }
                    break;
                case 2:
                    if ((int)(*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) <= (int)0x9) {
                    } else {
                        (((struct o64_uchar *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x0;
                    }
                    break;
                case 3:
                    if ((*(signed char *)0xC7F301C) != 0) {
                        if (((*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) == 10) && (t115 = *(int *)((a4 + 0x1C)), t116 = *(signed char *)((t115 + 0x4)), t116 == 10)) {
                            t117 = *(signed char *)((a4 + 0x3));
                            (((struct o64_uchar *)(((unsigned char)((unsigned short)t117 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = ((*(signed char *)(((((unsigned char)((unsigned short)t117 * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) + 0x1);
                        }
                        if ((int)(*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) <= (int)0xA) {
                        } else {
                            (((struct o64_uchar *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x0;
                        }
                    } else {
                        if ((int)(*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) <= (int)0x9) {
                        } else {
                            (((struct o64_uchar *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x0;
                        }
                    }
                    break;
                }
                FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0x41);
            }
            *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC152619 + (*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))))));
            if (((((struct o60_short *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v)) != 0) {
                t200 = *(signed char *)((a4 + 0x3));
                t201 = (((struct o62_short *)(((unsigned char)((unsigned short)t200 * (unsigned short)0x78) + 0xC7F2DF0)))->v);
                (((struct o62_ushort *)(((unsigned char)((unsigned short)t200 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (t201 - 1);
                if ((short)(t201 - 1) == 0) {
                    (((struct o62_ushort *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x3C;
                    t203 = *(signed char *)((a4 + 0x3));
                    (((struct o60_ushort *)(((unsigned char)((unsigned short)t203 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (((((struct o60_short *)(((unsigned char)((unsigned short)t203 * (unsigned short)0x78) + 0xC7F2DF0)))->v)) - 1);
                }
            }
            *(int *)((int)stk + 4) = (((((struct o60_short *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v)));
            *(int *)((int)stk + 0) = 0xC152A78;
            sprintf(0xC7F36B8, t190, t191, t192, 0xC152A78);
            t220 = 0x190;
            if ((*(signed char *)((a4 + 0x3))) == 0) {
                t220 = 0xD0;
            }
            FUN_0c02d9e0(0xC7F36B8, 0x1, (float)t220, 280.0f, 1.0f, 1.0f);
            t224 = FUN_0c0a41a0((*(signed char *)((a4 + 0x3))));
            if ((signed char)t224 == 0) {
                if (((((struct o60_short *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v)) != 0) {
                    return ((int (*)(void))(0xC0A4EF6))();
                }
                t227 = *(signed char *)((a4 + 0x4));
                *(unsigned int *)((((t227 << 2) + 0xC7F2F34) + 0x0)) = ((*(int *)((((t227 << 2) + 0xC7F2F34) + 0x0))) + 0x1);
                FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0x42);
                t231 = *(signed char *)((a4 + 0x3));
                if ((*(int *)((0xC7F31F8 + (signed char)((((t231 << 2) << 1) + t231) << 2)))) != 2) {
                    (((struct o71EC_uchar *)(a4))->v) = 0x1;
                    t272 = *(int *)((a4 + 0x1C));
                    if (((*(signed char *)((a4 + 0x4))) == (*(signed char *)((t272 + 0x4)))) && (t237 = *(signed char *)((t272 + 0x71EC)), t237 == 1)) {
                        t240 = *(signed char *)0xC7F3071;
                        if ((unsigned char)t240 != 0) {
                            if (((unsigned char)t240 != 1) && ((unsigned char)t240 != 2)) {
                                if ((unsigned char)t240 != 3) {
                                } else {
                                    (((struct o71EC_uchar *)(a4))->v) = 0x2;
                                }
                            } else {
                                (((struct o71EC_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x2;
                            }
                        } else {
                            (((struct o71EC_uchar *)(a4))->v) = 0x2;
                        }
                    }
                    t271 = 0x2;
                } else {
                    (((struct o71EC_uchar *)(a4))->v) = 0x2;
                    t271 = *(int *)((a4 + 0x1C));
                    if (((*(signed char *)((a4 + 0x4))) == (*(signed char *)((t271 + 0x4)))) && (t254 = *(signed char *)((t271 + 0x71EC)), t254 == 2)) {
                        t257 = *(signed char *)0xC7F3071;
                        if ((unsigned char)t257 != 0) {
                            if (((unsigned char)t257 != 1) && ((unsigned char)t257 != 2)) {
                                if ((unsigned char)t257 != 3) {
                                } else {
                                    (((struct o71EC_uchar *)(a4))->v) = 0x1;
                                }
                            } else {
                                (((struct o71EC_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
                            }
                        } else {
                            (((struct o71EC_uchar *)(a4))->v) = 0x1;
                        }
                    }
                }
                t274 = *(signed char *)((a4 + 0x3));
                (((struct o5A_uchar *)(((unsigned char)((unsigned short)t274 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = ((*(signed char *)(((((unsigned char)((unsigned short)t274 * (unsigned short)0x78) + 0xC7F2DF0) + 0x5A) + 0x0))) + 0x3);
                return ((int (*)(int, int, int, int))(0xC0A4EF6))(t271, t272, a6, a7);
            }
            t276 = *(signed char *)((a4 + 0x4));
            *(unsigned int *)((((t276 << 2) + 0xC7F2F34) + 0x0)) = ((*(int *)((((t276 << 2) + 0xC7F2F34) + 0x0))) + 0x1);
            FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0x42);
            t280 = *(signed char *)((a4 + 0x3));
            if ((*(int *)((0xC7F31F8 + (signed char)((((t280 << 2) << 1) + t280) << 2)))) != 2) {
                (((struct o71EC_uchar *)(a4))->v) = 0x1;
                t321 = *(int *)((a4 + 0x1C));
                if (((*(signed char *)((a4 + 0x4))) == (*(signed char *)((t321 + 0x4)))) && (t286 = *(signed char *)((t321 + 0x71EC)), t286 == 1)) {
                    t289 = *(signed char *)0xC7F3071;
                    if ((unsigned char)t289 != 0) {
                        if (((unsigned char)t289 != 1) && ((unsigned char)t289 != 2)) {
                            if ((unsigned char)t289 != 3) {
                            } else {
                                (((struct o71EC_uchar *)(a4))->v) = 0x2;
                            }
                        } else {
                            (((struct o71EC_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x2;
                        }
                    } else {
                        (((struct o71EC_uchar *)(a4))->v) = 0x2;
                    }
                }
                t320 = 0x2;
            } else {
                (((struct o71EC_uchar *)(a4))->v) = 0x2;
                t320 = *(int *)((a4 + 0x1C));
                if (((*(signed char *)((a4 + 0x4))) == (*(signed char *)((t320 + 0x4)))) && (t303 = *(signed char *)((t320 + 0x71EC)), t303 == 2)) {
                    t306 = *(signed char *)0xC7F3071;
                    if ((unsigned char)t306 != 0) {
                        if (((unsigned char)t306 != 1) && ((unsigned char)t306 != 2)) {
                            if ((unsigned char)t306 != 3) {
                            } else {
                                (((struct o71EC_uchar *)(a4))->v) = 0x1;
                            }
                        } else {
                            (((struct o71EC_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
                        }
                    } else {
                        (((struct o71EC_uchar *)(a4))->v) = 0x1;
                    }
                }
            }
            t323 = *(signed char *)((a4 + 0x3));
            (((struct o5A_uchar *)(((unsigned char)((unsigned short)t323 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = ((*(signed char *)(((((unsigned char)((unsigned short)t323 * (unsigned short)0x78) + 0xC7F2DF0) + 0x5A) + 0x0))) + 0x3);
            return ((int (*)(int, int, int, int))(0xC0A4EF6))(t320, t321, a6, a7);
        }
        if (t2 == 3) {
            t325 = *(signed char *)((a4 + 0x3));
            t326 = (((struct o62_short *)(((unsigned char)((unsigned short)t325 * (unsigned short)0x78) + 0xC7F2DF0)))->v);
            (((struct o62_ushort *)(((unsigned char)((unsigned short)t325 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (t326 - 1);
            if ((int)(short)(t326 - 1) > 0) {
                return ((int (*)(int, int, int, int))(0xC0A4EF6))(0xC7F31F0, 0x0, t0, 0x14);
            }
            t327 = *(signed char *)((a4 + 0x3));
            (((struct o5A_uchar *)(((unsigned char)((unsigned short)t327 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = ((*(signed char *)(((((unsigned char)((unsigned short)t327 * (unsigned short)0x78) + 0xC7F2DF0) + 0x5A) + 0x0))) + 0x1);
            (((struct o60_ushort *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x14;
            (((struct o62_ushort *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x3C;
            return ((int (*)(int, int, int, int))(0xC0A4EF6))(0xC7F31F0, 0x0, t0, 0x14);
        }
        if (t2 == 4) {
            t331 = *(signed char *)((a4 + 0x3));
            if (((*(int *)((((signed char)((((t331 << 2) << 1) + t331) << 2) + 0xC7F31F0) + 0x8))) & 240) != 0) {
                t335 = (*(int *)0xC7E4084);
                for (;;) {
                    if (((*(int *)((t335 + 0x10))) == 0xC0A80C4) && (t337 = *(signed char *)((t335 + 0x3)), t338 = *(signed char *)((a4 + 0x3)), t337 == t338)) {
                        break;
                    }
                    t335 = (*(int *)((t335 + 0x18)));
                }
                if (((*(signed char *)((t335 + 0x8))) == 2) && (t345 = *(signed char *)((t335 + 0x9)), t345 == 0)) {
                    t346 = *(signed char *)((a4 + 0x3));
                    (((struct o5E_uchar *)(((unsigned char)((unsigned short)t346 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = ((*(signed char *)(((((unsigned char)((unsigned short)t346 * (unsigned short)0x78) + 0xC7F2DF0) + 0x5E) + 0x0))) ^ 0x1);
                }
            }
            if (((((struct o60_short *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v)) != 0) {
                t358 = *(signed char *)((a4 + 0x3));
                t359 = (((struct o62_short *)((0xC7F2DF0 + (unsigned char)((unsigned short)t358 * (unsigned short)0x78))))->v);
                (((struct o62_ushort *)((0xC7F2DF0 + (unsigned char)((unsigned short)t358 * (unsigned short)0x78))))->v) = (t359 - 1);
                if ((short)(t359 - 1) == 0) {
                    (((struct o62_ushort *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x3C;
                    t361 = *(signed char *)((a4 + 0x3));
                    (((struct o60_ushort *)(((unsigned char)((unsigned short)t361 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (((((struct o60_short *)(((unsigned char)((unsigned short)t361 * (unsigned short)0x78) + 0xC7F2DF0)))->v)) - 1);
                }
            }
            *(int *)((int)stk + 4) = (((((struct o60_short *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v)));
            *(int *)((int)stk + 0) = 0xC152A78;
            sprintf(0xC7F36B8, 0x0, t0, 0x14, 0xC152A78);
            t379 = 0x190;
            if ((*(signed char *)((a4 + 0x3))) == 0) {
                t379 = 0xF0;
            }
            FUN_0c02d9e0(0xC7F36B8, 0x1, (float)t379, 280.0f, 1.0f, 1.0f);
            FUN_0c0a41a0((*(signed char *)((a4 + 0x3))));
            return ((int (*)(void))(0xC0A4E9E))();
        }
        return ((int (*)(int, int, int, int))(0xC0A4ED2))(0xC7F31F0, 0x0, t0, 0x14);
    }
    t384 = *(signed char *)((a4 + 0x3));
    (((struct o5A_uchar *)(((unsigned char)((unsigned short)t384 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = ((*(signed char *)(((((unsigned char)((unsigned short)t384 * (unsigned short)0x78) + 0xC7F2DF0) + 0x5A) + 0x0))) + 0x1);
    (((struct o60_ushort *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x14;
    (((struct o62_ushort *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x3C;
    if (((*(signed char *)0xC7F3074) & ((*(signed char *)((a4 + 0x3))) + 0x1)) != 0) {
        (((struct o64_uchar *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (*(signed char *)((0xC152624 + (*(signed char *)((a4 + 0x4))))));
    } else {
        if ((*(signed char *)((0x4C + ((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))) == 0) {
            t395 = *(signed char *)((a4 + 0x3));
            t396 = 0x8;
            if ((signed char)t395 == 0) {
                t396 = 0x1;
            }
            (((struct o64_uchar *)(((unsigned char)((unsigned short)t395 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = t396;
            t398 = *(signed char *)((a4 + 0x3));
            *(int *)((int)stk + 4) = (((unsigned char)((unsigned short)t398 * (unsigned short)0x78) + 0xC7F2DF0) + 0x55);
            FUN_0c0df940();
            (((struct o55_uchar *)(((unsigned char)((unsigned short)t398 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (FUN_0c0e6f24());
        } else {
            t405 = *(signed char *)((a4 + 0x3));
            (((struct o64_uchar *)(((unsigned char)((unsigned short)t405 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (*(signed char *)((0xC152624 + (*(signed char *)((((unsigned char)((unsigned short)t405 * (unsigned short)0x78) + 0xC7F2DF0) + 0x49))))));
        }
    }
    *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC152619 + (*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))))));
    return FUN_0c0a77aa((*(signed char *)((a4 + 0x3))));
}

int FUN_0c02b164(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oF2_ushort *)(a4))->v) = 0x0;
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 == 1) {
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + 9.33333206f);
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + -6.99999905f);
            u0 = 0.333333313f;
            u0 = u0 + 0.049999997f * (float)((((struct oEC_short *)(a4))->v));
            (((struct o54_float *)(a4))->v) = u0;
            (((struct o50_float *)(a4))->v) = u0;
            t1 = (((struct oEC_short *)(a4))->v);
            if (t1 != 1) {
                return t1;
            }
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            *(unsigned char *)((a4 + 0xA)) = 0x0;
            (((struct oEC_ushort *)(a4))->v) = 0x3;
            (((struct oEE_ushort *)(a4))->v) = 0x2;
            (((struct o20_float *)(a4))->v) = 0.0f;
            (((struct o24_float *)(a4))->v) = 0.0f;
            FUN_0c0a3f30(0x1F);
            return FUN_0c0a3f30(0x20);
        }
        if (t0 == 2) {
            t1 = *(signed char *)((a4 + 0xA));
            switch (t1) {
            case 0:
                (((struct o54_float *)(a4))->v) = (((-((float)((((struct oEC_short *)(a4))->v)) / 12.0f)) + 1.25f) * 0.333333313f);
                (((struct o50_float *)(a4))->v) = ((((float)((((struct oEC_short *)(a4))->v)) / 12.0f) + 0.75f) * 0.333333313f);
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                if (((((struct oEC_short *)(a4))->v)) != 0) {
                } else {
                    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                    (((struct oEC_ushort *)(a4))->v) = 0x3;
                }
                break;
            case 1:
                (((struct o54_float *)(a4))->v) = ((((float)((((struct oEC_short *)(a4))->v)) / 12.0f) + 1.0f) * 0.333333313f);
                (((struct o50_float *)(a4))->v) = (((-((float)((((struct oEC_short *)(a4))->v)) / 12.0f)) + 1.0f) * 0.333333313f);
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                if (((((struct oEC_short *)(a4))->v)) == 0) {
                    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                    (((struct oEC_ushort *)(a4))->v) = 0x3;
                }
                break;
            case 2:
                (((struct o54_float *)(a4))->v) = ((((float)((((struct oEC_short *)(a4))->v)) / 12.0f) + 0.75f) * 0.333333313f);
                (((struct o50_float *)(a4))->v) = (((-((float)((((struct oEC_short *)(a4))->v)) / 12.0f)) + 1.25f) * 0.333333313f);
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                if (((((struct oEC_short *)(a4))->v)) == 0) {
                    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                    (((struct oEC_ushort *)(a4))->v) = 0x3;
                }
                break;
            case 3:
                (((struct o54_float *)(a4))->v) = (((-((float)((((struct oEC_short *)(a4))->v)) / 12.0f)) + 1.0f) * 0.333333313f);
                (((struct o50_float *)(a4))->v) = ((((float)((((struct oEC_short *)(a4))->v)) / 12.0f) + 1.0f) * 0.333333313f);
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                if (((((struct oEC_short *)(a4))->v)) == 0) {
                    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
                    if (((((struct oEE_short *)(a4))->v)) == 0) {
                        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                        *(unsigned char *)((a4 + 0xA)) = 0x0;
                        (((struct oEC_ushort *)(a4))->v) = 0x2E;
                        (((struct o50_float *)(a4))->v) = 0.333333313f;
                        (((struct o54_float *)(a4))->v) = 0.333333313f;
                    } else {
                        *(unsigned char *)((a4 + 0xA)) = 0x0;
                        (((struct oEC_ushort *)(a4))->v) = 0x3;
                    }
                }
                break;
            }
            t1 = (((struct o2E4_int *)(a4))->v);
            *(unsigned int *)((t1 + 0x18)) = ((*(int *)((t1 + 0x18))) - 0x20B6);
            t1 = 0x2E4;
        } else {
            if (t0 == 3) {
                t2 = *(signed char *)((a4 + 0xA));
                switch (t2) {
                case 0:
                    t2 = (((struct o2E4_int *)(a4))->v);
                    *(unsigned int *)((t2 + 0x18)) = ((*(int *)((t2 + 0x18))) - (int)(((float)((((struct oEC_short *)(a4))->v)) * 65536.0f) / 360.0f));
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    if (((((struct oEC_short *)(a4))->v)) != 0) {
                    } else {
                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                        (((struct oEC_ushort *)(a4))->v) = 0x14;
                    }
                    break;
                case 1:
                    t2 = (((struct o2E4_int *)(a4))->v);
                    *(unsigned int *)((t2 + 0x18)) = ((*(int *)((t2 + 0x18))) + 0x444);
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    if (((((struct oEC_short *)(a4))->v)) == 0) {
                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                        (((struct oEC_ushort *)(a4))->v) = 0x14;
                    }
                    break;
                case 2:
                    t2 = (((struct o2E4_int *)(a4))->v);
                    *(unsigned int *)((t2 + 0x18)) = ((*(int *)((t2 + 0x18))) - 0x444);
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    if (((((struct oEC_short *)(a4))->v)) == 0) {
                        *(unsigned char *)((a4 + 0xA)) = 0x1;
                        (((struct oEC_ushort *)(a4))->v) = 0x14;
                    }
                    break;
                }
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 2.0f);
                t2 = 0x24;
                if (64.0f > ((((struct o24_float *)(a4))->v))) {
                } else {
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                    (((struct o24_float *)(a4))->v) = 64.0f;
                    *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned short *)((((((struct o2EC_int *)(a4))->v)) + 0x2)) = 0x411;
                    (((struct o40_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 0.5f;
                    *(unsigned int *)((((((struct o2EC_int *)(a4))->v)) + 0x10)) = 0x4000;
                    t2 = 0x2EC;
                }
                t3 = t2;
            } else {
                t2 = t0;
                if (t0 == 4) {
                    t0 = *(signed char *)((a4 + 0xA));
                    switch (t0) {
                    case 0:
                        t0 = (((struct o2E4_int *)(a4))->v);
                        *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) - (int)(((float)((((struct oEC_short *)(a4))->v)) * 65536.0f) / 360.0f));
                        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                        if (((((struct oEC_short *)(a4))->v)) != 0) {
                        } else {
                            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                            (((struct oEC_ushort *)(a4))->v) = 0x14;
                        }
                        break;
                    case 1:
                        t0 = (((struct o2E4_int *)(a4))->v);
                        *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) + 0x444);
                        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                        if (((((struct oEC_short *)(a4))->v)) == 0) {
                            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                            (((struct oEC_ushort *)(a4))->v) = 0x14;
                        }
                        break;
                    case 2:
                        t0 = (((struct o2E4_int *)(a4))->v);
                        *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) - 0x444);
                        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                        if (((((struct oEC_short *)(a4))->v)) == 0) {
                            *(unsigned char *)((a4 + 0xA)) = 0x1;
                            (((struct oEC_ushort *)(a4))->v) = 0x14;
                        }
                        break;
                    }
                    t0 = *(signed char *)0xC7F2F08;
                    if (((unsigned char)t0 != 0) && (((unsigned char)t0 != 1) && (((unsigned char)t0 != 2) && ((unsigned char)t0 != 3)))) {
                        FUN_0c02d9e0(((((struct o4_int *)0xC321170)->v)), 0x0, 86.0f, ((((struct o4_float *)0xC02B7EC)->v)), ((((struct o0_float *)0xC02B7EC)->v)), 1.0f);
                        FUN_0c02d9e0(0xC1490B0, 0x0, ((((struct o8_float *)0xC02B7EC)->v)), ((((struct o4_float *)0xC02B7EC)->v)), 1.0f, 1.0f);
                        t0 = ((((struct o8_int *)0xC321170)->v));
                        u0 = ((((struct o0_float *)0xC02B7EC)->v));
                    } else {
                        t0 = ((((struct o0_int *)0xC321170)->v));
                        u0 = 0.75f;
                    }
                    FUN_0c02d9e0(t0, 0x0, 86.0f, 432.0f, u0, 1.0f);
                    FUN_0c02d9e0(0xC1490B0, 0x0, ((((struct o8_float *)0xC02B7EC)->v)), 432.0f, 1.0f, 1.0f);
                    t0 = (((struct o2EC_int *)(a4))->v);
                    *(unsigned int *)((t0 + 0x10)) = (unsigned short)((*(int *)((t0 + 0x10))) + 0x444);
                    t0 = (((struct o2EC_int *)(a4))->v);
                    u0 = ((((struct o18_float *)0xC02B7EC)->v));
                    u0 = u0 + ((((struct o1C_float *)0xC02B7EC)->v)) * (FUN_0c0dfa50((*(int *)((t0 + 0x10)))));
                    (((struct o40_float *)(t0))->v) = u0;
                    t2 = 0xC02B808;
                }
                t3 = t2;
            }
            t1 = t3;
        }
        return t1;
    }
    (((struct oC_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
    (((struct o4_float *)(((((struct o2E4_int *)(a4))->v))))->v) = -264.0f;
    (((struct o8_float *)(((((struct o2E4_int *)(a4))->v))))->v) = -6.0f;
    (((struct oC_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 8.0f;
    (((struct o1C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
    (((struct o20_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
    *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
    (((struct o4_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 0.0f;
    (((struct o8_float *)(((((struct o2E8_int *)(a4))->v))))->v) = -648.0f;
    (((struct oC_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 8.0f;
    (((struct o1C_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 3.0f;
    (((struct o20_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 3.0f;
    *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x0;
    (((struct o4_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 0.0f;
    (((struct o8_float *)(((((struct o2EC_int *)(a4))->v))))->v) = -550.0f;
    (((struct o1C_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 3.0f;
    (((struct o20_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 3.0f;
    (((struct o20_float *)(a4))->v) = -559.999939f;
    (((struct o24_float *)(a4))->v) = 419.999969f;
    (((struct oEC_ushort *)(a4))->v) = 0x3C;
    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + 9.33333206f);
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + -6.99999905f);
    u0 = 0.333333313f;
    u0 = u0 + 0.049999997f * (float)((((struct oEC_short *)(a4))->v));
    (((struct o54_float *)(a4))->v) = u0;
    (((struct o50_float *)(a4))->v) = u0;
    t0 = (((struct oEC_short *)(a4))->v);
    if (t0 != 1) {
        return t0;
    }
    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x3;
    (((struct oEE_ushort *)(a4))->v) = 0x2;
    (((struct o20_float *)(a4))->v) = 0.0f;
    (((struct o24_float *)(a4))->v) = 0.0f;
    FUN_0c0a3f30(0x1F);
    return FUN_0c0a3f30(0x20);
}

int FUN_0c0172e0(int a4, int a5)
{
    int stk[9];
    register int t2;
    register int t160;
    register int t6;
    register int t7;
    register int t8;
    register int t14;
    register int t86;
    register float u93;
    register int t77;
    register float u84;
    register int t17;
    register float u18;
    register int t19;
    register int t20;
    register float u29;
    register int t57;
    register int t63;
    register int t69;
    register int t76;
    register int t95;
    register int t97;
    register int t107;
    register float u109;
    register int t177;
    register int t206;
    register int t235;
    register int t247;
    register int t11;

    *(unsigned int *)(((int)stk + 4)) = ((a5 << 2) << 1);
    t2 = *(signed char *)(((*(int *)((0xC17EB9C + ((a5 << 2) << 1)))) + 0x0));
    if (t2 != 125) {
        if (t2 != 126) {
            if (t2 != 127) {
                *(float *)(((int)stk + 0)) = 0.0f;
                *(float *)(((int)stk + 24)) = 0.0f;
                t6 = *(int *)((((*(int *)(((int)stk + 4))) + 0xC17EB98) + 0x0));
                t160 = 0x18;
                if ((*(signed char *)((t6 + 0x0))) == 0) {
                } else {
                    t7 = 0x0;
                    for (;;) {
                        t8 = *(signed char *)((t6 + 0x0));
                        t6 = (t6 + 0x1);
                        if (t8 == 0) {
                            break;
                        }
                        t7 = (t7 + 0x1);
                    }
                    *(unsigned int *)(((int)stk + 32)) = (*(int *)((((*(int *)(((int)stk + 4))) + 0xC17EB98) + 0x0)));
                    if ((int)t7 > (int)0xA) {
                        *(unsigned int *)(((int)stk + 20)) = 0xA;
                        t11 = (t7 - 10);
                    } else {
                        *(unsigned int *)(((int)stk + 20)) = t7;
                        t11 = 0x0;
                    }
                    t14 = FUN_0c059132(0x5, 0x1, (*(int *)(((int)stk + 20))));
                    t86 = t14;
                    u93 = 0.0f;
                    if (t14 != 0) {
                        *(unsigned char *)((t14 + 0x0)) = 0x1;
                        *(unsigned char *)((t14 + 0x1)) = 0x1;
                        *(unsigned short *)((t14 + 0x6)) = 0x41F;
                        *(unsigned char *)((t14 + 0x5)) = 0x20;
                        *(unsigned int *)((t14 + 0x10)) = 0xC017240;
                        (((struct o5C_float *)(t14))->v) = 0.0f;
                        (((struct o20_float *)(t14))->v) = -2.0f;
                        (((struct o24_float *)(t14))->v) = -2.0f;
                        (((struct o28_float *)(t14))->v) = -5.0f;
                        (((struct o50_float *)(t14))->v) = 0.0199999996f;
                        (((struct o54_float *)(t14))->v) = 0.0199999996f;
                        (((struct o58_float *)(t14))->v) = 0.0199999996f;
                        *(unsigned int *)(((int)stk + 28)) = 0x0;
                        *(unsigned int *)(((int)stk + 16)) = (0x2E0 + t14);
                        *(unsigned int *)(((int)stk + 12)) = (0x2E0 + t14);
                        *(unsigned int *)(((int)stk + 8)) = (((*(int *)(((int)stk + 4))) + 0xC17EB98) + 0x4);
                        t77 = 0x58;
                        u84 = 0.0f;
                        if ((int)(*(int *)(((int)stk + 20))) <= 0) {
                        } else {
                            t17 = 0x0;
                            u18 = 0.0f;
                            for (;;) {
                                t19 = *(int *)(((int)stk + 32));
                                *(unsigned int *)(((int)stk + 32)) = (t19 + 0x1);
                                t20 = *(signed char *)((((t19 + 0x1) - 1) + 0x0));
                                if ((signed char)t20 != 32) {
                                    *(unsigned char *)(((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) + 0x0)) = 0x1;
                                } else {
                                    *(unsigned char *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) + 0x0)) = 0x0;
                                }
                                u29 = (((struct o18_float *)(((int)stk + 0)))->v);
                                if (((*(float *)((((signed char)t20 << 2) + 0xC117300))) + u29) > ((*(float *)((((signed char)t20 << 2) + 0xC117500))) + u18)) {
                                    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + (((*(float *)((((signed char)t20 << 2) + 0xC117300))) + u29) / 2.0f));
                                } else {
                                    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + (((*(float *)((((signed char)t20 << 2) + 0xC117500))) + u18) / 2.0f));
                                }
                                (((struct o18_float *)(((int)stk + 0)))->v) = (*(float *)((((signed char)t20 << 2) + 0xC117300)));
                                u18 = (*(float *)((((signed char)t20 << 2) + 0xC117500)));
                                FUN_0c06233a((*(int *)((((0x2E0 + t14) + t17) + 0x0))), 0xC4CFA80, (*(short *)((((signed char)t20 << 1) + 0xC117200))));
                                *(unsigned short *)(((*(int *)((((0x2E0 + t14) + t17) + 0x0))) + 0x2)) = 0x31F;
                                (((struct o4_float *)((*(int *)((((0x2E0 + t14) + t17) + 0x0)))))->v) = (*(float *)(((int)stk + 0)));
                                (((struct o8_float *)((*(int *)((((0x2E0 + t14) + t17) + 0x0)))))->v) = 0.0f;
                                (((struct oC_float *)((*(int *)((((0x2E0 + t14) + t17) + 0x0)))))->v) = 0.0f;
                                (((struct o1C_float *)((*(int *)((((0x2E0 + t14) + t17) + 0x0)))))->v) = 1.0f;
                                (((struct o20_float *)((*(int *)((((0x2E0 + t14) + t17) + 0x0)))))->v) = 1.0f;
                                (((struct o24_float *)((*(int *)((((0x2E0 + t14) + t17) + 0x0)))))->v) = 1.0f;
                                t57 = *(signed char *)(((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) + 0x0));
                                (((struct o44_float *)((*(int *)((((0x2E0 + t14) + t17) + 0x0)))))->v) = (*(float *)((((signed char)(((t57 << 1) + t57) << 2) + 0xC1171BC) + 0x0)));
                                t63 = *(signed char *)(((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) + 0x0));
                                (((struct o48_float *)((*(int *)((((0x2E0 + t14) + t17) + 0x0)))))->v) = ((((struct o4_float *)(((signed char)(((t63 << 1) + t63) << 2) + 0xC1171BC)))->v));
                                t69 = *(signed char *)(((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) + 0x0));
                                (((struct o4C_float *)((*(int *)((((0x2E0 + t14) + t17) + 0x0)))))->v) = ((((struct o8_float *)(((signed char)(((t69 << 1) + t69) << 2) + 0xC1171BC)))->v));
                                *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x1);
                                *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x4);
                                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x4);
                                t76 = *(int *)(((int)stk + 28));
                                t17 = (t17 + 0x4);
                                if ((int)t76 < (int)(*(int *)(((int)stk + 20)))) continue;
                                break;
                            }
                            t77 = t76;
                            u84 = u18;
                        }
                        t86 = t77;
                        u93 = u84;
                    }
                    t160 = t86;
                    if (t11 == 0) {
                    } else {
                        t95 = FUN_0c059132(0x5, 0x1, t11);
                        t160 = t95;
                        if (t95 == 0) {
                        } else {
                            *(unsigned char *)((t95 + 0x0)) = 0x1;
                            *(unsigned char *)((t95 + 0x1)) = 0x1;
                            *(unsigned short *)((t95 + 0x6)) = 0x41F;
                            *(unsigned char *)((t95 + 0x5)) = 0x20;
                            *(unsigned int *)((t95 + 0x10)) = 0xC017240;
                            (((struct o5C_float *)(t95))->v) = 0.0f;
                            (((struct o20_float *)(t95))->v) = -2.0f;
                            (((struct o24_float *)(t95))->v) = -2.0f;
                            (((struct o28_float *)(t95))->v) = -5.0f;
                            (((struct o50_float *)(t95))->v) = 0.0199999996f;
                            (((struct o54_float *)(t95))->v) = 0.0199999996f;
                            (((struct o58_float *)(t95))->v) = 0.0199999996f;
                            *(unsigned int *)(((int)stk + 8)) = 0x0;
                            *(unsigned int *)(((int)stk + 20)) = (0x2E0 + t95);
                            *(unsigned int *)(((int)stk + 16)) = (0x2E0 + t95);
                            *(unsigned int *)(((int)stk + 4)) = (((*(int *)(((int)stk + 4))) + 0xC17EB98) + 0x4);
                            t160 = 0x58;
                            if ((int)t11 <= 0) {
                            } else {
                                t97 = *(int *)(((int)stk + 32));
                                *(unsigned int *)(((int)stk + 32)) = (t97 + 0x1);
                                *(unsigned char *)(((int)stk + 12)) = (*(signed char *)((((t97 + 0x1) - 1) + 0x0)));
                                if ((*(signed char *)(((int)stk + 12))) != 32) {
                                    *(unsigned char *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) + 0x0)) = 0x1;
                                } else {
                                    *(unsigned char *)(((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) + 0x0)) = 0x0;
                                }
                                t107 = *(signed char *)(((((int)stk + 0) + 0xC) + 0x0));
                                u109 = (((struct o18_float *)(((int)stk + 0)))->v);
                                if (((*(float *)((0xC117300 + (t107 << 2)))) + u109) > ((*(float *)((0xC117500 + (t107 << 2)))) + u93)) {
                                    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + (((*(float *)((0xC117300 + (t107 << 2)))) + u109) / 2.0f));
                                } else {
                                    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + (((*(float *)((0xC117500 + (t107 << 2)))) + u93) / 2.0f));
                                }
                                (((struct o18_float *)(((int)stk + 0)))->v) = (*(float *)((0xC117300 + (t107 << 2))));
                                *(volatile float *)((0xC117500 + (t107 << 2)));
                                FUN_0c06233a(((((struct o2E0_int *)(t95))->v)), 0xC4CFA80, (*(short *)((((*(signed char *)(((int)stk + 12))) << 1) + 0xC117200))));
                                *(unsigned short *)((((((struct o2E0_int *)(t95))->v)) + 0x2)) = 0x31F;
                                (((struct o4_float *)(((((struct o2E0_int *)(t95))->v))))->v) = (*(float *)(((int)stk + 0)));
                                (((struct o8_float *)(((((struct o2E0_int *)(t95))->v))))->v) = 0.0f;
                                (((struct oC_float *)(((((struct o2E0_int *)(t95))->v))))->v) = 0.0f;
                                (((struct o1C_float *)(((((struct o2E0_int *)(t95))->v))))->v) = 1.0f;
                                t160 = 0x1C;
                            }
                        }
                    }
                }
                t247 = t160;
            } else {
                t177 = FUN_0c059132(0x5, 0x1, 0x1);
                t247 = t177;
                if (t177 == 0) {
                } else {
                    *(unsigned char *)((t177 + 0x0)) = 0x1;
                    *(unsigned char *)((t177 + 0x1)) = 0x1;
                    *(unsigned short *)((t177 + 0x6)) = 0x41F;
                    *(unsigned char *)((t177 + 0x5)) = 0x20;
                    *(unsigned int *)((t177 + 0x10)) = 0xC017240;
                    (((struct o5C_float *)(t177))->v) = 0.0f;
                    (((struct o20_float *)(t177))->v) = -1.0f;
                    (((struct o24_float *)(t177))->v) = -2.0f;
                    (((struct o28_float *)(t177))->v) = -5.0f;
                    (((struct o50_float *)(t177))->v) = 0.0078125f;
                    (((struct o54_float *)(t177))->v) = 0.0078125f;
                    (((struct o58_float *)(t177))->v) = 0.0078125f;
                    FUN_0c06233a(((((struct o2E0_int *)(t177))->v)), 0xC6649D0, 0x1C);
                    *(unsigned char *)((((((struct o2E0_int *)(t177))->v)) + 0x0)) = 0x1;
                    *(unsigned short *)((((((struct o2E0_int *)(t177))->v)) + 0x2)) = 0x100;
                    (((struct o4_float *)(((((struct o2E0_int *)(t177))->v))))->v) = 0.0f;
                    (((struct o8_float *)(((((struct o2E0_int *)(t177))->v))))->v) = 0.0f;
                    (((struct oC_float *)(((((struct o2E0_int *)(t177))->v))))->v) = 0.0f;
                    t247 = 0xC;
                }
            }
        } else {
            t206 = FUN_0c059132(0x5, 0x1, 0x1);
            t247 = t206;
            if (t206 == 0) {
            } else {
                *(unsigned char *)((t206 + 0x0)) = 0x1;
                *(unsigned char *)((t206 + 0x1)) = 0x1;
                *(unsigned short *)((t206 + 0x6)) = 0x41F;
                *(unsigned char *)((t206 + 0x5)) = 0x20;
                *(unsigned int *)((t206 + 0x10)) = 0xC017240;
                (((struct o5C_float *)(t206))->v) = 0.0f;
                (((struct o20_float *)(t206))->v) = -0.5f;
                (((struct o24_float *)(t206))->v) = -2.0f;
                (((struct o28_float *)(t206))->v) = -5.0f;
                (((struct o50_float *)(t206))->v) = 0.0078125f;
                (((struct o54_float *)(t206))->v) = 0.0078125f;
                (((struct o58_float *)(t206))->v) = 0.0078125f;
                FUN_0c06233a(((((struct o2E0_int *)(t206))->v)), 0xC6649D0, 0x1D);
                *(unsigned char *)((((((struct o2E0_int *)(t206))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct o2E0_int *)(t206))->v)) + 0x2)) = 0x100;
                (((struct o4_float *)(((((struct o2E0_int *)(t206))->v))))->v) = 0.0f;
                (((struct o8_float *)(((((struct o2E0_int *)(t206))->v))))->v) = 0.0f;
                (((struct oC_float *)(((((struct o2E0_int *)(t206))->v))))->v) = 0.0f;
                t247 = 0xC;
            }
        }
    } else {
        t235 = FUN_0c059132(0x5, 0x1, 0x1);
        t247 = t235;
        if (t235 == 0) {
        } else {
            *(unsigned char *)((t235 + 0x0)) = 0x1;
            *(unsigned char *)((t235 + 0x1)) = 0x1;
            *(unsigned short *)((t235 + 0x6)) = 0x41F;
            *(unsigned char *)((t235 + 0x5)) = 0x20;
            *(unsigned int *)((t235 + 0x10)) = 0xC017240;
            (((struct o5C_float *)(t235))->v) = 0.0f;
            (((struct o20_float *)(t235))->v) = -0.0f;
            (((struct o24_float *)(t235))->v) = -2.0f;
            (((struct o28_float *)(t235))->v) = -5.0f;
            (((struct o50_float *)(t235))->v) = 0.0078125f;
            (((struct o54_float *)(t235))->v) = 0.0078125f;
            (((struct o58_float *)(t235))->v) = 0.0078125f;
            FUN_0c06233a(((((struct o2E0_int *)(t235))->v)), 0xC6649D0, 0x1E);
            *(unsigned char *)((((((struct o2E0_int *)(t235))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct o2E0_int *)(t235))->v)) + 0x2)) = 0x100;
            (((struct o4_float *)(((((struct o2E0_int *)(t235))->v))))->v) = 0.0f;
            (((struct o8_float *)(((((struct o2E0_int *)(t235))->v))))->v) = 0.0f;
            (((struct oC_float *)(((((struct o2E0_int *)(t235))->v))))->v) = 0.0f;
            t247 = 0xC;
        }
    }
    return t247;
}

int FUN_0c02bd8c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oF2_ushort *)(a4))->v) = 0x0;
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 == 1) {
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + 9.33333206f);
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + -6.99999905f);
            u0 = 0.333333313f;
            u0 = u0 + 0.049999997f * (float)((((struct oEC_short *)(a4))->v));
            (((struct o54_float *)(a4))->v) = u0;
            (((struct o50_float *)(a4))->v) = u0;
            t1 = (((struct oEC_short *)(a4))->v);
            if (t1 != 1) {
                return t1;
            }
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            *(unsigned char *)((a4 + 0xA)) = 0x0;
            (((struct oEC_ushort *)(a4))->v) = 0x3;
            (((struct oEE_ushort *)(a4))->v) = 0x2;
            (((struct o20_float *)(a4))->v) = 0.0f;
            (((struct o24_float *)(a4))->v) = 0.0f;
            FUN_0c0a3f30(0x1F);
            return FUN_0c0a3f30(0x20);
        }
        if (t0 == 2) {
            if ((*(signed char *)((a4 + 0x4))) != 0) {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                *(unsigned char *)((a4 + 0xA)) = 0x0;
                (((struct oEC_ushort *)(a4))->v) = 0x2E;
                (((struct o50_float *)(a4))->v) = 0.333333313f;
                (((struct o54_float *)(a4))->v) = 0.333333313f;
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct o24_float *)(a4))->v) = 64.0f;
                *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)0xC7F4732 = 0x1;
                t1 = 0x2E8;
            } else {
                t2 = *(signed char *)((a4 + 0xA));
                switch (t2) {
                case 0:
                    (((struct o54_float *)(a4))->v) = (((-((float)((((struct oEC_short *)(a4))->v)) / 12.0f)) + 1.25f) * 0.333333313f);
                    (((struct o50_float *)(a4))->v) = ((((float)((((struct oEC_short *)(a4))->v)) / 12.0f) + 0.75f) * 0.333333313f);
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    if (((((struct oEC_short *)(a4))->v)) != 0) {
                    } else {
                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                        (((struct oEC_ushort *)(a4))->v) = 0x3;
                    }
                    break;
                case 1:
                    (((struct o54_float *)(a4))->v) = ((((float)((((struct oEC_short *)(a4))->v)) / 12.0f) + 1.0f) * 0.333333313f);
                    (((struct o50_float *)(a4))->v) = (((-((float)((((struct oEC_short *)(a4))->v)) / 12.0f)) + 1.0f) * 0.333333313f);
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    if (((((struct oEC_short *)(a4))->v)) == 0) {
                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                        (((struct oEC_ushort *)(a4))->v) = 0x3;
                    }
                    break;
                case 2:
                    (((struct o54_float *)(a4))->v) = ((((float)((((struct oEC_short *)(a4))->v)) / 12.0f) + 0.75f) * 0.333333313f);
                    (((struct o50_float *)(a4))->v) = (((-((float)((((struct oEC_short *)(a4))->v)) / 12.0f)) + 1.25f) * 0.333333313f);
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    if (((((struct oEC_short *)(a4))->v)) == 0) {
                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                        (((struct oEC_ushort *)(a4))->v) = 0x3;
                    }
                    break;
                case 3:
                    (((struct o54_float *)(a4))->v) = (((-((float)((((struct oEC_short *)(a4))->v)) / 12.0f)) + 1.0f) * 0.333333313f);
                    (((struct o50_float *)(a4))->v) = ((((float)((((struct oEC_short *)(a4))->v)) / 12.0f) + 1.0f) * 0.333333313f);
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    if (((((struct oEC_short *)(a4))->v)) == 0) {
                        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
                        if (((((struct oEE_short *)(a4))->v)) == 0) {
                            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                            *(unsigned char *)((a4 + 0xA)) = 0x0;
                            (((struct oEC_ushort *)(a4))->v) = 0x2E;
                            (((struct o50_float *)(a4))->v) = 0.333333313f;
                            (((struct o54_float *)(a4))->v) = 0.333333313f;
                        } else {
                            *(unsigned char *)((a4 + 0xA)) = 0x0;
                            (((struct oEC_ushort *)(a4))->v) = 0x3;
                        }
                    }
                    break;
                }
                t2 = (((struct o2E4_int *)(a4))->v);
                *(unsigned int *)((t2 + 0x18)) = ((*(int *)((t2 + 0x18))) - 0x20B6);
                t1 = 0x2E4;
            }
            return t1;
        }
        if (t0 == 3) {
            FUN_0c02bc0e(a4, a5, a6, a7);
            u0 = (((struct o24_float *)(a4))->v);
            (((struct o24_float *)(a4))->v) = (u0 + 2.0f);
            t1 = 0x24;
            if (!(64.0f > (u0 + 2.0f))) {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct o24_float *)(a4))->v) = 64.0f;
                *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct o2EC_int *)(a4))->v)) + 0x2)) = 0x411;
                (((struct o40_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 0.5f;
                *(unsigned int *)((((((struct o2EC_int *)(a4))->v)) + 0x10)) = 0x4000;
                *(unsigned char *)0xC7F4732 = 0x1;
                t1 = 0x2EC;
            }
            return t1;
        }
        if (t0 == 4) {
            FUN_0c02bc0e(a4, a5, a6, a7);
            FUN_0c02bcba();
            t1 = (((struct o2EC_int *)(a4))->v);
            *(unsigned int *)((t1 + 0x10)) = (unsigned short)((*(int *)((t1 + 0x10))) + 0x444);
            t1 = (((struct o2EC_int *)(a4))->v);
            u0 = 0.599999964f;
            u0 = u0 + 0.399999976f * (FUN_0c0dfa50((*(int *)((t1 + 0x10)))));
            (((struct o40_float *)(t1))->v) = u0;
            t1 = 0xC02C2C0;
            if ((*(signed char *)0xC7F473A) != 0) {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
                t1 = 0x2E8;
            }
            return t1;
        }
        if (t0 == 5) {
            FUN_0c02bc0e(a4, a5, a6, a7);
            u0 = (((struct o24_float *)(a4))->v);
            (((struct o24_float *)(a4))->v) = (u0 + 4.0f);
            if (!(96.0f > (u0 + 4.0f))) {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct o24_float *)(a4))->v) = 96.0f;
                *(unsigned char *)0xC7F4732 = 0x1;
            }
            return 0x24;
        }
        if (t0 == 6) {
            return FUN_0c02bc0e(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct oC_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
    (((struct o4_float *)(((((struct o2E4_int *)(a4))->v))))->v) = -264.0f;
    (((struct o8_float *)(((((struct o2E4_int *)(a4))->v))))->v) = -6.0f;
    (((struct oC_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 8.0f;
    (((struct o1C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
    (((struct o20_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
    *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
    (((struct o4_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 0.0f;
    (((struct o8_float *)(((((struct o2E8_int *)(a4))->v))))->v) = -648.0f;
    (((struct oC_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 8.0f;
    (((struct o1C_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 3.0f;
    (((struct o20_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 3.0f;
    *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x0;
    (((struct o4_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 0.0f;
    (((struct o8_float *)(((((struct o2EC_int *)(a4))->v))))->v) = -550.0f;
    (((struct o1C_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 3.0f;
    (((struct o20_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 3.0f;
    (((struct o20_float *)(a4))->v) = -559.999939f;
    (((struct o24_float *)(a4))->v) = 419.999969f;
    (((struct oEC_ushort *)(a4))->v) = 0x3C;
    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
    if ((*(signed char *)((a4 + 0x4))) != 0) {
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        *(unsigned char *)((a4 + 0xA)) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0x3;
        (((struct oEE_ushort *)(a4))->v) = 0x2;
        (((struct o20_float *)(a4))->v) = 0.0f;
        (((struct o24_float *)(a4))->v) = 0.0f;
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        *(unsigned char *)((a4 + 0xA)) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0x1;
        t0 = (((struct o2E4_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) - (int)(((float)((((struct oEC_short *)(a4))->v)) * 65536.0f) / 360.0f));
        (((struct o50_float *)(a4))->v) = 0.333333313f;
        (((struct o54_float *)(a4))->v) = 0.333333313f;
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        (((struct o24_float *)(a4))->v) = 64.0f;
        *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        (((struct o24_float *)(a4))->v) = 96.0f;
        t0 = (((struct o2E8_int *)(a4))->v);
        (((struct o8_float *)(t0))->v) = (((((struct o8_float *)(t0))->v)) - 96.0f);
        *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
        t0 = *(signed char *)((a4 + 0x9));
        *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
        *(unsigned char *)0xC7F4732 = 0x1;
        return (t0 + 0x1);
    }
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + 9.33333206f);
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + -6.99999905f);
    u0 = 0.333333313f;
    u0 = u0 + 0.049999997f * (float)((((struct oEC_short *)(a4))->v));
    (((struct o54_float *)(a4))->v) = u0;
    (((struct o50_float *)(a4))->v) = u0;
    t0 = (((struct oEC_short *)(a4))->v);
    if (t0 != 1) {
        return t0;
    }
    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x3;
    (((struct oEE_ushort *)(a4))->v) = 0x2;
    (((struct o20_float *)(a4))->v) = 0.0f;
    (((struct o24_float *)(a4))->v) = 0.0f;
    FUN_0c0a3f30(0x1F);
    return FUN_0c0a3f30(0x20);
}
