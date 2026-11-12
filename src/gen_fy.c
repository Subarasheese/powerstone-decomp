/* Straight-line functions with calls and guards (batch gen_fy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o720C_ushort { char p[0x720C]; unsigned short v; };
struct o7225_uchar { char p[0x7225]; unsigned char v; };
struct o7232_uchar { char p[0x7232]; unsigned char v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c04b1f0(int);
int FUN_0c04cdf2(void);
int FUN_0c0555dc(void);
int FUN_0c059330(int);
int FUN_0c05d1d0(int);
int FUN_0c05fbee(int);
int FUN_0c06231c(int, int, int);
int FUN_0c099b60(int);
int FUN_0c09a808(int, int, int);
int FUN_0c09b7a4(int, int);
int FUN_0c09d89c(int);
int FUN_0c0a3796(int, int);
int FUN_0c0a3914(int, int);
int FUN_0c0ac55c(int, int);
int FUN_0c0d8e6e(int, int, int);
float FUN_0c0df340(float);
int FUN_0c0df360(float);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
float FUN_0c0dfce0(int);
int FUN_0c0e3510(void);
int nlMultiMatrix(int);
int thunk_FUN_0c062242(int);
int FUN_0c0c00aa(int a4);
int nlPerspectiveX(int a4, float f4, float f5, float f6);
int FUN_0c0a13ec(int a4);
int FUN_0c0c0532(int a4);
int FUN_0c04f10e(int a4, float f4);
int FUN_0c04f7ea(int a4, float f4);

int FUN_0c0c00aa(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c0555dc();
    if (t0 == 1) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    t0 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BA));
    if ((t0 != 11) && (t0 != 28)) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x2;
    *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x2;
    (((struct o105_uchar *)(a4))->v) = 0x2;
    if ((*(signed char *)((a4 + 0x8))) != 0) {
        return FUN_0c059330(a4);
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0xF));
            t2 = t1;
            if (t1 != 1) {
            } else {
                t1 = (((struct o2E0_int *)(a4))->v);
                *(unsigned int *)((t1 + 0x18)) = ((*(int *)((t1 + 0x18))) + 0xE38);
                t1 = (((struct o2E4_int *)(a4))->v);
                *(unsigned int *)((t1 + 0x18)) = ((*(int *)((t1 + 0x18))) - 0xE38);
                t1 = *(signed char *)((a4 + 0x9));
                *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            t1 = t2;
        } else {
            if (t0 == 2) {
                t2 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0xF));
                t3 = t2;
                if (t2 == 2) {
                    (((struct oEC_ushort *)(a4))->v) = 0x4;
                    t2 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                    t3 = (t2 + 0x1);
                }
                t2 = t3;
            } else {
                t3 = t0;
                if (t0 == 3) {
                    (((struct o44_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 4.0f);
                    (((struct o48_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 4.0f);
                    (((struct o4C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 4.0f);
                    (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 4.0f);
                    (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 4.0f);
                    t0 = (((struct oEC_short *)(a4))->v);
                    (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 4.0f);
                    if (!(((float)t0 / 4.0f) > 0.0f)) {
                        t0 = (((struct o2E0_int *)(a4))->v);
                        (((struct o4C_float *)(t0))->v) = 0.0f;
                        (((struct o48_float *)(t0))->v) = 0.0f;
                        (((struct o44_float *)(t0))->v) = 0.0f;
                        t0 = (((struct o2E4_int *)(a4))->v);
                        (((struct o4C_float *)(t0))->v) = 0.0f;
                        (((struct o48_float *)(t0))->v) = 0.0f;
                        (((struct o44_float *)(t0))->v) = 0.0f;
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    }
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    t3 = 0xEC;
                }
                t2 = t3;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t1 + 0x14)) = ((*(int *)((t1 + 0x14))) - 0x3CA);
        t1 = (((struct o2E4_int *)(a4))->v);
        *(unsigned int *)((t1 + 0x14)) = ((*(int *)((t1 + 0x14))) + 0x3CA);
        (((struct o44_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 15.0f);
        (((struct o48_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 15.0f);
        (((struct o4C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 15.0f);
        (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 15.0f);
        (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 15.0f);
        t1 = (((struct oEC_short *)(a4))->v);
        (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t1 / 15.0f);
        if (!(1.0f > ((float)t1 / 15.0f))) {
            t1 = (((struct o2E0_int *)(a4))->v);
            (((struct o4C_float *)(t1))->v) = 1.0f;
            (((struct o48_float *)(t1))->v) = 1.0f;
            (((struct o44_float *)(t1))->v) = 1.0f;
            t1 = (((struct o2E4_int *)(a4))->v);
            (((struct o4C_float *)(t1))->v) = 1.0f;
            (((struct o48_float *)(t1))->v) = 1.0f;
            (((struct o44_float *)(t1))->v) = 1.0f;
            t1 = *(signed char *)((a4 + 0x3));
            FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), 0x15);
            t1 = *(signed char *)((a4 + 0x3));
            FUN_0c06231c(((((struct o2E4_int *)(a4))->v)), ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), 0x15);
            t1 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t1 + 0x14)) = ((*(int *)((t1 + 0x14))) + 0x2AAA);
            t1 = (((struct o2E4_int *)(a4))->v);
            *(unsigned int *)((t1 + 0x14)) = ((*(int *)((t1 + 0x14))) - 0x2AAA);
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        }
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        t0 = 0xEC;
    }
    return t0;
}

int nlPerspectiveX(int a4, float f4, float f5, float f6)
{
    int stk[22];
    register int t0;
    register float t4;
    register int t6;
    register float u14;
    register float u15;
    register float u24;
    register int t16;
    register int t26;
    register float t27;
    register float u30;
    register float u31;
    register float u32;
    register float u35;
    register float u36;
    register float u37;
    register float t39;
    register float t42;
    register float t43;
    register float u44;
    register float t45;
    register float t47;
    register float u49;
    register float u51;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(float *)(((int)stk + 12)) = f4;
    *(float *)(((int)stk + 0)) = f6;
    t0 = *(int *)(((int)stk + 4));
    *(float *)(((int)stk + 8)) = (1.0f / (FUN_0c0dfce0((t0 >> 1))));
    if (((((struct oC_float *)0xC346AB0)->v)) != 0.0f) {
        t4 = FUN_0c0dfce0((t0 >> 1));
        t6 = FUN_0c0df360((t4 * (((((struct oC_float *)0xC346AB0)->v)) + 1.0f)));
        *(float *)(((int)stk + 20)) = (1.0f / (FUN_0c0df4d0(t6)));
    } else {
        *(float *)(((int)stk + 20)) = (1.0f / (FUN_0c0df4d0((t0 >> 1))));
    }
    u14 = *(float *)(((int)stk + 8));
    u15 = *(float *)(((int)stk + 12));
    u24 = (1.0f / (u15 * u14));
    if (((((struct o10_float *)0xC346AB0)->v)) != 0.0f) {
        t16 = FUN_0c0df360((1.0f / (u15 * u14)));
        *(unsigned int *)(((int)stk + 4)) = t16;
        u24 = ((FUN_0c0dfce0(t16)) * (((((struct o10_float *)0xC346AB0)->v)) + 1.0f));
    }
    t26 = FUN_0c0df360(u24);
    t27 = FUN_0c0df4d0(t26);
    (((struct oC_float *)0xC346AB0)->v) = 0.0f;
    (((struct o10_float *)0xC346AB0)->v) = 0.0f;
    u30 = (u15 * u14);
    u31 = ((*(float *)(((int)stk + 8))) * (*(float *)(((int)stk + 20))));
    u32 = (u30 * (1.0f / t27));
    (((struct o0_float *)0xC346AB0)->v) = (u31 * 0.5f);
    (((struct o4_float *)0xC346AB0)->v) = (u32 * 0.5f);
    (((struct o0_float *)0xC7FCF68)->v) = (((((struct o14_float *)0xC346AB0)->v)) * ((((struct o0_float *)0xC346AB0)->v)));
    u35 = (((struct o4_float *)0xC346AB0)->v);
    u36 = (((struct o18_float *)0xC346AB0)->v);
    (((struct o4_float *)0xC7FCF68)->v) = (u36 * u35);
    u37 = (((struct o0_float *)0xC7FCF68)->v);
    if (u37 > (u36 * u35)) {
        (((struct o8_float *)0xC346AB0)->v) = u37;
    } else {
        (((struct o8_float *)0xC346AB0)->v) = (u36 * u35);
    }
    t39 = FUN_0c0dfce0((t0 >> 1));
    *(float *)(((int)stk + 16)) = (float)(FUN_0c0df360((t39 / (*(float *)(((int)stk + 12))))));
    (((struct o14_float *)0xC7FCF28)->v) = 0.0f;
    (((struct o4_float *)0xC7FCF28)->v) = 0.0f;
    (((struct o30_float *)0xC7FCF28)->v) = 0.0f;
    (((struct o20_float *)0xC7FCF28)->v) = 0.0f;
    t42 = FUN_0c0df4d0((t0 >> 1));
    (((struct o0_float *)0xC7FCF28)->v) = t42;
    (((struct o10_float *)0xC7FCF28)->v) = (-t42);
    t43 = FUN_0c0dfa50((t0 >> 1));
    (((struct o18_float *)0xC7FCF28)->v) = t43;
    (((struct o8_float *)0xC7FCF28)->v) = t43;
    u44 = *(float *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 4)) = (int)u44;
    t45 = FUN_0c0df4d0((int)u44);
    (((struct o24_float *)0xC7FCF28)->v) = t45;
    (((struct o34_float *)0xC7FCF28)->v) = (-t45);
    t47 = FUN_0c0dfa50((*(int *)(((int)stk + 4))));
    (((struct o38_float *)0xC7FCF28)->v) = t47;
    (((struct o28_float *)0xC7FCF28)->v) = t47;
    (((struct o1C_float *)0xC7FCF28)->v) = 0.0f;
    (((struct oC_float *)0xC7FCF28)->v) = 0.0f;
    (((struct o3C_float *)0xC7FCF28)->v) = 0.0f;
    (((struct o2C_float *)0xC7FCF28)->v) = 0.0f;
    *(float *)(((int)stk + 24)) = (*(float *)(((int)stk + 8)));
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = (u15 * u14);
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    u49 = *(float *)(((int)stk + 0));
    *(float *)(((int)stk + 64)) = ((f5 + u49) / (f5 - u49));
    *(float *)(((int)stk + 68)) = -1.0f;
    *(float *)(((int)stk + 72)) = 0.0f;
    *(float *)(((int)stk + 76)) = 0.0f;
    u51 = (f5 * (*(float *)(((int)stk + 0))));
    *(float *)(((int)stk + 80)) = ((u51 * (1.0f + 1.0f)) / (f5 - u49));
    *(float *)(((int)stk + 84)) = 0.0f;
    (((struct o0_float *)0xC7FD63C)->v) = f5;
    (((struct o4_float *)0xC7FD63C)->v) = (*(float *)(((int)stk + 0)));
    (((struct o8_float *)0xC7FD63C)->v) = (1.0f / f5);
    (((struct o18_float *)0xC7FCC8C)->v) = f5;
    (((struct o0_float *)0xC7FCC8C)->v) = (-f5);
    (((struct o1C_float *)0xC7FCC8C)->v) = (*(float *)(((int)stk + 0)));
    (((struct o14_float *)0xC7FCC8C)->v) = (1.0f / f5);
    nlMultiMatrix((((int)stk + 0) + 0x18));
    return (FUN_0c0e3510());
}

int FUN_0c0a13ec(int a4)
{
    register int t0;

    (((struct o71BA_uchar *)(a4))->v) = 0x17;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o7225_uchar *)(a4))->v) = 0x0;
    FUN_0c099b60(a4);
    (((struct o710A_uchar *)(a4))->v) = 0x0;
    (((struct o710B_uchar *)(a4))->v) = 0x0;
    (((struct o710C_uchar *)(a4))->v) = 0x0;
    if (((((struct o71CC_int *)(a4))->v)) != 0) {
        *(unsigned char *)((((((struct o71CC_int *)(a4))->v)) + 0x1)) = 0x0;
    }
    if ((*(signed char *)((a4 + 0x71F1))) != 0) {
        if ((*(signed char *)((a4 + 0x4))) == 1) {
            (((struct o710C_uchar *)(a4))->v) = 0x1;
        }
        (((struct oEE_ushort *)(a4))->v) = 0x1;
        (((struct oF0_ushort *)(a4))->v) = 0x1;
        FUN_0c09a808(a4, 0x3, 0x9);
        (((struct o7236_uchar *)(a4))->v) = 0x0;
        (((struct o71CC_uint *)(a4))->v) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0x78;
        (((struct o720C_ushort *)(a4))->v) = 0x28;
        *(unsigned char *)((a4 + 0xA)) = 0x1;
        return 0x1;
    }
    FUN_0c09b7a4(a4, 0xC);
    FUN_0c04b1f0(a4);
    FUN_0c0d8e6e(0x15, (*(signed char *)((a4 + 0x3))), 0x70);
    FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0x13);
    *(unsigned int *)((a4 + 0x30)) = (*(int *)0xC7F2B0C);
    t0 = 0x17;
    if ((*(signed char *)((a4 + 0x3))) == 0) {
        t0 = 0x16;
    }
    FUN_0c0a3914(a4, t0);
    t0 = *(signed char *)((a4 + 0x4));
    switch (t0) {
    case 0:
        if ((*(signed char *)((a4 + 0x71BC))) != 2) {
            FUN_0c09a808(a4, 0x3, 0x8);
            if ((*(signed char *)((a4 + 0x4))) == 4) {
                (((struct oEE_ushort *)(a4))->v) = 0x46;
            } else {
                (((struct oEE_ushort *)(a4))->v) = 0x3C;
            }
        } else {
            FUN_0c09a808(a4, 0x3, 0xB);
            (((struct oEE_ushort *)(a4))->v) = 0x3C;
        }
        break;
    case 1:
        if ((*(signed char *)((a4 + 0x71BC))) != 2) {
            FUN_0c09a808(a4, 0x3, 0x8);
            t0 = 0x22;
        } else {
            FUN_0c09a808(a4, 0x3, 0xB);
            (((struct o71A8_uchar *)(a4))->v) = 0x0;
            (((struct o71A9_uchar *)(a4))->v) = 0x5;
            t0 = 0x1E;
        }
        (((struct oEE_ushort *)(a4))->v) = t0;
        break;
    case 2:
        FUN_0c09a808(a4, 0x3, 0x8);
        (((struct oEE_ushort *)(a4))->v) = 0x46;
        break;
    case 3:
        FUN_0c09a808(a4, 0x3, 0x8);
        (((struct oEE_ushort *)(a4))->v) = 0x31;
        break;
    case 4:
        if ((*(signed char *)((a4 + 0x71BC))) != 2) {
            FUN_0c09a808(a4, 0x3, 0x8);
            if ((*(signed char *)((a4 + 0x4))) == 4) {
                (((struct oEE_ushort *)(a4))->v) = 0x46;
            } else {
                (((struct oEE_ushort *)(a4))->v) = 0x3C;
            }
        } else {
            FUN_0c09a808(a4, 0x3, 0xB);
            (((struct oEE_ushort *)(a4))->v) = 0x3C;
        }
        break;
    case 5:
        if ((*(signed char *)((a4 + 0x71BC))) == 2) {
            FUN_0c09a808(a4, 0x3, 0xB);
            (((struct oEE_ushort *)(a4))->v) = 0x3A;
        } else {
            FUN_0c09a808(a4, 0x3, 0x8);
            (((struct oEE_ushort *)(a4))->v) = 0x3D;
        }
        break;
    case 6:
        if ((*(signed char *)((a4 + 0x71BC))) != 2) {
            FUN_0c09a808(a4, 0x3, 0x8);
        } else {
            FUN_0c09a808(a4, 0x3, 0xB);
        }
        (((struct oEE_ushort *)(a4))->v) = 0x3D;
        break;
    case 7:
        if ((*(signed char *)((a4 + 0x71BC))) != 2) {
            FUN_0c09a808(a4, 0x3, 0x8);
            t0 = 0x29;
        } else {
            FUN_0c09a808(a4, 0x3, 0xB);
            t0 = 0x27;
        }
        (((struct oEE_ushort *)(a4))->v) = t0;
        break;
    case 9:
        if ((*(signed char *)((a4 + 0x71BC))) != 2) {
            FUN_0c09a808(a4, 0x3, 0x8);
        } else {
            FUN_0c09a808(a4, 0x3, 0xB);
        }
        (((struct oEE_ushort *)(a4))->v) = 0x3C;
        break;
    default:
        if ((*(signed char *)((a4 + 0x71BC))) != 2) {
            FUN_0c09a808(a4, 0x3, 0x8);
            if ((*(signed char *)((a4 + 0x4))) == 4) {
                (((struct oEE_ushort *)(a4))->v) = 0x46;
            } else {
                (((struct oEE_ushort *)(a4))->v) = 0x3C;
            }
        } else {
            FUN_0c09a808(a4, 0x3, 0xB);
            (((struct oEE_ushort *)(a4))->v) = 0x3C;
        }
        break;
    }
    (((struct oEC_ushort *)(a4))->v) = 0x82;
    (((struct o720C_ushort *)(a4))->v) = 0x3C;
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    (((struct o7232_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    *(unsigned short *)0xC7F3194 = ((((struct oEC_short *)(a4))->v));
    return FUN_0c05fbee((*(short *)0xC7F3194));
}

int FUN_0c0c0532(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t1 = FUN_0c0555dc();
    if (t1 == 1) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 11) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x2;
    *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x2;
    (((struct o105_uchar *)(a4))->v) = 0x2;
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 10) {
        if (t1 != 11) {
            if (t1 != 12) {
                if (t1 == 13) {
                    u0 = FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000));
                    u1 = (u0 * (FUN_0c0dfa50(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
                    (((struct o38_float *)(a4))->v) = (u1 * 80.0f);
                    u0 = FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000));
                    u1 = (u0 * (FUN_0c0dfa50(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
                    (((struct o40_float *)(a4))->v) = (u1 * 80.0f);
                    (((struct o3C_float *)(a4))->v) = (-((FUN_0c0df4d0(((-(*(int *)((a4 + 0x2C)))) + 0x14000))) * 80.0f));
                    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
                    t1 = (((struct oEE_short *)(a4))->v);
                    (((struct oEE_ushort *)(a4))->v) = (t1 - 1);
                    t2 = 0x2D8;
                    if (((short)(t1 - 1) != 0) && (t0 = *(signed char *)((a4 + 0x2D8)), t0 == 0)) {
                    } else {
                        t0 = *(signed char *)((a4 + 0x8));
                        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                        t2 = (t0 + 0x1);
                    }
                    return t2;
                }
                return FUN_0c059330(a4);
            }
            t0 = FUN_0c09d89c((*(int *)((a4 + 0x1C))));
            t1 = (signed char)t0;
            if ((signed char)t0 != 0) {
            } else {
                t0 = (((struct oF0_short *)(a4))->v);
                (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
                t2 = 0xF0;
                if ((short)(t0 - 1) != 0) {
                } else {
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                    (((struct oEE_ushort *)(a4))->v) = 0x78;
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    (((struct o118_uint *)(a4))->v) = 0x0;
                    *(unsigned int *)((a4 + 0x2C)) = (*(int *)(((*(int *)((a4 + 0x1C))) + 0x2C)));
                    *(unsigned int *)((a4 + 0x30)) = (*(int *)(((*(int *)((a4 + 0x1C))) + 0x30)));
                    *(unsigned int *)((a4 + 0x34)) = (*(int *)(((*(int *)((a4 + 0x1C))) + 0x34)));
                    if ((*(signed char *)((a4 + 0x9))) == 0) {
                        t0 = *(signed char *)((a4 + 0x3));
                        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840));
                        *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) - 0x31C7);
                    } else {
                        *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) - 0x4000);
                    }
                    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                    t2 = 0x2E4;
                }
                t1 = t2;
            }
            return t1;
        }
        t0 = FUN_0c09d89c((*(int *)((a4 + 0x1C))));
        t1 = (signed char)t0;
        if ((signed char)t0 != 0) {
        } else {
            (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.0666666627f);
            t0 = (((struct oEE_short *)(a4))->v);
            (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
            t1 = 0xF0;
        }
        return t1;
    }
    t0 = FUN_0c09d89c((*(int *)((a4 + 0x1C))));
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
    } else {
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.049999997f);
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.049999997f);
        (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.049999997f);
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
        t1 = 0xF0;
    }
    return t1;
}

int FUN_0c04f10e(int a4, float f4)
{
    int stk[137];
    register int t1;
    register int t3;
    register int t4;
    register int t6;
    register int t49;
    register int t50;
    register int t22;
    register int t23;
    register float u24;
    register float u25;
    register float u26;
    register float u27;
    register float u30;
    register float t31;
    register int t33;
    register int t34;
    register float u35;
    register float u37;
    register float u39;
    register float u40;
    register float u43;
    register float t44;
    register float u45;
    register int t46;
    register int t58;
    register int t59;
    register int t61;
    register int t63;
    register int t64;
    register int t65;
    register int t66;
    register int t67;
    register float u68;
    register float u70;
    register int t82;
    register int t89;
    register float u91;
    register int t92;
    register float u94;
    register int t95;
    register float u97;
    register int t101;
    register int t2;
    register int t5;
    register int t19;
    register int t20;
    int t14;
    register float u57;
    register int t60;
    register int t62;
    register float u69;
    register int t86;
    register int t87;

    t1 = 0xFFFFFDE8;
    t3 = a4;
    t4 = 0x0;
    t6 = (*(int *)0xC7E4078);
    for (;;) {
        if (t6 == 0) {
            break;
        }
        t2 = (*(signed char *)((t6 + 0x0)));
        t5 = (*(int *)((t6 + 0x18)));
        if (t2 != 0) {
            t1 = (*(signed char *)((t6 + 0x4)));
            t3 = t1;
            if ((t1 != 1) && (t14 = (t1 == 1), t1 = t3, t1 != 18)) {
                t19 = t2;
                t20 = t3;
            } else {
                t3 = a4;
                t1 = (FUN_0c0ac55c(t3, t6));
                t1 = (signed char)t1;
                if (t1 != 0) {
                    t1 = (unsigned short)t4;
                    t1 = (t1 << 2);
                    t4 = (t4 + 0x1);
                    *(unsigned int *)(((((int)stk + 8) + 0x18) + t1)) = t6;
                }
            }
        } else {
            t19 = t2;
            t20 = t3;
        }
        t6 = t5;
        t2 = t19;
        t3 = t20;
    }
    *(unsigned short *)(((int)stk + 8)) = 0x0;
    t49 = 0x0;
    t50 = 0x0;
    if ((int)(unsigned short)t4 > 0) {
        t22 = 0x0;
        for (;;) {
            *(int *)((int)stk + 4) = (t22 + (0x118 + ((int)stk + 8)));
            *(unsigned int *)(((int)stk + 20)) = (t22 + (((int)stk + 8) + 0x18));
            t23 = *(int *)(((t22 + (((int)stk + 8) + 0x18)) + 0x0));
            *(unsigned int *)(((int)stk + 28)) = t23;
            u24 = (((struct o20_float *)(a4))->v);
            u25 = (((struct o20_float *)(t23))->v);
            u26 = (((struct o28_float *)(a4))->v);
            u27 = (((struct o28_float *)(t23))->v);
            (((struct oC_float *)(((int)stk + 4)))->v) = (u27 - u26);
            u30 = ((u27 - u26) * (u27 - u26));
            u30 = u30 + ((u25 - u24)) * ((u25 - u24));
            t31 = FUN_0c0df340(u30);
            *(float *)(((int)stk + 0)) = (t31 * 2.0f);
            t33 = *(int *)(((*(int *)(((int)stk + 20))) + 0x0));
            *(unsigned int *)(((int)stk + 12)) = t33;
            t34 = *(int *)((a4 + 0x1C));
            *(unsigned int *)(((int)stk + 24)) = t34;
            u35 = (((struct o20_float *)(t34))->v);
            u37 = (((struct o20_float *)(t33))->v);
            u39 = (((struct o28_float *)((*(int *)(((int)stk + 24)))))->v);
            u40 = (((struct o28_float *)((*(int *)(((int)stk + 12)))))->v);
            u43 = ((u40 - u39) * (u40 - u39));
            u43 = u43 + ((u37 - u35)) * ((u37 - u35));
            t44 = FUN_0c0df340(u43);
            u45 = (t31 * 2.0f);
            *(float *)(((t22 + (0x118 + ((int)stk + 8))) + 0x0)) = (u45 - t44);
            t46 = *(short *)(((int)stk + 8));
            *(unsigned short *)(((int)stk + 8)) = (t46 + 0x1);
            t22 = (t22 + 0x4);
            if ((int)(unsigned short)(t46 + 0x1) >= (int)(unsigned short)t4) {
                break;
            }
        }
        t49 = t22;
        t50 = (unsigned short)(t46 + 0x1);
        u57 = (u45 - t44);
    } else {
        t59 = t3;
    }
    t58 = t50;
    t61 = t60;
    t63 = t62;
    t64 = 0x0;
    t65 = 0xC0DF340;
    t66 = a4;
    t67 = t49;
    u68 = u57;
    u70 = f4;
    for (;;) {
        if ((int)(unsigned short)t64 >= (int)(unsigned short)t4) {
            break;
        }
        t61 = t64;
        t67 = (unsigned short)t64;
        t63 = (unsigned short)t61;
        t67 = (t67 << 2);
        t63 = (t63 << 2);
        t58 = (unsigned short)t61;
        t59 = t63;
        t63 = (t63 + (0x118 + ((int)stk + 8)));
        *(unsigned int *)(((int)stk + 12)) = (t67 + (0x118 + ((int)stk + 8)));
        if ((int)t58 < (int)(unsigned short)t4) {
            for (;;) {
                u68 = (*(float *)((t63 + 0x0)));
                u69 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)));
                t61 = (t61 + 0x1);
                if (u69 > u68) {
                    t65 = t67;
                    t65 = (t65 + (0x118 + ((int)stk + 8)));
                    t66 = t59;
                    u69 = (*(float *)((t65 + 0x0)));
                    t66 = (t66 + (0x118 + ((int)stk + 8)));
                    u70 = (*(float *)((t66 + 0x0)));
                    *(float *)((t66 + 0x0)) = u69;
                    t66 = t59;
                    *(float *)((t65 + 0x0)) = u70;
                    t66 = (t66 + (((int)stk + 8) + 0x18));
                    t65 = (*(int *)((t66 + 0x0)));
                    *(unsigned int *)(((int)stk + 8)) = (t67 + (((int)stk + 8) + 0x18));
                    t58 = (*(int *)(((t67 + (((int)stk + 8) + 0x18)) + 0x0)));
                    *(unsigned int *)((t66 + 0x0)) = t58;
                    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = t65;
                }
                t59 = (t59 + 0x4);
                t63 = (t63 + 0x4);
                if ((int)(unsigned short)t61 >= (int)(unsigned short)t4) {
                    break;
                }
            }
        }
        t64 = (t64 + 0x1);
    }
    t82 = *(signed char *)0xC3673EE;
    if ((unsigned short)t4 != 0) {
        t86 = 0x1;
        t87 = (*(int *)(((((int)stk + 8) + 0x18) + 0x0)));
    } else {
        t86 = 0x0;
        t87 = ((((struct o6C_int *)(((short)((short)(unsigned char)t82 * (short)0x254) + 0xC366F40)))->v));
    }
    (((struct o6C_uint *)(((short)((short)(unsigned char)t82 * (short)0x254) + 0xC366F40)))->v) = t87;
    t89 = *(signed char *)0xC3673EE;
    u91 = (((struct o20_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t89 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o60_float *)(((short)((short)(unsigned char)t89 * (short)0x254) + 0xC366F40)))->v) = u91;
    t92 = *(signed char *)0xC3673EE;
    u94 = (((struct o24_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t92 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o64_float *)(((short)((short)(unsigned char)t92 * (short)0x254) + 0xC366F40)))->v) = u94;
    t95 = *(signed char *)0xC3673EE;
    u97 = (((struct o28_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t95 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o68_float *)(((short)((short)(unsigned char)t95 * (short)0x254) + 0xC366F40)))->v) = u97;
    (((struct o26_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = t86;
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t101 = FUN_0c04cdf2();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t101;
}

int FUN_0c04f7ea(int a4, float f4)
{
    int stk[40];
    register int t1;
    register int t3;
    register int t4;
    register int t6;
    register int t26;
    register float u27;
    register float u28;
    register int t56;
    register int t57;
    register float u66;
    register int t29;
    register int t30;
    register float u31;
    register float u32;
    register float u33;
    register float u34;
    register float u37;
    register float t38;
    register int t40;
    register int t41;
    register float u42;
    register float u44;
    register float u46;
    register float u47;
    register float u50;
    register float t51;
    register float u52;
    register int t53;
    register int t67;
    register int t68;
    register int t70;
    register int t72;
    register int t73;
    register int t74;
    register int t75;
    register int t76;
    register float u77;
    register float u78;
    register float u79;
    register int t91;
    register int t98;
    register float u100;
    register int t101;
    register float u103;
    register int t104;
    register float u106;
    register int t110;
    register int t2;
    register int t5;
    register float u7;
    register float u8;
    int t14;
    register int t25;
    register float u22;
    register float u23;
    register float u65;
    register int t69;
    register int t71;
    register int t95;
    register int t96;

    t1 = 0xC04F848;
    t3 = a4;
    t4 = 0x0;
    t6 = (*(int *)0xC7E407C);
    for (;;) {
        if (t6 == 0) {
            break;
        }
        t2 = (*(signed char *)((t6 + 0x0)));
        t5 = (*(int *)((t6 + 0x18)));
        t26 = t3;
        u27 = u7;
        u28 = u8;
        if ((t2 != 0) && (t14 = *(signed char *)((t6 + 0x4)), t1 = t14, t1 == 5)) {
            t2 = (*(int *)((a4 + 0x1C)));
            t1 = 0x24;
            u8 = (*(float *)((a4 + t1)));
            u7 = (*(float *)((t2 + t1)));
            u7 = (u7 - u8);
            u7 = (u7 + 500.0f);
            if (1000.0f > u7) {
                t3 = t6;
                t1 = (FUN_0c05d1d0(t3));
                t1 = (signed char)t1;
                if (t1 != 0) {
                    t1 = (unsigned short)t4;
                    t1 = (t1 << 2);
                    t4 = (t4 + 0x1);
                    *(unsigned int *)(((((int)stk + 8) + 0x14) + t1)) = t6;
                }
            } else {
                t25 = t2;
                t26 = t3;
                u22 = u7;
                u23 = u8;
            }
            u27 = u22;
            u28 = u23;
        } else {
            t25 = t2;
        }
        u7 = u27;
        u8 = u28;
        t6 = t5;
        t2 = t25;
        t3 = t26;
    }
    *(unsigned short *)(((int)stk + 8)) = 0x0;
    t56 = 0x0;
    t57 = 0x0;
    u66 = u8;
    if ((int)(unsigned short)t4 > 0) {
        t29 = 0x0;
        for (;;) {
            *(int *)((int)stk + 4) = (t29 + (((int)stk + 8) + 0x54));
            *(unsigned int *)(((int)stk + 20)) = (t29 + (((int)stk + 8) + 0x14));
            t30 = *(int *)(((t29 + (((int)stk + 8) + 0x14)) + 0x0));
            *(unsigned int *)(((int)stk + 24)) = t30;
            u31 = (((struct o20_float *)(a4))->v);
            u32 = (((struct o20_float *)(t30))->v);
            u33 = (((struct o28_float *)(a4))->v);
            u34 = (((struct o28_float *)(t30))->v);
            u37 = ((u34 - u33) * (u34 - u33));
            u37 = u37 + ((u32 - u31)) * ((u32 - u31));
            t38 = FUN_0c0df340(u37);
            *(float *)(((int)stk + 0)) = (t38 * 2.0f);
            t40 = *(int *)(((*(int *)(((int)stk + 20))) + 0x0));
            *(unsigned int *)(((int)stk + 16)) = t40;
            t41 = *(int *)((a4 + 0x1C));
            *(unsigned int *)(((int)stk + 12)) = t41;
            u42 = (((struct o20_float *)(t41))->v);
            u44 = (((struct o20_float *)(t40))->v);
            u46 = (((struct o28_float *)((*(int *)(((int)stk + 12)))))->v);
            u47 = (((struct o28_float *)((*(int *)(((int)stk + 16)))))->v);
            u50 = ((u47 - u46) * (u47 - u46));
            u50 = u50 + ((u44 - u42)) * ((u44 - u42));
            t51 = FUN_0c0df340(u50);
            u52 = (t38 * 2.0f);
            *(float *)(((t29 + (((int)stk + 8) + 0x54)) + 0x0)) = (u52 - t51);
            t53 = *(short *)(((int)stk + 8));
            *(unsigned short *)(((int)stk + 8)) = (t53 + 0x1);
            t29 = (t29 + 0x4);
            if ((int)(unsigned short)(t53 + 0x1) >= (int)(unsigned short)t4) {
                break;
            }
        }
        t56 = t29;
        t57 = (unsigned short)(t53 + 0x1);
        u66 = (u52 - t51);
    } else {
        t68 = t3;
        u65 = u7;
    }
    t67 = t57;
    t70 = t69;
    t72 = t71;
    t73 = 0x0;
    t74 = 0xC0DF340;
    t75 = t56;
    t76 = a4;
    u77 = u65;
    u78 = u66;
    u79 = f4;
    for (;;) {
        if ((int)(unsigned short)t73 >= (int)(unsigned short)t4) {
            break;
        }
        t70 = t73;
        t76 = (unsigned short)t73;
        t72 = (unsigned short)t70;
        t76 = (t76 << 2);
        t72 = (t72 << 2);
        t67 = (unsigned short)t70;
        t68 = t72;
        t72 = (t72 + (((int)stk + 8) + 0x54));
        *(unsigned int *)(((int)stk + 12)) = (t76 + (((int)stk + 8) + 0x54));
        if ((int)t67 < (int)(unsigned short)t4) {
            for (;;) {
                u77 = (*(float *)((t72 + 0x0)));
                u78 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)));
                t70 = (t70 + 0x1);
                if (u78 > u77) {
                    t74 = t76;
                    t75 = t68;
                    t74 = (t74 + (((int)stk + 8) + 0x54));
                    u78 = (*(float *)((t74 + 0x0)));
                    t75 = (t75 + (((int)stk + 8) + 0x54));
                    u79 = (*(float *)((t75 + 0x0)));
                    *(float *)((t75 + 0x0)) = u78;
                    t75 = t68;
                    *(float *)((t74 + 0x0)) = u79;
                    t74 = t76;
                    t75 = (t75 + (((int)stk + 8) + 0x14));
                    t74 = (t74 + (((int)stk + 8) + 0x14));
                    *(unsigned int *)(((int)stk + 8)) = t75;
                    t67 = (*(int *)((t74 + 0x0)));
                    t75 = (*(int *)((t75 + 0x0)));
                    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = t67;
                    *(unsigned int *)((t74 + 0x0)) = t75;
                }
                t68 = (t68 + 0x4);
                t72 = (t72 + 0x4);
                if ((int)(unsigned short)t70 >= (int)(unsigned short)t4) {
                    break;
                }
            }
        }
        t73 = (t73 + 0x1);
    }
    t91 = *(signed char *)0xC3673EE;
    if ((unsigned short)t4 != 0) {
        t95 = 0x1;
        t96 = (*(int *)(((((int)stk + 8) + 0x14) + 0x0)));
    } else {
        t95 = 0x0;
        t96 = ((((struct o6C_int *)(((short)((short)(unsigned char)t91 * (short)0x254) + 0xC366F40)))->v));
    }
    (((struct o6C_uint *)(((short)((short)(unsigned char)t91 * (short)0x254) + 0xC366F40)))->v) = t96;
    t98 = *(signed char *)0xC3673EE;
    u100 = (((struct o20_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t98 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o60_float *)(((short)((short)(unsigned char)t98 * (short)0x254) + 0xC366F40)))->v) = u100;
    t101 = *(signed char *)0xC3673EE;
    u103 = (((struct o24_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t101 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o64_float *)(((short)((short)(unsigned char)t101 * (short)0x254) + 0xC366F40)))->v) = u103;
    t104 = *(signed char *)0xC3673EE;
    u106 = (((struct o28_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t104 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o68_float *)(((short)((short)(unsigned char)t104 * (short)0x254) + 0xC366F40)))->v) = u106;
    (((struct o26_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = t95;
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t110 = FUN_0c04cdf2();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t110;
}
