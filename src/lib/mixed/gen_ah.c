/* Straight-line functions with calls and guards (batch gen_ah): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o100_uchar { char p[0x100]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o144_uchar { char p[0x144]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A8_short { char p[0x1A8]; short v; };
struct o1A8_ushort { char p[0x1A8]; unsigned short v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o224_uint { char p[0x224]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o3E_short { char p[0x3E]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o52_ushort { char p[0x52]; unsigned short v; };
struct o54_float { char p[0x54]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o718C_int { char p[0x718C]; int v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71BD_uchar { char p[0x71BD]; unsigned char v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o71DD_uchar { char p[0x71DD]; unsigned char v; };
struct o7205_uchar { char p[0x7205]; unsigned char v; };
struct o7222_uchar { char p[0x7222]; unsigned char v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o7238_uchar { char p[0x7238]; unsigned char v; };
struct o723A_uchar { char p[0x723A]; unsigned char v; };
struct o7264_float { char p[0x7264]; float v; };
struct o726C_float { char p[0x726C]; float v; };
struct o7294_uint { char p[0x7294]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };
struct oF8_int { char p[0xF8]; int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
int opt_reset_key_config(int);
int save_reset_all_data(void);
int vmu_check_show_message(int);
int vmu_check_run_objects(int, int, int, int);
int vmu_check_pad_pressed(int);
int FUN_0c015ba0(int, int, int, int, float, float, float, float, float, float);
int FUN_0c015fda(int, int, int, int, float, float, float, float, float, float, float);
int FUN_0c01e2e4(int);
int FUN_0c01e34a(int);
int vmu_menu_spawn_message(int);
int FUN_0c01f9a0(void);
int vmu_menu_poll_confirm_cancel(int);
extern int FUN_0c0207ca();
float FUN_0c022dfc(int, int, float);
int ui_sprite_queue_add(int, int, int);
int ui_draw_text_stub(void);
int fx_spawn_0318e0(int, int);
int FUN_0c03d2fc(int, int, int);
int FUN_0c042256(int, int, int);
int fx_spawn_model_effect(int, int, int, int, int, int, int, int, int);
int item_draw_marker(int, int, int, float, float, float, float);
int item_init_hold_pose(int);
int FUN_0c05c3be(int);
int FUN_0c05c44e(void);
int FUN_0c0624c4(int, int, int);
int FUN_0c0634b4(int);
int FUN_0c0641a0(int, float, float);
int FUN_0c08b81e(int);
int FUN_0c08b844(int);
int FUN_0c08b8b8(int);
int FUN_0c08b8fc(int);
int FUN_0c08b9c2(int);
int FUN_0c08bab6(int);
int FUN_0c08bb22(int);
int FUN_0c08bb46(int);
int pl_inc_owner_combo(int);
int FUN_0c08dfa4(void);
int FUN_0c08e980(int);
int FUN_0c09660c(int);
int pl_reset_scale(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int mot_read_vec3_scaled(int, int);
int mot_read_vec3_float(int, int);
int pl_vib_start_preset(int, int);
int pl_get_held_item_class(int, int, int);
int FUN_0c09c782(int);
int hit_find_contact_direction(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_angle_to_opponent(int);
int FUN_0c09e4ac(int, int, int);
int pl_landed(int);
int pl_end_action_choose_state(int);
int pl_change_state(int, int, int);
int bgm_start_file(int, int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int FUN_0c0a3f30(int);
int obj_set_mode_owner(int, int);
int fx_spawn_06(int);
int fx_spawn_08(int, int);
float FUN_0c0d5bc0(void);
int FUN_0c0d7032(int, int);
int FUN_0c0d7054(int);
int FUN_0c0d7076(void);
int cam_set_shake_ramp(int, int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
int math_rand_next(void);
int nlInitMatrixStack(int, int, int);
int syRtcCountToDate(int, int);
int syRtcGetCountForce(void);
int syRtcMakeDayOfWeek(int, int);
int syRtcMakeAgeOfMoon(void);
int FUN_0c0e6668(int, int, int);
int _divls(void);
int _modls(void);
int _quick_odd_mvn(int);
int _slow_mvn(int);
int FUN_0c0eb6cc(int, int, int);
int FUN_0c0ed9c0(int, int, int);
int FUN_0c0f2464(int);
int FUN_0c0f2ccc(int);
int FUN_0c0f2d38(int, int, int);
int ADXT_SetOutVol(int, int);
int ADXT_SetLpFlg(int, int);
int gdFsToUpper(int);
int gdFsSearchName(int, int, int);
int FUN_0c0fedca(int, int);
int FUN_0c0ffdba(void);
int FUN_0c0ffdfc(void);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdDevGetFD(int, int);
int kdGetDriverMode(int);
int FUN_0c105a14(int, int, int);
int FUN_0c111310(int, int, int);
int mpdrv_memset_l(int, int, int);
int FUN_0c1151b8(int, int, int, int, int);
int FUN_0c11568c(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int mwRnaErrCallFunc(int);
int pdVmsLcdIsReady(int);
int thunk_FUN_0c111b6e(int);
int pl_mode08_09_update_v1(int a4);
int obj_set_owner_hit_record(int a4, int a5);
int FUN_0c0fff10(int a4, int a5);
int FUN_0c1025e0(int a4, int a5, int a6, int a7);
int search_fat(int a4, int a5, int a6, int a7);
int ai_calc_gap_to_target(int a4);
int FUN_0c05e01e(int a4);
float FUN_0c09b74c(int a4);
void bgm_play_by_index(int a4);
int FUN_0c0d708c(int a4, int a5);
int FUN_0c0e669e(int a4, int a5);
int FUN_0c0f2486(int a4, int a5);
void FUN_0c0faee0(void);
void FUN_0c0ff15c(void);
int FUN_0c1059ac(int a4, int a5, int a6);
int mpdrv_clear_deviceinfo(int a4);
int fmMngChkEmptyData(int a4, int a5);
int FUN_0c020886(int a4, int a5, int a6, int a7);
int FUN_0c031030(void);
int FUN_0c05c370(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int FUN_0c085870(int a4);
int pl_hitreact_start_vibration(int a4);
int FUN_0c08f71c(int a4);
int pl_angle_to_target_pos(int a4);
int pl_turn_to_opponent(int a4, int a5);
int item_director_phase4(void);
int item_director_roll_variant(int a4);
void ui_draw_please_wait(int a4);
int cam_mode_22(int a4, int a5, int a6, int a7);
int FUN_0c0ddc70(int a4, int a5, int a6, int a7);
int gdFsReopenHn(int a4, int a5, int a6, int a7);
int syCfgGetSoundMode(int a4, int a5, int a6);
int FUN_0c0f7e80(int a4, int a5, int a6, int a7);
int FUN_0c1042ba(int a4, int a5, int a6, int a7);
int fmMngNum2Bit(int a4, int a5, int a6);
int vmu_lcd_refresh(int a4);
int vmu_check_mode_07(int a4, int a5, int a6, int a7);
int FUN_0c016238(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c01e65e(int a4, int a5, int a6);
int FUN_0c02f3a6(int a4, int a5);
int FUN_0c03d33e(int a4, int a5);
int FUN_0c0422b8(int a4, int a5);
int FUN_0c063468(int a4);
int pl_mode15_cls14_f0_phase2(int a4, int a5, int a6, int a7);
int FUN_0c06b5b2(int a4);
int pl_falcon_attack_kind57_phase0(int a4);
int pl_gunrock_start_motion_reset_slots(int a4, int a5, int a6);
int pl_try_start_move(int a4, int a5, int a6);
int obj_set_record_char(int a4, int a5);
int pl_check_pickup_input(int a4, int a5, int a6);
void obj_clear_slot_contact(int a4);
int FUN_0c0e0210(int a4, int a5);
int FUN_0c0e67a2(int a4, int a5, int a6);
int syRtcGetDate(int a4);
int gdFsSeek(int a4, int a5, int a6);
int gdFsStrncmpi(int a4, int a5, int a6);
int FUN_0c107432(int a4, int a5, int a6, int a7, int a8);
void kmiRegisterPhIntHandler(int a4);
int vmsio_ismount(int a4);
int FUN_0c115128(int a4, int a5);
int keycfg_reset_player_keys(int a4);
int FUN_0c01e4a0(void);
int ai_clear_op_state(void);
int pl_falcon_attack_kind68_phase5(int a4);
int pl_wangtang_mode12_phase0(int a4);
int pl_state34_phase2(int a4);
int FUN_0c09ca88(int a4, int a5, int a6, int a7);
int FUN_0c08bb84(int a4);
int FUN_0c0a1a60(int a4);
int FUN_0c0ccb60(int a4, int a5, int a6, int a7);
void nlInitMatrix(int a4, int a5);
int FUN_0c0eaef0(int a4, int a5);
int FUN_0c0f0cba(int a4, int a5);
int FUN_0c10077e(int a4, int a5);
int kdDevGetGunInfo(int a4, int a5);
int vmu_check_mode_09(int a4, int a5, int a6, int a7);
int FUN_0c01f060(int a4, int a5, int a6, int a7);
int vmu_menu_update_objs(void);
float FUN_0c022e90(int a4, int a5, int a6, float f4);
int FUN_0c0302b6(int a4);
int fx_spawn_linked_effect(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int FUN_0c05c4ea(int a4);
int FUN_0c05c6e0(int a4);
int FUN_0c08d662(int a4);
int math_angle_between_points_xz(int a4, int a5);
int testmode_game_config_commit(void);
int FUN_0c0d5428(void);
int cam_mode_17(int a4, int a5, int a6, int a7);

int FUN_0c0fff10(int a4, int a5)
{
    register int t0;
    register int t2;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    FUN_0c0ffdfc();
    t2 = FUN_0c111310(a5, 0xC000, a4);
    FUN_0c0ffdba();
    *(unsigned int *)0xC805708 = 0x1;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t2;
}

int FUN_0c1025e0(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t5;
    register int t7;

    *(unsigned short *)(((int)stk + 0)) = a5;
    if ((int)a7 >= (int)a6) {
        t0 = a7;
        for (;;) {
            t5 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0xC)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x24))), (t0 << 1), a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            if ((unsigned short)t5 == (unsigned short)(*(short *)(((int)stk + 0)))) {
                break;
            }
            t0 = (t0 - 1);
            if ((int)t0 < (int)a6) {
                return 0xFFFFFFFF;
            }
        }
        t7 = t0;
    } else {
        t7 = 0xFFFFFFFF;
    }
    return t7;
}

int search_fat(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t1;
    register int t2;
    register int t7;
    register int t9;

    *(unsigned short *)(((int)stk + 0)) = a5;
    t1 = *(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x30));
    if ((int)(t1 - 1) >= 0) {
        t2 = (t1 - 1);
        for (;;) {
            t7 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0xC)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x24))), (t2 << 1), a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            if ((unsigned short)t7 == (unsigned short)(*(short *)(((int)stk + 0)))) {
                break;
            }
            t2 = (t2 - 1);
            if ((int)t2 < 0) {
                return 0xFFFFFFFF;
            }
        }
        t9 = t2;
    } else {
        t9 = 0xFFFFFFFF;
    }
    return t9;
}

int FUN_0c0e669e(int a4, int a5)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t2;
    register int t6;
    register int t10;
    register int t11;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned short *)(((((int)stk + 0) + 0x6) + 0x0)) = a5;
    t0 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 0)) = (t0 + 0x9);
    t1 = *(short *)(((int)stk + 6));
    if (t1 != 1) {
        if (t1 != 2) {
            t11 = t1;
            if (t1 != 4) {
            } else {
                t2 = *(signed char *)(((t0 + 0x9) + 0x0));
                *(unsigned char *)(((t0 + 0x9) + 0x0)) = ((t2 & 0x80) | 0x2);
                t11 = ((t2 & 0x80) | 0x2);
            }
        } else {
            t6 = *(signed char *)(((t0 + 0x9) + 0x0));
            *(unsigned char *)(((t0 + 0x9) + 0x0)) = ((t6 & 0x80) | 0x1);
            t11 = ((t6 & 0x80) | 0x1);
        }
    } else {
        t10 = *(signed char *)(((t0 + 0x9) + 0x0));
        *(unsigned char *)(((t0 + 0x9) + 0x0)) = (t10 & 0x80);
        t11 = (t10 & 0x80);
    }
    return t11;
}

int FUN_0c0f2486(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t15;
    register int t23;

    if (((*(int *)((a5 + 0x0))) & 1) != 0) {
        t23 = FUN_0c10077e(((int)stk + 0), a5);
        if ((int)t23 < 0) {
            *(unsigned int *)((a4 + 0x4)) = 0x0;
            *(unsigned int *)((a4 + 0x0)) = 0x0;
        } else {
            t2 = kdGetDriverMode(0x5);
            if (t2 == 1) {
                t23 = FUN_0c0f2464((*(int *)(((int)stk + 0))));
                *(unsigned int *)((a4 + 0x4)) = t23;
            } else {
                *(unsigned int *)((a4 + 0x4)) = (*(int *)(((int)stk + 0)));
                t23 = t2;
            }
            *(unsigned int *)((a4 + 0x0)) = (*(int *)((a4 + 0x4)));
            *(unsigned int *)((a4 + 0x24)) = (a5 + 0x14);
        }
    } else {
        t15 = kdGetDriverMode(0x5);
        if (t15 == 1) {
            t23 = FUN_0c0f2464((*(int *)(((int)stk + 0))));
            *(unsigned int *)((a4 + 0x4)) = t23;
        } else {
            *(unsigned int *)((a4 + 0x4)) = (*(int *)(((int)stk + 0)));
            t23 = t15;
        }
        *(unsigned int *)((a4 + 0x0)) = (*(int *)((a4 + 0x4)));
        *(unsigned int *)((a4 + 0x24)) = (a5 + 0x14);
    }
    return t23;
}

void FUN_0c0faee0(void)
{
    (((struct o34_uint *)0xC817230)->v) = 0x0;
    (((struct o0_uint *)0xC8171F0)->v) = 0xC0FB418;
    (((struct o4_uint *)0xC8171F0)->v) = 0x0;
    (((struct o8_uint *)0xC8171F0)->v) = 0xC0FB41C;
    (((struct oC_uint *)0xC8171F0)->v) = 0x0;
    (((struct o10_uint *)0xC8171F0)->v) = 0xC0FB420;
    (((struct o14_uint *)0xC8171F0)->v) = 0x0;
    (((struct o18_uint *)0xC8171F0)->v) = 0xC0FB424;
    (((struct o1C_uint *)0xC8171F0)->v) = 0x0;
    (((struct o20_uint *)0xC8171F0)->v) = 0xC0FB460;
    (((struct o24_uint *)0xC8171F0)->v) = 0x0;
    (((struct o28_uint *)0xC8171F0)->v) = 0xC0FB464;
    (((struct o2C_uint *)0xC8171F0)->v) = 0x0;
    (((struct o30_uint *)0xC8171F0)->v) = 0xC0FB468;
    (((struct o34_uint *)0xC8171F0)->v) = 0x0;
    (((struct o38_uint *)0xC8171F0)->v) = 0xC0FB46C;
    (((struct o3C_uint *)0xC8171F0)->v) = 0x0;
    (((struct o0_uint *)0xC817230)->v) = 0xC0FB470;
    (((struct o4_uint *)0xC817230)->v) = 0x0;
}

void FUN_0c0ff15c(void)
{
    int stk[1];
    register int t1;
    register int t2;

    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = 0xC803EA8;
    for (;;) {
        *(unsigned int *)((t1 + 0xC)) = 0x0;
        t1 = (t1 + 0x10);
        if ((unsigned int)t1 >= (unsigned int)0xC804EA8) {
            break;
        }
    }
    t2 = 0xC804EA8;
    for (;;) {
        *(unsigned int *)((t2 + 0x0)) = 0x0;
        t2 = (t2 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0xC8051A8) {
            break;
        }
    }
    _builtin_set_imask(((unsigned int)((((unsigned short)(*(short *)(((int)stk + 0))) & 0xF) << 2) << 2) >> 4));
}

int FUN_0c1059ac(int a4, int a5, int a6)
{
    int stk[2];
    register int t1;
    register int t2;
    register int t3;

    *(unsigned int *)(((int)stk + 0)) = (FUN_0c0eb6cc(a4, a5, a6));
    t1 = FUN_0c0ed9c0(0x1A05E, (((int)stk + 0) + 0x4), 0x2);
    if ((t1 == 0) && ((t2 = *(signed char *)(((((int)stk + 0) + 0x4) + 0x0)), (unsigned char)t2 != 0xFF) || (t3 = *(signed char *)(((((int)stk + 0) + 0x4) + 0x1)), (unsigned char)t3 != 0xFF))) {
        (((struct o0_uchar *)0x8C000070)->v) = (*(signed char *)(((((int)stk + 0) + 0x4) + 0x0)));
        (((struct o1_uchar *)0x8C000070)->v) = (*(signed char *)(((((int)stk + 0) + 0x4) + 0x1)));
        FUN_0c0fedca(0x8C000070, 0x2);
    }
    return (*(int *)(((int)stk + 0)));
}

int mpdrv_clear_deviceinfo(int a4)
{
    register int t1;

    mpdrv_memset_l(a4, 0x0, 0x1E);
    (((struct o14_uchar *)(a4))->v) = 0x28;
    (((struct o15_uchar *)(a4))->v) = 0x6E;
    (((struct o16_uchar *)(a4))->v) = 0x6F;
    (((struct o17_uchar *)(a4))->v) = 0x6E;
    (((struct o18_uchar *)(a4))->v) = 0x65;
    (((struct o19_uchar *)(a4))->v) = 0x29;
    t1 = (a4 + 0x1A);
    for (;;) {
        *(unsigned char *)((t1 + 0x0)) = 0x20;
        t1 = (t1 + 0x1);
        if ((unsigned int)t1 >= (unsigned int)(a4 + 0x33)) {
            break;
        }
    }
    (((struct o33_uchar *)(a4))->v) = 0x0;
    return 0x0;
}

int fmMngChkEmptyData(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x3C;
    t1 = (a5 + 0x2);
    for (;;) {
        t2 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        if ((unsigned char)t2 == 0xFF) {
            t0 = (t0 - 1);
            if ((int)t0 <= 0) {
                break;
            }
            continue;
        }
        return 0x0;
    }
    t0 = FUN_0c11568c(0x3E, a5);
    t1 = 0x0;
    if ((unsigned short)((((struct o3E_short *)(a5))->v)) == (unsigned short)t0) {
        t0 = 0x40;
        t2 = a5;
        for (;;) {
            if (t0 == 0) {
                break;
            }
            *(unsigned char *)((t2 + 0x0)) = 0xFF;
            t0 = (t0 - 1);
            t2 = (t2 + 0x1);
        }
        t1 = 0x1;
    }
    return t1;
}

int gdFsReopenHn(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    if ((a4 != 0) && (t0 = *(int *)((a4 + 0x0)), t1 = *(int *)((t0 + 0x1C)), t1 != a4)) {
        *(unsigned int *)((a4 + 0x4)) = a5;
        *(unsigned int *)((a4 + 0x8)) = a6;
        *(unsigned int *)((a4 + 0xC)) = a7;
        *(unsigned int *)((a4 + 0x10)) = ((int)(a7 + 0x7FF) >> 11);
        *(unsigned int *)((a4 + 0x14)) = 0x0;
        *(unsigned int *)((a4 + 0x18)) = 0x0;
        *(unsigned int *)((a4 + 0x1C)) = 0x0;
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        *(unsigned int *)((a4 + 0x3C)) = 0x0;
        (((struct o44_uint *)(a4))->v) = 0x0;
        (((struct o48_ushort *)(a4))->v) = 0x0;
        (((struct o4A_ushort *)(a4))->v) = 0x0;
        (((struct o4C_ushort *)(a4))->v) = 0x1;
        (((struct o50_ushort *)(a4))->v) = 0x0;
        (((struct o52_ushort *)(a4))->v) = 0x0;
        return a4;
    }
    return 0x0;
}

int syCfgGetSoundMode(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        t0 = *(int *)0xC346C14;
        if (t0 != 0) {
            t1 = FUN_0c105a14(0x0, t0, a6);
            if (t1 != -1) {
                t0 = *(signed char *)0x8C00007E;
                if ((signed char)t0 == 0) {
                    *(unsigned int *)((a4 + 0x0)) = 0x0;
                    return 0x0;
                }
                if ((signed char)t0 == 1) {
                    *(unsigned int *)((a4 + 0x0)) = 0x1;
                    return 0x0;
                }
                return 0xFFFFFFFF;
            }
            return 0xFFFFFFFF;
        }
        return 0xFFFFFFFF;
    }
    return 0xFFFFFFFF;
}

int FUN_0c0f7e80(int a4, int a5, int a6, int a7)
{
    if (a4 == 8) {
        return ((int (*)(int, int, int, int))(0xC0F7EFC))(0x0, a5, a6, a7);
    }
    if (a4 == 16) {
        return ((int (*)(int, int, int, int))(0xC0F7EFC))(0x1, a5, a6, a7);
    }
    if (a4 == 32) {
        return ((int (*)(int, int, int, int))(0xC0F7EFC))(0x2, a5, a6, a7);
    }
    if (a4 == 64) {
        return ((int (*)(int, int, int, int))(0xC0F7EFC))(0x3, a5, a6, a7);
    }
    if (a4 == 0x80) {
        return ((int (*)(int, int, int, int))(0xC0F7EFC))(0x4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0F7EE0))(a4, a5, a6, a7);
}

int FUN_0c1042ba(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t7;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x30)))) {
            return 0xFFFFFFFF;
        }
        t7 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0xC)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x24))), (t0 << 1), a6, a7);
        if (((unsigned short)t7 != 0xFFFC) && ((unsigned short)t7 != 0xFFFF)) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return t0;
}

int fmMngNum2Bit(int a4, int a5, int a6)
{
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t0;

    t1 = (((a6 << 2) << 2) << 2);
    t3 = a4;
    t4 = a5;
    t5 = a6;
    for (;;) {
        if ((int)t1 <= 0) {
            break;
        }
        if ((int)t3 >= (int)0x8) {
            *(unsigned char *)((t4 + 0x0)) = 0x0;
            t4 = (t4 + 0x1);
            t3 = (t3 - 8);
        } else {
            if ((int)t3 > 0) {
                t0 = 0x8;
                for (;;) {
                    t5 = (t5 << 1);
                    if ((int)t3 > 0) {
                        t3 = (t3 - 1);
                    } else {
                        t5 = (t5 | (0x1));
                    }
                    t0 = (t0 - 0x1);
                    if (t0 == 0) {
                        break;
                    }
                }
                *(unsigned char *)((t4 + 0x0)) = t5;
            } else {
                *(unsigned char *)((t4 + 0x0)) = 0xFFFFFFFF;
            }
            t4 = (t4 + 0x1);
        }
        t1 = (t1 - 1);
    }
    return 0x0;
}

int FUN_0c0e67a2(int a4, int a5, int a6)
{
    int stk[5];
    register int t0;
    register int t2;
    register int t3;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned short *)(((((int)stk + 0) + 0xE) + 0x0)) = a5;
    *(unsigned short *)(((((int)stk + 0) + 0xC) + 0x0)) = a6;
    t0 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 8)) = (t0 + 0x33);
    t2 = *(short *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 0)) = ((((*(short *)(((int)stk + 14))) << 2) << 2) | t2);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t3 = (t0 + 0x33);
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) >= (int)0x4) {
            break;
        }
        t3 = (*(int *)(((int)stk + 0)));
        *(unsigned char *)(((*(int *)(((int)stk + 8))) + 0x0)) = t3;
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x4);
        t3 = (*(int *)(((int)stk + 4)));
        t3 = (t3 + 0x1);
        *(unsigned int *)(((int)stk + 4)) = t3;
    }
    return t2;
}

int syRtcGetDate(int a4)
{
    register int t1;

    if ((((((struct o4_int *)0xC7FD0C8)->v)) & 0x1) == 1) {
        t1 = syRtcGetCountForce();
        syRtcCountToDate(t1, a4);
        (((struct o0_uint *)0xC7FD0C8)->v) = t1;
    } else {
        syRtcCountToDate(((((struct o0_int *)0xC7FD0C8)->v)), a4);
    }
    *(volatile signed char *)((a4 + 0x3));
    *(unsigned char *)((a4 + 0x7)) = (syRtcMakeDayOfWeek((*(short *)((a4 + 0x0))), (*(signed char *)((a4 + 0x2)))));
    *(unsigned char *)((a4 + 0x8)) = (syRtcMakeAgeOfMoon());
    return ((((struct o4_int *)0xC7FD0C8)->v));
}

int gdFsSeek(int a4, int a5, int a6)
{
    register int t4;
    register int t5;

    if (a4 != 0) {
        if (((((struct o4C_short *)(a4))->v)) == 0) {
            return 0xFFFFFFF6;
        }
        t4 = *(int *)((a4 + 0x10));
        if (a6 != 0) {
            if (a6 != 1) {
                if (a6 != 2) {
                    return 0xFFFFFFF0;
                }
                if (((int)(a5 + t4) >= 0) && ((int)(a5 + t4) <= (int)t4)) {
                    *(unsigned int *)((a4 + 0x14)) = (a5 + t4);
                    return 0x0;
                }
                return 0xFFFFFFEF;
            }
            t5 = *(int *)((a4 + 0x14));
            if (((int)(t5 + a5) >= 0) && ((int)(t5 + a5) <= (int)t4)) {
                *(unsigned int *)((a4 + 0x14)) = (t5 + a5);
                return 0x0;
            }
            return 0xFFFFFFEF;
        }
        if (((int)a5 >= 0) && ((int)a5 <= (int)t4)) {
            *(unsigned int *)((a4 + 0x14)) = a5;
            return 0x0;
        }
        return 0xFFFFFFEF;
    }
    return 0xFFFFFFF6;
}

int gdFsStrncmpi(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = 0x1;
    if ((int)a6 > 0) {
        t1 = a5;
        t2 = a4;
        t3 = a6;
        for (;;) {
            if ((*(signed char *)((t2 + 0x0))) != 0) {
                t4 = *(signed char *)((t2 + 0x0));
                t2 = (t2 + 0x1);
                t5 = (gdFsToUpper(t4));
                t4 = (signed char)t5;
                t6 = *(signed char *)((t1 + 0x0));
                t1 = (t1 + 0x1);
                t5 = (gdFsToUpper(t6));
                t5 = (signed char)t5;
                if (t4 == t5) {
                    t3 = (t3 - 1);
                    if ((int)t3 <= 0) {
                        t5 = 0x1;
                        return t5;
                    }
                    continue;
                }
                t5 = 0x0;
                return t5;
            }
            break;
        }
        t2 = 0x1;
        if ((*(signed char *)((t1 + 0x0))) != 0) {
            t2 = 0x0;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c107432(int a4, int a5, int a6, int a7, int a8)
{
    register int t1;

    if ((int)a8 <= 0) {
        return 0x0;
    }
    t1 = FUN_0c1151b8(((((struct o40_int *)(a4))->v)), a5, a7, a6, a8);
    if (t1 != 0) {
        mwRnaErrCallFunc(0xC15B36C);
    }
    return a8;
}

void kmiRegisterPhIntHandler(int a4)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    (((struct o224_uint *)(((int)_builtin_get_vbr())))->v) = a4;
    (((struct o30_uint *)0xA05F6900)->v) = 0x0;
    (((struct o38_uint *)0xA05F6900)->v) = 0x0;
    (((struct o0_uint *)0xA05F6900)->v) = 0xFFFFFFFF;
    (((struct o8_uint *)0xA05F6900)->v) = 0xFFFFFFFF;
    (((struct o30_uint *)0xA05F6900)->v) = 0x2807EC;
    (((struct o38_uint *)0xA05F6900)->v) = 0xE;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

int vmsio_ismount(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(int *)(((a4 << 2) + 0xC15B6C4));
    t2 = kdGetDevice(t1);
    t3 = kdGetDeviceInfo(t1);
    if ((*(signed char *)((t2 + 0x0))) != 0) {
        t2 = thunk_FUN_0c111b6e(t1);
        if ((t2 == 0) && (t0 = *(int *)((t3 + 0x0)), (t0 & 2) != 0)) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c0f0cba(int a4, int a5)
{
    register int t2;
    register int t4;

    t2 = gdFsSearchName(a4, (*(int *)(((*(int *)0xC346BD8) + 0x10))), 0x0);
    if (t2 == 0) {
        return 0xFFFFFFF8;
    }
    t4 = *(int *)(((*(int *)0xC346BD8) + 0x10));
    *(unsigned int *)((a5 + 0x0)) = ((*(int *)((((t4 + 0x10) + ((t2 - 1) * 0x2C)) + 0x0))) + 0x96);
    *(unsigned int *)((a5 + 0x4)) = (*(int *)((((t4 + 0x10) + ((t2 - 1) * 0x2C)) + 0x4)));
    *(unsigned char *)((a5 + 0x8)) = (*(signed char *)((((t4 + 0x10) + ((t2 - 1) * 0x2C)) + 0x8)));
    return 0x0;
}

int FUN_0c10077e(int a4, int a5)
{
    register int t0;

    t0 = kdDevGetFD(a5, 0x1);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)((a4 + 0x0)) = (((((unsigned char)(*(signed char *)((t0 + 0x1))) << 16) | ((unsigned char)(*(signed char *)((t0 + 0x2))) << 8)) | (((unsigned char)(*(signed char *)((t0 + 0x0))) << 16) << 8)) | (unsigned char)(*(signed char *)((t0 + 0x3))));
    return 0x0;
}

int kdDevGetGunInfo(int a4, int a5)
{
    register int t0;

    t0 = kdDevGetFD(a5, 0x20);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)((a4 + 0x0)) = (((((unsigned char)(*(signed char *)((t0 + 0x1))) << 16) | ((unsigned char)(*(signed char *)((t0 + 0x2))) << 8)) | (((unsigned char)(*(signed char *)((t0 + 0x0))) << 16) << 8)) | (unsigned char)(*(signed char *)((t0 + 0x3))));
    return 0x0;
}

