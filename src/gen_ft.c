/* Straight-line functions with calls and guards (batch gen_ft): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c015798(int);
int FUN_0c059330(int, int, int, int);
int FUN_0c0623a6(int, int, int);
int FUN_0c0c264a(int);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e6e5c(void);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(int);
int FUN_0c013dba(int a4, int a5, int a6, int a7);
int FUN_0c04ab2c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_0c0c269c(int a4, int a5, int a6, int a7);
int FUN_0c0a66ec(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c044b94(int a4, int a5, int a6, int a7);

int FUN_0c013dba(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;
    int t3;
    register int t4;
    register int t5;
    register float u0;

    t4 = *(signed char *)((a4 + 0x8));
    if (t4 != 0) {
        if (t4 == 1) {
            FUN_0c015798(a4);
            *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + ((((struct oEE_short *)(a4))->v)));
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + ((((struct oF0_short *)(a4))->v)));
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + ((((struct oF2_short *)(a4))->v)));
            *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) & 0xFFFF);
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) & 0xFFFF);
            (((struct o5C_float *)(a4))->v) = (*(float *)0xC361C60);
            t4 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t4 - 1);
            t5 = 0xC7F3040;
            if (((short)(t4 - 1) != 0) && ((t0 = (((struct o0_short *)0xC7F3040)->v), t0 == 0) && (t1 = (((struct o2_short *)0xC7F3040)->v), t1 == 0))) {
            } else {
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t5 = (t0 + 0x1);
            }
            return t5;
        }
        return FUN_0c059330(a4, a5, a6, a7);
    }
    FUN_0c0df940();
    
    t0 = FUN_0c0e6f24();
    u0 = (float)t0;
    if ((int)t0 < 0) {
        u0 = ((float)t0 + 4.2949673e+09f);
    }
    (((struct o20_float *)(a4))->v) = (u0 + -128.0f);
    (((struct o24_float *)(a4))->v) = 168.0f;
    (((struct o28_float *)(a4))->v) = -14.3099995f;
    FUN_0c0df940();
    
    (((struct oEE_ushort *)(a4))->v) = ((FUN_0c0e6f24()) - 256);
    FUN_0c0df940();
    
    (((struct oF0_ushort *)(a4))->v) = ((FUN_0c0e6f24()) - 256);
    FUN_0c0df940();
    
    (((struct oF2_ushort *)(a4))->v) = ((FUN_0c0e6f24()) - 256);
    FUN_0c0df940();
    
    t0 = FUN_0c0e6f24();
    (((struct o38_float *)(a4))->v) = (*(float *)(((((t0 << 2) << 1) + 0xC116700) + 0x0)));
    (((struct o3C_float *)(a4))->v) = ((((struct o4_float *)((((t0 << 2) << 1) + 0xC116700)))->v));
    (((struct o40_float *)(a4))->v) = 0.0f;
    FUN_0c0df940();
    
    t0 = FUN_0c0e6f24();
    if (t0 != 0) {
        u0 = ((((struct o38_float *)(a4))->v));
        u0 *= -1.0f;
        (((struct o38_float *)(a4))->v) = u0;
    }
    FUN_0c0df940();
    
    t0 = FUN_0c0e6f24();
    (((struct o50_float *)(a4))->v) = (*(float *)((((t0 << 2) << 1) + ((((((*(signed char *)((a4 + 0x4))) << 2) << 2) << 2) << 1) + 0xC116600))));
    (((struct o54_float *)(a4))->v) = ((((struct o4_float *)((((((((*(signed char *)((a4 + 0x4))) << 2) << 2) << 2) << 1) + 0xC116600) + ((t0 << 2) << 1))))->v));
    (((struct o58_float *)(a4))->v) = ((((struct o4_float *)(((0xC116600 + (((((*(signed char *)((a4 + 0x4))) << 2) << 2) << 2) << 1)) + ((t0 << 2) << 1))))->v));
    (((struct oEC_ushort *)(a4))->v) = 0x78;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    FUN_0c015798(a4);
    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + ((((struct oEE_short *)(a4))->v)));
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + ((((struct oF0_short *)(a4))->v)));
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + ((((struct oF2_short *)(a4))->v)));
    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) & 0xFFFF);
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) & 0xFFFF);
    (((struct o5C_float *)(a4))->v) = (*(float *)0xC361C60);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xC7F3040;
    if (((short)(t0 - 1) != 0) && ((t2 = (((struct o0_short *)0xC7F3040)->v), t2 == 0) && (t3 = (((struct o2_short *)0xC7F3040)->v), t3 == 0))) {
    } else {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c04ab2c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t0 = 0x4;
    if ((*(signed char *)((a4 + 0x4))) != 0) {
        t0 = 0x2;
    }
    if ((*(signed char *)((a4 + 0x8))) != 0) {
        return FUN_0c059330(a4, a5, a6, a7);
    }
    if ((int)t0 > 0) {
        t1 = 0x0;
        for (;;) {
            t2 = *(int *)((((t1 << 2) + (0x2E0 + a4)) + 0x0));
            switch (t1) {
            case 0:
                u0 = ((((struct o1C_float *)(t2))->v));
                u0 = (u0 + 2.0f);
                (((struct o1C_float *)(t2))->v) = u0;
                u1 = ((((struct o20_float *)(t2))->v));
                u1 = (u1 + 2.0f);
                (((struct o20_float *)(t2))->v) = u1;
                if ((int)((((struct oEC_short *)(a4))->v)) > (int)0xA) {
                    u0 = ((((struct o44_float *)(t2))->v));
                    u0 = (u0 - 0.099999994f);
                    (((struct o44_float *)(t2))->v) = u0;
                    u1 = ((((struct o48_float *)(t2))->v));
                    u1 = (u1 - 0.099999994f);
                    (((struct o48_float *)(t2))->v) = u1;
                    u0 = ((((struct o4C_float *)(t2))->v));
                    u1 = 0.0f;
                    u0 = (u0 - 0.099999994f);
                    (((struct o4C_float *)(t2))->v) = u0;
                    u0 = ((((struct o44_float *)(t2))->v));
                    t3 = !(u0 > u1);
                    u0 = 0.0f;
                    if (t3) {
                        (((struct o44_float *)(t2))->v) = 0.0f;
                    }
                    u1 = ((((struct o48_float *)(t2))->v));
                    t3 = !(u1 > u0);
                    u0 = 0.0f;
                    if (t3) {
                        (((struct o48_float *)(t2))->v) = 0.0f;
                    }
                    u1 = ((((struct o4C_float *)(t2))->v));
                    if (!(u1 > u0)) {
                        (((struct o4C_float *)(t2))->v) = 0.0f;
                    }
                }
                if ((int)((((struct oEC_short *)(a4))->v)) > (int)0x14) {
                    *(unsigned char *)((t2 + 0x0)) = 0x0;
                }
                break;
            case 1:
                if ((int)((((struct oEC_short *)(a4))->v)) <= (int)0xA) {
                } else {
                    *(unsigned char *)((t2 + 0x0)) = 0x1;
                    u0 = ((((struct o1C_float *)(t2))->v));
                    u0 = (u0 + 2.0f);
                    (((struct o1C_float *)(t2))->v) = u0;
                    u1 = ((((struct o20_float *)(t2))->v));
                    u1 = (u1 + 2.0f);
                    (((struct o20_float *)(t2))->v) = u1;
                    if ((int)((((struct oEC_short *)(a4))->v)) <= (int)0x14) {
                    } else {
                        u0 = ((((struct o44_float *)(t2))->v));
                        u0 = (u0 - 0.099999994f);
                        (((struct o44_float *)(t2))->v) = u0;
                        u1 = ((((struct o48_float *)(t2))->v));
                        u1 = (u1 - 0.099999994f);
                        (((struct o48_float *)(t2))->v) = u1;
                        u0 = ((((struct o4C_float *)(t2))->v));
                        u1 = 0.0f;
                        u0 = (u0 - 0.099999994f);
                        (((struct o4C_float *)(t2))->v) = u0;
                        u0 = ((((struct o44_float *)(t2))->v));
                        t3 = !(u0 > u1);
                        u0 = 0.0f;
                        if (t3) {
                            (((struct o44_float *)(t2))->v) = 0.0f;
                        }
                        u1 = ((((struct o48_float *)(t2))->v));
                        t3 = !(u1 > u0);
                        u0 = 0.0f;
                        if (t3) {
                            (((struct o48_float *)(t2))->v) = 0.0f;
                        }
                        u1 = ((((struct o4C_float *)(t2))->v));
                        if (!(u1 > u0)) {
                            (((struct o4C_float *)(t2))->v) = 0.0f;
                        }
                    }
                }
                break;
            case 2:
                t3 = (*(int *)((t2 + 0x14)));
                t3 = (t3 - 0xE39);
                *(unsigned int *)((t2 + 0x14)) = t3;
                u0 = ((((struct o1C_float *)(t2))->v));
                u0 = (u0 + 0.199999988f);
                (((struct o1C_float *)(t2))->v) = u0;
                u1 = ((((struct o20_float *)(t2))->v));
                u1 = (u1 - 0.049999997f);
                (((struct o20_float *)(t2))->v) = u1;
                u0 = ((((struct o24_float *)(t2))->v));
                u0 = (u0 + 0.199999988f);
                (((struct o24_float *)(t2))->v) = u0;
                if ((int)((((struct oEC_short *)(a4))->v)) > (int)0xA) {
                    u0 = ((((struct o44_float *)(t2))->v));
                    u0 = (u0 - 0.099999994f);
                    (((struct o44_float *)(t2))->v) = u0;
                    u1 = ((((struct o48_float *)(t2))->v));
                    u1 = (u1 - 0.099999994f);
                    (((struct o48_float *)(t2))->v) = u1;
                    u0 = ((((struct o4C_float *)(t2))->v));
                    u1 = 0.0f;
                    u0 = (u0 - 0.099999994f);
                    (((struct o4C_float *)(t2))->v) = u0;
                    u0 = ((((struct o44_float *)(t2))->v));
                    t3 = !(u0 > u1);
                    u0 = 0.0f;
                    if (t3) {
                        (((struct o44_float *)(t2))->v) = 0.0f;
                    }
                    u1 = ((((struct o48_float *)(t2))->v));
                    t3 = !(u1 > u0);
                    u0 = 0.0f;
                    if (t3) {
                        (((struct o48_float *)(t2))->v) = 0.0f;
                    }
                    u1 = ((((struct o4C_float *)(t2))->v));
                    if (!(u1 > u0)) {
                        (((struct o4C_float *)(t2))->v) = 0.0f;
                    }
                }
                u0 = 0.0f;
                u1 = ((((struct o20_float *)(t2))->v));
                if (!(u1 > u0)) {
                    *(unsigned char *)((t2 + 0x0)) = 0x0;
                }
                break;
            case 3:
                t3 = ((((struct oEC_short *)(a4))->v));
                if ((int)t3 > (int)0xA) {
                    *(unsigned char *)((t2 + 0x0)) = 0x1;
                    t3 = (*(int *)((t2 + 0x14)));
                    t3 = (t3 - 0xE39);
                    *(unsigned int *)((t2 + 0x14)) = t3;
                    u0 = ((((struct o1C_float *)(t2))->v));
                    u0 = (u0 + 0.199999988f);
                    (((struct o1C_float *)(t2))->v) = u0;
                    u1 = ((((struct o20_float *)(t2))->v));
                    u1 = (u1 - 0.049999997f);
                    (((struct o20_float *)(t2))->v) = u1;
                    u0 = ((((struct o24_float *)(t2))->v));
                    u0 = (u0 + 0.199999988f);
                    (((struct o24_float *)(t2))->v) = u0;
                    if ((int)((((struct oEC_short *)(a4))->v)) > (int)0x14) {
                        u0 = ((((struct o44_float *)(t2))->v));
                        u0 = (u0 - 0.099999994f);
                        (((struct o44_float *)(t2))->v) = u0;
                        u1 = ((((struct o48_float *)(t2))->v));
                        u1 = (u1 - 0.099999994f);
                        (((struct o48_float *)(t2))->v) = u1;
                        u0 = ((((struct o4C_float *)(t2))->v));
                        u1 = 0.0f;
                        u0 = (u0 - 0.099999994f);
                        (((struct o4C_float *)(t2))->v) = u0;
                        u0 = ((((struct o44_float *)(t2))->v));
                        t4 = !(u0 > u1);
                        u0 = 0.0f;
                        if (t4) {
                            (((struct o44_float *)(t2))->v) = 0.0f;
                        }
                        u1 = ((((struct o48_float *)(t2))->v));
                        t4 = !(u1 > u0);
                        u0 = 0.0f;
                        if (t4) {
                            (((struct o48_float *)(t2))->v) = 0.0f;
                        }
                        u1 = ((((struct o4C_float *)(t2))->v));
                        if (!(u1 > u0)) {
                            (((struct o4C_float *)(t2))->v) = 0.0f;
                        }
                    }
                    u0 = 0.0f;
                    u1 = ((((struct o20_float *)(t2))->v));
                    if (!(u1 > u0)) {
                        *(unsigned char *)((t2 + 0x0)) = 0x0;
                    }
                }
                break;
            }
            t1 = (t1 + 0x1);
            if ((int)t1 < (int)t0) continue;
            break;
        }
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
    t1 = 0xEC;
    if ((int)(short)(t0 + 0x1) >= (int)0x1E) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0c269c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return FUN_0c059330(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                FUN_0c0c264a(a4);
                t0 = *(signed char *)((a4 + 0x9));
                if (t0 != 0) {
                    if (t0 != 1) {
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                        *(unsigned char *)((a4 + 0x9)) = 0x0;
                        t0 = 0x0;
                    } else {
                        t1 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t1 + 0x1);
                        if ((short)(t1 + 0x1) == 5) {
                            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                        }
                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.199999988f);
                        if (0.0f > ((((struct o50_float *)(a4))->v))) {
                            (((struct o50_float *)(a4))->v) = 0.0f;
                        }
                        u0 = (((struct o50_float *)(a4))->v);
                        (((struct o58_float *)(a4))->v) = u0;
                        (((struct o54_float *)(a4))->v) = u0;
                        *(volatile int *)((a4 + 0x2E0));
                        t0 = (((int (*)(void))(FUN_0c0e6fe8))());
                    }
                    t1 = t0;
                } else {
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                    (((struct o105_uchar *)(a4))->v) = 0x1;
                    (((struct o106_uchar *)(a4))->v) = 0x1;
                    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x23F;
                    (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
                    (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
                    (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
                    (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                    t0 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
                    if ((short)(t0 + 0x1) == 5) {
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    }
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.199999988f);
                    if (0.0f > ((((struct o50_float *)(a4))->v))) {
                        (((struct o50_float *)(a4))->v) = 0.0f;
                    }
                    u0 = (((struct o50_float *)(a4))->v);
                    (((struct o58_float *)(a4))->v) = u0;
                    (((struct o54_float *)(a4))->v) = u0;
                    *(volatile int *)((a4 + 0x2E0));
                    t1 = (((int (*)(float))(FUN_0c0e6fe8))(1.0f));
                }
                return t1;
            }
            return FUN_0c059330(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0x3C;
        (((struct o48_float *)(a4))->v) = -1.0f;
        (((struct o3C_float *)(a4))->v) = 20.0f;
        t0 = *(int *)((a4 + 0x30));
        t1 = 0xFFFFC000;
        if ((*(signed char *)((a4 + 0x4))) != 0) {
            t1 = 0x4000;
        }
        (((struct o38_float *)(a4))->v) = ((FUN_0c0dfa50((t1 + t0))) * 5.0f);
        t0 = *(int *)((a4 + 0x30));
        t1 = 0xFFFFC000;
        if ((*(signed char *)((a4 + 0x4))) != 0) {
            t1 = 0x4000;
        }
        (((struct o40_float *)(a4))->v) = ((FUN_0c0df4d0((t1 + t0))) * 5.0f);
    }
    FUN_0c0c264a(a4);
    if ((*(signed char *)((a4 + 0x9))) != 0) {
        
    } else {
        if (((((struct o274_float *)(a4))->v)) > 0.0f) {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            (((struct o38_float *)(a4))->v) = 0.0f;
            (((struct o40_float *)(a4))->v) = 0.0f;
            (((struct o3C_float *)(a4))->v) = 0.0f;
            (((struct o48_float *)(a4))->v) = 0.0f;
            (((struct o107_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct o48_float *)(a4))->v) = -1.0f;
        }
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.099999994f);
    if (((((struct o50_float *)(a4))->v)) > 2.0f) {
        (((struct o50_float *)(a4))->v) = 2.0f;
    }
    u0 = (((struct o50_float *)(a4))->v);
    (((struct o58_float *)(a4))->v) = u0;
    (((struct o54_float *)(a4))->v) = u0;
    *(volatile int *)((a4 + 0x2E0));
    t0 = ((int (*)(float))(FUN_0c0e6fe8))(2.0f);
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) == 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0a66ec(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c059330(a4, 0x0, a6, a7);
            }
            if ((int)(unsigned char)(*(signed char *)0xC7F2EE4) >= (int)0x2) {
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            } else {
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                t0 = 0xC7F2EE4;
                if (((((struct oEE_short *)(a4))->v)) == 10) {
                    (((struct oEE_ushort *)(a4))->v) = 0x0;
                    if ((int)((((struct oF0_short *)(a4))->v)) < (int)0x9) {
                        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
                    }
                    t0 = 0x9;
                }
                if (((((struct oF0_short *)(a4))->v)) != 0) {
                    t2 = t0;
                    t0 = 0x0;
                    t3 = 0x0;
                    for (;;) {
                        if ((int)t0 >= (int)((((struct oF0_short *)(a4))->v))) {
                            break;
                        }
                        t3 = 0x2E0;
                        t4 = t0;
                        t4 = (t4 << 2);
                        u0 = 1.0f;
                        t3 = (t3 + a4);
                        t3 = (t3 + t4);
                        t3 = (*(int *)((t3 + 0x0)));
                        u1 = ((((struct o1C_float *)(t3))->v));
                        t2 = (*(int *)((t3 + 0x14)));
                        u0 = (u0 / u1);
                        u0 = (u0 + 12.0f);
                        u0 = (u0 * 65536.0f);
                        u0 = (u0 / 360.0f);
                        t2 = (t2 + (int)u0);
                        *(unsigned int *)((t3 + 0x14)) = t2;
                        t5 = *(int *)((((0x2E0 + a4) + t4) + 0x0));
                        t2 = (*(int *)((t5 + 0x14)));
                        t2 = (t2 & 0xFFFF);
                        *(unsigned int *)((t5 + 0x14)) = t2;
                        t2 = (*(int *)((((0x2E0 + a4) + t4) + 0x0)));
                        u1 = ((((struct o1C_float *)(t2))->v));
                        u1 = (u1 - 0.00999999978f);
                        (((struct o1C_float *)(t2))->v) = u1;
                        t3 = 0x2E0;
                        t3 = (t3 + a4);
                        t3 = (t3 + t4);
                        t3 = (*(int *)((t3 + 0x0)));
                        u1 = ((((struct o1C_float *)(t3))->v));
                        (((struct o24_float *)(t3))->v) = u1;
                        t2 = (*(int *)((((0x2E0 + a4) + t4) + 0x0)));
                        u1 = ((((struct o1C_float *)(t2))->v));
                        if (!(u1 > 0.0299999993f)) {
                            t2 = 0x2E0;
                            t2 = (t2 + a4);
                            t2 = (t2 + t4);
                            (((struct o1C_float *)((*(int *)((t2 + 0x0)))))->v) = 0.599999964f;
                            t2 = (*(int *)((((0x2E0 + a4) + t4) + 0x0)));
                            (((struct o24_float *)(t2))->v) = 0.599999964f;
                            t2 = (*(int *)((((0x2E0 + a4) + t4) + 0x0)));
                            (((struct o40_float *)(t2))->v) = 1.0f;
                        }
                        t2 = (*(int *)((((0x2E0 + a4) + t4) + 0x0)));
                        u1 = ((((struct o1C_float *)(t2))->v));
                        if (!(u1 > 0.099999994f)) {
                            t2 = 0x2E0;
                            t2 = (t2 + a4);
                            t2 = (t2 + t4);
                            t5 = *(int *)((t2 + 0x0));
                            u1 = ((((struct o40_float *)(t5))->v));
                            u1 = (u1 - 0.199999988f);
                            (((struct o40_float *)(t5))->v) = u1;
                            u1 = 0.0f;
                            t2 = (*(int *)((((0x2E0 + a4) + t4) + 0x0)));
                            u0 = ((((struct o40_float *)(t2))->v));
                            if (!(u0 > u1)) {
                                t2 = 0x2E0;
                                t2 = (t2 + a4);
                                t2 = (t2 + t4);
                                (((struct o40_float *)((*(int *)((t2 + 0x0)))))->v) = 0.0f;
                            }
                        }
                        t0 = (t0 + 0x1);
                    }
                }
                t1 = 0xF0;
            }
            return t1;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x3C;
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x6)) = 0x1F;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            FUN_0c0623a6((*(int *)((((0x2E0 + a4) + t1) + 0x0))), 0xC664A30, 0x8);
            *(unsigned char *)(((*(int *)((((0x2E0 + a4) + t1) + 0x0))) + 0x0)) = 0x1;
            t0 = (t0 + 0x1);
            *(unsigned short *)(((*(int *)((((0x2E0 + a4) + t1) + 0x0))) + 0x2)) = 0x41F;
            (((struct o1C_float *)((*(int *)((((0x2E0 + a4) + t1) + 0x0)))))->v) = 0.599999964f;
            (((struct o20_float *)((*(int *)((((0x2E0 + a4) + t1) + 0x0)))))->v) = 0.599999964f;
            (((struct o24_float *)((*(int *)((((0x2E0 + a4) + t1) + 0x0)))))->v) = 0.599999964f;
            (((struct o40_float *)((*(int *)((((0x2E0 + a4) + t1) + 0x0)))))->v) = 1.0f;
            t1 = (t1 + 0x4);
            if ((int)t0 >= (int)0xA) {
                break;
            }
        }
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((int)(short)(t0 - 1) > 0) {
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        t1 = 0x1;
    }
    return t1;
}

int FUN_0c044b94(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                return FUN_0c059330(a4, a5, a6, a7);
            }
            if (t0 == 3) {
                return FUN_0c059330(a4, a5, a6, a7);
            }
            return t0;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x1;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) != 0) {
    } else {
        (((struct oEC_ushort *)(a4))->v) = 0x1;
        t0 = *(int *)((((((((struct oEE_short *)(a4))->v)) << 2) + (0x2E0 + a4)) + 0x0));
        t2 = 0xEE;
        if ((*(signed char *)((t0 + 0x0))) != 0) {
        } else {
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            (((struct o40_float *)(t0))->v) = 1.0f;
            FUN_0c0e6fe8(0x1);
            FUN_0c0df940();
            
            *(unsigned int *)((t0 + 0x14)) = ((((FUN_0c0e6f24()) << 8) << 2) << 1);
            FUN_0c0df940();
            
            t3 = FUN_0c0e6f24();
            u0 = (float)(t3 + 0x5);
            if ((int)(t3 + 0x5) < 0) {
                u0 = ((float)(t3 + 0x5) + 4.2949673e+09f);
            }
            (((struct o24_float *)(t0))->v) = (u0 / 10.0f);
            (((struct o20_float *)(t0))->v) = (u0 / 10.0f);
            (((struct o1C_float *)(t0))->v) = (u0 / 10.0f);
            FUN_0c0df940();
            
            t3 = FUN_0c0e6f24();
            u0 = (float)t3;
            if ((int)t3 < 0) {
                u0 = ((float)t3 + 4.2949673e+09f);
            }
            (((struct o2C_float *)(t0))->v) = (u0 + 14.0f);
            *(unsigned int *)((t0 + 0x38)) = 0xFFFFFFFF;
            FUN_0c0df940();
            
            t3 = FUN_0c0e6f24();
            u0 = (float)(t3 + 0x2);
            if (0.0f > (float)(t3 + 0x2)) {
                u0 = ((float)(t3 + 0x2) + 4.2949673e+09f);
            }
            (((struct o28_float *)(t0))->v) = ((FUN_0c0df4d0(((-(*(int *)((t0 + 0x14)))) + 0x14000))) * u0);
            (((struct o30_float *)(t0))->v) = ((FUN_0c0dfa50(((-(*(int *)((t0 + 0x14)))) + 0x14000))) * u0);
            (((struct oEC_ushort *)(a4))->v) = 0x6;
            *(volatile short *)((a4 + 0xEE));
            t0 = FUN_0c0e6e5c();
            (((struct oEE_ushort *)(a4))->v) = t0;
            t2 = t0;
            t0 = (0xEE + a4);
        }
        t1 = t2;
        t2 = t0;
    }
    t0 = t1;
    t1 = t2;
    t2 = 0x0;
    t3 = (0x2E0 + a4);
    for (;;) {
        t4 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        if ((*(signed char *)((t4 + 0x0))) != 0) {
            t1 = 0x28;
            t1 = (t1 + t4);
            t0 = 0x4;
            u0 = (*(float *)((t1 + 0x0)));
            u1 = (*(float *)((t4 + t0)));
            t1 = 0x30;
            t1 = (t1 + t4);
            u1 = (u1 + u0);
            *(float *)((t4 + t0)) = u1;
            t0 = 0xC;
            u1 = (*(float *)((t4 + t0)));
            u0 = (*(float *)((t1 + 0x0)));
            t1 = 0x2C;
            t1 = (t1 + t4);
            u1 = (u1 + u0);
            *(float *)((t4 + t0)) = u1;
            t0 = 0x8;
            u1 = (*(float *)((t4 + t0)));
            u0 = (*(float *)((t1 + 0x0)));
            u1 = (u1 + u0);
            *(float *)((t4 + t0)) = u1;
            t0 = 0x2C;
            u1 = (*(float *)((t4 + t0)));
            u0 = (float)(*(int *)((t4 + 0x38)));
            u1 = (u1 + u0);
            *(float *)((t4 + t0)) = u1;
            t0 = 0x5C;
            u0 = (*(float *)(((*(int *)((a4 + 0x1C))) + t0)));
            t0 = 0x44;
            *(float *)((t4 + t0)) = u0;
            t0 = 0x5C;
            u0 = (*(float *)(((*(int *)((a4 + 0x1C))) + t0)));
            t0 = 0x48;
            *(float *)((t4 + t0)) = u0;
            t0 = 0x5C;
            u0 = (*(float *)(((*(int *)((a4 + 0x1C))) + t0)));
            t0 = 0x4C;
            *(float *)((t4 + t0)) = u0;
            t0 = 0x8;
            u1 = (*(float *)((t4 + t0)));
            u0 = 0.0f;
            if (u0 > u1) {
                *(unsigned char *)((t4 + 0x0)) = 0x0;
            }
        }
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)0xA) {
            break;
        }
    }
    t0 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x8));
    t1 = t0;
    if ((int)t0 >= (int)0x2) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
