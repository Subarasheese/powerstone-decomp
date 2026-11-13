/* Straight-line functions with calls and guards (batch gen_ae): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o10B_uchar { char p[0x10B]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1B4_short { char p[0x1B4]; short v; };
struct o1B4_ushort { char p[0x1B4]; unsigned short v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o308_uchar { char p[0x308]; unsigned char v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3E_short { char p[0x3E]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_float { char p[0x70]; float v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o71D4_ushort { char p[0x71D4]; unsigned short v; };
struct o71D6_short { char p[0x71D6]; short v; };
struct o71D8_short { char p[0x71D8]; short v; };
struct o71D8_ushort { char p[0x71D8]; unsigned short v; };
struct o7200_int { char p[0x7200]; int v; };
struct o7200_uint { char p[0x7200]; unsigned int v; };
struct o720F_uchar { char p[0x720F]; unsigned char v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int ADXSTM_GetFad(int, int);
int ADXSTM_GetFsizeByte(int, int);
int ADXSTM_GetFsizeSct(int, int);
int FUN_0c010b84(void);
int FUN_0c010fac(void);
int FUN_0c011150(void);
int FUN_0c011870(void);
int FUN_0c011c4a(void);
int FUN_0c012420(int);
extern int FUN_0c012504();
int FUN_0c01253c(int);
int FUN_0c01628c(int);
int FUN_0c0162ba(int, int);
int FUN_0c01f4c8(int);
int FUN_0c01fdc8(int, int, int, int);
int FUN_0c02b0dc(void);
int FUN_0c02b724(void);
int FUN_0c02b7d4(int);
int FUN_0c02dc86(void);
int FUN_0c02e998(void);
int FUN_0c02ee3c(void);
int FUN_0c02ee40(void);
int FUN_0c02f258(void);
int FUN_0c02f98a(void);
int FUN_0c02ff18(void);
int FUN_0c030368(void);
int FUN_0c03082e(void);
int FUN_0c030920(void);
int FUN_0c03107e(void);
int FUN_0c031496(int, int, int, int);
int FUN_0c044094(int);
int FUN_0c04bef2(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c04cdf2(void);
int FUN_0c059132(int, int, int);
extern int FUN_0c060c88();
int FUN_0c06206e(int, int, int);
int FUN_0c0620dc(int);
int FUN_0c062210(int, int);
int FUN_0c06231c(int, int, int);
int FUN_0c063428(int);
int FUN_0c0634b4(int);
int FUN_0c08ce30(int, int);
int FUN_0c08ce90(int, int);
int FUN_0c08cf10(int, int);
int FUN_0c08cf86(int, int);
int FUN_0c08e382(int);
int FUN_0c08e57e(int);
int FUN_0c098160(int);
int FUN_0c0986bc(int);
int FUN_0c098884(int);
int FUN_0c0989d0(int);
int FUN_0c09a910(int);
int FUN_0c09c782(int);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09da1c(int);
int FUN_0c09e7b8(int);
int FUN_0c09eb32(int, int);
int FUN_0c0a2080(int);
int FUN_0c0a2e26(int, int, int);
int FUN_0c0a2eec(int);
int FUN_0c0a2f52(void);
int FUN_0c0a3796(int, int);
int FUN_0c0a3cd6(int);
int FUN_0c0abe44(int, int);
int FUN_0c0ac6a2(int, int);
int FUN_0c0ac780(int, int, int);
int FUN_0c0d7032(int, int);
int FUN_0c0d9288(int, int);
float FUN_0c0df340(float);
int FUN_0c0df360(float);
float FUN_0c0df940(void);
int syRtcGetDate(int);
int FUN_0c0e5d22(int);
int FUN_0c0e60ce(int, int);
int FUN_0c0e6102(int, int);
int FUN_0c0e6e5c(int);
int FUN_0c0e6f24(void);
extern int FUN_0c0e6fdc();
extern int FUN_0c0e6fe8();
int FUN_0c0e7140(int);
int FUN_0c0ed9e8(int, int, int);
int FUN_0c0efdee(int);
int FUN_0c0f0072(int);
int FUN_0c0f3d20(int, int);
int FUN_0c0ffdba(void);
int FUN_0c0ffdfc(void);
int kdGetDeviceInfo(int);
int FUN_0c10121c(int, int, int);
int FUN_0c109c06(int, int);
int FUN_0c10a47c(int, int, int);
int kmiRegisterPhIntHandler(int);
int FUN_0c11142c(int, int, int, int);
int FUN_0c1137d4(int);
int FUN_0c113890(int);
int FUN_0c11568c(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buSaveExecFile(int, int, int, int, int, int);
int buSaveFile(int, int, int, int, int, int);
int memcpy(int, int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int);
int thunk_FUN_0c062242(int);
int fmMngMcpy(void);
int umemcmp(int, int, int);
int FUN_0c05963e(void);
int FUN_0c05f8f8(int a4);
int FUN_0c0f2ccc(int a4);
int FUN_0c011054(int a4);
int FUN_0c04571c(int a4, int a5, int a6);
int FUN_0c0588d8(int a4, int a5);
int FUN_0c066340(int a4);
int FUN_0c0cb252(int a4, float f4);
int FUN_0c0d0024(int a4);
int FUN_0c0dfc50(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0efe92(int a4);
int ovMdlEntryTbl(int a4);
int ovMdlDeleteTbl(int a4);
int read_fat(int a4);
int FUN_0c113958(int a4);
int FUN_0c015b4a(int a4);
int FUN_0c01f3e0(int a4, int a5, int a6, int a7);
int FUN_0c01f436(int a4, int a5, int a6, int a7);
void FUN_0c03b5da(int a4);
void FUN_0c03c0fa(int a4);
void FUN_0c03c2f6(int a4);
int FUN_0c04258a(int a4);
int FUN_0c044104(int a4);
int FUN_0c0442c0(int a4);
int FUN_0c050f2a(int a4);
int FUN_0c0594e2(void);
int FUN_0c0595a4(void);
int FUN_0c065d10(int a4);
int FUN_0c08cc90(int a4, int a5);
int FUN_0c08d050(int a4, int a5);
int FUN_0c08ee66(int a4);
int FUN_0c09db78(int a4);
void FUN_0c0a40e4(int a4);
int FUN_0c0bfe20(int a4);
int FUN_0c0c67c4(int a4);
int FUN_0c0d7566(int a4, int a5, int a6, int a7);
int FUN_0c0e48b0(int a4, int a5, int a6, int a7);
int FUN_0c0f5428(int a4, int a5);
int FUN_0c0fff62(int a4, int a5, int a6, int a7);
int FUN_0c114cba(int a4, int a5, int a6);
int FUN_0c01181c(int a4, int a5);
int FUN_0c016558(void);
int FUN_0c0195fa(void);
int FUN_0c016344(void);
int FUN_0c02b828(void);
int FUN_0c055782(int a4);
void FUN_0c0313e6(void);
float FUN_0c062108(float f4, float f5, float f6, float f7);
int FUN_0c06336c(int a4);
int FUN_0c0633c0(int a4);
int FUN_0c063318(int a4);
int FUN_0c0634f4(int a4);
int FUN_0c08a8aa(int a4);
int FUN_0c08b96e(int a4);
int FUN_0c09de5e(int a4, int a5, int a6, int a7);
int FUN_0c09ebd4(int a4);
void FUN_0c0a3e10(int a4, int a5, int a6);
int FUN_0c0da43c(int a4);
int FUN_0c0e6212(int a4, int a5, int a6);
int FUN_0c0fb042(int a4, int a5, int a6, int a7);
int FUN_0c10aa80(int a4);
int FUN_0c1094a0(int a4, int a5, int a6, int a7);
int FUN_0c10b3e0(int a4);
int FUN_0c10d0c0(void);
int FUN_0c1139b0(int a4, int a5, int a6, int a7);
int FUN_0c01222c(int a4, int a5, int a6, int a7);
int FUN_0c020ed4(int a4, int a5);
int FUN_0c01f1f6(int a4, int a5, int a6, int a7);
int FUN_0c03c660(int a4);
int FUN_0c03d010(int a4);
int FUN_0c04c078(int a4);
int FUN_0c04cafe(int a4);
int FUN_0c05012e(int a4);
int FUN_0c098b44(int a4);
int FUN_0c0c209c(int a4);
int FUN_0c0c20ee(int a4);
int FUN_0c0c264a(int a4);
int FUN_0c0e6afc(int a4, int a5);
int FUN_0c0e6b60(int a4, int a5);
int FUN_0c104308(int a4, int a5, int a6, int a7);
int FUN_0c1071b4(int a4);
int FUN_0c011554(void);
int FUN_0c03d19a(int a4);
int FUN_0c055566(int a4);
int FUN_0c09c7be(int a4, int a5);
int FUN_0c09d89c(int a4);
int FUN_0c0d71fa(void);
int FUN_0c0d8f10(int a4, int a5, int a6);
int FUN_0c0fcfa0(int a4);

int FUN_0c05963e(void)
{
    register int t0;
    register int t3;
    register int t4;

    t0 = 0x0;
    for (;;) {
        memset(((short)(((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC37CAEC), 0x0, 0xC0);
        t3 = ((short)(((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC37CAEC);
        t4 = t0;
        t0 = (t0 + 0x1);
        *(unsigned int *)((0xC37E16C + (t4 << 2))) = t3;
        if ((int)t0 >= (int)0x1E) {
            break;
        }
    }
    *(unsigned int *)0xC37E1E4 = 0x1E;
    return (t4 << 2);
}


int FUN_0c0f2ccc(int a4)
{
    register int t1;
    register int t2;
    register int t3;

    t1 = kdGetDeviceInfo((unsigned char)(*(signed char *)((a4 + 0xC15A6A4))));
    t2 = kdGetDeviceInfo(a4);
    t3 = 0x1;
    if ((a4 != 2) && ((a4 != 8) && ((a4 != 14) && (a4 != 20)))) {
        t3 = 0x0;
    }
    return (unsigned char)(*(signed char *)((0xC15A67C + (((unsigned char)(*(signed char *)((t3 + (t1 + 0x12)))) << 2) + (unsigned char)(*(signed char *)(((t2 + 0x12) + 0x0)))))));
}

int FUN_0c011054(int a4)
{
    int stk[9];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = (FUN_0c010fac());
    syRtcGetDate((((int)stk + 8) + 0x10));
    *(unsigned short *)(((int)stk + 16)) = (*(short *)(((int)stk + 24)));
    *(unsigned char *)(((int)stk + 18)) = (*(signed char *)(((int)stk + 26)));
    *(unsigned char *)(((int)stk + 19)) = (*(signed char *)(((int)stk + 27)));
    *(unsigned char *)(((int)stk + 20)) = (*(signed char *)(((int)stk + 28)));
    *(unsigned char *)(((int)stk + 21)) = (*(signed char *)(((int)stk + 29)));
    *(unsigned char *)(((int)stk + 22)) = (*(signed char *)(((int)stk + 30)));
    *(unsigned char *)(((int)stk + 23)) = (*(signed char *)(((int)stk + 31)));
    *(int *)((int)stk + 4) = 0x80000000;
    *(int *)((int)stk + 0) = (((int)stk + 4) + 0xC);
    return (buSaveFile((*(int *)(((int)stk + 8))), 0xC116210, 0xC351A40, (*(int *)(((int)stk + 12))), (((int)stk + 4) + 0xC), 0x80000000));
}

int FUN_0c04571c(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t4;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    *(unsigned char *)(((int)stk + 0)) = a6;
    t0 = FUN_0c059132(0x6, 0x1, 0x1);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0x21;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC045774;
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 8)));
        (((struct oEC_ushort *)(t0))->v) = (*(signed char *)(((int)stk + 0)));
        t4 = *(signed char *)(((int)stk + 4));
        *(unsigned char *)((t0 + 0xF)) = t4;
    }
    return t4;
}


int FUN_0c066340(int a4)
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
        return FUN_0c0a2080(a4);
    }
    return 0x71AA;
}

int FUN_0c0cb252(int a4, float f4)
{
    register int t0;
    register float u9;

    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + ((((struct o28_float *)(t0))->v)));
    (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + ((((struct o2C_float *)(t0))->v)));
    if ((*(int *)((t0 + 0x34))) != 0) {
        *(unsigned int *)((t0 + 0x34)) = ((*(int *)((t0 + 0x34))) - 1);
    } else {
        (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.099999994f);
        (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.099999994f);
        u9 = (((struct o4C_float *)(t0))->v);
        (((struct o4C_float *)(t0))->v) = (u9 - 0.099999994f);
        if (!((u9 - 0.099999994f) > 0.0f)) {
            *(unsigned char *)((t0 + 0x0)) = 0x0;
        }
    }
    return (*(signed char *)((t0 + 0x0)));
}


int FUN_0c0dfc50(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    u0 = -0.5f;
    if (!(0.0f > f4)) {
        u0 = 0.5f;
    }
    *(unsigned int *)((a4 + 0x0)) = (int)(u0 + (f4 / 1.57079625f));
    u1 = (f4 - (((float)(int)(u0 + (f4 / 1.57079625f)) * 1.57080078f)));
    u1 = u1 + 4.45445494e-06f * ((float)(int)(u0 + (f4 / 1.57079625f)));
    t0 = 0xB;
    u0 = 0.0f;
    for (;;) {
        t1 = t0;
        t0 = (t0 - 2);
        u2 = ((float)t1 - u0);
        u0 = (u1 * u1);
        u0 = (u0 / u2);
        if ((int)t0 < (int)0x3) {
            break;
        }
    }
    return ((int (*)(int, int, int, int, float, float, float))(0xC0DFCA8))(t0, 0x3, a6, a7, u1, u0, (u1 * u1));
}

int FUN_0c0efe92(int a4)
{
    int stk[2];
    register int t0;
    register int t2;
    register int t6;
    register int t9;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = FUN_0c0efdee((((int)stk + 0) + 0x4));
    if ((int)(*(int *)((t0 + 0x0))) > 0) {
        t2 = 0x0;
        for (;;) {
            t6 = umemcmp((*(int *)(((int)stk + 0))), ((*(int *)(((((t2 << 2) << 1) + (t0 + 0x8)) + 0x0))) + 0x10), 0x10);
            if (t6 == 0) {
                break;
            }
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)(*(int *)((t0 + 0x0)))) {
                return 0xFFFFFFFE;
            }
        }
        t9 = t2;
    } else {
        t9 = 0xFFFFFFFE;
    }
    return t9;
}

int ovMdlEntryTbl(int a4)
{
    register int t0;
    register int t2;

    t0 = umemcmp((a4 + 0x30), 0xC15A1D0, 0x10);
    t2 = 0xFFFFFFFF;
    if (t0 != 0) {
    } else {
        t2 = t0;
    }
    return t2;
}

int ovMdlDeleteTbl(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = umemcmp((a4 + 0x30), 0xC15A1D0, 0x10);
    t1 = 0xFFFFFFFF;
    if (t0 == 0) {
        t0 = 0x1;
        for (;;) {
            t2 = umemcmp((((((t0 << 2) << 2) << 1) + (a4 + 0x20)) + 0x10), 0xC15A1E0, 0x10);
            if (t2 != 0) {
                FUN_0c0f0072(((((t0 << 2) << 2) << 1) + (a4 + 0x20)));
                t0 = (t0 + 0x1);
                continue;
            }
            break;
        }
        t1 = 0x0;
    }
    return t1;
}

int read_fat(int a4)
{
    register int t1;
    register int t8;
    register int t2;
    register int t7;

    t1 = *(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x10));
    t8 = 0x0;
    if ((int)t1 > 0) {
        t2 = 0x0;
        for (;;) {
            t7 = FUN_0c10121c(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0xC))) + t2), (((t2 << 8) << 1) + (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x24)))));
            if ((int)t7 < 0) {
                break;
            }
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)t1) {
                return 0x0;
            }
        }
        t8 = t7;
    }
    return t8;
}

int FUN_0c113958(int a4)
{
    register int t15;
    register int t1;
    register int t2;
    register int t6;

    t15 = 0xFFFFFFFA;
    if ((*(short *)((a4 + 0x2))) == 0) {
        t1 = *(int *)((a4 + 0x28));
        t2 = *(int *)((a4 + 0xC));
        *(volatile int *)((a4 + 0x30));
        fmMngMcpy();
        t15 = 0x0;
        if ((unsigned short)(*(short *)(((((((t1 + 0x1) << 2) << 2) << 2) + t2) + 0x0))) != 0xFFFF) {
            t6 = FUN_0c11568c(0x3E, (((((t1 + 0x1) << 2) << 2) << 2) + t2));
            t15 = 0x0;
            if ((unsigned short)((((struct o3E_short *)((((((t1 + 0x1) << 2) << 2) << 2) + t2)))->v)) != (unsigned short)t6) {
                t15 = 0xFFFFFFFC;
            }
        }
    }
    return t15;
}

int FUN_0c015b4a(int a4)
{
    (((struct o1C_float *)(a4))->v) = (((((struct o1C_float *)(a4))->v)) + ((((struct o28_float *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o34_float *)(a4))->v)));
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o2C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o30_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    return 0x30;
}



void FUN_0c03b5da(int a4)
{
    register int t0;

    t0 = *(signed char *)(((0x308 + a4) + 0x0));
    (((struct o308_uchar *)(a4))->v) = (t0 - 1);
    if ((int)(signed char)(t0 - 1) < 0) {
        (((struct o308_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)(((0x308 + a4) + 0x1));
        *(unsigned char *)(((0x308 + a4) + 0x1)) = (t0 + 0x1);
        if ((int)(signed char)(t0 + 0x1) > (int)0x10) {
            *(unsigned char *)(((0x308 + a4) + 0x1)) = 0x0;
        }
        t0 = *(signed char *)((a4 + 0x3));
        FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), ((*(signed char *)(((0x308 + a4) + 0x1))) + 0xA));
    return;
    }
}

void FUN_0c03c0fa(int a4)
{
    register int t0;

    t0 = *(signed char *)(((0x308 + a4) + 0x0));
    (((struct o308_uchar *)(a4))->v) = (t0 - 1);
    if ((int)(signed char)(t0 - 1) < 0) {
        (((struct o308_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)(((0x308 + a4) + 0x1));
        *(unsigned char *)(((0x308 + a4) + 0x1)) = (t0 + 0x1);
        if ((int)(signed char)(t0 + 0x1) > (int)0x7) {
            *(unsigned char *)(((0x308 + a4) + 0x1)) = 0x0;
        }
        t0 = *(signed char *)((a4 + 0x3));
        FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), ((*(signed char *)(((0x308 + a4) + 0x1))) + 0x1));
    return;
    }
}

void FUN_0c03c2f6(int a4)
{
    register int t0;

    t0 = *(signed char *)(((0x308 + a4) + 0x0));
    (((struct o308_uchar *)(a4))->v) = (t0 - 1);
    if ((int)(signed char)(t0 - 1) < 0) {
        (((struct o308_uchar *)(a4))->v) = 0x2;
        t0 = *(signed char *)(((0x308 + a4) + 0x1));
        *(unsigned char *)(((0x308 + a4) + 0x1)) = (t0 + 0x1);
        if ((int)(signed char)(t0 + 0x1) > (int)0x7) {
            *(unsigned char *)(((0x308 + a4) + 0x1)) = 0x0;
        }
        t0 = *(signed char *)((a4 + 0x3));
        FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), ((*(signed char *)(((0x308 + a4) + 0x1))) + 0x21));
    return;
    }
}

int FUN_0c04258a(int a4)
{
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o44_float *)(a4))->v)));
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    return 0x40;
}

int FUN_0c044104(int a4)
{
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o44_float *)(a4))->v)));
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    return 0x40;
}

int FUN_0c0442c0(int a4)
{
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o44_float *)(a4))->v)));
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    return 0x40;
}

int FUN_0c050f2a(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x71BA));
    if ((t0 != 0) && ((t0 != 2) && ((t0 != 31) && (t0 != 5)))) {
        (((struct o4_ushort *)0xC3673E8)->v) = 0x0;
        t0 = 0x0;
    } else {
        *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
        t0 = FUN_0c04cdf2();
        (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    }
    return t0;
}

int FUN_0c0594e2(void)
{
    register int t0;
    register int t2;
    register int t3;

    t0 = 0x0;
    for (;;) {
        memset(((unsigned short)((unsigned short)t0 * (unsigned short)0xA4) + 0xC367400), 0x0, 0xA4);
        t2 = ((unsigned short)((unsigned short)t0 * (unsigned short)0xA4) + 0xC367400);
        t3 = t0;
        t0 = (t0 + 0x1);
        *(unsigned int *)((0xC373430 + (t3 << 2))) = t2;
        if ((int)t0 >= (int)0x12C) {
            break;
        }
    }
    *(unsigned int *)0xC3738E0 = 0x12C;
    return (t3 << 2);
}

int FUN_0c0595a4(void)
{
    register int t0;
    register int t2;
    register int t3;

    t0 = 0x0;
    for (;;) {
        memset(((unsigned short)((unsigned short)t0 * (unsigned short)0x9B8) + 0xC3738E4), 0x0, 0x9B8);
        t2 = ((unsigned short)((unsigned short)t0 * (unsigned short)0x9B8) + 0xC3738E4);
        t3 = t0;
        t0 = (t0 + 0x1);
        *(unsigned int *)((0xC37CAAC + (t3 << 2))) = t2;
        if ((int)t0 >= (int)0xF) {
            break;
        }
    }
    *(unsigned int *)0xC37CAE8 = 0xF;
    return (t3 << 2);
}

int FUN_0c065d10(int a4)
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
        return FUN_0c0a2080(a4);
    }
    FUN_0c09da1c(a4);
    t0 = (((struct o719E_short *)(a4))->v);
    if ((unsigned short)t0 == 10) {
        return FUN_0c063428(a4);
    }
    return (unsigned short)t0;
}


int FUN_0c08d050(int a4, int a5)
{
    register int t0;
    int t1;

    t0 = 0x1E;
    if ((*(signed char *)((a4 + 0x1E))) == 0) {
        t1 = *(signed char *)((a5 + 0x71BA));
        t0 = t1;
        if ((t1 != 0) && (t1 != 2)) {
        } else {
            t1 = FUN_0c08ce30(a4, a5);
            t0 = (signed char)t1;
            if ((signed char)t1 == 0) {
                t1 = FUN_0c08ce90(a4, a5);
                t0 = t1;
                if (t1 == 0) {
                    t1 = FUN_0c08cf10(a4, a5);
                    t0 = (signed char)t1;
                    if ((signed char)t1 == 0) {
                        t0 = (signed char)(FUN_0c08cf86(a4, a5));
                    }
                }
            }
        }
    }
    return t0;
}

int FUN_0c08ee66(int a4)
{
    FUN_0c08e382(a4);
    if (((((struct o24_float *)(a4))->v)) > (((((struct o2D4_float *)(a4))->v)) + 100.0f)) {
        FUN_0c044094((a4 + 0x20));
        FUN_0c0a3cd6((*(signed char *)((a4 + 0x3))));
        return FUN_0c0a2e26(a4, 0x18, 0x4);
    }
    (((struct o24_float *)(a4))->v) = (((((struct o2D4_float *)(a4))->v)) + -1.0f);
    return FUN_0c0a2e26(a4, 0x10, 0x2);
}

int FUN_0c09db78(int a4)
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

    u0 = (((struct o0_float *)0xC7E40E4)->v);
    u1 = (((struct o0_float *)0xC7EB3B4)->v);
    u2 = (((struct o8_float *)0xC7EB3B4)->v);
    u3 = (((struct o8_float *)0xC7E40E4)->v);
    u4 = (u2 - u3);
    u5 = (u1 - u0);
    if ((*(signed char *)((a4 + 0x3))) == 1) {
        u6 = (u2 - u3);
        u6 = -u6;
        u2 = (u1 - u0);
        u2 = -u2;
        u4 = u6;
        u5 = u2;
    }
    u0 = u5;
    if (u5 == 0.0f) {
        u0 = (*(float *)0xC09DC9C);
    }
    t0 = FUN_0c0df360(((-u4) / u0));
    t1 = t0;
    if (0.0f > u0) {
        t1 = (t0 + 0x8000);
    }
    return (unsigned short)(t1 + 0x4000);
}

void FUN_0c0a40e4(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = *(signed char *)(((int)stk + 0));
    if ((((int)(unsigned char)t0 > (int)0x5) && ((int)(unsigned char)t0 < (int)0x10)) || ((((int)(unsigned char)t0 > (int)0x14) && ((int)(unsigned char)t0 < (int)0x20)) || ((((int)(unsigned char)t0 > (int)0x29) && ((int)(unsigned char)t0 < (int)0x30)) || ((((int)(unsigned char)t0 > (int)0x34) && ((int)(unsigned char)t0 < (int)0x40)) || ((int)(unsigned char)t0 > (int)0x47))))) {
        return;
    }
    FUN_0c0a2eec((*(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC1518C0))));
}

int FUN_0c0bfe20(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x1C));
    t1 = *(signed char *)((t0 + 0x3));
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
    (((struct o20_float *)(a4))->v) = ((((struct o20_float *)(t0))->v));
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(t0))->v));
    return 0x28;
}

int FUN_0c0c67c4(int a4)
{
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o44_float *)(a4))->v)));
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    return 0x40;
}

int FUN_0c0d7566(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)0xC7F4738;
    if ((t0 != 2) && (t0 != 3)) {
        if (t0 != 5) {
            if (t0 != 6) {
                (((struct o0_uchar *)0xC7F4725)->v) = 0x2;
            } else {
                (((struct o13_uchar *)0xC7F4725)->v) = (*(signed char *)0xC7F4727);
                (((struct o0_uchar *)0xC7F4725)->v) = 0x2;
            }
        } else {
            t0 = ((int (*)(int, int, int, int))(FUN_0c060c88))(0x2, a5, a6, a7);
            t0 = ((int (*)(int))(FUN_0c060c88))(0xD);
            FUN_0c0a2f52();
            (((struct o0_uchar *)0xC7F4725)->v) = 0x2;
        }
        t0 = 0x0;
    } else {
        t0 = ((*(signed char *)0xC7F4726) + 0x1);
    }
    (((struct o1_uchar *)0xC7F4725)->v) = t0;
    return t0;
}

int FUN_0c0e48b0(int a4, int a5, int a6, int a7)
{
    register int t2;

    _builtin_get_imask();
    _builtin_set_imask(0xE);
    if ((int)a4 < (int)0xC) {
        t2 = ((int (*)(int, int, int, int))((*(int *)(((a4 << 2) + 0xC346AD8)))))(a4, a5, a6, a7);
        return ((int (*)(void))(0xC0E4924))();
    }
    return ((int (*)(int, int, int, int))(0xC0E4920))(a4, a5, a6, a7);
}

int FUN_0c0f5428(int a4, int a5)
{
    int stk[5];
    register int t0;
    register int t15;
    register int t1;
    register int t2;

    t0 = ADXSTM_GetFad(a5, (((int)stk + 0) + 0x8));
    t15 = t0;
    if ((int)t0 >= 0) {
        t1 = ADXSTM_GetFsizeSct(a5, (((int)stk + 0) + 0x4));
        t15 = t1;
        if ((int)t1 >= 0) {
            t2 = ADXSTM_GetFsizeByte(a5, ((int)stk + 0));
            t15 = t2;
            if ((int)t2 < 0) {
            } else {
                *(unsigned int *)((a4 + 0xC)) = (*(int *)(((int)stk + 8)));
                *(unsigned int *)((a4 + 0x10)) = (*(int *)(((int)stk + 4)));
                *(unsigned int *)((a4 + 0x14)) = (*(int *)(((int)stk + 0)));
                t15 = 0x0;
            }
        }
    }
    return t15;
}

int FUN_0c0fff62(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    FUN_0c0ffdfc();
    t2 = FUN_0c11142c(a4, a5, a6, a7);
    FUN_0c0ffdba();
    *(unsigned int *)0xC805708 = 0x1;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t2;
}

int FUN_0c114cba(int a4, int a5, int a6)
{
    register int t12;
    register int t0;

    t12 = 0x0;
    if (a5 == 0) {
    } else {
        t0 = FUN_0c0e60ce(a5, a6);
        if (t0 == 0) {
            mwRnaErrCallFunc(0xC15B940);
        }
        memcpy((*(int *)(((*(int *)((a4 + 0x10))) + 0x4))), t0, (*(int *)((a6 + 0x0))));
        FUN_0c0e6102((*(short *)((a4 + 0x2))), (*(int *)(((*(int *)((a4 + 0x10))) + 0x4))));
        t12 = 0x1;
    }
    *(unsigned char *)((a4 + 0x1)) = t12;
    return t12;
}

int FUN_0c01181c(int a4, int a5)
{
    int stk[8];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned char *)0xC15CE08 = a5;
    syRtcGetDate((((int)stk + 8) + 0xC));
    *(unsigned short *)(((int)stk + 12)) = (*(short *)(((int)stk + 20)));
    *(unsigned char *)(((int)stk + 14)) = (*(signed char *)(((int)stk + 22)));
    *(unsigned char *)(((int)stk + 15)) = (*(signed char *)(((int)stk + 23)));
    *(unsigned char *)(((int)stk + 16)) = (*(signed char *)(((int)stk + 24)));
    *(unsigned char *)(((int)stk + 17)) = (*(signed char *)(((int)stk + 25)));
    *(unsigned char *)(((int)stk + 18)) = (*(signed char *)(((int)stk + 26)));
    *(unsigned char *)(((int)stk + 19)) = (*(signed char *)(((int)stk + 27)));
    *(int *)((int)stk + 4) = 0x800000FF;
    *(int *)((int)stk + 0) = (((int)stk + 4) + 0x8);
    return (buSaveExecFile((*(int *)(((int)stk + 8))), 0xC116220, 0xC15C408, 0x80, (((int)stk + 4) + 0x8), 0x800000FF));
}

int FUN_0c016558(void)
{
    register int t0;
    register int t8;
    register int t3;
    register int t2;

    t0 = FUN_0c059132(0x5, 0x1, 0x3);
    t8 = t0;
    if (t0 != 0) {
        FUN_0c01628c(t0);
        *(unsigned int *)((t0 + 0x10)) = 0xC0163C4;
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t2 = t3;
            t2 = (t2 << 2);
            FUN_0c0162ba((*(int *)((((0x2E0 + t0) + t2) + 0x0))), (*(int *)((0xC116BC0 + t2))));
            t3 = (t3 + 0x1);
        }
        t8 = 0x2DC;
    }
    return t8;
}

int FUN_0c0195fa(void)
{
    if ((*(signed char *)0xC36231C) == (*(signed char *)0xC7F4748)) {
        if ((*(signed char *)0xC36231D) == (*(signed char *)0xC7F4749)) {
            if ((*(signed char *)0xC36231E) == (*(signed char *)0xC7F474A)) {
                if ((*(signed char *)0xC36231F) == (*(signed char *)0xC7F474B)) {
                    if ((*(signed char *)0xC362320) == (*(signed char *)0xC7F474C)) {
                        if ((*(signed char *)0xC362321) == (*(signed char *)0xC7F474D)) {
                            if ((*(signed char *)0xC362322) != (*(signed char *)0xC7F474E)) {
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
    return 0x1;
}

int FUN_0c016344(void)
{
    register int t0;
    register int t8;
    register int t3;
    register int t2;

    t0 = FUN_0c059132(0x5, 0x1, 0x2);
    t8 = t0;
    if (t0 != 0) {
        FUN_0c01628c(t0);
        *(unsigned int *)((t0 + 0x10)) = 0xC0162D2;
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t2 = t3;
            t2 = (t2 << 2);
            FUN_0c0162ba((*(int *)((((0x2E0 + t0) + t2) + 0x0))), (*(int *)((0xC116BB8 + t2))));
            t3 = (t3 + 0x1);
        }
        t8 = 0x2DC;
    }
    return t8;
}

int FUN_0c02b828(void)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE8;
    if ((unsigned char)t0 != 0) {
        
        return (unsigned char)t0;
    }
    (((struct o0_uchar *)0xC7F2EE8)->v) = ((*(signed char *)0xC7F2EE8) + 0x1);
    (((struct o2_uchar *)0xC7F2EE8)->v) = 0x0;
    (((struct o1_uchar *)0xC7F2EE8)->v) = 0x0;
    (((struct o10_ushort *)0xC7F2EE8)->v) = 0x0;
    (((struct oE_ushort *)0xC7F2EE8)->v) = 0x0;
    (((struct oC_ushort *)0xC7F2EE8)->v) = 0x0;
    FUN_0c02b0dc();
    FUN_0c02b724();
    FUN_0c02b7d4(0x0);
    return FUN_0c031496(0xFFFFFFFF, 0x0, 0x0, 0x3C);
}

int FUN_0c055782(int a4)
{
    register int t0;
    register int t5;

    t0 = *(signed char *)0xC7F4750;
    if (((int)t0 < (int)0x4) && ((int)a4 >= (int)0x4)) {
        *(unsigned char *)0xC7F4750 = 0x4;
    }
    if (((int)(*(signed char *)0xC7F4750) < (int)0x3) && ((int)a4 >= (int)0x3)) {
        *(unsigned char *)0xC7F4750 = 0x3;
    }
    if (((int)(*(signed char *)0xC7F4750) < (int)0x2) && ((int)a4 >= (int)0x2)) {
        *(unsigned char *)0xC7F4750 = 0x2;
    }
    if (((int)(*(signed char *)0xC7F4750) < (int)0x1) && ((int)a4 >= (int)0x1)) {
        *(unsigned char *)0xC7F4750 = 0x1;
    }
    t5 = 0x0;
    if (t0 != (*(signed char *)0xC7F4750)) {
        t5 = 0x1;
    }
    return t5;
}

void FUN_0c0313e6(void)
{
    if ((*(signed char *)0xC366A70) != 0) {
        FUN_0c030920();
        FUN_0c02f98a();
        FUN_0c02dc86();
        FUN_0c02f258();
        FUN_0c02ee40();
        FUN_0c02e998();
        FUN_0c02ee3c();
        FUN_0c030368();
        FUN_0c03082e();
        FUN_0c02ff18();
        if ((*(signed char *)0xC7F4769) == 0) {
            FUN_0c03107e();
    return;
        }
        return;
    }
}

float FUN_0c062108(float f4, float f5, float f6, float f7)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = (f5 * f5);
    u0 = u0 + f4 * f4;
    u1 = FUN_0c0df340(u0);
    u0 = (f7 * f7);
    u0 = u0 + f6 * f6;
    u2 = FUN_0c0df340(u0);
    u0 = (u1 * u2);
    if ((u1 * u2) == 0.0f) {
        u0 = (*(float *)0xC062300);
    }
    u1 = (f5 * f7);
    u1 = u1 + f6 * f4;
    return (u1 / u0);
}

int FUN_0c06336c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o71C8_int *)(a4))->v);
    t1 = 0x0;
    if (t0 != 0) {
        t2 = FUN_0c0ac780(t0, 0x7, (*(signed char *)((a4 + 0x3))));
        t1 = 0x0;
        if (t2 != 0) {
            t2 = FUN_0c0ac6a2(t0, (*(signed char *)((a4 + 0x3))));
            t1 = 0x0;
            if ((signed char)t2 != 0) {
                *(volatile signed char *)((a4 + 0x3));
                FUN_0c0abe44(t0, 0xB);
                FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0x23);
                t1 = 0x1;
            }
        }
    }
    return t1;
}

int FUN_0c0633c0(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o71C8_int *)(a4))->v);
    t1 = 0x0;
    if (t0 != 0) {
        t2 = FUN_0c0ac780(t0, 0x7, (*(signed char *)((a4 + 0x3))));
        t1 = 0x0;
        if (t2 != 0) {
            t2 = FUN_0c0ac6a2(t0, (*(signed char *)((a4 + 0x3))));
            t1 = 0x0;
            if ((signed char)t2 != 0) {
                *(volatile signed char *)((a4 + 0x3));
                FUN_0c0abe44(t0, 0xA);
                FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0x23);
                t1 = 0x1;
            }
        }
    }
    return t1;
}

int FUN_0c063318(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o71C8_int *)(a4))->v);
    t1 = 0x0;
    if (t0 != 0) {
        t2 = FUN_0c0ac780(t0, 0x7, (*(signed char *)((a4 + 0x3))));
        t1 = 0x0;
        if (t2 != 0) {
            t2 = FUN_0c0ac6a2(t0, (*(signed char *)((a4 + 0x3))));
            t1 = 0x0;
            if ((signed char)t2 != 0) {
                *(volatile signed char *)((a4 + 0x3));
                FUN_0c0abe44(t0, 0xC);
                FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0x23);
                t1 = 0x1;
            }
        }
    }
    return t1;
}

int FUN_0c0634f4(int a4)
{
    register int t0;

    if (!(((((struct o3C_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c09e7b8(a4);
        if ((signed char)t0 != 0) {
            return FUN_0c0a2e26(a4, 0x6, 0x0);
        }
    }
    FUN_0c09d990(a4);
    FUN_0c09d9bc(a4);
    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c08a8aa(int a4)
{
    int stk[3];
    register int t7;
    register int t10;

    FUN_0c06206e(((int)stk + 0), ((*(int *)((a4 + 0x1C))) + 0x20), (a4 + 0x20));
    if ((*(float *)(((int)stk + 8))) == 0.0f) {
        *(float *)(((int)stk + 8)) = 9.99999975e-05f;
    }
    t7 = FUN_0c0df360(((*(float *)(((int)stk + 0))) / (*(float *)(((int)stk + 8)))));
    t10 = t7;
    if (0.0f > (*(float *)(((int)stk + 8)))) {
        t10 = (t7 + 0x8000);
    }
    return (unsigned short)(t10 - (*(int *)((a4 + 0x30))));
}

int FUN_0c08b96e(int a4)
{
    int stk[6];

    *(float *)(((int)stk + 0)) = 0.0f;
    *(float *)(((int)stk + 4)) = ((((struct o0_float *)0xC08BA34)->v));
    *(float *)(((int)stk + 8)) = ((((struct o4_float *)0xC08BA34)->v));
    FUN_0c062210(((int)stk + 0), (((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0xDC0) + (0x300 + a4)) + 0x2C0));
    return (FUN_0c04bef2(((int)stk + 0), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x6, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
}

int FUN_0c09de5e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = (((struct o2DC_int *)(a4))->v);
    if ((t0 & 0xF0) == 16) {
        return 0x1;
    }
    if ((t0 & 0xF0) == 0x90) {
        return 0x2;
    }
    if ((t0 & 0xF0) == 0x80) {
        return 0x3;
    }
    return ((int (*)(int, int, int, int))(0xC09DEB4))((t0 & 0xF0), a5, a6, a7);
}

int FUN_0c09ebd4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(signed char *)((a4 + 0x7238));
    t1 = *(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC338E78));
    if ((*(signed char *)(((t1 + (t0 << 1)) + 0x0))) != 98) {
        t2 = FUN_0c09eb32(a4, (*(signed char *)(((t1 + (t0 << 1)) + 0x0))));
        if ((signed char)t2 != 0) {
            t2 = ((*(signed char *)(((t1 + (t0 << 1)) + 0x0))) + 0x1);
        } else {
            t3 = 0x0;
            if ((*(signed char *)(((t1 + (t0 << 1)) + 0x1))) != 98) {
                t4 = FUN_0c09eb32(a4, (*(signed char *)(((t1 + (t0 << 1)) + 0x1))));
                t5 = 0x0;
                if ((signed char)t4 != 0) {
                    t5 = ((*(signed char *)(((t1 + (t0 << 1)) + 0x1))) + 0x1);
                }
                t3 = t5;
            }
            t2 = t3;
        }
        t3 = t2;
    } else {
        t2 = 0x0;
        if ((*(signed char *)(((t1 + (t0 << 1)) + 0x1))) != 98) {
            t4 = FUN_0c09eb32(a4, (*(signed char *)(((t1 + (t0 << 1)) + 0x1))));
            t5 = 0x0;
            if ((signed char)t4 != 0) {
                t5 = ((*(signed char *)(((t1 + (t0 << 1)) + 0x1))) + 0x1);
            }
            t2 = t5;
        }
        t3 = t2;
    }
    return t3;
}

void FUN_0c0a3e10(int a4, int a5, int a6)
{
    register int t0;

    if ((int)(unsigned char)a5 <= (int)0x5) {
        t0 = *(signed char *)0xC7F3051;
        if ((*(int *)(((((((t0 << 1) + (t0 << 2)) + (signed char)a5) << 2) + 0xC152180) + 0x0))) != 0xFFFFFF) {
            if ((signed char)a6 == 0) {
                FUN_0c0a2eec(((*(int *)(((((((t0 << 1) + (t0 << 2)) + (signed char)a5) << 2) + 0xC152180) + 0x0))) + (signed char)(a4 & 0x1)));
    return;
            }
            FUN_0c0a2eec((((*(int *)(((((((t0 << 1) + (t0 << 2)) + (signed char)a5) << 2) + 0xC152180) + 0x0))) + (signed char)(a4 & 0x1)) + 0x10000));
    return;
        }
        return;
    }
}

int FUN_0c0da43c(int a4)
{
    register int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0x4));
    if (t1 != 0) {
        if (t1 != 1) {
        } else {
            t1 = (((struct o1B4_short *)(a4))->v);
            (((struct o1B4_ushort *)(a4))->v) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) > (int)0x168) {
                (((struct o1B4_ushort *)(a4))->v) = 0x0;
            }
        }
    } else {
        *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
        *(unsigned char *)(((a4 + 0x1) + 0x5)) = 0x0;
        *(unsigned char *)(((a4 + 0x1) + 0x4)) = 0x0;
        FUN_0c0e7140((a4 + 0x1));
        t1 = (((struct o1B4_short *)(a4))->v);
        (((struct o1B4_ushort *)(a4))->v) = (t1 + 0x1);
        if ((int)(short)(t1 + 0x1) > (int)0x168) {
            (((struct o1B4_ushort *)(a4))->v) = t0;
        }
    }
    return FUN_0c0d9288(a4, (0x1A8 + a4));
}

int FUN_0c0e6212(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t6;

    *(unsigned short *)(((((int)stk + 0) + 0x6) + 0x0)) = a4;
    *(unsigned short *)(((((int)stk + 0) + 0x4) + 0x0)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = *(signed char *)(((int)stk + 6));
    if ((*(short *)((0xC7FD110 + (unsigned char)((((t0 << 1) + t0) << 2) << 1)))) != 1) {
        return 0x0;
    }
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = (*(int *)0xC7FD0F4);
    t6 = *(signed char *)(((int)stk + 6));
    return (*(int *)(((0xC7FD114 + (unsigned char)((((t6 << 1) + t6) << 2) << 1)) + ((*(short *)(((int)stk + 4))) << 2))));
}

int FUN_0c0fb042(int a4, int a5, int a6, int a7)
{
    _builtin_get_imask();
    _builtin_set_imask(0xF);
    if (a6 != 0) {
        *(unsigned int *)(((((a5 << 2) << 1) + (0x230 + a4)) + 0x0)) = a6;
        *(unsigned int *)((((0x230 + a4) + ((a5 << 2) << 1)) + 0x4)) = a7;
        return ((int (*)(int, int, int, int))(0xC0FB0A4))(a4, (((a5 << 2) << 1) + (0x230 + a4)), a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0FB0A0))(a4, a5, a6, a7);
}

int FUN_0c10aa80(int a4)
{
    register int t0;
    register int t2;
    register int t3;
    register int t1;

    t0 = 0x0;
    t2 = 0xC8174A8;
    t3 = 0xC8174A8;
    for (;;) {
        t0 = (t0 + 0x1);
        if (t3 == a4) {
            t1 = (*(short *)((t2 + 0x0)));
            t1 = (t1 & 0xFFFE);
            *(unsigned short *)((t2 + 0x0)) = t1;
        }
        t3 = (t3 + 0x18);
        t2 = (t2 + 0x18);
        if (t3 == a4) {
            t1 = (*(short *)((t2 + 0x0)));
            t1 = (t1 & 0xFFFE);
            *(unsigned short *)((t2 + 0x0)) = t1;
        }
        t3 = (t3 + 0x18);
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x18);
        if (t3 == a4) {
            t1 = (*(short *)((t2 + 0x0)));
            t1 = (t1 & 0xFFFE);
            *(unsigned short *)((t2 + 0x0)) = t1;
        }
        t3 = (t3 + 0x18);
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x18);
        if (t3 == a4) {
            t1 = (*(short *)((t2 + 0x0)));
            t1 = (t1 & 0xFFFE);
            *(unsigned short *)((t2 + 0x0)) = t1;
        }
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x18);
        t3 = (t3 + 0x18);
        if ((int)t0 >= (int)0x1000) {
            break;
        }
    }
    return 0x1000;
}

int FUN_0c1094a0(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t4;
    register int t6;

    if (((*(int *)0xC816FC8) & 4) != 0) {
        FUN_0c109c06(((int)stk + 0), (((int)stk + 0) + 0x4));
        t4 = 0x0;
        if ((int)(*(int *)(((int)stk + 0))) < (int)(*(int *)(((int)stk + 4)))) {
            t4 = 0x1;
        }
        t6 = FUN_0c10a47c(t4, a4, a5);
        return ((int (*)(int, int, int, int))(0xC10950C))(t6, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC109500))(a4, a5, a6, a7);
}

int FUN_0c10b3e0(int a4)
{
    register int t0;
    register int t2;
    register int t3;
    register int t1;

    t0 = 0x0;
    t2 = 0xC82F4A8;
    t3 = 0xC82F4A8;
    for (;;) {
        t0 = (t0 + 0x1);
        if (t3 == a4) {
            t1 = (*(short *)((t2 + 0x0)));
            t1 = (t1 & 0xFFFE);
            *(unsigned short *)((t2 + 0x0)) = t1;
        }
        t3 = (t3 + 0x4C);
        t2 = (t2 + 0x4C);
        if (t3 == a4) {
            t1 = (*(short *)((t2 + 0x0)));
            t1 = (t1 & 0xFFFE);
            *(unsigned short *)((t2 + 0x0)) = t1;
        }
        t3 = (t3 + 0x4C);
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x4C);
        if (t3 == a4) {
            t1 = (*(short *)((t2 + 0x0)));
            t1 = (t1 & 0xFFFE);
            *(unsigned short *)((t2 + 0x0)) = t1;
        }
        t3 = (t3 + 0x4C);
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x4C);
        if (t3 == a4) {
            t1 = (*(short *)((t2 + 0x0)));
            t1 = (t1 & 0xFFFE);
            *(unsigned short *)((t2 + 0x0)) = t1;
        }
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x4C);
        t3 = (t3 + 0x4C);
        if ((int)t0 >= (int)0x400) {
            break;
        }
    }
    return 0x400;
}

int FUN_0c10d0c0(void)
{
    register int t1;
    register int t2;

    kmiRegisterPhIntHandler(0xC10DDD2);
    *(unsigned int *)0xC8171AC = 0x0;
    *(unsigned int *)0xC817268 = 0x0;
    (((struct o0_uint *)0xC817330)->v) = 0x0;
    (((struct o4_uint *)0xC817330)->v) = 0x0;
    (((struct o4_uint *)0xC8426C8)->v) = 0x0;
    (((struct o8_uint *)0xC8426C8)->v) = 0x0;
    (((struct oC_uint *)0xC8426C8)->v) = 0x0;
    (((struct o10_uint *)0xC8426C8)->v) = 0x0;
    (((struct o14_uint *)0xC8426C8)->v) = 0x0;
    (((struct o18_uint *)0xC8426C8)->v) = 0x0;
    (((struct o1C_uint *)0xC8426C8)->v) = 0x0;
    (((struct o20_uint *)0xC8426C8)->v) = 0x0;
    (((struct o24_uint *)0xC8426C8)->v) = 0x0;
    *(unsigned int *)0xC84271C = 0x0;
    (((struct o0_uint *)0xC8426C8)->v) = 0x0;
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        t2 = (t2 + 0x1);
        *(unsigned int *)(((0xC8426F8 + t1) + 0x0)) = 0x0;
        t1 = (t1 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0x5) {
            break;
        }
    }
    return 0x5;
}

int FUN_0c1139b0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x24));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return ((int (*)(int, int, int, int))(0xC113A06))(a4, a5, a6, a7);
            }
            t0 = FUN_0c1137d4(a4);
            return ((int (*)(int, int, int, int))(0xC113A08))(t0, a5, a6, a7);
        }
        t0 = FUN_0c0ed9e8((*(int *)((a4 + 0x4))), a5, a6);
        if (t0 == -1) {
            return ((int (*)(int, int, int, int))(0xC113A08))(0xFFFFFFFD, a5, a6, a7);
        }
        *(unsigned int *)((a4 + 0x24)) = 0x2;
        return ((int (*)(int, int, int, int))(0xC113A08))(0x1, a5, a6, a7);
    }
    t0 = FUN_0c113890(a4);
    if (t0 == -10) {
        *(unsigned int *)((a4 + 0x24)) = 0x1;
        return ((int (*)(int, int, int, int))(0xC113A08))(0x1, t0, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC113A08))(t0, t0, a6, a7);
}

int FUN_0c01222c(int a4, int a5, int a6, int a7)
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
        FUN_0c012420(0x2);
        FUN_0c010b84();
        *(unsigned short *)((a4 + 0x1C)) = 0x78;
        t0 = 0x78;
    }
    return t0;
}

int FUN_0c020ed4(int a4, int a5)
{
    *(float *)((a4 + 0x0)) = (float)(*(short *)((a5 + 0x0)));
    (((struct o4_float *)(a4))->v) = (float)(*(short *)((a5 + 0x2)));
    (((struct o8_float *)(a4))->v) = (float)(*(short *)((a5 + 0x4)));
    (((struct oC_float *)(a4))->v) = (float)(*(short *)((a5 + 0x6)));
    (((struct o10_float *)(a4))->v) = (float)(*(short *)((a5 + 0x8)));
    (((struct o14_float *)(a4))->v) = (float)(*(short *)((a5 + 0xA)));
    (((struct o18_float *)(a4))->v) = (float)(*(short *)((a5 + 0xC)));
    return 0x18;
}


int FUN_0c03c660(int a4)
{
    register int t0;

    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct oF0_ushort *)(a4))->v) = 0x4;
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x7) {
            (((struct oF2_ushort *)(a4))->v) = 0x0;
        }
        t0 = *(signed char *)((a4 + 0x3));
        return FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), ((*(signed char *)((a4 + 0xF2))) + 0x26));
    }
    return 0xF0;
}

int FUN_0c03d010(int a4)
{
    register int t0;

    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct oF0_ushort *)(a4))->v) = 0x4;
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x7) {
            (((struct oF2_ushort *)(a4))->v) = 0x0;
        }
        t0 = *(signed char *)((a4 + 0x3));
        return FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), ((*(signed char *)((a4 + 0xF2))) + 0x26));
    }
    return 0xF0;
}

int FUN_0c04c078(int a4)
{
    register float u0;
    register float u1;
    register int t2;
    register float u3;
    register float u4;
    register float u7;

    u0 = (((struct o20_float *)(a4))->v);
    u1 = (((struct o28_float *)(a4))->v);
    t2 = *(signed char *)0xC3673EE;
    u3 = (((struct o50_float *)(((short)((short)(unsigned char)t2 * (short)0x254) + 0xC366F40)))->v);
    u4 = (((struct o58_float *)(((short)((short)(unsigned char)t2 * (short)0x254) + 0xC366F40)))->v);
    u7 = ((u1 - u4) * (u1 - u4));
    u7 = u7 + ((u0 - u3)) * ((u0 - u3));
    return (int)(FUN_0c0df340(u7));
}

int FUN_0c04cafe(int a4)
{
    register int t0;
    register int t8;
    register int t9;
    register int t10;
    register int t11;

    t0 = 0x0;
    for (;;) {
        if ((int)(signed char)t0 >= (int)(*(signed char *)((a4 + 0x2A8)))) {
            return 0x0;
        }
        if (((*(int *)((((0x294 + a4) + ((signed char)t0 << 2)) + 0x0))) != 0) && ((t8 = *(int *)((((signed char)t0 << 2) + (0x294 + a4))), t9 = *(signed char *)((t8 + 0x2)), t9 == 2) && ((t10 = *(int *)((((0x294 + a4) + ((signed char)t0 << 2)) + 0x0)), t11 = *(signed char *)((t10 + 0x4)), t11 == 8) || (t11 == 16)))) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return (*(int *)((((signed char)t0 << 2) + (0x294 + a4))));
}

int FUN_0c05012e(int a4)
{
    register float u0;
    register float u1;
    register int t2;
    register float u3;
    register float u4;
    register float u7;

    u0 = (((struct o20_float *)(a4))->v);
    u1 = (((struct o28_float *)(a4))->v);
    t2 = *(signed char *)0xC3673EE;
    u3 = (((struct o60_float *)(((short)((short)(unsigned char)t2 * (short)0x254) + 0xC366F40)))->v);
    u4 = (((struct o68_float *)(((short)((short)(unsigned char)t2 * (short)0x254) + 0xC366F40)))->v);
    u7 = ((u1 - u4) * (u1 - u4));
    u7 = u7 + ((u0 - u3)) * ((u0 - u3));
    return (int)(FUN_0c0df340(u7));
}

int FUN_0c098b44(int a4)
{
    register int t0;
    int t2;

    t0 = FUN_0c09d89c(a4);
    if ((signed char)t0 == 0) {
        t2 = *(signed char *)((a4 + 0x720A));
        if (t2 != 0) {
            if (t2 != 1) {
                if (t2 != 2) {
                    if ((t2 != 3) && (t2 != 4)) {
                        return t2;
                    }
                    return FUN_0c0989d0(a4);
                }
                return FUN_0c098884(a4);
            }
            return FUN_0c0986bc(a4);
        }
        return FUN_0c098160(a4);
    }
    return (signed char)t0;
}

int FUN_0c0c209c(int a4)
{
    register int t0;

    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct oF0_ushort *)(a4))->v) = 0x4;
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x7) {
            (((struct oF2_ushort *)(a4))->v) = 0x0;
        }
        t0 = *(signed char *)((a4 + 0x3));
        return FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), ((*(signed char *)((a4 + 0xF2))) + 0x1));
    }
    return 0xF0;
}

int FUN_0c0c20ee(int a4)
{
    register int t0;

    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct oF0_ushort *)(a4))->v) = 0x3;
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x7) {
            (((struct oF2_ushort *)(a4))->v) = 0x0;
        }
        t0 = *(signed char *)((a4 + 0x3));
        return FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), ((*(signed char *)((a4 + 0xF2))) + 0x1));
    }
    return 0xF0;
}

int FUN_0c0c264a(int a4)
{
    register int t0;

    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct oF0_ushort *)(a4))->v) = 0x3;
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x7) {
            (((struct oF2_ushort *)(a4))->v) = 0x0;
        }
        t0 = *(signed char *)((a4 + 0x3));
        return FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), ((*(signed char *)((a4 + 0xF2))) + 0x1));
    }
    return 0xF0;
}

int FUN_0c0e6afc(int a4, int a5)
{
    int stk[3];
    register int t0;
    register int t3;

    *(unsigned short *)(((((int)stk + 0) + 0x2) + 0x0)) = a4;
    *(unsigned short *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)(((int)stk + 2));
    t3 = *(short *)((0xC7FD110 + (unsigned char)((((t0 << 1) + t0) << 2) << 1)));
    if (t3 != 1) {
        return t3;
    }
    return (FUN_0c0e5d22((((((*(short *)(((int)stk + 0))) + 0x40) << 16) | ((((*(short *)(((int)stk + 2))) << 8) << 2) << 2)) | 0x8A1)));
}

int FUN_0c0e6b60(int a4, int a5)
{
    int stk[3];
    register int t0;
    register int t3;

    *(unsigned short *)(((((int)stk + 0) + 0x2) + 0x0)) = a4;
    *(unsigned short *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)(((int)stk + 2));
    t3 = *(short *)((0xC7FD110 + (unsigned char)((((t0 << 1) + t0) << 2) << 1)));
    if (t3 != 1) {
        return t3;
    }
    return (FUN_0c0e5d22((((((*(short *)(((int)stk + 0))) + 0x40) << 16) | ((((*(short *)(((int)stk + 2))) << 8) << 2) << 2)) | 0x9A1)));
}

int FUN_0c104308(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x30));
    if ((int)(t0 - 1) >= (int)a5) {
        t1 = (t0 - 1);
        for (;;) {
            t0 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0xC)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x24))), (t1 << 1), a6, a7);
            if ((unsigned short)t0 == 0xFFFC) {
                break;
            }
            t1 = (t1 - 1);
            if ((int)t1 < (int)a5) {
                return 0xFFFFFFFF;
            }
        }
        t0 = t1;
    } else {
        t0 = 0xFFFFFFFF;
    }
    return t0;
}

int FUN_0c1071b4(int a4)
{
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    *(unsigned char *)((a4 + 0x4)) = 0x0;
    *(unsigned char *)((a4 + 0x5)) = 0x0;
    *(unsigned char *)((a4 + 0x6)) = 0x0;
    *(unsigned int *)((a4 + 0x3C)) = 0x0;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = 0xAC44;
    *(unsigned int *)((a4 + 0x8)) = 0x10;
    (((struct o48_uint *)(a4))->v) = 0x2000;
    (((struct o4C_uint *)(a4))->v) = 0x2000;
    (((struct o50_uint *)(a4))->v) = 0x0;
    (((struct o60_uint *)(a4))->v) = 0x0;
    (((struct o6C_uint *)(a4))->v) = 0x0;
    (((struct o70_uint *)(a4))->v) = 0x0;
    (((struct o74_uint *)(a4))->v) = 0x0;
    (((struct o78_uint *)(a4))->v) = 0x0;
    (((struct o7C_uint *)(a4))->v) = 0x0;
    (((struct o80_uint *)(a4))->v) = 0x0;
    *(unsigned char *)((a4 + 0x7)) = 0x0;
    (((struct o88_uint *)(a4))->v) = 0x0;
    return 0x88;
}

int FUN_0c011554(void)
{
    int stk[24];
    register int t1;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t3;

    if ((*(int *)0xC351A88) != 0xF8) {
        return 0xFFFFFF41;
    }
    t1 = FUN_0c0f3d20(((int)stk + 0), 0xC351A40);
    if ((t1 == 0) && (t6 = *(int *)(((int)stk + 88)), t3 = *(int *)(((int)stk + 92)), (int)t3 > 0)) {
        t4 = 0xC351948;
        t5 = 0x0;
        for (;;) {
            t7 = *(signed char *)((t6 + 0x0));
            t6 = (t6 + 0x1);
            t5 = (t5 + 0x1);
            *(unsigned char *)((t4 + 0x0)) = t7;
            t4 = (t4 + 0x1);
            if ((int)t5 >= (int)t3) {
                break;
            }
        }
    }
    return t1;
}

int FUN_0c03d19a(int a4)
{
    register int t0;

    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct oF0_ushort *)(a4))->v) = 0x4;
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x7) {
            (((struct oF2_ushort *)(a4))->v) = 0x0;
        }
        t0 = *(signed char *)((a4 + 0x3));
        return FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), ((((struct oF2_short *)(a4))->v)));
    }
    return 0xF0;
}

int FUN_0c055566(int a4)
{
    int t0;
    register int t1;
    register int t2;

    t2 = *(signed char *)((a4 + 0x720F));
    (((struct o720F_uchar *)(a4))->v) = (t2 - 1);
    if (((int)(unsigned char)(t2 - 1) <= 0) && (t0 = (((struct o71D4_short *)(a4))->v), t1 = (((struct o71D6_short *)(a4))->v), (int)(t0 + 0x1) < (int)(t1 + 0x1))) {
        (((struct o71D4_ushort *)(a4))->v) = (((((struct o71D4_short *)(a4))->v)) + 0x1);
        (((struct o720F_uchar *)(a4))->v) = 0x28;
    }
    t0 = *(int *)0xC7F307C;
    t1 = t0;
    if ((t0 & 1) == 0) {
        t0 = 0x71D6;
        if ((int)(((((struct o71D8_short *)(a4))->v)) + 0x1) > (int)(((((struct o71D6_short *)(a4))->v)) + 0x1)) {
            (((struct o71D8_ushort *)(a4))->v) = (((((struct o71D8_short *)(a4))->v)) - 1);
            t0 = 0x71D8;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c09c7be(int a4, int a5)
{
    int t0;
    int t1;
    int t2;

    if (((((((struct o2E4_int *)(a4))->v)) & 0x6C4) != 0) && (t0 = *(signed char *)((a5 + 0x0)), t0 != 0)) {
        *(unsigned char *)((a5 + 0x0)) = ((*(signed char *)((a5 + 0x0))) - 1);
    }
    if (((((((struct o2E4_int *)(a4))->v)) & 48) != 0) && (t1 = *(signed char *)((a5 + 0x0)), (int)(unsigned char)t1 > (int)0x1)) {
        *(unsigned char *)((a5 + 0x0)) = ((*(signed char *)((a5 + 0x0))) - 2);
    }
    t0 = 0x2DC;
    if ((((((struct o2DC_int *)(a4))->v)) & 0xF0) == 0) {
        if (((((((struct o2E8_int *)(a4))->v)) & 0xF0) != 0) && (t2 = *(signed char *)((a5 + 0x0)), t2 != 0)) {
            *(unsigned char *)((a5 + 0x0)) = ((*(signed char *)((a5 + 0x0))) - 1);
        }
        t0 = 0x2E8;
    }
    return t0;
}

int FUN_0c09d89c(int a4)
{
    if ((*(signed char *)((a4 + 0x10B))) != 0) {
        (((struct o10B_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x10B))) - 1);
        (((struct o7200_uint *)(a4))->v) = (((((struct o7200_int *)(a4))->v)) | ((((struct o2E4_int *)(a4))->v)));
        if ((*(signed char *)((a4 + 0x71F1))) != 0) {
            if ((*(signed char *)((a4 + 0x71BA))) != 10) {
                if ((*(signed char *)((a4 + 0x71BA))) != 11) {
                    FUN_0c08e57e(a4);
                }
            }
        }
        return 0x1;
    }
    (((struct o7200_uint *)(a4))->v) = ((((struct o2E4_int *)(a4))->v));
    return 0x0;
}

int FUN_0c0d71fa(void)
{
    register int t0;
    register int t1;

    *(unsigned char *)0xC7F3071 = 0x0;
    t0 = *(int *)0xC494B08;
    if (t0 != 1) {
        if (t0 != 2) {
            t0 = 0x0;
            if ((*(signed char *)0xC7F2F17) != 0) {
            } else {
                FUN_0c0d7032(0x0, 0x0);
                t0 = 0x1;
            }
            t1 = (FUN_0c0d7032(t0, 0x0));
        } else {
            t1 = (FUN_0c0d7032(0x1, 0x0));
        }
        t0 = t1;
    } else {
        t0 = (FUN_0c0d7032(0x0, 0x0));
    }
    return t0;
}

int FUN_0c0d8f10(int a4, int a5, int a6)
{
    (((struct o0_uchar *)0xC7F29FA)->v) = a4;
    (((struct o3_uchar *)0xC7F29FA)->v) = 0x0;
    (((struct o2_uchar *)0xC7F29FA)->v) = 0x0;
    (((struct o1_uchar *)0xC7F29FA)->v) = 0x0;
    (((struct o4_uchar *)0xC7F29FA)->v) = 0x0;
    *(unsigned char *)0xC7F2AA4 = a6;
    (((struct o0_uchar *)0xC7F2B7C)->v) = a5;
    (((struct o1C_uint *)0xC7F2B7C)->v) = (((unsigned short)((unsigned short)(signed char)a5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20);
    (((struct o20_uint *)0xC7F2B7C)->v) = (((unsigned short)((unsigned short)((((signed char)a5 == 0)) ? 1 : 0) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20);
    return 0x1A4;
}

int FUN_0c0fcfa0(int a4)
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
    t2 = (t1 * t0);
    if (((*(int *)((a4 + 0x18))) & 0x1) != 0) {
        t3 = ((unsigned int)t0 >> 1);
        if ((unsigned int)((unsigned int)t1 >> 1) < (unsigned int)((unsigned int)t0 >> 1)) {
            t3 = ((unsigned int)t1 >> 1);
        }
        t4 = ((unsigned int)t0 >> 1);
        t5 = ((unsigned int)t1 >> 1);
        t6 = (t1 * t0);
        if ((unsigned int)t3 > (unsigned int)0x1) {
            t7 = t3;
            t3 = ((unsigned int)t0 >> 1);
            t8 = ((unsigned int)t1 >> 1);
            t9 = (t1 * t0);
            for (;;) {
                t0 = (t8 * t3);
                t8 = ((unsigned int)t8 >> 1);
                t3 = ((unsigned int)t3 >> 1);
                t7 = ((unsigned int)t7 >> 1);
                t9 = (t9 + t0);
                if ((unsigned int)t7 <= (unsigned int)0x1) {
                    break;
                }
            }
            t4 = t3;
            t5 = t8;
            t6 = t9;
        }
        t0 = (t6 + (t5 * t4));
        if (t5 == t4) {
            t0 = (t6 + 0x4);
        }
        t2 = t0;
    }
    t0 = (t2 << 2);
    if ((*(int *)((a4 + 0x4))) == 1) {
        t0 = (t2 << 1);
    }
    return t0;
}
