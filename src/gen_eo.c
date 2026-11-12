/* Straight-line functions with calls and guards (batch gen_eo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o308_int { char p[0x308]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71F8_int { char p[0x71F8]; int v; };
struct o71FC_int { char p[0x71FC]; int v; };
struct o7200_uint { char p[0x7200]; unsigned int v; };
struct o721E_uchar { char p[0x721E]; unsigned char v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o72B2_uchar { char p[0x72B2]; unsigned char v; };
struct o72B3_uchar { char p[0x72B3]; unsigned char v; };
struct o72B4_uchar { char p[0x72B4]; unsigned char v; };
struct o72B5_uchar { char p[0x72B5]; unsigned char v; };
struct o72B6_uchar { char p[0x72B6]; unsigned char v; };
struct o72B7_uchar { char p[0x72B7]; unsigned char v; };
struct o72B8_uchar { char p[0x72B8]; unsigned char v; };
struct o72BC_uchar { char p[0x72BC]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
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
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int ADXB_EvokeExpandMono(int, int);
int ADXB_EvokeExpandSte(int, int);
int ADXERR_CallErrFunc(int, ...);
int ADXSJD_GetLpEndOfst(int);
int ADXSJD_GetLpEndPos(int);
int ADXSJD_GetLpStartOfst(int);
int ADXSJD_GetLpStartPos(int);
int ADXSJD_SetDecPos(int, int);
int ADXSJD_SetTrapNumSmpl(int, int);
int FUN_0c01d0a6(void);
float FUN_0c02649a(int, int);
int FUN_0c0555dc(void);
int FUN_0c058f4e(void);
int FUN_0c059132(int, int, int);
extern int FUN_0c059330();
int FUN_0c05f2d4(int, int);
int FUN_0c062050(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c062954(int, int);
int FUN_0c06297a(void);
int FUN_0c062a7e(int);
int FUN_0c062abe(int);
int FUN_0c08deec(int, int);
int FUN_0c08eba8(int, int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09a91a(int);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09da1c(int);
int FUN_0c0a1d88(int, int);
int FUN_0c0a2080(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a2e26(int, int, int, int);
int FUN_0c0abe44(int, int, int);
int FUN_0c0ac780(int, int, int);
int FUN_0c0cb7ec(int, int);
int FUN_0c0ccefc(int, float, float);
int FUN_0c0d2fb0(void);
int FUN_0c0d4fb8(void);
int FUN_0c0d4ff4(int, int, int, int);
int FUN_0c0d8348(void);
int FUN_0c0dc1c0(int, int, int, int);
int FUN_0c0de280(int, int, int);
float FUN_0c0dfa50(int);
int FUN_0c0e1550(int);
int FUN_0c0e19b0(int);
float FUN_0c0e2220(int, int);
int FUN_0c0e6d00(void);
int FUN_0c0e6e5c(void);
extern int FUN_0c0e6fe8();
int FUN_0c0f4128(int);
int FUN_0c0f414e(int, int, int, int);
int FUN_0c101148(int, int);
int FUN_0c1062f6(int, int);
int FUN_0c106302(int, int);
int FUN_0c107fce(int, int);
int FUN_0c108000(int, int);
int FUN_0c108010(int, int);
int FUN_0c108094(int, int, int, int);
int FUN_0c1080f0(int, int, int);
int FUN_0c108304(int, int, int);
int FUN_0c114cba(int, int, int);
int FUN_0c114dde(int, int);
int FUN_0c114e00(int, int);
int FUN_0c114e22(int, int);
int FUN_0c114e3e(int, int, int);
int FUN_0c114e5c(int, int, int);
int FUN_0c114ea4(int, int, int);
int buIsFormat(int);
int check_cache(int);
int check_caps(int);
int get_fat(int, int);
int kmiCopyToFrameBuffer(int, int, int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, int, int, int);
int nlCalcPoint(int, int);
int nlCalcPoint44(int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int vmsfs_c_progress(int, int, int, int);
int vmsfs_mount2(int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int FUN_0c0a239a(int a4);
int FUN_0c030a1e(int a4, int a5, int a6, float f4);
int FUN_0c03c02c(int a4);
int FUN_0c09e638(int a4, int a5, int a6, int a7);
int FUN_0c0b5b74(int a4, int a5);
int FUN_0c0d724a(int a4, float f4);
int FUN_0c102862(int a4);
int vmsfs_mount(int a4, int a5, int a6);
int FUN_0c02b884(int a4);
int FUN_0c0c2934(int a4, int a5);
int FUN_0c0cbd88(int a4);
int FUN_0c0cf240(int a4, int a5, int a6);
int FUN_0c0e1700(int a4);
int FUN_0c0fc746(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int FUN_0c106994(int a4, int a5, int a6, int a7);
int FUN_0c1144b8(int a4);
int FUN_0c0380d4(int a4);
int FUN_0c06758c(int a4);
int FUN_0c06f600(int a4);
int FUN_0c09b8a8(int a4, int a5, int a6, int a7);
int FUN_0c0b4dc4(int a4);
int FUN_0c0b888c(int a4, int a5, int a6, int a7);
int FUN_0c0cb50c(int a4, int a5);
int FUN_0c0d5164(int a4, int a5, int a6, int a7);
int FUN_0c108372(int a4, int a5, int a6, int a7);

int FUN_0c0a239a(int a4)
{
    int stk[6];
    register int t4;
    register int t11;
    register float t18;
    register float t19;
    int t1;
    int t12;

    if (((*(signed char *)((a4 + 0x71BC))) != 2) && (t1 = (((struct o71C8_int *)(a4))->v), t1 != 0)) {
        t4 = FUN_0c0ac780(((((struct o71C8_int *)(a4))->v)), 0x1, (*(signed char *)((a4 + 0x3))));
        if (t4 != 0) {
            t11 = *(signed char *)((a4 + 0x4));
            if ((t11 != 4) && ((t11 != 5) && ((t11 != 9) && (t12 = *(signed char *)((a4 + 0x71F1)), t12 == 0)))) {
                t18 = FUN_0c02649a(((((struct o71C8_int *)(a4))->v)), 0x0);
                *(float *)(((int)stk + 4)) = t18;
                t19 = FUN_0c02649a(a4, 0x0);
                if (t19 > t18) {
                    (((struct o24_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
                }
                *(float *)(((int)stk + 0)) = (FUN_0c02649a(((((struct o71C8_int *)(a4))->v)), 0x1));
                FUN_0c02649a(a4, 0x1);
                return 0x0;
            }
            if ((*(signed char *)((((((struct o71C8_int *)(a4))->v)) + 0x30D))) == 0) {
                FUN_0c0abe44(((((struct o71C8_int *)(a4))->v)), 0x5, (*(signed char *)((a4 + 0x3))));
                FUN_0c0a2e26(a4, 0xA, 0xA, 0x0);
                (((struct o7236_uchar *)(a4))->v) = 0x1;
                return ((int (*)(void))(0xC0A247E))();
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c030a1e(int a4, int a5, int a6, float f4)
{
    int stk[17];
    register float u7;
    register float u13;
    register float u14;
    register float u17;
    register float u20;

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(float *)(((int)stk + 0)) = f4;
    FUN_0c0e19b0(0x0);
    FUN_0c0e1550(0x2);
    nlCalcPoint((*(int *)(((int)stk + 8))), (((int)stk + 0) + 0x18));
    FUN_0c0e6fe8();
    u7 = (*(float *)(((int)stk + 12)));
    u7 = u7 + 1.0f * (*(float *)(((int)stk + 0)));
    *(float *)(((int)stk + 12)) = u7;
    FUN_0c0e1550(0x3);
    nlCalcPoint44((((int)stk + 0) + 0x18), (((int)stk + 0) + 0x34));
    nlCalcPoint44((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x24));
    FUN_0c0e1550(0x1);
    nlPopMatrix(0x1);
    u13 = (((struct o0_float *)0xC030BC0)->v);
    u14 = (((struct o4_float *)0xC030BC0)->v);
    *(float *)((a4 + 0x0)) = (((((*(float *)(((int)stk + 52))) / (*(float *)(((int)stk + 64)))) + 1.0f) / u14) * u13);
    u17 = (((struct o8_float *)0xC030BC0)->v);
    u20 = (((((*(float *)(((int)stk + 56))) / (*(float *)(((int)stk + 64)))) + 1.0f) / u14) * u17);
    u20 = -u20;
    (((struct o4_float *)(a4))->v) = (u20 + u17);
    (((struct o8_float *)(a4))->v) = ((((struct oC_float *)0xC030BC0)->v));
    *(float *)(((*(int *)(((int)stk + 4))) + 0x0)) = (((((((*(float *)(((int)stk + 36))) / (*(float *)(((int)stk + 48)))) + 1.0f) / u14) * u13)) - (*(float *)((a4 + 0x0))));
    return 0x24;
}

int FUN_0c03c02c(int a4)
{
    register int t0;
    register int t15;
    register float u3;
    register int t8;

    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    t15 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03C150;
        FUN_0c0e6fe8();
        u3 = (((struct o0_float *)0xC03C188)->v);
        (((struct o58_float *)(t0))->v) = u3;
        (((struct o54_float *)(t0))->v) = u3;
        (((struct o50_float *)(t0))->v) = u3;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = ((((struct o4_float *)0xC03C188)->v));
        (((struct o28_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct o118_uint *)(t0))->v) = (((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0xDC0) + (0x300 + a4)) + 0x580);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x3F;
        t8 = *(signed char *)((t0 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t8 << 1) + t8) << 2) << 1) + 0xC6002D0), 0x1);
        *(volatile int *)((t0 + 0x2E0));
        FUN_0c0e6fe8();
        (((struct oEC_ushort *)(t0))->v) = 0x60;
        t15 = 0xEC;
    }
    return t15;
}

int FUN_0c09e638(int a4, int a5, int a6, int a7)
{
    register int t37;
    register int t5;
    register int t13;
    register int t7;
    register int t15;
    int t18;
    register int t20;
    register int t21;
    register int t22;
    register int t23;
    register int t24;
    int t16;
    register int t32;
    register int t33;
    int t34;
    int t35;

    t37 = 0x0;
    if ((((((((struct o2E4_int *)(a4))->v)) | ((((struct o71F8_int *)(a4))->v))) | ((((struct o71FC_int *)(a4))->v))) & 0x600) != 0) {
        t5 = (((struct o2E4_int *)(a4))->v);
        t13 = (t5 & 0x600);
        if ((t5 & 0x600) == 0) {
            t7 = (((struct o71F8_int *)(a4))->v);
            t13 = (t7 & 0x600);
            if ((t7 & 0x600) == 0) {
                t13 = (((((struct o71FC_int *)(a4))->v)) & 0x600);
            }
        }
        t15 = (((struct o2DC_int *)(a4))->v);
        t18 = (t13 | (t15 & 0xF0));
        if ((((t13 | (t15 & 0xF0)) & 0xC0) != 0) && (t16 = *(signed char *)((a4 + 0x71EE)), t16 == 1)) {
            t18 = ((t13 | (t15 & 0xF0)) ^ 0xC0);
        }
        t20 = *(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC338E4C));
        t21 = t20;
        t22 = t20;
        t23 = 0x0;
        t24 = 0x1;
        for (;;) {
            if ((*(signed char *)((t20 + (((signed char)t23 << 2) << 2)))) == 99) {
                return 0x0;
            }
            if (((*(signed char *)((t22 + 0x0))) == 0) && ((t32 = *(int *)((t22 + 0x8)), t32 != 0) && ((t33 = *(int *)((t21 + 0x4)), t33 == (0x600 & t18)) && (t34 = *(int *)((t21 + 0x8)), t35 = *(int *)((t21 + 0x8)), (((t34 & t18) & t35) & 240) != 0)))) {
                break;
            }
            t21 = (t21 + 0x10);
            t22 = (t22 + 0x10);
            t23 = (t23 + 0x1);
            t24 = (t24 + 0x1);
        }
        if ((t18 & 0x400) != 0) {
            (((struct o721E_uchar *)(a4))->v) = 0x0;
        } else {
            (((struct o721E_uchar *)(a4))->v) = 0x1;
        }
        t37 = t24;
    }
    return t37;
}

int FUN_0c0b5b74(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t14;
    register int t3;
    register int t4;
    register int t5;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c059132(0x2, 0x1, 0x1);
    t14 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned short *)((t0 + 0x6)) = 0x5;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B5C42;
        *(unsigned char *)((t0 + 0x4)) = 0xF;
        (((struct o308_uint *)(t0))->v) = ((((struct o308_int *)(a4))->v));
        (((struct o102_uchar *)(t0))->v) = 0xAC;
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x0;
        t3 = ((int (*)(int))(FUN_0c0e6fe8))(0x0);
        t4 = ((int (*)(void))(FUN_0c0e6fe8))();
        t5 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct o3C_float *)(t0))->v) = (*(float *)0xC0B5CB8);
        (((struct oEC_ushort *)(t0))->v) = 0x1E;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((((((struct o308_int *)(a4))->v)) + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x401;
        (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        t14 = 0x40;
    }
    return t14;
}

int FUN_0c0d724a(int a4, float f4)
{
    int stk[1];
    register int t7;

    *(unsigned char *)(((int)stk + 0)) = a4;
    FUN_0c0de280(0xFF000000, 0xFF000000, 0xFF000000);
    (((struct o0_uchar *)0xC7F2EE0)->v) = 0x1;
    (((struct oD_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct oC_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct oB_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct oA_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o9_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o8_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o7_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o6_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o5_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o4_uchar *)0xC7F2EE0)->v) = 0x0;
    memset(0xC7F4724, 0x0, 0x2C);
    FUN_0c0d2fb0();
    FUN_0c058f4e();
    FUN_0c0d8348();
    FUN_0c05f2d4(0x3, 0x0);
    (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
    (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
    (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
    (((struct o0_uchar *)0xC7F4724)->v) = 0x1;
    (((struct o1_uchar *)0xC7F4724)->v) = 0x4;
    (((struct o4_uchar *)0xC7F4724)->v) = 0x0;
    (((struct o3_uchar *)0xC7F4724)->v) = 0x0;
    (((struct o0_uchar *)0xC7F4768)->v) = 0x0;
    (((struct o1_uchar *)0xC7F4768)->v) = 0x0;
    FUN_0c0dc1c0(0x0, 0x0, 0x63, 0x0);
    t7 = *(signed char *)0xC7F4755;
    (((struct o15_uchar *)0xC7F4724)->v) = t7;
    if (t7 != 0) {
        (((struct o20_uchar *)0xC7F4724)->v) = 0x1;
        (((struct o21_uchar *)0xC7F4724)->v) = 0x1;
        (((struct o22_uchar *)0xC7F4724)->v) = 0x1;
        (((struct o23_uchar *)0xC7F4724)->v) = 0x1;
    }
    (((struct o16_uchar *)0xC7F4724)->v) = 0x1;
    FUN_0c01d0a6();
    (((struct o14_uchar *)0xC7F4724)->v) = 0x5;
    (((struct o1A_uchar *)0xC7F4724)->v) = ((*(signed char *)(((int)stk + 0))) + 0x4);
    return 0x1A;
}

int FUN_0c102862(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t1 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x2))) != 0) {
        t2 = vmsio_isready(a4);
        if (t2 == 0) {
            vmsfs_unmount(a4);
            t2 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t4 = 0xFFFFFF01;
            if ((t3 != 0) && (t0 = *(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x8)), t0 != 0)) {
                t0 = buIsFormat(a4);
                t3 = 0xFFFFFF03;
                if ((int)t0 < 0) {
                } else {
                    t5 = t0;
                    t0 = 0x0;
                    t6 = 0x0;
                    for (;;) {
                        t7 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C));
                        t8 = *(int *)((t7 + 0x2C));
                        t9 = *(int *)((t7 + 0x10));
                        if ((int)t6 >= (int)(((int)((unsigned int)((int)((unsigned int)(t9 * (t8 + 0x1)) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t9 * (t8 + 0x1)))) ? 1u : 0u))) >> 1)) {
                            break;
                        }
                        t5 = (get_fat(a4, t6));
                        t5 = (unsigned short)t5;
                        t6 = (t6 + 0x1);
                        if (t5 == 0xFFFC) {
                            t0 = (t0 + 0x1);
                        }
                    }
                    t3 = t0;
                }
                t4 = t3;
            }
            t2 = t4;
        }
        t1 = t2;
    }
    return t1;
}

int vmsfs_mount(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    if ((*(int *)(((*(int *)0xC80DBC4) + 0x8))) == 1) {
        return vmsfs_mount2(a4, a5, a6);
    }
    if ((*(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x2))) != 0) {
        *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
        t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x4));
        *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC347204)));
        t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30));
        t1 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34));
        *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = (t0 + 0x1);
        vmsfs_c_progress(a4, (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x8))), ((t0 + 0x1) - 1), t1);
        t0 = FUN_0c101148(a4, (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))));
        if ((int)t0 < 0) {
            *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0x9)) = 0x0;
            *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0x8)) = 0x0;
            return 0xFFFFFF01;
        }
        t0 = check_caps(((a4 * 0x148) + 0xC80DBC8));
        if ((int)t0 < 0) {
            return 0xFFFFFF83;
        }
        t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C));
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((t0 + 0x1C)));
        *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0x9)) = 0x1;
        *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0x8)) = 0x1;
        *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0xA)) = 0x0;
        *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0xB)) = 0x0;
        *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0xC)) = 0x0;
        return check_cache(a4);
    }
    return 0xFFFFFF01;
}

int FUN_0c02b884(int a4)
{
    int stk[3];
    register float u7;
    register float u8;
    register float u9;
    register int t10;
    register float u15;
    register float u19;

    *(unsigned short *)0xC7F473C = ((*(short *)0xC7F473C) + 0x444);
    (((struct oF2_ushort *)(a4))->v) = (*(short *)0xC7F473C);
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    FUN_0c062954((*(int *)(((*(int *)0xC664A08) + 0xC))), ((((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v)));
    u7 = (((struct o0_float *)0xC02B9C4)->v);
    u8 = (((struct o4_float *)0xC02B9C4)->v);
    u9 = (((struct o8_float *)0xC02B9C4)->v);
    for (;;) {
        t10 = FUN_0c06297a();
        if (t10 != 0) {
            break;
        }
        FUN_0c062a7e(((int)stk + 0));
        u15 = (*(float *)(((int)stk + 0)));
        u15 = u15 + u8 * (FUN_0c0dfa50(((((struct oF2_short *)(a4))->v))));
        *(float *)(((int)stk + 0)) = u15;
        u19 = (*(float *)(((int)stk + 4)));
        u19 = u19 + u7 * (FUN_0c0dfa50(((((struct oF2_short *)(a4))->v))));
        *(float *)(((int)stk + 4)) = u19;
        *(float *)(((int)stk + 8)) = ((FUN_0c0dfa50(((((struct oF2_short *)(a4))->v)))) * u9);
        FUN_0c062abe(((int)stk + 0));
        if (((((struct oEE_short *)(a4))->v)) != 0) {
            (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) + 0x2AAA);
        }
        (((struct oEE_ushort *)(a4))->v) = ((-((((struct oEE_short *)(a4))->v))) + 0x1);
    }
    return t10;
}

int FUN_0c0c2934(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t7;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c059132(0x1, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C269C;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        (((struct o58_float *)(t0))->v) = 0.099999994f;
        (((struct o54_float *)(t0))->v) = 0.099999994f;
        (((struct o50_float *)(t0))->v) = 0.099999994f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x3F;
        t7 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t7 << 1) + t7) << 2) << 1) + 0xC6002D0), 0x1);
        *(volatile int *)((t0 + 0x2E0));
        FUN_0c0e6fe8();
        (((struct o101_uchar *)(t0))->v) = 0x2;
        (((struct o102_uchar *)(t0))->v) = 0x2;
        return FUN_0c0a1d88(t0, 0x78);
    }
    return t0;
}

int FUN_0c0cbd88(int a4)
{

    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_1 = a4;
    v0_2 = *(int *)((v0_1 + 0x18));
    v0_0 = (v0_1);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0CBDBC;
    R5 = (0x0);
    R6 = (0x1);
    L_C0CBDB6:;
    if (!(((int)R5 < (int)(*(signed char *)((v0_0 + 0xF)))))) goto L_C0CBDBC;
    if (((*(int *)((v0_1 + 0x10))) != 0xC0CBF1C)) goto L_C0CBDB2;
    if (((*(signed char *)((v0_1 + 0x108))) == 0)) goto L_C0CBDB2;
    *(unsigned char *)((v0_0 + 0xE)) = R6;
    goto L_C0CBDBC;
    L_C0CBDBC:;
    v0_1 = (FUN_0c0555dc()) == 0;
    if (v0_1) goto L_C0CBDCA;
    *(unsigned char *)((v0_0 + 0x8)) = 0x3;
    L_C0CBDCA:;
    v0_2 = *(signed char *)((v0_0 + 0x8));
    v0_1 = (v0_2);
    w0_0 = (0.0333333313f);
    if ((v0_2 == 0)) goto L_C0CBDE4;
    if ((v0_1 == 1)) goto L_C0CBDF0;
    if ((v0_1 == 2)) goto L_C0CBE12;
    if (!((v0_1 == 3))) goto L_C0CBE4E;
    return FUN_0c059330(v0_0, R5, R6);
    L_C0CBE4E:;
    return v0_1;
    L_C0CBE12:;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + w0_0);
    (((struct o58_float *)(v0_0))->v) = (((((struct o58_float *)(v0_0))->v)) + w0_0);
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) - 0.099999994f);
    w0_0 = (((struct o5C_float *)(v0_0))->v);
    (((struct o5C_float *)(v0_0))->v) = (w0_0 - 0.099999994f);
    v0_1 = (0x5C);
    if (((w0_0 - 0.099999994f) > 0.0f)) goto L_C0CBE4E;
    L_C0CBE3C:;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C0CBE4E;
    L_C0CBDF0:;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + w0_0);
    (((struct o58_float *)(v0_0))->v) = (((((struct o58_float *)(v0_0))->v)) + w0_0);
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    v0_1 = (0xEC);
    if (((short)(v0_2 - 1) == 0)) goto L_C0CBE3C;
    goto L_C0CBE4E;
    L_C0CBDE4:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = 0x3C;
    goto L_C0CBDF0;
    L_C0CBDB2:;
    v0_1 = ((*(int *)((v0_1 + 0x18))));
    R5 = ((R5 + 0x1));
    goto L_C0CBDB6;
}

int FUN_0c0cf240(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = *(short *)0xC361BFC;
    if (((unsigned short)t0 & 16) != 0) {
        t1 = *(signed char *)(((0xC7F2EE4 + a5) + 0x0));
        if (t1 == 0) {
            *(unsigned char *)(((0xC7F2EE4 + a5) + 0x0)) = (0xFF + a4);
        } else {
            *(unsigned char *)(((0xC7F2EE4 + a5) + 0x0)) = (t1 - 1);
        }
    } else {
        if (((unsigned short)t0 & 32) != 0) {
            if ((unsigned char)(*(signed char *)(((0xC7F2EE4 + a5) + 0x0))) == (a4 - 1)) {
                *(unsigned char *)(((0xC7F2EE4 + a5) + 0x0)) = 0x0;
            } else {
                *(unsigned char *)(((0xC7F2EE4 + a5) + 0x0)) = ((*(signed char *)(((0xC7F2EE4 + a5) + 0x0))) + 0x1);
            }
        }
    }
    *(volatile float *)0xC0CF34C;
    u0 = (((struct o0_float *)0xC0CF350)->v);
    t0 = (FUN_0c0ccefc(0xC153474, ((((struct o4_float *)0xC0CF350)->v)), ((float)(*(signed char *)((((((unsigned char)(*(signed char *)((a5 + 0xC7F2EE4))) << 2) << 1) + a6) + 0x1))) * u0)));
    if ((int)a4 > 0) {
        t1 = 0x0;
        t2 = a6;
        for (;;) {
            t3 = FUN_0c0ccefc((*(int *)((t2 + 0x4))), ((float)(*(signed char *)((t2 + 0x0))) * u0), ((float)(*(signed char *)((t2 + 0x1))) * u0));
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x8);
            if ((int)t1 >= (int)a4) {
                break;
            }
        }
        t0 = t3;
    }
    return t0;
}

int FUN_0c0e1700(int a4)
{
    int stk[16];
    register float u0;
    register float u2;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u11;
    register float t12;

    u0 = (((struct oC_float *)(a4))->v);
    *(float *)(((int)stk + 0)) = (((-(u0 * u0))) + 1.0f);
    u2 = (((struct o10_float *)(a4))->v);
    *(float *)(((int)stk + 20)) = (((-(u2 * u2))) + 1.0f);
    u4 = (((struct o14_float *)(a4))->v);
    *(float *)(((int)stk + 40)) = (((-(u4 * u4))) + 1.0f);
    u6 = (((struct o10_float *)(a4))->v);
    u7 = (((struct oC_float *)(a4))->v);
    (((struct o10_float *)(((int)stk + 0)))->v) = (-(u7 * u6));
    (((struct o4_float *)(((int)stk + 0)))->v) = (-(u7 * u6));
    u8 = (((struct o14_float *)(a4))->v);
    u9 = (((struct oC_float *)(a4))->v);
    (((struct o20_float *)(((int)stk + 0)))->v) = (-(u9 * u8));
    (((struct o8_float *)(((int)stk + 0)))->v) = (-(u9 * u8));
    u10 = (((struct o14_float *)(a4))->v);
    u11 = (((struct o10_float *)(a4))->v);
    (((struct o24_float *)(((int)stk + 0)))->v) = (-(u11 * u10));
    (((struct o18_float *)(((int)stk + 0)))->v) = (-(u11 * u10));
    t12 = FUN_0c0e2220(a4, (a4 + 0xC));
    *(float *)(((int)stk + 48)) = (t12 * ((((struct oC_float *)(a4))->v)));
    *(float *)(((int)stk + 52)) = (t12 * ((((struct o10_float *)(a4))->v)));
    *(float *)(((int)stk + 56)) = (t12 * ((((struct o14_float *)(a4))->v)));
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 60)) = 1.0f;
    return (nlMultiMatrix(((int)stk + 0)));
}

int FUN_0c0fc746(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int t0;
    register int t28;
    register int t1;
    register int t5;
    register int t10;
    register int t13;
    register int t14;
    register int t15;

    t0 = *(int *)((a4 + 0x18));
    t28 = 0x4;
    if (((0x4 & t0) == 0) && (((0x1 & t0) == 0) && (((0x8 & t0) == 0) && ((0x20 & t0) == 0)))) {
        t1 = *(int *)((a4 + 0xC));
        t5 = *(int *)((a4 + 0x1C));
        t14 = a5;
        t10 = (a6 << 1);
        if (a12 == 0) {
        } else {
            t14 = ((((unsigned int)((a11 * (a12 << 1)) + (a10 << 1)) >> 2) << 2) + a5);
            t10 = (a12 << 1);
        }
        if ((unsigned int)0x0 < (unsigned int)a7) {
            t13 = 0x0;
            t15 = (((a9 * (t1 << 1)) + (a8 << 1)) + t5);
            for (;;) {
                kmiCopyToFrameBuffer(t15, t14, (a6 << 1), t1);
                t13 = (t13 + 0x1);
                t15 = (t15 + (t1 << 1));
                t14 = (t14 + (((unsigned int)t10 >> 2) << 2));
                if ((unsigned int)t13 >= (unsigned int)a7) {
                    break;
                }
            }
        }
        t28 = 0x0;
    }
    return t28;
}

int FUN_0c106994(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t9;
    register int t19;
    register int t28;
    register int t31;
    register int t34;

    t0 = *(int *)((a4 + 0x4));
    t1 = *(int *)((a4 + 0x14));
    t2 = ADXSJD_GetLpStartPos(t0);
    t3 = ADXSJD_GetLpStartOfst(t0);
    *(unsigned int *)(((int)stk + 4)) = (ADXSJD_GetLpEndPos(t0));
    ADXSJD_GetLpEndOfst(t0);
    t9 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x18)))))(t1, 0x1, ((((struct o50_int *)(a4))->v)), (((int)stk + 4) + 0x4), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    if ((int)(*(int *)(((int)stk + 12))) < (int)((((struct o50_int *)(a4))->v))) {
        *(int *)((int)stk + 0) = 0xC15B1F8;
        ADXERR_CallErrFunc(0xC15B1F8);
    }
    t19 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x20)))))(t1, 0x0, (((int)stk + 4) + 0x4), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    FUN_0c1062f6(t0, 0x0);
    ADXSJD_SetTrapNumSmpl(t0, ((*(int *)(((int)stk + 4))) - t2));
    FUN_0c106302(t0, t3);
    ADXSJD_SetDecPos(t0, t2);
    if ((*(signed char *)((a4 + 0x2))) == 2) {
        t28 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x14)))))(t1, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        t31 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x18)))))(t1, 0x1, t3, (((int)stk + 4) + 0x4), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        t34 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x20)))))(t1, 0x0, (((int)stk + 4) + 0x4), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    }
    (((struct o4C_uint *)(a4))->v) = (((((struct o4C_int *)(a4))->v)) + 0x1);
    return 0x4C;
}

int FUN_0c1144b8(int a4)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t5;

    *(volatile int *)(((a4 + 0x50) + 0x4));
    *(volatile int *)(((a4 + 0x50) + 0x8));
    t3 = FUN_0c0e6d00();
    *(volatile int *)((t0 + 0x18));
    *(volatile int *)((t0 + 0x20));
    *(volatile int *)((t0 + 0x24));
    *(volatile int *)((t0 + 0x10));
    *(volatile int *)((t0 + 0x28));
    t0 = FUN_0c0e6d00();
    FUN_0c0e6e5c();
    FUN_0c0e6d00();
    
    t4 = FUN_0c0e6d00();
    t5 = t3;
    if ((int)t3 > (int)t4) {
        t5 = t4;
    }
    t3 = t5;
    if ((int)t5 > (int)t0) {
        t3 = t0;
    }
    t0 = *(int *)((t1 + 0x8));
    t1 = t3;
    if ((int)t3 > (int)t1) {
    }
    if (t0 == 2) {
        return ADXB_EvokeExpandSte(0x0, t1);
    }
    return ADXB_EvokeExpandMono(0x0, t1);
}

int FUN_0c0380d4(int a4)
{
    register int t0;
    register int t26;
    register int t11;
    register float u20;

    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    t26 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned int *)((t0 + 0x10)) = 0xC03819E;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        (((struct o20_float *)(t0))->v) = ((((struct o20_float *)(a4))->v));
        (((struct o24_float *)(t0))->v) = ((((struct o24_float *)(a4))->v));
        (((struct o28_float *)(t0))->v) = ((((struct o28_float *)(a4))->v));
        *(unsigned int *)((t0 + 0x2C)) = (*(int *)((a4 + 0x2C)));
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0x30)));
        *(unsigned int *)((t0 + 0x34)) = (*(int *)((a4 + 0x34)));
        (((struct o50_float *)(t0))->v) = ((((struct o50_float *)(a4))->v));
        (((struct o54_float *)(t0))->v) = ((((struct o54_float *)(a4))->v));
        (((struct o58_float *)(t0))->v) = ((((struct o58_float *)(a4))->v));
        t11 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t11 << 1) + t11) << 2) << 1) + 0xC6002D0), 0x1);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
        (((struct o1C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = ((((struct o0_float *)0xC0381D8)->v));
        u20 = (((struct o4_float *)0xC0381D8)->v);
        (((struct o20_float *)(((((struct o2E0_int *)(t0))->v))))->v) = u20;
        (((struct o24_float *)(((((struct o2E0_int *)(t0))->v))))->v) = u20;
        *(unsigned int *)((((((struct o2E0_int *)(t0))->v)) + 0x10)) = 0x0;
        *(unsigned int *)((((((struct o2E0_int *)(t0))->v)) + 0x14)) = 0x0;
        *(unsigned int *)((((((struct o2E0_int *)(t0))->v)) + 0x18)) = 0x0;
        t26 = 0x2E0;
    }
    return t26;
}

int FUN_0c06758c(int a4)
{
    int stk[2];
    register int t0;
    register int t20;
    register int t30;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
        FUN_0c0a2080(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        return 0x71A8;
    }
    FUN_0c09da1c(a4);
    if ((int)(unsigned short)((((struct o719E_short *)(a4))->v)) < (int)0x20) {
        FUN_0c09a91a((*(int *)((a4 + 0x1C))));
        FUN_0c09da1c((*(int *)((a4 + 0x1C))));
    }
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 32) {
        FUN_0c08eba8(a4, 0x33);
        FUN_0c08deec(a4, 0x33);
    }
    t20 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t20 - 1);
    t30 = 0xEE;
    if ((short)(t20 - 1) == 0) {
        t30 = 0x71F1;
        if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
            (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
            t30 = 0x710A;
        }
    }
    return t30;
}

int FUN_0c06f600(int a4)
{
    register int t0;
    register int t1;

    FUN_0c09d990(a4);
    FUN_0c09d9bc(a4);
    if ((*(signed char *)(((0x72BC + a4) + 0x0))) != 0) {
        (((struct o72BC_uchar *)(a4))->v) = ((*(signed char *)(((0x72BC + a4) + 0x0))) - 1);
    } else {
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
    }
    t0 = FUN_0c09a910(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC06F754)->v));
        (((struct o48_float *)(a4))->v) = ((((struct o4_float *)0xC06F754)->v));
        FUN_0c09a808(a4, 0x1, 0x64);
        FUN_0c0a1d88(a4, 0x73);
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        (((struct oF0_ushort *)(a4))->v) = 0x6;
        (((struct oF2_ushort *)(a4))->v) = 0x3;
        (((struct o71BC_uchar *)(a4))->v) = 0x2;
        (((struct o7200_uint *)(a4))->v) = 0x0;
        t0 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c09b8a8(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t47;
    register int t8;
    register int t12;

    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned char *)(((int)stk + 0)) = a6;
    *(unsigned char *)(((int)stk + 4)) = a7;
    *(unsigned char *)(((int)stk + 16)) = (*(signed char *)0xC1510A3);
    *(unsigned char *)(((int)stk + 12)) = (*(signed char *)0xC1510A4);
    t47 = 0xC7F2F19;
    if ((*(signed char *)0xC7F2F19) == 0) {
        t47 = 0x71ED;
        if ((*(signed char *)((a4 + 0x71ED))) == 0) {
            t8 = FUN_0c0f4128((*(int *)((((((*(signed char *)((a4 + 0x3))) << 2) << 1) + 0xC339408) + 0x0))));
            if (t8 == 0) {
                t12 = FUN_0c0f4128((*(int *)((0x4 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + 0xC339408)))));
                t47 = t12;
                if (t12 != 0) {
                    (((struct o72B4_uchar *)(a4))->v) = 0x1;
                    (((struct o72B5_uchar *)(a4))->v) = 0x1;
                    (((struct o72B6_uchar *)(a4))->v) = (*(signed char *)(((int)stk + 8)));
                    (((struct o72B7_uchar *)(a4))->v) = (*(signed char *)(((int)stk + 0)));
                    (((struct o72B8_uchar *)(a4))->v) = 0x0;
                    *(unsigned char *)(((((int)stk + 0) + 0xC) + 0x0)) = 0xFF;
                    FUN_0c0f414e((*(int *)((0x4 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + 0xC339408)))), (((int)stk + 0) + 0x10), (((int)stk + 0) + 0xC), 0x1);
                    (((struct o72B2_uchar *)(a4))->v) = 0x2;
                    t47 = *(signed char *)(((int)stk + 4));
                    (((struct o72B3_uchar *)(a4))->v) = t47;
                }
            } else {
                (((struct o72B4_uchar *)(a4))->v) = 0x1;
                (((struct o72B5_uchar *)(a4))->v) = 0x1;
                (((struct o72B6_uchar *)(a4))->v) = (*(signed char *)(((int)stk + 8)));
                (((struct o72B7_uchar *)(a4))->v) = (*(signed char *)(((int)stk + 0)));
                (((struct o72B8_uchar *)(a4))->v) = 0x0;
                *(unsigned char *)(((((int)stk + 0) + 0xC) + 0x0)) = 0xFF;
                FUN_0c0f414e((*(int *)((0x0 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + 0xC339408)))), (((int)stk + 0) + 0x10), (((int)stk + 0) + 0xC), 0x1);
                (((struct o72B2_uchar *)(a4))->v) = 0x2;
                t47 = *(signed char *)(((int)stk + 4));
                (((struct o72B3_uchar *)(a4))->v) = t47;
            }
        }
    }
    return t47;
}

int FUN_0c0b4dc4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t2 = FUN_0c059132(0x5, 0x1, 0x1);
    t3 = t2;
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned char *)((t2 + 0x1)) = 0x1;
        *(unsigned char *)((t2 + 0x3)) = 0x2;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        *(unsigned char *)((t2 + 0x5)) = 0x19;
        *(unsigned char *)((t2 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(t2))->v) = 0x0;
        *(unsigned int *)((t2 + 0x10)) = 0xC0B4E8E;
        t4 = *(signed char *)0xC7F3051;
        *(volatile signed char *)((a4 + 0x2));
        *(volatile int *)((((short)((short)t4 * (short)0x34) + 0xC350B60) + 0x18));
        t4 = ((int (*)(int, int))(FUN_0c0e6fe8))(0xC7F302C, 0xC350B60);
        t4 = *(signed char *)((t0 + 0x25));
        *(volatile signed char *)((a4 + 0x2));
        *(volatile int *)((((short)((short)t4 * (short)0x34) + t1) + 0x1C));
        t4 = ((int (*)(int, int))(FUN_0c0e6fe8))(t0, t1);
        t0 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct oF2_ushort *)(t2))->v) = (*(signed char *)((a4 + 0x2)));
        t0 = (((struct o2E0_int *)(t2))->v);
        FUN_0c06233a(t0, 0xC664958, ((((struct oF2_short *)(t2))->v)));
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x2)) = 0x1F;
        t3 = 0x1F;
    }
    return t3;
}

int FUN_0c0b888c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(FUN_0c059330))(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x8;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
    }
    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
    if ((((((struct oEE_short *)(a4))->v)) & 2) != 0) {
        u0 = (((((struct o50_float *)(a4))->v)) + 0.0199999996f);
    } else {
        u0 = (((((struct o50_float *)(a4))->v)) - 0.0199999996f);
    }
    (((struct o50_float *)(a4))->v) = u0;
    (((struct o58_float *)(a4))->v) = u0;
    t0 = *(signed char *)((a4 + 0x4));
    FUN_0c062050((a4 + 0x50), (a4 + 0x50), ((signed char)(((t0 << 1) + t0) << 2) + 0xC153108));
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        return ((int (*)(int))(FUN_0c059330))(a4);
    }
    t0 = FUN_0c0555dc();
    t1 = t0;
    if (t0 != 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0cb50c(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t1 = FUN_0c059132(0x1, 0x1, 0x1);
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned char *)((t1 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t1 + 0x1)) = 0x1;
        *(unsigned short *)((t1 + 0x6)) = 0x41F;
        *(unsigned char *)((t1 + 0x5)) = 0x19;
        *(unsigned int *)((t1 + 0x10)) = 0xC0CB5D6;
        t2 = ((int (*)(int))(FUN_0c0e6fe8))(0x1);
        t2 = ((int (*)(void))(FUN_0c0e6fe8))();
        t2 = ((int (*)(void))(FUN_0c0e6fe8))();
        *(unsigned int *)((t1 + 0x30)) = (*(int *)((a4 + 0x30)));
        (((struct o5C_float *)(t1))->v) = 1.0f;
        (((struct oF2_ushort *)(t1))->v) = (signed char)a5;
        *(unsigned int *)((t1 + 0x1C)) = a4;
        (((struct o118_uint *)(t1))->v) = 0x0;
        (((struct o105_uchar *)(t1))->v) = t0;
        (((struct o106_uchar *)(t1))->v) = t0;
        (((struct o107_uchar *)(t1))->v) = t0;
        t2 = (((struct o2E0_int *)(t1))->v);
        *(unsigned char *)((t2 + 0x0)) = t0;
        t0 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t2, ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x17);
        *(unsigned short *)((t2 + 0x2)) = 0x1F;
        if ((signed char)a5 == 2) {
            return FUN_0c0cb7ec(t1, a5);
        }
        return (signed char)a5;
    }
    return t1;
}

int FUN_0c0d5164(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE5;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
        } else {
            FUN_0c0d4ff4(a4, a5, a6, a7);
        }
    } else {
        FUN_0c0d4fb8();
    }
    return ((int (*)(void))(0xC0D50BE))();
}

int FUN_0c108372(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t5;
    register int t36;

    if (a4 == 0) {
        return (mwRnaErrCallFunc(0xC15B31C, a5, a6, a7));
    }
    FUN_0c114cba(((((struct o40_int *)(a4))->v)), a5, a6);
    t5 = *(int *)(((int)stk + 0));
    t36 = (FUN_0c114e00(((((struct o40_int *)(a4))->v)), ((int)stk + 0)));
    if (t5 != 0) {
        FUN_0c114dde(((((struct o40_int *)(a4))->v)), (((int)stk + 0) + 0x18));
        FUN_0c114e22(((((struct o40_int *)(a4))->v)), (((int)stk + 0) + 0x14));
        *(unsigned int *)(((int)stk + 32)) = (((int)stk + 0) + 0x24);
        FUN_0c114e3e(((((struct o40_int *)(a4))->v)), 0x0, (((int)stk + 0) + 0x24));
        *(unsigned int *)(((int)stk + 28)) = (((int)stk + 0) + 0x28);
        FUN_0c114e3e(((((struct o40_int *)(a4))->v)), 0x1, (((int)stk + 0) + 0x28));
        FUN_0c114e5c(((((struct o40_int *)(a4))->v)), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x10));
        FUN_0c114ea4(((((struct o40_int *)(a4))->v)), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        FUN_0c107fce(a4, (*(int *)(((int)stk + 0))));
        FUN_0c108000(a4, (*(int *)(((int)stk + 24))));
        FUN_0c108010(a4, (*(int *)(((int)stk + 20))));
        FUN_0c108094(a4, 0x0, (*(int *)(((*(int *)(((int)stk + 32))) + 0x0))), 0x0);
        FUN_0c108094(a4, 0x1, (*(int *)(((*(int *)(((int)stk + 28))) + 0x0))), 0x0);
        FUN_0c1080f0(a4, (*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 16))));
        t36 = (FUN_0c108304(a4, (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8)))));
    }
    return t36;
}
