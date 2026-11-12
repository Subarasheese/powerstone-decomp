/* Straight-line functions with calls and guards (batch gen_fm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o68_ushort { char p[0x68]; unsigned short v; };
struct o71F3_uchar { char p[0x71F3]; unsigned char v; };
struct o7214_uchar { char p[0x7214]; unsigned char v; };
struct o7230_uchar { char p[0x7230]; unsigned char v; };
struct o7231_uchar { char p[0x7231]; unsigned char v; };
struct o8_short { char p[0x8]; short v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct o9C_ushort { char p[0x9C]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c02d9e0(int, int, float, float, float, float);
int FUN_0c04571c(int, int, int);
int FUN_0c045f9c(int);
int FUN_0c0555dc(void);
int FUN_0c059330(int);
int FUN_0c05cb42(int, int, int);
int FUN_0c05fe24(int, int);
int FUN_0c0603c4(void);
int FUN_0c0603d8(int);
int FUN_0c0844f2(int);
int FUN_0c0845a0(int);
int FUN_0c0846ac(int, float);
int FUN_0c0847f8(int);
int FUN_0c084856(int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09d990(int);
int FUN_0c09d9e8(int);
int FUN_0c09db78(int);
int FUN_0c09dc1c(int, int);
int FUN_0c09e7b8(int);
int FUN_0c0a167c(int);
int FUN_0c0a3796(int, int);
int FUN_0c0a41a0(int);
int FUN_0c0a519c(int, int);
int FUN_0c0c707e(int, int, int, int, int);
int FUN_0c0c7668(int, int, int, int, int);
int FUN_0c0cc7fc(int);
int FUN_0c0ccefc(int, float, float);
int FUN_0c0d00ee(int);
int FUN_0c0d0674(int);
int FUN_0c0d0d80(int);
int FUN_0c0d0e50(int);
int FUN_0c0d1268(int);
int FUN_0c0d1520(int);
int FUN_0c0d24ec(int);
int FUN_0c0d2a70(int);
int FUN_0c0d2a84(void);
int FUN_0c0d2a8c(int);
int FUN_0c0d2d22(int);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e6db4(void);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(void);
int sprintf(int, int, int, int, int);
int FUN_0c0d02ee(int a4, int a5, int a6, int a7);
int FUN_0c095856(int a4, int a5, int a6, int a7);
int FUN_0c0c7780(int a4);
int FUN_0c0c719c(int a4);
int FUN_0c0e5d98(int a4, int a5, int a6, int a7);
int FUN_0c0a5240(int a4);
int FUN_0c084878(int a4, float f4);

int FUN_0c0d02ee(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x0));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(0xC0D0658))(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x0)) = ((*(signed char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x0))) + 0x1);
        *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x6)) = 0x0;
        *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x7)) = 0x0;
        *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x8)) = 0x0;
        *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x9)) = 0x0;
        *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0xA)) = 0x0;
        *(unsigned int *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0xC)) = 0x0;
        *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x4)) = 0x0;
        (((struct o14_uchar *)(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0)))->v) = 0x0;
        (((struct o15_uchar *)(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0)))->v) = 0x0;
        (((struct o16_uchar *)(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0)))->v) = 0x0;
        (((struct o17_uchar *)(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0)))->v) = 0x0;
        *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x5)) = a4;
        (((struct o9C_ushort *)(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0)))->v) = 0x0;
        if ((signed char)a4 == 0) {
            FUN_0c0603c4();
            FUN_0c0603d8((*(signed char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x9E))));
        }
        FUN_0c05fe24(0x0, (*(signed char *)0xC7E40C8));
        FUN_0c0d00ee(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
    }
    FUN_0c0d2d22(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
    t0 = *(signed char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x4));
    switch (t0) {
    case 0:
        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC154390);
        FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(signed char)a4 * (short)0x1E) + 0x14) << 2) << 1), 0.0f);
        break;
    case 1:
        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC15439C);
        FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(signed char)a4 * (short)0x1E) + 0x14) << 2) << 1), 0.0f);
        break;
    case 2:
        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC1543A4);
        FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(signed char)a4 * (short)0x1E) + 0x14) << 2) << 1), 0.0f);
        break;
    }
    t0 = *(signed char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x1));
    switch (t0) {
    case 0:
        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC1543AC);
        FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(signed char)a4 * (short)0x1E) + 0xA) << 2) << 1), 0.0f);
        if (((*(int *)((((signed char)((((a4 << 2) << 1) + a4) << 2) + 0xC7F31F0) + 0x8))) & 8) != 0) {
            *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x1)) = ((*(signed char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x1))) + 0x1);
        } else {
            t0 = *(signed char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x4));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                    } else {
                        FUN_0c0d1520(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
                    }
                } else {
                    FUN_0c0d1268(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
                }
            } else {
                FUN_0c0d0e50(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
            }
        }
        (((struct o64_ushort *)(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0)))->v) = (unsigned char)(*(signed char *)((((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x101)));
        (((struct o68_ushort *)(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0)))->v) = (unsigned char)(*(signed char *)((((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x102)));
        FUN_0c0d2a70(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
        FUN_0c0d2a8c(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
        break;
    case 1:
        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC1543B8);
        FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(signed char)a4 * (short)0x1E) + 0xA) << 2) << 1), 0.0f);
        if (((*(int *)((((signed char)((((a4 << 2) << 1) + a4) << 2) + 0xC7F31F0) + 0x8))) & 8) != 0) {
            *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x1)) = ((*(signed char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x1))) + 0x1);
            *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x2)) = 0x0;
            *(unsigned char *)(((*(int *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x1C))) + 0x1)) = 0x0;
        } else {
            FUN_0c0d0d80(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
        }
        FUN_0c0d2a70(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
        FUN_0c0d2a84();
        FUN_0c0d2a8c(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
        FUN_0c0d24ec(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
        break;
    case 2:
        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC1543C4);
        FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(signed char)a4 * (short)0x1E) + 0xA) << 2) << 1), 0.0f);
        if (((*(int *)((((signed char)((((a4 << 2) << 1) + a4) << 2) + 0xC7F31F0) + 0x8))) & 8) != 0) {
            *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x1)) = 0x0;
            *(unsigned char *)(((*(int *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x1C))) + 0x1)) = 0x1;
        } else {
            FUN_0c0d0674(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
        }
        break;
    }
    return ((int (*)(void))(0xC0D05EC))();
}

int FUN_0c095856(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t0;
    register int t11;
    register int t14;
    register int t20;
    register int t28;
    register int t66;
    register int t67;
    register int t72;
    register int t75;
    register int t76;
    register int t79;
    register int t83;
    register int t84;
    register int t87;
    register int t88;
    register int t93;
    register int t96;
    register int t97;
    register int t100;
    register int t104;
    register int t105;
    register int t64;
    register int t39;
    int t23;
    int t30;

    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) != 0) {
        t64 = a4;
    } else {
        FUN_0c0a167c(a4);
        (((struct o71F3_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71F1)));
        FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0x13);
        (((struct o7214_uchar *)(a4))->v) = (*(signed char *)((0xC338E12 + (*(signed char *)((a4 + 0x4))))));
        if ((int)(*(signed char *)((a4 + 0x7230))) < (int)0x3) {
        } else {
            FUN_0c0e6fe8();
            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + 100.0f);
            if ((*(float *)0xC494D1C) > 500.0f) {
                t11 = FUN_0c09db78(a4);
                *(volatile float *)0xC494D1C;
                FUN_0c05cb42((((int)stk + 0) + 0x10), t11, 0x0);
                *(float *)(((int)stk + 12)) = 0.0f;
                *(float *)(((int)stk + 8)) = 0.0f;
                *(float *)(((int)stk + 4)) = 0.0f;
                t14 = FUN_0c09dc1c((a4 + 0x20), (((int)stk + 0) + 0x4));
                *(unsigned int *)(((int)stk + 0)) = t14;
                FUN_0c0df940();
                t20 = FUN_0c0e6f24();
                *(volatile float *)0xC494D1C;
                if (((*(signed char *)0xC7F4765) != 0) && (t23 = *(signed char *)0xC7F4755, t23 != 0)) {
                    FUN_0c05cb42((((int)stk + 0) + 0x10), (0xFFFF & ((t14 + (int)(((float)(short)t20 * 65536.0f) / 360.0f)) - 16384)), 0x0);
                    t39 = 0x0;
                } else {
                    FUN_0c05cb42((((int)stk + 0) + 0x10), (0xFFFF & ((t14 + (int)(((float)(short)t20 * 65536.0f) / 360.0f)) - 16384)), 0x1);
                    t39 = 0x2;
                }
            } else {
                *(float *)(((int)stk + 12)) = 0.0f;
                *(float *)(((int)stk + 8)) = 0.0f;
                *(float *)(((int)stk + 4)) = 0.0f;
                t28 = FUN_0c09dc1c((a4 + 0x20), (((int)stk + 0) + 0x4));
                if (((*(signed char *)0xC7F4765) != 0) && (t30 = *(signed char *)0xC7F4755, t30 != 0)) {
                    FUN_0c05cb42((((int)stk + 0) + 0x10), t28, 0x0);
                    FUN_0c05cb42((((int)stk + 0) + 0x10), (unsigned short)(0x1555 + t28), 0x0);
                    t39 = 0x0;
                } else {
                    FUN_0c05cb42((((int)stk + 0) + 0x10), t28, 0x0);
                    FUN_0c05cb42((((int)stk + 0) + 0x10), (unsigned short)(0x1555 + t28), 0x1);
                    t39 = 0x2;
                }
            }
            FUN_0c0cc7fc(t39);
            FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0x11);
            FUN_0c04571c((*(signed char *)((a4 + 0x3))), 0x11, 0x3);
            FUN_0c04571c((*(signed char *)((a4 + 0x3))), 0x11, 0x6);
            (((struct o7230_uchar *)(a4))->v) = 0x0;
            (((struct o7231_uchar *)(a4))->v) = 0x0;
            FUN_0c045f9c(a4);
        }
    }
    t66 = *(signed char *)((a4 + 0x4));
    if (t66 != 0) {
        if (t66 != 1) {
            t67 = *(signed char *)((a4 + 0xB));
            if (t67 != 0) {
                if (t67 != 1) {
                    if (t67 == 2) {
                        return ((int (*)(int, int, int, int))(0xC095BA6))(t64, a5, a6, a7);
                    }
                    return t67;
                }
                FUN_0c09d9e8(a4);
                FUN_0c09d990(a4);
                FUN_0c09a910(a4);
                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                    t72 = FUN_0c09e7b8(a4);
                    if ((signed char)t72 != 0) {
                        t75 = 0x0;
                        t76 = 0x9;
                        if ((*(signed char *)((a4 + 0x4))) == 4) {
                            t75 = 0x3;
                            t76 = 0xA;
                        }
                        FUN_0c09a808(a4, t75, t76);
                        return ((int (*)(void))(0xC095B9E))();
                    }
                    return (signed char)t72;
                }
                return 0x3C;
            }
            t79 = FUN_0c09a910(a4);
            if ((signed char)t79 == 0) {
                return (signed char)t79;
            }
            if (((((struct o274_float *)(a4))->v)) > 0.0f) {
                t83 = 0x0;
                t84 = 0x9;
                if ((*(signed char *)((a4 + 0x4))) == 4) {
                    t83 = 0x3;
                    t84 = 0xA;
                }
                FUN_0c09a808(a4, t83, t84);
                return ((int (*)(void))(0xC095B68))();
            }
            return ((int (*)(void))(0xC095B9E))();
        }
        t87 = *(signed char *)((a4 + 0xB));
        if (t87 != 0) {
            if (t87 != 1) {
                if (t87 != 2) {
                    return t87;
                }
                return ((int (*)(int, int, int, int))(0xC095BA6))(t64, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC095B6E))(t64, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC095B4C))(t64, a5, a6, a7);
    }
    t88 = *(signed char *)((a4 + 0xB));
    if (t88 != 0) {
        if (t88 != 1) {
            if (t88 == 2) {
                return ((int (*)(int, int, int, int))(0xC095BA6))(t64, a5, a6, a7);
            }
            return t88;
        }
        FUN_0c09d9e8(a4);
        FUN_0c09d990(a4);
        FUN_0c09a910(a4);
        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
            t93 = FUN_0c09e7b8(a4);
            if ((signed char)t93 != 0) {
                t96 = 0x0;
                t97 = 0x9;
                if ((*(signed char *)((a4 + 0x4))) == 4) {
                    t96 = 0x3;
                    t97 = 0xA;
                }
                FUN_0c09a808(a4, t96, t97);
                return ((int (*)(void))(0xC095B9E))();
            }
            return (signed char)t93;
        }
        return 0x3C;
    }
    t100 = FUN_0c09a910(a4);
    if ((signed char)t100 == 0) {
        return (signed char)t100;
    }
    if (((((struct o274_float *)(a4))->v)) > 0.0f) {
        t104 = 0x0;
        t105 = 0x9;
        if ((*(signed char *)((a4 + 0x4))) == 4) {
            t104 = 0x3;
            t105 = 0xA;
        }
        FUN_0c09a808(a4, t104, t105);
        return ((int (*)(void))(0xC095B68))();
    }
    return ((int (*)(void))(0xC095B9E))();
}

int FUN_0c0c7780(int a4)
{
    int stk[4];
    register int t0;
    register int t3;
    register float t5;
    register float u8;
    register float u9;
    register float u10;
    register float t12;
    register float u15;
    register float u16;
    register float u17;
    register int t22;
    register int t24;
    register int t26;
    register int t28;
    register float u29;
    register int t30;
    register int t46;
    register int t48;
    register float t52;
    register float u54;
    register int t76;
    register int t78;
    register int t79;
    register int t88;
    register int t89;
    register float t113;
    register float u116;
    register float u117;
    register float u118;
    register float t120;
    register float u123;
    register float u124;
    register float u125;
    register int t141;
    register int t157;
    register int t159;
    register float t163;
    register float u165;
    register int t187;
    register int t189;
    register int t190;
    register int t199;
    register int t200;
    register float t224;
    register float u227;
    register float u228;
    register float u229;
    register float t231;
    register float u234;
    register float u235;
    register float u236;
    register int t252;
    register int t255;
    int t73;
    int t131;
    int t184;
    int t242;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
    }
    t3 = *(signed char *)((a4 + 0x8));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 == 2) {
                *(int *)((int)stk + 0) = (a4 + 0x20);
                t5 = FUN_0c0dfa50((*(int *)((a4 + 0x30))));
                u8 = (((struct o20_float *)(a4))->v);
                u9 = (t5 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
                u10 = u8;
                u10 = u10 + 5.0f * u9;
                (((struct o20_float *)(a4))->v) = u10;
                *(int *)((int)stk + 0) = (a4 + 0x28);
                t12 = FUN_0c0df4d0((*(int *)((a4 + 0x30))));
                u15 = (((struct o28_float *)(a4))->v);
                u16 = (t12 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
                u17 = u15;
                u17 = u17 + 5.0f * u16;
                (((struct o28_float *)(a4))->v) = u17;
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((-((FUN_0c0dfa50((*(int *)((a4 + 0x2C))))) * 5.0f))));
                t22 = (((struct o2E0_int *)(a4))->v);
                (((struct o40_float *)(t22))->v) = (((((struct o40_float *)(t22))->v)) - 0.199999988f);
                t24 = (((struct o2E0_int *)(a4))->v);
                (((struct o1C_float *)(t24))->v) = (((((struct o1C_float *)(t24))->v)) + 0.799999952f);
                t26 = (((struct o2E0_int *)(a4))->v);
                (((struct o20_float *)(t26))->v) = (((((struct o20_float *)(t26))->v)) + 0.799999952f);
                t28 = (((struct o2E0_int *)(a4))->v);
                u29 = (((struct o24_float *)(t28))->v);
                (((struct o24_float *)(t28))->v) = (u29 - 0.199999988f);
                t255 = 0x24;
                if (!((u29 - 0.199999988f) > 0.0f)) {
                    t30 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t30 + 0x1);
                    t255 = (t30 + 0x1);
                }
            } else {
                t255 = t3;
                if (t3 == 3) {
                    t255 = (FUN_0c059330(a4));
                }
            }
        } else {
            t46 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t46 + 0x10)) = ((*(int *)((t46 + 0x10))) + 0xE38);
            t48 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t48 + 0x14)) = ((*(int *)((t48 + 0x14))) + 0x71C);
            (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) + 0x800);
            t52 = FUN_0c0dfa50(((((struct oF2_short *)(a4))->v)));
            u54 = t52;
            if (!(t52 > 0.0f)) {
                (((struct oF2_ushort *)(a4))->v) = 0x0;
                u54 = 0.0f;
            }
            (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((u54 / 2.0f) + 1.0f);
            (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((u54 / 2.0f) + 1.0f);
            (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((u54 / 2.0f) + 1.0f);
            (((struct o1C_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v) = (((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v)) / 10.0f);
            (((struct o20_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v) = (((((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v)) / 10.0f);
            (((struct o24_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v) = (((((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v)) / 10.0f);
            if (((((struct oF0_short *)(a4))->v)) != 0) {
                (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
            }
            if ((((((struct oEE_short *)(a4))->v)) != 0) && (t73 = (((struct oF0_short *)(a4))->v), t73 == 0)) {
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
                t76 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x1C));
                *(int *)((int)stk + 0) = ((int)stk + 4);
                FUN_0c0c7668(t76, a4, 0x0, 0x0, ((int)stk + 4));
                t78 = *(int *)((a4 + 0x30));
                t79 = *(int *)((((int)stk + 4) + 0x4));
                if (((int)(unsigned short)(t79 - t78) >= (int)0xAAA) && ((int)(unsigned short)(t79 - t78) <= (int)0xF556)) {
                    if ((int)(unsigned short)(t79 - t78) < (int)0x8000) {
                        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x38E);
                    } else {
                        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 0x38E);
                    }
                }
                t88 = *(int *)((a4 + 0x2C));
                t89 = *(int *)((((int)stk + 4) + 0x0));
                if (((int)(unsigned short)(t89 - t88) >= (int)0xAAA) && ((int)(unsigned short)(t89 - t88) <= (int)0xF556)) {
                    if ((int)(unsigned short)(t89 - t88) < (int)0x8000) {
                        *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + 0x38E);
                    } else {
                        *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) - 0x38E);
                    }
                }
            }
            *(int *)((int)stk + 0) = (a4 + 0x20);
            t113 = FUN_0c0dfa50((*(int *)((a4 + 0x30))));
            u116 = (((struct o20_float *)(a4))->v);
            u117 = (t113 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
            u118 = u116;
            u118 = u118 + 20.0f * u117;
            (((struct o20_float *)(a4))->v) = u118;
            *(int *)((int)stk + 0) = (a4 + 0x28);
            t120 = FUN_0c0df4d0((*(int *)((a4 + 0x30))));
            u123 = (((struct o28_float *)(a4))->v);
            u124 = (t120 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
            u125 = u123;
            u125 = u125 + 20.0f * u124;
            (((struct o28_float *)(a4))->v) = u125;
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((-((FUN_0c0dfa50((*(int *)((a4 + 0x2C))))) * 20.0f))));
            if (((*(signed char *)((a4 + 0x2D8))) == 0) && (t131 = *(signed char *)((a4 + 0x108)), t131 == 0)) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                *(volatile int *)((a4 + 0x2E0));
                FUN_0c0e6fe8();
                *(volatile int *)((a4 + 0x2E0));
                FUN_0c0e6fe8();
            }
            t141 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t141 - 1);
            t255 = 0xEC;
            if ((short)(t141 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = 0x3;
                t255 = 0x3;
            }
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x258;
        (((struct oEE_ushort *)(a4))->v) = 0xA;
        (((struct oF0_ushort *)(a4))->v) = 0xA;
        (((struct oF2_ushort *)(a4))->v) = 0x0;
        t157 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t157 + 0x10)) = ((*(int *)((t157 + 0x10))) + 0xE38);
        t159 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t159 + 0x14)) = ((*(int *)((t159 + 0x14))) + 0x71C);
        (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) + 0x800);
        t163 = FUN_0c0dfa50(((((struct oF2_short *)(a4))->v)));
        u165 = t163;
        if (!(t163 > 0.0f)) {
            (((struct oF2_ushort *)(a4))->v) = 0x0;
            u165 = 0.0f;
        }
        (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((u165 / 2.0f) + 1.0f);
        (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((u165 / 2.0f) + 1.0f);
        (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((u165 / 2.0f) + 1.0f);
        (((struct o1C_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v) = (((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v)) / 10.0f);
        (((struct o20_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v) = (((((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v)) / 10.0f);
        (((struct o24_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v) = (((((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v)) / 10.0f);
        if (((((struct oF0_short *)(a4))->v)) != 0) {
            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
        }
        if ((((((struct oEE_short *)(a4))->v)) != 0) && (t184 = (((struct oF0_short *)(a4))->v), t184 == 0)) {
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
            t187 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x1C));
            *(int *)((int)stk + 0) = ((int)stk + 4);
            FUN_0c0c7668(t187, a4, 0x0, 0x0, ((int)stk + 4));
            t189 = *(int *)((a4 + 0x30));
            t190 = *(int *)((((int)stk + 4) + 0x4));
            if (((int)(unsigned short)(t190 - t189) >= (int)0xAAA) && ((int)(unsigned short)(t190 - t189) <= (int)0xF556)) {
                if ((int)(unsigned short)(t190 - t189) < (int)0x8000) {
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x38E);
                } else {
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 0x38E);
                }
            }
            t199 = *(int *)((a4 + 0x2C));
            t200 = *(int *)((((int)stk + 4) + 0x0));
            if (((int)(unsigned short)(t200 - t199) >= (int)0xAAA) && ((int)(unsigned short)(t200 - t199) <= (int)0xF556)) {
                if ((int)(unsigned short)(t200 - t199) < (int)0x8000) {
                    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + 0x38E);
                } else {
                    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) - 0x38E);
                }
            }
        }
        *(int *)((int)stk + 0) = (a4 + 0x20);
        t224 = FUN_0c0dfa50((*(int *)((a4 + 0x30))));
        u227 = (((struct o20_float *)(a4))->v);
        u228 = (t224 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
        u229 = u227;
        u229 = u229 + 20.0f * u228;
        (((struct o20_float *)(a4))->v) = u229;
        *(int *)((int)stk + 0) = (a4 + 0x28);
        t231 = FUN_0c0df4d0((*(int *)((a4 + 0x30))));
        u234 = (((struct o28_float *)(a4))->v);
        u235 = (t231 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
        u236 = u234;
        u236 = u236 + 20.0f * u235;
        (((struct o28_float *)(a4))->v) = u236;
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((-((FUN_0c0dfa50((*(int *)((a4 + 0x2C))))) * 20.0f))));
        if (((*(signed char *)((a4 + 0x2D8))) == 0) && (t242 = *(signed char *)((a4 + 0x108)), t242 == 0)) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
            *(volatile int *)((a4 + 0x2E0));
            FUN_0c0e6fe8();
            *(volatile int *)((a4 + 0x2E0));
            FUN_0c0e6fe8();
        }
        t252 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t252 - 1);
        t255 = 0xEC;
        if ((short)(t252 - 1) == 0) {
            *(unsigned char *)((a4 + 0x8)) = 0x3;
            t255 = 0x3;
        }
    }
    return t255;
}

int FUN_0c0c719c(int a4)
{
    int stk[4];
    register int t0;
    register int t3;
    register float t5;
    register float u8;
    register float u9;
    register float u10;
    register float t12;
    register float u15;
    register float u16;
    register float u17;
    register int t22;
    register int t24;
    register int t26;
    register int t28;
    register float u29;
    register int t30;
    register int t46;
    register int t48;
    register float t52;
    register float u54;
    register int t76;
    register int t78;
    register int t79;
    register int t88;
    register int t89;
    register float t113;
    register float u116;
    register float u117;
    register float u118;
    register float t120;
    register float u123;
    register float u124;
    register float u125;
    register int t141;
    register int t157;
    register int t159;
    register float t163;
    register float u165;
    register int t187;
    register int t189;
    register int t190;
    register int t199;
    register int t200;
    register float t224;
    register float u227;
    register float u228;
    register float u229;
    register float t231;
    register float u234;
    register float u235;
    register float u236;
    register int t252;
    register int t255;
    int t73;
    int t131;
    int t184;
    int t242;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
    }
    t3 = *(signed char *)((a4 + 0x8));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 == 2) {
                *(int *)((int)stk + 0) = (a4 + 0x20);
                t5 = FUN_0c0dfa50((*(int *)((a4 + 0x30))));
                u8 = (((struct o20_float *)(a4))->v);
                u9 = (t5 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
                u10 = u8;
                u10 = u10 + 5.0f * u9;
                (((struct o20_float *)(a4))->v) = u10;
                *(int *)((int)stk + 0) = (a4 + 0x28);
                t12 = FUN_0c0df4d0((*(int *)((a4 + 0x30))));
                u15 = (((struct o28_float *)(a4))->v);
                u16 = (t12 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
                u17 = u15;
                u17 = u17 + 5.0f * u16;
                (((struct o28_float *)(a4))->v) = u17;
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((-((FUN_0c0dfa50((*(int *)((a4 + 0x2C))))) * 5.0f))));
                t22 = (((struct o2E0_int *)(a4))->v);
                (((struct o40_float *)(t22))->v) = (((((struct o40_float *)(t22))->v)) - 0.199999988f);
                t24 = (((struct o2E0_int *)(a4))->v);
                (((struct o1C_float *)(t24))->v) = (((((struct o1C_float *)(t24))->v)) + 0.799999952f);
                t26 = (((struct o2E0_int *)(a4))->v);
                (((struct o20_float *)(t26))->v) = (((((struct o20_float *)(t26))->v)) + 0.799999952f);
                t28 = (((struct o2E0_int *)(a4))->v);
                u29 = (((struct o24_float *)(t28))->v);
                (((struct o24_float *)(t28))->v) = (u29 - 0.199999988f);
                t255 = 0x24;
                if (!((u29 - 0.199999988f) > 0.0f)) {
                    t30 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t30 + 0x1);
                    t255 = (t30 + 0x1);
                }
            } else {
                t255 = t3;
                if (t3 == 3) {
                    t255 = (FUN_0c059330(a4));
                }
            }
        } else {
            t46 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t46 + 0x10)) = ((*(int *)((t46 + 0x10))) + 0xE38);
            t48 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t48 + 0x14)) = ((*(int *)((t48 + 0x14))) + 0x71C);
            (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) + 0x800);
            t52 = FUN_0c0dfa50(((((struct oF2_short *)(a4))->v)));
            u54 = t52;
            if (!(t52 > 0.0f)) {
                (((struct oF2_ushort *)(a4))->v) = 0x0;
                u54 = 0.0f;
            }
            (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((u54 / 2.0f) + 1.0f);
            (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((u54 / 2.0f) + 1.0f);
            (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((u54 / 2.0f) + 1.0f);
            (((struct o1C_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v) = (((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v)) / 10.0f);
            (((struct o20_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v) = (((((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v)) / 10.0f);
            (((struct o24_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v) = (((((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v)) / 10.0f);
            if (((((struct oF0_short *)(a4))->v)) != 0) {
                (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
            }
            if ((((((struct oEE_short *)(a4))->v)) != 0) && (t73 = (((struct oF0_short *)(a4))->v), t73 == 0)) {
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
                t76 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x1C));
                *(int *)((int)stk + 0) = ((int)stk + 4);
                FUN_0c0c707e(t76, a4, 0x0, 0x0, ((int)stk + 4));
                t78 = *(int *)((a4 + 0x30));
                t79 = *(int *)((((int)stk + 4) + 0x4));
                if (((int)(unsigned short)(t79 - t78) >= (int)0xAAA) && ((int)(unsigned short)(t79 - t78) <= (int)0xF556)) {
                    if ((int)(unsigned short)(t79 - t78) < (int)0x8000) {
                        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x38E);
                    } else {
                        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 0x38E);
                    }
                }
                t88 = *(int *)((a4 + 0x2C));
                t89 = *(int *)((((int)stk + 4) + 0x0));
                if (((int)(unsigned short)(t89 - t88) >= (int)0xAAA) && ((int)(unsigned short)(t89 - t88) <= (int)0xF556)) {
                    if ((int)(unsigned short)(t89 - t88) < (int)0x8000) {
                        *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + 0x38E);
                    } else {
                        *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) - 0x38E);
                    }
                }
            }
            *(int *)((int)stk + 0) = (a4 + 0x20);
            t113 = FUN_0c0dfa50((*(int *)((a4 + 0x30))));
            u116 = (((struct o20_float *)(a4))->v);
            u117 = (t113 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
            u118 = u116;
            u118 = u118 + 20.0f * u117;
            (((struct o20_float *)(a4))->v) = u118;
            *(int *)((int)stk + 0) = (a4 + 0x28);
            t120 = FUN_0c0df4d0((*(int *)((a4 + 0x30))));
            u123 = (((struct o28_float *)(a4))->v);
            u124 = (t120 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
            u125 = u123;
            u125 = u125 + 20.0f * u124;
            (((struct o28_float *)(a4))->v) = u125;
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((-((FUN_0c0dfa50((*(int *)((a4 + 0x2C))))) * 20.0f))));
            if (((*(signed char *)((a4 + 0x2D8))) == 0) && (t131 = *(signed char *)((a4 + 0x108)), t131 == 0)) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                *(volatile int *)((a4 + 0x2E0));
                FUN_0c0e6fe8();
                *(volatile int *)((a4 + 0x2E0));
                FUN_0c0e6fe8();
            }
            t141 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t141 - 1);
            t255 = 0xEC;
            if ((short)(t141 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = 0x3;
                t255 = 0x3;
            }
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x258;
        (((struct oEE_ushort *)(a4))->v) = 0x1E;
        (((struct oF0_ushort *)(a4))->v) = 0x5;
        (((struct oF2_ushort *)(a4))->v) = 0x0;
        t157 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t157 + 0x10)) = ((*(int *)((t157 + 0x10))) + 0xE38);
        t159 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t159 + 0x14)) = ((*(int *)((t159 + 0x14))) + 0x71C);
        (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) + 0x800);
        t163 = FUN_0c0dfa50(((((struct oF2_short *)(a4))->v)));
        u165 = t163;
        if (!(t163 > 0.0f)) {
            (((struct oF2_ushort *)(a4))->v) = 0x0;
            u165 = 0.0f;
        }
        (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((u165 / 2.0f) + 1.0f);
        (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((u165 / 2.0f) + 1.0f);
        (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((u165 / 2.0f) + 1.0f);
        (((struct o1C_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v) = (((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v)) / 10.0f);
        (((struct o20_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v) = (((((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v)) / 10.0f);
        (((struct o24_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v) = (((((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v)) / 10.0f);
        if (((((struct oF0_short *)(a4))->v)) != 0) {
            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
        }
        if ((((((struct oEE_short *)(a4))->v)) != 0) && (t184 = (((struct oF0_short *)(a4))->v), t184 == 0)) {
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
            t187 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x1C));
            *(int *)((int)stk + 0) = ((int)stk + 4);
            FUN_0c0c707e(t187, a4, 0x0, 0x0, ((int)stk + 4));
            t189 = *(int *)((a4 + 0x30));
            t190 = *(int *)((((int)stk + 4) + 0x4));
            if (((int)(unsigned short)(t190 - t189) >= (int)0xAAA) && ((int)(unsigned short)(t190 - t189) <= (int)0xF556)) {
                if ((int)(unsigned short)(t190 - t189) < (int)0x8000) {
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x38E);
                } else {
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 0x38E);
                }
            }
            t199 = *(int *)((a4 + 0x2C));
            t200 = *(int *)((((int)stk + 4) + 0x0));
            if (((int)(unsigned short)(t200 - t199) >= (int)0xAAA) && ((int)(unsigned short)(t200 - t199) <= (int)0xF556)) {
                if ((int)(unsigned short)(t200 - t199) < (int)0x8000) {
                    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + 0x38E);
                } else {
                    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) - 0x38E);
                }
            }
        }
        *(int *)((int)stk + 0) = (a4 + 0x20);
        t224 = FUN_0c0dfa50((*(int *)((a4 + 0x30))));
        u227 = (((struct o20_float *)(a4))->v);
        u228 = (t224 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
        u229 = u227;
        u229 = u229 + 20.0f * u228;
        (((struct o20_float *)(a4))->v) = u229;
        *(int *)((int)stk + 0) = (a4 + 0x28);
        t231 = FUN_0c0df4d0((*(int *)((a4 + 0x30))));
        u234 = (((struct o28_float *)(a4))->v);
        u235 = (t231 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
        u236 = u234;
        u236 = u236 + 20.0f * u235;
        (((struct o28_float *)(a4))->v) = u236;
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((-((FUN_0c0dfa50((*(int *)((a4 + 0x2C))))) * 20.0f))));
        if (((*(signed char *)((a4 + 0x2D8))) == 0) && (t242 = *(signed char *)((a4 + 0x108)), t242 == 0)) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
            *(volatile int *)((a4 + 0x2E0));
            FUN_0c0e6fe8();
            *(volatile int *)((a4 + 0x2E0));
            FUN_0c0e6fe8();
        }
        t252 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t252 - 1);
        t255 = 0xEC;
        if ((short)(t252 - 1) == 0) {
            *(unsigned char *)((a4 + 0x8)) = 0x3;
            t255 = 0x3;
        }
    }
    return t255;
}

int FUN_0c0e5d98(int a4, int a5, int a6, int a7)
{
    int stk[9];

    register int R0;
    register int R1;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    *(unsigned short *)(((((int)stk + 0) + 0x1E) + 0x0)) = v0_0;
    *(unsigned short *)(((((int)stk + 0) + 0x1C) + 0x0)) = v0_1;
    *(unsigned short *)(((((int)stk + 0) + 0x1A) + 0x0)) = v0_2;
    if (((*(short *)(((int)stk + 26))) == 0)) goto L_C0E5DBE;
    return 0xFFFFFFFE;
    L_C0E5DBE:;
    v0_3 = *(short *)(((int)stk + 28));
    v0_4 = *(short *)(((int)stk + 30));
    *(unsigned short *)(((int)stk + 0)) = (v0_4 + (v0_3 << 1));
    if (((int)(short)(v0_4 + (v0_3 << 1)) <= (int)0x8)) goto L_C0E5DDC;
    return 0xFFFFFFFF;
    L_C0E5DDC:;
    *(unsigned short *)(((int)stk + 2)) = 0x0;
    L_C0E5E0E:;
    if (((int)(*(short *)(((int)stk + 2))) < (int)0x8)) goto L_C0E5DE4;
    (((struct o14_uint *)0xA080008C)->v) = (*(short *)(((int)stk + 30)));
    (((struct o18_uint *)0xA080008C)->v) = (*(short *)(((int)stk + 28)));
    *(unsigned int *)(((int)stk + 20)) = ((((struct o0_int *)0xA080008C)->v));
    if (((*(short *)(((int)stk + 0))) == 0)) goto L_C0E5E88;
    *(volatile short *)(((int)stk + 0));
    *(volatile int *)(((int)stk + 20));
    *(volatile short *)(((int)stk + 0));
    v0_3 = FUN_0c0e6db4();
    (((struct oC_uint *)0xC7FD0E8)->v) = (v0_3 & 0x7FFFFFE0);
    v0_4 = (0x4000);
    if (((int)(v0_3 & 0x7FFFFFE0) <= (int)0x4000)) goto L_C0E5E54;
    (((struct oC_uint *)0xC7FD0E8)->v) = v0_4;
    L_C0E5E54:;
    *(unsigned int *)(((int)stk + 16)) = (((((struct oC_int *)0xC7FD0E8)->v)) + 0x40);
    v0_3 = *(int *)((((((struct o0_int *)0xC7FD0E8)->v)) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = v0_3;
    if (((v0_3 & 31) == 0)) goto L_C0E5E72;
    *(unsigned int *)(((int)stk + 4)) = (((*(int *)(((int)stk + 4))) & 0xFFFFFFE0) + 0x20);
    L_C0E5E72:;
    *(unsigned int *)(((int)stk + 12)) = ((((((struct o4_int *)0xC7FD0E8)->v)) - (*(int *)(((int)stk + 16)))) - (*(int *)(((int)stk + 4))));
    *(unsigned int *)(((int)stk + 8)) = 0xA0800100;
    L_C0E5E92:;
    (((struct o1C_uint *)0xA080008C)->v) = (*(int *)(((int)stk + 16)));
    *(unsigned short *)(((int)stk + 2)) = 0x0;
    L_C0E5F68:;
    if (!(((int)(*(short *)(((int)stk + 2))) < (int)(*(short *)(((int)stk + 30)))))) goto L_C0E603A;
    v0_3 = *(short *)(((int)stk + 2));
    *(unsigned short *)(((unsigned char)((((v0_3 << 1) + v0_3) << 2) << 1) + 0xC7FD110)) = 0x0;
    v0_3 = *(short *)(((int)stk + 2));
    *(unsigned int *)(((unsigned char)((((v0_3 << 1) + v0_3) << 2) << 1) + 0xC7FD114)) = ((*(int *)(((int)stk + 12))) + 0xA0800000);
    *(unsigned int *)((((*(int *)(((int)stk + 8))) + 0xC) + 0x0)) = (*(int *)(((int)stk + 12)));
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) - (*(int *)(((int)stk + 16))));
    v0_3 = *(short *)(((int)stk + 2));
    *(unsigned int *)(((unsigned char)((((v0_3 << 1) + v0_3) << 2) << 1) + 0xC7FD118)) = 0x0;
    *(unsigned int *)((((*(int *)(((int)stk + 8))) + 0x10) + 0x0)) = 0x0;
    v0_3 = *(short *)(((int)stk + 2));
    *(unsigned int *)(((unsigned char)((((v0_3 << 1) + v0_3) << 2) << 1) + 0xC7FD120)) = ((*(int *)(((int)stk + 8))) + 0x14);
    v0_3 = *(short *)(((int)stk + 2));
    *(unsigned int *)(((unsigned char)((((v0_3 << 1) + v0_3) << 2) << 1) + 0xC7FD124)) = ((*(int *)(((int)stk + 8))) + 0x4);
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x60);
    *(unsigned short *)(((int)stk + 2)) = ((*(short *)(((int)stk + 2))) + 0x1);
    goto L_C0E5F68;
    L_C0E603A:;
    if (((int)(*(short *)(((int)stk + 2))) < (int)((*(short *)(((int)stk + 30))) + (*(short *)(((int)stk + 28)))))) goto L_C0E5F90;
    return ((int (*)(int, int, int, int))(0xC0E60AE))(v0_0, v0_1, v0_2, a7);
    L_C0E5F90:;
    v0_3 = *(short *)(((int)stk + 2));
    *(unsigned short *)(((unsigned char)((((v0_3 << 1) + v0_3) << 2) << 1) + 0xC7FD110)) = 0x0;
    v0_3 = *(short *)(((int)stk + 2));
    *(unsigned int *)(((unsigned char)((((v0_3 << 1) + v0_3) << 2) << 1) + 0xC7FD118)) = ((*(int *)(((int)stk + 12))) + 0xA0800000);
    *(unsigned int *)((((*(int *)(((int)stk + 8))) + 0x10) + 0x0)) = (*(int *)(((int)stk + 12)));
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) - (*(int *)(((int)stk + 16))));
    v0_3 = *(short *)(((int)stk + 2));
    *(unsigned int *)(((unsigned char)((((v0_3 << 1) + v0_3) << 2) << 1) + 0xC7FD114)) = ((*(int *)(((int)stk + 12))) + 0xA0800000);
    *(unsigned int *)((((*(int *)(((int)stk + 8))) + 0xC) + 0x0)) = (*(int *)(((int)stk + 12)));
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) - (*(int *)(((int)stk + 16))));
    v0_3 = *(short *)(((int)stk + 2));
    *(unsigned int *)(((unsigned char)((((v0_3 << 1) + v0_3) << 2) << 1) + 0xC7FD120)) = ((*(int *)(((int)stk + 8))) + 0x14);
    v0_3 = *(short *)(((int)stk + 2));
    *(unsigned int *)(((unsigned char)((((v0_3 << 1) + v0_3) << 2) << 1) + 0xC7FD124)) = ((*(int *)(((int)stk + 8))) + 0x4);
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x60);
    *(unsigned short *)(((int)stk + 2)) = ((*(short *)(((int)stk + 2))) + 0x1);
    goto L_C0E603A;
    L_C0E5E88:;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    (((struct oC_uint *)0xC7FD0E8)->v) = 0x0;
    goto L_C0E5E92;
    L_C0E5DE4:;
    v0_3 = *(signed char *)(((int)stk + 2));
    if (((*(short *)((0xC7FD110 + (unsigned char)((((v0_3 << 1) + v0_3) << 2) << 1)))) != 1)) goto L_C0E5E08;
    return 0xFFFFFFFD;
    L_C0E5E08:;
    *(unsigned short *)(((int)stk + 2)) = ((*(short *)(((int)stk + 2))) + 0x1);
    goto L_C0E5E0E;
}

int FUN_0c0a5240(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;

    t5 = *(signed char *)0xC7F2EE7;
    if ((unsigned char)t5 != 0) {
        if ((unsigned char)t5 != 1) {
            (((struct o0_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE6) + 0x1);
            (((struct o1_uchar *)0xC7F2EE6)->v) = 0x0;
            return 0x0;
        }
        if (((((struct o0_short *)0xC7F303C)->v)) != 0) {
            t5 = (((struct o2_short *)0xC7F303C)->v);
            (((struct o2_ushort *)0xC7F303C)->v) = (t5 - 1);
            if ((short)(t5 - 1) == 0) {
                (((struct o2_ushort *)0xC7F303C)->v) = 0x3C;
                (((struct o0_ushort *)0xC7F303C)->v) = (((((struct o0_short *)0xC7F303C)->v)) - 1);
            }
        }
        t5 = *(signed char *)0xC7F2EE8;
        if ((unsigned char)t5 != 0) {
            t6 = 0xC7F2EE7;
            t7 = 0xA;
            t8 = 0x14;
            if ((unsigned char)t5 != 1) {
            } else {
                if (((*(signed char *)0xC7E40C8) != 10) && (t0 = *(signed char *)0xC7EB398, t0 != 10)) {
                    if ((int)((((struct o0_short *)0xC7F303C)->v)) > 0) {
                        t0 = FUN_0c0a41a0(a4);
                        if ((signed char)t0 != 0) {
                            (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                            (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
                            FUN_0c0a3796(a4, 0x42);
                            (((struct o15_uchar *)0xC7F303C)->v) = (*(signed char *)((0xC152639 + ((((struct o6_short *)0xC7F303C)->v)))));
                            t0 = *(signed char *)0xC7F3051;
                            *(unsigned int *)((((t0 << 2) + 0xC7F2FB8) + 0x0)) = ((*(int *)((((t0 << 2) + 0xC7F2FB8) + 0x0))) + 0x1);
                        } else {
                            (((struct o4_ushort *)0xC7F303C)->v) = ((((struct o6_short *)0xC7F303C)->v));
                            if (((((struct o8_short *)0xC7F303C)->v)) != 0) {
                                (((struct o8_ushort *)0xC7F303C)->v) = (((((struct o8_short *)0xC7F303C)->v)) - 1);
                                if (((*(int *)((((signed char)((((a4 << 2) << 1) + a4) << 2) + 0xC7F31F0) + 0x8))) & 128) == 0) {
                                    if (((*(int *)((((signed char)((((a4 << 2) << 1) + a4) << 2) + 0xC7F31F0) + 0x8))) & 64) != 0) {
                                        FUN_0c0a519c(0x1, a4);
                                        (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE8) - 1);
                                    }
                                } else {
                                    FUN_0c0a519c(0x0, a4);
                                    (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE8) - 1);
                                }
                            } else {
                                t0 = *(int *)((0xC7F31F0 + (signed char)((((a4 << 2) << 1) + a4) << 2)));
                                if ((t0 & 128) != 0) {
                                    FUN_0c0a519c(0x0, a4);
                                    (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE8) - 1);
                                } else {
                                    if ((t0 & 64) != 0) {
                                        FUN_0c0a519c(0x1, a4);
                                        (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE8) - 1);
                                    }
                                }
                            }
                            (((struct o15_uchar *)0xC7F303C)->v) = (*(signed char *)((0xC152639 + ((((struct o6_short *)0xC7F303C)->v)))));
                        }
                    } else {
                        (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                        (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
                        FUN_0c0a3796(a4, 0x42);
                        (((struct o15_uchar *)0xC7F303C)->v) = (*(signed char *)((0xC152639 + ((((struct o6_short *)0xC7F303C)->v)))));
                        t0 = *(signed char *)0xC7F3051;
                        *(unsigned int *)((((t0 << 2) + 0xC7F2FB8) + 0x0)) = ((*(int *)((((t0 << 2) + 0xC7F2FB8) + 0x0))) + 0x1);
                    }
                } else {
                    (((struct o15_uchar *)0xC7F303C)->v) = 0xA;
                    (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                    (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
                    t0 = 0xC7E40C4;
                    t5 = 0xA;
                    t9 = 0x14;
                }
                t6 = t0;
                t7 = t5;
                t8 = t9;
            }
            t0 = t6;
            t5 = t7;
            t6 = t8;
        } else {
            t7 = (*(int *)0xC7E4084);
            for (;;) {
                if ((*(int *)((t7 + 0x10))) == 0xC0A6CAE) {
                    break;
                }
                t7 = (*(int *)((t7 + 0x18)));
            }
            if (((*(signed char *)((t7 + 0x8))) == 2) && (t1 = *(signed char *)((t7 + 0x9)), t1 == 3)) {
                (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE8) + 0x1);
                t1 = 0xC7F2EE7;
                t7 = 0xA;
                t8 = 0x14;
            } else {
                (((struct o8_ushort *)0xC7F303C)->v) = 0x14;
                t9 = *(int *)((((signed char)((((a4 << 2) << 1) + a4) << 2) + 0xC7F31F0) + 0x8));
                if ((t9 & 128) != 0) {
                    t10 = (((struct o6_short *)0xC7F303C)->v);
                    t11 = (((struct o4_short *)0xC7F303C)->v);
                    t12 = (t10 + 0x1);
                    if ((int)(short)(t10 + 0x1) > (int)0x9) {
                        t12 = 0x0;
                    }
                    if (t11 != (short)t12) {
                        t10 = 0xC7F3040;
                        t11 = 0x9;
                        t12 = 0x14;
                    } else {
                        (((struct o4_ushort *)0xC7F303C)->v) = ((((struct o6_short *)0xC7F303C)->v));
                        FUN_0c0a519c(0x0, a4);
                    }
                    t13 = t10;
                    t10 = t11;
                    t11 = t12;
                } else {
                    t12 = 0xC7F3040;
                    t14 = 0x9;
                    t11 = 0x14;
                    if ((t9 & 64) != 0) {
                        t9 = (((struct o6_short *)0xC7F303C)->v);
                        t14 = (((struct o4_short *)0xC7F303C)->v);
                        t11 = (t9 - 1);
                        if ((int)(short)(t9 - 1) < 0) {
                            t11 = 0x9;
                        }
                        if (t14 == (short)t11) {
                            (((struct o4_ushort *)0xC7F303C)->v) = ((((struct o6_short *)0xC7F303C)->v));
                            FUN_0c0a519c(0x1, a4);
                        } else {
                            t9 = 0xC7F3040;
                            t14 = 0x9;
                            t11 = 0x14;
                        }
                        t12 = t9;
                    }
                    t13 = t12;
                    t10 = t14;
                }
                t1 = t13;
                t7 = t10;
                t8 = t11;
            }
            (((struct o15_uchar *)0xC7F303C)->v) = (*(signed char *)((0xC152639 + ((((struct o6_short *)0xC7F303C)->v)))));
            t0 = t1;
            t5 = t7;
            t6 = t8;
        }
        *(volatile short *)0xC7F303C;
        sprintf(0xC7F36B8, t0, t5, t6, 0xC152A78);
    } else {
        (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
        (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
        (((struct o0_ushort *)0xC7F303C)->v) = 0x14;
        (((struct o2_ushort *)0xC7F303C)->v) = 0x3C;
        (((struct o6_ushort *)0xC7F303C)->v) = (*(signed char *)((0xC15262F + (*(signed char *)((((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4))))));
        (((struct o15_uchar *)0xC7F303C)->v) = (*(signed char *)((0xC152639 + ((((struct o6_short *)0xC7F303C)->v)))));
        if (((*(signed char *)0xC7E40C8) != 10) && (t2 = *(signed char *)0xC7EB398, t2 != 10)) {
        } else {
            (((struct o6_ushort *)0xC7F303C)->v) = (*(signed char *)0xC152638);
            (((struct o15_uchar *)0xC7F303C)->v) = 0xA;
        }
        if (((((struct o0_short *)0xC7F303C)->v)) != 0) {
            t0 = (((struct o2_short *)0xC7F303C)->v);
            (((struct o2_ushort *)0xC7F303C)->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct o2_ushort *)0xC7F303C)->v) = 0x3C;
                (((struct o0_ushort *)0xC7F303C)->v) = (((((struct o0_short *)0xC7F303C)->v)) - 1);
            }
        }
        t0 = *(signed char *)0xC7F2EE8;
        if ((unsigned char)t0 != 0) {
            t1 = 0xC15262F;
            t2 = 0xA;
            t5 = 0x14;
            if ((unsigned char)t0 != 1) {
            } else {
                if (((*(signed char *)0xC7E40C8) != 10) && (t3 = *(signed char *)0xC7EB398, t3 != 10)) {
                    if ((int)((((struct o0_short *)0xC7F303C)->v)) > 0) {
                        t0 = FUN_0c0a41a0(a4);
                        if ((signed char)t0 != 0) {
                            (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                            (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
                            FUN_0c0a3796(a4, 0x42);
                            (((struct o15_uchar *)0xC7F303C)->v) = (*(signed char *)((0xC152639 + ((((struct o6_short *)0xC7F303C)->v)))));
                            t0 = *(signed char *)0xC7F3051;
                            *(unsigned int *)((((t0 << 2) + 0xC7F2FB8) + 0x0)) = ((*(int *)((((t0 << 2) + 0xC7F2FB8) + 0x0))) + 0x1);
                        } else {
                            (((struct o4_ushort *)0xC7F303C)->v) = ((((struct o6_short *)0xC7F303C)->v));
                            if (((((struct o8_short *)0xC7F303C)->v)) != 0) {
                                (((struct o8_ushort *)0xC7F303C)->v) = (((((struct o8_short *)0xC7F303C)->v)) - 1);
                                if (((*(int *)((((signed char)((((a4 << 2) << 1) + a4) << 2) + 0xC7F31F0) + 0x8))) & 128) == 0) {
                                    if (((*(int *)((((signed char)((((a4 << 2) << 1) + a4) << 2) + 0xC7F31F0) + 0x8))) & 64) != 0) {
                                        FUN_0c0a519c(0x1, a4);
                                        (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE8) - 1);
                                    }
                                } else {
                                    FUN_0c0a519c(0x0, a4);
                                    (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE8) - 1);
                                }
                            } else {
                                t0 = *(int *)((0xC7F31F0 + (signed char)((((a4 << 2) << 1) + a4) << 2)));
                                if ((t0 & 128) != 0) {
                                    FUN_0c0a519c(0x0, a4);
                                    (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE8) - 1);
                                } else {
                                    if ((t0 & 64) != 0) {
                                        FUN_0c0a519c(0x1, a4);
                                        (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE8) - 1);
                                    }
                                }
                            }
                            (((struct o15_uchar *)0xC7F303C)->v) = (*(signed char *)((0xC152639 + ((((struct o6_short *)0xC7F303C)->v)))));
                        }
                    } else {
                        (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                        (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
                        FUN_0c0a3796(a4, 0x42);
                        (((struct o15_uchar *)0xC7F303C)->v) = (*(signed char *)((0xC152639 + ((((struct o6_short *)0xC7F303C)->v)))));
                        t0 = *(signed char *)0xC7F3051;
                        *(unsigned int *)((((t0 << 2) + 0xC7F2FB8) + 0x0)) = ((*(int *)((((t0 << 2) + 0xC7F2FB8) + 0x0))) + 0x1);
                    }
                } else {
                    (((struct o15_uchar *)0xC7F303C)->v) = 0xA;
                    (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                    (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
                    t0 = 0xC7E40C4;
                    t3 = 0xA;
                    t6 = 0x14;
                }
                t1 = t0;
                t2 = t3;
                t5 = t6;
            }
            t0 = t1;
            t1 = t2;
            t2 = t5;
        } else {
            t3 = (*(int *)0xC7E4084);
            for (;;) {
                if ((*(int *)((t3 + 0x10))) == 0xC0A6CAE) {
                    break;
                }
                t3 = (*(int *)((t3 + 0x18)));
            }
            if (((*(signed char *)((t3 + 0x8))) == 2) && (t1 = *(signed char *)((t3 + 0x9)), t1 == 3)) {
                (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE8) + 0x1);
                t3 = 0xC15262F;
                t1 = 0xA;
                t5 = 0x14;
            } else {
                (((struct o8_ushort *)0xC7F303C)->v) = 0x14;
                t6 = *(int *)((((signed char)((((a4 << 2) << 1) + a4) << 2) + 0xC7F31F0) + 0x8));
                if ((t6 & 128) != 0) {
                    t7 = (((struct o6_short *)0xC7F303C)->v);
                    t8 = (((struct o4_short *)0xC7F303C)->v);
                    t9 = (t7 + 0x1);
                    if ((int)(short)(t7 + 0x1) > (int)0x9) {
                        t9 = 0x0;
                    }
                    if (t8 != (short)t9) {
                        t7 = 0xC7F3040;
                        t8 = 0x9;
                        t9 = 0x14;
                    } else {
                        (((struct o4_ushort *)0xC7F303C)->v) = ((((struct o6_short *)0xC7F303C)->v));
                        FUN_0c0a519c(0x0, a4);
                    }
                    t10 = t7;
                    t7 = t8;
                    t8 = t9;
                } else {
                    t9 = 0xC7F3040;
                    t11 = 0x9;
                    t12 = 0x14;
                    if ((t6 & 64) != 0) {
                        t6 = (((struct o6_short *)0xC7F303C)->v);
                        t13 = (((struct o4_short *)0xC7F303C)->v);
                        t14 = (t6 - 1);
                        if ((int)(short)(t6 - 1) < 0) {
                            t14 = 0x9;
                        }
                        if (t13 == (short)t14) {
                            (((struct o4_ushort *)0xC7F303C)->v) = ((((struct o6_short *)0xC7F303C)->v));
                            FUN_0c0a519c(0x1, a4);
                        } else {
                            t6 = 0xC7F3040;
                            t13 = 0x9;
                            t14 = 0x14;
                        }
                        t9 = t6;
                        t11 = t13;
                        t12 = t14;
                    }
                    t10 = t9;
                    t7 = t11;
                    t8 = t12;
                }
                t3 = t10;
                t1 = t7;
                t5 = t8;
            }
            (((struct o15_uchar *)0xC7F303C)->v) = (*(signed char *)((0xC152639 + ((((struct o6_short *)0xC7F303C)->v)))));
            t0 = t3;
            t2 = t5;
        }
        *(volatile short *)0xC7F303C;
        sprintf(0xC7F36B8, t0, t1, t2, 0xC152A78);
    }
    t0 = 0x17C;
    if ((signed char)a4 == 0) {
        t0 = 0x104;
    }
    return FUN_0c02d9e0(0xC7F36B8, 0x1, (float)t0, 280.0f, 1.0f, 1.0f);
}

int FUN_0c084878(int a4, float f4)
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
                    return FUN_0c084856(a4);
                }
                return FUN_0c0847f8(a4);
            }
            return FUN_0c0846ac(a4, f4);
        }
        return FUN_0c0845a0(a4);
    }
    return FUN_0c0844f2(a4);
}
