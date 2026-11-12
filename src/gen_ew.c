/* Straight-line functions with calls and guards (batch gen_ew): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2F0_int { char p[0x2F0]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c0555dc(void);
int FUN_0c059330(int);
int FUN_0c06233a(int, int, int);
int FUN_0c09d89c(int);
int FUN_0c0a3914(int, int);
int FUN_0c0a3ebc(int, int, int);
int FUN_0c0afac2(int);
int FUN_0c0afb0a(int);
int FUN_0c0be7dc(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e6e5c(void);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(void);
int thunk_FUN_0c062242(int);
int FUN_0c0bf046(int a4);
int FUN_0c0afb68(int a4);

int FUN_0c0bf046(int a4)
{
    int stk[4];
    register int t0;
    register int t3;
    register int t9;
    register float u10;
    register int t12;
    register float u13;
    register int t14;
    register int t16;
    register int t18;
    register int t20;
    register int t22;
    register int t24;
    register int t26;
    register int t30;
    register int t36;
    register int t38;
    register int t39;
    register int t44;
    register int t74;
    register int t76;
    register int t80;
    register int t120;
    register int t123;
    register int t132;
    register float u135;
    register float u139;
    register int t145;
    register float u148;
    register float u152;
    register int t169;
    register int t189;
    register int t192;

    t0 = FUN_0c0555dc();
    if (t0 == 1) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    t3 = *(signed char *)((a4 + 0x8));
    if (t3 != 0) {
        if (t3 == 1) {
            (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
            t9 = (((struct o2E4_int *)(a4))->v);
            u10 = *(float *)((((signed char)(((((struct oEC_short *)(a4))->v)) & 0x7) << 2) + 0xC33C578));
            (((struct o24_float *)(t9))->v) = u10;
            (((struct o20_float *)(t9))->v) = u10;
            (((struct o1C_float *)(t9))->v) = u10;
            t12 = (((struct o2E8_int *)(a4))->v);
            u13 = *(float *)((((signed char)(((((struct oEC_short *)(a4))->v)) & 0x3) << 2) + 0xC33C598));
            (((struct o24_float *)(t12))->v) = u13;
            (((struct o20_float *)(t12))->v) = u13;
            (((struct o1C_float *)(t12))->v) = u13;
            t14 = (((struct o2E8_int *)(a4))->v);
            *(unsigned int *)((t14 + 0x18)) = ((*(int *)((t14 + 0x18))) + 0x2000);
            t16 = (((struct o2EC_int *)(a4))->v);
            (((struct o1C_float *)(t16))->v) = (((((struct o1C_float *)(t16))->v)) + 0.25f);
            t18 = (((struct o2EC_int *)(a4))->v);
            (((struct o20_float *)(t18))->v) = (((((struct o20_float *)(t18))->v)) + 0.25f);
            t20 = (((struct o2EC_int *)(a4))->v);
            (((struct o24_float *)(t20))->v) = (((((struct o24_float *)(t20))->v)) + 0.25f);
            t22 = (((struct o2EC_int *)(a4))->v);
            *(unsigned int *)((t22 + 0x18)) = ((*(int *)((t22 + 0x18))) + 0x2000);
            t24 = (((struct o2EC_int *)(a4))->v);
            (((struct oC_float *)(t24))->v) = (((((struct oC_float *)(t24))->v)) + 20.0f);
            t26 = (((struct oEE_short *)(a4))->v);
            (((struct oEE_ushort *)(a4))->v) = (t26 - 1);
            if ((short)(t26 - 1) == 0) {
                (((struct oEE_ushort *)(a4))->v) = 0xA;
                (((struct o1C_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 0.0f;
                (((struct o20_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 0.0f;
                (((struct o24_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 0.0f;
                t30 = (((struct o2EC_int *)(a4))->v);
                (((struct oC_float *)(t30))->v) = (((((struct oC_float *)(t30))->v)) + 0.0f);
            }
            t36 = (((struct o2F0_int *)(a4))->v);
            (((struct o24_float *)(t36))->v) = (((((struct o24_float *)(t36))->v)) + 0.0299999993f);
            t38 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t38 - 1);
            if ((short)(t38 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = 0x4;
                t192 = 0x4;
            } else {
                t39 = *(signed char *)((a4 + 0x3));
                *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)((-t39) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
                thunk_FUN_0c062242(((((unsigned short)((unsigned short)((-t39) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t39) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
                t44 = 0x0;
                if (((((struct o24_float *)(a4))->v)) > ((*(float *)(((int)stk + 8))) + 0.0f)) {
                    t44 = 0x1;
                }
                *(unsigned char *)(((0x105 + a4) + 0x2)) = t44;
                *(unsigned char *)(((0x105 + a4) + 0x1)) = t44;
                (((struct o105_uchar *)(a4))->v) = t44;
                t192 = 0x2D8;
                if ((*(signed char *)((a4 + 0x2D8))) != 0) {
                    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x1;
                    *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x1;
                    (((struct o105_uchar *)(a4))->v) = 0x1;
                    FUN_0c0be7dc(a4);
                    (((struct oEC_ushort *)(a4))->v) = 0x8;
                    *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
                    t192 = 0xFFFFFFFF;
                }
            }
        } else {
            if (t3 == 2) {
                *(unsigned int *)((a4 + 0x30)) = (((*(int *)((a4 + 0x30))) + (*(int *)((((signed char)(((((struct oEC_short *)(a4))->v)) & 0xF) << 2) + 0xC33C538)))) & 0xFFFF);
                (((struct o40_float *)(((((struct o2F0_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 8.0f);
                t74 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t74 - 1);
                t192 = 0xEC;
                if ((short)(t74 - 1) == 0) {
                    *(unsigned char *)((((((struct o2F0_int *)(a4))->v)) + 0x0)) = 0x0;
                    (((struct oEC_ushort *)(a4))->v) = 0xA;
                    t76 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t76 + 0x1);
                    t192 = (t76 + 0x1);
                }
            } else {
                if (t3 == 3) {
                    t80 = (((struct oEC_short *)(a4))->v);
                    (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t80 / 8.0f);
                    if (!(((float)t80 / 8.0f) > 0.0f)) {
                        (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    }
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    t192 = 0xEC;
                } else {
                    t192 = (FUN_0c059330(a4));
                }
            }
        }
    } else {
        t120 = FUN_0c09d89c((*(int *)((a4 + 0x1C))));
        if ((signed char)t120 != 0) {
        } else {
            if (((((struct oEC_short *)(a4))->v)) == 10) {
                t123 = *(signed char *)((a4 + 0x3));
                *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)((-t123) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
                thunk_FUN_0c062242(((((unsigned short)((unsigned short)((-t123) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t123) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
                if ((int)(*(signed char *)((a4 + 0xF))) > (int)0x2) {
                    FUN_0c0df940();
                    t132 = FUN_0c0e6f24();
                    u135 = (float)t132;
                    if ((int)t132 < 0) {
                        u135 = ((float)t132 + 4.2949673e+09f);
                    }
                    u139 = -100.0f;
                    u139 = u139 + 10.0f * u135;
                    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + u139);
                    FUN_0c0df940();
                    t145 = FUN_0c0e6f24();
                    u148 = (float)t145;
                    if ((int)t145 < 0) {
                        u148 = ((float)t145 + 4.2949673e+09f);
                    }
                    u152 = -100.0f;
                    u152 = u152 + 10.0f * u148;
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + u152);
                }
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 700.0f);
            }
            t169 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t169 - 1);
            if ((short)((t169 - 1) + 0x1) == 0) {
                (((struct oEC_ushort *)(a4))->v) = 0xB4;
                *(unsigned char *)((a4 + 0x1)) = 0x1;
                FUN_0c0a3914((*(int *)((a4 + 0x1C))), 0x32);
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
        }
        t189 = *(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))));
        t192 = t189;
        if (t189 != 11) {
            *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
            t192 = 0xFFFFFFFF;
        }
    }
    return t192;
}

int FUN_0c0afb68(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        return t0;
    }
    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x1)) = 0x0;
        (((struct o105_uchar *)(a4))->v) = 0x1;
        (((struct o106_uchar *)(a4))->v) = 0x1;
        (((struct o107_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0x9)) = 0x1;
        return 0x1;
    }
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(volatile short *)((a4 + 0xEC));
    t0 = FUN_0c0e6e5c();
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    if (t1 == 4) {
                        FUN_0c0afac2(a4);
                        u0 = 0.199999988f;
                        u0 = u0 + 0.099999994f * (FUN_0c0dfa50(((((struct oF2_short *)(a4))->v))));
                        (((struct o54_float *)(a4))->v) = u0;
                        (((struct oF2_ushort *)(a4))->v) = ((((((struct oF2_short *)(a4))->v)) + 0x2000) & 0x7FFF);
                        if (((((struct oF0_short *)(a4))->v)) != 0) {
                            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
                        }
                        t2 = 0xF0;
                        if (((((struct oF0_short *)(a4))->v)) != 0) {
                        } else {
                            t3 = 0xF2;
                            if (((((struct oF2_short *)(a4))->v)) != 0) {
                            } else {
                                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                                (((struct oF2_ushort *)(a4))->v) = 0x8;
                                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                                t3 = 0x2E4;
                            }
                            t2 = t3;
                        }
                        return t2;
                    }
                    if (t1 == 5) {
                        t2 = (((struct oF2_short *)(a4))->v);
                        (((struct oF2_ushort *)(a4))->v) = (t2 - 1);
                        if ((short)(t2 - 1) != 0) {
                            return 0xF2;
                        }
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                        (((struct o105_uchar *)(a4))->v) = 0x0;
                        (((struct oF2_ushort *)(a4))->v) = 0x1;
                        FUN_0c0afb0a(a4);
                        return FUN_0c0a3ebc((*(signed char *)0xC7F3051), 0x2, 0x3);
                    }
                    if (t1 == 6) {
                        FUN_0c0afac2(a4);
                        FUN_0c0afb0a(a4);
                        u0 = (((struct o54_float *)(a4))->v);
                        (((struct o54_float *)(a4))->v) = (u0 + 0.125f);
                        t2 = 0x54;
                        if (!(1.0f > (u0 + 0.125f))) {
                            (((struct o54_float *)(a4))->v) = 1.0f;
                            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                            (((struct oF0_ushort *)(a4))->v) = 0x78;
                            t2 = 0xF0;
                        }
                        t3 = t2;
                    } else {
                        if (t1 == 7) {
                            FUN_0c0afac2(a4);
                            FUN_0c0afb0a(a4);
                            t2 = (((struct oF0_short *)(a4))->v);
                            (((struct oF0_ushort *)(a4))->v) = (t2 - 1);
                            t4 = 0xF0;
                            if ((short)(t2 - 1) == 0) {
                                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                                (((struct o105_uchar *)(a4))->v) = 0x1;
                                t4 = 0x105;
                            }
                            t2 = t4;
                        } else {
                            if (t1 == 8) {
                                FUN_0c0afac2(a4);
                                t4 = (((struct o2E4_int *)(a4))->v);
                                (((struct o44_float *)(t4))->v) = (((((struct o44_float *)(t4))->v)) - 0.125f);
                                t4 = (((struct o2E4_int *)(a4))->v);
                                (((struct o48_float *)(t4))->v) = (((((struct o48_float *)(t4))->v)) - 0.125f);
                                t4 = (((struct o2E4_int *)(a4))->v);
                                (((struct o4C_float *)(t4))->v) = (((((struct o4C_float *)(t4))->v)) - 0.125f);
                                t4 = 0x44;
                                if (!(((((struct o44_float *)(((((struct o2E4_int *)(a4))->v))))->v)) > 0.0f)) {
                                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                                    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                                    t4 = 0x2E4;
                                }
                                t2 = t4;
                            } else {
                                t4 = t1;
                                if (t1 == 9) {
                                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                                    t1 = 0xEE;
                                    if ((int)((((struct oEC_short *)(a4))->v)) > (int)((((struct oEE_short *)(a4))->v))) {
                                        *(unsigned char *)((a4 + 0x8)) = 0x0;
                                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                                        t1 = 0xEC;
                                    }
                                    t4 = t1;
                                }
                                t2 = t4;
                            }
                        }
                        t3 = t2;
                    }
                    return t3;
                }
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664958, (t0 + 0x2F));
                (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) - 0.099999994f);
                t1 = 0xEC;
                if ((int)((((struct oEC_short *)(a4))->v)) <= (int)0x46) {
                } else {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
                    FUN_0c0df940();
                    (((struct oEE_ushort *)(a4))->v) = (((short)(FUN_0c0e6f24()) * (short)0x3C) + 0x1E0);
                    FUN_0c0e6fe8();
                    (((struct o5C_float *)(a4))->v) = 1.0f;
                    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned int *)(((((((struct o2E4_int *)(a4))->v)) + 0x28) + 0x0)) = 0x2;
                    *(unsigned int *)(((((((struct o2E4_int *)(a4))->v)) + 0x2C) + 0x0)) = 0x1;
                    (((struct o44_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
                    (((struct o48_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
                    (((struct o4C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
                    FUN_0c0afac2(a4);
                    (((struct oF0_ushort *)(a4))->v) = 0x3C;
                    (((struct oF2_ushort *)(a4))->v) = 0x0;
                    t1 = 0xF2;
                }
                return t1;
            }
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
            FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664958, (t0 + 0x2F));
            t1 = 0xEC;
            if ((int)((((struct oEC_short *)(a4))->v)) <= (int)0x3C) {
            } else {
                t2 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
                t1 = (t2 + 0x1);
            }
            return t1;
        }
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664958, (t0 + 0x2F));
        u0 = (((struct o54_float *)(a4))->v);
        (((struct o54_float *)(a4))->v) = (u0 + 0.199999988f);
        t0 = 0x54;
        if (1.0f > (u0 + 0.199999988f)) {
        } else {
            t1 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
        return t0;
    }
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct o5C_float *)(a4))->v) = 1.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 1.0f;
    (((struct o50_float *)(a4))->v) = 1.0f;
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    return FUN_0c0a3ebc((*(signed char *)0xC7F3051), 0x2, 0x2);
}
