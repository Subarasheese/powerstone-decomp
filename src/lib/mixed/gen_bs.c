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
int fx_spawn_048c18(int, int, float);
int obj_destroy(int, int, int, int);
int res_load_file_unpack(int);
int res_model_register(int);
int pl_special_a_start(int);
int pl_special_a_update(int);
int pl_special_b_start(int);
int pl_special_b_update(int);
int pl_special_c_start(int);
int pl_special_c_update(int);
int pl_falcon_state12_phase0(int);
int pl_falcon_state12_phase1(int);
int pl_falcon_state31_phase0(int);
int pl_falcon_state31_phase1(int);
int pl_falcon_special0_start(int);
int pl_falcon_special0_update(int);
int pl_ryoma_motion_sfx(int);
int pl_wangtang_state12_phase0(int, int, int);
int pl_wangtang_state12_phase1(int);
int pl_wangtang_state31_phase0(int);
int pl_wangtang_state31_phase1(int);
int pl_wangtang_special0_start(int);
int pl_wangtang_special0_update(int);
int pl_jack_state31_phase1(int);
int pl_jack_special0_start(int);
int pl_jack_special0_update(int);
int pl_gunrock_state31_phase1(int);
int pl_gunrock_start_motion_reset_slots(int, int, int);
int pl_garuda_state31_phase0(int);
int pl_garuda_state31_phase1(int);
int pl_ayame_state22_phase0(int);
int pl_ayame_state22_phase1(int);
int pl_ayame_play_motion_sounds(int);
int pl_rouge_state31_phase1(int);
int FUN_0c08740a(int);
int pl_kraken_state22_phase0(int, int, int);
int pl_kraken_state22_phase1(int);
int pl_kraken_state31_phase0(int);
int pl_kraken_state31_phase1(int);
int pl_valgas_state31_phase1(int);
int FUN_0c08bf90(int);
int FUN_0c08c114(int, int, int, int);
int FUN_0c08c210(int);
int FUN_0c08c304(int);
int pl_state35_phase0(int);
int pl_timer_disable(int);
int pl_start_motion(int, int, int);
int pl_change_state(int, int, int, int);
int obj_set_mode_owner(int, int, int);
int stage_obj_on_break(int);
int FUN_0c0d5292(void);
int FUN_0c0dd9f0(int, int);
float math_cos_float(float);
float math_floor_float(float);
float math_ln_float(int, int, int, int, float);
float math_sin_float(float);
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
int ai_op26_clear_reg(void);
int pl_falcon_state12_update(int a4);
int pl_falcon_state31_update(int a4);
int pl_ryoma_state31_update(int a4, int a5, int a6, int a7);
int pl_ryoma_update_action_21(int a4, int a5, int a6, int a7);
int pl_special_a_dispatch(int a4);
int pl_special_b_dispatch(int a4);
int pl_special_c_dispatch(int a4);
int pl_falcon_special0_dispatch(int a4);
int pl_wangtang_state12_update(int a4, int a5, int a6);
int pl_wangtang_state31_update(int a4);
int pl_jack_state12_update(int a4, int a5, int a6, int a7);
int pl_jack_state31_update(int a4, int a5, int a6, int a7);
int pl_gunrock_state12_update(int a4, int a5, int a6, int a7);
int pl_garuda_state22_update(int a4, int a5, int a6, int a7);
int pl_garuda_special_id6(int a4, int a5, int a6, int a7);
int pl_garuda_special_id7(int a4, int a5, int a6, int a7);
int pl_garuda_special_id8(int a4, int a5, int a6, int a7);
int pl_gunrock_state31_update(int a4, int a5, int a6, int a7);
int pl_wangtang_special0_dispatch(int a4);
int pl_garuda_state31_update(int a4);
int pl_ayame_state31_update(int a4, int a5, int a6, int a7);
int pl_rouge_special_id0(int a4, int a5, int a6, int a7);
int pl_rouge_state22_update(int a4, int a5, int a6, int a7);
int pl_jack_special0_dispatch(int a4);
int pl_rouge_state31_update(int a4, int a5, int a6, int a7);
int pl_ayame_state22_update(int a4);
int pl_valgas_state22_update(int a4, int a5, int a6, int a7);
int pl_valgas_special_id0(int a4, int a5, int a6, int a7);
int pl_kraken_state22_update(int a4, int a5, int a6);
int pl_kraken_state31_update(int a4);
int pl_valgas_state31_update(int a4, int a5, int a6, int a7);
int pl_hitreact_09_update(int a4, int a5, int a6, int a7);
int pl_hitreact_11_update(int a4, int a5, int a6, int a7);
int pl_state07_update(int a4, int a5, int a6, int a7);
int pl_state33_update(int a4, int a5, int a6, int a7);
int FUN_0c08c4b0(int a4);
int FUN_0c097e7a(int a4, int a5, int a6, int a7);
int pl_state35_update(int a4, int a5, int a6, int a7);
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
int math_rsqrt_float(float f4);
int FUN_0c0448f6(int a4);
int FUN_0c061694(int a4, int a5, int a6, int a7);
int pl_enter_state_22(int a4, int a5);
int pl_enter_state_19(int a4);
int FUN_0c0de730(void);
int nlSysMetricsCpuPowerEnd(void);
int nlSysMetricsCpuPowerGet(void);
int FUN_0c0e2140(int a4);
int FUN_0c0fc212(int a4, int a5, int a6, int a7);
void vmu_menu_tick_message(int a4, int a5, int a6, int a7);
void vmu_check_message_update(int a4, int a5, int a6, int a7);
void FUN_0c01f98e(int a4, int a5, int a6, int a7);
int pl_falcon_special_move_dispatch(int a4, int a5, int a6, int a7);
int pl_ryoma_special_move_dispatch(int a4, int a5, int a6, int a7);
int pl_wangtang_special_move_dispatch(int a4, int a5, int a6, int a7);
int pl_jack_special_move_dispatch(int a4, int a5, int a6, int a7);
int pl_gunrock_special_move_dispatch(int a4, int a5, int a6, int a7);
int pl_garuda_special_move_dispatch(int a4, int a5, int a6, int a7);
int pl_rouge_special_move_dispatch(int a4, int a5, int a6, int a7);
int pl_kraken_special_move_dispatch(int a4, int a5, int a6, int a7);
int pl_valgas_special_move_dispatch(int a4, int a5, int a6, int a7);
int pl_enter_state_08(int a4);
int FUN_0c0dccb0(int a4, int a5, int a6, int a7);
float math_ceil_float(float f4);
int FUN_0c0f410c(int a4, int a5, int a6, int a7);
int FUN_0c107fbc(int a4, int a5, int a6, int a7);
int FUN_0c113d4a(int a4, int a5, int a6);
int FUN_0c016d7a(int a4);
int FUN_0c016df2(int a4);
int FUN_0c043706(int a4, int a5, int a6, int a7);
int res_test_tex_load(int a4, int a5, int a6, int a7);
int pl_falcon_special2_dispatch(int a4, int a5, int a6, int a7);
int pl_ryoma_special2_dispatch(int a4, int a5, int a6, int a7);
int pl_wangtang_special2_dispatch(int a4, int a5, int a6, int a7);
int pl_jack_special2_dispatch(int a4, int a5, int a6, int a7);
int pl_rouge_special_id2(int a4, int a5, int a6, int a7);
int pl_valgas_special_id2(int a4, int a5, int a6, int a7);
int pl_state21_update(int a4, int a5, int a6, int a7);
int pl_state22_update(int a4, int a5, int a6, int a7);
int pl_hitreact_12_update(int a4, int a5, int a6, int a7);
int pl_enter_state_33(int a4);
int stage_type08_update(int a4, int a5, int a6, int a7);
void stage_gimmick_37_update(void);
float math_log2_float(int a4, int a5, int a6, int a7, float f4);
float math_log10_float(int a4, int a5, int a6, int a7, float f4);
int pl_ryoma_frame_hook(int a4);
int pl_ayame_frame_hook(int a4);
int pl_kraken_victim_dispatch(int a4);
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
int game_mode_handler_8(void);
int FUN_0c0f26b6(int a4);
int vmsfs_getword_big(int a4, int a5);
int FUN_0c01238c(int a4);
int pl_wangtang_start_motion_3(int a4);
int pl_wangtang_start_motion_0(int a4);
int pl_wangtang_start_motion_21(int a4);
int pl_wangtang_start_motion_28(int a4);
int pl_wangtang_start_motion_1(int a4);
int pl_wangtang_start_motion_19_b(int a4);
int pl_wangtang_start_motion_0_c(int a4);
int pl_wangtang_start_motion_1_b(int a4);
int pl_wangtang_start_motion_2(int a4);
int pl_wangtang_start_motion_28_b(int a4);
int pl_wangtang_start_motion_0_b(int a4);
int pl_wangtang_start_motion_5(int a4);
int pl_wangtang_start_motion_48(int a4);
int pl_wangtang_start_motion_14(int a4);
int pl_wangtang_start_motion_49(int a4);
int pl_wangtang_start_motion_2_b(int a4);
int pl_wangtang_start_motion_3_b(int a4);
int pl_jack_start_motion_16(int a4);
int pl_jack_start_motion_25(int a4);
int pl_jack_start_motion_24(int a4);
int pl_jack_start_motion_17(int a4);
int pl_jack_start_motion_18(int a4);
int pl_jack_start_motion_27(int a4);
int pl_jack_start_motion_20(int a4);
int pl_jack_start_motion_19(int a4);
int pl_jack_start_motion_26_b(int a4);
int pl_jack_start_motion_0(int a4);
int pl_jack_start_motion_28(int a4);
int pl_jack_start_motion_26(int a4);
int pl_jack_start_motion_2(int a4);
int pl_jack_start_motion_3(int a4);
int pl_jack_start_motion_0_b(int a4);
int pl_jack_start_motion_1(int a4);
int pl_jack_start_motion_2_b(int a4);
int pl_jack_start_motion_49(int a4);
int pl_jack_start_motion_48(int a4);
int pl_jack_start_motion_14(int a4);
int pl_jack_start_motion_3_b(int a4);
int pl_gunrock_start_motion_16(int a4);
int pl_gunrock_start_motion_24(int a4);
int pl_gunrock_start_motion_25(int a4);
int pl_gunrock_start_motion_20(int a4);
int pl_gunrock_start_motion_26(int a4);
int pl_gunrock_start_motion_1(int a4);
int pl_gunrock_start_motion_17(int a4);
int pl_gunrock_start_motion_28(int a4);
int pl_gunrock_start_motion_15(int a4);
int pl_gunrock_start_motion_18(int a4);
int pl_gunrock_start_motion_14(int a4);
int pl_gunrock_mode01_03_enter_v0(int a4);
int pl_garuda_move00_init(int a4);
int pl_garuda_move01_init(int a4);
int pl_garuda_move02_init(int a4);
int pl_garuda_move03_init(int a4);
int pl_garuda_move04_init(int a4);
int pl_garuda_move06_init(int a4);
int pl_garuda_move08_init(int a4);
int pl_garuda_move05_init(int a4);
int pl_garuda_move09_init(int a4);
int pl_garuda_move07_init(int a4);
int pl_garuda_move10_init(int a4);
int pl_garuda_move11_init(int a4);
int pl_ayame_move08_init(int a4);
int pl_ayame_move12_init(int a4);
int pl_ayame_move13_init(int a4);
int pl_ayame_move15_init(int a4);
int pl_rouge_move01_init(int a4);
int pl_rouge_move02_init(int a4);
int pl_rouge_move00_init(int a4);
int pl_rouge_move04_init(int a4);
int pl_rouge_move03_init(int a4);
int pl_rouge_move05_init(int a4);
int pl_rouge_move06_init(int a4);
int pl_rouge_move08_init(int a4);
int pl_rouge_move07_init(int a4);
int pl_rouge_move15_init(int a4);
int pl_rouge_move16_init(int a4);
int pl_rouge_move17_init(int a4);
int pl_rouge_move18_init(int a4);
int pl_valgas_move02_init(int a4);
int pl_valgas_move01_init(int a4);
int pl_valgas_move00_init(int a4);
int pl_valgas_move04_init(int a4);
int pl_valgas_move06_init(int a4);
int pl_valgas_move05_init(int a4);
int pl_valgas_move08_init(int a4);
int pl_valgas_move07_init(int a4);
int pl_valgas_move09_init(int a4);
int pl_valgas_move10_init(int a4);
int pl_valgas_move03_init(int a4);
int pl_hitreact_10_update(int a4, int a5, int a6, int a7);
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
void math_set_rand_seed(int a4);
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
void stage_gimmick_03_04_update(void);
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

    t0 = math_cos_float(f4);
    t1 = math_sin_float(f4);
    return nlRotateXSC(t1, t0);
}

int nlRotateRY(float f4)
{
    register float t0;
    register float t1;

    t0 = math_cos_float(f4);
    t1 = math_sin_float(f4);
    return nlRotateYSC(t1, t0);
}

int nlRotateRY_L(float f4)
{
    register float t0;
    register float t1;

    t0 = math_cos_float(f4);
    t1 = math_sin_float(f4);
    return FUN_0c0e1dc0(t1, t0);
}

int nlRotateRZ_L(float f4)
{
    register float t0;
    register float t1;

    t0 = math_cos_float(f4);
    t1 = math_sin_float(f4);
    return nlRotateZSC_L(t1, t0);
}

int nlRotateRX_L(float f4)
{
    register float t0;
    register float t1;

    t0 = math_cos_float(f4);
    t1 = math_sin_float(f4);
    return FUN_0c0e1d00(t1, t0);
}

int nlRotateRZ(float f4)
{
    register float t0;
    register float t1;

    t0 = math_cos_float(f4);
    t1 = math_sin_float(f4);
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

int syRtcGetStat(void)
{
    return (*(int *)0xC7FD0CC);
}

int FUN_0c0e5d82(void)
{
    return 0xC155C18;
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
