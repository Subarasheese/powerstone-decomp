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
int keycfg_obj_in_mask(int);
int opt_page2_obj_in_mask(int);
int hit_world_reset(void);
int FUN_0c025706(void);
int FUN_0c025d10(void);
int FUN_0c025f38(void);
int hit_world_calc_displacement(void);
int hit_dispatch_shape_pair(int, int, int, int);
float FUN_0c02649a(int, int);
int fx_spawn_03c904(int, int);
int FUN_0c048ea4(int, int, int, int);
int fx_spawn_0492a4(int);
int FUN_0c0555c4(void);
int game_reset_objects(void);
int obj_create(int, int, int);
int obj_destroy(int);
int pl_adjust_power_gauge(int);
int item_free_init(int);
int item_free_update(int);
int res_player_entry_release(int);
int res_cockpit_face_release(int);
int res_pl_textures_release(int);
int pl_start_motion_10(int);
int FUN_0c0634f4(int);
int FUN_0c06358e(int);
int FUN_0c063fd2(int);
int FUN_0c064014(int);
int FUN_0c064056(int);
int pl_mode08_09_enter_v0(int);
int pl_mode08_09_enter_v1(int);
int pl_mode08_09_update_v1(int);
int pl_mode15_cls14_f0_phase0(int);
int pl_mode15_cls14_f0_phase1(int);
int pl_mode15_cls14_f0_phase2(int);
int pl_falcon_attack_kind57_phase0(int);
int pl_falcon_attack_kind57_phase1(int);
int pl_ryoma_mode07_phase0(int);
int pl_ryoma_mode07_phase1(int);
int pl_ryoma_mode07_phase2(int);
int pl_gunrock_step_scale_script(int);
int pl_gunrock_start_motion_reset_slots(int, int, int);
int ai_reset_slot(int);
int pl_end_action_reset(int);
int FUN_0c0988c6(int);
int FUN_0c09898c(int);
int sys_return_zero_098c82(void);
int pl_reset_model_parts(int);
int pl_step_motion(int);
int hit_find_wall_entry_by_kind(int, int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int);
int pl_change_state(int, int, int);
int bgm_start_file(int, int);
int bgm_stop_streams(void);
int snd_play_char_voice(int, int);
int FUN_0c0a3cb0(int, int);
int menu_find_cursor_task(void);
int ui_task_create(void);
int FUN_0c0ac900(int, int);
int dbg_print_at(int, float, float);
int testmode_draw_text_table(int, int);
int FUN_0c0d609e(int, int);
int FUN_0c0d6104(int);
int FUN_0c0d71fa(void);
int cam_request_mode(int, int, int);
int cam_force_mode(int, int, int);
int cam_step_keyframe_script(int, int);
int cam_reset_to_default(void);
int nlInvLightVectorUseViewMatrix(void);
int nlobjput_sub(int);
int nlMakeModelViewProjectMatrix_objput(void);
int gfx_set_frame_time_weights(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0dff60(void);
int nlStoreMatrix8(int);
int FUN_0c0e16c0(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAxeSC(int, float, float);
int nlTranslate(float, float, float);
int snd_send_command(int);
int FUN_0c0e6278(int);
int FUN_0c0e62c4(int);
int FUN_0c0e6310(int);
int FUN_0c0e6518(int);
int FUN_0c0e669e(int, int);
int FUN_0c0e67f4(int, int);
int _divlu(void);
int _modlu(int);
int _quick_odd_mvn(int, float, float, float);
int FUN_0c0eb6f4(int);
int FUN_0c0f1766(int);
int gdFsLoadDir(int, int);
int pdGetPeripheral(int);
int FUN_0c0f4202(int, int);
int ADXT_SetOutVol(int, int);
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
int bgm_play_open(void);
int bgm_play_demo_e(void);
int bgm_play_demo_m(void);
int bgm_play_ending_start(void);
int bgm_play_demo_w(void);
int bgm_play_demo_01(void);
int FUN_0c0ac8dc(int a4);
int FUN_0c0d6744(int a4);
void nlLoadMatrix8(int a4);
int FUN_0c0ee6f0(int a4, int a5);
int kmFreeTexture(int a4);
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
int staffroll_create(void);
int FUN_0c01d226(void);
int vec3s_to_vec3f(int a4, int a5);
int FUN_0c020998(int a4, int a5, int a6, int a7);
float FUN_0c02651e(int a4);
int FUN_0c02e00a(int a4);
int FUN_0c059bf8(int a4);
int pl_wait_anim_end(int a4);
int pl_wait_anim_end_b(int a4);
int pl_wait_anim_end_c(int a4);
int pl_mode06_update(int a4);
int pl_wait_anim_end_d(int a4);
int pl_mode14_update(int a4);
int pl_falcon_wait_anim_end(int a4);
int pl_falcon_special2_phase4(int a4);
int pl_mode15_cls14_f0(int a4);
int pl_ryoma_wait_anim_end(int a4);
int pl_ryoma_wait_anim_end_b(int a4);
int pl_wangtang_wait_anim_end(int a4);
int pl_wangtang_wait_anim_end_b(int a4);
int pl_wangtang_wait_anim_end_d(int a4);
int pl_wangtang_wait_anim_end_c(int a4);
int pl_wangtang_wait_anim_end_e(int a4);
int pl_jack_wait_anim_end_b(int a4);
int pl_jack_wait_anim_end(int a4);
int pl_jack_special2_phase4(int a4);
int pl_wangtang_wait_anim_end_f(int a4);
int pl_gunrock_wait_anim_end(int a4);
int pl_garuda_mode04_phase4(int a4);
int pl_ayame_state22_phase1(int a4);
int pl_kraken_mode04_phase4(int a4);
int pl_valgas_mode04_phase4(int a4);
int pl_ryoma_mode07_update(int a4);
int FUN_0c08c7de(int a4);
int obj_wait_motion_end_then_end_move(int a4);
int pl_state35_phase0(int a4);
int pl_state28_sub1_phase3(int a4);
int math_angle_delta16(int a4, int a5);
int pl_start_state28_item(int a4);
int snd_play_se(int a4);
int pl_play_voice_at_frame(int a4, int a5, int a6);
void FUN_0c0a3eec(int a4);
void FUN_0c0a3f0e(int a4);
int FUN_0c0d6630(int a4);
int FUN_0c0d60e2(int a4);
int FUN_0c0d61c0(int a4);
int FUN_0c0d7054(int a4);
int FUN_0c0d7032(int a4, int a5);
int cam_request_mode_06(int a4, int a5);
int cam_request_mode_07(int a4, int a5);
int cam_mode_21(int a4);
int nlObjPutUseViewMatrix(int a4);
int gfx_set_vertex_buffer(int a4, int a5, int a6, int a7);
int dbg_set_cursor_cell(int a4, int a5);
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
int opt_reset_system_settings(void);
void vmu_first_port_from_mask(int a4);
int vmu_check_start_pressed(void);
int keycfg_tick_destroy_if_masked(int a4);
int opt_page2_tick_destroy_if_masked(int a4);
int FUN_0c0259ee(int a4, int a5);
int FUN_0c026200(int a4, int a5);
int hit_world_step(void);
int pl_falcon_state31_phase1(int a4);
int pl_ryoma_cue_table_next(int a4, int a5, int a6, int a7);
int pl_wangtang_state31_phase1(int a4);
int pl_jack_state31_phase1(int a4);
int FUN_0c07743e(int a4);
int pl_garuda_state31_phase1(int a4);
int pl_rouge_state31_phase1(int a4);
int pl_kraken_state31_phase1(int a4);
int pl_valgas_state31_phase1(int a4);
int FUN_0c08c15a(int a4);
int pl_state08_update(int a4);
int FUN_0c097f3c(int a4);
int pl_start_motion(int a4, int a5, int a6);
void FUN_0c0a3f30(int a4);
void FUN_0c0a3fce(int a4);
void FUN_0c0a416c(int a4);
void FUN_0c0a40b0(int a4);
int menu_ui_spawn_09(int a4);
int menu_ui_spawn_26(int a4);
int menu_ui_spawn_27(int a4);
int menu_ui_spawn_29(int a4);
int menu_ui_spawn_21(int a4);
int menu_ui_spawn_30(int a4);
int menu_ui_spawn_31(void);
int FUN_0c0b83dc(int a4, int a5, int a6, int a7);
int item_director_phase0(int a4);
int FUN_0c0d479e(void);
int FUN_0c0d7a7c(void);
int FUN_0c0d7a9c(void);
float math_vec3_accumulate(int a4, int a5);
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
int vmu_check_pad_pressed(int a4);
int opt_page1_pad_pressed(int a4);
int opt_page2_pad_pressed(int a4);
int opt_page_leave_reset(void);
int vmu_menu_pad_pressed(int a4);
int vec3f_to_vec3s(int a4, int a5);
int FUN_0c0555dc(void);
int res_pl_textures_release_all(void);
int math_vec3_add(int a4, int a5, int a6);
int math_vec3_sub(int a4, int a5, int a6);
int FUN_0c06231c(int a4, int a5, int a6);
int mdl_vtx_set_uv(int a4, int a5);
int FUN_0c063570(int a4);
int pl_ryoma_mode01_03_enter_v0(int a4);
int pl_ayame_move05_init(int a4);
int pl_gunrock_mode01_03_enter_v1(int a4);
int pl_ayame_move06_init(int a4);
int pl_ayame_move10_init(int a4);
int pl_update_hitstop_shake(int a4);
int obj_start_motion_2_0(int a4);
int FUN_0c099ac6(int a4);
int pl_set_power_form_on(int a4);
int pl_set_power_form_off(int a4);
int testmode_draw_title_and_footer(int a4);
int cam_force_mode_23(int a4);
int nlSetLightColor(float f4, float f5, float f6);
int math_rand_next(void);
int gfx_set_list_buffers(int a4, int a5, int a6, int a7);
int gdFsFinish(void);
int FUN_0c0f2f60(void);
int FUN_0c0f9c92(int a4);
int FUN_0c0fdda0(int a4, int a5, int a6);
int FUN_0c106636(int a4);
int FUN_0c1066a6(int a4, int a5);
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
int vmu_rewrite_vmgame_data(int a4, int a5);
int FUN_0c01b4d6(int a4);
int FUN_0c049288(void);
int ai_get_linked_obj_if_kind2(int a4);
int FUN_0c05564e(void);
int FUN_0c05566a(void);
int part_alloc0(void);
int part_alloc1(void);
int part_alloc2(void);
int res_player_entries_release_all(void);
int res_cockpit_faces_release_all(void);
int FUN_0c0624c4(int a4, int a5, int a6);
int pl_mode01_03_enter(int a4);
int pl_mode01_03_update(int a4);
int pl_mode08_enter(int a4);
int pl_mode08_update(int a4, int a5, int a6, int a7);
int pl_mode09_enter(int a4, int a5, int a6, int a7);
int pl_mode09_update(int a4, int a5, int a6, int a7);
int pl_mode11_enter(int a4);
int pl_jack_start_motion_5(int a4);
int pl_gunrock_state31_phase1(int a4);
int FUN_0c091eee(int a4, int a5, int a6, int a7);
int FUN_0c0a0030(int a4);
int cam_force_mode_10(int a4, int a5);
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
int item_tick_free(int a4);
void math_vec3i_add(int a4, int a5, int a6);
void math_vec3i_sub(int a4, int a5, int a6);
int pl_falcon_attack_kind57(int a4);
int pl_state28_sub3_update(int a4);
int FUN_0c099a92(int a4);
int FUN_0c099ae4(int a4);
int pl_landed(int a4);
int gfx_set_border_color(int a4);
int FUN_0c0e2120(int a4);
int nl_objasm_draw_obj_vtxcol(void);
int syCfgGetIDAddress(int a4, int a5, int a6);
int FUN_0c0fb3fe(int a4);
int FUN_0c0fdea0(int a4);

/* nlLoadMatrix8(m): XMTRX from the 16 floats at m (8-aligned: moved in pairs, in order); 0: the stack's top */
void nlLoadMatrix8(int a4)
{
    float *m = (float *)(a4 == 0 ? *(int *)0xC7FCCBC : a4);
    float x[16];
    int i;

    for (i = 0; i < 16; i++) {
        x[i] = m[i];
    }
    _builtin_ld_ext((float (*)[4])x);
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

int kmFreeTexture(int a4)
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
    return ((int (*)(int, int, int))FUN_0c0f4202)(a4, 0xC15A7D0, 0x1);
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

float math_vec3_accumulate(int a4, int a5)
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

    t0 = math_cos_angle16(a5);
    t1 = math_sin_angle16(a5);
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
    nlPushMatrix((*(int *)0xC7FCCE0));
    FUN_0c0e16c0();
    nlStoreMatrix8(0xC7FCEA8);
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

    t0 = pdGetPeripheral(a4);
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

int FUN_0c106636(int a4)
{
    *(unsigned char *)((a4 + 0x1)) = 0x2;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = (FUN_0c0f1766((*(int *)((a4 + 0x8)))));
    return 0x1;
}

int FUN_0c1066a6(int a4, int a5)
{
    register int t2;

    if ((int)a5 >= 0) {
        *(unsigned int *)((a4 + 0x30)) = a5;
    } else {
        t2 = (int)((int)((*(int *)((a4 + 0x14))) + 0x7FF) / (int)0x800);
        *(unsigned int *)((a4 + 0x30)) = t2;
    }
    return t2;
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
    return (*(int *)((a4 + 0x3C)));
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

int FUN_0c0e2120(int a4)
{
    return nlTranslate((-(*(float *)((a4 + 0x0)))), (-((((struct o4_float *)(a4))->v))), (-((((struct o8_float *)(a4))->v))));
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
