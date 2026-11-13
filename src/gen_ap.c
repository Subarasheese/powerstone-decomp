/* Straight-line functions with calls and guards (batch gen_ap): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o10E8_int { char p[0x10E8]; int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o14_short { char p[0x14]; short v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o68_uchar { char p[0x68]; unsigned char v; };
struct o69_uchar { char p[0x69]; unsigned char v; };
struct o6A_uchar { char p[0x6A]; unsigned char v; };
struct o6B_uchar { char p[0x6B]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71E4_float { char p[0x71E4]; float v; };
struct o71F8_int { char p[0x71F8]; int v; };
struct o71FC_int { char p[0x71FC]; int v; };
struct o720E_uchar { char p[0x720E]; unsigned char v; };
struct o7264_float { char p[0x7264]; float v; };
struct o7268_float { char p[0x7268]; float v; };
struct o726C_float { char p[0x726C]; float v; };
struct o7270_float { char p[0x7270]; float v; };
struct o7274_float { char p[0x7274]; float v; };
struct o7278_float { char p[0x7278]; float v; };
struct o74_int { char p[0x74]; int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
int FUN_0c012870(int);
int FUN_0c020ff2(int, int, int);
int FUN_0c021042(int, int, int);
int FUN_0c021090(int, int, int);
int FUN_0c022b90(int, int, int);
int FUN_0c022c1a(int, int, int);
int FUN_0c022ca8(int, int, int);
int FUN_0c041e14(int);
int FUN_0c058f4e(void);
int FUN_0c05909a(int);
int FUN_0c059132(int, int, int);
int FUN_0c0599fc(int);
int FUN_0c059d7e(int, int, int);
int FUN_0c05fc68(int);
int FUN_0c05fcc2(int);
float FUN_0c0620a4(int, float);
int FUN_0c063468(int);
int FUN_0c06428a(int);
int FUN_0c064340(int);
int FUN_0c064534(int);
int FUN_0c0645a0(int);
int FUN_0c069d68(int);
int FUN_0c069e08(int);
int FUN_0c069f6c(int);
int FUN_0c069f9c(int);
int FUN_0c06e9c6(int);
int FUN_0c06ea2c(int);
int FUN_0c06eade(int);
int FUN_0c06eb0a(int);
int FUN_0c077f6e(int);
int FUN_0c0928ba(int);
int FUN_0c0928d8(int);
int FUN_0c098308(int);
int FUN_0c098370(int);
int FUN_0c0983d8(int);
int FUN_0c098660(int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09a91a(int);
int FUN_0c09bafe(void);
int FUN_0c09c6b8(int, int, int);
int FUN_0c09da1c(int);
int FUN_0c09db78(int);
int FUN_0c0a022e(int, float);
int FUN_0c0a1e0a(int, int);
int FUN_0c0a2080(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a2e26(int, int, int);
int FUN_0c0a2eec(int);
int FUN_0c0a2f52(void);
int FUN_0c0a3796(int, int);
int FUN_0c0c2a20(int, int, int);
int FUN_0c0cc074(void);
int FUN_0c0d2dec(void);
int FUN_0c0d54ac(void);
int FUN_0c0d8e6e(int, int, int);
int FUN_0c0d8f10(int, int, int);
int FUN_0c0da1f6(int, int);
int nlInvLightVector(void);
int nlInvLightVectorUseViewMatrix(void);
int nlobjput_sub(int);
int nlobjput_sub_trnsl(int);
int nlMakeModelViewProjectMatrix_objput(void);
int FUN_0c0dd320(int, int, int, int);
int FUN_0c0dd9e0(int);
int FUN_0c0ddd70(int);
int FUN_0c0ddf80(void);
int FUN_0c0de280(int, int, int);
int FUN_0c0e07c0(int);
int FUN_0c0e0800(int);
int FUN_0c0e0ae0(int);
int nlMultiMatrixRevOrder8(int);
int nlPopMatrix(int);
int FUN_0c0e19b0(int);
int FUN_0c0e2080(int);
int FUN_0c0e24f0(int, int, int, float, float, float, float);
int FUN_0c0e3900(int, int);
int FUN_0c0e3bb2(int, int);
int syRtcGetAndCheckCount(int);
int syRtcGetCountForce(void);
int FUN_0c0e55e0(int, int);
int FUN_0c0e5884(int);
int FUN_0c0e6d00(void);
int FUN_0c0eb400(int, int, int, int, int, int);
int FUN_0c0ee6dc(int, int);
int FUN_0c0f1766(int);
int syCfgGetIDAddress(int, int, int);
int FUN_0c0f4202(int, int);
int FUN_0c0f4db4(int, int, int, int);
int FUN_0c0fb042(int, int, int, int);
int FUN_0c0fc38c(int, int, int, int);
int FUN_0c0fc5da(int, int, int, int);
int FUN_0c0fcea0(int, int);
int FUN_0c0fddce(int);
int gdFsToUpper(int);
int FUN_0c0fe938(int);
int FUN_0c0ff1ac(int, int, int, int);
int FUN_0c0ff640(int, int);
int FUN_0c0ff7e0(void);
int FUN_0c100260(void);
int kdGetDeviceInfo(int);
int kdSetDriverMode(int, int);
int kdSetHandler(int, int);
int vmsfs_c_getstate(int);
int vmsfs_findfirst_ex(int, int, int);
int vmsfs_findnext_ex(int, int, int);
int ADXSJD_GetLpStartOfst(int);
int FUN_0c1064b8(int);
int FUN_0c106654(int);
int FUN_0c106688(int, int);
int FUN_0c10d0a4(void);
int FUN_0c10dbe0(int, int, int, int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiCopyFromFrameBuffer(int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_setcmd(int, int, int, int, int);
int mpdrv_set_getcond_ns(int, int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_dkill_ns(int);
int mpdrv_set_dreset_ns(int);
int mpdrv_set_allstatreq_ns(int);
int mpdrv_set_bread(int, ...);
int mpdrv_set_getlerr(int, ...);
int mpdrv_set_transagain_ns(int);
int mpdrv_set_arctrl_ns(int, int);
int mpdrv_set_ft4ctrl_ns(int, int);
int mpdrv_set_setcond_ns(int, int, int, int);
int FUN_0c113df4(int);
int FUN_0c11518e(int, int, int);
extern void _builtin_ftrv(float *, float *);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_st_ext(float (*)[4]);
extern int _builtin_tas(char *);
int gdFsClose(int);
static float iaFscaC(int a)
{
    float s;
    float c;

    _builtin_fsca(a, &s, &c);
    return c;
}
static float iaFscaS(int a)
{
    float s;
    float c;

    _builtin_fsca(a, &s, &c);
    return s;
}
int memset(int, int, int);
int mwRnaErrCallFunc(int, int, int, int);
int thunk_FUN_0c020cba(void);
int pdVibMxIsReady(int);
int thunk_FUN_0c0fbcf0(int);
int mpdrv_set_hreset(void);
int FUN_0c059b6c(int a4);
int FUN_0c069cd4(int a4);
int FUN_0c098a0e(int a4);
int FUN_0c0c2bd8(int a4, int a5);
int FUN_0c0d2fb0(void);
int FUN_0c0d4e8c(void);
int FUN_0c101090(int a4, int a5);
int mpdrv_set_bread_ns(int a4, int a5, int a6, int a7, int a8);
int mpdrv_set_getlerr_ns(int a4, int a5, int a6, int a7, int a8);
int FUN_0c114ea4(int a4, int a5, int a6);
int FUN_0c114e5c(int a4, int a5, int a6);
int FUN_0c010ae4(void);
int FUN_0c01576c(int a4);
int FUN_0c015798(int a4);
int FUN_0c0157fc(int a4);
int FUN_0c02114c(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int FUN_0c0210c8(int a4, int a5, int a6);
int FUN_0c0210f4(int a4, int a5, int a6);
int FUN_0c021120(int a4, int a5, int a6);
int FUN_0c05414e(void);
int FUN_0c05f136(void);
float FUN_0c0620dc(int a4, float f4);
int FUN_0c09d990(int a4);
int FUN_0c09d9bc(int a4);
int FUN_0c09e89a(int a4, int a5, int a6);
int FUN_0c0a2c4a(int a4);
int FUN_0c0a77aa(int a4);
int FUN_0c0a807c(int a4);
int FUN_0c0a751a(int a4);
int FUN_0c0c58da(int a4);
int FUN_0c0c3b2c(int a4);
int FUN_0c0d361e(int a4);
int FUN_0c0d3aae(int a4);
int FUN_0c0d4886(void);
int FUN_0c0dab92(int a4, int a5);
int FUN_0c0daaf8(int a4, int a5);
int FUN_0c0dd5d0(int a4, int a5);
int nlObjPutUseViewMatrixTrnsl(int a4, float f4);
int FUN_0c0ddd40(int a4, int a5);
int nlObjPut(int a4);
float nlRotateAX(int a4);
void FUN_0c0e2050(int a4);
void nlTransposeMatrix(void);
int FUN_0c0e66f4(int a4, int a5, int a6);
int FUN_0c0e6726(int a4, int a5, int a6);
int FUN_0c0eb0c0(int a4, int a5, int a6);
int kdSetBlockRead(Stk4 s);
int kdSetGetLastError(Stk4 s);
int FUN_0c1010c2(int a4, int a5);
int FUN_0c10bc80(int a4, int a5, int a6);
int mpdrv_set_dreq(int a4);
int mpdrv_set_transagain(int a4);
int mpdrv_set_getcond(int a4, int a5);
int mpdrv_set_dreset(int a4);
int mpdrv_set_dkill(int a4);
int mpdrv_set_allstatreq(int a4);
int mpdrv_set_getminfo(int a4, int a5, int a6);
int mpdrv_set_setcond(int a4, int a5, int a6, int a7);
int mpdrv_set_arctrl(int a4, int a5);
int mpdrv_set_ft4ctrl(int a4, int a5);
int FUN_0c025f50(void);
int FUN_0c058f78(int a4);
int FUN_0c062d78(void);
int FUN_0c064152(int a4);
int FUN_0c066cb2(int a4);
int FUN_0c0645c4(int a4);
int FUN_0c0731bc(int a4, int a5, int a6, int a7);
int FUN_0c06eb58(int a4);
int FUN_0c069fbe(int a4);
int FUN_0c08e8ac(int a4);
int FUN_0c09c3f8(int a4, int a5);
int FUN_0c0986bc(int a4);
int FUN_0c0a2fd0(int a4, int a5, int a6, int a7);
int FUN_0c0a37da(int a4, int a5, int a6);
int FUN_0c0a3fa4(int a4, int a5);
int FUN_0c0c3500(int a4);
int FUN_0c0daa9e(int a4);
int FUN_0c0e4688(int a4);
int syRtcExecServer(void);
int syRtcInit(void);
int buFindFirstFileEx(int a4, int a5, int a6);
int buFindNextFileEx(int a4, int a5, int a6);
int syCfgGetDefaultLanguage(int a4, int a5, int a6);
int syHwInit(void);
int FUN_0c0fb0fc(int a4, int a5);
int FUN_0c0fd160(int a4, int a5, int a6);
int FUN_0c1010ee(int a4, int a5);
int vmsfs_unmount(int a4);
void FUN_0c105e60(int a4);
int FUN_0c107ecc(int a4, int a5, int a6, int a7);
int FUN_0c10aa20(void);
int FUN_0c10b388(void);
int kmiBGPlaneSetPCW(int a4, int a5, int a6);
int FUN_0c0207a2(int a4, int a5);
int FUN_0c05957c(int a4);
int FUN_0c059616(int a4);
int FUN_0c0596e0(int a4);
int FUN_0c05a138(int a4, int a5, int a6);
int FUN_0c05fcf2(int a4);
int FUN_0c05fd5e(int a4);
int FUN_0c05ff2a(int a4);
int FUN_0c064d4c(int a4);
int FUN_0c09e0dc(int a4);
int FUN_0c0a32dc(void);
int FUN_0c0afb0a(int a4);
int FUN_0c0ddeb0(void);
int FUN_0c0e0bd0(int a4, int a5, int a6, int a7);
float nlRotateXSC(float f4, float f5);
float nlRotateAY(int a4);
float nlRotateAZ(int a4);
int syRtcAicaSetWriteFlag(void);
int FUN_0c0ed8f4(int a4, int a5);
int gdFsGetDrvStatG(int a4, int a5, int a6, int a7);
void hwInit(void);
int FUN_0c0fd18a(int a4, int a5, int a6);
void FUN_0c10660e(int a4);
int FUN_0c107ea4(int a4, int a5, int a6, int a7);
int FUN_0c10dd8c(int a4, int a5, int a6, int a7);
int kmiPurgeMemory(int a4, int a5);
int FUN_0c114b50(int a4);
int FUN_0c01e75e(int a4, int a5);
int FUN_0c020468(int a4);
int FUN_0c027c7e(void);
int FUN_0c02d458(void);
int FUN_0c04ca6e(int a4);
int FUN_0c05948c(int a4, int a5, int a6, int a7);
int FUN_0c062954(int a4, int a5);
int FUN_0c064c66(int a4);
int FUN_0c0650be(int a4);
int FUN_0c066616(int a4);
int FUN_0c07b32a(int a4);
int FUN_0c08b81e(int a4);
int FUN_0c08cb26(void);
int FUN_0c08d6aa(int a4, int a5);
int FUN_0c092894(int a4);
int FUN_0c09e470(int a4);
int FUN_0c0a3cb0(int a4, int a5);
void FUN_0c0a3f50(int a4);
int FUN_0c0ddd10(int a4, int a5);
int syRtcAicaSetDateLo(int a4);
int syRtcAicaSetDateHi(int a4);
int gdFsGetLE4(int a4);
int FUN_0c0f4128(int a4);
int pdVibMxStart(int a4, int a5);
int FUN_0c0f271a(void);
int gdFsGetTokenSize(int a4, int a5, int a6);
int gdFsGetSearchID(int a4);
int FUN_0c0ff884(void);
int kdSetResetPattern(void);
int vmsfs_c_execcallback(int a4, int a5, int a6);
int ADXSTM_GetCurOfst(int a4, int a5);
int FUN_0c107e7e(int a4, int a5, int a6, int a7);
int adxt_eos_entry(int a4);
int FUN_0c10822c(int a4, int a5, int a6, int a7);
int mpdrv_set_getminfo_ns(int a4, int a5, int a6);
int FUN_0c024274(void);
int FUN_0c050180(int a4);
int FUN_0c06144e(void);
int FUN_0c068716(int a4);
int FUN_0c072f42(int a4);
int FUN_0c07c57a(int a4);
int FUN_0c078220(int a4, int a5, int a6, int a7);
int FUN_0c096a40(int a4);
int FUN_0c09b68a(int a4, int a5, int a6, float f4);
int FUN_0c0a4fc6(void);
int FUN_0c0cc212(void);
int FUN_0c0d48b2(void);
int FUN_0c0d643c(int a4);
int FUN_0c0da490(int a4);
int FUN_0c0da526(int a4);
int FUN_0c0ddbc0(int a4, int a5);
float nlRotateYSC(float f4, float f5);
void nlUnitMatrix(void);
int kmSetBackGroundPlane(int a4, int a5, int a6, int a7);


int FUN_0c069cd4(int a4)
{
    int stk[2];
    register int t4;

    FUN_0c09a910(a4);
    FUN_0c09da1c(a4);
    t4 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        FUN_0c0a2080(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t4 = 0x71A8;
    }
    return t4;
}

int FUN_0c098a0e(int a4)
{
    FUN_0c09a91a(a4);
    FUN_0c09da1c(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return FUN_0c0a2e26(a4, 0xF, ((((struct oEC_short *)(a4))->v)));
    }
    return 0x71AA;
}

int FUN_0c0c2bd8(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t3;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = 0x0;
    for (;;) {
        t3 = FUN_0c0c2a20((*(int *)(((int)stk + 0))), t0, (*(signed char *)(((int)stk + 4))));
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return t3;
}

int FUN_0c0d2fb0(void)
{
    memset(0xC7F2DF0, 0x0, 0x78);
    memset(0xC7F2E68, 0x0, 0x78);
    *(unsigned char *)0xC7F2DF9 = 0x0;
    *(unsigned char *)0xC7F2E71 = 0x1;
    return FUN_0c0d2dec();
}

int FUN_0c0d4e8c(void)
{
    register int t1;

    FUN_0c058f4e();
    *(unsigned char *)0xC7F2EE4 = 0x1;
    (((struct o0_uchar *)0xC7F306E)->v) = 0x0;
    (((struct o2_uchar *)0xC7F306E)->v) = 0x0;
    (((struct o12_uchar *)0xC7F306E)->v) = 0x0;
    t1 = FUN_0c0d54ac();
    (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
    (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
    (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
    return t1;
}

int FUN_0c101090(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = 0x20;
    t1 = (a4 + 0xBA);
    t2 = a5;
    for (;;) {
        t3 = 0x6;
        for (;;) {
            t4 = 0x80;
            t5 = 0x0;
            t6 = 0x8;
            for (;;) {
                t7 = *(signed char *)((t2 + 0x0));
                t2 = (t2 + 0x1);
                if ((t7 & 8) != 0) {
                    t5 = (t5 | t4);
                }
                t4 = ((unsigned int)t4 >> 1);
                t6 = (t6 - 0x1);
                if (t6 == 0) {
                    break;
                }
            }
            *(unsigned char *)((t1 + 0x0)) = t5;
            t1 = (t1 + 0x1);
            t3 = (t3 - 0x1);
            if (t3 == 0) {
                break;
            }
        }
        t0 = (t0 - 0x1);
        t1 = (t1 - 12);
        if (t0 == 0) {
            break;
        }
    }
    return t7;
}

int mpdrv_set_bread_ns(int a4, int a5, int a6, int a7, int a8)
{
    int stk[4];

    *(unsigned int *)((((int)stk + 8) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 8) + 0x4)) = ((((a6 << 16) << 8) | (a7 << 16)) | a8);
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    return (mpdrv_setcmd(a4, 0xB, ((int)stk + 8), 0x2, 0x0));
}

int mpdrv_set_getlerr_ns(int a4, int a5, int a6, int a7, int a8)
{
    int stk[4];

    *(unsigned int *)((((int)stk + 8) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 8) + 0x4)) = ((((a6 << 16) << 8) | (a7 << 16)) | a8);
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    return (mpdrv_setcmd(a4, 0xD, ((int)stk + 8), 0x2, 0x0));
}

int FUN_0c114ea4(int a4, int a5, int a6)
{
    *(unsigned int *)((a5 + 0x0)) = (FUN_0c11518e(a4, 0x9, 0x0));
    *(unsigned int *)((a6 + 0x0)) = (FUN_0c11518e(a4, 0xA, 0x0));
    return 0x0;
}

int FUN_0c114e5c(int a4, int a5, int a6)
{
    *(unsigned int *)((a5 + 0x0)) = (FUN_0c11518e(a4, 0x7, 0x0));
    *(unsigned int *)((a6 + 0x0)) = (FUN_0c11518e(a4, 0x8, 0x0));
    return 0x0;
}

int FUN_0c010ae4(void)
{
    (((struct o0_uchar *)0xC7F4764)->v) = 0x1;
    (((struct o1_uchar *)0xC7F4764)->v) = 0x0;
    (((struct o2_uchar *)0xC7F4764)->v) = 0x0;
    (((struct o3_uchar *)0xC7F4764)->v) = 0x0;
    (((struct o4_uchar *)0xC7F4764)->v) = 0x0;
    (((struct o5_uchar *)0xC7F4764)->v) = 0x0;
    (((struct o6_uchar *)0xC7F4764)->v) = 0x0;
    (((struct o7_uchar *)0xC7F4764)->v) = 0x1;
    (((struct o8_uchar *)0xC7F4764)->v) = 0x1;
    return 0x1C;
}

int FUN_0c01576c(int a4)
{
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o44_float *)(a4))->v)));
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    return 0x40;
}

int FUN_0c015798(int a4)
{
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
    return 0x28;
}

int FUN_0c0157fc(int a4)
{
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
    return 0x58;
}

int FUN_0c02114c(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    float u0;

    *(float *)((a4 + 0x0)) = (f6 - f4);
    (((struct o4_float *)(a4))->v) = 0.0f;
    (((struct o8_float *)(a4))->v) = (f7 - f5);
    if (((*(float *)((a4 + 0x0))) == 0.0f) && (u0 = (((struct o8_float *)(a4))->v), u0 == 0.0f)) {
        u0 = *(float *)0xC0212BC;
        (((struct o8_float *)(a4))->v) = u0;
        *(float *)((a4 + 0x0)) = u0;
    }
    return FUN_0c0e24f0(a4, a5, a6, f4, f5, (f6 - f4), (f7 - f5));
}

int FUN_0c0210c8(int a4, int a5, int a6)
{
    int stk[9];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    FUN_0c022ca8((*(int *)(((int)stk + 0))), (*(short *)(((*(int *)(((int)stk + 8))) + 0x2))), (((int)stk + 0) + 0xC));
    return (FUN_0c020ff2((*(int *)(((int)stk + 0))), (*(int *)(((int)stk + 4))), (((int)stk + 0) + 0xC)));
}

int FUN_0c0210f4(int a4, int a5, int a6)
{
    int stk[8];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    FUN_0c022c1a((*(int *)(((int)stk + 0))), (*(short *)(((*(int *)(((int)stk + 8))) + 0x2))), (((int)stk + 0) + 0xC));
    return (FUN_0c021042((*(int *)(((int)stk + 0))), (*(int *)(((int)stk + 4))), (((int)stk + 0) + 0xC)));
}

int FUN_0c021120(int a4, int a5, int a6)
{
    int stk[7];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    FUN_0c022b90((*(int *)(((int)stk + 0))), (*(short *)(((*(int *)(((int)stk + 8))) + 0x2))), (((int)stk + 0) + 0xC));
    return (FUN_0c021090((*(int *)(((int)stk + 0))), (*(int *)(((int)stk + 4))), (((int)stk + 0) + 0xC)));
}

int FUN_0c05414e(void)
{
    FUN_0c05909a(0x2);
    FUN_0c05909a(0x3);
    FUN_0c05909a(0x4);
    FUN_0c05909a(0x5);
    FUN_0c0cc074();
    FUN_0c041e14(0x0);
    return FUN_0c041e14(0x1);
}

int FUN_0c05f136(void)
{
    register int t0;
    register int t1;

    t0 = 0xC494B18;
    t1 = 0x0;
    for (;;) {
        t1 = (t1 + 0x1);
        *(float *)((t0 + 0x0)) = 0.0f;
        t0 = (t0 + 0x4);
        if ((int)t1 >= (int)0x81) {
            break;
        }
    }
    thunk_FUN_0c0fbcf0(0xC494B18);
    FUN_0c0e07c0(0x101010);
    return FUN_0c0e0800(0xFF09);
}

float FUN_0c0620dc(int a4, float f4)
{
    register float t0;

    t0 = FUN_0c0620a4(a4, f4);
    if (t0 != 0.0f) {
        *(float *)((a4 + 0x0)) = ((*(float *)((a4 + 0x0))) / t0);
        (((struct o4_float *)(a4))->v) = (((((struct o4_float *)(a4))->v)) / t0);
        (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a4))->v)) / t0);
    }
    return t0;
}

int FUN_0c09d990(int a4)
{
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    return 0x24;
}

int FUN_0c09d9bc(int a4)
{
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o44_float *)(a4))->v)));
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    return 0x3C;
}

int FUN_0c09e89a(int a4, int a5, int a6)
{
    register int t0;
    int t1;

    t0 = FUN_0c09c6b8(a4, a5, a6);
    if (((signed char)t0 == 0) && (t1 = *(signed char *)((a4 + 0x7221)), t1 != 0)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0a2c4a(int a4)
{
    (((struct o7270_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) - ((((struct o7264_float *)(a4))->v)));
    (((struct o7274_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - ((((struct o7268_float *)(a4))->v)));
    (((struct o7278_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - ((((struct o726C_float *)(a4))->v)));
    return 0x7278;
}

int FUN_0c0a77aa(int a4)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c059132(0x5, 0x1, 0x2);
    t2 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x3)) = t2;
        *(unsigned int *)((t0 + 0x10)) = 0xC0A7A2E;
    }
    return t2;
}

int FUN_0c0a807c(int a4)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    t2 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x3)) = t2;
        *(unsigned int *)((t0 + 0x10)) = 0xC0A80C4;
    }
    return t2;
}

int FUN_0c0a751a(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t0 + 0x10)) = 0xC0A7546;
    }
    return FUN_0c0a807c((*(signed char *)(((int)stk + 0))));
}

int FUN_0c0c58da(int a4)
{
    register int t1;
    register int t2;

    if ((*(signed char *)((a4 + 0x2A8))) != 0) {
        t1 = (0x294 + a4);
        t2 = 0x0;
        for (;;) {
            if ((*(int *)((t1 + 0x0))) != (*(int *)(((*(int *)((a4 + 0x1C))) + 0x1C)))) {
                t2 = (t2 + 0x1);
                t1 = (t1 + 0x4);
                if ((int)t2 >= (int)0x5) {
                    break;
                }
                continue;
            }
            return 0x0;
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0c3b2c(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x1C));
    if ((*(signed char *)((t0 + 0x71BA))) == 21) {
        if ((int)(*(signed char *)((t0 + 0xB))) <= (int)0x1) {
            return 0x1;
        }
        return 0x2;
    }
    if ((*(signed char *)((t0 + 0x71BA))) == 33) {
        return 0x3;
    }
    return 0x0;
}

int FUN_0c0d361e(int a4)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c059132(0x6, 0x1, 0x1);
    t2 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC0D33D6;
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x4)) = t2;
    }
    return t2;
}

int FUN_0c0d3aae(int a4)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c059132(0x6, 0x1, 0x1);
    t2 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC0D384E;
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x4)) = t2;
    }
    return t2;
}

int FUN_0c0d4886(void)
{
    if (((((struct o0_int *)0xC361BF0)->v)) != 0) {
        if (((((struct o14_int *)0xC361BF0)->v)) != 0) {
            return 0x3;
        }
        if (((((struct o0_int *)0xC361BF0)->v)) != 0) {
            return 0x1;
        }
    }
    if (((((struct o14_int *)0xC361BF0)->v)) != 0) {
        return 0x2;
    }
    return 0x0;
}

int FUN_0c0dab92(int a4, int a5)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c0d8e6e(0x4, a5, 0x60);
    if ((signed char)t0 != 0) {
        *(unsigned char *)0xC7F29FC = (*(signed char *)(((int)stk + 0)));
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0daaf8(int a4, int a5)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c0d8e6e(0x3, a5, 0x60);
    if ((signed char)t0 != 0) {
        *(unsigned char *)0xC7F29FC = (*(signed char *)(((int)stk + 0)));
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0dd5d0(int a4, int a5)
{
    int stk[3];
    register int t0;
    register int t5;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t0 = 0x0;
    for (;;) {
        t5 = *(int *)(((int)stk + 0));
        t0 = (t0 | (FUN_0c0dd320((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 0))), ((int)stk + 0))));
        if (t5 == 0) {
            break;
        }
    }
    return t0;
}

int nlObjPutUseViewMatrixTrnsl(int a4, float f4)
{
    if (((*(int *)((a4 + 0x4))) & 2) == 0) {
        nlInvLightVectorUseViewMatrix();
    }
    nlMakeModelViewProjectMatrix_objput();
    return nlobjput_sub_trnsl(a4);
}

int FUN_0c0ddd40(int a4, int a5)
{
    register int t2;
    register int t0;
    register int t1;

    (((struct o0_uint *)0xC7FC4F0)->v) = a4;
    (((struct o4_uint *)0xC7FC4F0)->v) = a5;
    (((struct o0_uint *)0xC7FD488)->v) = 0x0;
    (((struct o8_uint *)0xC7FD488)->v) = 0x0;
    t2 = 0x0;
    if ((int)a5 > 0) {
        t0 = 0x0;
        t1 = a4;
        for (;;) {
            t0 = (t0 + 0x1);
            *(unsigned int *)((t1 + 0x28)) = 0xFFFFFFFF;
            *(unsigned int *)((t1 + 0x2C)) = 0x0;
            *(unsigned int *)((t1 + 0x38)) = 0xFFFFFFFF;
            t1 = (t1 + 0x3C);
            if ((int)t0 >= (int)a5) {
                break;
            }
        }
        t2 = t0;
    }
    return t2;
}

int nlObjPut(int a4)
{
    if (((*(int *)((a4 + 0x4))) & 0x2) == 0) {
        nlInvLightVector();
    }
    FUN_0c0e19b0(0x0);
    nlMultiMatrixRevOrder8(0xC7FCF80);
    return nlobjput_sub(a4);
}

float nlRotateAX(int a4)
{
    register float u0;
    register float u1;
    float u2[4];
    float u3[4];
    float u4[16];

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    u2[0] = 0.0f;
    u2[1] = u1;
    u2[2] = u0;
    u2[3] = 0.0f;
    _builtin_ftrv(u2, u2);
    u3[0] = 0.0f;
    u3[1] = (-u0);
    u3[2] = u1;
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[4] = u2[0];
    u4[5] = u2[1];
    u4[6] = u2[2];
    u4[7] = u2[3];
    u4[8] = u3[0];
    u4[9] = u3[1];
    u4[10] = u3[2];
    u4[11] = u3[3];
    _builtin_ld_ext((float (*)[4])u4);
    return u2[0];
}

void FUN_0c0e2050(int a4)
{
    register float u2;
    register float u3;
    register float u4;
    int t5;
    float u0[16];
    float u6[16];

    _builtin_st_ext((float (*)[4])u0);
    u2 = *(float *)((a4 + 0x0));
    u3 = (((struct o4_float *)(a4))->v);
    u4 = (((struct o4_float *)((a4 + 0x4)))->v);
    t5 = (*(int *)&(u0[15]));
    _builtin_st_ext((float (*)[4])u6);
    u6[0] = (u0[0] * u2);
    u6[1] = (u0[1] * u2);
    u6[2] = (u0[2] * u2);
    u6[3] = (u0[3] * u2);
    u6[4] = (u0[4] * u3);
    u6[5] = (u0[5] * u3);
    u6[6] = (u0[6] * u3);
    u6[7] = (u0[7] * u3);
    u6[8] = (u0[8] * u4);
    u6[9] = (u0[9] * u4);
    u6[10] = (u0[10] * u4);
    u6[11] = (u0[11] * u4);
    u6[12] = u0[12];
    u6[13] = u0[13];
    u6[14] = u0[14];
    u6[15] = (*(float *)&t5);
    _builtin_ld_ext((float (*)[4])u6);
}

void nlTransposeMatrix(void)
{
    int t2;
    int t4;
    int t6;
    int t8;
    int t10;
    int t12;
    float u0[16];
    float u13[16];

    _builtin_st_ext((float (*)[4])u0);
    t2 = (*(int *)&(u0[1]));
    t4 = (*(int *)&(u0[2]));
    t6 = (*(int *)&(u0[3]));
    t8 = (*(int *)&(u0[6]));
    t10 = (*(int *)&(u0[7]));
    t12 = (*(int *)&(u0[11]));
    _builtin_st_ext((float (*)[4])u13);
    u13[0] = u0[0];
    u13[1] = u0[4];
    u13[2] = u0[8];
    u13[3] = u0[12];
    u13[4] = (*(float *)&t2);
    u13[5] = u0[5];
    u13[6] = u0[9];
    u13[7] = u0[13];
    u13[8] = (*(float *)&t4);
    u13[9] = (*(float *)&t8);
    u13[10] = u0[10];
    u13[11] = u0[14];
    u13[12] = (*(float *)&t6);
    u13[13] = (*(float *)&t10);
    u13[14] = (*(float *)&t12);
    u13[15] = u0[15];
    _builtin_ld_ext((float (*)[4])u13);
}

int FUN_0c0e66f4(int a4, int a5, int a6)
{
    int stk[3];
    register int t1;
    register int t2;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned short *)(((((int)stk + 0) + 0x6) + 0x0)) = a5;
    *(unsigned short *)(((((int)stk + 0) + 0x4) + 0x0)) = a6;
    *(unsigned int *)(((int)stk + 0)) = (*(int *)(((int)stk + 8)));
    t1 = *(short *)(((int)stk + 6));
    t2 = *(int *)(((int)stk + 0));
    (((struct o31_uchar *)(((t1 << 2) + t2)))->v) = (*(short *)(((((int)stk + 0) + 0x4) + 0x0)));
    return (((t1 << 2) + t2) + 0x31);
}

int FUN_0c0e6726(int a4, int a5, int a6)
{
    int stk[3];
    register int t1;
    register int t2;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned short *)(((((int)stk + 0) + 0x6) + 0x0)) = a5;
    *(unsigned short *)(((((int)stk + 0) + 0x4) + 0x0)) = a6;
    *(unsigned int *)(((int)stk + 0)) = (*(int *)(((int)stk + 8)));
    t1 = *(short *)(((int)stk + 6));
    t2 = *(int *)(((int)stk + 0));
    (((struct o32_uchar *)(((t1 << 2) + t2)))->v) = (*(short *)(((((int)stk + 0) + 0x4) + 0x0)));
    return (((t1 << 2) + t2) + 0x32);
}

int FUN_0c0eb0c0(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)(((int)_builtin_get_gbr() + 1))) != 3) {
        t0 = (a4 << 2);
        t1 = a5;
        t2 = a6;
        for (;;) {
            t3 = *(short *)((t1 + 0x0));
            t1 = (t1 + 0x2);
            t2 = (t2 - 0x1);
            *(unsigned short *)((t0 + 0xC7FD6A0)) = t3;
            t0 = (t0 + 0x4);
            if (t2 == 0) {
                break;
            }
        }
    } else {
        t0 = (a4 << 2);
        t1 = a5;
        t2 = a6;
        for (;;) {
            t3 = *(int *)((t1 + 0x0));
            t1 = (t1 + 0x4);
            t2 = (t2 - 0x1);
            *(unsigned int *)((t0 + 0xC7FD6A0)) = t3;
            t0 = (t0 + 0x4);
            if (t2 == 0) {
                break;
            }
        }
    }
    *(unsigned char *)(((int)_builtin_get_gbr() + 0)) = 0x1;
    return 0x1;
}

int kdSetBlockRead(Stk4 s)
{
    register int t0;

    t0 = mpdrv_set_bread(s.w[0]);
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}

int kdSetGetLastError(Stk4 s)
{
    register int t0;

    t0 = mpdrv_set_getlerr(s.w[0]);
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}

int FUN_0c1010c2(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = 0x20;
    t1 = (a4 + 0x5);
    t2 = a5;
    for (;;) {
        t3 = 0x6;
        for (;;) {
            t4 = 0x1;
            t5 = 0x0;
            t6 = 0x8;
            for (;;) {
                t7 = *(signed char *)((t2 + 0x0));
                t2 = (t2 + 0x1);
                if ((t7 & 8) != 0) {
                    t5 = (t5 | t4);
                }
                t4 = (t4 << 1);
                t6 = (t6 - 0x1);
                if (t6 == 0) {
                    break;
                }
            }
            *(unsigned char *)((t1 + 0x0)) = t5;
            t1 = (t1 - 1);
            t3 = (t3 - 0x1);
            if (t3 == 0) {
                break;
            }
        }
        t0 = (t0 - 0x1);
        t1 = (t1 + 0xC);
        if (t0 == 0) {
            break;
        }
    }
    return t7;
}

int FUN_0c10bc80(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c0ee6dc(a4, 0xC15B608);
    t1 = a6;
    if (t0 == 0) {
        t0 = FUN_0c0ee6dc(a5, 0xC15B614);
        if (t0 == 0) {
            t0 = 0x0;
        }
        t1 = t0;
    }
    return t1;
}

int mpdrv_set_dreq(int a4)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B66C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreq_ns(a4);
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_transagain(int a4)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B66C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_transagain_ns(a4);
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_getcond(int a4, int a5)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B66C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getcond_ns(a4, a5);
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_dreset(int a4)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B66C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreset_ns(a4);
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_dkill(int a4)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B66C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dkill_ns(a4);
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_allstatreq(int a4)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B66C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_allstatreq_ns(a4);
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_getminfo(int a4, int a5, int a6)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B66C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getminfo_ns(a4, a5, a6);
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_setcond(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B66C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_setcond_ns(a4, a5, a6, a7);
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_arctrl(int a4, int a5)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B66C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_arctrl_ns(a4, a5);
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_ft4ctrl(int a4, int a5)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B66C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_ft4ctrl_ns(a4, a5);
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    return t2;
}

int FUN_0c025f50(void)
{
    thunk_FUN_0c020cba();
    *(volatile int *)0xC7E4074;
    thunk_FUN_0c020cba();
    *(volatile int *)0xC7E4078;
    thunk_FUN_0c020cba();
    *(volatile int *)0xC7E407C;
    thunk_FUN_0c020cba();
    *(volatile int *)0xC7E4080;
    return thunk_FUN_0c020cba();
}

int FUN_0c058f78(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x18));
    t1 = memset(a4, 0x0, 0x31C);
    *(unsigned int *)((a4 + 0x18)) = t0;
    *(unsigned int *)((a4 + 0x14)) = (*(int *)0xC7E40C0);
    *(unsigned int *)0xC7E40C0 = a4;
    return t1;
}

int FUN_0c062d78(void)
{
    (((struct o0_uint *)0xC7D0960)->v) = 0xC13FDB0;
    (((struct o4_uint *)0xC7D0960)->v) = 0xC1405B0;
    (((struct o8_uint *)0xC7D0960)->v) = 0xC1411B0;
    (((struct oC_uint *)0xC7D0960)->v) = 0xC1419B0;
    (((struct o10_uint *)0xC7D0960)->v) = 0xC1421B0;
    (((struct o14_uint *)0xC7D0960)->v) = 0xC142BB0;
    return 0x0;
}

int FUN_0c064152(int a4)
{
    (((struct o2D9_uchar *)(a4))->v) = 0x2;
    FUN_0c09a808(a4, 0x1, 0x96);
    (((struct oEC_ushort *)(a4))->v) = 0xA;
    return FUN_0c0a022e(a4, 0.099999994f);
}

int FUN_0c066cb2(int a4)
{
    register int t0;
    register int t1;

    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEE;
    if ((int)(short)(t0 - 1) <= 0) {
        FUN_0c09a808(a4, 0x2, 0x64);
        t0 = *(signed char *)((a4 + 0xC));
        *(unsigned char *)((a4 + 0xC)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0645c4(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c0645a0(a4);
            }
            return FUN_0c064534(a4);
        }
        return FUN_0c064340(a4);
    }
    return FUN_0c06428a(a4);
}

int FUN_0c0731bc(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return ((int (*)(int, int, int, int))(0xC07320C))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC073208))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC073204))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC073200))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0731FC))(a4, a5, a6, a7);
}

int FUN_0c06eb58(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c06eb0a(a4);
            }
            return FUN_0c06eade(a4);
        }
        return FUN_0c06ea2c(a4);
    }
    return FUN_0c06e9c6(a4);
}

int FUN_0c069fbe(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c069f9c(a4);
            }
            return FUN_0c069f6c(a4);
        }
        return FUN_0c069e08(a4);
    }
    return FUN_0c069d68(a4);
}

int FUN_0c08e8ac(int a4)
{
    register int t1;
    register int t2;
    int t3;
    register int t4;

    if (((*(signed char *)((a4 + 0x9))) == 1) && ((t1 = *(signed char *)((a4 + 0xA)), t1 == 1) && ((t2 = *(signed char *)((a4 + 0x71BC)), t2 == 2) && (t3 = *(signed char *)((a4 + 0x71DD)), t4 = *(signed char *)((t3 + 0xC1507A8)), t4 != 0)))) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c09c3f8(int a4, int a5)
{
    int t3;

    if (((((((((struct o71FC_int *)(a4))->v)) | ((((struct o71F8_int *)(a4))->v))) | ((((struct o2E4_int *)(a4))->v))) & 0x4) == 0) && (t3 = (((struct o2E4_int *)(a4))->v), ((a5 & t3) & 0x600) != 0)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0986bc(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c098660(a4);
            }
            return FUN_0c0983d8(a4);
        }
        return FUN_0c098370(a4);
    }
    return FUN_0c098308(a4);
}

int FUN_0c0a2fd0(int a4, int a5, int a6, int a7)
{
    register int t3;

    t3 = 0xFFFFFC40;
    if ((signed char)a5 != 0) {
        t3 = ((*(int *)0xC494058) + ((signed char)a5 - 127));
    }
    return FUN_0c0f4db4((*(int *)(((((signed char)a4 << 2) + 0xC494048) + 0x0))), t3, (signed char)a5, a7);
}

int FUN_0c0a37da(int a4, int a5, int a6)
{
    int stk[2];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a6;
    if ((unsigned short)((((struct o719E_short *)((*(int *)(((int)stk + 0)))))->v)) == (unsigned char)a5) {
        return FUN_0c0a3796((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x3))), (*(signed char *)(((int)stk + 4))));
    }
    return 0x719E;
}

int FUN_0c0a3fa4(int a4, int a5)
{
    int stk[2];

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    if ((int)(*(signed char *)(((int)stk + 0))) <= (int)0xF) {
        return FUN_0c0a2eec(((*(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC152564))) + ((*(signed char *)(((int)stk + 4))) << 8)));
    }
    return a4;
}

int FUN_0c0c3500(int a4)
{
    register int t0;

    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x10)) = ((*(int *)((t0 + 0x10))) + 0x16C);
    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x10)) = ((*(int *)((t0 + 0x10))) & 0xFFFF);
    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x71C);
    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) & 0xFFFF);
    return 0x2E0;
}

int FUN_0c0daa9e(int a4)
{
    register int t1;
    register int t3;

    FUN_0c0da1f6(a4, 0xC3440FC);
    t1 = *(signed char *)0xC7E40CD;
    if (t1 != 2) {
        t3 = *(signed char *)0xC7EB39D;
        if (t3 != 2) {
            return FUN_0c0d8f10(0x0, 0x0, 0x40);
        }
        return t3;
    }
    return t1;
}

int FUN_0c0e4688(int a4)
{
    register int t0;

    t0 = *(int *)0xC7FD04C;
    *(unsigned int *)(((((int)a4 >> 5) << 2) + t0)) = ((*(int *)(((((int)a4 >> 5) << 2) + t0))) & (~((int)0x1 << (int)(a4 & 0x1F))));
    return t0;
}

int syRtcExecServer(void)
{
    register int t0;
    register int t1;

    if ((((((struct o4_int *)0xC7FD0C8)->v)) & 1) == 0) {
        (((struct o0_uint *)0xC7FD0C8)->v) = (syRtcGetAndCheckCount(((((struct o0_int *)0xC7FD0C8)->v))));
    }
    t0 = (((struct o4_int *)0xC7FD0C8)->v);
    t1 = t0;
    if ((t0 & 2) != 0) {
        t0 = syRtcGetCountForce();
        (((struct o0_uint *)0xC7FD0C8)->v) = t0;
        t1 = t0;
    }
    return t1;
}

int syRtcInit(void)
{
    (((struct o0_uint *)0xC7FD0C8)->v) = (syRtcGetCountForce());
    (((struct o4_uint *)0xC7FD0C8)->v) = 0x0;
    syRtcExecServer();
    (((struct o8_uint *)0xC7FD0C8)->v) = (FUN_0c0ff1ac(0x900, 0xC0E4B28, 0x5C, 0x0));
    return 0x0;
}

int buFindFirstFileEx(int a4, int a5, int a6)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_findfirst_ex(a4, a5, a6);
}

int buFindNextFileEx(int a4, int a5, int a6)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_findnext_ex(a4, a5, a6);
}

int syCfgGetDefaultLanguage(int a4, int a5, int a6)
{
    register int t0;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        t0 = syCfgGetIDAddress(a4, a5, a6);
        if (t0 == 0) {
            return 0xFFFFFFFF;
        }
        *(unsigned int *)((a4 + 0x0)) = (*(signed char *)((t0 + 0xB)));
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int syHwInit(void)
{
    hwInit();
    FUN_0c0ff640(((((struct o4_int *)0xC15A370)->v)), (*(int *)0xC346BE8));
    FUN_0c0ff7e0();
    FUN_0c0fe938(((((struct o0_int *)0xC15A370)->v)));
    return FUN_0c0ff884();
}

int FUN_0c0fb0fc(int a4, int a5)
{
    FUN_0c10d0a4();
    FUN_0c0fb042((*(int *)0xC347628), 0x2, a4, a5);
    return 0x0;
}

int FUN_0c0fd160(int a4, int a5, int a6)
{
    register int t1;

    t1 = *(int *)((((FUN_0c0fcea0(a6, a6)) << 2) + 0xC15AB80));
    return kmiCopyToFrameBuffer((a4 + 0x4), a5, (t1 + 0x4));
}

int FUN_0c1010ee(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = 0x20;
    t1 = (a4 + 0xC0);
    t2 = a5;
    for (;;) {
        t3 = 0x6;
        for (;;) {
            t4 = 0x1;
            t5 = 0x0;
            t6 = 0x8;
            for (;;) {
                t7 = *(signed char *)((t2 + 0x0));
                t2 = (t2 + 0x1);
                if ((t7 & 8) != 0) {
                    t5 = (t5 | t4);
                }
                t6 = (t6 - 0x1);
                t4 = (t4 << 1);
                if ((t6 == 0)) {
                    break;
                }
            }
            *(unsigned char *)(((t1 - 0x1) + 0x0)) = t5;
            t1 = (t1 - 0x1);
            t3 = (t3 - 0x1);
            if (t3 == 0) {
                break;
            }
        }
        t0 = (t0 - 0x1);
        if (t0 == 0) {
            break;
        }
    }
    return t7;
}

int vmsfs_unmount(int a4)
{
    if ((*(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0x9)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0x8)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0xA)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0xB)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0xC)) = 0x0;
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x4)) = 0x0;
    return 0x0;
}

void FUN_0c105e60(int a4)
{
    if (a4 != 0) {
        if ((*(int *)((a4 + 0x4))) != 0) {
            FUN_0c113df4((*(int *)((a4 + 0x4))));
        }
        memset(a4, 0x0, 0x4);
    return;
    }
}

int FUN_0c107ecc(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC15B31C, a5, a6, a7);
        return 0xFFFFFFFF;
    }
    return (((0x4 & (unsigned char)(*(signed char *)((a4 + 0x1)))) >> 1) >> 1);
}

int FUN_0c10aa20(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0xC8174A8;
    t1 = 0xC8174A8;
    t2 = 0x0;
    for (;;) {
        if (((unsigned short)(*(short *)((t1 + 0x0))) & 0x1) == 0) {
            break;
        }
        t2 = (t2 + 0x1);
        t0 = (t0 + 0x18);
        t1 = (t1 + 0x18);
        if ((int)t2 >= (int)0x1000) {
            return 0x0;
        }
    }
    *(unsigned short *)((t0 + 0x0)) = 0x1;
    return t0;
}

int FUN_0c10b388(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0xC82F4A8;
    t1 = 0xC82F4A8;
    t2 = 0x0;
    for (;;) {
        if (((unsigned short)(*(short *)((t1 + 0x0))) & 0x1) == 0) {
            break;
        }
        t2 = (t2 + 0x1);
        t0 = (t0 + 0x4C);
        t1 = (t1 + 0x4C);
        if ((int)t2 >= (int)0x400) {
            return 0x0;
        }
    }
    *(unsigned short *)((t0 + 0x0)) = 0x1;
    return t0;
}

int kmiBGPlaneSetPCW(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    *(unsigned int *)0xC81716C = (((a4 & 0x7) << 16) << 8);
    if (a6 != 0) {
        t0 = *(int *)0xC81716C;
        *(unsigned int *)0xC81716C = (t0 | 0x10000000);
        t1 = (t0 | 0x10000000);
    }
    if (a5 != 0) {
        *(unsigned int *)0xC81716C = ((*(int *)0xC81716C) | 0x8000000);
    }
    return t1;
}

int FUN_0c0207a2(int a4, int a5)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(signed char *)((a4 + 0x144)))) {
            return 0x1;
        }
        if ((*(int *)((((t0 << 2) + (0x11C + a4)) + 0x0))) == a5) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return 0x0;
}

int FUN_0c05957c(int a4)
{
    register int t1;

    memset(a4, 0x0, 0xA4);
    t1 = *(int *)0xC3738E0;
    *(unsigned int *)0xC3738E0 = (t1 + 0x1);
    *(unsigned int *)(((((t1 + 0x1) - 1) << 2) + 0xC373430)) = a4;
    return 0xC373430;
}

int FUN_0c059616(int a4)
{
    register int t1;

    memset(a4, 0x0, 0x9B8);
    t1 = *(int *)0xC37CAE8;
    *(unsigned int *)0xC37CAE8 = (t1 + 0x1);
    *(unsigned int *)(((((t1 + 0x1) - 1) << 2) + 0xC37CAAC)) = a4;
    return 0xC37CAAC;
}

int FUN_0c0596e0(int a4)
{
    register int t1;

    memset(a4, 0x0, 0xC0);
    t1 = *(int *)0xC37E1E4;
    *(unsigned int *)0xC37E1E4 = (t1 + 0x1);
    *(unsigned int *)(((((t1 + 0x1) - 1) << 2) + 0xC37E16C)) = a4;
    return 0xC37E16C;
}

int FUN_0c05a138(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    *(unsigned int *)0xC37E1E8 = 0x0;
    *(unsigned int *)0xC3837EC = 0x0;
    t0 = 0x2;
    t1 = 0xC7E40C4;
    for (;;) {
        t2 = FUN_0c059d7e(t1, a5, a6);
        t0 = (t0 - 0x1);
        t1 = (t1 + 0x72D0);
        if (t0 == 0) {
            break;
        }
    }
    return t2;
}

int FUN_0c05fcf2(int a4)
{
    if ((*(signed char *)((a4 + 0x0))) != 0) {
        FUN_0c0dd9e0((*(short *)((a4 + 0x2))));
        FUN_0c0e3bb2((*(int *)((a4 + 0x4))), 0x0);
        *(unsigned char *)((a4 + 0x0)) = 0x0;
    }
    return 0x0;
}

int FUN_0c05fd5e(int a4)
{
    if ((*(signed char *)((a4 + 0x0))) == 0) {
        FUN_0c0dd9e0((*(short *)((a4 + 0x2))));
        FUN_0c0e3900((*(int *)((a4 + 0x4))), 0x0);
        *(unsigned char *)((a4 + 0x0)) = 0x1;
    }
    return 0x0;
}

int FUN_0c05ff2a(int a4)
{
    int stk[1];
    register int t3;

    *(unsigned char *)(((int)stk + 0)) = a4;
    FUN_0c05fc68((*(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC14D9E8))));
    t3 = *(signed char *)(((int)stk + 0));
    return FUN_0c05fd5e(((unsigned char)(((t3 << 1) + t3) << 2) + 0xC17FDC8));
}

int FUN_0c064d4c(int a4)
{
    register int t2;
    register int t3;

    *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
    FUN_0c09a808(a4, 0x1, 0x47);
    t2 = *(signed char *)((a4 + 0x4));
    t3 = t2;
    if (t2 == 8) {
        (((struct o710C_uchar *)(a4))->v) = 0x2;
        t3 = 0x710C;
    }
    return t3;
}

int FUN_0c09e0dc(int a4)
{
    (((struct o71E4_float *)(a4))->v) = (*(float *)((((unsigned char)((unsigned short)(*(signed char *)(((0x71F1 + a4) + 0x0))) * (unsigned short)0x4C) + (0xC339540 + ((short)(*(signed char *)((a4 + 0x4))) * (short)0x98))) + 0x0)));
    return 0x71E4;
}

int FUN_0c0a32dc(void)
{
    FUN_0c0e5884(0x4);
    FUN_0c0e5884(0x3);
    FUN_0c0e5884(0x2);
    FUN_0c05fcc2(0xC8);
    return (FUN_0c0e55e0(0xCC00000, 0x2));
}

int FUN_0c0afb0a(int a4)
{
    register int t0;

    t0 = (((struct oF2_short *)(a4))->v);
    (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct oF2_ushort *)(a4))->v) = 0x3C;
        (((struct o101_uchar *)(a4))->v) = 0x1A;
        (((struct o102_uchar *)(a4))->v) = 0x0;
        return FUN_0c0a1e0a(a4, 0x2A);
    }
    return 0xF2;
}

int FUN_0c0ddeb0(void)
{
    FUN_0c0fc38c(0xC7F87D0, ((((struct o0_short *)0xC155588)->v)), ((((struct o2_short *)0xC155588)->v)), ((((struct o4_int *)0xC155588)->v)));
    FUN_0c0fc5da(0xC7F87D0, ((((struct o8_int *)0xC155588)->v)), 0x0, 0x0);
    return FUN_0c0ddd70(0xC7F87D0);
}

int FUN_0c0e0bd0(int a4, int a5, int a6, int a7)
{
    register int t1;
    float u3[16];

    t1 = a4;
    if (a4 == 0) {
        t1 = (*(int *)0xC7FCCBC);
    }
    _builtin_st_ext((float (*)[4])u3);
    *(float *)((((t1 + 0x40) - 0x8) + 0x0)) = u3[15];
    *(float *)(((((t1 + 0x40) - 0x8) + 0x0) + 4)) = u3[14];
    *(float *)(((((t1 + 0x40) - 0x8) - 0x8) + 0x0)) = u3[13];
    *(float *)((((((t1 + 0x40) - 0x8) - 0x8) + 0x0) + 4)) = u3[12];
    *(float *)((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[11];
    *(float *)(((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[10];
    *(float *)(((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[9];
    *(float *)((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[8];
    *(float *)((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[7];
    *(float *)(((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[6];
    *(float *)(((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[5];
    *(float *)((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[4];
    *(float *)((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[3];
    *(float *)(((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[2];
    *(float *)(((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[1];
    *(float *)((((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[0];
    return ((int (*)(int, int, int, int))(0xC0E0BF8))((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8), a5, a6, a7);
}

float nlRotateXSC(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];

    u0[0] = 0.0f;
    u0[1] = f5;
    u0[2] = f4;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = 0.0f;
    u1[1] = (-f4);
    u1[2] = f5;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[4] = u0[0];
    u2[5] = u0[1];
    u2[6] = u0[2];
    u2[7] = u0[3];
    u2[8] = u1[0];
    u2[9] = u1[1];
    u2[10] = u1[2];
    u2[11] = u1[3];
    _builtin_ld_ext((float (*)[4])u2);
    return u0[0];
}

float nlRotateAY(int a4)
{
    register float u0;
    register float u1;
    float u2[4];
    float u3[4];
    float u4[16];

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    u2[0] = u1;
    u2[1] = 0.0f;
    u2[2] = (-u0);
    u2[3] = 0.0f;
    _builtin_ftrv(u2, u2);
    u3[0] = u0;
    u3[1] = 0.0f;
    u3[2] = u1;
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[0] = u2[0];
    u4[1] = u2[1];
    u4[2] = u2[2];
    u4[3] = u2[3];
    u4[8] = u3[0];
    u4[9] = u3[1];
    u4[10] = u3[2];
    u4[11] = u3[3];
    _builtin_ld_ext((float (*)[4])u4);
    return u2[0];
}

float nlRotateAZ(int a4)
{
    register float u0;
    register float u1;
    float u2[4];
    float u3[4];
    float u4[16];

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    u2[0] = u1;
    u2[1] = u0;
    u2[2] = 0.0f;
    u2[3] = 0.0f;
    _builtin_ftrv(u2, u2);
    u3[0] = (-u0);
    u3[1] = u1;
    u3[2] = 0.0f;
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[0] = u2[0];
    u4[1] = u2[1];
    u4[2] = u2[2];
    u4[3] = u2[3];
    u4[4] = u3[0];
    u4[5] = u3[1];
    u4[6] = u3[2];
    u4[7] = u3[3];
    _builtin_ld_ext((float (*)[4])u4);
    return u2[0];
}

int syRtcAicaSetWriteFlag(void)
{
    int stk[3];

    *(unsigned short *)(((int)stk + 8)) = 0x1;
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    FUN_0c0eb400((((int)stk + 0) + 0x8), 0xA0710008, 0x4, 0x1, 0x0, 0x0);
    return 0x0;
}

int FUN_0c0ed8f4(int a4, int a5)
{
    *(unsigned int *)0xA05F78BC = (((((unsigned int)((unsigned int)((unsigned int)(a4 & 0x7F00000) >> 16) >> 2) >> 2) << 8) | ((unsigned int)((unsigned int)((unsigned int)(a5 & 0x7F00000) >> 16) >> 2) >> 2)) | 0x46590000);
    *(unsigned int *)0xC346B70 = (((((unsigned int)((unsigned int)((unsigned int)(a4 & 0x7F00000) >> 16) >> 2) >> 2) << 8) | ((unsigned int)((unsigned int)((unsigned int)(a5 & 0x7F00000) >> 16) >> 2) >> 2)) | 0x46590000);
    return 0x0;
}

int gdFsGetDrvStatG(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t3;

    t3 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC346BD8) + 0xC))) + 0x20)))))(((int)stk + 0), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    if (t3 == 0) {
        return 0xFFFFFFFF;
    }
    return (*(int *)(((int)stk + 0)));
}

void hwInit(void)
{
    register int t0;
    register int t1;

    (((struct o0_ushort *)0xFFD00000)->v) = 0x0;
    (((struct o4_ushort *)0xFFD00000)->v) = 0x0;
    (((struct o8_ushort *)0xFFD00000)->v) = 0x0;
    (((struct oC_ushort *)0xFFD00000)->v) = 0x0;
    t0 = 0xFFD00004;
    t1 = 0xC15A378;
    for (;;) {
        if ((*(int *)((t1 + 0x0))) != 0) {
            t0 = (*(int *)((t1 + 0x0)));
            *(unsigned int *)((t0 + 0x0)) = (*(int *)((t1 + 0x4)));
            t1 = (t1 + 0x8);
            continue;
        }
        break;
    }
}

int FUN_0c0fd18a(int a4, int a5, int a6)
{
    register int t1;

    t1 = *(int *)((((FUN_0c0fcea0(a6, a6)) << 2) + 0xC15AB80));
    return kmiCopyFromFrameBuffer(a4, (a5 + 0x4), t1);
}

void FUN_0c10660e(int a4)
{
    if (a4 != 0) {
        FUN_0c106654(a4);
        if ((*(int *)((a4 + 0x8))) != 0) {
            gdFsClose((*(int *)((a4 + 0x8))));
        }
        FUN_0c1064b8(a4);
    return;
    }
}

int FUN_0c107ea4(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC15B31C, a5, a6, a7);
        return 0xFFFFFFFF;
    }
    return ((0x2 & (unsigned char)(*(signed char *)((a4 + 0x1)))) >> 1);
}

int FUN_0c10dd8c(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)0xA05F6908 = 0x8;
    (((struct oC_uint *)0xC8426DC)->v) = (((((struct oC_int *)0xC8426DC)->v)) + 0x1);
    if ((*(int *)0xC817464) == 1) {
        (((struct o0_uint *)0xC8426DC)->v) = (((((struct o0_int *)0xC8426DC)->v)) + 0x1);
        FUN_0c10dbe0(0x1, a5, a6, a7);
    }
    return 0x0;
}

int kmiPurgeMemory(int a4, int a5)
{
    register int t0;
    register int t1;

    if ((unsigned int)a4 <= (unsigned int)(a4 + a5)) {
        t0 = a4;
        for (;;) {
            t1 = FUN_0c0fddce(t0);
            t0 = (t0 + 0x20);
            if ((unsigned int)t0 > (unsigned int)(a4 + a5)) {
                break;
            }
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c114b50(int a4)
{
    register int t3;

    if (a4 != 0) {
        memset((*(int *)((a4 + 0x4))), 0x0, 0x100);
        t3 = memset(a4, 0x0, 0x8);
        *(unsigned int *)((a4 + 0x0)) = 0x0;
    }
    return t3;
}

int FUN_0c01e75e(int a4, int a5)
{
    int t0;
    register int t3;

    t0 = FUN_0c012870(a4);
    t3 = a5;
    if ((t0 != 0) && ((t0 != 1) && (t0 == 2))) {
        t3 = (*(signed char *)(((signed char)a5 + 0xC11C618)));
    }
    return t3;
}

int FUN_0c020468(int a4)
{
    FUN_0c0e19b0((a4 + 0x6C));
    FUN_0c0e2080((a4 + 0x20));
    FUN_0c0e0ae0((a4 + 0x6C));
    return nlPopMatrix(0x1);
}

int FUN_0c027c7e(void)
{
    memset(0xC363290, 0x0, 0x4B0);
    memset(0xC363748, 0x0, 0xC8);
    (((struct o0_uint *)0xC363740)->v) = 0x0;
    (((struct o4_uint *)0xC363740)->v) = 0x0;
    return 0xC363744;
}

int FUN_0c02d458(void)
{
    register int t0;
    register int t1;
    int t2;

    t0 = (((struct o0_int *)0xC386830)->v);
    if ((t0 != 0) && (((t0 == 0) || (t1 = (((struct o4_int *)0xC386830)->v), t1 != 0)) && (t2 = *(int *)0xC4CD1B4, t2 == 0))) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c04ca6e(int a4)
{
    register int t1;
    register int t2;
    int t3;
    register int t4;

    if ((((((struct o71C8_int *)(a4))->v)) != 0) && ((t1 = (((struct o71C8_int *)(a4))->v), t2 = *(signed char *)((t1 + 0x2)), t2 == 3) && (t3 = (((struct o71C8_int *)(a4))->v), t4 = *(signed char *)((t3 + 0x4)), t4 == 6))) {
        return ((((struct o71C8_int *)(a4))->v));
    }
    return 0x0;
}

int FUN_0c05948c(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t3;
    register int t4;
    register int t2;
    register int t9;
    register int t10;

    t1 = 0xC7E4070;
    t3 = a4;
    t4 = (*(int *)(((a4 << 2) + 0xC7E4070)));
    for (;;) {
        if (t4 == 0) {
            break;
        }
        t2 = (*(signed char *)((t4 + 0x0)));
        if (t2 != 0) {
            t3 = t4;
            t1 = (((int (*)(int, int, int, int))((*(int *)((t4 + 0x10)))))(t3, a5, a6, a7));
        } else {
            t9 = t2;
            t10 = t3;
        }
        t4 = (*(int *)((t4 + 0x18)));
        t2 = t9;
        t3 = t10;
    }
    return t1;
}

int FUN_0c062954(int a4, int a5)
{
    (((struct o0_uint *)0xC439DC8)->v) = (a4 + 0x18);
    (((struct o8_uint *)0xC439DC8)->v) = (a5 + 0x18);
    (((struct o4_uint *)0xC439DC8)->v) = ((((struct o0_int *)0xC439DC8)->v));
    (((struct oC_uint *)0xC439DC8)->v) = ((((struct o8_int *)0xC439DC8)->v));
    (((struct o10_uint *)0xC439DC8)->v) = 0x0;
    return 0x0;
}

int FUN_0c064c66(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2e26(a4, 0xE, 0x0);
    }
    return (signed char)t0;
}

int FUN_0c0650be(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2e26(a4, 0xE, 0x0);
    }
    return (signed char)t0;
}

int FUN_0c066616(int a4)
{
    register int t0;
    register int t1;

    FUN_0c09a910(a4);
    t0 = (((struct o719E_short *)(a4))->v);
    t1 = (unsigned short)t0;
    if ((unsigned short)t0 == 20) {
        FUN_0c063468(a4);
        t0 = *(signed char *)((a4 + 0xC));
        *(unsigned char *)((a4 + 0xC)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c07b32a(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c09a910(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        FUN_0c09a808(a4, 0x1, 0x92);
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c08b81e(int a4)
{
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    FUN_0c09a808(a4, 0x4, 0x2);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    return 0x71A8;
}

int FUN_0c08cb26(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F305C;
    t1 = (t0 - 20);
    if ((int)(signed char)(t0 - 20) < 0) {
        t1 = 0x0;
    }
    t0 = t1;
    if ((int)(signed char)t1 > (int)0xB) {
        t0 = 0xB;
    }
    return (0x3 & (((signed char)t0 >> 1) >> 1));
}

int FUN_0c08d6aa(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x4));
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 7) {
        t0 = *(int *)((a4 + 0x1C));
        t2 = *(signed char *)((t0 + 0x720E));
        (((struct o720E_uchar *)(t0))->v) = (t2 + 0x1);
        if ((int)(signed char)(t2 + 0x1) > (int)0x63) {
            (((struct o720E_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x63;
        }
        t1 = 0x720E;
    }
    return t1;
}

int FUN_0c092894(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if ((t0 != 1) && ((t0 != 2) && ((t0 != 3) && (t0 != 4)))) {
            return t0;
        }
        return FUN_0c0928d8(a4);
    }
    return FUN_0c0928ba(a4);
}

int FUN_0c09e470(int a4)
{
    if (!((((((struct o2D4_float *)(a4))->v)) + (*(float *)0xC09E580)) > ((((struct o24_float *)(a4))->v)))) {
        if ((*(signed char *)((0x71BC + (*(int *)((a4 + 0x1C)))))) == 2) {
            return 0x0;
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0a3cb0(int a4, int a5)
{
    if ((signed char)a5 == 0) {
        return FUN_0c0a2eec((((((struct o0_int *)0xC151D64)->v)) + (signed char)(a4 & 0x1)));
    }
    return FUN_0c0a2eec((((((struct o8_int *)0xC151D64)->v)) + (signed char)(a4 & 0x1)));
}

void FUN_0c0a3f50(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = *(signed char *)(((int)stk + 0));
    if (((int)(unsigned char)t0 >= (int)0x3) && ((int)(unsigned char)t0 <= (int)0x7)) {
        FUN_0c0a2eec((*(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC1524DC))));
    return;
    }
}

int FUN_0c0ddd10(int a4, int a5)
{
    register int t0;
    register int t2;

    t0 = *(int *)0xC7FC4F0;
    t2 = *(int *)((((a5 * 0x3C) + t0) + 0x34));
    *(unsigned int *)((a4 + 0x8)) = (((*(int *)((a4 + 0x8))) & 0xFFFFFFC0) | (*(int *)((((a5 * 0x3C) + t0) + 0x30))));
    *(unsigned int *)((a4 + 0xC)) = (0x0 | t2);
    return 0xC7FC4F0;
}

int syRtcAicaSetDateLo(int a4)
{
    int stk[3];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    FUN_0c0eb400((((int)stk + 0) + 0x8), 0xA0710004, 0x4, 0x1, 0x0, 0x0);
    return 0x0;
}

int syRtcAicaSetDateHi(int a4)
{
    int stk[3];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    FUN_0c0eb400((((int)stk + 0) + 0x8), 0xA0710000, 0x4, 0x1, 0x0, 0x0);
    return 0x0;
}

int gdFsGetLE4(int a4)
{
    return (((((unsigned char)(*(signed char *)((a4 + 0x1))) << 8) | ((unsigned char)(*(signed char *)((a4 + 0x2))) << 16)) | (((unsigned char)(*(signed char *)((a4 + 0x3))) << 16) << 8)) | (unsigned char)(*(signed char *)((a4 + 0x0))));
}

int FUN_0c0f4128(int a4)
{
    register int t1;

    t1 = *(int *)(((kdGetDeviceInfo(a4)) + 0x0));
    if ((t1 & 0x100) != 0) {
        return 0x1;
    }
    return 0x0;
}

int pdVibMxStart(int a4, int a5)
{
    register int t0;

    t0 = pdVibMxIsReady(a4);
    if (t0 == 0) {
        return 0xFFFFFFFE;
    }
    return FUN_0c0f4202(a4, a5);
}

int FUN_0c0f271a(void)
{
    register int t3;

    kdSetDriverMode(0x8, 0x0);
    kdSetDriverMode(0x9, 0x0);
    t3 = kdSetHandler((*(int *)0xC15A2E8), 0x0);
    *(unsigned int *)0xC7FE708 = 0x0;
    return t3;
}

int gdFsGetTokenSize(int a4, int a5, int a6)
{
    register int t1;
    register int t2;
    register int t3;

    t1 = a4;
    t2 = a6;
    t3 = 0x0;
    for (;;) {
        if ((*(signed char *)((t1 + 0x0))) == 0) {
            break;
        }
        t2 = a5;
        for (;;) {
            if ((*(signed char *)((t2 + 0x0))) == 0) {
                break;
            }
            if ((*(signed char *)((t1 + 0x0))) != ((*(signed char *)((t2 + 0x0))))) {
                t2 = (t2 + 0x1);
                continue;
            }
            return t3;
        }
        t3 = (t3 + 0x1);
        t1 = (t1 + 0x1);
    }
    return t3;
}

int gdFsGetSearchID(int a4)
{
    register int t1;
    register int t2;
    register int t4;
    register int t0;

    t1 = 0xDA;
    t2 = a4;
    for (;;) {
        if ((*(signed char *)((t2 + 0x0))) == 0) {
            break;
        }
        t4 = *(signed char *)((t2 + 0x0));
        t2 = (t2 + 0x1);
        t0 = (gdFsToUpper(t4));
        t0 = (unsigned char)t0;
        t1 = (t1 + t0);
    }
    return (unsigned char)((unsigned int)t1 >> 2);
}

int FUN_0c0ff884(void)
{
    register int t1;

    (((struct o0_uchar *)0xFFD80000)->v) = 0x0;
    (((struct o4_uchar *)0xFFD80000)->v) = ((*(signed char *)0xFFD80004) & 0xFE);
    (((struct o10_ushort *)0xFFD80000)->v) = 0x2;
    (((struct o8_uint *)0xFFD80000)->v) = 0xFFFFFFFF;
    (((struct oC_uint *)0xFFD80000)->v) = 0xFFFFFFFF;
    t1 = *(signed char *)0xFFD80004;
    (((struct o4_uchar *)0xFFD80000)->v) = (t1 | 0x1);
    return (t1 | 0x1);
}

int kdSetResetPattern(void)
{
    register int t0;

    t0 = mpdrv_set_hreset();
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}

int vmsfs_c_execcallback(int a4, int a5, int a6)
{
    register int t2;
    register int t3;

    if (((((struct o74_int *)((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0)))->v)) != 0) {
        t2 = (((struct o74_int *)((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0)))->v);
        t3 = (((struct o7C_int *)((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0)))->v);
        return ((int (*)(int, int, int, int))(t2))(a4, a5, a6, t3);
    }
    return 0x74;
}

int ADXSTM_GetCurOfst(int a4, int a5)
{
    *(unsigned int *)((a5 + 0x0)) = ((FUN_0c0f1766((*(int *)((a4 + 0x8))))) - (*(int *)((a4 + 0xC))));
    return 0x1;
}

int FUN_0c107e7e(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC15B31C, a5, a6, a7);
        return 0xFFFFFFFF;
    }
    return (0x1 & (unsigned char)(*(signed char *)((a4 + 0x1))));
}


int FUN_0c10822c(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC15B31C, a5, a6, a7);
        return 0xFFFFFFFF;
    }
    return (*(int *)(((a4 + 0x64) + (a5 << 2))));
}

int mpdrv_set_getminfo_ns(int a4, int a5, int a6)
{
    int stk[4];

    *(unsigned int *)((((int)stk + 8) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 8) + 0x4)) = ((a6 << 16) << 8);
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    return (mpdrv_setcmd(a4, 0xA, ((int)stk + 8), 0x2, 0x0));
}

int FUN_0c024274(void)
{
    FUN_0c0dd5d0(0xC178D88, 0xC320008);
    FUN_0c0dd5d0(0xC178FC0, 0xC320008);
    return (FUN_0c0dd5d0(0xC179D00, 0xC320008));
}


int FUN_0c06144e(void)
{
    FUN_0c0a2f52();
    FUN_0c0de280(0x0, 0x0, 0x0);
    FUN_0c0ddf80();
    FUN_0c0ddf80();
    return FUN_0c09bafe();
}

int FUN_0c068716(int a4)
{
    register int t1;

    FUN_0c09a808(a4, 0x1, 0x65);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t1 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
    return (t1 + 0x1);
}

int FUN_0c072f42(int a4)
{
    FUN_0c09a808(a4, 0x1, 0xA);
    (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC072FD4)->v));
    (((struct o48_float *)(a4))->v) = ((((struct o4_float *)0xC072FD4)->v));
    return 0x48;
}

int FUN_0c07c57a(int a4)
{
    register int t1;

    FUN_0c09a808(a4, 0x3, 0x7);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t1 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
    return (t1 + 0x1);
}

int FUN_0c078220(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721E));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c077f6e(a4);
    }
    return ((int (*)(int, int, int, int))(0xC077EDC))(a4, a5, a6, a7);
}

int FUN_0c096a40(int a4)
{
    register int t0;
    register int t2;

    t0 = FUN_0c09a910(a4);
    t2 = (signed char)t0;
    if ((signed char)t0 != 0) {
        FUN_0c09a808(a4, 0x2, 0xD8);
        *(unsigned char *)((a4 + 0xA)) = 0x0;
        t2 = 0x0;
    }
    return t2;
}

int FUN_0c09b68a(int a4, int a5, int a6, float f4)
{
    *(float *)((a4 + 0x0)) = (((*(float *)((a6 + 0x0))) - (*(float *)((a5 + 0x0)))) * f4);
    (((struct o4_float *)(a4))->v) = ((((((struct o4_float *)(a6))->v)) - ((((struct o4_float *)(a5))->v))) * f4);
    (((struct o8_float *)(a4))->v) = ((((((struct o8_float *)(a6))->v)) - ((((struct o8_float *)(a5))->v))) * f4);
    return 0x8;
}

int FUN_0c0a4fc6(void)
{
    int t1;

    if (((((((struct o0_int *)0xC7F31F8)->v)) & 0x8) == 0) && (t1 = (((struct o24_int *)0xC7F31F8)->v), (t1 & 0x8) == 0)) {
        return 0x0;
    }
    (((struct o0_uchar *)0xC7F2EE5)->v) = 0x63;
    (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
    return 0x1;
}

int FUN_0c0cc212(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t2 = *(signed char *)((((signed char)t0 + 0xC7F2974) + 0x0));
        t0 = (t0 + 0x1);
        if (t2 == 0) {
            t1 = (t1 + 0x1);
        }
        if ((int)(signed char)t0 >= (int)0x3) {
            break;
        }
    }
    return t1;
}

int FUN_0c0d48b2(void)
{
    if (((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x8) != 0) {
        return 0x1;
    }
    if (((unsigned short)((((struct o14_short *)0xC361BFC)->v)) & 0x8) != 0) {
        return 0x2;
    }
    return 0x0;
}

int FUN_0c0d643c(int a4)
{
    (((struct o68_uchar *)(a4))->v) = (*(signed char *)0xC1550DA);
    (((struct o69_uchar *)(a4))->v) = (*(signed char *)0xC155104);
    (((struct o6A_uchar *)(a4))->v) = (*(signed char *)0xC155104);
    (((struct o6B_uchar *)(a4))->v) = (*(signed char *)0xC155105);
    return 0x6B;
}

int FUN_0c0da490(int a4)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c0d8e6e(0x1, 0x0, 0x80);
    t2 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)0xC7F29FF = t2;
    }
    return t2;
}

int FUN_0c0da526(int a4)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c0d8e6e(0x2, 0x0, 0x80);
    t2 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)0xC7F29FC = t2;
    }
    return t2;
}

int FUN_0c0ddbc0(int a4, int a5)
{
    register int t2;

    if ((int)a4 >= 0) {
        t2 = *(int *)0xC7F87CC;
        *(unsigned int *)(((((int)a4 >> 5) << 2) + t2)) = ((*(int *)(((((int)a4 >> 5) << 2) + t2))) & (~((int)0x1 << (int)(0x1F & a4))));
    }
    return t2;
}

float nlRotateYSC(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];

    u0[0] = f5;
    u0[1] = 0.0f;
    u0[2] = (-f4);
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = f4;
    u1[1] = 0.0f;
    u1[2] = f5;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[0] = u0[0];
    u2[1] = u0[1];
    u2[2] = u0[2];
    u2[3] = u0[3];
    u2[8] = u1[0];
    u2[9] = u1[1];
    u2[10] = u1[2];
    u2[11] = u1[3];
    _builtin_ld_ext((float (*)[4])u2);
    return u0[0];
}

void nlUnitMatrix(void)
{
    float u0[16];

    u0[2] = 0.0f;
    u0[3] = 0.0f;
    u0[6] = 0.0f;
    u0[7] = 0.0f;
    u0[8] = 0.0f;
    u0[9] = 0.0f;
    u0[12] = 0.0f;
    u0[13] = 0.0f;
    u0[0] = 1.0f;
    u0[1] = 0.0f;
    u0[10] = 1.0f;
    u0[11] = 0.0f;
    u0[4] = 0.0f;
    u0[5] = 1.0f;
    u0[14] = 0.0f;
    u0[15] = 1.0f;
    _builtin_ld_ext((float (*)[4])u0);
}

int kmSetBackGroundPlane(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = ((int (*)(int, int, int, int))((*(int *)(((a5 << 2) + 0xC347690)))))(a4, a5, a6, a7);
    *(unsigned int *)0xC817064 = ((*(int *)0xC817064) & 0xFFF00000);
    return t1;
}
