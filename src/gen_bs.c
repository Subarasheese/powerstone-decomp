/* Straight-line functions with calls and guards (batch gen_bs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_ushort { unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int ADXB_GetCof(int);
int ADXB_GetLpInsNsmpl(int);
int FUN_0c044868(int, int);
int FUN_0c048c18(int, int, float);
int FUN_0c059330(int, int, int, int);
int FUN_0c05fc68(int);
int FUN_0c05fd5e(int);
int FUN_0c06734c(int);
int FUN_0c0673fe(int);
int FUN_0c0674da(int);
int FUN_0c06758c(int);
int FUN_0c067670(int);
int FUN_0c067774(int);
int FUN_0c068c76(int);
int FUN_0c068cb8(int);
int FUN_0c068d3a(int);
int FUN_0c068d5e(int);
int FUN_0c068e10(int);
int FUN_0c068ec6(int);
int FUN_0c06d8b0(int);
int FUN_0c07164c(int, int, int);
int FUN_0c071676(int);
int FUN_0c0716d0(int);
int FUN_0c0716f4(int);
int FUN_0c0717ac(int);
int FUN_0c071818(int);
int FUN_0c076714(int);
int FUN_0c0767ac(int);
int FUN_0c076844(int);
int FUN_0c07948c(int);
int FUN_0c07a188(int, int, int);
int FUN_0c07c57a(int);
int FUN_0c07c59e(int);
int FUN_0c07fbb2(int);
int FUN_0c07fbf8(int);
int FUN_0c080804(int);
int FUN_0c0830e0(int);
int FUN_0c08740a(int);
int FUN_0c08750c(int, int, int);
int FUN_0c087536(int);
int FUN_0c08759a(int);
int FUN_0c0875be(int);
int FUN_0c0898ac(int);
int FUN_0c08bf90(int);
int FUN_0c08c114(int, int, int, int);
int FUN_0c08c210(int);
int FUN_0c08c304(int);
int FUN_0c096dca(int);
int FUN_0c09a7b2(int);
int FUN_0c09a808(int, int, int);
int FUN_0c0a2e26(int, int, int, int);
int FUN_0c0abe44(int, int, int);
int FUN_0c0ace56(int);
int FUN_0c0d5292(void);
int FUN_0c0dd9f0(int, int);
float FUN_0c0df520(float);
float FUN_0c0df650(float);
float FUN_0c0df7d0(int, int, int, int, float);
float FUN_0c0dfb50(float);
int FUN_0c0e0ae0(int);
int FUN_0c0e1240(int);
int FUN_0c0e16c0(void);
int FUN_0c0e19b0(int);
int FUN_0c0e1d00(float, float);
int FUN_0c0e1dc0(float, float);
int FUN_0c0e1e20(float, float);
int FUN_0c0e2110(float, float, float);
int FUN_0c0e6834(int, int, int);
int FUN_0c0eb5c8(int, int);
int FUN_0c0eb604(int, int);
int FUN_0c0eb618(int, int);
int FUN_0c0f0b42(int, int);
int FUN_0c0f1766(int);
int FUN_0c0f1c44(int);
int FUN_0c0f4eac(void);
int FUN_0c0fae0e(int, int, int, int);
int FUN_0c0fb042(int, int, int, int);
int FUN_0c0fb236(int);
int FUN_0c0fca52(int, int);
int FUN_0c0fdaca(int, int);
int FUN_0c0ff02c(void);
int FUN_0c1080f0(int, int, int, int);
int FUN_0c108252(int, int, int, int);
int FUN_0c108304(int, int, int, int);
int FUN_0c10bce0(void);
int FUN_0c114584(int, int, int);
extern float _builtin_sqrtf(float);
int gdFsOpenG(int, int);
int kdGetDeviceInfo(int);
int kdGetDriverMode(int);
int mwRnaErrCallFunc(int, int, int, int);
int nlRotateXSC(float, float);
int nlRotateYSC(float, float);
int nlRotateZSC_L(float, float);
int nlSysMetricsDiffTime(int, int);
int nlSysMetricsReadTimer(void);
int nlSysMetricsScaleTime(int);
int nlUnitMatrix(void);
int nlRotateRX(float f4);
int nlRotateRY(float f4);
int nlRotateRY_L(float f4);
int nlRotateRZ_L(float f4);
int nlRotateRX_L(float f4);
int nlRotateRZ(float f4);
int kmSetStripOverRunCallback(int a4, int a5);
int kmSetEndOfYUVCallback(int a4, int a5);
int gdDcfReqGdRd_(int a4, int a5);
int gdDcfGetDrvStat_(int a4, int a5);
int gdDcfGetToc_(int a4, int a5);
int vmsfs_c_setprogresscallback(int a4);
int vmsfs_c_setcallbackparam(int a4);
int FUN_0c1068fc(int a4, int a5);
int FUN_0c1081d6(int a4, int a5, int a6, int a7);
int FUN_0c04f0bc(void);
int FUN_0c068d20(int a4);
int FUN_0c068d7e(int a4);
int FUN_0c06ca1c(int a4, int a5, int a6, int a7);
int FUN_0c06ce50(int a4, int a5, int a6, int a7);
int FUN_0c0674c0(int a4);
int FUN_0c067656(int a4);
int FUN_0c067854(int a4);
int FUN_0c0690b4(int a4);
int FUN_0c0716b6(int a4, int a5, int a6);
int FUN_0c071714(int a4);
int FUN_0c0766c4(int a4, int a5, int a6, int a7);
int FUN_0c076734(int a4, int a5, int a6, int a7);
int FUN_0c079450(int a4, int a5, int a6, int a7);
int FUN_0c07c560(int a4, int a5, int a6, int a7);
int FUN_0c07d662(int a4, int a5, int a6, int a7);
int FUN_0c07d7b0(int a4, int a5, int a6, int a7);
int FUN_0c07d90c(int a4, int a5, int a6, int a7);
int FUN_0c0794a8(int a4, int a5, int a6, int a7);
int FUN_0c071a26(int a4);
int FUN_0c07c5be(int a4);
int FUN_0c07fca4(int a4, int a5, int a6, int a7);
int FUN_0c0833fa(int a4, int a5, int a6, int a7);
int FUN_0c08306a(int a4, int a5, int a6, int a7);
int FUN_0c076924(int a4);
int FUN_0c083100(int a4, int a5, int a6, int a7);
int FUN_0c07fc1a(int a4);
int FUN_0c08986e(int a4, int a5, int a6, int a7);
int FUN_0c089d82(int a4, int a5, int a6, int a7);
int FUN_0c087580(int a4, int a5, int a6);
int FUN_0c0875de(int a4);
int FUN_0c0898cc(int a4, int a5, int a6, int a7);
int FUN_0c09098c(int a4, int a5, int a6, int a7);
int FUN_0c090b14(int a4, int a5, int a6, int a7);
int FUN_0c094562(int a4, int a5, int a6, int a7);
int FUN_0c09646a(int a4, int a5, int a6, int a7);
int FUN_0c08c4b0(int a4);
int FUN_0c097e7a(int a4, int a5, int a6, int a7);
int FUN_0c096eb2(int a4, int a5, int a6, int a7);
int nlClearMatrix(void);
int FUN_0c0e4860(int a4, int a5);
int FUN_0c0e1a40(void);
void p2_cache_set(void);
int gdFsHdlG1DmaEnd(int a4);
int FUN_0c108358(int a4, int a5, int a6, int a7);
int FUN_0c02a6ac(int a4, int a5, int a6, int a7);
int FUN_0c0614fc(int a4, int a5);
int FUN_0c0df2b0(float f4);
int FUN_0c0ddb00(void);
int FUN_0c0ddb20(void);
int FUN_0c1068e4(int a4);
int mpdrv_get_version(int a4, int a5);
int FUN_0c1145cc(int a4, int a5, int a6, int a7);
int FUN_0c0ae4c0(int a4, int a5, int a6, int a7);
int FUN_0c0dda50(int a4, int a5, int a6);
int FUN_0c0df700(float f4);
int FUN_0c0448f6(int a4);
int FUN_0c061694(int a4, int a5, int a6, int a7);
int FUN_0c0a13d8(int a4, int a5);
int FUN_0c0a136c(int a4);
int FUN_0c0de730(void);
int nlSysMetricsCpuPowerEnd(void);
int nlSysMetricsCpuPowerGet(void);
int FUN_0c0e2140(int a4);
int FUN_0c0fc212(int a4, int a5, int a6, int a7);
void FUN_0c01f49a(int a4, int a5, int a6, int a7);
void FUN_0c01240e(int a4, int a5, int a6, int a7);
void FUN_0c01f98e(int a4, int a5, int a6, int a7);
int FUN_0c068de4(int a4, int a5, int a6, int a7);
int FUN_0c06ca82(int a4, int a5, int a6, int a7);
int FUN_0c07179a(int a4, int a5, int a6, int a7);
int FUN_0c07679a(int a4, int a5, int a6, int a7);
int FUN_0c07950e(int a4, int a5, int a6, int a7);
int FUN_0c07c6e8(int a4, int a5, int a6, int a7);
int FUN_0c083166(int a4, int a5, int a6, int a7);
int FUN_0c0866e8(int a4, int a5, int a6, int a7);
int FUN_0c089bba(int a4, int a5, int a6, int a7);
int FUN_0c09f8a2(int a4);
int FUN_0c0dccb0(int a4, int a5, int a6, int a7);
float FUN_0c0df4b0(float f4);
int FUN_0c0f410c(int a4, int a5, int a6, int a7);
int FUN_0c107fbc(int a4, int a5, int a6, int a7);
int FUN_0c113d4a(int a4, int a5, int a6);
int FUN_0c016d7a(int a4);
int FUN_0c016df2(int a4);
int FUN_0c043706(int a4, int a5, int a6, int a7);
int FUN_0c0605a4(int a4, int a5, int a6, int a7);
int FUN_0c069404(int a4, int a5, int a6, int a7);
int FUN_0c06d41e(int a4, int a5, int a6, int a7);
int FUN_0c071a40(int a4, int a5, int a6, int a7);
int FUN_0c076c5c(int a4, int a5, int a6, int a7);
int FUN_0c083792(int a4, int a5, int a6, int a7);
int FUN_0c089d9c(int a4, int a5, int a6, int a7);
int FUN_0c095452(int a4, int a5, int a6, int a7);
int FUN_0c095462(int a4, int a5, int a6, int a7);
int FUN_0c099372(int a4, int a5, int a6, int a7);
int FUN_0c09fe58(int a4);
int FUN_0c0ae9d4(int a4, int a5, int a6, int a7);
void FUN_0c0b53ce(void);
float FUN_0c0df860(int a4, int a5, int a6, int a7, float f4);
float FUN_0c0df850(int a4, int a5, int a6, int a7, float f4);
int FUN_0c069a98(int a4);
int FUN_0c07e774(int a4);
int FUN_0c087496(int a4);
int nlSysMetricsCpuPowerStart(void);
int FUN_0c0df0f0(int a4, int a5);
int FUN_0c0e16e0(void);
int FUN_0c0f2758(void);
int FUN_0c0f26de(void);
int gdDcfInit_(int a4, int a5);
int FUN_0c0e4950(int a4, int a5);
int FUN_0c0eb62c(int a4, int a5);
int FUN_0c0eb67c(int a4, int a5);
int FUN_0c0eb668(int a4, int a5);
int FUN_0c0f4f3e(int a4, int a5, int a6, int a7);
int FUN_0c0f4f56(int a4, int a5, int a6, int a7);
int FUN_0c0f4f4a(int a4, int a5, int a6, int a7);
int FUN_0c0f4f62(int a4, int a5, int a6, int a7);
void kdGetGunPosition(int a4, int a5);
int ADXSJD_GetLpInsNsmpl(int a4);
int ADXSJD_GetCof(int a4);
int FUN_0c1151a8(int a4, int a5, int a6);
int FUN_0c0552f8(void);
int FUN_0c0f26b6(int a4);
int vmsfs_getword_big(int a4, int a5);
int FUN_0c01238c(int a4);
int FUN_0c06e1ac(int a4);
int FUN_0c06e194(int a4);
int FUN_0c06e1a4(int a4);
int FUN_0c06e18c(int a4);
int FUN_0c06e19c(int a4);
int FUN_0c06e1b4(int a4);
int FUN_0c06e266(int a4);
int FUN_0c06e26e(int a4);
int FUN_0c06e1f2(int a4);
int FUN_0c06e25e(int a4);
int FUN_0c06e256(int a4);
int FUN_0c06e286(int a4);
int FUN_0c06e296(int a4);
int FUN_0c06e28e(int a4);
int FUN_0c06e29e(int a4);
int FUN_0c06e276(int a4);
int FUN_0c06e27e(int a4);
int FUN_0c072926(int a4);
int FUN_0c07293e(int a4);
int FUN_0c07292e(int a4);
int FUN_0c072936(int a4);
int FUN_0c072946(int a4);
int FUN_0c07294e(int a4);
int FUN_0c072956(int a4);
int FUN_0c072966(int a4);
int FUN_0c0729b4(int a4);
int FUN_0c0729cc(int a4);
int FUN_0c0729c4(int a4);
int FUN_0c07295e(int a4);
int FUN_0c0729bc(int a4);
int FUN_0c0729d4(int a4);
int FUN_0c0729dc(int a4);
int FUN_0c0729e4(int a4);
int FUN_0c0729ec(int a4);
int FUN_0c072a44(int a4);
int FUN_0c072a3c(int a4);
int FUN_0c072a34(int a4);
int FUN_0c0729f4(int a4);
int FUN_0c07754e(int a4);
int FUN_0c077556(int a4);
int FUN_0c07761e(int a4);
int FUN_0c077626(int a4);
int FUN_0c077636(int a4);
int FUN_0c07762e(int a4);
int FUN_0c07763e(int a4);
int FUN_0c07764e(int a4);
int FUN_0c077646(int a4);
int FUN_0c077656(int a4);
int FUN_0c07765e(int a4);
int FUN_0c077edc(int a4);
int FUN_0c07ad04(int a4);
int FUN_0c07ad0c(int a4);
int FUN_0c07ad14(int a4);
int FUN_0c07ad1c(int a4);
int FUN_0c07ad24(int a4);
int FUN_0c07ad34(int a4);
int FUN_0c07ad44(int a4);
int FUN_0c07ad2c(int a4);
int FUN_0c07ad4c(int a4);
int FUN_0c07ad3c(int a4);
int FUN_0c07ad54(int a4);
int FUN_0c07ad5c(int a4);
int FUN_0c07e87c(int a4);
int FUN_0c07e8e2(int a4);
int FUN_0c07e8f8(int a4);
int FUN_0c07e920(int a4);
int FUN_0c0810a8(int a4);
int FUN_0c0810b0(int a4);
int FUN_0c0810a0(int a4);
int FUN_0c0810c0(int a4);
int FUN_0c0810b8(int a4);
int FUN_0c0810c8(int a4);
int FUN_0c0810d0(int a4);
int FUN_0c0810e0(int a4);
int FUN_0c0810d8(int a4);
int FUN_0c0811e4(int a4);
int FUN_0c0811ec(int a4);
int FUN_0c0811f4(int a4);
int FUN_0c0811fc(int a4);
int FUN_0c087e54(int a4);
int FUN_0c087e4c(int a4);
int FUN_0c087e44(int a4);
int FUN_0c087e64(int a4);
int FUN_0c087e74(int a4);
int FUN_0c087e6c(int a4);
int FUN_0c087e84(int a4);
int FUN_0c087e7c(int a4);
int FUN_0c087e8c(int a4);
int FUN_0c087e94(int a4);
int FUN_0c087e5c(int a4);
int FUN_0c090a2c(int a4, int a5, int a6, int a7);
int gdFsGetGlobalErrG(void);
int gdFsGetSysHnG(void);
int gdFsGetWorkHnG(void);
int FUN_0c0ffd90(void);
int vmsfs_getword_little(int a4, int a5);
void vmsfs_setword_big(int a4, int a5, int a6);
int FUN_0c097e64(int a4);
int FUN_0c097e6a(int a4, int a5, int a6, int a7);
void FUN_0c0dd7d0(int a4);
void FUN_0c0dea20(int a4);
void FUN_0c0df0b0(int a4);
int FUN_0c0df0d0(void);
int FUN_0c0df0e0(void);
void FUN_0c0df960(int a4);
void FUN_0c0dfeb0(int a4);
int syRtcGetStat(void);
int FUN_0c0e5d82(void);
void FUN_0c0eafb0(int a4);
int gdDcfStop_(int a4, int a5);
int gdDcfSoftReset_(int a4, int a5);
void kdSetGunCallback(int a4);
int kdGetSystemInfo(void);
void FUN_0c108542(int a4, int a5, int a6);
void FUN_0c108802(int a4, int a5, int a6);
void vmsfs_setword_little(int a4, int a5, int a6);
void FUN_0c01b744(void);
int FUN_0c048ea4(int a4, float f4);
void FUN_0c0aed66(void);
void FUN_0c0df070(void);
void FUN_0c0e0f90(void);
void FUN_0c0e0f4c(void);
void FUN_0c0e0fe4(void);
void FUN_0c0e7038(void);
void FUN_0c0e70d6(void);
void kmiNullCallback0(void);
void kmiNullCallback1(void);
void kmiNullCallback2(void);
void kmiNullCallback3(void);
void kmiNullCallback4(void);
void kmiNullCallback5(void);
void kmiNullCallback7(void);
void kmiNullCallback6(void);
int gdFsOpenFastG(int a4, int a5);
void FUN_0c106432(void);
int FUN_0c0f0c4e(int a4, int a5);
void FUN_0c1084a4(void);
int FUN_0c10853e(int a4);
void FUN_0c108764(void);
int FUN_0c1087fe(int a4);
int kmiProcessVertex_15(void);
int kmiProcessVertex_16(void);
int kmiProcessVertex_17(void);
int FUN_0c114334(int a4);
int FUN_0c11433e(int a4);

int nlRotateRX(float f4)
{
    register float t0;
    register float t1;

    t0 = FUN_0c0df520(f4);
    t1 = FUN_0c0dfb50(f4);
    return nlRotateXSC(t1, t0);
}

int nlRotateRY(float f4)
{
    register float t0;
    register float t1;

    t0 = FUN_0c0df520(f4);
    t1 = FUN_0c0dfb50(f4);
    return nlRotateYSC(t1, t0);
}

int nlRotateRY_L(float f4)
{
    register float t0;
    register float t1;

    t0 = FUN_0c0df520(f4);
    t1 = FUN_0c0dfb50(f4);
    return FUN_0c0e1dc0(t1, t0);
}

int nlRotateRZ_L(float f4)
{
    register float t0;
    register float t1;

    t0 = FUN_0c0df520(f4);
    t1 = FUN_0c0dfb50(f4);
    return nlRotateZSC_L(t1, t0);
}

int nlRotateRX_L(float f4)
{
    register float t0;
    register float t1;

    t0 = FUN_0c0df520(f4);
    t1 = FUN_0c0dfb50(f4);
    return FUN_0c0e1d00(t1, t0);
}

int nlRotateRZ(float f4)
{
    register float t0;
    register float t1;

    t0 = FUN_0c0df520(f4);
    t1 = FUN_0c0dfb50(f4);
    return FUN_0c0e1e20(t1, t0);
}

int kmSetStripOverRunCallback(int a4, int a5)
{
    FUN_0c0fb042((*(int *)0xC347628), 0x4, a4, a5);
    return 0x0;
}

int kmSetEndOfYUVCallback(int a4, int a5)
{
    FUN_0c0fb042((*(int *)0xC347628), 0x6, a4, a5);
    return 0x0;
}

int gdDcfReqGdRd_(int a4, int a5)
{
    int stk[2];

    *(unsigned int *)((((int)stk + 0) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = a5;
    return (FUN_0c0eb5c8(0x1C, ((int)stk + 0)));
}

int gdDcfGetDrvStat_(int a4, int a5)
{
    register int t0;

    t0 = FUN_0c0eb618(a4, a5);
    if (t0 == 1) {
        return 0x0;
    }
    return 0x1;
}

int gdDcfGetToc_(int a4, int a5)
{
    int stk[2];

    *(unsigned int *)((((int)stk + 0) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = a5;
    return (FUN_0c0eb5c8(0x13, ((int)stk + 0)));
}

int vmsfs_c_setprogresscallback(int a4)
{
    register int t0;

    t0 = 0xC8057B0;
    for (;;) {
        (((struct o78_uint *)(t0))->v) = a4;
        t0 = (t0 + 0x80);
        if ((unsigned int)t0 >= (unsigned int)0xC805BB0) {
            break;
        }
    }
    return 0x78;
}

int vmsfs_c_setcallbackparam(int a4)
{
    register int t0;

    t0 = 0xC8057B0;
    for (;;) {
        (((struct o7C_uint *)(t0))->v) = a4;
        t0 = (t0 + 0x80);
        if ((unsigned int)t0 >= (unsigned int)0xC805BB0) {
            break;
        }
    }
    return 0x7C;
}

int FUN_0c1068fc(int a4, int a5)
{
    register int t1;

    t1 = FUN_0c0f1c44((*(int *)((a4 + 0x8))));
    *(unsigned int *)((a5 + 0x0)) = t1;
    return t1;
}

int FUN_0c1081d6(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC15B31C, a5, a6, a7);
        return 0xFFFFFFFF;
    }
    return (*(int *)((a4 + 0x8)));
}

int FUN_0c04f0bc(void)
{
    *(unsigned short *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F66)) = 0x0;
    return 0xC366F66;
}

int FUN_0c068d20(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c068cb8(a4);
    }
    return FUN_0c068c76(a4);
}

int FUN_0c068d7e(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c068d5e(a4);
    }
    return FUN_0c068d3a(a4);
}

int FUN_0c06ca1c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC06C9CC))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC06C964))(a4, a5, a6, a7);
}

int FUN_0c06ce50(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC06CB36))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC06CAB4))(a4, a5, a6, a7);
}

int FUN_0c0674c0(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0673fe(a4);
    }
    return FUN_0c06734c(a4);
}

int FUN_0c067656(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c06758c(a4);
    }
    return FUN_0c0674da(a4);
}

int FUN_0c067854(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c067774(a4);
    }
    return FUN_0c067670(a4);
}

int FUN_0c0690b4(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c068ec6(a4);
    }
    return FUN_0c068e10(a4);
}

int FUN_0c0716b6(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c071676(a4);
    }
    return FUN_0c07164c(a4, a5, a6);
}

int FUN_0c071714(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0716f4(a4);
    }
    return FUN_0c0716d0(a4);
}

int FUN_0c0766c4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC07669E))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC076674))(a4, a5, a6, a7);
}

int FUN_0c076734(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c076714(a4);
    }
    return ((int (*)(int, int, int, int))(0xC0766F0))(a4, a5, a6, a7);
}

int FUN_0c079450(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC079418))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0793EE))(a4, a5, a6, a7);
}

int FUN_0c07c560(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC07C4EC))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC07C4C2))(a4, a5, a6, a7);
}

int FUN_0c07d662(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC07D63A))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC07D56C))(a4, a5, a6, a7);
}

int FUN_0c07d7b0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC07D788))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC07D6B8))(a4, a5, a6, a7);
}

int FUN_0c07d90c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC07D8CA))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC07D808))(a4, a5, a6, a7);
}

int FUN_0c0794a8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c07948c(a4);
    }
    return ((int (*)(int, int, int, int))(0xC07946A))(a4, a5, a6, a7);
}

int FUN_0c071a26(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c071818(a4);
    }
    return FUN_0c0717ac(a4);
}

int FUN_0c07c5be(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c07c59e(a4);
    }
    return FUN_0c07c57a(a4);
}

int FUN_0c07fca4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC07FC84))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC07FC34))(a4, a5, a6, a7);
}

int FUN_0c0833fa(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08321C))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC083194))(a4, a5, a6, a7);
}

int FUN_0c08306a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC083044))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC082FE6))(a4, a5, a6, a7);
}

int FUN_0c076924(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c076844(a4);
    }
    return FUN_0c0767ac(a4);
}

int FUN_0c083100(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0830e0(a4);
    }
    return ((int (*)(int, int, int, int))(0xC0830B4))(a4, a5, a6, a7);
}

int FUN_0c07fc1a(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c07fbf8(a4);
    }
    return FUN_0c07fbb2(a4);
}

int FUN_0c08986e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08982C))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0897E6))(a4, a5, a6, a7);
}

int FUN_0c089d82(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC089C38))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC089BCC))(a4, a5, a6, a7);
}

int FUN_0c087580(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c087536(a4);
    }
    return FUN_0c08750c(a4, a5, a6);
}

int FUN_0c0875de(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0875be(a4);
    }
    return FUN_0c08759a(a4);
}

int FUN_0c0898cc(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0898ac(a4);
    }
    return ((int (*)(int, int, int, int))(0xC089888))(a4, a5, a6, a7);
}

int FUN_0c09098c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC090936))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC090902))(a4, a5, a6, a7);
}

int FUN_0c090b14(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC090AAC))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC090A34))(a4, a5, a6, a7);
}

int FUN_0c094562(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC094488))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0942DC))(a4, a5, a6, a7);
}

int FUN_0c09646a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC096464))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC096454))(a4, a5, a6, a7);
}

int FUN_0c08c4b0(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c08c304(a4);
    }
    return FUN_0c08c210(a4);
}

int FUN_0c097e7a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC097E76))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC097E70))(a4, a5, a6, a7);
}

int FUN_0c096eb2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC096DEC))(a4, a5, a6, a7);
    }
    return FUN_0c096dca(a4);
}

int nlClearMatrix(void)
{
    FUN_0c0e0ae0(0x0);
    (((struct o8_uint *)0xC7FCCB4)->v) = ((((struct o4_int *)0xC7FCCB4)->v));
    (((struct o0_ushort *)0xC7FCCB4)->v) = 0x0;
    return FUN_0c0e1240(0x0);
}

int FUN_0c0e4860(int a4, int a5)
{
    *(unsigned int *)(((((unsigned int)((unsigned int)(*(short *)((((a4 - 4) << 1) + 0xC155B10))) >> 2) >> 1) + (0x1C0 + ((int)_builtin_get_vbr()))) + 0x0)) = a5;
    return 0x1;
}

int FUN_0c0e1a40(void)
{
    register int t0;

    t0 = FUN_0c0e19b0(0x0);
    nlUnitMatrix();
    return t0;
}

void p2_cache_set(void)
{
    register int t0;

    *(unsigned int *)0xFF00001C = 0x0;
    t0 = 0xF4000000;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x20);
        if ((int)t0 >= (int)0xF4004000) {
            break;
        }
    }
    *(unsigned int *)0xFF00001C = 0x800;
    *(unsigned int *)0xFF00001C = 0x0;
}

int gdFsHdlG1DmaEnd(int a4)
{
    register int t0;
    register int t5;
    register int t6;
    int t1;

    t0 = *(int *)((a4 + 0x1C));
    t5 = 0x0;
    t6 = 0x0;
    if ((t0 != 0) && (t1 = *(int *)((t0 + 0x2C)), t1 != 0)) {
        t5 = (*(int *)((t0 + 0x2C)));
        t6 = (*(int *)((t0 + 0x30)));
    }
    return FUN_0c0eb62c(t5, t6);
}

int FUN_0c108358(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        return mwRnaErrCallFunc(0xC15B31C, a5, a6, a7);
    }
    *(unsigned int *)((a5 + 0x0)) = ((((struct o7C_int *)(a4))->v));
    *(unsigned int *)((a6 + 0x0)) = ((((struct o80_int *)(a4))->v));
    return 0x80;
}

int FUN_0c02a6ac(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        return FUN_0c059330(a4, a5, a6, a7);
    }
    return 0xEC;
}

int FUN_0c0614fc(int a4, int a5)
{
    if (a5 == -23) {
        *(unsigned int *)0xC38682C = 0x1;
    }
    *(unsigned int *)0xC3B9D44 = ((*(int *)0xC3B9D44) + 0x1);
    return a5;
}

int FUN_0c0df2b0(float f4)
{
    if (f4 == 0.0f) {
        return 0x0;
    }
    return ((int (*)(float))(0xC0DF210))((1.0f / f4));
}

int FUN_0c0ddb00(void)
{
    int stk[2];

    FUN_0c0fca52(((int)stk + 0), (((int)stk + 0) + 0x4));
    return (*(int *)(((int)stk + 0)));
}

int FUN_0c0ddb20(void)
{
    int stk[2];

    FUN_0c0fca52((((int)stk + 0) + 0x4), ((int)stk + 0));
    return (*(int *)(((int)stk + 0)));
}

int FUN_0c1068e4(int a4)
{
    if ((*(int *)((a4 + 0x8))) != 0) {
        return FUN_0c0f1766((*(int *)((a4 + 0x8))));
    }
    return 0x0;
}

int mpdrv_get_version(int a4, int a5)
{
    register int t5;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = ((((struct o0_int *)0xC15B6BC)->v));
    }
    if (a5 != 0) {
        t5 = (((struct o4_int *)0xC15B6BC)->v);
        *(unsigned int *)((a5 + 0x0)) = t5;
    }
    return t5;
}

int FUN_0c1145cc(int a4, int a5, int a6, int a7)
{
    return FUN_0c114584(a4, ((a5 << 1) + a4), a7);
}

int FUN_0c0ae4c0(int a4, int a5, int a6, int a7)
{
    int stk[1];

    *(int *)((int)stk + 0) = a4;
    FUN_0c0ace56(a4);
    return FUN_0c0abe44((*(int *)(((int)stk + 0))), 0x3, 0x2);
}

int FUN_0c0dda50(int a4, int a5, int a6)
{
    return FUN_0c0dd9f0(a4, (*(int *)(((((a6 << 2) << 2) + a5) + 0x8))));
}


int FUN_0c0448f6(int a4)
{
    *(unsigned char *)(((0x308 + a4) + 0x4)) = 0x0;
    *(unsigned char *)(((0x308 + a4) + 0x5)) = 0x1;
    return FUN_0c044868(a4, (0x308 + a4));
}

int FUN_0c061694(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)0xC386828 = ((*(int *)0xC386828) + 0x1);
    FUN_0c0f4eac();
    return 0x0;
}

int FUN_0c0a13d8(int a4, int a5)
{
    (((struct o71BA_uchar *)(a4))->v) = 0x16;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    *(unsigned char *)((a4 + 0xB)) = a5;
    return a5;
}

int FUN_0c0a136c(int a4)
{
    (((struct o71BA_uchar *)(a4))->v) = 0x13;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    return FUN_0c09a808(a4, 0x1, 0x52);
}

int FUN_0c0de730(void)
{
    int stk[1];

    FUN_0c0fb236(((int)stk + 0));
    return (*(int *)(((int)stk + 0)));
}

int nlSysMetricsCpuPowerEnd(void)
{
    register int t0;
    register int t2;

    t0 = nlSysMetricsReadTimer();
    t2 = nlSysMetricsDiffTime((*(int *)0xC7F89DC), t0);
    return nlSysMetricsScaleTime(t2);
}

int nlSysMetricsCpuPowerGet(void)
{
    register int t0;
    register int t2;

    t0 = nlSysMetricsReadTimer();
    t2 = nlSysMetricsDiffTime((*(int *)0xC7F89DC), t0);
    return nlSysMetricsScaleTime(t2);
}

int FUN_0c0e2140(int a4)
{
    return FUN_0c0e2110((*(float *)((a4 + 0x0))), ((((struct o4_float *)(a4))->v)), ((((struct o8_float *)(a4))->v)));
}

int FUN_0c0fc212(int a4, int a5, int a6, int a7)
{
    FUN_0c0fae0e(a4, a5, a6, a7);
    FUN_0c10bce0();
    return 0x0;
}

void FUN_0c01f49a(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)0xC362A7E) != 0) {
        FUN_0c059330(a4, a5, a6, a7);
    return;
    }
}

void FUN_0c01240e(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)0xC361BE8) != 0) {
        FUN_0c059330(a4, a5, a6, a7);
    return;
    }
}

void FUN_0c01f98e(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)0xC362A7E) != 0) {
        FUN_0c059330(a4, a5, a6, a7);
    return;
    }
}


int FUN_0c06ca82(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)((a4 + 0x7209))) << 2) + 0xC336D54));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}




int FUN_0c07c6e8(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)((a4 + 0x7209))) << 2) + 0xC3372E4));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}


int FUN_0c0866e8(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)((a4 + 0x7209))) << 2) + 0xC337E68));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}


int FUN_0c09f8a2(int a4)
{
    (((struct o71BA_uchar *)(a4))->v) = 0x8;
    (((struct o7236_uchar *)(a4))->v) = 0x0;
    (((struct o71CC_uint *)(a4))->v) = 0x0;
    return 0x71CC;
}

int FUN_0c0dccb0(int a4, int a5, int a6, int a7)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = (((struct o8_float *)(a4))->v);
    u1 = *(float *)((a4 + 0x0));
    u2 = (((struct o4_float *)(a4))->v);
    return ((int (*)(int, int, int, int, float, float, float))(0xC0DCC80))(a4, a5, a6, a7, u1, u2, u0);
}

float FUN_0c0df4b0(float f4)
{
    register float t0;

    t0 = FUN_0c0df650((-f4));
    return (-t0);
}

int FUN_0c0f410c(int a4, int a5, int a6, int a7)
{
    register int t1;

    FUN_0c0ff02c();
    t1 = *(int *)0x8C0000E0;
    return ((int (*)(int, int, int, int))(t1))(0x2, a5, a6, a7);
}

int FUN_0c107fbc(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        return mwRnaErrCallFunc(0xC15B31C, a5, a6, a7);
    }
    (((struct o4C_uint *)(a4))->v) = a5;
    return 0x4C;
}

int FUN_0c113d4a(int a4, int a5, int a6)
{
    (((struct o9C_uint *)(a4))->v) = (((((struct o9C_int *)(a4))->v)) + a6);
    (((struct o98_uint *)(a4))->v) = (((((struct o98_int *)(a4))->v)) + a6);
    return 0x98;
}

int FUN_0c016d7a(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    t1 = t0;
    if (t0 == 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c016df2(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    t1 = t0;
    if (t0 == 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c043706(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC321810 + ((*(signed char *)((a4 + 0x4))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int FUN_0c0605a4(int a4, int a5, int a6, int a7)
{
    FUN_0c05fc68(0xC2);
    return FUN_0c05fd5e(0xC17FE64);
}

int FUN_0c069404(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC3369D0 + ((*(signed char *)((a4 + 0xA))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int FUN_0c06d41e(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC336DF0 + ((*(signed char *)((a4 + 0xA))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int FUN_0c071a40(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC336F84 + ((*(signed char *)((a4 + 0xA))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int FUN_0c076c5c(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC3370C8 + ((*(signed char *)((a4 + 0xA))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int FUN_0c083792(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC3378F4 + ((*(signed char *)((a4 + 0xA))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int FUN_0c089d9c(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC338098 + ((*(signed char *)((a4 + 0xA))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}



int FUN_0c099372(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC339360 + ((*(signed char *)((a4 + 0xB))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int FUN_0c09fe58(int a4)
{
    (((struct o71BA_uchar *)(a4))->v) = 0x21;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    return FUN_0c09a7b2(a4);
}

int FUN_0c0ae9d4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x30D));
    if (t0 == 0) {
        return ((int (*)(int, int, int, int))(0xC0AE9D0))(a4, a5, a6, a7);
    }
    return t0;
}

void FUN_0c0b53ce(void)
{
    if ((*(signed char *)0xC7F319E) == 0) {
        ((int (*)(void))(0xC0B5298))();
    return;
    }
}

float FUN_0c0df860(int a4, int a5, int a6, int a7, float f4)
{
    register float t0;

    t0 = FUN_0c0df7d0(a4, a5, a6, a7, f4);
    return (t0 / (*(float *)0xC0DF898));
}

float FUN_0c0df850(int a4, int a5, int a6, int a7, float f4)
{
    register float t0;

    t0 = FUN_0c0df7d0(a4, a5, a6, a7, f4);
    return (t0 / (*(float *)0xC0DF89C));
}

int FUN_0c069a98(int a4)
{
    FUN_0c06d8b0(a4);
    return 0x0;
}

int FUN_0c07e774(int a4)
{
    FUN_0c080804(a4);
    return 0x0;
}

int FUN_0c087496(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 == 3) {
        return FUN_0c08740a(a4);
    }
    return t0;
}

int nlSysMetricsCpuPowerStart(void)
{
    register int t0;

    t0 = nlSysMetricsReadTimer();
    *(unsigned int *)0xC7F89DC = t0;
    return t0;
}

int FUN_0c0df0f0(int a4, int a5)
{
    return FUN_0c0fdaca(a4, a5);
}

int FUN_0c0e16e0(void)
{
    FUN_0c0e19b0((*(int *)0xC7FCCD4));
    return FUN_0c0e16c0();
}

int FUN_0c0f2758(void)
{
    return (kdGetDriverMode(0x9));
}

int FUN_0c0f26de(void)
{
    return (kdGetDriverMode(0x0));
}

int gdDcfInit_(int a4, int a5)
{
    FUN_0c0eb604(a4, a5);
    return 0x1;
}

int FUN_0c0e4950(int a4, int a5)
{
    *(unsigned int *)((a5 + 0x0)) = (*(int *)(((a4 << 2) + 0xC7FD068)));
    return 0x1;
}

int FUN_0c0eb62c(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x5);
}

int FUN_0c0eb67c(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x9);
}

int FUN_0c0eb668(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x8);
}

int FUN_0c0f4f3e(int a4, int a5, int a6, int a7)
{
    return FUN_0c1080f0((*(int *)((a4 + 0xC))), a5, a6, a7);
}

int FUN_0c0f4f56(int a4, int a5, int a6, int a7)
{
    return FUN_0c108304((*(int *)((a4 + 0xC))), a5, a6, a7);
}

int FUN_0c0f4f4a(int a4, int a5, int a6, int a7)
{
    return FUN_0c108252((*(int *)((a4 + 0xC))), a5, a6, a7);
}

int FUN_0c0f4f62(int a4, int a5, int a6, int a7)
{
    return FUN_0c108358((*(int *)((a4 + 0xC))), a5, a6, a7);
}

void kdGetGunPosition(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x0)) = ((((struct o0_int *)0xC805728)->v));
    *(unsigned int *)((a5 + 0x0)) = ((((struct o4_int *)0xC805728)->v));
}

int ADXSJD_GetLpInsNsmpl(int a4)
{
    return ADXB_GetLpInsNsmpl((*(int *)((a4 + 0x4))));
}

int ADXSJD_GetCof(int a4)
{
    return ADXB_GetCof((*(int *)((a4 + 0x4))));
}

int FUN_0c1151a8(int a4, int a5, int a6)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a6;
    return FUN_0c0e6834(a4, a5, (*(signed char *)(((int)stk + 0))));
}

int FUN_0c0552f8(void)
{
    *(unsigned char *)0xC7F2EE4 = 0x6;
    return FUN_0c0d5292();
}

int FUN_0c0f26b6(int a4)
{
    return kdGetDeviceInfo(a4);
}

int vmsfs_getword_big(int a4, int a5)
{
    register int t0;

    t0 = *(short *)(((a4 + a5) + 0x0));
    return (unsigned short)((((unsigned int)t0) & 0xFFFF0000) | ((((unsigned int)t0) & 0xFF) << 8) | ((((unsigned int)t0) >> 8) & 0xFF));
}

int FUN_0c01238c(int a4)
{
    register int t0;

    t0 = *(signed char *)0xC361BE9;
    *(unsigned char *)((a4 + 0x1)) = t0;
    return t0;
}

int FUN_0c06e1ac(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x3);
}

int FUN_0c06e194(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x0);
}

int FUN_0c06e1a4(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x15);
}

int FUN_0c06e18c(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x1C);
}

int FUN_0c06e19c(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x1);
}

int FUN_0c06e1b4(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x13);
}

int FUN_0c06e266(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x0);
}

int FUN_0c06e26e(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x1);
}

int FUN_0c06e1f2(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x2);
}

int FUN_0c06e25e(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x1C);
}

int FUN_0c06e256(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x0);
}

int FUN_0c06e286(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x5);
}

int FUN_0c06e296(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x30);
}

int FUN_0c06e28e(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0xE);
}

int FUN_0c06e29e(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x31);
}

int FUN_0c06e276(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x2);
}

int FUN_0c06e27e(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x3);
}

int FUN_0c072926(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x10);
}

int FUN_0c07293e(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x19);
}

int FUN_0c07292e(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x18);
}

int FUN_0c072936(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x11);
}

int FUN_0c072946(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x12);
}

int FUN_0c07294e(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x1B);
}

int FUN_0c072956(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x14);
}

int FUN_0c072966(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x13);
}

int FUN_0c0729b4(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x1A);
}

int FUN_0c0729cc(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x0);
}

int FUN_0c0729c4(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x1C);
}

int FUN_0c07295e(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x1A);
}

int FUN_0c0729bc(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x2);
}

int FUN_0c0729d4(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x3);
}

int FUN_0c0729dc(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x0);
}

int FUN_0c0729e4(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x1);
}

int FUN_0c0729ec(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x2);
}

int FUN_0c072a44(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x31);
}

int FUN_0c072a3c(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x30);
}

int FUN_0c072a34(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0xE);
}

int FUN_0c0729f4(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x3);
}

int FUN_0c07754e(int a4)
{
    return FUN_0c07a188(a4, 0x1, 0x10);
}

int FUN_0c077556(int a4)
{
    return FUN_0c07a188(a4, 0x1, 0x18);
}

int FUN_0c07761e(int a4)
{
    return FUN_0c07a188(a4, 0x1, 0x19);
}

int FUN_0c077626(int a4)
{
    return FUN_0c07a188(a4, 0x1, 0x14);
}

int FUN_0c077636(int a4)
{
    return FUN_0c07a188(a4, 0x1, 0x1A);
}

int FUN_0c07762e(int a4)
{
    return FUN_0c07a188(a4, 0x1, 0x1);
}

int FUN_0c07763e(int a4)
{
    return FUN_0c07a188(a4, 0x1, 0x11);
}

int FUN_0c07764e(int a4)
{
    return FUN_0c07a188(a4, 0x1, 0x1C);
}

int FUN_0c077646(int a4)
{
    return FUN_0c07a188(a4, 0x1, 0xF);
}

int FUN_0c077656(int a4)
{
    return FUN_0c07a188(a4, 0x1, 0x12);
}

int FUN_0c07765e(int a4)
{
    return FUN_0c07a188(a4, 0x1, 0xE);
}

int FUN_0c077edc(int a4)
{
    return FUN_0c07a188(a4, 0x1, 0xA);
}

int FUN_0c07ad04(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x10);
}

int FUN_0c07ad0c(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x18);
}

int FUN_0c07ad14(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x12);
}

int FUN_0c07ad1c(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x1A);
}

int FUN_0c07ad24(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x14);
}

int FUN_0c07ad34(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x15);
}

int FUN_0c07ad44(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x13);
}

int FUN_0c07ad2c(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x1);
}

int FUN_0c07ad4c(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x2);
}

int FUN_0c07ad3c(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x1B);
}

int FUN_0c07ad54(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x1C);
}

int FUN_0c07ad5c(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x0);
}

int FUN_0c07e87c(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x12);
}

int FUN_0c07e8e2(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0xE);
}

int FUN_0c07e8f8(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x1A);
}

int FUN_0c07e920(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x3);
}

int FUN_0c0810a8(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x10);
}

int FUN_0c0810b0(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x19);
}

int FUN_0c0810a0(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x18);
}

int FUN_0c0810c0(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x3);
}

int FUN_0c0810b8(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x11);
}

int FUN_0c0810c8(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x1A);
}

int FUN_0c0810d0(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x12);
}

int FUN_0c0810e0(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x13);
}

int FUN_0c0810d8(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x1C);
}

int FUN_0c0811e4(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x1);
}

int FUN_0c0811ec(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x2);
}

int FUN_0c0811f4(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x3);
}

int FUN_0c0811fc(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x5);
}

int FUN_0c087e54(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x11);
}

int FUN_0c087e4c(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x10);
}

int FUN_0c087e44(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x12);
}

int FUN_0c087e64(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x19);
}

int FUN_0c087e74(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x18);
}

int FUN_0c087e6c(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x5);
}

int FUN_0c087e84(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x3);
}

int FUN_0c087e7c(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x0);
}

int FUN_0c087e8c(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x14);
}

int FUN_0c087e94(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x1D);
}

int FUN_0c087e5c(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x13);
}

int FUN_0c090a2c(int a4, int a5, int a6, int a7)
{
    return FUN_0c0a2e26(a4, 0xD, 0x60, a7);
}

int gdFsGetGlobalErrG(void)
{
    return (*(int *)(((*(int *)0xC346BD8) + 0x30)));
}

int gdFsGetSysHnG(void)
{
    return (*(int *)(((*(int *)0xC346BD8) + 0x14)));
}

int gdFsGetWorkHnG(void)
{
    return (*(int *)(((*(int *)0xC346BD8) + 0x1C)));
}

int FUN_0c0ffd90(void)
{
    *(unsigned int *)0xA05F6900 = 0x1000;
    return 0x1000;
}

int vmsfs_getword_little(int a4, int a5)
{
    return (unsigned short)(*(short *)(((a4 + a5) + 0x0)));
}

void vmsfs_setword_big(int a4, int a5, int a6)
{
    *(unsigned short *)(((a4 + a5) + 0x0)) = ((((unsigned int)a6) & 0xFFFF0000) | ((((unsigned int)a6) & 0xFF) << 8) | ((((unsigned int)a6) >> 8) & 0xFF));
}

int FUN_0c097e64(int a4)
{
    return FUN_0c08bf90(a4);
}

int FUN_0c097e6a(int a4, int a5, int a6, int a7)
{
    return FUN_0c08c114(a4, a5, a6, a7);
}

void FUN_0c0dd7d0(int a4)
{
    *(unsigned int *)0xC7F87C0 = a4;
}

void FUN_0c0dea20(int a4)
{
    *(unsigned int *)0xC7F887C = a4;
}

void FUN_0c0df0b0(int a4)
{
    *(unsigned int *)0xA05F811C = a4;
}

int FUN_0c0df0d0(void)
{
    return (*(int *)0xC7F8954);
}

int FUN_0c0df0e0(void)
{
    return (*(int *)0xC7F8958);
}

void FUN_0c0df960(int a4)
{
    *(unsigned int *)0xC346A50 = a4;
}

void FUN_0c0dfeb0(int a4)
{
    *(unsigned int *)0xC346A58 = a4;
}

int syRtcGetStat(void)
{
    return (*(int *)0xC7FD0CC);
}

int FUN_0c0e5d82(void)
{
    return 0xC155C18;
}

void FUN_0c0eafb0(int a4)
{
    *(unsigned int *)0xC346B68 = a4;
}

int gdDcfStop_(int a4, int a5)
{
    return FUN_0c0eb668(a4, a5);
}

int gdDcfSoftReset_(int a4, int a5)
{
    return FUN_0c0eb67c(a4, a5);
}

void kdSetGunCallback(int a4)
{
    *(unsigned int *)0xC8054C4 = a4;
}

int kdGetSystemInfo(void)
{
    return 0xC805488;
}

void FUN_0c108542(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x1C)) = a5;
    *(unsigned int *)((a4 + 0x20)) = a6;
}

void FUN_0c108802(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x28)) = a5;
    *(unsigned int *)((a4 + 0x2C)) = a6;
}

void vmsfs_setword_little(int a4, int a5, int a6)
{
    *(unsigned short *)(((a4 + a5) + 0x0)) = a6;
}

void FUN_0c01b744(void)
{
    
}

int FUN_0c048ea4(int a4, float f4)
{
    return FUN_0c048c18(a4, 0x1, f4);
}

void FUN_0c0aed66(void)
{
    
}

void FUN_0c0df070(void)
{
    
}

void FUN_0c0e0f90(void)
{
    
}

void FUN_0c0e0f4c(void)
{
    
}

void FUN_0c0e0fe4(void)
{
    
}

void FUN_0c0e7038(void)
{
    
}

void FUN_0c0e70d6(void)
{
    
}

void kmiNullCallback0(void)
{
    
}

void kmiNullCallback1(void)
{
    
}

void kmiNullCallback2(void)
{
    
}

void kmiNullCallback3(void)
{
    
}

void kmiNullCallback4(void)
{
    
}

void kmiNullCallback5(void)
{
    
}

void kmiNullCallback7(void)
{
    
}

void kmiNullCallback6(void)
{
    
}

int gdFsOpenFastG(int a4, int a5)
{
    return gdFsOpenG(a4, a5);
}

void FUN_0c106432(void)
{
    
}

int FUN_0c0f0c4e(int a4, int a5)
{
    return FUN_0c0f0b42(a4, a5);
}

void FUN_0c1084a4(void)
{
    for (;;) {
    }
}

int FUN_0c10853e(int a4)
{
    return (*(int *)((a4 + 0x8)));
}

void FUN_0c108764(void)
{
    for (;;) {
    }
}

int FUN_0c1087fe(int a4)
{
    return (*(int *)((a4 + 0x8)));
}

int kmiProcessVertex_15(void)
{
    return 0xA;
}

int kmiProcessVertex_16(void)
{
    return 0xA;
}

int kmiProcessVertex_17(void)
{
    return 0xA;
}

int FUN_0c114334(int a4)
{
    return (*(int *)((a4 + 0x3C)));
}

int FUN_0c11433e(int a4)
{
    return (*(int *)((a4 + 0x14)));
}
