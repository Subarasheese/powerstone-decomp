/* Straight-line functions with calls and guards (batch gen_as): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o10C0_int { char p[0x10C0]; int v; };
struct o10C0_uint { char p[0x10C0]; unsigned int v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10C4_uint { char p[0x10C4]; unsigned int v; };
struct o10C8_int { char p[0x10C8]; int v; };
struct o10C8_uint { char p[0x10C8]; unsigned int v; };
struct o10CC_int { char p[0x10CC]; int v; };
struct o10CC_uint { char p[0x10CC]; unsigned int v; };
struct o10D0_int { char p[0x10D0]; int v; };
struct o10D0_uint { char p[0x10D0]; unsigned int v; };
struct o10D8_int { char p[0x10D8]; int v; };
struct o10D8_uint { char p[0x10D8]; unsigned int v; };
struct o10DC_int { char p[0x10DC]; int v; };
struct o10DC_uint { char p[0x10DC]; unsigned int v; };
struct o10E0_uint { char p[0x10E0]; unsigned int v; };
struct o10E4_int { char p[0x10E4]; int v; };
struct o10E4_uint { char p[0x10E4]; unsigned int v; };
struct o10F4_uint { char p[0x10F4]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o27C_uchar { char p[0x27C]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_short { char p[0x40]; short v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_short { char p[0x50]; short v; };
struct o54_int { char p[0x54]; int v; };
struct o58_int { char p[0x58]; int v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o60_short { char p[0x60]; short v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o64_short { char p[0x64]; short v; };
struct o68_short { char p[0x68]; short v; };
struct o6C_float { char p[0x6C]; float v; };
struct o6C_uchar { char p[0x6C]; unsigned char v; };
struct o70_float { char p[0x70]; float v; };
struct o71B4_uchar { char p[0x71B4]; unsigned char v; };
struct o71E4_float { char p[0x71E4]; float v; };
struct o720E_uchar { char p[0x720E]; unsigned char v; };
struct o7223_uchar { char p[0x7223]; unsigned char v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o723B_uchar { char p[0x723B]; unsigned char v; };
struct o723C_ushort { char p[0x723C]; unsigned short v; };
struct o74_float { char p[0x74]; float v; };
struct o74_int { char p[0x74]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct oA8_int { char p[0xA8]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oF2_short { char p[0xF2]; short v; };
struct oFAC_uint { char p[0xFAC]; unsigned int v; };
struct oFB0_int { char p[0xFB0]; int v; };
struct oFBC_int { char p[0xFBC]; int v; };
struct oFBC_uint { char p[0xFBC]; unsigned int v; };
struct oFC0_uint { char p[0xFC0]; unsigned int v; };
struct oFCC_int { char p[0xFCC]; int v; };
int ADXB_GetBlkSmpl(int);
int ADXB_GetLpEndOfst(int);
int ADXB_GetLpEndPos(int);
int ADXB_GetLpStartOfst(int);
int ADXB_GetLpStartPos(int);
int ADXB_GetNumLoop(int);
int ADXB_GetOutBps(int);
int ADXB_GetTotalNumSmpl(int);
int ADXB_Stop(int);
int FUN_0c02067e(int);
int FUN_0c020be0(int);
int FUN_0c020cba(int);
int FUN_0c020e3e(int, int);
int FUN_0c023f0a(int);
int FUN_0c0240e8(int, int, int);
int FUN_0c024446(int);
int FUN_0c025d72(int, int);
int FUN_0c02d9e4(int, int, float, float, float, float, float);
int FUN_0c0301d2(int, int, int, int);
int FUN_0c039c78(int, int, int, int);
int FUN_0c049b7c(void);
int FUN_0c04be14(int, int);
int FUN_0c055566(int);
int FUN_0c058ef4(void);
int FUN_0c058fa2(void);
int FUN_0c059330(int);
int FUN_0c05948c(int, int, int, int);
int FUN_0c0599fc(int);
int FUN_0c05f4cc(int, ...);
int FUN_0c05fc68(int);
int FUN_0c05fcf2(int);
int FUN_0c05fd1a(int);
int FUN_0c05fd5e(int);
int FUN_0c05ff88(int);
int FUN_0c05fff4(void);
int FUN_0c061240(int, int);
int FUN_0c06225a(int, int, float);
int FUN_0c0623a6(int, int, int);
int FUN_0c0624c4(int, int, int);
int FUN_0c062d78(void);
int FUN_0c07743e(int);
int FUN_0c07a1e4(int);
int FUN_0c08a846(int);
int FUN_0c0980b0(int);
int FUN_0c0997a2(int, int, int, int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a94c(int, int);
int FUN_0c09bafe(void);
int FUN_0c09da1c(int);
int FUN_0c09db78(int);
int FUN_0c0a2080(int);
int FUN_0c0a2eec(int);
int FUN_0c0a2f16(int, int);
int FUN_0c0a2f7a(void);
int FUN_0c0a3118(void);
int FUN_0c0a3180(void);
int FUN_0c0a5d96(void);
int FUN_0c0a7160(int);
int FUN_0c0cdac0(void);
int FUN_0c0ce836(void);
int FUN_0c0ce88c(int, int);
int FUN_0c0d45fe(void);
extern int FUN_0c0d47be();
int FUN_0c0d5a4e(int);
int FUN_0c0d7a7c(void);
int FUN_0c0d7a9c(void);
int FUN_0c0d9288(int, int);
int FUN_0c0da1f6(int, int);
int FUN_0c0dd5d0(int, int);
int FUN_0c0de280(int, int, int, float);
int FUN_0c0de340(int, int, int);
int FUN_0c0df920(void);
int FUN_0c0dfa50(int);
int FUN_0c0dfb50(float);
int nlMultiMatrix8(int);
int nlPopMatrix(int);
int FUN_0c0e19b0(void);
int FUN_0c0e48b0(int, int, int);
int FUN_0c0e59e8(int, int, int);
int FUN_0c0e5d22(int);
int FUN_0c0e6758(int, int);
int FUN_0c0e6834(int, int, int);
int FUN_0c0e6fe8(int);
int FUN_0c0e7242(int, int, float);
int FUN_0c0eb238(void);
int FUN_0c0eeecc(int, int);
int gdFsChangeDir(void);
int gdFsSeek(int, int, int);
int gdFsInitOvl(void);
int FUN_0c0f2f7e(void);
int FUN_0c0f4128(int);
int FUN_0c0f4db4(int, int);
int kmFlipFrameBuffer(void);
int FUN_0c0f61c0(void);
int FUN_0c0f9bb2(void);
int kmSetFogTable(int);
int FUN_0c0fddbe(int, int, int);
int FUN_0c0fe3f4(int, int);
int FUN_0c0ff15c(void);
int FUN_0c0ff4b4(int);
int FUN_0c10121c(int, int, int);
int FUN_0c1012f4(int, int, int);
int vmsfs_c_setcompletecallback(int);
int FUN_0c105ed2(int);
int FUN_0c1066f0(int);
int FUN_0c1070d2(void);
int FUN_0c10710e(int, int, int, int);
int FUN_0c107234(int, int, int, int);
int FUN_0c109c8e(void);
int FUN_0c109cce(void);
int FUN_0c10bb58(int);
int mpdrv_setcmd(int, int, int, int, int);
int FUN_0c1123f2(int);
int FUN_0c115284(void);
int FUN_0c1152a4(int);
int FUN_0c11533a(int, int, int, int);
int FUN_0c1155a8(void);
int FUN_0c1155ac(int, int, int, int, float, float, float, float, float, float, float, float);
int SJ_SplitChunk(int, int, int);
extern float _builtin_fipr(float *, float *);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
extern void _builtin_st_ext(float (*)[4]);
int buDefragDisk(int, int);
int buLoadFileEx(int, int, int, int, int);
#pragma inline_asm(iaOcbwb)
static void iaOcbwb(void *p)
{
    .DATA.W H'04B3
}
int memcpy(int, int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, int, int, int);
void fmMngMcpy4(int a4, int a5, int a6);
int FUN_0c064d32(int a4);
int FUN_0c0a34be(void);
int FUN_0c0c5906(int a4, int a5);
int vmsfs_c_settime(int a4, int a5);
int FUN_0c10486e(int a4);
int direntry_dirty(int a4, int a5);
int adxsjd_clear(int a4);
int FUN_0c105eb8(int a4);
int FUN_0c10e146(int a4, int a5, int a6, int a7);
int mpdrv_stat(int a4, int a5);
int FUN_0c115174(int a4, int a5);
int FUN_0c11518e(int a4, int a5, int a6);
int FUN_0c011aa6(int a4);
int FUN_0c012504(int a4, int a5, int a6, int a7);
int FUN_0c0162ba(int a4, int a5);
int FUN_0c01ae48(void);
float FUN_0c0262f8(int a4);
int FUN_0c02440e(int a4);
int FUN_0c025f38(void);
int FUN_0c02d814(void);
int FUN_0c0302fe(int a4, int a5, int a6, int a7);
int FUN_0c0555c4(void);
int FUN_0c058f60(void);
int FUN_0c05f56e(Stk4 s);
int FUN_0c05fc50(int a4);
int FUN_0c05fcaa(int a4);
int FUN_0c05fcc2(int a4);
int FUN_0c05fcda(int a4);
int FUN_0c06208c(int a4, float f4, float f5, float f6);
int FUN_0c061472(float f4);
int FUN_0c062242(int a4, int a5);
int FUN_0c08d644(int a4, int a5);
int FUN_0c09c506(int a4);
int FUN_0c0a73ca(void);
int FUN_0c0aa3aa(void);
int FUN_0c0ac6a2(int a4, int a5);
void FUN_0c0d5292(void);
float FUN_0c0df340(float f4);
int FUN_0c0df4d0(int a4);
int FUN_0c0ddf80(void);
void nlCalcPoint44(int a4, int a5);
void nlCalcPoint(int a4, int a5);
void nlCalcVector(int a4, int a5);
float FUN_0c0e2220(int a4, int a5);
int FUN_0c0f1c44(int a4);
int FUN_0c0f1fa4(void);
int FUN_0c0f202c(void);
int FUN_0c0f2044(void);
int FUN_0c0f4686(int a4, int a5, int a6, int a7);
int kmSetColorClampValue(Stk4 s);
int kmSetFogDensity(int a4);
void gdFsMemcpy(int a4, int a5, int a6);
int vmsfs_exit(void);
int direntry(int a4, int a5);
int BCDtoDEC(int a4);
int write_sys(int a4);
int read_sys(int a4);
void FUN_0c1070a0(int a4);
int FUN_0c106688(int a4, int a5);
int FUN_0c108474(void);
void FUN_0c10848c(int a4, int a5);
int FUN_0c108734(void);
void FUN_0c10874c(int a4, int a5);
int mpdrv_set_dreq_ns(int a4);
int mpdrv_set_dkill_ns(int a4);
int mpdrv_set_dreset_ns(int a4);
int mpdrv_set_allstatreq_ns(int a4);
int mpdrv_set_transagain_ns(int a4);
int FUN_0c1135c8(int a4, int a5, int a6, int a7);
int vmsfb_create(int a4, int a5, int a6);
int FUN_0c0195a2(int a4);
int FUN_0c01958c(int a4, int a5, int a6, int a7);
int FUN_0c01a3d8(int a4);
int FUN_0c01a3c2(int a4, int a5, int a6, int a7);
int FUN_0c01ae08(int a4);
int FUN_0c01b4aa(int a4, int a5, int a6, int a7);
int FUN_0c01b4c0(int a4);
int FUN_0c01adbc(int a4, int a5, int a6, int a7);
int FUN_0c01d090(void);
int FUN_0c01d304(int a4);
int FUN_0c02078c(void);
int FUN_0c05fdc6(int a4);
int FUN_0c062aa8(int a4, int a5);
int FUN_0c06585e(int a4);
int FUN_0c077428(int a4);
int FUN_0c0c3b16(int a4);
int FUN_0c0d3350(void);
int FUN_0c0d7076(void);
int FUN_0c0d7e5e(void);
int FUN_0c0df700(float f4);
float FUN_0c0df940(void);
int FUN_0c0df520(float f4);
int FUN_0c0ec102(int a4);
void FUN_0c0f059e(int a4);
int FUN_0c0f1766(int a4);
int gdFsReinit(void);
int gdFsCreateHn(void);
int gdFsLoadDir(void);
int gdFsLoadDirFast(void);
int FUN_0c0f1fd2(void);
void FUN_0c0f1ffe(void);
void FUN_0c0f1fe8(void);
int ADXSJD_Start(int a4);
void FUN_0c1070b8(int a4);
int FUN_0c10bbb4(int a4);
int kmiCopyToPVRMemory(int a4, int a5, int a6);
int kmiCopyFromPVRMemory(int a4, int a5, int a6);
int mpdrv_frame_recv_post(void);
int mpdrv_memset_l(int a4, int a5, int a6);
int vmsfb_init(void);
int FUN_0c027f90(void);
int FUN_0c02aa9c(int a4);
int FUN_0c02b7d4(int a4);
int FUN_0c02c91a(int a4);
int FUN_0c027b90(void);
int FUN_0c05fc08(void);
int FUN_0c05fefa(int a4);
int FUN_0c0603c4(void);
int FUN_0c0607f0(void);
int FUN_0c062a7e(int a4);
int FUN_0c062436(int a4, int a5, int a6);
int FUN_0c09e7d2(int a4);
int FUN_0c0a347c(void);
int FUN_0c0a3490(void);
int FUN_0c0a34a4(void);
int FUN_0c0a3510(void);
int FUN_0c0a3524(void);
int FUN_0c0a356c(void);
int FUN_0c0a3580(void);
int FUN_0c0a3594(void);
int FUN_0c0a3ea8(int a4);
int FUN_0c0a5042(void);
int FUN_0c0a502e(void);
int FUN_0c0a6c9a(void);
int FUN_0c0d2a70(int a4);
int FUN_0c0d4fa4(void);
float FUN_0c0d5bc0(void);
int FUN_0c0d7e74(void);
float FUN_0c0e2340(int a4);
int FUN_0c0e51d0(void);
int gdFsToUpper(int a4);
int FUN_0c0fcb8a(void);
int ADXSJD_Init(void);
int ADXSJD_ExecHndl(int a4, int a5, int a6, int a7);
int kmiBGPlanePutWord(int a4, int a5, int a6);
int FUN_0c110ea8(void);
int mpdrv_set_end_ns(void);
void fmMngClearBuf(int a4, int a5);
void FUN_0c114584(int a4, int a5, int a6);
int FUN_0c113d18(void);
int FUN_0c115270(int a4, int a5);
int FUN_0c059b1a(int a4);
int FUN_0c059b08(int a4);
int FUN_0c059b48(int a4);
int FUN_0c059b5a(int a4);
int FUN_0c058f4e(void);
int FUN_0c05fbee(int a4);
int FUN_0c060360(int a4);
int FUN_0c060690(void);
int FUN_0c06b868(int a4, int a5);
int FUN_0c07d926(int a4);
int FUN_0c08e382(int a4);
int FUN_0c0989fc(int a4);
int FUN_0c0989ea(int a4, int a5, int a6, int a7);
int FUN_0c09a91a(int a4);
int FUN_0c09e7a6(int a4);
int FUN_0c0cfeb0(void);
int FUN_0c0d48ea(int a4);
int FUN_0c0d8e5c(int a4, int a5);
int FUN_0c0da54a(int a4);
int FUN_0c0da57e(int a4);
int FUN_0c0da874(int a4);
int FUN_0c0da8ae(int a4);
int FUN_0c0dabbe(int a4);
int FUN_0c0db0e8(int a4);
int FUN_0c0df080(int a4, int a5, int a6, int a7);
int FUN_0c0eb5a4(void);
int syCfgInit(int a4);
int kdGetDevice(int a4);
int FUN_0c101502(void);
int ADXSTM_Init(void);
void FUN_0c10b434(int a4, int a5);
int mpdrv_get_deviceinfo(int a4);
int FUN_0c0117ec(int a4);
int FUN_0c0121d0(int a4, int a5, int a6, int a7);
int FUN_0c02466e(int a4);
int FUN_0c060956(void);
int FUN_0c098ac8(int a4, int a5, int a6, int a7);
int FUN_0c099920(int a4);
int FUN_0c09d9e8(int a4);
int FUN_0c0a2f66(int a4);
int FUN_0c0aeca8(int a4, int a5, int a6, int a7);
int FUN_0c0cdb24(void);
int nlSysMetricsScaleTime(int a4);
void nlGetTranslate(int a4);
void FUN_0c0e2080(int a4);
void FUN_0c0e2110(float f4, float f5, float f6);
int FUN_0c0ec0f2(int a4);
int syHwCacheFinish(int a4, int a5, int a6, int a7);
int syHwInit2(void);
void FUN_0c0fb53c(void);
int kmSetFogTableColor(Stk4 s);
int kmSetFogVertexColor(Stk4 s);
int kmSetBorderColor(Stk4 s);
int gdDcfReset_(void);
int gdDcfDaPause_(void);
int kdSetHandler(int a4, int a5);
int vmsfs_c_getstate(int a4);
void vmsfs_c_setfunc(int a4, int a5);
int ADXSJD_GetSfreq(int a4, int a5, int a6, int a7);
int ADXSJD_GetBlkSmpl(int a4);
int ADXSJD_GetLpStartPos(int a4);
int ADXSJD_GetLpStartOfst(int a4);
int ADXSJD_GetLpEndPos(int a4);
int ADXSJD_GetLpEndOfst(int a4);
void FUN_0c108000(int a4, int a5, int a6, int a7);
int mpdrv_get_device(int a4);
int mpdrv_get_timeout(void);
int mpdrv_optimize(int a4);
int mpdrv_recognize(int a4);
int mpdrv_ischanged(int a4);
void FUN_0c1135fa(int a4, int a5, int a6, int a7);
int FUN_0c01d31a(void);
int FUN_0c01d328(void);
void FUN_0c01f48c(int a4, int a5);
int FUN_0c0555b6(void);
int FUN_0c060590(void);
int FUN_0c06057c(void);
int FUN_0c0605b4(void);
int FUN_0c06074a(void);
int FUN_0c06090c(void);
int FUN_0c060bd4(void);
int FUN_0c060c18(void);
int FUN_0c09a7ba(int a4);
int FUN_0c0ae276(int a4);
int FUN_0c0b146e(int a4, int a5);
int FUN_0c0c9982(int a4);
int FUN_0c0d5188(void);
int FUN_0c0d54ac(void);
int FUN_0c0d48d6(void);
int FUN_0c0d7ecc(void);
void FUN_0c0dcac0(int a4, int a5);
int syRtcFinish(void);
int FUN_0c0ee1fc(int a4);
int FUN_0c0ee288(int a4);
int FUN_0c0ee6dc(int a4, int a5);
int FUN_0c0f581e(int a4);
int FUN_0c0f5810(int a4);
int FUN_0c0f5842(int a4);
int FUN_0c0f5850(int a4);
int gdDcfChkDmaTrans_(int a4, int a5);
int gdDcfSvr_(int a4, int a5);
int kdGetDeviceInfo(int a4);
int kdGetPortStatus(int a4);
int FUN_0c10683c(int a4);
void SJRBF_Reset(int a4);
int mpdrv_get_portstatus(int a4);
int mpdrv_swapmode(int a4);
int FUN_0c0158d8(void);
void FUN_0c0283c4(int a4, int a5);
int FUN_0c039c6c(int a4, int a5, int a6);
int FUN_0c0622ae(int a4, float f4);
int FUN_0c0622a2(int a4, float f4);
int FUN_0c0622ba(int a4, float f4);
int FUN_0c08b8b8(int a4);
int FUN_0c08bb46(int a4);
int FUN_0c098136(int a4);
int FUN_0c0d44c4(void);
int FUN_0c0d4872(int a4, int a5, int a6, int a7);
int FUN_0c0d5ba8(void);
void FUN_0c0dd310(void);
void FUN_0c0e4ac0(int a4);
int FUN_0c0eb5c8(int a4, int a5);
int FUN_0c0eb5b6(void);
int FUN_0c0eb604(int a4, int a5);
int FUN_0c0eb618(int a4, int a5);
int FUN_0c0eb5f0(int a4, int a5);
int FUN_0c0eb5dc(int a4, int a5);
int FUN_0c0eb640(int a4, int a5);
int FUN_0c0eb654(int a4, int a5);
int gdFsCreateDirhn(int a4, int a5);
int FUN_0c0f263a(int a4);
int FUN_0c0fad80(int a4);
int FUN_0c0fd8c0(int a4, int a5);
int ADXSJD_GetFormat(int a4);
int ADXSJD_GetOutBps(int a4);
int ADXSJD_GetNumChan(int a4);
int ADXSJD_GetTotalNumSmpl(int a4);
int ADXSJD_GetNumLoop(int a4);
int mpdrv_timeout(int a4);
int mpdrv_init_memory(void);
int FUN_0c0158e4(void);
int FUN_0c0195f0(void);
int FUN_0c019bf4(void);
int FUN_0c01a42c(void);
int FUN_0c01b66c(void);
int FUN_0c01e7a2(void);
int FUN_0c01e798(void);
int FUN_0c027c74(void);
int FUN_0c03148c(void);
int FUN_0c058f44(void);
int FUN_0c058f3a(void);
int FUN_0c061444(int a4);
int FUN_0c099a88(int a4);
int FUN_0c09a910(int a4);
int FUN_0c0a2f5c(void);
int FUN_0c0a2f52(void);
int FUN_0c0d2dde(void);
void nlObjPutSetGlobalAmbience(float f4);
int FUN_0c0e0580(void);
void FUN_0c0e05a0(int a4, int a5);
int FUN_0c0e16c0(void);
int FUN_0c0eb6cc(int a4, int a5, int a6);
int FUN_0c0eb6f4(int a4, int a5, int a6);
int FUN_0c0ed9d4(int a4, int a5, int a6);
int FUN_0c0ed9e8(int a4, int a5, int a6);
int FUN_0c0ed9ac(int a4, int a5, int a6);
int FUN_0c0ed9c0(int a4, int a5, int a6);
int gdFsSetGlobalErrG(int a4);
int syCfgExit(void);
void FUN_0c0f4fe0(void);
int FUN_0c0fc2a6(int a4);
int FUN_0c0ff8aa(void);
void ADXERR_EntryErrFunc(int a4, int a5);
int ADXSJD_Finish(void);
int ADXSJD_EntryTrapFunc(int a4, int a5, int a6);
int FUN_0c1084a8(void);
void FUN_0c108548(int a4);
int FUN_0c108768(void);
int FUN_0c108fe8(int a4, int a5, int a6, int a7);
int kmiWriteRegister(int a4, int a5);
int mpdrv_get_swapmode(void);
int mpdrv_get_nopcount(void);
int mpdrv_nopcount(int a4);
int mpdrv_speed(int a4);
int mpdrv_get_speed(void);
int mpdrv_debugmode(int a4);
int mpdrv_dreqcount(int a4);
int mpdrv_get_debugmode(void);
int mpdrv_get_dreqcount(void);
int mpdrv_get_lastsendaddr(int a4);
int mpdrv_get_optimize(void);
int mpdrv_rootplay(void);
int FUN_0c111c9c(int a4);
int mpdrv_get_rootplay(int a4);
int mpdrv_gunmode(void);
int FUN_0c111ca6(void);
int FUN_0c114320(int a4, int a5, int a6);
void FUN_0c114ab8(int a4, int a5);
int FUN_0c115a48(void);
int FUN_0c0105a2(void);
void FUN_0c017a24(void);
void FUN_0c02828e(void);
int FUN_0c02d82c(void);
void FUN_0c02d834(void);
int FUN_0c02d83c(void);
void FUN_0c0314dc(void);
void FUN_0c05fc00(void);
void FUN_0c05fc1c(void);
int FUN_0c061434(int a4, int a5, int a6);
int FUN_0c06143c(int a4, int a5, int a6);
int FUN_0c0634ec(int a4);
int FUN_0c0645ee(int a4);
int FUN_0c065468(int a4);
int FUN_0c099a1c(int a4);
int FUN_0c09a7b2(int a4);
int FUN_0c0a2f0e(int a4);
void FUN_0c0d487e(void);
int FUN_0c0da42c(int a4);
int FUN_0c0da434(int a4);
int FUN_0c0df100(void);
int FUN_0c0e0800(int a4);
int FUN_0c0e4980(int a4, int a5);
int FUN_0c0f4104(int a4, int a5, int a6, int a7);
int FUN_0c0f4f1a(int a4);
int FUN_0c0fae00(int a4);
void kdSetGunTrigger(int a4);
int FUN_0c101140(int a4);
int close_file_handle(int a4);
void FUN_0c105b10(void);
int FUN_0c106408(int a4);
int FUN_0c1064b8(int a4);
int FUN_0c1068b6(int a4, int a5, int a6);
int mpdrv_set_hreset(int a4);
void FUN_0c112ff8(void);
int vmsfb_exec(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c1151d6(int a4, int a5, int a6);
int thunk_FUN_0c0f2f7e(void);
void FUN_0c0124ce(void);
void FUN_0c01f9a0(void);
int thunk_FUN_0c062d78(void);
int FUN_0c0247d0(int a4, int a5);
int FUN_0c02d844(void);
int thunk_FUN_0c059330(int a4);
int FUN_0c06058a(void);
int FUN_0c060514(void);
int FUN_0c060576(void);
int FUN_0c06059e(void);
int FUN_0c0605f0(void);
int FUN_0c060620(void);
int FUN_0c060684(void);
int FUN_0c060626(void);
int FUN_0c06068a(void);
int FUN_0c060966(void);
int FUN_0c060950(void);
int FUN_0c060b5e(void);
int FUN_0c060a12(void);
int FUN_0c060afe(void);
int FUN_0c060b2e(void);
int FUN_0c08d65c(int a4, int a5);
int FUN_0c098b96(void);
int thunk_FUN_0c05fff4(void);
int FUN_0c0a34b8(void);
int FUN_0c0a35cc(void);
int FUN_0c0a375c(void);
void FUN_0c0d2dd8(int a4);
int thunk_FUN_0c0a3180(void);
int FUN_0c0d6098(int a4);
void FUN_0c0d71f4(int a4);
int FUN_0c0da886(int a4);
int FUN_0c0da952(int a4);
int FUN_0c0dafcc(int a4);
int FUN_0c0db184(int a4);
void FUN_0c0dd9e0(int a4);
void FUN_0c0de890(int a4);
int nlSysMetricsReadTimer(void);
int nlSysMetricsDiffTime(int a4, int a5);
void FUN_0c0e0710(int a4);
int thunk_FUN_0c0fbcf0(int a4);
void FUN_0c0e34a0(float f4);
void syRtcSetServerMode(int a4);
int gdFsInit(void);
int buGetVersion(int a4);
void buSetPrintFunc(int a4);
int syCfgConvLang(int a4);
int pdVibMxIsReady(int a4);
int FUN_0c0f4dc8(int a4);
int FUN_0c0f4f14(int a4);
int FUN_0c0f4f28(int a4, int a5);
int FUN_0c0fae08(void);
void FUN_0c0fddce(int a4);
int gdFsGetGdDcf(void);
int FUN_0c0ff8b4(int a4, int a5);
int thunk_FUN_0c111b6e(int a4);
int thunk_FUN_0c111b7e(int a4);
int kdGetGunLatchedPort(void);
int thunk_FUN_0c112fba(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int ADXRNA_Init(void);
int ADXRNA_Finish(int a4, int a5, int a6, int a7);
int FUN_0c1062f6(int a4, int a5);
int FUN_0c106302(int a4, int a5);
void FUN_0c1066a0(int a4, int a5, int a6);
int thunk_ADXRNA_Create(int a4, int a5, int a6, int a7);
int thunk_FUN_0c10e184(int a4, int a5);
int kmiReadRegister(int a4);
int FUN_0c112f1e(int a4);
int thunk_FUN_0c1155a8(void);
int FUN_0c114338(int a4);
int thunk_FUN_0c115240(int a4, int a5, int a6);
int thunk_FUN_0c020cba(int a4);
int FUN_0c0235ca(void);
void FUN_0c02ee3c(void);
int FUN_0c02d9e0(int a4, int a5, float f4, float f5, float f6, float f7);
void FUN_0c03082e(void);
int FUN_0c048ea0(int a4, int a5, int a6, int a7);
void FUN_0c04cdee(void);
void FUN_0c055562(void);
int FUN_0c059b04(void);
void FUN_0c05b188(void);
void FUN_0c05b9e4(void);
void FUN_0c05c44e(void);
int FUN_0c05cb42(int a4, int a5, int a6);
void FUN_0c05d1cc(void);
void FUN_0c05dbf4(void);
void FUN_0c05df96(void);
void FUN_0c05e4e8(void);
int FUN_0c062da2(void);
int FUN_0c062da6(void);
int FUN_0c08a842(int a4);
int FUN_0c08f76a(void);
int FUN_0c098c82(void);
void FUN_0c099a84(void);
void FUN_0c09b700(void);
void FUN_0c0a2ee8(void);
void FUN_0c0a3304(void);
void FUN_0c0a3792(void);
void FUN_0c0ad46e(void);
void FUN_0c0ae284(void);
void FUN_0c0ae396(void);
void FUN_0c0cf202(void);
void FUN_0c0d00ea(void);
void FUN_0c0d2a84(void);
void FUN_0c0d4696(void);
int thunk_FUN_0c0d45fe(void);
void FUN_0c0d52aa(void);
void FUN_0c0d905e(void);
int FUN_0c0e48a0(void);
void FUN_0c0eacf0(void);
void FUN_0c0f283e(void);
int FUN_0c0f4cc6(int a4);
void FUN_0c0f619a(void);
int gdFsStrcmp(int a4, int a5);
void FUN_0c0ff7e0(void);
void FUN_0c0ff7e4(void);
int check_isopen(void);
int FUN_0c105e8a(int a4);
void FUN_0c105e9e(int a4, int a5);
void FUN_0c105e8e(int a4, int a5);
int ADXSJD_GetDecNumSmpl(int a4);
void ADXSJD_SetDecPos(int a4, int a5);
void ADXSJD_SetTrapNumSmpl(int a4, int a5);
int FUN_0c10687c(int a4);
void FUN_0c1070ce(void);
void FUN_0c10747e(void);
int FUN_0c108b4c(int a4);
int FUN_0c108b50(int a4);
int FUN_0c108b48(int a4);
void FUN_0c10c08c(void);
int FUN_0c10d0a0(void);
int FUN_0c10d0a4(void);
void kmiModuleInitialize(void);
void FUN_0c113000(void);
int FUN_0c114342(int a4);
int FUN_0c115108(void);
int FUN_0c0e7240(int a4, int a5);

void fmMngMcpy4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = a6;
    if ((int)a6 < 0) {
        t0 = (a6 + 0x3);
    }
    t1 = a4;
    t2 = a5;
    t3 = ((t0 >> 1) >> 1);
    for (;;) {
        t0 = (int)t3 <= 0;
        t3 = (t3 - 1);
        if (t0) {
            break;
        }
        t0 = (*(int *)((t1 + 0x0)));
        t1 = (t1 + 0x4);
        *(unsigned int *)((t2 + 0x0)) = t0;
        t2 = (t2 + 0x4);
    }
}

int FUN_0c064d32(int a4)
{
    *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
    return FUN_0c09a808(a4, 0x1, 0xA2);
}

int FUN_0c0a34be(void)
{
    FUN_0c0a2f16(0x0, 0x106);
    *(volatile signed char *)0xC7F2F0E;
    return FUN_0c0f4db4((*(int *)0xC494048), 0xFFFFFFF6);
}

int FUN_0c0c5906(int a4, int a5)
{
    *(unsigned char *)((a5 + 0x0)) = 0x3;
    *(unsigned char *)((a4 + 0x9)) = 0x2;
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x1;
    *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x1;
    (((struct o105_uchar *)(a4))->v) = 0x1;
    return 0x1;
}

int vmsfs_c_settime(int a4, int a5)
{
    return memcpy(((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x6C), a5, 0x8);
}

int FUN_0c10486e(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = a4;
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((*(signed char *)((t0 + 0x0))) != 0) {
            t2 = (t2 + 0x1);
            t1 = (t1 + 0x1);
            t0 = (t0 + 0x1);
            if ((int)t2 >= (int)0xC) {
                break;
            }
            continue;
        }
        break;
    }
    return t1;
}

int direntry_dirty(int a4, int a5)
{
    *(unsigned char *)(((((int)a5 >> 4) + (((a4 * 0x148) + 0xC80DBC8) + 0x48)) + 0x0)) = 0x1;
    return (((a4 * 0x148) + 0xC80DBC8) + 0x48);
}

int adxsjd_clear(int a4)
{
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    *(unsigned int *)((a4 + 0x30)) = 0x0;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0x7FFFFFFF;
    *(unsigned int *)((a4 + 0x3C)) = 0xFFFFFFFF;
    (((struct o40_uint *)(a4))->v) = 0x0;
    (((struct o44_uint *)(a4))->v) = 0x0;
    return 0x44;
}

int FUN_0c105eb8(int a4)
{
    ADXB_Stop((*(int *)((a4 + 0x4))));
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    return 0x0;
}

int FUN_0c10e146(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t2;

    t1 = *(int *)((((a4 << 2) << 1) + 0xC8171F0));
    t2 = *(int *)(((0xC8171F0 + ((a4 << 2) << 1)) + 0x4));
    return ((int (*)(int, int, int, int))(t1))(t2, a5, a6, a7);
}

int mpdrv_stat(int a4, int a5)
{
    register int t1;

    t1 = *(int *)(((mpdrv_get_device(a4)) + 0x20));
    return (((t1 == a5)) ? 1 : 0);
}

int FUN_0c115174(int a4, int a5)
{
    FUN_0c0e6758((*(int *)(((*(int *)((a4 + 0x10))) + 0x4))), a5);
    return 0x0;
}

int FUN_0c11518e(int a4, int a5, int a6)
{
    int stk[2];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a6;
    return FUN_0c0e6834((*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x10))) + 0x4))), a5, (*(signed char *)(((int)stk + 4))));
}

int FUN_0c011aa6(int a4)
{
    return (buLoadFileEx(a4, 0xC116220, 0xC352240, 0x4, 0x1));
}

int FUN_0c012504(int a4, int a5, int a6, int a7)
{
    register int t0;

    *(unsigned char *)0xC361BE8 = 0x1;
    t0 = FUN_0c05948c(0x5, a5, a6, a7);
    *(unsigned char *)0xC361BE8 = 0x0;
    return t0;
}

int FUN_0c0162ba(int a4, int a5)
{
    *(unsigned char *)((a4 + 0x0)) = 0x1;
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    *(unsigned short *)((a4 + 0x2)) = 0x1F;
    return FUN_0c0623a6(a4, 0xC6649D0, a5);
}

int FUN_0c01ae48(void)
{
    memset(0xC362348, 0x0, 0xC);
    (((struct o1_uchar *)0xC362351)->v) = 0x1;
    (((struct o0_uchar *)0xC362351)->v) = 0x1;
    return 0x1;
}

float FUN_0c0262f8(int a4)
{
    int stk[5];

    FUN_0c020e3e(((int)stk + 0), a4);
    return (*(float *)(((int)stk + 12)));
}

int FUN_0c02440e(int a4)
{
    register int t1;
    register int t0;

    t1 = a4;
    for (;;) {
        if (t1 == 0) {
            break;
        }
        t0 = (FUN_0c023f0a(t1));
        t1 = (*(int *)((t1 + 0x18)));
    }
    return t0;
}

int FUN_0c025f38(void)
{
    FUN_0c025d72(0xC7E40C4, ((((struct o0_int *)0xC7E407C)->v)));
    return FUN_0c025d72(0xC7E40C4, ((((struct o4_int *)0xC7E407C)->v)));
}

int FUN_0c02d814(void)
{
    *(unsigned char *)0xC366A70 = 0x1;
    if ((*(signed char *)0xC7F4769) == 0) {
        return FUN_0c049b7c();
    }
    return 0xC7F4769;
}

int FUN_0c0302fe(int a4, int a5, int a6, int a7)
{
    *(unsigned char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC366A9C) + 0xA)) = 0xE;
    return FUN_0c0301d2(a4, a5, ((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC366A9C), a7);
}

int FUN_0c0555c4(void)
{
    int t1;

    if (((*(signed char *)0xC7F302C) == 3) && (t1 = *(signed char *)0xC7F302D, t1 == 0)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c058f60(void)
{
    register int t0;

    t0 = *(int *)0xC7E40C0;
    if (t0 == 0) {
        return 0x0;
    }
    *(unsigned int *)0xC7E40C0 = (*(int *)((t0 + 0x14)));
    return t0;
}

int FUN_0c05f56e(Stk4 s)
{
    return (FUN_0c05f4cc((((((signed char)(s.w[0] >> 0)) << 2) << 2) + 0xC14D768)));
}

int FUN_0c05fc50(int a4)
{
    return (FUN_0c061240(0xCC00000, a4));
}

int FUN_0c05fcaa(int a4)
{
    return (FUN_0c061240(0xCC00000, a4));
}

int FUN_0c05fcc2(int a4)
{
    return (FUN_0c061240(0xCC00000, a4));
}

int FUN_0c05fcda(int a4)
{
    return (FUN_0c061240(0xCC00000, a4));
}

int FUN_0c06208c(int a4, float f4, float f5, float f6)
{
    *(float *)((a4 + 0x0)) = ((*(float *)((a4 + 0x0))) * f4);
    (((struct o4_float *)(a4))->v) = (((((struct o4_float *)(a4))->v)) * f5);
    (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a4))->v)) * f6);
    return 0x8;
}

int FUN_0c061472(float f4)
{
    FUN_0c0de280(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, f4);
    FUN_0c0ddf80();
    return FUN_0c0ddf80();
}

int FUN_0c062242(int a4, int a5)
{
    FUN_0c0e19b0();
    nlGetTranslate(a5);
    return nlPopMatrix(0x1);
}

int FUN_0c08d644(int a4, int a5)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)(((int)stk + 0));
    if ((unsigned char)t0 != 99) {
        return FUN_0c04be14(a4, (*(signed char *)(((int)stk + 0))));
    }
    return (unsigned char)t0;
}

int FUN_0c09c506(int a4)
{
    if ((int)(*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x720E))) > (int)0xA) {
        (((struct o720E_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0xA;
    }
    (((struct o720E_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x0;
    return 0x720E;
}

int FUN_0c0a73ca(void)
{
    register int t0;

    t0 = FUN_0c0a5d96();
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC0A73E2;
    }
    return t0;
}

int FUN_0c0aa3aa(void)
{
    register int t0;

    t0 = FUN_0c0a5d96();
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC0AA3C2;
    }
    return t0;
}

int FUN_0c0ac6a2(int a4, int a5)
{
    if ((*(signed char *)((((signed char)a5 + (0x310 + a4)) + 0x0))) != 0) {
        return 0x1;
    }
    return 0x0;
}

void FUN_0c0d5292(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = (0xC7F302C + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = 0x0;
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
}

float FUN_0c0df340(float f4)
{
    if (0.0f > f4) {
        return (-_builtin_sqrtf((-f4)));
    }
    return _builtin_sqrtf(f4);
}

int FUN_0c0df4d0(int a4)
{
    register int t1;

    t1 = (unsigned short)a4;
    if ((int)(unsigned short)a4 > (int)0x8000) {
        t1 = (0x10000 - (unsigned short)a4);
    }
    return FUN_0c0dfa50((0x4000 - t1));
}

int FUN_0c0ddf80(void)
{
    *(unsigned int *)0xC7F8E94 = 0x1;
    FUN_0c0f61c0();
    *(unsigned int *)0xC7F8E94 = 0x0;
    return kmFlipFrameBuffer();
}

void nlCalcPoint44(int a4, int a5)
{
    float u3[4];

    u3[0] = (*(float *)((a4 + 0x0)));
    u3[1] = ((((struct o4_float *)(a4))->v));
    u3[2] = ((((struct o4_float *)((a4 + 0x4)))->v));
    u3[3] = 1.0f;
    _builtin_ftrv(u3, u3);
    *(float *)((((a5 + 0x10) - 0x4) + 0x0)) = u3[3];
    *(float *)(((((a5 + 0x10) - 0x4) - 0x4) + 0x0)) = u3[2];
    *(float *)((((((a5 + 0x10) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[1];
    *(float *)(((((((a5 + 0x10) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[0];
}

void nlCalcPoint(int a4, int a5)
{
    float u3[4];

    u3[0] = (*(float *)((a4 + 0x0)));
    u3[1] = ((((struct o4_float *)(a4))->v));
    u3[2] = ((((struct o4_float *)((a4 + 0x4)))->v));
    u3[3] = 1.0f;
    _builtin_ftrv(u3, u3);
    *(float *)((((a5 + 0xC) - 0x4) + 0x0)) = u3[2];
    *(float *)(((((a5 + 0xC) - 0x4) - 0x4) + 0x0)) = u3[1];
    *(float *)((((((a5 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[0];
}

void nlCalcVector(int a4, int a5)
{
    float u3[4];

    u3[0] = (*(float *)((a4 + 0x0)));
    u3[1] = ((((struct o4_float *)(a4))->v));
    u3[2] = ((((struct o4_float *)((a4 + 0x4)))->v));
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    *(float *)((((a5 + 0xC) - 0x4) + 0x0)) = u3[2];
    *(float *)(((((a5 + 0xC) - 0x4) - 0x4) + 0x0)) = u3[1];
    *(float *)((((((a5 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[0];
}

float FUN_0c0e2220(int a4, int a5)
{
    float u6[4];
    float u7[4];

    u6[0] = (*(float *)((a4 + 0x0)));
    u6[1] = ((((struct o4_float *)(a4))->v));
    u6[2] = ((((struct o4_float *)((a4 + 0x4)))->v));
    u6[3] = 0.0f;
    u7[0] = (*(float *)((a5 + 0x0)));
    u7[1] = ((((struct o4_float *)(a5))->v));
    u7[2] = ((((struct o4_float *)((a5 + 0x4)))->v));
    u7[3] = 0.0f;
    return (_builtin_fipr(u6, u7));
}

int FUN_0c0f1c44(int a4)
{
    if (a4 != 0) {
        if (((((struct o4C_short *)(a4))->v)) == 0) {
            return 0xFFFFFFF6;
        }
        return ((((struct o50_short *)(a4))->v));
    }
    return 0xFFFFFFF6;
}

int FUN_0c0f1fa4(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC346BE4;
    if (t0 != 0) {
        t1 = (((struct o44_int *)(t0))->v);
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int FUN_0c0f202c(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC346BE4;
    if (t0 != 0) {
        t1 = (((struct o54_int *)(t0))->v);
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int FUN_0c0f2044(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC346BE4;
    if (t0 != 0) {
        t1 = (((struct o58_int *)(t0))->v);
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int FUN_0c0f4686(int a4, int a5, int a6, int a7)
{
    ADXRNA_Finish(a4, a5, a6, a7);
    ADXSJD_Finish();
    return ((int (*)(void))(0xC106432))();
}

int kmSetColorClampValue(Stk4 s)
{
    kmiWriteRegister(0xBC, s.w[0]);
    kmiWriteRegister(0xC0, s.w[1]);
    return 0x0;
}

int kmSetFogDensity(int a4)
{
    kmiWriteRegister(0xB8, a4);
    return 0x0;
}

void gdFsMemcpy(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((int)a6 > 0) {
        t0 = a5;
        t1 = a6;
        t2 = a4;
        for (;;) {
            t3 = *(signed char *)((t2 + 0x0));
            t2 = (t2 + 0x1);
            t1 = (t1 - 1);
            *(unsigned char *)((t0 + 0x0)) = t3;
            t0 = (t0 + 0x1);
            if ((int)t1 <= 0) {
                break;
            }
        }
    }
}

int vmsfs_exit(void)
{
    memset(0xC80DBC8, 0x0, 0xA40);
    FUN_0c113000();
    return 0x0;
}

int direntry(int a4, int a5)
{
    return ((((a5 << 2) << 2) << 1) + (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x28))));
}

int BCDtoDEC(int a4)
{
    return ((((((unsigned int)((unsigned int)a4 >> 2) >> 2) << 2) + ((unsigned int)((unsigned int)a4 >> 2) >> 2)) << 1) + (a4 & 0xF));
}

int write_sys(int a4)
{
    return FUN_0c1012f4(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x8))), (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))));
}

int read_sys(int a4)
{
    return FUN_0c10121c(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x8))), (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))));
}

void FUN_0c1070a0(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
}

int FUN_0c106688(int a4, int a5)
{
    gdFsSeek((*(int *)((a4 + 0x8))), a5, 0x0);
    return FUN_0c0f1766((*(int *)((a4 + 0x8))));
}

int FUN_0c108474(void)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    return t0;
}

void FUN_0c10848c(int a4, int a5)
{
    _builtin_set_imask(((unsigned int)(((a5 & 0xF) << 2) << 2) >> 4));
}

int FUN_0c108734(void)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    return t0;
}

void FUN_0c10874c(int a4, int a5)
{
    _builtin_set_imask(((unsigned int)(((a5 & 0xF) << 2) << 2) >> 4));
}

int mpdrv_set_dreq_ns(int a4)
{
    return (mpdrv_setcmd(a4, 0x1, 0x0, 0x0, 0x0));
}

int mpdrv_set_dkill_ns(int a4)
{
    return (mpdrv_setcmd(a4, 0x4, 0x0, 0x0, 0x0));
}

int mpdrv_set_dreset_ns(int a4)
{
    return (mpdrv_setcmd(a4, 0x3, 0x0, 0x0, 0x0));
}

int mpdrv_set_allstatreq_ns(int a4)
{
    return (mpdrv_setcmd(a4, 0x2, 0x0, 0x0, 0x0));
}

int mpdrv_set_transagain_ns(int a4)
{
    return (mpdrv_setcmd(a4, 0xFC, 0x0, 0x0, 0x0));
}

int FUN_0c1135c8(int a4, int a5, int a6, int a7)
{
    if ((int)a6 <= 0) {
        return 0x1;
    }
    return ((int (*)(int, int, int, int))(0xC1135BC))(a4, a5, (a6 - 1), a7);
}

int vmsfb_create(int a4, int a5, int a6)
{
    return FUN_0c11533a((*(int *)0xC843928), a4, a5, a6);
}

int FUN_0c0195a2(int a4)
{
    if ((((((struct oF2_short *)(a4))->v)) & (*(short *)0xC3622D0)) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c01958c(int a4, int a5, int a6, int a7)
{
    register int t0;

    *(unsigned short *)0xC3622D0 = a4;
    t0 = FUN_0c05948c(0x5, a5, a6, a7);
    *(unsigned short *)0xC3622D0 = 0x0;
    return t0;
}

int FUN_0c01a3d8(int a4)
{
    if ((((((struct oF2_short *)(a4))->v)) & (*(short *)0xC36232C)) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c01a3c2(int a4, int a5, int a6, int a7)
{
    register int t0;

    *(unsigned short *)0xC36232C = a4;
    t0 = FUN_0c05948c(0x5, a5, a6, a7);
    *(unsigned short *)0xC36232C = 0x0;
    return t0;
}

int FUN_0c01ae08(int a4)
{
    if ((((((struct oF2_short *)(a4))->v)) & (*(short *)0xC36233C)) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c01b4aa(int a4, int a5, int a6, int a7)
{
    register int t0;

    *(unsigned short *)0xC36234C = a4;
    t0 = FUN_0c05948c(0x5, a5, a6, a7);
    *(unsigned short *)0xC36234C = 0x0;
    return t0;
}

int FUN_0c01b4c0(int a4)
{
    if ((((((struct oF2_short *)(a4))->v)) & (*(short *)0xC36234C)) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c01adbc(int a4, int a5, int a6, int a7)
{
    register int t0;

    *(unsigned short *)0xC36233C = a4;
    t0 = FUN_0c05948c(0x5, a5, a6, a7);
    *(unsigned short *)0xC36233C = 0x0;
    return t0;
}

int FUN_0c01d090(void)
{
    *(unsigned char *)0xC7F473E = 0x0;
    (((struct o3_uchar *)0xC362360)->v) = 0x0;
    (((struct o2_uchar *)0xC362360)->v) = 0x0;
    (((struct o1_uchar *)0xC362360)->v) = 0x0;
    (((struct o0_uchar *)0xC362360)->v) = 0x0;
    return 0x0;
}

int FUN_0c01d304(int a4)
{
    (((struct o3_uchar *)0xC362378)->v) = 0x0;
    (((struct o2_uchar *)0xC362378)->v) = 0x0;
    (((struct o1_uchar *)0xC362378)->v) = 0x0;
    (((struct o0_uchar *)0xC362378)->v) = 0x0;
    (((struct o6_uchar *)0xC362378)->v) = a4;
    return a4;
}

int FUN_0c02078c(void)
{
    FUN_0c02067e(0xC7E40C4);
    FUN_0c02067e(((((struct o0_int *)0xC7E4074)->v)));
    return FUN_0c02067e(((((struct o4_int *)0xC7E4074)->v)));
}

int FUN_0c05fdc6(int a4)
{
    return FUN_0c05fd1a(((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC6002D0));
}

int FUN_0c062aa8(int a4, int a5)
{
    *(float *)((a4 + 0x0)) = ((((struct o18_float *)((*(int *)0xC439DC8)))->v));
    *(float *)((a5 + 0x0)) = ((((struct o1C_float *)((*(int *)0xC439DC8)))->v));
    return 0x0;
}

int FUN_0c06585e(int a4)
{
    register int t1;

    t1 = 0x4B;
    if ((*(signed char *)((a4 + 0x7205))) != 0) {
        t1 = 0x4C;
    }
    return FUN_0c09a808(a4, 0x1, t1);
}

int FUN_0c077428(int a4)
{
    FUN_0c07a1e4(a4);
    FUN_0c07743e(a4);
    return 0x0;
}

int FUN_0c0c3b16(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x1C));
    if ((*(signed char *)((t0 + 0x10A))) != 0) {
        return (*(signed char *)((t0 + 0x7213)));
    }
    return 0x0;
}

int FUN_0c0d3350(void)
{
    (((struct o0_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
    (((struct o3_uchar *)0xC7F2EE5)->v) = 0x0;
    (((struct o2_uchar *)0xC7F2EE5)->v) = 0x0;
    (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
    return 0x0;
}

int FUN_0c0d7076(void)
{
    (((struct oC_uint *)0xC7F2F24)->v) = (((((struct oC_int *)0xC7F2F24)->v)) + 0x1);
    (((struct o0_uint *)0xC7F2F24)->v) = (((((struct o0_int *)0xC7F2F24)->v)) + 0x1);
    return 0x1;
}

int FUN_0c0d7e5e(void)
{
    FUN_0c0d7a7c();
    *(unsigned char *)0xC7F4768 = 0x1;
    *(unsigned char *)0xC7F2F17 = 0x0;
    return 0xC7F2F17;
}

float FUN_0c0df940(void)
{
    register int t0;

    t0 = FUN_0c0df920();
    return ((float)t0 * 3.05175781e-05f);
}

int FUN_0c0df520(float f4)
{
    return FUN_0c0dfb50(((-_builtin_fabsf(f4)) + 1.57079625f));
}

int FUN_0c0ec102(int a4)
{
    if ((*(int *)((a4 + 0x0))) == 1) {
        return 0x0;
    }
    return ((*(signed char *)((0x10 + (*(int *)((a4 + 0x4)))))) & 0x40);
}

void FUN_0c0f059e(int a4)
{
    int t0;

    if ((a4 != 0) && (t0 = *(int *)((a4 + 0x0)), (int)t0 >= (int)0x2)) {
        *(unsigned int *)(((a4 + 0x10) + 0x2C)) = (*(int *)(((a4 + 0x10) + 0x0)));
    }
}

int FUN_0c0f1766(int a4)
{
    if (a4 != 0) {
        if (((((struct o4C_short *)(a4))->v)) == 0) {
            return 0x0;
        }
        return (*(int *)((a4 + 0x14)));
    }
    return 0x0;
}

int gdFsReinit(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC346BE4;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x10));
        return ((int (*)(void))(t1))();
    }
    return 0xFFFFFFFF;
}

int gdFsCreateHn(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC346BE4;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x20));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsLoadDir(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC346BE4;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x2C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsLoadDirFast(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC346BE4;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x3C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int FUN_0c0f1fd2(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC346BE4;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x34));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

void FUN_0c0f1ffe(void)
{
    register int t0;

    t0 = *(int *)0xC346BE4;
    if (t0 != 0) {
        ((int (*)(void))(((((struct o74_int *)(t0))->v))))();
    return;
    }
}

void FUN_0c0f1fe8(void)
{
    register int t0;

    t0 = *(int *)0xC346BE4;
    if (t0 != 0) {
        ((int (*)(void))(((((struct o48_int *)(t0))->v))))();
    return;
    }
}

int ADXSJD_Start(int a4)
{
    adxsjd_clear(a4);
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    return 0x1;
}

void FUN_0c1070b8(int a4)
{
    _builtin_set_imask(((unsigned int)((((*(int *)((a4 + 0x0))) & 0xF) << 2) << 2) >> 4));
}

int FUN_0c10bbb4(int a4)
{
    register int t0;

    for (;;) {
        t0 = FUN_0c10bb58(a4);
        if (t0 == 1) {
            break;
        }
    }
    return 0x1;
}

int kmiCopyToPVRMemory(int a4, int a5, int a6)
{
    FUN_0c0fddbe((a4 + 0xA5000000), a5, a6);
    return 0x1;
}

int kmiCopyFromPVRMemory(int a4, int a5, int a6)
{
    FUN_0c0fddbe(a4, (a5 + 0xA5000000), a6);
    return 0x1;
}

int mpdrv_frame_recv_post(void)
{
    (((struct oFC0_uint *)((*(int *)0xC843924)))->v) = 0x1;
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    return 0x0;
}

int mpdrv_memset_l(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    if ((int)a6 > 0) {
        t0 = a4;
        t1 = 0x0;
        for (;;) {
            t1 = (t1 + 0x1);
            *(unsigned int *)((t0 + 0x0)) = a5;
            t0 = (t0 + 0x4);
            if ((int)t1 >= (int)a6) {
                break;
            }
        }
    }
    return a6;
}

int vmsfb_init(void)
{
    register int t1;

    FUN_0c115284();
    t1 = FUN_0c1152a4(0x8);
    *(unsigned int *)0xC843928 = t1;
    return t1;
}

int FUN_0c027f90(void)
{
    (((struct o4_uint *)0xC363A68)->v) = 0x0;
    (((struct o0_uint *)0xC363A68)->v) = 0x0;
    return memset(0xC363A70, 0x0, 0x3000);
}

int FUN_0c02aa9c(int a4)
{
    register int t0;

    t0 = *(int *)((((a4 & 0x7) << 2) + 0xC148EF8));
    (((struct o8_uint *)0xC7F31BC)->v) = t0;
    (((struct o4_uint *)0xC7F31BC)->v) = t0;
    (((struct o0_uint *)0xC7F31BC)->v) = t0;
    return 0xC148EF8;
}

int FUN_0c02b7d4(int a4)
{
    register int t0;

    t0 = *(int *)((((a4 & 0x7) << 2) + 0xC1490C4));
    (((struct o8_uint *)0xC7F31BC)->v) = t0;
    (((struct o4_uint *)0xC7F31BC)->v) = t0;
    (((struct o0_uint *)0xC7F31BC)->v) = t0;
    return 0xC1490C4;
}

int FUN_0c02c91a(int a4)
{
    register int t0;

    t0 = *(int *)((((a4 & 0x7) << 2) + 0xC1491AC));
    (((struct o8_uint *)0xC7F31BC)->v) = t0;
    (((struct o4_uint *)0xC7F31BC)->v) = t0;
    (((struct o0_uint *)0xC7F31BC)->v) = t0;
    return 0xC1491AC;
}

int FUN_0c027b90(void)
{
    register int t0;

    t0 = gdFsChangeDir();
    return (((t0 == 0)) ? 1 : 0);
}

int FUN_0c05fc08(void)
{
    (((struct o4_uint *)0xC38380C)->v) = 0x270F;
    (((struct o0_uint *)0xC38380C)->v) = 0x270F;
    (((struct o8_float *)0xC38380C)->v) = (*(float *)0xC05FC4C);
    return 0xC05FC4C;
}

int FUN_0c05fefa(int a4)
{
    return FUN_0c05fcf2(((unsigned char)(((a4 << 1) + a4) << 2) + 0xC17FDC8));
}

int FUN_0c0603c4(void)
{
    FUN_0c05fd1a(0xC664940);
    FUN_0c05fd1a(0xC664958);
    return FUN_0c05fd1a(0xC664970);
}

int FUN_0c0607f0(void)
{
    FUN_0c05fd1a(0xC6649B8);
    FUN_0c05fd1a(0xC6649D0);
    return FUN_0c05fcf2(0xC17FE70);
}


int FUN_0c062436(int a4, int a5, int a6)
{
    FUN_0c0624c4((a4 + 0x9C), a5, a6);
    return 0x0;
}

int FUN_0c09e7d2(int a4)
{
    if (!(((((struct o274_float *)(a4))->v)) > 0.0f)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0a347c(void)
{
    FUN_0c0a2f16(0x0, 0x102);
    return FUN_0c0f4f28((*(int *)0xC494048), 0x1);
}

int FUN_0c0a3490(void)
{
    FUN_0c0a2f16(0x0, 0x103);
    return FUN_0c0f4f28((*(int *)0xC494048), 0x1);
}

int FUN_0c0a34a4(void)
{
    FUN_0c0a2f16(0x0, 0x104);
    return FUN_0c0f4f28((*(int *)0xC494048), 0x1);
}

int FUN_0c0a3510(void)
{
    FUN_0c0a2f16(0x0, 0x107);
    return FUN_0c0f4f28((*(int *)0xC494048), 0x1);
}

int FUN_0c0a3524(void)
{
    FUN_0c0a2f16(0x0, 0x108);
    return FUN_0c0f4f28((*(int *)0xC494048), 0x1);
}

int FUN_0c0a356c(void)
{
    FUN_0c0a2f16(0x0, 0x10A);
    return FUN_0c0f4f28((*(int *)0xC494048), 0x1);
}

int FUN_0c0a3580(void)
{
    FUN_0c0a2f16(0x1, 0x117);
    return FUN_0c0f4f28((*(int *)0xC49404C), 0x1);
}

int FUN_0c0a3594(void)
{
    FUN_0c0a2f16(0x1, 0x118);
    return FUN_0c0f4f28((*(int *)0xC49404C), 0x1);
}

int FUN_0c0a3ea8(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = *(signed char *)(((int)stk + 0));
    *(unsigned char *)(((int)stk + 0)) = (t0 & 0x1);
    return FUN_0c0a2eec(((signed char)(t0 & 0x1) + 0x502A9));
}

int FUN_0c0a5042(void)
{
    register int t1;

    t1 = (*(int *)0xC7E4084);
    for (;;) {
        if ((*(int *)((t1 + 0x10))) == 0xC0A6CAE) {
            break;
        }
        t1 = (*(int *)((t1 + 0x18)));
    }
    return t1;
}

int FUN_0c0a502e(void)
{
    (((struct o0_uchar *)0xC7F2EE4)->v) = 0x3;
    (((struct o3_uchar *)0xC7F2EE4)->v) = 0x0;
    (((struct o2_uchar *)0xC7F2EE4)->v) = 0x0;
    (((struct o1_uchar *)0xC7F2EE4)->v) = 0x0;
    return 0x0;
}

int FUN_0c0a6c9a(void)
{
    register int t0;

    t0 = FUN_0c0a5d96();
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC0A6CAE;
    }
    return FUN_0c0a7160(t0);
}

int FUN_0c0d2a70(int a4)
{
    return FUN_0c0240e8((*(int *)((a4 + 0x1C))), ((((struct o64_short *)(a4))->v)), ((((struct o68_short *)(a4))->v)));
}

int FUN_0c0d4fa4(void)
{
    FUN_0c0d54ac();
    (((struct o0_uchar *)0xC7F2EE4)->v) = 0x6;
    (((struct o1_uchar *)0xC7F2EE4)->v) = 0x0;
    return 0x0;
}

float FUN_0c0d5bc0(void)
{
    if ((*(int *)0xC7F3020) != 0) {
        return (*(float *)0xC0D5DF4);
    }
    return 0.0f;
}

int FUN_0c0d7e74(void)
{
    register int t0;

    t0 = FUN_0c0d7a9c();
    *(unsigned char *)0xC7F4769 = 0x1;
    *(unsigned char *)0xC7F2F17 = 0x1;
    return t0;
}

float FUN_0c0e2340(int a4)
{
    register float u0;
    register float u1;
    register float u2;
    float u3[4];
    float u4[4];

    u0 = *(float *)((a4 + 0x0));
    u1 = (((struct o4_float *)(a4))->v);
    u2 = (((struct o4_float *)((a4 + 0x4)))->v);
    u3[0] = u0;
    u3[1] = u1;
    u3[2] = u2;
    u3[3] = 0.0f;
    u4[0] = u0;
    u4[1] = u1;
    u4[2] = u2;
    u4[3] = 0.0f;
    return _builtin_sqrtf((_builtin_fipr(u3, u4)));
}

int FUN_0c0e51d0(void)
{
    if ((*(int *)0xA0800098) != 0) {
        return 0x1;
    }
    return 0x0;
}

int gdFsToUpper(int a4)
{
    register int t1;

    t1 = a4;
    if (((int)(signed char)a4 >= (int)0x61) && ((int)(signed char)a4 <= (int)0x7A)) {
        t1 = (a4 - 32);
    }
    return t1;
}

int FUN_0c0fcb8a(void)
{
    FUN_0c109c8e();
    return (FUN_0c109cce());
}

int ADXSJD_Init(void)
{
    FUN_0c113d18();
    return memset(0xC813FD4, 0x0, 0x480);
}

int ADXSJD_ExecHndl(int a4, int a5, int a6, int a7)
{
    register int t1;

    if ((*(signed char *)((a4 + 0x1))) == 1) {
        return FUN_0c105ed2(a4);
    }
    t1 = *(signed char *)((a4 + 0x1));
    if (t1 != 2) {
        return t1;
    }
    return ((int (*)(int, int, int, int))(0xC10624C))(a4, a5, a6, a7);
}

int kmiBGPlanePutWord(int a4, int a5, int a6)
{
    register int t2;

    t2 = a5;
    if ((a4 & 0x1000000) != 0) {
        *(unsigned int *)(((a5 << 2) + 0xC817064)) = a6;
        t2 = (a5 + 0x1);
    }
    return t2;
}

int FUN_0c110ea8(void)
{
    kmiWriteRegister(0x8, 0x1);
    return kmiWriteRegister(0x8, 0x0);
}

int mpdrv_set_end_ns(void)
{
    register int t1;

    t1 = (((struct oFCC_int *)((*(int *)0xC843924)))->v);
    *(unsigned int *)((t1 + 0x0)) = ((*(int *)((t1 + 0x0))) | 0x80000000);
    return 0x0;
}

void fmMngClearBuf(int a4, int a5)
{
    register int t0;
    register int t1;

    if ((int)a5 > 0) {
        t0 = a4;
        t1 = a5;
        for (;;) {
            t1 = (t1 - 1);
            *(unsigned char *)((t0 + 0x0)) = 0xFFFFFFFF;
            t0 = (t0 + 0x1);
            if ((int)t1 <= 0) {
                break;
            }
        }
    }
}

void FUN_0c114584(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((int)a6 > 0) {
        t0 = a4;
        t1 = a5;
        t2 = a6;
        for (;;) {
            t3 = *(short *)((t1 + 0x0));
            t1 = (t1 + 0x2);
            t2 = (t2 - 1);
            *(unsigned short *)((t0 + 0x0)) = t3;
            t0 = (t0 + 0x2);
            if ((int)t2 <= 0) {
                break;
            }
        }
    }
}

int FUN_0c113d18(void)
{
    FUN_0c115a48();
    return memset(0xC8439A0, 0x0, 0x560);
}

int FUN_0c115270(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = a4;
    t1 = a5;
    for (;;) {
        t2 = *(int *)((t0 + 0x0));
        t1 = (t1 - 0x1);
        *(unsigned int *)((t0 + 0x0)) = ((((unsigned int)((((unsigned int)((((unsigned int)t2) & 0xFFFF0000) | ((((unsigned int)t2) & 0xFF) << 8) | ((((unsigned int)t2) >> 8) & 0xFF))) << 16) | (((unsigned int)((((unsigned int)t2) & 0xFFFF0000) | ((((unsigned int)t2) & 0xFF) << 8) | ((((unsigned int)t2) >> 8) & 0xFF))) >> 16))) & 0xFFFF0000) | ((((unsigned int)((((unsigned int)((((unsigned int)t2) & 0xFFFF0000) | ((((unsigned int)t2) & 0xFF) << 8) | ((((unsigned int)t2) >> 8) & 0xFF))) << 16) | (((unsigned int)((((unsigned int)t2) & 0xFFFF0000) | ((((unsigned int)t2) & 0xFF) << 8) | ((((unsigned int)t2) >> 8) & 0xFF))) >> 16))) & 0xFF) << 8) | ((((unsigned int)((((unsigned int)((((unsigned int)t2) & 0xFFFF0000) | ((((unsigned int)t2) & 0xFF) << 8) | ((((unsigned int)t2) >> 8) & 0xFF))) << 16) | (((unsigned int)((((unsigned int)t2) & 0xFFFF0000) | ((((unsigned int)t2) & 0xFF) << 8) | ((((unsigned int)t2) >> 8) & 0xFF))) >> 16))) >> 8) & 0xFF));
        t0 = (t0 + 0x4);
        if (t1 == 0) {
            break;
        }
    }
    return 0x0;
}

int FUN_0c059b1a(int a4)
{
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71ED))) != 0) {
        return FUN_0c0599fc(0x1);
    }
    return 0x71ED;
}

int FUN_0c059b08(int a4)
{
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71ED))) != 0) {
        return FUN_0c0599fc(0x1);
    }
    return 0x71ED;
}

int FUN_0c059b48(int a4)
{
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71ED))) != 0) {
        return FUN_0c0599fc(0x2);
    }
    return 0x71ED;
}

int FUN_0c059b5a(int a4)
{
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71ED))) != 0) {
        return FUN_0c0599fc(0x4);
    }
    return 0x71ED;
}

int FUN_0c058f4e(void)
{
    FUN_0c058f3a();
    FUN_0c058f44();
    FUN_0c058ef4();
    return FUN_0c058fa2();
}

int FUN_0c05fbee(int a4)
{
    (((struct o4_uint *)0xC38380C)->v) = a4;
    (((struct o0_uint *)0xC38380C)->v) = a4;
    (((struct o8_float *)0xC38380C)->v) = (*(float *)0xC05FC44);
    return 0xC05FC44;
}

int FUN_0c060360(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    FUN_0c05ff88((*(signed char *)(((int)stk + 0))));
    return FUN_0c05fdc6((*(signed char *)(((int)stk + 0))));
}

int FUN_0c060690(void)
{
    FUN_0c060620();
    FUN_0c060626();
    FUN_0c060684();
    return FUN_0c06068a();
}

int FUN_0c06b868(int a4, int a5)
{
    if ((a5 & ((((struct o2DC_int *)(a4))->v))) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c07d926(int a4)
{
    FUN_0c09a91a(a4);
    return FUN_0c09da1c(a4);
}

int FUN_0c08e382(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x7226));
    t1 = t0;
    if (t0 != 32) {
        (((struct o7228_ushort *)(a4))->v) = 0x0;
        t1 = 0x7228;
    }
    return t1;
}

int FUN_0c0989fc(int a4)
{
    register int t1;

    t1 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x9));
    if (t1 != 2) {
        return FUN_0c0a2080(a4);
    }
    return t1;
}

int FUN_0c0989ea(int a4, int a5, int a6, int a7)
{
    register int t2;

    t2 = *(int *)((0xC339338 + ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x4))) << 2)));
    return ((int (*)(int, int, int, int))(t2))(a4, a5, a6, a7);
}

int FUN_0c09a91a(int a4)
{
    (((struct o71B4_uchar *)(a4))->v) = 0x1;
    return FUN_0c09a94c(a4, (*(int *)((a4 + 0x1C))));
}

int FUN_0c09e7a6(int a4)
{
    if ((((((struct o2E4_int *)(a4))->v)) & 4) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0cfeb0(void)
{
    (((struct o20_float *)0xC7F2B08)->v) = (*(float *)0xC0CFF30);
    (((struct o0_uint *)0xC7F2B08)->v) = 0x4000;
    return 0x110;
}

int FUN_0c0d48ea(int a4)
{
    (((struct o0_uchar *)0xC7F2EE0)->v) = 0x4;
    (((struct o1_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o5_uchar *)0xC7F2EE0)->v) = a4;
    return a4;
}

int FUN_0c0d8e5c(int a4, int a5)
{
    *(unsigned char *)(((short)((short)a4 * (short)0x1FC) + 0xC7F2AA4)) = a5;
    return 0xC7F2AA4;
}

int FUN_0c0da54a(int a4)
{
    return FUN_0c0da1f6(a4, (*(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC33FFC0))));
}

int FUN_0c0da57e(int a4)
{
    return FUN_0c0da1f6(a4, (*(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC340048))));
}

int FUN_0c0da874(int a4)
{
    return FUN_0c0da1f6(a4, (*(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC3407EC))));
}

int FUN_0c0da8ae(int a4)
{
    return FUN_0c0da1f6(a4, (*(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC3425E8))));
}

int FUN_0c0dabbe(int a4)
{
    return FUN_0c0da1f6(a4, (*(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC343B60))));
}

int FUN_0c0db0e8(int a4)
{
    return FUN_0c0da1f6(a4, (*(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC33FE44))));
}

int FUN_0c0df080(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        return ((int (*)(int, int, int, int))(0xC0DF092))(0xC0DEFE0, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0DF092))(0xC0DF070, a5, a6, a7);
}

int FUN_0c0eb5a4(void)
{
    register int t0;

    t0 = FUN_0c0eb5b6();
    return (0x3 & ((unsigned int)t0 >> 8));
}

int syCfgInit(int a4)
{
    if (a4 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)0xC346C14 = a4;
    return 0x0;
}

int kdGetDevice(int a4)
{
    return (((((a4 << 1) + a4) << 2) << 1) + 0xC805248);
}

int FUN_0c101502(void)
{
    memset(0xC8057B0, 0x0, 0x400);
    return 0x0;
}

int ADXSTM_Init(void)
{
    memset(0xC814454, 0x0, 0xC80);
    return 0x1;
}

void FUN_0c10b434(int a4, int a5)
{
    register int t2;

    t2 = 0x0;
    if ((*(int *)((a4 + 0x0))) == 0) {
    } else {
        t2 = (*(int *)((a4 + 0x0)));
    }
    *(unsigned int *)((a5 + 0x4)) = t2;
    *(unsigned int *)((a4 + 0x0)) = a5;
}

int mpdrv_get_deviceinfo(int a4)
{
    return (((*(int *)0xC843924) + 0x44C) + (a4 * 0x78));
}

int FUN_0c0117ec(int a4)
{
    return (buDefragDisk(a4, 0xC352440));
}

int FUN_0c0121d0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c012504(a4, a5, a6, a7);
    *(unsigned char *)0xC361BC9 = 0x4;
    return t0;
}

int FUN_0c02466e(int a4)
{
    FUN_0c020be0(a4);
    return FUN_0c024446(a4);
}

int FUN_0c060956(void)
{
    FUN_0c05fc68(0xC0);
    return FUN_0c05fd5e(0xC17FEA4);
}

int FUN_0c098ac8(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC339338 + ((*(signed char *)((a4 + 0x4))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int FUN_0c099920(int a4)
{
    (((struct o74_float *)(a4))->v) = 1.0f;
    (((struct o70_float *)(a4))->v) = 1.0f;
    (((struct o6C_float *)(a4))->v) = 1.0f;
    return 0x6C;
}

int FUN_0c09d9e8(int a4)
{
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o71E4_float *)(a4))->v)));
    return 0x3C;
}

int FUN_0c0a2f66(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    return FUN_0c0e59e8((*(signed char *)(((int)stk + 0))), 0x1300A0, 0x0);
}

int FUN_0c0aeca8(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC33A09C + ((*(signed char *)((a4 + 0x7))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int FUN_0c0cdb24(void)
{
    FUN_0c0cdac0();
    FUN_0c0ce88c(0xC33EE0C, 0x5);
    return FUN_0c0ce836();
}

int nlSysMetricsScaleTime(int a4)
{
    return (int)((float)a4 * (*(float *)0xC7F88F0));
}

void nlGetTranslate(int a4)
{
    float u0[16];
    float u1[16];

    _builtin_st_ext((float (*)[4])u0);
    *(float *)((((a4 + 0xC) - 0x4) + 0x0)) = u0[14];
    *(float *)(((((a4 + 0xC) - 0x4) - 0x4) + 0x0)) = u0[13];
    *(float *)((((((a4 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[12];
    _builtin_st_ext((float (*)[4])u1);
    u1[0] = u0[0];
    u1[1] = u0[1];
    u1[2] = u0[2];
    u1[3] = u0[3];
    u1[4] = u0[4];
    u1[5] = u0[5];
    u1[6] = u0[6];
    u1[7] = u0[7];
    u1[8] = u0[8];
    u1[9] = u0[9];
    u1[10] = u0[10];
    u1[11] = u0[11];
    u1[12] = u0[12];
    u1[13] = u0[13];
    u1[14] = u0[14];
    u1[15] = u0[15];
    _builtin_ld_ext((float (*)[4])u1);
}

void FUN_0c0e2080(int a4)
{
    register float u0;
    register float u1;
    register float u2;
    float u3[16];

    u0 = *(float *)((a4 + 0x0));
    u1 = (((struct o4_float *)(a4))->v);
    u2 = (((struct o4_float *)((a4 + 0x4)))->v);
    _builtin_st_ext((float (*)[4])u3);
    u3[12] = u0;
    u3[13] = u1;
    u3[14] = u2;
    _builtin_ld_ext((float (*)[4])u3);
}

void FUN_0c0e2110(float f4, float f5, float f6)
{
    float u0[4];
    float u1[16];

    u0[0] = f4;
    u0[1] = f5;
    u0[2] = f6;
    u0[3] = 1.0f;
    _builtin_ftrv(u0, u0);
    _builtin_st_ext((float (*)[4])u1);
    u1[12] = u0[0];
    u1[13] = u0[1];
    u1[14] = u0[2];
    u1[15] = u0[3];
    _builtin_ld_ext((float (*)[4])u1);
}

int FUN_0c0ec0f2(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x0));
    if (t0 == 1) {
        *(unsigned char *)(((*(int *)((a4 + 0x4))) + 0x0)) = 0x0;
    }
    return t0;
}

int syHwCacheFinish(int a4, int a5, int a6, int a7)
{
    return ((int (*)(int, int, int, int))(0xAC0F2C36))(0xAC0F2C36, a5, a6, a7);
}

int syHwInit2(void)
{
    FUN_0c0ff15c();
    return FUN_0c0eb238();
}

void FUN_0c0fb53c(void)
{
    register int t0;

    t0 = *(int *)0xC817328;
    for (;;) {
        if (t0 != (*(int *)0xC817328)) {
            break;
        }
    }
}

int kmSetFogTableColor(Stk4 s)
{
    kmiWriteRegister(0xB0, s.w[0]);
    return 0x0;
}

int kmSetFogVertexColor(Stk4 s)
{
    kmiWriteRegister(0xB4, s.w[0]);
    return 0x0;
}

int kmSetBorderColor(Stk4 s)
{
    kmiWriteRegister(0x40, s.w[0]);
    return 0x0;
}

int gdDcfReset_(void)
{
    return (FUN_0c0eb5c8(0x18, 0x0));
}

int gdDcfDaPause_(void)
{
    return (FUN_0c0eb5c8(0x16, 0x0));
}

int kdSetHandler(int a4, int a5)
{
    register int t0;

    if ((unsigned int)a4 <= (unsigned int)0x1F) {
        *(unsigned int *)(((a4 << 2) + 0xC8051C8)) = a5;
        t0 = 0xC8051C8;
    }
    return t0;
}

int vmsfs_c_getstate(int a4)
{
    return (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x4)));
}

void vmsfs_c_setfunc(int a4, int a5)
{
    *(unsigned int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x8)) = a5;
}

int ADXSJD_GetSfreq(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x4));
    return ((int (*)(int, int, int, int))(0xC11433E))(t0, a5, a6, a7);
}

int ADXSJD_GetBlkSmpl(int a4)
{
    return ADXB_GetBlkSmpl((*(int *)((a4 + 0x4))));
}

int ADXSJD_GetLpStartPos(int a4)
{
    return ADXB_GetLpStartPos((*(int *)((a4 + 0x4))));
}

int ADXSJD_GetLpStartOfst(int a4)
{
    return ADXB_GetLpStartOfst((*(int *)((a4 + 0x4))));
}

int ADXSJD_GetLpEndPos(int a4)
{
    return ADXB_GetLpEndPos((*(int *)((a4 + 0x4))));
}

int ADXSJD_GetLpEndOfst(int a4)
{
    return ADXB_GetLpEndOfst((*(int *)((a4 + 0x4))));
}

void FUN_0c108000(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC15B31C, a5, a6, a7);
    return;
    }
    *(unsigned int *)((a4 + 0xC)) = a5;
}

int mpdrv_get_device(int a4)
{
    return (((*(int *)0xC843924) + 0x28) + (a4 * 0x2C));
}

int mpdrv_get_timeout(void)
{
    return (unsigned short)(short)((unsigned int)((((struct o10C0_int *)((*(int *)0xC843924)))->v)) >> 16);
}

int mpdrv_optimize(int a4)
{
    (((struct o10E0_uint *)((*(int *)0xC843924)))->v) = a4;
    (((struct o10E4_uint *)((*(int *)0xC843924)))->v) = a4;
    return 0x10E4;
}

int mpdrv_recognize(int a4)
{
    *(unsigned char *)(((mpdrv_get_device(a4)) + 0xD)) = 0x1;
    return 0x1;
}

int mpdrv_ischanged(int a4)
{
    return (unsigned char)(*(signed char *)(((mpdrv_get_device(a4)) + 0xC)));
}

void FUN_0c1135fa(int a4, int a5, int a6, int a7)
{
    if ((int)a6 <= 0) {
        return;
    }
    ((int (*)(int, int, int, int))(0xC1135F4))(a4, a5, (a6 - 1), a7);
}

int FUN_0c01d31a(void)
{
    (((struct o3_uchar *)0xC362378)->v) = 0x0;
    (((struct o2_uchar *)0xC362378)->v) = 0x0;
    (((struct o1_uchar *)0xC362378)->v) = 0x0;
    (((struct o0_uchar *)0xC362378)->v) = 0x0;
    return 0x0;
}

int FUN_0c01d328(void)
{
    (((struct o3_uchar *)0xC362378)->v) = 0x0;
    (((struct o2_uchar *)0xC362378)->v) = 0x0;
    (((struct o1_uchar *)0xC362378)->v) = 0x0;
    (((struct o0_uchar *)0xC362378)->v) = 0x0;
    return 0x0;
}

void FUN_0c01f48c(int a4, int a5)
{
    *(unsigned int *)0xC362A70 = (((signed char)a4 << 1) + (signed char)a5);
}

int FUN_0c0555b6(void)
{
    FUN_0c055566(0xC7E40C4);
    return FUN_0c055566(0xC7EB394);
}

int FUN_0c060590(void)
{
    FUN_0c05fc68(0x7F);
    return FUN_0c05fd5e(0xC17FE4C);
}

int FUN_0c06057c(void)
{
    FUN_0c05fc68(0x7E);
    return FUN_0c05fd5e(0xC17FDB0);
}

int FUN_0c0605b4(void)
{
    FUN_0c05fcf2(0xC17FDBC);
    return FUN_0c05fd1a(0xC4CFA80);
}

int FUN_0c06074a(void)
{
    FUN_0c05fd1a(0xC6649E8);
    return FUN_0c05fd1a(0xC6649A0);
}

int FUN_0c06090c(void)
{
    FUN_0c05fd1a(0xC664AA8);
    return FUN_0c05fcf2(0xC17FE98);
}

int FUN_0c060bd4(void)
{
    FUN_0c05fd1a(0xC664A18);
    return FUN_0c05fcf2(0xC17FE58);
}

int FUN_0c060c18(void)
{
    FUN_0c05fd1a(0xC4CFA68);
    return FUN_0c05fcf2(0xC33F66C);
}

int FUN_0c09a7ba(int a4)
{
    (((struct o723B_uchar *)(a4))->v) = 0x1;
    (((struct o723C_ushort *)(a4))->v) = 0xFFFFFFFF;
    return 0x723C;
}

int FUN_0c0ae276(int a4)
{
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct o107_uchar *)(a4))->v) = 0x1;
    return 0x107;
}

int FUN_0c0b146e(int a4, int a5)
{
    return ((((int)(unsigned short)(a4 - a5) >= (int)0x8000)) ? 1 : 0);
}

int FUN_0c0c9982(int a4)
{
    return ((((int)(*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x8))) >= (int)0x2)) ? 1 : 0);
}

int FUN_0c0d5188(void)
{
    return ((((unsigned char)(*(signed char *)0xC7F2EE4) == 7)) ? 1 : 0);
}

int FUN_0c0d54ac(void)
{
    (((struct o1_uchar *)0xC7F319D)->v) = 0x0;
    (((struct o0_uchar *)0xC7F319D)->v) = 0x0;
    return 0x171;
}

int FUN_0c0d48d6(void)
{
    FUN_0c09bafe();
    return FUN_0c0a3118();
}

int FUN_0c0d7ecc(void)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)0xC7F4738) << 2) + 0xC33F970));
    return ((int (*)(void))(t1))();
}

void FUN_0c0dcac0(int a4, int a5)
{
    *(unsigned int *)(((*(int *)0xC7F8E9C) + 0x0)) = ((a5 << 16) | 0x800000);
}

int syRtcFinish(void)
{
    (((struct o0_uint *)0xC7FD0C8)->v) = 0x0;
    return FUN_0c0ff4b4(((((struct o8_int *)0xC7FD0C8)->v)));
}

int FUN_0c0ee1fc(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = (((((*(int *)0xA05F688C) & 1) == 0)) ? 1 : 0);
    return 0x0;
}

int FUN_0c0ee288(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = (((((*(int *)0xA05F688C) & 32) == 0)) ? 1 : 0);
    return 0x0;
}

int FUN_0c0ee6dc(int a4, int a5)
{
    return (FUN_0c0eeecc(a4, a5));
}

int FUN_0c0f581e(int a4)
{
    if (a4 == 0) {
        return 0xFFFFFFFD;
    }
    return (*(int *)((a4 + 0x14)));
}

int FUN_0c0f5810(int a4)
{
    if (a4 == 0) {
        return 0xFFFFFFFD;
    }
    return (*(int *)((a4 + 0x10)));
}

int FUN_0c0f5842(int a4)
{
    if (a4 == 0) {
        return 0xFFFFFFFD;
    }
    return (*(int *)((a4 + 0x24)));
}

int FUN_0c0f5850(int a4)
{
    if (a4 == 0) {
        return 0xFFFFFFFD;
    }
    return (*(signed char *)((a4 + 0x1)));
}

int gdDcfChkDmaTrans_(int a4, int a5)
{
    return (FUN_0c0eb654(a4, a5));
}

int gdDcfSvr_(int a4, int a5)
{
    FUN_0c0eb5f0(a4, a5);
    return 0x1;
}

int kdGetDeviceInfo(int a4)
{
    return (mpdrv_get_deviceinfo(a4));
}

int kdGetPortStatus(int a4)
{
    return (mpdrv_get_portstatus(a4));
}

int FUN_0c10683c(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 == 2) {
        return FUN_0c1066f0(a4);
    }
    return t0;
}

void SJRBF_Reset(int a4)
{
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = (*(int *)((a4 + 0x20)));
    *(unsigned int *)((a4 + 0x14)) = 0x0;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
}

int mpdrv_get_portstatus(int a4)
{
    return (((*(int *)0xC843924) + 0x4) + ((a4 << 2) << 1));
}

int mpdrv_swapmode(int a4)
{
    (((struct o10C4_uint *)((*(int *)0xC843924)))->v) = (a4 & 0x1);
    return 0x10C4;
}

int FUN_0c0158d8(void)
{
    (((struct o0_uchar *)0xC361C78)->v) = 0x2;
    (((struct o1_uchar *)0xC361C78)->v) = 0x0;
    return 0x0;
}

void FUN_0c0283c4(int a4, int a5)
{
    *(unsigned short *)((a4 + 0x0)) = (*(short *)((a5 + 0x0)));
    *(unsigned int *)((a4 + 0xC)) = (*(int *)((a5 + 0x4)));
    *(unsigned int *)((a4 + 0x10)) = a5;
}

int FUN_0c039c6c(int a4, int a5, int a6)
{
    return (FUN_0c039c78(a4, a5, a6, 0xA));
}

int FUN_0c0622ae(int a4, float f4)
{
    return (FUN_0c06225a(a4, 0x1, f4));
}

int FUN_0c0622a2(int a4, float f4)
{
    return (FUN_0c06225a(a4, 0x0, f4));
}

int FUN_0c0622ba(int a4, float f4)
{
    return (FUN_0c06225a(a4, 0x2, f4));
}

int FUN_0c08b8b8(int a4)
{
    (((struct o7223_uchar *)(a4))->v) = 0x0;
    return FUN_0c0980b0(a4);
}

int FUN_0c08bb46(int a4)
{
    (((struct o7223_uchar *)(a4))->v) = 0x0;
    return FUN_0c0980b0(a4);
}

int FUN_0c098136(int a4)
{
    return ((((*(signed char *)((a4 + 0x7204))) == 2)) ? 1 : 0);
}

int FUN_0c0d44c4(void)
{
    (((struct o0_uchar *)0xC7F2EE5)->v) = 0x0;
    (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
    (((struct o2_uchar *)0xC7F2EE5)->v) = 0x0;
    return 0x0;
}

int FUN_0c0d4872(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = ((int (*)(int, int, int, int))(FUN_0c0d47be))(0x0, a5, a6, a7);
    return ((int (*)(int))(FUN_0c0d47be))(0x1);
}

int FUN_0c0d5ba8(void)
{
    FUN_0c0d5a4e(0x0);
    return FUN_0c0d5a4e(0x1);
}

void FUN_0c0dd310(void)
{
    *(unsigned int *)0xC7FD490 = 0x0;
    *(unsigned int *)0xC7F87C0 = 0x0;
}

void FUN_0c0e4ac0(int a4)
{
    *(unsigned int *)0xC15A374 = 0x80000000;
    *(unsigned int *)0xC346BE8 = a4;
}

int FUN_0c0eb5c8(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x0);
}

int FUN_0c0eb5b6(void)
{
    return ((unsigned short)(*(short *)0xFF800030) & 0x300);
}

int FUN_0c0eb604(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x3);
}

int FUN_0c0eb618(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x4);
}

int FUN_0c0eb5f0(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x2);
}

int FUN_0c0eb5dc(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x1);
}

int FUN_0c0eb640(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x6);
}

int FUN_0c0eb654(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x7);
}

int gdFsCreateDirhn(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x0)) = 0x0;
    *(unsigned int *)((a4 + 0x4)) = a5;
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    return a4;
}

int FUN_0c0f263a(int a4)
{
    return ((a4 * 0x34) + 0xC7FE70C);
}

int FUN_0c0fad80(int a4)
{
    register int t0;

    t0 = *(int *)0xC3471D0;
    *(unsigned int *)0xC3471D0 = (t0 | a4);
    return (t0 | a4);
}

int FUN_0c0fd8c0(int a4, int a5)
{
    (((struct o0_uint *)0xC8173F8)->v) = a4;
    (((struct o4_uint *)0xC8173F8)->v) = a5;
    return 0x0;
}

int ADXSJD_GetFormat(int a4)
{
    return FUN_0c114338((*(int *)((a4 + 0x4))));
}

int ADXSJD_GetOutBps(int a4)
{
    return ADXB_GetOutBps((*(int *)((a4 + 0x4))));
}

int ADXSJD_GetNumChan(int a4)
{
    return FUN_0c114342((*(int *)((a4 + 0x4))));
}

int ADXSJD_GetTotalNumSmpl(int a4)
{
    return ADXB_GetTotalNumSmpl((*(int *)((a4 + 0x4))));
}

int ADXSJD_GetNumLoop(int a4)
{
    return ADXB_GetNumLoop((*(int *)((a4 + 0x4))));
}

int mpdrv_timeout(int a4)
{
    (((struct o10C0_uint *)((*(int *)0xC843924)))->v) = (a4 << 16);
    return 0x10C0;
}

int mpdrv_init_memory(void)
{
    (((struct o10F4_uint *)((*(int *)0xC843924)))->v) = 0xA05F6C00;
    return 0x10F4;
}

int FUN_0c0158e4(void)
{
    (((struct o1_uchar *)0xC361C78)->v) = 0x0;
    (((struct o0_uchar *)0xC361C78)->v) = 0x0;
    return 0x0;
}

int FUN_0c0195f0(void)
{
    return memset(0xC362310, 0x0, 0x8);
}

int FUN_0c019bf4(void)
{
    return memset(0xC362328, 0x0, 0xA);
}

int FUN_0c01a42c(void)
{
    return memset(0xC362338, 0x0, 0xC);
}

int FUN_0c01b66c(void)
{
    return memset(0xC362358, 0x0, 0x2);
}

int FUN_0c01e7a2(void)
{
    return memset(0xC362A50, 0x0, 0x38);
}

int FUN_0c01e798(void)
{
    return memset(0xC362A50, 0x0, 0x38);
}

int FUN_0c027c74(void)
{
    return FUN_0c0dd5d0(0xC1437B8, 0xC321050);
}

int FUN_0c03148c(void)
{
    return FUN_0c0dd5d0(0xC321238, 0xC321330);
}

int FUN_0c058f44(void)
{
    return memset(0xC7F2998, 0x0, 0x60);
}

int FUN_0c058f3a(void)
{
    return memset(0xC7F2664, 0x0, 0x334);
}

int FUN_0c061444(int a4)
{
    return FUN_0c0de340(a4, 0x80, 0x1);
}

int FUN_0c099a88(int a4)
{
    register int t0;

    t0 = *(short *)((a4 + 0x6));
    *(unsigned short *)((a4 + 0x6)) = (t0 & 0xFDFF);
    return (t0 & 0xFDFF);
}

int FUN_0c09a910(int a4)
{
    return FUN_0c09a94c(a4, a4);
}

int FUN_0c0a2f5c(void)
{
    return FUN_0c0e59e8(0x0, 0x300A0, 0x0);
}

int FUN_0c0a2f52(void)
{
    FUN_0c0a2f5c();
    return FUN_0c0a2f7a();
}

int FUN_0c0d2dde(void)
{
    register int t0;

    t0 = *(int *)0xC494AF0;
    *(unsigned int *)0xC494AF0 = 0x0;
    return t0;
}

void nlObjPutSetGlobalAmbience(float f4)
{
    *(float *)0xC346878 = f4;
    *(float *)0xC7FCC9C = f4;
}

int FUN_0c0e0580(void)
{
    register int t0;

    t0 = *(int *)0xC7F8BF0;
    *(unsigned int *)0xC7F8BF0 = (t0 | 0x1);
    return (t0 | 0x1);
}

void FUN_0c0e05a0(int a4, int a5)
{
    (((struct o0_uint *)0xC7F8BFC)->v) = a4;
    (((struct o4_uint *)0xC7F8BFC)->v) = a5;
}

int FUN_0c0e16c0(void)
{
    return nlMultiMatrix8(((*(int *)0xC7FCCBC) - 64));
}

int FUN_0c0eb6cc(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)0x8C0000B0;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x0);
}

int FUN_0c0eb6f4(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)0x8C0000B0;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x3);
}

int FUN_0c0ed9d4(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x2);
}

int FUN_0c0ed9e8(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x3);
}

int FUN_0c0ed9ac(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x0);
}

int FUN_0c0ed9c0(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x1);
}

int gdFsSetGlobalErrG(int a4)
{
    *(unsigned int *)(((*(int *)0xC346BD8) + 0x30)) = a4;
    return 0x1;
}

int syCfgExit(void)
{
    *(unsigned int *)0xC346C14 = 0x0;
    return 0x0;
}

void FUN_0c0f4fe0(void)
{
    register int t0;

    t0 = 0xC350;
    for (;;) {
        t0 = (t0 - 0x1);
        if (t0 == 0) {
            break;
        }
    }
}

int FUN_0c0fc2a6(int a4)
{
    *(unsigned int *)0xC8171A4 = (a4 - 1);
    return 0x0;
}

int FUN_0c0ff8aa(void)
{
    return (0xFFFFFFFF - (*(int *)0xFFD8000C));
}

void ADXERR_EntryErrFunc(int a4, int a5)
{
    (((struct o0_uint *)0xC34734C)->v) = a4;
    (((struct o4_uint *)0xC34734C)->v) = a5;
}

int ADXSJD_Finish(void)
{
    return memset(0xC813FD4, 0x0, 0x480);
}

int ADXSJD_EntryTrapFunc(int a4, int a5, int a6)
{
    (((struct o48_uint *)(a4))->v) = a5;
    (((struct o4C_uint *)(a4))->v) = a6;
    return 0x4C;
}

int FUN_0c1084a8(void)
{
    return memset(0xC81653C, 0x0, 0x480);
}

void FUN_0c108548(int a4)
{
    *(unsigned int *)((a4 + 0xC)) = (*(int *)((a4 + 0x18)));
    *(unsigned int *)((a4 + 0x10)) = 0x0;
}

int FUN_0c108768(void)
{
    return memset(0xC8169BC, 0x0, 0x600);
}

int FUN_0c108fe8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)0xC817230;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
}

int kmiWriteRegister(int a4, int a5)
{
    *(unsigned int *)(((a4 + 0xA05F8000) + 0x0)) = a5;
    return 0x1;
}

int mpdrv_get_swapmode(void)
{
    return ((((struct o10C4_int *)((*(int *)0xC843924)))->v));
}

int mpdrv_get_nopcount(void)
{
    return ((((struct o10CC_int *)((*(int *)0xC843924)))->v));
}

int mpdrv_nopcount(int a4)
{
    (((struct o10CC_uint *)((*(int *)0xC843924)))->v) = a4;
    return 0x10CC;
}

int mpdrv_speed(int a4)
{
    (((struct o10D0_uint *)((*(int *)0xC843924)))->v) = a4;
    return 0x10D0;
}

int mpdrv_get_speed(void)
{
    return ((((struct o10D0_int *)((*(int *)0xC843924)))->v));
}

int mpdrv_debugmode(int a4)
{
    (((struct o10C8_uint *)((*(int *)0xC843924)))->v) = a4;
    return 0x10C8;
}

int mpdrv_dreqcount(int a4)
{
    (((struct o10D8_uint *)((*(int *)0xC843924)))->v) = a4;
    return 0x10D8;
}

int mpdrv_get_debugmode(void)
{
    return ((((struct o10C8_int *)((*(int *)0xC843924)))->v));
}

int mpdrv_get_dreqcount(void)
{
    return ((((struct o10D8_int *)((*(int *)0xC843924)))->v));
}

int mpdrv_get_lastsendaddr(int a4)
{
    (((struct o10DC_uint *)((*(int *)0xC843924)))->v) = a4;
    return 0x10DC;
}

int mpdrv_get_optimize(void)
{
    return ((((struct o10E4_int *)((*(int *)0xC843924)))->v));
}

int mpdrv_rootplay(void)
{
    return ((((struct o10DC_int *)((*(int *)0xC843924)))->v));
}

int FUN_0c111c9c(int a4)
{
    (((struct oFBC_uint *)((*(int *)0xC843924)))->v) = a4;
    return 0xFBC;
}

int mpdrv_get_rootplay(int a4)
{
    (((struct oFAC_uint *)((*(int *)0xC843924)))->v) = a4;
    return 0xFAC;
}

int mpdrv_gunmode(void)
{
    return ((((struct oFB0_int *)((*(int *)0xC843924)))->v));
}

int FUN_0c111ca6(void)
{
    return ((((struct oFBC_int *)((*(int *)0xC843924)))->v));
}

int FUN_0c114320(int a4, int a5, int a6)
{
    (((struct o88_uint *)(a4))->v) = a5;
    (((struct o8C_uint *)(a4))->v) = a6;
    return 0x8C;
}

void FUN_0c114ab8(int a4, int a5)
{
    (((struct o0_uint *)0xC347710)->v) = a4;
    (((struct o4_uint *)0xC347710)->v) = a5;
}

int FUN_0c115a48(void)
{
    return memset(0xC857C8C, 0x0, 0x1A0);
}

int FUN_0c0105a2(void)
{
    return buGetVersion(0xC01025C);
}

void FUN_0c017a24(void)
{
    *(unsigned char *)0xC3622C0 = 0x0;
}

void FUN_0c02828e(void)
{
    *(unsigned int *)0xC363A68 = 0x0;
}

int FUN_0c02d82c(void)
{
    *(unsigned char *)0xC366A70 = 0x0;
    return 0xC366A70;
}

void FUN_0c02d834(void)
{
    *(unsigned char *)0xC366A71 = 0x1;
}

int FUN_0c02d83c(void)
{
    *(unsigned char *)0xC366A71 = 0x0;
    return 0xC366A71;
}

void FUN_0c0314dc(void)
{
    *(unsigned char *)0xC7F31CB = 0x0;
}

void FUN_0c05fc00(void)
{
    *(unsigned int *)0xC38380C = 0x0;
}

void FUN_0c05fc1c(void)
{
    *(unsigned int *)0xC38380C = 0x0;
}

int FUN_0c061434(int a4, int a5, int a6)
{
    return FUN_0c0e48b0(0x1, 0xC061694, a6);
}

int FUN_0c06143c(int a4, int a5, int a6)
{
    return FUN_0c0e48b0(0x1, 0x0, a6);
}

int FUN_0c0634ec(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0xA);
}

int FUN_0c0645ee(int a4)
{
    return FUN_0c09a808(a4, 0x2, 0x5A);
}

int FUN_0c065468(int a4)
{
    return FUN_0c09a808(a4, 0x1, 0x9F);
}

int FUN_0c099a1c(int a4)
{
    return FUN_0c0997a2(a4, 0x1, 0x4, 0xC0999E8);
}

int FUN_0c09a7b2(int a4)
{
    (((struct o723B_uchar *)(a4))->v) = 0x0;
    return 0x723B;
}

int FUN_0c0a2f0e(int a4)
{
    return FUN_0c0e5d22(a4);
}

void FUN_0c0d487e(void)
{
    *(unsigned int *)0xC33F6B8 = 0x1;
}

int FUN_0c0da42c(int a4)
{
    return FUN_0c0d9288(a4, 0xC33FA9C);
}

int FUN_0c0da434(int a4)
{
    return FUN_0c0d9288(a4, 0xC33FAD0);
}

int FUN_0c0df100(void)
{
    return FUN_0c0f9bb2();
}

int FUN_0c0e0800(int a4)
{
    return kmSetFogDensity(a4);
}

int FUN_0c0e4980(int a4, int a5)
{
    *(unsigned int *)((a5 + 0x0)) = 0x0;
    return 0x0;
}

int FUN_0c0f4104(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)0x8C0000E0;
    return ((int (*)(int, int, int, int))(t0))(0x1, a5, a6, a7);
}

int FUN_0c0f4f1a(int a4)
{
    (((struct o60_ushort *)(a4))->v) = 0x0;
    return 0x60;
}

int FUN_0c0fae00(int a4)
{
    *(unsigned int *)0xC3471D0 = a4;
    return a4;
}

void kdSetGunTrigger(int a4)
{
    *(unsigned int *)0xC80571C = (a4 + 0x1);
}

int FUN_0c101140(int a4)
{
    *(unsigned int *)0xC80578C = a4;
    return a4;
}

int close_file_handle(int a4)
{
    return memset(a4, 0x0, 0x48);
}

void FUN_0c105b10(void)
{
    *(unsigned int *)0xC347344 = 0x0;
}

int FUN_0c106408(int a4)
{
    return (a4 + 0x50);
}

int FUN_0c1064b8(int a4)
{
    return memset(a4, 0x0, 0x64);
}

int FUN_0c1068b6(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x1C)) = a5;
    *(unsigned int *)((a4 + 0x18)) = a6;
    return 0x1;
}

int mpdrv_set_hreset(int a4)
{
    return FUN_0c1123f2(a4);
}

void FUN_0c112ff8(void)
{
    *(unsigned int *)0xC347700 = 0x0;
}

int vmsfb_exec(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    return FUN_0c1155ac((*(int *)0xC843928), a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
}

int FUN_0c1151d6(int a4, int a5, int a6)
{
    *(unsigned int *)((a6 + 0x0)) = 0x1;
    return 0x0;
}

int thunk_FUN_0c0f2f7e(void)
{
    return FUN_0c0f2f7e();
}

void FUN_0c0124ce(void)
{
    
}

void FUN_0c01f9a0(void)
{
    
}

int thunk_FUN_0c062d78(void)
{
    return FUN_0c062d78();
}

int FUN_0c0247d0(int a4, int a5)
{
    (((struct o27C_uchar *)(a4))->v) = a5;
    return 0x27C;
}

int FUN_0c02d844(void)
{
    return (*(signed char *)0xC366A70);
}

int thunk_FUN_0c059330(int a4)
{
    return FUN_0c059330(a4);
}

int FUN_0c06058a(void)
{
    return FUN_0c05fcf2(0xC17FE4C);
}

int FUN_0c060514(void)
{
    return FUN_0c05fd1a(0xC664988);
}

int FUN_0c060576(void)
{
    return FUN_0c05fcf2(0xC17FDB0);
}

int FUN_0c06059e(void)
{
    return FUN_0c05fcf2(0xC17FE64);
}

int FUN_0c0605f0(void)
{
    return FUN_0c05fd1a(0xC664A00);
}

int FUN_0c060620(void)
{
    return FUN_0c05fd1a(0xC664A30);
}

int FUN_0c060684(void)
{
    return FUN_0c05fd1a(0xC664A48);
}

int FUN_0c060626(void)
{
    return FUN_0c05fd1a(0xC664A78);
}

int FUN_0c06068a(void)
{
    return FUN_0c05fd1a(0xC664A60);
}

int FUN_0c060966(void)
{
    return FUN_0c05fd1a(0xC664AC0);
}

int FUN_0c060950(void)
{
    return FUN_0c05fcf2(0xC17FEA4);
}

int FUN_0c060b5e(void)
{
    return FUN_0c05fd1a(0xC664B08);
}

int FUN_0c060a12(void)
{
    return FUN_0c05fd1a(0xC664AD8);
}

int FUN_0c060afe(void)
{
    return FUN_0c05fd1a(0xC664AF0);
}

int FUN_0c060b2e(void)
{
    return FUN_0c05fd1a(0xC664B20);
}

int FUN_0c08d65c(int a4, int a5)
{
    return (signed char)a5;
}

int FUN_0c098b96(void)
{
    return ((int (*)(void))(0xC08C838))();
}

int thunk_FUN_0c05fff4(void)
{
    return FUN_0c05fff4();
}

int FUN_0c0a34b8(void)
{
    return FUN_0c0a2f16(0x0, 0x105);
}

int FUN_0c0a35cc(void)
{
    return FUN_0c0a2f16(0x0, 0x128);
}

int FUN_0c0a375c(void)
{
    return FUN_0c0a2f0e(0x1A9);
}

void FUN_0c0d2dd8(int a4)
{
    *(unsigned int *)0xC494AF0 = a4;
}

int thunk_FUN_0c0a3180(void)
{
    return FUN_0c0a3180();
}

int FUN_0c0d6098(int a4)
{
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    return 0x1;
}

void FUN_0c0d71f4(int a4)
{
    *(unsigned int *)0xC494B08 = a4;
}

int FUN_0c0da886(int a4)
{
    return FUN_0c0da1f6(a4, 0xC340814);
}

int FUN_0c0da952(int a4)
{
    return FUN_0c0da1f6(a4, 0xC3463BC);
}

int FUN_0c0dafcc(int a4)
{
    return FUN_0c0da1f6(a4, 0xC340D90);
}

int FUN_0c0db184(int a4)
{
    return FUN_0c0da1f6(a4, 0xC33F9D4);
}

void FUN_0c0dd9e0(int a4)
{
    *(unsigned int *)0xC7FD490 = a4;
}

void FUN_0c0de890(int a4)
{
    *(unsigned int *)0xC7F882C = a4;
}

int nlSysMetricsReadTimer(void)
{
    return (*(int *)0xFFD8000C);
}

int nlSysMetricsDiffTime(int a4, int a5)
{
    return (a4 - a5);
}

void FUN_0c0e0710(int a4)
{
    *(unsigned int *)0xC7F8C5C = a4;
}

int thunk_FUN_0c0fbcf0(int a4)
{
    return kmSetFogTable(a4);
}

void FUN_0c0e34a0(float f4)
{
    *(float *)0xC7FD648 = f4;
}

void syRtcSetServerMode(int a4)
{
    *(unsigned int *)0xC7FD0CC = a4;
}

int gdFsInit(void)
{
    return gdFsInitOvl();
}

int buGetVersion(int a4)
{
    return vmsfs_c_setcompletecallback(a4);
}

void buSetPrintFunc(int a4)
{
    *(unsigned int *)0xC3471DC = a4;
}

int syCfgConvLang(int a4)
{
    return (a4 - 48);
}

int pdVibMxIsReady(int a4)
{
    return FUN_0c0f4128(a4);
}

int FUN_0c0f4dc8(int a4)
{
    return ((((struct o40_short *)(a4))->v));
}

int FUN_0c0f4f14(int a4)
{
    return ((((struct o60_short *)(a4))->v));
}

int FUN_0c0f4f28(int a4, int a5)
{
    (((struct o6C_uchar *)(a4))->v) = a5;
    return 0x6C;
}

int FUN_0c0fae08(void)
{
    return (*(int *)0xC3471D0);
}

void FUN_0c0fddce(int a4)
{
    iaOcbwb((void *)a4);
}

int gdFsGetGdDcf(void)
{
    return 0xC15AEE0;
}

int FUN_0c0ff8b4(int a4, int a5)
{
    return (a5 - a4);
}

int thunk_FUN_0c111b6e(int a4)
{
    return mpdrv_ischanged(a4);
}

int thunk_FUN_0c111b7e(int a4)
{
    return mpdrv_recognize(a4);
}

int kdGetGunLatchedPort(void)
{
    return (*(int *)0xC805720);
}

int thunk_FUN_0c112fba(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    return vmsfb_exec(a4, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
}

int ADXRNA_Init(void)
{
    return FUN_0c1070d2();
}

int ADXRNA_Finish(int a4, int a5, int a6, int a7)
{
    return FUN_0c10710e(a4, a5, a6, a7);
}

int FUN_0c1062f6(int a4, int a5)
{
    (((struct o40_uint *)(a4))->v) = a5;
    return 0x40;
}

int FUN_0c106302(int a4, int a5)
{
    (((struct o44_uint *)(a4))->v) = a5;
    return 0x44;
}

void FUN_0c1066a0(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x38)) = a5;
    *(unsigned int *)((a4 + 0x3C)) = a6;
}

int thunk_ADXRNA_Create(int a4, int a5, int a6, int a7)
{
    return FUN_0c107234(a4, a5, a6, a7);
}

int thunk_FUN_0c10e184(int a4, int a5)
{
    return kmiWriteRegister(a4, a5);
}

int kmiReadRegister(int a4)
{
    return (*(int *)((a4 + 0xA05F8000)));
}

int FUN_0c112f1e(int a4)
{
    return (0xFFFFFFF & a4);
}

int thunk_FUN_0c1155a8(void)
{
    return FUN_0c1155a8();
}

int FUN_0c114338(int a4)
{
    return ((((struct oA8_int *)(a4))->v));
}

int thunk_FUN_0c115240(int a4, int a5, int a6)
{
    return SJ_SplitChunk(a4, a5, a6);
}

int thunk_FUN_0c020cba(int a4)
{
    return FUN_0c020cba(a4);
}

int FUN_0c0235ca(void)
{
    return 0x8;
}

void FUN_0c02ee3c(void)
{
    
}

int FUN_0c02d9e0(int a4, int a5, float f4, float f5, float f6, float f7)
{
    return FUN_0c02d9e4(a4, a5, f4, f5, f6, f7, (*(float *)0xC02DBBC));
}

void FUN_0c03082e(void)
{
    
}

int FUN_0c048ea0(int a4, int a5, int a6, int a7)
{
    return ((int (*)(int, int, int, int))(0xC048C18))(a4, 0x0, a6, a7);
}

void FUN_0c04cdee(void)
{
    
}

void FUN_0c055562(void)
{
    
}

int FUN_0c059b04(void)
{
    return FUN_0c0599fc(0x1);
}

void FUN_0c05b188(void)
{
    
}

void FUN_0c05b9e4(void)
{
    
}

void FUN_0c05c44e(void)
{
    
}

int FUN_0c05cb42(int a4, int a5, int a6)
{
    return ((int (*)(int, int, int, int))(0xC05CB5C))(a4, a5, a6, 0xFFFFFFFF);
}

void FUN_0c05d1cc(void)
{
    
}

void FUN_0c05dbf4(void)
{
    
}

void FUN_0c05df96(void)
{
    
}

void FUN_0c05e4e8(void)
{
    
}

int FUN_0c062da2(void)
{
    return 0x0;
}

int FUN_0c062da6(void)
{
    return 0x0;
}

int FUN_0c08a842(int a4)
{
    return FUN_0c08a846(a4);
}

int FUN_0c08f76a(void)
{
    return 0x0;
}

int FUN_0c098c82(void)
{
    return 0x0;
}

void FUN_0c099a84(void)
{
    
}

void FUN_0c09b700(void)
{
    
}

void FUN_0c0a2ee8(void)
{
    
}

void FUN_0c0a3304(void)
{
    
}

void FUN_0c0a3792(void)
{
    
}

void FUN_0c0ad46e(void)
{
    
}

void FUN_0c0ae284(void)
{
    
}

void FUN_0c0ae396(void)
{
    
}

void FUN_0c0cf202(void)
{
    
}

void FUN_0c0d00ea(void)
{
    
}

void FUN_0c0d2a84(void)
{
    
}

void FUN_0c0d4696(void)
{
    
}

int thunk_FUN_0c0d45fe(void)
{
    return FUN_0c0d45fe();
}

void FUN_0c0d52aa(void)
{
    
}

void FUN_0c0d905e(void)
{
    
}

int FUN_0c0e48a0(void)
{
    return 0x0;
}

void FUN_0c0eacf0(void)
{
    
}

void FUN_0c0f283e(void)
{
    
}

int FUN_0c0f4cc6(int a4)
{
    return (*(signed char *)((a4 + 0x1)));
}

void FUN_0c0f619a(void)
{
    
}

int gdFsStrcmp(int a4, int a5)
{
    return FUN_0c0fe3f4(a4, a5);
}

void FUN_0c0ff7e0(void)
{
    
}

void FUN_0c0ff7e4(void)
{
    
}

int check_isopen(void)
{
    return 0x0;
}

int FUN_0c105e8a(int a4)
{
    return (*(signed char *)((a4 + 0x1)));
}

void FUN_0c105e9e(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x38)) = a5;
}

void FUN_0c105e8e(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x8)) = a5;
}

int ADXSJD_GetDecNumSmpl(int a4)
{
    return (*(int *)((a4 + 0x2C)));
}

void ADXSJD_SetDecPos(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x34)) = a5;
}

void ADXSJD_SetTrapNumSmpl(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x3C)) = a5;
}

int FUN_0c10687c(int a4)
{
    return (*(signed char *)((a4 + 0x1)));
}

void FUN_0c1070ce(void)
{
    
}

void FUN_0c10747e(void)
{
    
}

int FUN_0c108b4c(int a4)
{
    return (*(int *)((a4 + 0x20)));
}

int FUN_0c108b50(int a4)
{
    return (*(int *)((a4 + 0x24)));
}

int FUN_0c108b48(int a4)
{
    return (*(int *)((a4 + 0x1C)));
}

void FUN_0c10c08c(void)
{
    
}

int FUN_0c10d0a0(void)
{
    return 0x1;
}

int FUN_0c10d0a4(void)
{
    return 0x1;
}

void kmiModuleInitialize(void)
{
    
}

void FUN_0c113000(void)
{
    
}

int FUN_0c114342(int a4)
{
    return (*(signed char *)((a4 + 0xE)));
}

int FUN_0c115108(void)
{
    return 0x0;
}

int FUN_0c0e7240(int a4, int a5)
{
    return FUN_0c0e7242(a4, a5, 1.0f);
}
