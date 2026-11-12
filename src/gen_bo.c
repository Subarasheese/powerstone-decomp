/* Straight-line functions with calls and guards (batch gen_bo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o208_int { char p[0x208]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3E_short { char p[0x3E]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o46_uchar { char p[0x46]; unsigned char v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6C_int { char p[0x6C]; int v; };
struct o70_int { char p[0x70]; int v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o71DD_uchar { char p[0x71DD]; unsigned char v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o7206_uchar { char p[0x7206]; unsigned char v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_int { char p[0xEC]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_uint { char p[0xEC]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int ADXB_ExecHndl(int);
int ADXB_GetStat(int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXPD_ExecHndl(int);
int ADXSJD_Start(int);
int FUN_0c01ae08(int);
int FUN_0c01b4c0(int);
int FUN_0c01b4d6(int);
int FUN_0c01e798(void);
int FUN_0c01e860(int, int, int, int, int, int, int, int, int, int);
extern int FUN_0c01e970();
int FUN_0c020f76(int, int, int);
int FUN_0c022952(int, int, int, int);
int FUN_0c022c1a(int, int, int);
int FUN_0c027b90(void);
int FUN_0c0283c4(int, int);
int FUN_0c02bb32(float);
int FUN_0c02d9e0(int, int, float, float, float, float);
int FUN_0c0408d0(int);
int FUN_0c040938(int);
int FUN_0c046830(int, int, int, int, int, int, int, int);
int FUN_0c04cdf2(void);
int FUN_0c052aac(void);
int FUN_0c052b9e(void);
int FUN_0c0537fe(int);
int FUN_0c053b62(void);
int FUN_0c0555dc(void);
int FUN_0c058f4e(void);
int FUN_0c059330(int);
int FUN_0c0593e0(int);
int FUN_0c05948c(int);
extern float FUN_0c0620a4();
float FUN_0c0622a2(int, float);
float FUN_0c0622ae(int);
float FUN_0c0622ba(int, float);
int FUN_0c06231c(int, int, int);
int FUN_0c06b5b2(int);
int FUN_0c07051c(int, int, int, int);
int FUN_0c070b46(int, int, int, int, float, float, float);
int FUN_0c071286(int);
int FUN_0c0715ac(int);
int FUN_0c0852a6(int, int);
int FUN_0c085606(int);
int FUN_0c086f2e(int);
int FUN_0c086fa0(int);
int FUN_0c087060(int);
int FUN_0c087360(int);
int FUN_0c08d334(int);
int FUN_0c08deec(int, int);
int FUN_0c08eba8(int, int);
int FUN_0c08f000(int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09a91a(int);
int FUN_0c09d89c(int);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09d9e8(int);
int FUN_0c09da1c(int);
int FUN_0c09db78(int);
int FUN_0c09e7b8(int);
int FUN_0c09e89a(int, int, int);
int FUN_0c0a2080(int);
int FUN_0c0a2e26(int, int, int);
int FUN_0c0abe44(int, int, int);
int FUN_0c0addb0(int);
int FUN_0c0addde(int);
int FUN_0c0ae288(int);
int FUN_0c0ae39a(int);
int FUN_0c0ae5a6(void);
int FUN_0c0c1b64(int, int);
int FUN_0c0d8fb0(int, int, int, int);
int FUN_0c0dc18e(int);
int FUN_0c0ddd70(int);
float FUN_0c0dfa50(int);
float FUN_0c0dfce0(int);
int FUN_0c0e34a0(float);
int FUN_0c0eb0c0(int, int, int);
int FUN_0c0f4938(int, int);
int FUN_0c0f4c2c(int, int, int, int);
int FUN_0c0f5570(int);
int FUN_0c0f5898(int, int, int, int);
int FUN_0c0fcb8a(void);
int FUN_0c0fdda0(int, int, int);
int FUN_0c0ff7e4(void);
int FUN_0c105e8e(int, int);
int FUN_0c106048(int);
int FUN_0c106120(int);
int FUN_0c1070a0(int);
int FUN_0c1070b8(int);
int FUN_0c107482(int);
int FUN_0c107872(int, int);
int FUN_0c108474(void);
int FUN_0c10848c(int, int);
int FUN_0c1084b6(int, int);
int FUN_0c114d8a(int);
int FUN_0c1154dc(int, int);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_set_imask(int);
extern void _builtin_st_ext(float (*)[4]);
int adxf_CreateAdxFs(void);
int gdFsGetDrvStatG(int, int, int, int);
int gdFsReqDrvStatG(int);
int kdDevGetFD(int, int);
int kdSetGunTrigger(int);
int kmSetBorderColor(int, ...);
int kmiWriteRegister(int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, int, int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int syHwCacheFinish(void);
int vsprintf(int, int, int);
int FUN_0c1073ea(int a4, int a5, int a6, int a7);
float FUN_0c06215c(int a4, int a5, float f4);
int FUN_0c06511c(int a4);
int FUN_0c0854e4(int a4);
int FUN_0c0f4a94(int a4, int a5, int a6, int a7);
int FUN_0c01acfc(int a4);
int FUN_0c04ed2e(int a4);
int FUN_0c04ebd4(int a4);
int FUN_0c050f80(int a4);
int FUN_0c066d84(int a4);
int FUN_0c06f2ee(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c06f818(int a4);
int FUN_0c08552a(int a4);
int FUN_0c0872e6(int a4);
int FUN_0c0ae72c(int a4, int a5, int a6, int a7);
int FUN_0c0d7e88(int a4, int a5, int a6, int a7);
int FUN_0c0d7cd8(int a4, int a5, int a6, int a7);
int adxf_SetAfsFileInfo(int a4, int a5, int a6);
int FUN_0c11550a(int a4, int a5);
int FUN_0c068c76(int a4);
int FUN_0c0668a0(int a4);
int FUN_0c091cc2(int a4);
int FUN_0c094260(int a4, int a5, int a6);
int FUN_0c094a58(int a4);
int FUN_0c01ac0e(int a4);
int FUN_0c01b206(int a4);
int FUN_0c04ea48(void);
int FUN_0c052dfe(int a4, int a5, int a6, int a7);
int FUN_0c06518c(int a4);
int FUN_0c064cc8(int a4);
float FUN_0c0df570(int a4);
float nlMultiMatrixRevOrder(int a4);
int FUN_0c0f4e5c(int a4, int a5, int a6, int a7);
int FUN_0c10860c(int a4, int a5, int a6, int a7);
int FUN_0c0537c0(void);
int FUN_0c06f4f0(int a4);
int FUN_0c085458(int a4);
int FUN_0c094950(int a4, int a5, int a6, int a7);
int FUN_0c0ddc30(void);
void kmiDefaultFatalErrorCallback(int a4);
int FUN_0c0f4ada(int a4, int a5, int a6, int a7);
int FUN_0c0f54fc(int a4, int a5);
int FUN_0c108252(int a4, int a5, int a6, int a7);
int FUN_0c01b82e(int a4);
int FUN_0c0975c8(int a4);
int FUN_0c0b0da0(int a4, int a5, int a6, int a7);
int FUN_0c0ade42(int a4);
void syHwFinish(void);
int vmsfs_dpf(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c0283f0(int a4);
int FUN_0c07c3ea(int a4, int a5, int a6, int a7);
int FUN_0c0836ee(int a4);
int FUN_0c08f3b8(int a4);
int FUN_0c08d594(int a4, int a5, int a6, int a7);
int FUN_0c0873d0(int a4, int a5, int a6, int a7);
int kmSetAlphaThreshold(int a4);
int kdDevGetTimerInfo(int a4, int a5);
int FUN_0c10624c(int a4);
int FUN_0c027c24(void);
int FUN_0c02cb8e(int a4, float f4);
int FUN_0c0634b4(int a4);
int FUN_0c089fca(int a4);
int FUN_0c08f418(int a4, int a5, int a6, int a7);
int FUN_0c0df650(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0f9cc8(int a4, int a5, int a6);
int FUN_0c108816(int a4, int a5, int a6, int a7);
int FUN_0c114da6(void);
int FUN_0c053d96(void);
int FUN_0c06469e(int a4);
int FUN_0c06e1bc(int a4);
int FUN_0c077e62(int a4);
int FUN_0c0869ce(int a4, int a5, int a6, int a7);
int FUN_0c0c1d0c(int a4);
int nlCalcPoints(int a4, int a5, int a6);
int nlCalcVectors(int a4, int a5, int a6);
int FUN_0c101cae(int a4);
int FUN_0c01a8c8(int a4);
int FUN_0c0234f0(int a4, int a5);
int FUN_0c040a42(int a4);
int FUN_0c054d80(void);
int FUN_0c07db30(int a4);
int FUN_0c07dbc4(int a4);
int FUN_0c0dab5e(int a4, int a5, int a6);
int FUN_0c0eadd0(int a4, int a5);
void gdFsEntryErrFuncAllG(int a4, int a5);
int FUN_0c0f27c4(int a4);
int gdFsIsTrayOpenG(int a4, int a5, int a6, int a7);
int FUN_0c06b5fe(int a4);
int FUN_0c06f52e(int a4);
int FUN_0c079ac2(int a4, int a5, int a6, int a7);
int FUN_0c085c22(int a4, int a5, int a6, int a7);
int FUN_0c089b1a(int a4, int a5, int a6, int a7);
int FUN_0c0916fa(int a4, int a5, int a6, int a7);
int FUN_0c0d4660(int a4);
int FUN_0c114a6c(void);
int FUN_0c115c2e(void);
int FUN_0c0533d6(int a4, int a5, int a6, int a7);
int FUN_0c090e3c(int a4, int a5, int a6, int a7);

int FUN_0c1073ea(int a4, int a5, int a6, int a7)
{
    int stk[1];

    if (a4 == 0) {
        return (mwRnaErrCallFunc(0xC15B31C, a5, a6, a7));
    }
    FUN_0c1070a0(((int)stk + 0));
    if ((*(signed char *)((a4 + 0x1))) != 0) {
        FUN_0c107482(a4);
    }
    *(unsigned char *)((a4 + 0x1)) = 0x4;
    (((struct o48_uint *)(a4))->v) = ((((struct o4C_int *)(a4))->v));
    FUN_0c107872(a4, 0x1);
    return (FUN_0c1070b8(((int)stk + 0)));
}

float FUN_0c06215c(int a4, int a5, float f4)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = ((float (*)(int, float))(FUN_0c0620a4))(a4, f4);
    u1 = ((float (*)(int))(FUN_0c0620a4))(a5);
    u2 = (u0 * u1);
    if ((u0 * u1) == 0.0f) {
        u2 = (*(float *)0xC062300);
    }
    u0 = (((((struct o4_float *)(a4))->v)) * ((((struct o4_float *)(a5))->v)));
    u0 = u0 + (*(float *)((a5 + 0x0))) * (*(float *)((a4 + 0x0)));
    u1 = u0;
    u1 = u1 + ((((struct o8_float *)(a5))->v)) * ((((struct o8_float *)(a4))->v));
    return (u1 / u2);
}

int FUN_0c06511c(int a4)
{
    register int t2;

    FUN_0c09a910(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t2 = FUN_0c09e7b8(a4);
        if ((signed char)t2 != 0) {
            FUN_0c0dc18e(0xA);
            (((struct o71BC_uchar *)(a4))->v) = 0x3;
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        }
    }
    FUN_0c09d990(a4);
    return FUN_0c09d9bc(a4);
}

int FUN_0c0854e4(int a4)
{
    FUN_0c09a910(a4);
    FUN_0c09da1c(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        FUN_0c09a808(a4, 0x1, 0x69);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
    }
    FUN_0c0852a6(a4, 0x0);
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    return 0xEC;
}

int FUN_0c0f4a94(int a4, int a5, int a6, int a7)
{
    register int t2;

    FUN_0c0f4c2c(a4, a5, a6, a7);
    ADXCRS_Lock();
    t2 = FUN_0c1084b6(a5, 0x40000000);
    if (t2 == 0) {
        ADXCRS_Unlock();
        ADXERR_CallErrFunc(0xC15A88C);
    } else {
        FUN_0c0f4938(a4, t2);
        *(unsigned char *)((a4 + 0x2)) = 0x2;
    }
    return ADXCRS_Unlock();
}

int FUN_0c01acfc(int a4)
{
    register int t6;

    FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), 0xC664AC0, (*(signed char *)((((*(signed char *)0xC36233F) + (*(int *)((((*(signed char *)0xC36233E) << 2) + 0xC180018)))) + 0x0))));
    t6 = FUN_0c01ae08(a4);
    if ((signed char)t6 != 0) {
        return FUN_0c059330(a4);
    }
    return (signed char)t6;
}

int FUN_0c04ed2e(int a4)
{
    (((struct o26_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = (*(signed char *)((a4 + 0x71BA)));
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    FUN_0c04cdf2();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return 0x1;
}

int FUN_0c04ebd4(int a4)
{
    (((struct o26_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = (*(signed char *)((a4 + 0x7230)));
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    FUN_0c04cdf2();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return 0x1;
}

int FUN_0c050f80(int a4)
{
    register int t5;

    if ((int)(unsigned char)(*(signed char *)((a4 + 0x7206))) > (int)(*(signed char *)((a4 + 0x7234)))) {
        *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
        t5 = FUN_0c04cdf2();
        (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    } else {
        (((struct o4_ushort *)0xC3673E8)->v) = 0x0;
        t5 = 0x7234;
    }
    return t5;
}

int FUN_0c066d84(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        (((struct oEE_ushort *)(a4))->v) = 0x6;
        t0 = *(signed char *)((a4 + 0xC));
        *(unsigned char *)((a4 + 0xC)) = (t0 + 0x1);
        return (t0 + 0x1);
    }
    t0 = (((struct o719E_short *)(a4))->v);
    if ((unsigned short)t0 == 18) {
        return FUN_0c0abe44(((((struct o71CC_int *)(a4))->v)), 0xD, (*(signed char *)((a4 + 0x3))));
    }
    return (unsigned short)t0;
}

int FUN_0c06f2ee(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x7223));
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    if (t0 != 5) {
                        if (t0 != 6) {
                            if (t0 != 7) {
                                if (t0 != 8) {
                                    return t0;
                                }
                                return FUN_0c07051c(a4, a5, a6, a7);
                            }
                            return FUN_0c071286(a4);
                        }
                        return FUN_0c07051c(a4, a5, a6, a7);
                    }
                    return FUN_0c071286(a4);
                }
                return FUN_0c0715ac(a4);
            }
            return FUN_0c070b46(a4, a5, a6, a7, f4, f5, f6);
        }
        return FUN_0c0715ac(a4);
    }
    return FUN_0c070b46(a4, a5, a6, a7, f4, f5, f6);
}

int FUN_0c06f818(int a4)
{
    register int t0;
    register int t1;

    FUN_0c09d990(a4);
    FUN_0c09d9bc(a4);
    FUN_0c09a910(a4);
    t0 = 0x3C;
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t1 = FUN_0c09e7b8(a4);
        t0 = (signed char)t1;
        if ((signed char)t1 != 0) {
            FUN_0c09a808(a4, 0x1, 0x6C);
            t1 = *(signed char *)((a4 + 0xB));
            *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
    }
    return t0;
}

int FUN_0c08552a(int a4)
{
    register int t3;
    register int t6;

    FUN_0c09a910(a4);
    FUN_0c09da1c(a4);
    FUN_0c0852a6(a4, 0x0);
    t3 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t3 - 1);
    t6 = 0xEC;
    if ((short)(t3 - 1) == 0) {
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        FUN_0c09a808(a4, 0x1, 0x6A);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t6 = 0x71A8;
    }
    return t6;
}

int FUN_0c0872e6(int a4)
{
    register int t3;

    FUN_0c09a910(a4);
    FUN_0c085606(a4);
    FUN_0c09da1c(a4);
    t3 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t3 - 1);
    if ((short)(t3 - 1) == 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        FUN_0c08eba8(a4, 0x31);
        return FUN_0c08deec(a4, 0x31);
    }
    return 0xEC;
}

int FUN_0c0ae72c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x30D));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 18) {
                                return t0;
                            }
                            return FUN_0c0ae39a(a4);
                        }
                        return FUN_0c0ae288(a4);
                    }
                    return ((int (*)(int, int, int, int))(0xC0AE712))(a4, a5, a6, a7);
                }
                return FUN_0c0ae5a6();
            }
            return ((int (*)(int, int, int, int))(0xC0AE4D6))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0AE490))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0AE25C))(a4, a5, a6, a7);
}

int FUN_0c0d7e88(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC7F4726;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = ((int (*)(int, int, int, int))(FUN_0c01e970))(0xC7F4726, a5, a6, a7);
    } else {
        *(unsigned char *)0xC7F4726 = ((*(signed char *)0xC7F4726) + 0x1);
        FUN_0c058f4e();
        FUN_0c02bb32((*(float *)0xC0D7F10));
        FUN_0c01e798();
        t0 = ((int (*)(void))(FUN_0c01e970))();
    }
    FUN_0c05948c(0x5);
    return FUN_0c0593e0(0x5);
}

int FUN_0c0d7cd8(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t0;

    t0 = *(signed char *)0xC7F4726;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        FUN_0c01e860(0xC7F4726, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20));
    } else {
        *(unsigned char *)0xC7F4726 = ((*(signed char *)0xC7F4726) + 0x1);
        FUN_0c058f4e();
        FUN_0c02bb32(0.5f);
        FUN_0c01e798();
        FUN_0c01e860(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20));
    }
    FUN_0c05948c(0x5);
    return FUN_0c0593e0(0x5);
}

int adxf_SetAfsFileInfo(int a4, int a5, int a6)
{
    int stk[5];
    register int t2;

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    t2 = FUN_0c0f5898((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), (((int)stk + 0) + 0x4), ((int)stk + 0));
    if ((int)t2 < 0) {
        return 0xFFFFFFFD;
    }
    *(unsigned int *)((a4 + 0xC)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)((a4 + 0x10)) = (*(int *)(((int)stk + 0)));
    *(unsigned int *)((a4 + 0x14)) = ((((*(int *)(((int)stk + 0))) << 8) << 2) << 1);
    return 0x0;
}

int FUN_0c11550a(int a4, int a5)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t0;
    int t9;
    register int t10;
    register int t15;
    register int t16;

    t1 = a4;
    t2 = a5;
    t3 = 0x0;
    t4 = (0x210 + a4);
    for (;;) {
        if ((int)t3 >= (int)((((struct o208_int *)(a4))->v))) {
            break;
        }
        t0 = (*(int *)((t4 + 0xC)));
        if ((t0 != 0) && (t9 = *(int *)((t4 + 0x10)), t10 = (t0 == 0), t0 = a5, (int)t9 <= (int)t0)) {
            t2 = t3;
            t1 = a4;
            FUN_0c1154dc(t1, t2);
        } else {
            t15 = t1;
            t16 = t2;
        }
        t0 = 0x124;
        t1 = t15;
        t2 = t16;
        t3 = (t3 + 0x1);
        t4 = (t4 + t0);
    }
    return 0x208;
}

int FUN_0c068c76(int a4)
{
    register int t6;

    if ((*(signed char *)((a4 + 0xB))) != 0) {
        FUN_0c09a808(a4, 0x3, 0x0);
        (((struct o710B_uchar *)(a4))->v) = 0x2;
        (((struct o710C_uchar *)(a4))->v) = 0x2;
    } else {
        FUN_0c09a808(a4, 0x3, 0x1);
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t6 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t6 + 0x1);
    return (t6 + 0x1);
}

int FUN_0c0668a0(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 == 0) {
        if (!(((((struct o3C_float *)(a4))->v)) > 0.0f)) {
            t0 = FUN_0c09e7b8(a4);
            if ((signed char)t0 != 0) {
                return FUN_0c0a2080(a4);
            }
        }
        FUN_0c09d990(a4);
        return FUN_0c09d9bc(a4);
    }
    return FUN_0c0a2080(a4);
}

int FUN_0c091cc2(int a4)
{
    int t0;
    register int t1;
    register int t2;

    FUN_0c09a910(a4);
    (((struct o101_uchar *)(a4))->v) = 0x0;
    (((struct o102_uchar *)(a4))->v) = 0xA;
    t2 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
    if (((short)(t2 - 1) != 0) && (t0 = *(int *)((a4 + 0x1C)), t1 = *(signed char *)((0x71BA + t0)), t1 == 11)) {
        t0 = t1;
    } else {
        (((struct o71DD_uchar *)(a4))->v) = 0x2;
        *(unsigned char *)((a4 + 0xC)) = 0x0;
        *(unsigned char *)((a4 + 0xB)) = 0x0;
        t0 = 0x0;
    }
    return t0;
}

int FUN_0c094260(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c09e89a(a4, a5, a6);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2e26(a4, 0x1F, 0x1);
    }
    FUN_0c09a910(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        return FUN_0c0a2080(a4);
    }
    return 0xEC;
}

int FUN_0c094a58(int a4)
{
    register int t4;

    FUN_0c09d9e8(a4);
    FUN_0c09d990(a4);
    FUN_0c09a910(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t4 = FUN_0c09e7b8(a4);
        if ((signed char)t4 != 0) {
            return FUN_0c0a2e26(a4, 0x6, 0x0);
        }
        return (signed char)t4;
    }
    return 0x3C;
}

int FUN_0c01ac0e(int a4)
{
    register int t6;

    (((struct o20_float *)(a4))->v) = (*(float *)((0xC11BF1C + (((*(signed char *)0xC36233F) << 1) << 2))));
    (((struct o24_float *)(a4))->v) = ((((struct o4_float *)((0xC11BF1C + (((*(signed char *)0xC36233F) << 1) << 2))))->v));
    t6 = FUN_0c01ae08(a4);
    if ((signed char)t6 != 0) {
        return FUN_0c059330(a4);
    }
    return (signed char)t6;
}

int FUN_0c01b206(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c01b4d6((*(signed char *)0xC362350));
    t1 = 0x19;
    if ((short)t0 != 0) {
        t1 = ((*(signed char *)0xC362350) + 0xE);
    }
    FUN_0c06231c(((((struct o2E4_int *)(a4))->v)), 0xC664AC0, t1);
    t0 = FUN_0c01b4c0(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c059330(a4);
    }
    return (signed char)t0;
}

int FUN_0c04ea48(void)
{
    register int t3;

    *(unsigned short *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0x18)) = 0x0;
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t3 = FUN_0c04cdf2();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t3;
}

int FUN_0c052dfe(int a4, int a5, int a6, int a7)
{
    register int t5;

    if ((*(signed char *)0xC7F302D) == 0) {
        (((struct o1_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302D) + 0x1);
        FUN_0c052aac();
        FUN_0c052b9e();
    } else {
        t5 = 0xC7F302D;
    }
    if ((*(signed char *)0xC7F2F03) != 0) {
        return ((int (*)(int, int, int, int))(0xC052DA0))(t5, a5, a6, a7);
    }
    (((struct o0_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302C) + 0x1);
    (((struct o3_uchar *)0xC7F302C)->v) = 0x0;
    (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
    (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
    return 0x0;
}

int FUN_0c06518c(int a4)
{
    register int t2;

    FUN_0c09a910(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t2 = FUN_0c09e7b8(a4);
        if ((signed char)t2 != 0) {
            return FUN_0c0a2e26(a4, 0x6, 0x0);
        }
    }
    FUN_0c09d990(a4);
    return FUN_0c09d9bc(a4);
}

int FUN_0c064cc8(int a4)
{
    register int t2;

    FUN_0c09a910(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t2 = FUN_0c09e7b8(a4);
        if ((signed char)t2 != 0) {
            return FUN_0c0a2e26(a4, 0x6, 0x0);
        }
    }
    FUN_0c09d990(a4);
    return FUN_0c09d9bc(a4);
}

float FUN_0c0df570(int a4)
{
    register float t0;

    if ((unsigned short)a4 != 0) {
        if ((unsigned short)a4 != 0x4000) {
            if ((unsigned short)a4 == 0x8000) {
                return 3.40282347e+38f;
            }
            if ((unsigned short)a4 == 0xC000) {
                return 0.0f;
            }
            t0 = FUN_0c0dfce0((unsigned short)a4);
            return (1.0f / t0);
        }
        return 0.0f;
    }
    return 3.40282347e+38f;
}

float nlMultiMatrixRevOrder(int a4)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    float u16[16];
    float u17[4];
    float u18[16];
    float u19[16];
    float u20[4];
    float u21[16];
    float u22[4];
    float u23[16];
    float u24[4];
    float u25[16];

    u0 = *(float *)((a4 + 0x0));
    u1 = (((struct o4_float *)(a4))->v);
    u2 = (((struct o4_float *)((a4 + 0x4)))->v);
    u3 = (((struct o4_float *)(((a4 + 0x4) + 0x4)))->v);
    u4 = (((struct o4_float *)((((a4 + 0x4) + 0x4) + 0x4)))->v);
    u5 = (((struct o4_float *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u6 = (((struct o4_float *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u7 = (((struct o4_float *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u8 = (((struct o4_float *)((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u9 = (((struct o4_float *)(((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u10 = (((struct o4_float *)((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u11 = (((struct o4_float *)(((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u12 = (((struct o4_float *)((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u13 = (((struct o4_float *)(((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u14 = (((struct o4_float *)((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u15 = (((struct o4_float *)(((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u16[0] = u0;
    u16[1] = u1;
    u16[2] = u2;
    u16[3] = u3;
    u16[4] = u4;
    u16[5] = u5;
    u16[6] = u6;
    u16[7] = u7;
    u16[8] = u8;
    u16[9] = u9;
    u16[10] = u10;
    u16[11] = u11;
    u16[12] = u12;
    u16[13] = u13;
    u16[14] = u14;
    u16[15] = u15;
    _builtin_st_ext((float (*)[4])u18);
    u17[0] = u18[0];
    u17[1] = u18[1];
    u17[2] = u18[2];
    u17[3] = u18[3];
    _builtin_ld_ext((float (*)[4])u16);
    _builtin_ftrv(u17, u17);
    u19[0] = u0;
    u19[1] = u1;
    u19[2] = u2;
    u19[3] = u3;
    u19[4] = u4;
    u19[5] = u5;
    u19[6] = u6;
    u19[7] = u7;
    u19[8] = u8;
    u19[9] = u9;
    u19[10] = u10;
    u19[11] = u11;
    u19[12] = u12;
    u19[13] = u13;
    u19[14] = u14;
    u19[15] = u15;
    u20[0] = u18[4];
    u20[1] = u18[5];
    u20[2] = u18[6];
    u20[3] = u18[7];
    _builtin_ld_ext((float (*)[4])u19);
    _builtin_ftrv(u20, u20);
    u21[0] = u0;
    u21[1] = u1;
    u21[2] = u2;
    u21[3] = u3;
    u21[4] = u4;
    u21[5] = u5;
    u21[6] = u6;
    u21[7] = u7;
    u21[8] = u8;
    u21[9] = u9;
    u21[10] = u10;
    u21[11] = u11;
    u21[12] = u12;
    u21[13] = u13;
    u21[14] = u14;
    u21[15] = u15;
    u22[0] = u18[8];
    u22[1] = u18[9];
    u22[2] = u18[10];
    u22[3] = u18[11];
    _builtin_ld_ext((float (*)[4])u21);
    _builtin_ftrv(u22, u22);
    u23[0] = u0;
    u23[1] = u1;
    u23[2] = u2;
    u23[3] = u3;
    u23[4] = u4;
    u23[5] = u5;
    u23[6] = u6;
    u23[7] = u7;
    u23[8] = u8;
    u23[9] = u9;
    u23[10] = u10;
    u23[11] = u11;
    u23[12] = u12;
    u23[13] = u13;
    u23[14] = u14;
    u23[15] = u15;
    u24[0] = u18[12];
    u24[1] = u18[13];
    u24[2] = u18[14];
    u24[3] = u18[15];
    _builtin_ld_ext((float (*)[4])u23);
    _builtin_ftrv(u24, u24);
    _builtin_st_ext((float (*)[4])u25);
    u25[0] = u17[0];
    u25[1] = u17[1];
    u25[2] = u17[2];
    u25[3] = u17[3];
    u25[4] = u20[0];
    u25[5] = u20[1];
    u25[6] = u20[2];
    u25[7] = u20[3];
    u25[8] = u22[0];
    u25[9] = u22[1];
    u25[10] = u22[2];
    u25[11] = u22[3];
    u25[12] = u24[0];
    u25[13] = u24[1];
    u25[14] = u24[2];
    u25[15] = u24[3];
    _builtin_ld_ext((float (*)[4])u25);
    return u0;
}

int FUN_0c0f4e5c(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t4;

    if ((*(int *)((a4 + 0x14))) != 0) {
        t1 = *(int *)((a4 + 0x14));
        t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x1, a6, a7);
        if ((int)t4 >= (int)(((((((struct o3E_short *)(a4))->v)) << 8) << 2) << 1)) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c10860c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t4;

    t0 = FUN_0c108474();
    if ((a5 != 0) && (a5 != 1)) {
        *(unsigned int *)((a6 + 0x4)) = 0x0;
        *(unsigned int *)((a6 + 0x0)) = 0x0;
        if ((*(int *)((a4 + 0x1C))) != 0) {
            t4 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD, a6, a7);
        }
    }
    return FUN_0c10848c(a4, t0);
}

int FUN_0c0537c0(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t7;

    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x46));
        t2 = *(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x720E));
        t3 = ((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0);
        t4 = ((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4);
        t0 = (t0 + 0x1);
        t7 = 0x720E;
        if ((int)t1 < (int)t2) {
            (((struct o46_uchar *)(t3))->v) = (*(signed char *)((t4 + 0x720E)));
            t7 = 0x46;
        }
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    return t7;
}

int FUN_0c06f4f0(int a4)
{
    register int t6;
    register int t5;

    FUN_0c09a910(a4);
    FUN_0c09da1c(a4);
    t6 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        FUN_0c09a808(a4, 0x1, 0x63);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        t5 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t5 + 0x1);
        t6 = (t5 + 0x1);
    }
    return t6;
}

int FUN_0c085458(int a4)
{
    register int t1;
    register int t4;

    FUN_0c09a910(a4);
    t1 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
    t4 = 0xEC;
    if ((short)(t1 - 1) == 0) {
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        FUN_0c09a808(a4, 0x1, 0x68);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t4 = 0x71A8;
    }
    return t4;
}

int FUN_0c094950(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t1 = FUN_0c09d89c(a4);
    if ((signed char)t1 == 0) {
        if (((*(signed char *)((a4 + 0x7206))) == 0) && (t0 = *(signed char *)((a4 + 0x100)), t0 == 0)) {
        } else {
            (((struct o7206_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x7206))) + 0x1);
        }
        t0 = *(int *)((0xC3391AC + ((*(signed char *)((a4 + 0x4))) << 2)));
        return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
    }
    return (signed char)t1;
}

int FUN_0c0ddc30(void)
{
    register int t2;
    register int t3;
    register int t4;

    t4 = (((struct o0_int *)0xC7FC4F0)->v);
    t2 = (FUN_0c0fcb8a());
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)((((struct o4_int *)0xC7FC4F0)->v))) {
            break;
        }
        if ((*(int *)((t4 + 0x28))) == 0) {
            t2 = (FUN_0c0ddd70(t4));
        }
        t4 = (t4 + 0x3C);
        t3 = (t3 + 0x1);
    }
    return t2;
}

void kmiDefaultFatalErrorCallback(int a4)
{
    int stk[2];
    register int t1;
    register int t4;
    register int t7;
    register int t10;
    register int t13;

    if (a4 != 1) {
        if (a4 != 2) {
            if (a4 != 3) {
                if (a4 != 4) {
                    t1 = (*(int *)((((int)stk + 4) + 0x0)));
                    *(int *)((int)stk + 0) = t1;
                    kmSetBorderColor(t1);
                    for (;;) {
                    }
                }
                *(unsigned int *)((((int)stk + 4) + 0x0)) = 0xFFFF00FF;
                t4 = (*(int *)((((int)stk + 4) + 0x0)));
                *(int *)((int)stk + 0) = t4;
                kmSetBorderColor(t4);
                for (;;) {
                }
            }
            *(unsigned int *)((((int)stk + 4) + 0x0)) = 0xFF00FF00;
            t7 = (*(int *)((((int)stk + 4) + 0x0)));
            *(int *)((int)stk + 0) = t7;
            kmSetBorderColor(t7);
            for (;;) {
            }
        }
        *(unsigned int *)((((int)stk + 4) + 0x0)) = 0xFFFF0000;
        t10 = (*(int *)((((int)stk + 4) + 0x0)));
        *(int *)((int)stk + 0) = t10;
        kmSetBorderColor(t10);
        for (;;) {
        }
    }
    *(unsigned int *)((((int)stk + 4) + 0x0)) = 0xFF0000FF;
    t13 = (*(int *)((((int)stk + 4) + 0x0)));
    *(int *)((int)stk + 0) = t13;
    kmSetBorderColor(t13);
    for (;;) {
    }
}

int FUN_0c0f4ada(int a4, int a5, int a6, int a7)
{
    FUN_0c0f4c2c(a4, a5, a6, a7);
    ADXCRS_Lock();
    FUN_0c105e8e((*(int *)((a4 + 0x4))), a5);
    *(unsigned int *)((a4 + 0x14)) = a5;
    ADXSJD_Start((*(int *)((a4 + 0x4))));
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned char *)((a4 + 0x2)) = 0x3;
    (((struct o4C_uint *)(a4))->v) = 0x0;
    return ADXCRS_Unlock();
}

int FUN_0c0f54fc(int a4, int a5)
{
    register int t1;
    register int t9;
    register int t2;

    ADXCRS_Lock();
    t1 = adxf_CreateAdxFs();
    t9 = t1;
    if (t1 != 0) {
        t2 = adxf_SetAfsFileInfo(t1, a4, a5);
        t9 = t1;
        if ((int)t2 < 0) {
            FUN_0c0f5570(t1);
            t9 = 0x0;
        }
    }
    ADXCRS_Unlock();
    return t9;
}

int FUN_0c108252(int a4, int a5, int a6, int a7)
{
    register int t0;

    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0xC15B31C, a5, a6, a7);
        *(unsigned int *)((a5 + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)((a6 + 0x0)) = 0xFFFFFFFF;
        return t0;
    }
    *(unsigned int *)((a5 + 0x0)) = ((((struct o6C_int *)(a4))->v));
    *(unsigned int *)((a6 + 0x0)) = ((((struct o70_int *)(a4))->v));
    return 0x70;
}

int FUN_0c01b82e(int a4)
{
    register float u2;

    u2 = 0.599999964f;
    u2 = u2 + 0.399999976f * (FUN_0c0dfa50(((((struct oEC_int *)(a4))->v))));
    (((struct o5C_float *)(a4))->v) = u2;
    (((struct oEC_uint *)(a4))->v) = (unsigned short)(((((struct oEC_int *)(a4))->v)) + 0x444);
    return 0xC01B894;
}

int FUN_0c0975c8(int a4)
{
    register int t2;

    FUN_0c09a910(a4);
    *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x800);
    t2 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
    if ((int)(short)((t2 - 1) + 0x1) <= 0) {
        *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
        return FUN_0c0a2080(a4);
    }
    return 0xEC;
}

int FUN_0c0b0da0(int a4, int a5, int a6, int a7)
{
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0xA) {
        (((struct oEC_ushort *)(a4))->v) = 0x0;
    }
    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
    if ((int)((((struct oEE_short *)(a4))->v)) >= (int)0xF0) {
        (((struct oEE_ushort *)(a4))->v) = 0x0;
    }
    (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
    if ((int)((((struct oF0_short *)(a4))->v)) >= (int)0x4B0) {
        (((struct oF0_ushort *)(a4))->v) = 0x0;
    }
    return ((int (*)(int, int, int, int))(0xC0B0CA4))(a4, 0x0, a6, a7);
}

int FUN_0c0ade42(int a4)
{
    register int t0;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x1)) = 0x0;
        return 0x0;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0addde(a4);
    }
    return FUN_0c0addb0(a4);
}

void syHwFinish(void)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    FUN_0c0ff7e4();
    syHwCacheFinish();
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

int vmsfs_dpf(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[13];
    register int t0;
    register int t3;
    register int t5;

    stk[2] = a8;
    stk[3] = a9;
    stk[4] = a10;
    t0 = ((((int)stk + 4) + 0x8) + 0x4);
    if ((0x3 & ((((int)stk + 4) + 0x8) + 0x4)) != 0) {
        t0 = ((((int)stk + 4) + 0x8) + 0x8);
    }
    t3 = *(int *)0xC3471DC;
    t5 = (vsprintf(0xC813AD4, a8, t0));
    if (t3 != 0) {
        t5 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))(t3))(0xC813AD4, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
    }
    return t5;
}

int FUN_0c0283f0(int a4)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = *(short *)((a4 + 0x0));
    *(unsigned short *)((a4 + 0x0)) = (t0 - 1);
    t1 = 0x0;
    if ((int)(short)(t0 - 1) < 0) {
        t0 = *(int *)((a4 + 0x10));
        t1 = 0x0;
        t3 = (t0 + 0x10);
        if (((unsigned short)(*(short *)((t0 + 0xA))) & 0xFF00) == 0xFF00) {
            t1 = 0x1;
            t3 = (*(int *)((t0 + 0xC)));
        }
        FUN_0c0283c4(a4, t3);
    }
    return t1;
}

int FUN_0c07c3ea(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return ((int (*)(int, int, int, int))(0xC07C392))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC07C360))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC07C32C))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC07C290))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC07C23E))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC07C1E4))(a4, a5, a6, a7);
}

int FUN_0c0836ee(int a4)
{
    register int t0;
    register int t1;

    FUN_0c09a910(a4);
    FUN_0c09d990(a4);
    FUN_0c09d9bc(a4);
    t0 = FUN_0c09e7b8(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        FUN_0c09a808(a4, 0x1, 0xFFFFFF92);
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c08f3b8(int a4)
{
    register int t0;

    FUN_0c09a910(a4);
    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        t0 = 0x18;
        if ((*(signed char *)((a4 + 0x7214))) == 0) {
            t0 = 0xD;
        }
        return FUN_0c0a2e26(a4, t0, 0x0);
    }
    return 0xF0;
}

int FUN_0c08d594(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = *(int *)((0xC338518 + ((*(signed char *)((a4 + 0x5))) << 2)));
            return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
    }
    *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
    return FUN_0c08d334(a4);
}

int FUN_0c0873d0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return ((int (*)(int, int, int, int))(0xC0873CA))(a4, a5, a6, a7);
                    }
                    return FUN_0c087360(a4);
                }
                return FUN_0c0872e6(a4);
            }
            return FUN_0c087060(a4);
        }
        return FUN_0c086fa0(a4);
    }
    return FUN_0c086f2e(a4);
}

int kmSetAlphaThreshold(int a4)
{
    int t0;
    register int t2;
    register int t4;

    t0 = a4;
    if ((0x80000000 & a4) != 0) {
        t0 = 0x0;
    }
    t2 = t0;
    if ((0x7FFFFF00 & t0) != 0) {
        t2 = 0xFF;
    }
    *(unsigned int *)0xC817060 = t2;
    t4 = *(int *)0xC817284;
    *(unsigned int *)0xC817284 = ((t4 & 0xFF00FFFF) | ((unsigned char)t2 << 15));
    kmiWriteRegister(0x48, ((t4 & 0xFF00FFFF) | ((unsigned char)t2 << 15)));
    return 0x0;
}

int kdDevGetTimerInfo(int a4, int a5)
{
    register int t0;

    t0 = kdDevGetFD(a5, 0x8);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned char *)((a4 + 0x0)) = (*(signed char *)((t0 + 0x0)));
    *(unsigned char *)((a4 + 0x1)) = (*(signed char *)((t0 + 0x1)));
    *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((t0 + 0x2)));
    *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((t0 + 0x3)));
    return 0x0;
}

int FUN_0c10624c(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x4));
    t1 = ADXB_GetStat(t0);
    if (t1 == 0) {
        FUN_0c106048(a4);
    }
    ADXB_ExecHndl(t0);
    t1 = ADXB_GetStat(t0);
    if (t1 == 3) {
        return FUN_0c106120(a4);
    }
    return t1;
}

int FUN_0c027c24(void)
{
    int stk[1];
    register int t0;

    *(unsigned char *)((((int)stk + 0) + 0x0)) = 0x0;
    for (;;) {
        if ((int)(*(signed char *)((((int)stk + 0) + 0x0))) >= (int)(*(signed char *)0xC321048)) {
            break;
        }
        t0 = (FUN_0c027b90());
        *(unsigned char *)((((int)stk + 0) + 0x0)) = ((*(signed char *)((((int)stk + 0) + 0x0))) + 0x1);
    }
    *(unsigned char *)0xC321048 = 0x0;
    return t0;
}

int FUN_0c02cb8e(int a4, float f4)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = FUN_0c0622a2(a4, f4);
    u1 = FUN_0c0622ae(a4);
    u2 = u0;
    if (u1 > u0) {
        u2 = u1;
    }
    u0 = FUN_0c0622ba(a4, u1);
    u1 = u2;
    if (u0 > u2) {
        u1 = u0;
    }
    return FUN_0c0e34a0(u1);
}

int FUN_0c0634b4(int a4)
{
    if (((((struct o71CC_int *)(a4))->v)) != 0) {
        (((struct o7236_uchar *)(a4))->v) = 0x0;
        FUN_0c0abe44(((((struct o71CC_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x3))));
        (((struct o71CC_uint *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c089fca(int a4)
{
    register int t5;

    FUN_0c09a910(a4);
    FUN_0c09da1c(a4);
    t5 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        FUN_0c09a808(a4, 0x0, 0x9);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t5 = 0x71A8;
    }
    return t5;
}

int FUN_0c08f418(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0xB))) > 0) && (t0 = *(signed char *)((a4 + 0x10B)), t0 != 0)) {
        return 0x10B;
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c08f3b8(a4);
            }
            return ((int (*)(int, int, int, int))(0xC08F310))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC08F2E4))(a4, a5, a6, a7);
    }
    return FUN_0c08f000(a4);
}


int FUN_0c0f9cc8(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t3;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = (((struct o0_int *)0xC803DF4)->v);
    (((struct o4_uint *)0xC803DF4)->v) = ((a4 << 2) + t0);
    FUN_0c0fdda0((*(int *)((((a4 << 2) + t0) + 0x0))), (((int)stk + 0) + 0x4), 0x4);
    t3 = (((struct o4_int *)0xC803DF4)->v);
    *(unsigned int *)((t3 + 0x0)) = ((*(int *)((t3 + 0x0))) + ((*(int *)(((int)stk + 0))) << 2));
    return 0x0;
}

int FUN_0c108816(int a4, int a5, int a6, int a7)
{
    register int t7;

    if (a5 == 1) {
        return (*(int *)((a4 + 0xC)));
    }
    if (a5 == 0) {
        return (*(int *)((a4 + 0x10)));
    }
    if ((*(int *)((a4 + 0x28))) != 0) {
        t7 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
    }
    return 0x0;
}

int FUN_0c114da6(void)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((*(signed char *)((((unsigned char)(((t0 << 2) + t0) << 2) + 0xC843F00) + 0x0))) == 1) {
            FUN_0c114d8a(((unsigned char)(((t0 << 2) + t0) << 2) + 0xC843F00));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return 0x0;
}

int FUN_0c053d96(void)
{
    register int t0;

    t0 = *(signed char *)0xC7F302D;
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o0_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302C) + 0x1);
            (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
            (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
            (((struct o3_uchar *)0xC7F302C)->v) = 0x0;
            (((struct o0_uchar *)0xC7F31D0)->v) = 0x1;
            (((struct o1_uchar *)0xC7F31D0)->v) = 0x6;
            return 0x15;
        }
        return FUN_0c053b62();
    }
    return FUN_0c0537fe(0xC7F302C);
}

int FUN_0c06469e(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        FUN_0c09a808(a4, 0x1, 0x56);
        (((struct o7236_uchar *)(a4))->v) = 0x0;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        return (t0 + 0x1);
    }
    return FUN_0c09da1c(a4);
}

int FUN_0c06e1bc(int a4)
{
    FUN_0c09a808(a4, 0x1, 0x1B);
    return (FUN_0c046830((*(signed char *)((a4 + 0x3))), 0x0, 0xE, 0x0, 0x18, 0x43, 0xC336E38, 0xC336E44));
}

int FUN_0c077e62(int a4)
{
    register int t0;
    register int t1;

    FUN_0c09d990(a4);
    FUN_0c09d9bc(a4);
    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 == 0) {
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        t1 = 0xEC;
        if ((short)(t0 - 1) == 0) {
            t0 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        t0 = t1;
    } else {
        t1 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int FUN_0c0869ce(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC086794))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0866FA))(a4, a5, a6, a7);
}

int FUN_0c0c1d0c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c0c1b64(a4, t0);
        t2 = t1;
        if (t1 != 0) {
            (((struct oEC_ushort *)(t1))->v) = ((t0 << 2) + t0);
            t2 = 0xEC;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    return t2;
}

int nlCalcPoints(int a4, int a5, int a6)
{
    int stk[3];
    register int t1;
    register int t2;
    register int t3;
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    for (;;) {
        t1 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t1 - 1);
        if ((int)(t1 - 1) < 0) {
            break;
        }
        t2 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t2 + 0xC);
        t3 = *(int *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 0)) = (t3 + 0xC);
        t0 = (nlCalcPoint(((t3 + 0xC) - 12), ((t2 + 0xC) - 12)));
    }
    return t0;
}

int nlCalcVectors(int a4, int a5, int a6)
{
    int stk[3];
    register int t1;
    register int t2;
    register int t3;
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    for (;;) {
        t1 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t1 - 1);
        if ((int)(t1 - 1) < 0) {
            break;
        }
        t2 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t2 + 0xC);
        t3 = *(int *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 0)) = (t3 + 0xC);
        t0 = (nlCalcVector(((t3 + 0xC) - 12), ((t2 + 0xC) - 12)));
    }
    return t0;
}

int FUN_0c101cae(int a4)
{
    memset(((a4 * 0x148) + 0xC80DBC8), 0x0, 0x148);
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C)) = ((a4 * 0x4C) + 0xC812628);
    return 0x0;
}

int FUN_0c01a8c8(int a4)
{
    register int t4;

    FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), 0xC664AC0, (*(int *)((((*(signed char *)0xC36233E) << 2) + 0xC11C0F4))));
    t4 = FUN_0c01ae08(a4);
    if ((signed char)t4 != 0) {
        return FUN_0c059330(a4);
    }
    return (signed char)t4;
}

int FUN_0c0234f0(int a4, int a5)
{
    register int t2;

    t2 = *(short *)((0x2 + (FUN_0c022952(a4, 0x1, (*(signed char *)((a4 + 0x102))), 0x0))));
    FUN_0c022c1a(a4, t2, a5);
    return FUN_0c020f76(a4, a5, a5);
}

int FUN_0c040a42(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c0408d0(a4);
    t1 = FUN_0c040938(a4);
    if ((signed char)(t0 + t1) == 0) {
        return FUN_0c059330(a4);
    }
    return t1;
}

int FUN_0c054d80(void)
{
    register int t0;

    t0 = *(signed char *)0xC7F302D;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return ((int (*)(void))(0xC05471C))();
                }
                return ((int (*)(void))(0xC054B50))();
            }
            return ((int (*)(void))(0xC054B04))();
        }
        return ((int (*)(void))(0xC054664))();
    }
    return ((int (*)(void))(0xC05417A))();
}

int FUN_0c07db30(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 == 0) {
        FUN_0c09a91a(a4);
        FUN_0c09da1c(a4);
        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
            return FUN_0c0a2e26(a4, 0xF, 0x1);
        }
        return 0x71AA;
    }
    return t0;
}

int FUN_0c07dbc4(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 == 0) {
        FUN_0c09a91a(a4);
        FUN_0c09da1c(a4);
        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
            return FUN_0c0a2e26(a4, 0xF, 0x1);
        }
        return 0x71AA;
    }
    return t0;
}

int FUN_0c0dab5e(int a4, int a5, int a6)
{
    int stk[3];
    register int t1;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t1 = FUN_0c0d8fb0(0x60, 0x4, (*(int *)(((int)stk + 4))), a6);
    if ((signed char)t1 != 0) {
        *(unsigned char *)0xC7F29FC = (*(signed char *)(((int)stk + 0)));
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0eadd0(int a4, int a5)
{
    register int t1;
    register int t2;

    t1 = *(int *)0xC7FD638;
    t2 = *(short *)(((t1 + ((a4 << 2) << 1)) + 0x4));
    if (t2 != 0) {
        return FUN_0c0eb0c0((((*(short *)(((t1 + ((a4 << 2) << 1)) + 0x0))) << 2) << 2), a5, (((unsigned char)(*(signed char *)(((t1 + ((a4 << 2) << 1)) + 0x3))) << 2) << 2));
    }
    return t2;
}

void gdFsEntryErrFuncAllG(int a4, int a5)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)(((*(int *)0xC346BD8) + 0x24)) = a4;
    *(unsigned int *)(((*(int *)0xC346BD8) + 0x28)) = a5;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

int FUN_0c0f27c4(int a4)
{
    register int t0;
    register int t1;

    if (a4 != 0) {
        if (a4 != 6) {
            if (a4 != 12) {
                t0 = a4;
                if (a4 != 18) {
                } else {
                    t0 = (kdSetGunTrigger(0x3));
                }
                t1 = t0;
            } else {
                t1 = (kdSetGunTrigger(0x2));
            }
            t0 = t1;
        } else {
            t0 = (kdSetGunTrigger(0x1));
        }
        t1 = t0;
    } else {
        t1 = (kdSetGunTrigger(0x0));
    }
    return t1;
}

int gdFsIsTrayOpenG(int a4, int a5, int a6, int a7)
{
    register int t2;

    if ((*(int *)(((*(int *)0xC346BD8) + 0x34))) != 1) {
        t2 = gdFsGetDrvStatG(a4, a5, a6, a7);
        if (t2 == 6) {
            *(unsigned int *)(((*(int *)0xC346BD8) + 0x34)) = 0x1;
            return 0x1;
        }
        if (t2 == 0) {
            gdFsReqDrvStatG(t2);
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c06b5fe(int a4)
{
    register int t1;

    FUN_0c06b5b2(a4);
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    t1 = (((struct o71F4_short *)(a4))->v);
    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t1 - 360.0f);
    if ((int)(short)(int)((float)t1 - 360.0f) < 0) {
        (((struct o71F4_ushort *)(a4))->v) = 0x0;
    }
    return 0x71F4;
}

int FUN_0c06f52e(int a4)
{
    register int t4;
    register int t3;

    FUN_0c09a910(a4);
    t4 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        FUN_0c09a808(a4, 0x1, 0x65);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t3 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t3 + 0x1);
        t4 = (t3 + 0x1);
    }
    return t4;
}

int FUN_0c079ac2(int a4, int a5, int a6, int a7)
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
                    return ((int (*)(int, int, int, int))(0xC079A9C))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC079A5C))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC079A14))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC07997A))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0798A4))(a4, a5, a6, a7);
}

int FUN_0c085c22(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return ((int (*)(int, int, int, int))(0xC085C16))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC085BB4))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC085AD4))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC085996))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0858F0))(a4, a5, a6, a7);
}

int FUN_0c089b1a(int a4, int a5, int a6, int a7)
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
                    return ((int (*)(int, int, int, int))(0xC089B14))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0899BC))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC08997C))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC089938))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0898E6))(a4, a5, a6, a7);
}

int FUN_0c0916fa(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return ((int (*)(int, int, int, int))(0xC0916D4))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC09168C))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0915C2))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC091596))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC091566))(a4, a5, a6, a7);
}

int FUN_0c0d4660(int a4)
{
    register float u1;

    u1 = *(float *)0xC0D46D8;
    return FUN_0c02d9e0((*(int *)((((unsigned char)(((a4 << 1) + a4) << 2) + 0xC154710) + 0x8))), 0x0, ((*(float *)((((unsigned char)(((a4 << 1) + a4) << 2) + 0xC154710) + 0x0))) * u1), (((((struct o4_float *)(((unsigned char)(((a4 << 1) + a4) << 2) + 0xC154710)))->v)) * u1), 1.0f, 1.0f);
}

int FUN_0c114a6c(void)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = 0x0;
    for (;;) {
        t1 = *(short *)((((short)((short)t0 * (short)0xAC) + 0xC8439A0) + 0x0));
        t3 = t1;
        if (t1 == 1) {
            t3 = (ADXB_ExecHndl(((short)((short)t0 * (short)0xAC) + 0xC8439A0)));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return t3;
}

int FUN_0c115c2e(void)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((short)((short)t0 * (short)0x34) + 0xC857C8C) + 0x0));
        t3 = t1;
        if (t1 == 1) {
            t3 = (ADXPD_ExecHndl(((short)((short)t0 * (short)0x34) + 0xC857C8C)));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return t3;
}

int FUN_0c0533d6(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC7F302D;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                (((struct o0_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302C) + 0x1);
                (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                (((struct o3_uchar *)0xC7F302C)->v) = 0x0;
                return 0x0;
            }
            return ((int (*)(int, int, int, int))(0xC05327E))(0xC7F302C, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC052F0A))(0xC7F302C, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC052E3E))(0xC7F302C, a5, a6, a7);
}

int FUN_0c090e3c(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0xB))) > 0) && (t0 = *(signed char *)((a4 + 0x10B)), t0 != 0)) {
        return 0x10B;
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC090E12))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC090D7C))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC090D44))(a4, a5, a6, a7);
}
