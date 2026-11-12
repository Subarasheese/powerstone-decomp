/* Straight-line functions with calls and guards (batch gen_ez): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_short { char p[0x14]; short v; };
struct o14_ushort { char p[0x14]; unsigned short v; };
struct o16_short { char p[0x16]; short v; };
struct o16_ushort { char p[0x16]; unsigned short v; };
struct o18_float { char p[0x18]; float v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o1A_ushort { char p[0x1A]; unsigned short v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA_short { char p[0xA]; short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_short { char p[0xC]; short v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c0149d4(int);
int FUN_0c014b78(void);
int FUN_0c0150c4(void);
int FUN_0c0150f8(void);
int FUN_0c058f4e(void);
int FUN_0c059330(int, int, int, int);
int FUN_0c05f2d4(int, int);
int FUN_0c060c88(int);
int FUN_0c067f40(int);
int FUN_0c067fe2(int);
int FUN_0c068102(int);
int FUN_0c068192(int);
extern int FUN_0c0a2f5c();
int FUN_0c0a2f7a(void);
int FUN_0c0a3308(int);
int FUN_0c0d643c(int);
int FUN_0c0d6460(int);
int FUN_0c0d64e8(int);
int FUN_0c0d6744(int);
int FUN_0c0d6774(int);
int FUN_0c0d6874(int);
int FUN_0c0d699e(int);
int FUN_0c0d6a56(int);
int FUN_0c0d6fac(int);
int FUN_0c0d8f10(int, int, int);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
extern int FUN_0c0e6e5c();
int FUN_0c0e6f24(void);
extern int FUN_0c0e6fe8();
int thunk_FUN_0c062242(int);
int FUN_0c0151c0(int a4, int a5, int a6, int a7);
int FUN_0c03a58c(int a4, int a5, int a6, int a7);
int FUN_0c03d932(int a4, int a5, int a6, int a7);
int FUN_0c0d6ca2(int a4);
int FUN_0c0681e4(int a4, int a5, int a6, int a7);

int FUN_0c0151c0(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u0;
    register float u1;

    if ((*(signed char *)0xC7F300B) != 0) {
        return 0x12B;
    }
    if ((*(signed char *)0xC7F300E) != 0) {
        return 0x12E;
    }
    t6 = *(signed char *)0xC7F302C;
    if (t6 != 0) {
        if (t6 != 1) {
            return ((int (*)(int, int, int, int))(0xC0155F4))(0xC7F302C, a5, a6, a7);
        }
        if (((((struct o16_short *)0xC7F302C)->v)) != 0) {
            (((struct o16_ushort *)0xC7F302C)->v) = (((((struct o16_short *)0xC7F302C)->v)) - 1);
        }
        if (((((struct o14_short *)0xC7F302C)->v)) != 0) {
            (((struct o14_ushort *)0xC7F302C)->v) = (((((struct o14_short *)0xC7F302C)->v)) - 1);
        }
        t6 = *(signed char *)0xC361C5C;
        if (((unsigned short)(*(short *)((0xC361BFC + (signed char)(((t6 << 2) + t6) << 2)))) & 8) != 0) {
            (((struct o1C_ushort *)0xC7F302C)->v) = 0x1;
        }
        t6 = *(signed char *)0xC7F302D;
        if (t6 != 0) {
            if (t6 != 1) {
                if (t6 == 2) {
                    t7 = *(signed char *)0xC7F302E;
                    if (t7 != 0) {
                        if (t7 != 1) {
                            if (t7 != 2) {
                                return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                            }
                            t7 = (((struct oC_short *)0xC7F302C)->v);
                            (((struct oC_ushort *)0xC7F302C)->v) = (t7 - 1);
                            if ((int)(short)(t7 - 1) >= 0) {
                                return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                            }
                            (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                            (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                            return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                        }
                    } else {
                        (((struct o8_float *)0xC361C58)->v) = 1.0f;
                        (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
                    }
                    (((struct o8_float *)0xC361C58)->v) = (((((struct o8_float *)0xC361C58)->v)) + -0.099999994f);
                    if (((((struct o8_float *)0xC361C58)->v)) > 0.0f) {
                        return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                    }
                    (((struct o8_float *)0xC361C58)->v) = 0.0f;
                    (((struct oC_ushort *)0xC7F302C)->v) = 0x14;
                    (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
                    return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                }
                if (t6 == 3) {
                    t7 = *(signed char *)0xC7F302E;
                    if (t7 != 0) {
                        if (t7 != 1) {
                            return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                        }
                        t7 = (((struct oC_short *)0xC7F302C)->v);
                        (((struct oC_ushort *)0xC7F302C)->v) = (t7 - 1);
                        if ((int)(short)(t7 - 1) < 0) {
                            (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                            (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                            return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                        }
                        return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                    }
                    (((struct o8_float *)0xC361C58)->v) = 0.0f;
                    (((struct oC_ushort *)0xC7F302C)->v) = 0x1E;
                    FUN_0c0149d4(0x0);
                    (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
                    t7 = (((struct oC_short *)0xC7F302C)->v);
                    (((struct oC_ushort *)0xC7F302C)->v) = (t7 - 1);
                    if ((int)(short)(t7 - 1) < 0) {
                        (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                        (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                        return ((int (*)(void))(0xC015630))();
                    }
                    return ((int (*)(void))(0xC015630))();
                }
                if (t6 == 4) {
                    t7 = *(signed char *)0xC7F302E;
                    if (t7 != 0) {
                        if (t7 != 1) {
                            return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                        }
                        t7 = (((struct oC_short *)0xC7F302C)->v);
                        (((struct oC_ushort *)0xC7F302C)->v) = (t7 - 1);
                        if (((int)(short)(t7 - 1) >= 0) && (t0 = (((struct o1C_short *)0xC7F302C)->v), t0 == 0)) {
                            return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                        }
                        if ((*(signed char *)0xC7F301E) == 0) {
                        } else {
                            (((struct o0_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302C) + 0x1);
                        }
                        (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                        (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                        return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                    }
                    (((struct o8_float *)0xC361C58)->v) = 1.0f;
                    t0 = ((int (*)(int, int, int, int))(FUN_0c0a2f5c))(0xC7F302E, 0x14, 0x1E, a7);
                    (((struct oC_ushort *)0xC7F302C)->v) = 0x3C;
                    (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
                    t0 = (((struct oC_short *)0xC7F302C)->v);
                    (((struct oC_ushort *)0xC7F302C)->v) = (t0 - 1);
                    if (((int)(short)(t0 - 1) >= 0) && (t1 = (((struct o1C_short *)0xC7F302C)->v), t1 == 0)) {
                        return ((int (*)(void))(0xC015630))();
                    }
                    if ((*(signed char *)0xC7F301E) == 0) {
                    } else {
                        (((struct o0_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302C) + 0x1);
                    }
                    (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                    (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                    return ((int (*)(void))(0xC015630))();
                }
                if (t6 == 5) {
                    t0 = *(signed char *)0xC7F302E;
                    if (t0 != 0) {
                        if (t0 != 1) {
                            return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                        }
                    } else {
                        (((struct o8_float *)0xC361C58)->v) = 0.0f;
                        (((struct oC_ushort *)0xC7F302C)->v) = 0x8C;
                        (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
                    }
                    if (((((struct oC_short *)0xC7F302C)->v)) == 120) {
                        FUN_0c014b78();
                    } else {
                        t0 = 0xC7F302E;
                        t1 = 0x14;
                        t7 = 0x1E;
                        u0 = 1.0f;
                    }
                    t8 = (((struct oC_short *)0xC7F302C)->v);
                    (((struct oC_ushort *)0xC7F302C)->v) = (t8 - 1);
                    if ((int)(short)(t8 - 1) >= 0) {
                        if (((((struct o1C_short *)0xC7F302C)->v)) == 0) {
                            return ((int (*)(int, int, int, int, float))(0xC015630))(t0, t1, t7, a7, u0);
                        }
                    }
                    (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                    (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                    return ((int (*)(int, int, int, int, float))(0xC015630))(t0, t1, t7, a7, u0);
                }
                if (t6 == 6) {
                    t0 = *(signed char *)0xC7F302E;
                    if (t0 != 0) {
                        if (t0 != 1) {
                            if (t0 != 2) {
                                return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                            }
                            t0 = (((struct oC_short *)0xC7F302C)->v);
                            (((struct oC_ushort *)0xC7F302C)->v) = (t0 - 1);
                            if ((int)(short)(t0 - 1) >= 0) {
                                if (((((struct o1C_short *)0xC7F302C)->v)) != 0) {
                                    (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                                    (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                                    (((struct o8_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
                                    (((struct o4_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
                                    (((struct o0_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
                                    return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F31BC, 0x14, 0x1E, a7, 1.0f);
                                }
                                return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                            }
                            (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                            (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                            (((struct o8_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
                            (((struct o4_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
                            (((struct o0_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
                            return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F31BC, 0x14, 0x1E, a7, 1.0f);
                        }
                    } else {
                        (((struct o8_float *)0xC361C58)->v) = 0.0f;
                        (((struct oC_ushort *)0xC7F302C)->v) = 0x1E;
                        (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
                    }
                    t0 = (((struct oC_short *)0xC7F302C)->v);
                    (((struct oC_ushort *)0xC7F302C)->v) = (t0 - 1);
                    if ((int)(short)(t0 - 1) >= 0) {
                        if (((((struct o1C_short *)0xC7F302C)->v)) != 0) {
                            (((struct oC_ushort *)0xC7F302C)->v) = 0x3C;
                            (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
                            return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                        }
                        return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                    }
                    (((struct oC_ushort *)0xC7F302C)->v) = 0x3C;
                    (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
                    return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                }
                if (t6 == 7) {
                    t0 = *(signed char *)0xC7F302E;
                    if (t0 != 0) {
                        if (t0 != 1) {
                            return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                        }
                    } else {
                        (((struct o8_float *)0xC361C58)->v) = 0.0f;
                        (((struct oC_ushort *)0xC7F302C)->v) = 0x78;
                        if (((*(signed char *)0xC7F2F02) == 0) && (t2 = *(signed char *)0xC7F301E, t2 == 0)) {
                        } else {
                            (((struct oC_ushort *)0xC7F302C)->v) = 0x0;
                        }
                        (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
                    }
                    t0 = (((struct oC_short *)0xC7F302C)->v);
                    (((struct oC_ushort *)0xC7F302C)->v) = (t0 - 1);
                    if ((int)(short)(t0 - 1) < 0) {
                        (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                        (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                        return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                    }
                    return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                }
                return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
            }
            t0 = *(signed char *)0xC7F302E;
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                    }
                    u0 = (((struct o8_float *)0xC361C58)->v);
                    (((struct o8_float *)0xC361C58)->v) = (u0 + 0.099999994f);
                    if (1.0f > (u0 + 0.099999994f)) {
                        return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                    }
                    (((struct o8_float *)0xC361C58)->v) = 1.0f;
                    (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                    (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                    return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                }
            } else {
                (((struct o8_float *)0xC361C58)->v) = 0.0f;
                (((struct oC_ushort *)0xC7F302C)->v) = 0x14;
                (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
            }
            t0 = (((struct oC_short *)0xC7F302C)->v);
            (((struct oC_ushort *)0xC7F302C)->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) < 0) {
                (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
                return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
            }
            return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
        }
    } else {
        (((struct o0_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302C) + 0x1);
        (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
        (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
        (((struct o3_uchar *)0xC7F302C)->v) = 0x0;
        if ((*(signed char *)0xC7F3073) != 0) {
            (((struct o4_uchar *)0xC361C58)->v) = ((*(signed char *)0xC7F3073) - 1);
        } else {
            (((struct o4_uchar *)0xC361C58)->v) = 0x0;
        }
        (((struct o0_ushort *)0xC361C58)->v) = 0x0;
        (((struct o2_ushort *)0xC361C58)->v) = 0x0;
        (((struct o5_uchar *)0xC361C58)->v) = 0x0;
        (((struct oA_ushort *)0xC7F302C)->v) = 0x0;
        (((struct o1C_ushort *)0xC7F302C)->v) = 0x0;
        (((struct o1A_ushort *)0xC7F302C)->v) = 0x0;
        (((struct o18_ushort *)0xC7F302C)->v) = 0x0;
        (((struct o16_ushort *)0xC7F302C)->v) = 0x0;
        (((struct o14_ushort *)0xC7F302C)->v) = 0x0;
        (((struct o18_float *)0xC361C58)->v) = 0.0f;
        (((struct o14_float *)0xC361C58)->v) = 0.0f;
        (((struct o10_float *)0xC361C58)->v) = 0.0f;
        (((struct oC_float *)0xC361C58)->v) = 0.0f;
        (((struct o8_float *)0xC361C58)->v) = 0.0f;
        FUN_0c058f4e();
        FUN_0c0a2f7a();
        FUN_0c0d8f10(0x1C, 0x0, 0xF0);
        FUN_0c05f2d4(0x3, 0x0);
        (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
        FUN_0c060c88(0x9);
        FUN_0c0a3308((*(signed char *)0xC7F3081));
        *(unsigned char *)0xC7F3082 = 0x0;
        if (((((struct o16_short *)0xC7F302C)->v)) != 0) {
            (((struct o16_ushort *)0xC7F302C)->v) = (((((struct o16_short *)0xC7F302C)->v)) - 1);
        }
        if (((((struct o14_short *)0xC7F302C)->v)) != 0) {
            (((struct o14_ushort *)0xC7F302C)->v) = (((((struct o14_short *)0xC7F302C)->v)) - 1);
        }
        t0 = *(signed char *)0xC361C5C;
        if (((unsigned short)(*(short *)((0xC361BFC + (signed char)(((t0 << 2) + t0) << 2)))) & 8) != 0) {
            (((struct o1C_ushort *)0xC7F302C)->v) = 0x1;
        }
        t0 = *(signed char *)0xC7F302D;
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 == 2) {
                    t1 = *(signed char *)0xC7F302E;
                    if (t1 != 0) {
                        if (t1 != 1) {
                            if (t1 != 2) {
                                return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                            }
                            t1 = (((struct oC_short *)0xC7F302C)->v);
                            (((struct oC_ushort *)0xC7F302C)->v) = (t1 - 1);
                            if ((int)(short)(t1 - 1) >= 0) {
                                return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                            }
                            (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                            (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                            return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                        }
                    } else {
                        (((struct o8_float *)0xC361C58)->v) = 1.0f;
                        (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
                    }
                    (((struct o8_float *)0xC361C58)->v) = (((((struct o8_float *)0xC361C58)->v)) + -0.099999994f);
                    if (((((struct o8_float *)0xC361C58)->v)) > 0.0f) {
                        return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                    }
                    (((struct o8_float *)0xC361C58)->v) = 0.0f;
                    (((struct oC_ushort *)0xC7F302C)->v) = 0x14;
                    (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
                    return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                }
                if (t0 == 3) {
                    t1 = *(signed char *)0xC7F302E;
                    if (t1 != 0) {
                        if (t1 != 1) {
                            return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                        }
                        t1 = (((struct oC_short *)0xC7F302C)->v);
                        (((struct oC_ushort *)0xC7F302C)->v) = (t1 - 1);
                        if ((int)(short)(t1 - 1) < 0) {
                            (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                            (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                            return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                        }
                        return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                    }
                    (((struct o8_float *)0xC361C58)->v) = 0.0f;
                    (((struct oC_ushort *)0xC7F302C)->v) = 0x1E;
                    FUN_0c0149d4(0x0);
                    (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
                    t1 = (((struct oC_short *)0xC7F302C)->v);
                    (((struct oC_ushort *)0xC7F302C)->v) = (t1 - 1);
                    if ((int)(short)(t1 - 1) < 0) {
                        (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                        (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                        return ((int (*)(void))(0xC015630))();
                    }
                    return ((int (*)(void))(0xC015630))();
                }
                if (t0 == 4) {
                    t1 = *(signed char *)0xC7F302E;
                    if (t1 != 0) {
                        if (t1 != 1) {
                            return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                        }
                        t1 = (((struct oC_short *)0xC7F302C)->v);
                        (((struct oC_ushort *)0xC7F302C)->v) = (t1 - 1);
                        if (((int)(short)(t1 - 1) >= 0) && (t3 = (((struct o1C_short *)0xC7F302C)->v), t3 == 0)) {
                            return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                        }
                        if ((*(signed char *)0xC7F301E) == 0) {
                        } else {
                            (((struct o0_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302C) + 0x1);
                        }
                        (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                        (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                        return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                    }
                    (((struct o8_float *)0xC361C58)->v) = 1.0f;
                    t1 = ((int (*)(int, int, int))(FUN_0c0a2f5c))(0xC7F302E, 0x14, 0x1E);
                    (((struct oC_ushort *)0xC7F302C)->v) = 0x3C;
                    (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
                    t1 = (((struct oC_short *)0xC7F302C)->v);
                    (((struct oC_ushort *)0xC7F302C)->v) = (t1 - 1);
                    if (((int)(short)(t1 - 1) >= 0) && (t4 = (((struct o1C_short *)0xC7F302C)->v), t4 == 0)) {
                        return ((int (*)(void))(0xC015630))();
                    }
                    if ((*(signed char *)0xC7F301E) == 0) {
                    } else {
                        (((struct o0_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302C) + 0x1);
                    }
                    (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                    (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                    return ((int (*)(void))(0xC015630))();
                }
                if (t0 == 5) {
                    t1 = *(signed char *)0xC7F302E;
                    if (t1 != 0) {
                        if (t1 != 1) {
                            return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                        }
                    } else {
                        (((struct o8_float *)0xC361C58)->v) = 0.0f;
                        (((struct oC_ushort *)0xC7F302C)->v) = 0x8C;
                        (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
                    }
                    if (((((struct oC_short *)0xC7F302C)->v)) == 120) {
                        FUN_0c014b78();
                    } else {
                        t1 = 0xC7F302E;
                        t2 = 0x14;
                        t3 = 0x1E;
                        u0 = 1.0f;
                    }
                    t4 = (((struct oC_short *)0xC7F302C)->v);
                    (((struct oC_ushort *)0xC7F302C)->v) = (t4 - 1);
                    if ((int)(short)(t4 - 1) >= 0) {
                        if (((((struct o1C_short *)0xC7F302C)->v)) == 0) {
                            return ((int (*)(int, int, int, int, float))(0xC015630))(t1, t2, t3, a7, u0);
                        }
                    }
                    (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                    (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                    return ((int (*)(int, int, int, int, float))(0xC015630))(t1, t2, t3, a7, u0);
                }
                if (t0 == 6) {
                    t1 = *(signed char *)0xC7F302E;
                    if (t1 != 0) {
                        if (t1 != 1) {
                            if (t1 != 2) {
                                return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                            }
                            t1 = (((struct oC_short *)0xC7F302C)->v);
                            (((struct oC_ushort *)0xC7F302C)->v) = (t1 - 1);
                            if ((int)(short)(t1 - 1) >= 0) {
                                if (((((struct o1C_short *)0xC7F302C)->v)) != 0) {
                                    (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                                    (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                                    (((struct o8_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
                                    (((struct o4_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
                                    (((struct o0_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
                                    return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F31BC, 0x14, 0x1E, a7, 1.0f);
                                }
                                return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                            }
                            (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                            (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                            (((struct o8_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
                            (((struct o4_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
                            (((struct o0_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
                            return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F31BC, 0x14, 0x1E, a7, 1.0f);
                        }
                    } else {
                        (((struct o8_float *)0xC361C58)->v) = 0.0f;
                        (((struct oC_ushort *)0xC7F302C)->v) = 0x1E;
                        (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
                    }
                    t1 = (((struct oC_short *)0xC7F302C)->v);
                    (((struct oC_ushort *)0xC7F302C)->v) = (t1 - 1);
                    if ((int)(short)(t1 - 1) >= 0) {
                        if (((((struct o1C_short *)0xC7F302C)->v)) != 0) {
                            (((struct oC_ushort *)0xC7F302C)->v) = 0x3C;
                            (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
                            return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                        }
                        return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                    }
                    (((struct oC_ushort *)0xC7F302C)->v) = 0x3C;
                    (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
                    return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                }
                if (t0 == 7) {
                    t0 = *(signed char *)0xC7F302E;
                    if (t0 != 0) {
                        if (t0 != 1) {
                            return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                        }
                    } else {
                        (((struct o8_float *)0xC361C58)->v) = 0.0f;
                        (((struct oC_ushort *)0xC7F302C)->v) = 0x78;
                        if (((*(signed char *)0xC7F2F02) == 0) && (t5 = *(signed char *)0xC7F301E, t5 == 0)) {
                        } else {
                            (((struct oC_ushort *)0xC7F302C)->v) = 0x0;
                        }
                        (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
                    }
                    t0 = (((struct oC_short *)0xC7F302C)->v);
                    (((struct oC_ushort *)0xC7F302C)->v) = (t0 - 1);
                    if ((int)(short)(t0 - 1) < 0) {
                        (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                        (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                        return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                    }
                    return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                }
                return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
            }
            t0 = *(signed char *)0xC7F302E;
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                    }
                    u0 = (((struct o8_float *)0xC361C58)->v);
                    (((struct o8_float *)0xC361C58)->v) = (u0 + 0.099999994f);
                    if (1.0f > (u0 + 0.099999994f)) {
                        return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                    }
                    (((struct o8_float *)0xC361C58)->v) = 1.0f;
                    (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                    (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                    return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
                }
            } else {
                (((struct o8_float *)0xC361C58)->v) = 0.0f;
                (((struct oC_ushort *)0xC7F302C)->v) = 0x14;
                (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
            }
            t0 = (((struct oC_short *)0xC7F302C)->v);
            (((struct oC_ushort *)0xC7F302C)->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) < 0) {
                (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
                return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
            }
            return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F302E, 0x14, 0x1E, a7, 1.0f);
        }
    }
    t0 = *(signed char *)0xC7F3081;
    if ((t0 != 0) && ((t0 != 1) && ((t0 != 2) && ((t0 != 3) && ((t0 != 4) && ((t0 != 5) && ((t0 != 6) && ((t0 != 7) && ((t0 != 8) && (t0 != 9)))))))))) {
        if (t0 != 10) {
            t0 = 0x14;
            t1 = 0x1E;
            u0 = 1.0f;
        } else {
            FUN_0c0150f8();
        }
        t2 = t0;
        t0 = t1;
        u1 = u0;
    } else {
        FUN_0c0150c4();
    }
    if ((int)((((struct oA_short *)0xC7F302C)->v)) > 0) {
        (((struct oA_ushort *)0xC7F302C)->v) = (((((struct oA_short *)0xC7F302C)->v)) - 1);
    }
    t1 = (((struct o0_short *)0xC361C58)->v);
    (((struct o0_ushort *)0xC361C58)->v) = (t1 + 0x1);
    if ((int)(unsigned short)(t1 + 0x1) < (int)0x7FFF) {
        return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F3036, t2, t0, a7, u1);
    }
    (((struct o3_uchar *)0xC7F302C)->v) = 0x2;
    return ((int (*)(int, int, int, int, float))(0xC015630))(0xC7F3036, t2, t0, a7, u1);
}

int FUN_0c03a58c(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;
    register float u4;
    register int t5;
    register int t9;
    register float u10;
    register int t17;
    register int t25;
    register int t35;
    register int t40;
    register int t42;
    register int t41;
    register int t44;
    register float u48;
    register float u53;
    register int t56;
    register int t59;
    register int t64;
    register int t66;
    register int t69;
    register int t73;
    register int t75;
    register int t6;
    register int t7;
    register int t8;
    register float u11;
    register int t70;
    register int t71;
    register int t74;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct o2E0_int *)(a4))->v);
                (((struct o4_float *)(t1))->v) = (((((struct o4_float *)(t1))->v)) + -4.39473677f);
                (((struct o8_float *)(t1))->v) = (((((struct o8_float *)(t1))->v)) + 7.26315784f);
                u4 = (((struct oC_float *)(t1))->v);
                (((struct oC_float *)(t1))->v) = (u4 + -2.75f);
                t5 = 0xC0300000;
                t9 = 0x1;
                u10 = (u4 + -2.75f);
                for (;;) {
                    if ((int)t9 < (int)0x6) {
                        t8 = t9;
                        t8 = (t8 << 2);
                        t5 = t9;
                        t6 = (*(int *)((((0x2E0 + a4) + t8) + 0x0)));
                        t5 = (t5 << 1);
                        *(int *)((int)stk + 0) = (0x10 + t6);
                        t5 = (t5 + t9);
                        t5 = (t5 << 2);
                        t5 = (signed char)t5;
                        *(unsigned int *)(((int)stk + 8)) = t5;
                        t5 = (t5 + 0xC321644);
                        *(unsigned int *)(((int)stk + 4)) = t5;
                        t7 = (*(int *)(((int)stk + 8)));
                        t7 = (t7 + 0xC32168C);
                        t17 = (((struct oEC_short *)(a4))->v);
                        t6 = t17;
                        u11 = ((*(float *)((t5 + 0x0))) - (*(float *)((t7 + 0x0))));
                        u10 = (FUN_0c0dfa50(((int)(((((float)(((t17 << 1) + t6) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                        u11 = (u11 * u10);
                        t5 = (0x10 + t6);
                        u11 = (u11 * 65536.0f);
                        u11 = (u11 / 360.0f);
                        u11 = (u11 + 0.5f);
                        t6 = (int)u11;
                        t6 = (t6 & 0xFFFF);
                        *(unsigned int *)((t5 + 0x0)) = t6;
                        t6 = (*(int *)((((0x2E0 + a4) + t8) + 0x0)));
                        *(int *)((int)stk + 0) = (0x14 + t6);
                        t5 = (*(int *)(((int)stk + 4)));
                        t25 = (((struct oEC_short *)(a4))->v);
                        t6 = t25;
                        u11 = (((((struct o4_float *)(t5))->v)) - ((((struct o4_float *)(t7))->v)));
                        u10 = (FUN_0c0dfa50(((int)(((((float)(((t25 << 1) + t6) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                        u11 = (u11 * u10);
                        t5 = (0x14 + t6);
                        t8 = (t8 + (0x2E0 + a4));
                        u11 = (u11 * 65536.0f);
                        u11 = (u11 / 360.0f);
                        u11 = (u11 + 0.5f);
                        t6 = (int)u11;
                        t6 = (t6 & 0xFFFF);
                        *(unsigned int *)((t5 + 0x0)) = t6;
                        t6 = (*(int *)((t8 + 0x0)));
                        *(int *)((int)stk + 0) = (0x18 + t6);
                        t35 = (((struct oEC_short *)(a4))->v);
                        t6 = t35;
                        u11 = (((((struct o8_float *)((*(int *)(((int)stk + 4)))))->v)) - ((((struct o8_float *)(t7))->v)));
                        u10 = (FUN_0c0dfa50(((int)(((((float)(((t35 << 1) + t6) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                        u11 = (u11 * u10);
                        t5 = (0x18 + t6);
                        t9 = (t9 + 0x1);
                        u11 = (u11 * 65536.0f);
                        u11 = (u11 / 360.0f);
                        u11 = (u11 + 0.5f);
                        t6 = (int)u11;
                        t6 = (t6 & 0xFFFF);
                        *(unsigned int *)((t5 + 0x0)) = t6;
                        continue;
                    }
                    break;
                }
                t40 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t40 + 0x1);
                t42 = 0xEC;
                if ((int)(short)(t40 + 0x1) >= (int)0x78) {
                    t41 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t41 + 0x1);
                    t42 = (t41 + 0x1);
                }
                return t42;
            }
            return FUN_0c059330(a4, 0x1, a6, a7);
        }
        t44 = (((struct o2E0_int *)(a4))->v);
        (((struct o4_float *)(t44))->v) = (((((struct o4_float *)(t44))->v)) + -1.15909088f);
        *(volatile short *)((a4 + 0xEC));
        u48 = (((float)(((int (*)(int))(FUN_0c0e6e5c))(a4)) * 65536.0f) / 360.0f);
        (((struct o8_float *)(t44))->v) = (_builtin_fabsf((FUN_0c0dfa50(((int)(u48 + 0.5f) & 0xFFFF)))) * 20.0f);
        (((struct oC_float *)(t44))->v) = (((((struct oC_float *)(t44))->v)) + -1.2954545f);
        *(volatile short *)((a4 + 0xEC));
        u53 = (((float)(((int (*)(void))(FUN_0c0e6e5c))()) * 65536.0f) / 360.0f);
        *(unsigned int *)((t44 + 0x10)) = ((int)((((_builtin_fabsf((FUN_0c0dfa50(((int)(u53 + 0.5f) & 0xFFFF)))) * 3932160.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        t56 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t56 + 0x1);
        t59 = 0xEC;
        if ((int)(short)(t56 + 0x1) < (int)0x2C) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned int *)((t44 + 0x10)) = 0x0;
            *(unsigned int *)((t44 + 0x14)) = 0xA001;
            *(unsigned char *)((((((struct o2F4_int *)(a4))->v)) + 0x0)) = 0x0;
            t59 = 0x2F4;
        }
        return t59;
    }
    t64 = (((struct o2E0_int *)(a4))->v);
    (((struct o4_float *)(t64))->v) = 91.0f;
    (((struct o8_float *)(t64))->v) = 10.0f;
    (((struct oC_float *)(t64))->v) = 160.0f;
    *(unsigned int *)((t64 + 0x14)) = 0x8FA6;
    t66 = 0x1;
    for (;;) {
        if ((int)t66 >= (int)0x6) {
            break;
        }
        *(volatile int *)((((0x2E0 + a4) + (t66 << 2)) + 0x0));
        t69 = ((int (*)(int, int, int, int))(FUN_0c0e6fe8))(t66, (signed char)(((t66 << 1) + t66) << 2), (t66 << 2), 0xC3215B4);
        *(volatile int *)((((0x2E0 + a4) + t71) + 0x0));
        t73 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(0x0, t70, t71);
        t66 = (t74 + 0x1);
    }
    t75 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)((a4 + 0x8)) = (t75 + 0x1);
    return (t75 + 0x1);
}

int FUN_0c03d932(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t26;
    register int t29;
    register int t55;
    register float u62;
    register float u66;
    register int t72;
    register float u75;
    register int t83;
    register float u86;
    register int t90;
    register int t92;
    register float t93;
    register float u95;
    register float t96;
    register float u98;
    register int t132;
    register int t135;
    register int t137;
    register int t27;
    int t28;
    register int t133;
    int t134;

    t0 = *(signed char *)((a4 + 0x8));
    t1 = *(int *)((a4 + 0x1C));
    if (t0 != 0) {
        if (t0 == 1) {
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + -0.0249999985f);
            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + -0.0249999985f);
            (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + -0.0249999985f);
            if (((((struct oEE_short *)(a4))->v)) == 0) {
                (((struct o60_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) + 0.049999997f);
                (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) + 0.049999997f);
                (((struct o68_float *)(a4))->v) = (((((struct o68_float *)(a4))->v)) + 0.049999997f);
                if (!(1.0f > ((((struct o60_float *)(a4))->v)))) {
                    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                    (((struct o60_float *)(a4))->v) = 1.0f;
                    (((struct o64_float *)(a4))->v) = 1.0f;
                    (((struct o68_float *)(a4))->v) = 1.0f;
                }
            }
            t26 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t26 - 1);
            if (((short)(t26 - 1) != 0) && ((t27 = *(signed char *)((t1 + 0x71A4)), t27 == 1) && (t28 = *(signed char *)((t1 + 0x71A5)), (unsigned char)t28 == 108))) {
                t137 = (unsigned char)t28;
            } else {
                t29 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t29 + 0x1);
                t137 = (t29 + 0x1);
            }
        } else {
            if (t0 == 2) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            t137 = (FUN_0c059330(a4, a5, a6, a7));
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        if ((int)(*(signed char *)((a4 + 0x4))) >= (int)0x3) {
            FUN_0c0df940();
            *(unsigned int *)((a4 + 0x30)) = ((((FUN_0c0e6f24()) << 8) << 2) << 2);
        }
        t55 = *(signed char *)((t1 + 0x3));
        *(unsigned int *)(((int)stk + 4)) = ((unsigned short)((unsigned short)t55 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t55 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t55 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + -15.0f);
        *(int *)((int)stk + 0) = (a4 + 0x20);
        u62 = ((((struct o20_float *)(a4))->v));
        u62 = u62 + 30.0f * (FUN_0c0dfa50((*(int *)((t1 + 0x30)))));
        (((struct o20_float *)(a4))->v) = u62;
        *(int *)((int)stk + 0) = (a4 + 0x28);
        u66 = ((((struct o28_float *)(a4))->v));
        u66 = u66 + 30.0f * (FUN_0c0df4d0((*(int *)((t1 + 0x30)))));
        (((struct o28_float *)(a4))->v) = u66;
        FUN_0c0df940();
        t72 = FUN_0c0e6f24();
        u75 = (float)t72;
        if ((int)t72 < 0) {
            u75 = ((float)t72 + 4.2949673e+09f);
        }
        FUN_0c0df940();
        t83 = FUN_0c0e6f24();
        u86 = (float)t83;
        if ((int)t83 < 0) {
            u86 = ((float)t83 + 4.2949673e+09f);
        }
        t90 = (0xFFFFE000 + (int)((u86 * 65536.0f) / 360.0f));
        if ((0x8000 & (0xFFFFE000 + (int)((u86 * 65536.0f) / 360.0f))) != 0) {
            t90 = ((0xFFFFE000 + (int)((u86 * 65536.0f) / 360.0f)) | 0xFFFF0000);
        }
        t92 = *(int *)((t1 + 0x30));
        t93 = FUN_0c0dfa50(((int)((u75 * 65536.0f) / 360.0f) + 0x2AAB));
        u95 = (t93 * 400.0f);
        (((struct o4_float *)(((int)stk + 4)))->v) = ((FUN_0c0dfa50((unsigned short)(t90 + t92))) * u95);
        t96 = FUN_0c0df4d0(((int)((u75 * 65536.0f) / 360.0f) + 0x2AAB));
        (((struct o4_float *)((((int)stk + 4) + 0x4)))->v) = (t96 * 400.0f);
        u98 = (t93 * 400.0f);
        (((struct o8_float *)((((int)stk + 4) + 0x4)))->v) = ((FUN_0c0df4d0((unsigned short)(t90 + t92))) * u98);
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o4_float *)(((int)stk + 4)))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o4_float *)((((int)stk + 4) + 0x4)))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o8_float *)((((int)stk + 4) + 0x4)))->v)));
        (((struct o38_float *)(a4))->v) = (-(((((struct o4_float *)(((int)stk + 4)))->v)) / 40.0f));
        (((struct o3C_float *)(a4))->v) = (-(((((struct o4_float *)((((int)stk + 4) + 0x4)))->v)) / 40.0f));
        (((struct o40_float *)(a4))->v) = (-(((((struct o8_float *)((((int)stk + 4) + 0x4)))->v)) / 40.0f));
        (((struct oEC_ushort *)(a4))->v) = 0x28;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        (((struct o50_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o64_float *)(a4))->v) = 0.0f;
        (((struct o68_float *)(a4))->v) = 0.0f;
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + -0.0249999985f);
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + -0.0249999985f);
        (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + -0.0249999985f);
        if (((((struct oEE_short *)(a4))->v)) == 0) {
            (((struct o60_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) + 0.049999997f);
            (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) + 0.049999997f);
            (((struct o68_float *)(a4))->v) = (((((struct o68_float *)(a4))->v)) + 0.049999997f);
            if (!(1.0f > ((((struct o60_float *)(a4))->v)))) {
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                (((struct o60_float *)(a4))->v) = 1.0f;
                (((struct o64_float *)(a4))->v) = 1.0f;
                (((struct o68_float *)(a4))->v) = 1.0f;
            }
        }
        t132 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t132 - 1);
        if (((short)(t132 - 1) != 0) && ((t133 = *(signed char *)((t1 + 0x71A4)), t133 == 1) && (t134 = *(signed char *)((t1 + 0x71A5)), (unsigned char)t134 == 108))) {
            t137 = (unsigned char)t134;
        } else {
            t135 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t135 + 0x1);
            t137 = (t135 + 0x1);
        }
    }
    return t137;
}

int FUN_0c0d6ca2(int a4)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t4 = *(signed char *)0xC7F2EE4;
    if ((unsigned char)t4 == 8) {
        return (unsigned char)t4;
    }
    if ((unsigned char)t4 == 9) {
        return (unsigned char)t4;
    }
    FUN_0c0d6fac((*(signed char *)((a4 + 0x9))));
    t4 = *(signed char *)((a4 + 0x2));
    if (t4 != 0) {
        if (t4 != 1) {
            if (t4 == 2) {
                t5 = *(short *)((a4 + 0xA));
                *(unsigned short *)((a4 + 0xA)) = (t5 - 1);
                if ((int)(short)(t5 - 1) <= 0) {
                    *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) + 0x1);
                }
                return FUN_0c0d6874(a4);
            }
            t5 = t4;
            if (t4 == 3) {
                if (((*(signed char *)((a4 + 0x5))) & 2) != 0) {
                    FUN_0c0d64e8(a4);
                }
                if (((*(signed char *)((a4 + 0x5))) & 4) != 0) {
                    FUN_0c0d6774(a4);
                }
                *(unsigned char *)((a4 + 0x1)) = 0x5;
                *(unsigned char *)((a4 + 0x2)) = 0x0;
                *(unsigned char *)((a4 + 0x3)) = 0x0;
                *(unsigned char *)((a4 + 0x4)) = 0x0;
                t5 = 0x0;
            }
            return t5;
        }
        t4 = *(signed char *)((a4 + 0x9));
        if ((*(int *)((0xC7F31F0 + (signed char)((((t4 << 2) << 1) + t4) << 2)))) != 0) {
            *(unsigned short *)((a4 + 0xC)) = 0x12C;
        }
        FUN_0c0d6a56(a4);
        if ((*(short *)((a4 + 0xA))) != 0) {
            *(unsigned short *)((a4 + 0xA)) = ((*(short *)((a4 + 0xA))) - 1);
        }
        if ((*(short *)((a4 + 0xC))) != 0) {
            *(unsigned short *)((a4 + 0xC)) = ((*(short *)((a4 + 0xC))) - 1);
        }
        t4 = *(short *)(((a4 + 0xA) + 0x0));
        if ((t4 != 0) && (t0 = *(short *)(((a4 + 0xA) + 0x2)), t0 != 0)) {
        } else {
            t0 = *(signed char *)((a4 + 0x3));
            if (t0 == 0) {
                t5 = *(signed char *)((a4 + 0x3));
                if ((int)t5 < (int)0x3) {
                    t6 = t5;
                    t7 = ((a4 + 0x68) + t5);
                    for (;;) {
                        t6 = (t6 + 0x1);
                        *(unsigned char *)((t7 + 0x0)) = (*(signed char *)0xC1550DA);
                        t7 = (t7 + 0x1);
                        if ((int)t6 >= (int)0x3) {
                            break;
                        }
                    }
                }
            } else {
                if (((int)t0 < (int)0x3) && (t1 = *(signed char *)((a4 + 0x3)), (int)t1 < (int)0x3)) {
                    t0 = ((a4 + 0x68) + t1);
                    t5 = t1;
                    for (;;) {
                        t5 = (t5 + 0x1);
                        *(unsigned char *)((t0 + 0x0)) = (*(signed char *)0xC155104);
                        t0 = (t0 + 0x1);
                        if ((int)t5 >= (int)0x3) {
                            break;
                        }
                    }
                }
            }
            t0 = t4;
            t1 = (a4 + 0x68);
            t4 = 0x0;
            t5 = 0xC1550DA;
            t6 = (a4 + 0x68);
            for (;;) {
                if ((int)t4 >= (int)0x3) {
                    break;
                }
                t0 = (*(signed char *)0xC155105);
                t7 = *(signed char *)((t6 + 0x0));
                t6 = (t6 + 0x1);
                t5 = t7;
                if ((t5 == t0) || (t2 = *(signed char *)0xC155106, t3 = (t5 == t0), t0 = t2, t5 == t0)) {
                    t0 = (*(signed char *)0xC155104);
                    *(unsigned char *)((t1 + 0x0)) = t0;
                }
                t1 = (t1 + 0x1);
                t4 = (t4 + 0x1);
            }
            FUN_0c0d699e(a4);
            *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) + 0x1);
            *(unsigned short *)((a4 + 0xA)) = 0xF0;
        }
        return FUN_0c0d6874(a4);
    }
    *(unsigned char *)((a4 + 0x5)) = 0x0;
    *(unsigned char *)(((a4 + 0x5) + 0x2)) = 0x5;
    *(unsigned char *)(((a4 + 0x5) + 0x1)) = 0x5;
    if ((int)(*(signed char *)((a4 + 0x56))) >= (int)0x9) {
        t0 = FUN_0c0d6460(a4);
        *(unsigned char *)((((a4 + 0x5) + 0x1) + 0x0)) = t0;
        t1 = 0x0;
        if ((int)(signed char)t0 < (int)0x5) {
            t1 = 0x2;
        }
        *(unsigned char *)(((a4 + 0x5) + 0x0)) = ((*(signed char *)(((a4 + 0x5) + 0x0))) | t1);
    }
    t0 = FUN_0c0d6744(a4);
    *(unsigned char *)((((a4 + 0x5) + 0x2) + 0x0)) = t0;
    t1 = 0x0;
    if ((int)(signed char)t0 < (int)0x5) {
        t1 = 0x4;
    }
    *(unsigned char *)(((a4 + 0x5) + 0x0)) = ((*(signed char *)(((a4 + 0x5) + 0x0))) | t1);
    if ((int)(*(signed char *)(((a4 + 0x5) + 0x1))) > (int)(*(signed char *)(((a4 + 0x5) + 0x2)))) {
        *(unsigned char *)(((a4 + 0x5) + 0x1)) = (*(signed char *)(((a4 + 0x5) + 0x2)));
    }
    if ((*(signed char *)((a4 + 0x5))) == 0) {
        *(unsigned char *)((a4 + 0x1)) = 0x5;
        *(unsigned char *)((a4 + 0x2)) = 0x0;
        *(unsigned char *)((a4 + 0x3)) = 0x0;
        *(unsigned char *)((a4 + 0x4)) = 0x0;
        t0 = 0x0;
    } else {
        *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) + 0x1);
        *(unsigned char *)((a4 + 0x3)) = 0x0;
        *(unsigned char *)((a4 + 0x4)) = 0x0;
        *(unsigned short *)((a4 + 0xA)) = 0x708;
        *(unsigned short *)((a4 + 0xC)) = 0x12C;
        FUN_0c0d643c(a4);
        (((struct o1_uchar *)0xC7F3018)->v) = 0x1;
        if (((*(signed char *)((a4 + 0x5))) & 2) != 0) {
            (((struct o0_uchar *)0xC7F3018)->v) = 0x0;
        } else {
            (((struct o0_uchar *)0xC7F3018)->v) = 0x1;
        }
        t0 = 0x138;
    }
    return t0;
}

int FUN_0c0681e4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return FUN_0c068192(a4);
                }
                return FUN_0c068102(a4);
            }
            return FUN_0c067fe2(a4);
        }
        return FUN_0c067f40(a4);
    }
    return ((int (*)(int, int, int, int))(0xC067E1C))(a4, a5, a6, a7);
}
