/* Straight-line functions with calls and guards (batch gen_df): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o300_int { char p[0x300]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
int FUN_0c0555dc(void);
int FUN_0c059330(int);
int FUN_0c0a3796(int, int);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e21b0(int, int);
extern int FUN_0c0e6e5c();
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(int);
int thunk_FUN_0c062242(int);
int FUN_0c03792c(int a4);
int FUN_0c028c88(int a4);
int FUN_0c05b538(int a4, int a5, int a6, int a7);
int FUN_0c01f6fc(int a4);

int FUN_0c03792c(int a4)
{
    int stk[4];
    register int t0;
    register int t3;
    register int t10;
    register int t16;
    register int t21;
    register int t23;
    register int t35;
    register int t47;
    register int t54;
    register int t55;
    register int t11;
    register int t12;
    int t13;
    register int t14;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x4;
    }
    t3 = *(signed char *)((a4 + 0x8));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                if (t3 == 3) {
                    t55 = (FUN_0c059330(a4));
                } else {
                    t55 = t3;
                    if (t3 == 4) {
                        t55 = (FUN_0c059330(a4));
                    }
                }
            } else {
                t10 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t10 - 1);
                if (((short)(t10 - 1) != 0) && ((t11 = *(int *)((a4 + 0x1C)), t12 = (((struct oF2_short *)(t11))->v), t12 != 1) && (t13 = *(int *)((a4 + 0x1C)), t14 = *(signed char *)((0x71BA + t13)), t14 == 11))) {
                    t16 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
                    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t16 * (unsigned short)0x72D0) + 0xC7E40C4);
                    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t16 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t16 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0));
                    (((struct o20_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
                    (((struct o28_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
                    t21 = (((struct o2E4_int *)(a4))->v);
                    (((struct o24_float *)(t21))->v) = (((((struct o24_float *)(t21))->v)) + 0.5f);
                    t55 = 0x24;
                } else {
                    t23 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t23 + 0x1);
                    t55 = (t23 + 0x1);
                }
            }
        } else {
            t35 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t35 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t35 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t35 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0));
            (((struct o20_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
            (((struct o24_float *)(a4))->v) = (*(float *)(((int)stk + 8)));
            (((struct o28_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
            (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            (((struct o1C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
            (((struct o20_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
            (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
            (((struct oEC_ushort *)(a4))->v) = 0x12;
            t47 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t47 + 0x1);
            t55 = (t47 + 0x1);
        }
    } else {
        t54 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t54 + 0x1);
        t55 = (t54 + 0x1);
    }
    return t55;
}

int FUN_0c028c88(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x200);
    }
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    t0 = (((struct o2E0_int *)(a4))->v);
    *(volatile short *)((a4 + 0xEC));
    t1 = ((int (*)(int))(FUN_0c0e6e5c))(a4);
    FUN_0c0df940();
    
    t2 = FUN_0c0e6f24();
    u0 = (float)t2;
    if ((int)t2 < 0) {
        u0 = ((float)t2 + 4.2949673e+09f);
    }
    (((struct o8_float *)(t0))->v) = ((float)(t1 - 1) * u0);
    *(volatile short *)((a4 + 0xEC));
    t1 = ((int (*)(void))(FUN_0c0e6e5c))();
    FUN_0c0df940();
    
    t2 = FUN_0c0e6f24();
    u0 = (float)t2;
    if ((int)t2 < 0) {
        u0 = ((float)t2 + 4.2949673e+09f);
    }
    (((struct o4_float *)(t0))->v) = ((float)(t1 - 1) * u0);
    FUN_0c0df940();
    
    t0 = FUN_0c0e6f24();
    u0 = 1.0f;
    if (t0 == 0) {
        u0 = 0.099999994f;
    }
    (((struct o68_float *)(a4))->v) = u0;
    (((struct o64_float *)(a4))->v) = u0;
    (((struct o60_float *)(a4))->v) = u0;
    if ((int)((((struct oEC_short *)(a4))->v)) <= 0) {
        return FUN_0c059330(a4);
    }
    return 0xEC;
}

int FUN_0c05b538(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x30C))) == 14) {
        FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0x35);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC05B6A8))(a4, a5, a6, a7);
        }
        if (((((struct o274_float *)(a4))->v)) > 0.0f) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            return 0xEC;
        }
        FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
        FUN_0c0e21b0((a4 + 0x38), (a4 + 0x44));
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x10)) = ((*(int *)((t0 + 0x10))) + 0xB6);
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x16C);
        return 0x2E0;
    }
    t0 = *(int *)((a4 + 0x1C));
    *(unsigned char *)((a4 + 0x3)) = 0x2;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    FUN_0c0e6fe8(a4);
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 180.0f);
    (((struct o38_float *)(a4))->v) = (-((FUN_0c0df4d0(((-(*(int *)((t0 + 0x30)))) + 0x14000))) * 5.0f));
    (((struct o3C_float *)(a4))->v) = 10.0f;
    (((struct o40_float *)(a4))->v) = (-((FUN_0c0dfa50(((-(*(int *)((t0 + 0x30)))) + 0x14000))) * 5.0f));
    (((struct o44_float *)(a4))->v) = ((-((((struct o38_float *)(a4))->v))) / 180.0f);
    (((struct o48_float *)(a4))->v) = -2.0f;
    (((struct o4C_float *)(a4))->v) = ((-((((struct o40_float *)(a4))->v))) / 180.0f);
    (((struct o118_uint *)(a4))->v) = 0x0;
    (((struct o107_uchar *)(a4))->v) = 0x0;
    return 0x107;
}

int FUN_0c01f6fc(int a4)
{
    int t1;
    register int t4;
    register float u6;
    register int t7;
    register int t22;
    register int t27;
    register float u29;
    register int t39;
    register float u42;
    register int t2;
    register int t3;
    int t24;
    register int t25;

    *(volatile signed char *)((a4 + 0x4));
    t1 = *(int *)0xC362A5C;
    t4 = 0x0;
    for (;;) {
        u6 = 0.0f;
        u6 = u6 + 120.0f * (float)(t4 & 0x1);
        t7 = *(int *)((((0x2E0 + a4) + (t4 << 2)) + 0x0));
        (((struct o4_float *)(t7))->v) = u6;
        (((struct o8_float *)(t7))->v) = (0.0f - (((float)(t4 >> 1) * 30.0f)));
        if ((((int)0x1 << (int)t4) & t1) != 0) {
            t2 = 0x2E0;
            t2 = (t2 + a4);
            (((struct o40_float *)((*(int *)((((t4 << 2) + t2) + 0x0)))))->v) = 1.0f;
        } else {
            t3 = 0x2E0;
            t3 = (t3 + a4);
            (((struct o40_float *)((*(int *)((((t4 << 2) + t3) + 0x0)))))->v) = 0.5f;
        }
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0x8) {
            break;
        }
    }
    t22 = *(signed char *)0xC362A7C;
    if (((*(signed char *)((a4 + 0xE))) == (signed char)t22) && (t24 = *(signed char *)((a4 + 0xF)), t25 = *(signed char *)0xC362A7D, t24 == t25)) {
    } else {
        *(unsigned char *)((a4 + 0xE)) = t22;
        *(unsigned char *)((a4 + 0xF)) = (*(signed char *)0xC362A7D);
        t27 = (((struct o300_int *)(a4))->v);
        u29 = 0.0f;
        u29 = u29 + 120.0f * (float)(*(signed char *)((a4 + 0xF)));
        (((struct o4_float *)(t27))->v) = u29;
        (((struct o8_float *)(t27))->v) = (((-((float)(*(signed char *)((a4 + 0xE))) * 30.0f))) + 0.0f);
    }
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x5B0);
    t39 = (((struct o300_int *)(a4))->v);
    u42 = 0.75f;
    u42 = u42 + 0.25f * (FUN_0c0dfa50(((((struct oEC_short *)(a4))->v))));
    (((struct o40_float *)(t39))->v) = u42;
    if ((*(signed char *)0xC362A7E) != 0) {
        return FUN_0c059330(a4);
    }
    return 0x2E;
}
