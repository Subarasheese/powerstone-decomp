/* Straight-line functions with calls and guards (batch gen_bm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10E8_int { char p[0x10E8]; int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o274_float { char p[0x274]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o7222_uchar { char p[0x7222]; unsigned char v; };
struct o7225_uchar { char p[0x7225]; unsigned char v; };
struct o7226_uchar { char p[0x7226]; unsigned char v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oE_short { char p[0xE]; short v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int ADXERR_CallErrFunc(int, int, int, int, int);
int FUN_0c0229d8(int, int, int, int);
int FUN_0c022a5a(int, int, int);
int hit_offset_point_by_owner(int, int, int);
int FUN_0c03c2f6(int);
int FUN_0c03c660(int);
int ai_clear_op_state(void);
int ai_script_branch(int, int);
int fx_spawn_0586de(void);
int obj_release(int);
int obj_destroy(int, int, int, int);
int FUN_0c0593e0(int);
int obj_tick_class(int, int);
int item_attach_to_hand(int);
int FUN_0c05b188(void);
int FUN_0c05db76(int);
int FUN_0c05dbf4(void);
int FUN_0c05deec(int);
int FUN_0c05df96(void);
int FUN_0c05e01e(int);
int FUN_0c05e06e(int, float);
int FUN_0c05e424(int);
int FUN_0c05e4e8(void);
int FUN_0c05e564(int);
int FUN_0c05e59e(int);
int FUN_0c05fc00(void);
int FUN_0c05fc08(void);
int FUN_0c05fc1c(void);
int pl_falcon_state_enter(int, int, int, int);
int FUN_0c08bd78(int);
int FUN_0c08cd18(int);
int ai_run_reaction_script(int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_state40_phase0(int);
int pl_state40_phase1(int);
int pl_state40_phase2(int);
int pl_end_action_reset(int);
int pl_clear_tint_flag(int);
int pl_reset_pose(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int pl_spawn_hit_effect_with_se(int);
int pl_reset_combo_counter(int);
int hit_find_contact_direction(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_turn_to_opponent(int, int);
int pl_stick_dir_angle(int);
int pl_landed(int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int pl_detect_special_input(int, int);
int pl_set_velocity_forward(int, int, float);
int pl_change_state(int, int, int);
int bgm_stop_all(void);
int bgm_play_here(void);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int FUN_0c0a3dcc(int, int);
int FUN_0c0a3f30(int);
int obj_set_mode_owner(int, int, int);
int obj_find_hitting_player(int);
int FUN_0c0ad408(int);
int FUN_0c0ad46e(void);
int stage_type02_break_step(int);
int FUN_0c0ae396(void);
int stage_gimmick_21_spawn_b(int, int);
int stage_gimmick_24_spawn_b(int, int);
int stage_gimmick_25_spawn_b(int, int);
int stage_gimmick_41_spawn_b(int, int);
int FUN_0c0d54ac(void);
int cam_reset_shake(int, int, int, int);
float math_exp_float(int, int, int, int, float);
int FUN_0c0e5d22(int);
int FUN_0c0efc6a(int, int, int, int, int, int);
int FUN_0c0ff1ac(int, int, int, int);
int FUN_0c0ff4b4(int);
int FUN_0c100260(void);
int FUN_0c106436(int, int, int, int);
int FUN_0c1070a0(int);
int FUN_0c1070b8(int);
int FUN_0c107872(int, int);
int FUN_0c10796a(int, int);
int FUN_0c107e7e(int);
int FUN_0c107ea4(int);
int FUN_0c115032(int, int);
extern int _builtin_tas(char *);
int gdFsLoadDirFast(void);
int kdSetCallback(int, int, int);
int kmiWriteRegister(int, int);
int mpdrv_dpf(int, int, int, int, int);
int mpdrv_set_setcond_ns(int, int, int, int);
extern int mwRnaErrCallFunc();
int strncpy(int, int, int);
int syRtcAicaSetDateHi(int);
int syRtcAicaSetDateLo(int);
int syRtcAicaSetWriteFlag(void);
int syRtcDateToCount(void);
int syRtcGetCountForce(void);
int kdSetSetConditionEx(int a4, int a5, int a6, int a7, int a8);
int pl_wangtang_mode10_phase2(int a4);
int pl_kraken_mode04_phase3(int a4);
int FUN_0c08bea0(int a4);
int pl_enter_state_21(int a4, int a5);
int FUN_0c0230e2(int a4, int a5, int a6, int a7);
int FUN_0c1065b8(int a4, int a5, int a6, int a7);
int ai_op30_jump_if_reg_ge(int a4, int a5);
int ai_op59_jump_if_reg_eq(int a4, int a5);
int FUN_0c05e3b8(int a4);
int pl_falcon_special2_phase3(int a4);
int ai_slot_state0_update(int a4, int a5, int a6, int a7);
int obj_release_all(void);
int pl_wangtang_attack_kind13(int a4, int a5, int a6, int a7);
int FUN_0c06f8a8(int a4);
int FUN_0c08c0c2(int a4);
int FUN_0c0d5222(void);
int FUN_0c0de640(int a4, int a5, int a6, int a7, int a8);
float FUN_0c0dfaf2(int a4, int a5, int a6, int a7);
int FUN_0c0e6a20(int a4, int a5);
int syRtcSetDate(void);
int FUN_0c107508(int a4, int a5, int a6, int a7);
int ai_op64_clear_cmd_bits(void);
int pl_garuda_victim_phase2(int a4);
int FUN_0c0d51d2(int a4);
int ai_op20_get_target_height_diff(int a4);
int ai_op21_get_own_height_diff(int a4);
int ai_op80_wait_until_actionable(int a4);
int pl_gunrock_mode11_phase0(int a4);
int pl_kraken_attack_kind6_phase3(int a4);
int FUN_0c08c074(int a4);
int pl_state40_update(int a4);
int FUN_0c0ed78c(int a4, int a5, int a6, int a7);
int FUN_0c108188(int a4, int a5, int a6, int a7);
int ai_op63_set_cmd_bits(void);
int pl_falcon_check_special_input(int a4);
int pl_falcon_state12_phase1(int a4);
int pl_ryoma_check_special_input(int a4);
int pl_jack_check_special_input(int a4);
int pl_gunrock_check_special_input(int a4);
int pl_rouge_special_id6(int a4);
int pl_garuda_victim_phase3(int a4);
int pl_ayame_get_state28_action(int a4);
int pl_rouge_get_state28_action(int a4);
int pl_kraken_get_state28_action(int a4);
int stage_gimmick_36_update_b(int a4, int a5, int a6, int a7);
int fx_tick_03c1ec(int a4, int a5, int a6, int a7);
int fx_tick_03c5c0(int a4, int a5, int a6, int a7);
int FUN_0c05b18c(int a4, int a5, int a6, int a7);
int item_tick_held(int a4);
int FUN_0c05dea2(int a4);
int FUN_0c05e4ec(int a4);
int FUN_0c05db2c(int a4);
int FUN_0c05dfd4(int a4, float f4);
int pl_wangtang_mode11_phase1(int a4);
int stage_type01_mode_05_held(int a4);
int stage_gimmick_24_update(int a4, int a5, int a6, int a7);
int stage_gimmick_25_update(int a4, int a5, int a6, int a7);
int stage_type02_mode_18_held(int a4);
int stage_gimmick_21_update(int a4, int a5, int a6, int a7);
int stage_gimmick_41_update(int a4, int a5, int a6, int a7);
int FUN_0c0e47c0(int a4, int a5);
int FUN_0c0e4810(int a4, int a5);
int ai_op77_set_var18(void);
int ai_op32_jump_if_reg_zero(int a4, int a5);
int ai_op75_set_timer(void);
int ai_op38_jump_if_flag24_clear(int a4, int a5);
int ai_op33_jump_if_reg_nonzero(int a4, int a5);
int ai_op39_jump_if_flag24_set(int a4, int a5);
int ai_op41_jump_if_flag25_set(int a4, int a5);
int ai_op40_jump_if_flag25_clear(int a4, int a5);
int FUN_0c068558(int a4);
int FUN_0c0fb7b6(int a4);
int pl_state09_update(int a4, int a5, int a6, int a7);
int pl_rouge_attack_init(int a4, int a5, int a6, int a7);
int pl_state36_phase1(int a4);
int pl_state39_phase1(int a4);
int ai_op78_get_var18(void);
int ai_op58(int a4);

int kdSetSetConditionEx(int a4, int a5, int a6, int a7, int a8)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC15B054);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_setcond_ns(a4, a5, a6, a7);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a8, t2);
    }
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t2;
}

int FUN_0c1065b8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t5;

    t0 = gdFsLoadDirFast();
    if (t0 == 0) {
        ADXERR_CallErrFunc(t0, 0x0, 0x0, 0x0, 0xC15B198);
        t5 = 0x0;
    } else {
        t5 = FUN_0c106436(t0, 0x0, (((a6 << 8) << 2) << 1), a7);
        strncpy((t5 + 0x40), a4, 0x20);
    }
    return t5;
}

int FUN_0c0e6a20(int a4, int a5)
{
    int stk[3];
    register int t0;
    register int t3;

    *(unsigned short *)(((((int)stk + 0) + 0x2) + 0x0)) = a4;
    *(unsigned short *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)(((int)stk + 2));
    t3 = *(short *)((0xC7FD110 + (unsigned char)((((t0 << 1) + t0) << 2) << 1)));
    if (t3 != 1) {
        return t3;
    }
    return (FUN_0c0e5d22((((((*(short *)(((int)stk + 0))) + 0x40) << 16) | ((((*(short *)(((int)stk + 2))) << 8) << 2) << 2)) | 0xCA1)));
}

int syRtcSetDate(void)
{
    int stk[1];
    register int t1;
    register int t23;
    register int t3;
    register int t5;
    register int t6;
    int t8;

    syRtcDateToCount();
    t1 = syRtcAicaSetWriteFlag();
    t23 = t1;
    if (t1 == 0) {
        t3 = syRtcAicaSetDateLo((unsigned short)(*(int *)(((int)stk + 0))));
        t23 = t3;
        if (t3 == 0) {
            t5 = syRtcAicaSetDateHi((unsigned short)((unsigned int)(*(int *)(((int)stk + 0))) >> 16));
            t23 = t5;
            if (t5 == 0) {
                t6 = syRtcGetCountForce();
                t23 = 0xFFFFFFFF;
                if ((t6 != (*(int *)(((int)stk + 0)))) && (t8 = *(int *)(((int)stk + 0)), t6 != (t8 + 0x1))) {
                } else {
                    *(unsigned int *)0xC7FD0C8 = t6;
                    t23 = 0x0;
                }
            }
        }
    }
    return t23;
}

int FUN_0c107508(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t3;
    register int t11;

    if (a4 == 0) {
        t11 = (mwRnaErrCallFunc(0xC15B31C, a5, a6, a7));
    } else {
        FUN_0c1070a0(((int)stk + 0));
        if ((*(signed char *)((a4 + 0x7))) == 0) {
            t3 = FUN_0c107e7e(a4);
            (((struct o88_uint *)(a4))->v) = (t3 | (FUN_0c107ea4(a4)));
            FUN_0c10796a(a4, 0x0);
            FUN_0c107872(a4, 0x0);
            *(unsigned char *)((a4 + 0x7)) = 0x1;
        }
        t11 = (FUN_0c1070b8(((int)stk + 0)));
    }
    return t11;
}

int FUN_0c0ed78c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    *(unsigned int *)((((*(int *)((((((struct o8_int *)0xC346B6C)->v)) + 0x0))) + ((((*(int *)((a4 + 0x0))) << 2) << 2) << 1)) + 0x14)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    *(unsigned int *)((a4 + 0x30)) = 0x1;
    t0 = *(int *)((a4 + 0x0));
    t1 = (((struct o8_int *)0xC346B6C)->v);
    *(unsigned int *)((((t0 << 2) + (0xEC + t1)) + 0x0)) = ((*(int *)((((t0 << 2) + (0xEC + t1)) + 0x0))) + 0x1);
    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)((((((struct o0_int *)0xC346B6C)->v)) + 0x0)) = ((int)0x1 << (int)(t0 + 0xF));
    if ((*(int *)((a4 + 0x1C))) != 0) {
        t2 = *(int *)((a4 + 0x20));
        t3 = *(int *)((a4 + 0x1C));
        return ((int (*)(int, int, int, int))(t3))(t2, ((int)0x1 << (int)(t0 + 0xF)), 0x0, a7);
    }
    return t1;
}

int FUN_0c108188(int a4, int a5, int a6, int a7)
{
    register int t1;

    if (a4 == 0) {
        return ((int (*)(int, int, int, int))(mwRnaErrCallFunc))(0xC15B31C, a5, a6, a7);
    }
    (((struct o74_uint *)(a4))->v) = a5;
    (((struct o78_uint *)(a4))->v) = a6;
    t1 = FUN_0c115032(((((struct o40_int *)(a4))->v)), a5);
    if (t1 != 0) {
        return ((int (*)(int))(mwRnaErrCallFunc))(0xC15B4BC);
    }
    return t1;
}

int FUN_0c0e47c0(int a4, int a5)
{
    if (((((struct o0_int *)0xC7FD070)->v)) != 0) {
        (((struct o0_uint *)0xC7FD070)->v) = 0x0;
        FUN_0c0ff4b4(((((struct o30_int *)0xC7FD070)->v)));
        (((struct o30_uint *)0xC7FD070)->v) = 0xFFFFFFFF;
    }
    if (a5 != 0) {
        (((struct o0_uint *)0xC7FD070)->v) = a5;
        (((struct o30_uint *)0xC7FD070)->v) = (FUN_0c0ff1ac(0x920, a5, 0x0, 0x0));
    }
    return 0x1;
}

int FUN_0c0e4810(int a4, int a5)
{
    if (((((struct o0_int *)0xC7FD074)->v)) != 0) {
        (((struct o0_uint *)0xC7FD074)->v) = 0x0;
        FUN_0c0ff4b4(((((struct o30_int *)0xC7FD074)->v)));
        (((struct o30_uint *)0xC7FD074)->v) = 0xFFFFFFFF;
    }
    if (a5 != 0) {
        (((struct o0_uint *)0xC7FD074)->v) = a5;
        (((struct o30_uint *)0xC7FD074)->v) = (FUN_0c0ff1ac(0xB00, a5, 0x0, 0x0));
    }
    return 0x1;
}

int FUN_0c0fb7b6(int a4)
{
    register int t7;

    if (a4 == 1) {
        kmiWriteRegister(0x44, (((((struct o0_int *)0xC817280)->v)) & 0xFFFFFFFE));
        t7 = (((((struct o3C_int *)0xC817280)->v)) | 0x8);
    } else {
        kmiWriteRegister(0x44, (((((struct o0_int *)0xC817280)->v)) & 0xFFFFFFFE));
        t7 = ((((struct o3C_int *)0xC817280)->v));
    }
    kmiWriteRegister(0xE8, t7);
    kmiWriteRegister(0x44, ((((struct o0_int *)0xC817280)->v)));
    return 0x0;
}

