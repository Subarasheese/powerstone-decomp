/* Straight-line functions with calls and guards (batch gen_cn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2230_uchar { char p[0x2230]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DA_uchar { char p[0x2DA]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o315_uchar { char p[0x315]; unsigned char v; };
struct o36D0_uchar { char p[0x36D0]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o40_uchar { char p[0x40]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o7254_float { char p[0x7254]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
float FUN_0c0211d0(float, float, float, float, float, float, float);
float FUN_0c02651e(int);
int FUN_0c0342a0(int);
int FUN_0c0355cc(int);
int FUN_0c035c84(int);
int FUN_0c0555dc(void);
int FUN_0c059132(int, int, int);
int FUN_0c059330(int);
int FUN_0c05f6d8(int);
int FUN_0c05f85a(int);
int FUN_0c05f8f8(int);
int FUN_0c06233a(int, int, int);
int FUN_0c06c5d0(int, int, int, int);
int FUN_0c0972b2(int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09caea(int, int);
int FUN_0c09d89c(int);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09db78(int);
int FUN_0c09ddfe(int);
extern int FUN_0c09e71c();
int FUN_0c09e7a6(int);
int FUN_0c09e7b8(int);
int FUN_0c09e7d2(int);
int FUN_0c09e7fc(int);
int FUN_0c09e89a(int);
int FUN_0c0a1d88(int, int);
int FUN_0c0a2080(int);
int FUN_0c0a2e26(int, int, int, int);
int FUN_0c0a3796(int, int);
int FUN_0c0abd20(int);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c0e6fdc(int);
int FUN_0c0e6fe8(void);
int FUN_0c095c4a(int a4, int a5, int a6);
int FUN_0c0be25c(int a4);
int FUN_0c0c6e6c(int a4, int a5);
int FUN_0c0b30c8(int a4);
int FUN_0c05f952(int a4, int a5);
int FUN_0c0972fa(int a4);
int FUN_0c024992(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c06c5f0(int a4);

int FUN_0c095c4a(int a4, int a5, int a6)
{
    int stk[4];
    register int t0;
    register int t14;
    register int t9;
    register int t19;
    register int t20;
    register int t21;
    register int t23;
    register int t25;
    register int t31;
    register int t33;
    register int t35;
    register int t38;
    register int t39;
    register int t40;
    register int t43;
    register int t50;
    register int t59;
    register int t61;
    register int t67;
    register int t78;
    register int t79;
    register int t80;
    register int t82;
    register int t84;
    register int t90;
    register int t92;
    register int t94;
    register int t97;
    register int t98;
    register int t99;
    register int t102;
    register int t109;
    register int t57;
    register int t75;
    register int t116;

    t0 = (((struct oF0_short *)(a4))->v);
    if (t0 != 0) {
        if (t0 == 1) {
            FUN_0c09a910(a4);
            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                return FUN_0c0a2080(a4);
            }
            return 0x71AA;
        }
        if (t0 != 2) {
            if (t0 == 3) {
                FUN_0c09a910(a4);
                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                    return FUN_0c0a2080(a4);
                }
                return 0x71AA;
            }
            if (t0 == 4) {
                FUN_0c09a910(a4);
                FUN_0c09d990(a4);
                FUN_0c09d9bc(a4);
                t14 = 0x3C;
                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                    t9 = FUN_0c09e7b8(a4);
                    t14 = (signed char)t9;
                    if ((signed char)t9 != 0) {
                        *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
                        t14 = (FUN_0c0a2e26(a4, 0x6, 0x0, 0x0));
                    }
                }
                return t14;
            }
            FUN_0c09a910(a4);
            t19 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t19 - 1);
            if ((int)(short)(t19 - 1) <= 0) {
                return FUN_0c0a2080(a4);
            }
            t20 = FUN_0c09db78(a4);
            t21 = *(int *)((a4 + 0x30));
            t23 = (unsigned short)(t21 - t20);
            if ((0x8000 & (unsigned short)(t21 - t20)) != 0) {
                t23 = ((unsigned short)(t21 - t20) | 0xFFFF0000);
            }
            if (((int)t23 <= (int)0xFFFFF8E4) || ((int)t23 >= (int)0x71C)) {
                t25 = 0x38E;
                if ((int)t23 > 0) {
                    t25 = 0xFFFFFC72;
                }
                *(unsigned int *)((a4 + 0x30)) = (((*(int *)((a4 + 0x30))) + t25) & 0xFFFF);
            }
            t31 = FUN_0c09e7d2(a4);
            if (t31 != 0) {
                t57 = (FUN_0c0a2e26(a4, 0xE, 0x0, 0x0));
            } else {
                t33 = FUN_0c09e7a6(a4);
                if (t33 != 0) {
                    t57 = (FUN_0c0a2e26(a4, 0x4, 0x0, 0x0));
                } else {
                    t35 = ((int (*)(int))(FUN_0c09e71c))(a4);
                    if (t35 == 0) {
                        if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
                            t38 = FUN_0c09e7fc(a4);
                            t39 = 0x1F;
                            t40 = 0x1;
                            if ((signed char)t38 != 0) {
                                t39 = 0x2;
                                t40 = 0x0;
                            }
                            t57 = (FUN_0c0a2e26(a4, t39, t40, 0x0));
                        } else {
                            t43 = FUN_0c09e89a(a4);
                            t57 = (signed char)t43;
                            if ((signed char)t43 != 0) {
                                t57 = (FUN_0c0a2e26(a4, 0x1F, 0x1, 0x0));
                            }
                        }
                    } else {
                        t50 = 0x1;
                        if ((*(signed char *)((a4 + 0x71BC))) == 0) {
                            t50 = 0x0;
                        }
                        t57 = (FUN_0c0a2e26(a4, 0xA, t50, 0x0));
                    }
                }
            }
            return t57;
        }
        t59 = ((int (*)(int, int, int))(FUN_0c09e71c))(a4, a5, a6);
        if (t59 != 0) {
            t61 = 0x1;
            if ((*(signed char *)((a4 + 0x71BC))) == 0) {
                t61 = 0x0;
            }
            t75 = (FUN_0c0a2e26(a4, 0xA, t61, 0x0));
        } else {
            FUN_0c09d990(a4);
            FUN_0c09d9bc(a4);
            if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                t67 = FUN_0c09e7b8(a4);
                if ((signed char)t67 == 0) {
                    t75 = (FUN_0c09a910(a4));
                } else {
                    t75 = (FUN_0c0a2e26(a4, 0x6, 0x0, 0x0));
                }
            } else {
                t75 = (FUN_0c09a910(a4));
            }
        }
        return t75;
    }
    FUN_0c09a910(a4);
    t78 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t78 - 1);
    if ((int)(short)(t78 - 1) <= 0) {
        return FUN_0c0a2080(a4);
    }
    t79 = FUN_0c09db78(a4);
    t80 = *(int *)((a4 + 0x30));
    t82 = (unsigned short)(t80 - t79);
    if ((0x8000 & (unsigned short)(t80 - t79)) != 0) {
        t82 = ((unsigned short)(t80 - t79) | 0xFFFF0000);
    }
    if (((int)t82 <= (int)0xFFFFF8E4) || ((int)t82 >= (int)0x71C)) {
        t84 = 0x38E;
        if ((int)t82 > 0) {
            t84 = 0xFFFFFC72;
        }
        *(unsigned int *)((a4 + 0x30)) = (((*(int *)((a4 + 0x30))) + t84) & 0xFFFF);
    }
    t90 = FUN_0c09e7d2(a4);
    if (t90 != 0) {
        t116 = (FUN_0c0a2e26(a4, 0xE, 0x0, 0x0));
    } else {
        t92 = FUN_0c09e7a6(a4);
        if (t92 != 0) {
            t116 = (FUN_0c0a2e26(a4, 0x4, 0x0, 0x0));
        } else {
            t94 = ((int (*)(int))(FUN_0c09e71c))(a4);
            if (t94 == 0) {
                if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
                    t97 = FUN_0c09e7fc(a4);
                    t98 = 0x1F;
                    t99 = 0x1;
                    if ((signed char)t97 != 0) {
                        t98 = 0x2;
                        t99 = 0x0;
                    }
                    t116 = (FUN_0c0a2e26(a4, t98, t99, 0x0));
                } else {
                    t102 = FUN_0c09e89a(a4);
                    t116 = (signed char)t102;
                    if ((signed char)t102 != 0) {
                        t116 = (FUN_0c0a2e26(a4, 0x1F, 0x1, 0x0));
                    }
                }
            } else {
                t109 = 0x1;
                if ((*(signed char *)((a4 + 0x71BC))) == 0) {
                    t109 = 0x0;
                }
                t116 = (FUN_0c0a2e26(a4, 0xA, t109, 0x0));
            }
        }
    }
    return t116;
}

int FUN_0c0be25c(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c0555dc();
    if (t0 == 1) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 11) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x2;
    *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x2;
    (((struct o105_uchar *)(a4))->v) = 0x2;
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            t0 = FUN_0c09d89c((*(int *)((a4 + 0x1C))));
            t1 = (signed char)t0;
            if ((signed char)t0 == 0) {
                t0 = (((struct oEE_short *)(a4))->v);
                (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 10.0f);
                if (!(((float)t0 / 10.0f) > 0.0f)) {
                    (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                }
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
                t1 = 0xEE;
            }
            return t1;
        }
        return FUN_0c059330(a4);
    }
    t0 = FUN_0c09d89c((*(int *)((a4 + 0x1C))));
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
    } else {
        t0 = *(signed char *)((a4 + 0x9));
        switch (t0) {
        case 0:
            t0 = (((struct oEE_short *)(a4))->v);
            (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 10.0f);
            if (!(1.0f > ((float)t0 / 10.0f))) {
                (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            }
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
            break;
        case 1:
            if (1.0f > ((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.049999997f);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.049999997f);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.049999997f);
            } else {
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o24_float *)(t0))->v) = 1.0f;
                (((struct o20_float *)(t0))->v) = 1.0f;
                (((struct o1C_float *)(t0))->v) = 1.0f;
            }
            t0 = (((struct oEE_short *)(a4))->v);
            (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 10.0f);
            if (!(1.0f > ((float)t0 / 10.0f))) {
                (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            }
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
            break;
        case 2:
            if (1.0f > ((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.049999997f);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.049999997f);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.049999997f);
            } else {
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o24_float *)(t0))->v) = 1.0f;
                (((struct o20_float *)(t0))->v) = 1.0f;
                (((struct o1C_float *)(t0))->v) = 1.0f;
            }
            t0 = (((struct oEE_short *)(a4))->v);
            (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 10.0f);
            if (!(1.0f > ((float)t0 / 10.0f))) {
                (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            }
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
            break;
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        t1 = 0xEC;
        if ((short)(t0 - 1) == 0) {
            (((struct oEE_ushort *)(a4))->v) = 0xA;
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
    }
    return t1;
}

int FUN_0c0c6e6c(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t51;
    register int t8;
    register int t16;
    register int t21;
    register float t25;
    register int t26;
    register float u28;
    register float u31;
    register int t32;
    register float u35;
    register float t37;
    register int t38;
    register float u40;
    register int t43;
    register float u46;
    register float u48;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c059132(0x1, 0x1, 0x2);
    t51 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C719C;
        FUN_0c0e6fe8();
        *(unsigned int *)((t0 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + 0x2AAA);
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0x30)));
        *(unsigned int *)((t0 + 0x34)) = (*(int *)((a4 + 0x34)));
        (((struct o58_float *)(t0))->v) = 0.099999994f;
        (((struct o54_float *)(t0))->v) = 0.099999994f;
        (((struct o50_float *)(t0))->v) = 0.099999994f;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x41F;
        t8 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t8 << 1) + t8) << 2) << 1) + 0xC6002D0), 0x0);
        (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        *(unsigned char *)((((((struct o2E4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E4_int *)(t0))->v)) + 0x2)) = 0x3F;
        t16 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E4_int *)(t0))->v)), ((signed char)((((t16 << 1) + t16) << 2) << 1) + 0xC6002D0), 0x1);
        t21 = (((struct o2E4_int *)(t0))->v);
        (((struct o24_float *)(t21))->v) = 0.099999994f;
        (((struct o20_float *)(t21))->v) = 0.099999994f;
        (((struct o1C_float *)(t21))->v) = 0.099999994f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct oEC_ushort *)(t0))->v) = 0x1E;
        (((struct oEE_ushort *)(t0))->v) = (unsigned char)(*(signed char *)(((int)stk + 0)));
        (((struct o101_uchar *)(t0))->v) = 0x1;
        (((struct o102_uchar *)(t0))->v) = 0x0;
        FUN_0c0a1d88(t0, 0x70);
        t25 = FUN_0c0dfa50((*(int *)((t0 + 0x30))));
        t26 = *(signed char *)(((0xEE + t0) + 0x0));
        u28 = (((struct o8_float *)(((signed char)(((t26 << 1) + t26) << 2) + 0xC33C8C8)))->v);
        u31 = (((struct o20_float *)(t0))->v);
        t32 = *(signed char *)(((0xEE + t0) + 0x0));
        u35 = ((FUN_0c0df4d0((*(int *)((t0 + 0x30))))) * (*(float *)((((signed char)(((t32 << 1) + t32) << 2) + 0xC33C8C8) + 0x0))));
        u35 = u35 + u28 * t25;
        (((struct o20_float *)(t0))->v) = (u31 + u35);
        t37 = FUN_0c0df4d0((*(int *)((t0 + 0x30))));
        t38 = *(signed char *)(((0xEE + t0) + 0x0));
        u40 = (((struct o8_float *)(((signed char)(((t38 << 1) + t38) << 2) + 0xC33C8C8)))->v);
        t43 = *(signed char *)(((0xEE + t0) + 0x0));
        u46 = (((struct o28_float *)(t0))->v);
        u48 = ((FUN_0c0dfa50((*(int *)((t0 + 0x30))))) * (*(float *)((((signed char)(((t43 << 1) + t43) << 2) + 0xC33C8C8) + 0x0))));
        (((struct o28_float *)(t0))->v) = (u46 + (((t37 * u40)) - u48));
        *(volatile signed char *)(((0xEE + t0) + 0x0));
        *(volatile float *)((t0 + 0x24));
        t51 = 0x24;
    }
    return t51;
}

int FUN_0c0b30c8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = FUN_0c059132(0x2, 0x1, (*(signed char *)(((signed char)t0 + 0xC33A74C))));
    t2 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned char *)((t1 + 0x1)) = 0x1;
        *(unsigned char *)((t1 + 0x3)) = 0x2;
        *(unsigned short *)((t1 + 0x6)) = 0xF;
        *(unsigned char *)((t1 + 0x5)) = 0x19;
        *(unsigned char *)((t1 + 0x8)) = 0x0;
        *(unsigned char *)((t1 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t1))->v) = 0x0;
        (((struct oEE_ushort *)(t1))->v) = 0x0;
        *(unsigned int *)((t1 + 0x10)) = 0xC0B32A2;
        *(unsigned char *)((t1 + 0x4)) = 0xC;
        (((struct o30E_uchar *)(t1))->v) = t0;
        (((struct o30D_uchar *)(t1))->v) = 0x0;
        (((struct o308_uint *)(t1))->v) = a4;
        (((struct o30E_uchar *)(t1))->v) = t0;
        (((struct o2D9_uchar *)(t1))->v) = 0x1;
        (((struct o2DA_uchar *)(t1))->v) = 0x1;
        (((struct o315_uchar *)(t1))->v) = 0x3;
        (((struct o102_uchar *)(t1))->v) = (*(signed char *)((a4 + 0x5)));
        (((struct o105_uchar *)(t1))->v) = 0x1;
        FUN_0c0abd20(t1);
        t3 = (FUN_0c0e6fe8());
        t4 = ((signed char)t0 + 0xC33A74C);
        t5 = 0x0;
        t6 = t0;
        for (;;) {
            if ((int)t5 >= (int)(*(signed char *)((((signed char)t0 + 0xC33A74C) + 0x0)))) {
                break;
            }
            t6 = t5;
            t3 = (*(int *)(((((signed char)t0 << 2) + 0xC33A75C) + 0x0)));
            t6 = (t6 << 2);
            t3 = (FUN_0c06233a((*(int *)((((0x2E0 + t1) + t6) + 0x0))), 0xC664958, (*(signed char *)((t5 + t3)))));
            t3 = 0x5;
            t4 = 0x2E0;
            t4 = (t4 + t1);
            t4 = (t4 + t6);
            *(unsigned char *)(((*(int *)((((0x2E0 + t1) + t6) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t1) + t6) + 0x0))) + 0x2)) = t3;
            t3 = 0x34;
            t4 = (*(int *)((t4 + 0x0)));
            t4 = (t4 + 0x4);
            t7 = ((short)(*(signed char *)0xC7F3051) * (short)t3);
            t3 = (*(int *)(((((signed char)t0 << 2) + 0xC33A75C) + 0x0)));
            t3 = (*(signed char *)((t5 + t3)));
            t8 = t3;
            t3 = (t3 << 1);
            t3 = (t3 + t8);
            *(volatile int *)((((short)t7 + 0xC350B60) + 0x18));
            t3 = (t3 << 2);
            t3 = 0xC;
            t3 = (FUN_0c0e6fe8());
            t3 = 0x34;
            t4 = 0x2E0;
            t4 = (t4 + t1);
            t7 = ((short)(*(signed char *)0xC7F3051) * (short)t3);
            t3 = (*(int *)(((((signed char)t0 << 2) + 0xC33A75C) + 0x0)));
            t4 = (t4 + t6);
            t4 = (*(int *)((t4 + 0x0)));
            t3 = (*(signed char *)((t5 + t3)));
            t8 = t3;
            t3 = (t3 << 1);
            t3 = (t3 + t8);
            *(volatile int *)((((short)t7 + 0xC350B60) + 0x1C));
            t3 = (t3 << 2);
            t4 = (t4 + 0x10);
            t3 = 0xC;
            t3 = (FUN_0c0e6fe8());
            t3 = 0x2E0;
            t4 = 0x20;
            t4 = (t4 + t1);
            t3 = (t3 + t1);
            u0 = (*(float *)((t4 + 0x0)));
            t7 = *(int *)((t6 + t3));
            t3 = 0x4;
            t4 = 0x24;
            u1 = (*(float *)((t7 + t3)));
            t4 = (t4 + t1);
            u1 = (u1 - u0);
            *(float *)((t7 + t3)) = u1;
            t3 = 0x8;
            u0 = (*(float *)((t4 + 0x0)));
            t4 = 0x28;
            t7 = *(int *)((((0x2E0 + t1) + t6) + 0x0));
            t4 = (t4 + t1);
            u1 = (*(float *)((t7 + t3)));
            u1 = (u1 - u0);
            t6 = (t6 + (0x2E0 + t1));
            *(float *)((t7 + t3)) = u1;
            t3 = 0xC;
            t7 = *(int *)((t6 + 0x0));
            u0 = (*(float *)((t4 + 0x0)));
            u1 = (*(float *)((t7 + t3)));
            u1 = (u1 - u0);
            *(float *)((t7 + t3)) = u1;
            t5 = (t5 + 0x1);
        }
        *(unsigned char *)((((((struct o2E8_int *)(t1))->v)) + 0x0)) = 0x0;
        *(volatile int *)((t1 + 0x2E8));
        t2 = (FUN_0c0e6fe8());
    }
    return t2;
}

int FUN_0c05f952(int a4, int a5)
{
    int stk[2];
    register int t5;
    register float u36;
    register float u37;
    register int t42;
    register int t44;
    register int t45;
    register int t46;
    register float u47;
    register float u48;
    register int t49;
    register int t58;
    register int t90;
    register int t91;
    register int t92;
    register float u93;
    register float u94;
    register int t118;
    register float u119;
    register float u122;
    register float u128;
    register float u134;
    register int t1;
    register int t2;
    register float u3;
    register float u4;
    register int t35;
    register float u31;
    register float u32;
    register float u22;
    register float u23;
    register int t43;
    int t71;
    register int t72;
    register int t73;
    register int t74;
    float u83;
    register int t84;

    *(unsigned int *)((((int)stk + 0) + 0x0)) = 0x0;
    for (;;) {
        t5 = *(int *)((((int)stk + 0) + 0x0));
        if ((int)t5 >= (int)0x8) {
            break;
        }
        t2 = (*(int *)((((int)stk + 0) + 0x0)));
        t1 = t2;
        t2 = (t2 << 2);
        t2 = (t2 << 1);
        t2 = (t2 + t1);
        t2 = (t2 << 2);
        t2 = (t2 << 2);
        t2 = (short)t2;
        t2 = (t2 + 0xC7F3238);
        u36 = u3;
        u37 = u4;
        if ((*(signed char *)((t2 + 0x0))) != 0) {
            t42 = (*(signed char *)((t2 + 0x4)));
            t42 = (unsigned char)t42;
            if (t42 != 0) {
                if (t42 != 1) {
                    t35 = t1;
                    u22 = u3;
                    u23 = u4;
                } else {
                    t42 = (FUN_0c05f8f8(t2));
                }
                u31 = u22;
                u32 = u23;
            } else {
                t1 = (*(int *)((t2 + 0xC)));
                if (t1 != 0) {
                    t42 = (FUN_0c05f6d8(t2));
                } else {
                    t42 = (FUN_0c05f85a(t2));
                }
            }
            u36 = u31;
            u37 = u32;
        } else {
            t35 = t1;
        }
        u3 = u36;
        u4 = u37;
        t42 = 0x74;
        t1 = t35;
        u4 = (*(float *)((t2 + t42)));
        t42 = 0x70;
        u3 = (*(float *)((t2 + t42)));
        t42 = 0x78;
        u3 = (u3 * u4);
        *(float *)((t2 + t42)) = u3;
        t1 = (*(int *)((((int)stk + 0) + 0x0)));
        t1 = (t1 + 0x1);
        *(unsigned int *)((((int)stk + 0) + 0x0)) = t1;
    }
    *(unsigned int *)((((int)stk + 0) + 0x0)) = 0x0;
    t44 = t5;
    t45 = a4;
    t46 = a5;
    u47 = u3;
    u48 = u4;
    for (;;) {
        t49 = *(int *)((((int)stk + 0) + 0x0));
        if ((int)t49 >= (int)0x8) {
            break;
        }
        t45 = (*(int *)((((int)stk + 0) + 0x0)));
        t58 = t45;
        t45 = (t45 << 2);
        t45 = (t45 << 1);
        t45 = (t45 + t58);
        t45 = (t45 << 2);
        t45 = (t45 << 2);
        t45 = (short)t45;
        t45 = (t45 + 0xC7F3238);
        t44 = (*(signed char *)((t45 + 0x0)));
        if (t44 != 0) {
            *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x0;
            for (;;) {
                t44 = (*(int *)(((((int)stk + 0) + 0x4) + 0x0)));
                if ((int)t44 >= (int)0x8) {
                    break;
                }
                t58 = (*(int *)((((int)stk + 0) + 0x0)));
                if ((t58 != t44) && (t71 = *(int *)(((((int)stk + 0) + 0x4) + 0x0)), t46 = t71, t72 = (t58 == t44), t58 = t46, t46 = (t46 << 2), t73 = (int)(((unsigned int)t46) >> 31), t46 = (t46 << 1), t46 = (t46 + t58), t46 = (t46 << 2), t46 = (t46 << 2), t46 = (short)t46, t46 = (t46 + 0xC7F3238), t74 = *(signed char *)((t46 + 0x0)), t44 = t74, t44 != 0)) {
                    t42 = 0x78;
                    u47 = (*(float *)((t45 + t42)));
                    u48 = (*(float *)((t46 + t42)));
                    if ((u47 > u48) && (u83 = *(float *)((t45 + t42)), t84 = (u47 > u48), u47 = u83, u48 = 0.0f, u47 != u48)) {
                        t43 = t42;
                        t43 = (t43 + t45);
                        u47 = (*(float *)((t46 + t42)));
                        u48 = (*(float *)((t43 + 0x0)));
                        u47 = (u47 / u48);
                        *(float *)((t46 + t42)) = u47;
                    }
                }
                t58 = (*(int *)(((((int)stk + 0) + 0x4) + 0x0)));
                t58 = (t58 + 0x1);
                *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = t58;
            }
        }
        t43 = (*(int *)((((int)stk + 0) + 0x0)));
        t43 = (t43 + 0x1);
        *(unsigned int *)((((int)stk + 0) + 0x0)) = t43;
    }
    *(unsigned int *)((((int)stk + 0) + 0x0)) = 0x0;
    t90 = t42;
    t91 = t49;
    t92 = t45;
    u93 = u47;
    u94 = u48;
    for (;;) {
        if ((int)(*(int *)((((int)stk + 0) + 0x0))) >= (int)0x8) {
            break;
        }
        t92 = (*(int *)((((int)stk + 0) + 0x0)));
        t91 = t92;
        t92 = (t92 << 2);
        t92 = (t92 << 1);
        t92 = (t92 + t91);
        t92 = (t92 << 2);
        t92 = (t92 << 2);
        t92 = (short)t92;
        t92 = (t92 + 0xC7F3238);
        if ((*(signed char *)((t92 + 0x0))) != 0) {
            t90 = 0x78;
            u94 = (*(float *)((t92 + t90)));
            t90 = 0x54;
            u93 = (*(float *)((t92 + t90)));
            t90 = (t90 + 0x30);
            u93 = (u93 * u94);
            *(float *)((t92 + t90)) = u93;
            t90 = 0x78;
            u94 = (*(float *)((t92 + t90)));
            t90 = 0x58;
            u93 = (*(float *)((t92 + t90)));
            t90 = (t90 + 0x30);
            u93 = (u93 * u94);
            *(float *)((t92 + t90)) = u93;
            t90 = 0x78;
            u94 = (*(float *)((t92 + t90)));
            t90 = 0x5C;
            u93 = (*(float *)((t92 + t90)));
            t90 = (t90 + 0x30);
            u93 = (u93 * u94);
            *(float *)((t92 + t90)) = u93;
        }
        t91 = (*(int *)((((int)stk + 0) + 0x0)));
        t91 = (t91 + 0x1);
        *(unsigned int *)((((int)stk + 0) + 0x0)) = t91;
    }
    if (((((struct o0_int *)0xC38380C)->v)) != 0) {
        if ((*(int *)0xC7F3028) == 0) {
            (((struct o0_uint *)0xC38380C)->v) = (((((struct o0_int *)0xC38380C)->v)) - 1);
        }
        t118 = (((struct o0_int *)0xC38380C)->v);
        u119 = (((struct o8_float *)0xC38380C)->v);
        if ((int)t118 < (int)0x1E) {
            u122 = u119;
            u122 = u122 + (((float)(0x1E - t118) / 30.0f)) * ((((struct o0_float *)0xC7F32BC)->v));
            (((struct o0_float *)0xC7F32BC)->v) = u122;
            if (((((struct o0_float *)0xC7F32BC)->v)) > 1.0f) {
                (((struct o0_float *)0xC7F32BC)->v) = 1.0f;
            }
            u128 = ((((struct o8_float *)0xC38380C)->v));
            u128 = u128 + (((float)(0x1E - t118) / 30.0f)) * ((((struct o4_float *)0xC7F32BC)->v));
            (((struct o4_float *)0xC7F32BC)->v) = u128;
            if (((((struct o4_float *)0xC7F32BC)->v)) > 1.0f) {
                (((struct o4_float *)0xC7F32BC)->v) = 1.0f;
            }
            u134 = ((((struct o8_float *)0xC38380C)->v));
            u134 = u134 + (((float)(0x1E - t118) / 30.0f)) * ((((struct o8_float *)0xC7F32BC)->v));
            (((struct o8_float *)0xC7F32BC)->v) = u134;
            if (((((struct o8_float *)0xC7F32BC)->v)) > 1.0f) {
                (((struct o8_float *)0xC7F32BC)->v) = 1.0f;
            }
            return 0x8C;
        }
        return ((int (*)(int, int, int, int, float))(0xC05FB38))(0xC383814, 0xC38380C, t118, 0x1E, u119);
    }
    return t90;
}

int FUN_0c0972fa(int a4)
{
    int stk[7];
    register int t2;
    register int t3;
    register int t4;
    register int t21;
    register int t36;
    register int t40;
    register int t10;
    register int t28;
    register float u29;

    if ((((((struct o2DC_int *)(a4))->v)) & 240) == 0) {
        FUN_0c09a808(a4, 0x2, 0xD0);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0xA)) = 0x1;
        t40 = 0x1;
    } else {
        t2 = FUN_0c09ddfe(a4);
        t3 = *(int *)0xC7F31E0;
        t4 = FUN_0c0972b2(a4);
        if (t4 != 0) {
            t10 = 0x0;
            if (((int)(unsigned short)(t3 + t2) >= (int)0x4000) && ((int)(unsigned short)(t3 + t2) <= (int)0xC000)) {
                t10 = 0x8000;
            }
        } else {
            t10 = 0xC000;
            if ((int)(unsigned short)(t3 + t2) < (int)0x8000) {
                t10 = 0x4000;
            }
        }
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
        (((struct o7254_float *)(a4))->v) = ((((struct o38_float *)(((unsigned char)((unsigned short)(*(signed char *)(((0x71F1 + a4) + 0x0))) * (unsigned short)0x4C) + (0xC339540 + ((short)(*(signed char *)((a4 + 0x4))) * (short)0x98)))))->v));
        *(unsigned int *)(((int)stk + 0)) = (0x14000 - t10);
        (((struct o38_float *)(a4))->v) = ((FUN_0c0df4d0((0x14000 - t10))) * ((((struct o7254_float *)(a4))->v)));
        (((struct o40_float *)(a4))->v) = ((FUN_0c0dfa50((*(int *)(((int)stk + 0))))) * ((((struct o7254_float *)(a4))->v)));
        t21 = FUN_0c09caea(a4, 0xA);
        *(volatile int *)((((((signed char)t21 - 1) << 2) + (0x2C0 + a4)) + 0x0));
        FUN_0c0e6fdc(t21);
        if (((((struct oC_float *)((((int)stk + 0) + 0x4)))->v)) > ((((struct o14_float *)((((int)stk + 0) + 0x4)))->v))) {
            t28 = 0x28;
            u29 = ((((struct o8_float *)((((int)stk + 0) + 0x4)))->v));
        } else {
            t28 = 0x20;
            u29 = ((((struct o4_float *)(((int)stk + 0)))->v));
        }
        *(float *)((a4 + t28)) = u29;
        (((struct o24_float *)(a4))->v) = (((((((struct o4_float *)((((int)stk + 0) + 0x4)))->v)) - ((((struct o10_float *)((((int)stk + 0) + 0x4)))->v))) - (FUN_0c02651e(a4))) + 1.0f);
        FUN_0c09a910(a4);
        FUN_0c09d990(a4);
        t36 = (((struct o719E_short *)(a4))->v);
        t40 = (unsigned short)t36;
        if (((unsigned short)t36 == 19) || ((unsigned short)t36 == 39)) {
            t40 = (FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0xE));
        }
    }
    return t40;
}

int FUN_0c024992(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[7];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u161;
    float u162;
    register float u194;
    register float u195;
    register float u208;
    register float u221;
    register float u222;
    register float u239;
    register float u240;
    register float u306;
    register float u307;
    register float u297;
    register float u298;
    register float u288;
    register float u289;
    register float u279;
    register float u280;
    float u163;
    register float u271;
    register float u272;
    register float u200;
    register float u263;
    register float u264;
    register float u227;
    register float u257;
    register float u258;
    register float u245;

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a6 + 0x0));
    u2 = (((struct oC_float *)(a6))->v);
    u3 = (((struct oC_float *)(a4))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = (u1 - u0);
    }
    (((struct o10_float *)(((int)stk + 0)))->v) = ((u3 + u2) - u4);
    u6 = (((struct oC_float *)(a6))->v);
    u7 = (((struct o14_float *)(a4))->v);
    u8 = (((struct o8_float *)(a4))->v);
    u9 = (((struct o8_float *)(a6))->v);
    u10 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u10 = (u9 - u8);
    }
    (((struct o8_float *)((((int)stk + 0) + 0x10)))->v) = ((u7 + u6) - u10);
    u12 = (((struct o4_float *)(a6))->v);
    *(float *)(((int)stk + 8)) = u12;
    u13 = (((struct o10_float *)(a6))->v);
    *(float *)(((int)stk + 12)) = u13;
    u14 = *(float *)(((int)stk + 8));
    u15 = (((struct o4_float *)(a4))->v);
    *(float *)(((int)stk + 0)) = u15;
    u16 = (((struct o10_float *)(a4))->v);
    *(float *)(((int)stk + 4)) = u16;
    (((struct o4_float *)((((int)stk + 0) + 0x10)))->v) = (FUN_0c0211d0((u16 + (*(float *)(((int)stk + 0)))), (u15 - u16), (u13 + u14), (u12 - u13), f8, f9, f10));
    if (0.0f > ((((struct o10_float *)(((int)stk + 0)))->v))) {
    } else {
        if (0.0f > ((((struct o8_float *)((((int)stk + 0) + 0x10)))->v))) {
        } else {
            if (0.0f > ((((struct o4_float *)((((int)stk + 0) + 0x10)))->v))) {
            } else {
                if ((*(signed char *)((a5 + 0x2D9))) == 0) {
                    u161 = (((struct o10_float *)(((int)stk + 0)))->v);
                    u162 = (((struct o4_float *)((((int)stk + 0) + 0x10)))->v);
                    if (!(u161 > u162) && (u163 = (((struct o8_float *)((((int)stk + 0) + 0x10)))->v), !(u161 > u163))) {
                        u194 = *(float *)((a6 + 0x0));
                        u195 = *(float *)((a4 + 0x0));
                        if (u195 > u194) {
                            u200 = ((u195 - ((((struct oC_float *)(a4))->v))) - ((((struct oC_float *)(a6))->v)));
                        } else {
                            u200 = ((u195 + ((((struct oC_float *)(a4))->v))) + ((((struct oC_float *)(a6))->v)));
                        }
                        (((struct o20_float *)(a5))->v) = ((u200 - u194) + ((((struct o20_float *)(a5))->v)));
                        *(volatile float *)((a4 + 0x0));
                        *(volatile float *)((a6 + 0x0));
                        u271 = u195;
                        u272 = u194;
                    } else {
                        u208 = (((struct o8_float *)((((int)stk + 0) + 0x10)))->v);
                        if ((u161 > u208) && (u162 > u208)) {
                            u221 = (((struct o8_float *)(a6))->v);
                            u222 = (((struct o8_float *)(a4))->v);
                            if (u222 > u221) {
                                u227 = ((u222 - ((((struct o14_float *)(a4))->v))) - ((((struct oC_float *)(a6))->v)));
                            } else {
                                u227 = ((u222 + ((((struct o14_float *)(a4))->v))) + ((((struct oC_float *)(a6))->v)));
                            }
                            (((struct o28_float *)(a5))->v) = ((u227 - u221) + ((((struct o28_float *)(a5))->v)));
                            *(volatile float *)((a4 + 0x8));
                            *(volatile float *)((a6 + 0x8));
                            u263 = u221;
                            u264 = u222;
                        } else {
                            if (!(u162 > u161) && !(u162 > u208)) {
                                u239 = (((struct o4_float *)(a6))->v);
                                u240 = (((struct o4_float *)(a4))->v);
                                if (u240 > u239) {
                                    u245 = ((u240 - ((((struct o10_float *)(a4))->v))) - ((((struct o10_float *)(a6))->v)));
                                } else {
                                    u245 = ((u240 + ((((struct o10_float *)(a4))->v))) + ((((struct o10_float *)(a6))->v)));
                                }
                                (((struct o24_float *)(a5))->v) = ((u245 - u239) + ((((struct o24_float *)(a5))->v)));
                                *(volatile float *)((a4 + 0x4));
                                *(volatile float *)((a6 + 0x4));
                                
                                u257 = u240;
                                u258 = u239;
                            }
                            u263 = u257;
                            u264 = u258;
                        }
                        u271 = u263;
                        u272 = u264;
                    }
                    u279 = u271;
                    u280 = u272;
                }
                u288 = u279;
                u289 = u280;
            }
            u297 = u288;
            u298 = u289;
        }
        u306 = u297;
        u307 = u298;
    }
    return ((int (*)(float, float))(0xC024B56))(u306, u307);
}

int FUN_0c06c5f0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        FUN_0c09a910(a4);
        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
        t0 = *(signed char *)((a4 + 0xB));
        t1 = *(signed char *)0xC7F2F08;
        if (t0 != 0) {
            if (t0 != 1) {
                t2 = t0;
                if (t0 != 2) {
                    t0 = (((struct oF0_short *)(a4))->v);
                    t3 = t0;
                    if (t0 == 34) {
                        if ((unsigned char)t1 != 1) {
                            FUN_0c0355cc(a4);
                        }
                        t0 = 0x36D0;
                        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                            t0 = 0x2230;
                        }
                        *(unsigned char *)((a4 + t0)) = 0x0;
                        t3 = t0;
                    }
                    t2 = t3;
                }
                t0 = t2;
            } else {
                t2 = 0xF0;
                if (((((struct oF0_short *)(a4))->v)) == 0x9F) {
                    t3 = (unsigned char)t1;
                    if ((unsigned char)t1 != 1) {
                        t1 = 0x3864;
                        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                            t1 = 0x23C4;
                        }
                        *(float *)((a4 + t1)) = 0.0f;
                        t3 = t1;
                    }
                    t2 = t3;
                }
                t0 = t2;
            }
            return t0;
        }
        t0 = *(signed char *)((a4 + 0xF2));
        return FUN_0c06c5d0(a4, ((signed char)((t0 << 1) + t0) + 0xC14F1F4), ((((struct oF0_short *)(a4))->v)), (0xF2 + a4));
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                FUN_0c09a808(a4, 0x3, 0x5);
            } else {
                FUN_0c09a808(a4, 0x3, 0x6);
                (((struct o710C_uchar *)(a4))->v) = 0x1;
            }
        } else {
            FUN_0c09a808(a4, 0x3, 0x3);
            (((struct o710B_uchar *)(a4))->v) = 0x3;
            (((struct o710C_uchar *)(a4))->v) = 0x2;
            (((struct o40_uchar *)(((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0x14A0) + (0x1E80 + a4))))->v) = 0x0;
            t0 = 0xC;
            for (;;) {
                FUN_0c0342a0(a4);
                t0 = (t0 - 0x1);
                if (t0 == 0) {
                    break;
                }
            }
        }
    } else {
        FUN_0c09a808(a4, 0x3, 0x2);
        (((struct o710C_uchar *)(a4))->v) = 0x1;
        FUN_0c035c84(a4);
        t0 = 0xC;
        for (;;) {
            FUN_0c0342a0(a4);
            t0 = (t0 - 0x1);
            if (t0 == 0) {
                break;
            }
        }
    }
    (((struct o2230_uchar *)(a4))->v) = 0x1;
    (((struct o36D0_uchar *)(a4))->v) = 0x1;
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    (((struct oF2_ushort *)(a4))->v) = 0x0;
    return 0xF2;
}
