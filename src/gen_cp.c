/* Straight-line functions with calls and guards (batch gen_cp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o2C_ushort { char p[0x2C]; unsigned short v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2F0_int { char p[0x2F0]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o56_ushort { char p[0x56]; unsigned short v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o64_short { char p[0x64]; short v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_int { char p[0x6C]; int v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o70_short { char p[0x70]; short v; };
struct o70_ushort { char p[0x70]; unsigned short v; };
struct o71F8_int { char p[0x71F8]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o80_short { char p[0x80]; short v; };
struct o84_short { char p[0x84]; short v; };
struct o86_short { char p[0x86]; short v; };
struct o8C_int { char p[0x8C]; int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o9A_ushort { char p[0x9A]; unsigned short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oA0_short { char p[0xA0]; short v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c0195a2(int);
int FUN_0c02f328(int);
int FUN_0c04cdf2(void);
int FUN_0c059132(int, int, int);
int FUN_0c059330(int);
int FUN_0c06206e(int, int, int);
float FUN_0c0620a4(int);
int FUN_0c06231c(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0646fe(int);
int FUN_0c06a248(int);
int FUN_0c0880be(int);
int FUN_0c08818c(int);
int FUN_0c0881f2(int);
int FUN_0c088218(int);
int FUN_0c098818(int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09c7be(int, int);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09e7b8(int);
int FUN_0c0a2e26(int, int, int, int);
int FUN_0c0d8fe8(int, int);
float FUN_0c0df940(void);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(void);
int FUN_0c04512c(int a4, int a5, int a6);
int FUN_0c01901c(int a4);
int FUN_0c0d1c96(int a4);
int FUN_0c04e1b8(int a4);
int FUN_0c08823a(int a4, int a5, int a6, int a7);
int FUN_0c098884(int a4, int a5, int a6, int a7);
int FUN_0c06a26e(int a4, int a5, int a6, int a7);
int FUN_0c02f786(int a4, int a5, int a6);
int FUN_0c098e0a(int a4, int a5, int a6, int a7);
int FUN_0c010b84(void);

int FUN_0c04512c(int a4, int a5, int a6)
{
    int stk[6];
    register float t2;
    register int t5;
    register int t7;
    register int t13;
    register int t27;
    register float u30;
    register int t34;
    register int t35;
    register int t36;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned char *)(((int)stk + 0)) = a6;
    FUN_0c06206e((((int)stk + 0) + 0xC), 0xC7F2AB4, (*(int *)(((int)stk + 4))));
    t2 = FUN_0c0620a4((((int)stk + 0) + 0xC));
    if (!(t2 > 300.0f)) {
        return 0xC045188;
    }
    t5 = 0x3;
    if ((*(signed char *)(((int)stk + 0))) == 0) {
        t5 = 0x1;
    }
    t7 = FUN_0c059132(0x5, 0x1, (signed char)t5);
    if (t7 == 0) {
        return t7;
    }
    *(unsigned char *)((t7 + 0x0)) = 0x1;
    *(unsigned char *)((t7 + 0x1)) = 0x1;
    *(unsigned char *)((t7 + 0x3)) = 0x2;
    *(unsigned short *)((t7 + 0x6)) = 0x1F;
    *(unsigned char *)((t7 + 0x5)) = 0x1;
    *(unsigned int *)((t7 + 0x10)) = 0xC045354;
    (((struct o118_uint *)(t7))->v) = 0x0;
    *(volatile int *)(((int)stk + 8));
    FUN_0c0e6fe8();
    *(volatile int *)(((int)stk + 4));
    FUN_0c0e6fe8();
    FUN_0c0e6fe8();
    t13 = (((struct o2E0_int *)(t7))->v);
    FUN_0c06233a(t13, 0xC4CFA68, 0x69);
    *(unsigned char *)((t13 + 0x0)) = 0x1;
    *(unsigned short *)((t13 + 0x2)) = 0x218;
    FUN_0c0df940();
    
    *(unsigned int *)((t13 + 0x18)) = ((((FUN_0c0e6f24()) << 8) << 2) << 1);
    FUN_0c0df940();
    
    t27 = FUN_0c0e6f24();
    u30 = (float)(t27 + 0x5);
    if ((int)(t27 + 0x5) < 0) {
        u30 = ((float)(t27 + 0x5) + 4.2949673e+09f);
    }
    (((struct o24_float *)(t13))->v) = (u30 / 10.0f);
    FUN_0c0e6fe8();
    t34 = *(signed char *)(((int)stk + 0));
    *(unsigned char *)((t7 + 0xB)) = t34;
    if ((signed char)t34 != 0) {
        (((struct o58_float *)(t7))->v) = 1.19999993f;
        (((struct o54_float *)(t7))->v) = 1.19999993f;
        (((struct o50_float *)(t7))->v) = 1.19999993f;
        *(unsigned int *)(((int)stk + 0)) = ((0x2E0 + t7) + 0x4);
        t35 = *(int *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 0)) = (t35 + 0x4);
        t36 = *(int *)((((t35 + 0x4) - 4) + 0x0));
        FUN_0c06233a(t36, 0xC4CFA68, 0x7A);
        *(unsigned char *)((t36 + 0x0)) = 0x1;
        *(unsigned short *)((t36 + 0x2)) = 0x21C;
        *(unsigned int *)((t36 + 0x14)) = 0x8000;
        FUN_0c0df940();
        
        *(unsigned int *)((t36 + 0x18)) = ((((FUN_0c0e6f24()) << 8) << 2) << 1);
        return ((int (*)(void))(0xC045320))();
    }
    return (signed char)t34;
}

int FUN_0c01901c(int a4)
{
    register int t0;

    if ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0xD))) == 0) {
        FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), 0xC664AF0, ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x4))) + 0x1E));
        FUN_0c06231c(((((struct o2E4_int *)(a4))->v)), 0xC664AF0, ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x5))) + 0x1E));
        FUN_0c06231c(((((struct o2E8_int *)(a4))->v)), 0xC664AF0, ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x6))) + 0x1E));
        FUN_0c06231c(((((struct o2EC_int *)(a4))->v)), 0xC664AF0, ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x7))) + 0x1E));
        FUN_0c06231c(((((struct o2F0_int *)(a4))->v)), 0xC664AF0, ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x8))) + 0x1E));
        t0 = (*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x9)));
    } else {
        FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), 0xC664AF0, ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x4))) + 0x1E));
        FUN_0c06231c(((((struct o2E4_int *)(a4))->v)), 0xC664AF0, ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x5))) + 0x1E));
        FUN_0c06231c(((((struct o2E8_int *)(a4))->v)), 0xC664AF0, ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0xA))) + 0x1E));
        FUN_0c06231c(((((struct o2EC_int *)(a4))->v)), 0xC664AF0, ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x6))) + 0x1E));
        FUN_0c06231c(((((struct o2F0_int *)(a4))->v)), 0xC664AF0, ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x7))) + 0x1E));
        t0 = (*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0xB)));
    }
    FUN_0c06231c(((((struct o2F4_int *)(a4))->v)), 0xC664AF0, (t0 + 0x1E));
    if ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x0))) == 0) {
        (((struct o5C_float *)(a4))->v) = 0.5f;
    }
    if ((*(signed char *)((0xC3622EA + (((*(signed char *)((a4 + 0x3))) << 2) << 2)))) == 1) {
        (((struct o5C_float *)(a4))->v) = 1.0f;
    }
    t0 = FUN_0c0195a2(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c059330(a4);
    }
    return (signed char)t0;
}

int FUN_0c0d1c96(int a4)
{
    register int t0;
    register int t1;

    (((struct o8C_uint *)(a4))->v) = (((((unsigned short)((((struct o80_short *)(a4))->v)) * (unsigned short)((((struct o64_short *)(a4))->v))) << 2) + (*(int *)(((((((unsigned short)((((struct oA0_short *)(a4))->v)) << 2) << 2) << 1) + 0xC7D08E0) + 0x0)))) + ((unsigned short)((((struct o86_short *)(a4))->v)) << 2));
    t0 = (((struct o44_int *)(a4))->v);
    if ((t0 == 16) || ((t0 == 32) || ((t0 == 64) || (t0 == 0x80)))) {
        t0 = (((struct o84_short *)(a4))->v);
        if ((unsigned short)t0 != 0) {
            if ((unsigned short)t0 != 1) {
                if ((unsigned short)t0 != 2) {
                } else {
                    if ((0x40 & ((((struct o48_int *)(a4))->v))) != 0) {
                        t0 = (((struct o8C_int *)(a4))->v);
                        *(unsigned short *)((t0 + 0x2)) = ((*(short *)((t0 + 0x2))) - 1);
                    }
                    if ((0x80 & ((((struct o48_int *)(a4))->v))) != 0) {
                        t0 = (((struct o8C_int *)(a4))->v);
                        *(unsigned short *)((t0 + 0x2)) = ((*(short *)((t0 + 0x2))) + 0x1);
                    }
                    t0 = (((struct o8C_int *)(a4))->v);
                    t1 = *(signed char *)((t0 + 0x1));
                    if ((int)(unsigned short)(*(short *)((t0 + 0x2))) >= (int)(unsigned short)(*(short *)(((0xC33F604 + (signed char)((t1 << 1) + (t1 << 2))) + ((*(signed char *)((a4 + 0x4))) << 1))))) {
                        *(unsigned short *)((((((struct o8C_int *)(a4))->v)) + 0x2)) = 0x0;
                    }
                }
            } else {
                if ((0x40 & ((((struct o48_int *)(a4))->v))) != 0) {
                    t0 = (((struct o8C_int *)(a4))->v);
                    t1 = *(signed char *)((t0 + 0x1));
                    *(unsigned char *)((t0 + 0x1)) = (t1 - 1);
                    if ((int)(signed char)(t1 - 1) < 0) {
                        *(unsigned char *)((((((struct o8C_int *)(a4))->v)) + 0x1)) = 0x2;
                    }
                }
                if ((0x80 & ((((struct o48_int *)(a4))->v))) != 0) {
                    t0 = (((struct o8C_int *)(a4))->v);
                    t1 = *(signed char *)((t0 + 0x1));
                    *(unsigned char *)((t0 + 0x1)) = (t1 + 0x1);
                    if ((int)(signed char)(t1 + 0x1) > (int)0x2) {
                        *(unsigned char *)((((((struct o8C_int *)(a4))->v)) + 0x1)) = 0x0;
                    }
                }
            }
        } else {
            if ((0x40 & ((((struct o48_int *)(a4))->v))) != 0) {
                t0 = (((struct o8C_int *)(a4))->v);
                t1 = *(signed char *)((t0 + 0x0));
                *(unsigned char *)((t0 + 0x0)) = (t1 - 1);
                if ((int)(signed char)(t1 - 1) < (int)0xFFFFFFFF) {
                    *(unsigned char *)((((((struct o8C_int *)(a4))->v)) + 0x0)) = 0x12;
                }
            }
            if ((0x80 & ((((struct o48_int *)(a4))->v))) != 0) {
                t0 = (((struct o8C_int *)(a4))->v);
                t1 = *(signed char *)((t0 + 0x0));
                *(unsigned char *)((t0 + 0x0)) = (t1 + 0x1);
                if ((int)(signed char)(t1 + 0x1) > (int)0x12) {
                    *(unsigned char *)((((((struct o8C_int *)(a4))->v)) + 0x0)) = 0xFFFFFFFF;
                }
            }
        }
    }
    (((struct o9A_ushort *)(a4))->v) = (*(short *)((0xC33F628 + ((*(signed char *)((((((struct o8C_int *)(a4))->v)) + 0x1))) << 1))));
    t0 = (((struct o8C_int *)(a4))->v);
    (((struct o90_uint *)(a4))->v) = ((((unsigned short)(*(short *)((0xC33F628 + ((*(signed char *)((t0 + 0x1))) << 1)))) * (unsigned short)(*(short *)((t0 + 0x2)))) << 1) + (*(int *)(((0xC7D08E0 + ((((unsigned short)((((struct oA0_short *)(a4))->v)) << 2) << 2) << 1)) + 0x8))));
    if ((0x2 & ((((struct o48_int *)(a4))->v))) != 0) {
        (((struct o56_ushort *)(a4))->v) = 0x1;
    }
    t0 = (((struct o48_int *)(a4))->v);
    t1 = t0;
    if ((t0 & 4) != 0) {
        (((struct o56_ushort *)(a4))->v) = 0x3;
        t1 = 0x56;
    }
    return t1;
}

int FUN_0c04e1b8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    (((struct o2C_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = (*(short *)((((((struct o0_int *)0xC3673E8)->v)) + 0x0)));
    t0 = *(signed char *)0xC3673EF;
    if ((*(signed char *)((a4 + 0x71F3))) == 0) {
        t1 = 0xC32D620;
        if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F3))) == 0) {
            t1 = 0xC32D5C8;
        }
        t2 = (*(int *)((((unsigned char)t0 << 2) + t1)));
    } else {
        t2 = (*(int *)((((unsigned char)t0 << 2) + 0xC32D5F4)));
    }
    t0 = (((struct o0_int *)0xC3673E8)->v);
    t1 = *(signed char *)0xC3673EE;
    t3 = *(int *)((t2 + 0x0));
    (((struct o0_uint *)0xC3673E8)->v) = (t0 + 0x2);
    *(unsigned int *)((((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40) + 0xC)) = (*(int *)((t3 + ((unsigned short)(*(short *)((((t0 + 0x2) - 2) + 0x0))) << 2))));
    t0 = *(signed char *)0xC3673EE;
    *(unsigned int *)(((((unsigned short)((((struct o70_short *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v)) << 2) + (0x1B4 + ((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40))) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
    t0 = *(signed char *)0xC3673EE;
    *(unsigned int *)(((((unsigned short)((((struct o70_short *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v)) << 2) + (0x164 + ((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40))) + 0x0)) = ((((struct o6C_int *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v));
    t0 = *(signed char *)0xC3673EE;
    t1 = *(signed char *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x70));
    u0 = (((struct o60_float *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v);
    *(float *)((((unsigned char)(((t1 << 1) + t1) << 2) + (((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x74)) + 0x0)) = u0;
    t0 = *(signed char *)0xC3673EE;
    t1 = *(signed char *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x70));
    u0 = (((struct o64_float *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v);
    (((struct o4_float *)(((unsigned char)(((t1 << 1) + t1) << 2) + (((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x74))))->v) = u0;
    t0 = *(signed char *)0xC3673EE;
    t1 = *(signed char *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x70));
    u0 = (((struct o68_float *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v);
    (((struct o8_float *)(((unsigned char)(((t1 << 1) + t1) << 2) + (((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x74))))->v) = u0;
    t0 = *(signed char *)0xC3673EE;
    *(unsigned short *)(((((unsigned short)((((struct o70_short *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v)) << 1) + (0x22C + ((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40))) + 0x0)) = (*(short *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x8)));
    t0 = *(signed char *)0xC3673EE;
    *(unsigned short *)(((((unsigned short)((((struct o70_short *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v)) << 1) + (0x204 + ((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40))) + 0x0)) = (*(short *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x6)));
    t0 = *(signed char *)0xC3673EE;
    (((struct o70_ushort *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v) = (((((struct o70_short *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v)) + 0x1);
    (((struct o0_uint *)0xC3673E8)->v) = (*(int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)));
    t0 = FUN_0c04cdf2();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t0;
}

int FUN_0c08823a(int a4, int a5, int a6, int a7)
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
                    return FUN_0c088218(a4);
                }
                return FUN_0c0881f2(a4);
            }
            return FUN_0c08818c(a4);
        }
        return FUN_0c0880be(a4);
    }
    return ((int (*)(int, int, int, int))(0xC088048))(a4, a5, a6, a7);
}

int FUN_0c098884(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;

    t3 = a5;
    if (((*(signed char *)((a4 + 0xB))) != 0) && ((t0 = (((struct oEE_short *)(a4))->v), t0 == 0) && (t1 = (((struct o71F8_int *)(a4))->v), t2 = (((struct o2E4_int *)(a4))->v), ((t2 | t1) & 0x600) == 0x600))) {
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
        t3 = 0x600;
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0986E6))(a4, t3, a6, a7);
    }
    return FUN_0c098818(a4);
}

int FUN_0c06a26e(int a4, int a5, int a6, int a7)
{
    register int t2;

    if ((*(signed char *)((a4 + 0x71F1))) != 0) {
        return FUN_0c0646fe(a4);
    }
    t2 = *(signed char *)((a4 + 0xA));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                return t2;
            }
            return FUN_0c06a248(a4);
        }
        return ((int (*)(int, int, int, int))(0xC06A146))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC06A098))(a4, a5, a6, a7);
}

int FUN_0c02f786(int a4, int a5, int a6)
{
    return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0xC02F96C))(a4, 0x0, a6, 0x8, 40.0f, 24.0f, 1.0f, 96.0f, 84.0f, -1.0f, 556.0f, 4.0f);
}

int FUN_0c098e0a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 == 5) {
                            (((struct o107_uchar *)(a4))->v) = 0x0;
                            return FUN_0c0a2e26(a4, 0xF, 0x1, a7);
                        }
                        return t0;
                    }
                    (((struct o107_uchar *)(a4))->v) = 0x0;
                    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                        t0 = FUN_0c09e7b8(a4);
                        if ((signed char)t0 == 0) {
                            FUN_0c09a910(a4);
                            FUN_0c09d990(a4);
                            FUN_0c09d9bc(a4);
                            FUN_0c09c7be(a4, (0xF0 + a4));
                            return FUN_0c02f328((*(signed char *)((a4 + 0x3))));
                        }
                        *(unsigned char *)((a4 + 0xC)) = 0x5;
                        return 0x5;
                    }
                    FUN_0c09a910(a4);
                    FUN_0c09d990(a4);
                    FUN_0c09d9bc(a4);
                    FUN_0c09c7be(a4, (0xF0 + a4));
                    return FUN_0c02f328((*(signed char *)((a4 + 0x3))));
                }
                (((struct o107_uchar *)(a4))->v) = 0x1;
                t0 = (((struct oF2_short *)(a4))->v);
                (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
                if ((short)(t0 - 1) != 0) {
                    FUN_0c09a910(a4);
                    FUN_0c09d990(a4);
                    FUN_0c09c7be(a4, (0xF0 + a4));
                    return FUN_0c02f328((*(signed char *)((a4 + 0x3))));
                }
                *(unsigned char *)((a4 + 0xC)) = 0x4;
                (((struct o3C_float *)(a4))->v) = -0.099999994f;
                (((struct o40_float *)(a4))->v) = 20.0f;
                (((struct o48_float *)(a4))->v) = -1.08799994f;
                return 0x48;
            }
            (((struct o107_uchar *)(a4))->v) = 0x1;
            t0 = (((struct oF2_short *)(a4))->v);
            (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0xC)) = 0x3;
                FUN_0c09a808(a4, 0x2, 0x91);
                (((struct o40_float *)(a4))->v) = 20.0f;
                (((struct oF2_ushort *)(a4))->v) = 0x14;
                return 0xF2;
            }
        } else {
            (((struct o107_uchar *)(a4))->v) = 0x1;
            t0 = (((struct oF2_short *)(a4))->v);
            (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0xC)) = 0x2;
                (((struct oF2_ushort *)(a4))->v) = 0x14;
                return 0xF2;
            }
            FUN_0c09a910(a4);
            FUN_0c09d990(a4);
        }
        FUN_0c09c7be(a4, (0xF0 + a4));
        return FUN_0c02f328((*(signed char *)((a4 + 0x3))));
    }
    *(unsigned char *)((a4 + 0xC)) = 0x1;
    FUN_0c0d8fe8((*(signed char *)((a4 + 0x3))), 0x3);
    FUN_0c09a808(a4, 0x2, 0x98);
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = -20.0f;
    (((struct oF0_ushort *)(a4))->v) = 0x14;
    (((struct oF2_ushort *)(a4))->v) = 0x14;
    return 0xF2;
}

int FUN_0c010b84(void)
{
    register int t0;
    register int t1;

    (((struct o0_uchar *)0xC7F2F11)->v) = 0x3;
    (((struct o7_uchar *)0xC7F2F11)->v) = 0x3;
    (((struct o3_uchar *)0xC7F2F11)->v) = 0x1;
    (((struct o4_uchar *)0xC7F2F11)->v) = 0x1;
    (((struct o1_uchar *)0xC7F2F11)->v) = 0x1;
    (((struct o8_uchar *)0xC7F2F11)->v) = 0x1;
    (((struct o14_uchar *)0xC7F4750)->v) = 0x1;
    (((struct o15_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o16_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o17_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o18_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o19_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o1A_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o1B_uchar *)0xC7F4750)->v) = 0x1;
    (((struct o1C_uchar *)0xC7F4750)->v) = 0x1;
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        *(unsigned char *)(((0xC7F476D + t0) + 0x0)) = 0x2;
        *(unsigned char *)(((0xC7F476D + t0) + 0x1)) = 0x3;
        *(unsigned char *)(((0xC7F476D + t0) + 0x2)) = 0x0;
        *(unsigned char *)(((0xC7F476D + t0) + 0x3)) = 0x1;
        *(unsigned char *)(((0xC7F476D + t0) + 0x4)) = 0x4;
        *(unsigned char *)(((0xC7F476D + t0) + 0x5)) = 0x5;
        *(unsigned char *)(((0xC7F476D + t0) + 0x6)) = 0x4;
        t1 = (t1 + 0x1);
        *(unsigned char *)(((0xC7F476D + t0) + 0x7)) = 0x5;
        t0 = (t0 + 0x8);
        if ((int)t1 >= (int)0x2) {
            break;
        }
    }
    (((struct o0_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o1_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o2_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o3_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o4_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o5_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o6_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o7_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o8_uchar *)0xC7F4750)->v) = 0x0;
    (((struct oA_ushort *)0xC7F4750)->v) = 0x0;
    (((struct oC_uint *)0xC7F4750)->v) = 0x0;
    (((struct o10_uint *)0xC7F4750)->v) = 0x0;
    t0 = 0x0;
    for (;;) {
        t1 = (0xC7F3083 + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = 0x0;
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        *(unsigned char *)(((0xC7F308D + t1) + 0x0)) = 0x43;
        *(unsigned char *)(((0xC7F308D + t1) + 0x1)) = 0x41;
        t0 = (t0 + 0x1);
        *(unsigned char *)(((0xC7F308D + t1) + 0x2)) = 0x50;
        t1 = (t1 + 0x4);
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        *(unsigned short *)(((0xC7F30B6 + (signed char)((t0 << 1) + (t0 << 2))) + 0x0)) = 0x1E;
        *(unsigned short *)(((0xC7F30B6 + (signed char)((t0 << 1) + (t0 << 2))) + 0x2)) = 0x0;
        t1 = (signed char)((t0 << 1) + (t0 << 2));
        t0 = (t0 + 0x1);
        *(unsigned short *)(((t1 + 0xC7F30B6) + 0x4)) = 0x0;
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = (0xC7F314C + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = 0x0;
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        *(unsigned char *)(((0xC7F3156 + t1) + 0x0)) = 0x43;
        *(unsigned char *)(((0xC7F3156 + t1) + 0x1)) = 0x41;
        t0 = (t0 + 0x1);
        *(unsigned char *)(((0xC7F3156 + t1) + 0x2)) = 0x50;
        t1 = (t1 + 0x4);
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    return ((int (*)(int, int, int, int))(0xC010D36))(0x0, 0xC7F302C, 0xA, 0x2);
}
