/* Straight-line functions with calls and guards (batch gen_ar): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o118_int { char p[0x118]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_short { char p[0x14]; short v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o204_int { char p[0x204]; int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o274_float { char p[0x274]; float v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o44_short { char p[0x44]; short v; };
struct o4C_uchar { char p[0x4C]; unsigned char v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o7118_float { char p[0x7118]; float v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o71F1_uchar { char p[0x71F1]; unsigned char v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o71F8_int { char p[0x71F8]; int v; };
struct o71FC_int { char p[0x71FC]; int v; };
struct o720A_uchar { char p[0x720A]; unsigned char v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oA8_int { char p[0xA8]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oFC0_int { char p[0xFC0]; int v; };
int ADXB_ExecOneAdx(int);
int ADXB_ExecOneSpsd(int);
int ADXB_ExecOneWav16(int);
int ADXB_ExecOneWav4(int);
int ADXPD_Destroy(int);
int FUN_0c0195a2(int);
int FUN_0c01ae08(int);
int FUN_0c02467e(void);
int FUN_0c025706(void);
int FUN_0c025d10(void);
int FUN_0c025f38(void);
int FUN_0c025f50(void);
int FUN_0c025f7a(int, int, int, int);
float FUN_0c02649a(int, int);
int FUN_0c03c904(int, int);
int FUN_0c048ea4(int, int, int, int);
int FUN_0c0492a4(int);
int FUN_0c0555c4(void);
int FUN_0c058f4e(void);
int FUN_0c059132(int, int, int);
int FUN_0c059330(int);
int FUN_0c0599fc(int);
int FUN_0c05aee4(int);
int FUN_0c05af40(int);
int FUN_0c05fdc6(int);
int FUN_0c05fefa(int);
int FUN_0c05ff88(int);
int FUN_0c0634ec(int);
int FUN_0c0634f4(int);
int FUN_0c06358e(int);
int FUN_0c063fd2(int);
int FUN_0c064014(int);
int FUN_0c064056(int);
int FUN_0c064d32(int);
int FUN_0c064d4c(int);
int FUN_0c065256(int);
int FUN_0c066c82(int);
int FUN_0c066cb2(int);
int FUN_0c066cdc(int);
int FUN_0c068b18(int);
int FUN_0c068b64(int);
int FUN_0c069adc(int);
int FUN_0c069b70(int);
int FUN_0c069cd4(int);
int FUN_0c079f68(int);
int FUN_0c07a188(int, int, int);
int FUN_0c08caea(int);
int FUN_0c0980b0(int);
int FUN_0c0988c6(int);
int FUN_0c09898c(int);
int FUN_0c098c82(void);
int FUN_0c099a24(int);
int FUN_0c09a910(int);
int FUN_0c09caea(int, int);
int FUN_0c09da1c(int);
int FUN_0c0a2080(int);
int FUN_0c0a2e26(int, int, int);
int FUN_0c0a2f16(int, int);
int FUN_0c0a2f7a(void);
int FUN_0c0a3914(int, int);
int FUN_0c0a3cb0(int, int);
int FUN_0c0a5042(void);
int FUN_0c0a5d96(void);
int FUN_0c0ac900(int, int);
int FUN_0c0ccefc(int, float, float);
int FUN_0c0ce88c(int, int);
int FUN_0c0d609e(int, int);
int FUN_0c0d6104(int);
int FUN_0c0d71fa(void);
int FUN_0c0d8e6e(int, int, int);
int FUN_0c0d8f10(int, int, int);
int FUN_0c0da1f6(int, int);
int FUN_0c0dc994(void);
int nlInvLightVectorUseViewMatrix(void);
int nlobjput_sub(int);
int nlMakeModelViewProjectMatrix_objput(void);
int FUN_0c0dea90(int, int, int, int);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c0dff60(void);
int FUN_0c0e0bd0(int);
int FUN_0c0e16c0(void);
int nlPopMatrix(int);
int FUN_0c0e19b0(int);
int nlRotateAxeSC(int, float, float);
int FUN_0c0e2110(float, float, float);
int FUN_0c0e5d22(int);
int FUN_0c0e6278(int);
int FUN_0c0e62c4(int);
int FUN_0c0e6310(int);
int FUN_0c0e6518(int);
int FUN_0c0e669e(int, int);
int FUN_0c0e67f4(int, int);
int FUN_0c0e6db4(void);
int FUN_0c0e6f24(int);
int FUN_0c0e6fe8(int, float, float, float);
int FUN_0c0eb6f4(int);
int FUN_0c0f1766(int);
int gdFsLoadDir(int, int);
int FUN_0c0f263a(int);
int FUN_0c0f4202(int, int);
int FUN_0c0f4db4(int, int);
int FUN_0c0fb042(int, int, int, int);
int kmSetBorderColor(int, ...);
int FUN_0c0fddbe(int, int, int);
int kdGetGunLatchedPort(void);
int kdSetHandler(int, int);
int FUN_0c101502(void);
int vmsfs_exit(void);
int FUN_0c1059ac(int, int, int);
int FUN_0c109800(int);
int FUN_0c1098e0(int);
int FUN_0c10bb58(int);
int FUN_0c10c08c(void);
int FUN_0c10d0a0(void);
int kmiWriteRegister(int, int);
int kmiPurgeMemory(int, int);
int mpdrv_setcmd(int, int, int, int, int);
int FUN_0c11518e(int, int, int);
extern float _builtin_fipr(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
extern void _builtin_st_ext(float (*)[4]);
int buRewriteExecFile(int, int, int, int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, int, int, int);
int pdVibMxIsReady(int);
int FUN_0c03c9f2(int a4);
int FUN_0c0645a0(int a4);
int FUN_0c08a6c0(int a4, int a5, int a6, int a7);
int FUN_0c08bb22(int a4);
int FUN_0c0a3458(void);
int FUN_0c0a3640(void);
int FUN_0c0a3664(void);
int FUN_0c0a35d2(void);
int FUN_0c0a361c(void);
int FUN_0c0a35a8(void);
int FUN_0c0ac8dc(int a4);
int FUN_0c0d6744(int a4);
int FUN_0c0e12b0(int a4, int a5, int a6, int a7);
int FUN_0c0ee6f0(int a4, int a5);
int FUN_0c0fca2e(int a4);
int FUN_0c0ff35a(int a4, int a5, int a6, int a7);
int FUN_0c0ff02c(void);
int kdSetCallback(int a4, int a5, int a6);
void vmsfs_c_setparam(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
void vmsfs_c_setvolume(int a4, int a5);
void DECtoBCD(int a4);
int kmiCopyFromFrameBuffer(int a4, int a5, int a6);
int mpdrv_set_ft4ctrl_ns(int a4, int a5);
int mpdrv_set_setcond_ns(int a4, int a5, int a6, int a7);
int mpdrv_set_arctrl_ns(int a4, int a5);
int FUN_0c114aec(void);
int FUN_0c113df4(int a4);
int FUN_0c0179ea(void);
int FUN_0c01d226(void);
int FUN_0c020446(int a4, int a5);
int FUN_0c020998(int a4, int a5, int a6, int a7);
float FUN_0c02651e(int a4);
int FUN_0c02e00a(int a4);
int FUN_0c059bf8(int a4);
int FUN_0c063c1c(int a4);
int FUN_0c06497e(int a4);
int FUN_0c0655d6(int a4);
int FUN_0c064130(int a4);
int FUN_0c0666c2(int a4);
int FUN_0c06588c(int a4);
int FUN_0c068192(int a4);
int FUN_0c0693e2(int a4);
int FUN_0c066d62(int a4);
int FUN_0c069f9c(int a4);
int FUN_0c06b512(int a4);
int FUN_0c06eb0a(int a4);
int FUN_0c06f036(int a4);
int FUN_0c06fa0c(int a4);
int FUN_0c06f85c(int a4);
int FUN_0c071264(int a4);
int FUN_0c0734ec(int a4);
int FUN_0c07319a(int a4);
int FUN_0c076c3a(int a4);
int FUN_0c07158a(int a4);
int FUN_0c077e98(int a4);
int FUN_0c07b350(int a4);
int FUN_0c07fbf8(int a4);
int FUN_0c084856(int a4);
int FUN_0c088218(int a4);
int FUN_0c069d02(int a4);
int FUN_0c08c7de(int a4);
int FUN_0c0928d8(int a4);
int FUN_0c096dca(int a4);
int FUN_0c098660(int a4);
int FUN_0c09b6ae(int a4, int a5);
int FUN_0c09ea5e(int a4);
int FUN_0c0a2eec(int a4);
int FUN_0c0a395c(int a4, int a5, int a6);
void FUN_0c0a3eec(int a4);
void FUN_0c0a3f0e(int a4);
int FUN_0c0d6630(int a4);
int FUN_0c0d60e2(int a4);
int FUN_0c0d61c0(int a4);
int FUN_0c0d7054(int a4);
int FUN_0c0d7032(int a4, int a5);
int FUN_0c0da590(int a4, int a5);
int FUN_0c0da852(int a4, int a5);
int FUN_0c0db01c(int a4);
int nlObjPutUseViewMatrix(int a4);
int FUN_0c0dea30(int a4, int a5, int a6, int a7);
int FUN_0c0e06e0(int a4, int a5);
int FUN_0c0dffb0(void);
int FUN_0c0efdee(int a4);
int gdFsCheckMedia(int a4);
int FUN_0c0f2464(int a4);
int pdVibMxStop(int a4);
int FUN_0c0fb0da(int a4, int a5);
int FUN_0c10111a(int a4, int a5);
int vmsfs_c_progress(int a4, int a5, int a6, int a7);
int FUN_0c10b5f2(int a4);
int FUN_0c114e00(int a4, int a5);
int FUN_0c114dde(int a4, int a5);
int FUN_0c114ed2(int a4, int a5, int a6);
int FUN_0c114f6e(int a4, int a5);
int FUN_0c1150aa(int a4, int a5);
int FUN_0c115416(int a4, int a5, int a6, int a7);
int FUN_0c010ac4(void);
void FUN_0c0122c6(int a4);
int FUN_0c01251c(void);
int FUN_0c018776(int a4);
int FUN_0c01ab12(int a4);
int FUN_0c0259ee(int a4, int a5);
int FUN_0c026200(int a4, int a5);
int FUN_0c0203d6(void);
int FUN_0c068d5e(int a4);
int FUN_0c06c5d0(int a4, int a5, int a6, int a7);
int FUN_0c0716f4(int a4);
int FUN_0c076714(int a4);
int FUN_0c07743e(int a4);
int FUN_0c07c59e(int a4);
int FUN_0c0830e0(int a4);
int FUN_0c0875be(int a4);
int FUN_0c0898ac(int a4);
int FUN_0c08c15a(int a4);
int FUN_0c0937f2(int a4);
int FUN_0c097f3c(int a4);
int FUN_0c09a808(int a4, int a5, int a6);
void FUN_0c0a3f30(int a4);
void FUN_0c0a3fce(int a4);
void FUN_0c0a416c(int a4);
void FUN_0c0a40b0(int a4);
int FUN_0c0a6f5e(int a4);
int FUN_0c0aa058(int a4);
int FUN_0c0aa266(int a4);
int FUN_0c0aa464(int a4);
int FUN_0c0a8a66(int a4);
int FUN_0c0aa59c(int a4);
int FUN_0c0aa69a(void);
int FUN_0c0b83dc(int a4, int a5, int a6, int a7);
int FUN_0c0cc9de(int a4);
int FUN_0c0d479e(void);
int FUN_0c0d7a7c(void);
int FUN_0c0d7a9c(void);
float FUN_0c0e21b0(int a4, int a5);
float FUN_0c0e2240(int a4, int a5);
float FUN_0c0e2390(int a4, int a5, int a6);
int nlRotateAxe(int a4, int a5);
int FUN_0c0e4a80(int a4);
int FUN_0c0e2700(void);
int syRtcDbgWriteLog(int a4, int a5, int a6);
int FUN_0c0e60ce(int a4, int a5);
int FUN_0c0fe8fa(int a4);
int get_fat(int a4, int a5, int a6, int a7);
int FUN_0c107f24(int a4, int a5, int a6, int a7);
int vmsfs_memcmp(int a4, int a5);
int FUN_0c115284(void);
int ADXB_ExecHndl(int a4);
int FUN_0c01253c(int a4);
int FUN_0c01a3ee(int a4);
int FUN_0c01ae1e(int a4);
int FUN_0c01d0a6(void);
int FUN_0c01fe34(int a4);
int FUN_0c020428(int a4, int a5);
int FUN_0c0555dc(void);
int FUN_0c05fff4(void);
int FUN_0c062050(int a4, int a5, int a6);
int FUN_0c06206e(int a4, int a5, int a6);
int FUN_0c06231c(int a4, int a5, int a6);
int FUN_0c062af0(int a4, int a5);
int FUN_0c063570(int a4);
int FUN_0c06a29e(int a4);
int FUN_0c07e820(int a4);
int FUN_0c077f6e(int a4);
int FUN_0c07e83e(int a4);
int FUN_0c07e8a4(int a4);
int FUN_0c08e57e(int a4);
int FUN_0c0928ba(int a4);
int FUN_0c099ac6(int a4);
int FUN_0c0a165e(int a4);
int FUN_0c0a167c(int a4);
int FUN_0c0ce86e(int a4);
int FUN_0c0db0ca(int a4);
int FUN_0c0dcd20(float f4, float f5, float f6);
int FUN_0c0df920(void);
int FUN_0c0debe0(int a4, int a5, int a6, int a7);
int gdFsFinish(void);
int FUN_0c0f2f60(void);
int FUN_0c0f9c92(int a4);
int FUN_0c0fdda0(int a4, int a5, int a6);
int FUN_0c0fe3f4(int a4, int a5, int a6, int a7);
int FUN_0c106636(int a4);
void FUN_0c1066a6(int a4, int a5, int a6, int a7);
int ADXSTM_GetFad(int a4, int a5);
int ADXSTM_GetFsizeByte(int a4, int a5);
int FUN_0c1075e4(int a4, int a5, int a6, int a7);
int FUN_0c107e60(int a4, int a5, int a6, int a7);
int FUN_0c1082d4(int a4, int a5, int a6, int a7);
int FUN_0c10bce0(void);
int FUN_0c10ddb4(void);
int kmiBGPlaneCountWords(int a4);
int mpdrv_set_getcond_ns(int a4, int a5);
int FUN_0c114e3e(int a4, int a5, int a6);
int FUN_0c1151b8(int a4, int a5, int a6, int a7, int a8);
int FUN_0c011c2e(int a4, int a5);
int FUN_0c01b4d6(int a4);
int FUN_0c049288(void);
int FUN_0c04ca52(int a4);
int FUN_0c05564e(void);
int FUN_0c05566a(void);
int FUN_0c059538(void);
int FUN_0c0595fa(void);
int FUN_0c059698(void);
int FUN_0c05fddc(void);
int FUN_0c05ff0e(void);
int FUN_0c0624c4(int a4, int a5, int a6);
int FUN_0c063812(int a4);
int FUN_0c06382e(int a4);
int FUN_0c064d74(int a4);
int FUN_0c0652a8(int a4, int a5, int a6, int a7);
int FUN_0c0652c4(int a4, int a5, int a6, int a7);
int FUN_0c0652f4(int a4, int a5, int a6, int a7);
int FUN_0c065310(int a4);
int FUN_0c072a18(int a4);
int FUN_0c07948c(int a4);
int FUN_0c091eee(int a4, int a5, int a6, int a7);
int FUN_0c0a0030(int a4);
int FUN_0c0dafd2(int a4, int a5);
int FUN_0c0ddee0(int a4);
int FUN_0c0f2766(void);
int FUN_0c0f99e0(void);
int FUN_0c0fb0be(int a4, int a5);
int kmSetWaitVsyncCallback(int a4, int a5);
int kmSetTexOverflowCallback(int a4, int a5);
int kmSetCullingRegister(float f4);
int vmsfs_c_setcompletecallback(int a4);
int FUN_0c107ef6(int a4, int a5, int a6, int a7);
int FUN_0c1081f2(int a4, int a5, int a6, int a7);
int FUN_0c108e58(void);
int kmiBGPlanePutColor2(int a4, int a5, int a6, int a7);
int FUN_0c114d8a(int a4);
int FUN_0c114e22(int a4, int a5);
int FUN_0c11554e(int a4, int a5);
int FUN_0c026554(int a4);
int FUN_0c055634(void);
int FUN_0c054a78(void);
int FUN_0c05d1d0(int a4);
int FUN_0c05aeca(int a4);
void FUN_0c0622c6(int a4, int a5, int a6);
void FUN_0c0622e0(int a4, int a5, int a6);
int FUN_0c068bce(int a4);
int FUN_0c0989d0(int a4);
int FUN_0c099a92(int a4);
int FUN_0c099ae4(int a4);
int FUN_0c09e7b8(int a4);
int FUN_0c0de590(int a4);
int FUN_0c0e2120(int a4);
int FUN_0c0ec180(void);
int syCfgGetIDAddress(int a4, int a5, int a6);
int FUN_0c0fb3fe(int a4);
int FUN_0c0fdea0(int a4);

int FUN_0c03c9f2(int a4)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c03c904(a4, t0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t1;
}

int FUN_0c0645a0(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return FUN_0c09da1c(a4);
}

int FUN_0c08a6c0(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((a4 + 0x71ED))) != 0) {
        FUN_0c08caea(a4);
    }
    FUN_0c0ac8dc(a4);
    return ((int (*)(int, int, int, int))(0xC041574))(a4, a5, a6, a7);
}

int FUN_0c08bb22(int a4)
{
    register int t4;
    register int t3;

    FUN_0c09a910(a4);
    FUN_0c09da1c(a4);
    t4 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t3 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t3 + 0x1);
        t4 = (t3 + 0x1);
    }
    return t4;
}

int FUN_0c0a3458(void)
{
    register int t2;
    register int t3;

    FUN_0c0a2f16(0x0, 0x101);
    t2 = *(int *)0xC494048;
    t3 = 0x0;
    if ((*(signed char *)0xC7F2F0E) != 0) {
        t3 = 0x46;
    }
    return FUN_0c0f4db4(t2, t3);
}

int FUN_0c0a3640(void)
{
    register int t2;
    register int t3;

    FUN_0c0a2f16(0x1, 0x12A);
    t2 = *(int *)0xC49404C;
    t3 = 0x0;
    if ((*(signed char *)0xC7F2F0E) != 0) {
        t3 = 0x46;
    }
    return FUN_0c0f4db4(t2, t3);
}

int FUN_0c0a3664(void)
{
    register int t2;
    register int t3;

    FUN_0c0a2f16(0x1, 0x12B);
    t2 = *(int *)0xC49404C;
    t3 = 0x0;
    if ((*(signed char *)0xC7F2F0E) != 0) {
        t3 = 0x46;
    }
    return FUN_0c0f4db4(t2, t3);
}

int FUN_0c0a35d2(void)
{
    register int t2;
    register int t3;

    FUN_0c0a2f16(0x0, 0x125);
    t2 = *(int *)0xC494048;
    t3 = 0xFFFFFFFB;
    if ((*(signed char *)0xC7F2F0E) != 0) {
        t3 = 0x41;
    }
    return FUN_0c0f4db4(t2, t3);
}

int FUN_0c0a361c(void)
{
    register int t2;
    register int t3;

    FUN_0c0a2f16(0x1, 0x129);
    t2 = *(int *)0xC49404C;
    t3 = 0x0;
    if ((*(signed char *)0xC7F2F0E) != 0) {
        t3 = 0x46;
    }
    return FUN_0c0f4db4(t2, t3);
}

int FUN_0c0a35a8(void)
{
    register int t2;
    register int t3;

    FUN_0c0a2f16(0x0, 0x10B);
    t2 = *(int *)0xC494048;
    t3 = 0xFFFFFFFB;
    if ((*(signed char *)0xC7F2F0E) != 0) {
        t3 = 0x41;
    }
    return FUN_0c0f4db4(t2, t3);
}

int FUN_0c0ac8dc(int a4)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c0ac900(a4, t0);
        t0 = (t0 + 0x1);
        if ((unsigned int)t0 >= (unsigned int)0x8) {
            break;
        }
    }
    return t1;
}

int FUN_0c0d6744(int a4)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((int)(*(short *)((((t0 << 1) + 0xC7F317E) + 0x0))) > (int)((((struct o44_short *)(a4))->v))) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x5) {
                break;
            }
            continue;
        }
        break;
    }
    return t0;
}

int FUN_0c0e12b0(int a4, int a5, int a6, int a7)
{
    register int t1;
    float u5[16];

    t1 = a4;
    if (a4 == 0) {
        t1 = (*(int *)0xC7FCCBC);
    }
    u5[0] = (*(float *)(((t1 + 0x0) + 4)));
    u5[1] = (*(float *)((t1 + 0x0)));
    u5[2] = (*(float *)((((t1 + 0x8) + 0x0) + 4)));
    u5[3] = ((((struct o8_float *)(t1))->v));
    u5[4] = (*(float *)(((((t1 + 0x8) + 0x8) + 0x0) + 4)));
    u5[5] = ((((struct o8_float *)((t1 + 0x8)))->v));
    u5[6] = (*(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[7] = ((((struct o8_float *)(((t1 + 0x8) + 0x8)))->v));
    u5[8] = (*(float *)(((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[9] = ((((struct o8_float *)((((t1 + 0x8) + 0x8) + 0x8)))->v));
    u5[10] = (*(float *)((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[11] = ((((struct o8_float *)(((((t1 + 0x8) + 0x8) + 0x8) + 0x8)))->v));
    u5[12] = (*(float *)(((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[13] = ((((struct o8_float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8)))->v));
    u5[14] = (*(float *)((((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[15] = ((((struct o8_float *)(((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8)))->v));
    _builtin_ld_ext((float (*)[4])u5);
    return ((int (*)(int, int, int, int))(0xC0E12D4))(((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8), a5, a6, a7);
}

int FUN_0c0ee6f0(int a4, int a5)
{
    register int t5;

    t5 = 0x0;
    if (((*(int *)(((((((*(int *)((a4 + 0x0))) << 2) << 2) << 1) + (*(int *)(((*(int *)0xC346B74) + 0x0)))) + 0x18))) & 1) != 0) {
        t5 = 0x1;
    }
    *(unsigned int *)((a5 + 0x0)) = t5;
    return 0x0;
}

int FUN_0c0fca2e(int a4)
{
    register int t4;

    if ((unsigned short)(*(int *)((a4 + 0x0))) == 3) {
        t4 = (FUN_0c1098e0(a4));
    } else {
        t4 = (FUN_0c109800((*(int *)((a4 + 0x1C)))));
    }
    return t4;
}

int FUN_0c0ff35a(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t2;

    t1 = 0xC804EA8;
    t2 = (*(int *)(((((int)(short)a4 >> 4) << 2) + 0xC804EA8)));
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t1 = (((int (*)(int, int, int, int))((*(int *)((t2 + 0x0)))))((*(int *)((t2 + 0x8))), a5, a6, a7));
        t2 = (*(int *)((t2 + 0x4)));
    }
    return t1;
}

int FUN_0c0ff02c(void)
{
    int stk[1];

    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    return ((int (*)(void))(0xAC0FF058))();
}

int kdSetCallback(int a4, int a5, int a6)
{
    register int t2;

    t2 = (((struct oFC0_int *)((*(int *)0xC843924)))->v);
    *(unsigned int *)((((((((a4 << 1) + t2) << 1) + ((a4 << 1) + t2)) << 2) + 0xC8054C8) + 0x8)) = a5;
    *(unsigned int *)((((((((a4 << 1) + t2) << 1) + ((a4 << 1) + t2)) << 2) + 0xC8054C8) + 0x4)) = a6;
    *(unsigned int *)((((((((a4 << 1) + t2) << 1) + ((a4 << 1) + t2)) << 2) + 0xC8054C8) + 0x0)) = a4;
    return 0x0;
}

void vmsfs_c_setparam(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    *(unsigned int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x14)) = a5;
    *(unsigned int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x18)) = a6;
    *(unsigned int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x1C)) = a7;
    *(unsigned int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x20)) = a8;
    *(unsigned int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x24)) = a9;
    *(unsigned int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x28)) = a10;
    *(unsigned int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x4)) = 0x1;
}

void vmsfs_c_setvolume(int a4, int a5)
{
    register int t1;
    register int t2;
    register int t3;

    t1 = ((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x4C);
    t2 = a5;
    for (;;) {
        t3 = *(signed char *)((t2 + 0x0));
        t2 = (t2 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = t3;
        t1 = (t1 + 0x1);
        if ((unsigned int)t1 >= (unsigned int)((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x6C)) {
            break;
        }
    }
}

void DECtoBCD(int a4)
{
    register int t1;

    FUN_0c0e6db4();
    FUN_0c0e6f24(t1);
}

int kmiCopyFromFrameBuffer(int a4, int a5, int a6)
{
    FUN_0c0fddbe(a4, (a5 + 0xA4000000), a6);
    kmiPurgeMemory(a4, a6);
    return 0x1;
}

int mpdrv_set_ft4ctrl_ns(int a4, int a5)
{
    int stk[4];
    register int t1;

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = 0x10;
    *(int *)((int)stk + 4) = 0x1;
    t1 = (*(int *)(((int)stk + 12)));
    *(int *)((int)stk + 0) = t1;
    return (mpdrv_setcmd(a4, 0xF, (((int)stk + 0) + 0x8), 0x1, t1));
}

int mpdrv_set_setcond_ns(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t3;

    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 16)) = a7;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(int *)((int)stk + 4) = ((*(int *)(((int)stk + 16))));
    t3 = (*(int *)(((int)stk + 12)));
    *(int *)((int)stk + 0) = t3;
    return (mpdrv_setcmd(a4, 0xE, (((int)stk + 0) + 0x8), 0x1, t3));
}

int mpdrv_set_arctrl_ns(int a4, int a5)
{
    int stk[4];
    register int t1;

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = 0x20;
    *(int *)((int)stk + 4) = 0x1;
    t1 = (*(int *)(((int)stk + 12)));
    *(int *)((int)stk + 0) = t1;
    return (mpdrv_setcmd(a4, 0x10, (((int)stk + 0) + 0x8), 0x1, t1));
}

int FUN_0c114aec(void)
{
    memset(0xC843FA0, 0x0, 0x800);
    memset(0xC8447A0, 0x0, 0x40);
    return (memset(0xC843F00, 0x0, 0xA0));
}

int FUN_0c113df4(int a4)
{
    register int t3;

    if (a4 != 0) {
        ADXPD_Destroy((*(int *)((a4 + 0x8))));
        t3 = memset(a4, 0x0, 0xAC);
        *(unsigned short *)((a4 + 0x0)) = 0x0;
    }
    return t3;
}

int FUN_0c0179ea(void)
{
    register int t0;

    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC017940;
    }
    return t0;
}

int FUN_0c01d226(void)
{
    register int t1;
    register int t2;

    if (((*(signed char *)0xC7F473E) == 5) && ((t1 = (((struct o0_int *)0xC361BF0)->v), t1 == 0) || (t2 = (((struct o14_int *)0xC361BF0)->v), t2 == 0))) {
        return 0x0;
    }
    return 0x1;
}

int FUN_0c020446(int a4, int a5)
{
    *(float *)((a5 + 0x0)) = (float)(*(short *)((a4 + 0x0)));
    (((struct o4_float *)(a5))->v) = (float)(*(short *)((a4 + 0x2)));
    (((struct o8_float *)(a5))->v) = (float)(*(short *)((a4 + 0x4)));
    return 0x8;
}

int FUN_0c020998(int a4, int a5, int a6, int a7)
{
    return ((int (*)(int, int, int, int))(0xC0209BC))(a4, a5, a6, a7);
}

float FUN_0c02651e(int a4)
{
    register float t0;
    register float t1;

    t0 = FUN_0c02649a(a4, 0x0);
    t1 = FUN_0c02649a(a4, 0x1);
    return (t0 - t1);
}

int FUN_0c02e00a(int a4)
{
    *(unsigned char *)(((a4 + 0x26) + 0x2)) = 0x0;
    *(unsigned char *)(((a4 + 0x26) + 0x1)) = 0x0;
    (((struct o26_uchar *)(a4))->v) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x12C;
    (((struct o22_ushort *)(a4))->v) = 0x134;
    (((struct o24_ushort *)(a4))->v) = 0x13C;
    return 0x24;
}

int FUN_0c059bf8(int a4)
{
    register int t0;
    register int t2;
    register int t4;

    t0 = a4;
    if ((int)(unsigned char)a4 < 0) {
        t0 = 0x0;
    }
    t2 = t0;
    if ((int)(unsigned char)t0 > (int)0x10) {
        t2 = 0x10;
    }
    t4 = *(signed char *)(((unsigned char)t2 + 0xC32E231));
    return FUN_0c0599fc(t4);
}

int FUN_0c063c1c(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c06497e(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c0655d6(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c064130(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c064056(a4);
        }
        return FUN_0c064014(a4);
    }
    return FUN_0c063fd2(a4);
}

int FUN_0c0666c2(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c06588c(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c068192(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c0693e2(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c066d62(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c066cdc(a4);
        }
        return FUN_0c066cb2(a4);
    }
    return FUN_0c066c82(a4);
}

int FUN_0c069f9c(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c06b512(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c06eb0a(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c06f036(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c06fa0c(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c06f85c(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c071264(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c0734ec(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c07319a(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c076c3a(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c07158a(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c077e98(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c07b350(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c07fbf8(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c084856(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c088218(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c069d02(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c069cd4(a4);
        }
        return FUN_0c069b70(a4);
    }
    return FUN_0c069adc(a4);
}

int FUN_0c08c7de(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0980b0(a4);
    }
    return (signed char)t0;
}

int FUN_0c0928d8(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c096dca(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c098660(int a4)
{
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}

int FUN_0c09b6ae(int a4, int a5)
{
    register int t0;
    register int t1;

    if ((int)((unsigned short)a4 - (unsigned short)a5) >= 0) {
        t0 = ((unsigned short)a4 - (unsigned short)a5);
        if ((0x8000 & ((unsigned short)a4 - (unsigned short)a5)) != 0) {
            t0 = (((unsigned short)a4 - (unsigned short)a5) - 0x10000);
        }
        t1 = t0;
    } else {
        t0 = ((unsigned short)a4 - (unsigned short)a5);
        if ((0x8000 & ((unsigned short)a4 - (unsigned short)a5)) == 0) {
            t0 = (((unsigned short)a4 - (unsigned short)a5) + 0x10000);
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c09ea5e(int a4)
{
    (((struct o720A_uchar *)(a4))->v) = 0x2;
    FUN_0c0a2e26(a4, 0x1C, 0x0);
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xA)) = 0x3;
    return 0x3;
}

int FUN_0c0a2eec(int a4)
{
    int t1;

    if (((*(signed char *)0xC7F2F0C) == 0) && (t1 = *(signed char *)0xC7F2F03, t1 != 0)) {
        return 0x23;
    }
    return FUN_0c0e5d22(a4);
}

int FUN_0c0a395c(int a4, int a5, int a6)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a6;
    if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
        if ((unsigned short)((((struct o719E_short *)(a4))->v)) == (unsigned char)a5) {
            return FUN_0c0a3914(a4, (*(signed char *)(((int)stk + 0))));
        }
        return 0x719E;
    }
    return 0x71D4;
}

void FUN_0c0a3eec(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    if ((int)(unsigned char)(*(signed char *)(((int)stk + 0))) <= (int)0x13) {
        FUN_0c0a2eec((*(int *)((((unsigned char)(*(signed char *)(((int)stk + 0))) << 2) + 0xC1523B4))));
    return;
    }
}

void FUN_0c0a3f0e(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    if ((int)(unsigned char)(*(signed char *)(((int)stk + 0))) <= (int)0x7) {
        FUN_0c0a2eec((*(int *)((((unsigned char)(*(signed char *)(((int)stk + 0))) << 2) + 0xC152404))));
    return;
    }
}

int FUN_0c0d6630(int a4)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((unsigned int)(*(int *)((((t0 << 2) + 0xC7F3124) + 0x0))) >= (unsigned int)(*(int *)((a4 + 0x20)))) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x5) {
                break;
            }
            continue;
        }
        break;
    }
    return t0;
}

int FUN_0c0d60e2(int a4)
{
    register int t5;

    if ((*(signed char *)0xC7F306E) == 0) {
        if ((*(signed char *)0xC7F306F) == 0) {
            t5 = *(int *)0xC7F3014;
            if ((t5 & 16) != 0) {
                return FUN_0c0d609e(a4, 0x0);
            }
            return t5;
        }
        return 0x43;
    }
    return 0x42;
}

int FUN_0c0d61c0(int a4)
{
    register int t0;

    t0 = *(int *)0xC7F3014;
    if ((t0 & 16) != 0) {
        if ((*(signed char *)0xC7F306E) == 0) {
            if ((*(signed char *)0xC7F306F) == 0) {
                return FUN_0c0d609e(a4, 0x0);
            }
            return 0x43;
        }
        return 0x42;
    }
    return t0;
}

int FUN_0c0d7054(int a4)
{
    if (((unsigned short)(*(short *)((0xC361BFC + (signed char)(((a4 << 2) + a4) << 2)))) & 8) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0d7032(int a4, int a5)
{
    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x9)) = a4;
    (((struct o4C_uchar *)(((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = a5;
    return FUN_0c0d6104(((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0));
}

int FUN_0c0da590(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c0d8e6e(0x6, a5, 0x80);
    t2 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)0xC7F29FC = t2;
    }
    return t2;
}

int FUN_0c0da852(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c0d8e6e(0x7, a5, 0x80);
    t2 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)0xC7F29FC = t2;
    }
    return t2;
}

int FUN_0c0db01c(int a4)
{
    if ((*(signed char *)((0xC7EB27E + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x184))) * (unsigned short)0x72D0)))) != 23) {
        return FUN_0c0dc994();
    }
    return FUN_0c0da1f6(a4, 0xC342344);
}

int nlObjPutUseViewMatrix(int a4)
{
    if (((*(int *)((a4 + 0x4))) & 2) == 0) {
        nlInvLightVectorUseViewMatrix();
    }
    nlMakeModelViewProjectMatrix_objput();
    return nlobjput_sub(a4);
}

int FUN_0c0dea30(int a4, int a5, int a6, int a7)
{
    if ((*(int *)0xC7F8880) == 1) {
        *(unsigned int *)0xC7F8834 = (0xA0000000 | a4);
        return ((int (*)(int, int, int, int))(0xC0DEA80))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0DEA70))(a4, a5, a6, a7);
}

int FUN_0c0e06e0(int a4, int a5)
{
    register int t0;

    t0 = (((struct o8_int *)0xC7F8BF4)->v);
    (((struct o0_uint *)0xC7F8BF4)->v) = (t0 * a4);
    (((struct o10_uint *)0xC7F8BF4)->v) = (t0 * a4);
    (((struct o4_uint *)0xC7F8BF4)->v) = (((((struct oC_int *)0xC7F8BF4)->v)) * a5);
    return 0xC7F8C00;
}

int FUN_0c0dffb0(void)
{
    register int t0;

    (((struct o0_uint *)0xC7F8C4C)->v) = 0xA2000009;
    (((struct o4_uint *)0xC7F8C4C)->v) = 0x80000000;
    (((struct o8_uint *)0xC7F8C4C)->v) = 0x949004C7;
    t0 = FUN_0c0dff60();
    (((struct o10_uint *)0xC7F8C4C)->v) = 0xFFFFFFFF;
    (((struct o14_uint *)0xC7F8C4C)->v) = 0x0;
    return t0;
}

int FUN_0c0efdee(int a4)
{
    register int t6;

    if (((((struct o0_int *)0x8C00FFF0)->v)) == 0) {
        (((struct o0_uint *)0x8C00FFF0)->v) = 0x8C00FC00;
        (((struct o4_uint *)0x8C00FFF0)->v) = 0x78;
    }
    t6 = (((struct o0_int *)0x8C00FFF0)->v);
    *(unsigned int *)((a4 + 0x0)) = ((((struct o4_int *)0x8C00FFF0)->v));
    return t6;
}

int gdFsCheckMedia(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0x0;
    t1 = (a4 + 0x1);
    t2 = 0xC15A278;
    for (;;) {
        t3 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        t4 = *(signed char *)((t2 + 0x0));
        t2 = (t2 + 0x1);
        if (t4 != t3) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x5) {
            return 0x1;
        }
    }
    return 0x0;
}

int FUN_0c0f2464(int a4)
{
    register int t1;
    register int t4;

    t1 = (((unsigned int)((unsigned int)a4 >> 8) >> 2) & 0x3FFF00);
    if ((0x20000 & a4) != 0) {
        t1 = ((((unsigned int)((unsigned int)a4 >> 8) >> 2) & 0x3FFF00) | 0xF0);
    }
    t4 = t1;
    if ((a4 & 0x10000) != 0) {
        t4 = (t1 | 0xF);
    }
    return t4;
}

int pdVibMxStop(int a4)
{
    register int t0;

    t0 = pdVibMxIsReady(a4);
    if (t0 == 0) {
        return 0xFFFFFFFE;
    }
    return FUN_0c0f4202(a4, 0xC15A7D0);
}

int FUN_0c0fb0da(int a4, int a5)
{
    FUN_0c10d0a0();
    FUN_0c0fb042((*(int *)0xC347628), 0x1, a4, a5);
    return 0x0;
}

int FUN_0c10111a(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = 0xC0;
    t1 = a4;
    t2 = a5;
    for (;;) {
        t3 = 0x80;
        t4 = 0x0;
        t5 = 0x8;
        for (;;) {
            t6 = *(signed char *)((t2 + 0x0));
            t2 = (t2 + 0x1);
            if ((t6 & 8) != 0) {
                t4 = (t4 | t3);
            }
            t3 = ((unsigned int)t3 >> 1);
            t5 = (t5 - 0x1);
            if (t5 == 0) {
                break;
            }
        }
        *(unsigned char *)((t1 + 0x0)) = t4;
        t0 = (t0 - 0x1);
        t1 = (t1 + 0x1);
        if (t0 == 0) {
            break;
        }
    }
    return t6;
}

int vmsfs_c_progress(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (((((struct o78_int *)((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0)))->v)) != 0) {
        t2 = (((struct o78_int *)((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0)))->v);
        return ((int (*)(int, int, int, int))(t2))(a4, a5, a6, a7);
    }
    return 0x78;
}

int FUN_0c10b5f2(int a4)
{
    register int t1;
    register int t3;

    t1 = (((unsigned int)(0xFFFFFFF8 & a4) >> 1) + (0x3 & a4));
    if ((0x4 & a4) != 0) {
        t1 = ((((unsigned int)(0xFFFFFFF8 & a4) >> 1) + (0x3 & a4)) + 0x400000);
    }
    t3 = t1;
    if ((unsigned int)a4 >= (unsigned int)0x800000) {
        t3 = (t1 + 0x400000);
    }
    return t3;
}

int FUN_0c114e00(int a4, int a5)
{
    *(unsigned int *)((a5 + 0x0)) = (FUN_0c0e62c4((*(short *)((a4 + 0x2)))));
    return 0x0;
}

int FUN_0c114dde(int a4, int a5)
{
    *(unsigned int *)((a5 + 0x0)) = (FUN_0c0e6278((*(short *)((a4 + 0x2)))));
    return 0x0;
}

int FUN_0c114ed2(int a4, int a5, int a6)
{
    *(unsigned int *)((a6 + 0x0)) = (FUN_0c0e6310((*(short *)((a4 + 0x2)))));
    return 0x0;
}

int FUN_0c114f6e(int a4, int a5)
{
    int stk[2];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    FUN_0c0e67f4((*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x10))) + 0x4))), (*(signed char *)(((int)stk + 4))));
    return 0x0;
}

int FUN_0c1150aa(int a4, int a5)
{
    int stk[2];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x8)) = (*(signed char *)(((int)stk + 0)));
    FUN_0c0e669e((*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x10))) + 0x4))), (*(signed char *)(((int)stk + 0))));
    return 0x0;
}

int FUN_0c115416(int a4, int a5, int a6, int a7)
{
    register int t2;

    (((struct o20C_uint *)(a4))->v) = (((((struct o20C_int *)(a4))->v)) - 1);
    *(unsigned int *)((a5 + 0xC)) = 0x0;
    if (((((struct o118_int *)(a5))->v)) != 0) {
        t2 = (((struct o118_int *)(a5))->v);
        return ((int (*)(int, int, int, int))(t2))(a4, a5, a6, a7);
    }
    return 0x118;
}

int FUN_0c010ac4(void)
{
    (((struct o0_uchar *)0xC7F2F11)->v) = 0x3;
    (((struct o7_uchar *)0xC7F2F11)->v) = 0x3;
    (((struct o3_uchar *)0xC7F2F11)->v) = 0x1;
    (((struct o4_uchar *)0xC7F2F11)->v) = 0x1;
    (((struct o1_uchar *)0xC7F2F11)->v) = 0x1;
    (((struct o8_uchar *)0xC7F2F11)->v) = 0x1;
    return 0x39;
}

void FUN_0c0122c6(int a4)
{
    register int t0;

    *(unsigned int *)((a4 + 0x18)) = 0x0;
    t0 = 0x0;
    for (;;) {
        if ((((int)0x1 << (int)t0) & (*(int *)((a4 + 0xC)))) != 0) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            return;
        }
    }
    *(unsigned int *)((a4 + 0x18)) = t0;
}

int FUN_0c01251c(void)
{
    if (((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x8) == 0) {
        if (((unsigned short)((((struct o14_short *)0xC361BFC)->v)) & 0x8) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c018776(int a4)
{
    register int t0;

    t0 = FUN_0c0195a2(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c059330(a4);
    }
    return (signed char)t0;
}

int FUN_0c01ab12(int a4)
{
    register int t0;

    t0 = FUN_0c01ae08(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c059330(a4);
    }
    return (signed char)t0;
}

int FUN_0c0259ee(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = (a4 + 0x294);
    t1 = 0x0;
    for (;;) {
        if ((*(int *)((t0 + 0x0))) == a5) {
            break;
        }
        t1 = (t1 + 0x1);
        t0 = (t0 + 0x4);
        if ((int)t1 >= (int)0x5) {
            return 0x1;
        }
    }
    return 0x0;
}

int FUN_0c026200(int a4, int a5)
{
    return FUN_0c025f7a((*(signed char *)((a4 + 0x248))), (*(signed char *)((a5 + 0x248))), (a4 + 0x24C), (a5 + 0x24C));
}

int FUN_0c0203d6(void)
{
    FUN_0c02467e();
    FUN_0c025706();
    FUN_0c025d10();
    FUN_0c025f38();
    return FUN_0c025f50();
}

int FUN_0c068d5e(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c09a910(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c06c5d0(int a4, int a5, int a6, int a7)
{
    register int t4;

    if ((*(signed char *)((a5 + 0x0))) == (short)a6) {
        (((struct o710B_uchar *)(a4))->v) = (*(signed char *)(((a5 + 0x1) + 0x0)));
        (((struct o710C_uchar *)(a4))->v) = (*(signed char *)((((a5 + 0x1) + 0x1) + 0x0)));
        *(unsigned short *)((a7 + 0x0)) = ((*(short *)((a7 + 0x0))) + 0x1);
        t4 = 0x710C;
    }
    return t4;
}

int FUN_0c0716f4(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c09a910(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c076714(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c09a910(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c07743e(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)(((0x72BC + a4) + 0xD));
    if (t0 != 0) {
        t2 = *(signed char *)((a4 + 0x71BA));
        if (t2 != 11) {
            *(unsigned char *)(((0x72BC + a4) + 0xD)) = 0x0;
            return FUN_0c0a3914(a4, 0x31);
        }
        return t2;
    }
    return t0;
}

int FUN_0c07c59e(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c09a910(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0830e0(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c09a910(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0875be(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c09a910(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0898ac(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c09a910(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c08c15a(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c09a910(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0937f2(int a4)
{
    register int t0;

    t0 = FUN_0c0555c4();
    if (t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return t0;
}

int FUN_0c097f3c(int a4)
{
    if ((((((((struct o2E4_int *)(a4))->v)) | ((((struct o71F8_int *)(a4))->v))) | ((((struct o71FC_int *)(a4))->v))) & 240) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c09a808(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t2;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    *(unsigned char *)(((int)stk + 8)) = a6;
    t0 = *(signed char *)(((int)stk + 8));
    t1 = *(int *)(((int)stk + 0));
    t2 = *(signed char *)(((int)stk + 4));
    return ((int (*)(int, int, int, int))(0xC09A848))(t1, t1, t2, t0);
}

void FUN_0c0a3f30(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    if ((int)(unsigned char)(*(signed char *)(((int)stk + 0))) <= (int)0x2D) {
        FUN_0c0a2eec((*(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC152424))));
    return;
    }
}

void FUN_0c0a3fce(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    if ((int)(unsigned char)(*(signed char *)(((int)stk + 0))) <= (int)0x27) {
        FUN_0c0a2eec((*(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC1510B8))));
    return;
    }
}

void FUN_0c0a416c(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    if ((int)(unsigned char)(*(signed char *)(((int)stk + 0))) <= (int)0x13) {
        FUN_0c0a2eec((*(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC151AC0))));
    return;
    }
}

void FUN_0c0a40b0(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    if ((int)(unsigned char)(*(signed char *)(((int)stk + 0))) <= (int)0x18) {
        FUN_0c0a2eec((*(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC151800))));
    return;
    }
}

int FUN_0c0a6f5e(int a4)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c0a5d96();
    t2 = t0;
    if (t0 != 0) {
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x4)) = t2;
        *(unsigned int *)((t0 + 0x10)) = 0xC0A6FA0;
    }
    return t2;
}

int FUN_0c0aa058(int a4)
{
    register int t0;

    t0 = FUN_0c0a5d96();
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC0AA078;
        *(unsigned int *)((t0 + 0x1C)) = a4;
    }
    return t0;
}

int FUN_0c0aa266(int a4)
{
    register int t0;

    t0 = FUN_0c0a5d96();
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC0AA286;
        *(unsigned int *)((t0 + 0x1C)) = a4;
    }
    return t0;
}

int FUN_0c0aa464(int a4)
{
    register int t0;

    t0 = FUN_0c0a5d96();
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC0AA484;
        *(unsigned int *)((t0 + 0x1C)) = a4;
    }
    return t0;
}

int FUN_0c0a8a66(int a4)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c0a5d96();
    t2 = t0;
    if (t0 != 0) {
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x3)) = t2;
        *(unsigned int *)((t0 + 0x10)) = 0xC0A8A86;
    }
    return t2;
}

int FUN_0c0aa59c(int a4)
{
    register int t0;

    t0 = FUN_0c0a5d96();
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC0AA5BC;
        *(unsigned int *)((t0 + 0x1C)) = a4;
    }
    return t0;
}

int FUN_0c0aa69a(void)
{
    register int t0;
    register int t2;

    t0 = FUN_0c0a5d96();
    t2 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC0AA6BA;
        t2 = FUN_0c0a5042();
        *(unsigned int *)((t0 + 0x1C)) = t2;
    }
    return t2;
}

int FUN_0c0b83dc(int a4, int a5, int a6, int a7)
{
    register int t1;

    FUN_0c048ea4((a4 + 0x20), a5, a6, a7);
    t1 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
    return (t1 + 0x1);
}

int FUN_0c0cc9de(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)0xC7F302C;
    t2 = t0;
    if (t0 == 3) {
        *(unsigned char *)0xC7F266C = ((*(signed char *)0xC7F266C) + 0x1);
        *(unsigned short *)0xC7F2750 = 0x0;
        *(unsigned char *)0xC7F2978 = 0x1;
        t2 = 0x314;
    }
    return t2;
}

int FUN_0c0d479e(void)
{
    if ((*(signed char *)0xC7F4768) != 0) {
        return 0x1;
    }
    if ((*(signed char *)0xC7F4769) != 0) {
        return 0x2;
    }
    return 0x0;
}

int FUN_0c0d7a7c(void)
{
    *(unsigned char *)0xC7F4724 = 0x2;
    *(unsigned char *)0xC7F301C = 0x0;
    (((struct o0_uchar *)0xC7F4768)->v) = 0x0;
    (((struct o1_uchar *)0xC7F4768)->v) = 0x0;
    *(unsigned char *)0xC7F2F17 = 0x1;
    return FUN_0c0d71fa();
}

int FUN_0c0d7a9c(void)
{
    *(unsigned char *)0xC7F4724 = 0x2;
    *(unsigned char *)0xC7F301C = 0x1;
    (((struct o0_uchar *)0xC7F4768)->v) = 0x0;
    (((struct o1_uchar *)0xC7F4768)->v) = 0x0;
    *(unsigned char *)0xC7F2F17 = 0x1;
    return FUN_0c0d71fa();
}

float FUN_0c0e21b0(int a4, int a5)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a5 + 0x0));
    u2 = (((struct o4_float *)(a4))->v);
    u3 = (((struct o4_float *)(a5))->v);
    u4 = (((struct o4_float *)((a4 + 0x4)))->v);
    u5 = (((struct o4_float *)((a5 + 0x4)))->v);
    *(float *)((((a4 + 0x4) + 0x4) + 0xFFFFFFF8)) = (u0 + u1);
    *(float *)((((a4 + 0x4) + 0x4) + 0xFFFFFFFC)) = (u2 + u3);
    (((struct o4_float *)((a4 + 0x4)))->v) = (u4 + u5);
    return (u0 + u1);
}

float FUN_0c0e2240(int a4, int a5)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    float u6[4];
    float u7[4];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a5 + 0x0));
    u2 = (((struct o4_float *)(a4))->v);
    u3 = (((struct o4_float *)(a5))->v);
    u4 = (((struct o4_float *)((a4 + 0x4)))->v);
    u5 = (((struct o4_float *)((a5 + 0x4)))->v);
    u6[0] = (u0 - u1);
    u6[1] = (u2 - u3);
    u6[2] = (u4 - u5);
    u6[3] = 0.0f;
    u7[0] = (u0 - u1);
    u7[1] = (u2 - u3);
    u7[2] = (u4 - u5);
    u7[3] = 0.0f;
    return _builtin_sqrtf((_builtin_fipr(u6, u7)));
}

float FUN_0c0e2390(int a4, int a5, int a6)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    u0 = *(float *)((a5 + 0x0));
    u1 = *(float *)((a6 + 0x0));
    u2 = (((struct o4_float *)(a5))->v);
    u3 = (((struct o4_float *)(a6))->v);
    u4 = (((struct o4_float *)((a5 + 0x4)))->v);
    u5 = (((struct o4_float *)((a6 + 0x4)))->v);
    *(float *)((a4 + 0x0)) = (u0 - u1);
    (((struct o4_float *)(a4))->v) = (u2 - u3);
    (((struct o4_float *)((a4 + 0x4)))->v) = (u4 - u5);
    return (u0 - u1);
}

int nlRotateAxe(int a4, int a5)
{
    register float t0;
    register float t1;

    t0 = FUN_0c0df4d0(a5);
    t1 = FUN_0c0dfa50(a5);
    return nlRotateAxeSC(a4, t1, t0);
}

int FUN_0c0e4a80(int a4)
{
    register int t1;

    t1 = _builtin_get_cr();
    _builtin_set_cr((_builtin_get_cr() & 0xFFFFFFFF) | 0x10000000);
    kmSetWaitVsyncCallback(a4, 0x0);
    _builtin_set_cr((t1 & 0xFFFFFFFF));
    return 0x0;
}

int FUN_0c0e2700(void)
{
    FUN_0c0e19b0((*(int *)0xC7FCCE0));
    FUN_0c0e16c0();
    FUN_0c0e0bd0(0xC7FCEA8);
    return nlPopMatrix(0x1);
}

int syRtcDbgWriteLog(int a4, int a5, int a6)
{
    register int t0;
    int t1;
    register int t2;

    t0 = (((struct o0_int *)0xC7FD0CC)->v);
    if (((t0 & 8) != 0) && (t1 = (((struct o10_int *)0xC7FD0CC)->v), t2 = (((struct oC_int *)0xC7FD0CC)->v), (unsigned int)t2 < (unsigned int)t1)) {
        *(unsigned int *)((t2 + 0x0)) = a4;
        (((struct oC_uint *)0xC7FD0CC)->v) = (((((struct oC_int *)0xC7FD0CC)->v)) + 0x4);
    }
    return t0;
}

int FUN_0c0e60ce(int a4, int a5)
{
    *(unsigned int *)((a5 + 0x0)) = (((unsigned char)(*(signed char *)((a4 + 0x7))) << 2) << 2);
    return a4;
}

int FUN_0c0fe8fa(int a4)
{
    register int t0;

    t0 = FUN_0c0f263a(a4);
    if (((*(int *)(((*(int *)((t0 + 0x30))) + 0x0))) & 64) != 0) {
        return (*(int *)((t0 + 0x28)));
    }
    return 0x0;
}

int get_fat(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t2;

    t1 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x24));
    t2 = *(int *)(((*(int *)0xC80DBC4) + 0xC));
    return ((int (*)(int, int, int, int))(t2))(t1, (a5 << 1), a6, a7);
}

int FUN_0c107f24(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC15B31C, a5, a6, a7);
        return 0xFFFFFFFF;
    }
    return ((*(int *)((a4 + 0x30))) - (*(int *)((a4 + 0x3C))));
}

int vmsfs_memcmp(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = a4;
    t1 = a5;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        t2 = (t2 + 0x1);
        if ((*(signed char *)((t0 + 0x0))) != (*(signed char *)((t1 + 0x0)))) {
            t3 = 0xFFFFFFFF;
        }
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x1);
        if ((int)t2 >= (int)0x200) {
            break;
        }
    }
    return t3;
}

int FUN_0c115284(void)
{
    memset(0xC8447E0, 0x0, 0x134A0);
    (((struct o0_uint *)0xC857C80)->v) = 0x0;
    (((struct o4_uint *)0xC857C80)->v) = 0x0;
    (((struct o8_uint *)0xC857C80)->v) = 0x0;
    return 0xC857C88;
}

int ADXB_ExecHndl(int a4)
{
    if (((((struct oA8_int *)(a4))->v)) != 0) {
        if (((((struct oA8_int *)(a4))->v)) == 2) {
            return ADXB_ExecOneSpsd(a4);
        }
        if ((*(signed char *)((a4 + 0xD))) == 4) {
            return ADXB_ExecOneWav4(a4);
        }
        return ADXB_ExecOneWav16(a4);
    }
    return ADXB_ExecOneAdx(a4);
}

int FUN_0c01253c(int a4)
{
    if (((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & a4) == 0) {
        if (((unsigned short)((((struct o14_short *)0xC361BFC)->v)) & a4) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c01a3ee(int a4)
{
    if (((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & a4) == 0) {
        if (((unsigned short)((((struct o14_short *)0xC361BFC)->v)) & a4) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c01ae1e(int a4)
{
    if (((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & a4) == 0) {
        if (((unsigned short)((((struct o14_short *)0xC361BFC)->v)) & a4) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c01d0a6(void)
{
    FUN_0c058f4e();
    *(unsigned char *)0xC7F4726 = 0x2;
    (((struct o3_uchar *)0xC362360)->v) = 0x0;
    (((struct o2_uchar *)0xC362360)->v) = 0x0;
    (((struct o1_uchar *)0xC362360)->v) = 0x0;
    (((struct o0_uchar *)0xC362360)->v) = 0x0;
    return 0x0;
}

int FUN_0c01fe34(int a4)
{
    if (((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & a4) == 0) {
        if (((unsigned short)((((struct o14_short *)0xC361BFC)->v)) & a4) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c020428(int a4, int a5)
{
    register float u2;

    *(unsigned short *)((a5 + 0x0)) = (int)(*(float *)((a4 + 0x0)));
    *(unsigned short *)((a5 + 0x2)) = (int)((((struct o4_float *)(a4))->v));
    u2 = (((struct o8_float *)(a4))->v);
    *(unsigned short *)((a5 + 0x4)) = (int)u2;
    return (int)u2;
}

int FUN_0c0555dc(void)
{
    register int t0;

    t0 = *(signed char *)0xC7F302C;
    if ((t0 == 5) || (t0 == 9)) {
        *(unsigned char *)0xC7F3199 = 0x1;
    }
    return (*(signed char *)0xC7F3199);
}

int FUN_0c05fff4(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c05ff88(t0);
        t0 = (t0 + 0x1);
        if ((int)(signed char)t0 >= (int)0x2) {
            break;
        }
    }
    return t1;
}

int FUN_0c062050(int a4, int a5, int a6)
{
    *(float *)((a4 + 0x0)) = ((*(float *)((a5 + 0x0))) + (*(float *)((a6 + 0x0))));
    (((struct o4_float *)(a4))->v) = (((((struct o4_float *)(a5))->v)) + ((((struct o4_float *)(a6))->v)));
    (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a5))->v)) + ((((struct o8_float *)(a6))->v)));
    return 0x8;
}

int FUN_0c06206e(int a4, int a5, int a6)
{
    *(float *)((a4 + 0x0)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a6 + 0x0))));
    (((struct o4_float *)(a4))->v) = (((((struct o4_float *)(a5))->v)) - ((((struct o4_float *)(a6))->v)));
    (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a5))->v)) - ((((struct o8_float *)(a6))->v)));
    return 0x8;
}

int FUN_0c06231c(int a4, int a5, int a6)
{
    FUN_0c0624c4((a4 + 0x9C), a5, a6);
    return (((((((struct o9C_int *)(a4))->v)) == 0)) ? 1 : 0);
}

int FUN_0c062af0(int a4, int a5)
{
    register int t4;

    (((struct o18_float *)((*(int *)0xC439DD0)))->v) = (*(float *)((a4 + 0x0)));
    (((struct o1C_float *)((*(int *)0xC439DD0)))->v) = (*(float *)((a5 + 0x0)));
    t4 = *(int *)0xC439DD0;
    *(unsigned int *)((t4 + 0x1C)) = ((*(int *)((t4 + 0x1C))) | 0x1);
    return 0x0;
}

int FUN_0c063570(int a4)
{
    FUN_0c09a808(a4, 0x1, 0xC);
    (((struct oEC_ushort *)(a4))->v) = 0x8;
    return 0xEC;
}

int FUN_0c06a29e(int a4)
{
    FUN_0c09a808(a4, 0x1, 0xA);
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    return 0xF0;
}

int FUN_0c07e820(int a4)
{
    FUN_0c09a808(a4, 0x1, 0x1);
    (((struct o710B_uchar *)(a4))->v) = 0x1;
    return 0x710B;
}

int FUN_0c077f6e(int a4)
{
    FUN_0c07a188(a4, 0x1, 0xC);
    (((struct oEC_ushort *)(a4))->v) = 0x8;
    return 0xEC;
}

int FUN_0c07e83e(int a4)
{
    FUN_0c09a808(a4, 0x1, 0x19);
    (((struct o710C_uchar *)(a4))->v) = 0x1;
    return 0x710C;
}

int FUN_0c07e8a4(int a4)
{
    FUN_0c09a808(a4, 0x1, 0x0);
    (((struct o710C_uchar *)(a4))->v) = 0x1;
    return 0x710C;
}

int FUN_0c08e57e(int a4)
{
    register float u3;
    int t1;

    u3 = 0.0f;
    if (((*(signed char *)((a4 + 0x10B))) != 0) && (t1 = *(signed char *)((a4 + 0x10B)), (t1 & 1) != 0)) {
        u3 = 4.0f;
    }
    (((struct o7118_float *)(a4))->v) = u3;
    return 0x7118;
}

int FUN_0c0928ba(int a4)
{
    register int t1;

    FUN_0c09a808(a4, 0x2, 0x0);
    t1 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
    return (t1 + 0x1);
}

int FUN_0c099ac6(int a4)
{
    *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x200);
    (((struct o60_float *)(a4))->v) = 1.0f;
    (((struct o64_float *)(a4))->v) = (*(float *)0xC099B54);
    (((struct o68_float *)(a4))->v) = 0.0f;
    return 0x68;
}

int FUN_0c0a165e(int a4)
{
    (((struct o71F1_uchar *)(a4))->v) = 0x1;
    FUN_0c099a24(a4);
    (((struct o71F4_ushort *)(a4))->v) = 0x960;
    return 0x71F4;
}

int FUN_0c0a167c(int a4)
{
    (((struct o71F1_uchar *)(a4))->v) = 0x0;
    FUN_0c099a24(a4);
    (((struct o71F4_ushort *)(a4))->v) = 0x0;
    return 0x71F4;
}

int FUN_0c0ce86e(int a4)
{
    *(volatile float *)0xC0CE8F8;
    *(volatile float *)0xC0CE8FC;
    FUN_0c0ccefc(a4, ((((struct o4_float *)0xC0CE900)->v)), ((((struct o0_float *)0xC0CE900)->v)));
    return FUN_0c0ce88c(0xC33ED04, 0x1);
}

int FUN_0c0db0ca(int a4)
{
    int stk[1];
    register int t1;

    *(unsigned char *)(((int)stk + 0)) = a4;
    FUN_0c0d8f10(0x17, 0x0, 0x40);
    t1 = *(signed char *)(((int)stk + 0));
    *(unsigned char *)0xC7F29FC = t1;
    return t1;
}

int FUN_0c0dcd20(float f4, float f5, float f6)
{
    (((struct o0_float *)0xC3468B0)->v) = f4;
    (((struct o4_float *)0xC3468B0)->v) = f5;
    (((struct o8_float *)0xC3468B0)->v) = f6;
    return (FUN_0c0e6fe8(0xC3468B0, f4, f5, f6));
}

int FUN_0c0df920(void)
{
    register int t0;

    t0 = *(int *)0xC346A50;
    *(unsigned int *)0xC346A50 = ((t0 * 0x41C64E6D) + 0x3039);
    return (((unsigned int)((t0 * 0x41C64E6D) + 0x3039) >> 16) & 0x7FFF);
}

int FUN_0c0debe0(int a4, int a5, int a6, int a7)
{
    if ((*(int *)0xC7F8880) == 1) {
        return (FUN_0c0dea90(a4, a5, a6, a7));
    }
    return ((int (*)(void))(0xC0DEC00))();
}

int gdFsFinish(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC346BE4;
    if (t0 != 0) {
        t1 = ((int (*)(void))((*(int *)((t0 + 0x14)))))();
        *(unsigned int *)0xC346BE4 = 0x0;
        t0 = t1;
    }
    return t0;
}

int FUN_0c0f2f60(void)
{
    *(unsigned int *)0xC346BF0 = 0x0;
    kdSetHandler((*(int *)0xC15A71C), 0x0);
    FUN_0c101502();
    return vmsfs_exit();
}

int FUN_0c0f9c92(int a4)
{
    register int t1;
    register int t2;
    register int t3;

    t1 = *(int *)(((a4 << 2) + (*(int *)0xC803DF4)));
    t2 = *(int *)(((a4 << 2) + 0xC803E40));
    t3 = (t1 - t2);
    if ((int)(t1 - t2) < 0) {
        t3 = ((t1 - t2) + 0x3);
    }
    return ((t3 >> 1) >> 1);
}

int FUN_0c0fdda0(int a4, int a5, int a6)
{
    register int t1;
    register int t2;
    register int t3;
    register float u4;
    register float u5;

    if ((((a4 | a5) | a6) & 7) == 0) {
        t1 = a4;
        t2 = a5;
        t3 = ((unsigned int)((unsigned int)a6 >> 2) >> 1);
        for (;;) {
            u4 = *(float *)((t2 + 0x0));
            u5 = *(float *)(((t2 + 0x0) + 4));
            t2 = (t2 + 0x8);
            t3 = (t3 - 0x1);
            *(float *)((t1 + 0x0)) = u4;
            *(float *)(((t1 + 0x0) + 4)) = u5;
            t1 = (t1 + 0x8);
            if (t3 == 0) {
                break;
            }
        }
        return ((a4 | a5) | a6);
    }
    return FUN_0c0fddbe(a4, a5, a6);
}

int FUN_0c0fe3f4(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((a4 + 0x0))) == 0) {
        if ((*(signed char *)((a5 + 0x0))) != 0) {
            return 0x0;
        }
        return 0x1;
    }
    return ((int (*)(int, int, int, int))(0xC0FE3EC))(a4, a5, a6, a7);
}

int FUN_0c106636(int a4)
{
    *(unsigned char *)((a4 + 0x1)) = 0x2;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = (FUN_0c0f1766((*(int *)((a4 + 0x8)))));
    return 0x1;
}

void FUN_0c1066a6(int a4, int a5, int a6, int a7)
{
    if ((int)a5 >= 0) {
        *(unsigned int *)((a4 + 0x30)) = a5;
        return;
    }
    ((int (*)(int, int, int, int))(0xC1066DC))(a4, a5, a6, a7);
}

int ADXSTM_GetFad(int a4, int a5)
{
    int stk[4];
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = gdFsLoadDir(a4, (((int)stk + 0) + 0x4));
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = (*(int *)(((int)stk + 4)));
    return t0;
}

int ADXSTM_GetFsizeByte(int a4, int a5)
{
    int stk[4];
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = gdFsLoadDir(a4, (((int)stk + 0) + 0x4));
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = (*(int *)(((int)stk + 8)));
    return t0;
}

int FUN_0c1075e4(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC15B31C, a5, a6, a7);
        return 0x0;
    }
    return (unsigned char)(*(signed char *)((a4 + 0x7)));
}

int FUN_0c107e60(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC15B31C, a5, a6, a7);
        return 0xFFFFFFFF;
    }
    return (unsigned char)(*(signed char *)((a4 + 0x1)));
}

int FUN_0c1082d4(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC15B31C, a5, a6, a7);
        return 0xFFFFFFFF;
    }
    return (unsigned char)(*(signed char *)((a4 + 0x4)));
}

int FUN_0c10bce0(void)
{
    kmiWriteRegister(0x8, 0x3);
    kmiWriteRegister(0x0, 0x0);
    return (kmiWriteRegister(0x8, 0x0));
}

int FUN_0c10ddb4(void)
{
    *(unsigned int *)0xA05F6908 = 0x2;
    if ((*(int *)0xC842720) == 0) {
        *(unsigned int *)0xC817268 = ((*(int *)0xC817268) | 0x10);
    }
    *(unsigned int *)0xC842720 = 0x0;
    return 0x0;
}

int kmiBGPlaneCountWords(int a4)
{
    register int t5;
    register int t0;

    t5 = 0x1;
    if ((0x2000000 & a4) != 0) {
        t0 = 0x2;
        if ((0x1000000 & a4) != 0) {
            t0 = 0x3;
        }
        t5 = t0;
        if ((a4 & 0x400000) == 0) {
            t5 = (t0 + 0x1);
        }
    }
    return t5;
}

int mpdrv_set_getcond_ns(int a4, int a5)
{
    int stk[3];

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    return (mpdrv_setcmd(a4, 0x9, (((int)stk + 0) + 0x8), 0x1, 0x0));
}

int FUN_0c114e3e(int a4, int a5, int a6)
{
    int stk[2];

    *(unsigned char *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)((a6 + 0x0)) = (FUN_0c11518e(a4, 0x6, (*(signed char *)(((int)stk + 0)))));
    return 0x0;
}

int FUN_0c1151b8(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;
    register int t2;

    if ((unsigned int)a7 < (unsigned int)((((unsigned int)a8 >> 2) << 2) + a7)) {
        t0 = a6;
        t1 = a7;
        for (;;) {
            t2 = *(int *)((t1 + 0x0));
            t1 = (t1 + 0x4);
            *(unsigned int *)((t0 + 0x0)) = t2;
            t0 = (t0 + 0x4);
            if ((unsigned int)t1 >= (unsigned int)((((unsigned int)a8 >> 2) << 2) + a7)) {
                break;
            }
        }
    }
    return 0x0;
}

int FUN_0c011c2e(int a4, int a5)
{
    *(unsigned char *)0xC352240 = a5;
    return (buRewriteExecFile(a4, 0xC116220, 0xC352240, 0x5, 0x1));
}

int FUN_0c01b4d6(int a4)
{
    int t0;

    t0 = *(short *)0xC7F475A;
    if ((signed char)a4 == 10) {
        return t0;
    }
    return (((int)0x1 << (int)(signed char)a4) & t0);
}

int FUN_0c049288(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c0492a4(t0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    return t1;
}

int FUN_0c04ca52(int a4)
{
    int t1;
    register int t2;

    if ((((((struct o71C8_int *)(a4))->v)) != 0) && (t1 = (((struct o71C8_int *)(a4))->v), t2 = *(signed char *)((t1 + 0x2)), t2 == 2)) {
        return ((((struct o71C8_int *)(a4))->v));
    }
    return 0x0;
}

int FUN_0c05564e(void)
{
    int t1;

    if (((*(signed char *)0xC7F302C) == 5) && (t1 = *(signed char *)0xC7F302D, t1 == 3)) {
        *(unsigned char *)0xC7F319B = 0x1;
    }
    return (*(signed char *)0xC7F319B);
}

int FUN_0c05566a(void)
{
    if ((int)(*(short *)0xC7EB298) >= 0) {
        if ((int)(*(short *)0xC7F2568) < 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c059538(void)
{
    register int t1;

    if ((*(int *)0xC3738E0) != 0) {
        t1 = *(int *)0xC3738E0;
        *(unsigned int *)0xC3738E0 = (t1 - 1);
        return (*(int *)((0xC373430 + ((t1 - 1) << 2))));
    }
    return 0x0;
}

int FUN_0c0595fa(void)
{
    register int t1;

    if ((*(int *)0xC37CAE8) != 0) {
        t1 = *(int *)0xC37CAE8;
        *(unsigned int *)0xC37CAE8 = (t1 - 1);
        return (*(int *)((0xC37CAAC + ((t1 - 1) << 2))));
    }
    return 0x0;
}

int FUN_0c059698(void)
{
    register int t1;

    if ((*(int *)0xC37E1E4) != 0) {
        t1 = *(int *)0xC37E1E4;
        *(unsigned int *)0xC37E1E4 = (t1 - 1);
        return (*(int *)((0xC37E16C + ((t1 - 1) << 2))));
    }
    return 0x0;
}

int FUN_0c05fddc(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c05fdc6(t0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    return t1;
}

int FUN_0c05ff0e(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c05fefa(t0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0xB) {
            break;
        }
    }
    return t1;
}

int FUN_0c0624c4(int a4, int a5, int a6)
{
    register int t0;
    register int t3;

    t0 = *(short *)((a5 + 0x2));
    if ((int)(unsigned char)a6 < (int)t0) {
        t3 = *(int *)((a5 + 0x8));
        *(unsigned int *)((a4 + 0x0)) = (*(int *)((((unsigned char)a6 << 2) + t3)));
    } else {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        t3 = t0;
    }
    return t3;
}

int FUN_0c063812(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721E));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c063570(a4);
    }
    return FUN_0c0634ec(a4);
}

int FUN_0c06382e(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721E));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c06358e(a4);
    }
    return FUN_0c0634f4(a4);
}

int FUN_0c064d74(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721E));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c064d4c(a4);
    }
    return FUN_0c064d32(a4);
}

int FUN_0c0652a8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721E));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c065256(a4);
    }
    return ((int (*)(int, int, int, int))(0xC065214))(a4, a5, a6, a7);
}

int FUN_0c0652c4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721E));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(0xC0652F0))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0652EC))(a4, a5, a6, a7);
    }
    return FUN_0c064d32(a4);
}

int FUN_0c0652f4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721E));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c065256(a4);
    }
    return ((int (*)(int, int, int, int))(0xC065214))(a4, a5, a6, a7);
}

int FUN_0c065310(int a4)
{
    FUN_0c09a808(a4, 0x1, 0x9C);
    return FUN_0c0a3cb0((*(signed char *)((a4 + 0x3))), 0x1);
}

int FUN_0c072a18(int a4)
{
    FUN_0c09a808(a4, 0x1, 0x5);
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    return 0x0;
}

int FUN_0c07948c(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c079f68(a4);
    t1 = t0;
    if (t0 != 0) {
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c091eee(int a4, int a5, int a6, int a7)
{
    register int t2;

    FUN_0c098c82();
    t2 = *(int *)((((*(signed char *)((a4 + 0x71DD))) << 2) + 0xC338FF8));
    return ((int (*)(int, int, int, int))(t2))(a4, a5, a6, a7);
}

int FUN_0c0a0030(int a4)
{
    register int t0;

    t0 = FUN_0c09caea(a4, 0x9);
    if ((signed char)t0 != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0dafd2(int a4, int a5)
{
    int stk[1];
    register int t1;

    *(unsigned char *)(((int)stk + 0)) = a4;
    FUN_0c0d8f10(0xA, a5, 0x80);
    t1 = *(signed char *)(((int)stk + 0));
    *(unsigned char *)0xC7F29FC = t1;
    return t1;
}

int FUN_0c0ddee0(int a4)
{
    register int t2;
    register int t3;

    t2 = *(int *)((a4 + 0xC));
    t3 = (((struct o4_int *)0xC7F8800)->v);
    *(unsigned int *)((a4 + 0x8)) = (((*(int *)((a4 + 0x8))) & 0xFFFFFFC0) | ((((struct o0_int *)0xC7F8800)->v)));
    *(unsigned int *)((a4 + 0xC)) = ((t2 & 0xF8000000) | t3);
    return t3;
}

int FUN_0c0f2766(void)
{
    register int t0;
    register int t4;

    t0 = kdGetGunLatchedPort();
    t4 = t0;
    if ((int)t0 > 0) {
        t4 = (*(int *)(((t0 << 2) + 0xC15A2FC)));
    }
    return t4;
}

int FUN_0c0f99e0(void)
{
    register int t1;

    t1 = FUN_0c10bb58((*(int *)0xC8173E0));
    if (t1 != 1) {
        return 0xD;
    }
    return 0x0;
}

int FUN_0c0fb0be(int a4, int a5)
{
    FUN_0c0fb042((*(int *)0xC347628), 0x0, a4, a5);
    return 0x0;
}

int kmSetWaitVsyncCallback(int a4, int a5)
{
    FUN_0c0fb042((*(int *)0xC347628), 0x7, a4, a5);
    return 0x0;
}

int kmSetTexOverflowCallback(int a4, int a5)
{
    FUN_0c0fb042((*(int *)0xC347628), 0x3, a4, a5);
    return 0x0;
}

int kmSetCullingRegister(float f4)
{
    int stk[1];

    *(float *)(((int)stk + 0)) = f4;
    kmiWriteRegister(0x78, ((*(int *)((((int)stk + 0) + 0x0))) & 0x7FFFFFFF));
    return 0x0;
}

int vmsfs_c_setcompletecallback(int a4)
{
    register int t0;

    t0 = 0xC8057B0;
    for (;;) {
        (((struct o74_uint *)(t0))->v) = a4;
        t0 = (t0 + 0x80);
        if ((unsigned int)t0 >= (unsigned int)0xC805BB0) {
            break;
        }
    }
    return 0x74;
}

int FUN_0c107ef6(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC15B31C, a5, a6, a7);
        return 0xFFFFFFFF;
    }
    return ((int (*)(int, int, int, int))(0xC107F1C))(a4, a5, a6, a7);
}

int FUN_0c1081f2(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC15B31C, a5, a6, a7);
        return 0xFFFFFFFF;
    }
    return (*(int *)((a4 + 0xC)));
}

int FUN_0c108e58(void)
{
    register int t2;

    if ((*(int *)0xC347628) != 0) {
        t2 = FUN_0c10c08c();
        *(unsigned int *)0xC347628 = 0x0;
    }
    return t2;
}

int kmiBGPlanePutColor2(int a4, int a5, int a6, int a7)
{
    register int t3;

    t3 = a5;
    if ((a4 & 0x2000000) != 0) {
        *(unsigned int *)(((a5 << 2) + 0xC817064)) = a6;
        *(unsigned int *)((((a5 + 0x1) << 2) + 0xC817064)) = a7;
        t3 = ((a5 + 0x1) + 0x1);
    }
    return t3;
}

int FUN_0c114d8a(int a4)
{
    FUN_0c0e6518((*(short *)((a4 + 0x2))));
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    return 0x0;
}

int FUN_0c114e22(int a4, int a5)
{
    *(unsigned int *)((a5 + 0x0)) = (FUN_0c11518e(a4, 0x5, 0x0));
    return 0x0;
}

int FUN_0c11554e(int a4, int a5)
{
    register int t2;

    if ((*(int *)((((a5 * 0x124) + (0x210 + a4)) + 0xC))) != 0) {
        *(unsigned int *)((((a5 * 0x124) + (0x210 + a4)) + 0x14)) = ((((struct o204_int *)(a4))->v));
        t2 = 0x204;
    }
    return t2;
}

int FUN_0c026554(int a4)
{
    if ((*(signed char *)((a4 + 0x2A8))) == 0) {
        if ((*(signed char *)((a4 + 0x2D8))) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c055634(void)
{
    int t1;

    if (((*(signed char *)0xC7F302C) == 5) && (t1 = *(signed char *)0xC7F302D, (int)t1 <= (int)0x1)) {
        return 0x0;
    }
    return 0x1;
}

int FUN_0c054a78(void)
{
    FUN_0c0a2f7a();
    (((struct o0_uchar *)0xC7F302C)->v) = 0x7;
    (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
    (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
    (((struct o3_uchar *)0xC7F302C)->v) = 0x0;
    return 0x0;
}

int FUN_0c05d1d0(int a4)
{
    int t1;

    if (((*(signed char *)((a4 + 0x30D))) == 0) && (t1 = *(signed char *)((a4 + 0x8)), (int)t1 < (int)0x2)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c05aeca(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c05af40(a4);
    }
    return FUN_0c05aee4(a4);
}

void FUN_0c0622c6(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a5 + 0x0))) + (*(int *)((a6 + 0x0))));
    *(unsigned int *)((a4 + 0x4)) = ((*(int *)((a5 + 0x4))) + (*(int *)((a6 + 0x4))));
    *(unsigned int *)((a4 + 0x8)) = ((*(int *)((a5 + 0x8))) + (*(int *)((a6 + 0x8))));
}

void FUN_0c0622e0(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a5 + 0x0))) - (*(int *)((a6 + 0x0))));
    *(unsigned int *)((a4 + 0x4)) = ((*(int *)((a5 + 0x4))) - (*(int *)((a6 + 0x4))));
    *(unsigned int *)((a4 + 0x8)) = ((*(int *)((a5 + 0x8))) - (*(int *)((a6 + 0x8))));
}

int FUN_0c068bce(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c068b64(a4);
    }
    return FUN_0c068b18(a4);
}

int FUN_0c0989d0(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c09898c(a4);
    }
    return FUN_0c0988c6(a4);
}

int FUN_0c099a92(int a4)
{
    *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x200);
    (((struct o60_float *)(a4))->v) = 1.0f;
    (((struct o64_float *)(a4))->v) = 0.0f;
    (((struct o68_float *)(a4))->v) = 1.0f;
    return 0x68;
}

int FUN_0c099ae4(int a4)
{
    *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x200);
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o64_float *)(a4))->v) = 1.0f;
    (((struct o68_float *)(a4))->v) = 1.0f;
    return 0x68;
}

int FUN_0c09e7b8(int a4)
{
    if (((((struct o274_float *)(a4))->v)) > 0.0f) {
        (((struct o71BC_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0de590(int a4)
{
    return (kmSetBorderColor((a4 | 0xFF000000)));
}

int FUN_0c0e2120(int a4)
{
    return FUN_0c0e2110((-(*(float *)((a4 + 0x0)))), (-((((struct o4_float *)(a4))->v))), (-((((struct o8_float *)(a4))->v))));
}

int FUN_0c0ec180(void)
{
    register int t0;

    t0 = *(int *)0xC3468D8;
    if (t0 != 0) {
        return ((int (*)(void))(t0))();
    }
    return ((int (*)(void))(0xC0EC19A))();
}

int syCfgGetIDAddress(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c1059ac(0x0, a5, a6);
    if (t0 != 0) {
        return 0x0;
    }
    return FUN_0c0eb6f4(t0);
}

int FUN_0c0fb3fe(int a4)
{
    FUN_0c0fb042((*(int *)0xC347628), 0x8, a4, 0x0);
    return 0x0;
}

int FUN_0c0fdea0(int a4)
{
    return ((((((int)(0xF0 & (signed char)a4) >> 4) << 2) + ((int)(0xF0 & (signed char)a4) >> 4)) << 1) + (0xF & (signed char)a4));
}
