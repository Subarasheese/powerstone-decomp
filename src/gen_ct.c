/* Straight-line functions with calls and guards (batch gen_ct): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_short { char p[0x7248]; short v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o728C_float { char p[0x728C]; float v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
int FUN_0c04bef2(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0555dc(void);
int FUN_0c059330(int);
int FUN_0c0634b4(int);
int FUN_0c0667da(int);
int FUN_0c0668a0(int);
int FUN_0c08deec(int, int);
int FUN_0c08eba8(int, int);
int FUN_0c0980b0(int);
int FUN_0c09a910(int);
int FUN_0c09a91a(int);
int FUN_0c09c782(int);
int FUN_0c09da1c(int);
int FUN_0c09ddfe(int);
int FUN_0c0a2080(int);
int FUN_0c0a3762(int, int);
int FUN_0c0a3914(int, int);
int FUN_0c0ccefc(int, float, float);
int FUN_0c0ce836(void);
int FUN_0c0ce86e(int);
int FUN_0c0df360(float);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
float FUN_0c0dfce0(int);
int FUN_0c0e3510(void);
int nlMultiMatrix(int);
int sprintf(int, int, int, int, int);
int thunk_FUN_0c062242(int);
int FUN_0c0ce250(float f4);
int FUN_0c0368a0(int a4);
int FUN_0c08c304(int a4);
int FUN_0c0e2e90(int a4, float f4, float f5, float f6);
int FUN_0c10ca40(void);
int FUN_0c025d72(int a4, int a5, int a6, int a7);
int FUN_0c0668e2(int a4, int a5, int a6, int a7);
int FUN_0c1099e0(void);

int FUN_0c0ce250(float f4)
{

    register int R1;
    register int R2;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register float F3;
    register float F14;
    register float F15;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    w0_0 = f4;
    v0_0 = R13;
    v0_2 = R12;
    v0_3 = R11;
    v0_4 = R10;
    v0_5 = R9;
    v0_6 = R8;
    FUN_0c0ce86e((*(int *)0xC33EC6C));
    v0_1 = *(signed char *)0xC7F2EE9;
    v0_3 = ((unsigned char)v0_1);
    R12 = (0xC4948CC);
    R13 = (0xC7F2EE0);
    v0_0 = (0x0);
    v0_2 = (0xC7F2EE9);
    if (((unsigned char)v0_1 == 0)) goto L_C0CE290;
    if ((v0_3 == 1)) goto L_C0CE2AC;
    if ((v0_3 == 2)) goto L_C0CE2B4;
    if ((v0_3 == 3)) goto L_C0CE2BC;
    if ((v0_3 == 4)) goto L_C0CE366;
    L_C0CE37C:;
    w0_0 = (((struct o0_float *)0xC0CE488)->v);
    w0_1 = (((struct o4_float *)0xC0CE488)->v);
    R11 = (v0_0);
    R8 = (0xC0CCEFC);
    R9 = (0xC7F36B8);
    F14 = (w0_0);
    F15 = (w0_1);
    L_C0CE3E6:;
    v0_0 = *(signed char *)((R13 + 0xA));
    v0_3 = ((unsigned char)v0_0);
    if (((int)R11 < (int)(unsigned char)v0_0)) goto L_C0CE38C;
    return v0_3;
    L_C0CE38C:;
    v0_0 = (*(int *)((R12 + (R11 << 2)))) != 0;
    if (v0_0) goto L_C0CE39E;
    L_C0CE3A2:;
    sprintf(R9, R5, R6, R7, 0xC1534A8);
    R10 = ((R11 - 10));
    R5 = (0x7);
    w0_0 = (F15);
    w0_0 = (F14);
    if (((int)(R11 - 10) >= 0)) goto L_C0CE3C2;
    v0_0 = (R11);
    L_C0CE3C4:;
    w0_0 = (((float)(v0_0 + 0xA) * F14));
    FPUL_ = ((v0_0 + 0xA));
    if (((int)R10 >= 0)) goto L_C0CE3D6;
    v0_0 = (0x9);
    L_C0CE3D8:;
    FUN_0c0ccefc(R9, ((float)v0_0 * F15), w0_0);
    R11 = ((R11 + 0x1));
    goto L_C0CE3E6;
    L_C0CE3D6:;
    v0_0 = (0x11);
    goto L_C0CE3D8;
    L_C0CE3C2:;
    v0_0 = (R10);
    goto L_C0CE3C4;
    L_C0CE39E:;
    goto L_C0CE3A2;
    L_C0CE366:;
    v0_1 = (signed char)(FUN_0c0ce836()) == 0;
    if (v0_1) goto L_C0CE37C;
    *(unsigned char *)((R13 + 0x9)) = v0_0;
    L_C0CE376:;
    *(unsigned char *)((R13 + 0xA)) = v0_0;
    goto L_C0CE37C;
    L_C0CE2BC:;
    v0_1 = *(signed char *)((R13 + 0xA));
    v0_1 = *(int *)(((0xC17AEF0 + ((((unsigned char)v0_1 << 1) + (unsigned char)v0_1) << 2)) + 0x4));
    R10 = (0xD000000);
    R11 = (0x10000);
    R5 = (v0_1);
    R8 = (0xC17AEF0);
    R9 = (0x40);
    L_C0CE306:;
    if (((int)R5 > 0)) goto L_C0CE2D8;
    v0_1 = *(signed char *)((R13 + 0xA));
    v0_1 = (*(int *)((R12 + ((unsigned char)v0_1 << 2)))) != (*(int *)(((((((unsigned char)v0_1 << 1) + (unsigned char)v0_1) << 2) + R8) + 0x8)));
    if (v0_1) goto L_C0CE332;
    *(unsigned int *)((R12 + ((unsigned char)(*(signed char *)((R13 + 0xA))) << 2))) = v0_0;
    L_C0CE33C:;
    *(unsigned char *)((R13 + 0xA)) = ((*(signed char *)((R13 + 0xA))) + 0x1);
    v0_2 = *(signed char *)((R13 + 0xA));
    v0_1 = (*(int *)((R8 + ((((unsigned char)v0_2 << 1) + (unsigned char)v0_2) << 2)))) == -1;
    v0_2 = (v0_2);
    if (v0_1) goto L_C0CE35E;
    if (((int)(unsigned char)v0_2 < (int)0x14)) goto L_C0CE37C;
    L_C0CE35E:;
    *(unsigned char *)((R13 + 0x9)) = ((*(signed char *)((R13 + 0x9))) + 0x1);
    goto L_C0CE37C;
    L_C0CE332:;
    *(unsigned int *)((R12 + ((unsigned char)(*(signed char *)((R13 + 0xA))) << 2))) = 0xFFFFFFFF;
    goto L_C0CE33C;
    L_C0CE2D8:;
    R7 = (v0_0);
    L_C0CE302:;
    if (((int)R7 < (int)R9)) goto L_C0CE2DC;
    goto L_C0CE306;
    L_C0CE2DC:;
    v0_2 = (R10);
    R6 = (v0_0);
    L_C0CE2E0:;
    v0_1 = *(signed char *)((R13 + 0xA));
    v0_3 = (int)(R5 - 4) <= 0;
    *(unsigned int *)((R12 + ((unsigned char)v0_1 << 2))) = ((*(int *)((R12 + ((unsigned char)v0_1 << 2)))) + (*(int *)((v0_2 + 0x0))));
    R5 = ((R5 - 4));
    if (v0_3) goto L_C0CE306;
    v0_1 = (int)(R6 + 0x4) < (int)R11;
    v0_2 = ((v0_2 + 0x4));
    R6 = ((R6 + 0x4));
    if (v0_1) goto L_C0CE2E0;
    if (((int)R5 <= 0)) goto L_C0CE306;
    R7 = ((R7 + 0x1));
    goto L_C0CE302;
    L_C0CE2B4:;
    *(unsigned char *)((v0_2 + 0x0)) = ((*(signed char *)((v0_2 + 0x0))) + 0x1);
    goto L_C0CE37C;
    L_C0CE2AC:;
    *(unsigned char *)((v0_2 + 0x0)) = ((*(signed char *)((v0_2 + 0x0))) + 0x1);
    goto L_C0CE37C;
    L_C0CE290:;
    *(unsigned char *)((v0_2 + 0x0)) = ((*(signed char *)((v0_2 + 0x0))) + 0x1);
    v0_2 = (R12);
    R5 = (v0_0);
    R6 = (0x14);
    L_C0CE2A4:;
    if (((int)R5 < (int)R6)) goto L_C0CE29E;
    goto L_C0CE376;
    L_C0CE29E:;
    *(unsigned int *)((v0_2 + 0x0)) = v0_0;
    v0_2 = ((v0_2 + 0x4));
    R5 = ((R5 + 0x1));
    goto L_C0CE2A4;
}

int FUN_0c0368a0(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R10;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register float F12;
    register float F14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a4;
    v0_1 = (FUN_0c0555dc()) == 0;
    v0_0 = (v0_0);
    if (v0_1) goto L_C0368BC;
    *(unsigned char *)((v0_0 + 0x8)) = 0x4;
    L_C0368BC:;
    v0_2 = *(signed char *)((v0_0 + 0x8));
    v0_1 = (v0_2);
    w0_0 = (0.0249999985f);
    if ((v0_2 == 0)) goto L_C036908;
    if ((v0_1 == 1)) goto L_C036968;
    if ((v0_1 != 2)) goto L_C0368D2;
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o24_float *)(v0_1))->v) = (((((struct o24_float *)(v0_1))->v)) - w0_0);
    if ((0.0f > ((((struct o24_float *)(((((struct o2E0_int *)(v0_0))->v))))->v)))) goto L_C036A24;
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    v0_1 = (0xEC);
    if (((short)(v0_2 - 1) != 0)) goto L_C036A40;
    L_C036A24:;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    L_C036A40:;
    return v0_1;
    L_C0368D2:;
    if (!((v0_1 != 3))) goto L_C036A2C;
    if ((v0_1 != 4)) goto L_C0368E2;
    goto L_C036A2C;
    L_C036A2C:;
    return FUN_0c059330(v0_0);
    L_C0368E2:;
    goto L_C036A40;
    L_C036968:;
    if (((*(signed char *)((v0_0 + 0x2D8))) != 0)) goto L_C03697E;
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (!(((short)(v0_1 - 1) != 0))) goto L_C03697E;
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) + ((((struct o38_float *)(v0_0))->v)));
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) - ((((struct o3C_float *)(v0_0))->v)));
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + ((((struct o40_float *)(v0_0))->v)));
    v0_0 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + w0_0);
    v0_1 = (0x24);
    goto L_C036A40;
    L_C03697E:;
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) - ((((struct o38_float *)(v0_0))->v)));
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + ((((struct o3C_float *)(v0_0))->v)));
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) - ((((struct o40_float *)(v0_0))->v)));
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o24_float *)(v0_1))->v) = (((((struct o24_float *)(v0_1))->v)) - w0_0);
    (((struct oEC_ushort *)(v0_0))->v) = 0x3C;
    goto L_C036A24;
    L_C036908:;
    w0_1 = FUN_0c0dfa50(((-(*(int *)((v0_0 + 0x2C)))) + 0x14000));
    w0_1 = (w0_1 * (FUN_0c0df4d0(((-(*(int *)((v0_0 + 0x30)))) + 0x14000))));
    (((struct o38_float *)(v0_0))->v) = (w0_1 * 50.0f);
    (((struct o3C_float *)(v0_0))->v) = ((FUN_0c0df4d0(((-(*(int *)((v0_0 + 0x2C)))) + 0x14000))) * 50.0f);
    w0_2 = FUN_0c0dfa50(((-(*(int *)((v0_0 + 0x2C)))) + 0x14000));
    w0_1 = FUN_0c0dfa50(((-(*(int *)((v0_0 + 0x30)))) + 0x14000));
    w0_2 = (w0_2 * w0_1);
    (((struct o40_float *)(v0_0))->v) = (w0_2 * 50.0f);
    (((struct o2D9_uchar *)(v0_0))->v) = 0x2;
    (((struct oEC_ushort *)(v0_0))->v) = 0x3C;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    w0_1 = (w0_1);
    goto L_C036968;
}

int FUN_0c08c304(int a4)
{
    int stk[12];
    register int t0;
    register int t11;
    register int t28;
    register int t30;
    register int t41;
    register int t52;
    register int t61;
    int t12;
    register int t13;
    int t20;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        FUN_0c0980b0(a4);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t61 = 0x71A8;
    } else {
        if (((((struct oEC_short *)(a4))->v)) == 0) {
            FUN_0c09a91a((*(int *)((a4 + 0x1C))));
            FUN_0c09da1c((*(int *)((a4 + 0x1C))));
        }
        t11 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (t11 - 1);
        if (((short)(t11 - 1) == 0) && (t12 = *(int *)((a4 + 0x1C)), t13 = *(signed char *)((t12 + 0x71F1)), t13 == 0)) {
            (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
        }
        if (((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71AA))) != 0) && (t20 = (((struct oEC_short *)(a4))->v), t20 == 0)) {
            (((struct oEC_ushort *)(a4))->v) = 0x1;
            FUN_0c08eba8(a4, 0x30);
            FUN_0c08deec(a4, 0x30);
        }
        FUN_0c09da1c(a4);
        t28 = (((struct o719E_short *)(a4))->v);
        if ((unsigned short)t28 != 14) {
            if ((unsigned short)t28 != 41) {
                t61 = (unsigned short)t28;
                if ((unsigned short)t28 != 71) {
                } else {
                    FUN_0c0a3914(a4, 0x5);
                    t30 = *(signed char *)((a4 + 0x3));
                    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t30 * (unsigned short)0x72D0) + 0xC7E40C4);
                    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t30 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t30 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840));
                    FUN_0c04bef2((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                    t61 = (FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x0));
                }
            } else {
                FUN_0c0a3914(a4, 0x4);
                FUN_0c08eba8(a4, 0x31);
                t41 = *(signed char *)((a4 + 0x3));
                *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t41 * (unsigned short)0x72D0) + 0xC7E40C4);
                thunk_FUN_0c062242((((((unsigned short)((unsigned short)t41 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t41 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840));
                FUN_0c04bef2((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                t61 = (FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x0));
            }
        } else {
            FUN_0c0a3914(a4, 0x4);
            FUN_0c08eba8(a4, 0x31);
            t52 = *(signed char *)((a4 + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t52 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t52 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t52 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840));
            FUN_0c04bef2((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            t61 = (FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x0));
        }
    }
    return t61;
}

int FUN_0c0e2e90(int a4, float f4, float f5, float f6)
{
    int stk[20];
    register int t0;
    register float t4;
    register int t6;
    register float u14;
    register float u15;
    register float u24;
    register int t16;
    register int t26;
    register float t27;
    register float u28;
    register float u31;
    register float u32;
    register float u33;
    register float u36;
    register float u37;
    register float u38;
    register float u41;
    register float u42;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(float *)(((int)stk + 8)) = f4;
    t0 = *(int *)(((int)stk + 4));
    *(float *)(((int)stk + 0)) = (1.0f / (FUN_0c0dfce0((t0 >> 1))));
    if (((((struct oC_float *)0xC346AB0)->v)) != 0.0f) {
        t4 = FUN_0c0dfce0((t0 >> 1));
        t6 = FUN_0c0df360((t4 * (((((struct oC_float *)0xC346AB0)->v)) + 1.0f)));
        *(float *)(((int)stk + 12)) = (1.0f / (FUN_0c0df4d0(t6)));
    } else {
        *(float *)(((int)stk + 12)) = (1.0f / (FUN_0c0df4d0((t0 >> 1))));
    }
    u14 = *(float *)(((int)stk + 0));
    u15 = *(float *)(((int)stk + 8));
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
    u28 = *(float *)0xC0E3164;
    u31 = (u15 * u14);
    u32 = ((*(float *)(((int)stk + 0))) * (*(float *)(((int)stk + 12))));
    u33 = (u31 * (1.0f / t27));
    (((struct o0_float *)0xC346AB0)->v) = (u32 * u28);
    (((struct o4_float *)0xC346AB0)->v) = (u33 * u28);
    (((struct o0_float *)0xC7FCF68)->v) = (((((struct o14_float *)0xC346AB0)->v)) * ((((struct o0_float *)0xC346AB0)->v)));
    u36 = (((struct o4_float *)0xC346AB0)->v);
    u37 = (((struct o18_float *)0xC346AB0)->v);
    (((struct o4_float *)0xC7FCF68)->v) = (u37 * u36);
    u38 = (((struct o0_float *)0xC7FCF68)->v);
    if (u38 > (u37 * u36)) {
        (((struct o8_float *)0xC346AB0)->v) = u38;
    } else {
        (((struct o8_float *)0xC346AB0)->v) = (u37 * u36);
    }
    *(float *)(((int)stk + 16)) = (*(float *)(((int)stk + 0)));
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = (u15 * u14);
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = ((f5 + f6) / (f5 - f6));
    *(float *)(((int)stk + 60)) = 1.0f;
    *(float *)(((int)stk + 64)) = 0.0f;
    *(float *)(((int)stk + 68)) = 0.0f;
    u41 = (f5 * f6);
    u42 = (u41 * (1.0f + 1.0f));
    u42 = -u42;
    *(float *)(((int)stk + 72)) = (u42 / (f5 - f6));
    *(float *)(((int)stk + 76)) = 0.0f;
    (((struct o0_float *)0xC7FD63C)->v) = f5;
    (((struct o4_float *)0xC7FD63C)->v) = f6;
    (((struct o8_float *)0xC7FD63C)->v) = (1.0f / f5);
    (((struct o18_float *)0xC7FCC8C)->v) = f5;
    (((struct o0_float *)0xC7FCC8C)->v) = (-f5);
    (((struct o1C_float *)0xC7FCC8C)->v) = f6;
    (((struct o14_float *)0xC7FCC8C)->v) = (1.0f / f5);
    nlMultiMatrix((((int)stk + 0) + 0x10));
    return (FUN_0c0e3510());
}

int FUN_0c10ca40(void)
{
    int stk[63];
    register int t1;
    int t7;
    register int t12;

    *(unsigned int *)((((int)stk + 0) + 0x8)) = 0x35F;
    if (((((((struct o20_int *)0xC816FC4)->v)) & 0x1) != 1) && ((t1 = (((struct o20_int *)0xC816FC4)->v), (t1 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 0) + 0x14)) = 0x270;
    } else {
        *(unsigned int *)((((int)stk + 0) + 0x14)) = 0x138;
    }
    *(unsigned int *)((((int)stk + 0) + 0x0)) = 0x8D;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = 0x34B;
    *(unsigned int *)((((int)stk + 0) + 0xC)) = 0x2C;
    *(unsigned int *)((((int)stk + 0) + 0x10)) = 0x26C;
    *(unsigned int *)((((int)stk + 0) + 0x18)) = 0x3F;
    *(unsigned int *)((((int)stk + 0) + 0x1C)) = 0x5;
    (((struct o74_uint *)(((int)stk + 0)))->v) = 0x136;
    (((struct o78_uint *)(((int)stk + 0)))->v) = 0x15;
    if (((((((struct o20_int *)0xC816FC4)->v)) & 0x1) != 1) && ((t7 = (((struct o20_int *)0xC816FC4)->v), (0x2C & t7) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 0) + 0x20)) = 0x16A;
    } else {
        *(unsigned int *)((((int)stk + 0) + 0x20)) = 0x31F;
    }
    if (((((((struct o20_int *)0xC816FC4)->v)) & 0x1) != 1) && ((t12 = (((struct o20_int *)0xC816FC4)->v), (t12 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 0) + 0x30)) = 0x1;
    } else {
        *(unsigned int *)((((int)stk + 0) + 0x30)) = 0x0;
    }
    *(unsigned int *)((((int)stk + 0) + 0x34)) = 0x0;
    *(unsigned int *)((((int)stk + 0) + 0x38)) = 0x0;
    *(unsigned int *)((((int)stk + 0) + 0x3C)) = 0x0;
    (((struct o40_uint *)(((int)stk + 0)))->v) = 0x0;
    if ((((((struct o20_int *)0xC816FC4)->v)) & 0x1) == 1) {
        if (0x0 != 0) {
            (((struct o44_uint *)(((int)stk + 0)))->v) = 0x0;
        } else {
            (((struct o44_uint *)(((int)stk + 0)))->v) = 0x2;
        }
    } else {
        if ((((((struct o20_int *)0xC816FC4)->v)) & 44) != 0) {
            if (0x1 != 0) {
                (((struct o44_uint *)(((int)stk + 0)))->v) = 0x0;
            } else {
                (((struct o44_uint *)(((int)stk + 0)))->v) = 0x2;
            }
        } else {
            if (0x0 != 0) {
                (((struct o44_uint *)(((int)stk + 0)))->v) = 0x0;
            } else {
                (((struct o44_uint *)(((int)stk + 0)))->v) = 0x2;
            }
        }
    }
    if (((((struct o0_int *)0xC816FC4)->v)) == 6) {
        (((struct o70_uint *)(((int)stk + 0)))->v) = 0x16;
    } else {
        (((struct o70_uint *)(((int)stk + 0)))->v) = 0x3F;
    }
    if ((((((struct o20_int *)0xC816FC4)->v)) & 16) != 0) {
        (((struct o6C_uint *)(((int)stk + 0)))->v) = 0x0;
    } else {
        (((struct o6C_uint *)(((int)stk + 0)))->v) = 0x1;
    }
    *(unsigned int *)((((int)stk + 0) + 0x24)) = 0x1F;
    *(unsigned int *)((((int)stk + 0) + 0x28)) = 0x0;
    *(unsigned int *)((((int)stk + 0) + 0x2C)) = 0x1;
    (((struct o48_uint *)(((int)stk + 0)))->v) = 0x1;
    (((struct o4C_uint *)(((int)stk + 0)))->v) = 0x0;
    (((struct o50_uint *)(((int)stk + 0)))->v) = 0x0;
    (((struct o54_uint *)(((int)stk + 0)))->v) = 0x0;
    (((struct o58_uint *)(((int)stk + 0)))->v) = 0x0;
    (((struct o5C_uint *)(((int)stk + 0)))->v) = 0x0;
    (((struct o68_uint *)(((int)stk + 0)))->v) = 0x0;
    (((struct o60_uint *)(((int)stk + 0)))->v) = 0x0;
    (((struct o64_uint *)(((int)stk + 0)))->v) = 0xF0;
    (((struct oF8_uint *)(((int)stk + 0)))->v) = 0xAE;
    *(volatile int *)0xC816FE4;
    return ((int (*)(int, int, int, int))(0xC10CBE0))(0x0, 0x1, 0x3F, 0xF0);
}

int FUN_0c025d72(int a4, int a5, int a6, int a7)
{
    return ((int (*)(int, int, int, int))(0xC025F26))(a4, a5, a6, a7);
}

int FUN_0c0668e2(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t1 = FUN_0c09c782(a4);
    if ((signed char)t1 != 0) {
        FUN_0c0634b4(a4);
        (((struct o7236_uchar *)(a4))->v) = 0x0;
        (((struct o71CC_uint *)(a4))->v) = 0x0;
        (((struct o48_float *)(a4))->v) = ((((struct o728C_float *)(a4))->v));
        return FUN_0c0a2080(a4);
    }
    if (((*(signed char *)((a4 + 0xC))) == 1) && (t0 = (((struct o2DC_int *)(a4))->v), (t0 & 240) != 0)) {
        (((struct o7248_uint *)(a4))->v) = (unsigned short)(((FUN_0c09ddfe(a4)) + (*(short *)0xC7F31E0)) - (*(int *)((a4 + 0x30))));
        if ((((((struct o7248_int *)(a4))->v)) & 0x8000) != 0) {
            (((struct o7248_uint *)(a4))->v) = (((((struct o7248_int *)(a4))->v)) | 0xFFFF0000);
        }
        t0 = (((struct o7248_int *)(a4))->v);
        if (((int)t0 > (int)0x16C) || ((int)t0 < (int)0xFFFFFE94)) {
            if ((int)((((struct o7248_int *)(a4))->v)) > 0) {
                (((struct o7248_uint *)(a4))->v) = 0x16C;
            } else {
                (((struct o7248_uint *)(a4))->v) = 0xFFFFFE94;
            }
            *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + ((((struct o7248_short *)(a4))->v)));
        }
        t0 = 0x16C;
    }
    t1 = *(signed char *)((a4 + 0xC));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                return t1;
            }
            return FUN_0c0668a0(a4);
        }
        return ((int (*)(int, int, int, int))(0xC06680A))(a4, t0, a6, a7);
    }
    return FUN_0c0667da(a4);
}

int FUN_0c1099e0(void)
{
    int stk[8];
    register int t1;
    register int t7;
    register int t8;
    register int t34;
    register int t15;
    register int t16;
    register int t17;
    register int t28;
    register int t47;
    register int t36;
    register int t43;
    register int t50;
    register int t51;
    register int t52;
    register int t70;
    register int t72;
    register int t31;
    register int t14;

    *(unsigned int *)(((int)stk + 28)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    t1 = (((struct o8_int *)0xC347648)->v);
    if (t1 != 0) {
        for (;;) {
            if ((int)(*(int *)((t1 + 0x10))) > (int)(*(int *)(((int)stk + 4)))) {
                *(unsigned int *)(((int)stk + 4)) = (*(int *)((t1 + 0x10)));
            }
            t7 = *(int *)(((int)stk + 20));
            t8 = *(int *)((t1 + 0x10));
            *(unsigned int *)(((int)stk + 20)) = (t7 + t8);
            t1 = (*(int *)((t1 + 0x8)));
            if (t1 == 0) {
                break;
            }
        }
        t15 = (t7 + t8);
        t34 = t8;
    }
    t16 = (((struct o0_int *)0xC347648)->v);
    if (t16 != 0) {
        for (;;) {
            t17 = *(short *)((t16 + 0x0));
            t28 = (unsigned short)t17;
            if (((unsigned short)t17 & 0x4) == 0) {
                t15 = (*(int *)((t16 + 0x10)));
                t14 = (*(int *)(((int)stk + 4)));
                if ((int)t15 > (int)t14) {
                    *(unsigned int *)(((int)stk + 4)) = (*(int *)((t16 + 0x10)));
                }
                t15 = (*(int *)(((int)stk + 16)));
                t28 = *(int *)((t16 + 0x10));
                t15 = (t15 + t28);
                *(unsigned int *)(((int)stk + 16)) = t15;
            }
            t16 = (*(int *)((t16 + 0x8)));
            if (t16 == 0) {
                break;
            }
        }
        t31 = t14;
        t34 = t28;
    }
    *(unsigned int *)(((int)stk + 0)) = 0xC34765C;
    t36 = (((struct o1C_int *)0xC347648)->v);
    t47 = t34;
    if (t36 != 0) {
        for (;;) {
            if ((int)(*(int *)((t36 + 0x10))) > (int)(*(int *)(((int)stk + 8)))) {
                *(unsigned int *)(((int)stk + 8)) = (*(int *)((t36 + 0x10)));
            }
            t43 = *(int *)((t36 + 0x10));
            *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + t43);
            t36 = (*(int *)((t36 + 0x8)));
            if (t36 == 0) {
                break;
            }
        }
        t47 = t43;
    }
    t52 = *(int *)(((*(int *)(((int)stk + 0))) + 0x0));
    if (t52 != 0) {
        t50 = t31;
        t51 = t47;
        for (;;) {
            if (((unsigned short)(*(short *)((t52 + 0x0))) & 0x4) == 0) {
                t51 = (*(int *)((t52 + 0x10)));
                t50 = (*(int *)(((int)stk + 8)));
                if ((int)t51 > (int)t50) {
                    t51 = (*(int *)((t52 + 0x10)));
                    *(unsigned int *)(((int)stk + 8)) = t51;
                }
                t51 = (*(int *)((t52 + 0x10)));
                *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + t51);
            }
            t52 = (*(int *)((t52 + 0x8)));
            if (t52 == 0) {
                break;
            }
        }
    }
    t70 = (((struct o28_int *)0xC347648)->v);
    if (t70 == 0) {
        return ((int (*)(void))(0xC109BD0))();
    }
    t72 = *(short *)((t70 + 0x0));
    if (((unsigned short)t72 & 0xF000) != 0x1000) {
        if (((unsigned short)t72 & 0xF000) != 0x2000) {
            if (((unsigned short)t72 & 0xF000) != 0x3000) {
                if (((unsigned short)t72 & 0xF000) != 0x4000) {
                    if (((unsigned short)t72 & 0xF000) != 0x5000) {
                        if (((unsigned short)t72 & 0xF000) != 0x6000) {
                            if (((unsigned short)t72 & 0xF000) != 0x7000) {
                                if (((unsigned short)t72 & 0xF000) != 0x8000) {
                                    return ((int (*)(void))(0xC109BA0))();
                                }
                                return ((int (*)(void))(0xC109BA4))();
                            }
                            return ((int (*)(void))(0xC109BA4))();
                        }
                        return ((int (*)(void))(0xC109BA4))();
                    }
                    return ((int (*)(void))(0xC109BA4))();
                }
                return ((int (*)(void))(0xC109BA4))();
            }
            return ((int (*)(void))(0xC109BA4))();
        }
        return ((int (*)(void))(0xC109BA4))();
    }
    return ((int (*)(void))(0xC109BA4))();
}
