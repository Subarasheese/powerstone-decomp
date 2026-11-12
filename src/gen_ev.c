/* Straight-line functions with calls and guards (batch gen_ev): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o14_short { char p[0x14]; short v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o308_float { char p[0x308]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oA_short { char p[0xA]; short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c01c75e(int);
int FUN_0c01c7c4(int);
int FUN_0c01c80a(int);
int FUN_0c01c850(int, int);
int FUN_0c01c99e(int, int);
int FUN_0c01cab6(int);
int FUN_0c01cb1e(int);
int FUN_0c01cb86(int);
int FUN_0c01d0ec(int);
int FUN_0c01d1ce(int, int);
int FUN_0c01d226(void);
int FUN_0c01e7a2(void);
int FUN_0c01ea20(int, int, int, int);
int FUN_0c02e00a(int);
int FUN_0c02e092(int);
int FUN_0c02e144(int, float, float);
int FUN_0c02e2da(int);
int FUN_0c0555dc(void);
int FUN_0c058f4e(void);
int FUN_0c059330(int, int, int, int);
int FUN_0c05f2d4(int, int);
int FUN_0c060c88(int);
int FUN_0c06231c(int, int, int);
int FUN_0c0a1d88(int, int);
int FUN_0c0a3688(void);
int FUN_0c0a3796(int, int);
int FUN_0c0c67c4(int);
int FUN_0c0c681a(int);
int FUN_0c0c688a(int, float);
int FUN_0c0c68cc(int, int);
int FUN_0c0c69e8(int);
int FUN_0c0d71f4(int);
int FUN_0c0d8f10(int, int, int);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e6f24(int);
int FUN_0c036b3c(int a4);
int FUN_0c01cbd4(int a4, int a5, int a6, int a7);
int FUN_0c048ea8(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c0c6a88(int a4, int a5, int a6, int a7);
int FUN_0c02e438(int a4, int a5, int a6, int a7, float f4, float f5);

int FUN_0c036b3c(int a4)
{
    int stk[7];

    register int R1;
    register int R2;
    register int R7;
    register float F1;
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
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    v0_3 = a4;
    v0_4 = (FUN_0c0555dc()) == 0;
    v0_1 = (0x0);
    v0_0 = (v0_3);
    v0_2 = ((0x308 + v0_3));
    if (v0_4) goto L_C036B6A;
    *(unsigned char *)((v0_0 + 0x8)) = 0x3;
    L_C036B6A:;
    v0_4 = *(signed char *)((v0_0 + 0x8));
    v0_5 = (v0_4);
    v0_6 = (0x168);
    v0_6 = (0xC0DF940);
    w0_0 = (255.0f);
    w0_1 = (655360.0f);
    w0_2 = (360.0f);
    if ((v0_4 == 0)) goto L_C036BC8;
    if (!((v0_5 != 1))) goto L_C036CE6;
    if ((v0_5 != 2)) goto L_C036B90;
    goto L_C036F96;
    L_C036CE6:;
    (((struct o20_float *)(v0_0))->v) = ((((struct o20_float *)((*(int *)((v0_0 + 0x1C)))))->v));
    (((struct o24_float *)(v0_0))->v) = ((((struct o24_float *)((*(int *)((v0_0 + 0x1C)))))->v));
    (((struct o28_float *)(v0_0))->v) = ((((struct o28_float *)((*(int *)((v0_0 + 0x1C)))))->v));
    if (((*(signed char *)((0x71BA + (*(int *)(((*(int *)((v0_0 + 0x1C))) + 0x1C)))))) == 11)) goto L_C036D10;
    (((struct oF0_ushort *)(v0_0))->v) = 0x1;
    L_C036D10:;
    if (((int)(*(signed char *)(((*(int *)(((*(int *)((v0_0 + 0x1C))) + 0x1C))) + 0xB))) <= (int)0x2)) goto L_C036D22;
    (((struct oF0_ushort *)(v0_0))->v) = 0x1;
    L_C036D22:;
    v0_3 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_3 - 1);
    v0_6 = ((v0_3 - 1));
    if (((short)v0_6 != 0)) goto L_C036D64;
    if ((((((struct oF0_short *)(v0_0))->v)) == 0)) goto L_C036D64;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_5 = ((v0_1 + 0x1));
    L_C036FB6:;
    return v0_5;
    L_C036D64:;
    v0_5 = (0xEC);
    v0_3 = (v0_2);
    if ((((((struct oEC_short *)(v0_0))->v)) != 0)) goto L_C036D72;
    *(unsigned short *)((v0_0 + v0_5)) = 0x1E;
    L_C036D72:;
    *(unsigned int *)(((int)stk + 16)) = v0_3;
    *(unsigned int *)(((int)stk + 12)) = v0_3;
    *(unsigned int *)(((int)stk + 20)) = v0_3;
    *(float *)(((int)stk + 24)) = 1000.0f;
    v0_4 = (0x14000);
    w0_3 = (60.0f);
    L_C036D86:;
    v0_6 = *(signed char *)(((v0_2 + v0_1) + 0x0));
    *(unsigned char *)(((v0_2 + v0_1) + 0x0)) = (v0_6 - 1);
    v0_5 = ((v0_1 << 2));
    if (((signed char)(v0_6 - 1) != 0)) goto L_C036E32;
    v0_6 = *(int *)((((0x2E0 + v0_0) + v0_5) + 0x0));
    *(int *)((int)stk + 4) = (0x10 + v0_6);
    w0_6 = FUN_0c0df940();
    *(unsigned int *)(((int)stk + 4)) = (0x10 + v0_6);
    w0_5 = (2.14748365e+09f);
    w0_4 = ((w0_6 * w0_0));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_6 * w0_0))) goto L_C036DBC;
    w0_4 = ((w0_4 - (w0_5 + w0_5)));
    L_C036DBC:;
    v0_6 = FUN_0c0e6f24(v0_3);
    w0_4 = ((float)v0_6);
    FPUL_ = (v0_6);
    if (((int)v0_6 >= 0)) goto L_C036DDA;
    w0_4 = ((w0_4 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C036DDA:;
    *(unsigned int *)(((*(int *)((int)stk + 4)) + 0x0)) = (int)((w0_4 * w0_1) / w0_2);
    v0_6 = *(int *)((((0x2E0 + v0_0) + v0_5) + 0x0));
    *(int *)((int)stk + 4) = (0x14 + v0_6);
    w0_6 = FUN_0c0df940();
    *(unsigned int *)(((int)stk + 4)) = (0x14 + v0_6);
    w0_5 = (2.14748365e+09f);
    w0_4 = ((w0_6 * w0_0));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_6 * w0_0))) goto L_C036E08;
    w0_4 = ((w0_4 - (w0_5 + w0_5)));
    L_C036E08:;
    v0_6 = FUN_0c0e6f24(v0_3);
    w0_4 = ((float)v0_6);
    FPUL_ = (v0_6);
    if (((int)v0_6 >= 0)) goto L_C036E26;
    w0_4 = ((w0_4 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C036E26:;
    *(unsigned int *)(((*(int *)((int)stk + 4)) + 0x0)) = (int)((w0_4 * w0_1) / w0_2);
    FPUL_ = ((int)((w0_4 * w0_1) / w0_2));
    L_C036E32:;
    if (((*(signed char *)(((v0_2 + v0_1) + 0x0))) != 0)) goto L_C036E44;
    *(unsigned char *)(((v0_2 + v0_1) + 0x0)) = 0x1E;
    L_C036E44:;
    (((struct o24_float *)((*(int *)((((0x2E0 + v0_0) + v0_5) + 0x0)))))->v) = ((float)(*(signed char *)(((v0_2 + v0_1) + 0x0))) / w0_3);
    v0_6 = *(int *)((((0x2E0 + v0_0) + v0_5) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = v0_6;
    *(int *)((int)stk + 4) = (0x4 + v0_6);
    v0_7 = *(signed char *)(((*(int *)(((int)stk + 20))) + 0x0));
    w0_4 = (((struct o50_float *)((*(int *)((v0_0 + 0x1C)))))->v);
    *(float *)(((int)stk + 0)) = (((float)v0_7 / w0_3) + w0_4);
    w0_5 = FUN_0c0dfa50(((-(*(int *)(((*(int *)(((int)stk + 8))) + 0x10)))) + v0_4));
    *(float *)(((int)stk + 0)) = ((((float)v0_7 / w0_3) + w0_4) * w0_5);
    w0_4 = ((((float)v0_7 / w0_3) + w0_4) * w0_5);
    w0_4 = (w0_4 * (FUN_0c0df4d0(((-(*(int *)(((*(int *)((((0x2E0 + v0_0) + v0_5) + 0x0))) + 0x14)))) + v0_4))));
    (((struct o4_float *)(v0_6))->v) = (-(w0_4 * 1000.0f));
    v0_6 = *(int *)((((0x2E0 + v0_0) + v0_5) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = v0_6;
    v0_6 = ((0x8 + v0_6));
    v0_6 = v0_6;
    *(int *)((int)stk + 4) = v0_6;
    v0_7 = *(signed char *)(((*(int *)(((int)stk + 12))) + 0x0));
    w0_4 = (((struct o54_float *)((*(int *)((v0_0 + 0x1C)))))->v);
    w0_5 = *(float *)(((int)stk + 24));
    *(float *)(((int)stk + 0)) = (w0_5 * (((float)v0_7 / w0_3) + w0_4));
    w0_4 = (w0_5 * (((float)v0_7 / w0_3) + w0_4));
    *(float *)((v0_6 + 0x0)) = (w0_4 * (FUN_0c0df4d0(((-(*(int *)(((*(int *)(((int)stk + 8))) + 0x10)))) + v0_4))));
    v0_6 = *(int *)((((0x2E0 + v0_0) + v0_5) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = v0_6;
    *(int *)((int)stk + 4) = (0xC + v0_6);
    v0_7 = *(signed char *)(((*(int *)(((int)stk + 16))) + 0x0));
    w0_5 = (((struct o58_float *)((*(int *)((v0_0 + 0x1C)))))->v);
    *(float *)(((int)stk + 0)) = (((float)v0_7 / w0_3) + w0_5);
    w0_6 = FUN_0c0dfa50(((-(*(int *)(((*(int *)(((int)stk + 8))) + 0x10)))) + v0_4));
    *(float *)(((int)stk + 0)) = ((((float)v0_7 / w0_3) + w0_5) * w0_6);
    w0_4 = FUN_0c0dfa50(((-(*(int *)(((*(int *)((((0x2E0 + v0_0) + v0_5) + 0x0))) + 0x14)))) + v0_4));
    w0_5 = ((((float)v0_7 / w0_3) + w0_5) * w0_6);
    w0_5 = (w0_5 * w0_4);
    (((struct oC_float *)(v0_6))->v) = (-(w0_5 * 1000.0f));
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    v0_6 = (int)(v0_1 + 0x1) >= (int)0xA;
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
    v0_5 = (0xC036FDC);
    v0_1 = ((v0_1 + 0x1));
    w0_4 = (w0_4);
    if (v0_6) goto L_C036F92;
    goto L_C036D86;
    L_C036F92:;
    goto L_C036FB6;
    L_C036F96:;
    return FUN_0c059330(v0_0, 0x0, 0x0, R7);
    L_C036B90:;
    if ((v0_5 != 3)) goto L_C036B98;
    goto L_C036F96;
    L_C036B98:;
    goto L_C036FB6;
    L_C036BC8:;
    v0_5 = (v0_1);
    w0_3 = (0.099999994f);
    L_C036BCE:;
    v0_4 = *(int *)((((0x2E0 + v0_0) + (v0_5 << 2)) + 0x0));
    *(int *)((int)stk + 4) = (0x10 + v0_4);
    w0_6 = FUN_0c0df940();
    *(unsigned int *)(((int)stk + 4)) = (0x10 + v0_4);
    v0_4 = ((v0_5 << 2));
    w0_5 = (2.14748365e+09f);
    w0_4 = ((w0_6 * w0_0));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_6 * w0_0))) goto L_C036BF4;
    w0_4 = ((w0_4 - (w0_5 + w0_5)));
    L_C036BF4:;
    v0_6 = FUN_0c0e6f24(v0_3);
    w0_4 = ((float)v0_6);
    FPUL_ = (v0_6);
    if (((int)v0_6 >= 0)) goto L_C036C12;
    w0_4 = ((w0_4 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C036C12:;
    *(unsigned int *)(((*(int *)((int)stk + 4)) + 0x0)) = (int)((w0_4 * w0_1) / w0_2);
    v0_6 = *(int *)((((0x2E0 + v0_0) + v0_4) + 0x0));
    *(int *)((int)stk + 4) = (0x14 + v0_6);
    w0_6 = FUN_0c0df940();
    *(unsigned int *)(((int)stk + 4)) = (0x14 + v0_6);
    w0_5 = (2.14748365e+09f);
    w0_4 = ((w0_6 * w0_0));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_6 * w0_0))) goto L_C036C40;
    w0_4 = ((w0_4 - (w0_5 + w0_5)));
    L_C036C40:;
    v0_6 = FUN_0c0e6f24(v0_3);
    w0_4 = ((float)v0_6);
    FPUL_ = (v0_6);
    if (((int)v0_6 >= 0)) goto L_C036C5E;
    w0_4 = ((w0_4 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C036C5E:;
    *(unsigned int *)(((*(int *)((int)stk + 4)) + 0x0)) = (int)((w0_4 * w0_1) / w0_2);
    *(unsigned int *)(((*(int *)((((0x2E0 + v0_0) + v0_4) + 0x0))) + 0x18)) = v0_1;
    (((struct o1C_float *)((*(int *)((((0x2E0 + v0_0) + v0_4) + 0x0)))))->v) = w0_3;
    (((struct o20_float *)((*(int *)((((0x2E0 + v0_0) + v0_4) + 0x0)))))->v) = w0_3;
    (((struct o24_float *)((*(int *)(((v0_4 + (0x2E0 + v0_0)) + 0x0)))))->v) = 0.0f;
    v0_4 = *(signed char *)((v0_0 + 0xF2));
    *(unsigned char *)(((v0_2 + v0_5) + 0x0)) = (((((v0_4 << 2) + v0_4) << 1) + v0_5) + 0x14);
    v0_4 = (int)(v0_5 + 0x1) < (int)0xA;
    v0_5 = ((v0_5 + 0x1));
    FPUL_ = ((int)((w0_4 * w0_1) / w0_2));
    if (v0_4) goto L_C036BCE;
    (((struct o105_uchar *)(v0_0))->v) = 0x1;
    (((struct o106_uchar *)(v0_0))->v) = 0x1;
    (((struct o107_uchar *)(v0_0))->v) = 0x1;
    v0_3 = (((struct oF2_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = ((((v0_3 << 2) + v0_3) << 1) + 0x32);
    (((struct oF0_ushort *)(v0_0))->v) = v0_1;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C036CE6;
}

int FUN_0c01cbd4(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t5;
    register int t10;
    register int t12;
    register int t14;
    int t15;
    register int t22;
    int t23;
    register int t25;
    register int t26;
    register int t27;
    register int t34;
    register int t35;
    register int t36;
    register int t37;
    register int t38;
    register int t45;
    register int t46;
    register int t47;
    register int t48;
    register int t49;
    register int t53;
    register int t54;
    register int t55;
    register int t57;
    register int t60;
    register int t62;
    register int t65;
    register int t74;
    register int t77;
    register int t79;
    register int t82;
    register int t85;
    register int t86;
    register int t88;
    register int t90;
    register int t92;
    int t96;
    register int t105;
    register int t108;
    register int t116;
    register int t120;
    register int t124;
    register int t130;
    register int t132;
    register int t134;
    register int t136;
    int t140;
    register int t149;
    register int t152;
    register int t160;
    register int t164;
    register int t168;
    register int t183;
    register int t190;
    register int t192;
    register int t194;
    int t195;
    register int t202;
    int t203;
    register int t205;
    register int t206;
    register int t207;
    register int t214;
    register int t215;
    register int t216;
    register int t217;
    register int t218;
    register int t225;
    register int t226;
    register int t227;
    register int t228;
    register int t229;
    register int t233;
    register int t234;
    register int t235;
    register int t237;
    register int t240;
    register int t242;
    register int t245;
    register int t254;
    register int t257;
    register int t259;
    register int t262;
    register int t265;
    register int t266;
    register int t268;
    register int t270;
    register int t272;
    int t276;
    register int t285;
    register int t288;
    register int t296;
    register int t300;
    register int t304;
    register int t310;
    register int t312;
    register int t314;
    register int t316;
    int t320;
    register int t329;
    register int t332;
    register int t340;
    register int t344;
    register int t348;

    if ((*(signed char *)0xC7F300B) != 0) {
        return 0x12B;
    }
    if ((*(signed char *)0xC7F300E) != 0) {
        return 0x12E;
    }
    t5 = *(signed char *)0xC362360;
    if ((unsigned char)t5 != 0) {
        if ((unsigned char)t5 != 1) {
            return ((int (*)(int, int, int, int))(0xC01D05C))(0xC362360, a5, a6, a7);
        }
        if (((((struct oA_short *)0xC362360)->v)) != 0) {
            (((struct oA_ushort *)0xC362360)->v) = (((((struct oA_short *)0xC362360)->v)) - 1);
        }
        t10 = *(signed char *)0xC362361;
        if ((unsigned char)t10 != 0) {
            if ((unsigned char)t10 == 1) {
                t12 = *(signed char *)0xC362362;
                if ((unsigned char)t12 != 0) {
                    if ((unsigned char)t12 != 1) {
                        return ((int (*)(int, int, int, int))(0xC01D062))(0xC362366, 0x1E, a6, a7);
                    }
                    (((struct oC_float *)0xC362360)->v) = (((((struct oC_float *)0xC362360)->v)) + -0.0333333313f);
                    t14 = (((struct o6_short *)0xC362360)->v);
                    (((struct o6_ushort *)0xC362360)->v) = (t14 - 1);
                    if ((int)(short)(t14 - 1) >= 0) {
                        return ((int (*)(int, int, int, int))(0xC01D062))(0xC362366, 0x1E, a6, a7);
                    }
                    (((struct oC_float *)0xC362360)->v) = 0.0f;
                    t15 = *(signed char *)0xC7F473E;
                    if (t15 != 4) {
                        if (t15 != 5) {
                            if ((t15 != 12) && ((t15 != 13) && (t15 != 14))) {
                                (((struct o0_uchar *)0xC362360)->v) = 0x2;
                                return ((int (*)(int, int, int, int))(0xC01D062))(0xC362366, 0x1E, a6, a7);
                            }
                            (((struct o19_uchar *)0xC7F4726)->v) = ((*(signed char *)0xC7F473E) - 12);
                        } else {
                            (((struct o19_uchar *)0xC7F4726)->v) = 0x6;
                        }
                    } else {
                        (((struct o19_uchar *)0xC7F4726)->v) = 0x5;
                    }
                    (((struct o0_uchar *)0xC7F4726)->v) = 0x3;
                    return ((int (*)(int, int, int, int))(0xC01D062))(0xC362366, 0x1E, a6, a7);
                }
                (((struct oC_float *)0xC362360)->v) = 1.0f;
                (((struct o6_ushort *)0xC362360)->v) = 0x1E;
                FUN_0c01c850(0x1, (*(signed char *)0xC7F473E));
                FUN_0c01cab6(0x1);
                (((struct o2_uchar *)0xC362360)->v) = ((*(signed char *)0xC362362) + 0x1);
                (((struct oC_float *)0xC362360)->v) = (((((struct oC_float *)0xC362360)->v)) + -0.0333333313f);
                t22 = (((struct o6_short *)0xC362360)->v);
                (((struct o6_ushort *)0xC362360)->v) = (t22 - 1);
                if ((int)(short)(t22 - 1) >= 0) {
                    return ((int (*)(void))(0xC01D062))();
                }
                (((struct oC_float *)0xC362360)->v) = 0.0f;
                t23 = *(signed char *)0xC7F473E;
                if (t23 != 4) {
                    if (t23 != 5) {
                        if ((t23 != 12) && ((t23 != 13) && (t23 != 14))) {
                            (((struct o0_uchar *)0xC362360)->v) = 0x2;
                            return ((int (*)(void))(0xC01D062))();
                        }
                        (((struct o19_uchar *)0xC7F4726)->v) = ((*(signed char *)0xC7F473E) - 12);
                    } else {
                        (((struct o19_uchar *)0xC7F4726)->v) = 0x6;
                    }
                } else {
                    (((struct o19_uchar *)0xC7F4726)->v) = 0x5;
                }
                (((struct o0_uchar *)0xC7F4726)->v) = 0x3;
                return ((int (*)(void))(0xC01D062))();
            }
            if ((unsigned char)t10 == 2) {
                t25 = *(signed char *)0xC362362;
                if ((unsigned char)t25 != 0) {
                    if ((unsigned char)t25 != 1) {
                        return ((int (*)(int, int, int, int))(0xC01D062))(0xC362366, 0x1E, a6, a7);
                    }
                    t26 = FUN_0c01d1ce(0x2, 0x2);
                    if ((signed char)t26 == 0) {
                        t27 = (((struct o6_short *)0xC362360)->v);
                        (((struct o6_ushort *)0xC362360)->v) = (t27 - 1);
                        if ((int)(short)(t27 - 1) >= 0) {
                            return ((int (*)(void))(0xC01D062))();
                        }
                        return ((int (*)(void))(0xC01D04E))();
                    }
                } else {
                    (((struct o6_ushort *)0xC362360)->v) = 0x1E;
                    FUN_0c01c850(0x2, (*(signed char *)0xC7F473E));
                    FUN_0c01c99e(0x2, (*(signed char *)0xC362370));
                    FUN_0c0a3796(0x0, 0x4F);
                    (((struct o2_uchar *)0xC362360)->v) = ((*(signed char *)0xC362362) + 0x1);
                    t34 = FUN_0c01d1ce(0x2, 0x2);
                    if ((signed char)t34 == 0) {
                        t35 = (((struct o6_short *)0xC362360)->v);
                        (((struct o6_ushort *)0xC362360)->v) = (t35 - 1);
                        if ((int)(short)(t35 - 1) >= 0) {
                            return ((int (*)(void))(0xC01D062))();
                        }
                        return ((int (*)(void))(0xC01D04E))();
                    }
                }
                (((struct o0_uchar *)0xC362360)->v) = 0x2;
                return ((int (*)(void))(0xC01D062))();
            }
            if ((unsigned char)t10 == 3) {
                t36 = *(signed char *)0xC362362;
                if ((unsigned char)t36 != 0) {
                    if ((unsigned char)t36 != 1) {
                        return ((int (*)(int, int, int, int))(0xC01D062))(0xC362366, 0x1E, a6, a7);
                    }
                    t37 = FUN_0c01d1ce(0x2, 0x2);
                    if ((signed char)t37 == 0) {
                        t38 = (((struct o6_short *)0xC362360)->v);
                        (((struct o6_ushort *)0xC362360)->v) = (t38 - 1);
                        if ((int)(short)(t38 - 1) >= 0) {
                            return ((int (*)(void))(0xC01D062))();
                        }
                        return ((int (*)(void))(0xC01D04E))();
                    }
                } else {
                    (((struct o6_ushort *)0xC362360)->v) = 0x1E;
                    FUN_0c01c850(0x3, (*(signed char *)0xC362370));
                    FUN_0c01c99e(0x3, (*(signed char *)0xC7F473E));
                    FUN_0c0a3796(0x0, 0x4F);
                    (((struct o2_uchar *)0xC362360)->v) = ((*(signed char *)0xC362362) + 0x1);
                    t45 = FUN_0c01d1ce(0x2, 0x2);
                    if ((signed char)t45 == 0) {
                        t46 = (((struct o6_short *)0xC362360)->v);
                        (((struct o6_ushort *)0xC362360)->v) = (t46 - 1);
                        if ((int)(short)(t46 - 1) >= 0) {
                            return ((int (*)(void))(0xC01D062))();
                        }
                        return ((int (*)(void))(0xC01D04E))();
                    }
                }
                (((struct o0_uchar *)0xC362360)->v) = 0x2;
                return ((int (*)(void))(0xC01D062))();
            }
            if ((unsigned char)t10 == 4) {
                t47 = *(signed char *)0xC362362;
                if ((unsigned char)t47 != 0) {
                    if ((unsigned char)t47 != 1) {
                        return ((int (*)(int, int, int, int))(0xC01D062))(0xC362366, 0x1E, a6, a7);
                    }
                    t48 = FUN_0c01d1ce(0x2, 0x2);
                    if ((signed char)t48 != 0) {
                        (((struct o0_uchar *)0xC362360)->v) = 0x2;
                        return ((int (*)(void))(0xC01D062))();
                    }
                    t49 = (((struct o6_short *)0xC362360)->v);
                    (((struct o6_ushort *)0xC362360)->v) = (t49 - 1);
                    if ((int)(short)(t49 - 1) < 0) {
                        (((struct o1_uchar *)0xC362360)->v) = 0x2;
                        return ((int (*)(void))(0xC01D054))();
                    }
                    return ((int (*)(void))(0xC01D062))();
                }
                (((struct o6_ushort *)0xC362360)->v) = 0x5;
                FUN_0c01c850(0x4, (*(signed char *)0xC362370));
                (((struct o2_uchar *)0xC362360)->v) = ((*(signed char *)0xC362362) + 0x1);
                t53 = FUN_0c01d1ce(0x2, 0x2);
                if ((signed char)t53 != 0) {
                    (((struct o0_uchar *)0xC362360)->v) = 0x2;
                    return ((int (*)(void))(0xC01D062))();
                }
                t54 = (((struct o6_short *)0xC362360)->v);
                (((struct o6_ushort *)0xC362360)->v) = (t54 - 1);
                if ((int)(short)(t54 - 1) < 0) {
                    (((struct o1_uchar *)0xC362360)->v) = 0x2;
                    return ((int (*)(void))(0xC01D054))();
                }
                return ((int (*)(void))(0xC01D062))();
            }
            if ((unsigned char)t10 == 5) {
                t55 = *(signed char *)0xC362362;
                if ((unsigned char)t55 != 0) {
                    if ((unsigned char)t55 != 1) {
                        return ((int (*)(int, int, int, int))(0xC01D062))(0xC362366, 0x1E, a6, a7);
                    }
                    t57 = FUN_0c01ea20((*(signed char *)0xC362371), 0x1E, a6, a7);
                    if ((unsigned char)t57 != 0) {
                        if ((unsigned char)t57 != 1) {
                            if ((unsigned char)t57 != 2) {
                                return ((int (*)(void))(0xC01D062))();
                            }
                            return ((int (*)(void))(0xC01D048))();
                        }
                        t60 = *(signed char *)0xC362363;
                        if ((unsigned char)t60 != 0) {
                            if ((unsigned char)t60 != 1) {
                                return ((int (*)(void))(0xC01D062))();
                            }
                            return ((int (*)(void))(0xC01D062))();
                        }
                        t62 = 0x0;
                        for (;;) {
                            if ((int)t62 >= (int)0x6) {
                                break;
                            }
                            FUN_0c01c7c4(t62);
                            t62 = (t62 + 0x1);
                        }
                        t65 = 0x0;
                        for (;;) {
                            if ((int)t65 >= (int)0x3) {
                                break;
                            }
                            FUN_0c01c80a(t65);
                            t65 = (t65 + 0x1);
                        }
                        (((struct o3_uchar *)0xC362360)->v) = ((*(signed char *)0xC362363) + 0x1);
                        return ((int (*)(void))(0xC01D062))();
                    }
                    return ((int (*)(void))(0xC01D062))();
                }
                FUN_0c01c850(0x5, (*(signed char *)0xC7F473E));
                (((struct o11_uchar *)0xC362360)->v) = ((*(signed char *)0xC7F473E) + 0xFA);
                FUN_0c01e7a2();
                (((struct o3_uchar *)0xC362360)->v) = 0x0;
                (((struct o2_uchar *)0xC362360)->v) = ((*(signed char *)0xC362362) + 0x1);
                t74 = FUN_0c01ea20((*(signed char *)0xC362371), 0x0, 0x0, 0x0);
                if ((unsigned char)t74 != 0) {
                    if ((unsigned char)t74 != 1) {
                        if ((unsigned char)t74 != 2) {
                            return ((int (*)(void))(0xC01D062))();
                        }
                        return ((int (*)(void))(0xC01D048))();
                    }
                    t77 = *(signed char *)0xC362363;
                    if ((unsigned char)t77 != 0) {
                        if ((unsigned char)t77 != 1) {
                            return ((int (*)(void))(0xC01D062))();
                        }
                        return ((int (*)(void))(0xC01D062))();
                    }
                    t79 = 0x0;
                    for (;;) {
                        if ((int)t79 >= (int)0x6) {
                            break;
                        }
                        FUN_0c01c7c4(t79);
                        t79 = (t79 + 0x1);
                    }
                    t82 = 0x0;
                    for (;;) {
                        if ((int)t82 >= (int)0x3) {
                            break;
                        }
                        FUN_0c01c80a(t82);
                        t82 = (t82 + 0x1);
                    }
                    (((struct o3_uchar *)0xC362360)->v) = ((*(signed char *)0xC362363) + 0x1);
                    return ((int (*)(void))(0xC01D062))();
                }
                return ((int (*)(void))(0xC01D062))();
            }
            return ((int (*)(int, int, int, int))(0xC01D062))(0xC362366, 0x1E, a6, a7);
        }
        t85 = *(signed char *)0xC362362;
        if ((unsigned char)t85 != 0) {
            if ((unsigned char)t85 != 1) {
                return ((int (*)(int, int, int, int))(0xC01D062))(0xC362366, 0x1E, a6, a7);
            }
            t86 = FUN_0c01d1ce(0x2, 0x2);
            if ((signed char)t86 != 0) {
                FUN_0c0a3796(0x0, 0x4D);
                (((struct o0_uchar *)0xC362360)->v) = 0x2;
                return ((int (*)(void))(0xC01D062))();
            }
            t88 = FUN_0c01d1ce(0x2, 0x4);
            if ((signed char)t88 != 0) {
                t90 = FUN_0c01d226();
                if ((signed char)t90 != 0) {
                    t92 = FUN_0c01d0ec((*(signed char *)0xC7F473E));
                    if ((signed char)t92 != 0) {
                        t96 = *(signed char *)0xC7F473E;
                        if ((t96 != 4) && (t96 != 5)) {
                            if ((t96 != 6) && ((t96 != 7) && (t96 != 8))) {
                                if (t96 != 12) {
                                    if ((t96 != 13) && (t96 != 14)) {
                                        FUN_0c0a3796(0x0, 0x4E);
                                        return ((int (*)(void))(0xC01D062))();
                                    }
                                    FUN_0c01cb86(0x3C);
                                }
                                FUN_0c0a3796(0x0, 0x4D);
                                (((struct o1_uchar *)0xC362360)->v) = 0x1;
                            } else {
                                FUN_0c0a3796(0x0, 0x4D);
                                (((struct o1_uchar *)0xC362360)->v) = 0x5;
                            }
                        } else {
                            t105 = 0x0;
                            if (((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x4) != 0) {
                                t105 = 0x1;
                            }
                            t108 = t105;
                            if (((unsigned short)((((struct o14_short *)0xC361BFC)->v)) & 0x4) != 0) {
                                t108 = (t105 | 0x2);
                            }
                            FUN_0c0d71f4(t108);
                            FUN_0c01cb86(0x3C);
                            FUN_0c0a3796(0x0, 0x4D);
                            (((struct o1_uchar *)0xC362360)->v) = 0x1;
                        }
                        (((struct o2_uchar *)0xC362360)->v) = 0x0;
                        return ((int (*)(void))(0xC01D062))();
                    }
                }
                FUN_0c0a3796(0x0, 0x4E);
                return ((int (*)(void))(0xC01D062))();
            }
            if ((int)(*(signed char *)0xC7F473E) < (int)0xE) {
                t116 = FUN_0c01d1ce(0x0, 0x80);
                if ((signed char)t116 != 0) {
                    (((struct o10_uchar *)0xC362360)->v) = (*(signed char *)0xC7F473E);
                    (((struct o18_uchar *)0xC7F4726)->v) = ((*(signed char *)0xC7F473E) + 0x1);
                    (((struct o1_uchar *)0xC362360)->v) = 0x4;
                } else {
                    if ((int)(*(signed char *)0xC7F473E) <= 0) {
                        return ((int (*)(void))(0xC01D062))();
                    }
                    t120 = FUN_0c01d1ce(0x0, 0x40);
                    if ((signed char)t120 == 0) {
                        return ((int (*)(void))(0xC01D062))();
                    }
                    (((struct o10_uchar *)0xC362360)->v) = (*(signed char *)0xC7F473E);
                    (((struct o18_uchar *)0xC7F4726)->v) = ((*(signed char *)0xC7F473E) - 1);
                    (((struct o1_uchar *)0xC362360)->v) = 0x3;
                }
            } else {
                if ((int)(*(signed char *)0xC7F473E) <= 0) {
                    return ((int (*)(void))(0xC01D062))();
                }
                t124 = FUN_0c01d1ce(0x0, 0x40);
                if ((signed char)t124 == 0) {
                    return ((int (*)(void))(0xC01D062))();
                }
                (((struct o10_uchar *)0xC362360)->v) = (*(signed char *)0xC7F473E);
                (((struct o18_uchar *)0xC7F4726)->v) = ((*(signed char *)0xC7F473E) - 1);
                (((struct o1_uchar *)0xC362360)->v) = 0x3;
            }
        } else {
            FUN_0c01c850(0x0, (*(signed char *)0xC7F473E));
            (((struct o2_uchar *)0xC362360)->v) = ((*(signed char *)0xC362362) + 0x1);
            t130 = FUN_0c01d1ce(0x2, 0x2);
            if ((signed char)t130 != 0) {
                FUN_0c0a3796(0x0, 0x4D);
                (((struct o0_uchar *)0xC362360)->v) = 0x2;
                return ((int (*)(void))(0xC01D062))();
            }
            t132 = FUN_0c01d1ce(0x2, 0x4);
            if ((signed char)t132 != 0) {
                t134 = FUN_0c01d226();
                if ((signed char)t134 != 0) {
                    t136 = FUN_0c01d0ec((*(signed char *)0xC7F473E));
                    if ((signed char)t136 != 0) {
                        t140 = *(signed char *)0xC7F473E;
                        if ((t140 != 4) && (t140 != 5)) {
                            if ((t140 != 6) && ((t140 != 7) && (t140 != 8))) {
                                if (t140 != 12) {
                                    if ((t140 != 13) && (t140 != 14)) {
                                        FUN_0c0a3796(0x0, 0x4E);
                                        return ((int (*)(void))(0xC01D062))();
                                    }
                                    FUN_0c01cb86(0x3C);
                                }
                                FUN_0c0a3796(0x0, 0x4D);
                                (((struct o1_uchar *)0xC362360)->v) = 0x1;
                            } else {
                                FUN_0c0a3796(0x0, 0x4D);
                                (((struct o1_uchar *)0xC362360)->v) = 0x5;
                            }
                        } else {
                            t149 = 0x0;
                            if (((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x4) != 0) {
                                t149 = 0x1;
                            }
                            t152 = t149;
                            if (((unsigned short)((((struct o14_short *)0xC361BFC)->v)) & 0x4) != 0) {
                                t152 = (t149 | 0x2);
                            }
                            FUN_0c0d71f4(t152);
                            FUN_0c01cb86(0x3C);
                            FUN_0c0a3796(0x0, 0x4D);
                            (((struct o1_uchar *)0xC362360)->v) = 0x1;
                        }
                        (((struct o2_uchar *)0xC362360)->v) = 0x0;
                        return ((int (*)(void))(0xC01D062))();
                    }
                }
                FUN_0c0a3796(0x0, 0x4E);
                return ((int (*)(void))(0xC01D062))();
            }
            if ((int)(*(signed char *)0xC7F473E) < (int)0xE) {
                t160 = FUN_0c01d1ce(0x0, 0x80);
                if ((signed char)t160 != 0) {
                    (((struct o10_uchar *)0xC362360)->v) = (*(signed char *)0xC7F473E);
                    (((struct o18_uchar *)0xC7F4726)->v) = ((*(signed char *)0xC7F473E) + 0x1);
                    (((struct o1_uchar *)0xC362360)->v) = 0x4;
                } else {
                    if ((int)(*(signed char *)0xC7F473E) <= 0) {
                        return ((int (*)(void))(0xC01D062))();
                    }
                    t164 = FUN_0c01d1ce(0x0, 0x40);
                    if ((signed char)t164 == 0) {
                        return ((int (*)(void))(0xC01D062))();
                    }
                    (((struct o10_uchar *)0xC362360)->v) = (*(signed char *)0xC7F473E);
                    (((struct o18_uchar *)0xC7F4726)->v) = ((*(signed char *)0xC7F473E) - 1);
                    (((struct o1_uchar *)0xC362360)->v) = 0x3;
                }
            } else {
                if ((int)(*(signed char *)0xC7F473E) <= 0) {
                    return ((int (*)(void))(0xC01D062))();
                }
                t168 = FUN_0c01d1ce(0x0, 0x40);
                if ((signed char)t168 == 0) {
                    return ((int (*)(void))(0xC01D062))();
                }
                (((struct o10_uchar *)0xC362360)->v) = (*(signed char *)0xC7F473E);
                (((struct o18_uchar *)0xC7F4726)->v) = ((*(signed char *)0xC7F473E) - 1);
                (((struct o1_uchar *)0xC362360)->v) = 0x3;
            }
        }
    } else {
        (((struct o0_uchar *)0xC362360)->v) = ((*(signed char *)0xC362360) + 0x1);
        (((struct o1_uchar *)0xC362360)->v) = 0x0;
        (((struct o2_uchar *)0xC362360)->v) = 0x0;
        (((struct o8_ushort *)0xC362360)->v) = 0x0;
        (((struct oA_ushort *)0xC362360)->v) = 0x0;
        (((struct oC_float *)0xC362360)->v) = 1.0f;
        (((struct o10_uchar *)0xC362360)->v) = 0x63;
        (((struct o12_uchar *)0xC362360)->v) = 0x0;
        FUN_0c058f4e();
        FUN_0c0d8f10(0x1C, 0x0, 0xF0);
        FUN_0c05f2d4(0x3, 0x0);
        (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
        FUN_0c060c88(0xC);
        *(unsigned char *)0xC7F3082 = 0x0;
        if ((*(signed char *)0xC7F473E) != 12) {
            FUN_0c0a3688();
        }
        t183 = 0x0;
        for (;;) {
            if ((int)t183 >= (int)0xB) {
                break;
            }
            FUN_0c01c75e(t183);
            t183 = (t183 + 0x1);
        }
        FUN_0c01cb1e(0x0);
        if (((((struct oA_short *)0xC362360)->v)) != 0) {
            (((struct oA_ushort *)0xC362360)->v) = (((((struct oA_short *)0xC362360)->v)) - 1);
        }
        t190 = *(signed char *)0xC362361;
        if ((unsigned char)t190 != 0) {
            if ((unsigned char)t190 == 1) {
                t192 = *(signed char *)0xC362362;
                if ((unsigned char)t192 != 0) {
                    if ((unsigned char)t192 != 1) {
                        return ((int (*)(int, int, int, int))(0xC01D062))(0xC362366, 0x1E, a6, a7);
                    }
                    (((struct oC_float *)0xC362360)->v) = (((((struct oC_float *)0xC362360)->v)) + -0.0333333313f);
                    t194 = (((struct o6_short *)0xC362360)->v);
                    (((struct o6_ushort *)0xC362360)->v) = (t194 - 1);
                    if ((int)(short)(t194 - 1) >= 0) {
                        return ((int (*)(int, int, int, int))(0xC01D062))(0xC362366, 0x1E, a6, a7);
                    }
                    (((struct oC_float *)0xC362360)->v) = 0.0f;
                    t195 = *(signed char *)0xC7F473E;
                    if (t195 != 4) {
                        if (t195 != 5) {
                            if ((t195 != 12) && ((t195 != 13) && (t195 != 14))) {
                                (((struct o0_uchar *)0xC362360)->v) = 0x2;
                                return ((int (*)(int, int, int, int))(0xC01D062))(0xC362366, 0x1E, a6, a7);
                            }
                            (((struct o19_uchar *)0xC7F4726)->v) = ((*(signed char *)0xC7F473E) - 12);
                        } else {
                            (((struct o19_uchar *)0xC7F4726)->v) = 0x6;
                        }
                    } else {
                        (((struct o19_uchar *)0xC7F4726)->v) = 0x5;
                    }
                    (((struct o0_uchar *)0xC7F4726)->v) = 0x3;
                    return ((int (*)(int, int, int, int))(0xC01D062))(0xC362366, 0x1E, a6, a7);
                }
                (((struct oC_float *)0xC362360)->v) = 1.0f;
                (((struct o6_ushort *)0xC362360)->v) = 0x1E;
                FUN_0c01c850(0x1, (*(signed char *)0xC7F473E));
                FUN_0c01cab6(0x1);
                (((struct o2_uchar *)0xC362360)->v) = ((*(signed char *)0xC362362) + 0x1);
                (((struct oC_float *)0xC362360)->v) = (((((struct oC_float *)0xC362360)->v)) + -0.0333333313f);
                t202 = (((struct o6_short *)0xC362360)->v);
                (((struct o6_ushort *)0xC362360)->v) = (t202 - 1);
                if ((int)(short)(t202 - 1) >= 0) {
                    return ((int (*)(void))(0xC01D062))();
                }
                (((struct oC_float *)0xC362360)->v) = 0.0f;
                t203 = *(signed char *)0xC7F473E;
                if (t203 != 4) {
                    if (t203 != 5) {
                        if ((t203 != 12) && ((t203 != 13) && (t203 != 14))) {
                            (((struct o0_uchar *)0xC362360)->v) = 0x2;
                            return ((int (*)(void))(0xC01D062))();
                        }
                        (((struct o19_uchar *)0xC7F4726)->v) = ((*(signed char *)0xC7F473E) - 12);
                    } else {
                        (((struct o19_uchar *)0xC7F4726)->v) = 0x6;
                    }
                } else {
                    (((struct o19_uchar *)0xC7F4726)->v) = 0x5;
                }
                (((struct o0_uchar *)0xC7F4726)->v) = 0x3;
                return ((int (*)(void))(0xC01D062))();
            }
            if ((unsigned char)t190 == 2) {
                t205 = *(signed char *)0xC362362;
                if ((unsigned char)t205 != 0) {
                    if ((unsigned char)t205 != 1) {
                        return ((int (*)(int, int, int, int))(0xC01D062))(0xC362366, 0x1E, a6, a7);
                    }
                    t206 = FUN_0c01d1ce(0x2, 0x2);
                    if ((signed char)t206 == 0) {
                        t207 = (((struct o6_short *)0xC362360)->v);
                        (((struct o6_ushort *)0xC362360)->v) = (t207 - 1);
                        if ((int)(short)(t207 - 1) >= 0) {
                            return ((int (*)(void))(0xC01D062))();
                        }
                        return ((int (*)(void))(0xC01D04E))();
                    }
                } else {
                    (((struct o6_ushort *)0xC362360)->v) = 0x1E;
                    FUN_0c01c850(0x2, (*(signed char *)0xC7F473E));
                    FUN_0c01c99e(0x2, (*(signed char *)0xC362370));
                    FUN_0c0a3796(0x0, 0x4F);
                    (((struct o2_uchar *)0xC362360)->v) = ((*(signed char *)0xC362362) + 0x1);
                    t214 = FUN_0c01d1ce(0x2, 0x2);
                    if ((signed char)t214 == 0) {
                        t215 = (((struct o6_short *)0xC362360)->v);
                        (((struct o6_ushort *)0xC362360)->v) = (t215 - 1);
                        if ((int)(short)(t215 - 1) >= 0) {
                            return ((int (*)(void))(0xC01D062))();
                        }
                        return ((int (*)(void))(0xC01D04E))();
                    }
                }
                (((struct o0_uchar *)0xC362360)->v) = 0x2;
                return ((int (*)(void))(0xC01D062))();
            }
            if ((unsigned char)t190 == 3) {
                t216 = *(signed char *)0xC362362;
                if ((unsigned char)t216 != 0) {
                    if ((unsigned char)t216 != 1) {
                        return ((int (*)(int, int, int, int))(0xC01D062))(0xC362366, 0x1E, a6, a7);
                    }
                    t217 = FUN_0c01d1ce(0x2, 0x2);
                    if ((signed char)t217 == 0) {
                        t218 = (((struct o6_short *)0xC362360)->v);
                        (((struct o6_ushort *)0xC362360)->v) = (t218 - 1);
                        if ((int)(short)(t218 - 1) >= 0) {
                            return ((int (*)(void))(0xC01D062))();
                        }
                        return ((int (*)(void))(0xC01D04E))();
                    }
                } else {
                    (((struct o6_ushort *)0xC362360)->v) = 0x1E;
                    FUN_0c01c850(0x3, (*(signed char *)0xC362370));
                    FUN_0c01c99e(0x3, (*(signed char *)0xC7F473E));
                    FUN_0c0a3796(0x0, 0x4F);
                    (((struct o2_uchar *)0xC362360)->v) = ((*(signed char *)0xC362362) + 0x1);
                    t225 = FUN_0c01d1ce(0x2, 0x2);
                    if ((signed char)t225 == 0) {
                        t226 = (((struct o6_short *)0xC362360)->v);
                        (((struct o6_ushort *)0xC362360)->v) = (t226 - 1);
                        if ((int)(short)(t226 - 1) >= 0) {
                            return ((int (*)(void))(0xC01D062))();
                        }
                        return ((int (*)(void))(0xC01D04E))();
                    }
                }
                (((struct o0_uchar *)0xC362360)->v) = 0x2;
                return ((int (*)(void))(0xC01D062))();
            }
            if ((unsigned char)t190 == 4) {
                t227 = *(signed char *)0xC362362;
                if ((unsigned char)t227 != 0) {
                    if ((unsigned char)t227 != 1) {
                        return ((int (*)(int, int, int, int))(0xC01D062))(0xC362366, 0x1E, a6, a7);
                    }
                    t228 = FUN_0c01d1ce(0x2, 0x2);
                    if ((signed char)t228 != 0) {
                        (((struct o0_uchar *)0xC362360)->v) = 0x2;
                        return ((int (*)(void))(0xC01D062))();
                    }
                    t229 = (((struct o6_short *)0xC362360)->v);
                    (((struct o6_ushort *)0xC362360)->v) = (t229 - 1);
                    if ((int)(short)(t229 - 1) < 0) {
                        (((struct o1_uchar *)0xC362360)->v) = 0x2;
                        return ((int (*)(void))(0xC01D054))();
                    }
                    return ((int (*)(void))(0xC01D062))();
                }
                (((struct o6_ushort *)0xC362360)->v) = 0x5;
                FUN_0c01c850(0x4, (*(signed char *)0xC362370));
                (((struct o2_uchar *)0xC362360)->v) = ((*(signed char *)0xC362362) + 0x1);
                t233 = FUN_0c01d1ce(0x2, 0x2);
                if ((signed char)t233 != 0) {
                    (((struct o0_uchar *)0xC362360)->v) = 0x2;
                    return ((int (*)(void))(0xC01D062))();
                }
                t234 = (((struct o6_short *)0xC362360)->v);
                (((struct o6_ushort *)0xC362360)->v) = (t234 - 1);
                if ((int)(short)(t234 - 1) < 0) {
                    (((struct o1_uchar *)0xC362360)->v) = 0x2;
                    return ((int (*)(void))(0xC01D054))();
                }
                return ((int (*)(void))(0xC01D062))();
            }
            if ((unsigned char)t190 == 5) {
                t235 = *(signed char *)0xC362362;
                if ((unsigned char)t235 != 0) {
                    if ((unsigned char)t235 != 1) {
                        return ((int (*)(int, int, int, int))(0xC01D062))(0xC362366, 0x1E, a6, a7);
                    }
                    t237 = FUN_0c01ea20((*(signed char *)0xC362371), 0x1E, 0x0, 0x0);
                    if ((unsigned char)t237 != 0) {
                        if ((unsigned char)t237 != 1) {
                            if ((unsigned char)t237 != 2) {
                                return ((int (*)(void))(0xC01D062))();
                            }
                            return ((int (*)(void))(0xC01D048))();
                        }
                        t240 = *(signed char *)0xC362363;
                        if ((unsigned char)t240 != 0) {
                            if ((unsigned char)t240 != 1) {
                                return ((int (*)(void))(0xC01D062))();
                            }
                            return ((int (*)(void))(0xC01D062))();
                        }
                        t242 = 0x0;
                        for (;;) {
                            if ((int)t242 >= (int)0x6) {
                                break;
                            }
                            FUN_0c01c7c4(t242);
                            t242 = (t242 + 0x1);
                        }
                        t245 = 0x0;
                        for (;;) {
                            if ((int)t245 >= (int)0x3) {
                                break;
                            }
                            FUN_0c01c80a(t245);
                            t245 = (t245 + 0x1);
                        }
                        (((struct o3_uchar *)0xC362360)->v) = ((*(signed char *)0xC362363) + 0x1);
                        return ((int (*)(void))(0xC01D062))();
                    }
                    return ((int (*)(void))(0xC01D062))();
                }
                FUN_0c01c850(0x5, (*(signed char *)0xC7F473E));
                (((struct o11_uchar *)0xC362360)->v) = ((*(signed char *)0xC7F473E) + 0xFA);
                FUN_0c01e7a2();
                (((struct o3_uchar *)0xC362360)->v) = 0x0;
                (((struct o2_uchar *)0xC362360)->v) = ((*(signed char *)0xC362362) + 0x1);
                t254 = FUN_0c01ea20((*(signed char *)0xC362371), 0x0, 0x0, 0x0);
                if ((unsigned char)t254 != 0) {
                    if ((unsigned char)t254 != 1) {
                        if ((unsigned char)t254 != 2) {
                            return ((int (*)(void))(0xC01D062))();
                        }
                        return ((int (*)(void))(0xC01D048))();
                    }
                    t257 = *(signed char *)0xC362363;
                    if ((unsigned char)t257 != 0) {
                        if ((unsigned char)t257 != 1) {
                            return ((int (*)(void))(0xC01D062))();
                        }
                        return ((int (*)(void))(0xC01D062))();
                    }
                    t259 = 0x0;
                    for (;;) {
                        if ((int)t259 >= (int)0x6) {
                            break;
                        }
                        FUN_0c01c7c4(t259);
                        t259 = (t259 + 0x1);
                    }
                    t262 = 0x0;
                    for (;;) {
                        if ((int)t262 >= (int)0x3) {
                            break;
                        }
                        FUN_0c01c80a(t262);
                        t262 = (t262 + 0x1);
                    }
                    (((struct o3_uchar *)0xC362360)->v) = ((*(signed char *)0xC362363) + 0x1);
                    return ((int (*)(void))(0xC01D062))();
                }
                return ((int (*)(void))(0xC01D062))();
            }
            return ((int (*)(int, int, int, int))(0xC01D062))(0xC362366, 0x1E, a6, a7);
        }
        t265 = *(signed char *)0xC362362;
        if ((unsigned char)t265 != 0) {
            if ((unsigned char)t265 != 1) {
                return ((int (*)(int, int, int, int))(0xC01D062))(0xC362366, 0x1E, a6, a7);
            }
            t266 = FUN_0c01d1ce(0x2, 0x2);
            if ((signed char)t266 != 0) {
                FUN_0c0a3796(0x0, 0x4D);
                (((struct o0_uchar *)0xC362360)->v) = 0x2;
                return ((int (*)(void))(0xC01D062))();
            }
            t268 = FUN_0c01d1ce(0x2, 0x4);
            if ((signed char)t268 != 0) {
                t270 = FUN_0c01d226();
                if ((signed char)t270 != 0) {
                    t272 = FUN_0c01d0ec((*(signed char *)0xC7F473E));
                    if ((signed char)t272 != 0) {
                        t276 = *(signed char *)0xC7F473E;
                        if ((t276 != 4) && (t276 != 5)) {
                            if ((t276 != 6) && ((t276 != 7) && (t276 != 8))) {
                                if (t276 != 12) {
                                    if ((t276 != 13) && (t276 != 14)) {
                                        FUN_0c0a3796(0x0, 0x4E);
                                        return ((int (*)(void))(0xC01D062))();
                                    }
                                    FUN_0c01cb86(0x3C);
                                }
                                FUN_0c0a3796(0x0, 0x4D);
                                (((struct o1_uchar *)0xC362360)->v) = 0x1;
                            } else {
                                FUN_0c0a3796(0x0, 0x4D);
                                (((struct o1_uchar *)0xC362360)->v) = 0x5;
                            }
                        } else {
                            t285 = 0x0;
                            if (((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x4) != 0) {
                                t285 = 0x1;
                            }
                            t288 = t285;
                            if (((unsigned short)((((struct o14_short *)0xC361BFC)->v)) & 0x4) != 0) {
                                t288 = (t285 | 0x2);
                            }
                            FUN_0c0d71f4(t288);
                            FUN_0c01cb86(0x3C);
                            FUN_0c0a3796(0x0, 0x4D);
                            (((struct o1_uchar *)0xC362360)->v) = 0x1;
                        }
                        (((struct o2_uchar *)0xC362360)->v) = 0x0;
                        return ((int (*)(void))(0xC01D062))();
                    }
                }
                FUN_0c0a3796(0x0, 0x4E);
                return ((int (*)(void))(0xC01D062))();
            }
            if ((int)(*(signed char *)0xC7F473E) < (int)0xE) {
                t296 = FUN_0c01d1ce(0x0, 0x80);
                if ((signed char)t296 != 0) {
                    (((struct o10_uchar *)0xC362360)->v) = (*(signed char *)0xC7F473E);
                    (((struct o18_uchar *)0xC7F4726)->v) = ((*(signed char *)0xC7F473E) + 0x1);
                    (((struct o1_uchar *)0xC362360)->v) = 0x4;
                } else {
                    if ((int)(*(signed char *)0xC7F473E) <= 0) {
                        return ((int (*)(void))(0xC01D062))();
                    }
                    t300 = FUN_0c01d1ce(0x0, 0x40);
                    if ((signed char)t300 == 0) {
                        return ((int (*)(void))(0xC01D062))();
                    }
                    (((struct o10_uchar *)0xC362360)->v) = (*(signed char *)0xC7F473E);
                    (((struct o18_uchar *)0xC7F4726)->v) = ((*(signed char *)0xC7F473E) - 1);
                    (((struct o1_uchar *)0xC362360)->v) = 0x3;
                }
            } else {
                if ((int)(*(signed char *)0xC7F473E) <= 0) {
                    return ((int (*)(void))(0xC01D062))();
                }
                t304 = FUN_0c01d1ce(0x0, 0x40);
                if ((signed char)t304 == 0) {
                    return ((int (*)(void))(0xC01D062))();
                }
                (((struct o10_uchar *)0xC362360)->v) = (*(signed char *)0xC7F473E);
                (((struct o18_uchar *)0xC7F4726)->v) = ((*(signed char *)0xC7F473E) - 1);
                (((struct o1_uchar *)0xC362360)->v) = 0x3;
            }
        } else {
            FUN_0c01c850(0x0, (*(signed char *)0xC7F473E));
            (((struct o2_uchar *)0xC362360)->v) = ((*(signed char *)0xC362362) + 0x1);
            t310 = FUN_0c01d1ce(0x2, 0x2);
            if ((signed char)t310 != 0) {
                FUN_0c0a3796(0x0, 0x4D);
                (((struct o0_uchar *)0xC362360)->v) = 0x2;
                return ((int (*)(void))(0xC01D062))();
            }
            t312 = FUN_0c01d1ce(0x2, 0x4);
            if ((signed char)t312 != 0) {
                t314 = FUN_0c01d226();
                if ((signed char)t314 != 0) {
                    t316 = FUN_0c01d0ec((*(signed char *)0xC7F473E));
                    if ((signed char)t316 != 0) {
                        t320 = *(signed char *)0xC7F473E;
                        if ((t320 != 4) && (t320 != 5)) {
                            if ((t320 != 6) && ((t320 != 7) && (t320 != 8))) {
                                if (t320 != 12) {
                                    if ((t320 != 13) && (t320 != 14)) {
                                        FUN_0c0a3796(0x0, 0x4E);
                                        return ((int (*)(void))(0xC01D062))();
                                    }
                                    FUN_0c01cb86(0x3C);
                                }
                                FUN_0c0a3796(0x0, 0x4D);
                                (((struct o1_uchar *)0xC362360)->v) = 0x1;
                            } else {
                                FUN_0c0a3796(0x0, 0x4D);
                                (((struct o1_uchar *)0xC362360)->v) = 0x5;
                            }
                        } else {
                            t329 = 0x0;
                            if (((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x4) != 0) {
                                t329 = 0x1;
                            }
                            t332 = t329;
                            if (((unsigned short)((((struct o14_short *)0xC361BFC)->v)) & 0x4) != 0) {
                                t332 = (t329 | 0x2);
                            }
                            FUN_0c0d71f4(t332);
                            FUN_0c01cb86(0x3C);
                            FUN_0c0a3796(0x0, 0x4D);
                            (((struct o1_uchar *)0xC362360)->v) = 0x1;
                        }
                        (((struct o2_uchar *)0xC362360)->v) = 0x0;
                        return ((int (*)(void))(0xC01D062))();
                    }
                }
                FUN_0c0a3796(0x0, 0x4E);
                return ((int (*)(void))(0xC01D062))();
            }
            if ((int)(*(signed char *)0xC7F473E) < (int)0xE) {
                t340 = FUN_0c01d1ce(0x0, 0x80);
                if ((signed char)t340 != 0) {
                    (((struct o10_uchar *)0xC362360)->v) = (*(signed char *)0xC7F473E);
                    (((struct o18_uchar *)0xC7F4726)->v) = ((*(signed char *)0xC7F473E) + 0x1);
                    (((struct o1_uchar *)0xC362360)->v) = 0x4;
                } else {
                    if ((int)(*(signed char *)0xC7F473E) <= 0) {
                        return ((int (*)(void))(0xC01D062))();
                    }
                    t344 = FUN_0c01d1ce(0x0, 0x40);
                    if ((signed char)t344 == 0) {
                        return ((int (*)(void))(0xC01D062))();
                    }
                    (((struct o10_uchar *)0xC362360)->v) = (*(signed char *)0xC7F473E);
                    (((struct o18_uchar *)0xC7F4726)->v) = ((*(signed char *)0xC7F473E) - 1);
                    (((struct o1_uchar *)0xC362360)->v) = 0x3;
                }
            } else {
                if ((int)(*(signed char *)0xC7F473E) <= 0) {
                    return ((int (*)(void))(0xC01D062))();
                }
                t348 = FUN_0c01d1ce(0x0, 0x40);
                if ((signed char)t348 == 0) {
                    return ((int (*)(void))(0xC01D062))();
                }
                (((struct o10_uchar *)0xC362360)->v) = (*(signed char *)0xC7F473E);
                (((struct o18_uchar *)0xC7F4726)->v) = ((*(signed char *)0xC7F473E) - 1);
                (((struct o1_uchar *)0xC362360)->v) = 0x3;
            }
        }
    }
    (((struct o2_uchar *)0xC362360)->v) = 0x0;
    return ((int (*)(void))(0xC01D062))();
}

int FUN_0c048ea8(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register float F1;
    register int T_;
    register int FPUL_;
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
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_6 = a4;
    v0_5 = a5;
    v0_8 = a6;
    v0_9 = a7;
    w0_0 = f4;
    w0_0 = f10;
    v0_10 = *(signed char *)((v0_6 + 0x8));
    v0_7 = (v0_10);
    v0_1 = ((0x308 + v0_6));
    v0_2 = (0x2);
    v0_3 = (0x1);
    v0_4 = (0x0);
    v0_0 = (v0_6);
    if ((v0_10 == 0)) goto L_C048EE8;
    if ((v0_7 != 1)) goto L_C048EDC;
    L_C04904E:;
    v0_6 = (((struct o2E0_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    v0_5 = (0xC06231C);
    v0_5 = (v0_4);
    if (((*(signed char *)((v0_6 + 0x0))) == 0)) goto L_C0490C8;
    v0_6 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_6 - 1);
    v0_7 = (0xEC);
    v0_5 = ((v0_5 + 0x1));
    if (((short)(v0_6 - 1) != 0)) goto L_C049098;
    *(unsigned short *)((v0_0 + v0_7)) = 0x4;
    v0_6 = *(short *)((v0_0 + (v0_7 + 0x2)));
    *(unsigned short *)((v0_0 + (v0_7 + 0x2))) = (v0_6 + 0x1);
    if (((int)(short)(v0_6 + 0x1) > (int)0x7)) goto L_C049094;
    FUN_0c06231c((*(int *)(((int)stk + 4))), 0xC4CFA68, ((*(signed char *)((v0_0 + 0xEE))) + 0x48));
    L_C049098:;
    if (((*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))) == 0)) goto L_C0490C8;
    if (((int)((((struct oEE_short *)(v0_0))->v)) < (int)0x4)) goto L_C0490C8;
    v0_6 = *(int *)(((int)stk + 4));
    (((struct o44_float *)(v0_6))->v) = (((((struct o44_float *)(v0_6))->v)) - 0.0625f);
    (((struct o48_float *)(v0_6))->v) = (((((struct o48_float *)(v0_6))->v)) - 0.0625f);
    (((struct o4C_float *)(v0_6))->v) = (((((struct o4C_float *)(v0_6))->v)) - 0.0625f);
    w0_0 = (0.0625f);
    L_C0490C8:;
    *(unsigned int *)(((int)stk + 12)) = v0_3;
    v0_7 = (0xC049184);
    w0_3 = (16.0f);
    w0_0 = (-2.0f);
    w0_1 = (0.049999997f);
    w0_2 = (2.0f);
    L_C04921A:;
    if (((int)(*(int *)(((int)stk + 12))) >= (int)((*(signed char *)((v0_1 + 0x0))) + 0x1))) goto L_C049228;
    v0_6 = *(int *)(((((*(int *)(((int)stk + 12))) << 2) + (0x2E0 + v0_0)) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = v0_6;
    *(unsigned int *)(((int)stk + 4)) = (v0_6 + 0x10);
    if (!(((*(signed char *)(((v0_6 + 0x10) + 0x2))) == 0))) goto L_C0491F2;
    if (((*(signed char *)(((*(int *)(((int)stk + 4))) + 0x3))) != 0)) goto L_C0491F2;
    v0_6 = *(int *)(((int)stk + 8));
    (((struct o1C_float *)(v0_6))->v) = (((((struct o1C_float *)(v0_6))->v)) + w0_1);
    (((struct o20_float *)(v0_6))->v) = (((((struct o20_float *)(v0_6))->v)) + w0_1);
    (((struct o24_float *)(v0_6))->v) = (((((struct o24_float *)(v0_6))->v)) + w0_1);
    (((struct o8_float *)(v0_6))->v) = (((((struct o8_float *)(v0_6))->v)) + 0.5f);
    v0_8 = *(int *)(((int)stk + 4));
    v0_7 = *(signed char *)((v0_8 + 0x0));
    *(unsigned char *)((v0_8 + 0x0)) = (v0_7 - 1);
    v0_6 = (v0_6);
    v0_5 = ((v0_5 + 0x1));
    FPUL_ = (0x3F000000);
    if (((signed char)(v0_7 - 1) != 0)) goto L_C049198;
    *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x0)) = v0_2;
    v0_6 = *(int *)(((int)stk + 4));
    v0_7 = *(signed char *)((v0_6 + 0x1));
    *(unsigned char *)((v0_6 + 0x1)) = (v0_7 + 0x1);
    if (((int)(signed char)(v0_7 + 0x1) > (int)0xF)) goto L_C04918C;
    FUN_0c06231c((*(int *)(((int)stk + 8))), 0xC4CFA68, ((*(signed char *)(((*(int *)(((int)stk + 4))) + 0x1))) + 0x21));
    goto L_C049198;
    L_C0491F2:;
    v0_6 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3));
    v0_7 = (v0_6);
    if ((v0_6 != 0)) goto L_C049214;
    v0_6 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x2));
    v0_7 = (v0_6);
    if ((v0_6 == 0)) goto L_C049214;
    v0_7 = *(int *)(((int)stk + 4));
    v0_6 = *(signed char *)((v0_7 + 0x2));
    *(unsigned char *)((v0_7 + 0x2)) = (v0_6 - 1);
    v0_7 = ((signed char)(v0_6 - 1));
    if (((signed char)(v0_6 - 1) != 0)) goto L_C049214;
    *(unsigned char *)(((*(int *)(((int)stk + 8))) + 0x0)) = v0_3;
    L_C049214:;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    goto L_C04921A;
    L_C049198:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 4))) + 0x1))) > (int)0xC)) goto L_C0491C8;
    v0_6 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x0));
    (((struct o40_float *)((*(int *)(((int)stk + 8)))))->v) = ((((((float)(*(signed char *)(((*(int *)(((int)stk + 4))) + 0x1))) * w0_2)) - (float)v0_6) + w0_2) / 24.0f);
    v0_7 = (0x40);
    FPUL_ = (v0_6);
    goto L_C049214;
    L_C0491C8:;
    v0_6 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x0));
    w0_4 = (float)v0_6;
    w0_4 = w0_4 + w0_2 * (((-(float)(*(signed char *)(((*(int *)(((int)stk + 4))) + 0x1)))) + w0_3));
    (((struct o40_float *)((*(int *)(((int)stk + 8)))))->v) = ((w0_4 + w0_0) / 8.0f);
    v0_7 = (0x40);
    w0_4 = (w0_2);
    FPUL_ = (v0_6);
    goto L_C049214;
    L_C04918C:;
    *(unsigned char *)(((*(int *)(((int)stk + 8))) + 0x0)) = v0_4;
    *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x3)) = v0_3;
    goto L_C049198;
    L_C049228:;
    if ((v0_5 != 0)) goto L_C04925C;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_7 = ((v0_1 + 0x1));
    L_C04925C:;
    return v0_7;
    L_C049094:;
    *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x0)) = v0_4;
    goto L_C049098;
    L_C048EDC:;
    if ((v0_7 != 2)) goto L_C048EE4;
    *(unsigned char *)0xC7F3197 = ((*(signed char *)0xC7F3197) - 1);
    return FUN_0c059330(v0_0, v0_5, v0_8, v0_9);
    L_C048EE4:;
    goto L_C04925C;
    L_C048EE8:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = 0x4;
    (((struct oEE_ushort *)(v0_0))->v) = v0_4;
    *(unsigned int *)(((int)stk + 8)) = v0_3;
    v0_5 = (0xC0DF940);
    w0_0 = (-10.0f);
    w0_1 = (-20.0f);
    w0_2 = (255.0f);
    L_C048FFE:;
    if (((int)(*(int *)(((int)stk + 8))) < (int)((*(signed char *)((v0_1 + 0x0))) + 0x1))) goto L_C048F34;
    if (((*(signed char *)((v0_1 + 0x1))) == 0)) goto L_C04904E;
    if ((((((struct o50_float *)(v0_0))->v)) > 0.299999982f)) goto L_C04901E;
    v0_5 = (0x20);
    L_C049046:;
    FUN_0c0a3796((*(signed char *)((v0_0 + 0x3))), v0_5);
    goto L_C04904E;
    L_C04901E:;
    if ((((((struct o50_float *)(v0_0))->v)) > 0.599999964f)) goto L_C049044;
    v0_5 = (0x21);
    goto L_C049046;
    L_C049044:;
    v0_5 = (0x22);
    goto L_C049046;
    L_C048F34:;
    v0_5 = *(int *)(((((*(int *)(((int)stk + 8))) << 2) + (0x2E0 + v0_0)) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = v0_5;
    *(int *)((int)stk + 0) = (0x4 + v0_5);
    w0_5 = FUN_0c0df940();
    *(unsigned int *)(((int)stk + 0)) = (0x4 + v0_5);
    v0_5 = ((v0_5 + 0x10));
    w0_4 = (2.14748365e+09f);
    w0_3 = ((w0_5 * w0_2));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_5 * w0_2))) goto L_C048F62;
    w0_3 = ((w0_3 - (w0_4 + w0_4)));
    L_C048F62:;
    v0_7 = FUN_0c0e6f24(v0_6);
    w0_3 = ((float)v0_7);
    FPUL_ = (v0_7);
    if (((int)v0_7 >= 0)) goto L_C048F7C;
    w0_3 = ((w0_3 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C048F7C:;
    v0_7 = *(int *)((int)stk + 0);
    w0_4 = (*(float *)((v0_7 + 0x0)));
    w0_4 = w0_4 + ((((struct o50_float *)(v0_0))->v)) * ((w0_3 + w0_1));
    *(float *)((v0_7 + 0x0)) = w0_4;
    v0_7 = *(int *)(((int)stk + 4));
    *(int *)((int)stk + 0) = (0x8 + v0_7);
    w0_5 = FUN_0c0df940();
    *(unsigned int *)(((int)stk + 0)) = (0x8 + v0_7);
    w0_4 = (2.14748365e+09f);
    w0_3 = ((w0_5 * w0_2));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_5 * w0_2))) goto L_C048FA6;
    w0_3 = ((w0_3 - (w0_4 + w0_4)));
    L_C048FA6:;
    v0_7 = FUN_0c0e6f24(v0_6);
    w0_3 = ((float)v0_7);
    FPUL_ = (v0_7);
    if (((int)v0_7 >= 0)) goto L_C048FC0;
    w0_3 = ((w0_3 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C048FC0:;
    v0_7 = *(int *)((int)stk + 0);
    w0_4 = (*(float *)((v0_7 + 0x0)));
    w0_4 = w0_4 + ((((struct o54_float *)(v0_0))->v)) * ((w0_3 + w0_0));
    *(float *)((v0_7 + 0x0)) = w0_4;
    w0_5 = FUN_0c0df940();
    w0_4 = (2.14748365e+09f);
    w0_3 = ((w0_5 * w0_2));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_5 * w0_2))) goto L_C048FE2;
    w0_3 = ((w0_3 - (w0_4 + w0_4)));
    L_C048FE2:;
    *(unsigned char *)((v0_5 + 0x2)) = (FUN_0c0e6f24(v0_6));
    *(unsigned char *)((v0_5 + 0x1)) = v0_4;
    *(unsigned char *)((v0_5 + 0x0)) = v0_2;
    *(unsigned char *)((v0_5 + 0x3)) = v0_4;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    goto L_C048FFE;
}

int FUN_0c0c6a88(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    int t4;
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
    register float u0;
    register float u1;
    register float u2;

    t5 = *(signed char *)((a4 + 0x8));
    if (t5 != 0) {
        if (t5 != 1) {
            if (t5 == 2) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                return FUN_0c059330(a4, a5, a6, a7);
            }
            if (t5 == 3) {
                return FUN_0c059330(a4, a5, a6, a7);
            }
            return t5;
        }
        t5 = *(signed char *)((a4 + 0x9));
        if (t5 != 0) {
            if (t5 != 1) {
                if (t5 != 2) {
                    if (t5 == 3) {
                        t6 = FUN_0c0c69e8(a4);
                        t7 = (signed char)t6;
                        if ((signed char)t6 == 0) {
                            u0 = FUN_0c0dfa50((*(int *)((a4 + 0x30))));
                            u1 = (u0 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
                            (((struct o38_float *)(a4))->v) = (u1 * 30.0f);
                            (((struct o3C_float *)(a4))->v) = (-((FUN_0c0dfa50((*(int *)((a4 + 0x2C))))) * 30.0f));
                            u0 = FUN_0c0df4d0((*(int *)((a4 + 0x30))));
                            u1 = (u0 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
                            (((struct o40_float *)(a4))->v) = (u1 * 30.0f);
                            FUN_0c0c67c4(a4);
                            FUN_0c0c68cc(a4, 0x800);
                            FUN_0c0c681a(a4);
                            FUN_0c0c688a(a4, 30.0f);
                            t6 = (((struct oEE_short *)(a4))->v);
                            if (t6 == 0) {
                                (((struct oEE_ushort *)(a4))->v) = 0x2D;
                                u0 = FUN_0c0dfa50((*(int *)((a4 + 0x30))));
                                u1 = (u0 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
                                (((struct o38_float *)(a4))->v) = (u1 * 30.0f);
                                (((struct o3C_float *)(a4))->v) = (-((FUN_0c0dfa50((*(int *)((a4 + 0x2C))))) * 30.0f));
                                u0 = FUN_0c0df4d0((*(int *)((a4 + 0x30))));
                                u1 = (u0 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
                                (((struct o40_float *)(a4))->v) = (u1 * 30.0f);
                                t8 = *(signed char *)((a4 + 0x9));
                                *(unsigned char *)((a4 + 0x9)) = (t8 + 0x1);
                                t9 = (t8 + 0x1);
                            } else {
                                t8 = (((struct oEE_short *)(a4))->v);
                                (((struct oEE_ushort *)(a4))->v) = (t8 - 1);
                                t9 = 0xEE;
                                t10 = (t8 - 1);
                                t8 = t6;
                            }
                            t7 = t9;
                            t6 = t10;
                            t9 = t8;
                        }
                        t8 = t7;
                        t7 = t6;
                        t6 = t9;
                    } else {
                        t9 = t5;
                        if (t5 == 4) {
                            FUN_0c0c67c4(a4);
                            FUN_0c0c681a(a4);
                            (((struct o60_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) + -0.0222222209f);
                            (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) + -0.0222222209f);
                            (((struct o68_float *)(a4))->v) = (((((struct o68_float *)(a4))->v)) + -0.0222222209f);
                            FUN_0c0c688a(a4, 30.0f);
                            t5 = (((struct oEE_short *)(a4))->v);
                            (((struct oEE_ushort *)(a4))->v) = (t5 - 1);
                            t10 = 0xEE;
                            if ((short)(t5 - 1) == 0) {
                                t11 = *(signed char *)((a4 + 0x8));
                                *(unsigned char *)((a4 + 0x8)) = (t11 + 0x1);
                                t10 = (t11 + 0x1);
                            }
                            t9 = t10;
                            t10 = (short)(t5 - 1);
                        } else {
                            t5 = (0x308 + a4);
                        }
                        t8 = t9;
                        t7 = t10;
                        t9 = t5;
                    }
                    t5 = t8;
                    t8 = t7;
                    t7 = t6;
                    t6 = t9;
                } else {
                    t9 = FUN_0c0c69e8(a4);
                    t10 = (signed char)t9;
                    if ((signed char)t9 != 0) {
                    } else {
                        FUN_0c0c68cc(a4, 0x200);
                        FUN_0c0c681a(a4);
                        t9 = (((struct oEE_short *)(a4))->v);
                        if (t9 == 0) {
                            (((struct o101_uchar *)(a4))->v) = 0x3;
                            (((struct o102_uchar *)(a4))->v) = 0x3;
                            FUN_0c0a1d88(a4, (((int)(*(signed char *)((a4 + 0x4))) >> 4) + 0x76));
                            (((struct oEE_ushort *)(a4))->v) = 0xF;
                            (((struct oF0_ushort *)(a4))->v) = 0x3;
                            (((struct oF2_ushort *)(a4))->v) = 0x1;
                            t11 = *(signed char *)((a4 + 0x9));
                            *(unsigned char *)((a4 + 0x9)) = (t11 + 0x1);
                            t12 = (t11 + 0x1);
                            t11 = 0x1;
                        } else {
                            t13 = (((struct oEE_short *)(a4))->v);
                            (((struct oEE_ushort *)(a4))->v) = (t13 - 1);
                            t12 = 0xEE;
                            t14 = (t13 - 1);
                            t11 = t9;
                        }
                        t10 = t12;
                        t9 = t14;
                        t12 = t11;
                    }
                    t5 = t10;
                    t8 = t9;
                    t7 = t12;
                }
                t9 = t5;
                t5 = t8;
                t8 = t7;
                t7 = t6;
            } else {
                t6 = FUN_0c0c69e8(a4);
                t10 = (signed char)t6;
                if ((signed char)t6 != 0) {
                } else {
                    FUN_0c0c68cc(a4, 0x200);
                    FUN_0c0c681a(a4);
                    t6 = *(int *)((a4 + 0x1C));
                    t11 = (((struct oF2_short *)(t6))->v);
                    t12 = t6;
                    t6 = t11;
                    if (t11 != 0) {
                    } else {
                        t11 = *(signed char *)((a4 + 0x4));
                        (((struct oEE_ushort *)(a4))->v) = ((((t11 & 0xF) << 2) + (t11 & 0xF)) << 1);
                        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                        (((struct oF0_ushort *)(a4))->v) = 0x4;
                        (((struct oF2_ushort *)(a4))->v) = 0x1;
                        t12 = 0x1;
                        t6 = 0x4;
                    }
                    t10 = 0xF2;
                    t11 = t12;
                    t12 = t6;
                }
                t9 = t10;
                t5 = t11;
                t8 = t12;
            }
            t6 = t9;
            t9 = t5;
            t5 = t8;
            t8 = t7;
        } else {
            t7 = FUN_0c0c69e8(a4);
            t10 = (signed char)t7;
            if ((signed char)t7 != 0) {
            } else {
                FUN_0c0c67c4(a4);
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.699999988f);
                (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.699999988f);
                (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.699999988f);
                FUN_0c0c688a(a4, 10.0f);
                t7 = (((struct oEE_short *)(a4))->v);
                (((struct oEE_ushort *)(a4))->v) = (t7 - 1);
                t11 = 0xEE;
                t12 = (short)(t7 - 1);
                if ((short)(t7 - 1) != 0) {
                } else {
                    (((struct o58_float *)(a4))->v) = 8.0f;
                    (((struct o54_float *)(a4))->v) = 8.0f;
                    (((struct o50_float *)(a4))->v) = 8.0f;
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                    (((struct oF0_ushort *)(a4))->v) = 0x4;
                    (((struct oF2_ushort *)(a4))->v) = 0x1;
                    t11 = 0xF2;
                    t12 = 0x1;
                    t7 = 0x4;
                    u0 = 8.0f;
                }
                t10 = t11;
                t11 = t12;
                t12 = t7;
                u1 = u0;
            }
            t6 = t10;
            t9 = t11;
            t5 = t12;
            u0 = u1;
        }
        t7 = t6;
        t6 = ((0x2E0 + a4) + 0x4);
        t10 = t9;
        t9 = t5;
        t5 = t8;
        t8 = 0xC33C8B0;
        t11 = t0;
        t0 = 0x0;
        u1 = u0;
        for (;;) {
            if ((int)t0 >= (int)0x3) {
                break;
            }
            t7 = 0x50;
            t11 = t8;
            u0 = (*(float *)((t11 + 0x0)));
            t0 = (t0 + 0x1);
            u1 = (*(float *)((a4 + t7)));
            t7 = 0x1C;
            t12 = *(int *)((t6 + 0x0));
            t6 = (t6 + 0x4);
            t5 = t12;
            t8 = (t8 + 0x8);
            u0 = (u0 * u1);
            *(float *)((t5 + t7)) = u0;
            t7 = 0x54;
            u0 = (*(float *)((t11 + 0x0)));
            u1 = (*(float *)((a4 + t7)));
            t7 = 0x20;
            u0 = (u0 * u1);
            *(float *)((t5 + t7)) = u0;
            t7 = 0x58;
            u0 = (*(float *)((t11 + 0x0)));
            u1 = (*(float *)((a4 + t7)));
            t7 = 0x24;
            u0 = (u0 * u1);
            *(float *)((t5 + t7)) = u0;
            t9 = (*(int *)((t5 + 0x18)));
            t9 = (t9 + 0x400);
            t10 = t9;
            t10 = (t10 & 0xFFFF);
            *(unsigned int *)((t5 + 0x18)) = t10;
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        t5 = 0x2D8;
        if (((short)(t0 - 1) != 0) && (t1 = *(signed char *)((a4 + 0x2D8)), t1 == 0)) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = 0x2;
            t5 = 0x2;
        }
        return t5;
    }
    (((struct o308_float *)(a4))->v) = 0.199999988f;
    t0 = 0xC0C6AF4;
    t1 = ((0x2E0 + a4) + 0x4);
    t5 = (0x308 + a4);
    t6 = 0xC33C8B0;
    t7 = a6;
    t8 = 0x0;
    u0 = 0.199999988f;
    for (;;) {
        if ((int)t8 >= (int)0x3) {
            break;
        }
        t7 = t6;
        t7 = (t7 + 0x4);
        u0 = (*(float *)((t7 + 0x0)));
        t0 = 0x44;
        t9 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        t5 = t9;
        t6 = (t6 + 0x8);
        t8 = (t8 + 0x1);
        *(float *)((t5 + t0)) = u0;
        t0 = 0x48;
        u0 = (*(float *)((t7 + 0x0)));
        *(float *)((t5 + t0)) = u0;
        t0 = 0x4C;
        u0 = (*(float *)((t7 + 0x0)));
        *(float *)((t5 + t0)) = u0;
    }
    *(unsigned int *)((a4 + 0x2C)) = (-(*(int *)((((((*(signed char *)((a4 + 0x4))) << 2) << 1) + 0xC33C7B0) + 0x4))));
    t0 = *(int *)((a4 + 0x30));
    t1 = *(int *)((0xC33C7B0 + (((*(signed char *)((a4 + 0x4))) << 2) << 1)));
    *(unsigned int *)((a4 + 0x30)) = (t0 + t1);
    u0 = FUN_0c0dfa50((t0 + t1));
    u1 = (u0 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
    (((struct o38_float *)(a4))->v) = (u1 * 10.0f);
    (((struct o3C_float *)(a4))->v) = (-((FUN_0c0dfa50((*(int *)((a4 + 0x2C))))) * 10.0f));
    u0 = FUN_0c0df4d0((*(int *)((a4 + 0x30))));
    u1 = (u0 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
    (((struct o40_float *)(a4))->v) = (u1 * 10.0f);
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 1.0f;
    (((struct o54_float *)(a4))->v) = 1.0f;
    (((struct o50_float *)(a4))->v) = 1.0f;
    (((struct o68_float *)(a4))->v) = 1.0f;
    (((struct o64_float *)(a4))->v) = 1.0f;
    (((struct o60_float *)(a4))->v) = 1.0f;
    (((struct oEC_ushort *)(a4))->v) = 0x96;
    (((struct oEE_ushort *)(a4))->v) = 0xA;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    t1 = FUN_0c0c69e8(a4);
                    t5 = (signed char)t1;
                    if ((signed char)t1 == 0) {
                        u0 = FUN_0c0dfa50((*(int *)((a4 + 0x30))));
                        u1 = (u0 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
                        (((struct o38_float *)(a4))->v) = (u1 * 30.0f);
                        (((struct o3C_float *)(a4))->v) = (-((FUN_0c0dfa50((*(int *)((a4 + 0x2C))))) * 30.0f));
                        u0 = FUN_0c0df4d0((*(int *)((a4 + 0x30))));
                        u1 = (u0 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
                        (((struct o40_float *)(a4))->v) = (u1 * 30.0f);
                        FUN_0c0c67c4(a4);
                        FUN_0c0c68cc(a4, 0x800);
                        FUN_0c0c681a(a4);
                        FUN_0c0c688a(a4, 30.0f);
                        t1 = (((struct oEE_short *)(a4))->v);
                        if (t1 == 0) {
                            (((struct oEE_ushort *)(a4))->v) = 0x2D;
                            u0 = FUN_0c0dfa50((*(int *)((a4 + 0x30))));
                            u1 = (u0 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
                            (((struct o38_float *)(a4))->v) = (u1 * 30.0f);
                            (((struct o3C_float *)(a4))->v) = (-((FUN_0c0dfa50((*(int *)((a4 + 0x2C))))) * 30.0f));
                            u0 = FUN_0c0df4d0((*(int *)((a4 + 0x30))));
                            u1 = (u0 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
                            (((struct o40_float *)(a4))->v) = (u1 * 30.0f);
                            t6 = *(signed char *)((a4 + 0x9));
                            *(unsigned char *)((a4 + 0x9)) = (t6 + 0x1);
                            t7 = (t6 + 0x1);
                        } else {
                            t6 = (((struct oEE_short *)(a4))->v);
                            (((struct oEE_ushort *)(a4))->v) = (t6 - 1);
                            t7 = 0xEE;
                            t8 = (t6 - 1);
                            t6 = t1;
                        }
                        t5 = t7;
                        t1 = t8;
                        t7 = t6;
                    }
                    t6 = t5;
                    t5 = t1;
                    t1 = t7;
                } else {
                    t7 = t0;
                    t8 = 0xA;
                    if (t0 == 4) {
                        FUN_0c0c67c4(a4);
                        FUN_0c0c681a(a4);
                        (((struct o60_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) + -0.0222222209f);
                        (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) + -0.0222222209f);
                        (((struct o68_float *)(a4))->v) = (((((struct o68_float *)(a4))->v)) + -0.0222222209f);
                        FUN_0c0c688a(a4, 30.0f);
                        t0 = (((struct oEE_short *)(a4))->v);
                        (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
                        t9 = 0xEE;
                        if ((short)(t0 - 1) == 0) {
                            t10 = *(signed char *)((a4 + 0x8));
                            *(unsigned char *)((a4 + 0x8)) = (t10 + 0x1);
                            t9 = (t10 + 0x1);
                        }
                        t7 = t9;
                        t8 = (short)(t0 - 1);
                    } else {
                        t0 = 0x96;
                        u0 = 0.0f;
                    }
                    t6 = t7;
                    t5 = t8;
                    t1 = t0;
                    u1 = u0;
                }
                t0 = t6;
                t6 = t5;
                t5 = t1;
                u0 = u1;
            } else {
                t1 = FUN_0c0c69e8(a4);
                t7 = (signed char)t1;
                if ((signed char)t1 != 0) {
                } else {
                    FUN_0c0c68cc(a4, 0x200);
                    FUN_0c0c681a(a4);
                    t1 = (((struct oEE_short *)(a4))->v);
                    if (t1 == 0) {
                        (((struct o101_uchar *)(a4))->v) = 0x3;
                        (((struct o102_uchar *)(a4))->v) = 0x3;
                        FUN_0c0a1d88(a4, (((int)(*(signed char *)((a4 + 0x4))) >> 4) + 0x76));
                        (((struct oEE_ushort *)(a4))->v) = 0xF;
                        (((struct oF0_ushort *)(a4))->v) = 0x3;
                        (((struct oF2_ushort *)(a4))->v) = 0x1;
                        t8 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t8 + 0x1);
                        t9 = (t8 + 0x1);
                        t8 = 0x1;
                    } else {
                        t10 = (((struct oEE_short *)(a4))->v);
                        (((struct oEE_ushort *)(a4))->v) = (t10 - 1);
                        t9 = 0xEE;
                        t11 = (t10 - 1);
                        t8 = t1;
                    }
                    t7 = t9;
                    t1 = t11;
                    t9 = t8;
                }
                t0 = t7;
                t6 = t1;
                t5 = t9;
            }
            t1 = t0;
            t0 = t6;
            t6 = t5;
            u1 = u0;
        } else {
            t5 = FUN_0c0c69e8(a4);
            t7 = (signed char)t5;
            if ((signed char)t5 != 0) {
            } else {
                FUN_0c0c68cc(a4, 0x200);
                FUN_0c0c681a(a4);
                t5 = *(int *)((a4 + 0x1C));
                t8 = (((struct oF2_short *)(t5))->v);
                t9 = t5;
                t5 = t8;
                if (t8 != 0) {
                } else {
                    t8 = *(signed char *)((a4 + 0x4));
                    (((struct oEE_ushort *)(a4))->v) = ((((t8 & 0xF) << 2) + (t8 & 0xF)) << 1);
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                    (((struct oF0_ushort *)(a4))->v) = 0x4;
                    (((struct oF2_ushort *)(a4))->v) = 0x1;
                    t9 = 0x1;
                    t5 = 0x4;
                }
                t7 = 0xF2;
                t8 = t9;
                t9 = t5;
            }
            t1 = t7;
            t0 = t8;
            t6 = t9;
        }
        t5 = t1;
        t1 = t0;
        t0 = t6;
        u0 = u1;
    } else {
        t6 = FUN_0c0c69e8(a4);
        t7 = (signed char)t6;
        if ((signed char)t6 != 0) {
        } else {
            FUN_0c0c67c4(a4);
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.699999988f);
            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.699999988f);
            (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.699999988f);
            FUN_0c0c688a(a4, 10.0f);
            t6 = (((struct oEE_short *)(a4))->v);
            (((struct oEE_ushort *)(a4))->v) = (t6 - 1);
            t8 = 0xEE;
            t9 = (short)(t6 - 1);
            if ((short)(t6 - 1) != 0) {
            } else {
                (((struct o58_float *)(a4))->v) = 8.0f;
                (((struct o54_float *)(a4))->v) = 8.0f;
                (((struct o50_float *)(a4))->v) = 8.0f;
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct oF0_ushort *)(a4))->v) = 0x4;
                (((struct oF2_ushort *)(a4))->v) = 0x1;
                t8 = 0xF2;
                t9 = 0x1;
                t6 = 0x4;
                u1 = 8.0f;
            }
            t7 = t8;
            t8 = t9;
            t9 = t6;
            u2 = u1;
        }
        t5 = t7;
        t1 = t8;
        t0 = t9;
        u0 = u2;
    }
    t6 = t5;
    t5 = ((0x2E0 + a4) + 0x4);
    t7 = t1;
    t1 = t0;
    t0 = t2;
    t2 = 0xC33C8B0;
    t8 = t3;
    t3 = 0x0;
    u1 = u0;
    for (;;) {
        if ((int)t3 >= (int)0x3) {
            break;
        }
        t6 = 0x50;
        t8 = t2;
        u0 = (*(float *)((t8 + 0x0)));
        t3 = (t3 + 0x1);
        u1 = (*(float *)((a4 + t6)));
        t6 = 0x1C;
        t9 = *(int *)((t5 + 0x0));
        t5 = (t5 + 0x4);
        t0 = t9;
        t2 = (t2 + 0x8);
        u0 = (u0 * u1);
        *(float *)((t0 + t6)) = u0;
        t6 = 0x54;
        u0 = (*(float *)((t8 + 0x0)));
        u1 = (*(float *)((a4 + t6)));
        t6 = 0x20;
        u0 = (u0 * u1);
        *(float *)((t0 + t6)) = u0;
        t6 = 0x58;
        u0 = (*(float *)((t8 + 0x0)));
        u1 = (*(float *)((a4 + t6)));
        t6 = 0x24;
        u0 = (u0 * u1);
        *(float *)((t0 + t6)) = u0;
        t1 = (*(int *)((t0 + 0x18)));
        t1 = (t1 + 0x400);
        t7 = t1;
        t7 = (t7 & 0xFFFF);
        *(unsigned int *)((t0 + 0x18)) = t7;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0x2D8;
    if (((short)(t0 - 1) != 0) && (t4 = *(signed char *)((a4 + 0x2D8)), t4 == 0)) {
    } else {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
        t1 = 0x2;
    }
    return t1;
}

int FUN_0c02e438(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)((a4 + 0x4));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return FUN_0c02e2da(a4);
                }
                return ((int (*)(int, int, int, int))(0xC02E2BC))(a4, a5, a6, a7);
            }
            return FUN_0c02e144(a4, f4, f5);
        }
        return FUN_0c02e092(a4);
    }
    *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
    *(unsigned char *)((a4 + 0x5)) = 0x0;
    *(unsigned short *)((a4 + 0x6)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = (*(signed char *)(((int)stk + 0)));
    (((struct o1D_uchar *)(a4))->v) = 0x0;
    FUN_0c02e00a(a4);
    *(unsigned char *)(((a4 + 0x2C) + 0x1)) = (*(signed char *)(((int)stk + 0)));
    (((struct o2C_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)(((a4 + 0x2C) + 0x2)) = 0x0;
    return FUN_0c02e092(a4);
}
