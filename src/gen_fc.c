/* Straight-line functions with calls and guards (batch gen_fc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o80_int { char p[0x80]; int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o9C_int { char p[0x9C]; int v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c0101f0(int);
int FUN_0c010b10(int);
int FUN_0c01dc58(void);
int FUN_0c01dd08(int, int, int);
int FUN_0c01e156(int, int, int);
extern int FUN_0c01e264();
int FUN_0c01e65e(int, int, int);
int FUN_0c01e6b4(int);
int FUN_0c01e75e(int, int);
int FUN_0c02114c(int, float, float, float, float);
float FUN_0c0211d0(float, float, float, float, float, float, float);
int FUN_0c0555dc(void);
int FUN_0c059330(int);
int FUN_0c062050(int, int, int);
int FUN_0c0622c6(int, int, int);
int FUN_0c062954(int, int);
int FUN_0c06297a(void);
int FUN_0c062a7e(int);
int FUN_0c062abe(int);
int FUN_0c06b87a(int);
int FUN_0c06ba00(int);
int FUN_0c06bc54(int);
int FUN_0c0a3796(int, int);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
extern int FUN_0c0e6e5c();
int buFindExecFile(int, int);
int buGetDiskFree(int, int);
int buIsExistFile(int, int);
int FUN_0c02180c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c01d336(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c0165cc(int a4, int a5, int a6);
int FUN_0c0bea16(int a4);
int FUN_0c01025c(int a4, int a5, int a6, int a7);
int FUN_0c059d7e(int a4, int a5, int a6, int a7);
int FUN_0c06bc80(int a4, int a5, int a6, int a7);

int FUN_0c02180c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[10];
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
    register int t34;
    register float u45;
    register float u155;
    register float u224;
    register float u274;
    register float u278;
    register float u312;
    register float u316;
    register float u328;
    register float u332;
    register float u366;
    register float u370;
    int t39;
    float u47;
    register float u124;
    register float u136;
    register float u144;
    register float u152;
    float u156;
    register float u193;
    register float u205;
    register float u213;
    register float u221;
    register float u252;
    register float u260;
    register float u289;
    register float u306;
    register float u340;
    register float u348;
    register float u378;
    register float u386;

    u0 = *(float *)((a6 + 0x0));
    u1 = *(float *)((a7 + 0x0));
    u2 = (((struct oC_float *)(a7))->v);
    u3 = (((struct oC_float *)(a6))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = (u1 - u0);
    }
    (((struct o1C_float *)(((int)stk + 0)))->v) = ((u3 + u2) - u4);
    u6 = (((struct oC_float *)(a7))->v);
    u7 = (((struct o14_float *)(a6))->v);
    u8 = (((struct o8_float *)(a6))->v);
    u9 = (((struct o8_float *)(a7))->v);
    u10 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u10 = (u9 - u8);
    }
    (((struct o8_float *)((((int)stk + 0) + 0x1C)))->v) = ((u7 + u6) - u10);
    u12 = (((struct o4_float *)(a7))->v);
    *(float *)(((int)stk + 8)) = u12;
    u13 = (((struct o10_float *)(a7))->v);
    *(float *)(((int)stk + 4)) = u13;
    u14 = *(float *)(((int)stk + 8));
    u15 = (((struct o4_float *)(a6))->v);
    *(float *)(((int)stk + 0)) = u15;
    u16 = (((struct o10_float *)(a6))->v);
    *(float *)(((int)stk + 12)) = u16;
    (((struct o4_float *)((((int)stk + 0) + 0x1C)))->v) = (FUN_0c0211d0((u16 + (*(float *)(((int)stk + 0)))), (u15 - u16), (u13 + u14), (u12 - u13), f8, f9, f10));
    if (0.0f > ((((struct o1C_float *)(((int)stk + 0)))->v))) {
        return 0x0;
    }
    if (0.0f > ((((struct o8_float *)((((int)stk + 0) + 0x1C)))->v))) {
        return 0x0;
    }
    if (0.0f > ((((struct o4_float *)((((int)stk + 0) + 0x1C)))->v))) {
        return 0x0;
    }
    t34 = *(signed char *)((a4 + 0x2D9));
    if ((signed char)t34 == 2) {
        return ((int (*)(int, int, int, int))(0xC021CA6))(t34, a5, a6, a7);
    }
    if ((*(signed char *)((a5 + 0x2D9))) == 2) {
        return ((int (*)(int, int, int, int))(0xC021CA6))(t34, a5, a6, a7);
    }
    if (((signed char)t34 != 0) && (t39 = *(signed char *)((a5 + 0x2D9)), t39 != 0)) {
        return ((int (*)(int, int, int, int))(0xC021CA6))(t34, a5, a6, a7);
    }
    FUN_0c02114c((((int)stk + 0) + 0x10), (*(float *)((a6 + 0x0))), ((((struct o8_float *)(a6))->v)), (*(float *)((a7 + 0x0))), ((((struct o8_float *)(a7))->v)));
    u45 = (((struct o1C_float *)(((int)stk + 0)))->v);
    if (!(u45 > ((((struct o4_float *)((((int)stk + 0) + 0x1C)))->v))) && (u47 = (((struct o8_float *)((((int)stk + 0) + 0x1C)))->v), !(u45 > u47))) {
        if ((*(signed char *)((a4 + 0x2D9))) != 0) {
            if ((*(float *)((a6 + 0x0))) > (*(float *)((a7 + 0x0)))) {
                u124 = (-((((struct o1C_float *)(((int)stk + 0)))->v)));
            } else {
                u124 = ((((struct o1C_float *)(((int)stk + 0)))->v));
            }
            (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + u124);
            return ((int (*)(float, float))(0xC021CA6))(u45, u45);
        }
        if ((*(signed char *)((a5 + 0x2D9))) != 0) {
            if ((*(float *)((a7 + 0x0))) > (*(float *)((a6 + 0x0)))) {
                u136 = (-((((struct o1C_float *)(((int)stk + 0)))->v)));
            } else {
                u136 = ((((struct o1C_float *)(((int)stk + 0)))->v));
            }
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + u136);
            return ((int (*)(float, float))(0xC021CA6))(u45, u45);
        }
        if ((*(float *)((a7 + 0x0))) > (*(float *)((a6 + 0x0)))) {
            u144 = (-((((struct o1C_float *)(((int)stk + 0)))->v)));
        } else {
            u144 = ((((struct o1C_float *)(((int)stk + 0)))->v));
        }
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + (u144 / 2.0f));
        if ((*(float *)((a6 + 0x0))) > (*(float *)((a7 + 0x0)))) {
            u152 = (-((((struct o1C_float *)(((int)stk + 0)))->v)));
        } else {
            u152 = ((((struct o1C_float *)(((int)stk + 0)))->v));
        }
        (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + (u152 / 2.0f));
        return ((int (*)(float, float))(0xC021CA6))(u45, u45);
    }
    u155 = (((struct o8_float *)((((int)stk + 0) + 0x1C)))->v);
    if ((u45 > u155) && (u156 = (((struct o4_float *)((((int)stk + 0) + 0x1C)))->v), u156 > u155)) {
        if ((*(signed char *)((a4 + 0x2D9))) != 0) {
            if (((((struct o8_float *)(a6))->v)) > ((((struct o8_float *)(a7))->v))) {
                u193 = (-((((struct o24_float *)(((int)stk + 0)))->v)));
            } else {
                u193 = ((((struct o24_float *)(((int)stk + 0)))->v));
            }
            (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + u193);
            return ((int (*)(float, float))(0xC021CA6))(u45, u45);
        }
        if ((*(signed char *)((a5 + 0x2D9))) != 0) {
            if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
                u205 = (-((((struct o24_float *)(((int)stk + 0)))->v)));
            } else {
                u205 = ((((struct o24_float *)(((int)stk + 0)))->v));
            }
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + u205);
            return ((int (*)(float, float))(0xC021CA6))(u45, u45);
        }
        if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
            u213 = (-((((struct o24_float *)(((int)stk + 0)))->v)));
        } else {
            u213 = ((((struct o24_float *)(((int)stk + 0)))->v));
        }
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (u213 / 2.0f));
        if (((((struct o8_float *)(a6))->v)) > ((((struct o8_float *)(a7))->v))) {
            u221 = (-((((struct o24_float *)(((int)stk + 0)))->v)));
        } else {
            u221 = ((((struct o24_float *)(((int)stk + 0)))->v));
        }
        (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + (u221 / 2.0f));
        return ((int (*)(float, float))(0xC021CA6))(u45, u45);
    }
    u224 = (((struct o4_float *)((((int)stk + 0) + 0x1C)))->v);
    if (u224 > u45) {
        return ((int (*)(float, float))(0xC021CA6))(u45, u45);
    }
    if (u224 > u155) {
        return ((int (*)(float, float))(0xC021CA6))(u45, u45);
    }
    if (((((struct o4_float *)(a6))->v)) > ((((struct o4_float *)(a7))->v))) {
        if ((*(signed char *)((a5 + 0x2DA))) != 0) {
            if (u155 > u45) {
                if (u45 > 5.0f) {
                    (((struct o1C_float *)(((int)stk + 0)))->v) = 5.0f;
                }
                if ((*(signed char *)((a4 + 0x2D9))) == 0) {
                    if ((*(signed char *)((a5 + 0x2D9))) != 0) {
                        if ((*(float *)((a7 + 0x0))) > (*(float *)((a6 + 0x0)))) {
                            u252 = (-((((struct o1C_float *)(((int)stk + 0)))->v)));
                        } else {
                            u252 = ((((struct o1C_float *)(((int)stk + 0)))->v));
                        }
                        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + u252);
                        return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
                    }
                    if ((*(float *)((a7 + 0x0))) > (*(float *)((a6 + 0x0)))) {
                        u260 = (-((((struct o1C_float *)(((int)stk + 0)))->v)));
                    } else {
                        u260 = ((((struct o1C_float *)(((int)stk + 0)))->v));
                    }
                    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + (u260 / 2.0f));
                    (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + (((((((struct o10_float *)(((int)stk + 0)))->v)) * ((((struct o1C_float *)(((int)stk + 0)))->v))) / 2.0f)));
                    (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + (((((((struct o18_float *)(((int)stk + 0)))->v)) * ((((struct o1C_float *)(((int)stk + 0)))->v))) / 2.0f)));
                    return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
                }
                u274 = ((((struct o20_float *)(a5))->v));
                u274 = u274 + ((((struct o1C_float *)(((int)stk + 0)))->v)) * ((((struct o10_float *)(((int)stk + 0)))->v));
                (((struct o20_float *)(a5))->v) = u274;
                u278 = ((((struct o28_float *)(a5))->v));
                u278 = u278 + ((((struct o1C_float *)(((int)stk + 0)))->v)) * ((((struct o18_float *)(((int)stk + 0)))->v));
                (((struct o28_float *)(a5))->v) = u278;
                return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
            }
            if (u155 > 5.0f) {
                (((struct o8_float *)((((int)stk + 0) + 0x1C)))->v) = 5.0f;
            }
            if ((*(signed char *)((a4 + 0x2D9))) == 0) {
                if ((*(signed char *)((a5 + 0x2D9))) == 0) {
                    if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
                        u289 = (-((((struct o24_float *)(((int)stk + 0)))->v)));
                    } else {
                        u289 = ((((struct o24_float *)(((int)stk + 0)))->v));
                    }
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (u289 / 2.0f));
                    (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + (((((((struct o10_float *)(((int)stk + 0)))->v)) * ((((struct o8_float *)((((int)stk + 0) + 0x1C)))->v))) / 2.0f)));
                    (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + (((((((struct o18_float *)(((int)stk + 0)))->v)) * ((((struct o8_float *)((((int)stk + 0) + 0x1C)))->v))) / 2.0f)));
                    return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
                }
                if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
                    u306 = (-((((struct o24_float *)(((int)stk + 0)))->v)));
                } else {
                    u306 = ((((struct o24_float *)(((int)stk + 0)))->v));
                }
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + u306);
                return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
            }
            u312 = ((((struct o20_float *)(a5))->v));
            u312 = u312 + ((((struct o8_float *)((((int)stk + 0) + 0x1C)))->v)) * ((((struct o10_float *)(((int)stk + 0)))->v));
            (((struct o20_float *)(a5))->v) = u312;
            u316 = ((((struct o28_float *)(a5))->v));
            u316 = u316 + ((((struct o8_float *)((((int)stk + 0) + 0x1C)))->v)) * ((((struct o18_float *)(((int)stk + 0)))->v));
            (((struct o28_float *)(a5))->v) = u316;
            return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
        }
        if ((*(signed char *)((a4 + 0x2D9))) != 0) {
            (((struct o24_float *)(a5))->v) = (((((struct o24_float *)(a5))->v)) - u224);
            return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
        }
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + u224);
        return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
    }
    if ((*(signed char *)((a4 + 0x2DA))) == 0) {
        *(volatile signed char *)((a5 + 0x2D9));
        return 0x0;
    }
    if (u155 > u45) {
        if (u45 > 5.0f) {
            (((struct o1C_float *)(((int)stk + 0)))->v) = 5.0f;
        }
        if ((*(signed char *)((a4 + 0x2D9))) != 0) {
            u328 = ((((struct o20_float *)(a5))->v));
            u328 = u328 + ((((struct o1C_float *)(((int)stk + 0)))->v)) * ((((struct o10_float *)(((int)stk + 0)))->v));
            (((struct o20_float *)(a5))->v) = u328;
            u332 = ((((struct o28_float *)(a5))->v));
            u332 = u332 + ((((struct o1C_float *)(((int)stk + 0)))->v)) * ((((struct o18_float *)(((int)stk + 0)))->v));
            (((struct o28_float *)(a5))->v) = u332;
            return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
        }
        if ((*(signed char *)((a5 + 0x2D9))) != 0) {
            if ((*(float *)((a7 + 0x0))) > (*(float *)((a6 + 0x0)))) {
                u340 = (-((((struct o1C_float *)(((int)stk + 0)))->v)));
            } else {
                u340 = ((((struct o1C_float *)(((int)stk + 0)))->v));
            }
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + u340);
            return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
        }
        if ((*(float *)((a7 + 0x0))) > (*(float *)((a6 + 0x0)))) {
            u348 = (-((((struct o1C_float *)(((int)stk + 0)))->v)));
        } else {
            u348 = ((((struct o1C_float *)(((int)stk + 0)))->v));
        }
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + (u348 / 2.0f));
        (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + (((((((struct o10_float *)(((int)stk + 0)))->v)) * ((((struct o1C_float *)(((int)stk + 0)))->v))) / 2.0f)));
        (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + (((((((struct o18_float *)(((int)stk + 0)))->v)) * ((((struct o1C_float *)(((int)stk + 0)))->v))) / 2.0f)));
        return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
    }
    if (u155 > 5.0f) {
        (((struct o8_float *)((((int)stk + 0) + 0x1C)))->v) = 5.0f;
    }
    if ((*(signed char *)((a4 + 0x2D9))) != 0) {
        u366 = ((((struct o20_float *)(a5))->v));
        u366 = u366 + ((((struct o8_float *)((((int)stk + 0) + 0x1C)))->v)) * ((((struct o10_float *)(((int)stk + 0)))->v));
        (((struct o20_float *)(a5))->v) = u366;
        u370 = ((((struct o28_float *)(a5))->v));
        u370 = u370 + ((((struct o8_float *)((((int)stk + 0) + 0x1C)))->v)) * ((((struct o18_float *)(((int)stk + 0)))->v));
        (((struct o28_float *)(a5))->v) = u370;
        return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
    }
    if ((*(signed char *)((a5 + 0x2D9))) != 0) {
        if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
            u378 = (-((((struct o24_float *)(((int)stk + 0)))->v)));
        } else {
            u378 = ((((struct o24_float *)(((int)stk + 0)))->v));
        }
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + u378);
        return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
    }
    if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
        u386 = (-((((struct o24_float *)(((int)stk + 0)))->v)));
    } else {
        u386 = ((((struct o24_float *)(((int)stk + 0)))->v));
    }
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (u386 / 2.0f));
    (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + (((((((struct o10_float *)(((int)stk + 0)))->v)) * ((((struct o8_float *)((((int)stk + 0) + 0x1C)))->v))) / 2.0f)));
    (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + (((((((struct o18_float *)(((int)stk + 0)))->v)) * ((((struct o8_float *)((((int)stk + 0) + 0x1C)))->v))) / 2.0f)));
    return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
}

int FUN_0c01d336(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
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
    register int t9;
    register int t10;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t22;

    t14 = *(signed char *)0xC362378;
    if ((unsigned char)t14 != 0) {
        if ((unsigned char)t14 != 1) {
            if ((unsigned char)t14 == 2) {
                return ((int (*)(void))(0xC01D7D6))();
            }
            if ((unsigned char)t14 == 3) {
                return ((int (*)(void))(0xC01D7D2))();
            }
            return ((int (*)(void))(0xC01D7D6))();
        }
        (((struct o10_uint *)0xC362378)->v) = (unsigned short)(((((struct o10_int *)0xC362378)->v)) + 0x5B0);
        t14 = *(signed char *)0xC362379;
        if ((unsigned char)t14 != 0) {
            if ((unsigned char)t14 == 1) {
                t15 = *(signed char *)0xC36237A;
                if ((unsigned char)t15 != 0) {
                    t16 = 0xC36237A;
                    if ((unsigned char)t15 == 1) {
                        t17 = (unsigned char)t15;
                        t15 = 0xC36237A;
                        t18 = 0x0;
                        t19 = 0x1;
                        for (;;) {
                            if ((int)(signed char)t18 < (int)0x2) {
                                t19 = (signed char)t18;
                                t15 = t18;
                                t17 = (FUN_0c01e65e(t15, 0x2, 0x20));
                                t17 = (signed char)t17;
                                if (t17 != 0) {
                                    t15 = 0x0;
                                    t17 = (FUN_0c0a3796(t15, 0x4B));
                                    t15 = 0xC362378;
                                    t15 = (t15 + 0x8);
                                    t15 = (t15 + t19);
                                    *(unsigned char *)(((0xC362380 + t19) + 0x0)) = ((*(signed char *)(((0xC362380 + t19) + 0x0))) + 0x1);
                                    *(volatile signed char *)((t15 + 0x0));
                                    t17 = 0x8;
                                    t17 = (((int (*)(int))(FUN_0c0e6e5c))(t15));
                                    *(unsigned char *)((t0 + 0x0)) = t17;
                                    t15 = t0;
                                    t20 = t15;
                                } else {
                                    t15 = t18;
                                    t17 = (FUN_0c01e65e(t15, 0x2, 0x10));
                                    t17 = (signed char)t17;
                                    if (t17 != 0) {
                                        t15 = 0x0;
                                        t17 = (FUN_0c0a3796(t15, 0x4B));
                                        *(unsigned char *)(((0xC362380 + t19) + 0x0)) = ((*(signed char *)(((0xC362380 + t19) + 0x0))) - 1);
                                        if ((int)(*(signed char *)(((0xC362380 + t19) + 0x0))) >= 0) {
                                        } else {
                                            *(unsigned char *)(((0xC362380 + t19) + 0x0)) = 0x7;
                                        }
                                    } else {
                                        if ((int)(*(signed char *)(((0xC362380 + t19) + 0x0))) >= (int)0x6) {
                                        } else {
                                            t15 = t18;
                                            t17 = (FUN_0c01e65e(t15, 0x2, 0x80));
                                            t17 = (signed char)t17;
                                            if (t17 != 0) {
                                                t15 = 0x0;
                                                t17 = (FUN_0c0a3796(t15, 0x4C));
                                                t17 = 0xC7F4750;
                                                t17 = (t17 + 0x1D);
                                                t17 = (t17 + (((signed char)t18 << 2) << 1));
                                                t21 = t17;
                                                t15 = t18;
                                                t17 = (FUN_0c01e75e(t15, (*(signed char *)(((0xC362380 + t19) + 0x0)))));
                                                t17 = (signed char)t17;
                                                t17 = (t17 + t21);
                                                *(unsigned char *)((t17 + 0x0)) = ((*(signed char *)((t17 + 0x0))) + 0x1);
                                                t15 = t18;
                                                t17 = (FUN_0c01e75e(t15, (*(signed char *)(((0xC362380 + t19) + 0x0)))));
                                                t17 = (signed char)t17;
                                                t17 = (t17 + (0xC7F476D + (((signed char)t18 << 2) << 1)));
                                                t21 = t17;
                                                t17 = 0xC7F4750;
                                                t17 = (t17 + 0x1D);
                                                t17 = (t17 + (((signed char)t18 << 2) << 1));
                                                t22 = t17;
                                                t15 = t18;
                                                t17 = (FUN_0c01e75e(t15, (*(signed char *)(((0xC362380 + t19) + 0x0)))));
                                                *(volatile signed char *)((((signed char)t17 + t22) + 0x0));
                                                t17 = 0x9;
                                                t17 = (((int (*)(void))(FUN_0c0e6e5c))());
                                                *(unsigned char *)((t21 + 0x0)) = t17;
                                            } else {
                                                t15 = t18;
                                                t17 = (FUN_0c01e65e(t15, 0x2, 0x40));
                                                t17 = (signed char)t17;
                                                if (t17 != 0) {
                                                    t15 = 0x0;
                                                    t17 = (FUN_0c0a3796(t15, 0x4C));
                                                    t17 = 0xC7F4750;
                                                    t17 = (t17 + 0x1D);
                                                    t17 = (t17 + (((signed char)t18 << 2) << 1));
                                                    t21 = t17;
                                                    t15 = t18;
                                                    t17 = (FUN_0c01e75e(t15, (*(signed char *)(((0xC362380 + t19) + 0x0)))));
                                                    t17 = (signed char)t17;
                                                    t17 = (t17 + t21);
                                                    *(unsigned char *)((t17 + 0x0)) = ((*(signed char *)((t17 + 0x0))) - 1);
                                                    t17 = 0xC7F4750;
                                                    t17 = (t17 + 0x1D);
                                                    t17 = (t17 + (((signed char)t18 << 2) << 1));
                                                    t21 = t17;
                                                    t15 = t18;
                                                    t17 = (FUN_0c01e75e(t15, (*(signed char *)(((0xC362380 + t19) + 0x0)))));
                                                    t17 = (signed char)t17;
                                                    t17 = (t17 + t21);
                                                    if ((int)(*(signed char *)((t17 + 0x0))) < 0) {
                                                        t15 = t18;
                                                        t17 = (FUN_0c01e75e(t15, (*(signed char *)(((0xC362380 + t19) + 0x0)))));
                                                        t17 = (signed char)t17;
                                                        t17 = (t17 + (0xC7F476D + (((signed char)t18 << 2) << 1)));
                                                        *(unsigned char *)((t17 + 0x0)) = 0x8;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                t15 = t20;
                                t15 = t18;
                                t17 = (FUN_0c01e65e(t15, 0x2, 0x8));
                                t17 = (signed char)t17;
                                if (t17 == 0) {
                                    t15 = t18;
                                    t17 = (FUN_0c01e65e(t15, 0x2, 0x4));
                                    t17 = (signed char)t17;
                                    if (t17 != 0) {
                                        t17 = 0xC362378;
                                        t17 = (t17 + 0x8);
                                        t17 = (*(signed char *)((t19 + t17)));
                                        if (t17 == 7) {
                                            t15 = 0x0;
                                            t17 = (FUN_0c0a3796(t15, 0x4D));
                                            t15 = 0xC362378;
                                            t17 = 0x0;
                                            *(unsigned char *)((t15 + 0x2)) = t17;
                                            *(unsigned char *)((t15 + 0x1)) = t17;
                                            (((struct o5_uchar *)0xC362378)->v) = t17;
                                        } else {
                                            if (t17 == 6) {
                                                t15 = 0x0;
                                                t17 = (FUN_0c0a3796(t15, 0x4D));
                                                t15 = (signed char)t18;
                                                t17 = (FUN_0c010b10(t15));
                                                *(unsigned char *)(((0xC362380 + t19) + 0x0)) = ((*(signed char *)(((0xC362380 + t19) + 0x0))) + 0x1);
                                            } else {
                                                t15 = 0x0;
                                                t17 = (FUN_0c0a3796(t15, 0x4B));
                                                *(unsigned char *)(((0xC362380 + t19) + 0x0)) = ((*(signed char *)(((0xC362380 + t19) + 0x0))) + 0x1);
                                            }
                                            t15 = 0xC362378;
                                            t15 = (t15 + 0x8);
                                            t15 = (t15 + t19);
                                            *(volatile signed char *)((t15 + 0x0));
                                            t17 = 0x8;
                                            t17 = (((int (*)(int))(FUN_0c0e6e5c))(t15));
                                            *(unsigned char *)((t1 + 0x0)) = t17;
                                            t15 = t1;
                                        }
                                        t20 = t15;
                                    }
                                    t21 = t20;
                                } else {
                                    t17 = 0xC362378;
                                    t17 = (t17 + 0x8);
                                    t17 = (*(signed char *)((t19 + t17)));
                                    if (t17 == 7) {
                                        t15 = 0x0;
                                        t17 = (FUN_0c0a3796(t15, 0x4D));
                                        t15 = 0xC362378;
                                        t17 = 0x0;
                                        *(unsigned char *)((t15 + 0x2)) = t17;
                                        *(unsigned char *)((t15 + 0x1)) = t17;
                                        (((struct o5_uchar *)0xC362378)->v) = t17;
                                    } else {
                                        if (t17 == 6) {
                                            t15 = 0x0;
                                            t17 = (FUN_0c0a3796(t15, 0x4D));
                                            t15 = (signed char)t18;
                                            t17 = (FUN_0c010b10(t15));
                                            *(unsigned char *)(((0xC362380 + t19) + 0x0)) = ((*(signed char *)(((0xC362380 + t19) + 0x0))) + 0x1);
                                        } else {
                                            t15 = 0x0;
                                            t17 = (FUN_0c0a3796(t15, 0x4B));
                                            *(unsigned char *)(((0xC362380 + t19) + 0x0)) = ((*(signed char *)(((0xC362380 + t19) + 0x0))) + 0x1);
                                        }
                                        t15 = 0xC362378;
                                        t15 = (t15 + 0x8);
                                        t15 = (t15 + t19);
                                        *(volatile signed char *)((t15 + 0x0));
                                        t17 = 0x8;
                                        t17 = (((int (*)(int))(FUN_0c0e6e5c))(t15));
                                        *(unsigned char *)((t2 + 0x0)) = t17;
                                        t15 = t2;
                                    }
                                    t21 = t15;
                                }
                                t18 = (t18 + 0x1);
                                t15 = t21;
                                continue;
                            }
                            break;
                        }
                        t16 = t15;
                    }
                    t0 = t16;
                } else {
                    FUN_0c01e156(0xC36237A, a5, a6);
                    t1 = *(signed char *)0xC36237A;
                    (((struct o2_uchar *)0xC362378)->v) = (t1 + 0x1);
                    t2 = (t1 + 0x1);
                    t1 = t3;
                    t3 = 0x0;
                    t15 = 0x1;
                    for (;;) {
                        if ((int)(signed char)t3 < (int)0x2) {
                            t15 = (signed char)t3;
                            t1 = t3;
                            t2 = (FUN_0c01e65e(t1, 0x2, 0x20));
                            t2 = (signed char)t2;
                            if (t2 != 0) {
                                t1 = 0x0;
                                t2 = (FUN_0c0a3796(t1, 0x4B));
                                t1 = 0xC362378;
                                t1 = (t1 + 0x8);
                                t1 = (t1 + t15);
                                *(unsigned char *)(((0xC362380 + t15) + 0x0)) = ((*(signed char *)(((0xC362380 + t15) + 0x0))) + 0x1);
                                *(volatile signed char *)((t1 + 0x0));
                                t2 = 0x8;
                                t2 = (((int (*)(int))(FUN_0c0e6e5c))(t1));
                                *(unsigned char *)((t4 + 0x0)) = t2;
                                t1 = t4;
                                t16 = t1;
                            } else {
                                t1 = t3;
                                t2 = (FUN_0c01e65e(t1, 0x2, 0x10));
                                t2 = (signed char)t2;
                                if (t2 != 0) {
                                    t1 = 0x0;
                                    t2 = (FUN_0c0a3796(t1, 0x4B));
                                    *(unsigned char *)(((0xC362380 + t15) + 0x0)) = ((*(signed char *)(((0xC362380 + t15) + 0x0))) - 1);
                                    if ((int)(*(signed char *)(((0xC362380 + t15) + 0x0))) >= 0) {
                                    } else {
                                        *(unsigned char *)(((0xC362380 + t15) + 0x0)) = 0x7;
                                    }
                                } else {
                                    if ((int)(*(signed char *)(((0xC362380 + t15) + 0x0))) >= (int)0x6) {
                                    } else {
                                        t1 = t3;
                                        t2 = (FUN_0c01e65e(t1, 0x2, 0x80));
                                        t2 = (signed char)t2;
                                        if (t2 != 0) {
                                            t1 = 0x0;
                                            t2 = (FUN_0c0a3796(t1, 0x4C));
                                            t2 = 0xC7F4750;
                                            t2 = (t2 + 0x1D);
                                            t2 = (t2 + (((signed char)t3 << 2) << 1));
                                            t17 = t2;
                                            t1 = t3;
                                            t2 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t15) + 0x0)))));
                                            t2 = (signed char)t2;
                                            t2 = (t2 + t17);
                                            *(unsigned char *)((t2 + 0x0)) = ((*(signed char *)((t2 + 0x0))) + 0x1);
                                            t1 = t3;
                                            t2 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t15) + 0x0)))));
                                            t2 = (signed char)t2;
                                            t2 = (t2 + (0xC7F476D + (((signed char)t3 << 2) << 1)));
                                            t17 = t2;
                                            t2 = 0xC7F4750;
                                            t2 = (t2 + 0x1D);
                                            t2 = (t2 + (((signed char)t3 << 2) << 1));
                                            t18 = t2;
                                            t1 = t3;
                                            t2 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t15) + 0x0)))));
                                            *(volatile signed char *)((((signed char)t2 + t18) + 0x0));
                                            t2 = 0x9;
                                            t2 = (((int (*)(void))(FUN_0c0e6e5c))());
                                            *(unsigned char *)((t17 + 0x0)) = t2;
                                        } else {
                                            t1 = t3;
                                            t2 = (FUN_0c01e65e(t1, 0x2, 0x40));
                                            t2 = (signed char)t2;
                                            if (t2 != 0) {
                                                t1 = 0x0;
                                                t2 = (FUN_0c0a3796(t1, 0x4C));
                                                t2 = 0xC7F4750;
                                                t2 = (t2 + 0x1D);
                                                t2 = (t2 + (((signed char)t3 << 2) << 1));
                                                t17 = t2;
                                                t1 = t3;
                                                t2 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t15) + 0x0)))));
                                                t2 = (signed char)t2;
                                                t2 = (t2 + t17);
                                                *(unsigned char *)((t2 + 0x0)) = ((*(signed char *)((t2 + 0x0))) - 1);
                                                t2 = 0xC7F4750;
                                                t2 = (t2 + 0x1D);
                                                t2 = (t2 + (((signed char)t3 << 2) << 1));
                                                t17 = t2;
                                                t1 = t3;
                                                t2 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t15) + 0x0)))));
                                                t2 = (signed char)t2;
                                                t2 = (t2 + t17);
                                                if ((int)(*(signed char *)((t2 + 0x0))) < 0) {
                                                    t1 = t3;
                                                    t2 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t15) + 0x0)))));
                                                    t2 = (signed char)t2;
                                                    t2 = (t2 + (0xC7F476D + (((signed char)t3 << 2) << 1)));
                                                    *(unsigned char *)((t2 + 0x0)) = 0x8;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            t1 = t16;
                            t1 = t3;
                            t2 = (FUN_0c01e65e(t1, 0x2, 0x8));
                            t2 = (signed char)t2;
                            if (t2 == 0) {
                                t1 = t3;
                                t2 = (FUN_0c01e65e(t1, 0x2, 0x4));
                                t2 = (signed char)t2;
                                if (t2 != 0) {
                                    t2 = 0xC362378;
                                    t2 = (t2 + 0x8);
                                    t2 = (*(signed char *)((t15 + t2)));
                                    if (t2 == 7) {
                                        t1 = 0x0;
                                        t2 = (FUN_0c0a3796(t1, 0x4D));
                                        t1 = 0xC362378;
                                        t2 = 0x0;
                                        *(unsigned char *)((t1 + 0x2)) = t2;
                                        *(unsigned char *)((t1 + 0x1)) = t2;
                                        (((struct o5_uchar *)0xC362378)->v) = t2;
                                    } else {
                                        if (t2 == 6) {
                                            t1 = 0x0;
                                            t2 = (FUN_0c0a3796(t1, 0x4D));
                                            t1 = (signed char)t3;
                                            t2 = (FUN_0c010b10(t1));
                                            *(unsigned char *)(((0xC362380 + t15) + 0x0)) = ((*(signed char *)(((0xC362380 + t15) + 0x0))) + 0x1);
                                        } else {
                                            t1 = 0x0;
                                            t2 = (FUN_0c0a3796(t1, 0x4B));
                                            *(unsigned char *)(((0xC362380 + t15) + 0x0)) = ((*(signed char *)(((0xC362380 + t15) + 0x0))) + 0x1);
                                        }
                                        t1 = 0xC362378;
                                        t1 = (t1 + 0x8);
                                        t1 = (t1 + t15);
                                        *(volatile signed char *)((t1 + 0x0));
                                        t2 = 0x8;
                                        t2 = (((int (*)(int))(FUN_0c0e6e5c))(t1));
                                        *(unsigned char *)((t5 + 0x0)) = t2;
                                        t1 = t5;
                                    }
                                    t16 = t1;
                                }
                                t17 = t16;
                            } else {
                                t2 = 0xC362378;
                                t2 = (t2 + 0x8);
                                t2 = (*(signed char *)((t15 + t2)));
                                if (t2 == 7) {
                                    t1 = 0x0;
                                    t2 = (FUN_0c0a3796(t1, 0x4D));
                                    t1 = 0xC362378;
                                    t2 = 0x0;
                                    *(unsigned char *)((t1 + 0x2)) = t2;
                                    *(unsigned char *)((t1 + 0x1)) = t2;
                                    (((struct o5_uchar *)0xC362378)->v) = t2;
                                } else {
                                    if (t2 == 6) {
                                        t1 = 0x0;
                                        t2 = (FUN_0c0a3796(t1, 0x4D));
                                        t1 = (signed char)t3;
                                        t2 = (FUN_0c010b10(t1));
                                        *(unsigned char *)(((0xC362380 + t15) + 0x0)) = ((*(signed char *)(((0xC362380 + t15) + 0x0))) + 0x1);
                                    } else {
                                        t1 = 0x0;
                                        t2 = (FUN_0c0a3796(t1, 0x4B));
                                        *(unsigned char *)(((0xC362380 + t15) + 0x0)) = ((*(signed char *)(((0xC362380 + t15) + 0x0))) + 0x1);
                                    }
                                    t1 = 0xC362378;
                                    t1 = (t1 + 0x8);
                                    t1 = (t1 + t15);
                                    *(volatile signed char *)((t1 + 0x0));
                                    t2 = 0x8;
                                    t2 = (((int (*)(int))(FUN_0c0e6e5c))(t1));
                                    *(unsigned char *)((t6 + 0x0)) = t2;
                                    t1 = t6;
                                }
                                t17 = t1;
                            }
                            t3 = (t3 + 0x1);
                            t1 = t17;
                            continue;
                        }
                        break;
                    }
                    t0 = t1;
                }
                t1 = ((int (*)(int))(FUN_0c01e264))(t0);
                return ((int (*)(void))(0xC01D7D8))();
            }
            if ((unsigned char)t14 == 2) {
                t0 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x8);
                if ((signed char)t0 != 0) {
                    (((struct o0_uchar *)0xC362378)->v) = 0x2;
                    (((struct o1_uchar *)0xC362378)->v) = 0x0;
                    (((struct o4_uchar *)0xC362378)->v) = 0x0;
                    return ((int (*)(void))(0xC01D7D6))();
                }
                t0 = FUN_0c01e6b4((*(signed char *)0xC36237E));
                if ((signed char)t0 != 0) {
                    (((struct o2_uchar *)0xC362378)->v) = 0x0;
                    (((struct o1_uchar *)0xC362378)->v) = 0x0;
                    (((struct o5_uchar *)0xC362378)->v) = 0x0;
                    return ((int (*)(int, int, int, int))(0xC01D7BA))(0xC362378, 0xC362382, a6, a7);
                }
                return ((int (*)(void))(0xC01D7D8))();
            }
            return ((int (*)(int, int, int, int))(0xC01D7D8))(0xC36237A, a5, a6, a7);
        }
        t0 = *(signed char *)0xC36237A;
        if ((unsigned char)t0 != 0) {
            t1 = 0xC36237A;
            t2 = a5;
            t3 = a6;
            if ((unsigned char)t0 != 1) {
            } else {
                t0 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x20);
                if ((signed char)t0 != 0) {
                    (((struct o7_uchar *)0xC362378)->v) = ((*(signed char *)0xC36237F) + 0x1);
                    FUN_0c0a3796(0x0, 0x4B);
                    *(volatile signed char *)0xC36237F;
                    (((struct o7_uchar *)0xC362378)->v) = (((int (*)(void))(FUN_0c0e6e5c))());
                } else {
                    t0 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x10);
                    if ((signed char)t0 != 0) {
                        (((struct o7_uchar *)0xC362378)->v) = ((*(signed char *)0xC36237F) - 1);
                        FUN_0c0a3796(0x0, 0x4B);
                        if ((int)(*(signed char *)0xC36237F) < 0) {
                            (((struct o7_uchar *)0xC362378)->v) = 0x2;
                        }
                    }
                }
                t0 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x8);
                if ((signed char)t0 == 0) {
                    t0 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x4);
                    if ((signed char)t0 != 0) {
                        t0 = *(signed char *)0xC36237F;
                        switch (t0) {
                        case 0:
                            (((struct o0_uchar *)0xC362378)->v) = 0x2;
                            (((struct o1_uchar *)0xC362378)->v) = 0x0;
                            (((struct o2_uchar *)0xC362378)->v) = 0x0;
                            (((struct o4_uchar *)0xC362378)->v) = 0x0;
                            break;
                        case 1:
                            FUN_0c0a3796(0x0, 0x4D);
                            (((struct o1_uchar *)0xC362378)->v) = 0x1;
                            (((struct o2_uchar *)0xC362378)->v) = 0x0;
                            (((struct o5_uchar *)0xC362378)->v) = 0x1;
                            break;
                        case 2:
                            (((struct o0_uchar *)0xC362378)->v) = 0x3;
                            (((struct o1_uchar *)0xC362378)->v) = 0x0;
                            (((struct o2_uchar *)0xC362378)->v) = 0x0;
                            (((struct o4_uchar *)0xC362378)->v) = 0x0;
                            break;
                        default:
                            (((struct o0_uchar *)0xC362378)->v) = 0x2;
                            (((struct o1_uchar *)0xC362378)->v) = 0x0;
                            (((struct o2_uchar *)0xC362378)->v) = 0x0;
                            (((struct o4_uchar *)0xC362378)->v) = 0x0;
                            break;
                        }
                    } else {
                        t0 = FUN_0c01e6b4((*(signed char *)0xC36237E));
                        if ((signed char)t0 != 0) {
                            (((struct o1_uchar *)0xC362378)->v) = 0x2;
                            (((struct o2_uchar *)0xC362378)->v) = 0x0;
                            (((struct o5_uchar *)0xC362378)->v) = 0x2;
                            (((struct o4_uchar *)0xC362378)->v) = 0x0;
                            (((struct oD_uchar *)0xC362378)->v) = 0x0;
                            (((struct oC_uchar *)0xC362378)->v) = 0x0;
                            (((struct oB_uchar *)0xC362378)->v) = 0x0;
                            (((struct oA_uchar *)0xC362378)->v) = 0x0;
                            t0 = 0xC362384;
                            t4 = 0xC362382;
                            t5 = 0xC362382;
                        }
                        t6 = t0;
                        t0 = t4;
                        t4 = t5;
                    }
                    t5 = t6;
                    t6 = t0;
                    t0 = t4;
                } else {
                    (((struct o0_uchar *)0xC362378)->v) = 0x2;
                    (((struct o1_uchar *)0xC362378)->v) = 0x0;
                    (((struct o2_uchar *)0xC362378)->v) = 0x0;
                    (((struct o4_uchar *)0xC362378)->v) = 0x0;
                }
                t1 = t5;
                t2 = t6;
                t3 = t0;
            }
            t0 = t1;
            t1 = t2;
            t2 = t3;
        } else {
            FUN_0c01dc58();
            (((struct o2_uchar *)0xC362378)->v) = ((*(signed char *)0xC36237A) + 0x1);
            t3 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x20);
            if ((signed char)t3 != 0) {
                (((struct o7_uchar *)0xC362378)->v) = ((*(signed char *)0xC36237F) + 0x1);
                FUN_0c0a3796(0x0, 0x4B);
                *(volatile signed char *)0xC36237F;
                (((struct o7_uchar *)0xC362378)->v) = (((int (*)(void))(FUN_0c0e6e5c))());
            } else {
                t3 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x10);
                if ((signed char)t3 != 0) {
                    (((struct o7_uchar *)0xC362378)->v) = ((*(signed char *)0xC36237F) - 1);
                    FUN_0c0a3796(0x0, 0x4B);
                    if ((int)(*(signed char *)0xC36237F) < 0) {
                        (((struct o7_uchar *)0xC362378)->v) = 0x2;
                    }
                }
            }
            t3 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x8);
            if ((signed char)t3 == 0) {
                t3 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x4);
                if ((signed char)t3 != 0) {
                    t3 = *(signed char *)0xC36237F;
                    switch (t3) {
                    case 0:
                        (((struct o0_uchar *)0xC362378)->v) = 0x2;
                        (((struct o1_uchar *)0xC362378)->v) = 0x0;
                        (((struct o2_uchar *)0xC362378)->v) = 0x0;
                        (((struct o4_uchar *)0xC362378)->v) = 0x0;
                        break;
                    case 1:
                        FUN_0c0a3796(0x0, 0x4D);
                        (((struct o1_uchar *)0xC362378)->v) = 0x1;
                        (((struct o2_uchar *)0xC362378)->v) = 0x0;
                        (((struct o5_uchar *)0xC362378)->v) = 0x1;
                        break;
                    case 2:
                        (((struct o0_uchar *)0xC362378)->v) = 0x3;
                        (((struct o1_uchar *)0xC362378)->v) = 0x0;
                        (((struct o2_uchar *)0xC362378)->v) = 0x0;
                        (((struct o4_uchar *)0xC362378)->v) = 0x0;
                        break;
                    default:
                        (((struct o0_uchar *)0xC362378)->v) = 0x2;
                        (((struct o1_uchar *)0xC362378)->v) = 0x0;
                        (((struct o2_uchar *)0xC362378)->v) = 0x0;
                        (((struct o4_uchar *)0xC362378)->v) = 0x0;
                        break;
                    }
                } else {
                    t3 = FUN_0c01e6b4((*(signed char *)0xC36237E));
                    if ((signed char)t3 != 0) {
                        (((struct o1_uchar *)0xC362378)->v) = 0x2;
                        (((struct o2_uchar *)0xC362378)->v) = 0x0;
                        (((struct o5_uchar *)0xC362378)->v) = 0x2;
                        (((struct o4_uchar *)0xC362378)->v) = 0x0;
                        (((struct oD_uchar *)0xC362378)->v) = 0x0;
                        (((struct oC_uchar *)0xC362378)->v) = 0x0;
                        (((struct oB_uchar *)0xC362378)->v) = 0x0;
                        (((struct oA_uchar *)0xC362378)->v) = 0x0;
                        t3 = 0xC362384;
                        t4 = 0xC362382;
                        t5 = 0xC362382;
                    }
                    t6 = t3;
                    t3 = t4;
                    t4 = t5;
                }
                t5 = t6;
                t6 = t3;
                t3 = t4;
            } else {
                (((struct o0_uchar *)0xC362378)->v) = 0x2;
                (((struct o1_uchar *)0xC362378)->v) = 0x0;
                (((struct o2_uchar *)0xC362378)->v) = 0x0;
                (((struct o4_uchar *)0xC362378)->v) = 0x0;
            }
            t0 = t5;
            t1 = t6;
            t2 = t3;
        }
    } else {
        (((struct o4_uchar *)0xC362378)->v) = 0x1;
        (((struct o5_uchar *)0xC362378)->v) = 0x0;
        (((struct o7_uchar *)0xC362378)->v) = 0x0;
        (((struct o8_uchar *)0xC362378)->v) = 0x7;
        (((struct o9_uchar *)0xC362378)->v) = 0x7;
        (((struct oD_uchar *)0xC362378)->v) = 0x0;
        (((struct oC_uchar *)0xC362378)->v) = 0x0;
        (((struct oB_uchar *)0xC362378)->v) = 0x0;
        (((struct oA_uchar *)0xC362378)->v) = 0x0;
        (((struct o10_uint *)0xC362378)->v) = 0x0;
        (((struct o0_uchar *)0xC362378)->v) = ((*(signed char *)0xC362378) + 0x1);
        (((struct o10_uint *)0xC362378)->v) = (unsigned short)(((((struct o10_int *)0xC362378)->v)) + 0x5B0);
        t0 = *(signed char *)0xC362379;
        if ((unsigned char)t0 != 0) {
            if ((unsigned char)t0 == 1) {
                t1 = *(signed char *)0xC36237A;
                if ((unsigned char)t1 != 0) {
                    t2 = 0xC36237A;
                    if ((unsigned char)t1 == 1) {
                        t3 = (unsigned char)t1;
                        t1 = 0xC36237A;
                        t4 = 0x0;
                        t5 = 0x1;
                        for (;;) {
                            if ((int)(signed char)t4 < (int)0x2) {
                                t5 = (signed char)t4;
                                t1 = t4;
                                t3 = (FUN_0c01e65e(t1, 0x2, 0x20));
                                t3 = (signed char)t3;
                                if (t3 != 0) {
                                    t1 = 0x0;
                                    t3 = (FUN_0c0a3796(t1, 0x4B));
                                    t1 = 0xC362378;
                                    t1 = (t1 + 0x8);
                                    t1 = (t1 + t5);
                                    *(unsigned char *)(((0xC362380 + t5) + 0x0)) = ((*(signed char *)(((0xC362380 + t5) + 0x0))) + 0x1);
                                    *(volatile signed char *)((t1 + 0x0));
                                    t3 = 0x8;
                                    t3 = (((int (*)(int))(FUN_0c0e6e5c))(t1));
                                    *(unsigned char *)((t7 + 0x0)) = t3;
                                    t1 = t7;
                                    t6 = t1;
                                } else {
                                    t1 = t4;
                                    t3 = (FUN_0c01e65e(t1, 0x2, 0x10));
                                    t3 = (signed char)t3;
                                    if (t3 != 0) {
                                        t1 = 0x0;
                                        t3 = (FUN_0c0a3796(t1, 0x4B));
                                        *(unsigned char *)(((0xC362380 + t5) + 0x0)) = ((*(signed char *)(((0xC362380 + t5) + 0x0))) - 1);
                                        if ((int)(*(signed char *)(((0xC362380 + t5) + 0x0))) >= 0) {
                                        } else {
                                            *(unsigned char *)(((0xC362380 + t5) + 0x0)) = 0x7;
                                        }
                                    } else {
                                        if ((int)(*(signed char *)(((0xC362380 + t5) + 0x0))) >= (int)0x6) {
                                        } else {
                                            t1 = t4;
                                            t3 = (FUN_0c01e65e(t1, 0x2, 0x80));
                                            t3 = (signed char)t3;
                                            if (t3 != 0) {
                                                t1 = 0x0;
                                                t3 = (FUN_0c0a3796(t1, 0x4C));
                                                t3 = 0xC7F4750;
                                                t3 = (t3 + 0x1D);
                                                t3 = (t3 + (((signed char)t4 << 2) << 1));
                                                t14 = t3;
                                                t1 = t4;
                                                t3 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t5) + 0x0)))));
                                                t3 = (signed char)t3;
                                                t3 = (t3 + t14);
                                                *(unsigned char *)((t3 + 0x0)) = ((*(signed char *)((t3 + 0x0))) + 0x1);
                                                t1 = t4;
                                                t3 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t5) + 0x0)))));
                                                t3 = (signed char)t3;
                                                t3 = (t3 + (0xC7F476D + (((signed char)t4 << 2) << 1)));
                                                t14 = t3;
                                                t3 = 0xC7F4750;
                                                t3 = (t3 + 0x1D);
                                                t3 = (t3 + (((signed char)t4 << 2) << 1));
                                                t15 = t3;
                                                t1 = t4;
                                                t3 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t5) + 0x0)))));
                                                *(volatile signed char *)((((signed char)t3 + t15) + 0x0));
                                                t3 = 0x9;
                                                t3 = (((int (*)(void))(FUN_0c0e6e5c))());
                                                *(unsigned char *)((t14 + 0x0)) = t3;
                                            } else {
                                                t1 = t4;
                                                t3 = (FUN_0c01e65e(t1, 0x2, 0x40));
                                                t3 = (signed char)t3;
                                                if (t3 != 0) {
                                                    t1 = 0x0;
                                                    t3 = (FUN_0c0a3796(t1, 0x4C));
                                                    t3 = 0xC7F4750;
                                                    t3 = (t3 + 0x1D);
                                                    t3 = (t3 + (((signed char)t4 << 2) << 1));
                                                    t14 = t3;
                                                    t1 = t4;
                                                    t3 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t5) + 0x0)))));
                                                    t3 = (signed char)t3;
                                                    t3 = (t3 + t14);
                                                    *(unsigned char *)((t3 + 0x0)) = ((*(signed char *)((t3 + 0x0))) - 1);
                                                    t3 = 0xC7F4750;
                                                    t3 = (t3 + 0x1D);
                                                    t3 = (t3 + (((signed char)t4 << 2) << 1));
                                                    t14 = t3;
                                                    t1 = t4;
                                                    t3 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t5) + 0x0)))));
                                                    t3 = (signed char)t3;
                                                    t3 = (t3 + t14);
                                                    if ((int)(*(signed char *)((t3 + 0x0))) < 0) {
                                                        t1 = t4;
                                                        t3 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t5) + 0x0)))));
                                                        t3 = (signed char)t3;
                                                        t3 = (t3 + (0xC7F476D + (((signed char)t4 << 2) << 1)));
                                                        *(unsigned char *)((t3 + 0x0)) = 0x8;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                t1 = t6;
                                t1 = t4;
                                t3 = (FUN_0c01e65e(t1, 0x2, 0x8));
                                t3 = (signed char)t3;
                                if (t3 == 0) {
                                    t1 = t4;
                                    t3 = (FUN_0c01e65e(t1, 0x2, 0x4));
                                    t3 = (signed char)t3;
                                    if (t3 != 0) {
                                        t3 = 0xC362378;
                                        t3 = (t3 + 0x8);
                                        t3 = (*(signed char *)((t5 + t3)));
                                        if (t3 == 7) {
                                            t1 = 0x0;
                                            t3 = (FUN_0c0a3796(t1, 0x4D));
                                            t1 = 0xC362378;
                                            t3 = 0x0;
                                            *(unsigned char *)((t1 + 0x2)) = t3;
                                            *(unsigned char *)((t1 + 0x1)) = t3;
                                            (((struct o5_uchar *)0xC362378)->v) = t3;
                                        } else {
                                            if (t3 == 6) {
                                                t1 = 0x0;
                                                t3 = (FUN_0c0a3796(t1, 0x4D));
                                                t1 = (signed char)t4;
                                                t3 = (FUN_0c010b10(t1));
                                                *(unsigned char *)(((0xC362380 + t5) + 0x0)) = ((*(signed char *)(((0xC362380 + t5) + 0x0))) + 0x1);
                                            } else {
                                                t1 = 0x0;
                                                t3 = (FUN_0c0a3796(t1, 0x4B));
                                                *(unsigned char *)(((0xC362380 + t5) + 0x0)) = ((*(signed char *)(((0xC362380 + t5) + 0x0))) + 0x1);
                                            }
                                            t1 = 0xC362378;
                                            t1 = (t1 + 0x8);
                                            t1 = (t1 + t5);
                                            *(volatile signed char *)((t1 + 0x0));
                                            t3 = 0x8;
                                            t3 = (((int (*)(int))(FUN_0c0e6e5c))(t1));
                                            *(unsigned char *)((t8 + 0x0)) = t3;
                                            t1 = t8;
                                        }
                                        t6 = t1;
                                    }
                                    t14 = t6;
                                } else {
                                    t3 = 0xC362378;
                                    t3 = (t3 + 0x8);
                                    t3 = (*(signed char *)((t5 + t3)));
                                    if (t3 == 7) {
                                        t1 = 0x0;
                                        t3 = (FUN_0c0a3796(t1, 0x4D));
                                        t1 = 0xC362378;
                                        t3 = 0x0;
                                        *(unsigned char *)((t1 + 0x2)) = t3;
                                        *(unsigned char *)((t1 + 0x1)) = t3;
                                        (((struct o5_uchar *)0xC362378)->v) = t3;
                                    } else {
                                        if (t3 == 6) {
                                            t1 = 0x0;
                                            t3 = (FUN_0c0a3796(t1, 0x4D));
                                            t1 = (signed char)t4;
                                            t3 = (FUN_0c010b10(t1));
                                            *(unsigned char *)(((0xC362380 + t5) + 0x0)) = ((*(signed char *)(((0xC362380 + t5) + 0x0))) + 0x1);
                                        } else {
                                            t1 = 0x0;
                                            t3 = (FUN_0c0a3796(t1, 0x4B));
                                            *(unsigned char *)(((0xC362380 + t5) + 0x0)) = ((*(signed char *)(((0xC362380 + t5) + 0x0))) + 0x1);
                                        }
                                        t1 = 0xC362378;
                                        t1 = (t1 + 0x8);
                                        t1 = (t1 + t5);
                                        *(volatile signed char *)((t1 + 0x0));
                                        t3 = 0x8;
                                        t3 = (((int (*)(int))(FUN_0c0e6e5c))(t1));
                                        *(unsigned char *)((t9 + 0x0)) = t3;
                                        t1 = t9;
                                    }
                                    t14 = t1;
                                }
                                t4 = (t4 + 0x1);
                                t1 = t14;
                                continue;
                            }
                            break;
                        }
                        t2 = t1;
                    }
                    t1 = t2;
                    t2 = 0xC362384;
                    t3 = 0xC362382;
                } else {
                    FUN_0c01e156(0xC36237A, 0xC362384, 0xC362382);
                    t4 = *(signed char *)0xC36237A;
                    (((struct o2_uchar *)0xC362378)->v) = (t4 + 0x1);
                    t5 = (t4 + 0x1);
                    t4 = t10;
                    t6 = 0x0;
                    t7 = 0x1;
                    for (;;) {
                        if ((int)(signed char)t6 < (int)0x2) {
                            t7 = (signed char)t6;
                            t4 = t6;
                            t5 = (FUN_0c01e65e(t4, 0x2, 0x20));
                            t5 = (signed char)t5;
                            if (t5 != 0) {
                                t4 = 0x0;
                                t5 = (FUN_0c0a3796(t4, 0x4B));
                                t4 = 0xC362378;
                                t4 = (t4 + 0x8);
                                t4 = (t4 + t7);
                                *(unsigned char *)(((0xC362380 + t7) + 0x0)) = ((*(signed char *)(((0xC362380 + t7) + 0x0))) + 0x1);
                                *(volatile signed char *)((t4 + 0x0));
                                t5 = 0x8;
                                t5 = (((int (*)(int))(FUN_0c0e6e5c))(t4));
                                *(unsigned char *)((t4 + 0x0)) = t5;
                                t8 = t4;
                            } else {
                                t4 = t6;
                                t5 = (FUN_0c01e65e(t4, 0x2, 0x10));
                                t5 = (signed char)t5;
                                if (t5 != 0) {
                                    t4 = 0x0;
                                    t5 = (FUN_0c0a3796(t4, 0x4B));
                                    *(unsigned char *)(((0xC362380 + t7) + 0x0)) = ((*(signed char *)(((0xC362380 + t7) + 0x0))) - 1);
                                    if ((int)(*(signed char *)(((0xC362380 + t7) + 0x0))) >= 0) {
                                    } else {
                                        *(unsigned char *)(((0xC362380 + t7) + 0x0)) = 0x7;
                                    }
                                } else {
                                    if ((int)(*(signed char *)(((0xC362380 + t7) + 0x0))) >= (int)0x6) {
                                    } else {
                                        t4 = t6;
                                        t5 = (FUN_0c01e65e(t4, 0x2, 0x80));
                                        t5 = (signed char)t5;
                                        if (t5 != 0) {
                                            t4 = 0x0;
                                            t5 = (FUN_0c0a3796(t4, 0x4C));
                                            t5 = 0xC7F4750;
                                            t5 = (t5 + 0x1D);
                                            t5 = (t5 + (((signed char)t6 << 2) << 1));
                                            t9 = t5;
                                            t4 = t6;
                                            t5 = (FUN_0c01e75e(t4, (*(signed char *)(((0xC362380 + t7) + 0x0)))));
                                            t5 = (signed char)t5;
                                            t5 = (t5 + t9);
                                            *(unsigned char *)((t5 + 0x0)) = ((*(signed char *)((t5 + 0x0))) + 0x1);
                                            t4 = t6;
                                            t5 = (FUN_0c01e75e(t4, (*(signed char *)(((0xC362380 + t7) + 0x0)))));
                                            t5 = (signed char)t5;
                                            t5 = (t5 + (0xC7F476D + (((signed char)t6 << 2) << 1)));
                                            t9 = t5;
                                            t5 = 0xC7F4750;
                                            t5 = (t5 + 0x1D);
                                            t5 = (t5 + (((signed char)t6 << 2) << 1));
                                            t10 = t5;
                                            t4 = t6;
                                            t5 = (FUN_0c01e75e(t4, (*(signed char *)(((0xC362380 + t7) + 0x0)))));
                                            *(volatile signed char *)((((signed char)t5 + t10) + 0x0));
                                            t5 = 0x9;
                                            t5 = (((int (*)(void))(FUN_0c0e6e5c))());
                                            *(unsigned char *)((t9 + 0x0)) = t5;
                                        } else {
                                            t4 = t6;
                                            t5 = (FUN_0c01e65e(t4, 0x2, 0x40));
                                            t5 = (signed char)t5;
                                            if (t5 != 0) {
                                                t4 = 0x0;
                                                t5 = (FUN_0c0a3796(t4, 0x4C));
                                                t5 = 0xC7F4750;
                                                t5 = (t5 + 0x1D);
                                                t5 = (t5 + (((signed char)t6 << 2) << 1));
                                                t9 = t5;
                                                t4 = t6;
                                                t5 = (FUN_0c01e75e(t4, (*(signed char *)(((0xC362380 + t7) + 0x0)))));
                                                t5 = (signed char)t5;
                                                t5 = (t5 + t9);
                                                *(unsigned char *)((t5 + 0x0)) = ((*(signed char *)((t5 + 0x0))) - 1);
                                                t5 = 0xC7F4750;
                                                t5 = (t5 + 0x1D);
                                                t5 = (t5 + (((signed char)t6 << 2) << 1));
                                                t9 = t5;
                                                t4 = t6;
                                                t5 = (FUN_0c01e75e(t4, (*(signed char *)(((0xC362380 + t7) + 0x0)))));
                                                t5 = (signed char)t5;
                                                t5 = (t5 + t9);
                                                if ((int)(*(signed char *)((t5 + 0x0))) < 0) {
                                                    t4 = t6;
                                                    t5 = (FUN_0c01e75e(t4, (*(signed char *)(((0xC362380 + t7) + 0x0)))));
                                                    t5 = (signed char)t5;
                                                    t5 = (t5 + (0xC7F476D + (((signed char)t6 << 2) << 1)));
                                                    *(unsigned char *)((t5 + 0x0)) = 0x8;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            t4 = t8;
                            t4 = t6;
                            t5 = (FUN_0c01e65e(t4, 0x2, 0x8));
                            t5 = (signed char)t5;
                            if (t5 == 0) {
                                t4 = t6;
                                t5 = (FUN_0c01e65e(t4, 0x2, 0x4));
                                t5 = (signed char)t5;
                                if (t5 != 0) {
                                    t5 = 0xC362378;
                                    t5 = (t5 + 0x8);
                                    t5 = (*(signed char *)((t7 + t5)));
                                    if (t5 == 7) {
                                        t4 = 0x0;
                                        t5 = (FUN_0c0a3796(t4, 0x4D));
                                        t4 = 0xC362378;
                                        t5 = 0x0;
                                        *(unsigned char *)((t4 + 0x2)) = t5;
                                        *(unsigned char *)((t4 + 0x1)) = t5;
                                        (((struct o5_uchar *)0xC362378)->v) = t5;
                                    } else {
                                        if (t5 == 6) {
                                            t4 = 0x0;
                                            t5 = (FUN_0c0a3796(t4, 0x4D));
                                            t4 = (signed char)t6;
                                            t5 = (FUN_0c010b10(t4));
                                            *(unsigned char *)(((0xC362380 + t7) + 0x0)) = ((*(signed char *)(((0xC362380 + t7) + 0x0))) + 0x1);
                                        } else {
                                            t4 = 0x0;
                                            t5 = (FUN_0c0a3796(t4, 0x4B));
                                            *(unsigned char *)(((0xC362380 + t7) + 0x0)) = ((*(signed char *)(((0xC362380 + t7) + 0x0))) + 0x1);
                                        }
                                        t4 = 0xC362378;
                                        t4 = (t4 + 0x8);
                                        t4 = (t4 + t7);
                                        *(volatile signed char *)((t4 + 0x0));
                                        t5 = 0x8;
                                        t5 = (((int (*)(int))(FUN_0c0e6e5c))(t4));
                                        *(unsigned char *)((t4 + 0x0)) = t5;
                                    }
                                    t8 = t4;
                                }
                                t9 = t8;
                            } else {
                                t5 = 0xC362378;
                                t5 = (t5 + 0x8);
                                t5 = (*(signed char *)((t7 + t5)));
                                if (t5 == 7) {
                                    t4 = 0x0;
                                    t5 = (FUN_0c0a3796(t4, 0x4D));
                                    t4 = 0xC362378;
                                    t5 = 0x0;
                                    *(unsigned char *)((t4 + 0x2)) = t5;
                                    *(unsigned char *)((t4 + 0x1)) = t5;
                                    (((struct o5_uchar *)0xC362378)->v) = t5;
                                } else {
                                    if (t5 == 6) {
                                        t4 = 0x0;
                                        t5 = (FUN_0c0a3796(t4, 0x4D));
                                        t4 = (signed char)t6;
                                        t5 = (FUN_0c010b10(t4));
                                        *(unsigned char *)(((0xC362380 + t7) + 0x0)) = ((*(signed char *)(((0xC362380 + t7) + 0x0))) + 0x1);
                                    } else {
                                        t4 = 0x0;
                                        t5 = (FUN_0c0a3796(t4, 0x4B));
                                        *(unsigned char *)(((0xC362380 + t7) + 0x0)) = ((*(signed char *)(((0xC362380 + t7) + 0x0))) + 0x1);
                                    }
                                    t4 = 0xC362378;
                                    t4 = (t4 + 0x8);
                                    t4 = (t4 + t7);
                                    *(volatile signed char *)((t4 + 0x0));
                                    t5 = 0x8;
                                    t5 = (((int (*)(int))(FUN_0c0e6e5c))(t4));
                                    *(unsigned char *)((t4 + 0x0)) = t5;
                                }
                                t9 = t4;
                            }
                            t6 = (t6 + 0x1);
                            t4 = t9;
                            continue;
                        }
                        break;
                    }
                    t1 = t4;
                }
                t4 = ((int (*)(int, int, int))(FUN_0c01e264))(t1, t2, t3);
                return ((int (*)(void))(0xC01D7D8))();
            }
            if ((unsigned char)t0 == 2) {
                t0 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x8);
                if ((signed char)t0 != 0) {
                    (((struct o0_uchar *)0xC362378)->v) = 0x2;
                    (((struct o1_uchar *)0xC362378)->v) = 0x0;
                    (((struct o4_uchar *)0xC362378)->v) = 0x0;
                    return ((int (*)(void))(0xC01D7D6))();
                }
                t0 = FUN_0c01e6b4((*(signed char *)0xC36237E));
                if ((signed char)t0 != 0) {
                    (((struct o2_uchar *)0xC362378)->v) = 0x0;
                    (((struct o1_uchar *)0xC362378)->v) = 0x0;
                    (((struct o5_uchar *)0xC362378)->v) = 0x0;
                    return ((int (*)(int, int, int, int))(0xC01D7BA))(0xC362378, 0xC362382, a6, a7);
                }
                return ((int (*)(void))(0xC01D7D8))();
            }
            return ((int (*)(int, int, int, int))(0xC01D7D8))(0xC36237A, 0xC362384, 0xC362382, a7);
        }
        t0 = *(signed char *)0xC36237A;
        if ((unsigned char)t0 != 0) {
            t1 = 0xC36237A;
            t2 = 0xC362384;
            t3 = 0xC362382;
            if ((unsigned char)t0 != 1) {
            } else {
                t0 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x20);
                if ((signed char)t0 != 0) {
                    (((struct o7_uchar *)0xC362378)->v) = ((*(signed char *)0xC36237F) + 0x1);
                    FUN_0c0a3796(0x0, 0x4B);
                    *(volatile signed char *)0xC36237F;
                    (((struct o7_uchar *)0xC362378)->v) = (((int (*)(void))(FUN_0c0e6e5c))());
                } else {
                    t0 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x10);
                    if ((signed char)t0 != 0) {
                        (((struct o7_uchar *)0xC362378)->v) = ((*(signed char *)0xC36237F) - 1);
                        FUN_0c0a3796(0x0, 0x4B);
                        if ((int)(*(signed char *)0xC36237F) < 0) {
                            (((struct o7_uchar *)0xC362378)->v) = 0x2;
                        }
                    }
                }
                t0 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x8);
                if ((signed char)t0 == 0) {
                    t0 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x4);
                    if ((signed char)t0 != 0) {
                        t0 = *(signed char *)0xC36237F;
                        switch (t0) {
                        case 0:
                            (((struct o0_uchar *)0xC362378)->v) = 0x2;
                            (((struct o1_uchar *)0xC362378)->v) = 0x0;
                            (((struct o2_uchar *)0xC362378)->v) = 0x0;
                            (((struct o4_uchar *)0xC362378)->v) = 0x0;
                            break;
                        case 1:
                            FUN_0c0a3796(0x0, 0x4D);
                            (((struct o1_uchar *)0xC362378)->v) = 0x1;
                            (((struct o2_uchar *)0xC362378)->v) = 0x0;
                            (((struct o5_uchar *)0xC362378)->v) = 0x1;
                            break;
                        case 2:
                            (((struct o0_uchar *)0xC362378)->v) = 0x3;
                            (((struct o1_uchar *)0xC362378)->v) = 0x0;
                            (((struct o2_uchar *)0xC362378)->v) = 0x0;
                            (((struct o4_uchar *)0xC362378)->v) = 0x0;
                            break;
                        default:
                            (((struct o0_uchar *)0xC362378)->v) = 0x2;
                            (((struct o1_uchar *)0xC362378)->v) = 0x0;
                            (((struct o2_uchar *)0xC362378)->v) = 0x0;
                            (((struct o4_uchar *)0xC362378)->v) = 0x0;
                            break;
                        }
                    } else {
                        t0 = FUN_0c01e6b4((*(signed char *)0xC36237E));
                        if ((signed char)t0 != 0) {
                            (((struct o1_uchar *)0xC362378)->v) = 0x2;
                            (((struct o2_uchar *)0xC362378)->v) = 0x0;
                            (((struct o5_uchar *)0xC362378)->v) = 0x2;
                            (((struct o4_uchar *)0xC362378)->v) = 0x0;
                            (((struct oD_uchar *)0xC362378)->v) = 0x0;
                            (((struct oC_uchar *)0xC362378)->v) = 0x0;
                            (((struct oB_uchar *)0xC362378)->v) = 0x0;
                            (((struct oA_uchar *)0xC362378)->v) = 0x0;
                            t0 = 0xC362384;
                            t4 = 0xC362382;
                            t5 = 0xC362382;
                        }
                        t6 = t0;
                        t0 = t4;
                        t4 = t5;
                    }
                    t5 = t6;
                    t6 = t0;
                    t0 = t4;
                } else {
                    (((struct o0_uchar *)0xC362378)->v) = 0x2;
                    (((struct o1_uchar *)0xC362378)->v) = 0x0;
                    (((struct o2_uchar *)0xC362378)->v) = 0x0;
                    (((struct o4_uchar *)0xC362378)->v) = 0x0;
                }
                t1 = t5;
                t2 = t6;
                t3 = t0;
            }
            t0 = t1;
            t1 = t2;
            t2 = t3;
        } else {
            FUN_0c01dc58();
            (((struct o2_uchar *)0xC362378)->v) = ((*(signed char *)0xC36237A) + 0x1);
            t3 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x20);
            if ((signed char)t3 != 0) {
                (((struct o7_uchar *)0xC362378)->v) = ((*(signed char *)0xC36237F) + 0x1);
                FUN_0c0a3796(0x0, 0x4B);
                *(volatile signed char *)0xC36237F;
                (((struct o7_uchar *)0xC362378)->v) = (((int (*)(void))(FUN_0c0e6e5c))());
            } else {
                t3 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x10);
                if ((signed char)t3 != 0) {
                    (((struct o7_uchar *)0xC362378)->v) = ((*(signed char *)0xC36237F) - 1);
                    FUN_0c0a3796(0x0, 0x4B);
                    if ((int)(*(signed char *)0xC36237F) < 0) {
                        (((struct o7_uchar *)0xC362378)->v) = 0x2;
                    }
                }
            }
            t3 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x8);
            if ((signed char)t3 == 0) {
                t3 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x4);
                if ((signed char)t3 != 0) {
                    t3 = *(signed char *)0xC36237F;
                    switch (t3) {
                    case 0:
                        (((struct o0_uchar *)0xC362378)->v) = 0x2;
                        (((struct o1_uchar *)0xC362378)->v) = 0x0;
                        (((struct o2_uchar *)0xC362378)->v) = 0x0;
                        (((struct o4_uchar *)0xC362378)->v) = 0x0;
                        break;
                    case 1:
                        FUN_0c0a3796(0x0, 0x4D);
                        (((struct o1_uchar *)0xC362378)->v) = 0x1;
                        (((struct o2_uchar *)0xC362378)->v) = 0x0;
                        (((struct o5_uchar *)0xC362378)->v) = 0x1;
                        break;
                    case 2:
                        (((struct o0_uchar *)0xC362378)->v) = 0x3;
                        (((struct o1_uchar *)0xC362378)->v) = 0x0;
                        (((struct o2_uchar *)0xC362378)->v) = 0x0;
                        (((struct o4_uchar *)0xC362378)->v) = 0x0;
                        break;
                    default:
                        (((struct o0_uchar *)0xC362378)->v) = 0x2;
                        (((struct o1_uchar *)0xC362378)->v) = 0x0;
                        (((struct o2_uchar *)0xC362378)->v) = 0x0;
                        (((struct o4_uchar *)0xC362378)->v) = 0x0;
                        break;
                    }
                } else {
                    t3 = FUN_0c01e6b4((*(signed char *)0xC36237E));
                    if ((signed char)t3 != 0) {
                        (((struct o1_uchar *)0xC362378)->v) = 0x2;
                        (((struct o2_uchar *)0xC362378)->v) = 0x0;
                        (((struct o5_uchar *)0xC362378)->v) = 0x2;
                        (((struct o4_uchar *)0xC362378)->v) = 0x0;
                        (((struct oD_uchar *)0xC362378)->v) = 0x0;
                        (((struct oC_uchar *)0xC362378)->v) = 0x0;
                        (((struct oB_uchar *)0xC362378)->v) = 0x0;
                        (((struct oA_uchar *)0xC362378)->v) = 0x0;
                        t3 = 0xC362384;
                        t4 = 0xC362382;
                        t5 = 0xC362382;
                    }
                    t6 = t3;
                    t3 = t4;
                    t4 = t5;
                }
                t5 = t6;
                t6 = t3;
                t3 = t4;
            } else {
                (((struct o0_uchar *)0xC362378)->v) = 0x2;
                (((struct o1_uchar *)0xC362378)->v) = 0x0;
                (((struct o2_uchar *)0xC362378)->v) = 0x0;
                (((struct o4_uchar *)0xC362378)->v) = 0x0;
            }
            t0 = t5;
            t1 = t6;
            t2 = t3;
        }
    }
    FUN_0c01dd08(t0, t1, t2);
    return ((int (*)(void))(0xC01D7D8))();
}

int FUN_0c0165cc(int a4, int a5, int a6)
{
    int stk[5];

    register int R1;
    register int R3;
    int R5;
    int R6;
    register float F0;
    register float F2;
    register float F5;
    register float F6;
    register float F7;
    register float F8;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    v0_3 = a4;
    R5 = a5;
    R6 = a6;
    v0_2 = (0x0);
    v0_0 = (v0_3);
    if (((*(signed char *)((v0_3 + 0x8))) != 0)) goto L_C0165FC;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = v0_2;
    (((struct oEE_ushort *)(v0_0))->v) = v0_2;
    (((struct oF0_ushort *)(v0_0))->v) = v0_2;
    L_C0165FC:;
    v0_4 = (((((struct o2E0_int *)(v0_0))->v)));
    v0_1 = (0xC7F2EE0);
    v0_3 = (0xC1169D8);
    if (!(((int)(*(short *)0xC7F2EEE) >= (int)(*(int *)((((((((((struct oEC_short *)(v0_0))->v)) << 2) << 2) << 1) + 0xC1169D8) + 0x0)))))) goto L_C0167AA;
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) + 0x1);
    if (((*(int *)((((((((((struct oEC_short *)(v0_0))->v)) << 2) << 2) << 1) + v0_3) + 0x4))) != -1)) goto L_C01663A;
    goto L_C0169C4;
    L_C0167AA:;
    FUN_0c062050((v0_0 + 0x38), (v0_0 + 0x38), (v0_0 + 0x44));
    FUN_0c062050((v0_0 + 0x20), (v0_0 + 0x20), (v0_0 + 0x38));
    FUN_0c0622c6((v0_0 + 0x2C), (v0_0 + 0x2C), (v0_4 + 0x34));
    w0_0 = (0.149999991f);
    if ((((*(short *)((v0_1 + 0xE))) & 64) == 0)) goto L_C016800;
    v0_5 = (0x24);
    w0_0 = ((((((struct o24_float *)(v0_0))->v)) + w0_0));
    L_C016806:;
    *(float *)((v0_0 + v0_5)) = w0_0;
    v0_4 = *(short *)0xC361BFC;
    v0_3 = (0xC361BF0);
    R5 = (0x2);
    R6 = ((unsigned short)v0_4);
    if ((((unsigned short)v0_4 & 0x2) == 0)) goto L_C01681C;
    if (((0x200 & R6) != 0)) goto L_C016830;
    L_C01681C:;
    v0_5 = (0x20);
    if ((((unsigned short)((((struct o20_short *)(v0_3))->v)) & R5) == 0)) goto L_C016868;
    if ((((unsigned short)(*(short *)((v0_3 + v0_5))) & 0x200) == 0)) goto L_C016868;
    L_C016830:;
    if ((((((struct oEE_short *)(v0_0))->v)) != 0)) goto L_C016868;
    v0_3 = (0xC7F2EEE);
    if (((int)(*(short *)0xC7F2EEE) <= (int)0x30C)) goto L_C016868;
    if (((int)(*(short *)((v0_3 + 0x0))) >= (int)0x111C)) goto L_C016868;
    (((struct oEE_ushort *)(v0_0))->v) = 0x1;
    v0_3 = (((struct o2E4_int *)(v0_0))->v);
    *(unsigned int *)((v0_3 + 0x34)) = (*(int *)((v0_0 + 0x2C)));
    (((struct o2C_float *)(v0_3))->v) = ((((struct o24_float *)(v0_0))->v));
    (((struct o30_float *)(v0_3))->v) = ((((struct o28_float *)(v0_0))->v));
    v0_3 = (v0_3);
    L_C016868:;
    v0_5 = (0xEE);
    v0_4 = (0xC0DF4D0);
    if ((((((struct oEE_short *)(v0_0))->v)) == 0)) goto L_C0168E8;
    *(unsigned short *)((v0_0 + v0_5)) = ((*(short *)((v0_0 + v0_5))) + 0x1);
    if (((int)(*(short *)((v0_0 + v0_5))) < (int)0x3D)) goto L_C0168A0;
    *(unsigned short *)((v0_0 + v0_5)) = v0_2;
    *(unsigned short *)((v0_0 + (v0_5 + 0x2))) = v0_2;
    v0_3 = (((struct o2E4_int *)(v0_0))->v);
    *(unsigned int *)((v0_0 + 0x2C)) = (*(int *)((v0_3 + 0x34)));
    (((struct o24_float *)(v0_0))->v) = ((((struct o2C_float *)(v0_3))->v));
    (((struct o28_float *)(v0_0))->v) = ((((struct o30_float *)(v0_3))->v));
    v0_3 = (v0_3);
    L_C0168E8:;
    v0_3 = (((struct o2E8_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 4)) = v0_3;
    FUN_0c062954(((((struct o80_int *)((*(int *)0xC6649D8)))->v)), ((((struct o9C_int *)(v0_3))->v)));
    v0_3 = (((((*(short *)((v0_1 + 0xE))) << 8) << 2) << 2));
    v0_4 = (0xC062ABE);
    v0_4 = (0xE38);
    w0_0 = (14.0f);
    L_C016972:;
    v0_5 = (FUN_0c06297a()) == 0;
    if (v0_5) goto L_C01694C;
    if (((int)(*(short *)((v0_1 + 0xE))) < (int)0x19C8)) goto L_C0169A6;
    v0_3 = (v0_2);
    R5 = (0x28F);
    L_C01699E:;
    if (!(((int)v0_3 < (int)(*(signed char *)((v0_0 + 0x2DC)))))) goto L_C0169A6;
    v0_2 = *(int *)((((v0_3 << 2) + (0x2E0 + v0_0)) + 0x0));
    *(unsigned int *)((v0_2 + 0x18)) = ((*(int *)((v0_2 + 0x18))) - R5);
    v0_3 = ((v0_3 + 0x1));
    R6 = (v0_2);
    goto L_C01699E;
    L_C0169A6:;
    v0_2 = (((struct o2EC_int *)(v0_0))->v);
    *(unsigned int *)((v0_2 + 0x18)) = ((*(int *)((v0_2 + 0x18))) + 0xB6);
    *(unsigned char *)((v0_2 + 0x0)) = ((*(signed char *)((v0_1 + 0xE))) & 0x1);
    v0_1 = *(signed char *)((v0_1 + 0x5));
    v0_5 = ((unsigned char)v0_1);
    v0_3 = (v0_2);
    if (((int)(unsigned char)v0_1 <= (int)0x1)) goto L_C0169CA;
    L_C0169C4:;
    v0_5 = ((((int (*)(int, int, int))(FUN_0c059330))(v0_0, R5, R6)));
    L_C0169CA:;
    return v0_5;
    L_C01694C:;
    FUN_0c062a7e((((int)stk + 4) + 0x4));
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + ((((FUN_0c0df4d0(v0_3)) * (*(float *)(((int)stk + 16)))) / w0_0)));
    FUN_0c062abe((((int)stk + 4) + 0x4));
    v0_3 = ((v0_3 + v0_4));
    goto L_C016972;
    L_C0168A0:;
    *(int *)((int)stk + 0) = (v0_0 + 0x24);
    w0_0 = ((((struct o24_float *)(v0_0))->v));
    w0_0 = w0_0 + 30.0f * (FUN_0c0dfa50(((((struct oF0_short *)(v0_0))->v))));
    (((struct o24_float *)(v0_0))->v) = w0_0;
    *(int *)((int)stk + 0) = (0x28 + v0_0);
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) - (((FUN_0c0df4d0(((((struct oF0_short *)(v0_0))->v)))) * 30.0f)));
    (((struct oF0_ushort *)(v0_0))->v) = (((((struct oF0_short *)(v0_0))->v)) + 0x444);
    *(unsigned int *)((v0_0 + 0x2C)) = ((*(int *)((v0_0 + 0x2C))) + 0x444);
    v0_3 = (0x444);
    goto L_C0168E8;
    L_C016800:;
    v0_5 = (0x24);
    w0_0 = ((((((struct o24_float *)(v0_0))->v)) - w0_0));
    goto L_C016806;
    L_C01663A:;
    v0_7 = (((struct oEC_short *)(v0_0))->v);
    v0_5 = *(int *)((((((((short)v0_7 - 1) << 2) << 2) << 1) + v0_3) + 0x0));
    v0_6 = *(int *)(((((((short)v0_7 << 2) << 2) << 1) + v0_3) + 0x0));
    *(unsigned int *)((v0_4 + 0x34)) = (int)((float)((*(int *)(((((((short)v0_7 << 2) << 2) << 1) + v0_3) + 0x14))) - (*(int *)((v0_0 + 0x2C)))) / (float)(v0_6 - v0_5));
    *(unsigned int *)((v0_4 + 0x38)) = (int)((float)((*(int *)((((((((((struct oEC_short *)(v0_0))->v)) << 2) << 2) << 1) + v0_3) + 0x18))) - (*(int *)((v0_0 + 0x30)))) / (float)(v0_6 - v0_5));
    v0_7 = *(int *)((v0_0 + 0x34));
    v0_8 = *(int *)((((((((((struct oEC_short *)(v0_0))->v)) << 2) << 2) << 1) + v0_3) + 0x1C));
    *(unsigned int *)((v0_4 + 0x3C)) = (int)((float)(v0_8 - v0_7) / (float)(v0_6 - v0_5));
    R5 = (v0_3);
    w0_0 = ((float)(v0_6 - v0_5));
    FPUL_ = ((int)((float)(v0_8 - v0_7) / (float)(v0_6 - v0_5)));
    if (((*(int *)((((((((((struct oEC_short *)(v0_0))->v)) << 2) << 2) << 1) + v0_3) + 0x4))) != 1)) goto L_C01672C;
    (((struct o38_float *)(v0_0))->v) = ((((((struct o8_float *)((R5 + (((((((struct oEC_short *)(v0_0))->v)) << 2) << 2) << 1))))->v)) - ((((struct o20_float *)(v0_0))->v))) / w0_0);
    (((struct o3C_float *)(v0_0))->v) = ((((((struct oC_float *)(((((((((struct oEC_short *)(v0_0))->v)) << 2) << 2) << 1) + v0_3)))->v)) - ((((struct o24_float *)(v0_0))->v))) / w0_0);
    (((struct o40_float *)(v0_0))->v) = ((((((struct o10_float *)((v0_3 + (((((((struct oEC_short *)(v0_0))->v)) << 2) << 2) << 1))))->v)) - ((((struct o28_float *)(v0_0))->v))) / w0_0);
    (((struct o44_float *)(v0_0))->v) = 0.0f;
    (((struct o48_float *)(v0_0))->v) = 0.0f;
    (((struct o4C_float *)(v0_0))->v) = 0.0f;
    goto L_C0167AA;
    L_C01672C:;
    w0_1 = (w0_0 * ((((struct o38_float *)(v0_0))->v)));
    w0_1 = (w0_1 * 2.0f);
    (((struct o44_float *)(v0_0))->v) = (((((((struct o8_float *)((R5 + (((((((struct oEC_short *)(v0_0))->v)) << 2) << 2) << 1))))->v)) - ((((struct o20_float *)(v0_0))->v))) - w0_1) / (w0_0 * w0_0));
    w0_1 = (w0_0 * ((((struct o3C_float *)(v0_0))->v)));
    w0_1 = (w0_1 * 2.0f);
    (((struct o48_float *)(v0_0))->v) = (((((((struct oC_float *)(((((((((struct oEC_short *)(v0_0))->v)) << 2) << 2) << 1) + v0_3)))->v)) - ((((struct o24_float *)(v0_0))->v))) - w0_1) / (w0_0 * w0_0));
    w0_1 = (w0_0 * ((((struct o40_float *)(v0_0))->v)));
    w0_1 = (w0_1 * 2.0f);
    (((struct o4C_float *)(v0_0))->v) = (((((((struct o10_float *)((v0_3 + (((((((struct oEC_short *)(v0_0))->v)) << 2) << 2) << 1))))->v)) - ((((struct o28_float *)(v0_0))->v))) - w0_1) / (w0_0 * w0_0));
    goto L_C0167AA;
}

int FUN_0c0bea16(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0555dc();
    if (t0 == 1) {
        *(unsigned char *)((a4 + 0xF)) = 0xFFFFFFFF;
    }
    *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x2;
    *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x2;
    (((struct o105_uchar *)(a4))->v) = 0x2;
    if ((*(signed char *)((a4 + 0xF))) != 0) {
        return FUN_0c059330(a4);
    }
    if ((*(signed char *)((a4 + 0x8))) != 0) {
    } else {
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - 0.049999997f);
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.099999994f);
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) - 0.049999997f);
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            t0 = (((struct o2E4_int *)(a4))->v);
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.0199999996f);
            t0 = (((struct o2E4_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.0199999996f);
            t0 = (((struct o2E4_int *)(a4))->v);
            (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.0199999996f);
            t0 = (((struct oEE_short *)(a4))->v);
            (((struct o40_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((float)t0 / 2.0f);
            if (!(((float)t0 / 2.0f) > 0.0f)) {
                (((struct o40_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            }
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
        }
    } else {
        t0 = (((struct o2E4_int *)(a4))->v);
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.0199999996f);
        t0 = (((struct o2E4_int *)(a4))->v);
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.0199999996f);
        t0 = (((struct o2E4_int *)(a4))->v);
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.0199999996f);
        t0 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
        if ((short)((t0 - 1) + 0x1) == 0) {
            (((struct oEE_ushort *)(a4))->v) = 0x2;
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        }
    }
    t0 = *(signed char *)((a4 + 0xA));
    switch (t0) {
    case 0:
        t0 = (((struct oF0_short *)(a4))->v);
        (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct oF0_ushort *)(a4))->v) = 0x12;
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        }
        break;
    case 1:
        t0 = (((struct o2E8_int *)(a4))->v);
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.0399999991f);
        t0 = (((struct o2E8_int *)(a4))->v);
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.00999999978f);
        t0 = (((struct o2E8_int *)(a4))->v);
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.0399999991f);
        t0 = (((struct o2E8_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x1000);
        t0 = (((struct oF0_short *)(a4))->v);
        (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
        if ((short)((t0 - 1) + 0x1) == 0) {
            (((struct oF0_ushort *)(a4))->v) = 0x2;
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        }
        break;
    case 2:
        t0 = (((struct o2E8_int *)(a4))->v);
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.0399999991f);
        t0 = (((struct o2E8_int *)(a4))->v);
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.00999999978f);
        t0 = (((struct o2E8_int *)(a4))->v);
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.0399999991f);
        t0 = (((struct o2E8_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x1000);
        t0 = (((struct oF0_short *)(a4))->v);
        (((struct o40_float *)(((((struct o2E8_int *)(a4))->v))))->v) = ((float)t0 / 2.0f);
        if (!(((float)t0 / 2.0f) > 0.0f)) {
            (((struct o40_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 0.0f;
            *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        }
        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
        break;
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = t0;
            } else {
                t0 = (((struct o2EC_int *)(a4))->v);
                (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.0399999991f);
                t0 = (((struct o2EC_int *)(a4))->v);
                (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.00999999978f);
                t0 = (((struct o2EC_int *)(a4))->v);
                (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.0399999991f);
                t0 = (((struct o2EC_int *)(a4))->v);
                *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x1000);
                t0 = (((struct oF2_short *)(a4))->v);
                (((struct o40_float *)(((((struct o2EC_int *)(a4))->v))))->v) = ((float)t0 / 2.0f);
                if (!(((float)t0 / 2.0f) > 0.0f)) {
                    (((struct o40_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 0.0f;
                    *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((a4 + 0xF)) = 0xA;
                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                }
                (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) - 1);
                t1 = 0xF2;
            }
            t0 = t1;
        } else {
            t1 = (((struct o2EC_int *)(a4))->v);
            (((struct o1C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) + 0.0399999991f);
            t1 = (((struct o2EC_int *)(a4))->v);
            (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) + 0.00999999978f);
            t1 = (((struct o2EC_int *)(a4))->v);
            (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) + 0.0399999991f);
            t1 = (((struct o2EC_int *)(a4))->v);
            *(unsigned int *)((t1 + 0x14)) = ((*(int *)((t1 + 0x14))) + 0x1000);
            t1 = (((struct oF2_short *)(a4))->v);
            (((struct oF2_ushort *)(a4))->v) = (t1 - 1);
            t2 = 0xF2;
            if ((short)((t1 - 1) + 0x1) == 0) {
                (((struct oF2_ushort *)(a4))->v) = 0x2;
                t1 = *(signed char *)((a4 + 0xB));
                *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
        t2 = 0xF2;
        if ((short)(t0 - 1) == 0) {
            (((struct oF2_ushort *)(a4))->v) = 0x12;
            t0 = *(signed char *)((a4 + 0xB));
            *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c01025c(int a4, int a5, int a6, int a7)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_5 = a4;
    v0_6 = a5;
    v0_7 = a6;
    v0_8 = a7;
    v0_2 = (v0_6);
    v0_3 = (0x1);
    v0_0 = (0x0);
    v0_4 = (0xC361A60);
    v0_9 = (((short)((((v0_5 << 2) + v0_5) << 2) << 1) + 0xC361A60));
    v0_1 = (v0_5);
    v0_5 = (0x2);
    v0_10 = (0xC0F32BE);
    if ((v0_6 == 1)) goto L_C0102EA;
    if ((v0_2 != 2)) goto L_C01029A;
    *(unsigned int *)((v0_9 + 0x4)) = v0_6;
    *(unsigned int *)((v0_9 + 0x8)) = 0xFFFFFF01;
    *(unsigned int *)((v0_9 + 0x14)) = v0_0;
    *(unsigned int *)((v0_9 + 0x18)) = v0_0;
    *(unsigned int *)((v0_9 + 0x1C)) = v0_0;
    *(unsigned int *)((v0_9 + 0x20)) = v0_0;
    *(unsigned int *)((v0_9 + 0x24)) = v0_0;
    if ((((((struct o4_int *)0xC361BA4)->v)) == v0_1)) goto L_C010404;
    L_C010588:;
    (((struct o0_uint *)0xC361BA4)->v) = v0_0;
    L_C01058C:;
    return 0x0;
    L_C010404:;
    (((struct o4_uint *)0xC361BA4)->v) = 0xFFFFFFFF;
    goto L_C010588;
    L_C01029A:;
    if ((v0_2 != 9)) goto L_C0102A2;
    *(unsigned int *)((v0_9 + 0x8)) = v0_7;
    if ((v0_7 != 0)) goto L_C010588;
    *(unsigned int *)(((int)stk + 4)) = ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4);
    *(int *)((int)stk + 0) = (0x20 + ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4));
    *(unsigned int *)(((0x20 + ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4)) + 0x0)) = (buGetDiskFree(v0_1, 0x0));
    v0_2 = *(int *)(((int)stk + 4));
    *(int *)((int)stk + 0) = (0x24 + v0_2);
    *(unsigned int *)(((0x24 + v0_2) + 0x0)) = (buGetDiskFree(v0_1, 0x1));
    goto L_C010588;
    L_C0102A2:;
    if ((v0_2 != 11)) goto L_C0102AA;
    *(unsigned int *)((v0_9 + 0x8)) = v0_7;
    goto L_C010588;
    L_C0102AA:;
    if ((v0_2 != 12)) goto L_C0102B2;
    *(unsigned int *)((v0_9 + 0x8)) = v0_7;
    if ((v0_7 == 0)) goto L_C01041A;
    goto L_C010588;
    L_C01041A:;
    v0_6 = buIsExistFile(v0_1, 0xC116210);
    v0_2 = (v0_6);
    if ((v0_6 == 0xFFFFFF05)) goto L_C010460;
    if ((v0_2 != 0)) goto L_C010472;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x14)) = v0_5;
    L_C010472:;
    *(unsigned int *)(((int)stk + 4)) = ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4);
    *(int *)((int)stk + 0) = (0x20 + ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4));
    *(unsigned int *)(((0x20 + ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4)) + 0x0)) = (buGetDiskFree(v0_1, 0x0));
    v0_2 = *(int *)(((int)stk + 4));
    *(int *)((int)stk + 0) = (0x24 + v0_2);
    *(unsigned int *)(((0x24 + v0_2) + 0x0)) = (buGetDiskFree(v0_1, 0x1));
    goto L_C010588;
    L_C010460:;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x14)) = v0_3;
    goto L_C010472;
    L_C0102B2:;
    if ((v0_2 != 13)) goto L_C0102BA;
    *(unsigned int *)((v0_9 + 0x8)) = v0_7;
    if ((v0_7 != 0)) goto L_C010588;
    v0_6 = buFindExecFile(v0_1, 0xC361BB0);
    v0_2 = (v0_6);
    if ((v0_6 == 0xFFFFFF05)) goto L_C010538;
    if ((v0_2 != 0)) goto L_C01054C;
    v0_6 = buIsExistFile(v0_1, 0xC116220);
    v0_2 = (v0_6);
    if ((v0_6 == 0xFFFFFF05)) goto L_C010522;
    if ((v0_2 != 0)) goto L_C01054C;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x18)) = v0_5;
    v0_5 = (((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4));
    L_C01054A:;
    *(unsigned int *)((v0_5 + 0x1C)) = v0_3;
    L_C01054C:;
    *(unsigned int *)(((int)stk + 4)) = ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4);
    *(int *)((int)stk + 0) = (0x20 + ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4));
    *(unsigned int *)(((0x20 + ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4)) + 0x0)) = (buGetDiskFree(v0_1, 0x0));
    v0_2 = *(int *)(((int)stk + 4));
    *(int *)((int)stk + 0) = (0x24 + v0_2);
    *(unsigned int *)(((0x24 + v0_2) + 0x0)) = (buGetDiskFree(v0_1, 0x1));
    goto L_C010588;
    L_C010522:;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x18)) = v0_3;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x1C)) = v0_5;
    v0_5 = (((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4));
    goto L_C01054C;
    L_C010538:;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x18)) = v0_3;
    v0_5 = (((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4));
    goto L_C01054A;
    L_C0102BA:;
    if ((v0_2 != 14)) goto L_C0102C2;
    *(unsigned int *)((v0_9 + 0x8)) = v0_7;
    goto L_C010588;
    L_C0102C2:;
    if ((v0_2 == 18)) goto L_C0102D2;
    if ((v0_2 != 20)) goto L_C0102CE;
    *(unsigned int *)((v0_9 + 0x8)) = v0_7;
    goto L_C010588;
    L_C0102CE:;
    goto L_C01058C;
    L_C0102D2:;
    *(unsigned int *)((v0_9 + 0x0)) = v0_1;
    *(unsigned int *)((v0_9 + 0x4)) = v0_6;
    *(unsigned int *)((v0_9 + 0x8)) = 0xFFFF0000;
    *(unsigned int *)((v0_9 + 0xC)) = v0_7;
    *(unsigned int *)((v0_9 + 0x10)) = v0_8;
    *(unsigned int *)((v0_9 + 0x14)) = v0_0;
    *(unsigned int *)((v0_9 + 0x18)) = v0_0;
    *(unsigned int *)((v0_9 + 0x1C)) = v0_0;
    *(unsigned int *)((v0_9 + 0x20)) = v0_0;
    *(unsigned int *)((v0_9 + 0x24)) = v0_0;
    goto L_C01058C;
    L_C0102EA:;
    *(unsigned int *)((v0_9 + 0x4)) = v0_6;
    *(unsigned int *)((v0_9 + 0x8)) = v0_7;
    if ((v0_7 == 0)) goto L_C0102F6;
    goto L_C010588;
    L_C0102F6:;
    v0_6 = buIsExistFile(v0_1, 0xC116210);
    v0_2 = (v0_6);
    if ((v0_6 == 0xFFFFFF05)) goto L_C010334;
    if ((v0_2 != 0)) goto L_C010346;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x14)) = v0_5;
    L_C010346:;
    v0_6 = buFindExecFile(v0_1, 0xC361BB0);
    v0_2 = (v0_6);
    if ((v0_6 == 0xFFFFFF05)) goto L_C010394;
    if ((v0_2 != 0)) goto L_C0103A8;
    v0_6 = buIsExistFile(v0_1, 0xC116220);
    v0_2 = (v0_6);
    if ((v0_6 == 0xFFFFFF05)) goto L_C01037E;
    if ((v0_2 != 0)) goto L_C0103A8;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x18)) = v0_5;
    v0_5 = (((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4));
    L_C0103A6:;
    *(unsigned int *)((v0_5 + 0x1C)) = v0_3;
    L_C0103A8:;
    *(unsigned int *)(((int)stk + 4)) = ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4);
    *(int *)((int)stk + 0) = (0x20 + ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4));
    *(unsigned int *)(((0x20 + ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4)) + 0x0)) = (buGetDiskFree(v0_1, 0x0));
    v0_2 = *(int *)(((int)stk + 4));
    *(int *)((int)stk + 0) = (0x24 + v0_2);
    *(unsigned int *)(((0x24 + v0_2) + 0x0)) = (buGetDiskFree(v0_1, 0x1));
    (((struct o4_uint *)0xC361BA4)->v) = v0_1;
    FUN_0c0101f0(v0_1);
    goto L_C010588;
    L_C01037E:;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x18)) = v0_3;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x1C)) = v0_5;
    v0_5 = (((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4));
    goto L_C0103A8;
    L_C010394:;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x18)) = v0_3;
    v0_5 = (((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4));
    goto L_C0103A6;
    L_C010334:;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x14)) = v0_3;
    goto L_C010346;
}

int FUN_0c059d7e(int a4, int a5, int a6, int a7)
{

    return ((int (*)(int, int, int, int))(0xC05A112))(a4, a5, a6, a7);
}

int FUN_0c06bc80(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return FUN_0c06bc54(a4);
                }
                return ((int (*)(int, int, int, int))(0xC06BAEC))(a4, a5, a6, a7);
            }
            return FUN_0c06ba00(a4);
        }
        return ((int (*)(int, int, int, int))(0xC06B98C))(a4, a5, a6, a7);
    }
    return FUN_0c06b87a(a4);
}
