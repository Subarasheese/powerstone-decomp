/* Straight-line functions with calls and guards (batch gen_m): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o114_int { char p[0x114]; int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1E0_float { char p[0x1E0]; float v; };
struct o1E8_float { char p[0x1E8]; float v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F0_float { char p[0x1F0]; float v; };
struct o1F8_float { char p[0x1F8]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2A8_uchar { char p[0x2A8]; unsigned char v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DB_uchar { char p[0x2DB]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o30_short { char p[0x30]; short v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_float { char p[0x70]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o7110_float { char p[0x7110]; float v; };
struct o7114_float { char p[0x7114]; float v; };
struct o7118_float { char p[0x7118]; float v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o71DD_uchar { char p[0x71DD]; unsigned char v; };
struct o71F0_uchar { char p[0x71F0]; unsigned char v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o721E_uchar { char p[0x721E]; unsigned char v; };
struct o7225_uchar { char p[0x7225]; unsigned char v; };
struct o7226_uchar { char p[0x7226]; unsigned char v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o7294_int { char p[0x7294]; int v; };
struct o7298_float { char p[0x7298]; float v; };
struct o72A8_int { char p[0x72A8]; int v; };
struct o72A8_uint { char p[0x72A8]; unsigned int v; };
struct o74_float { char p[0x74]; float v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o94_int { char p[0x94]; int v; };
struct o94_uint { char p[0x94]; unsigned int v; };
struct o98_int { char p[0x98]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_short { char p[0xC]; short v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXRNA_SetPlaySw(int, int);
int ADXRNA_SetTransSw(int, int);
int FUN_0c0151c0(void);
int FUN_0c0158ee(void);
int FUN_0c016e48(void);
int FUN_0c01d962(int);
int FUN_0c0246b2(int);
int FUN_0c0555c4(void);
int FUN_0c059132(int, int, int);
int FUN_0c06206e(int, int, int);
float FUN_0c0620a4(int);
int FUN_0c06233a(int, int, int);
int FUN_0c0634b4(int);
int FUN_0c098c48(int);
int FUN_0c099930(int);
int FUN_0c099966(int);
int FUN_0c099a1c(void);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09c5f4(int);
int FUN_0c09c782(int);
int FUN_0c09c894(int);
int FUN_0c09d89c(int);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09e7b8(int);
int FUN_0c0a1a60(int);
int FUN_0c0a2080(int);
int FUN_0c0a2334(int, int, int);
int FUN_0c0a25e0(int);
extern int FUN_0c0a2e26();
int FUN_0c0abe44(int, int);
int FUN_0c0abef2(int);
int FUN_0c0abf64(int);
int FUN_0c0d48ea(int);
int FUN_0c0d4d00(void);
int FUN_0c0d4e8c(void);
int FUN_0c0d4eba(void);
int FUN_0c0d4ee0(void);
int FUN_0c0d4f06(void);
int FUN_0c0d4f2c(void);
int FUN_0c0d4fa4(void);
int FUN_0c0d5164(void);
int FUN_0c0d5274(void);
int FUN_0c0d52aa(void);
int FUN_0c0d5428(void);
int nlObjPutSetGlobalAmbience(float);
int FUN_0c0dccd0(int);
int FUN_0c0dcd20(float, float, float);
float FUN_0c0df340(float);
float FUN_0c0df4d0(int);
int FUN_0c0df920(void);
float FUN_0c0dfa50(int);
float FUN_0c0e2220(int, int);
int FUN_0c0e24f0(int);
int FUN_0c0e6e5c(void);
int FUN_0c0e6fe8(float);
int FUN_0c0f2292(int);
int FUN_0c0f8180(int);
int FUN_0c0f8920(int);
int gdFsMemcpy(int, int, int);
int gdFsGetSearchID(int);
int FUN_0c0fff10(int, int);
int kdGetDeviceInfo(int);
int vmsfs_unmount(int);
int vmsfs_fopen(int, int, int);
int vmsfs_fclose(int, int);
int vmsfs_fread1(int, int);
int FUN_0c104962(int, int, int);
int check_isopen(void);
int vmsfs_fseek(int, int, int, int);
int FUN_0c105eb8(int);
int FUN_0c10660e(int);
int FUN_0c106654(int);
int vmsio_isready(int);
int vmsio_ismount(int);
int FUN_0c113df4(int);
int FUN_0c1151d6(int, int, int);
int FUN_0c115a52(void);
int FUN_0c115c70(int, int, int, int, int, int);
int FUN_0c115fb8(int, int, int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxpd_error(void);
int buIsFormat(int);
int memset(int, int, int);
int mwRnaErrCallFunc(int);
int FUN_0c0cb3b8(int a4);
int FUN_0c0d4dee(void);
int FUN_0c0f2114(int a4, int a5, int a6);
int FUN_0c107602(int a4, int a5, int a6, int a7);
float FUN_0c068488(int a4);
int FUN_0c0730c4(int a4);
int FUN_0c0b7094(int a4, int a5, float f4);
int FUN_0c01dada(int a4);
int FUN_0c02a5e4(void);
int FUN_0c09c35e(void);
int FUN_0c0de120(int a4);
void FUN_0c0f2968(int a4, int a5, int a6);
int FUN_0c0f4c2c(int a4, int a5, int a6, int a7);
int FUN_0c103f6c(int a4, int a5);
int vmsfs_load_file_ex(int a4, int a5, int a6, int a7, int a8);
int FUN_0c014bf4(void);
int FUN_0c06625c(int a4);
int FUN_0c098c86(int a4);
int FUN_0c099b60(int a4);
int FUN_0c0a2666(int a4, int a5, int a6);
int FUN_0c0cc72e(int a4, int a5, int a6, int a7);
float FUN_0c0d827e(int a4);
int FUN_0c0de1e0(int a4);
int FUN_0c0f9872(int a4);
int FUN_0c113d5c(int a4, int a5, int a6, int a7);
int FUN_0c01dc58(void);
int FUN_0c02280e(int a4, int a5, int a6, int a7);
int FUN_0c025958(int a4, int a5);
int FUN_0c027168(int a4, int a5);
int FUN_0c0270c6(int a4, int a5);
int FUN_0c0271fe(int a4, int a5);
int FUN_0c0272a0(int a4, int a5);
int FUN_0c02fffc(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0372a8(int a4);
int FUN_0c05fb58(int a4);
int FUN_0c09375c(int a4, int a5, int a6, int a7);
int FUN_0c0c10f0(int a4);
int gdFsGet1DirEnt(int a4, int a5);
int FUN_0c02259e(int a4, int a5, int a6, int a7);
int FUN_0c09b540(int a4, int a5);
int FUN_0c09c51e(int a4);
int FUN_0c0f28b6(int a4);
int kmSetBackGroundRenderState(int a4);
int FUN_0c0d4ff4(int a4, int a5, int a6, int a7);
int ADXPD_ExecHndl(int a4);
int FUN_0c0186e6(int a4, int a5, int a6, int a7);

int FUN_0c0cb3b8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t5 = FUN_0c059132(0x1, 0x1, 0x0);
    t6 = t5;
    if (t5 != 0) {
        *(unsigned char *)((t5 + 0x0)) = 0x1;
        *(unsigned char *)((t5 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t5 + 0x1)) = 0x0;
        *(unsigned short *)((t5 + 0x6)) = 0xF;
        *(unsigned char *)((t5 + 0x5)) = 0x19;
        *(unsigned int *)((t5 + 0x10)) = 0xC0CB456;
        t7 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(t5, 0x0, 0x1);
        *(volatile signed char *)((t0 + 0x3));
        t5 = ((int (*)(int))(FUN_0c0e6fe8))(t0);
        t0 = ((int (*)(int))(FUN_0c0e6fe8))(t1);
        (((struct o118_uint *)(t4))->v) = t2;
        (((struct o38_float *)(t4))->v) = (((((struct o24_float *)(t4))->v)) + 1000.0f);
        (((struct oEC_ushort *)(t4))->v) = 0x4;
        (((struct o101_uchar *)(t4))->v) = 0x2;
        (((struct o102_uchar *)(t4))->v) = t2;
        (((struct o105_uchar *)(t4))->v) = t3;
        (((struct o2D9_uchar *)(t4))->v) = 0x2;
        t6 = 0x2D9;
    }
    return t6;
}

int FUN_0c0d4dee(void)
{
    register int t1;

    register int R0;
    register int R3;
    register int T_;
    FUN_0c0d4d00();
    t1 = *(signed char *)0xC7F2EE4;
    R0 = ((unsigned char)t1);
    if (((unsigned char)t1 == 0)) goto L_C0D4E2A;
    if ((R0 == 1)) goto L_C0D4E32;
    if ((R0 == 2)) goto L_C0D4E3A;
    if ((R0 == 3)) goto L_C0D4E42;
    if ((R0 == 4)) goto L_C0D4E4A;
    if ((R0 == 5)) goto L_C0D4E52;
    if ((R0 == 6)) goto L_C0D4E5A;
    if ((R0 == 7)) goto L_C0D4E62;
    if ((R0 == 8)) goto L_C0D4E6A;
    if ((R0 == 9)) goto L_C0D4E74;
    if ((R0 == 10)) goto L_C0D4E7E;
    L_C0D4E82:;
    FUN_0c0158ee();
    return FUN_0c0d5428();
    L_C0D4E7E:;
    FUN_0c0d52aa();
    goto L_C0D4E82;
    L_C0D4E74:;
    FUN_0c016e48();
    goto L_C0D4E82;
    L_C0D4E6A:;
    FUN_0c0151c0();
    goto L_C0D4E82;
    L_C0D4E62:;
    FUN_0c0d5274();
    goto L_C0D4E82;
    L_C0D4E5A:;
    FUN_0c0d5164();
    goto L_C0D4E82;
    L_C0D4E52:;
    FUN_0c0d4fa4();
    goto L_C0D4E82;
    L_C0D4E4A:;
    FUN_0c0d4f2c();
    goto L_C0D4E82;
    L_C0D4E42:;
    FUN_0c0d4f06();
    goto L_C0D4E82;
    L_C0D4E3A:;
    FUN_0c0d4ee0();
    goto L_C0D4E82;
    L_C0D4E32:;
    FUN_0c0d4eba();
    goto L_C0D4E82;
    L_C0D4E2A:;
    FUN_0c0d4e8c();
    goto L_C0D4E82;
}

int FUN_0c0f2114(int a4, int a5, int a6)
{
    register int t4;

    (((struct o0_uint *)0xC7FEC4C)->v) = a4;
    (((struct o4_uint *)0xC7FE700)->v) = 0x0;
    (((struct o0_uint *)0xC7FE700)->v) = 0x1;
    (((struct o8_uint *)0xC7FE700)->v) = 0x0;
    memset(0xC7FE70C, 0x0, 0x4E0);
    if ((a6 != 0) && (a5 != 0)) {
        (((struct o4_uint *)0xC7FE700)->v) = 0x1;
        FUN_0c0fff10(a5, a6);
    }
    t4 = 0x0;
    for (;;) {
        *(unsigned int *)((((t4 * 0x34) + 0xC7FE70C) + 0x30)) = (kdGetDeviceInfo(t4));
        FUN_0c0f2292(((t4 * 0x34) + 0xC7FE70C));
        *(unsigned int *)((0xC7FEBEC + (t4 << 2))) = 0x0;
        *(unsigned char *)((t4 + 0xC7FEC52)) = 0x0;
        *(unsigned char *)((t4 + 0xC7FEC6A)) = 0x0;
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0x18) {
            break;
        }
    }
    (((struct o4_uchar *)0xC7FEC4C)->v) = 0xC0;
    (((struct o5_uchar *)0xC7FEC4C)->v) = 0xA0;
    return 0xC7FEC51;
}

int FUN_0c107602(int a4, int a5, int a6, int a7)
{
    int stk[13];
    register int t1;
    register int t2;
    register int t3;
    register int t14;

    if ((int)((((struct o44_int *)(a4))->v)) <= 0) {
        return 0x1;
    }
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0xC);
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0xC) + 0x4);
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x4) + 0x0)) = 0x1;
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x0)) = 0x1;
    t1 = a4;
    t2 = 0x0;
    for (;;) {
        t3 = *(signed char *)((a4 + 0x3));
        if ((int)t2 >= (int)(unsigned char)t3) {
            if ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) != 0) {
                if ((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) == 0) {
                    return (unsigned char)t3;
                }
                return ((int (*)(int, int, int, int))(0xC1076A2))(t1, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC1076A0))(t1, a5, a6, a7);
        }
        t1 = ((((struct o40_int *)(a4))->v));
        t1 = (FUN_0c1151d6(t1, t2, ((int)stk + 0)));
        if (t1 != 0) {
            break;
        }
        if ((*(int *)(((int)stk + 0))) != 1) {
            *(unsigned int *)(((((int)stk + 0) + 0xC) + (t2 << 2))) = 0x0;
        }
        t2 = (t2 + 0x1);
    }
    t14 = mwRnaErrCallFunc(0xC15B38C);
    if ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) != 0) {
        if ((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) == 0) {
            return t14;
        }
        return ((int (*)(void))(0xC1076A2))();
    }
    return ((int (*)(void))(0xC1076A0))();
}

float FUN_0c068488(int a4)
{
    int stk[6];
    register float u4;
    register float t6;
    register float t9;
    register float t13;
    register float t19;

    FUN_0c06206e((((int)stk + 0) + 0xC), ((*(int *)((a4 + 0x1C))) + 0x20), (a4 + 0x20));
    u4 = 350.0f;
    if ((int)((((struct oEC_short *)(a4))->v)) <= 0) {
        u4 = 700.0f;
    }
    t6 = FUN_0c0620a4((((int)stk + 0) + 0xC));
    if (!(u4 > t6)) {
        FUN_0c0e24f0((((int)stk + 0) + 0xC));
        t9 = FUN_0c0dfa50((*(int *)((a4 + 0x30))));
        *(float *)(((int)stk + 0)) = (t9 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
        t13 = FUN_0c0df4d0((*(int *)((a4 + 0x30))));
        *(float *)(((int)stk + 8)) = (t13 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
        *(float *)(((int)stk + 4)) = (-(FUN_0c0dfa50((*(int *)((a4 + 0x2C))))));
        FUN_0c0e24f0(((int)stk + 0));
        t19 = FUN_0c0e2220(((int)stk + 0), (((int)stk + 0) + 0xC));
        if (!(t19 > 0.0f)) {
            return t19;
        }
        return t19;
    }
    return t6;
}

int FUN_0c0730c4(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c09a910(a4);
    if (((((struct o0_float *)0xC0731D8)->v)) > (*(float *)0xC494D1C)) {
        u0 = (((struct o8_float *)0xC0731D8)->v);
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o20_float *)(a4))->v))) / u0));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o28_float *)(a4))->v))) / u0));
    }
    FUN_0c09d990(a4);
    FUN_0c09d9bc(a4);
    t0 = FUN_0c09e7b8(a4);
    if ((signed char)t0 != 0) {
        FUN_0c09a808(a4, 0x1, 0x38);
        *(unsigned char *)((a4 + 0xA)) = 0x3;
    }
    t0 = 0x108;
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t1 = FUN_0c09c894(a4);
        t0 = (signed char)t1;
        if ((signed char)t1 == 1) {
            (((struct o108_uchar *)(a4))->v) = 0x0;
            *(unsigned char *)((a4 + 0xA)) = 0x2;
            t0 = 0x2;
        }
    }
    return t0;
}

int FUN_0c0b7094(int a4, int a5, float f4)
{
    int stk[2];
    register float u1;
    register float u3;
    register float u5;
    register float u8;
    register float t10;
    register float u11;
    register float u17;
    register float u18;

    u1 = (((struct o7298_float *)(a5))->v);
    u3 = 200.0f;
    u3 = u3 + 70.0f * (float)((((struct oEC_short *)(a4))->v));
    u5 = (u3 * u1);
    *(float *)(((int)stk + 4)) = ((FUN_0c0df4d0(((-(*(int *)((a5 + 0x30)))) + 0x14000))) * u5);
    u8 = (u3 * u1);
    *(float *)(((int)stk + 0)) = ((FUN_0c0dfa50(((-(*(int *)((a5 + 0x30)))) + 0x14000))) * u8);
    t10 = FUN_0c0dfa50((*(int *)((a5 + 0x2C))));
    u11 = (u3 * u1);
    FUN_0c0e6fe8((t10 * u11));
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o4_float *)(((int)stk + 0)))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (*(float *)(((int)stk + 0))));
    u17 = (((struct o24_float *)(a4))->v);
    (((struct o24_float *)(a4))->v) = (u17 - f4);
    u18 = (u17 - f4);
    u18 = u18 + 100.0f * u1;
    (((struct o24_float *)(a4))->v) = u18;
    return 0x24;
}

int FUN_0c01dada(int a4)
{
    register int t0;
    int t1;
    register int t2;
    register float u0;

    if ((unsigned char)(*(signed char *)((a4 + 0x0))) == 0) {
        *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
        *(unsigned char *)((a4 + 0x7)) = 0x1;
        *(unsigned char *)((a4 + 0xC)) = 0x0;
        *(unsigned int *)((a4 + 0x2C)) = 0xC18058A;
        (((struct o10_float *)(a4))->v) = 1.0f;
    }
    t2 = *(signed char *)0xC36237F;
    (((struct o1C_float *)(a4))->v) = (*(float *)((((signed char)(((t2 << 2) + t2) << 2) + 0xC180938) + 0x0)));
    (((struct o20_float *)(a4))->v) = ((((struct o4_float *)(((signed char)(((t2 << 2) + t2) << 2) + 0xC180938)))->v));
    (((struct o24_float *)(a4))->v) = ((((struct o8_float *)(((signed char)(((t2 << 2) + t2) << 2) + 0xC180938)))->v));
    (((struct o14_float *)(a4))->v) = ((((struct oC_float *)(((signed char)(((t2 << 2) + t2) << 2) + 0xC180938)))->v));
    (((struct o18_float *)(a4))->v) = ((((struct o10_float *)(((signed char)(((t2 << 2) + t2) << 2) + 0xC180938)))->v));
    u0 = ((((struct o0_float *)0xC01DBE8)->v));
    u0 = u0 + ((((struct o4_float *)0xC01DBE8)->v)) * (FUN_0c0dfa50((*(int *)0xC362388)));
    (((struct o10_float *)(a4))->v) = u0;
    t2 = *(signed char *)((a4 + 0x7));
    if ((t2 != 0) && ((t0 = *(signed char *)0xC36237C, t0 != 0) && (t1 = *(signed char *)0xC36237D, t1 == 0))) {
        return FUN_0c01d962(a4);
    }
    return t2;
}

int FUN_0c02a5e4(void)
{
    register int t0;
    register int t5;
    register int t1;
    register int t3;

    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC02A4E0;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o28_float *)(t0))->v) = 16.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t3 = *(int *)((((t1 << 2) + (0x2E0 + t0)) + 0x0));
            *(unsigned char *)((t3 + 0x0)) = 0x1;
            *(unsigned char *)((t3 + 0x1)) = 0x0;
            *(unsigned short *)((t3 + 0x2)) = 0xF;
            FUN_0c06233a(t3, 0xC6649E8, 0x56);
            t1 = (t1 + 0x1);
        }
        t5 = 0x2DC;
    }
    return t5;
}

int FUN_0c09c35e(void)
{
    int stk[3];
    register float u0;
    register int t1;
    register int t5;
    register int t13;
    register int t20;

    u0 = *(float *)0xC09C484;
    t1 = *(signed char *)0xC7EB27E;
    if ((t1 == 36) || (t1 == 39)) {
        *(float *)0xC7E40E8 = ((*(float *)0xC7E40E8) + u0);
    }
    t5 = *(signed char *)0xC7F254E;
    if ((t5 == 36) || (t5 == 39)) {
        *(float *)0xC7EB3B8 = ((*(float *)0xC7EB3B8) + u0);
    }
    if ((*(signed char *)0xC7EB27E) == 34) {
        FUN_0c0abef2((*(signed char *)0xC7E40C7));
        FUN_0c0abf64(0xC7E40C4);
        t13 = ((int (*)(int, int, int, int, int, int, int, int, int))(FUN_0c0a2e26))(0xC7E40C4, 0x22, 0x1, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
    }
    t20 = *(signed char *)0xC7F254E;
    if (t20 == 34) {
        FUN_0c0abef2((*(signed char *)0xC7EB397));
        FUN_0c0abf64(0xC7EB394);
        return ((int (*)(int, int, int))(FUN_0c0a2e26))(0xC7EB394, 0x22, 0x1);
    }
    return t20;
}

int FUN_0c0de120(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = 0x3F3FFFF;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = 0x1;
    (((struct o40_uint *)(a4))->v) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    *(unsigned int *)((a4 + 0x14)) = 0x4;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    *(unsigned int *)((a4 + 0x1C)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x1;
    *(unsigned int *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x8;
    *(unsigned int *)((a4 + 0x30)) = 0x6;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0x0;
    *(unsigned int *)((a4 + 0x3C)) = 0x2;
    (((struct o40_uint *)(a4))->v) = 0x0;
    (((struct o44_uint *)(a4))->v) = 0x0;
    (((struct o48_uint *)(a4))->v) = 0x0;
    (((struct o4C_uint *)(a4))->v) = 0x0;
    (((struct o50_uint *)(a4))->v) = 0x0;
    (((struct o54_uint *)(a4))->v) = 0x0;
    (((struct o58_uint *)(a4))->v) = 0x0;
    (((struct o5C_uint *)(a4))->v) = 0x4;
    (((struct o60_uint *)(a4))->v) = 0x3;
    (((struct o6C_uint *)(a4))->v) = 0x0;
    (((struct o64_uint *)(a4))->v) = 0x0;
    (((struct o68_uint *)(a4))->v) = 0x0;
    (((struct o70_float *)(a4))->v) = 1.0f;
    (((struct o74_float *)(a4))->v) = 1.0f;
    (((struct o78_float *)(a4))->v) = 1.0f;
    (((struct o7C_float *)(a4))->v) = 1.0f;
    (((struct o80_float *)(a4))->v) = 1.0f;
    (((struct o84_float *)(a4))->v) = 1.0f;
    (((struct o88_float *)(a4))->v) = 1.0f;
    (((struct o8C_float *)(a4))->v) = 1.0f;
    FUN_0c0f8180(a4);
    return FUN_0c0f8920(a4);
}

void FUN_0c0f2968(int a4, int a5, int a6)
{
    register int t0;
    register int t2;
    register int t3;
    int t4;
    register int t5;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    if (a4 != 0) {
        t2 = (*(int *)0xC7FECA4);
        t3 = a6;
        for (;;) {
            if ((((unsigned int)(a4 - 32) > (unsigned int)t2) && (t4 = *(int *)((t2 + 0x0)), (unsigned int)(a4 - 32) < (unsigned int)t4)) || ((t5 = *(int *)((t2 + 0x0)), t3 = t5, (unsigned int)t2 >= (unsigned int)t3) && (((unsigned int)(a4 - 32) > (unsigned int)t2) || ((unsigned int)(a4 - 32) < (unsigned int)t3)))) {
                break;
            }
            t2 = (*(int *)((t2 + 0x0)));
        }
        if ((((((*(int *)(((a4 - 32) + 0x4))) << 2) << 2) << 1) + (a4 - 32)) == (*(int *)((t2 + 0x0)))) {
            *(unsigned int *)(((a4 - 32) + 0x4)) = ((*(int *)(((a4 - 32) + 0x4))) + (*(int *)(((*(int *)((t2 + 0x0))) + 0x4))));
            *(unsigned int *)(((a4 - 32) + 0x0)) = (*(int *)(((*(int *)((t2 + 0x0))) + 0x0)));
        } else {
            *(unsigned int *)(((a4 - 32) + 0x0)) = (*(int *)((t2 + 0x0)));
        }
        if ((((((*(int *)((t2 + 0x4))) << 2) << 2) << 1) + t2) == (a4 - 32)) {
            *(unsigned int *)((t2 + 0x4)) = ((*(int *)((t2 + 0x4))) + (*(int *)(((a4 - 32) + 0x4))));
            *(unsigned int *)((t2 + 0x0)) = (*(int *)(((a4 - 32) + 0x0)));
        } else {
            *(unsigned int *)((t2 + 0x0)) = (a4 - 32);
        }
        *(unsigned int *)0xC7FECA4 = t2;
    }
    _builtin_set_imask(((unsigned int)((((unsigned short)t0 & 0xF) << 2) << 2) >> 4));
}

int FUN_0c0f4c2c(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    ADXCRS_Lock();
    ADXRNA_SetTransSw((*(int *)((a4 + 0xC))), 0x0);
    ADXRNA_SetPlaySw((*(int *)((a4 + 0xC))), 0x0);
    FUN_0c105eb8((*(int *)((a4 + 0x4))));
    if ((*(int *)((a4 + 0x8))) != 0) {
        FUN_0c106654((*(int *)((a4 + 0x8))));
        FUN_0c10660e((*(int *)((a4 + 0x8))));
        t1 = *(int *)((a4 + 0x14));
        t2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x14)))))(t1, a5, a6, a7);
        *(unsigned int *)((a4 + 0x8)) = 0x0;
    }
    if (((*(signed char *)((a4 + 0x2))) == 2) && (t0 = *(int *)((a4 + 0x14)), t0 != 0)) {
        t0 = *(int *)((a4 + 0x14));
        t1 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0xC)))))(t0, a5, a6, a7);
    }
    *(unsigned int *)((a4 + 0x14)) = 0x0;
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        t1 = t0;
        t1 = (t1 << 2);
        t1 = (t1 + (a4 + 0x18));
        t1 = (*(int *)((t1 + 0x0)));
        t2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x14)))))(t1, a5, a6, a7);
        t0 = (t0 + 0x1);
    }
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    return ADXCRS_Unlock();
}

int FUN_0c103f6c(int a4, int a5)
{
    int stk[12];
    register int t1;
    register int t3;
    register int t5;
    register int t7;
    register int t9;

    *(unsigned int *)(((int)stk + 0)) = a5;
    if ((*(signed char *)(((a4 * 0x148) + 0xC80DBCA))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t3 = vmsio_ismount(a4);
        if (t3 != 0) {
            if ((*(signed char *)(((a4 * 0x148) + 0xC80DBD0))) == 0) {
                return 0xFFFFFF01;
            }
            t5 = buIsFormat(a4);
            if ((int)t5 < 0) {
                return 0xFFFFFF03;
            }
            *(volatile int *)(((int)stk + 0));
            t7 = check_isopen();
            if ((int)t7 < 0) {
                return 0xFFFFFF0B;
            }
            t9 = FUN_0c104962(a4, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x4));
            if ((int)t9 < 0) {
                return 0xFFFFFF05;
            }
            return (*(int *)(((int)stk + 44)));
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int vmsfs_load_file_ex(int a4, int a5, int a6, int a7, int a8)
{
    int stk[4];

    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_2 = a4;
    v0_0 = a5;
    v0_3 = a6;
    v0_1 = a7;
    *(unsigned int *)(((int)stk + 8)) = v0_0;
    *(unsigned int *)(((int)stk + 12)) = v0_3;
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    v0_0 = (v0_2);
    v0_2 = (a8);
    if ((a8 != 0)) goto L_C1057F2;
    v0_3 = FUN_0c103f6c(v0_0, (*(int *)(((int)stk + 8))));
    v0_2 = (v0_3);
    if (((int)v0_3 >= 0)) goto L_C1057EC;
    v0_0 = (v0_2);
    L_C105848:;
    return v0_0;
    L_C1057EC:;
    v0_2 = ((v0_2 - (*(int *)(((int)stk + 4)))));
    L_C1057F2:;
    v0_4 = vmsfs_fopen(v0_0, (*(int *)(((int)stk + 8))), ((int)stk + 0));
    v0_3 = (v0_4);
    if (((int)v0_4 < 0)) goto L_C105846;
    v0_3 = *(int *)(((int)stk + 12));
    *(unsigned int *)((((v0_0 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
    *(unsigned int *)((((v0_0 * 0x148) + 0xC80DBC8) + 0x34)) = v0_2;
    vmsfs_fseek((*(int *)(((int)stk + 0))), (*(int *)(((int)stk + 4))), 0x0, v0_1);
    v0_0 = (0x0);
    v0_1 = (v0_3);
    if (((unsigned int)0x0 >= (unsigned int)v0_2)) goto L_C10583C;
    v0_4 = (0x200);
    L_C105826:;
    v0_5 = vmsfs_fread1((*(int *)(((int)stk + 0))), v0_1);
    v0_3 = (v0_5);
    if (((int)v0_5 < 0)) goto L_C10583E;
    v0_3 = (unsigned int)(v0_0 + 0x1) < (unsigned int)v0_2;
    v0_0 = ((v0_0 + 0x1));
    v0_1 = ((v0_1 + v0_4));
    if (v0_3) goto L_C105826;
    L_C10583C:;
    v0_3 = (0x0);
    L_C10583E:;
    vmsfs_fclose((*(int *)(((int)stk + 0))), 0x0);
    L_C105846:;
    v0_0 = (v0_3);
    goto L_C105848;
}

int FUN_0c014bf4(void)
{
    register int t0;
    register int t11;
    register int t3;
    register int t4;
    register int t5;
    register int t8;
    register int t10;

    t0 = FUN_0c059132(0x5, 0x1, 0x3);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x8;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((0xC17E888 + ((*(signed char *)((t0 + 0x3))) << 2))));
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        t3 = 0x0;
        t4 = 0xC17E8D2;
        t5 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t5) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t5) + 0x0))) + 0x2)) = 0x1F;
            t8 = *(signed char *)((t4 + 0x0));
            t4 = (t4 + 0x1);
            t10 = FUN_0c06233a((*(int *)((((0x2E0 + t0) + t5) + 0x0))), 0xC6649D0, t8);
            t3 = (t3 + 0x1);
            t5 = (t5 + 0x4);
            if ((int)t3 >= (int)0x3) {
                break;
            }
        }
        t11 = t10;
    }
    return t11;
}

int FUN_0c06625c(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        t0 = FUN_0c09c782(a4);
        if ((signed char)t0 != 0) {
            FUN_0c0634b4(a4);
            (((struct o7236_uchar *)(a4))->v) = 0x0;
            (((struct o71CC_uint *)(a4))->v) = 0x0;
        } else {
            *(volatile signed char *)((a4 + 0x3));
            FUN_0c0abe44(((((struct o71CC_int *)(a4))->v)), 0x5);
        }
        (((struct o3C_float *)(a4))->v) = 0.0f;
        return FUN_0c0a2080(a4);
    }
    return ((int (*)(void))(0xC0662F4))();
}

int FUN_0c098c86(int a4)
{
    register int t0;

    t0 = FUN_0c098c48(a4);
    if (t0 != 0) {
        (((struct o2DB_uchar *)(t0))->v) = 0x1;
        if ((*(signed char *)((t0 + 0x30E))) == 38) {
            (((struct o71DD_uchar *)(a4))->v) = 0xC;
            *(unsigned char *)((a4 + 0xB)) = 0x4;
            *(unsigned char *)((a4 + 0xC)) = 0x0;
        }
        if ((*(signed char *)((t0 + 0x30E))) == 1) {
            (((struct o71DD_uchar *)(a4))->v) = 0xC;
            *(unsigned char *)((a4 + 0xB)) = 0x1;
            *(unsigned char *)((a4 + 0xC)) = 0x0;
        }
        if ((*(signed char *)((t0 + 0x30E))) == 2) {
            (((struct o71DD_uchar *)(a4))->v) = 0xC;
            *(unsigned char *)((a4 + 0xB)) = 0x2;
            *(unsigned char *)((a4 + 0xC)) = 0x0;
        }
        if ((*(signed char *)((t0 + 0x30E))) == 3) {
            (((struct o71DD_uchar *)(a4))->v) = 0xC;
            *(unsigned char *)((a4 + 0xB)) = 0x3;
            *(unsigned char *)((a4 + 0xC)) = 0x0;
        }
        if ((*(signed char *)((t0 + 0x30E))) != 0) {
            (((struct o71DD_uchar *)(a4))->v) = 0xC;
            *(unsigned char *)((a4 + 0xB)) = 0x4;
            *(unsigned char *)((a4 + 0xC)) = 0x0;
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c099b60(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    FUN_0c099930(a4);
    FUN_0c099966(a4);
    FUN_0c099a1c();
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    (((struct o7118_float *)(a4))->v) = 0.0f;
    (((struct o7114_float *)(a4))->v) = 0.0f;
    (((struct o7110_float *)(a4))->v) = 0.0f;
    t0 = *(signed char *)((a4 + 0x4));
    t1 = *(signed char *)(((0x71F1 + a4) + 0x0));
    (((struct o710A_uchar *)(a4))->v) = (*(signed char *)(((signed char)((t1 << 1) + t1) + ((signed char)((t0 << 1) + (t0 << 2)) + 0xC150B0C))));
    t0 = *(signed char *)((a4 + 0x4));
    t1 = *(signed char *)(((0x71F1 + a4) + 0x0));
    (((struct o710B_uchar *)(a4))->v) = (*(signed char *)(((((signed char)((t0 << 1) + (t0 << 2)) + 0xC150B0C) + (signed char)((t1 << 1) + t1)) + 0x1)));
    t0 = *(signed char *)((a4 + 0x4));
    t1 = *(signed char *)((a4 + 0x71F1));
    t2 = *(signed char *)((((0xC150B0C + (signed char)((t0 << 1) + (t0 << 2))) + (signed char)((t1 << 1) + t1)) + 0x2));
    (((struct o710C_uchar *)(a4))->v) = t2;
    return t2;
}

int FUN_0c0a2666(int a4, int a5, int a6)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t4;
    int t9;
    register int t20;
    int t25;
    int t1;
    int t12;
    int t28;

    *(unsigned char *)(((int)stk + 0)) = a5;
    if (((*(signed char *)((a4 + 0x71F1))) != 0) && (t1 = (((struct o71F4_short *)(a4))->v), t1 != 0)) {
        t2 = FUN_0c0a2334(a4, a5, a6);
        if ((signed char)t2 != 0) {
            t3 = FUN_0c0a25e0(a4);
            if ((signed char)t3 == 0) {
                t4 = *(signed char *)(((int)stk + 0));
                if (t4 != 3) {
                    t9 = 0x600;
                    if (t4 != 0) {
                        t9 = 0x400;
                        if (t4 != 1) {
                            t9 = 0x200;
                            if (t4 != 2) {
                                t9 = t4;
                            }
                        }
                    }
                    if (((0x600 & ((((struct o2E4_int *)(a4))->v))) != 0) && (t12 = (((struct o2E4_int *)(a4))->v), (t12 & t9) != 0)) {
                        if (((t9 & ((((struct o2E4_int *)(a4))->v))) & 0x400) != 0) {
                            (((struct o721E_uchar *)(a4))->v) = 0x0;
                        } else {
                            (((struct o721E_uchar *)(a4))->v) = 0x1;
                        }
                        FUN_0c0a1a60(a4);
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x1;
        }
        t20 = *(signed char *)(((int)stk + 0));
        if (t20 != 3) {
            t25 = 0x600;
            if (t20 != 0) {
                t25 = 0x400;
                if (t20 != 1) {
                    t25 = 0x200;
                    if (t20 != 2) {
                        t25 = t20;
                    }
                }
            }
            if (((0x600 & ((((struct o2E4_int *)(a4))->v))) != 0) && (t28 = (((struct o2E4_int *)(a4))->v), (t28 & t25) != 0)) {
                if (((t25 & ((((struct o2E4_int *)(a4))->v))) & 0x400) != 0) {
                    (((struct o721E_uchar *)(a4))->v) = 0x0;
                } else {
                    (((struct o721E_uchar *)(a4))->v) = 0x1;
                }
                FUN_0c0a1a60(a4);
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c0cc72e(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = 0xC33CF54;
    if ((*(signed char *)0xC7F4764) == 0) {
        t1 = 0xC33CF5E;
    }
    t2 = *(signed char *)(((signed char)a4 + t1));
    t1 = 0xC33CF34;
    if (((*(signed char *)0xC7E40C8) != 8) && (t0 = *(signed char *)0xC7EB398, t0 != 8)) {
        t1 = 0xC33CF14;
    }
    if ((signed char)t2 == 3) {
        FUN_0c0df920();
        *(volatile signed char *)0xC7F4750;
        t0 = FUN_0c0e6e5c();
        if ((signed char)t0 != 0) {
            t3 = *(signed char *)((((signed char)t0 - 1) + (*(int *)(((t1 + (((signed char)t2 << 2) << 1)) + 0x0)))));
            return ((int (*)(int, int, int, int))(0xC0CC7F0))(t3, t0, a6, a7);
        }
        FUN_0c0df920();
        t0 = FUN_0c0e6e5c();
        return ((int (*)(int, int, int, int))(0xC0CC7F0))((t0 + 0xF), a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0CC7E0))(t2, 0xC7E40C4, (((signed char)t2 << 2) << 1), a7);
}

float FUN_0c0d827e(int a4)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    if ((*(signed char *)((a4 + 0x14))) != 0) {
        u0 = ((((struct o8_float *)0xC7E40E4)->v));
        u1 = (((((struct o0_float *)0xC7E40E4)->v)) - ((((struct o0_float *)0xC7EB3B4)->v)));
        u2 = ((((struct o8_float *)0xC7EB3B4)->v));
    } else {
        u0 = ((((struct o8_float *)0xC7EB3B4)->v));
        u1 = (((((struct o0_float *)0xC7EB3B4)->v)) - ((((struct o0_float *)0xC7E40E4)->v)));
        u2 = ((((struct o8_float *)0xC7E40E4)->v));
    }
    u3 = ((u0 - u2) * (u0 - u2));
    u3 = u3 + u1 * u1;
    u4 = FUN_0c0df340(u3);
    u3 = u4;
    if (u4 == 0.0f) {
        u3 = 9.99999997e-07f;
    }
    (((struct o1E0_float *)(a4))->v) = (u1 / u3);
    (((struct o1E8_float *)(a4))->v) = ((u0 - u2) / u3);
    (((struct o1EC_uint *)(a4))->v) = ((((struct o114_int *)(a4))->v));
    (((struct o1EC_uint *)(a4))->v) = (((((struct o1EC_int *)(a4))->v)) & 0xFFFF);
    (((struct o1F0_float *)(a4))->v) = (FUN_0c0dfa50(((((struct o1EC_int *)(a4))->v))));
    u0 = FUN_0c0df4d0(((((struct o1EC_int *)(a4))->v)));
    (((struct o1F8_float *)(a4))->v) = u0;
    return u0;
}

int FUN_0c0de1e0(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = 0x3F3FFFF;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    (((struct o40_uint *)(a4))->v) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    *(unsigned int *)((a4 + 0x14)) = 0x4;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    *(unsigned int *)((a4 + 0x1C)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x1;
    *(unsigned int *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0xA;
    *(unsigned int *)((a4 + 0x30)) = 0xB;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0x0;
    *(unsigned int *)((a4 + 0x3C)) = 0x2;
    (((struct o40_uint *)(a4))->v) = 0x0;
    (((struct o44_uint *)(a4))->v) = 0x0;
    (((struct o48_uint *)(a4))->v) = 0x1;
    (((struct o4C_uint *)(a4))->v) = 0x0;
    (((struct o50_uint *)(a4))->v) = 0x0;
    (((struct o54_uint *)(a4))->v) = 0x0;
    (((struct o58_uint *)(a4))->v) = 0x0;
    (((struct o5C_uint *)(a4))->v) = 0x4;
    (((struct o60_uint *)(a4))->v) = 0x1;
    (((struct o6C_uint *)(a4))->v) = 0x0;
    (((struct o64_uint *)(a4))->v) = 0x0;
    (((struct o68_uint *)(a4))->v) = 0x0;
    (((struct o70_float *)(a4))->v) = 1.0f;
    (((struct o74_float *)(a4))->v) = 1.0f;
    (((struct o78_float *)(a4))->v) = 1.0f;
    (((struct o7C_float *)(a4))->v) = 1.0f;
    (((struct o80_float *)(a4))->v) = 1.0f;
    (((struct o84_float *)(a4))->v) = 1.0f;
    (((struct o88_float *)(a4))->v) = 1.0f;
    (((struct o8C_float *)(a4))->v) = 1.0f;
    FUN_0c0f8180(a4);
    return kmSetBackGroundRenderState(a4);
}

int FUN_0c0f9872(int a4)
{
    register int t19;
    register int t20;

    if ((*(int *)0xC8172FC) != 1) {
        (((struct o0_uint *)0xC803DF0)->v) = ((signed char)(((a4 << 2) + a4) << 2) + 0xC803E04);
    } else {
        (((struct o0_uint *)0xC803DF0)->v) = 0xC803E04;
    }
    *(unsigned int *)((((((struct o4_int *)0xC803DF0)->v)) + 0x0)) = (*(int *)((((((struct o0_int *)0xC803DF0)->v)) + 0x0)));
    *(unsigned int *)((((((struct o4_int *)0xC803DF0)->v)) + 0x4)) = (*(int *)((((((struct o0_int *)0xC803DF0)->v)) + 0x4)));
    *(unsigned int *)((((((struct o4_int *)0xC803DF0)->v)) + 0x8)) = (*(int *)((((((struct o0_int *)0xC803DF0)->v)) + 0x8)));
    *(unsigned int *)((((((struct o4_int *)0xC803DF0)->v)) + 0xC)) = (*(int *)((((((struct o0_int *)0xC803DF0)->v)) + 0xC)));
    *(unsigned int *)((((((struct o4_int *)0xC803DF0)->v)) + 0x10)) = (*(int *)((((((struct o0_int *)0xC803DF0)->v)) + 0x10)));
    t19 = 0x0;
    t20 = 0x0;
    for (;;) {
        t20 = (t20 + 0x1);
        *(unsigned int *)(((t19 + 0xC803E40) + 0x0)) = (*(int *)((((((struct o4_int *)0xC803DF0)->v)) + t19)));
        t19 = (t19 + 0x4);
        if ((unsigned int)t20 >= (unsigned int)0x5) {
            return ((int (*)(int, int, int, int))(0xC0F990A))(a4, 0xC803DF4, t19, 0x5);
        }
    }
}

int FUN_0c113d5c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t8;

    t0 = 0x0;
    for (;;) {
        if ((*(short *)((((short)((short)t0 * (short)0xAC) + 0xC8439A0) + 0x0))) != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x8) {
                break;
            }
            continue;
        }
        break;
    }
    if (t0 != 8) {
        memset(((short)((short)t0 * (short)0xAC) + 0xC8439A0), 0x0, 0xAC);
        *(unsigned short *)((((short)((short)t0 * (short)0xAC) + 0xC8439A0) + 0x0)) = 0x1;
        t8 = FUN_0c115a52();
        *(unsigned int *)((((short)((short)t0 * (short)0xAC) + 0xC8439A0) + 0x8)) = t8;
        if (t8 == 0) {
            FUN_0c113df4(((short)((short)t0 * (short)0xAC) + 0xC8439A0));
            return 0x0;
        }
        *(unsigned int *)((((short)((short)t0 * (short)0xAC) + 0xC8439A0) + 0x38)) = a4;
        *(unsigned int *)((((short)((short)t0 * (short)0xAC) + 0xC8439A0) + 0x3C)) = a5;
        (((struct o40_uint *)(((short)((short)t0 * (short)0xAC) + 0xC8439A0)))->v) = a6;
        (((struct o44_uint *)(((short)((short)t0 * (short)0xAC) + 0xC8439A0)))->v) = a7;
        (((struct o88_uint *)(((short)((short)t0 * (short)0xAC) + 0xC8439A0)))->v) = 0xC113D2C;
        (((struct o8C_uint *)(((short)((short)t0 * (short)0xAC) + 0xC8439A0)))->v) = ((short)((short)t0 * (short)0xAC) + 0xC8439A0);
        (((struct o90_uint *)(((short)((short)t0 * (short)0xAC) + 0xC8439A0)))->v) = 0xC113D4A;
        (((struct o94_uint *)(((short)((short)t0 * (short)0xAC) + 0xC8439A0)))->v) = ((short)((short)t0 * (short)0xAC) + 0xC8439A0);
        return ((short)((short)t0 * (short)0xAC) + 0xC8439A0);
    }
    return 0x0;
}

int FUN_0c01dc58(void)
{
    register int t0;
    register int t6;
    register int t2;

    t0 = 0x0;
    for (;;) {
        *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x3)) = 0x0;
        *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x2)) = 0x0;
        *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x1)) = 0x0;
        *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x0)) = 0x0;
        if ((int)t0 < (int)0x5) {
            *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x4)) = 0x0;
            *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x5)) = t0;
            t6 = t0;
        } else {
            if ((int)t0 < (int)0x6) {
                *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x4)) = 0x1;
                *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x5)) = (t0 + 0xFB);
                t6 = (t0 + 0xFB);
            } else {
                if ((int)t0 < (int)0x7) {
                    *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x4)) = 0x2;
                    t2 = 0xFA;
                } else {
                    *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x4)) = 0x4;
                    t2 = 0xF9;
                }
                *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x5)) = (t2 + t0);
                t6 = (t2 + t0);
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return t6;
}

int FUN_0c02280e(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u19;
    float u20;

    u0 = *(float *)((a6 + 0x0));
    u1 = *(float *)((a7 + 0x0));
    u2 = (((struct oC_float *)(a6))->v);
    u3 = (((struct oC_float *)(a7))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = (u1 - u0);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u2 + u3) - u4);
    u6 = (((struct oC_float *)(a7))->v);
    u7 = (((struct o14_float *)(a6))->v);
    u8 = (((struct o8_float *)(a6))->v);
    u9 = (((struct o8_float *)(a7))->v);
    u10 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u10 = (u9 - u8);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u7 + u6) - u10);
    u12 = (((struct oC_float *)(a7))->v);
    u13 = (((struct o10_float *)(a6))->v);
    u14 = (((struct o4_float *)(a6))->v);
    u15 = (((struct o4_float *)(a7))->v);
    u16 = (u14 - u15);
    if (0.0f > (u14 - u15)) {
        u16 = (u15 - u14);
    }
    (((struct o4_float *)(((int)stk + 0)))->v) = ((u13 + u12) - u16);
    if (!(0.0f > (*(float *)((((int)stk + 0) + 0x0)))) && ((u19 = (((struct o8_float *)(((int)stk + 0)))->v), !(0.0f > u19)) && (u20 = (((struct o4_float *)(((int)stk + 0)))->v), !(0.0f > u20)))) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c025958(int a4, int a5)
{
    register int t0;

    FUN_0c0246b2(a4);
    FUN_0c0246b2(a5);
    if ((int)(*(signed char *)((a4 + 0x2A8))) < (int)0x5) {
        *(unsigned char *)((((*(signed char *)((a4 + 0x2A8))) + (0x2A9 + a4)) + 0x0)) = (*(signed char *)((a5 + 0x248)));
        *(unsigned int *)(((((*(signed char *)((a4 + 0x2A8))) << 2) + (0x280 + a4)) + 0x0)) = (0x264 + a5);
        t0 = *(signed char *)((a4 + 0x2A8));
        (((struct o2A8_uchar *)(a4))->v) = (t0 + 0x1);
        *(unsigned int *)(((((signed char)((t0 + 0x1) - 1) << 2) + (0x294 + a4)) + 0x0)) = a5;
    }
    if ((int)(*(signed char *)((a5 + 0x2A8))) < (int)0x5) {
        *(unsigned char *)((((*(signed char *)((a5 + 0x2A8))) + (0x2A9 + a5)) + 0x0)) = (*(signed char *)((a4 + 0x248)));
        *(unsigned int *)(((((*(signed char *)((a5 + 0x2A8))) << 2) + (0x280 + a5)) + 0x0)) = (0x264 + a4);
        t0 = *(signed char *)((a5 + 0x2A8));
        (((struct o2A8_uchar *)(a5))->v) = (t0 + 0x1);
        *(unsigned int *)(((((signed char)((t0 + 0x1) - 1) << 2) + (0x294 + a5)) + 0x0)) = a4;
    }
    return 0x2A8;
}

int FUN_0c027168(int a4, int a5)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_0 = a4;
    v0_2 = a5;
    *(unsigned short *)(((int)stk + 0)) = (*(short *)(((((unsigned char)v0_0 << 2) << 1) + 0xC362AA0)));
    v0_3 = *(short *)(((int)stk + 0));
    v0_4 = *(int *)(((((short)((short)(unsigned char)v0_0 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)v0_2 << 1) + (unsigned char)v0_2) << 2)) + 0x4));
    v0_5 = (short)((((unsigned char)v0_2 << 1) + (unsigned char)v0_2) << 2);
    v0_1 = (((short)((short)(unsigned char)v0_0 * (short)0x1E0) + 0xC362AB0));
    v0_2 = (v0_4);
    v0_5 = v0_5;
    v0_6 = ((unsigned short)v0_3);
    if (((((unsigned short)(*(short *)((v0_4 + 0x8))) & (unsigned short)v0_3) & (unsigned short)(*(short *)((v0_4 + 0x6)))) == 0)) goto L_C0271C4;
    *(unsigned short *)(((v0_1 + v0_5) + 0x0)) = (*(short *)(((v0_2 + 0x10) + 0x0)));
    *(unsigned short *)(((v0_1 + v0_5) + 0x2)) = (*(short *)(((v0_2 + 0x10) + 0x2)));
    *(unsigned int *)(((v0_1 + v0_5) + 0x4)) = (v0_2 + 0x10);
    v0_0 = (0x0);
    L_C0271F6:;
    return v0_0;
    L_C0271C4:;
    if ((((v0_6 & (unsigned short)(*(short *)((v0_2 + 0xC)))) & (unsigned short)(*(short *)((v0_2 + 0xA)))) != 0)) goto L_C0271E0;
    v0_2 = *(short *)(((v0_1 + v0_5) + 0x2));
    *(unsigned short *)(((v0_1 + v0_5) + 0x2)) = (v0_2 - 1);
    v0_1 = ((v0_1 + v0_5));
    if (((short)(v0_2 - 1) != 0)) goto L_C0271F4;
    L_C0271E0:;
    *(unsigned short *)(((v0_5 + (0xC362AB0 + (short)((short)(unsigned char)v0_0 * (short)0x1E0))) + 0x0)) = 0x0;
    L_C0271F4:;
    v0_0 = (0x1);
    goto L_C0271F6;
}

int FUN_0c0270c6(int a4, int a5)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_0 = a4;
    v0_2 = a5;
    *(unsigned short *)(((int)stk + 0)) = (*(short *)(((((unsigned char)v0_0 << 2) << 1) + 0xC362A90)));
    v0_3 = *(short *)(((int)stk + 0));
    v0_4 = *(int *)(((((short)((short)(unsigned char)v0_0 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)v0_2 << 1) + (unsigned char)v0_2) << 2)) + 0x4));
    v0_5 = (short)((((unsigned char)v0_2 << 1) + (unsigned char)v0_2) << 2);
    v0_1 = (((short)((short)(unsigned char)v0_0 * (short)0x1E0) + 0xC362AB0));
    v0_2 = (v0_4);
    v0_5 = v0_5;
    v0_6 = ((unsigned short)v0_3);
    if ((((unsigned short)(*(short *)((v0_4 + 0x8))) & (unsigned short)v0_3) != (unsigned short)(*(short *)((v0_4 + 0x6))))) goto L_C027122;
    *(unsigned short *)(((v0_1 + v0_5) + 0x0)) = (*(short *)(((v0_2 + 0x10) + 0x0)));
    *(unsigned short *)(((v0_1 + v0_5) + 0x2)) = (*(short *)(((v0_2 + 0x10) + 0x2)));
    *(unsigned int *)(((v0_1 + v0_5) + 0x4)) = (v0_2 + 0x10);
    v0_0 = (0x0);
    L_C027154:;
    return v0_0;
    L_C027122:;
    if (((v0_6 & (unsigned short)(*(short *)((v0_2 + 0xC)))) == (unsigned short)(*(short *)((v0_2 + 0xA))))) goto L_C02713E;
    v0_2 = *(short *)(((v0_1 + v0_5) + 0x2));
    *(unsigned short *)(((v0_1 + v0_5) + 0x2)) = (v0_2 - 1);
    v0_1 = ((v0_1 + v0_5));
    if (((short)(v0_2 - 1) != 0)) goto L_C027152;
    L_C02713E:;
    *(unsigned short *)(((v0_5 + (0xC362AB0 + (short)((short)(unsigned char)v0_0 * (short)0x1E0))) + 0x0)) = 0x0;
    L_C027152:;
    v0_0 = (0x1);
    goto L_C027154;
}

int FUN_0c0271fe(int a4, int a5)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_0 = a4;
    v0_2 = a5;
    *(unsigned short *)(((int)stk + 0)) = (*(short *)(((((unsigned char)v0_0 << 2) << 1) + 0xC362AA0)));
    v0_3 = *(short *)(((int)stk + 0));
    v0_4 = *(int *)(((((short)((short)(unsigned char)v0_0 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)v0_2 << 1) + (unsigned char)v0_2) << 2)) + 0x4));
    v0_5 = (short)((((unsigned char)v0_2 << 1) + (unsigned char)v0_2) << 2);
    v0_1 = (((short)((short)(unsigned char)v0_0 * (short)0x1E0) + 0xC362AB0));
    v0_2 = (v0_4);
    v0_5 = v0_5;
    v0_6 = ((unsigned short)v0_3);
    if ((((unsigned short)(*(short *)((v0_4 + 0x8))) & (unsigned short)v0_3) != (unsigned short)(*(short *)((v0_4 + 0x6))))) goto L_C02725A;
    *(unsigned short *)(((v0_1 + v0_5) + 0x0)) = (*(short *)(((v0_2 + 0x10) + 0x0)));
    *(unsigned short *)(((v0_1 + v0_5) + 0x2)) = (*(short *)(((v0_2 + 0x10) + 0x2)));
    *(unsigned int *)(((v0_1 + v0_5) + 0x4)) = (v0_2 + 0x10);
    v0_0 = (0x0);
    L_C02728C:;
    return v0_0;
    L_C02725A:;
    if (((v0_6 & (unsigned short)(*(short *)((v0_2 + 0xC)))) == (unsigned short)(*(short *)((v0_2 + 0xA))))) goto L_C027276;
    v0_2 = *(short *)(((v0_1 + v0_5) + 0x2));
    *(unsigned short *)(((v0_1 + v0_5) + 0x2)) = (v0_2 - 1);
    v0_1 = ((v0_1 + v0_5));
    if (((short)(v0_2 - 1) != 0)) goto L_C02728A;
    L_C027276:;
    *(unsigned short *)(((v0_5 + (0xC362AB0 + (short)((short)(unsigned char)v0_0 * (short)0x1E0))) + 0x0)) = 0x0;
    L_C02728A:;
    v0_0 = (0x1);
    goto L_C02728C;
}

int FUN_0c0272a0(int a4, int a5)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_0 = a4;
    v0_2 = a5;
    *(unsigned short *)(((int)stk + 0)) = (*(short *)(((((unsigned char)v0_0 << 2) << 1) + 0xC362A90)));
    v0_3 = *(short *)(((int)stk + 0));
    v0_4 = *(int *)(((((short)((short)(unsigned char)v0_0 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)v0_2 << 1) + (unsigned char)v0_2) << 2)) + 0x4));
    v0_5 = (short)((((unsigned char)v0_2 << 1) + (unsigned char)v0_2) << 2);
    v0_1 = (((short)((short)(unsigned char)v0_0 * (short)0x1E0) + 0xC362AB0));
    v0_2 = (v0_4);
    v0_5 = v0_5;
    v0_6 = ((unsigned short)v0_3);
    if ((((unsigned short)(*(short *)((v0_4 + 0x8))) & (unsigned short)v0_3) != (unsigned short)(*(short *)((v0_4 + 0x6))))) goto L_C0272FC;
    *(unsigned short *)(((v0_1 + v0_5) + 0x0)) = (*(short *)(((v0_2 + 0x10) + 0x0)));
    *(unsigned short *)(((v0_1 + v0_5) + 0x2)) = (*(short *)(((v0_2 + 0x10) + 0x2)));
    *(unsigned int *)(((v0_1 + v0_5) + 0x4)) = (v0_2 + 0x10);
    v0_0 = (0x0);
    L_C02732E:;
    return v0_0;
    L_C0272FC:;
    if (((v0_6 & (unsigned short)(*(short *)((v0_2 + 0xC)))) == (unsigned short)(*(short *)((v0_2 + 0xA))))) goto L_C027318;
    v0_2 = *(short *)(((v0_1 + v0_5) + 0x2));
    *(unsigned short *)(((v0_1 + v0_5) + 0x2)) = (v0_2 - 1);
    v0_1 = ((v0_1 + v0_5));
    if (((short)(v0_2 - 1) != 0)) goto L_C02732C;
    L_C027318:;
    *(unsigned short *)(((v0_5 + (0xC362AB0 + (short)((short)(unsigned char)v0_0 * (short)0x1E0))) + 0x0)) = 0x0;
    L_C02732C:;
    v0_0 = (0x1);
    goto L_C02732E;
}

int FUN_0c02fffc(int a4, int a5, int a6, int a7, float f4)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    u0 = 16.0f;
    if ((*(signed char *)((a4 + 0x3))) == 2) {
        u0 = 32.0f;
    }
    if ((*(signed char *)((a4 + 0x0))) == 0) {
        u1 = (((struct o4_float *)(a4))->v);
        u2 = u1;
        u2 = u2 + ((((struct o10_float *)(a4))->v)) * u0;
        u3 = (((-((float)(*(signed char *)((a4 + 0x2))) / (float)(*(signed char *)((a4 + 0x1))))) + 1.0f) * u2);
        return ((int (*)(int, int, int, int, float, float, float, float))(0xC0300AA))(a4, a5, a6, a7, (u1 - u3), u0, 1.0f, u1);
    }
    u1 = (((struct o4_float *)(a4))->v);
    u2 = (((struct o10_float *)(a4))->v);
    *(volatile signed char *)((a4 + 0x2));
    *(volatile signed char *)((a4 + 0x1));
    return ((int (*)(int, int, int, int, float, float, float, float, float))(0xC030092))(a4, a5, a6, a7, f4, u0, 1.0f, u1, (u0 * u2));
}

int FUN_0c0372a8(int a4)
{
    register int t0;
    register int t15;
    register int t8;

    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    t15 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned int *)((t0 + 0x10)) = 0xC03733E;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct o20_float *)(t0))->v) = ((((struct o20_float *)(a4))->v));
        (((struct o24_float *)(t0))->v) = ((((struct o24_float *)(a4))->v));
        (((struct o28_float *)(t0))->v) = ((((struct o28_float *)(a4))->v));
        *(unsigned int *)((t0 + 0x2C)) = (*(int *)((a4 + 0x2C)));
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0x30)));
        *(unsigned int *)((t0 + 0x34)) = (*(int *)((a4 + 0x34)));
        (((struct o38_float *)(t0))->v) = 0.0f;
        (((struct o3C_float *)(t0))->v) = 0.0f;
        (((struct o40_float *)(t0))->v) = 0.0f;
        t8 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t8 << 1) + t8) << 2) << 1) + 0xC6002D0), 0xF);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
        t15 = 0x1F;
    }
    return t15;
}

int FUN_0c05fb58(int a4)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;

    t0 = a4;
    t1 = 0x7;
    for (;;) {
        if ((((unsigned char)t0 & 0x80) != 0) && (t2 = (int)(((unsigned int)(t1 << 2)) >> 31), t3 = *(signed char *)(((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + 0xC7F3238)), t3 != 0)) {
            break;
        }
        t1 = (t1 - 1);
        t0 = (t0 << 1);
        if ((int)t1 < 0) {
            return (FUN_0c0dcd20(1.0f, 1.0f, 1.0f));
        }
    }
    nlObjPutSetGlobalAmbience(((((struct o7C_float *)(((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + 0xC7F3238)))->v)));
    FUN_0c0dccd0((((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + 0xC7F3238) + 0x44));
    return (FUN_0c0dcd20((((((struct o84_float *)(((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + 0xC7F3238)))->v)) * 1.0f), (((((struct o88_float *)(((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + 0xC7F3238)))->v)) * 1.0f), (((((struct o8C_float *)(((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + 0xC7F3238)))->v)) * 1.0f)));
}

int FUN_0c09375c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;

    if (((*(signed char *)((a4 + 0x71F0))) != 0) && (t0 = *(signed char *)((a4 + 0x10B)), t0 == 0)) {
        (((struct o71F0_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x71F0))) - 1);
    }
    t0 = *(signed char *)((a4 + 0x71BA));
    if ((t0 != 10) && (t0 != 11)) {
        t0 = FUN_0c09d89c(a4);
        if ((signed char)t0 == 0) {
            if (((*(signed char *)((a4 + 0x71F1))) != 0) && (t1 = *(signed char *)((a4 + 0x71BA)), t1 != 11)) {
                t1 = FUN_0c0555c4();
                if (t1 != 0) {
                    t1 = FUN_0c09c5f4(a4);
                    if ((signed char)t1 != 0) {
                        t1 = *(signed char *)((a4 + 0x71BA));
                        if (t1 == 36) {
                            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 2.0f);
                            return 0x24;
                        }
                        return t1;
                    }
                }
            }
            t1 = *(int *)((((*(signed char *)((a4 + 0x71BA))) << 2) + 0xC3390D4));
            return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
        }
        return (signed char)t0;
    }
    if (((*(signed char *)((a4 + 0x71F1))) != 0) && (t2 = *(signed char *)((a4 + 0x71BA)), t2 != 11)) {
        t0 = FUN_0c0555c4();
        if (t0 != 0) {
            t0 = FUN_0c09c5f4(a4);
            if ((signed char)t0 != 0) {
                t0 = *(signed char *)((a4 + 0x71BA));
                if (t0 == 36) {
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 2.0f);
                    return 0x24;
                }
                return t0;
            }
        }
    }
    t0 = *(int *)((((*(signed char *)((a4 + 0x71BA))) << 2) + 0xC3390D4));
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
}

int FUN_0c0c10f0(int a4)
{
    register float u0;

    if ((*(signed char *)0xC7F3051) == 10) {
        u0 = (((struct o20_float *)(a4))->v);
        if (!(-1600.0f > u0)) {
            if (!(u0 > 1600.0f)) {
                if (!(-100.0f > ((((struct o24_float *)(a4))->v)))) {
                    if (!(((((struct o24_float *)(a4))->v)) > 1000.0f)) {
                        if (!(-1600.0f > ((((struct o28_float *)(a4))->v)))) {
                            if (((((struct o28_float *)(a4))->v)) > 1600.0f) {
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x1;
                }
                return 0x1;
            }
            return 0x1;
        }
        return 0x1;
    }
    u0 = (((struct o20_float *)(a4))->v);
    if (!(-950.0f > u0)) {
        if (!(u0 > 950.0f)) {
            if (!(-100.0f > ((((struct o24_float *)(a4))->v)))) {
                if (!(((((struct o24_float *)(a4))->v)) > 2000.0f)) {
                    if (!(-950.0f > ((((struct o28_float *)(a4))->v)))) {
                        if (((((struct o28_float *)(a4))->v)) > 950.0f) {
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x1;
                }
                return 0x1;
            }
            return 0x1;
        }
        return 0x1;
    }
    return 0x1;
}

int gdFsGet1DirEnt(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    if ((int)(unsigned char)(*(signed char *)((a4 + 0x0))) < (int)0x22) {
    } else {
        gdFsMemcpy((a4 + 0x2), a5, 0x4);
        gdFsMemcpy((a4 + 0xA), (a5 + 0x4), 0x4);
        *(unsigned char *)((a5 + 0x8)) = (*(signed char *)((a4 + 0x19)));
        t1 = *(signed char *)((a4 + 0x20));
        t2 = (unsigned char)t1;
        if (((unsigned char)(*(signed char *)((a5 + 0x8))) & 2) == 0) {
            t2 = ((unsigned char)t1 - 2);
        }
        gdFsMemcpy((a4 + 0x21), (a5 + 0xA), t2);
        *(unsigned char *)(((t2 + (a5 + 0xA)) + 0x0)) = 0x0;
        if (((unsigned char)(*(signed char *)((a5 + 0x8))) & 2) != 0) {
            t1 = *(signed char *)((a5 + 0xA));
            if (t1 == 0) {
                *(unsigned char *)((a5 + 0xA)) = 0x2E;
            } else {
                if (t1 == 1) {
                    *(unsigned char *)((a5 + 0xA)) = 0x2E;
                    *(unsigned char *)((a5 + 0xB)) = 0x2E;
                    *(unsigned char *)((a5 + 0xC)) = 0x0;
                }
            }
        }
        *(unsigned char *)((a5 + 0x9)) = (gdFsGetSearchID((a5 + 0xA)));
        t0 = (unsigned char)(*(signed char *)((a4 + 0x0)));
    }
    return t0;
}

int FUN_0c02259e(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u19;
    float u20;

    u0 = *(float *)((a6 + 0x0));
    u1 = *(float *)((a7 + 0x0));
    u2 = (((struct oC_float *)(a6))->v);
    u3 = (((struct oC_float *)(a7))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = (u1 - u0);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u2 + u3) - u4);
    u6 = (((struct o10_float *)(a6))->v);
    u7 = (((struct o10_float *)(a7))->v);
    u8 = (((struct o4_float *)(a6))->v);
    u9 = (((struct o4_float *)(a7))->v);
    u10 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u10 = (u9 - u8);
    }
    (((struct o4_float *)(((int)stk + 0)))->v) = ((u6 + u7) - u10);
    u12 = (((struct o14_float *)(a6))->v);
    u13 = (((struct o14_float *)(a7))->v);
    u14 = (((struct o8_float *)(a6))->v);
    u15 = (((struct o8_float *)(a7))->v);
    u16 = (u14 - u15);
    if (0.0f > (u14 - u15)) {
        u16 = (u15 - u14);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u12 + u13) - u16);
    if (!(0.0f > (*(float *)((((int)stk + 0) + 0x0)))) && ((u19 = (((struct o8_float *)(((int)stk + 0)))->v), !(0.0f > u19)) && (u20 = (((struct o4_float *)(((int)stk + 0)))->v), !(0.0f > u20)))) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c09b540(int a4, int a5)
{
    register int t0;
    register int t1;
    register float u2;
    register float u3;
    register float u4;
    register int t5;
    register int t6;
    register int t7;
    int t8;

    t0 = *(int *)((a5 + 0x0));
    *(unsigned int *)((a5 + 0x0)) = (t0 + 0x2);
    t1 = *(short *)((((t0 + 0x2) - 2) + 0x0));
    u2 = (((struct o0_float *)0xC09B734)->v);
    u3 = (((struct o4_float *)0xC09B734)->v);
    u4 = (((struct o8_float *)0xC09B734)->v);
    *(unsigned int *)((a4 + 0x0)) = (int)((((float)(short)(((int)(t1 & 0xFF00) >> 8) | ((unsigned char)t1 << 8)) * u3) / u4) / u2);
    t5 = *(int *)((a5 + 0x0));
    *(unsigned int *)((a5 + 0x0)) = (t5 + 0x2);
    t6 = *(short *)((((t5 + 0x2) - 2) + 0x0));
    *(unsigned int *)((a4 + 0x4)) = (int)((((float)(short)(((int)(t6 & 0xFF00) >> 8) | ((unsigned char)t6 << 8)) * u3) / u4) / u2);
    t7 = *(int *)((a5 + 0x0));
    *(unsigned int *)((a5 + 0x0)) = (t7 + 0x2);
    t8 = *(short *)((((t7 + 0x2) - 2) + 0x0));
    *(unsigned int *)((a4 + 0x8)) = (int)((((float)(short)(((int)(0xFF00 & t8) >> 8) | ((unsigned char)t8 << 8)) * u3) / u4) / u2);
    return 0xC09B73C;
}

int FUN_0c09c51e(int a4)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x71BA))) == 11) {
        (((struct o7225_uchar *)(a4))->v) = 0x0;
        return 0x7225;
    }
    if (((((struct o7294_int *)(a4))->v)) != 0) {
        t0 = (((((struct o72A8_int *)(a4))->v)) - (int)(((float)(*(signed char *)((a4 + 0x7212))) * 737280.0f) / 360.0f));
    } else {
        t0 = ((*(int *)((a4 + 0x30))) - (int)(((float)(*(signed char *)((a4 + 0x7212))) * 737280.0f) / 360.0f));
    }
    (((struct o72A8_uint *)(a4))->v) = t0;
    (((struct o72A8_uint *)(a4))->v) = (((((struct o72A8_int *)(a4))->v)) & 0xFFFF);
    t0 = 0x0;
    for (;;) {
        if (!((*(float *)(((t0 << 2) + (*(int *)((0xC338C34 + ((*(signed char *)((a4 + 0x7213))) << 2))))))) > 0.0f)) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    *(volatile signed char *)((a4 + 0x10B));
    (((struct o7225_uchar *)(a4))->v) = 0x1;
    (((struct o7226_uchar *)(a4))->v) = 0x40;
    (((struct o7228_ushort *)(a4))->v) = 0x5;
    return 0x7228;
}

int FUN_0c0f28b6(int a4)
{
    int stk[1];
    register int t1;
    register int t2;
    register int t5;
    register int t6;
    register int t10;
    register int t16;

    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = *(short *)(((int)stk + 0));
    t2 = *(int *)0xC7FECA4;
    t5 = (*(int *)((t2 + 0x0)));
    t6 = t2;
    for (;;) {
        if ((unsigned int)(*(int *)((t5 + 0x4))) >= (unsigned int)(((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) {
            break;
        }
        if (t5 == t2) {
            _builtin_set_imask(((unsigned int)((((unsigned short)t1 & 0xF) << 2) << 2) >> 4));
            return 0x0;
        }
        t6 = t5;
        t5 = (*(int *)((t5 + 0x0)));
    }
    t10 = *(int *)((t5 + 0x4));
    if (t10 == (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) {
        *(unsigned int *)((t6 + 0x0)) = (*(int *)((t5 + 0x0)));
        t16 = t5;
    } else {
        *(unsigned int *)((t5 + 0x4)) = (t10 - (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1));
        *(unsigned int *)(((t5 + ((((t10 - (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) << 2) << 2) << 1)) + 0x4)) = (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1);
        t16 = (t5 + ((((t10 - (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) << 2) << 2) << 1));
    }
    *(unsigned int *)0xC7FECA4 = t6;
    _builtin_set_imask(((unsigned int)((((unsigned short)t1 & 0xF) << 2) << 2) >> 4));
    return (t16 + 0x20);
}

int kmSetBackGroundRenderState(int a4)
{
    (((struct o18_uint *)0xC817160)->v) = ((((((int)(((((struct o70_float *)(a4))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o74_float *)(a4))->v)) * 255.0f) << 16)) | ((int)(((((struct o78_float *)(a4))->v)) * 255.0f) << 8)) | (int)(((((struct o7C_float *)(a4))->v)) * 255.0f));
    (((struct o1C_uint *)0xC817160)->v) = ((((((int)(((((struct o80_float *)(a4))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o84_float *)(a4))->v)) * 255.0f) << 16)) | ((int)(((((struct o88_float *)(a4))->v)) * 255.0f) << 8)) | (int)(((((struct o8C_float *)(a4))->v)) * 255.0f));
    (((struct o0_uint *)0xC817160)->v) = ((((struct o94_int *)(a4))->v));
    (((struct o4_uint *)0xC817160)->v) = ((((struct o98_int *)(a4))->v));
    (((struct o8_uint *)0xC817160)->v) = ((((struct o9C_int *)(a4))->v));
    return 0x0;
}

int FUN_0c0d4ff4(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;

    t4 = *(signed char *)0xC7F2EE6;
    if ((unsigned char)t4 != 0) {
        if ((unsigned char)t4 != 1) {
            return (unsigned char)t4;
        }
        if (((((struct oC_short *)0xC7F2EE6)->v)) != 0) {
            (((struct oC_ushort *)0xC7F2EE6)->v) = (((((struct oC_short *)0xC7F2EE6)->v)) - 1);
        }
        t4 = (((struct oC_short *)0xC7F2EE6)->v);
        if ((int)t4 <= 0) {
            if (((int)(*(signed char *)0xC7F2DF1) <= (int)0x4) && (t0 = *(signed char *)0xC7F2DF1, (int)t0 > (int)0x1)) {
                return t0;
            }
            if (((int)(*(signed char *)0xC7F2E69) <= (int)0x4) && (t1 = *(signed char *)0xC7F2E69, (int)t1 > (int)0x1)) {
                return t1;
            }
            if ((*(int *)0xC33F6B8) != 0) {
                t0 = FUN_0c0d48ea(0x2);
                *(unsigned int *)0xC33F6B8 = 0x0;
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC0D50A4))(0xC7F2EE0, 0xC7F2EF2, a6, a7);
        }
        return t4;
    }
    (((struct o0_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE6) + 0x1);
    (((struct oC_ushort *)0xC7F2EE6)->v) = 0x12C;
    *(unsigned char *)0xC7F306E = 0x1;
    if (((((struct oC_short *)0xC7F2EE6)->v)) != 0) {
        (((struct oC_ushort *)0xC7F2EE6)->v) = (((((struct oC_short *)0xC7F2EE6)->v)) - 1);
    }
    t0 = (((struct oC_short *)0xC7F2EE6)->v);
    if ((int)t0 <= 0) {
        if (((int)(*(signed char *)0xC7F2DF1) <= (int)0x4) && (t2 = *(signed char *)0xC7F2DF1, (int)t2 > (int)0x1)) {
            return t2;
        }
        if (((int)(*(signed char *)0xC7F2E69) <= (int)0x4) && (t3 = *(signed char *)0xC7F2E69, (int)t3 > (int)0x1)) {
            return t3;
        }
        if ((*(int *)0xC33F6B8) != 0) {
            t1 = FUN_0c0d48ea(0x2);
            *(unsigned int *)0xC33F6B8 = 0x0;
            return t1;
        }
        return ((int (*)(int, int, int, int))(0xC0D50A4))(0xC7F2EE0, 0xC7F2EF2, a6, a7);
    }
    return t0;
}

int ADXPD_ExecHndl(int a4)
{
    register int t0;
    register int t1;

    if ((*(int *)((a4 + 0xC))) == 1) {
        *(unsigned int *)((a4 + 0xC)) = 0x2;
    }
    t0 = *(int *)((a4 + 0xC));
    t1 = t0;
    if (t0 == 2) {
        if ((*(int *)((a4 + 0x14))) == 1) {
            t0 = FUN_0c115c70((*(int *)((a4 + 0x18))), (*(int *)((a4 + 0x1C))), (*(int *)((a4 + 0x20))), (a4 + 0x28), (((((struct o30_short *)(a4))->v))), ((*(short *)(((a4 + 0x30) + 0x2)))));
            *(unsigned int *)((a4 + 0x10)) = t0;
            t1 = t0;
        } else {
            *(volatile short *)(((a4 + 0x30) + 0x2));
            *(volatile short *)(((a4 + 0x30) + 0x0));
            *(unsigned int *)((a4 + 0x10)) = (FUN_0c115fb8((*(int *)((a4 + 0x18))), (*(int *)((a4 + 0x1C))), (*(int *)((a4 + 0x20))), (a4 + 0x28), ((*(int *)((a4 + 0x24)))), ((a4 + 0x28) + 0x4)));
            t0 = FUN_0c0e6e5c();
            t1 = t0;
            if (t0 == 1) {
                t1 = (adxpd_error());
            }
        }
        *(unsigned int *)((a4 + 0xC)) = 0x3;
    }
    return t1;
}

int FUN_0c0186e6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    int t8;
    register int t9;

    if (((*(signed char *)0xC3622D4) == (*(signed char *)0xC3622C2)) && ((t0 = *(signed char *)0xC3622D5, t1 = *(signed char *)0xC3622C3, t0 == t1) && ((t2 = *(signed char *)0xC3622D6, t3 = *(signed char *)0xC3622C4, t2 == t3) && ((t4 = *(signed char *)0xC3622D7, t5 = *(signed char *)0xC3622C5, t4 == t5) && ((t6 = *(signed char *)0xC3622D8, t7 = *(signed char *)0xC3622C6, t6 == t7) && (t8 = *(signed char *)0xC3622D9, t9 = *(signed char *)0xC3622C7, t8 == t9)))))) {
        for (;;) {
            if ((int)0x0 >= (int)0x2) {
                return 0x0;
            }
            t0 = 0x0;
            t1 = 0x0;
            t2 = 0x0;
            t3 = 0x0;
            for (;;) {
                if ((*(signed char *)((t0 + (0xC3622DA + t2)))) != (*(signed char *)(((((0xC3622EA + t3) + 0x4) + t0) + 0x0)))) {
                    break;
                }
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)0x8) {
                    t1 = (t1 + 0x1);
                    t0 = 0x2;
                    if ((int)t1 >= (int)t0) {
                        return 0x0;
                    }
                    t2 = t1;
                    t3 = t1;
                    t3 = (t3 << 2);
                    t0 = 0x0;
                    t2 = (t2 << 2);
                    t3 = (t3 << 2);
                    t2 = (t2 << 1);
                    continue;
                }
            }
            break;
        }
    }
    return 0x1;
}
