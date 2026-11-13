/* Straight-line functions with calls and guards (batch gen_ac): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[6]; } Stk6;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10E8_int { char p[0x10E8]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_short { char p[0x14]; short v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o16_short { char p[0x16]; short v; };
struct o18_int { char p[0x18]; int v; };
struct o18_short { char p[0x18]; short v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o2F8_int { char p[0x2F8]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uchar { char p[0x40]; unsigned char v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F8_int { char p[0x71F8]; int v; };
struct o721E_uchar { char p[0x721E]; unsigned char v; };
struct o7222_uchar { char p[0x7222]; unsigned char v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXSTM_GetCurOfst(int, int);
int FUN_0c01013c(void);
int FUN_0c027fa4(int, int, int);
int FUN_0c02d9e0(void);
int FUN_0c0314dc(void);
int FUN_0c059132(int, int, int);
int FUN_0c05ef8c(int);
int FUN_0c05f136(void);
int FUN_0c06233a(int, int, int);
int FUN_0c062de8(int);
int FUN_0c063428(int);
int FUN_0c0634b4(int);
int FUN_0c0685a0(int);
int FUN_0c0997a2(int, int, int, int);
int FUN_0c099930(int);
int FUN_0c099a88(int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09c422(int);
int FUN_0c09c45a(int);
int FUN_0c09c782(int);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09da1c(int);
int FUN_0c09e7b8(int);
int FUN_0c0a1d88(int, int);
int FUN_0c0a2080(int);
int FUN_0c0a2f52(void);
int FUN_0c0a3914(int, int);
int FUN_0c0abe44(int, int);
int FUN_0c0b146e(int, int);
int FUN_0c0c6658(int, int);
int FUN_0c0ccefc(int, float, float);
int FUN_0c0ccf38(int, int, int);
int FUN_0c0d41f0(void);
int FUN_0c0d437a(void);
int FUN_0c0d44c4(void);
float FUN_0c0d5bc0(void);
int FUN_0c0dc18e(int, int);
int nlObjPutUseViewMatrix(int);
int FUN_0c0dcd20(float, float, float);
int FUN_0c0de280(int, int, int);
int FUN_0c0df360(float);
int nlPopMatrix(int);
int FUN_0c0e19b0(int);
int nlScale(float, float, float);
int FUN_0c0e2050(int);
int FUN_0c0e2140(int);
int nlUnitMatrix(void);
int FUN_0c0e24f0(int, int, int, float, float, float, float);
int syRtcDbgWriteLog(int);
int FUN_0c0e6e5c(int);
int FUN_0c0e6fdc(int);
int FUN_0c0e6fe8(int, int, int);
int FUN_0c0eb0f0(int, int, int, int, int, int);
int FUN_0c0efc6a(int, int, int, int, int, int);
int FUN_0c0f1fa4(int, int, int);
int FUN_0c0f4128(int);
int pdVibMxStop(int);
int FUN_0c0f4c2c(void);
int FUN_0c0f4f14(int);
int FUN_0c0f4f1a(int);
int FUN_0c0f553a(int);
int FUN_0c0fc38c(int, int, int, int);
int FUN_0c0fc5da(int, int, int, int);
int FUN_0c0fcea0(int, int);
int FUN_0c100260(void);
int kdGetDeviceInfo(int);
int kdDevGetLCDInfo(int, int);
int kdSetCallback(int, int, int);
int FUN_0c106436(int, int, int, int);
int FUN_0c106654(int);
int FUN_0c10a2e0(int, int, int);
int FUN_0c10b5f2(int);
int kmiWriteRegister(int, int);
int kmiCopyToFrameBuffer(int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_set_getminfo_ns(int, int, int);
int FUN_0c114fcc(int, int, int);
extern float _builtin_sqrtf(float);
extern int _builtin_tas(char *);
extern int mwRnaErrCallFunc();
int strncpy(int, int, int);
int FUN_0c055cba(void);
int FUN_0c05600c(void);
int FUN_0c0565b4(void);
int FUN_0c056340(void);
int FUN_0c0567c4(void);
int FUN_0c056b2c(void);
int FUN_0c0577ca(void);
int FUN_0c057da8(void);
int FUN_0c057ab6(void);
int FUN_0c058460(void);
int FUN_0c0586de(void);
int FUN_0c056e2c(void);
int FUN_0c08ce30(int a4, int a5);
int FUN_0c07b2c4(int a4);
int FUN_0c099a24(int a4);
int FUN_0c0a3274(void);
int FUN_0c0a8600(void);
int FUN_0c0a9d12(int a4, int a5, int a6);
int FUN_0c0aade8(void);
int FUN_0c0b147c(int a4, int a5, int a6);
int FUN_0c0c63c4(int a4, int a5);
int FUN_0c0fd1e0(int a4, int a5, int a6, int a7);
int FUN_0c109440(int a4, int a5, int a6);
int kmiInitializeBackGroundPlane(void);
int FUN_0c019a06(int a4);
int FUN_0c02754e(int a4, int a5);
int FUN_0c024300(int a4, float f4, float f5, float f6, float f7);
int FUN_0c0275ac(int a4, int a5);
int FUN_0c0243b0(int a4, int a5, float f4, float f5, float f6);
int FUN_0c05d536(int a4, int a5, int a6, int a7);
int FUN_0c0638a0(int a4);
int FUN_0c063bb8(int a4);
int FUN_0c066398(int a4);
int FUN_0c099966(int a4);
int FUN_0c09bafe(void);
int FUN_0c0a25e0(int a4, int a5, int a6, int a7);
int FUN_0c0d45fe(void);
int FUN_0c0d44d0(void);
int FUN_0c0dca60(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0dd880(int a4, int a5, int a6);
int pdVmsLcdIsReady(int a4);
int FUN_0c0fcff0(int a4);
int FUN_0c1126ba(int a4, int a5);
int FUN_0c01e444(void);
int FUN_0c05941e(int a4, int a5, int a6, int a7);
int FUN_0c0597ce(void);
int FUN_0c061f9c(int a4);
int FUN_0c065cb4(int a4);
int FUN_0c0852a6(int a4, int a5);
int FUN_0c0abd84(int a4);
float FUN_0c0ad15c(int a4);
int FUN_0c0cec2e(void);
int FUN_0c0ce88c(int a4, int a5);
int FUN_0c0ce910(int a4, int a5);
void FUN_0c0d5c22(int a4);
int syRtcAicaGetCount(int a4);
int FUN_0c0f0d04(int a4, int a5, int a6, int a7);
int FUN_0c0fb4e0(void);
int FUN_0c0fbfa2(int a4, int a5, int a6, int a7);
int kdSetGetMediaInfoEx(int a4, int a5, int a6, int a7);
int ADXSTM_OpenRange(int a4, int a5, int a6);
int FUN_0c108094(int a4, int a5, int a6, int a7);
int FUN_0c10bb58(int a4);
int FUN_0c066668(int a4);
int FUN_0c09eb32(int a4, int a5);
int ADXF_Stop(int a4);
int FUN_0c01b4f2(int a4, int a5, int a6, int a7);
int FUN_0c01b936(int a4, int a5);
int FUN_0c01d1ce(int a4, int a5);
int FUN_0c01e606(int a4, int a5);
int FUN_0c0205fe(int a4, int a5, int a6, int a7, int a8);
int FUN_0c021178(int a4, Stk6 s, float f4, float f5, float f6, float f7);
int FUN_0c04bfd0(int a4);
int FUN_0c052708(void);
int FUN_0c0557d6(int a4);
int FUN_0c0689e4(int a4);
int FUN_0c073046(int a4);
int FUN_0c095472(void);
int FUN_0c0dfba0(int a4, int a5, int a6, int a7, float f4);













int FUN_0c08ce30(int a4, int a5)
{
    register int t0;
    int t1;
    register int t2;

    if (((*(signed char *)(((*(int *)((a5 + 0x1C))) + 0x4))) == 6) && ((t0 = *(signed char *)((a4 + 0x1D)), (t0 & 1) == 0) && (t1 = *(int *)((a5 + 0x1C)), t2 = *(signed char *)((0x71BA + t1)), t2 == 33))) {
        (((struct o1D_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1D))) | 0x1);
        *(unsigned char *)((a4 + 0x0)) = 0x2;
        *(unsigned char *)(((0x1 + a4) + 0x0)) = 0x0;
        *(unsigned char *)((a4 + 0x2)) = 0x0;
        *(unsigned char *)((a4 + 0x3)) = 0x0;
        (((struct o1F_uchar *)(a4))->v) = 0x0;
        t0 = *(signed char *)((a4 + 0x1C));
        (((struct o1C_uchar *)(a4))->v) = (t0 + 0x1);
        if ((int)(signed char)(t0 + 0x1) <= (int)0x3) {
            *(unsigned int *)((a4 + 0x10)) = 0xC338410;
        } else {
            *(unsigned int *)((a4 + 0x10)) = 0xC338412;
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c07b2c4(int a4)
{
    register int t0;

    FUN_0c09a910(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t0 = FUN_0c09e7b8(a4);
        if ((signed char)t0 != 0) {
            FUN_0c0dc18e(0x1E, 0x1E);
            FUN_0c09a808(a4, 0x1, 0x38);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            FUN_0c09c45a(a4);
            t0 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
            return (t0 + 0x1);
        }
    }
    FUN_0c09d990(a4);
    return FUN_0c09d9bc(a4);
}


int FUN_0c0a3274(void)
{
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t18;
    register int t20;
    register int t0;
    register int t1;

    t2 = 0xC494048;
    t3 = 0x0;
    t4 = 0xC494048;
    t5 = 0xC494048;
    t6 = 0xC494048;
    for (;;) {
        t18 = t1;
        t20 = t2;
        if ((*(int *)((t4 + 0x0))) != 0) {
            t2 = (*(int *)((t5 + 0x0)));
            t0 = (FUN_0c0f4f14(t2));
            t2 = t0;
            if (t2 != 0) {
                t2 = (*(int *)((t6 + 0x0)));
                t0 = (FUN_0c0f4f1a(t2));
                t2 = (*(int *)((t6 + 0x0)));
                t0 = (FUN_0c0f4c2c());
                t1 = (*(int *)0xC339C80);
                t1 = (t1 + 0x1);
                *(unsigned int *)0xC339C80 = t1;
                t18 = t1;
            } else {
                t20 = t2;
            }
        }
        t3 = (t3 + 0x1);
        t1 = t18;
        t2 = t20;
        t5 = (t5 + 0x4);
        t6 = (t6 + 0x4);
        t4 = (t4 + 0x4);
        if ((int)t3 >= (int)0x2) {
            break;
        }
    }
    return t0;
}




int FUN_0c0b147c(int a4, int a5, int a6)
{
    register int t0;
    register int t2;
    register int t3;

    t0 = 0x1B;
    if ((unsigned char)(*(signed char *)((a5 + 0x1B))) != 0xFF) {
        if ((*(signed char *)((a5 + 0x1B))) != 0) {
            t0 = ((*(int *)((a4 + 0x14))) - (int)(((float)a6 * 65536.0f) / 360.0f));
        } else {
            t0 = ((*(int *)((a4 + 0x14))) + (int)(((float)a6 * 65536.0f) / 360.0f));
        }
        *(unsigned int *)((a4 + 0x14)) = t0;
        t2 = *(signed char *)((a5 + 0x1B));
        t3 = FUN_0c0b146e((*(int *)((a5 + 0x10))), t0);
        t0 = (signed char)t3;
        if ((unsigned char)t2 != (signed char)t3) {
            (((struct o1B_uchar *)(a5))->v) = 0xFF;
            t0 = 0x1B;
        }
    }
    return t0;
}

int FUN_0c0c63c4(int a4, int a5)
{
    int stk[2];
    register int t1;
    register int t7;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t1 = (((struct o2E4_int *)((*(int *)(((int)stk + 0)))))->v);
    (((struct o30_float *)(t1))->v) = 0.0f;
    (((struct o2C_float *)(t1))->v) = 0.0f;
    (((struct o28_float *)(t1))->v) = 0.0f;
    *(unsigned char *)((t1 + 0x0)) = 0x1;
    *(unsigned short *)((t1 + 0x2)) = 0xF;
    FUN_0c06233a(t1, 0xC664988, (*(signed char *)((((*(signed char *)(((int)stk + 4))) << 1) + 0xC33C7A8))));
    t7 = (((struct o2E8_int *)((*(int *)(((int)stk + 0)))))->v);
    (((struct o30_float *)(t7))->v) = 0.0f;
    (((struct o2C_float *)(t7))->v) = 0.0f;
    (((struct o28_float *)(t7))->v) = 0.0f;
    *(unsigned char *)((t7 + 0x0)) = 0x0;
    *(unsigned short *)((t7 + 0x2)) = 0x21F;
    return FUN_0c06233a(t7, 0xC664988, 0xF);
}

int FUN_0c0fd1e0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t6;
    register int t7;

    t0 = FUN_0c0fcea0(a6, a6);
    if ((a7 & 1) != 0) {
        t6 = ((*(int *)(((t0 << 2) + 0xC15AC04))) + 0xA);
        t7 = (*(int *)(((t0 << 2) + 0xC15AB0C)));
    } else {
        t6 = (*(int *)(((t0 << 2) + 0xC15ABD8)));
        t7 = (*(int *)(((t0 << 2) + 0xC15AAF0)));
    }
    kmiCopyToFrameBuffer(a4, a5, t7);
    return kmiCopyToFrameBuffer((a4 + 0x800), (a5 + t7), t6);
}


int kmiInitializeBackGroundPlane(void)
{
    (((struct o0_uint *)0xC817064)->v) = 0x80800000;
    (((struct o4_uint *)0xC817064)->v) = 0x20800000;
    (((struct o8_uint *)0xC817064)->v) = 0x0;
    (((struct oC_uint *)0xC817064)->v) = 0x40000000;
    (((struct o10_uint *)0xC817064)->v) = 0x43820000;
    (((struct o14_uint *)0xC817064)->v) = 0x3727C5AC;
    (((struct o18_uint *)0xC817064)->v) = 0xFF000000;
    (((struct o1C_uint *)0xC817064)->v) = 0x43160000;
    (((struct o20_uint *)0xC817064)->v) = 0x40000000;
    (((struct o24_uint *)0xC817064)->v) = 0x3727C5AC;
    (((struct o28_uint *)0xC817064)->v) = 0xFF000000;
    (((struct o2C_uint *)0xC817064)->v) = 0x440C0000;
    (((struct o30_uint *)0xC817064)->v) = 0x43820000;
    (((struct o34_uint *)0xC817064)->v) = 0x3727C5AC;
    (((struct o38_uint *)0xC817064)->v) = 0xFF000000;
    (((struct o4_uint *)0xC81716C)->v) = ((((struct o14_int *)0xC817064)->v));
    (((struct o0_uint *)0xC81716C)->v) = 0x1000000;
    return 0x0;
}

int FUN_0c019a06(int a4)
{
    int stk[17];

    *(unsigned int *)(((int)stk + 8)) = ((short)(((a4 << 1) + a4) << 2) + 0xC11B7C8);
    FUN_0c0e6fdc(a4);
    *(float *)(((int)stk + 24)) = (*(float *)0xC019B10);
    *(unsigned int *)(((int)stk + 52)) = 0x0;
    *(float *)(((int)stk + 56)) = 1.0f;
    *(unsigned int *)(((int)stk + 64)) = 0x5;
    *(float *)(((int)stk + 28)) = 1.0f;
    *(float *)(((int)stk + 32)) = 1.0f;
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    *(volatile short *)(((*(int *)(((int)stk + 8))) + 0x0));
    return (FUN_0c027fa4((((int)stk + 0) + 0xC), 0xC17FEA4, 0x1));
}

int FUN_0c02754e(int a4, int a5)
{
    register int t3;

    t3 = *(int *)((((short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2) + ((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0)) + 0x4));
    if (((unsigned short)(*(short *)(((((unsigned char)a4 << 2) << 1) + 0xC362A90))) & (unsigned short)(*(short *)((t3 + 0x8)))) != (unsigned short)(*(short *)((t3 + 0x6)))) {
        *(unsigned short *)((((short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2) + ((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0)) + 0x0)) = (*(short *)(((t3 + 0x10) + 0x0)));
        *(unsigned short *)((((short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2) + ((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0)) + 0x2)) = (*(short *)(((t3 + 0x10) + 0x2)));
        *(unsigned int *)((((short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2) + ((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0)) + 0x4)) = (t3 + 0x10);
        return 0x0;
    }
    return 0x1;
}

int FUN_0c024300(int a4, float f4, float f5, float f6, float f7)
{
    FUN_0c0e19b0(0x0);
    nlUnitMatrix();
    FUN_0c0e2140(a4);
    nlScale(f4, f4, f4);
    FUN_0c0dcd20(f5, f6, f7);
    nlObjPutUseViewMatrix(0xC179D00);
    FUN_0c0dcd20(1.0f, 1.0f, 1.0f);
    return nlPopMatrix(0x1);
}

int FUN_0c0275ac(int a4, int a5)
{
    register int t1;

    t1 = *(int *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x4));
    *(unsigned char *)(((((short)((short)(unsigned char)a4 * (short)0x190) + 0xC362E70) + (short)((((unsigned char)a5 << 2) + (unsigned char)a5) << 1)) + 0x4)) = 0x1;
    *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x190) + 0xC362E70) + (short)((((unsigned char)a5 << 2) + (unsigned char)a5) << 1)) + 0x2)) = (*(short *)((t1 + 0x2)));
    *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x190) + 0xC362E70) + (short)((((unsigned char)a5 << 2) + (unsigned char)a5) << 1)) + 0x0)) = (*(short *)((t1 + 0x0)));
    *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x190) + 0xC362E70) + (short)((((unsigned char)a5 << 2) + (unsigned char)a5) << 1)) + 0x6)) = (*(short *)((t1 + 0x4)));
    *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x0)) = (*(short *)(((t1 + 0x12) + 0x0)));
    *(unsigned int *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x4)) = (t1 + 0x12);
    return 0x0;
}

int FUN_0c0243b0(int a4, int a5, float f4, float f5, float f6)
{
    FUN_0c0e19b0(0x0);
    nlUnitMatrix();
    FUN_0c0e2140(a4);
    FUN_0c0e2050(a5);
    FUN_0c0dcd20(f4, f5, f6);
    nlObjPutUseViewMatrix(0xC178D88);
    FUN_0c0dcd20(1.0f, 1.0f, 1.0f);
    return nlPopMatrix(0x1);
}

int FUN_0c05d536(int a4, int a5, int a6, int a7)
{
    register float u1;
    register float u2;
    register float u16;
    register int t3;
    register int t4;
    register int t5;

    u1 = (((struct o1C_float *)(((((struct o2F8_int *)(a4))->v))))->v);
    u2 = *(float *)0xC05D5E0;
    u16 = (u1 + u2);
    if (!(1.0f > (u1 + u2))) {
        t3 = (0x2E0 + a4);
        t4 = 0x0;
        for (;;) {
            t4 = (t4 + 0x1);
            t5 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            *(unsigned char *)((t5 + 0x0)) = 0x1;
            if ((int)t4 >= (int)0x6) {
                break;
            }
        }
        (((struct o106_uchar *)(a4))->v) = 0x0;
        *(unsigned char *)((((((struct o2F4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2F8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        u16 = 1.0f;
    }
    (((struct o1C_float *)(((((struct o2F8_int *)(a4))->v))))->v) = u16;
    (((struct o24_float *)(((((struct o2F8_int *)(a4))->v))))->v) = u16;
    return 0x24;
}

int FUN_0c0638a0(int a4)
{
    register int t0;
    register int t1;

    FUN_0c09d990(a4);
    FUN_0c09d9bc(a4);
    t0 = FUN_0c09a910(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC0639E8)->v));
        (((struct o48_float *)(a4))->v) = ((((struct o4_float *)0xC0639E8)->v));
        FUN_0c09a808(a4, 0x1, 0x36);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c063bb8(int a4)
{
    register int t0;

    FUN_0c09a910(a4);
    (((struct o101_uchar *)(a4))->v) = 0x0;
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t0 = FUN_0c09e7b8(a4);
        if ((signed char)t0 != 0) {
            FUN_0c09a808(a4, 0x1, 0x92);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            FUN_0c09c422(a4);
            t0 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
            return (t0 + 0x1);
        }
    }
    FUN_0c09d990(a4);
    return FUN_0c09d9bc(a4);
}

int FUN_0c066398(int a4)
{
    register int t0;

    FUN_0c09a910(a4);
    FUN_0c09da1c(a4);
    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        FUN_0c063428(a4);
    }
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t0 = FUN_0c09c782(a4);
        if ((signed char)t0 != 0) {
            FUN_0c0634b4(a4);
            (((struct o7236_uchar *)(a4))->v) = 0x0;
            (((struct o71CC_uint *)(a4))->v) = 0x0;
        }
        (((struct o3C_float *)(a4))->v) = 0.0f;
        return FUN_0c0a2080(a4);
    }
    return 0x71AA;
}

int FUN_0c099966(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    *(unsigned char *)((a4 + 0x1)) = 0x1;
    FUN_0c0997a2(a4, 0x0, 0x4, 0xC09995E);
    t1 = t0;
    t0 = (*(int *)(((((*(signed char *)(((0x71F1 + a4) + 0x0))) << 2) + (0xC339378 + (((*(signed char *)((a4 + 0x4))) << 2) << 1))) + 0x0)));
    for (;;) {
        t2 = *(signed char *)((t0 + 0x0));
        if (t2 == -1) {
            break;
        }
        t1 = a4;
        t1 = (FUN_0c0ccf38(t1, (*(signed char *)((t0 + 0x0))), (*(signed char *)((t0 + 0x1)))));
        t0 = (t0 + 0x2);
        if (t1 != 0) {
            (((struct o40_uchar *)(t1))->v) = 0x0;
        }
    }
    return t2;
}

int FUN_0c09bafe(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = 0xC339408;
    t1 = 0xC339408;
    t2 = 0x0;
    t3 = 0xC339408;
    for (;;) {
        t5 = FUN_0c0f4128((*(int *)((((t2 << 2) << 1) + 0xC339408))));
        if (t5 != 0) {
            pdVibMxStop((*(int *)((t1 + 0x0))));
        }
        t5 = FUN_0c0f4128((*(int *)((t0 + 0x4))));
        t4 = t5;
        if (t5 != 0) {
            t4 = (pdVibMxStop((*(int *)((t3 + 0x4)))));
        }
        t2 = (t2 + 0x1);
        t0 = (t0 + 0x8);
        t3 = (t3 + 0x8);
        t1 = (t1 + 0x8);
        if ((int)t2 >= (int)0x2) {
            break;
        }
    }
    return t4;
}

int FUN_0c0a25e0(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((a4 + 0x71BC))) != 2) {
        if ((((((((struct o2E4_int *)(a4))->v)) | ((((struct o2DC_int *)(a4))->v))) | ((((struct o71F8_int *)(a4))->v))) & 0x400) != 0) {
            (((struct o7222_uchar *)(a4))->v) = 0x5;
            return ((int (*)(int, int, int, int))(0xC0A265A))(a4, 0x400, a6, a7);
        }
        (((struct o7222_uchar *)(a4))->v) = 0x6;
        return ((int (*)(int, int, int, int))(0xC0A265A))(a4, 0x400, a6, a7);
    }
    *(volatile int *)((a4 + 0x2DC));
    return ((int (*)(int, int, int, int))(0xC0A263E))(a4, 0x400, a6, a7);
}

int FUN_0c0d45fe(void)
{
    register int t1;
    register int t2;
    int t4;

    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x8) == 0) && (t4 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t4 & 0x8) == 0)) {
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x2) {
                break;
            }
            continue;
        }
        t1 = 0xC7F2EE0;
        t1 = (t1 + 0x4);
        *(unsigned char *)0xC7F2EE4 = 0x2;
        *(unsigned char *)((t1 + 0x2)) = 0x0;
        *(unsigned char *)((t1 + 0x1)) = 0x0;
        t1 = 0x1;
        if (((*(signed char *)0xC7F2F16)) == 0) {
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x2) {
                break;
            }
            continue;
        }
        break;
    }
    return t1;
}

int FUN_0c0d44d0(void)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE6;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            FUN_0c0d44c4();
        } else {
            FUN_0c0d437a();
        }
    } else {
        FUN_0c0d41f0();
    }
    if ((*(signed char *)0xC7F2F08) == 0) {
        *(volatile float *)0xC0D4560;
        *(volatile float *)0xC0D4564;
    } else {
        *(volatile float *)0xC0D4560;
        *(volatile float *)0xC0D4564;
    }
    return FUN_0c02d9e0();
}

int FUN_0c0dca60(int a4, int a5, int a6, int a7, int a8)
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
    register int t11;
    register int t12;
    register int t13;
    register int t14;

    t0 = *(int *)0xC7F8E9C;
    t1 = *(int *)((t0 + 0x0));
    *(unsigned int *)((t0 + 0x0)) = (t1 | 0x800000);
    t0 = (t1 | 0x800000);
    t1 = 0x800000;
    t2 = 0xC7F8E9C;
    t3 = a4;
    t4 = a5;
    t5 = a6;
    t6 = a7;
    t7 = 0x0;
    t8 = a8;
    for (;;) {
        if ((t8 & 0x1) != 0) {
            t1 = a7;
            t3 = 0xC7F8E98;
            t5 = a4;
            t6 = a5;
            t4 = t7;
            t0 = (FUN_0c0efc6a(t3, t4, t5, t6, a6, (t1)));
        } else {
            t9 = t1;
            t10 = t2;
            t11 = t3;
            t12 = t4;
            t13 = t5;
            t14 = t6;
        }
        t1 = t9;
        t7 = (t7 + 0x1);
        t2 = t10;
        t3 = t11;
        t4 = t12;
        t5 = t13;
        t6 = t14;
        t8 = (t8 >> 1);
        if ((int)t7 >= (int)0x5) {
            break;
        }
    }
    return t0;
}

int FUN_0c0dd880(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC7FC4F0;
    *(unsigned int *)0xC7FD488 = ((*(int *)0xC7FD488) + 0x1);
    t1 = FUN_0c0fc38c(((a5 * 0x3C) + t0), (*(short *)((a4 + 0x0))), (*(short *)((a4 + 0x2))), (*(int *)((a4 + 0x4))));
    *(unsigned int *)((((a5 * 0x3C) + t0) + 0x28)) = t1;
    t0 = 0x1;
    if (t1 == 0) {
        FUN_0c0fc5da(((a5 * 0x3C) + (*(int *)0xC7FC4F0)), a6, 0x0, 0x0);
        t0 = 0x0;
    }
    return t0;
}

int pdVmsLcdIsReady(int a4)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    int t7;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = kdGetDeviceInfo(a4);
    t1 = kdDevGetLCDInfo((((int)stk + 0) + 0x4), t0);
    if (((int)t1 >= 0) && ((t2 = *(int *)((t0 + 0x0)), t2 == 14) && ((t3 = *(short *)(((int)stk + 4)), (unsigned short)t3 == 1) && ((t4 = *(short *)(((int)stk + 6)), (unsigned short)t4 == 0xC0) && ((t5 = *(short *)(((int)stk + 8)), (unsigned short)t5 == 1) && ((t6 = *(signed char *)(((int)stk + 10)), t6 == 0) && (t7 = *(signed char *)(((int)stk + 11)), t7 == 0))))))) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0fcff0(int a4)
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

    t0 = *(int *)((a4 + 0x10));
    t1 = *(int *)((a4 + 0xC));
    if (((*(int *)((a4 + 0x18))) & 0x1) != 0) {
        t2 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
        if ((unsigned int)((unsigned int)((unsigned int)t1 >> 1) >> 1) < (unsigned int)((unsigned int)((unsigned int)t0 >> 1) >> 1)) {
            t2 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
        }
        t3 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
        t4 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
        t5 = (((unsigned int)t1 >> 1) * ((unsigned int)t0 >> 1));
        if ((unsigned int)t2 > (unsigned int)0x1) {
            t6 = t2;
            t2 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
            t7 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
            t8 = (((unsigned int)t1 >> 1) * ((unsigned int)t0 >> 1));
            for (;;) {
                t9 = (t7 * t2);
                t7 = ((unsigned int)t7 >> 1);
                t2 = ((unsigned int)t2 >> 1);
                t6 = ((unsigned int)t6 >> 1);
                t8 = (t8 + t9);
                if ((unsigned int)t6 <= (unsigned int)0x1) {
                    break;
                }
            }
            t3 = t2;
            t4 = t7;
            t5 = t8;
        }
        t2 = (t5 + (t4 * t3));
        if (t4 == t3) {
            t2 = (t5 + 0x2);
        }
        t3 = (t2 + 0xA);
    } else {
        t2 = (((unsigned int)t1 >> 1) * ((unsigned int)t0 >> 1));
        if ((*(int *)((a4 + 0xC))) == 8) {
            t4 = (((unsigned int)t1 >> 1) * ((unsigned int)t0 >> 1));
            if ((*(int *)((a4 + 0x10))) == 8) {
                t4 = ((((unsigned int)t1 >> 1) * ((unsigned int)t0 >> 1)) + 0x10);
            }
            t2 = t4;
        }
        t3 = t2;
    }
    return (t3 + 0x800);
}

int FUN_0c1126ba(int a4, int a5)
{
    int stk[1];
    register int t13;

    *(unsigned int *)(((int)stk + 0)) = (*(int *)((a5 + 0x0)));
    if (((((struct o10C4_int *)((*(int *)0xC843924)))->v)) == 1) {
        *(unsigned char *)((a4 + 0xB)) = (*(signed char *)((((int)stk + 0) + 0x0)));
        *(unsigned char *)((a4 + 0xA)) = (*(signed char *)(((((int)stk + 0) + 0x1) + 0x0)));
        *(unsigned char *)((a4 + 0x9)) = (*(signed char *)((((((int)stk + 0) + 0x1) + 0x1) + 0x0)));
        *(unsigned char *)((a4 + 0x8)) = (*(signed char *)(((((((int)stk + 0) + 0x1) + 0x1) + 0x1) + 0x0)));
    } else {
        *(unsigned char *)((a4 + 0x8)) = (*(signed char *)((((int)stk + 0) + 0x0)));
        *(unsigned char *)((a4 + 0x9)) = (*(signed char *)(((((int)stk + 0) + 0x1) + 0x0)));
        *(unsigned char *)((a4 + 0xA)) = (*(signed char *)((((((int)stk + 0) + 0x1) + 0x1) + 0x0)));
        *(unsigned char *)((a4 + 0xB)) = (*(signed char *)(((((((int)stk + 0) + 0x1) + 0x1) + 0x1) + 0x0)));
    }
    t13 = *(signed char *)((a4 + 0x8));
    if ((unsigned char)t13 == 0xFF) {
        *(unsigned int *)((a4 + 0x14)) = 0xFFFFFFFF;
    } else {
        if ((int)(unsigned char)t13 < (int)0xE0) {
            *(unsigned int *)((a4 + 0x14)) = 0x0;
        } else {
            *(unsigned int *)((a4 + 0x14)) = (*(int *)(((a5 + 0x4) + 0x0)));
        }
    }
    return 0x0;
}

int FUN_0c01e444(void)
{
    register int t0;
    register int t5;
    register int t2;

    t0 = 0x0;
    for (;;) {
        *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x3)) = 0x0;
        *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x2)) = 0x0;
        *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x1)) = 0x0;
        *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x0)) = 0x0;
        if ((int)t0 < (int)0x3) {
            *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x4)) = 0x0;
            t2 = t0;
        } else {
            *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x4)) = 0x1;
            t2 = (t0 + 0xFD);
        }
        t5 = ((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t5 + 0x5)) = t2;
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t2;
}

int FUN_0c05941e(int a4, int a5, int a6, int a7)
{
    *(volatile int *)(((a4 << 2) + 0xC7E4070));
    return ((int (*)(int, int, int, int))(0xC05947C))(a4, a5, a6, a7);
}

int FUN_0c0597ce(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC7F3071;
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 3) {
        t2 = (unsigned char)t0;
        if ((unsigned char)t0 == 0) {
            t2 = 0x1;
        }
        t0 = *(signed char *)0xC7F2F11;
        (((struct o0_uchar *)0xC7F305C)->v) = (*(signed char *)(((*(signed char *)(((0xC7F2E46 + (unsigned char)((unsigned short)(t2 + 0xFF) * (unsigned short)0x78)) + 0x0))) + ((signed char)(((t0 << 2) << 1) + t0) + 0xC32E138))));
        t0 = *(signed char *)0xC7F305C;
        (((struct o1_uchar *)0xC7F305C)->v) = ((t0 << 2) << 1);
        t1 = ((t0 << 2) << 1);
    }
    return t1;
}

int FUN_0c061f9c(int a4)
{
    if (a4 != 0) {
        if (a4 != 1) {
            (((struct o26_uchar *)0xC7F2EE0)->v) = 0x1;
        } else {
            (((struct o24_uchar *)0xC7F2EE0)->v) = 0x1;
            *(unsigned char *)0xC7F301F = 0x0;
        }
    } else {
        (((struct o23_uchar *)0xC7F2EE0)->v) = 0x1;
    }
    (((struct o3_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o2_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o1_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o0_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o1_uchar *)0xC7F319D)->v) = 0x0;
    (((struct o0_uchar *)0xC7F319D)->v) = 0x0;
    FUN_0c0a2f52();
    FUN_0c0de280(0x0, 0x0, 0x0);
    FUN_0c05f136();
    return FUN_0c0314dc();
}

int FUN_0c065cb4(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        t0 = FUN_0c09c782(a4);
        if ((signed char)t0 != 0) {
            FUN_0c0634b4(a4);
            (((struct o7236_uchar *)(a4))->v) = 0x0;
            (((struct o71CC_uint *)(a4))->v) = 0x0;
        }
        (((struct o3C_float *)(a4))->v) = 0.0f;
        return FUN_0c0a2080(a4);
    }
    FUN_0c09da1c(a4);
    t0 = (((struct o719E_short *)(a4))->v);
    if ((unsigned short)t0 == 10) {
        return FUN_0c063428(a4);
    }
    return (unsigned short)t0;
}

int FUN_0c0852a6(int a4, int a5)
{
    int stk[1];
    register int t11;
    register int t14;

    *(unsigned short *)(((int)stk + 0)) = a5;
    if ((int)((((struct oF0_short *)(a4))->v)) < (int)0x5) {
        if (((((struct oEE_short *)(a4))->v)) == 0) {
            FUN_0c0c6658(a4, (((((struct oF0_short *)(a4))->v)) + (*(short *)(((int)stk + 0)))));
            (((struct oEE_ushort *)(a4))->v) = (*(short *)(((((((struct oF0_short *)(a4))->v)) << 1) + 0xC150530)));
            t11 = 0xF0;
            t14 = (((((struct oF0_short *)(a4))->v)) + 0x1);
        } else {
            t11 = 0xEE;
            t14 = (((((struct oEE_short *)(a4))->v)) - 1);
        }
        *(unsigned short *)((a4 + t11)) = t14;
    }
    if (((((struct oF2_short *)(a4))->v)) != 0) {
        (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) - 1);
    }
    return 0xF2;
}

int FUN_0c0abd84(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t5 = 0x0;
    for (;;) {
        if ((int)t5 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        *(volatile int *)((((0x2E0 + a4) + (t5 << 2)) + 0x0));
        t6 = ((int (*)(int, int, int, int))(FUN_0c0e6fe8))(a4, t5, (t5 << 2), 0xC339C90);
        *(volatile int *)((((0x2E0 + t0) + t1) + 0x0));
        t6 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(t0, 0x0, t1);
        *(volatile int *)((((0x2E0 + t2) + t3) + 0x0));
        t6 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(t2, 0x0, t3);
        t5 = (t4 + 0x1);
    }
    return 0x2DC;
}

float FUN_0c0ad15c(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    float s1;

    u0 = (((struct o20_float *)(a4))->v);
    u1 = (((struct o0_float *)0xC7F2AB4)->v);
    u2 = (((struct o28_float *)(a4))->v);
    u3 = (((struct o8_float *)0xC7F2AB4)->v);
    u4 = (((struct o0_float *)0xC0AD2B0)->v);
    u5 = ((u3 - u2) * (u3 - u2));
    u5 = u5 + ((u1 - u0)) * ((u1 - u0));
    t0 = 0x0;
    s1 = _builtin_sqrtf(u5);
    u2 = s1;
    t1 = 0;
    if (u4 > s1) {
        t1 = (1);
    } else {
        u3 = (((struct o4_float *)0xC0AD2B0)->v);
        if (u3 > (s1 - u4)) {
            *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x400);
            (((struct o5C_float *)(a4))->v) = ((s1 - u4) / u3);
            u6 = ((s1 - u4) / u3);
        } else {
            *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) & 0xFBFF);
            u6 = (s1 - u4);
        }
        t0 = 0x1;
        u2 = u6;
        t1 = ((u3 > (s1 - u4)));
    }
    *(unsigned char *)((a4 + 0x1)) = t0;
    return (u1 - u0);
}

int FUN_0c0cec2e(void)
{
    register int t10;

    (((struct o0_uchar *)0xC7F2F0D)->v) = (*(signed char *)0xC49491C);
    (((struct o1_uchar *)0xC7F2F0D)->v) = (*(signed char *)0xC49491D);
    (((struct o2_uchar *)0xC7F2F0D)->v) = (*(signed char *)0xC49491E);
    (((struct o3_uchar *)0xC7F2F0D)->v) = (*(signed char *)0xC49491F);
    (((struct o4_uchar *)0xC7F2F0D)->v) = (*(signed char *)0xC494920);
    (((struct o5_uchar *)0xC7F2F0D)->v) = (*(signed char *)0xC494921);
    (((struct o6_uchar *)0xC7F2F0D)->v) = (*(signed char *)0xC494922);
    (((struct o7_uchar *)0xC7F2F0D)->v) = (*(signed char *)0xC494923);
    (((struct o8_uchar *)0xC7F2F0D)->v) = (*(signed char *)0xC494924);
    (((struct o9_uchar *)0xC7F2F0D)->v) = (*(signed char *)0xC494925);
    t10 = *(signed char *)0xC494926;
    (((struct oA_uchar *)0xC7F2F0D)->v) = t10;
    return t10;
}

int FUN_0c0ce88c(int a4, int a5)
{
    register int t7;
    register int t0;
    register int t1;
    register int t6;

    t7 = 0xC0CE8F8;
    if ((int)a5 > 0) {
        t0 = 0x0;
        t1 = a4;
        for (;;) {
            *(volatile signed char *)((t1 + 0x2));
            t6 = FUN_0c0ccefc((*(int *)((t1 + 0x4))), ((float)(*(signed char *)((t1 + 0x0))) * 16.0f), ((float)(*(signed char *)((t1 + 0x1))) * 8.0f));
            t0 = (t0 + 0x1);
            t1 = (t1 + 0x8);
            if ((int)t0 >= (int)a5) {
                break;
            }
        }
        t7 = t6;
    }
    return t7;
}

int FUN_0c0ce910(int a4, int a5)
{
    register float u1;
    register int t9;
    register int t2;
    register int t3;
    register int t8;

    *(volatile float *)0xC0CEA78;
    u1 = *(float *)0xC0CEA7C;
    t9 = 0xC0CEA7C;
    if ((int)a5 > 0) {
        t2 = 0x0;
        t3 = a4;
        for (;;) {
            *(volatile signed char *)((t3 + 0x2));
            t8 = FUN_0c0ccefc((*(int *)((t3 + 0x4))), ((float)(*(signed char *)((t3 + 0x0))) * u1), ((float)(*(signed char *)((t3 + 0x1))) * u1));
            t2 = (t2 + 0x1);
            t3 = (t3 + 0x8);
            if ((int)t2 >= (int)a5) {
                break;
            }
        }
        t9 = t8;
    }
    return t9;
}

void FUN_0c0d5c22(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    if (((unsigned char)(*(signed char *)0xC7F3071) & ((*(signed char *)(((int)stk + 0))) + 0x1)) == 0) {
        if ((*(signed char *)0xC494D28) == 0) {
            FUN_0c0d5bc0();
            *(volatile signed char *)(((int)stk + 0));
            *(volatile float *)0xC0D5DF4;
            *(volatile float *)0xC0D5DF4;
            FUN_0c02d9e0();
    return;
        }
        return;
    }
}

int syRtcAicaGetCount(int a4)
{
    int stk[7];
    register int t0;
    register int t1;
    register int t2;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(int *)((int)stk + 4) = 0x1;
    *(int *)((int)stk + 0) = 0x1;
    t0 = FUN_0c0eb0f0(0xA0710000, (((int)stk + 8) + 0xC), 0x4, 0x2, 0x1, 0x1);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    t1 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 16)) = (((int)stk + 8) + 0xC);
    t2 = *(int *)(((((int)stk + 8) + 0xC) + 0x0));
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 8) + 0xC) + 0x4);
    *(unsigned int *)((t1 + 0x0)) = (((t2 << 16) & 0xFFFF0000) | (unsigned short)(*(int *)((((((int)stk + 8) + 0xC) + 0x4) + 0x0))));
    syRtcDbgWriteLog((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))));
    syRtcDbgWriteLog((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))));
    return 0x0;
}

int FUN_0c0f0d04(int a4, int a5, int a6, int a7)
{
    if (((((struct o4C_short *)(a4))->v)) != 0) {
        return 0x0;
    }
    *(unsigned int *)((a4 + 0x4)) = a5;
    *(unsigned int *)((a4 + 0x8)) = a6;
    *(unsigned int *)((a4 + 0xC)) = a7;
    *(unsigned int *)((a4 + 0x10)) = ((int)(a7 + 0x7FF) >> 11);
    *(unsigned int *)((a4 + 0x14)) = 0x0;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    *(unsigned int *)((a4 + 0x1C)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x0;
    *(unsigned int *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x3C)) = 0x0;
    (((struct o40_uint *)(a4))->v) = 0x0;
    (((struct o44_uint *)(a4))->v) = 0x0;
    (((struct o48_ushort *)(a4))->v) = 0x0;
    (((struct o4A_ushort *)(a4))->v) = 0x0;
    (((struct o4C_ushort *)(a4))->v) = 0x1;
    return ((int (*)(int, int, int, int))(0xC0F0D60))(a4, 0x0, a6, a7);
}

int FUN_0c0fb4e0(void)
{
    kmiWriteRegister(0x68, ((((struct o0_int *)0xC81726C)->v)));
    kmiWriteRegister(0x6C, ((((struct o4_int *)0xC81726C)->v)));
    kmiWriteRegister(0x5C, ((((struct oC_int *)0xC81726C)->v)));
    kmiWriteRegister(0x4C, ((((struct o10_int *)0xC81726C)->v)));
    kmiWriteRegister(0x118, ((((struct o0_int *)0xC8172B4)->v)));
    kmiWriteRegister(0xF4, ((((struct o4_int *)0xC8172B4)->v)));
    kmiWriteRegister(0x48, ((((struct o18_int *)0xC81726C)->v)));
    kmiWriteRegister(0x44, (((((struct o14_int *)0xC81726C)->v)) & 0xFFFFFFFE));
    return (kmiWriteRegister(0xE8, (((((struct o8_int *)0xC8172B4)->v)) | 0x8)));
}

int FUN_0c0fbfa2(int a4, int a5, int a6, int a7)
{
    if ((int)a4 <= (int)a6) {
        if ((int)a5 > (int)a7) {
            return 0xDDDD;
        }
        return ((int (*)(int, int, int, int))(0xC0FC000))(a4, a5, a6, a7);
    }
    return 0xDDDD;
}

int kdSetGetMediaInfoEx(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B054);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getminfo_ns(a4, a5, a6);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a7, t2);
    }
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t2;
}

int ADXSTM_OpenRange(int a4, int a5, int a6)
{
    register int t0;
    register int t3;

    t0 = FUN_0c0f1fa4(a4, a5, a6);
    if (t0 == 0) {
        ADXERR_CallErrFunc(0xC15B154);
        return 0x0;
    }
    t3 = FUN_0c106436(t0, 0x0, (((a5 << 8) << 2) << 1), a6);
    strncpy((t3 + 0x40), 0xC15B18C, 0x20);
    return t3;
}

int FUN_0c108094(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if (a4 == 0) {
        return ((int (*)(int, int, int, int))(mwRnaErrCallFunc))(0xC15B31C, a5, a6, a7);
    }
    t0 = 0xFFFFFFF1;
    if ((int)a6 < (int)0xFFFFFFF1) {
    } else {
        t1 = a6;
        if ((int)a6 > (int)0xF) {
            t1 = 0xF;
        }
        t0 = t1;
    }
    *(unsigned int *)((((a5 << 2) + (a4 + 0x64)) + 0x0)) = t0;
    t1 = FUN_0c114fcc(((((struct o40_int *)(a4))->v)), a5, t0);
    if (t1 != 0) {
        return ((int (*)(int))(mwRnaErrCallFunc))(0xC15B47C);
    }
    return t1;
}

int FUN_0c10bb58(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    int t7;

    for (;;) {
        t0 = 0xC8424A8;
        t1 = 0xC8424A8;
        t2 = 0x0;
        t3 = 0x0;
        t4 = 0xC8424A8;
        t5 = 0xC8424A8;
        for (;;) {
            if (((*(int *)((t0 + 0x0))) == a4) && (t7 = *(int *)((t1 + 0x18)), (t7 & 0x3) != 0)) {
                break;
            }
            t2 = (t2 + 0x1);
            t1 = (t1 + 0x20);
            t0 = (t0 + 0x20);
            if ((unsigned int)t2 >= (unsigned int)0x8) {
                t3 = (t3 + 0x1);
                t5 = (t5 + 0x100);
                t4 = (t4 + 0x100);
                if ((unsigned int)t3 >= (unsigned int)0x2) {
                    return 0x1;
                }
                t0 = 0x0;
                t2 = 0x0;
                t1 = 0x0;
                t0 = (t0 + t5);
                t1 = (t1 + t4);
                continue;
            }
        }
        break;
    }
    return 0x0;
}

int FUN_0c066668(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if (((((struct oF0_short *)(a4))->v)) == 0) {
        t0 = *(signed char *)((a4 + 0x71F1));
        if (t0 != 0) {
            t1 = 0x71F1;
            if ((signed char)t0 != 0) {
                t0 = 0x71F4;
                if (((((struct o71F4_short *)(a4))->v)) != 0) {
                    t2 = 0x2DC;
                    if ((((((struct o2DC_int *)(a4))->v)) & 0x600) == 0) {
                        *(volatile signed char *)((a4 + 0x3));
                        FUN_0c0abe44(((((struct o71CC_int *)(a4))->v)), 0x5);
                        FUN_0c09a808(a4, 0x2, 0x78);
                        t3 = *(signed char *)((a4 + 0xC));
                        *(unsigned char *)((a4 + 0xC)) = (t3 + 0x1);
                        t2 = (t3 + 0x1);
                    }
                    t0 = t2;
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            t1 = 0x2DC;
            if ((((((struct o2DC_int *)(a4))->v)) & 0x600) == 0) {
                *(volatile signed char *)((a4 + 0x3));
                FUN_0c0abe44(((((struct o71CC_int *)(a4))->v)), 0x5);
                FUN_0c09a808(a4, 0x2, 0x78);
                t2 = *(signed char *)((a4 + 0xC));
                *(unsigned char *)((a4 + 0xC)) = (t2 + 0x1);
                t1 = (t2 + 0x1);
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
        t1 = 0xF0;
    }
    return t1;
}

int FUN_0c09eb32(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t6;
    int t7;

    t0 = (((struct o71F8_int *)(a4))->v);
    t1 = (((struct o2E4_int *)(a4))->v);
    t2 = (((struct o2DC_int *)(a4))->v);
    t4 = *(int *)((0xC338E4C + ((*(signed char *)((a4 + 0x4))) << 2)));
    if (((*(signed char *)((((((signed char)a5 << 2) << 2) + t4) + 0x0))) != 99) && ((t6 = *(int *)((((((signed char)a5 << 2) << 2) + t4) + 0x8)), t6 == 0) && (t7 = *(int *)((((((signed char)a5 << 2) << 2) + t4) + 0x4)), ((t7 & (((t1 | t0) | (t2 & 0xF0)) & 0x6F0)) & 0x600) != 0))) {
        if (((((t1 | t0) | (t2 & 0xF0)) & 0x6F0) & 0x400) != 0) {
            (((struct o721E_uchar *)(a4))->v) = 0x0;
        } else {
            (((struct o721E_uchar *)(a4))->v) = 0x1;
        }
        return 0x1;
    }
    return 0x0;
}

int ADXF_Stop(int a4)
{
    int stk[1];

    if (a4 == 0) {
        return 0xFFFFFFFD;
    }
    if ((*(int *)((a4 + 0x4))) == 0) {
        return 0xFFFFFFFF;
    }
    if ((*(signed char *)((a4 + 0x1))) != 1) {
        ADXCRS_Lock();
        FUN_0c106654((*(int *)((a4 + 0x4))));
        ADXSTM_GetCurOfst((*(int *)((a4 + 0x4))), ((int)stk + 0));
        *(unsigned int *)((a4 + 0x24)) = (*(int *)(((int)stk + 0)));
        FUN_0c0f553a(a4);
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        ADXCRS_Unlock();
    }
    return (*(int *)((a4 + 0x18)));
}

int FUN_0c01b4f2(int a4, int a5, int a6, int a7)
{
    if ((signed char)a4 != 0) {
        if ((signed char)a4 != 1) {
            if ((signed char)a4 != 2) {
                return ((int (*)(int, int, int, int))(0xC01B56A))(a4, a5, 0xC361BF0, a7);
            }
            return ((int (*)(int, int, int, int))(0xC01B554))(a4, a5, 0xC361BF0, a7);
        }
        if (((unsigned short)((((struct o2_short *)0xC361BF8)->v)) & a5) == 0) {
            *(volatile short *)0xC361C0E;
            return ((int (*)(int, int, int, int))(0xC01B54A))(a4, a5, 0xC361BF0, a7);
        }
        return ((int (*)(int, int, int, int))(0xC01B566))(a4, a5, 0xC361BF0, a7);
    }
    if (((unsigned short)((((struct o0_short *)0xC361BF8)->v)) & a5) == 0) {
        if (((unsigned short)((((struct o14_short *)0xC361BF8)->v)) & a5) != 0) {
            return ((int (*)(int, int, int, int))(0xC01B566))(a4, a5, 0xC361BF0, a7);
        }
        return ((int (*)(int, int, int, int))(0xC01B56A))(a4, a5, 0xC361BF0, a7);
    }
    return ((int (*)(int, int, int, int))(0xC01B566))(a4, a5, 0xC361BF0, a7);
}

int FUN_0c01b936(int a4, int a5)
{
    if ((signed char)a4 != 0) {
        if ((signed char)a4 != 1) {
            if ((signed char)a4 != 2) {
                return 0x0;
            }
            if (((unsigned short)((((struct o4_short *)0xC361BF8)->v)) & a5) == 0) {
                if (((unsigned short)((((struct o18_short *)0xC361BF8)->v)) & a5) != 0) {
                    return 0x1;
                }
                return 0x0;
            }
            return 0x1;
        }
        if (((unsigned short)((((struct o2_short *)0xC361BF8)->v)) & a5) == 0) {
            if (((unsigned short)((((struct o16_short *)0xC361BF8)->v)) & a5) != 0) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x1;
    }
    if (((unsigned short)((((struct o0_short *)0xC361BF8)->v)) & a5) == 0) {
        if (((unsigned short)((((struct o14_short *)0xC361BF8)->v)) & a5) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c01d1ce(int a4, int a5)
{
    if ((signed char)a4 != 0) {
        if ((signed char)a4 != 1) {
            if ((signed char)a4 != 2) {
                return 0x0;
            }
            if (((unsigned short)((((struct o4_short *)0xC361BF8)->v)) & a5) == 0) {
                if (((unsigned short)((((struct o18_short *)0xC361BF8)->v)) & a5) != 0) {
                    return 0x1;
                }
                return 0x0;
            }
            return 0x1;
        }
        if (((unsigned short)((((struct o2_short *)0xC361BF8)->v)) & a5) == 0) {
            if (((unsigned short)((((struct o16_short *)0xC361BF8)->v)) & a5) != 0) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x1;
    }
    if (((unsigned short)((((struct o0_short *)0xC361BF8)->v)) & a5) == 0) {
        if (((unsigned short)((((struct o14_short *)0xC361BF8)->v)) & a5) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c01e606(int a4, int a5)
{
    if ((signed char)a4 != 0) {
        if ((signed char)a4 != 1) {
            if ((signed char)a4 != 2) {
                return 0x0;
            }
            if (((unsigned short)((((struct o4_short *)0xC361BF8)->v)) & a5) == 0) {
                if (((unsigned short)((((struct o18_short *)0xC361BF8)->v)) & a5) != 0) {
                    return 0x1;
                }
                return 0x0;
            }
            return 0x1;
        }
        if (((unsigned short)((((struct o2_short *)0xC361BF8)->v)) & a5) == 0) {
            if (((unsigned short)((((struct o16_short *)0xC361BF8)->v)) & a5) != 0) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x1;
    }
    if (((unsigned short)((((struct o0_short *)0xC361BF8)->v)) & a5) == 0) {
        if (((unsigned short)((((struct o14_short *)0xC361BF8)->v)) & a5) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}


int FUN_0c021178(int a4, Stk6 s, float f4, float f5, float f6, float f7)
{
    int stk[15];
    register float u9;
    register float u7;
    float u8;

    stk[1] = s.w[0];
    stk[2] = s.w[1];
    stk[3] = s.w[2];
    stk[4] = s.w[3];
    stk[5] = s.w[4];
    stk[6] = s.w[5];
    *(float *)((a4 + 0x0)) = (((((struct o10_float *)(((int)stk + 4)))->v)) - ((((struct o4_float *)(((int)stk + 4)))->v)));
    (((struct o4_float *)(a4))->v) = (((((struct o4_float *)((((int)stk + 4) + 0x10)))->v)) - ((((struct o4_float *)((((int)stk + 4) + 0x4)))->v)));
    (((struct o8_float *)(a4))->v) = (((((struct o8_float *)((((int)stk + 4) + 0x10)))->v)) - ((((struct o8_float *)((((int)stk + 4) + 0x4)))->v)));
    if (((*(float *)((a4 + 0x0))) == 0.0f) && ((u7 = (((struct o8_float *)(a4))->v), u7 == 0.0f) && (u8 = (((struct o4_float *)(a4))->v), u8 == 0.0f))) {
        u9 = *(float *)0xC0212BC;
        (((struct o4_float *)(a4))->v) = u9;
        (((struct o8_float *)(a4))->v) = u9;
        *(float *)((a4 + 0x0)) = u9;
    }
    return (FUN_0c0e24f0(a4, (((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4), f4, f5, f6, f7));
}

int FUN_0c04bfd0(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = *(int *)((a4 + 0x1C));
    u0 = (((struct o20_float *)(t0))->v);
    u1 = (((struct o20_float *)(a4))->v);
    u2 = (((struct o28_float *)(t0))->v);
    u3 = (((struct o28_float *)(a4))->v);
    u4 = (u0 - u1);
    if ((u0 - u1) == 0.0f) {
        u4 = (*(float *)0xC04C108);
    }
    u0 = (u2 - u3);
    u0 = -u0;
    t0 = FUN_0c0df360((u0 / u4));
    t1 = t0;
    if (0.0f > u4) {
        t1 = (t0 + 0x8000);
    }
    return (unsigned short)(((t1 + 0x5000) - (*(int *)((a4 + 0x30)))) + 0x1000);
}

int FUN_0c052708(void)
{

    register int R1;
    register int R2;
    register int R3;
    int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_2 = *(signed char *)0xC7F3071;
    v0_1 = (v0_2);
    v0_0 = (0x0);
    if (((unsigned char)v0_2 == 0)) goto L_C05275C;
    v0_2 = ((unsigned char)v0_1);
    v0_3 = (0xC7F31F0);
    R7 = (0x8);
    if (((unsigned char)v0_1 == 0)) goto L_C05275C;
    if ((v0_2 == 1)) goto L_C05272E;
    if ((v0_2 == 2)) goto L_C05272E;
    if ((v0_2 == 3)) goto L_C052748;
    L_C05275C:;
    return v0_0;
    L_C052748:;
    if ((((*(int *)((v0_3 + 0x8))) & R7) != 0)) goto L_C052754;
    v0_1 = *(int *)((v0_3 + 0x2C));
    v0_2 = (v0_1);
    if (((v0_1 & R7) == 0)) goto L_C05275C;
    L_C052754:;
    *(unsigned short *)0xC7F3036 = 0x1;
    v0_0 = (0x1);
    goto L_C05275C;
    L_C05272E:;
    if (((R7 & (*(int *)(((v0_3 + (signed char)(((((v0_1 - 1) << 2) << 1) + (v0_1 - 1)) << 2)) + 0x8)))) != 0)) goto L_C052754;
    goto L_C05275C;
}

int FUN_0c0557d6(int a4)
{
    register int t0;
    register int t10;

    t0 = *(signed char *)0xC7F4752;
    if (((int)t0 < (int)0x3) && ((int)a4 >= (int)0x7)) {
        *(unsigned char *)0xC7F4752 = 0x3;
    }
    if (((int)(*(signed char *)0xC7F4752) < (int)0x2) && ((int)a4 >= (int)0x6)) {
        *(unsigned char *)0xC7F4752 = 0x2;
    }
    if (((int)(*(signed char *)0xC7F4752) < (int)0x1) && ((int)a4 >= (int)0x5)) {
        *(unsigned char *)0xC7F4752 = 0x1;
    }
    t10 = 0x0;
    if (t0 != (*(signed char *)0xC7F4752)) {
        t10 = 0x1;
    }
    return t10;
}

int FUN_0c0689e4(int a4)
{
    register int t1;
    register int t7;

    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    t1 = FUN_0c09a910(a4);
    t7 = (signed char)t1;
    if ((signed char)t1 != 0) {
        FUN_0c0685a0(a4);
        FUN_0c09d990(a4);
        *(unsigned char *)((a4 + 0xA)) = 0x2;
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        FUN_0c0a1d88(a4, 0x75);
        FUN_0c0a3914(a4, 0x30);
        FUN_0c09a808(a4, 0x1, 0x64);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t7 = 0x71A8;
    }
    return t7;
}

int FUN_0c073046(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c09a910(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        FUN_0c09a808(a4, 0x1, 0x36);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = -10.0f;
        (((struct o48_float *)(a4))->v) = -1.0f;
        (((struct o108_uchar *)(a4))->v) = 0x0;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c095472(void)
{
    int t1;
    int t22;
    int t28;

    if (((*(signed char *)0xC7EB27E) != 23) && (t1 = *(signed char *)0xC7F254E, t1 != 23)) {
        if ((*(signed char *)0xC7EB2B7) == 0) {
            if ((*(signed char *)0xC7F2587) == 0) {
                return 0x0;
            }
            return 0x2;
        }
        return 0x1;
    }
    if (((*(signed char *)0xC7EB27E) == 23) && (t22 = *(signed char *)0xC7E40CE, t22 != 0)) {
        return 0x1;
    }
    if (((*(signed char *)0xC7F254E) == 23) && (t28 = *(signed char *)0xC7EB39E, t28 != 0)) {
        return 0x2;
    }
    return 0x0;
}

int FUN_0c0dfba0(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    if (!(0.0f > f4)) {
        u0 = ((((struct o0_float *)0xC0DFCC0)->v));
    } else {
        u0 = ((((struct o4_float *)0xC0DFCC0)->v));
    }
    u1 = (((struct o8_float *)0xC0DFCC0)->v);
    *(unsigned int *)((a4 + 0x0)) = (int)(u0 + (f4 / u1));
    u2 = (f4 - (((float)(int)(u0 + (f4 / u1)) * ((((struct oC_float *)0xC0DFCC0)->v)))));
    u2 = u2 + ((((struct o10_float *)0xC0DFCC0)->v)) * ((float)(int)(u0 + (f4 / u1)));
    t0 = 0xB;
    u0 = 0.0f;
    for (;;) {
        t1 = t0;
        t0 = (t0 - 2);
        u1 = ((float)t1 - u0);
        u0 = (u2 * u2);
        u0 = (u0 / u1);
        if ((int)t0 < (int)0x3) {
            break;
        }
    }
    return ((int (*)(int, int, int, int, float, float, float))(0xC0DFBF8))(t0, 0x3, a6, a7, u2, u0, (u2 * u2));
}
