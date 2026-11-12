/* Straight-line functions with calls and guards (batch gen_el): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o10E4_int { char p[0x10E4]; int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DA_uchar { char p[0x2DA]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o314_uchar { char p[0x314]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o720A_uchar { char p[0x720A]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o72B2_uchar { char p[0x72B2]; unsigned char v; };
struct o72B3_uchar { char p[0x72B3]; unsigned char v; };
struct o72B4_uchar { char p[0x72B4]; unsigned char v; };
struct o72B5_uchar { char p[0x72B5]; unsigned char v; };
struct o72B6_uchar { char p[0x72B6]; unsigned char v; };
struct o72B7_uchar { char p[0x72B7]; unsigned char v; };
struct o72B8_uchar { char p[0x72B8]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o98_float { char p[0x98]; float v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oD_short { char p[0xD]; short v; };
struct oD_ushort { char p[0xD]; unsigned short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
int ADXPD_GetNumBlk(int);
int FUN_0c0555c4(void);
int FUN_0c0555dc(void);
int FUN_0c059132(int, int, int);
int FUN_0c059330(int);
int FUN_0c05fc68(int);
int FUN_0c05fcda(int);
int FUN_0c05fd86(int);
int FUN_0c062210(int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09c894(int);
int FUN_0c09cee4(int);
int FUN_0c09d818(int, int);
int FUN_0c09d990(int);
int FUN_0c09da1c(int);
int FUN_0c0a1d88(int, int);
int FUN_0c0a1e0a(int, int);
int FUN_0c0a2080(int);
int FUN_0c0a2712(int, int);
int FUN_0c0a3914(int, int);
int FUN_0c0a3f76(int, int);
int FUN_0c0aa9f2(int);
int FUN_0c0aade8(void);
int FUN_0c0abd20(int);
int FUN_0c0ccefc(int, float, float);
float FUN_0c0df4d0(int);
int FUN_0c0df920(void);
float FUN_0c0dfa50(int);
float FUN_0c0e2220(int, int);
int FUN_0c0e6d00(void);
int FUN_0c0e6e5c(void);
int FUN_0c0e6fe8(void);
int FUN_0c0f4128(int);
int FUN_0c0f414e(int, int, int, int);
int FUN_0c0fbfa2(int, int, int, int);
int FUN_0c101148(int, int);
int FUN_0c114598(int, int, int, int);
int FUN_0c1145cc(int, int, int, int);
int check_caps(int);
int kmiWriteRegister(int, int);
int memcpy(int, int, int);
int mpdrv_insertnop(int);
int nlMakeProjConvMat(int);
int nlMultiMatrix(int);
int vmsfs_c_progress(int, int, int, int);
int vmsio_block_read(int, int, int);
int FUN_0c0e1460(int a4);
int FUN_0c039aa0(int a4, int a5);
int FUN_0c04b6b8(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0ae77c(int a4);
int FUN_0c0b0324(int a4, int a5);
int FUN_0c0b68b4(int a4, int a5);
int FUN_0c0ce99a(int a4, int a5, int a6, int a7);
int FUN_0c0cb994(int a4, int a5);
int FUN_0c11163a(void);
int FUN_0c1145f4(int a4);
int FUN_0c07aecc(int a4);
int FUN_0c0bd40c(int a4);
int FUN_0c039ed8(int a4, int a5);
int FUN_0c03b384(int a4, int a5);
int FUN_0c045f9c(int a4);
int FUN_0c05fe24(int a4, int a5, int a6, int a7);
int FUN_0c09b7a4(int a4, int a5);
int FUN_0c0a5bb6(int a4, int a5, int a6, int a7);
int FUN_0c0e31c0(float f4, float f5, float f6, float f7);
int FUN_0c0fb160(int a4);
int vmsfs_connect(int a4);
int FUN_0c0374ee(int a4);
int FUN_0c0357e0(int a4, int a5);
int FUN_0c08bf90(int a4);
int FUN_0c08ebfa(int a4, int a5);
int FUN_0c0a7d28(int a4, int a5);
int FUN_0c0a3824(int a4, int a5, int a6, int a7);

int FUN_0c0e1460(int a4)
{
    int stk[16];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u11;
    register float u12;
    register float u15;
    register float u16;
    register float u19;
    register float u20;
    register float t21;

    u0 = (((struct oC_float *)(a4))->v);
    u1 = (u0 * u0);
    u2 = (u1 * (1.0f + 1.0f));
    u2 = -u2;
    *(float *)(((int)stk + 0)) = (u2 + 1.0f);
    u3 = (((struct o10_float *)(a4))->v);
    u4 = (u3 * u3);
    u5 = (u4 * (1.0f + 1.0f));
    u5 = -u5;
    *(float *)(((int)stk + 20)) = (u5 + 1.0f);
    u6 = (((struct o14_float *)(a4))->v);
    u7 = (u6 * u6);
    u8 = (u7 * (1.0f + 1.0f));
    u8 = -u8;
    *(float *)(((int)stk + 40)) = (u8 + 1.0f);
    u11 = (((((struct oC_float *)(a4))->v)) * ((((struct o10_float *)(a4))->v)));
    u12 = (u11 * (1.0f + 1.0f));
    u12 = -u12;
    (((struct o10_float *)(((int)stk + 0)))->v) = u12;
    (((struct o4_float *)(((int)stk + 0)))->v) = u12;
    u15 = (((((struct oC_float *)(a4))->v)) * ((((struct o14_float *)(a4))->v)));
    u16 = (u15 * (1.0f + 1.0f));
    u16 = -u16;
    (((struct o20_float *)(((int)stk + 0)))->v) = u16;
    (((struct o8_float *)(((int)stk + 0)))->v) = u16;
    u19 = (((((struct o10_float *)(a4))->v)) * ((((struct o14_float *)(a4))->v)));
    u20 = (u19 * (1.0f + 1.0f));
    u20 = -u20;
    (((struct o24_float *)(((int)stk + 0)))->v) = u20;
    (((struct o18_float *)(((int)stk + 0)))->v) = u20;
    t21 = FUN_0c0e2220(a4, (a4 + 0xC));
    *(float *)(((int)stk + 48)) = ((t21 + t21) * ((((struct oC_float *)(a4))->v)));
    *(float *)(((int)stk + 52)) = ((t21 + t21) * ((((struct o10_float *)(a4))->v)));
    *(float *)(((int)stk + 56)) = ((t21 + t21) * ((((struct o14_float *)(a4))->v)));
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 60)) = 1.0f;
    return (nlMultiMatrix(((int)stk + 0)));
}

int FUN_0c039aa0(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t17;
    register int t3;
    register int t5;
    register int t7;
    register int t10;
    register int t13;
    register int t14;
    register int t15;
    register int t4;
    register int t6;
    register int t9;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c059132(0x5, 0x1, 0x2);
    t17 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        *(volatile int *)(((int)stk + 4));
        t3 = ((int (*)(int, int))(FUN_0c0e6fe8))(t0, 0x0);
        t5 = ((int (*)(int))(FUN_0c0e6fe8))(t4);
        t7 = ((int (*)(int))(FUN_0c0e6fe8))(t6);
        (((struct o118_uint *)(t9))->v) = t14;
        *(unsigned int *)((t9 + 0x10)) = 0xC039B7A;
        t10 = *(signed char *)(((int)stk + 0));
        t13 = (0x2E0 + t9);
        for (;;) {
            t15 = *(int *)((t13 + 0x0));
            t13 = (t13 + 0x4);
            FUN_0c06233a(t15, ((signed char)((((t10 << 1) + t10) << 2) << 1) + 0xC6002D0), 0x15);
            *(unsigned char *)((t15 + 0x0)) = 0x1;
            *(unsigned short *)((t15 + 0x2)) = 0x239;
            (((struct o44_float *)(t15))->v) = 1.0f;
            t14 = (t14 + 0x1);
            (((struct o48_float *)(t15))->v) = 1.0f;
            (((struct o4C_float *)(t15))->v) = 1.0f;
            if ((int)t14 >= (int)0x2) {
                break;
            }
        }
        t17 = 0x4C;
    }
    return t17;
}

int FUN_0c04b6b8(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    if ((a4 == 0) && ((a6 == 0) || (a7 == 0))) {
    } else {
        t0 = FUN_0c059132(0x5, 0x1, 0x1);
        t1 = t0;
        if (t0 != 0) {
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            *(unsigned char *)((t0 + 0x1)) = 0x1;
            *(unsigned char *)((t0 + 0x8)) = 0x0;
            (((struct oEC_ushort *)(t0))->v) = 0x0;
            *(unsigned char *)((t0 + 0x4)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x1;
            *(unsigned char *)((t0 + 0x5)) = 0x19;
            *(unsigned int *)((t0 + 0x10)) = 0xC04B7B4;
            (((struct o118_uint *)(t0))->v) = 0x0;
            if (a4 != 0) {
                *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
                t2 = ((int (*)(int))(FUN_0c0e6fe8))(0x0);
                t2 = ((int (*)(void))(FUN_0c0e6fe8))();
            } else {
                *(unsigned char *)((t0 + 0x3)) = 0x2;
                t2 = ((int (*)(int))(FUN_0c0e6fe8))(0x0);
                t2 = ((int (*)(void))(FUN_0c0e6fe8))();
            }
            FUN_0c0df920();
            *(unsigned int *)((t0 + 0x34)) = (FUN_0c0e6e5c());
            t2 = (((struct o2E0_int *)(t0))->v);
            *(unsigned char *)((t2 + 0x0)) = 0x1;
            *(unsigned short *)((t2 + 0x2)) = 0x238;
            (((struct o44_float *)(t2))->v) = 1.0f;
            (((struct o48_float *)(t2))->v) = 1.0f;
            (((struct o4C_float *)(t2))->v) = 1.0f;
            t1 = 0x4C;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c0ae77c(int a4)
{
    register int t0;
    register int t17;

    t0 = FUN_0c059132(0x2, 0x1, 0x1);
    t17 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned char *)((t0 + 0xA)) = 0x0;
        *(unsigned char *)((t0 + 0xB)) = 0x0;
        (((struct o30D_uchar *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0AE72C;
        *(unsigned char *)((t0 + 0x4)) = 0x2;
        (((struct o308_uint *)(t0))->v) = a4;
        (((struct o30E_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x1)));
        (((struct o2D9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x8)));
        (((struct o2DA_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x9)));
        (((struct o101_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x4)));
        (((struct o102_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x5)));
        (((struct o314_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x6)));
        FUN_0c0a1e0a(t0, (*(signed char *)((a4 + 0x6))));
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        FUN_0c0abd20(t0);
        FUN_0c0e6fe8();
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1001;
        (((struct o98_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.39999998f;
        t17 = 0x98;
    }
    return t17;
}

int FUN_0c0b0324(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t18;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c059132(0x2, 0x1, 0x1);
    t18 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = (((*(signed char *)(((int)stk + 0))) << 2) << 1);
        *(unsigned int *)((t0 + 0x10)) = 0xC0B03FE;
        *(unsigned char *)((t0 + 0x4)) = 0xD;
        (((struct o308_uint *)(t0))->v) = a4;
        (((struct o2D9_uchar *)(t0))->v) = 0x1;
        (((struct o101_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x4)));
        (((struct o102_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x5)));
        (((struct o314_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x6)));
        FUN_0c0a1e0a(t0, (*(signed char *)((t0 + 0x314))));
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
        FUN_0c0abd20(t0);
        *(volatile signed char *)(((int)stk + 0));
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t18 = 0xF;
    }
    return t18;
}

int FUN_0c0b68b4(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t13;
    register int t2;
    register int t3;
    register int t4;
    register int t9;
    register int t11;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c059132(0x2, 0x1, 0x1);
    t13 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B698E;
        *(volatile int *)(((int)stk + 4));
        t2 = ((int (*)(int))(FUN_0c0e6fe8))(0x0);
        t3 = ((int (*)(void))(FUN_0c0e6fe8))();
        t4 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct o38_float *)(t0))->v) = ((((struct o0_float *)0xC0B6A00)->v));
        (((struct o3C_float *)(t0))->v) = ((((struct o4_float *)0xC0B6A00)->v));
        (((struct o40_float *)(t0))->v) = 0.0f;
        *(volatile signed char *)(((int)stk + 0));
        t9 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct o101_uchar *)(t0))->v) = 0x27;
        (((struct o102_uchar *)(t0))->v) = 0xA1;
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        FUN_0c0a1e0a(t0, 0x3A);
        t11 = (((struct o2E0_int *)(t0))->v);
        FUN_0c06233a(t11, 0xC664958, 0x7);
        *(unsigned char *)((t11 + 0x0)) = 0x1;
        *(unsigned short *)((t11 + 0x2)) = 0xF;
        t13 = 0xF;
    }
    return t13;
}

int FUN_0c0ce99a(int a4, int a5, int a6, int a7)
{
    register int t22;
    int t1;
    register int t18;
    register int t0;

    t22 = 0xC0CEA7C;
    if ((int)(signed char)a4 > 0) {
        t1 = 0x0;
        for (;;) {
            t18 = (FUN_0c0ccefc((((((t1 << 1) + t1) << 2) << 1) + a5), ((float)(*(signed char *)(((((((t1 << 1) + t1) << 2) << 1) + a5) + 0x14))) * 8.0f), ((float)(*(signed char *)(((((((t1 << 1) + t1) << 2) << 1) + a5) + 0x15))) * 8.0f)));
            if ((int)t1 < (int)((signed char)a4 - 2)) {
                t18 = t1;
                if ((((((signed char)a7 == 0)) ? 1 : 0) != 0) && (t1 == 3)) {
                } else {
                    t0 = t1;
                    t0 = (t0 << 1);
                    t0 = (t0 + t1);
                    t0 = (t0 << 2);
                    t0 = (t0 << 1);
                    t0 = (t0 + a5);
                    t18 = (FUN_0c0ccefc((*(int *)(((((*(signed char *)((t0 + 0x16))) + (*(signed char *)(((0xC49491C + t1) + 0x0)))) << 2) + 0xC33F474))), 152.0f, ((float)(*(signed char *)((t0 + 0x15))) * 8.0f)));
                }
            }
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)(signed char)a4) {
                break;
            }
        }
        t22 = t18;
    }
    return t22;
}

int FUN_0c0cb994(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t16;
    register int t2;
    register int t3;
    register int t7;
    register int t11;
    register int t12;
    register int t6;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c059132(0x1, 0x1, 0x1);
    t16 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0CBA6E;
        t2 = ((int (*)(int))(FUN_0c0e6fe8))(0xC153404);
        t3 = ((int (*)(void))(FUN_0c0e6fe8))();
        *(unsigned int *)((t0 + 0x2C)) = ((*(int *)((t0 + 0x2C))) + 0x3555);
        (((struct oF2_ushort *)(t0))->v) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct o118_uint *)(t0))->v) = 0x0;
        t7 = ((int (*)(int))(FUN_0c0e6fe8))(t6);
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = (*(float *)0xC0CBAC4);
        (((struct o28_float *)(t0))->v) = 0.0f;
        FUN_0c062210((t0 + 0x20), (0xF60 + a4));
        (((struct o101_uchar *)(t0))->v) = 0x4;
        (((struct o102_uchar *)(t0))->v) = 0x0;
        FUN_0c0a1d88(t0, 0x73);
        t11 = (((struct o2E0_int *)(t0))->v);
        *(unsigned char *)((t11 + 0x0)) = 0x1;
        t12 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t11, ((signed char)((((t12 << 1) + t12) << 2) << 1) + 0xC6002D0), 0x13);
        *(unsigned short *)((t11 + 0x2)) = 0xF;
        t16 = 0xF;
    }
    return t16;
}

int FUN_0c11163a(void)
{
    register int t0;

    t0 = *(int *)0xC843924;
    if ((int)((((struct o10E4_int *)(t0))->v)) > 0) {
        mpdrv_insertnop(((((struct o10E4_int *)(t0))->v)));
    }
    return ((int (*)(void))(0xC11171C))();
}

int FUN_0c1145f4(int a4)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t9;
    register int t13;
    register int t16;
    register int t14;

    t0 = *(int *)(((a4 + 0x50) + 0x10));
    t1 = *(int *)(((a4 + 0x50) + 0xC));
    *(volatile int *)(((a4 + 0x50) + 0x28));
    t3 = *(int *)(((a4 + 0x50) + 0x20));
    t4 = *(int *)(((a4 + 0x50) + 0x14));
    t5 = (((struct o40_int *)(a4))->v);
    t6 = (((struct o44_int *)(a4))->v);
    t7 = FUN_0c0e6d00();
    t9 = FUN_0c0e6e5c();
    ADXPD_GetNumBlk((*(int *)((a4 + 0x8))));
    *(volatile int *)(((a4 + 0x50) + 0x8));
    t13 = FUN_0c0e6d00();
    t16 = t13;
    if ((int)t7 <= (int)t14) {
        t16 = (t13 - ((t0 - t9) - 1));
    }
    (((struct oA0_uint *)(a4))->v) = t16;
    (((struct oA4_uint *)(a4))->v) = (t1 * t14);
    if ((int)(t3 + t16) >= (int)t5) {
        if ((*(int *)(((a4 + 0x50) + 0x8))) == 2) {
            return FUN_0c114598(t4, t5, t6, ((t3 + t16) - t5));
        }
        return FUN_0c1145cc(t4, t5, t6, ((t3 + t16) - t5));
    }
    return 0xA4;
}

int FUN_0c07aecc(int a4)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    FUN_0c09da1c(a4);
    t4 = FUN_0c0555c4();
    if ((t4 == 1) && (t0 = *(int *)((a4 + 0x1C)), t1 = *(signed char *)((t0 + 0x71BC)), t1 == 0)) {
        u0 = (((struct o24_float *)(a4))->v);
        u1 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
        if (!(u0 > (u1 + 100.0f))) {
            if (!((u1 + -100.0f) > u0)) {
                t0 = FUN_0c09c894(a4);
                if (((signed char)t0 == 1) && (t2 = *(int *)((a4 + 0x1C)), t3 = *(signed char *)((t2 + 0x4)), t3 != 10)) {
                    (((struct o720A_uchar *)(a4))->v) = 0x0;
                    return FUN_0c0a2712(a4, 0x6);
                }
            }
        }
    }
    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c0bd40c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0555dc();
    if (t0 == 1) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x2;
    *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x2;
    (((struct o105_uchar *)(a4))->v) = 0x2;
    if ((*(signed char *)((a4 + 0x8))) == 0) {
        t0 = *(signed char *)((a4 + 0x9));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct o5C_float *)(a4))->v) = ((float)t0 / 4.0f);
                if (!(((float)t0 / 4.0f) > 0.0f)) {
                    *(unsigned char *)((a4 + 0x8)) = 0xA;
                }
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
            }
        } else {
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct oEC_ushort *)(a4))->v) = 0x4;
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            }
        }
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            t2 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
            (((struct o4_float *)(t2))->v) = (((((struct o4_float *)(t2))->v)) + ((((struct o28_float *)(t2))->v)));
            t2 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
            (((struct oC_float *)(t2))->v) = (((((struct oC_float *)(t2))->v)) + ((((struct o30_float *)(t2))->v)));
            t2 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
            t1 = (t1 + 0x1);
            (((struct o8_float *)(t2))->v) = (((((struct o8_float *)(t2))->v)) + ((((struct o2C_float *)(t2))->v)));
            t0 = (t0 + 0x4);
            if ((int)t1 >= (int)0xA) {
                break;
            }
        }
        return 0x8;
    }
    return FUN_0c059330(a4);
}

int FUN_0c039ed8(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t3 = FUN_0c059132(0x5, 0x1, 0x1);
    t4 = t3;
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x0)) = 0x1;
        *(unsigned char *)((t3 + 0x1)) = 0x1;
        *(unsigned char *)((t3 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned short *)((t3 + 0x6)) = 0xD;
        *(unsigned char *)((t3 + 0x5)) = 0x19;
        *(unsigned char *)((t3 + 0x8)) = 0x0;
        *(unsigned char *)((t3 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t3))->v) = 0x0;
        (((struct oEE_ushort *)(t3))->v) = a5;
        (((struct oF0_ushort *)(t3))->v) = (*(signed char *)((a4 + 0x71A4)));
        (((struct oF2_ushort *)(t3))->v) = (unsigned char)(*(signed char *)((a4 + 0x71A5)));
        t5 = ((int (*)(int, int))(FUN_0c0e6fe8))(t3, 0x0);
        t3 = ((int (*)(int))(FUN_0c0e6fe8))(t0);
        t0 = ((int (*)(int))(FUN_0c0e6fe8))(t1);
        *(unsigned int *)((t2 + 0x1C)) = a4;
        (((struct o118_uint *)(t2))->v) = (0x580 + ((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0xDC0) + (0x300 + a4)));
        *(unsigned int *)((t2 + 0x10)) = 0xC039FAE;
        t0 = (((struct o2E0_int *)(t2))->v);
        t1 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t0, ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), 0x13);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x2)) = 0x1;
        t4 = 0x1;
    }
    return t4;
}

int FUN_0c03b384(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t3 = FUN_0c059132(0x5, 0x1, 0x1);
    t4 = t3;
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x0)) = 0x1;
        *(unsigned char *)((t3 + 0x1)) = 0x1;
        *(unsigned char *)((t3 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned short *)((t3 + 0x6)) = 0xF;
        *(unsigned char *)((t3 + 0x5)) = 0x19;
        *(unsigned char *)((t3 + 0x8)) = 0x0;
        *(unsigned char *)((t3 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t3))->v) = 0x0;
        (((struct oEE_ushort *)(t3))->v) = a5;
        (((struct oF0_ushort *)(t3))->v) = (*(signed char *)((a4 + 0x71A4)));
        (((struct oF2_ushort *)(t3))->v) = (unsigned char)(*(signed char *)((a4 + 0x71A5)));
        t5 = ((int (*)(int, int))(FUN_0c0e6fe8))(t3, 0x0);
        t3 = ((int (*)(int))(FUN_0c0e6fe8))(t0);
        t0 = ((int (*)(int))(FUN_0c0e6fe8))(t1);
        *(unsigned int *)((t2 + 0x1C)) = a4;
        (((struct o118_uint *)(t2))->v) = (0x580 + ((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0xDC0) + (0x300 + a4)));
        *(unsigned int *)((t2 + 0x10)) = 0xC03B45A;
        t0 = (((struct o2E0_int *)(t2))->v);
        t1 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t0, ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), 0x3);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x2)) = 0x1;
        t4 = 0x1;
    }
    return t4;
}

int FUN_0c045f9c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c059132(0x6, 0x1, 0x4);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x20;
        *(unsigned int *)((t0 + 0x10)) = 0xC046072;
        FUN_0c0e6fe8();
        (((struct o118_uint *)(t0))->v) = 0x0;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t2 = (((struct o2E0_int *)(t0))->v);
        FUN_0c06233a(t2, 0xC4CFA68, 0x7C);
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x2)) = 0x1F;
        FUN_0c0e6fe8();
        (((struct o20_float *)(t2))->v) = 1.0f;
        (((struct o1C_float *)(t2))->v) = 1.0f;
        (((struct o24_float *)(t2))->v) = (*(float *)0xC0460DC);
        t2 = ((0x2E0 + t0) + 0x4);
        t0 = 0x1;
        for (;;) {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            FUN_0c06233a(t3, 0xC4CFA68, 0x7C);
            *(unsigned char *)((t3 + 0x0)) = 0x0;
            t0 = (t0 + 0x1);
            *(unsigned short *)((t3 + 0x2)) = 0x21F;
            if ((int)(signed char)t0 >= (int)0x4) {
                break;
            }
        }
        t1 = 0x21F;
    }
    return t1;
}

int FUN_0c05fe24(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t2;
    register int t5;
    register int t8;
    register int t9;
    register int t10;
    register int t12;
    register int t21;
    register int t11;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 8)) = (t0 << 2);
    t2 = FUN_0c05fcda((*(int *)(((t0 << 2) + 0xC14D9A0))));
    t8 = memcpy(((((((((signed char)a4 << 1) + (signed char)a4) << 8) << 2) << 2) << 2) + 0xC600620), 0xCC00000, t2);
    t5 = *(signed char *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 4)) = ((((t5 << 1) + t5) << 2) << 1);
    t9 = 0xC3517A0;
    t10 = 0x0;
    t12 = t11;
    for (;;) {
        if ((int)t10 >= (int)(*(int *)(((((((t5 << 1) + t5) << 2) << 1) + 0xC3517A0) + 0x8)))) {
            break;
        }
        t8 = (*(int *)(((((((t5 << 1) + t5) << 2) << 1) + 0xC3517A0) + 0x0)));
        t12 = t10;
        t12 = (t12 << 2);
        t9 = t12;
        t9 = (t9 + ((short)((short)(signed char)a4 * (short)0x190) + 0xC600300));
        t10 = (t10 + 0x1);
        *(unsigned int *)((t9 + 0x0)) = ((*(int *)((t12 + t8))) + ((((((((signed char)a4 << 1) + (signed char)a4) << 8) << 2) << 2) << 2) + 0xC600620));
    }
    *(unsigned int *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC6002D0) + 0x8)) = (0xC600300 + (short)((short)(signed char)a4 * (short)0x190));
    FUN_0c05fc68((*(int *)(((*(int *)(((int)stk + 8))) + 0xC14D960))));
    t21 = *(int *)(((int)stk + 4));
    *(unsigned short *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC6002D0) + 0x2)) = (*(short *)(((t21 + 0xC3517A0) + 0x8)));
    *(unsigned int *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC6002D0) + 0xC)) = (((((((((signed char)a4 << 1) + (signed char)a4) << 8) << 2) << 2) << 2) + 0xC600620) + (*(int *)(((t21 + 0xC3517A0) + 0xC))));
    *(unsigned int *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC6002D0) + 0x4)) = (*(int *)((((signed char)a4 << 2) + 0xC14D958)));
    return FUN_0c05fd86(((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC6002D0));
}

int FUN_0c09b7a4(int a4, int a5)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_2 = a4;
    v0_0 = a5;
    *(unsigned char *)(((int)stk + 0)) = v0_0;
    *(unsigned char *)(((int)stk + 8)) = (*(signed char *)0xC1510A1);
    *(unsigned char *)(((int)stk + 4)) = (*(signed char *)0xC1510A2);
    v0_3 = (0xC7F2F19);
    v0_0 = ((((int)stk + 0) + 0x4));
    v0_1 = (0x0);
    v0_2 = (v0_2);
    if (((*(signed char *)0xC7F2F19) != 0)) goto L_C09B86C;
    v0_4 = FUN_0c0555c4();
    v0_3 = (v0_4);
    if ((v0_4 == 0)) goto L_C09B86C;
    v0_3 = (0x71ED);
    if (((*(signed char *)((v0_2 + 0x71ED))) != 0)) goto L_C09B86C;
    v0_3 = (FUN_0c0f4128((*(int *)((((((*(signed char *)((v0_2 + 0x3))) << 2) << 1) + 0xC339408) + 0x0))))) != 0;
    v0_4 = (0xC339408);
    if (v0_3) goto L_C09B816;
    v0_5 = FUN_0c0f4128((*(int *)((((v0_1 + 0x1) << 2) + ((((*(signed char *)((v0_2 + 0x3))) << 2) << 1) + v0_4)))));
    v0_3 = (v0_5);
    v0_1 = ((v0_1 + 0x1));
    if ((v0_5 == 0)) goto L_C09B86C;
    L_C09B816:;
    (((struct o72B4_uchar *)(v0_2))->v) = 0x1;
    (((struct o72B5_uchar *)(v0_2))->v) = 0x1;
    v0_3 = *(signed char *)(((int)stk + 0));
    (((struct o72B6_uchar *)(v0_2))->v) = (*(signed char *)((((v0_3 << 2) + 0xC339428) + 0x0)));
    (((struct o72B7_uchar *)(v0_2))->v) = (*(signed char *)((((v0_3 << 2) + 0xC339428) + 0x1)));
    (((struct o72B8_uchar *)(v0_2))->v) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = (((v0_3 << 2) + 0xC339428) + 0x2);
    *(unsigned char *)((v0_0 + 0x0)) = (*(signed char *)(((((v0_3 << 2) + 0xC339428) + 0x2) + 0x0)));
    FUN_0c0f414e((*(int *)(((v0_1 << 2) + ((((*(signed char *)((v0_2 + 0x3))) << 2) << 1) + v0_4)))), (((int)stk + 0) + 0x8), v0_0, 0x1);
    (((struct o72B2_uchar *)(v0_2))->v) = 0x2;
    (((struct o72B3_uchar *)(v0_2))->v) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)));
    v0_3 = (0x72B3);
    L_C09B86C:;
    return v0_3;
}

int FUN_0c0a5bb6(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;

    t4 = *(signed char *)0xC7F2EE7;
    if ((unsigned char)t4 != 0) {
        if ((unsigned char)t4 != 1) {
            return ((int (*)(int, int, int, int))(0xC0A5CA0))(0xC7F2EE7, 0x0, a6, a7);
        }
        if (((((struct oD_short *)0xC7F2EE7)->v)) == 0) {
            if (((*(signed char *)0xC7F2F08) != 0) && (t0 = *(signed char *)0xC7E40C8, t0 == 0)) {
                t0 = ((*(signed char *)0xC7E40C8) + 0xA);
            } else {
                t0 = (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7E40C8))));
            }
            FUN_0c0a3f76(0x0, t0);
        }
        if (((((struct oD_short *)0xC7F2EE7)->v)) == 40) {
            FUN_0c0a3f76(0x0, 0x16);
        }
        if (((((struct oD_short *)0xC7F2EE7)->v)) == 80) {
            if (((*(signed char *)0xC7F2F08) != 0) && (t1 = *(signed char *)0xC7EB398, t1 == 0)) {
                t0 = ((*(signed char *)0xC7EB398) + 0xA);
            } else {
                t0 = (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7EB398))));
            }
            FUN_0c0a3f76(0x1, t0);
        }
    } else {
        (((struct o0_uchar *)0xC7F2EE7)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
        (((struct oD_ushort *)0xC7F2EE7)->v) = 0x0;
        FUN_0c0aa9f2(0x0);
        FUN_0c0aa9f2(0x1);
        FUN_0c0aade8();
        if (((((struct oD_short *)0xC7F2EE7)->v)) == 0) {
            if (((*(signed char *)0xC7F2F08) != 0) && (t2 = *(signed char *)0xC7E40C8, t2 == 0)) {
                t0 = ((*(signed char *)0xC7E40C8) + 0xA);
            } else {
                t0 = (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7E40C8))));
            }
            FUN_0c0a3f76(0x0, t0);
        }
        if (((((struct oD_short *)0xC7F2EE7)->v)) == 40) {
            FUN_0c0a3f76(0x0, 0x16);
        }
        if (((((struct oD_short *)0xC7F2EE7)->v)) == 80) {
            if (((*(signed char *)0xC7F2F08) != 0) && (t3 = *(signed char *)0xC7EB398, t3 == 0)) {
                t0 = ((*(signed char *)0xC7EB398) + 0xA);
            } else {
                t0 = (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7EB398))));
            }
            FUN_0c0a3f76(0x1, t0);
        }
    }
    t0 = (((struct oD_short *)0xC7F2EE7)->v);
    (((struct oD_ushort *)0xC7F2EE7)->v) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0xA0) {
        t0 = *(signed char *)0xC7F2EE7;
        (((struct o0_uchar *)0xC7F2EE7)->v) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0e31c0(float f4, float f5, float f6, float f7)
{
    register float u7;
    register float u8;
    register float u9;

    (((struct o10_float *)0xC7FCF68)->v) = f4;
    (((struct o14_float *)0xC7FCF68)->v) = f5;
    (((struct o8_float *)0xC7FCF68)->v) = f6;
    (((struct oC_float *)0xC7FCF68)->v) = f7;
    (((struct o20_float *)0xC346AB0)->v) = f5;
    (((struct o18_float *)0xC346AB0)->v) = f7;
    if ((*(short *)0xC7FD4A2) != 0) {
        (((struct o1C_float *)0xC346AB0)->v) = (f4 * (1.0f + 1.0f));
        (((struct o14_float *)0xC346AB0)->v) = (f6 * (1.0f + 1.0f));
    } else {
        (((struct o1C_float *)0xC346AB0)->v) = f4;
        (((struct o14_float *)0xC346AB0)->v) = f6;
    }
    (((struct o0_float *)0xC7FCF68)->v) = (((((struct o14_float *)0xC346AB0)->v)) * ((((struct o0_float *)0xC346AB0)->v)));
    u7 = (((struct o18_float *)0xC346AB0)->v);
    u8 = (((struct o4_float *)0xC346AB0)->v);
    (((struct o4_float *)0xC7FCF68)->v) = (u7 * u8);
    u9 = (((struct o0_float *)0xC7FCF68)->v);
    if (u9 > (u7 * u8)) {
        (((struct o8_float *)0xC346AB0)->v) = u9;
    } else {
        (((struct o8_float *)0xC346AB0)->v) = (u7 * u8);
    }
    nlMakeProjConvMat(0xC7FCEE8);
    if ((*(int *)0xC7F88EC) == 4) {
        return FUN_0c0fbfa2((int)f4, (int)f5, (int)(f4 + f6), (int)(f5 + f7));
    }
    return ((int (*)(int, int, int, int))(0xC0E3296))((int)f4, (int)f5, (int)((f4 + f6) + -1.0f), (int)((f5 + f7) + -1.0f));
}

int FUN_0c0fb160(int a4)
{
    register int t0;
    register int t1;
    register int t25;
    register int t26;
    register int t28;
    int t30;
    register int t32;
    register int t3;
    register int t9;

    t0 = (((struct o30_int *)0xC816FE4)->v);
    t1 = (((struct o38_int *)0xC816FE4)->v);
    if (((((((struct o0_int *)0xC816FE4)->v)) & 0x1) != 1) && ((t3 = (((struct o0_int *)0xC816FE4)->v), (t3 & 44) != 0) && (0x1 != 0))) {
        t9 = ((unsigned int)((unsigned int)((((struct oC_int *)0xC81729C)->v)) >> 16) >> 1);
    } else {
        t9 = ((unsigned int)((((struct oC_int *)0xC81729C)->v)) >> 16);
    }
    t25 = (a4 + (t1 + t0));
    if (((((((struct o0_int *)0xC816FE4)->v)) & 0x1) != 1) || (0x1 == 0)) {
        t25 = (a4 + (t1 + t0));
        if ((((((struct o0_int *)0xC816FE4)->v)) & 32) != 0) {
            t25 = ((((int)((unsigned int)((int)((unsigned int)a4 + (unsigned int)0x0)) + ((((int)0x0 > (int)a4)) ? 1u : 0u))) >> 1) + (t1 + t0));
        }
    }
    t26 = t25;
    if ((int)t25 < 0) {
        t26 = (t25 + t9);
    }
    t28 = t26;
    if ((int)t26 > (int)t9) {
        t28 = t9;
    }
    t30 = t28;
    if ((int)t28 < 0) {
        t30 = 0x0;
    }
    t32 = (((struct o0_int *)0xC81729C)->v);
    (((struct o0_uint *)0xC81729C)->v) = ((t32 & 0x3FF0000) | (0x3FF & t30));
    kmiWriteRegister(0xC8, ((t32 & 0x3FF0000) | (0x3FF & t30)));
    return 0x0;
}

int vmsfs_connect(int a4)
{
    register int t0;
    register int t1;

    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C)) = ((a4 * 0x4C) + 0xC812628);
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC347248)));
    t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34));
    t1 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30));
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = (t1 + 0x1);
    vmsfs_c_progress(a4, (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x8))), ((t1 + 0x1) - 1), t0);
    t0 = FUN_0c101148(a4, (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))));
    if ((int)t0 < 0) {
        *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0x9)) = 0x0;
        *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0x8)) = 0x0;
        t0 = 0xFFFFFF01;
    } else {
        t1 = check_caps(((a4 * 0x148) + 0xC80DBC8));
        t0 = 0xFFFFFF83;
        if ((int)t1 >= 0) {
            t1 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C));
            *(unsigned int *)((t1 + 0x30)) = (*(int *)((t1 + 0x1C)));
            t1 = vmsio_block_read(a4, 0x0, 0xC813CD4);
            t0 = 0xFFFFFF01;
            if ((int)t1 < 0) {
            } else {
                *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0x9)) = 0x1;
                *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0xA)) = 0x0;
                *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0xB)) = 0x0;
                *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0xC)) = 0x0;
                t1 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x4));
                t0 = 0xF;
                if (t1 != 0) {
                    t0 = 0x21;
                    if (t1 != 1) {
                        t0 = 0x41;
                        if (t1 != 2) {
                            t0 = 0x7A;
                            if (t1 != 3) {
                                t0 = 0xFFFFFF83;
                            }
                        }
                    }
                }
            }
        }
    }
    return t0;
}

int FUN_0c0374ee(int a4)
{
    int t0;
    register int t1;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x4;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if ((t0 != 3) && (t0 != 4)) {
                    return t0;
                }
                return FUN_0c059330(a4);
            }
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.099999994f);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.099999994f);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) - 0.0333333313f);
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
    } else {
        (((struct oEC_ushort *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x41F;
        (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        (((struct oEC_ushort *)(a4))->v) = 0x1E;
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0357e0(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t21;
    register int t3;
    register int t7;
    register int t13;
    register int t6;
    register int t8;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    t21 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        t3 = 0x2;
        if ((*(signed char *)((a4 + 0x3))) != 0) {
            t3 = 0x4;
        }
        *(unsigned char *)((t0 + 0x5)) = t3;
        *(unsigned int *)((t0 + 0x10)) = 0xC0358B4;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = (*(int *)(((int)stk + 0)));
        (((struct oF0_ushort *)(t0))->v) = 0x0;
        t7 = 0x0;
        for (;;) {
            if ((int)t7 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t8 = t7;
            t8 = (t8 << 2);
            *(unsigned int *)(((int)stk + 0)) = t8;
            t8 = (t8 + (0x2E0 + t0));
            t8 = (*(int *)((t8 + 0x0)));
            *(unsigned char *)((t8 + 0x0)) = 0x1;
            *(unsigned short *)((t8 + 0x2)) = 0xF;
            t13 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a(t8, ((signed char)((((t13 << 1) + t13) << 2) << 1) + 0xC6002D0), (*(int *)(((*(int *)(((int)stk + 0))) + 0xC149660))));
            t7 = (t7 + 0x1);
            if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                (((struct o90_uint *)(t8))->v) = ((0x300 + a4) + 0x840);
            } else {
                t6 = 0x1900;
                t6 = (t6 + a4);
                (((struct o90_uint *)(t8))->v) = t6;
            }
        }
        t21 = 0x2DC;
    }
    return t21;
}

int FUN_0c08bf90(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c09a910(a4);
            }
            t0 = *(signed char *)((a4 + 0xB));
            if ((t0 == 0) || (t0 == 1)) {
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                    FUN_0c0a3914(a4, 0x1);
                }
            }
            return FUN_0c09a910(a4);
        }
        t0 = *(signed char *)((a4 + 0xB));
        if ((t0 == 0) || (t0 == 1)) {
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                FUN_0c0a3914(a4, 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x76;
            }
        }
        return FUN_0c09a910(a4);
    }
    t0 = *(signed char *)((a4 + 0xB));
    if ((t0 != 0) && (t0 != 1)) {
        if ((t0 != 2) && (t0 != 3)) {
        } else {
            FUN_0c09a808(a4, 0x3, 0x1);
        }
    } else {
        FUN_0c09a808(a4, 0x3, 0x2);
        (((struct oEC_ushort *)(a4))->v) = 0x28;
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c08ebfa(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t2 = *(int *)((((*(signed char *)((a4 + 0x7213))) << 2) + 0xC338C34));
    t3 = *(short *)((a5 + 0x0));
    if (!(0.0f > (*(float *)((t2 + (t3 << 2)))))) {
        (((struct o38_float *)(a4))->v) = ((FUN_0c0df4d0(((-((((struct o7248_int *)(a4))->v))) + 0x14000))) * (*(float *)((t2 + ((*(short *)((a5 + 0x0))) << 2)))));
        (((struct o40_float *)(a4))->v) = ((FUN_0c0dfa50(((-((((struct o7248_int *)(a4))->v))) + 0x14000))) * (*(float *)((t2 + ((*(short *)((a5 + 0x0))) << 2)))));
        *(unsigned short *)((a5 + 0x0)) = ((*(short *)((a5 + 0x0))) + 0x1);
        t2 = FUN_0c09cee4(a4);
        if (((*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x5))) == 0) && ((signed char)t2 != 0)) {
            t4 = FUN_0c09d818(a4, t2);
            if (((float)t4 > 0.0f) && (t0 = *(int *)((a4 + 0x1C)), t1 = *(signed char *)((0x71BC + t0)), t1 != 2)) {
                t0 = *(int *)((a4 + 0x1C));
                (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - ((((((struct o38_float *)(a4))->v)) * 2.0f)));
                t0 = *(int *)((a4 + 0x1C));
                (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) - ((((((struct o40_float *)(a4))->v)) * 2.0f)));
                return 0x28;
            }
            return FUN_0c09d990(a4);
        }
        return FUN_0c09d990(a4);
    }
    return (t3 << 2);
}

int FUN_0c0a7d28(int a4, int a5)
{
    register float u16;
    register int t10;

    if ((signed char)a5 == 0) {
        FUN_0c06233a((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0))), 0xC664A78, 0x23);
        (((struct o28_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = ((((struct o0_float *)0xC0A7E48)->v));
        t10 = (*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)));
    } else {
        FUN_0c06233a((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0))), 0xC664A78, 0x25);
        (((struct o28_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = ((((struct o4_float *)0xC0A7E48)->v));
        t10 = (*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)));
    }
    (((struct o2C_float *)(t10))->v) = ((((struct o8_float *)0xC0A7E48)->v));
    *(unsigned char *)(((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0))) + 0x0)) = 0x1;
    *(unsigned short *)(((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0))) + 0x2)) = 0x11F;
    u16 = (((struct oC_float *)0xC0A7E48)->v);
    (((struct o1C_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = ((-(((((struct o28_float *)(a4))->v)) * u16)) / ((((struct o10_float *)0xC0A7E48)->v)));
    (((struct o20_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = ((-(((((struct o28_float *)(a4))->v)) * u16)) / ((((struct o14_float *)0xC0A7E48)->v)));
    (((struct o24_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = 1.0f;
    return 0x24;
}

int FUN_0c0a3824(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)(((0x71A5 + a4) + 0x0));
    t1 = *(signed char *)((a4 + 0x71A4));
    if ((((t1 << 8) + (unsigned char)t0) != 21) && ((((t1 << 8) + (unsigned char)t0) != 22) && ((((t1 << 8) + (unsigned char)t0) != 23) && (((t1 << 8) + (unsigned char)t0) != 41)))) {
        if (((t1 << 8) + (unsigned char)t0) != 55) {
            if (((t1 << 8) + (unsigned char)t0) != 0x13C) {
                if (((t1 << 8) + (unsigned char)t0) != 0x24A) {
                    if (((t1 << 8) + (unsigned char)t0) != 0x25B) {
                        if (((t1 << 8) + (unsigned char)t0) != 0x265) {
                            if (((t1 << 8) + (unsigned char)t0) != 0x2A0) {
                                if (((t1 << 8) + (unsigned char)t0) != 0x2AF) {
                                    if (((t1 << 8) + (unsigned char)t0) != 0x2C5) {
                                        if (((t1 << 8) + (unsigned char)t0) != 0x2C9) {
                                            if (((t1 << 8) + (unsigned char)t0) != 0x2E1) {
                                                if (((t1 << 8) + (unsigned char)t0) != 0x2EB) {
                                                    if (((t1 << 8) + (unsigned char)t0) != 0x2EC) {
                                                        if (((t1 << 8) + (unsigned char)t0) != 0x2FD) {
                                                            if (((t1 << 8) + (unsigned char)t0) != 0x2FE) {
                                                                return ((int (*)(int, int, int, int))(0xC0A3910))(a4, a5, a6, a7);
                                                            }
                                                            return ((int (*)(int, int, int, int))(0xC0A38F6))(a4, a5, a6, a7);
                                                        }
                                                        return ((int (*)(int, int, int, int))(0xC0A390C))(a4, 0xA, 0xC, a7);
                                                    }
                                                    return ((int (*)(int, int, int, int))(0xC0A390C))(a4, 0x8, 0x7, a7);
                                                }
                                                return ((int (*)(int, int, int, int))(0xC0A390C))(a4, 0x5, 0x7, a7);
                                            }
                                            return ((int (*)(int, int, int, int))(0xC0A3908))(a4, a5, a6, a7);
                                        }
                                        return ((int (*)(int, int, int, int))(0xC0A390C))(a4, 0xA, 0xA, a7);
                                    }
                                    return ((int (*)(int, int, int, int))(0xC0A390C))(a4, 0x9, 0xB, a7);
                                }
                                return ((int (*)(int, int, int, int))(0xC0A390C))(a4, 0xA, 0x25, a7);
                            }
                            return ((int (*)(int, int, int, int))(0xC0A390C))(a4, 0x0, 0x19, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC0A390C))(a4, 0x9, 0xA, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC0A38FC))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0A390C))(a4, 0x3, 0xA, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0A3902))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0A390C))(a4, 0x0, 0xE, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0A390C))(a4, 0x0, 0xF, a7);
}
