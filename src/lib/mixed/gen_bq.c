/* Straight-line functions with calls and guards (batch gen_bq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o10E8_int { char p[0x10E8]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_short { char p[0x18]; short v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o24_short { char p[0x24]; short v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o308_int { char p[0x308]; int v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_int { char p[0x40]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o7204_uchar { char p[0x7204]; unsigned char v; };
struct o7205_uchar { char p[0x7205]; unsigned char v; };
struct o720C_ushort { char p[0x720C]; unsigned short v; };
struct o723B_uchar { char p[0x723B]; unsigned char v; };
struct o723C_ushort { char p[0x723C]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o98_int { char p[0x98]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int ADXSJD_GetSfreq(int, int, int, int);
int ADXSJD_GetTotalNumSmpl(int);
int FUN_0c0210f4(int, int, int);
int hit_find_part_entry(int, int, int, int);
int FUN_0c02440e(int);
int stage_draw_lights(void);
int FUN_0c0282cc(void);
int FUN_0c02ca74(void);
int FUN_0c02cade(void);
int FUN_0c02cf18(void);
int FUN_0c02d458(void);
int fx_spawn_043730(int, int);
int ai_clear_op_state(void);
int FUN_0c06233a(int, int, int);
int FUN_0c063468(int);
int pl_falcon_victim_phase2(int);
int FUN_0c06b8ee(int, int);
int pl_wangtang_special3_phase1(int);
int pl_wangtang_mode10_phase2(int);
int pl_wangtang_attack_kind24_phase0(int);
int pl_wangtang_attack_kind24_phase1(int);
int pl_wangtang_attack_kind24_phase2(int, int, int, int);
int pl_wangtang_wait_anim_end_f(int);
int pl_jack_victim_phase2(int);
int pl_gunrock_step_scale_script(int);
int FUN_0c08e382(int);
int pl_hitreact_21_phase1(int);
int pl_hitreact_21_phase2(int);
int pl_hitreact_23_phase0(int);
int pl_hitreact_23_phase1(int);
int pl_hitreact_23_phase2(int);
int pl_state16_walk_step(int, int, int, int, float);
int pl_state16_phase_dispatch(int);
int pl_state17_phase1(int, int, int);
int pl_state17_phase2(int, int, int);
int pl_state17_phase3(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int pl_motion_length(int);
int sys_nop_09b700(void);
int hit_find_interactable_contact(int, int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_turn_to_opponent(int, int);
int pl_end_action_choose_state(int);
int pl_change_state(int, int, int);
int stage_obj_load_layout_pos(int);
int obj_set_mode_owner(int, int, int);
int stage_obj_on_break(int);
int stage_type12_mode_02(int);
int stage_type04_mode_19(int);
int FUN_0c0b7fa0(int);
int FUN_0c0b8084(int);
int FUN_0c0b83dc(int, int, int, int);
int ui_draw_please_wait(int);
int cam_select_mode0_variant(int);
int cam_request_mode(int, int, int);
int cam_force_mode(int, int, int);
int cam_snap_mode0(int);
int gfx_flip_frame_buffer(void);
float math_sin_angle16(int);
int dbg_set_cursor_cell(void);
int dbg_printf(int, ...);
int FUN_0c0e09f0(int, int, int, int, float, float, float, float);
int FUN_0c0e0ae0(int);
int FUN_0c0e0bd0(int);
int FUN_0c0e12b0(int, int, int, int);
int FUN_0c0e12e0(int, int);
int FUN_0c0e16c0(void);
int FUN_0c0e1900(int);
int FUN_0c0e19b0(int);
int FUN_0c0e4980(int, int);
int FUN_0c0e6d00(void);
int FUN_0c0eb5c8(int, int);
int FUN_0c0f4328(int, int, int, int, int, int);
int FUN_0c0fb042(int, int, int, int);
int FUN_0c0fb0be(int, int);
int FUN_0c100260(void);
int FUN_0c115464(int, int, int, int);
extern void _builtin_ftrv(float *, float *);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
extern void _builtin_st_ext(float (*)[4]);
int gdFsGetStatG(void);
int kdSetDriverMode(int, int);
int kmSetTexOverflowCallback(int, int);
int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int memset(int, int, int);
int mpdrv_set_dreq(int);
int mpdrv_set_transagain(int);
int nlCalcPoint(int, int);
int nlCalcPoint44(int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int syCfgGetIDAddress(int, int, int);
int syRtcDateToCount(void);
int thunk_FUN_0c0fbcf0(int);
int pl_wangtang_update_action_22(int a4);
void FUN_0c0f43f4(int a4, int a5, int a6, int a7);
int kmSetPaletteData(int a4);
int pl_wangtang_mode10_phase3(int a4);
int FUN_0c0e3350(int a4, int a5);
int syRtcCompareDate(int a4, int a5);
int FUN_0c0fefee(int a4, int a5);
int pl_mode15_cls15_f1_phase0(int a4);
int pl_ryoma_mode04_phase2(int a4);
int pl_hitreact_03_update(int a4, int a5, int a6, int a7);
int pl_hitreact_16_update(int a4, int a5, int a6, int a7);
int pl_hitreact_27_update(int a4, int a5, int a6, int a7);
int pl_state18_update(int a4);
int pl_hitreact_22_phase1(int a4);
int pl_state40_phase2(int a4);
int pl_state16_phase0(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0ae4f0(int a4);
int stage_type01_mode_02(int a4);
float math_csc_angle16(int a4);
int FUN_0c0f4e2c(int a4, int a5, int a6, int a7);
int FUN_0c108552(int a4, int a5, int a6, int a7);
int ai_op7_nop(void);
int pl_ryoma_special2_phase2(int a4);
int pl_jack_update_action_14(int a4);
int FUN_0c0addb0(int a4);
int fx_update_08(int a4, int a5, int a6, int a7);
int pl_ryoma_attack_kind4_phase5(int a4);
int pl_falcon_victim_phase1(int a4);
int pl_ryoma_attack_kind2_phase4(int a4);
int pl_jack_victim_phase1(int a4);
int pl_garuda_victim_phase1(int a4);
int ai_reaction_mode4(int a4, int a5);
int FUN_0c09b704(int a4, int a5, int a6);
int FUN_0c0a2c76(int a4, int a5);
int FUN_0c0fc360(int a4);
int FUN_0c115438(int a4, int a5, int a6, int a7);
int pl_mode08_09_phase4(int a4);
int pl_ryoma_victim_dispatch(int a4, int a5, int a6, int a7);
int pl_wangtang_state12_phase0(int a4);
int pl_wangtang_mode10_update(int a4, int a5, int a6, int a7);
int pl_gunrock_special0_dispatch(int a4, int a5, int a6, int a7);
int pl_gunrock_mode04_phase4(int a4);
int pl_wangtang_attack_kind24(int a4, int a5, int a6, int a7);
int pl_garuda_special_id0(int a4, int a5, int a6, int a7);
int pl_garuda_special_id3(int a4, int a5, int a6, int a7);
int pl_garuda_special_id2(int a4, int a5, int a6, int a7);
int pl_garuda_special_id9(int a4, int a5, int a6, int a7);
int FUN_0c081a46(int a4, int a5, int a6, int a7);
int pl_rouge_victim_dispatch(int a4, int a5, int a6, int a7);
int pl_kraken_attack_kind3(int a4, int a5, int a6, int a7);
int pl_kraken_state22_phase0(int a4);
int pl_hitreact_19_update(int a4, int a5, int a6, int a7);
int FUN_0c098ad8(int a4);
int pl_hitreact_21_update(int a4, int a5, int a6, int a7);
int pl_state17_update(int a4, int a5, int a6, int a7);
int FUN_0c0e4990(int a4, int a5, int a6, int a7);
int syCfgGetBroadcastType(int a4, int a5, int a6);
int syCfgGetCountryCode(int a4, int a5, int a6);
int FUN_0c0fc2b0(int a4, int a5);
int FUN_0c0437d6(int a4, int a5, int a6);
int game_mode_handler_2(int a4, int a5, int a6, int a7);
int FUN_0c02d744(void);
int pl_wangtang_special3_phase2(int a4);
int pl_wangtang_mode07_phase2(int a4);
int pl_jack_update_action_default(int a4);
int pl_garuda_move_update_default(int a4);
int pl_garuda_mode13_phase1(int a4);
int pl_gunrock_update_action_default(int a4);
int pl_ayame_move_update_default(int a4);
int pl_kraken_move_update_default(int a4);
int pl_valgas_move_update_default(int a4);
int FUN_0c08a002(int a4);
int pl_hitreact_08_update(int a4, int a5, int a6, int a7);
int pl_hitreact_13_update(int a4, int a5, int a6, int a7);
int pl_hitreact_14_update(int a4, int a5, int a6, int a7);
int pl_hitreact_17_update(int a4, int a5, int a6, int a7);
int FUN_0c098b02(int a4);
int pl_timer_arm_motion_end(int a4, int a5);
int nlGetPushedMatrix(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
int FUN_0c0e3470(void);
int FUN_0c0e2720(void);
int FUN_0c0234ca(int a4, int a5);
int pl_ryoma_mode10_phase2(int a4);
int pl_rouge_special_id8(int a4);
int pl_valgas_mode04_phase3(int a4);
int FUN_0c08bc16(int a4);
int pl_state39_phase0(int a4);
int pl_state36_phase0(int a4);
int pl_state16_update(int a4, int a5, int a6, int a7);
int FUN_0c0e0790(void);
int FUN_0c0fc280(int a4);
void FUN_0c0ff37e(int a4, int a5, int a6, int a7);
void FUN_0c0ff3c8(int a4, int a5, int a6, int a7);
int kdSetDeviceRequest(int a4, int a5, int a6, int a7);
int kdSetTransmitAgain(int a4, int a5, int a6, int a7);
int pl_falcon_state31_phase0(int a4);
int FUN_0c0646da(int a4);
int pl_wait_anim_end_move(int a4);
int pl_ryoma_state12_update(int a4, int a5, int a6, int a7);
int pl_wangtang_state31_phase0(int a4);
int pl_rouge_move11_init(int a4);
int pl_rouge_move12_init(int a4);
int pl_rouge_move14_init(int a4);
int pl_rouge_move13_init(int a4);
int pl_rouge_move10_init(int a4);
int pl_kraken_attack_kind2_phase4(int a4);
int pl_kraken_attack_kind6_phase6(int a4);
int pl_kraken_state31_phase0(int a4);
int FUN_0c08bef8(int a4);
int pl_state25_update(int a4);
int FUN_0c0d5ef2(int a4);
int FUN_0c0d5f16(int a4);
float FUN_0c0e1dc0(float f4, float f5);
float FUN_0c0e1d00(float f4, float f5);
float nlRotateZSC_L(float f4, float f5);
float FUN_0c0e1e20(float f4, float f5);
int gdFsExecServerG(void);
int FUN_0c0f26f6(int a4);
int FUN_0c0ff9e0(int a4, int a5, int a6, int a7);
int FUN_0c0ffa04(int a4, int a5, int a6, int a7);
int FUN_0c04a9d8(int a4, int a5, int a6, int a7);
int FUN_0c061094(int a4, int a5, int a6);
int pl_ryoma_special3_dispatch(int a4, int a5, int a6, int a7);
int pl_falcon_victim_dispatch(int a4, int a5, int a6, int a7);
int pl_wangtang_special3_dispatch(int a4, int a5, int a6, int a7);
int pl_jack_victim_dispatch(int a4, int a5, int a6, int a7);
int FUN_0c081b98(int a4, int a5, int a6, int a7);
int pl_rouge_special_id3(int a4, int a5, int a6, int a7);
int pl_valgas_victim_dispatch(int a4, int a5, int a6, int a7);
int pl_state05_update(int a4, int a5, int a6, int a7);
int pl_state19_update(int a4);
int pl_hitreact_23_25_26_update(int a4);
int stage_gimmick_19_update(int a4, int a5, int a6, int a7);
int FUN_0c0d00c8(int a4);
int cam_request_mode_05(int a4, int a5);
int cam_request_mode_18(int a4, int a5);
int FUN_0c0e0a40(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
int gdDcfDaPlay_(int a4, int a5, int a6);
int gdDcfDaPlay2_(int a4, int a5, int a6);
int gdDcfGetScd_(int a4, int a5, int a6);
int FUN_0c0ffd98(void);
int FUN_0c024426(void);
int ai_op13_get_target_form(int a4);
int ai_op17_get_target_hp(int a4);
int pl_ryoma_mode01_03_enter_v1(int a4);
int pl_ayame_move03_init(int a4);
int pl_ayame_move04_init(int a4);
int pl_ayame_move02_init(int a4);
int pl_ayame_move09_init(int a4);
int pl_ayame_move01_init(int a4);
int pl_ayame_move11_init(int a4);
int pl_ayame_move14_init(int a4);
int pl_ayame_move07_init(int a4);
int pl_hitreact_22_update(int a4, int a5, int a6, int a7);
int cam_reset_to_default(void);
int nlProjectScreen3D(int a4, int a5);
int FUN_0c0e2750(void);
int kmSetPaletteMode(int a4);
int gdDcfReqStat_(int a4, int a5, int a6, int a7);
int ai_op14_get_own_hp(int a4);
int ai_op23(void);
int game_mode_handler_9(void);
int pl_ayame_move00_init(int a4);
int pl_rouge_move09_init(int a4);
int cam_force_mode_14(int a4, int a5, int a6);
int FUN_0c0f4d38(int a4);
int FUN_0c0f4d56(int a4, int a5, int a6, int a7);
int gdDcfSeek_(int a4);
int gdDcfDaRelease_(int a4);
int gdDcfGetVer_(int a4);
int FUN_0c108520(int a4);
int FUN_0c1087e0(int a4);
int FUN_0c113d2c(int a4, int a5, int a6, int a7);
int ai_op37_clear_flag25(void);
int ai_op36_clear_flag24(void);
int ai_op35_set_flag25(void);
int ai_op12_get_own_form(int a4);
int ai_op24(void);
int ai_op27_clear_reg(void);
int ai_op28_clear_reg(void);
int game_mode_handler_6(void);
int pl_jack_start_motion_4(int a4);
int stage_type12_update(int a4, int a5, int a6, int a7);
int stage_type04_update(int a4, int a5, int a6, int a7);
void FUN_0c0e3c38(int a4, int a5);
int FUN_0c0e4730(int a4, int a5);
int FUN_0c0e4880(int a4, int a5);
int kmSetEndOfVertexCallback(int a4, int a5);

void FUN_0c0f43f4(int a4, int a5, int a6, int a7)
{
    register int t3;

    if ((*(int *)((((a4 * 0x1C) + 0xC7FF2C8) + 0xC))) != 0) {
        t3 = FUN_0c0f4328(a4, a5, a6, a7, ((*(int *)((((a4 * 0x1C) + 0xC7FF2C8) + 0x4)))), 0x0);
        ((int (*)(int, int, int, int))((*(int *)((((a4 * 0x1C) + 0xC7FF2C8) + 0xC)))))(t3, (*(int *)((((a4 * 0x1C) + 0xC7FF2C8) + 0x8))), a6, a7);
    return;
    }
}

int kmSetPaletteData(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x0;
    t1 = a4;
    t2 = 0x1000;
    for (;;) {
        t3 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        kmiWriteRegister(t2, t3);
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x4);
        if ((int)t0 >= (int)0x400) {
            break;
        }
    }
    return 0x0;
}

int FUN_0c0e3350(int a4, int a5)
{
    int stk[4];
    register float u1;

    nlCalcPoint44(a4, ((int)stk + 0));
    u1 = *(float *)(((int)stk + 12));
    *(float *)((a5 + 0x0)) = ((*(float *)(((int)stk + 0))) * (1.0f / u1));
    (((struct o4_float *)(a5))->v) = ((*(float *)(((int)stk + 4))) * (1.0f / u1));
    (((struct o8_float *)(a5))->v) = (1.0f / u1);
    return 0x8;
}

int syRtcCompareDate(int a4, int a5)
{
    int stk[3];
    register int t4;
    register int t10;

    *(unsigned int *)(((int)stk + 8)) = a5;
    syRtcDateToCount();
    *(volatile int *)(((int)stk + 8));
    syRtcDateToCount();
    t4 = *(int *)(((int)stk + 0));
    t10 = 0x0;
    if ((*(int *)(((int)stk + 4))) == t4) {
    } else {
        t10 = 0xFFFFFFFF;
        if ((unsigned int)(*(int *)(((int)stk + 4))) > (unsigned int)t4) {
            t10 = 0x1;
        }
    }
    return t10;
}

int FUN_0c0fefee(int a4, int a5)
{
    register int t1;
    register int t2;

    t1 = (a4 & 0x1FFFFFE0);
    t2 = ((unsigned int)((unsigned int)((unsigned int)((a5 + (a4 & 0x1F)) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        _builtin_prefetch((void *)t1);
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x20);
        if (t2 == 0) {
            break;
        }
    }
    return (a4 & 0x1F);
}

int FUN_0c0f4e2c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(int *)((a4 + 0x14))) != 0) {
        t0 = *(int *)((a4 + 0x14));
        t1 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x24)))))(t0, 0x1, a6, a7);
        t0 = (FUN_0c0e6d00());
    }
    return t0;
}

int FUN_0c108552(int a4, int a5, int a6, int a7)
{
    int t0;

    if (a5 == 1) {
        return (*(int *)((a4 + 0xC)));
    }
    if ((a5 != 0) && (t0 = *(int *)((a4 + 0x1C)), t0 != 0)) {
        t0 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD, a6, a7);
    }
    return 0x0;
}

int FUN_0c0fc360(int a4)
{
    register int t0;

    t0 = kmiReadRegister(0xE4);
    kmiWriteRegister(0xE4, (((int)(a4 & 0x3E0) >> 5) | (t0 & 0xFFFFFFE0)));
    return 0x0;
}

int FUN_0c115438(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t3;
    register int t0;

    t2 = 0x0;
    t3 = 0xC8447E0;
    for (;;) {
        if ((*(int *)((t3 + 0x0))) != 0) {
            t0 = (FUN_0c115464(t3, a5, a6, a7));
        }
        t2 = (t2 + 0x1);
        t3 = (t3 + (0x2694));
        if ((int)t2 >= (int)0x8) {
            break;
        }
    }
    return t0;
}

int FUN_0c0e4990(int a4, int a5, int a6, int a7)
{
    register int t3;

    if ((int)a4 < (int)0xC) {
        t3 = (((int (*)(int, int, int, int))((*(int *)(((a4 << 2) + 0xC346B08)))))(a4, a5, a6, a7));
    } else {
        t3 = (FUN_0c0e4980(0x0, a5));
    }
    return t3;
}

int syCfgGetBroadcastType(int a4, int a5, int a6)
{
    register int t0;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x30;
        t0 = syCfgGetIDAddress(a4, a5, a6);
        if (t0 == 0) {
            return 0xFFFFFFFF;
        }
        *(unsigned int *)((a4 + 0x0)) = (*(signed char *)((t0 + 0xC)));
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int syCfgGetCountryCode(int a4, int a5, int a6)
{
    register int t0;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x30;
        t0 = syCfgGetIDAddress(a4, a5, a6);
        if (t0 == 0) {
            return 0xFFFFFFFF;
        }
        *(unsigned int *)((a4 + 0x0)) = (*(signed char *)((t0 + 0xA)));
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int FUN_0c0fc2b0(int a4, int a5)
{
    register int t0;

    t0 = kmiReadRegister(0xC4);
    *(unsigned int *)((a4 + 0x0)) = (t0 & 0x3FF);
    *(unsigned int *)((a5 + 0x0)) = (((unsigned int)t0 >> 16) & 0x3FF);
    return 0x0;
}

int nlGetPushedMatrix(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    register int t0;

    t0 = *(int *)0xC7FCCBC;
    if (a4 == 0) {
        return FUN_0c0e12b0((t0 - 64), a5, a6, a7);
    }
    return FUN_0c0e09f0(a4, (t0 - 64), a6, a7, f4, f5, f6, f7);
}

int FUN_0c0e3470(void)
{
    FUN_0c0e19b0(0xC7FCEE8);
    nlMultiMatrix(((((struct oC_int *)0xC7FCCD4)->v)));
    nlMultiMatrix(((((struct o0_int *)0xC7FCCD4)->v)));
    FUN_0c0e16c0();
    return FUN_0c0e1900(0x1);
}

int FUN_0c0e2720(void)
{
    FUN_0c0e19b0(((((struct oC_int *)0xC7FCCD4)->v)));
    nlMultiMatrix(((((struct o0_int *)0xC7FCCD4)->v)));
    FUN_0c0e16c0();
    FUN_0c0e0bd0(0xC7FCEA8);
    return nlPopMatrix(0x1);
}

int FUN_0c0e0790(void)
{
    int stk[128];
    register int t0;
    register int t1;

    t0 = ((int)stk + 0);
    t1 = 0x0;
    for (;;) {
        t1 = (t1 + 0x1);
        *(float *)((t0 + 0x0)) = 0.0f;
        t0 = (t0 + 0x4);
        if ((int)t1 >= (int)0x80) {
            break;
        }
    }
    return (thunk_FUN_0c0fbcf0(((int)stk + 0)));
}

int FUN_0c0fc280(int a4)
{
    register int t2;

    if ((a4 & 0x1) != 0) {
        (((struct o14_uint *)0xC817180)->v) = 0x1;
        (((struct o18_uint *)0xC817180)->v) = a4;
        t2 = 0x0;
    } else {
        (((struct o14_uint *)0xC817180)->v) = 0x0;
        t2 = 0xB;
    }
    (((struct o0_uint *)0xC817180)->v) = 0x3;
    return t2;
}

void FUN_0c0ff37e(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t5;

    _builtin_set_imask(0x6);
    t2 = (*(int *)0xC8050E8);
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t5 = ((int (*)(int, int, int, int))((*(int *)((t2 + 0x0)))))((*(int *)((t2 + 0x8))), a5, a6, a7);
        t2 = (*(int *)((t2 + 0x4)));
    }
}

void FUN_0c0ff3c8(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t5;

    _builtin_set_imask(0x6);
    t2 = (*(int *)0xC8050F0);
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t5 = ((int (*)(int, int, int, int))((*(int *)((t2 + 0x0)))))((*(int *)((t2 + 0x8))), a5, a6, a7);
        t2 = (*(int *)((t2 + 0x4)));
    }
}

int kdSetDeviceRequest(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = mpdrv_set_dreq(a4);
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}

int kdSetTransmitAgain(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = mpdrv_set_transagain(a4);
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}

float FUN_0c0e1dc0(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];

    u0[0] = f5;
    u0[1] = 0.0f;
    u0[2] = f4;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = (-f4);
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

float FUN_0c0e1d00(float f4, float f5)
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
    u1[1] = f4;
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

float nlRotateZSC_L(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];

    u0[0] = f5;
    u0[1] = (-f4);
    u0[2] = 0.0f;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = f4;
    u1[1] = f5;
    u1[2] = 0.0f;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[0] = u0[0];
    u2[1] = u0[1];
    u2[2] = u0[2];
    u2[3] = u0[3];
    u2[4] = u1[0];
    u2[5] = u1[1];
    u2[6] = u1[2];
    u2[7] = u1[3];
    _builtin_ld_ext((float (*)[4])u2);
    return u0[0];
}

float FUN_0c0e1e20(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];

    u0[0] = f5;
    u0[1] = f4;
    u0[2] = 0.0f;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = (-f4);
    u1[1] = f5;
    u1[2] = 0.0f;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[0] = u0[0];
    u2[1] = u0[1];
    u2[2] = u0[2];
    u2[3] = u0[3];
    u2[4] = u1[0];
    u2[5] = u1[1];
    u2[6] = u1[2];
    u2[7] = u1[3];
    _builtin_ld_ext((float (*)[4])u2);
    return u0[0];
}

int gdFsExecServerG(void)
{
    register int t3;

    t3 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC346BD8) + 0xC)))))->v))))();
    if ((*(int *)(((*(int *)0xC346BD8) + 0x1C))) != 0) {
        return gdFsGetStatG();
    }
    return t3;
}

int FUN_0c0f26f6(int a4)
{
    register int t2;

    if (a4 != 0) {
        kdSetDriverMode(0x8, a4);
        t2 = kdSetDriverMode(0x9, 0xFFFFFFFF);
        *(unsigned int *)0xC7FE708 = a4;
    }
    return t2;
}

int FUN_0c0ff9e0(int a4, int a5, int a6, int a7)
{
    register int t3;
    register int t4;

    (((struct o0_uchar *)0xFFD80004)->v) = ((*(signed char *)0xFFD80004) & 0xFD);
    (((struct o18_ushort *)0xFFD80004)->v) = (((((struct o18_short *)0xFFD80004)->v)) & 0xFFFFFFDF);
    (((struct o18_ushort *)0xFFD80004)->v) = (((((struct o18_short *)0xFFD80004)->v)) & 0xFFFFFEFF);
    t3 = (((struct o0_int *)0xC8051A8)->v);
    t4 = (((struct o4_int *)0xC8051A8)->v);
    return ((int (*)(int, int, int, int))(t3))(t4, a5, a6, a7);
}

int FUN_0c0ffa04(int a4, int a5, int a6, int a7)
{
    register int t3;
    register int t4;

    (((struct o0_uchar *)0xFFD80004)->v) = ((*(signed char *)0xFFD80004) & 0xFB);
    (((struct o24_ushort *)0xFFD80004)->v) = (((((struct o24_short *)0xFFD80004)->v)) & 0xFFFFFFDF);
    (((struct o24_ushort *)0xFFD80004)->v) = (((((struct o24_short *)0xFFD80004)->v)) & 0xFFFFFEFF);
    t3 = (((struct o0_int *)0xC8051B0)->v);
    t4 = (((struct o4_int *)0xC8051B0)->v);
    return ((int (*)(int, int, int, int))(t3))(t4, a5, a6, a7);
}

int FUN_0c0e0a40(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    int stk[18];

    *(unsigned int *)(((int)stk + 0)) = a4;
    FUN_0c0e09f0((((int)stk + 0) + 0x4), a4, a6, a7, f4, f5, f6, f7);
    return (FUN_0c0e12e0((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x44)));
}

int gdDcfDaPlay_(int a4, int a5, int a6)
{
    int stk[4];

    *(unsigned int *)((((int)stk + 0) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 0) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 0) + 0xC)) = 0x0;
    return (FUN_0c0eb5c8(0x14, ((int)stk + 0)));
}

int gdDcfDaPlay2_(int a4, int a5, int a6)
{
    int stk[4];

    *(unsigned int *)((((int)stk + 0) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 0) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 0) + 0xC)) = 0x0;
    return (FUN_0c0eb5c8(0x15, ((int)stk + 0)));
}

int gdDcfGetScd_(int a4, int a5, int a6)
{
    int stk[4];

    *(unsigned int *)((((int)stk + 0) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 0) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 0) + 0xC)) = 0x0;
    return (FUN_0c0eb5c8(0x22, ((int)stk + 0)));
}

int FUN_0c0ffd98(void)
{
    register int t1;
    register int t3;

    *(unsigned int *)0xC8054A0 = ((*(int *)0xC8054A0) + 0x1);
    t1 = *(int *)0xC80570C;
    t3 = *(short *)((((t1 << 1) + 0xC8054BC) + 0x0));
    *(unsigned short *)((((t1 << 1) + 0xC8054BC) + 0x0)) = (t3 + 0x1);
    *(unsigned int *)0xA05F6900 = 0x2000;
    return (t3 + 0x1);
}

int nlProjectScreen3D(int a4, int a5)
{
    FUN_0c0e19b0(0xC7FCE68);
    nlCalcPoint(a4, a5);
    return nlPopMatrix(0x1);
}

int FUN_0c0e2750(void)
{
    FUN_0c0e19b0((*(int *)0xC7FCCD4));
    FUN_0c0e16c0();
    FUN_0c0e0ae0(0xC7FCE68);
    return nlPopMatrix(0x1);
}

int kmSetPaletteMode(int a4)
{
    if ((0xFFFFFFFC & a4) == 0) {
        *(unsigned int *)0xC81705C = a4;
        kmiWriteRegister(0x108, a4);
    }
    return 0x0;
}

int gdDcfReqStat_(int a4, int a5, int a6, int a7)
{
    int stk[4];

    *(unsigned int *)((((int)stk + 0) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 0) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 0) + 0xC)) = a7;
    return (FUN_0c0eb5c8(0x24, ((int)stk + 0)));
}

int FUN_0c0f4d38(int a4)
{
    if ((int)(*(signed char *)((a4 + 0x1))) >= (int)0x2) {
        return ADXSJD_GetTotalNumSmpl((*(int *)((a4 + 0x4))));
    }
    return 0x0;
}

int FUN_0c0f4d56(int a4, int a5, int a6, int a7)
{
    if ((int)(*(signed char *)((a4 + 0x1))) >= (int)0x2) {
        return ADXSJD_GetSfreq((*(int *)((a4 + 0x4))), a5, a6, a7);
    }
    return 0x0;
}

int gdDcfSeek_(int a4)
{
    int stk[2];

    *(unsigned int *)((((int)stk + 0) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = 0x0;
    return (FUN_0c0eb5c8(0x1B, ((int)stk + 0)));
}

int gdDcfDaRelease_(int a4)
{
    int stk[2];

    *(unsigned int *)((((int)stk + 0) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = 0x0;
    return (FUN_0c0eb5c8(0x17, ((int)stk + 0)));
}

int gdDcfGetVer_(int a4)
{
    int stk[2];

    *(unsigned int *)((((int)stk + 0) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = 0x0;
    return (FUN_0c0eb5c8(0x28, ((int)stk + 0)));
}

int FUN_0c108520(int a4)
{
    register int t1;

    if (a4 != 0) {
        t1 = memset(a4, 0x0, 0x24);
        *(unsigned int *)((a4 + 0x4)) = 0x0;
    }
    return t1;
}

int FUN_0c1087e0(int a4)
{
    register int t1;

    if (a4 != 0) {
        t1 = memset(a4, 0x0, 0x30);
        *(unsigned int *)((a4 + 0x4)) = 0x0;
    }
    return t1;
}

int FUN_0c113d2c(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)((a5 + 0x0)) = ((((struct o9C_int *)(a4))->v));
    *(unsigned int *)((a6 + 0x0)) = (((((struct o40_int *)(a4))->v)) - ((((struct o9C_int *)(a4))->v)));
    *(unsigned int *)((a7 + 0x0)) = ((*(int *)((a4 + 0x18))) - ((((struct o98_int *)(a4))->v)));
    return (*(int *)((a4 + 0x3C)));
}

void FUN_0c0e3c38(int a4, int a5)
{
    *(float *)((a4 + 0x0)) = ((((struct o0_float *)0xC7FD05C)->v));
    *(float *)((a5 + 0x0)) = ((((struct o4_float *)0xC7FD05C)->v));
}

int FUN_0c0e4730(int a4, int a5)
{
    FUN_0c0fb0be(a5, 0x0);
    *(unsigned int *)0xC7FD068 = a5;
    return 0x1;
}

int FUN_0c0e4880(int a4, int a5)
{
    kmSetTexOverflowCallback(a5, 0x0);
    *(unsigned int *)0xC7FD094 = a5;
    return 0x1;
}

int kmSetEndOfVertexCallback(int a4, int a5)
{
    FUN_0c0fb042((*(int *)0xC347628), 0x5, a4, a5);
    return 0x0;
}
