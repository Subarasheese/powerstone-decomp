/* Straight-line functions with calls and guards (batch gen_eu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o36_uchar { char p[0x36]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o40_uchar { char p[0x40]; unsigned char v; };
struct o4A_uchar { char p[0x4A]; unsigned char v; };
struct o54_uchar { char p[0x54]; unsigned char v; };
struct o5E_uchar { char p[0x5E]; unsigned char v; };
struct o68_uchar { char p[0x68]; unsigned char v; };
struct o72_uchar { char p[0x72]; unsigned char v; };
struct o7218_uchar { char p[0x7218]; unsigned char v; };
struct o7221_uchar { char p[0x7221]; unsigned char v; };
struct o7222_uchar { char p[0x7222]; unsigned char v; };
struct o7224_uchar { char p[0x7224]; unsigned char v; };
struct o7C_uchar { char p[0x7C]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c027fa4(int, int, int, int, int, int);
int FUN_0c059330(int, int, int, int);
int FUN_0c062050(int, int, int);
int FUN_0c06c0f8(int);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e6d00(void);
int FUN_0c0e6f24(void);
extern int FUN_0c0e6fe8();
int FUN_0c0276c4(int a4);
int FUN_0c029660(int a4, int a5, int a6, int a7, float f4);
int FUN_0c02e4d0(int a4, int a5, int a6, int a7);
int FUN_0c06c124(int a4, int a5, int a6, int a7);

int FUN_0c0276c4(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)((a4 + 0x4));
    if ((unsigned int)(unsigned char)t0 < (unsigned int)0x10) {
        switch (((unsigned char)t0 << 1)) {
            default:
            {
            }
                break;
        }
        t2 = *(signed char *)((a4 + 0x3));
        (((struct o7222_uchar *)(a4))->v) = 0x0;
        (((struct o7221_uchar *)(a4))->v) = 0x0;
        (((struct o7218_uchar *)(a4))->v) = 0x0;
        if ((unsigned char)(*(signed char *)((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0x7C))) == 1) {
            (((struct o7C_uchar *)(((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))->v) = 0x0;
        }
        if ((*(signed char *)((a4 + 0x71BC))) == 2) {
            if ((*(signed char *)((a4 + 0x4))) == 7) {
                return ((int (*)(int, int, int, int))(0xC027B38))(a4, t2, 0xC362E70, 0x0);
            }
            return ((int (*)(int, int, int, int))(0xC027B7C))(a4, t2, 0xC362E70, 0x0);
        }
        if ((unsigned char)(*(signed char *)((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0x4))) == 1) {
            *(unsigned char *)((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0x4)) = 0x0;
            (((struct o7221_uchar *)(a4))->v) = 0x1;
        }
        if ((unsigned char)(*(signed char *)((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xE))) == 1) {
            *(unsigned char *)((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xE)) = 0x0;
            (((struct o7221_uchar *)(a4))->v) = 0x5;
        }
        if ((unsigned char)(*(signed char *)((0x18 + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            (((struct o18_uchar *)(((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))->v) = 0x0;
            (((struct o7221_uchar *)(a4))->v) = 0x7;
        }
        if ((unsigned char)(*(signed char *)((0x22 + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            (((struct o22_uchar *)(((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))->v) = 0x0;
            (((struct o7221_uchar *)(a4))->v) = 0x3;
        }
        if ((unsigned char)(*(signed char *)((0x2C + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            (((struct o2C_uchar *)(((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))->v) = 0x0;
            (((struct o7221_uchar *)(a4))->v) = 0x8;
        }
        if ((unsigned char)(*(signed char *)((0x36 + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            (((struct o36_uchar *)(((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))->v) = 0x0;
            (((struct o7221_uchar *)(a4))->v) = 0x2;
        }
        if ((unsigned char)(*(signed char *)((0x40 + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            (((struct o40_uchar *)(((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))->v) = 0x0;
            (((struct o7221_uchar *)(a4))->v) = 0x6;
        }
        if ((unsigned char)(*(signed char *)((0x4A + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            (((struct o4A_uchar *)(((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))->v) = 0x0;
            (((struct o7221_uchar *)(a4))->v) = 0x4;
        }
        if ((unsigned char)(*(signed char *)((0x54 + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            (((struct o54_uchar *)(((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))->v) = 0x0;
            (((struct o7218_uchar *)(a4))->v) = 0x1;
        }
        if ((unsigned char)(*(signed char *)((0x5E + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            (((struct o5E_uchar *)(((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))->v) = 0x0;
            (((struct o7218_uchar *)(a4))->v) = 0x2;
        }
        if ((unsigned char)(*(signed char *)((0x68 + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            (((struct o68_uchar *)(((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))->v) = 0x0;
            (((struct o7221_uchar *)(a4))->v) = 0x9;
        }
        if ((unsigned char)(*(signed char *)((0x72 + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            (((struct o72_uchar *)(((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))->v) = 0x0;
            (((struct o7218_uchar *)(a4))->v) = 0x3;
        }
        if ((unsigned char)(*(signed char *)((0xA4 + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            *(unsigned char *)(((0x4 + (((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xA0)) + 0x0)) = 0x0;
            (((struct o7222_uchar *)(a4))->v) = 0x1;
            (((struct o7224_uchar *)(a4))->v) = (*(signed char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xA0) + 0x5)));
        }
        if ((unsigned char)(*(signed char *)((0xAE + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            *(unsigned char *)(((0x4 + (((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xAA)) + 0x0)) = 0x0;
            (((struct o7222_uchar *)(a4))->v) = 0x2;
            (((struct o7224_uchar *)(a4))->v) = (*(signed char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xAA) + 0x5)));
        }
        if ((unsigned char)(*(signed char *)((0xB8 + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            *(unsigned char *)(((0x4 + (((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xB4)) + 0x0)) = 0x0;
            (((struct o7222_uchar *)(a4))->v) = 0x3;
            (((struct o7224_uchar *)(a4))->v) = (*(signed char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xB4) + 0x5)));
        }
        if ((unsigned char)(*(signed char *)((0xC2 + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            *(unsigned char *)(((0x4 + (((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xBE)) + 0x0)) = 0x0;
            (((struct o7222_uchar *)(a4))->v) = 0x4;
            (((struct o7224_uchar *)(a4))->v) = (*(signed char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xBE) + 0x5)));
        }
        if ((unsigned char)(*(signed char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xC8) + 0x4))) == 1) {
            *(unsigned char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xC8) + 0x4)) = 0x0;
            (((struct o7222_uchar *)(a4))->v) = 0x5;
            (((struct o7224_uchar *)(a4))->v) = (*(signed char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xC8) + 0x5)));
        }
        if ((unsigned char)(*(signed char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xD2) + 0x4))) == 1) {
            *(unsigned char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xD2) + 0x4)) = 0x0;
            (((struct o7222_uchar *)(a4))->v) = 0x6;
            (((struct o7224_uchar *)(a4))->v) = (*(signed char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xD2) + 0x5)));
        }
        if ((unsigned char)(*(signed char *)((0xE0 + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            *(unsigned char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xDC) + 0x4)) = 0x0;
            (((struct o7222_uchar *)(a4))->v) = 0x7;
            (((struct o7224_uchar *)(a4))->v) = (*(signed char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xDC) + 0x5)));
            return ((int (*)(int, int, int, int))(0xC027B7C))(a4, (((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xDC), 0xC362E70, 0x0);
        }
        return ((int (*)(int, int, int, int))(0xC027B7C))(a4, t2, 0xC362E70, 0x0);
    }
    return (unsigned char)t0;
}

int FUN_0c029660(int a4, int a5, int a6, int a7, float f4)
{
    int stk[5];
    register int t134;
    register int t135;
    register float u145;
    int t2;
    register int t4;
    register float u8;
    register int t14;
    register int t17;
    register int t62;
    register float u65;
    register int t32;
    register float u36;
    register int t42;
    register int t45;
    register int t75;
    register float u79;
    register float u80;
    register int t81;
    register float u85;
    register int t88;
    register int t90;
    register int t93;
    register int t102;
    register int t147;
    register int t149;
    register int t150;
    register float u151;
    register float u152;
    register float u153;
    register int t157;
    register int t177;
    register float u143;
    register float u144;
    register int t113;
    register int t116;
    register int t117;
    register float u124;
    register float u125;
    register float u126;
    register int t68;
    register int t71;
    register float u72;
    register float u73;
    register float u74;
    register int t3;
    register float u6;
    register float u7;
    register float u63;
    register float u64;
    register float u34;
    register float u35;
    register float u83;
    register float u84;
    register float u95;
    register float u104;
    register int t173;
    register float u174;
    register float u175;
    register float u169;
    register float u170;
    register int t163;

    t134 = a4;
    t135 = a5;
    u145 = f4;
    if ((*(signed char *)((a4 + 0x8))) != 0) {
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        t2 = *(signed char *)((a4 + 0x4));
        if ((t2 != 0) && ((t2 != 1) && ((t2 != 2) && ((t2 != 3) && (t2 != 4))))) {
            if (t2 == 5) {
                (((struct oF0_ushort *)(a4))->v) = 0x0;
                (((struct oEE_ushort *)(a4))->v) = 0x0;
                *(unsigned int *)(((int)stk + 12)) = 0xC148ED0;
                *(unsigned int *)(((int)stk + 4)) = 0x0;
                t4 = 0xC148ED0;
                u8 = f4;
                for (;;) {
                    if ((int)(*(int *)(((int)stk + 4))) >= (int)(*(signed char *)((a4 + 0x2DC)))) {
                        break;
                    }
                    t68 = (*(int *)(((int)stk + 4)));
                    *(volatile int *)(((int)stk + 12));
                    t68 = (t68 << 2);
                    t68 = (t68 + (0x2E0 + a4));
                    t68 = (*(int *)((t68 + 0x0)));
                    t3 = t68;
                    t3 = (t3 + 0x4);
                    t14 = ((int (*)(int, float))(FUN_0c0e6fe8))(t4, u8);
                    u7 = (FUN_0c0df940());
                    u7 = (u7 * 255.0f);
                    u6 = 2.14748365e+09f;
                    if (!(u6 > u7)) {
                        u6 = (u6 + u6);
                        u7 = (u7 - u6);
                    }
                    t3 = (int)u7;
                    t17 = FUN_0c0e6f24();
                    *(unsigned int *)(((int)stk + 8)) = ((t17 << 8) << 1);
                    *(unsigned int *)((t68 + 0x18)) = ((t17 << 8) << 1);
                    t4 = (*(int *)(((int)stk + 8)));
                    (((struct o28_float *)(t68))->v) = ((FUN_0c0df4d0(t4)) * 36.0f);
                    t4 = (*(int *)(((int)stk + 8)));
                    (((struct o2C_float *)(t68))->v) = ((FUN_0c0dfa50(t4)) * 36.0f);
                    u7 = (FUN_0c0df940());
                    u7 = (u7 * 255.0f);
                    u6 = 2.14748365e+09f;
                    if (!(u6 > u7)) {
                        u6 = (u6 + u6);
                        u7 = (u7 - u6);
                    }
                    t3 = (int)u7;
                    t4 = ((FUN_0c0e6f24()) << 1);
                    t4 = (t4 + 0x14);
                    t3 = 0x28;
                    t3 = (t3 + t68);
                    u6 = (*(float *)((t3 + 0x0)));
                    u7 = (float)t4;
                    t3 = 0x2C;
                    t3 = (t3 + t68);
                    u8 = u7;
                    u7 = (u7 * u6);
                    u6 = ((((struct o4_float *)(t68))->v));
                    u6 = (u6 - u7);
                    (((struct o4_float *)(t68))->v) = u6;
                    u6 = u8;
                    u8 = (u8 / 50.0f);
                    u7 = (*(float *)((t3 + 0x0)));
                    u6 = (u6 * u7);
                    u7 = ((((struct o8_float *)(t68))->v));
                    u7 = (u7 - u6);
                    (((struct o8_float *)(t68))->v) = u7;
                    u8 = (u8 * 7.5f);
                    (((struct o20_float *)(t68))->v) = u8;
                    (((struct o1C_float *)(t68))->v) = u8;
                    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
                }
                t71 = t4;
                u72 = u6;
                u73 = u7;
                u74 = u8;
            } else {
                t62 = 0xC148ED0;
                u65 = f4;
                if (t2 == 6) {
                    (((struct oF0_ushort *)(a4))->v) = 0x0;
                    (((struct oEE_ushort *)(a4))->v) = 0x0;
                    *(unsigned int *)(((int)stk + 12)) = 0xC148EDC;
                    *(unsigned int *)(((int)stk + 4)) = 0x0;
                    t32 = 0xC148EDC;
                    u36 = f4;
                    for (;;) {
                        if ((int)(*(int *)(((int)stk + 4))) >= (int)(*(signed char *)((a4 + 0x2DC)))) {
                            break;
                        }
                        t68 = (*(int *)(((int)stk + 4)));
                        *(volatile int *)(((int)stk + 12));
                        t68 = (t68 << 2);
                        t68 = (t68 + (0x2E0 + a4));
                        t68 = (*(int *)((t68 + 0x0)));
                        t42 = ((int (*)(int, float))(FUN_0c0e6fe8))(t32, u36);
                        u35 = (FUN_0c0df940());
                        u35 = (u35 * 255.0f);
                        u34 = 2.14748365e+09f;
                        if (!(u34 > u35)) {
                            u34 = (u34 + u34);
                            u35 = (u35 - u34);
                        }
                        t45 = FUN_0c0e6f24();
                        *(unsigned int *)(((int)stk + 8)) = ((t45 << 8) << 1);
                        *(unsigned int *)((t68 + 0x18)) = ((t45 << 8) << 1);
                        t32 = (*(int *)(((int)stk + 8)));
                        (((struct o28_float *)(t68))->v) = ((FUN_0c0df4d0(t32)) * 36.0f);
                        t32 = (*(int *)(((int)stk + 8)));
                        (((struct o2C_float *)(t68))->v) = ((FUN_0c0dfa50(t32)) * 36.0f);
                        u35 = (FUN_0c0df940());
                        u35 = (u35 * 255.0f);
                        u34 = 2.14748365e+09f;
                        if (!(u34 > u35)) {
                            u34 = (u34 + u34);
                            u35 = (u35 - u34);
                        }
                        t32 = (FUN_0c0e6f24());
                        t32 = (t32 << 1);
                        u34 = ((((struct o28_float *)(t68))->v));
                        u35 = (float)(-t32);
                        u36 = u35;
                        u35 = (u35 * u34);
                        (((struct o4_float *)(t68))->v) = u35;
                        u35 = ((((struct o2C_float *)(t68))->v));
                        u36 = (u36 * u35);
                        u35 = (float)t32;
                        (((struct o8_float *)(t68))->v) = u36;
                        u35 = (u35 / 50.0f);
                        u35 = (u35 * 7.5f);
                        u35 = (-u35);
                        (((struct o20_float *)(t68))->v) = u35;
                        (((struct o1C_float *)(t68))->v) = u35;
                        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
                    }
                    t62 = t32;
                    u63 = u34;
                    u64 = u35;
                    u65 = u36;
                }
                t71 = t62;
                u72 = u63;
                u73 = u64;
                u74 = u65;
            }
            t113 = t68;
            t116 = t71;
            t117 = a5;
            u124 = u72;
            u125 = u73;
            u126 = u74;
        } else {
            (((struct oF0_ushort *)(a4))->v) = 0x0;
            (((struct oEE_ushort *)(a4))->v) = 0x0;
            t75 = *(signed char *)((a4 + 0x4));
            *(unsigned int *)(((int)stk + 4)) = ((signed char)(((t75 << 1) + t75) << 2) + 0xC148E1C);
            *(unsigned int *)(((int)stk + 8)) = (*(int *)((((signed char)t75 << 2) + 0xC148E94)));
            u79 = (((struct o4_float *)(((((signed char)t75 << 2) << 1) + 0xC148EA8)))->v);
            u80 = *(float *)((((((signed char)t75 << 2) << 1) + 0xC148EA8) + 0x0));
            *(float *)(((int)stk + 16)) = (u79 * 10.0f);
            t81 = 0x0;
            u85 = (u79 * 10.0f);
            for (;;) {
                if ((int)t81 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
                    break;
                }
                t113 = t81;
                t113 = (t113 << 2);
                t113 = (t113 + (0x2E0 + a4));
                t113 = (*(int *)((t113 + 0x0)));
                t88 = ((int (*)(int, int, float))(FUN_0c0e6fe8))(t75, ((((signed char)t75 << 2) << 1) + 0xC148EA8), 10.0f);
                *(volatile int *)(((int)stk + 4));
                t90 = ((int (*)(void))(FUN_0c0e6fe8))();
                *(int *)((int)stk + 0) = (0x4 + t113);
                u85 = (FUN_0c0df940());
                u85 = (u85 * 255.0f);
                u84 = 2.14748365e+09f;
                if (!(u84 > u85)) {
                    u84 = (u84 + u84);
                    u85 = (u85 - u84);
                }
                t93 = FUN_0c0e6f24();
                u85 = (float)t93;
                if ((int)t93 < 0) {
                    u84 = 4.2949673e+09f;
                    u85 = (u85 + u84);
                    u95 = u84;
                }
                u84 = u95;
                u85 = (u85 * u80);
                u84 = ((((struct o4_float *)(t113))->v));
                u85 = (u85 - ((u80 * 10.0f)));
                u84 = (u84 + u85);
                (((struct o4_float *)(t113))->v) = u84;
                *(int *)((int)stk + 0) = (0x8 + t113);
                u85 = (FUN_0c0df940());
                u85 = (u85 * 255.0f);
                u84 = 2.14748365e+09f;
                if (!(u84 > u85)) {
                    u84 = (u84 + u84);
                    u85 = (u85 - u84);
                }
                t102 = FUN_0c0e6f24();
                u85 = (float)t102;
                if ((int)t102 < 0) {
                    u84 = 4.2949673e+09f;
                    u85 = (u85 + u84);
                    u104 = u84;
                }
                u84 = u104;
                u85 = (u85 * u79);
                u84 = (*(float *)(((int)stk + 16)));
                t81 = (t81 + 0x1);
                u85 = (u85 - u84);
                u83 = ((((struct o8_float *)(t113))->v));
                u83 = (u83 + u85);
                (((struct o8_float *)(t113))->v) = u83;
                *(unsigned int *)((t113 + 0x18)) = (*(int *)(((int)stk + 8)));
            }
            t116 = t75;
            t117 = ((((signed char)t75 << 2) << 1) + 0xC148EA8);
            u124 = u84;
            u125 = u85;
            u126 = 10.0f;
        }
        t150 = t113;
        t134 = t116;
        t135 = t117;
        u143 = u124;
        u144 = u125;
        u145 = u126;
    }
    t147 = t134;
    t149 = 0x0;
    u151 = u143;
    u152 = u144;
    u153 = u145;
    for (;;) {
        if ((int)t149 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        t150 = t149;
        t150 = (t150 << 2);
        t150 = (t150 + (0x2E0 + a4));
        t150 = (*(int *)((t150 + 0x0)));
        t147 = t150;
        t147 = (t147 + 0x4);
        FUN_0c062050(t147, (t150 + 0x4), (t150 + 0x28));
        u153 = 0.149999991f;
        t157 = *(signed char *)((a4 + 0x4));
        if (t157 == 5) {
            u151 = 0.0f;
            u152 = ((((struct o1C_float *)(t150))->v));
            u152 = (u152 - u153);
            (((struct o1C_float *)(t150))->v) = u152;
            if (!(u152 > u151)) {
                u153 = u151;
                (((struct o1C_float *)(t150))->v) = u153;
            }
            u152 = ((((struct o1C_float *)(t150))->v));
            (((struct o20_float *)(t150))->v) = u152;
            u174 = u151;
            u175 = u152;
        } else {
            if (t157 == 6) {
                u151 = 0.0f;
                u152 = ((((struct o1C_float *)(t150))->v));
                u152 = (u152 + u153);
                (((struct o1C_float *)(t150))->v) = u152;
                if (!(u152 > u151)) {
                    *(unsigned char *)((t150 + 0x0)) = 0x0;
                } else {
                    t147 = 0x1;
                    *(unsigned char *)((t150 + 0x0)) = t147;
                    t163 = t147;
                }
                t147 = t163;
                u152 = ((((struct o1C_float *)(t150))->v));
                (((struct o20_float *)(t150))->v) = u152;
                t173 = t147;
                u169 = u151;
                u170 = u152;
            }
            u174 = u169;
            u175 = u170;
        }
        u151 = u174;
        u152 = u175;
        t149 = (t149 + 0x1);
        t147 = t173;
    }
    t177 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t177 - 1);
    if ((int)(short)(t177 - 1) <= 0) {
        return FUN_0c059330(a4, t135, a6, a7);
    }
    return 0xEC;
}

int FUN_0c02e4d0(int a4, int a5, int a6, int a7)
{
    int stk[16];
    register int t2;
    register int t4;
    register int t14;
    register int t20;
    register float u21;
    register float u22;
    register float u23;
    register int t28;
    register int t29;
    register float u30;
    register float u31;
    register int t34;
    register int t44;
    register int t62;
    register int t68;
    register float u69;
    register float u70;
    register float u71;
    register int t76;
    register int t77;
    register float u78;
    register float u79;
    register int t82;
    register int t92;
    register int t103;
    register int t110;
    register float t120;
    register int t123;
    register int t129;
    register int t136;
    register int t138;
    register int t139;
    register float t154;
    register int t157;
    register int t159;
    register int t160;
    register float u162;
    register int t164;
    int t168;
    register int t172;
    register int t173;
    register float u175;
    register int t180;
    register int t194;
    register int t196;
    register int t201;
    int t158;
    register float u161;
    register int t169;
    register int t170;
    register int t171;
    register float u174;
    register int t182;
    register int t183;
    register int t184;
    register int t185;
    register float u186;
    register float u187;

    if ((*(signed char *)((((unsigned short)((unsigned short)(*(signed char *)(((a4 + 0x2C) + 0x1))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4))) == 10) {
        return ((int (*)(int, int, int, int))(0xC02E982))(a4, 0xC7E40C4, a6, a7);
    }
    t2 = *(signed char *)(((a4 + 0x2C) + 0x0));
    if (t2 != 0) {
        if (t2 == 1) {
            t4 = *(signed char *)(((a4 + 0x2C) + 0x2));
            if (t4 != 0) {
                if (t4 != 1) {
                    if (t4 == 2) {
                        return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
                    }
                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
                }
                if ((*(int *)0xC7F3028) == 0) {
                    *(unsigned int *)(((a4 + 0x2C) + 0x4)) = ((*(int *)(((a4 + 0x2C) + 0x4))) + 0x800);
                }
                if ((*(int *)0xC7F3028) != 0) {
                    *(unsigned char *)(((a4 + 0x2C) + 0xC)) = ((*(signed char *)(((a4 + 0x2C) + 0xC))) + 0x1);
                }
                t14 = *(signed char *)(((a4 + 0x2C) + 0xC));
                *(unsigned char *)(((a4 + 0x2C) + 0xC)) = (t14 - 1);
                if ((signed char)(t14 - 1) == 0) {
                    *(unsigned char *)(((a4 + 0x2C) + 0xC)) = 0x2;
                    *(unsigned char *)(((a4 + 0x2C) + 0xE)) = ((*(signed char *)(((a4 + 0x2C) + 0xE))) ^ 0x1);
                }
                *(float *)(((int)stk + 28)) = 1.0f;
                *(float *)(((int)stk + 24)) = 1.0f;
                *(float *)(((int)stk + 52)) = ((((struct o8_float *)((a4 + 0x2C)))->v));
                *(float *)(((int)stk + 20)) = 7.69999886f;
                *(float *)(((int)stk + 16)) = ((*(float *)0xC366A78) + 436.0f);
                t20 = *(signed char *)(((a4 + 0x2C) + 0x1));
                u21 = (((struct o14_float *)(a4))->v);
                u22 = *(float *)(((t20 << 2) + 0xC149398));
                u23 = *(float *)(((0xC366A7C + (t20 << 2)) + 0x0));
                *(float *)(((int)stk + 12)) = (((u22 - u21) + u23) + 16.0f);
                *(unsigned int *)(((int)stk + 48)) = 0x0;
                t28 = *(signed char *)(((a4 + 0x2C) + 0xE));
                if (t28 != 0) {
                    *(unsigned int *)(((int)stk + 48)) = (*(int *)(((a4 + 0x2C) + 0x4)));
                }
                *(unsigned int *)(((int)stk + 60)) = 0xA;
                t29 = 0x3;
                u30 = (((u22 - u21) + u23) + 16.0f);
                u31 = u23;
                for (;;) {
                    if (t29 == 0) {
                        break;
                    }
                    *(int *)((int)stk + 4) = 0x0;
                    t28 = (*(signed char *)(((a4 + 0x2C) + 0x1)));
                    t34 = t28;
                    *(int *)((int)stk + 0) = t34;
                    t28 = (*(signed char *)(((a4 + 0x2C) + 0xE)));
                    t28 = (FUN_0c027fa4((((int)stk + 0) + 0x8), 0xC17FDB0, 0x4, t28, t34, 0x0));
                    t28 = 0x14;
                    u31 = (*(float *)((a4 + t28)));
                    t28 = 0x4;
                    u30 = (*(float *)((((int)stk + 8) + t28)));
                    t28 = 0x4;
                    t29 = (t29 - 1);
                    u30 = (u30 + u31);
                    *(float *)((((int)stk + 8) + t28)) = u30;
                }
                if ((*(int *)0xC7F3028) != 0) {
                    *(unsigned char *)(((a4 + 0x2C) + 0xF)) = ((*(signed char *)(((a4 + 0x2C) + 0xF))) + 0x1);
                }
                t44 = *(signed char *)(((a4 + 0x2C) + 0xF));
                *(unsigned char *)(((a4 + 0x2C) + 0xF)) = (t44 - 1);
                if ((int)(signed char)(t44 - 1) <= (int)0x14) {
                    (((struct o8_float *)((a4 + 0x2C)))->v) = ((float)(*(signed char *)(((a4 + 0x2C) + 0xF))) / 20.0f);
                }
                if (((((struct o8_float *)((a4 + 0x2C)))->v)) == 0.0f) {
                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E97C))(0xC366A70, (t20 << 2), 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
                }
                return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, (t20 << 2), 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
            }
            *(unsigned char *)(((a4 + 0x2C) + 0x2)) = ((*(signed char *)(((a4 + 0x2C) + 0x2))) + 0x1);
            *(unsigned char *)(((a4 + 0x2C) + 0xC)) = 0x2;
            (((struct o8_float *)((a4 + 0x2C)))->v) = 1.0f;
            *(unsigned int *)(((a4 + 0x2C) + 0x4)) = 0x0;
            *(unsigned char *)(((a4 + 0x2C) + 0xE)) = 0x0;
            *(unsigned char *)(((a4 + 0x2C) + 0xF)) = 0x50;
            if ((*(int *)0xC7F3028) == 0) {
                *(unsigned int *)(((a4 + 0x2C) + 0x4)) = ((*(int *)(((a4 + 0x2C) + 0x4))) + 0x800);
            }
            if ((*(int *)0xC7F3028) != 0) {
                *(unsigned char *)(((a4 + 0x2C) + 0xC)) = ((*(signed char *)(((a4 + 0x2C) + 0xC))) + 0x1);
            }
            t62 = *(signed char *)(((a4 + 0x2C) + 0xC));
            *(unsigned char *)(((a4 + 0x2C) + 0xC)) = (t62 - 1);
            if ((signed char)(t62 - 1) == 0) {
                *(unsigned char *)(((a4 + 0x2C) + 0xC)) = 0x2;
                *(unsigned char *)(((a4 + 0x2C) + 0xE)) = ((*(signed char *)(((a4 + 0x2C) + 0xE))) ^ 0x1);
            }
            *(float *)(((int)stk + 28)) = 1.0f;
            *(float *)(((int)stk + 24)) = 1.0f;
            *(float *)(((int)stk + 52)) = ((((struct o8_float *)((a4 + 0x2C)))->v));
            *(float *)(((int)stk + 20)) = 7.69999886f;
            *(float *)(((int)stk + 16)) = ((*(float *)0xC366A78) + 436.0f);
            t68 = *(signed char *)(((a4 + 0x2C) + 0x1));
            u69 = (((struct o14_float *)(a4))->v);
            u70 = *(float *)(((t68 << 2) + 0xC149398));
            u71 = *(float *)(((0xC366A7C + (t68 << 2)) + 0x0));
            *(float *)(((int)stk + 12)) = (((u70 - u69) + u71) + 16.0f);
            *(unsigned int *)(((int)stk + 48)) = 0x0;
            t76 = *(signed char *)(((a4 + 0x2C) + 0xE));
            if (t76 != 0) {
                *(unsigned int *)(((int)stk + 48)) = (*(int *)(((a4 + 0x2C) + 0x4)));
            }
            *(unsigned int *)(((int)stk + 60)) = 0xA;
            t77 = 0x3;
            u78 = (((u70 - u69) + u71) + 16.0f);
            u79 = u71;
            for (;;) {
                if (t77 == 0) {
                    break;
                }
                *(int *)((int)stk + 4) = 0x0;
                t76 = (*(signed char *)(((a4 + 0x2C) + 0x1)));
                t82 = t76;
                *(int *)((int)stk + 0) = t82;
                t76 = (*(signed char *)(((a4 + 0x2C) + 0xE)));
                t76 = (FUN_0c027fa4((((int)stk + 0) + 0x8), 0xC17FDB0, 0x4, t76, t82, 0x0));
                t76 = 0x14;
                u79 = (*(float *)((a4 + t76)));
                t76 = 0x4;
                u78 = (*(float *)((((int)stk + 8) + t76)));
                t76 = 0x4;
                t77 = (t77 - 1);
                u78 = (u78 + u79);
                *(float *)((((int)stk + 8) + t76)) = u78;
            }
            if ((*(int *)0xC7F3028) != 0) {
                *(unsigned char *)(((a4 + 0x2C) + 0xF)) = ((*(signed char *)(((a4 + 0x2C) + 0xF))) + 0x1);
            }
            t92 = *(signed char *)(((a4 + 0x2C) + 0xF));
            *(unsigned char *)(((a4 + 0x2C) + 0xF)) = (t92 - 1);
            if ((int)(signed char)(t92 - 1) <= (int)0x14) {
                (((struct o8_float *)((a4 + 0x2C)))->v) = ((float)(*(signed char *)(((a4 + 0x2C) + 0xF))) / 20.0f);
            }
            if (((((struct o8_float *)((a4 + 0x2C)))->v)) == 0.0f) {
                return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E97C))(0xC366A70, (t68 << 2), 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
            }
            return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, (t68 << 2), 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
        }
        if (t2 == 2) {
            if ((*(signed char *)((a4 + 0x1E))) == 0) {
                *(unsigned char *)(((a4 + 0x2C) + 0x2)) = 0x3;
            }
            t103 = *(signed char *)(((a4 + 0x2C) + 0x2));
            if (t103 != 0) {
                if (t103 != 1) {
                    if (t103 != 2) {
                        if (t103 == 3) {
                            return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
                        }
                        return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
                    }
                    *(unsigned int *)(((int)stk + 48)) = 0x0;
                    *(unsigned int *)(((int)stk + 60)) = 0x5;
                    *(float *)(((int)stk + 28)) = 1.0f;
                    *(float *)(((int)stk + 24)) = 1.0f;
                    *(float *)(((int)stk + 12)) = ((((((struct o18_float *)(a4))->v)) + (*(float *)((0xC366A7C + ((*(signed char *)((a4 + 0x1))) << 2))))) + -16.0f);
                    *(float *)(((int)stk + 16)) = ((*(float *)0xC366A78) + 424.0f);
                    *(float *)(((int)stk + 20)) = 8.19999886f;
                    *(volatile short *)(((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0) + 0xC7EB2B8));
                    t110 = FUN_0c0e6d00();
                    if ((*(int *)0xC7F3028) == 0) {
                        *(unsigned int *)(((a4 + 0x2C) + 0x4)) = ((*(int *)(((a4 + 0x2C) + 0x4))) + (*(int *)(((t110 << 2) + 0xC1493A8))));
                    }
                    t120 = FUN_0c0dfa50((*(int *)(((a4 + 0x2C) + 0x4))));
                    *(float *)(((int)stk + 52)) = t120;
                    if (!(t120 > 0.0f)) {
                        *(unsigned char *)(((a4 + 0x2C) + 0x2)) = 0x1;
                        *(unsigned char *)(((0xC + (a4 + 0x2C)) + 0x0)) = (*(signed char *)((t110 + 0xC1493BC)));
                        return ((int (*)(void))(0xC02E982))();
                    }
                    *(int *)((int)stk + 4) = 0x0;
                    t123 = (*(signed char *)((a4 + 0x1)));
                    *(int *)((int)stk + 0) = t123;
                    FUN_0c027fa4((((int)stk + 0) + 0x8), 0xC17FDB0, 0x4, 0x4, t123, 0x0);
                    return ((int (*)(void))(0xC02E91A))();
                }
                if ((*(int *)0xC7F3028) != 0) {
                    *(unsigned char *)(((a4 + 0x2C) + 0xC)) = ((*(signed char *)(((a4 + 0x2C) + 0xC))) + 0x1);
                }
                t129 = *(signed char *)(((a4 + 0x2C) + 0xC));
                *(unsigned char *)(((a4 + 0x2C) + 0xC)) = (t129 - 1);
                if ((signed char)(t129 - 1) != 0) {
                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
                }
            } else {
                *(unsigned char *)(((a4 + 0x2C) + 0x2)) = ((*(signed char *)(((a4 + 0x2C) + 0x2))) + 0x1);
                *(unsigned char *)(((a4 + 0x2C) + 0xC)) = 0x28;
                if ((*(int *)0xC7F3028) != 0) {
                    *(unsigned char *)(((a4 + 0x2C) + 0xC)) = ((*(signed char *)(((a4 + 0x2C) + 0xC))) + 0x1);
                }
                t136 = *(signed char *)(((a4 + 0x2C) + 0xC));
                *(unsigned char *)(((a4 + 0x2C) + 0xC)) = (t136 - 1);
                if ((signed char)(t136 - 1) != 0) {
                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
                }
            }
            *(unsigned char *)(((a4 + 0x2C) + 0x2)) = ((*(signed char *)(((a4 + 0x2C) + 0x2))) + 0x1);
            (((struct o8_float *)((a4 + 0x2C)))->v) = 0.0f;
            *(unsigned int *)(((a4 + 0x2C) + 0x4)) = 0x0;
            return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
        }
        if (t2 == 3) {
            return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E948))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
        }
        return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
    }
    t138 = *(signed char *)(((a4 + 0x2C) + 0x2));
    if (t138 != 0) {
        if (t138 != 1) {
            if (t138 != 2) {
                return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
            }
            t139 = *(signed char *)((a4 + 0x1));
            if ((int)(*(signed char *)(((0xC7E40C4 + (unsigned short)((unsigned short)t139 * (unsigned short)0x72D0)) + 0x7230))) < (int)0x2) {
                *(unsigned char *)(((a4 + 0x2C) + 0x2)) = 0x0;
                return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, (0xC7E40C4 + (unsigned short)((unsigned short)t139 * (unsigned short)0x72D0)), 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
            }
            if ((*(int *)0xC7F3028) == 0) {
                *(unsigned int *)(((a4 + 0x2C) + 0x4)) = ((*(int *)(((a4 + 0x2C) + 0x4))) + 0x400);
            }
            *(float *)(((int)stk + 28)) = 1.0f;
            *(float *)(((int)stk + 24)) = 1.0f;
            *(float *)(((int)stk + 20)) = 7.69999886f;
            *(float *)(((int)stk + 16)) = ((*(float *)0xC366A78) + 436.0f);
            *(float *)(((int)stk + 12)) = ((((*(float *)((0xC149398 + ((*(signed char *)(((a4 + 0x2C) + 0x1))) << 2)))) - ((((struct o14_float *)(a4))->v))) + (*(float *)(((((*(signed char *)((a4 + 0x1))) << 2) + 0xC366A7C) + 0x0)))) + 16.0f);
            *(unsigned int *)(((int)stk + 48)) = 0x0;
            *(unsigned int *)(((int)stk + 60)) = 0xA;
            t154 = FUN_0c0dfa50((*(int *)(((a4 + 0x2C) + 0x4))));
            *(float *)(((int)stk + 52)) = t154;
            if (!(t154 > 0.0f)) {
                *(unsigned char *)(((a4 + 0x2C) + 0x2)) = 0x1;
                *(unsigned char *)(((a4 + 0x2C) + 0xC)) = 0x1E;
            }
            t157 = *(signed char *)0xC7F4755;
            if ((t157 != 0) && (t158 = *(signed char *)0xC7F4765, t158 != 0)) {
                t159 = 0x15;
                t160 = 0x2;
                u162 = 0.0f;
                for (;;) {
                    if (t160 == 0) {
                        break;
                    }
                    *(int *)((int)stk + 4) = 0x0;
                    t159 = (*(signed char *)(((a4 + 0x2C) + 0x1)));
                    t164 = t159;
                    *(int *)((int)stk + 0) = t164;
                    t159 = (FUN_0c027fa4((((int)stk + 0) + 0x8), 0xC17FDB0, 0x4, 0x1, t164, 0x0));
                    t159 = 0x14;
                    u162 = (*(float *)((a4 + t159)));
                    t159 = 0x4;
                    u161 = (*(float *)((((int)stk + 8) + t159)));
                    t159 = 0x4;
                    t160 = (t160 - 1);
                    u161 = (u161 + u162);
                    *(float *)((((int)stk + 8) + t159)) = u161;
                }
                return ((int (*)(int, int, int, int))(0xC02E982))(0xC7F4750, a5, a6, a7);
            }
            t168 = t157;
            t172 = 0xC7F4750;
            t173 = 0x0;
            u175 = 0.0f;
            for (;;) {
                if ((int)t173 >= (int)0x3) {
                    break;
                }
                t171 = 0x72D0;
                t168 = (*(signed char *)((a4 + 0x1)));
                t169 = 0xC7EB2F5;
                t168 = ((unsigned short)t168 * (unsigned short)t171);
                t168 = (unsigned short)t168;
                t170 = (*(signed char *)((t169 + t168)));
                t168 = 0x1;
                t168 = ((int)t168 << (int)t173);
                if ((t170 & t168) != 0) {
                    *(int *)((int)stk + 4) = 0x0;
                    t168 = (*(signed char *)(((a4 + 0x2C) + 0x1)));
                    t180 = t168;
                    *(int *)((int)stk + 0) = t180;
                    t172 = ((int)stk + 0);
                    t172 = (t172 + 0x8);
                    t168 = (FUN_0c027fa4(t172, 0xC17FDB0, 0x4, 0x1, t180, 0x0));
                } else {
                    t182 = t169;
                    t183 = t170;
                    t184 = t171;
                    t185 = t172;
                    u186 = u174;
                    u187 = u175;
                }
                u174 = u186;
                u175 = u187;
                t168 = 0x14;
                t169 = t182;
                t170 = t183;
                t171 = t184;
                t172 = t185;
                u175 = (*(float *)((a4 + t168)));
                t168 = 0x4;
                u174 = (*(float *)((((int)stk + 8) + t168)));
                t168 = 0x4;
                t173 = (t173 + 0x1);
                u174 = (u174 + u175);
                *(float *)((((int)stk + 8) + t168)) = u174;
            }
            return ((int (*)(int, int, int, int))(0xC02E982))(t172, a5, a6, a7);
        }
        if ((int)(*(signed char *)((0xC7EB2F4 + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0)))) >= (int)0x2) {
            t194 = *(signed char *)(((a4 + 0x2C) + 0xC));
            *(unsigned char *)(((a4 + 0x2C) + 0xC)) = (t194 - 1);
            if ((signed char)(t194 - 1) != 0) {
                return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
            }
            *(unsigned char *)(((a4 + 0x2C) + 0x2)) = ((*(signed char *)(((a4 + 0x2C) + 0x2))) + 0x1);
            (((struct o8_float *)((a4 + 0x2C)))->v) = 0.0f;
            *(unsigned int *)(((a4 + 0x2C) + 0x4)) = 0x0;
            return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
        }
        *(unsigned char *)(((a4 + 0x2C) + 0x2)) = 0x0;
        return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
    }
    t196 = *(signed char *)((a4 + 0x1));
    if ((int)(*(signed char *)(((0xC7E40C4 + (unsigned short)((unsigned short)t196 * (unsigned short)0x72D0)) + 0x7230))) < (int)0x2) {
        return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, (0xC7E40C4 + (unsigned short)((unsigned short)t196 * (unsigned short)0x72D0)), 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
    }
    *(unsigned char *)(((a4 + 0x2C) + 0x2)) = ((*(signed char *)(((a4 + 0x2C) + 0x2))) + 0x1);
    *(unsigned char *)(((a4 + 0x2C) + 0xC)) = 0x1;
    if ((int)(*(signed char *)((0xC7EB2F4 + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0)))) >= (int)0x2) {
        t201 = *(signed char *)(((a4 + 0x2C) + 0xC));
        *(unsigned char *)(((a4 + 0x2C) + 0xC)) = (t201 - 1);
        if ((signed char)(t201 - 1) != 0) {
            return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, (0xC7E40C4 + (unsigned short)((unsigned short)t196 * (unsigned short)0x72D0)), 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
        }
        *(unsigned char *)(((a4 + 0x2C) + 0x2)) = ((*(signed char *)(((a4 + 0x2C) + 0x2))) + 0x1);
        (((struct o8_float *)((a4 + 0x2C)))->v) = 0.0f;
        *(unsigned int *)(((a4 + 0x2C) + 0x4)) = 0x0;
        return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, (0xC7E40C4 + (unsigned short)((unsigned short)t196 * (unsigned short)0x72D0)), 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
    }
    *(unsigned char *)(((a4 + 0x2C) + 0x2)) = 0x0;
    return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, (0xC7E40C4 + (unsigned short)((unsigned short)t196 * (unsigned short)0x72D0)), 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
}

int FUN_0c06c124(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return FUN_0c06c0f8(a4);
                    }
                    return ((int (*)(int, int, int, int))(0xC06BF90))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC06BE98))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC06BE24))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC06BD5E))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC06BCCC))(a4, a5, a6, a7);
}
