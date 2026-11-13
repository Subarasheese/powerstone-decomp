/* Straight-line functions with calls and guards (batch gen_ah): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o100_uchar { char p[0x100]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o144_uchar { char p[0x144]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A8_short { char p[0x1A8]; short v; };
struct o1A8_ushort { char p[0x1A8]; unsigned short v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o224_uint { char p[0x224]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o3E_short { char p[0x3E]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o52_ushort { char p[0x52]; unsigned short v; };
struct o54_float { char p[0x54]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o718C_int { char p[0x718C]; int v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71BD_uchar { char p[0x71BD]; unsigned char v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o71DD_uchar { char p[0x71DD]; unsigned char v; };
struct o7205_uchar { char p[0x7205]; unsigned char v; };
struct o7222_uchar { char p[0x7222]; unsigned char v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o7238_uchar { char p[0x7238]; unsigned char v; };
struct o723A_uchar { char p[0x723A]; unsigned char v; };
struct o7264_float { char p[0x7264]; float v; };
struct o726C_float { char p[0x726C]; float v; };
struct o7294_uint { char p[0x7294]; unsigned int v; };
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
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };
struct oF8_int { char p[0xF8]; int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
int FUN_0c010b10(int);
int FUN_0c010b84(void);
int FUN_0c012420(int);
int FUN_0c012504(int, int, int, int);
int FUN_0c01253c(int);
int FUN_0c015ba0(int, int, int, int, float, float, float, float, float, float);
int FUN_0c015fda(int, int, int, int, float, float, float, float, float, float, float);
int FUN_0c01e2e4(int);
int FUN_0c01e34a(int);
int FUN_0c01f4c8(int);
int FUN_0c01f9a0(void);
int FUN_0c01fff4(int);
extern int FUN_0c0207ca();
float FUN_0c022dfc(int, int, float);
int FUN_0c027fa4(int, int, int);
int FUN_0c02d9e0(void);
int FUN_0c0318e0(int, int);
int FUN_0c03d2fc(int, int, int);
int FUN_0c042256(int, int, int);
int FUN_0c047c6c(int, int, int, int, int, int, int, int, int);
int FUN_0c05a80c(int, int, int, float, float, float, float);
int FUN_0c05a8f8(int);
int FUN_0c05c3be(int);
int FUN_0c05c44e(void);
int FUN_0c0624c4(int, int, int);
int FUN_0c0634b4(int);
int FUN_0c0641a0(int, float, float);
int FUN_0c08b81e(int);
int FUN_0c08b844(int);
int FUN_0c08b8b8(int);
int FUN_0c08b8fc(int);
int FUN_0c08b9c2(int);
int FUN_0c08bab6(int);
int FUN_0c08bb22(int);
int FUN_0c08bb46(int);
int FUN_0c08d6aa(int);
int FUN_0c08dfa4(void);
int FUN_0c08e980(int);
int FUN_0c09660c(int);
int FUN_0c099930(int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09b540(int, int);
int FUN_0c09b5d4(int, int);
int FUN_0c09b7a4(int, int);
int FUN_0c09c6b8(int, int, int);
int FUN_0c09c782(int);
int FUN_0c09cd32(int);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09db78(int);
int FUN_0c09e4ac(int, int, int);
int FUN_0c09e7b8(int);
int FUN_0c0a2080(int);
int FUN_0c0a2e26(int, int, int);
int FUN_0c0a2f16(int, int);
int FUN_0c0a3796(int, int);
int FUN_0c0a3914(int, int);
int FUN_0c0a3f30(int);
int FUN_0c0abe44(int, int);
int FUN_0c0b6f5c(int);
int FUN_0c0b7b88(int, int);
float FUN_0c0d5bc0(void);
int FUN_0c0d7032(int, int);
int FUN_0c0d7054(int);
int FUN_0c0d7076(void);
int FUN_0c0dc18e(int, int);
float FUN_0c0df340(float);
int FUN_0c0df360(float);
int FUN_0c0df920(void);
int nlInitMatrixStack(int, int, int);
int syRtcCountToDate(int, int);
int syRtcGetCountForce(void);
int syRtcMakeDayOfWeek(int, int);
int syRtcMakeAgeOfMoon(void);
int FUN_0c0e6668(int, int, int);
int FUN_0c0e6d00(void);
int FUN_0c0e6e5c(void);
int FUN_0c0e6fe8(int);
int FUN_0c0e7140(int);
int FUN_0c0eb6cc(int, int, int);
int FUN_0c0ed9c0(int, int, int);
int FUN_0c0f2464(int);
int FUN_0c0f2ccc(int);
int FUN_0c0f2d38(int, int, int);
int FUN_0c0f4db4(int, int);
int FUN_0c0f4f28(int, int);
int gdFsToUpper(int);
int gdFsSearchName(int, int, int);
int FUN_0c0fedca(int, int);
int FUN_0c0ffdba(void);
int FUN_0c0ffdfc(void);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdDevGetFD(int, int);
int kdGetDriverMode(int);
int FUN_0c105a14(int, int, int);
int FUN_0c111310(int, int, int);
int mpdrv_memset_l(int, int, int);
int FUN_0c1151b8(int, int, int, int, int);
int FUN_0c11568c(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int mwRnaErrCallFunc(int);
int pdVmsLcdIsReady(int);
int thunk_FUN_0c111b6e(int);
int FUN_0c065256(int a4);
int FUN_0c08eba8(int a4, int a5);
int FUN_0c0fff10(int a4, int a5);
int FUN_0c1025e0(int a4, int a5, int a6, int a7);
int search_fat(int a4, int a5, int a6, int a7);
int FUN_0c04c028(int a4);
int FUN_0c05e01e(int a4);
float FUN_0c09b74c(int a4);
void FUN_0c0a370c(int a4);
int FUN_0c0d708c(int a4, int a5);
int FUN_0c0e669e(int a4, int a5);
int FUN_0c0f2486(int a4, int a5);
void FUN_0c0faee0(void);
void FUN_0c0ff15c(void);
int FUN_0c1059ac(int a4, int a5, int a6);
int mpdrv_clear_deviceinfo(int a4);
int fmMngChkEmptyData(int a4, int a5);
int FUN_0c020886(int a4, int a5, int a6, int a7);
int FUN_0c031030(void);
int FUN_0c05c370(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int FUN_0c085870(int a4);
int FUN_0c08ed08(int a4);
int FUN_0c08f71c(int a4);
int FUN_0c09dbce(int a4);
int FUN_0c09dc64(int a4, int a5);
int FUN_0c0ccb12(void);
int FUN_0c0cc258(int a4);
void FUN_0c0d5bd4(int a4);
int FUN_0c0db03e(int a4, int a5, int a6, int a7);
int FUN_0c0ddc70(int a4, int a5, int a6, int a7);
int gdFsReopenHn(int a4, int a5, int a6, int a7);
int syCfgGetSoundMode(int a4, int a5, int a6);
int FUN_0c0f7e80(int a4, int a5, int a6, int a7);
int FUN_0c1042ba(int a4, int a5, int a6, int a7);
int fmMngNum2Bit(int a4, int a5, int a6);
int FUN_0c0101f0(int a4);
int FUN_0c0121e0(int a4, int a5, int a6, int a7);
int FUN_0c016238(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c01e65e(int a4, int a5, int a6);
int FUN_0c02f3a6(int a4, int a5);
int FUN_0c03d33e(int a4, int a5);
int FUN_0c0422b8(int a4, int a5);
int FUN_0c063468(int a4);
int FUN_0c066cdc(int a4, int a5, int a6, int a7);
int FUN_0c06b5b2(int a4);
int FUN_0c068b18(int a4);
int FUN_0c07a188(int a4, int a5, int a6);
int FUN_0c09e71c(int a4, int a5, int a6);
int FUN_0c0a1d88(int a4, int a5);
int FUN_0c0a0c4c(int a4, int a5, int a6);
void FUN_0c0abef2(int a4);
int FUN_0c0e0210(int a4, int a5);
int FUN_0c0e67a2(int a4, int a5, int a6);
int syRtcGetDate(int a4);
int gdFsSeek(int a4, int a5, int a6);
int gdFsStrncmpi(int a4, int a5, int a6);
int FUN_0c107432(int a4, int a5, int a6, int a7, int a8);
void kmiRegisterPhIntHandler(int a4);
int vmsio_ismount(int a4);
int FUN_0c115128(int a4, int a5);
int FUN_0c01869c(int a4);
int FUN_0c01e4a0(void);
int FUN_0c04cdf2(void);
int FUN_0c068a6c(int a4);
int FUN_0c06e9c6(int a4);
int FUN_0c096750(int a4);
int FUN_0c09ca88(int a4, int a5, int a6, int a7);
int FUN_0c08bb84(int a4);
int FUN_0c0a1a60(int a4);
int FUN_0c0ccb60(int a4, int a5, int a6, int a7);
void nlInitMatrix(int a4, int a5);
int FUN_0c0eaef0(int a4, int a5);
int FUN_0c0f0cba(int a4, int a5);
int FUN_0c10077e(int a4, int a5);
int kdDevGetGunInfo(int a4, int a5);
int FUN_0c01227e(int a4, int a5, int a6, int a7);
int FUN_0c01f060(int a4, int a5, int a6, int a7);
int FUN_0c01fdc8(void);
float FUN_0c022e90(int a4, int a5, int a6, float f4);
int FUN_0c0302b6(int a4);
int FUN_0c046798(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int FUN_0c05c4ea(int a4);
int FUN_0c05c6e0(int a4);
int FUN_0c08d662(int a4);
int FUN_0c09dc1c(int a4, int a5);
int FUN_0c0cebe6(void);
int FUN_0c0d5428(void);
int FUN_0c0dabfe(int a4, int a5, int a6, int a7);

int FUN_0c065256(int a4)
{
    int stk[2];
    register int t1;
    register int t2;
    register int t5;
    register int t7;

    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 3.0f);
    t1 = FUN_0c09a910(a4);
    if ((signed char)t1 != 0) {
        (((struct o7236_uchar *)(a4))->v) = 0x0;
        t2 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0a2080))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    }
    t5 = *(signed char *)((a4 + 0x4));
    if (t5 == 9) {
        t7 = (((struct o719E_short *)(a4))->v);
        if ((unsigned short)t7 == 37) {
            (((struct o7236_uchar *)(a4))->v) = 0x0;
            return ((int (*)(int))(FUN_0c0a2080))(a4);
        }
        return (unsigned short)t7;
    }
    return t5;
}

int FUN_0c08eba8(int a4, int a5)
{
    register int t9;

    (((struct o71BD_uchar *)((*(int *)((a4 + 0x1C)))))->v) = a5;
    (((struct o7294_uint *)((*(int *)((a4 + 0x1C)))))->v) = a4;
    (((struct oF8_uint *)((*(int *)((a4 + 0x1C)))))->v) = (((((unsigned char)a5 << 2) + (unsigned char)a5) << 2) + (*(int *)((0xC338A98 + ((*(signed char *)((a4 + 0x4))) << 2)))));
    FUN_0c08d6aa((*(int *)((a4 + 0x1C))));
    *(volatile int *)((a4 + 0x1C));
    FUN_0c08dfa4();
    t9 = *(int *)((a4 + 0x1C));
    (((struct o71DD_uchar *)(t9))->v) = (*(signed char *)((((((struct oF8_int *)(t9))->v)) + 0x0)));
    FUN_0c08e980((*(int *)((a4 + 0x1C))));
    return FUN_0c09b7a4((*(int *)((a4 + 0x1C))), 0x7);
}

int FUN_0c0fff10(int a4, int a5)
{
    register int t0;
    register int t2;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    FUN_0c0ffdfc();
    t2 = FUN_0c111310(a5, 0xC000, a4);
    FUN_0c0ffdba();
    *(unsigned int *)0xC805708 = 0x1;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t2;
}

int FUN_0c1025e0(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t5;
    register int t7;

    *(unsigned short *)(((int)stk + 0)) = a5;
    if ((int)a7 >= (int)a6) {
        t0 = a7;
        for (;;) {
            t5 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0xC)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x24))), (t0 << 1), a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            if ((unsigned short)t5 == (unsigned short)(*(short *)(((int)stk + 0)))) {
                break;
            }
            t0 = (t0 - 1);
            if ((int)t0 < (int)a6) {
                return 0xFFFFFFFF;
            }
        }
        t7 = t0;
    } else {
        t7 = 0xFFFFFFFF;
    }
    return t7;
}

int search_fat(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t1;
    register int t2;
    register int t7;
    register int t9;

    *(unsigned short *)(((int)stk + 0)) = a5;
    t1 = *(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x30));
    if ((int)(t1 - 1) >= 0) {
        t2 = (t1 - 1);
        for (;;) {
            t7 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0xC)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x24))), (t2 << 1), a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            if ((unsigned short)t7 == (unsigned short)(*(short *)(((int)stk + 0)))) {
                break;
            }
            t2 = (t2 - 1);
            if ((int)t2 < 0) {
                return 0xFFFFFFFF;
            }
        }
        t9 = t2;
    } else {
        t9 = 0xFFFFFFFF;
    }
    return t9;
}

int FUN_0c04c028(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    u0 = (((struct o20_float *)(a4))->v);
    u1 = (((struct o28_float *)(a4))->v);
    t0 = *(int *)((a4 + 0x1C));
    u2 = (((struct o20_float *)(t0))->v);
    u3 = (((struct o28_float *)(t0))->v);
    u4 = ((u1 - u3) * (u1 - u3));
    u4 = u4 + ((u0 - u2)) * ((u0 - u2));
    u0 = FUN_0c0df340(u4);
    t1 = (int)u0;
    if ((*(signed char *)((t0 + 0x2))) == 0) {
        t1 = ((int)u0 - (*(short *)((0xC32D6FC + ((*(signed char *)((t0 + 0x4))) << 1)))));
    }
    return t1;
}

int FUN_0c05e01e(int a4)
{
    register int t1;

    t1 = *(int *)((a4 + 0x1C));
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((t1 + 0x3)));
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    FUN_0c05a8f8(a4);
    (((struct o118_uint *)(a4))->v) = (((short)((short)(*(signed char *)((t1 + 0x71F1))) * (short)0xDC0) + (0x300 + t1)) + 0x580);
    return FUN_0c0b6f5c(t1);
}

float FUN_0c09b74c(int a4)
{
    int stk[7];
    register float u8;
    register float u9;

    *(unsigned int *)(((int)stk + 0)) = (((((struct o718C_int *)(a4))->v)) + 0x6);
    FUN_0c09b540((((int)stk + 0) + 0x10), ((int)stk + 0));
    FUN_0c09b5d4((((int)stk + 0) + 0x4), ((int)stk + 0));
    u8 = *(float *)(((int)stk + 8));
    u9 = ((*(float *)(((((*(signed char *)(((0x71F1 + a4) + 0x0))) << 2) + (0xC150C60 + (((*(signed char *)((a4 + 0x4))) << 2) << 1))) + 0x0))) * ((((struct o54_float *)(a4))->v)));
    *(float *)(((int)stk + 8)) = (u8 * u9);
    return (u8 * u9);
}

void FUN_0c0a370c(int a4)
{
    int stk[1];
    register int t5;
    register int t6;

    *(unsigned char *)(((int)stk + 0)) = a4;
    if ((int)(unsigned char)(*(signed char *)(((int)stk + 0))) <= (int)0x2A) {
        FUN_0c0a2f16(0x0, (*(int *)((((unsigned char)(*(signed char *)(((int)stk + 0))) << 2) + 0xC151C58))));
        t5 = *(int *)0xC494048;
        t6 = 0xFFFFFFE7;
        if ((*(signed char *)0xC7F2F0E) != 0) {
            t6 = 0x2D;
        }
        FUN_0c0f4db4(t5, t6);
        FUN_0c0f4f28((*(int *)0xC494048), 0x1);
    return;
    }
}

int FUN_0c0d708c(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0d7054(a4);
    t1 = 0x0;
    if (t0 != 0) {
        if ((*(signed char *)0xC7F2F16) != 0) {
            t0 = FUN_0c0d7076();
            t2 = 0x0;
            if (t0 != 0) {
                FUN_0c0d7032(0x0, a5);
                FUN_0c0d7032(0x1, a5);
                t2 = 0x1;
            }
            t0 = t2;
        } else {
            t2 = FUN_0c0d7076();
            t0 = 0x0;
            if (t2 != 0) {
                FUN_0c0d7032(a4, a5);
                t0 = 0x1;
            }
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c0e669e(int a4, int a5)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t2;
    register int t6;
    register int t10;
    register int t11;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned short *)(((((int)stk + 0) + 0x6) + 0x0)) = a5;
    t0 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 0)) = (t0 + 0x9);
    t1 = *(short *)(((int)stk + 6));
    if (t1 != 1) {
        if (t1 != 2) {
            t11 = t1;
            if (t1 != 4) {
            } else {
                t2 = *(signed char *)(((t0 + 0x9) + 0x0));
                *(unsigned char *)(((t0 + 0x9) + 0x0)) = ((t2 & 0x80) | 0x2);
                t11 = ((t2 & 0x80) | 0x2);
            }
        } else {
            t6 = *(signed char *)(((t0 + 0x9) + 0x0));
            *(unsigned char *)(((t0 + 0x9) + 0x0)) = ((t6 & 0x80) | 0x1);
            t11 = ((t6 & 0x80) | 0x1);
        }
    } else {
        t10 = *(signed char *)(((t0 + 0x9) + 0x0));
        *(unsigned char *)(((t0 + 0x9) + 0x0)) = (t10 & 0x80);
        t11 = (t10 & 0x80);
    }
    return t11;
}

int FUN_0c0f2486(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t15;
    register int t23;

    if (((*(int *)((a5 + 0x0))) & 1) != 0) {
        t23 = FUN_0c10077e(((int)stk + 0), a5);
        if ((int)t23 < 0) {
            *(unsigned int *)((a4 + 0x4)) = 0x0;
            *(unsigned int *)((a4 + 0x0)) = 0x0;
        } else {
            t2 = kdGetDriverMode(0x5);
            if (t2 == 1) {
                t23 = FUN_0c0f2464((*(int *)(((int)stk + 0))));
                *(unsigned int *)((a4 + 0x4)) = t23;
            } else {
                *(unsigned int *)((a4 + 0x4)) = (*(int *)(((int)stk + 0)));
                t23 = t2;
            }
            *(unsigned int *)((a4 + 0x0)) = (*(int *)((a4 + 0x4)));
            *(unsigned int *)((a4 + 0x24)) = (a5 + 0x14);
        }
    } else {
        t15 = kdGetDriverMode(0x5);
        if (t15 == 1) {
            t23 = FUN_0c0f2464((*(int *)(((int)stk + 0))));
            *(unsigned int *)((a4 + 0x4)) = t23;
        } else {
            *(unsigned int *)((a4 + 0x4)) = (*(int *)(((int)stk + 0)));
            t23 = t15;
        }
        *(unsigned int *)((a4 + 0x0)) = (*(int *)((a4 + 0x4)));
        *(unsigned int *)((a4 + 0x24)) = (a5 + 0x14);
    }
    return t23;
}

void FUN_0c0faee0(void)
{
    (((struct o34_uint *)0xC817230)->v) = 0x0;
    (((struct o0_uint *)0xC8171F0)->v) = 0xC0FB418;
    (((struct o4_uint *)0xC8171F0)->v) = 0x0;
    (((struct o8_uint *)0xC8171F0)->v) = 0xC0FB41C;
    (((struct oC_uint *)0xC8171F0)->v) = 0x0;
    (((struct o10_uint *)0xC8171F0)->v) = 0xC0FB420;
    (((struct o14_uint *)0xC8171F0)->v) = 0x0;
    (((struct o18_uint *)0xC8171F0)->v) = 0xC0FB424;
    (((struct o1C_uint *)0xC8171F0)->v) = 0x0;
    (((struct o20_uint *)0xC8171F0)->v) = 0xC0FB460;
    (((struct o24_uint *)0xC8171F0)->v) = 0x0;
    (((struct o28_uint *)0xC8171F0)->v) = 0xC0FB464;
    (((struct o2C_uint *)0xC8171F0)->v) = 0x0;
    (((struct o30_uint *)0xC8171F0)->v) = 0xC0FB468;
    (((struct o34_uint *)0xC8171F0)->v) = 0x0;
    (((struct o38_uint *)0xC8171F0)->v) = 0xC0FB46C;
    (((struct o3C_uint *)0xC8171F0)->v) = 0x0;
    (((struct o0_uint *)0xC817230)->v) = 0xC0FB470;
    (((struct o4_uint *)0xC817230)->v) = 0x0;
}

void FUN_0c0ff15c(void)
{
    int stk[1];
    register int t1;
    register int t2;

    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = 0xC803EA8;
    for (;;) {
        *(unsigned int *)((t1 + 0xC)) = 0x0;
        t1 = (t1 + 0x10);
        if ((unsigned int)t1 >= (unsigned int)0xC804EA8) {
            break;
        }
    }
    t2 = 0xC804EA8;
    for (;;) {
        *(unsigned int *)((t2 + 0x0)) = 0x0;
        t2 = (t2 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0xC8051A8) {
            break;
        }
    }
    _builtin_set_imask(((unsigned int)((((unsigned short)(*(short *)(((int)stk + 0))) & 0xF) << 2) << 2) >> 4));
}

int FUN_0c1059ac(int a4, int a5, int a6)
{
    int stk[2];
    register int t1;
    register int t2;
    register int t3;

    *(unsigned int *)(((int)stk + 0)) = (FUN_0c0eb6cc(a4, a5, a6));
    t1 = FUN_0c0ed9c0(0x1A05E, (((int)stk + 0) + 0x4), 0x2);
    if ((t1 == 0) && ((t2 = *(signed char *)(((((int)stk + 0) + 0x4) + 0x0)), (unsigned char)t2 != 0xFF) || (t3 = *(signed char *)(((((int)stk + 0) + 0x4) + 0x1)), (unsigned char)t3 != 0xFF))) {
        (((struct o0_uchar *)0x8C000070)->v) = (*(signed char *)(((((int)stk + 0) + 0x4) + 0x0)));
        (((struct o1_uchar *)0x8C000070)->v) = (*(signed char *)(((((int)stk + 0) + 0x4) + 0x1)));
        FUN_0c0fedca(0x8C000070, 0x2);
    }
    return (*(int *)(((int)stk + 0)));
}

int mpdrv_clear_deviceinfo(int a4)
{
    register int t1;

    mpdrv_memset_l(a4, 0x0, 0x1E);
    (((struct o14_uchar *)(a4))->v) = 0x28;
    (((struct o15_uchar *)(a4))->v) = 0x6E;
    (((struct o16_uchar *)(a4))->v) = 0x6F;
    (((struct o17_uchar *)(a4))->v) = 0x6E;
    (((struct o18_uchar *)(a4))->v) = 0x65;
    (((struct o19_uchar *)(a4))->v) = 0x29;
    t1 = (a4 + 0x1A);
    for (;;) {
        *(unsigned char *)((t1 + 0x0)) = 0x20;
        t1 = (t1 + 0x1);
        if ((unsigned int)t1 >= (unsigned int)(a4 + 0x33)) {
            break;
        }
    }
    (((struct o33_uchar *)(a4))->v) = 0x0;
    return 0x0;
}

int fmMngChkEmptyData(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x3C;
    t1 = (a5 + 0x2);
    for (;;) {
        t2 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        if ((unsigned char)t2 == 0xFF) {
            t0 = (t0 - 1);
            if ((int)t0 <= 0) {
                break;
            }
            continue;
        }
        return 0x0;
    }
    t0 = FUN_0c11568c(0x3E, a5);
    t1 = 0x0;
    if ((unsigned short)((((struct o3E_short *)(a5))->v)) == (unsigned short)t0) {
        t0 = 0x40;
        t2 = a5;
        for (;;) {
            if (t0 == 0) {
                break;
            }
            *(unsigned char *)((t2 + 0x0)) = 0xFF;
            t0 = (t0 - 1);
            t2 = (t2 + 0x1);
        }
        t1 = 0x1;
    }
    return t1;
}

int FUN_0c020886(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t9;

    t0 = 0xC7E4070;
    t1 = a4;
    for (;;) {
        if (t1 == 0) {
            break;
        }
        t2 = 0x101;
        t3 = (*(signed char *)((t1 + t2)));
        t4 = t0;
        if (t3 != 0) {
            t2 = 0x105;
            t5 = (*(signed char *)((t1 + t2)));
            if (t5 == 0) {
                t0 = t1;
                t2 = (((int (*)(int, int, int, int))(FUN_0c0207ca))(t0, 0xC7E40C4, a6, a7));
                t0 = t1;
                t2 = (((int (*)(int, int))(FUN_0c0207ca))(t0, ((((struct o0_int *)0xC7E4074)->v))));
                t0 = t1;
                t2 = (((int (*)(int, int))(FUN_0c0207ca))(t0, ((((struct o4_int *)0xC7E4074)->v))));
            } else {
                t6 = t3;
                t7 = t5;
                t4 = t0;
            }
            t9 = t6;
            t6 = t7;
        } else {
            t9 = t3;
            t6 = t5;
        }
        t1 = (*(int *)((t1 + 0x18)));
        t3 = t9;
        t5 = t6;
        t0 = t4;
    }
    return t2;
}

int FUN_0c031030(void)
{
    int stk[16];

    *(float *)(((int)stk + 12)) = ((((struct o0_float *)0xC031128)->v));
    *(float *)(((int)stk + 16)) = ((((struct o4_float *)0xC031128)->v));
    *(float *)(((int)stk + 20)) = ((((struct o8_float *)0xC031128)->v));
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    *(float *)(((int)stk + 52)) = 1.0f;
    *(float *)(((int)stk + 28)) = 1.0f;
    *(float *)(((int)stk + 24)) = 1.0f;
    *(unsigned int *)(((int)stk + 60)) = 0x100A;
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    return (FUN_0c027fa4((((int)stk + 0) + 0x8), 0xC17FE4C, 0x1));
}

int FUN_0c05c370(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    register int t0;
    register int t5;

    t0 = *(int *)((a4 + 0x1C));
    FUN_0c05a80c(a4, a5, a6, f4, f5, f6, f7);
    if ((*(signed char *)((t0 + 0x7236))) == 0) {
        *(volatile signed char *)((a4 + 0x3));
        return FUN_0c0abe44(a4, 0x4);
    }
    t5 = *(signed char *)((a4 + 0x8));
    if (t5 != 0) {
        if (t5 != 1) {
        } else {
            FUN_0c05c44e();
        }
    } else {
        FUN_0c05c3be(a4);
    }
    (((struct o71CC_uint *)(t0))->v) = a4;
    return 0x71CC;
}

int FUN_0c085870(int a4)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = FUN_0c09dbce(a4);
    t1 = *(int *)((a4 + 0x30));
    t3 = (unsigned short)(t0 - t1);
    if ((0x8000 & (unsigned short)(t0 - t1)) != 0) {
        t3 = ((unsigned short)(t0 - t1) | 0xFFFF0000);
    }
    if ((int)t3 >= 0) {
        if ((int)t3 > (int)0x222) {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x222);
        } else {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + t3);
        }
    } else {
        if ((int)t3 >= (int)0xFFFFFDDE) {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + t3);
        } else {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 546);
        }
    }
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
    return (t0 - t1);
}

int FUN_0c08ed08(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x71D4;
    if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
        t1 = *(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x4));
        t2 = 0x5;
        if (((unsigned char)t1 != 3) && ((unsigned char)t1 != 4)) {
            t1 = *(signed char *)((a4 + 0x71DD));
            t2 = 0x8;
            if (((*(signed char *)(((signed char)t1 + 0xC1507A8))) == 0) && ((int)(signed char)t1 < (int)0x1B)) {
                t2 = 0x7;
            }
        }
        t0 = (FUN_0c09b7a4(a4, t2));
    }
    return t0;
}

int FUN_0c08f71c(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x7205));
    if (t0 != 0) {
        if (t0 != 1) {
            if ((t0 != 2) && (t0 != 3)) {
            } else {
                FUN_0c09a808(a4, 0x2, 0x63);
                (((struct o7205_uchar *)(a4))->v) = 0x0;
            }
        } else {
            FUN_0c09a808(a4, 0x2, 0x83);
        }
    } else {
        FUN_0c09a808(a4, 0x2, 0x63);
        (((struct o7205_uchar *)(a4))->v) = 0x0;
    }
    FUN_0c0dc18e(0xA, 0xA);
    (((struct o71BC_uchar *)(a4))->v) = 0x3;
    return 0x71BC;
}

int FUN_0c09dbce(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = *(int *)((a4 + 0x1C));
    u0 = (((struct o20_float *)(a4))->v);
    u1 = (((struct o7264_float *)(t0))->v);
    u2 = (((struct o28_float *)(a4))->v);
    u3 = (((struct o726C_float *)(t0))->v);
    u4 = (u1 - u0);
    if ((u1 - u0) == 0.0f) {
        u4 = (*(float *)0xC09DC9C);
    }
    u0 = (u3 - u2);
    u0 = -u0;
    t0 = FUN_0c0df360((u0 / u4));
    t1 = t0;
    if (0.0f > u4) {
        t1 = (t0 + 0x8000);
    }
    return (unsigned short)(t1 + 0x4000);
}

int FUN_0c09dc64(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = FUN_0c09db78(a4);
    t1 = *(int *)((a4 + 0x30));
    t3 = (unsigned short)(t1 - t0);
    if ((0x8000 & (unsigned short)(t1 - t0)) != 0) {
        t3 = ((unsigned short)(t1 - t0) | 0xFFFF0000);
    }
    if (((int)t3 >= (int)(-a5)) && ((int)t3 <= (int)a5)) {
        *(unsigned int *)((a4 + 0x30)) = t0;
    }
    return t0;
}

int FUN_0c0ccb12(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)0xC7F2977;
    t1 = *(signed char *)0xC7F266D;
    if (t1 != 0) {
        t2 = t1;
        if (t1 != 1) {
        } else {
            if ((signed char)t0 != 0) {
                t3 = *(short *)0xC7F2750;
                *(unsigned short *)0xC7F2750 = (t3 + 0x1);
                t4 = 0xEC;
                if ((int)(short)(t3 + 0x1) >= (int)0x12C) {
                    *(unsigned char *)0xC7F2978 = 0x1;
                    *(unsigned char *)0xC7F266D = 0x0;
                    t4 = 0x0;
                }
                t3 = t4;
            } else {
                *(unsigned char *)0xC7F266D = 0x0;
                t3 = 0x0;
            }
            t2 = t3;
        }
        t3 = t2;
    } else {
        t2 = t1;
        if ((signed char)t0 != 0) {
            *(unsigned char *)0xC7F266D = ((*(signed char *)0xC7F266D) + 0x1);
            *(unsigned short *)0xC7F2750 = 0x0;
            t2 = 0xEC;
        }
        t3 = t2;
    }
    return t3;
}

int FUN_0c0cc258(int a4)
{
    int stk[1];
    register int t19;
    register int t24;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t19 = 0x0;
    if ((int)(*(short *)0xC7EB298) < (int)(*(short *)0xC7F2568)) {
    } else {
        t19 = 0x1;
        if ((int)(*(short *)0xC7EB298) > (int)(*(short *)0xC7F2568)) {
        } else {
            FUN_0c0df920();
            t19 = (FUN_0c0e6e5c());
        }
    }
    t24 = t19;
    if ((*(signed char *)(((int)stk + 0))) == 1) {
        t24 = (0x1 - t19);
    }
    return t24;
}

void FUN_0c0d5bd4(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    if ((*(signed char *)0xC494D28) == 0) {
        FUN_0c0d5bc0();
        *(volatile signed char *)(((int)stk + 0));
        *(volatile float *)0xC0D5DF4;
        *(volatile float *)0xC0D5DF4;
        FUN_0c02d9e0();
    return;
    }
}

int FUN_0c0db03e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x4));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(0xC0DB0C6))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0DB096))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0DB08C))(a4, a5, a6, a7);
}

int FUN_0c0ddc70(int a4, int a5, int a6, int a7)
{
    if (a4 == 8) {
        return ((int (*)(int, int, int, int))(0xC0DDD08))(0x0, a5, a6, a7);
    }
    if (a4 == 16) {
        return ((int (*)(int, int, int, int))(0xC0DDD08))(0x1, a5, a6, a7);
    }
    if (a4 == 32) {
        return ((int (*)(int, int, int, int))(0xC0DDD08))(0x2, a5, a6, a7);
    }
    if (a4 == 64) {
        return ((int (*)(int, int, int, int))(0xC0DDD08))(0x3, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0DDCD0))(a4, a5, a6, a7);
}

int gdFsReopenHn(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    if ((a4 != 0) && (t0 = *(int *)((a4 + 0x0)), t1 = *(int *)((t0 + 0x1C)), t1 != a4)) {
        *(unsigned int *)((a4 + 0x4)) = a5;
        *(unsigned int *)((a4 + 0x8)) = a6;
        *(unsigned int *)((a4 + 0xC)) = a7;
        *(unsigned int *)((a4 + 0x10)) = ((int)(a7 + 0x7FF) >> 11);
        *(unsigned int *)((a4 + 0x14)) = 0x0;
        *(unsigned int *)((a4 + 0x18)) = 0x0;
        *(unsigned int *)((a4 + 0x1C)) = 0x0;
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        *(unsigned int *)((a4 + 0x3C)) = 0x0;
        (((struct o44_uint *)(a4))->v) = 0x0;
        (((struct o48_ushort *)(a4))->v) = 0x0;
        (((struct o4A_ushort *)(a4))->v) = 0x0;
        (((struct o4C_ushort *)(a4))->v) = 0x1;
        (((struct o50_ushort *)(a4))->v) = 0x0;
        (((struct o52_ushort *)(a4))->v) = 0x0;
        return a4;
    }
    return 0x0;
}

int syCfgGetSoundMode(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        t0 = *(int *)0xC346C14;
        if (t0 != 0) {
            t1 = FUN_0c105a14(0x0, t0, a6);
            if (t1 != -1) {
                t0 = *(signed char *)0x8C00007E;
                if ((signed char)t0 == 0) {
                    *(unsigned int *)((a4 + 0x0)) = 0x0;
                    return 0x0;
                }
                if ((signed char)t0 == 1) {
                    *(unsigned int *)((a4 + 0x0)) = 0x1;
                    return 0x0;
                }
                return 0xFFFFFFFF;
            }
            return 0xFFFFFFFF;
        }
        return 0xFFFFFFFF;
    }
    return 0xFFFFFFFF;
}

int FUN_0c0f7e80(int a4, int a5, int a6, int a7)
{
    if (a4 == 8) {
        return ((int (*)(int, int, int, int))(0xC0F7EFC))(0x0, a5, a6, a7);
    }
    if (a4 == 16) {
        return ((int (*)(int, int, int, int))(0xC0F7EFC))(0x1, a5, a6, a7);
    }
    if (a4 == 32) {
        return ((int (*)(int, int, int, int))(0xC0F7EFC))(0x2, a5, a6, a7);
    }
    if (a4 == 64) {
        return ((int (*)(int, int, int, int))(0xC0F7EFC))(0x3, a5, a6, a7);
    }
    if (a4 == 0x80) {
        return ((int (*)(int, int, int, int))(0xC0F7EFC))(0x4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0F7EE0))(a4, a5, a6, a7);
}

int FUN_0c1042ba(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t7;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x30)))) {
            return 0xFFFFFFFF;
        }
        t7 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0xC)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x24))), (t0 << 1), a6, a7);
        if (((unsigned short)t7 != 0xFFFC) && ((unsigned short)t7 != 0xFFFF)) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return t0;
}

int fmMngNum2Bit(int a4, int a5, int a6)
{
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t0;

    t1 = (((a6 << 2) << 2) << 2);
    t3 = a4;
    t4 = a5;
    t5 = a6;
    for (;;) {
        if ((int)t1 <= 0) {
            break;
        }
        if ((int)t3 >= (int)0x8) {
            *(unsigned char *)((t4 + 0x0)) = 0x0;
            t4 = (t4 + 0x1);
            t3 = (t3 - 8);
        } else {
            if ((int)t3 > 0) {
                t0 = 0x8;
                for (;;) {
                    t5 = (t5 << 1);
                    if ((int)t3 > 0) {
                        t3 = (t3 - 1);
                    } else {
                        t5 = (t5 | (0x1));
                    }
                    t0 = (t0 - 0x1);
                    if (t0 == 0) {
                        break;
                    }
                }
                *(unsigned char *)((t4 + 0x0)) = t5;
            } else {
                *(unsigned char *)((t4 + 0x0)) = 0xFFFFFFFF;
            }
            t4 = (t4 + 0x1);
        }
        t1 = (t1 - 1);
    }
    return 0x0;
}

int FUN_0c0101f0(int a4)
{
    register int t1;
    register int t3;
    register int t4;

    t1 = pdVmsLcdIsReady((*(int *)((0xC1782F0 + (a4 << 2)))));
    if (t1 != 0) {
        t3 = FUN_0c0f2ccc((*(int *)((0xC1782F0 + (a4 << 2)))));
        t4 = 0x0;
        if (t3 == 1) {
            t4 = 0x3;
        }
        return FUN_0c0f2d38((*(int *)((0xC1782F0 + (a4 << 2)))), 0xC177B70, t4);
    }
    return t1;
}

int FUN_0c0121e0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
                t0 = FUN_0c01253c(0x6);
                t2 = (signed char)t0;
                if ((signed char)t0 != 0) {
                    t0 = ((int (*)(void))(FUN_0c012504))();
                    *(unsigned char *)0xC361BC9 = 0x4;
                    t2 = t0;
                }
                t0 = t2;
            } else {
                t2 = ((int (*)(int, int, int, int))(FUN_0c012504))(a4, a5, a6, a7);
                *(unsigned char *)0xC361BC9 = 0x4;
                t0 = t2;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
        t1 = ((int (*)(int, int, int, int))(FUN_0c012504))(a4, a5, a6, a7);
        FUN_0c012420(0x3);
        *(unsigned short *)((a4 + 0x1C)) = 0x78;
        t0 = 0x78;
    }
    return t0;
}

int FUN_0c016238(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    register int t0;
    register int t3;
    register int t10;

    t0 = 0x0;
    for (;;) {
        t3 = *(signed char *)((((short)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC361CD0) + 0x4));
        if ((unsigned char)t3 != 0) {
            t10 = (unsigned char)t3;
            if ((unsigned char)t3 != 1) {
            } else {
                t10 = (FUN_0c015fda(((short)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC361CD0), a5, a6, a7, f4, f5, f6, f7, f8, f9, f10));
            }
        } else {
            t10 = (FUN_0c015ba0(((short)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC361CD0), a5, a6, a7, f4, f5, f6, f7, f8, f9));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x15) {
            break;
        }
    }
    return t10;
}

int FUN_0c01e65e(int a4, int a5, int a6)
{
    if ((signed char)a5 != 0) {
        if ((signed char)a5 != 1) {
            if ((signed char)a5 != 2) {
                return 0x0;
            }
            if (((unsigned short)(*(short *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC361BF0) + 0xC))) & a6) != 0) {
                return 0x1;
            }
            return 0x0;
        }
        if (((unsigned short)(*(short *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC361BF0) + 0xA))) & a6) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    if (((unsigned short)(*(short *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC361BF0) + 0x8))) & a6) == 0) {
        return 0x0;
    }
    return 0x1;
}

int FUN_0c02f3a6(int a4, int a5)
{
    register int t8;
    register int t3;
    register int t4;

    *(unsigned char *)((a4 + 0x0)) = 0x0;
    t8 = 0xC;
    if (((((struct oC_float *)(a4))->v)) == (*(float *)0xC02F480)) {
        *(unsigned char *)((a5 + 0x2)) = ((*(signed char *)((a5 + 0x2))) - 1);
        t3 = *(signed char *)((a5 + 0x1));
        t4 = *(signed char *)((a5 + 0x2));
        *(unsigned char *)(((((short)((short)t3 * (short)0xF0) + 0xC366CC4) + (unsigned char)((((t4 << 1) + t4) << 2) << 2)) + 0x0)) = 0x1;
        *(unsigned char *)(((((short)((short)t3 * (short)0xF0) + 0xC366CC4) + (unsigned char)((((t4 << 1) + t4) << 2) << 2)) + 0x1)) = (*(signed char *)((a5 + 0x1)));
        *(unsigned char *)(((((short)((short)t3 * (short)0xF0) + 0xC366CC4) + (unsigned char)((((t4 << 1) + t4) << 2) << 2)) + 0x2)) = 0x0;
        t8 = *(signed char *)((a5 + 0x2));
        *(unsigned char *)(((((short)((short)t3 * (short)0xF0) + 0xC366CC4) + (unsigned char)((((t4 << 1) + t4) << 2) << 2)) + 0x3)) = t8;
    }
    return t8;
}

int FUN_0c03d33e(int a4, int a5)
{
    register int t0;

    t0 = (((struct oF2_short *)(a4))->v);
    (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        if ((unsigned char)(*(signed char *)((((((((struct oF0_short *)(a4))->v)) << 2) + a5) + 0x2))) == 0xFF) {
            (((struct oF0_ushort *)(a4))->v) = (*(signed char *)((((((((struct oF0_short *)(a4))->v)) << 2) + a5) + 0x3)));
        } else {
            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
        }
        return FUN_0c03d2fc(a4, a5, ((((struct oF0_short *)(a4))->v)));
    }
    return 0xF2;
}

int FUN_0c0422b8(int a4, int a5)
{
    register int t0;

    t0 = (((struct oF2_short *)(a4))->v);
    (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        if ((unsigned char)(*(signed char *)((((((((struct oF0_short *)(a4))->v)) << 2) + a5) + 0x2))) == 0xFF) {
            (((struct oF0_ushort *)(a4))->v) = (*(signed char *)((((((((struct oF0_short *)(a4))->v)) << 2) + a5) + 0x3)));
        } else {
            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
        }
        return FUN_0c042256(a4, a5, ((((struct oF0_short *)(a4))->v)));
    }
    return 0xF2;
}

int FUN_0c063468(int a4)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((((((struct o71CC_int *)(a4))->v)) != 0) && ((t1 = (((struct o71CC_int *)(a4))->v), t2 = *(signed char *)((t1 + 0x4)), t2 == 6) && ((t3 = (((struct o71CC_int *)(a4))->v), t4 = *(signed char *)((t3 + 0x30D)), t4 == 5) || (t4 == 14)))) {
        *(volatile signed char *)((a4 + 0x3));
        FUN_0c0abe44(((((struct o71CC_int *)(a4))->v)), 0xE);
        return 0x1;
    }
    return 0x0;
}

int FUN_0c066cdc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        t1 = FUN_0c09c782(a4);
        if ((signed char)t1 != 0) {
            FUN_0c0634b4(a4);
            (((struct o7236_uchar *)(a4))->v) = 0x0;
            (((struct o71CC_uint *)(a4))->v) = 0x0;
            return ((int (*)(int, int, int, int))(0xC066D52))(0x0, a5, a6, a7);
        }
        return ((int (*)(void))(0xC066D44))();
    }
    return (signed char)t0;
}

int FUN_0c06b5b2(int a4)
{
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 10.0f;
    (((struct o48_float *)(a4))->v) = -0.399999976f;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    FUN_0c09a808(a4, 0x1, 0x63);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    *(unsigned char *)((a4 + 0xB)) = 0x1;
    return 0x1;
}

int FUN_0c068b18(int a4)
{
    register int t6;

    FUN_0c09a808(a4, 0x1, 0x65);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    FUN_0c0a3914(a4, 0x1A);
    FUN_0c0b7b88(a4, 0x0);
    FUN_0c0318e0(a4, 0x0);
    FUN_0c0318e0(a4, 0x1);
    FUN_0c0a3914(a4, 0x33);
    t6 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t6 + 0x1);
    return (t6 + 0x1);
}

int FUN_0c07a188(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t2;

    *(unsigned char *)(((int)stk + 4)) = a5;
    *(unsigned char *)(((int)stk + 0)) = a6;
    t0 = ((0x72BC + a4) + 0x8);
    t1 = ((0x72BC + a4) + 0x3);
    t2 = 0x0;
    for (;;) {
        t2 = (t2 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = 0x0;
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x1);
        if ((int)t2 >= (int)0x5) {
            break;
        }
    }
    *(unsigned char *)(((0x72BC + a4) + 0x2)) = (*(signed char *)(((int)stk + 0)));
    FUN_0c099930(a4);
    return FUN_0c09a808(a4, (*(signed char *)(((int)stk + 4))), (*(signed char *)(((int)stk + 0))));
}

int FUN_0c09e71c(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t1;

    *(unsigned char *)(((int)stk + 0)) = 0x0;
    *(unsigned char *)(((int)stk + 4)) = 0x0;
    t0 = FUN_0c09c6b8(a4, a5, a6);
    if ((signed char)t0 != 13) {
        t1 = FUN_0c09e4ac(a4, (((int)stk + 0) + 0x4), ((int)stk + 0));
        if ((signed char)t1 != 0) {
            (((struct o7238_uchar *)(a4))->v) = (*(signed char *)(((int)stk + 4)));
            (((struct o723A_uchar *)(a4))->v) = (*(signed char *)(((int)stk + 0)));
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c0a1d88(int a4, int a5)
{
    register int t3;
    register int t4;

    (((struct o100_uchar *)(a4))->v) = a5;
    (((struct oF4_uint *)(a4))->v) = (((((unsigned char)a5 << 2) + (unsigned char)a5) << 2) + (*(int *)((((*(signed char *)((0xC7E40C8 + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0)))) << 2) + 0xC338A98))));
    (((struct o108_uchar *)(a4))->v) = 0x0;
    t3 = (0x11C + a4);
    t4 = 0x0;
    for (;;) {
        t4 = (t4 + 0x1);
        *(unsigned int *)((t3 + 0x0)) = 0x0;
        t3 = (t3 + 0x4);
        if ((int)t4 >= (int)0xA) {
            break;
        }
    }
    (((struct o144_uchar *)(a4))->v) = 0x0;
    return 0x144;
}

int FUN_0c0a0c4c(int a4, int a5, int a6)
{
    int stk[1];
    register int t0;
    register int t4;
    register int t1;
    register int t2;
    int t3;

    t0 = FUN_0c09c6b8(a4, a5, a6);
    if (((signed char)t0 == 0) && ((t1 = *(signed char *)((a4 + 0x721A)), t1 == 0) && ((t2 = (((struct o2E4_int *)(a4))->v), (t2 & 4) != 0) && (t3 = (((struct o2DC_int *)(a4))->v), (t3 & 240) != 0)))) {
        t4 = FUN_0c09cd32(a4);
        *(unsigned char *)(((int)stk + 0)) = t4;
        if ((signed char)t4 != 0) {
            return (*(signed char *)(((int)stk + 0)));
        }
        return 0x0;
    }
    return 0x0;
}

void FUN_0c0abef2(int a4)
{
    register int t5;
    register int t6;
    register int t7;
    register int t10;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    FUN_0c0e7140(a4);
    t5 = t4;
    t6 = (0x0 + t1);
    t7 = 0x0;
    for (;;) {
        t10 = (*(int *)((0xC7E4070 + ((*(signed char *)((t6 + 0x0))) << 2))));
        for (;;) {
            if (t10 == 0) {
                break;
            }
            t3 = 0x310;
            t2 = (signed char)t5;
            t3 = (t3 + t10);
            t2 = (t2 + t3);
            *(unsigned char *)((t2 + 0x0)) = 0x0;
            t10 = (*(int *)((t10 + 0x18)));
        }
        t7 = (t7 + 0x1);
        t3 = (signed char)t7;
        t6 = (t6 + 0x1);
        if ((int)t3 >= (int)0x2) {
            break;
        }
    }
}

int FUN_0c0e0210(int a4, int a5)
{

    return ((int (*)(int, int, int, int))(0xC0E028C))(a4, a5, 0x0, 0xA);
}

int FUN_0c0e67a2(int a4, int a5, int a6)
{
    int stk[5];
    register int t0;
    register int t2;
    register int t3;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned short *)(((((int)stk + 0) + 0xE) + 0x0)) = a5;
    *(unsigned short *)(((((int)stk + 0) + 0xC) + 0x0)) = a6;
    t0 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 8)) = (t0 + 0x33);
    t2 = *(short *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 0)) = ((((*(short *)(((int)stk + 14))) << 2) << 2) | t2);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t3 = (t0 + 0x33);
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) >= (int)0x4) {
            break;
        }
        t3 = (*(int *)(((int)stk + 0)));
        *(unsigned char *)(((*(int *)(((int)stk + 8))) + 0x0)) = t3;
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x4);
        t3 = (*(int *)(((int)stk + 4)));
        t3 = (t3 + 0x1);
        *(unsigned int *)(((int)stk + 4)) = t3;
    }
    return t2;
}

int syRtcGetDate(int a4)
{
    register int t1;

    if ((((((struct o4_int *)0xC7FD0C8)->v)) & 0x1) == 1) {
        t1 = syRtcGetCountForce();
        syRtcCountToDate(t1, a4);
        (((struct o0_uint *)0xC7FD0C8)->v) = t1;
    } else {
        syRtcCountToDate(((((struct o0_int *)0xC7FD0C8)->v)), a4);
    }
    *(volatile signed char *)((a4 + 0x3));
    *(unsigned char *)((a4 + 0x7)) = (syRtcMakeDayOfWeek((*(short *)((a4 + 0x0))), (*(signed char *)((a4 + 0x2)))));
    *(unsigned char *)((a4 + 0x8)) = (syRtcMakeAgeOfMoon());
    return ((((struct o4_int *)0xC7FD0C8)->v));
}

int gdFsSeek(int a4, int a5, int a6)
{
    register int t4;
    register int t5;

    if (a4 != 0) {
        if (((((struct o4C_short *)(a4))->v)) == 0) {
            return 0xFFFFFFF6;
        }
        t4 = *(int *)((a4 + 0x10));
        if (a6 != 0) {
            if (a6 != 1) {
                if (a6 != 2) {
                    return 0xFFFFFFF0;
                }
                if (((int)(a5 + t4) >= 0) && ((int)(a5 + t4) <= (int)t4)) {
                    *(unsigned int *)((a4 + 0x14)) = (a5 + t4);
                    return 0x0;
                }
                return 0xFFFFFFEF;
            }
            t5 = *(int *)((a4 + 0x14));
            if (((int)(t5 + a5) >= 0) && ((int)(t5 + a5) <= (int)t4)) {
                *(unsigned int *)((a4 + 0x14)) = (t5 + a5);
                return 0x0;
            }
            return 0xFFFFFFEF;
        }
        if (((int)a5 >= 0) && ((int)a5 <= (int)t4)) {
            *(unsigned int *)((a4 + 0x14)) = a5;
            return 0x0;
        }
        return 0xFFFFFFEF;
    }
    return 0xFFFFFFF6;
}

int gdFsStrncmpi(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = 0x1;
    if ((int)a6 > 0) {
        t1 = a5;
        t2 = a4;
        t3 = a6;
        for (;;) {
            if ((*(signed char *)((t2 + 0x0))) != 0) {
                t4 = *(signed char *)((t2 + 0x0));
                t2 = (t2 + 0x1);
                t5 = (gdFsToUpper(t4));
                t4 = (signed char)t5;
                t6 = *(signed char *)((t1 + 0x0));
                t1 = (t1 + 0x1);
                t5 = (gdFsToUpper(t6));
                t5 = (signed char)t5;
                if (t4 == t5) {
                    t3 = (t3 - 1);
                    if ((int)t3 <= 0) {
                        t5 = 0x1;
                        return t5;
                    }
                    continue;
                }
                t5 = 0x0;
                return t5;
            }
            break;
        }
        t2 = 0x1;
        if ((*(signed char *)((t1 + 0x0))) != 0) {
            t2 = 0x0;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c107432(int a4, int a5, int a6, int a7, int a8)
{
    register int t1;

    if ((int)a8 <= 0) {
        return 0x0;
    }
    t1 = FUN_0c1151b8(((((struct o40_int *)(a4))->v)), a5, a7, a6, a8);
    if (t1 != 0) {
        mwRnaErrCallFunc(0xC15B36C);
    }
    return a8;
}

void kmiRegisterPhIntHandler(int a4)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    (((struct o224_uint *)(((int)_builtin_get_vbr())))->v) = a4;
    (((struct o30_uint *)0xA05F6900)->v) = 0x0;
    (((struct o38_uint *)0xA05F6900)->v) = 0x0;
    (((struct o0_uint *)0xA05F6900)->v) = 0xFFFFFFFF;
    (((struct o8_uint *)0xA05F6900)->v) = 0xFFFFFFFF;
    (((struct o30_uint *)0xA05F6900)->v) = 0x2807EC;
    (((struct o38_uint *)0xA05F6900)->v) = 0xE;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

int vmsio_ismount(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(int *)(((a4 << 2) + 0xC15B6C4));
    t2 = kdGetDevice(t1);
    t3 = kdGetDeviceInfo(t1);
    if ((*(signed char *)((t2 + 0x0))) != 0) {
        t2 = thunk_FUN_0c111b6e(t1);
        if ((t2 == 0) && (t0 = *(int *)((t3 + 0x0)), (t0 & 2) != 0)) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}


int FUN_0c01869c(int a4)
{
    register int t2;
    register int t3;
    register int t4;

    FUN_0c010b10((signed char)a4);
    t2 = 0x0;
    for (;;) {
        t3 = *(signed char *)((t2 + (0xC7F476D + (((signed char)a4 << 2) << 1))));
        t4 = (((0xC3622EA + (((signed char)a4 << 2) << 2)) + 0x4) + t2);
        t2 = (t2 + 0x1);
        *(unsigned char *)((t4 + 0x0)) = t3;
        if ((int)t2 >= (int)0x8) {
            break;
        }
    }
    return (0xC7F476D + (((signed char)a4 << 2) << 1));
}

int FUN_0c01e4a0(void)
{
    register int t0;
    register int t2;
    register int t9;

    t0 = 0x0;
    for (;;) {
        t2 = *(signed char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x4));
        if ((unsigned char)t2 != 0) {
            t9 = (unsigned char)t2;
            if ((unsigned char)t2 != 1) {
            } else {
                t9 = (FUN_0c01e34a(((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C)));
            }
        } else {
            t9 = (FUN_0c01e2e4(((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C)));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t9;
}

int FUN_0c04cdf2(void)
{
    *(unsigned char *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0x0)) = 0x0;
    *(unsigned char *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0x1)) = 0x0;
    *(unsigned char *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0x2)) = 0x0;
    *(unsigned char *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0x3)) = 0x0;
    return 0x0;
}

int FUN_0c068a6c(int a4)
{
    register int t0;

    FUN_0c09a910(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t0 = FUN_0c09e7b8(a4);
        if ((signed char)t0 == 0) {
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                return FUN_0c0a2080(a4);
            }
            FUN_0c09d990(a4);
            return FUN_0c09d9bc(a4);
        }
        return FUN_0c0a2080(a4);
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        return FUN_0c0a2080(a4);
    }
    FUN_0c09d990(a4);
    return FUN_0c09d9bc(a4);
}

int FUN_0c06e9c6(int a4)
{
    register int t0;
    register int t4;

    t0 = FUN_0c09a910(a4);
    t4 = (signed char)t0;
    if ((signed char)t0 != 0) {
        (((struct o71BC_uchar *)(a4))->v) = 0x2;
        FUN_0c09a808(a4, 0x1, 0xFFFFFFA0);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
        FUN_0c0641a0(a4, 35.0f, -3.5f);
        *(unsigned char *)((a4 + 0xA)) = 0x1;
        t4 = 0x1;
    }
    return t4;
}

int FUN_0c096750(int a4)
{
    register int t1;

    if ((((((struct o2DC_int *)(a4))->v)) & 48) != 0) {
        t1 = FUN_0c09660c(a4);
        if ((signed char)t1 != 0) {
            return FUN_0c0a2e26(a4, 0x6, 0x0);
        }
        FUN_0c09a910(a4);
        return FUN_0c09d990(a4);
    }
    FUN_0c09a808(a4, 0x2, 0xD4);
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    return 0x0;
}

int FUN_0c09ca88(int a4, int a5, int a6, int a7)
{
    return ((int (*)(int, int, int, int))(0xC09CADA))(a4, a5, 0x0, a7);
}

int FUN_0c08bb84(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    return t0;
                                }
                                return FUN_0c08bb46(a4);
                            }
                            return FUN_0c08bb22(a4);
                        }
                        return FUN_0c08bab6(a4);
                    }
                    return FUN_0c08b9c2(a4);
                }
                return FUN_0c08b8fc(a4);
            }
            return FUN_0c08b8b8(a4);
        }
        return FUN_0c08b844(a4);
    }
    return FUN_0c08b81e(a4);
}

int FUN_0c0a1a60(int a4)
{
    if ((*(signed char *)((a4 + 0x71BC))) != 2) {
        if ((*(signed char *)((a4 + 0x721E))) == 0) {
            (((struct o7222_uchar *)(a4))->v) = 0x1;
        }
        if ((*(signed char *)((a4 + 0x721E))) == 1) {
            (((struct o7222_uchar *)(a4))->v) = 0x2;
        }
    } else {
        if ((*(signed char *)((a4 + 0x721E))) == 0) {
            (((struct o7222_uchar *)(a4))->v) = 0x3;
        }
        if ((*(signed char *)((a4 + 0x721E))) == 1) {
            (((struct o7222_uchar *)(a4))->v) = 0x4;
        }
    }
    return FUN_0c0a2e26(a4, 0xB, 0x0);
}

int FUN_0c0ccb60(int a4, int a5, int a6, int a7)
{
    register float u0;
    register float u1;
    register int t2;
    register int t9;

    u0 = (((struct o0_float *)0xC7F2AB4)->v);
    u1 = (((struct o8_float *)0xC7F2AB4)->v);
    t2 = *(signed char *)0xC7F3051;
    t9 = 0x0;
    if (!((*(float *)(((((t2 << 2) << 2) + 0xC33CF8C) + 0x0))) > u0)) {
        t9 = 0x1;
        if (u0 > ((((struct o4_float *)((((t2 << 2) << 2) + 0xC33CF8C)))->v))) {
            t9 = 0x2;
        }
    }
    if (!(((((struct o8_float *)((((t2 << 2) << 2) + 0xC33CF8C)))->v)) > u1)) {
        if (u1 > ((((struct oC_float *)((((t2 << 2) << 2) + 0xC33CF8C)))->v))) {
            return ((int (*)(int, int, int, int, float, float))(0xC0CCBC6))((t9 + 0x6), (((t2 << 2) << 2) + 0xC33CF8C), a6, a7, u0, u1);
        }
        return ((int (*)(int, int, int, int, float, float))(0xC0CCBC4))(t9, (((t2 << 2) << 2) + 0xC33CF8C), a6, a7, u0, u1);
    }
    return ((int (*)(int, int, int, int, float, float))(0xC0CCBC6))(t9, (((t2 << 2) << 2) + 0xC33CF8C), a6, a7, u0, u1);
}


int FUN_0c0eaef0(int a4, int a5)
{
    return ((int (*)(int, int, int, int))(0xC0EAF50))(((int)0x1 << (int)(a4 & 0xF)), ((int)(a5 + 0xF) >> 4), ((((int)a4 >> 4) << 1) + 0xC7FD480), 0x1);
}

int FUN_0c0f0cba(int a4, int a5)
{
    register int t2;
    register int t4;

    t2 = gdFsSearchName(a4, (*(int *)(((*(int *)0xC346BD8) + 0x10))), 0x0);
    if (t2 == 0) {
        return 0xFFFFFFF8;
    }
    t4 = *(int *)(((*(int *)0xC346BD8) + 0x10));
    *(unsigned int *)((a5 + 0x0)) = ((*(int *)((((t4 + 0x10) + ((t2 - 1) * 0x2C)) + 0x0))) + 0x96);
    *(unsigned int *)((a5 + 0x4)) = (*(int *)((((t4 + 0x10) + ((t2 - 1) * 0x2C)) + 0x4)));
    *(unsigned char *)((a5 + 0x8)) = (*(signed char *)((((t4 + 0x10) + ((t2 - 1) * 0x2C)) + 0x8)));
    return 0x0;
}

int FUN_0c10077e(int a4, int a5)
{
    register int t0;

    t0 = kdDevGetFD(a5, 0x1);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)((a4 + 0x0)) = (((((unsigned char)(*(signed char *)((t0 + 0x1))) << 16) | ((unsigned char)(*(signed char *)((t0 + 0x2))) << 8)) | (((unsigned char)(*(signed char *)((t0 + 0x0))) << 16) << 8)) | (unsigned char)(*(signed char *)((t0 + 0x3))));
    return 0x0;
}

int kdDevGetGunInfo(int a4, int a5)
{
    register int t0;

    t0 = kdDevGetFD(a5, 0x20);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)((a4 + 0x0)) = (((((unsigned char)(*(signed char *)((t0 + 0x1))) << 16) | ((unsigned char)(*(signed char *)((t0 + 0x2))) << 8)) | (((unsigned char)(*(signed char *)((t0 + 0x0))) << 16) << 8)) | (unsigned char)(*(signed char *)((t0 + 0x3))));
    return 0x0;
}

int FUN_0c01227e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                t0 = FUN_0c012504(a4, a5, a6, a7);
                *(unsigned char *)0xC361BC9 = 0x2;
                t1 = t0;
            }
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
        FUN_0c012504(a4, a5, a6, a7);
        FUN_0c012420(0x6);
        FUN_0c010b84();
        *(unsigned short *)((a4 + 0x1C)) = 0x78;
        t0 = 0x78;
    }
    return t0;
}

int FUN_0c01f060(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x4));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = FUN_0c01fff4(0x3060E);
            t2 = (signed char)t0;
            if ((signed char)t0 != 0) {
                t0 = ((int (*)(void))(FUN_0c01fdc8))();
                *(unsigned char *)0xC362A50 = (*(signed char *)0xC362A80);
                t2 = 0x30;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
        t1 = ((int (*)(int, int, int, int))(FUN_0c01fdc8))(a4, a5, a6, a7);
        FUN_0c01f4c8(0x2);
        FUN_0c01f9a0();
        FUN_0c01f9a0();
        t1 = FUN_0c01fff4(0x3060E);
        t2 = (signed char)t1;
        if ((signed char)t1 != 0) {
            t1 = ((int (*)(void))(FUN_0c01fdc8))();
            *(unsigned char *)0xC362A50 = (*(signed char *)0xC362A80);
            t2 = 0x30;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c01fdc8(void)
{
    *(unsigned char *)0xC362A7E = 0x1;
    *(volatile int *)0xC7E4084;
    return ((int (*)(void))(0xC01FE24))();
}

float FUN_0c022e90(int a4, int a5, int a6, float f4)
{
    int stk[2];
    register int t3;
    register float t5;
    register int t15;
    register float u25;
    register float u12;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned char *)(((int)stk + 4)) = a6;
    if ((*(signed char *)((a4 + 0x2))) == 0) {
        if ((*(signed char *)(((int)stk + 4))) != -1) {
            t3 = *(int *)(((int)stk + 0));
            t5 = FUN_0c022dfc(a4, (*(signed char *)(((int)stk + 4))), f4);
            (((struct oC_float *)(t3))->v) = (((((struct oC_float *)(t3))->v)) * t5);
            u12 = t5;
        }
        u25 = u12;
    } else {
        t15 = *(int *)(((int)stk + 0));
        (((struct oC_float *)(t15))->v) = (((((struct oC_float *)(t15))->v)) * ((((struct o50_float *)(a4))->v)));
    }
    return u25;
}

int FUN_0c0302b6(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC366A9C) + 0xA));
    if (t0 != 99) {
        if ((signed char)a4 == 0) {
            t1 = *(signed char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC366A9C) + 0xA));
            t2 = ((((int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u))) >> 1) + 0xB);
        } else {
            t1 = *(signed char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC366A9C) + 0xA));
            t2 = ((((int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u))) >> 1) + 0x21);
        }
        return FUN_0c0a3f30(t2);
    }
    return t0;
}

int FUN_0c046798(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    register int t0;
    register int t2;

    t0 = FUN_0c047c6c(a4, a5, a7, a8, 0xC14A788, ((short)(a9 >> 0)), ((signed char)(a10 >> 0)), a11, a12);
    t2 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC0467E0;
        *(unsigned int *)((t0 + 0x1C)) = a6;
        (((struct o308_uint *)(t0))->v) = (*(int *)((a6 + 0x10)));
        t2 = 0x308;
    }
    return t2;
}

int FUN_0c05c4ea(int a4)
{
    register float u2;

    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
    u2 = *(float *)0xC05C5A8;
    (((struct o1C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = u2;
    (((struct o20_float *)(((((struct o2E4_int *)(a4))->v))))->v) = u2;
    (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = u2;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    return FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0x1C);
}


int FUN_0c08d662(int a4)
{
    int t6;
    register int t9;

    if (((((struct o38_float *)(a4))->v)) == 0.0f) {
        (((struct o38_float *)(a4))->v) = (*(float *)0xC08D6DC);
    }
    t6 = FUN_0c0df360(((-((((struct o40_float *)(a4))->v))) / ((((struct o38_float *)(a4))->v))));
    t9 = (0xFFFF & t6);
    if (0.0f > ((((struct o38_float *)(a4))->v))) {
        t9 = ((0xFFFF & t6) + 0x8000);
    }
    return (unsigned short)(t9 + 0x4000);
}

int FUN_0c09dc1c(int a4, int a5)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u6;
    register float u8;
    int t9;
    register int t11;

    u0 = *(float *)((a5 + 0x0));
    u1 = *(float *)((a4 + 0x0));
    u2 = (((struct o8_float *)(a5))->v);
    u3 = (((struct o8_float *)(a4))->v);
    u6 = (u0 - u1);
    if ((u0 - u1) == 0.0f) {
        u6 = (*(float *)0xC09DC9C);
    }
    u8 = (u2 - u3);
    u8 = -u8;
    t9 = FUN_0c0df360((u8 / u6));
    t11 = (0xFFFF & t9);
    if (0.0f > u6) {
        t11 = ((0xFFFF & t9) + 0x8000);
    }
    return (unsigned short)(t11 + 0x4000);
}

int FUN_0c0cebe6(void)
{
    register int t10;

    (((struct o0_uchar *)0xC49491C)->v) = (*(signed char *)0xC7F2F0D);
    (((struct o1_uchar *)0xC49491C)->v) = (*(signed char *)0xC7F2F0E);
    (((struct o2_uchar *)0xC49491C)->v) = (*(signed char *)0xC7F2F0F);
    (((struct o3_uchar *)0xC49491C)->v) = (*(signed char *)0xC7F2F10);
    (((struct o4_uchar *)0xC49491C)->v) = (*(signed char *)0xC7F2F11);
    (((struct o5_uchar *)0xC49491C)->v) = (*(signed char *)0xC7F2F12);
    (((struct o6_uchar *)0xC49491C)->v) = (*(signed char *)0xC7F2F13);
    (((struct o7_uchar *)0xC49491C)->v) = (*(signed char *)0xC7F2F14);
    (((struct o8_uchar *)0xC49491C)->v) = (*(signed char *)0xC7F2F15);
    (((struct o9_uchar *)0xC49491C)->v) = (*(signed char *)0xC7F2F16);
    t10 = *(signed char *)0xC7F2F17;
    (((struct oA_uchar *)0xC49491C)->v) = t10;
    return t10;
}

int FUN_0c0d5428(void)
{
    register int t0;

    t0 = (((struct oC_int *)0xC7F2F1C)->v);
    (((struct oC_uint *)0xC7F2F1C)->v) = (t0 + 0x1);
    if ((unsigned int)(t0 + 0x1) > (unsigned int)0x3C) {
        (((struct o8_uint *)0xC7F2F1C)->v) = (((((struct o8_int *)0xC7F2F1C)->v)) + 0x1);
        (((struct oC_uint *)0xC7F2F1C)->v) = 0x0;
    }
    if ((unsigned int)((((struct o8_int *)0xC7F2F1C)->v)) > (unsigned int)0x3C) {
        (((struct o4_uint *)0xC7F2F1C)->v) = (((((struct o4_int *)0xC7F2F1C)->v)) + 0x1);
        (((struct o8_uint *)0xC7F2F1C)->v) = 0x0;
    }
    if ((unsigned int)((((struct o4_int *)0xC7F2F1C)->v)) > (unsigned int)0x3C) {
        (((struct o0_uint *)0xC7F2F1C)->v) = (((((struct o0_int *)0xC7F2F1C)->v)) + 0x1);
        (((struct o4_uint *)0xC7F2F1C)->v) = 0x0;
    }
    return 0x40;
}

int FUN_0c0dabfe(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x4));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(0xC0DAC6E))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0DAC66))(a4, a5, a6, a7);
    }
    (((struct o1A8_ushort *)(a4))->v) = (((((struct o1A8_short *)(a4))->v)) - 1);
    return ((int (*)(int, int, int, int))(0xC0DAC46))(a4, a5, a6, a7);
}
