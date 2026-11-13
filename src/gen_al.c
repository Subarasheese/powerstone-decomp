/* Straight-line functions with calls and guards (batch gen_al): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o14_short { char p[0x14]; short v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o204_int { char p[0x204]; int v; };
struct o208_int { char p[0x208]; int v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o2690_int { char p[0x2690]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2F0_int { char p[0x2F0]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_short { char p[0x3C]; short v; };
struct o3E_short { char p[0x3E]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o50_float { char p[0x50]; float v; };
struct o50_short { char p[0x50]; short v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o721C_uchar { char p[0x721C]; unsigned char v; };
struct o721E_uchar { char p[0x721E]; unsigned char v; };
struct o7237_uchar { char p[0x7237]; unsigned char v; };
struct o74_int { char p[0x74]; int v; };
struct o78_int { char p[0x78]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oFCC_int { char p[0xFCC]; int v; };
struct oFCC_uint { char p[0xFCC]; unsigned int v; };
struct oFD8_int { char p[0xFD8]; int v; };
struct oFD8_uint { char p[0xFD8]; unsigned int v; };
struct oFDC_int { char p[0xFDC]; int v; };
struct oFDC_uint { char p[0xFDC]; unsigned int v; };
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_Init(void);
int ADXF_Init(void);
int ADXSJD_ExecHndl(int);
int ADXSJD_Init(void);
int ADXSTM_Init(void);
int FUN_0c01e4ea(int);
int vmu_menu_spawn_message(int);
int FUN_0c01f9a0(void);
int vmu_menu_update_objs(int, int, int, int);
int vmu_menu_poll_confirm_cancel(int);
int FUN_0c02cc18(float);
int mdl_setup_part_matrices(int);
int FUN_0c02cf18(void);
int FUN_0c02d1cc(int);
int ui_fade_reset(void);
int fx_spawn_03b86c(int);
int fx_spawn_spark_rings(int, int, float, float);
int fx_spawn_with_params(int, float, float, float, float);
int FUN_0c0555c4(void);
int fx_spawn_058460(void);
int obj_release(int);
int obj_create(int, int, int);
int res_load_pl_effect(int, int);
int res_load_pl_models(int);
int FUN_0c06143c(int, int, int);
int math_vec3_sub(int, int, int);
int FUN_0c06231c(int, int, int);
int res_load_pl_motion_data(int, int);
int FUN_0c062cf4(int, int);
int FUN_0c0638a0(int);
int FUN_0c0638fe(int);
int FUN_0c063a12(int);
int FUN_0c063b38(int);
int FUN_0c063bb8(int);
int pl_wait_anim_end(int);
int pl_falcon_attack_kind68_phase0(int);
int pl_ryoma_mode01_03_enter_v0(int);
int pl_timer_disable(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int math_angle3_delta(int, int, int);
int pl_get_held_item_class(int, int, int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_landed(int);
int pl_start_fall_motion(int);
int snd_play_se(int);
int bgm_stop_streams(void);
int bgm_play_game_over(void);
int snd_play_side_se(int, int);
int snd_play_stage_obj_se(int, int, int);
int FUN_0c0a3f30(int);
int fx_spawn_debris_sprites(int, int);
int FUN_0c0d54ac(void);
int cam_force_mode(int, int, int);
int cam_step_keyframe_script(int, int);
int FUN_0c0df100(void);
int math_signed_sqrt(float);
int FUN_0c0e0ae0(int);
int nlUnitMatrix(void);
float FUN_0c0e2340(int);
int FUN_0c0e365c(int, int, int);
int FUN_0c0e3a0c(int, int, int);
int syRtcFinish(void);
int FUN_0c0e67a2(int, int, int);
int FUN_0c0e6bc4(int, int, int);
int FUN_0c0e6c78(int, int, int);
int FUN_0c0e6d00(void);
int FUN_0c0e6e5c(int);
int FUN_0c0e6fe8(int);
int FUN_0c0eb6f4(void);
int FUN_0c0eedf0(int, int);
int FUN_0c0eee64(int, int, int, int, float, float, float, float, float, float, float, float);
int gdFsReopenHn(int, int, int, int);
int gdFsRead(int, int, int);
int FUN_0c0f1c72(int);
int gdFsFinish(void);
int FUN_0c0f2664(void);
int FUN_0c0f283e(void);
int syCfgExit(void);
int FUN_0c0f4104(void);
int FUN_0c0f4686(void);
int FUN_0c0f4938(int, int);
int FUN_0c0f4a06(int);
int FUN_0c0f4db4(int, int);
int FUN_0c0f5428(int, int);
int FUN_0c0f5570(int);
int kmSetFogTableColor(int, ...);
int FUN_0c0fcfa0(int);
int FUN_0c0fcff0(int);
int FUN_0c0fd04e(int);
int FUN_0c0fd0dc(int);
int gdFsToUpper(int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdDevGetVibrationInfo(int, int);
int kdSetHandler(int, int);
int FUN_0c1048e6(int, int, int, int);
int FUN_0c1059ac(int, int, int);
int FUN_0c105b10(void);
int FUN_0c106636(int);
int FUN_0c1066a6(int, int);
int FUN_0c1068b6(int, int, int);
int FUN_0c1070a0(int);
int FUN_0c1070b8(int);
int FUN_0c1070ce(void);
int FUN_0c107cec(int, int, int, int, int, int, int);
int FUN_0c1084a8(void);
int FUN_0c108768(void);
int FUN_0c1099e0(void);
int FUN_0c109fae(int, int, int, int, int, int);
int FUN_0c10ac40(int, int);
int FUN_0c10acec(int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_set_bwrite_ns(int, ...);
int FUN_0c114ab8(int, int);
int FUN_0c114aec(void);
int FUN_0c115416(int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_set_imask(int);
extern void _builtin_st_ext(float (*)[4]);
extern int _builtin_tas(char *);
int adxf_CreateAdxFs(void);
int adxf_ExecOne(int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, int, int, int);
int thunk_FUN_0c0f2f7e(void);
int ADXRNA_Init(void);
int fx_spawn_0581b4(void);
int ai_dist_to_opponent(int a4);
int pl_state_fall_init(int a4);
int FUN_0c0a3cd6(int a4);
int FUN_0c0b36bc(int a4);
int ADXF_ExecServer(void);
int FUN_0c107df0(void);
int FUN_0c109c8e(void);
int fmMngWrite(int a4, int a5);
int vmsio_isready(int a4);
int fx_spawn_04b1f0(int a4);
int FUN_0c0593e0(int a4);
int res_player_load(int a4);
int math_angle3_delta_scaled(int a4, int a5, int a6, float f4);
int pl_try_start_basic_attack(int a4, int a5, int a6);
int FUN_0c0de960(int a4, int a5, int a6, int a7);
int FUN_0c0e6278(int a4);
int FUN_0c0e62c4(int a4);
int FUN_0c0f2292(int a4);
int gdFsReadWG(int a4, int a5, int a6);
int FUN_0c0f4968(int a4);
int FUN_0c0f4644(void);
int FUN_0c0fcf46(int a4);
int search_exec_file(int a4, int a5);
int FUN_0c108290(int a4, int a5, int a6, int a7);
int FUN_0c10a8a0(int a4, int a5);
int FUN_0c109584(int a4, int a5);
int FUN_0c115464(int a4, int a5, int a6, int a7);
int FUN_0c11556a(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c01f350(int a4, int a5, int a6, int a7);
int FUN_0c01f0a8(int a4, int a5, int a6, int a7);
int sys_shutdown_all(int a4, int a5, int a6);
int pl_ryoma_mode01_03_enter(int a4, int a5, int a6, int a7);
int pl_gunrock_mode04_enter(int a4);
int pl_garuda_mode04_enter(int a4);
int pl_valgas_mode04_enter(int a4);
int ai_reset_slot(int a4);
int FUN_0c09c782(int a4);
void bgm_start_file(int a4, int a5);
int menu_ui_spawn_02(void);
int menu_ui_spawn_01(void);
int menu_ui_spawn_03(void);
int menu_ui_spawn_04(void);
int menu_ui_spawn_05(void);
int menu_ui_spawn_06(void);
int menu_ui_spawn_07(void);
int menu_ui_spawn_12(void);
int menu_ui_spawn_15(void);
int menu_ui_spawn_17(void);
int menu_ui_spawn_20(void);
int menu_ui_spawn_22(void);
int menu_ui_spawn_24(void);
int menu_ui_spawn_37(void);
int menu_ui_spawn_18(void);
int item_director_phase3(int a4, int a5);
int dbgmotion_set_start_positions(int a4);
int game_play_start_game_over(void);
float FUN_0c0e22e0(int a4, int a5, float f4);
int syRtcMakeDayOfWeek(int a4, int a5);
int FUN_0c0e5d22(int a4);
void FUN_0c0e6620(int a4);
void FUN_0c0f2f24(void);
int FUN_0c0f42ec(int a4, int a5);
int FUN_0c101b1c(int a4);
int FUN_0c1070d2(void);
int FUN_0c109cce(void);
int FUN_0c110320(int a4);
int fmMngRead(int a4, int a5);
int FUN_0c114f90(int a4, int a5, int a6);
int FUN_0c1150cc(int a4, int a5, int a6, int a7);
int pad_get_start_mask(void);
int FUN_0c01e5cc(void);
int FUN_0c01efd0(int a4, int a5, int a6, int a7);
int FUN_0c01f164(int a4, int a5, int a6, int a7);
int vmu_menu_step_notice_wait_ok(int a4, int a5, int a6, int a7);
int conv_s16x5_to_f32(int a4, int a5);
int FUN_0c02c38a(int a4);
int FUN_0c054114(void);
int FUN_0c05e564(int a4);
int pl_mode04_update(int a4);
int pl_falcon_attack_kind68(int a4, int a5, int a6, int a7);
int pl_jack_mode04_phase2(int a4);
int FUN_0c098c48(int a4);
int FUN_0c0ace1c(int a4, int a5);
int FUN_0c0cf8de(int a4, int a5);
int FUN_0c0d3366(void);
int FUN_0c0d6212(int a4, int a5);
int FUN_0c0d7a0a(void);
int cam_mode_03(int a4);
int cam_mode_25(int a4);
int nlInitMatrixStack(int a4, int a5, int a6);
int FUN_0c0e07c0(int a4);
int FUN_0c0e3900(int a4, int a5);
int FUN_0c0e3bb2(int a4, int a5, int a6, int a7);
int FUN_0c0e5178(int a4, int a5, int a6);
int FUN_0c0e50ec(int a4, int a5, int a6);
int FUN_0c0e67f4(int a4, int a5);
int FUN_0c0ef158(float f4, float f5);
int FUN_0c0f53ae(void);
int FUN_0c0f547e(int a4);
int FUN_0c0fde38(int a4, int a5, int a6, int a7);
int FUN_0c0fe8c0(int a4, int a5, int a6, int a7);
int gdFsStrcmpi(int a4, int a5);
int vmsfs_isready(void);
int ADXSJD_ExecServer(void);
int FUN_0c1123f2(int a4);
int mpdrv_set_bwrite(Stk4 s);
int obj_child_color_a_step(int a4);
int obj_child_color_b_step(int a4);
int FUN_0c01e594(void);
int FUN_0c02760a(int a4, int a5);
int FUN_0c03027e(int a4);
int FUN_0c02d420(float f4);
int FUN_0c03b9f0(int a4, int a5);
int obj_release_class(int a4);
int math_vec3_length(int a4);
int pl_state26_phase0(int a4);
int FUN_0c09fdf6(int a4);
int FUN_0c0c339a(int a4, float f4);
int fx31_pick_mode1_from_owner(int a4);
int testmode_check_exit_combo(void);
int FUN_0c0d7a44(int a4);
int cam_request_mode_with_args(int a4, int a5, int a6, int a7);
int math_floor_float(int a4, int a5, int a6, int a7, float f4);
int math_round_away_float(int a4, int a5, int a6, int a7, float f4);
void FUN_0c0e34d0(int a4);
int gdFsClose(int a4);
int FUN_0c0fca52(int a4, int a5);
int FUN_0c011a70(void);

int ADXF_ExecServer(void)
{
    register int t1;

    ADXCRS_Lock();
    t1 = 0x0;
    for (;;) {
        if ((*(signed char *)((((short)((((t1 << 2) + t1) << 2) << 1) + 0xC7FF568) + 0x0))) == 1) {
            adxf_ExecOne(((short)((((t1 << 2) + t1) << 2) << 1) + 0xC7FF568));
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x10) {
            break;
        }
    }
    return ADXCRS_Unlock();
}

int FUN_0c107df0(void)
{
    int stk[5];
    register int t1;

    FUN_0c1070a0(((int)stk + 0));
    t1 = 0x0;
    for (;;) {
        if ((unsigned char)(*(signed char *)((((short)((short)t1 * (short)0x8C) + 0xC8150D4) + 0x0))) == 1) {
            FUN_0c107cec(((short)((short)t1 * (short)0x8C) + 0xC8150D4), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
        }
        t1 = (t1 + 0x1);
        if ((unsigned int)t1 >= (unsigned int)0x8) {
            break;
        }
    }
    return (FUN_0c1070b8(((int)stk + 0)));
}

int FUN_0c109c8e(void)
{
    FUN_0c10ac40(0xC347648, 0xC34764C);
    FUN_0c10ac40(0xC34765C, 0xC347660);
    FUN_0c10ac40(0xC347650, 0xC347654);
    FUN_0c10ac40(0xC347664, 0xC347668);
    return 0x0;
}

int fmMngWrite(int a4, int a5)
{
    register int t0;
    int t5;

    t0 = *(int *)0xC347704;
    if (t0 == 0) {
        return 0xFFFFFFF5;
    }
    if ((*(int *)((t0 + 0x1C))) != 0) {
        return 0xFFFFFFF7;
    }
    if (((int)a4 >= 0) && (t5 = *(int *)((t0 + 0x14)), (int)a4 < (int)t5)) {
        *(unsigned int *)((t0 + 0x1C)) = 0x2;
        *(unsigned int *)(((*(int *)0xC347704) + 0x20)) = 0x2;
        *(unsigned int *)(((*(int *)0xC347704) + 0x28)) = a4;
        *(unsigned int *)(((*(int *)0xC347704) + 0x30)) = a5;
        *(unsigned int *)(((*(int *)0xC347704) + 0x24)) = 0x0;
        return 0x0;
    }
    return 0xFFFFFFFB;
}

int vmsio_isready(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    int t4;

    t0 = *(int *)(((a4 << 2) + 0xC15B6C4));
    t1 = kdGetDevice(t0);
    t2 = kdGetDeviceInfo(t0);
    if (((*(signed char *)((t1 + 0x0))) != 0) && (t4 = *(int *)((t2 + 0x0)), (t4 & 2) != 0)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0e6278(int a4)
{
    int stk[1];
    register int t0;
    register int t4;

    *(unsigned short *)(((((int)stk + 0) + 0x2) + 0x0)) = a4;
    t0 = *(signed char *)(((int)stk + 2));
    if ((*(short *)((0xC7FD110 + (unsigned char)((((t0 << 1) + t0) << 2) << 1)))) != 1) {
        return 0x0;
    }
    t4 = *(signed char *)(((int)stk + 2));
    return (*(int *)((0xC7FD11C + (unsigned char)((((t4 << 1) + t4) << 2) << 1))));
}

int FUN_0c0e62c4(int a4)
{
    int stk[1];
    register int t0;
    register int t4;

    *(unsigned short *)(((((int)stk + 0) + 0x2) + 0x0)) = a4;
    t0 = *(signed char *)(((int)stk + 2));
    if ((*(short *)((0xC7FD110 + (unsigned char)((((t0 << 1) + t0) << 2) << 1)))) != 1) {
        return 0x0;
    }
    t4 = *(signed char *)(((int)stk + 2));
    return (*(short *)((0xC7FD112 + (unsigned char)((((t4 << 1) + t4) << 2) << 1))));
}

int FUN_0c0f2292(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = 0x0;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    if ((*(int *)0xC7FEC4C) == 0) {
        *(unsigned int *)((a4 + 0x8)) = 0x0;
        *(unsigned int *)((a4 + 0xC)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0x10)) = 0x0;
        *(unsigned int *)((a4 + 0x14)) = 0x0;
    } else {
        *(unsigned int *)((a4 + 0x8)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0xC)) = 0x0;
        *(unsigned int *)((a4 + 0x10)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0x14)) = 0xFFFFFFFF;
    }
    *(unsigned short *)((a4 + 0x18)) = 0x0;
    *(unsigned short *)((a4 + 0x1A)) = 0x0;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x24)) = 0xC15A2F0;
    return 0x0;
}

int gdFsReadWG(int a4, int a5, int a6)
{
    register int t3;

    t3 = gdFsReopenHn((*(int *)(((*(int *)0xC346BD8) + 0x14))), 0x0, a4, (((a5 << 8) << 2) << 1));
    if (t3 == 0) {
        return 0xFFFFFFF3;
    }
    return (gdFsRead(t3, a5, a6));
}

int FUN_0c0f4968(int a4)
{
    FUN_0c1068b6((*(int *)((a4 + 0x8))), (((((((struct o3E_short *)(a4))->v)) << 8) << 2) << 1), (((((((struct o3C_short *)(a4))->v)) << 8) << 2) << 1));
    FUN_0c1066a6((*(int *)((a4 + 0x8))), 0x19);
    FUN_0c106636((*(int *)((a4 + 0x8))));
    FUN_0c0f4938(a4, (*(int *)((a4 + 0x10))));
    *(unsigned char *)((a4 + 0x2)) = 0x0;
    return 0x0;
}

int FUN_0c0f4644(void)
{
    ADXF_Init();
    FUN_0c108768();
    FUN_0c1084a8();
    FUN_0c105b10();
    ADXRNA_Init();
    ADXSTM_Init();
    ADXSJD_Init();
    ADXERR_Init();
    return memset(0xC346C2C, 0x0, 0x3A0);
}

int FUN_0c0fcf46(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if ((unsigned short)(*(int *)((a4 + 0x0))) == 3) {
        t0 = FUN_0c0fd0dc(a4);
        t1 = t0;
        t2 = t0;
    } else {
        t0 = *(int *)((a4 + 0x18));
        if ((t0 & 8) != 0) {
            t2 = FUN_0c0fcff0(a4);
            t1 = t2;
        } else {
            if ((t0 & 32) != 0) {
                t0 = (FUN_0c0fd04e(a4));
            } else {
                t0 = (FUN_0c0fcfa0(a4));
            }
            t1 = t0;
            t2 = t0;
        }
    }
    *(unsigned int *)((a4 + 0x14)) = t2;
    return t1;
}

int search_exec_file(int a4, int a5)
{
    register int t1;
    register int t2;
    register int t6;

    t1 = (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x28)));
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x30)))) {
            return 0xFFFFFFFF;
        }
        t6 = *(signed char *)((t1 + 0x0));
        if ((unsigned char)t6 == 0xCC) {
            break;
        }
        t1 = (t1 + 0x20);
        t2 = (t2 + 0x1);
    }
    FUN_0c1048e6(t1, a5, ((a4 * 0x148) + 0xC80DBC8), (unsigned char)t6);
    return t2;
}

int FUN_0c108290(int a4, int a5, int a6, int a7)
{
    register int t0;

    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0xC15B31C, a5, a6, a7);
        *(unsigned int *)((a5 + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)((a6 + 0x0)) = 0xFFFFFFFF;
        return t0;
    }
    *(unsigned int *)((a5 + 0x0)) = ((((struct o74_int *)(a4))->v));
    *(unsigned int *)((a6 + 0x0)) = ((((struct o78_int *)(a4))->v));
    return 0x78;
}

int FUN_0c10a8a0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    if ((int)a4 < (int)(*(int *)0xC347640)) {
        *(unsigned short *)((a5 + 0x0)) = 0x0;
    } else {
        *(unsigned short *)((a5 + 0x0)) = 0x1;
    }
    t0 = *(signed char *)((a5 + 0x0));
    t1 = *(int *)(((signed char)(((t0 << 2) + t0) << 2) + 0xC347648));
    t0 = 0x0;
    if (t1 != 0) {
        t2 = t1;
        t1 = 0x0;
        for (;;) {
            if ((*(int *)((t2 + 0xC))) == a4) {
                t1 = t2;
                t2 = 0x0;
            } else {
                t2 = (*(int *)((t2 + 0x8)));
            }
            if (t2 == 0) {
                break;
            }
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c109584(int a4, int a5)
{
    register int t1;
    register int t4;

    t1 = *(int *)((a5 + 0x1C));
    t4 = 0x1;
    if ((int)t1 < (int)(*(int *)0xC347640)) {
        t4 = 0x0;
    }
    return (FUN_0c109fae(t4, t1, a4, a5, 0x0, 0x1));
}

int FUN_0c115464(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t2;
    register int t3;
    register int t0;
    register int t11;

    t1 = a4;
    t2 = 0x0;
    t3 = (0x210 + a4);
    for (;;) {
        if ((int)t2 >= (int)((((struct o208_int *)(a4))->v))) {
            break;
        }
        t0 = (*(int *)((t3 + 0xC)));
        if (t0 != 0) {
            t1 = a4;
            FUN_0c115416(t1, t3, a6, a7);
        } else {
            t11 = t1;
        }
        t0 = 0x124;
        t1 = t11;
        t2 = (t2 + 0x1);
        t3 = (t3 + t0);
    }
    return memset(a4, 0x0, 0x2694);
}

int FUN_0c11556a(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;
    register int t1;

    t0 = (((struct o2690_int *)((*(int *)0xC857C80)))->v);
    t1 = 0x7FFFFFFF;
    if ((int)a4 >= 0) {
        t1 = (((((struct o204_int *)((*(int *)0xC857C80)))->v)) + a4);
    }
    *(unsigned int *)((t0 + 0x14)) = t1;
    t0 = FUN_0c0eee64((((((struct o2690_int *)((*(int *)0xC857C80)))->v)) + 0x18), a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
    t1 = t0;
    if (t0 == 0) {
        t1 = (FUN_0c0eedf0(((*(int *)0xC857C80) + 0x4), 0x1));
    }
    return t1;
}

float FUN_0c0e22e0(int a4, int a5, float f4)
{
    register float t0;

    t0 = FUN_0c0e2340(a5);
    *(float *)((a4 + 0x0)) = ((*(float *)((a5 + 0x0))) * (f4 / t0));
    (((struct o4_float *)(a4))->v) = (((((struct o4_float *)(a5))->v)) * (f4 / t0));
    (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a5))->v)) * (f4 / t0));
    return t0;
}

int FUN_0c0e5d22(int a4)
{
    register int t2;

    if ((*(int *)(((*(int *)0xC7FD0E0) + 0x0))) != 0) {
        return 0xFFFFFFFF;
    }
    t2 = *(int *)0xC7FD0E0;
    *(unsigned int *)0xC7FD0E0 = (t2 + 0x4);
    *(unsigned int *)((((t2 + 0x4) - 4) + 0x0)) = a4;
    if ((*(int *)0xC7FD0E0) == 0xA0800500) {
        *(unsigned int *)0xC7FD0E0 = 0xA0800400;
    }
    return 0x0;
}

void FUN_0c0e6620(int a4)
{
    int stk[4];
    register int t1;
    register int t3;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = 0xC155C31;
    t1 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 8)) = t1;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)0x40) {
            break;
        }
        t3 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t3 + 0x1);
        t1 = (*(int *)(((int)stk + 4)));
        t1 = (t1 + 0x1);
        *(unsigned int *)(((int)stk + 4)) = t1;
        t1 = (t1 - 1);
        *(unsigned char *)((((t3 + 0x1) - 1) + 0x0)) = (*(signed char *)((t1 + 0x0)));
        t1 = (*(int *)(((int)stk + 0)));
        t1 = (t1 + 0x1);
        *(unsigned int *)(((int)stk + 0)) = t1;
    }
}

void FUN_0c0f2f24(void)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    kdSetHandler((*(int *)0xC15A71C), 0x0);
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

int FUN_0c0f42ec(int a4, int a5)
{
    int stk[4];
    register int t1;
    register int t2;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t1 = kdGetDeviceInfo((*(int *)(((int)stk + 4))));
    t2 = kdDevGetVibrationInfo((((int)stk + 0) + 0x8), t1);
    if ((int)t2 < 0) {
        return 0xFFFFFFFE;
    }
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = (*(int *)(((int)stk + 8)));
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x1)) = (*(signed char *)(((int)stk + 12)));
    return 0x0;
}

int FUN_0c101b1c(int a4)
{
    register int t0;

    t0 = *(int *)0xC80DBC4;
    if (a4 != 15) {
        if (a4 != 33) {
            if (a4 != 65) {
                if (a4 != 122) {
                    return 0xFFFFFF00;
                }
                *(unsigned int *)((t0 + 0x4)) = 0x3;
                return 0x0;
            }
            *(unsigned int *)((t0 + 0x4)) = 0x2;
            return 0x0;
        }
        *(unsigned int *)((t0 + 0x4)) = 0x1;
        return 0x0;
    }
    *(unsigned int *)((t0 + 0x4)) = 0x0;
    return 0x0;
}

int FUN_0c1070d2(void)
{
    register int t2;
    register int t3;

    memset(0xC8150D4, 0x0, 0x460);
    memset(0xC815534, 0x0, 0x800);
    t2 = 0x0;
    t3 = 0xC815D34;
    for (;;) {
        *(unsigned int *)((t3 + 0x0)) = 0x80808080;
        t2 = (t2 + 0x1);
        t3 = (t3 + 0x4);
        if ((int)t2 >= (int)0x200) {
            break;
        }
    }
    FUN_0c114aec();
    FUN_0c1070ce();
    return FUN_0c114ab8(0x0, 0x0);
}

int FUN_0c109cce(void)
{
    register int t0;
    register int t4;

    t0 = FUN_0c10acec(0xC347650, 0xC347654, 0xC347648);
    t4 = t0;
    if (t0 == 0) {
        t4 = (FUN_0c10acec(0xC347664, 0xC347668, 0xC34765C));
    }
    return t4;
}

int FUN_0c110320(int a4)
{
    return (((((((*(int *)((0xC3476D8 + (((((struct o0_int *)0xC817468)->v)) << 2)))) + (*(int *)((0xC3476D8 + (((((struct o4_int *)0xC817468)->v)) << 2))))) + (*(int *)((0xC3476D8 + (((((struct o8_int *)0xC817468)->v)) << 2))))) + (*(int *)((0xC3476D8 + (((((struct oC_int *)0xC817468)->v)) << 2))))) + (*(int *)((0xC3476D8 + (((((struct o10_int *)0xC817468)->v)) << 2))))) * a4) << 2);
}

int fmMngRead(int a4, int a5)
{
    register int t0;
    int t5;

    t0 = *(int *)0xC347704;
    if (t0 == 0) {
        return 0xFFFFFFF5;
    }
    if ((*(int *)((t0 + 0x1C))) != 0) {
        return 0xFFFFFFF7;
    }
    if (((int)a4 >= 0) && (t5 = *(int *)((t0 + 0x14)), (int)a4 < (int)t5)) {
        *(unsigned int *)((t0 + 0x1C)) = 0x1;
        *(unsigned int *)(((*(int *)0xC347704) + 0x20)) = 0x2;
        *(unsigned int *)(((*(int *)0xC347704) + 0x28)) = a4;
        *(unsigned int *)(((*(int *)0xC347704) + 0x30)) = a5;
        return 0x0;
    }
    return 0xFFFFFFFB;
}

int FUN_0c114f90(int a4, int a5, int a6)
{
    if ((*(int *)((a4 + 0xC))) == 0) {
        FUN_0c0e67a2((*(int *)(((*(int *)((a4 + 0x10))) + 0x4))), (signed char)a5, (signed char)a6);
    } else {
        FUN_0c0e6bc4((*(short *)((a4 + 0x2))), (signed char)a5, (signed char)a6);
    }
    return 0x0;
}

int FUN_0c1150cc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    if ((int)(short)a5 <= 0) {
    } else {
        t1 = a5;
        if ((int)(short)a5 >= (int)0x7F) {
            t1 = 0x7F;
        }
        t0 = t1;
    }
    t1 = 0x0;
    if ((int)(short)a6 <= 0) {
    } else {
        t1 = a6;
        if ((int)(short)a6 >= (int)0x1F) {
            t1 = 0x1F;
        }
    }
    FUN_0c0e6c78((*(short *)((a4 + 0x2))), t0, t1);
    return 0x0;
}

int nlInitMatrixStack(int a4, int a5, int a6)
{
    register int t0;
    register int t2;

    t0 = a6;
    if (a5 != ((a5 + 0x1F) & 0xFFFFFFE0)) {
        t0 = (a6 - 1);
    }
    t2 = t0;
    if ((int)t0 > (int)0x7FFF) {
        t2 = 0x7FFF;
    }
    *(unsigned short *)((a4 + 0x2)) = t2;
    *(unsigned short *)((a4 + 0x0)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = ((a5 + 0x1F) & 0xFFFFFFE0);
    *(unsigned int *)((a4 + 0x4)) = ((a5 + 0x1F) & 0xFFFFFFE0);
    nlUnitMatrix();
    FUN_0c0e0ae0((*(int *)((a4 + 0x8))));
    return (*(int *)((a4 + 0x4)));
}

int FUN_0c0e3900(int a4, int a5)
{
    int stk[4];
    register int t1;
    register int t2;
    register int t4;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t1 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 4)) = t1;
    t2 = 0x0;
    for (;;) {
        t4 = *(int *)(((*(int *)(((int)stk + 4))) + 0x4));
        if (t4 == -1) {
            break;
        }
        FUN_0c0e365c((*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 0))));
        t1 = (*(int *)(((int)stk + 4)));
        t1 = (t1 + 0x10);
        *(unsigned int *)(((int)stk + 4)) = t1;
        t2 = (*(int *)(((int)stk + 0)));
        t2 = (t2 + 0x1);
        *(unsigned int *)(((int)stk + 0)) = t2;
    }
    return t4;
}

int FUN_0c0e3bb2(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t1;
    register int t2;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t1 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 4)) = t1;
    t2 = 0x0;
    for (;;) {
        if ((*(int *)(((*(int *)(((int)stk + 4))) + 0x4))) == -1) {
            break;
        }
        FUN_0c0e3a0c((*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 0))));
        t1 = (*(int *)(((int)stk + 4)));
        t1 = (t1 + 0x10);
        *(unsigned int *)(((int)stk + 4)) = t1;
        t2 = (*(int *)(((int)stk + 0)));
        t2 = (t2 + 0x1);
        *(unsigned int *)(((int)stk + 0)) = t2;
    }
    return ((int (*)(int, int, int, int))(0xC0E3BEC))(a4, a5, a6, a7);
}

int FUN_0c0e5178(int a4, int a5, int a6)
{
    register int t0;

    (((struct o0_uint *)0xA0800090)->v) = (a4 + 0x5F800000);
    (((struct o4_uint *)0xA0800090)->v) = (0x5F800000 + a5);
    (((struct o8_uint *)0xA0800090)->v) = a6;
    for (;;) {
        t0 = FUN_0c0e5d22(0x2000A0);
        if (t0 != -1) {
            break;
        }
    }
    return 0x0;
}

int FUN_0c0e50ec(int a4, int a5, int a6)
{
    register int t2;
    register int t8;

    FUN_0c1059ac(0x0, a5, a6);
    t2 = *(signed char *)(((FUN_0c0eb6f4()) + 0xC));
    t8 = 0x1;
    if (t2 != 49) {
        t8 = 0x2;
        if (t2 != 50) {
            t8 = 0x3;
            if (t2 != 51) {
                t8 = 0x0;
            }
        }
    }
    return t8;
}

int FUN_0c0e67f4(int a4, int a5)
{
    int stk[4];
    register int t2;
    register int t1;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned short *)(((((int)stk + 0) + 0xA) + 0x0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 12))) + 0x30);
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)0x4) {
            break;
        }
        t1 = (*(short *)(((int)stk + 10)));
        t2 = t1;
        *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x0)) = t2;
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
        t2 = (*(int *)(((int)stk + 0)));
        t2 = (t2 + 0x1);
        *(unsigned int *)(((int)stk + 0)) = t2;
    }
    return t1;
}

int FUN_0c0ef158(float f4, float f5)
{
    int stk[2];
    int t4;

    *(float *)(((int)stk + 0)) = f5;
    (((struct o4_float *)(((int)stk + 0)))->v) = f4;
    if (((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) & 0x7FF00000) != 0x7FF00000) {
        return 0x0;
    }
    if ((((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) & 0xFFFFF) == 0) && (t4 = *(int *)((((((int)stk + 0) + 0x4) - 4) + 0x0)), t4 == 0)) {
        return 0x2;
    }
    return 0x1;
}

int FUN_0c0f53ae(void)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((*(signed char *)((((short)((((t0 << 2) + t0) << 2) << 1) + 0xC7FF568) + 0x0))) == 0) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x10) {
            return 0x0;
        }
    }
    return ((short)((((t0 << 2) + t0) << 2) << 1) + 0xC7FF568);
}

int FUN_0c0f547e(int a4)
{
    register int t1;
    register int t9;
    register int t2;

    ADXCRS_Lock();
    t1 = adxf_CreateAdxFs();
    t9 = t1;
    if (t1 != 0) {
        t2 = FUN_0c0f5428(t1, a4);
        t9 = t1;
        if ((int)t2 < 0) {
            FUN_0c0f5570(t1);
            t9 = 0x0;
        }
    }
    ADXCRS_Unlock();
    return t9;
}

int FUN_0c0fde38(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = a4;
    t1 = a6;
    t2 = a7;
    t3 = a5;
    for (;;) {
        t4 = (int)t1 <= 0;
        t1 = (t1 - 1);
        if (t4) {
            break;
        }
        t2 = (unsigned short)t0;
        t4 = t2;
        t5 = 0xFFFFFFF8;
        t4 = ((int)t4 << (int)t5);
        t0 = *(signed char *)((t3 + 0x0));
        t3 = (t3 + 0x1);
        t5 = t0;
        t4 = (unsigned char)t4;
        t0 = t2;
        t5 = (unsigned char)t5;
        t4 = (t4 ^ t5);
        t4 = (t4 << 1);
        t0 = (t0 << 8);
        t0 = (t0 & 0xFF00);
        t0 = (t0 ^ ((*(short *)((0xC15ACE0 + t4)))));
    }
    return t0;
}

int FUN_0c0fe8c0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)((a6 + 0x8));
    *(unsigned int *)((a5 + 0x4)) = 0x0;
    *(unsigned int *)((a5 + 0x0)) = 0x0;
    *(unsigned int *)((a5 + 0x24)) = (a7 + 0x14);
    *(unsigned int *)((a5 + 0x28)) = (((a4 << 2) << 1) + 0xC803E74);
    *(unsigned char *)(((((a4 << 2) << 1) + 0xC803E74) + 0x0)) = (*(signed char *)(((t0 + 0x8) + 0x0)));
    t1 = *(signed char *)((((t0 + 0x8) + 0x1) + 0x0));
    *(unsigned char *)(((((a4 << 2) << 1) + 0xC803E74) + 0x1)) = t1;
    t2 = 0x6;
    t3 = ((((a4 << 2) << 1) + 0xC803E74) + 0x2);
    t4 = (((t0 + 0x8) + 0x1) + 0x1);
    for (;;) {
        t0 = *(signed char *)((t4 + 0x0));
        t4 = (t4 + 0x1);
        t2 = (t2 - 1);
        *(unsigned char *)((t3 + 0x0)) = t0;
        t3 = (t3 + 0x1);
        if (t2 == 0) {
            break;
        }
    }
    return t1;
}

int gdFsStrcmpi(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = a5;
    t1 = a4;
    for (;;) {
        if ((*(signed char *)((t1 + 0x0))) == 0) {
            break;
        }
        t2 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        t3 = (gdFsToUpper(t2));
        t2 = (signed char)t3;
        t4 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        t3 = (gdFsToUpper(t4));
        t3 = (signed char)t3;
        if (t2 == t3) continue;
        t3 = 0x0;
        return t3;
    }
    t1 = 0x1;
    if ((*(signed char *)((t0 + 0x0))) != 0) {
        t1 = 0x0;
    }
    return t1;
}

int vmsfs_isready(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x0;
    t1 = 0x1;
    t2 = 0x0;
    for (;;) {
        t3 = vmsio_isready(t2);
        t2 = (t2 + 0x1);
        if (t3 != 0) {
            t0 = (t0 | t1);
        }
        t1 = (t1 << 1);
        if ((int)t2 >= (int)0x8) {
            break;
        }
    }
    return t0;
}

int ADXSJD_ExecServer(void)
{
    register int t0;
    register int t2;
    register int t4;

    t0 = 0x0;
    for (;;) {
        t2 = *(signed char *)((((short)(((((t0 << 2) << 1) + t0) << 2) << 2) + 0xC813FD4) + 0x0));
        t4 = t2;
        if (t2 == 1) {
            t4 = (ADXSJD_ExecHndl(((short)(((((t0 << 2) << 1) + t0) << 2) << 2) + 0xC813FD4)));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return t4;
}

int FUN_0c1123f2(int a4)
{
    register int t0;

    t0 = *(int *)0xC843924;
    (((struct oFCC_uint *)(t0))->v) = (((((struct oFCC_int *)(t0))->v)) + (((((struct oFD8_int *)(t0))->v)) << 2));
    *(unsigned int *)((((((struct oFCC_int *)((*(int *)0xC843924)))->v)) + 0x0)) = ((a4 << 16) | 0x300);
    (((struct oFD8_uint *)((*(int *)0xC843924)))->v) = 0x1;
    t0 = *(int *)0xC843924;
    (((struct oFDC_uint *)(t0))->v) = (((((struct oFDC_int *)(t0))->v)) + 0x4);
    return 0x0;
}

int mpdrv_set_bwrite(Stk4 s)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B66C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_bwrite_ns(s.w[0], s.w[1], s.w[2]);
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    return t2;
}

void FUN_0c0e34d0(int a4)
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

    u0 = *(float *)((a4 + 0x0));
    u1 = (((struct o4_float *)(a4))->v);
    u2 = (((struct o8_float *)((a4 + 0x4)))->v);
    u3 = (((struct o8_float *)((a4 + 0x4)))->v);
    u4 = (((struct o4_float *)(((a4 + 0x4) + 0x8)))->v);
    u5 = (((struct o4_float *)((((a4 + 0x4) + 0x8) + 0x4)))->v);
    u6 = (((struct o8_float *)(((((a4 + 0x4) + 0x8) + 0x4) + 0x4)))->v);
    u7 = (((struct o8_float *)(((((a4 + 0x4) + 0x8) + 0x4) + 0x4)))->v);
    u8 = (((struct o4_float *)((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8)))->v);
    u9 = (((struct o4_float *)(((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4)))->v);
    u10 = (((struct o8_float *)((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4)))->v);
    u11 = (((struct o8_float *)((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4)))->v);
    u12 = (((struct o4_float *)(((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8)))->v);
    u13 = (((struct o4_float *)((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4)))->v);
    u14 = (((struct o8_float *)(((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4)))->v);
    u15 = (((struct o8_float *)(((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4)))->v);
    _builtin_st_ext((float (*)[4])u16);
    u16[0] = u3;
    u16[1] = u0;
    u16[2] = u1;
    u16[3] = (-u2);
    u16[4] = u7;
    u16[5] = u4;
    u16[6] = u5;
    u16[7] = (-u6);
    u16[8] = u11;
    u16[9] = u8;
    u16[10] = u9;
    u16[11] = (-u10);
    u16[12] = u15;
    u16[13] = u12;
    u16[14] = u13;
    u16[15] = (-u14);
    _builtin_ld_ext((float (*)[4])u16);
}

int gdFsClose(int a4)
{
    int t0;

    if (a4 != 0) {
        if (((((struct o4C_short *)(a4))->v)) != 0) {
            t0 = (((struct o50_short *)(a4))->v);
            if ((t0 != 2) && ((t0 != 3) && (t0 != 4))) {
            } else {
                FUN_0c0f1c72(a4);
            }
            (((struct o4C_ushort *)(a4))->v) = 0x0;
        }
        t0 = 0x4C;
    }
    return t0;
}

int FUN_0c0fca52(int a4, int a5)
{
    int stk[6];
    register int t0;

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    t0 = FUN_0c1099e0();
    *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x0)) = (((*(int *)(((int)stk + 0))) + (*(int *)(((int)stk + 4)))) + (*(int *)(((int)stk + 8))));
    *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0x0)) = (*(int *)(((int)stk + 12)));
    return t0;
}

