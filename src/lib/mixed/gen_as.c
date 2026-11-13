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
int conv_s16x5_to_f32(int, int);
int hit_debug_draw_object_parts(int);
int FUN_0c0240e8(int, int, int);
int FUN_0c024446(int);
int FUN_0c025d72(int, int);
int ui_draw_sprite_string(int, int, float, float, float, float, float);
int FUN_0c0301d2(int, int, int, int);
int fx_spawn_039c78(int, int, int, int);
int fx_spawn_049b7c(void);
int fx_spawn_hit_effect_set(int, int);
int FUN_0c055566(int);
int pl_reset_pair(void);
int obj_system_init(void);
int obj_destroy(int);
int obj_tick_class(int, int, int, int);
int pl_adjust_power_gauge(int);
int FUN_0c05f4cc(int, ...);
int res_load_file_unpack(int);
int res_model_release(int);
int res_textures_release(int);
int res_model_register(int);
int res_pl_textures_release(int);
int res_pl_textures_release_all(void);
int sys_load_file(int, int);
float math_mat_row_length(int, int, float);
int FUN_0c0623a6(int, int, int);
int FUN_0c0624c4(int, int, int);
int FUN_0c062d78(void);
int FUN_0c07743e(int);
int pl_gunrock_play_motion_sounds(int);
int FUN_0c08a846(int);
int pl_end_action_reset(int);
int pl_for_each_part_slot(int, int, int, int);
int pl_start_motion(int, int, int);
int pl_step_motion_impl(int, int);
int vib_stop_all(void);
int pl_apply_motion_translation(int);
int pl_angle_to_opponent(int);
int pl_end_action_choose_state(int);
int snd_play_se(int);
int bgm_start_file(int, int);
int bgm_stop_streams(void);
int bgm_duck(void);
int bgm_unduck(void);
int ui_task_create(void);
int menu_ui_spawn_10(int);
int FUN_0c0cdac0(void);
int testmode_check_exit_combo(void);
int testmode_draw_text_table(int, int);
int FUN_0c0d45fe(void);
extern int ui_draw_win_count();
int dbg_print_entry_flag_bits(int);
int FUN_0c0d7a7c(void);
int FUN_0c0d7a9c(void);
int cam_compute_follow(int, int);
int cam_step_keyframe_script(int, int);
int nl_model_bind_textures(int, int);
int gfx_set_background_color(int, int, int, float);
int gfx_init_display_mode(int, int, int);
int math_rand_next(void);
float math_sin_angle16(int);
float math_sin_float(float);
int nlMultiMatrix8(int);
int nlPopMatrix(int);
int nlPushMatrix(void);
int sys_set_interrupt_handler(int, int, int);
int snd_send_port_command(int, int, int);
int snd_send_command(int);
int FUN_0c0e6758(int, int);
int FUN_0c0e6834(int, int, int);
int _quick_odd_mvn(int);
int nl_objasm_draw_obj(int, int, float);
int FUN_0c0eb238(void);
int FUN_0c0eeecc(int, int);
int gdFsChangeDir(void);
int gdFsSeek(int, int, int);
int gdFsInitOvl(void);
int FUN_0c0f2f7e(void);
int vib_port_has_vibration(int);
int ADXT_SetOutVol(int, int);
int kmFlipFrameBuffer(void);
int FUN_0c0f61c0(void);
int FUN_0c0f9bb2(void);
int kmSetFogTable(int);
int FUN_0c0fddbe(int, int, int);
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
int pl_mode08_09_enter_v0(int a4);
int bgm_play_here(void);
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
int vmu_load_vmgame_data(int a4);
int vmu_check_run_objects(int a4, int a5, int a6, int a7);
int ending_obj_set_sprite(int a4, int a5);
int opt_page3_init(void);
float FUN_0c0262f8(int a4);
int FUN_0c02440e(int a4);
int FUN_0c025f38(void);
int ui_enable_hud(void);
int FUN_0c0302fe(int a4, int a5, int a6, int a7);
int FUN_0c0555c4(void);
int obj_pool_pop(void);
int FUN_0c05f56e(Stk4 s);
int res_load_file_raw(int a4);
int res_load_file_raw_b(int a4);
int res_load_file_raw_c(int a4);
int res_load_file_raw_d(int a4);
int math_vec3_mul_xyz(int a4, float f4, float f5, float f6);
int FUN_0c061472(float f4);
int math_mat_get_translate(int a4, int a5);
int FUN_0c08d644(int a4, int a5);
int pl_reset_combo_counter(int a4);
int menu_ui_spawn_11(void);
int menu_ui_spawn_28(void);
int obj_touched_by_slot(int a4, int a5);
void FUN_0c0d5292(void);
float math_signed_sqrt(float f4);
float math_cos_angle16(int a4);
int gfx_flip_frame_buffer(void);
void nlCalcPoint44(int a4, int a5);
void nlCalcPoint(int a4, int a5);
void nlCalcVector(int a4, int a5);
float FUN_0c0e2220(int a4, int a5);
int FUN_0c0f1c44(int a4);
int FUN_0c0f1fa4(void);
int FUN_0c0f202c(void);
int FUN_0c0f2044(void);
int ADXT_Finish(int a4, int a5, int a6, int a7);
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
int vmsfb_create(int a4, int a5, int a6);
int keycfg_obj_in_mask(int a4);
int keycfg_run_objects_in_mask(int a4, int a5, int a6, int a7);
int opt_page1_obj_in_mask(int a4);
int opt_page1_run_objects_in_mask(int a4, int a5, int a6, int a7);
int opt_page2_obj_in_mask(int a4);
int opt_page3_run_objects_in_mask(int a4, int a5, int a6, int a7);
int opt_page3_obj_in_mask(int a4);
int opt_page2_run_objects_in_mask(int a4, int a5, int a6, int a7);
int omake_state_reset(void);
int FUN_0c01d304(int a4);
int FUN_0c02078c(void);
int res_player_entry_release(int a4);
int mdl_vtx_get_uv(int a4, int a5);
int pl_mode14_enter(int a4);
int pl_gunrock_frame_hook(int a4);
int fx31_pick_mode2_from_owner(int a4);
int FUN_0c0d3350(void);
int FUN_0c0d7076(void);
int FUN_0c0d7e5e(void);
int math_rsqrt_float(float f4);
float math_rand_float(void);
float math_cos_float(float f4);
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
int ui_sprite_queue_reset(void);
int FUN_0c02aa9c(int a4);
int FUN_0c02b7d4(int a4);
int FUN_0c02c91a(int a4);
int fs_change_dir_ok(void);
int FUN_0c05fc08(void);
int res_cockpit_face_release(int a4);
int res_stage_release(void);
int res_ending_release(void);
int mdl_vtx_get_pos(int a4);
int FUN_0c062436(int a4, int a5, int a6);
int pl_no_ground(int a4);
int bgm_play_demo_00(void);
int bgm_play_player_select(void);
int bgm_play_stage_select(void);
int bgm_play_continue(void);
int bgm_play_game_over(void);
int bgm_play_win(void);
int bgm_play_hen_00(void);
int bgm_play_hen_01(void);
int FUN_0c0a3ea8(int a4);
int menu_find_cursor_task(void);
int FUN_0c0a502e(void);
int menu_ui_spawn_08(void);
int FUN_0c0d2a70(int a4);
int game_play_state_05(void);
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
int game_reset_objects(void);
int FUN_0c05fbee(int a4);
int res_player_release(int a4);
int res_csel_release_all(void);
int FUN_0c06b868(int a4, int a5);
int pl_garuda_victim_phase0(int a4);
int FUN_0c08e382(int a4);
int FUN_0c0989fc(int a4);
int FUN_0c0989ea(int a4, int a5, int a6, int a7);
int pl_step_motion_owner(int a4);
int pl_button_jump_pressed(int a4);
int FUN_0c0cfeb0(void);
int FUN_0c0d48ea(int a4);
int cam_set_priority(int a4, int a5);
int cam_mode_02(int a4);
int cam_mode_05(int a4);
int cam_mode_07(int a4);
int cam_mode_18(int a4);
int cam_mode_04(int a4);
int cam_mode_23(int a4);
int FUN_0c0df080(int a4, int a5, int a6, int a7);
int FUN_0c0eb5a4(void);
int syCfgInit(int a4);
int kdGetDevice(int a4);
int FUN_0c101502(void);
int ADXSTM_Init(void);
void FUN_0c10b434(int a4, int a5);
int mpdrv_get_deviceinfo(int a4);
int vmu_defrag_disk(int a4);
int vmu_check_mode_04(int a4, int a5, int a6, int a7);
int FUN_0c02466e(int a4);
int res_option_load(void);
int FUN_0c098ac8(int a4, int a5, int a6, int a7);
int obj_node_scale_one(int a4);
int pl_apply_gravity(int a4);
int FUN_0c0a2f66(int a4);
int stage_spawn_gimmick_by_kind(int a4, int a5, int a6, int a7);
int testmode_color_test_screen(void);
int nlSysMetricsScaleTime(int a4);
void nlGetTranslate(int a4);
void nlSetTranslate(int a4);
void nlTranslate(float f4, float f5, float f6);
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
int FUN_0c01d31a(void);
int FUN_0c01d328(void);
void FUN_0c01f48c(int a4, int a5);
int FUN_0c0555b6(void);
int res_eyecatch_load(void);
int res_cockpit_load(void);
int res_font_release(void);
int res_demo_comn_release(void);
int res_omake_release(void);
int res_capcom_logo_release(void);
int res_kyoutsuu_release(void);
int pl_timer_arm_forever(int a4);
int FUN_0c0ae276(int a4);
int FUN_0c0b146e(int a4, int a5);
int FUN_0c0c9982(int a4);
int FUN_0c0d5188(void);
int FUN_0c0d54ac(void);
int FUN_0c0d48d6(void);
int menu_option_run_item(void);
void FUN_0c0dcac0(int a4, int a5);
int syRtcFinish(void);
int FUN_0c0ee1fc(int a4);
int FUN_0c0ee288(int a4);
int FUN_0c0ee6dc(int a4, int a5);
int ADXF_GetFsizeByte(int a4);
int ADXF_GetFsizeSct(int a4);
int ADXF_GetNumReadSct(int a4);
int ADXF_GetStat(int a4);
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
float math_mat_row1_length(int a4, float f4);
float math_mat_row0_length(int a4, float f4);
float math_mat_row2_length(int a4, float f4);
int FUN_0c08b8b8(int a4);
int FUN_0c08bb46(int a4);
int FUN_0c098136(int a4);
int FUN_0c0d44c4(void);
int ui_draw_win_counts_both(int a4, int a5, int a6, int a7);
int FUN_0c0d5ba8(void);
void FUN_0c0dd310(void);
void sys_set_exception_area(int a4);
int FUN_0c0eb5c8(int a4, int a5);
int FUN_0c0eb5b6(void);
int FUN_0c0eb604(int a4, int a5);
int FUN_0c0eb618(int a4, int a5);
int FUN_0c0eb5f0(int a4, int a5);
int FUN_0c0eb5dc(int a4, int a5);
int FUN_0c0eb640(int a4, int a5);
int FUN_0c0eb654(int a4, int a5);
int gdFsCreateDirhn(int a4, int a5);
int pdGetPeripheral(int a4);
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
int opt_game_settings_init(void);
int opt_page1_init(void);
int opt_page2_init(void);
int opt_page4_init(void);
int vmu_menu_reset(void);
int vmu_menu_init(void);
int FUN_0c027c74(void);
int ui_fade_init(void);
int FUN_0c058f44(void);
int item_clear_state(void);
int FUN_0c061444(int a4);
int pl_clear_tint_flag(int a4);
int pl_step_motion(int a4);
int FUN_0c0a2f5c(void);
int bgm_stop_all(void);
int attract_take_step3_flag(void);
void nlObjPutSetGlobalAmbience(float f4);
int FUN_0c0e0580(void);
void dbg_set_cell_size(int a4, int a5);
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
int vmu_event_callback(void);
void keycfg_menu_init(void);
void FUN_0c02828e(void);
int ui_disable_hud(void);
void FUN_0c02d834(void);
int FUN_0c02d83c(void);
void ui_fade_reset(void);
void FUN_0c05fc00(void);
void FUN_0c05fc1c(void);
int sys_vsync_handler_install(int a4, int a5, int a6);
int sys_vsync_handler_remove(int a4, int a5, int a6);
int pl_start_motion_10(int a4);
int FUN_0c0645ee(int a4);
int pl_mode12_enter(int a4);
int FUN_0c099a1c(int a4);
int pl_timer_disable(int a4);
int snd_play_se_raw(int a4);
void FUN_0c0d487e(void);
int cam_mode_default(int a4);
int cam_mode_28(int a4);
int FUN_0c0df100(void);
int gfx_set_fog_density(int a4);
int FUN_0c0e4980(int a4, int a5);
int sys_exit_to_bios(int a4, int a5, int a6, int a7);
int ADXT_ClearErrCode(int a4);
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
int ui_hud_enabled(void);
int thunk_FUN_0c059330(int a4);
int res_eyecatch_release(void);
int res_item_release(void);
int res_cockpit_release(void);
int res_test_tex_release(void);
int res_pstone_logo_release(void);
int res_csel_open_release(void);
int res_csel_csel_release(void);
int res_csel_ksel_release(void);
int res_csel_ssel_release(void);
int res_art_model_release(void);
int res_option_release(void);
int res_system_font_release(void);
int res_art_art_release(void);
int res_key_cfg_release(void);
int res_vms_check_release(void);
int FUN_0c08d65c(int a4, int a5);
int FUN_0c098b96(void);
int thunk_FUN_0c05fff4(void);
int bgm_play_vs(void);
int bgm_play_capcom(void);
int FUN_0c0a375c(void);
void attract_set_step3_flag(int a4);
int thunk_FUN_0c0a3180(void);
int FUN_0c0d6098(int a4);
void FUN_0c0d71f4(int a4);
int cam_mode_13(int a4);
int cam_mode_14(int a4);
int cam_mode_08_09(int a4);
int cam_mode_26(int a4);
void FUN_0c0dd9e0(int a4);
void gfx_set_buffer_size(int a4);
int nlSysMetricsReadTimer(void);
int nlSysMetricsDiffTime(int a4, int a5);
void dbg_set_text_color(int a4);
int thunk_FUN_0c0fbcf0(int a4);
void FUN_0c0e34a0(float f4);
void syRtcSetServerMode(int a4);
int gdFsInit(void);
int buSetCompleteCallback(int a4);
void buSetPrintFunc(int a4);
int syCfgConvLang(int a4);
int pdVibMxIsReady(int a4);
int ADXT_GetOutVol(int a4);
int ADXT_GetErrCode(int a4);
int ADXT_SetLpFlg(int a4, int a5);
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
int ui_draw_text_stub(int a4, int a5, float f4, float f5, float f6, float f7);
void FUN_0c03082e(void);
int FUN_0c048ea0(int a4, int a5, int a6, int a7);
void ai_nop(void);
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
int sys_return_zero_098c82(void);
void sys_nop_099a84(void);
void sys_nop_09b700(void);
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
void cam_nop(void);
int FUN_0c0e48a0(void);
void FUN_0c0eacf0(void);
void FUN_0c0f283e(void);
int ADXT_GetStat(int a4);
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
int nl_objasm_draw_obj_opaque(int a4, int a5);

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

int ADXT_Finish(int a4, int a5, int a6, int a7)
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

int vmsfb_create(int a4, int a5, int a6)
{
    return FUN_0c11533a((*(int *)0xC843928), a4, a5, a6);
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

void nlSetTranslate(int a4)
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

void nlTranslate(float f4, float f5, float f6)
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

int ADXF_GetFsizeByte(int a4)
{
    if (a4 == 0) {
        return 0xFFFFFFFD;
    }
    return (*(int *)((a4 + 0x14)));
}

int ADXF_GetFsizeSct(int a4)
{
    if (a4 == 0) {
        return 0xFFFFFFFD;
    }
    return (*(int *)((a4 + 0x10)));
}

int ADXF_GetNumReadSct(int a4)
{
    if (a4 == 0) {
        return 0xFFFFFFFD;
    }
    return (*(int *)((a4 + 0x24)));
}

int ADXF_GetStat(int a4)
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

void sys_set_exception_area(int a4)
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

int pdGetPeripheral(int a4)
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

int gfx_set_fog_density(int a4)
{
    return kmSetFogDensity(a4);
}

int FUN_0c0e4980(int a4, int a5)
{
    *(unsigned int *)((a5 + 0x0)) = 0x0;
    return 0x0;
}

int sys_exit_to_bios(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)0x8C0000E0;
    return ((int (*)(int, int, int, int))(t0))(0x1, a5, a6, a7);
}

int ADXT_ClearErrCode(int a4)
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

int buSetCompleteCallback(int a4)
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
    return vib_port_has_vibration(a4);
}

int ADXT_GetOutVol(int a4)
{
    return ((((struct o40_short *)(a4))->v));
}

int ADXT_GetErrCode(int a4)
{
    return ((((struct o60_short *)(a4))->v));
}

int ADXT_SetLpFlg(int a4, int a5)
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

int FUN_0c0e48a0(void)
{
    return 0x0;
}

void FUN_0c0f283e(void)
{
    
}

int ADXT_GetStat(int a4)
{
    return (*(signed char *)((a4 + 0x1)));
}

void FUN_0c0f619a(void)
{
    
}

int gdFsStrcmp(int a4, int a5)
{
    register int t1;
    register int t2;
    register int t8;
    register int t0;

    t1 = a4;
    t2 = a5;
    for (;;) {
        if ((*(signed char *)((t1 + 0x0))) == 0) {
            break;
        }
        t0 = (*(signed char *)((t2 + 0x0)));
        t2 = (t2 + 0x1);
        t8 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        if (t8 == t0) continue;
        return 0x0;
    }
    if ((*(signed char *)((t2 + 0x0))) != 0) {
        return 0x0;
    }
    return 0x1;
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

