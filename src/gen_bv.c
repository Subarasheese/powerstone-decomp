/* Straight-line functions with calls and guards (batch gen_bv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o270_float { char p[0x270]; float v; };
struct o278_float { char p[0x278]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c0128a0(int, int);
int FUN_0c01576c(int);
int FUN_0c015798(int);
int FUN_0c0157c4(int);
int FUN_0c0157fc(int);
int FUN_0c015828(int);
int FUN_0c01d0ec(int);
int FUN_0c01d254(int);
int FUN_0c030aec(int, int, int, float);
int FUN_0c04cdf2(void);
int FUN_0c0555dc(void);
int FUN_0c059330(int, int, int, int);
int FUN_0c0623a6(int, int, int);
int FUN_0c0b9288(int, int, int, float);
int FUN_0c0d3be6(void);
int FUN_0c0d3d50(int, int, int, int, float, float, float, float, float, float);
float FUN_0c0df340(float);
float FUN_0c0dfa50(int);
int FUN_0c0e6e5c(int);
int FUN_0c0e6fe8(int);
int sprintf(int, int, int, int, int);
int FUN_0c0351da(int a4, int a5, int a6, int a7);
int FUN_0c0d3e6c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_0c012af2(int a4, int a5, int a6, int a7);
int FUN_0c0b9430(int a4);
int FUN_0c049ee4(int a4, int a5, int a6, int a7);
int FUN_0c0abaca(int a4, int a5, int a6, int a7, float f4);
int FUN_0c01b9f4(int a4, int a5, int a6, int a7);
int FUN_0c04f5ae(int a4, int a5, float f4);

int FUN_0c0351da(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    if ((*(signed char *)((0x7223 + ((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4)))) != 4) {
        return FUN_0c059330(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x0;
    }
    *(volatile signed char *)((a4 + 0x3));
    FUN_0c0e6fe8(a4);
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 30.0f);
    t0 = (((struct o2E8_int *)(a4))->v);
    (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.099999994f);
    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x18E3);
    t0 = (((struct o2E4_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x18E3);
    t0 = (((struct o2E8_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) - 0x38E);
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) - 0.199999988f);
            if (0.0f > ((((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            (((struct o40_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v) = ((((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v));
            t0 = (((struct o2E8_int *)(a4))->v);
            (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) - 0.099999994f);
            if (0.0f > ((((struct o40_float *)(((((struct o2E8_int *)(a4))->v))))->v))) {
                (((struct o40_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 0.0f;
            }
            t0 = (((struct o2E8_int *)(a4))->v);
            *(volatile int *)((a4 + 0x2E8));
            (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) - 0.099999994f);
            if (0.0f > ((((struct o24_float *)(((((struct o2E8_int *)(a4))->v))))->v))) {
                (((struct o24_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 0.0f;
            }
            t0 = (((struct o2E8_int *)(a4))->v);
            (((struct o1C_float *)(t0))->v) = ((((struct o24_float *)(t0))->v));
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.099999994f);
            t0 = (((struct o2E0_int *)(a4))->v);
            t1 = *(int *)(((0x2E0 + a4) + 0x4));
            u0 = (((struct o1C_float *)(t0))->v);
            (((struct o24_float *)(t0))->v) = u0;
            (((struct o1C_float *)(t1))->v) = u0;
            (((struct o24_float *)(t1))->v) = u0;
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
            if (((((struct oEE_short *)(a4))->v)) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
        }
    } else {
        t0 = (((struct o2E0_int *)(a4))->v);
        u0 = ((((struct o20_float *)(t0))->v));
        u0 = u0 + 0.099999994f * (FUN_0c0dfa50((((((struct oEC_short *)(a4))->v)) << 14)));
        (((struct o20_float *)(t0))->v) = u0;
        (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o20_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v));
        if ((int)(*(signed char *)((((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0xB))) > (int)0x1) {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            (((struct oEE_ushort *)(a4))->v) = 0xA;
        }
        if ((*(signed char *)((0x71BA + ((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4)))) == 11) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
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

int FUN_0c0d3e6c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE6;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return ((int (*)(void))(0xC0D3E60))();
        }
        return FUN_0c0d3d50(a4, a5, a6, a7, f4, f5, f6, f7, f8, f9);
    }
    return FUN_0c0d3be6();
}

int FUN_0c012af2(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R5;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_2 = a4;
    v0_3 = *(signed char *)((v0_2 + 0x8));
    v0_1 = (v0_3);
    v0_0 = (v0_2);
    v0_2 = (0x0);
    if ((v0_3 == 0)) goto L_C012B08;
    if ((v0_1 == 1)) goto L_C012B20;
    return FUN_0c059330(v0_0, R5, a6, a7);
    L_C012B20:;
    R5 = (0xC7F3036);
    if (((*(short *)0xC7F3040) != 0)) goto L_C012B2E;
    if (!(((*(short *)((R5 + 0xC))) == 0))) goto L_C012B2E;
    if (((*(signed char *)((v0_0 + 0xC))) != 0)) goto L_C012B70;
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) - ((((struct oC_float *)0xC361C60)->v)));
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) - ((((struct o10_float *)0xC361C60)->v)));
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) + ((((struct o4_float *)0xC361C60)->v)));
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + ((((struct o8_float *)0xC361C60)->v)));
    goto L_C012B70;
    L_C012B2E:;
    *(unsigned char *)((v0_0 + 0x8)) = 0x2;
    *(unsigned char *)((v0_0 + 0xF)) = v0_2;
    v0_1 = (v0_2);
    L_C012D38:;
    return v0_1;
    L_C012B70:;
    v0_2 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C012B7E;
    if ((v0_1 == 1)) goto L_C012BAC;
    L_C012BAC:;
    v0_2 = *(signed char *)((v0_0 + 0xF));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C012BDA;
    if ((v0_1 == 1)) goto L_C012BE4;
    if ((v0_1 == 2)) goto L_C012BEE;
    if ((v0_1 == 3)) goto L_C012C04;
    if ((v0_1 == 4)) goto L_C012C14;
    if ((v0_1 == 5)) goto L_C012C24;
    if ((v0_1 == 6)) goto L_C012C6A;
    if ((v0_1 == 7)) goto L_C012C86;
    if ((v0_1 != 99)) goto L_C012BD6;
    FUN_0c0157fc(v0_0);
    FUN_0c01576c(v0_0);
    *(unsigned int *)((v0_0 + 0x34)) = ((*(int *)((v0_0 + 0x34))) - 910);
    *(unsigned int *)((v0_0 + 0x34)) = ((*(int *)((v0_0 + 0x34))) & 0xFFFF);
    L_C012D0C:;
    if (((*(signed char *)((v0_0 + 0xF))) != 3)) goto L_C012D1C;
    if ((((((struct o0_float *)0xC361C60)->v)) == 1.0f)) goto L_C012D24;
    L_C012D1C:;
    (((struct o5C_float *)(v0_0))->v) = ((((struct o0_float *)0xC361C60)->v));
    L_C012D24:;
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) + 0x1);
    v0_1 = (0xEC);
    goto L_C012D38;
    L_C012BD6:;
    goto L_C012D0C;
    L_C012C86:;
    FUN_0c015798(v0_0);
    FUN_0c01576c(v0_0);
    v0_4 = *(signed char *)((v0_0 + 0xB));
    v0_1 = (0x20);
    v0_3 = (0xC116468);
    v0_2 = (v0_4);
    R5 = (((v0_4 << 2) << 1));
    L_C012CA0:;
    *(float *)((v0_0 + v0_1)) = ((*(float *)((v0_0 + v0_1))) + (*(float *)(((R5 + v0_3) + 0x0))));
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + ((((struct o4_float *)((R5 + v0_3)))->v)));
    *(unsigned char *)((v0_0 + 0xB)) = ((*(signed char *)((v0_0 + 0xB))) + 0x1);
    *(volatile signed char *)((v0_0 + 0xB));
    v0_1 = ((FUN_0c0e6e5c(v0_2)));
    L_C012CC8:;
    *(unsigned char *)((v0_0 + 0xB)) = v0_1;
    goto L_C012D0C;
    L_C012C6A:;
    FUN_0c015798(v0_0);
    FUN_0c01576c(v0_0);
    v0_4 = *(signed char *)((v0_0 + 0xB));
    v0_1 = (0x20);
    v0_3 = (0xC116348);
    v0_2 = (v0_4);
    R5 = (((v0_4 << 2) << 1));
    goto L_C012CA0;
    L_C012C24:;
    FUN_0c015798(v0_0);
    FUN_0c01576c(v0_0);
    v0_1 = *(signed char *)((v0_0 + 0xB));
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) + (*(float *)(((((v0_1 << 2) << 1) + 0xC1162B8) + 0x0))));
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + ((((struct o4_float *)((((v0_1 << 2) << 1) + 0xC1162B8)))->v)));
    *(unsigned char *)((v0_0 + 0xB)) = ((*(signed char *)((v0_0 + 0xB))) + 0x1);
    *(volatile signed char *)((v0_0 + 0xB));
    v0_1 = ((FUN_0c0e6e5c(v0_1)));
    goto L_C012CC8;
    L_C012C14:;
    FUN_0c0157c4(v0_0);
    L_C012C1A:;
    FUN_0c01576c(v0_0);
    goto L_C012D0C;
    L_C012C04:;
    (((struct o5C_float *)(v0_0))->v) = (((((struct o5C_float *)(v0_0))->v)) + ((((struct o38_float *)(v0_0))->v)));
    goto L_C012C1A;
    L_C012BEE:;
    FUN_0c015798(v0_0);
    FUN_0c01576c(v0_0);
    FUN_0c015828(v0_0);
    goto L_C012D0C;
    L_C012BE4:;
    FUN_0c0157fc(v0_0);
    goto L_C012C1A;
    L_C012BDA:;
    FUN_0c015798(v0_0);
    goto L_C012C1A;
    L_C012B7E:;
    v0_2 = (((struct oEE_short *)(v0_0))->v);
    v0_1 = (0xEE);
    v0_3 = (v0_2);
    if ((v0_2 != 0)) goto L_C012BA8;
    FUN_0c0128a0(v0_0, R5);
    goto L_C012BAC;
    L_C012BA8:;
    *(unsigned short *)((v0_0 + v0_1)) = (v0_3 - 1);
    goto L_C012BAC;
    L_C012B08:;
    (((struct oEC_ushort *)(v0_0))->v) = v0_2;
    (((struct oEE_ushort *)(v0_0))->v) = v0_2;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    *(unsigned char *)((v0_0 + 0xD)) = v0_2;
    *(unsigned char *)((v0_0 + 0xC)) = v0_2;
    *(unsigned char *)((v0_0 + 0xB)) = v0_2;
    goto L_C012B20;
}

int FUN_0c0b9430(int a4)
{

    register int R1;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R12;
    register int R13;
    register float F1;
    register float F2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_0 = R13;
    v0_2 = R12;
    v0_3 = *(signed char *)((v0_1 + 0x8));
    v0_2 = (v0_3);
    R13 = (0x0);
    v0_0 = (v0_1);
    if ((v0_3 == 0)) goto L_C0B944A;
    if ((v0_2 == 1)) goto L_C0B9458;
    return ((int (*)(int, int, int, int))(FUN_0c059330))(v0_0, R5, R6, R7);
    L_C0B9458:;
    (((struct oF0_ushort *)(v0_0))->v) = (((((struct oF0_short *)(v0_0))->v)) + 0x1);
    v0_2 = (((((struct oF0_short *)(v0_0))->v)) & 0x1) == 0;
    v0_1 = (0x1);
    w0_0 = (0.099999994f);
    if (v0_2) goto L_C0B947C;
    v0_2 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o20_float *)(v0_2))->v) = (((((struct o20_float *)(v0_2))->v)) + w0_0);
    L_C0B9488:;
    v0_2 = ((((((struct oF0_short *)(v0_0))->v)) + 0x1) & 1) == 0;
    if (v0_2) goto L_C0B949E;
    v0_3 = (((struct o2E4_int *)(v0_0))->v);
    w0_1 = (((struct o20_float *)(v0_3))->v);
    v0_2 = (0x20);
    v0_3 = (v0_3);
    w0_0 = ((w0_1 + w0_0));
    L_C0B94A8:;
    *(float *)((v0_3 + v0_2)) = w0_0;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_3);
    R5 = (0xC153168);
    R6 = (0x2);
    if ((v0_3 == 0)) goto L_C0B94C8;
    if ((v0_2 == 1)) goto L_C0B94D0;
    if ((v0_2 == 2)) goto L_C0B9532;
    if ((v0_2 != 3)) goto L_C0B94C4;
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) - ((*(float *)((R5 + ((*(signed char *)((v0_0 + 0x4))) << 2)))) / 12.0f));
    (((struct oEE_ushort *)(v0_0))->v) = (((((struct oEE_short *)(v0_0))->v)) + 0x1);
    R12 = (0xC153158);
    R5 = (R13);
    R7 = (R13);
    L_C0B9608:;
    v0_2 = *(int *)((((0x2E0 + v0_0) + R5) + 0x0));
    *(unsigned int *)((v0_2 + 0x18)) = ((*(int *)((v0_2 + 0x18))) + (*(int *)((R12 + R5))));
    v0_2 = (int)(R7 + 0x1) < (int)R6;
    R5 = ((R5 + 0x4));
    R7 = ((R7 + 0x1));
    if (v0_2) goto L_C0B9608;
    v0_2 = (int)((((struct oEE_short *)(v0_0))->v)) < (int)0xC;
    if (v0_2) goto L_C0B9634;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    L_C0B9634:;
    v0_2 = (int)((((struct oEE_short *)(v0_0))->v)) < (int)0x6;
    if (v0_2) goto L_C0B9652;
    (((struct o101_uchar *)(v0_0))->v) = R13;
    (((struct o102_uchar *)(v0_0))->v) = R13;
    (((struct o105_uchar *)(v0_0))->v) = v0_1;
    (((struct o106_uchar *)(v0_0))->v) = v0_1;
    (((struct o107_uchar *)(v0_0))->v) = v0_1;
    L_C0B9652:;
    v0_1 = FUN_0c0555dc();
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C0B9672;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_2 = ((v0_1 + 0x1));
    L_C0B9672:;
    return v0_2;
    L_C0B94C4:;
    goto L_C0B9652;
    L_C0B9532:;
    (((struct o2D9_uchar *)(v0_0))->v) = R6;
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) + ((*(float *)((R5 + ((*(signed char *)((v0_0 + 0x4))) << 2)))) / 3.0f));
    (((struct oEE_ushort *)(v0_0))->v) = (((((struct oEE_short *)(v0_0))->v)) + 0x1);
    v0_1 = ((((struct oEE_short *)(v0_0))->v)) != 1;
    if (v0_1) goto L_C0B95B0;
    v0_1 = ((((struct o270_float *)(v0_0))->v)) != 0.0f;
    w0_0 = (0.0f);
    if (v0_1) goto L_C0B9588;
    v0_1 = ((((struct o278_float *)(v0_0))->v)) != w0_0;
    if (v0_1) goto L_C0B9588;
    v0_1 = (*(signed char *)((v0_0 + 0x4))) == 0;
    if (v0_1) goto L_C0B95B0;
    FUN_0c0b9288(v0_0, ((*(signed char *)((v0_0 + 0x4))) - 1), ((((struct oEC_short *)(v0_0))->v)), 225.0f);
    L_C0B95B0:;
    v0_1 = (int)((((struct oEE_short *)(v0_0))->v)) < (int)0x3;
    if (v0_1) goto L_C0B9652;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    (((struct oEE_ushort *)(v0_0))->v) = R13;
    goto L_C0B9652;
    L_C0B9588:;
    v0_1 = ((((struct oEC_short *)(v0_0))->v)) == 0;
    v0_2 = (0xEC);
    if (v0_1) goto L_C0B95A2;
    FUN_0c0b9288(v0_0, ((*(signed char *)((v0_0 + 0x4))) - 1), ((*(signed char *)((v0_0 + v0_2))) - 1), 225.0f);
    L_C0B95A2:;
    return ((int (*)(int, int, int, int))(FUN_0c059330))(v0_0, R5, R6, R7);
    L_C0B94D0:;
    *(unsigned char *)((v0_0 + 0x1)) = v0_1;
    (((struct o24_float *)(v0_0))->v) = ((((struct o2D4_float *)(v0_0))->v));
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    (((struct oEE_ushort *)(v0_0))->v) = R13;
    v0_2 = (*(float *)((R5 + ((*(signed char *)((v0_0 + 0x4))) << 2)))) > 2.0f;
    if (v0_2) goto L_C0B9518;
    (((struct o101_uchar *)(v0_0))->v) = 0x5;
    L_C0B951E:;
    (((struct o102_uchar *)(v0_0))->v) = R13;
    (((struct o2D9_uchar *)(v0_0))->v) = R6;
    (((struct o105_uchar *)(v0_0))->v) = R13;
    (((struct o106_uchar *)(v0_0))->v) = v0_1;
    (((struct o107_uchar *)(v0_0))->v) = v0_1;
    goto L_C0B9532;
    L_C0B9518:;
    (((struct o101_uchar *)(v0_0))->v) = 0x6;
    goto L_C0B951E;
    L_C0B94C8:;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C0B9652;
    L_C0B949E:;
    v0_3 = (((struct o2E4_int *)(v0_0))->v);
    w0_1 = (((struct o20_float *)(v0_3))->v);
    v0_2 = (0x20);
    v0_3 = (v0_3);
    w0_0 = ((w0_1 - w0_0));
    goto L_C0B94A8;
    L_C0B947C:;
    v0_2 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o20_float *)(v0_2))->v) = (((((struct o20_float *)(v0_2))->v)) - w0_0);
    goto L_C0B9488;
    L_C0B944A:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    (((struct oEE_ushort *)(v0_0))->v) = R13;
    (((struct oF0_ushort *)(v0_0))->v) = R13;
    goto L_C0B9458;
}

int FUN_0c049ee4(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t3;
    register int t10;
    register int t15;
    register int t35;
    register int t53;
    register int t71;
    register int t91;
    register int t122;

    if ((*(signed char *)((a4 + 0x8))) != 0) {
        t122 = (FUN_0c059330(a4, a5, a6, a7));
    } else {
        t3 = *(signed char *)((a4 + 0x9));
        switch (t3) {
        case 0:
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + (((-((((struct o50_float *)(a4))->v))) + 1.19999993f) / (float)((((struct oEC_short *)(a4))->v))));
            (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + (((-((((struct o3C_float *)(a4))->v))) + 55.0f) / (float)((((struct oEC_short *)(a4))->v))));
            t71 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t71 - 1);
            if ((int)(short)(t71 - 1) > 0) {
            } else {
                (((struct oEC_ushort *)(a4))->v) = 0x5;
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            }
            break;
        case 1:
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + (((-((((struct o50_float *)(a4))->v))) + 1.0f) / (float)((((struct oEC_short *)(a4))->v))));
            (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + (((-((((struct o3C_float *)(a4))->v))) + 50.0f) / (float)((((struct oEC_short *)(a4))->v))));
            t53 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t53 - 1);
            if ((int)(short)(t53 - 1) <= 0) {
                (((struct oEC_ushort *)(a4))->v) = 0x5;
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            }
            break;
        case 2:
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + (((-((((struct o50_float *)(a4))->v))) + 1.19999993f) / (float)((((struct oEC_short *)(a4))->v))));
            (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + (((-((((struct o3C_float *)(a4))->v))) + 55.0f) / (float)((((struct oEC_short *)(a4))->v))));
            t35 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t35 - 1);
            if ((int)(short)(t35 - 1) <= 0) {
                (((struct oEC_ushort *)(a4))->v) = 0x5;
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            }
            break;
        case 3:
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + (((-((((struct o50_float *)(a4))->v))) + 1.0f) / (float)((((struct oEC_short *)(a4))->v))));
            (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + (((-((((struct o3C_float *)(a4))->v))) + 50.0f) / (float)((((struct oEC_short *)(a4))->v))));
            t10 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t10 - 1);
            if ((int)(short)(t10 - 1) <= 0) {
                (((struct oEC_ushort *)(a4))->v) = 0x28;
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            }
            break;
        case 4:
            (((struct o3C_float *)(a4))->v) = 50.0f;
            t15 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t15 - 1);
            if ((int)(short)(t15 - 1) <= 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            break;
        }
        (((struct o20_float *)(a4))->v) = ((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v));
        (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v));
        (((struct o24_float *)(a4))->v) = ((((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v)) + ((((struct o38_float *)(a4))->v))) + ((((struct o3C_float *)(a4))->v)));
        t91 = *(signed char *)((a4 + 0xB));
        if (t91 != 0) {
            if (t91 != 1) {
            } else {
                *(int *)((int)stk + 0) = 0xC14AA40;
                sprintf(((int)stk + 4), a5, a6, a7, 0xC14AA40);
            }
        } else {
            *(int *)((int)stk + 0) = 0xC14AA34;
            sprintf(((int)stk + 4), a5, a6, a7, 0xC14AA34);
        }
        t122 = (FUN_0c030aec((a4 + 0x20), ((int)stk + 4), 0x1, ((((struct o50_float *)(a4))->v))));
    }
    return t122;
}

int FUN_0c0abaca(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return FUN_0c059330(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    *(unsigned int *)((a4 + 0x30)) = ((0xA93E + (*(int *)((((((struct o2E0_int *)((*(int *)((a4 + 0x1C)))))->v)) + 0x14)))) & 0xFFFF);
                    t0 = 0x0;
                    t1 = (0x2E0 + a4);
                    t2 = 0x0;
                    for (;;) {
                        t4 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
                        (((struct o40_float *)(t4))->v) = (((((struct o40_float *)(t4))->v)) - 0.049999997f);
                        t2 = (t2 + 0x1);
                        t3 = 0x40;
                        if (0.0f > ((((struct o40_float *)((*(int *)((((0x2E0 + a4) + t0) + 0x0)))))->v))) {
                            (((struct o40_float *)((*(int *)((t1 + 0x0)))))->v) = 0.0f;
                            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                            *(unsigned char *)((a4 + 0x9)) = 0x0;
                            t3 = 0x0;
                        }
                        t1 = (t1 + 0x4);
                        t0 = (t0 + 0x4);
                        if ((int)t2 >= (int)0x8) {
                            break;
                        }
                    }
                    return t3;
                }
                return FUN_0c059330(a4, 0xFFFF, a6, a7);
            }
            *(unsigned int *)((a4 + 0x30)) = ((0xA93E + (*(int *)((((((struct o2E0_int *)((*(int *)((a4 + 0x1C)))))->v)) + 0x14)))) & 0xFFFF);
            t0 = 0x0;
            for (;;) {
                if ((t0 & 0x1) != 0) {
                    t1 = *(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0));
                    *(unsigned int *)((t1 + 0x14)) = ((*(int *)((t1 + 0x14))) + 0xB6);
                } else {
                    t1 = *(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0));
                    *(unsigned int *)((t1 + 0x14)) = ((*(int *)((t1 + 0x14))) - 0xB6);
                }
                t1 = (t0 << 2);
                t0 = (t0 + 0x1);
                t2 = *(int *)((((0x2E0 + a4) + t1) + 0x0));
                *(unsigned int *)((t2 + 0x14)) = ((*(int *)((t2 + 0x14))) & 0xFFFF);
                if ((int)t0 >= (int)0x8) {
                    break;
                }
            }
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            t1 = 0xEC;
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                *(unsigned char *)((a4 + 0x9)) = 0x0;
                (((struct oEC_ushort *)(a4))->v) = 0x3C;
                t0 = 0x0;
                t2 = 0x0;
                for (;;) {
                    t2 = (t2 + 0x1);
                    *(unsigned short *)(((*(int *)((((0x2E0 + a4) + t0) + 0x0))) + 0x2)) = 0x40F;
                    (((struct o40_float *)((*(int *)((((0x2E0 + a4) + t0) + 0x0)))))->v) = 1.0f;
                    t0 = (t0 + 0x4);
                    if ((int)t2 >= (int)0x8) {
                        break;
                    }
                }
                t1 = 0x40;
            }
            return t1;
        }
        *(unsigned int *)((a4 + 0x30)) = ((0xA93E + (*(int *)((((((struct o2E0_int *)((*(int *)((a4 + 0x1C)))))->v)) + 0x14)))) & 0xFFFF);
        t0 = *(signed char *)0xC7F2EE7;
        t1 = (unsigned char)t0;
        if ((unsigned char)t0 != 2) {
        } else {
            t0 = *(signed char *)0xC7F2EE8;
            t2 = (unsigned char)t0;
            if ((unsigned char)t0 != 1) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                *(unsigned char *)((a4 + 0x9)) = 0x0;
                (((struct oEC_ushort *)(a4))->v) = 0x3C;
                t2 = 0xEC;
            }
            t1 = t2;
        }
        return t1;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    t0 = 0x0;
    for (;;) {
        FUN_0c0623a6((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0))), 0xC664A78, (t0 + 0x6));
        *(unsigned char *)(((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0))) + 0x0)) = 0x1;
        *(unsigned short *)(((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0))) + 0x2)) = 0xF;
        t1 = (t0 << 2);
        t0 = (t0 + 0x1);
        *(unsigned int *)(((*(int *)(((t1 + (0x2E0 + a4)) + 0x0))) + 0x14)) = 0x0;
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return 0xF;
}

int FUN_0c01b9f4(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_1 = a4;
    v0_0 = R13;
    v0_2 = R12;
    v0_4 = R11;
    v0_5 = R10;
    v0_3 = *(signed char *)((v0_1 + 0x8));
    v0_2 = (v0_3);
    R13 = ((0x308 + v0_1));
    v0_0 = (v0_1);
    v0_1 = (0x0);
    if ((v0_3 == 0)) goto L_C01BA16;
    if ((v0_2 == 1)) goto L_C01BA70;
    return FUN_0c059330(v0_0, R5, a6, a7);
    L_C01BA70:;
    v0_3 = *(signed char *)0xC7F473E;
    v0_4 = *(signed char *)((v0_0 + 0x4));
    v0_2 = (v0_4);
    R11 = (v0_3);
    R12 = (0xC7F4724);
    R5 = (0xC1801B8);
    if ((v0_4 == 0)) goto L_C01BAAE;
    if ((v0_2 == 1)) goto L_C01BAAE;
    if ((v0_2 == 2)) goto L_C01BAAE;
    if ((v0_2 == 3)) goto L_C01BAAE;
    if ((v0_2 == 4)) goto L_C01BAAE;
    if ((v0_2 == 5)) goto L_C01BAE0;
    if ((v0_2 == 6)) goto L_C01BB08;
    if ((v0_2 == 7)) goto L_C01BAE0;
    if ((v0_2 == 8)) goto L_C01BB08;
    if ((v0_2 == 9)) goto L_C01BB3C;
    if ((v0_2 != 10)) goto L_C01BAAA;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_3);
    v0_1 = (0xC1801F8);
    if ((v0_3 == 0)) goto L_C01BBCC;
    if ((v0_2 == 1)) goto L_C01BBE0;
    L_C01BBFA:;
    *(float *)((R13 + 0x0)) = (*(float *)0xC36236C);
    v0_1 = *(signed char *)((v0_0 + 0x1));
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C01BC2A;
    return FUN_0c01d254(v0_0);
    L_C01BC2A:;
    return v0_2;
    L_C01BBE0:;
    v0_2 = *(signed char *)((R12 + 0x1A));
    v0_3 = (*(signed char *)((v0_0 + 0xF))) == (signed char)v0_2;
    R5 = (v0_2);
    if (v0_3) goto L_C01BBFA;
    *(unsigned int *)((R13 + 0x4)) = (*(int *)((v0_1 + ((signed char)R5 << 2))));
    *(unsigned char *)((v0_0 + 0xF)) = (*(signed char *)((R12 + 0x1A)));
    goto L_C01BBFA;
    L_C01BBCC:;
    *(unsigned int *)((R13 + 0x4)) = (*(int *)((v0_1 + ((signed char)R11 << 2))));
    *(unsigned char *)((v0_0 + 0xF)) = (*(signed char *)((R12 + 0x1A)));
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01BBE0;
    L_C01BAAA:;
    goto L_C01BBFA;
    L_C01BB3C:;
    v0_1 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_1);
    R10 = (0xC1801DC);
    if ((v0_1 == 0)) goto L_C01BB4C;
    if ((v0_2 == 1)) goto L_C01BB78;
    goto L_C01BBFA;
    L_C01BB78:;
    v0_1 = (*(signed char *)((v0_0 + 0xF))) == (*(signed char *)(((0x1A + R12) + 0x0)));
    if (v0_1) goto L_C01BBFA;
    *(unsigned char *)((v0_0 + 0xF)) = (*(signed char *)((R12 + 0x1A)));
    v0_1 = (signed char)(FUN_0c01d0ec((*(signed char *)((R12 + 0x1A))))) == 0;
    if (v0_1) goto L_C01BBA8;
    *(unsigned int *)((R13 + 0x4)) = (*(int *)((R10 + ((*(signed char *)((0xC1801E8 + (*(signed char *)((R12 + 0x1A)))))) << 2))));
    goto L_C01BBFA;
    L_C01BBA8:;
    *(unsigned int *)((R13 + 0x4)) = (*(int *)((R10 + 0x8)));
    goto L_C01BBFA;
    L_C01BB4C:;
    v0_1 = (signed char)(FUN_0c01d0ec(R11)) == 0;
    if (v0_1) goto L_C01BB68;
    *(unsigned int *)((R13 + 0x4)) = (*(int *)((R10 + ((*(signed char *)((0xC1801E8 + (*(signed char *)((R12 + 0x1A)))))) << 2))));
    L_C01BB6C:;
    *(unsigned char *)((v0_0 + 0xF)) = (*(signed char *)((R12 + 0x1A)));
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01BB78;
    L_C01BB68:;
    *(unsigned int *)((R13 + 0x4)) = (*(int *)((R10 + 0x8)));
    goto L_C01BB6C;
    L_C01BB08:;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C01BB16;
    if ((v0_2 == 1)) goto L_C01BB28;
    goto L_C01BBFA;
    L_C01BB28:;
    v0_2 = (int)(*(signed char *)((R12 + 0x1A))) < (int)0xE;
    if (v0_2) goto L_C01BB36;
    L_C01BB32:;
    v0_2 = (v0_1);
    L_C01BB38:;
    *(unsigned char *)((v0_0 + 0x1)) = v0_2;
    goto L_C01BBFA;
    L_C01BB36:;
    v0_2 = (0x1);
    goto L_C01BB38;
    L_C01BB16:;
    *(unsigned int *)((R13 + 0x4)) = (*(int *)((R5 + ((*(signed char *)((v0_0 + 0x4))) << 2))));
    v0_2 = (*(signed char *)((v0_0 + 0x4))) != 6;
    if (v0_2) goto L_C01BB28;
    *(unsigned int *)((v0_0 + 0x30)) = 0x4000;
    goto L_C01BB28;
    L_C01BAE0:;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C01BAEE;
    if ((v0_2 == 1)) goto L_C01BAFC;
    goto L_C01BBFA;
    L_C01BAFC:;
    v0_2 = (*(signed char *)((R12 + 0x1A))) == 0;
    if (v0_2) goto L_C01BB32;
    goto L_C01BB36;
    L_C01BAEE:;
    *(unsigned int *)((R13 + 0x4)) = (*(int *)((R5 + ((*(signed char *)((v0_0 + 0x4))) << 2))));
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01BAFC;
    L_C01BAAE:;
    v0_1 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C01BAC0;
    if ((v0_2 != 1)) goto L_C01BABC;
    goto L_C01BBFA;
    L_C01BABC:;
    goto L_C01BBFA;
    L_C01BAC0:;
    *(unsigned int *)((R13 + 0x4)) = (*(int *)((R5 + ((*(signed char *)((v0_0 + 0x4))) << 2))));
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01BBFA;
    L_C01BA16:;
    v0_2 = *(signed char *)((v0_0 + 0x4));
    (((struct o20_float *)(v0_0))->v) = (*(float *)((0xC180280 + (unsigned char)(((v0_2 << 1) + v0_2) << 2))));
    v0_2 = *(signed char *)((v0_0 + 0x4));
    (((struct o24_float *)(v0_0))->v) = ((((struct o4_float *)(((unsigned char)(((v0_2 << 1) + v0_2) << 2) + 0xC180280)))->v));
    v0_2 = *(signed char *)((v0_0 + 0x4));
    (((struct o28_float *)(v0_0))->v) = ((((struct o8_float *)((0xC180280 + (unsigned char)(((v0_2 << 1) + v0_2) << 2))))->v));
    *(unsigned int *)((v0_0 + 0x34)) = v0_1;
    *(unsigned int *)((v0_0 + 0x30)) = v0_1;
    *(unsigned int *)((v0_0 + 0x2C)) = v0_1;
    (((struct o58_float *)(v0_0))->v) = 1.0f;
    (((struct o54_float *)(v0_0))->v) = 1.0f;
    (((struct o50_float *)(v0_0))->v) = 1.0f;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C01BA70;
}

int FUN_0c04f5ae(int a4, int a5, float f4)
{
    int stk[41];
    int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t42;
    register int t43;
    register int t15;
    register int t16;
    register float u17;
    register float u18;
    register float u19;
    register float u20;
    register float u23;
    register float t24;
    register int t26;
    register int t27;
    register float u28;
    register float u30;
    register float u32;
    register float u33;
    register float u36;
    register float t37;
    register float u38;
    register int t39;
    register int t52;
    register int t53;
    register int t54;
    register int t56;
    register int t57;
    register int t58;
    register int t59;
    register int t60;
    register float u61;
    register float u63;
    register int t75;
    register int t82;
    register float u84;
    register int t85;
    register float u87;
    register int t88;
    register float u90;
    register int t94;
    register int t2;
    register int t12;
    register int t13;
    register int t14;
    register float u51;
    register int t55;
    register float u62;
    register int t79;
    register int t80;

    t1 = 0xFFFFFF68;
    t3 = (*(int *)0xC7E407C);
    t4 = a5;
    t5 = 0x0;
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t2 = (*(signed char *)((t3 + 0x0)));
        t4 = (*(int *)((t3 + 0x18)));
        if ((t2 != 0) && ((t12 = *(signed char *)((t3 + 0x4)), t1 = t12, t1 == 6) && (t1 = 0x30D, t13 = *(signed char *)((t3 + t1)), t14 = (t2 == 0), t2 = t13, t2 == 0))) {
            t1 = (unsigned short)t5;
            t1 = (t1 << 2);
            t5 = (t5 + 0x1);
            *(unsigned int *)(((((int)stk + 8) + 0x18) + t1)) = t3;
        }
        t3 = t4;
    }
    *(unsigned short *)(((int)stk + 8)) = 0x0;
    t42 = 0x0;
    t43 = 0x0;
    if ((int)(unsigned short)t5 > 0) {
        t15 = 0x0;
        for (;;) {
            *(int *)((int)stk + 4) = (t15 + (((int)stk + 8) + 0x58));
            *(unsigned int *)(((int)stk + 24)) = (t15 + (((int)stk + 8) + 0x18));
            t16 = *(int *)(((t15 + (((int)stk + 8) + 0x18)) + 0x0));
            *(unsigned int *)(((int)stk + 28)) = t16;
            u17 = (((struct o20_float *)(a4))->v);
            u18 = (((struct o20_float *)(t16))->v);
            u19 = (((struct o28_float *)(a4))->v);
            u20 = (((struct o28_float *)(t16))->v);
            u23 = ((u20 - u19) * (u20 - u19));
            u23 = u23 + ((u18 - u17)) * ((u18 - u17));
            t24 = FUN_0c0df340(u23);
            *(float *)(((int)stk + 0)) = (t24 * 2.0f);
            t26 = *(int *)(((*(int *)(((int)stk + 24))) + 0x0));
            *(unsigned int *)(((int)stk + 20)) = t26;
            t27 = *(int *)((a4 + 0x1C));
            *(unsigned int *)(((int)stk + 12)) = t27;
            u28 = (((struct o20_float *)(t27))->v);
            u30 = (((struct o20_float *)(t26))->v);
            u32 = (((struct o28_float *)((*(int *)(((int)stk + 12)))))->v);
            u33 = (((struct o28_float *)((*(int *)(((int)stk + 20)))))->v);
            (((struct o10_float *)(((int)stk + 0)))->v) = (u33 - u32);
            u36 = ((u33 - u32) * (u33 - u32));
            u36 = u36 + ((u30 - u28)) * ((u30 - u28));
            t37 = FUN_0c0df340(u36);
            u38 = (t24 * 2.0f);
            *(float *)(((t15 + (((int)stk + 8) + 0x58)) + 0x0)) = (u38 - t37);
            t39 = *(short *)(((int)stk + 8));
            *(unsigned short *)(((int)stk + 8)) = (t39 + 0x1);
            t15 = (t15 + 0x4);
            if ((int)(unsigned short)(t39 + 0x1) >= (int)(unsigned short)t5) {
                break;
            }
        }
        t42 = t15;
        t43 = (unsigned short)(t39 + 0x1);
        u51 = (u38 - t37);
    } else {
        t53 = t3;
        t54 = t4;
    }
    t52 = t43;
    t56 = t55;
    t57 = 0x0;
    t58 = 0xC0DF340;
    t59 = a4;
    t60 = t42;
    u61 = u51;
    u63 = f4;
    for (;;) {
        if ((int)(unsigned short)t57 >= (int)(unsigned short)t5) {
            break;
        }
        t54 = t57;
        t60 = (unsigned short)t57;
        t56 = (unsigned short)t54;
        t60 = (t60 << 2);
        t56 = (t56 << 2);
        t52 = (unsigned short)t54;
        t53 = t56;
        t56 = (t56 + (((int)stk + 8) + 0x58));
        *(unsigned int *)(((int)stk + 12)) = (t60 + (((int)stk + 8) + 0x58));
        if ((int)t52 < (int)(unsigned short)t5) {
            for (;;) {
                u61 = (*(float *)((t56 + 0x0)));
                u62 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)));
                t54 = (t54 + 0x1);
                if (u62 > u61) {
                    t58 = t60;
                    t59 = t53;
                    t58 = (t58 + (((int)stk + 8) + 0x58));
                    u62 = (*(float *)((t58 + 0x0)));
                    t59 = (t59 + (((int)stk + 8) + 0x58));
                    u63 = (*(float *)((t59 + 0x0)));
                    *(float *)((t59 + 0x0)) = u62;
                    t59 = t53;
                    *(float *)((t58 + 0x0)) = u63;
                    t58 = t60;
                    t59 = (t59 + (((int)stk + 8) + 0x18));
                    t58 = (t58 + (((int)stk + 8) + 0x18));
                    *(unsigned int *)(((int)stk + 8)) = t59;
                    t52 = (*(int *)((t58 + 0x0)));
                    t59 = (*(int *)((t59 + 0x0)));
                    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = t52;
                    *(unsigned int *)((t58 + 0x0)) = t59;
                }
                t53 = (t53 + 0x4);
                t56 = (t56 + 0x4);
                if ((int)(unsigned short)t54 >= (int)(unsigned short)t5) {
                    break;
                }
            }
        }
        t57 = (t57 + 0x1);
    }
    t75 = *(signed char *)0xC3673EE;
    if ((unsigned short)t5 != 0) {
        t79 = 0x1;
        t80 = (*(int *)(((((int)stk + 8) + 0x18) + 0x0)));
    } else {
        t79 = 0x0;
        t80 = ((((struct o6C_int *)(((short)((short)(unsigned char)t75 * (short)0x254) + 0xC366F40)))->v));
    }
    (((struct o6C_uint *)(((short)((short)(unsigned char)t75 * (short)0x254) + 0xC366F40)))->v) = t80;
    t82 = *(signed char *)0xC3673EE;
    u84 = (((struct o20_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t82 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o60_float *)(((short)((short)(unsigned char)t82 * (short)0x254) + 0xC366F40)))->v) = u84;
    t85 = *(signed char *)0xC3673EE;
    u87 = (((struct o24_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t85 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o64_float *)(((short)((short)(unsigned char)t85 * (short)0x254) + 0xC366F40)))->v) = u87;
    t88 = *(signed char *)0xC3673EE;
    u90 = (((struct o28_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t88 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o68_float *)(((short)((short)(unsigned char)t88 * (short)0x254) + 0xC366F40)))->v) = u90;
    (((struct o26_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = t79;
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t94 = FUN_0c04cdf2();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t94;
}
