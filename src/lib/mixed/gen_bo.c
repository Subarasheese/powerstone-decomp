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
int opt_page2_obj_in_mask(int);
int opt_page3_obj_in_mask(int);
int FUN_0c01b4d6(int);
int vmu_menu_init(void);
int FUN_0c01e860(int, int, int, int, int, int, int, int, int, int);
extern int FUN_0c01e970();
int hit_load_cylinder_world_dup(int, int, int);
int hit_find_part_entry(int, int, int, int);
int hit_get_cylinder_entry(int, int, int);
int fs_change_dir_ok(void);
int FUN_0c0283c4(int, int);
int logo_spawn_overlay(float);
int ui_draw_text_stub(int, int, float, float, float, float);
int FUN_0c0408d0(int);
int FUN_0c040938(int);
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int ai_clear_op_state(void);
int game_reset_match_screen(void);
int FUN_0c052b9e(void);
int FUN_0c0537fe(int);
int FUN_0c053b62(void);
int FUN_0c0555dc(void);
int game_reset_objects(void);
int obj_destroy(int);
int FUN_0c0593e0(int);
int obj_tick_class(int);
extern float math_vec3_length();
float math_mat_row0_length(int, float);
float math_mat_row1_length(int);
float math_mat_row2_length(int, float);
int FUN_0c06231c(int, int, int);
int FUN_0c06b5b2(int);
int pl_wangtang_attack_kind68(int, int, int, int);
int pl_wangtang_attack_kind13(int, int, int, int, float, float, float);
int pl_wangtang_attack_kind57(int);
int pl_wangtang_attack_kind24(int);
int FUN_0c0852a6(int, int);
int FUN_0c085606(int);
int pl_kraken_special_id3_phase0(int);
int pl_kraken_special_id3_phase1(int);
int pl_kraken_special_id3_phase2(int);
int pl_kraken_special_id3_phase4(int);
int ai_run_reaction_script(int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_hitreact_00_phase0(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int pl_tick_hitstop(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_gravity(int);
int pl_apply_motion_translation(int);
int pl_angle_to_opponent(int);
int pl_landed(int);
int FUN_0c09e89a(int, int, int);
int pl_end_action_choose_state(int);
int pl_change_state(int, int, int);
int obj_set_mode_owner(int, int, int);
int FUN_0c0addb0(int);
int FUN_0c0addde(int);
int stage_type02_mode_05_held(int);
int stage_type02_mode_18_held(int);
int stage_type02_mode_03(void);
int fx_spawn_25(int, int);
int cam_request_mode_with_args(int, int, int, int);
int cam_set_shake_ramp(int, int);
int nl_texture_surface_words(int);
float math_sin_angle16(int);
float math_tan_angle16(int);
int FUN_0c0e34a0(float);
int FUN_0c0eb0c0(int, int, int);
int FUN_0c0f4938(int, int);
int ADXT_Stop(int, int, int, int);
int ADXF_Close(int);
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
float math_vec3_cos_between(int a4, int a5, float f4);
int pl_mode08_09_phase2_fall(int a4);
int pl_kraken_attack_kind6_phase4(int a4);
int ADXT_StartMem(int a4, int a5, int a6, int a7);
int FUN_0c01acfc(int a4);
int ai_op74_get_own_move(int a4);
int ai_op15(int a4);
int ai_op82(int a4);
int pl_mode15_cls14_f1_phase0(int a4);
int pl_wangtang_attack_state_update(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c06f818(int a4);
int pl_kraken_attack_kind6_phase5(int a4);
int pl_kraken_special_id3_phase3(int a4);
int stage_type02_update(int a4, int a5, int a6, int a7);
int FUN_0c0d7e88(int a4, int a5, int a6, int a7);
int FUN_0c0d7cd8(int a4, int a5, int a6, int a7);
int adxf_SetAfsFileInfo(int a4, int a5, int a6);
int FUN_0c11550a(int a4, int a5);
int pl_falcon_state12_phase0(int a4);
int pl_mode15_cls15_f1_phase2(int a4);
int pl_hitreact_23_phase1(int a4);
int pl_state_land_update(int a4, int a5, int a6);
int pl_state_fall_update(int a4);
int FUN_0c01ac0e(int a4);
int FUN_0c01b206(int a4);
int ai_op79_clear_var18(void);
int game_mode_handler_0(int a4, int a5, int a6, int a7);
int pl_mode08_09_phase5_fall(int a4);
int pl_mode10_phase3(int a4);
float math_cot_angle16(int a4);
float nlMultiMatrixRevOrder(int a4);
int FUN_0c0f4e5c(int a4, int a5, int a6, int a7);
int FUN_0c10860c(int a4, int a5, int a6, int a7);
int game_update_max_combo(void);
int FUN_0c06f4f0(int a4);
int pl_kraken_attack_kind6_phase2(int a4);
int pl_state11_update(int a4, int a5, int a6, int a7);
int FUN_0c0ddc30(void);
void kmiDefaultFatalErrorCallback(int a4);
int ADXT_StartSj(int a4, int a5, int a6, int a7);
int ADXF_OpenAfs(int a4, int a5);
int FUN_0c108252(int a4, int a5, int a6, int a7);
int FUN_0c01b82e(int a4);
int pl_state40_phase0(int a4);
int stage_gimmick_18_update(int a4, int a5, int a6, int a7);
int stage_type01_mode_03(int a4);
void syHwFinish(void);
int vmsfs_dpf(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c0283f0(int a4);
int FUN_0c07c3ea(int a4, int a5, int a6, int a7);
int pl_rouge_special_id7(int a4);
int pl_hitreact_00_phase3(int a4);
int ai_slot_state2_update(int a4, int a5, int a6, int a7);
int pl_kraken_special_id3(int a4, int a5, int a6, int a7);
int kmSetAlphaThreshold(int a4);
int kdDevGetTimerInfo(int a4, int a5);
int FUN_0c10624c(int a4);
int fs_change_dir_up(void);
int FUN_0c02cb8e(int a4, float f4);
int FUN_0c0634b4(int a4);
int FUN_0c089fca(int a4);
int pl_hitreact_00_update(int a4, int a5, int a6, int a7);
int math_floor_float(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0f9cc8(int a4, int a5, int a6);
int FUN_0c108816(int a4, int a5, int a6, int a7);
int FUN_0c114da6(void);
int game_mode_handler_3(void);
int FUN_0c06469e(int a4);
int pl_wangtang_start_motion_27_fx(int a4);
int pl_gunrock_mode11_phase1(int a4);
int pl_kraken_special_id0(int a4, int a5, int a6, int a7);
int fx25_spawn_burst10(int a4);
int nlCalcPoints(int a4, int a5, int a6);
int nlCalcVectors(int a4, int a5, int a6);
int FUN_0c101cae(int a4);
int FUN_0c01a8c8(int a4);
int FUN_0c0234f0(int a4, int a5);
int fx_tick_040550(int a4);
int game_mode_handler_5(void);
int pl_garuda_victim_phase6(int a4);
int pl_garuda_victim_phase8(int a4);
int FUN_0c0dab5e(int a4, int a5, int a6);
int FUN_0c0eadd0(int a4, int a5);
void gdFsEntryErrFuncAllG(int a4, int a5);
int FUN_0c0f27c4(int a4);
int gdFsIsTrayOpenG(int a4, int a5, int a6, int a7);
int pl_ryoma_attack_kind3_phase0(int a4);
int FUN_0c06f52e(int a4);
int pl_gunrock_special2_dispatch(int a4, int a5, int a6, int a7);
int pl_kraken_attack_kind5(int a4, int a5, int a6, int a7);
int FUN_0c089b1a(int a4, int a5, int a6, int a7);
int pl_hitreact_20_update(int a4, int a5, int a6, int a7);
int attract_draw_text_item(int a4);
int FUN_0c114a6c(void);
int FUN_0c115c2e(void);
int game_mode_handler_1(int a4, int a5, int a6, int a7);
int pl_hitreact_15_update(int a4, int a5, int a6, int a7);

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

int ADXT_StartMem(int a4, int a5, int a6, int a7)
{
    register int t2;

    ADXT_Stop(a4, a5, a6, a7);
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

int ADXT_StartSj(int a4, int a5, int a6, int a7)
{
    ADXT_Stop(a4, a5, a6, a7);
    ADXCRS_Lock();
    FUN_0c105e8e((*(int *)((a4 + 0x4))), a5);
    *(unsigned int *)((a4 + 0x14)) = a5;
    ADXSJD_Start((*(int *)((a4 + 0x4))));
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned char *)((a4 + 0x2)) = 0x3;
    (((struct o4C_uint *)(a4))->v) = 0x0;
    return ADXCRS_Unlock();
}

int ADXF_OpenAfs(int a4, int a5)
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
            ADXF_Close(t1);
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

