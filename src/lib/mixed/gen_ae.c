/* Straight-line functions with calls and guards (batch gen_ae): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e48a0(void);
int FUN_0c0faf30(int, int, int, int);
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o10B_uchar { char p[0x10B]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1B4_short { char p[0x1B4]; short v; };
struct o1B4_ushort { char p[0x1B4]; unsigned short v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o308_uchar { char p[0x308]; unsigned char v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3E_short { char p[0x3E]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_float { char p[0x70]; float v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o71D4_ushort { char p[0x71D4]; unsigned short v; };
struct o71D6_short { char p[0x71D6]; short v; };
struct o71D8_short { char p[0x71D8]; short v; };
struct o71D8_ushort { char p[0x71D8]; unsigned short v; };
struct o7200_int { char p[0x7200]; int v; };
struct o7200_uint { char p[0x7200]; unsigned int v; };
struct o720F_uchar { char p[0x720F]; unsigned char v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int ADXSTM_GetFad(int, int);
int ADXSTM_GetFsizeByte(int, int);
int ADXSTM_GetFsizeSct(int, int);
int save_reset_all_data(void);
int vmu_make_save_image(void);
int vmu_step_save(void);
int vmu_step_write_vmgame(void);
int vmu_step_rewrite_vmgame(void);
int vmu_check_show_message(int);
extern int vmu_check_run_objects();
int vmu_check_pad_pressed(int);
int ending_obj_init_basic(int);
int ending_obj_set_sprite(int, int);
int vmu_menu_spawn_message(int);
int vmu_menu_update_objs(int, int, int, int);
int FUN_0c02b0dc(void);
int FUN_0c02b724(void);
int FUN_0c02b7d4(int);
int FUN_0c02dc86(void);
int FUN_0c02e998(void);
int FUN_0c02ee3c(void);
int ui_update_hud_indicators(void);
int ui_draw_hud_cell_pair(void);
int FUN_0c02f98a(void);
int FUN_0c02ff18(void);
int ui_update_hit_counter(void);
int FUN_0c03082e(void);
int FUN_0c030920(void);
int FUN_0c03107e(void);
int ui_fade_start(int, int, int, int);
int fx_spawn_044094(int);
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
int ai_clear_op_state(void);
int obj_create(int, int, int);
extern int res_switch_scene();
int math_vec3_sub(int, int, int);
int math_vec3_normalize(int);
int math_mat_transform_point(int, int);
int FUN_0c06231c(int, int, int);
int FUN_0c063428(int);
int FUN_0c0634b4(int);
int ai_reaction_check_0(int, int);
int ai_reaction_check_1(int, int);
int ai_reaction_check_2(int, int);
int ai_reaction_check_3(int, int);
int FUN_0c08e382(int);
int pl_update_hitstop_shake(int);
int pl_state28_sub0_update(int);
int pl_state28_sub1_update(int);
int pl_state28_sub2_update(int);
int pl_state28_sub3_update(int);
int pl_step_motion(int);
int FUN_0c09c782(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_landed(int);
int FUN_0c09eb32(int, int);
int pl_end_action_choose_state(int);
int pl_change_state(int, int, int);
int snd_play_se(int);
int bgm_stop_all(void);
int snd_play_side_se(int, int);
int FUN_0c0a3cd6(int);
int obj_set_mode_owner(int, int);
int obj_touched_by_slot(int, int);
int obj_can_interact(int, int, int);
int FUN_0c0d7032(int, int);
int cam_compute_follow(int, int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
float math_rand_float(void);
int syRtcGetDate(int);
int snd_send_command(int);
int FUN_0c0e60ce(int, int);
int FUN_0c0e6102(int, int);
int _modls(int);
int _modlu(void);
extern int _quick_evn_mvn();
extern int _quick_odd_mvn();
int _slow_mvn(int);
int FUN_0c0ed9e8(int, int, int);
int FUN_0c0efdee(int);
int FUN_0c0f0072(int);
int FUN_0c0f3d20(int, int);
int FUN_0c0ffdba(void);
int FUN_0c0ffdfc(void);
int kdGetDeviceInfo(int);
int FUN_0c10121c(int, int, int);
int FUN_0c109c06(int, int);
int FUN_0c10a47c(int, int, int);
int kmiRegisterPhIntHandler(int);
int FUN_0c11142c(int, int, int, int);
int FUN_0c1137d4(int);
int FUN_0c113890(int);
int FUN_0c11568c(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buSaveExecFile(int, int, int, int, int, int);
int buSaveFile(int, int, int, int, int, int);
int memcpy(int, int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int);
int thunk_math_mat_get_translate(int, int);
int fmMngMcpy(void);
int umemcmp(int, int, int);
int part_pool2_init(void);
int cam_init_from_stage_block(int a4);
int FUN_0c0f2ccc(int a4);
int vmu_write_save_file(int a4);
int snd_spawn_delayed_sound(int a4, int a5, int a6);
int fx_spawn_0588d8(int a4, int a5);
int pl_mode15_cls09_10_12_f0(int a4);
int FUN_0c0cb252(int a4, float f4);
int dbgedit_set_start_positions(int a4);
int math_tan_reduce_quadrant(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0efe92(int a4);
int ovMdlEntryTbl(int a4);
int ovMdlDeleteTbl(int a4);
int read_fat(int a4);
int FUN_0c113958(int a4);
int obj_step_pos_vel_acc(int a4);
int vmu_menu_state_write_vmgame(int a4, int a5, int a6, int a7);
int vmu_menu_state_rewrite_vmgame(int a4, int a5, int a6, int a7);
void FUN_0c03b5da(int a4);
void FUN_0c03c0fa(int a4);
void FUN_0c03c2f6(int a4);
int FUN_0c04258a(int a4);
int FUN_0c044104(int a4);
int FUN_0c0442c0(int a4);
int ai_op46_wait_until_free(int a4);
int part_pool0_init(void);
int part_pool1_init(void);
int pl_mode15_cls11_f1(int a4);
int ai_roll_chance(int a4, int a5);
int ai_pick_reaction(int a4, int a5);
int FUN_0c08ee66(int a4);
int pl_angle_to_opponent(int a4);
void FUN_0c0a40e4(int a4);
int FUN_0c0bfe20(int a4);
int obj_integrate_motion(int a4);
int FUN_0c0d7566(int a4, int a5, int a6, int a7);
int sys_set_interrupt_handler(int a4, int a5, int a6, int a7);
int FUN_0c0f5428(int a4, int a5);
int FUN_0c0fff62(int a4, int a5, int a6, int a7);
int FUN_0c114cba(int a4, int a5, int a6);
int vmu_write_vmgame_file(int a4, int a5);
int ending_spawn_uv_scroll(void);
int opt_game_settings_changed(void);
int ending_spawn_sprite_pair(void);
int FUN_0c02b828(void);
int FUN_0c055782(int a4);
void ui_draw_hud(void);
float math_vec2_cos_between(float f4, float f5, float f6, float f7);
int FUN_0c06336c(int a4);
int FUN_0c0633c0(int a4);
int FUN_0c063318(int a4);
int FUN_0c0634f4(int a4);
int pl_rel_angle_to_linked(int a4);
int FUN_0c08b96e(int a4);
int FUN_0c09de5e(int a4, int a5, int a6, int a7);
int FUN_0c09ebd4(int a4);
void FUN_0c0a3e10(int a4, int a5, int a6);
int cam_mode_16(int a4);
int FUN_0c0e6212(int a4, int a5, int a6);
void FUN_0c0fb042(int a4, int a5, int a6, int a7);
int FUN_0c10aa80(int a4);
int FUN_0c1094a0(int a4, int a5);
int FUN_0c10b3e0(int a4);
int FUN_0c10d0c0(void);
int FUN_0c1139b0(int a4, int a5, int a6);
int vmu_check_mode_08(int a4, int a5, int a6, int a7);
int conv_s16x7_to_f32(int a4, int a5);
int vmu_menu_state_save(int a4, int a5, int a6, int a7);
int FUN_0c03c660(int a4);
int FUN_0c03d010(int a4);
int ai_calc_dist_to_saved_pos(int a4);
int FUN_0c04cafe(int a4);
int ai_calc_dist_to_goal_point(int a4);
int pl_state_dispatch_720a(int a4);
int FUN_0c0c209c(int a4);
int FUN_0c0c20ee(int a4);
int FUN_0c0c264a(int a4);
int FUN_0c0e6afc(int a4, int a5);
int FUN_0c0e6b60(int a4, int a5);
int FUN_0c104308(int a4, int a5, int a6, int a7);
int FUN_0c1071b4(int a4);
int vmu_parse_save_image(void);
int FUN_0c03d19a(int a4);
int FUN_0c055566(int a4);
int pl_mash_reduce_counter(int a4, int a5);
int pl_tick_hitstop(int a4);
int FUN_0c0d71fa(void);
int cam_force_mode(int a4, int a5, int a6);
int FUN_0c0fcfa0(int a4);

int FUN_0c0f2ccc(int a4)
{
    register int t1;
    register int t2;
    register int t3;

    t1 = kdGetDeviceInfo((unsigned char)(*(signed char *)((a4 + 0xC15A6A4))));
    t2 = kdGetDeviceInfo(a4);
    t3 = 0x1;
    if ((a4 != 2) && ((a4 != 8) && ((a4 != 14) && (a4 != 20)))) {
        t3 = 0x0;
    }
    return (unsigned char)(*(signed char *)((0xC15A67C + (((unsigned char)(*(signed char *)((t3 + (t1 + 0x12)))) << 2) + (unsigned char)(*(signed char *)(((t2 + 0x12) + 0x0)))))));
}

int FUN_0c0efe92(int a4)
{
    int stk[2];
    register int t0;
    register int t2;
    register int t6;
    register int t9;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = FUN_0c0efdee((((int)stk + 0) + 0x4));
    if ((int)(*(int *)((t0 + 0x0))) > 0) {
        t2 = 0x0;
        for (;;) {
            t6 = umemcmp((*(int *)(((int)stk + 0))), ((*(int *)(((((t2 << 2) << 1) + (t0 + 0x8)) + 0x0))) + 0x10), 0x10);
            if (t6 == 0) {
                break;
            }
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)(*(int *)((t0 + 0x0)))) {
                return 0xFFFFFFFE;
            }
        }
        t9 = t2;
    } else {
        t9 = 0xFFFFFFFE;
    }
    return t9;
}

int ovMdlEntryTbl(int a4)
{
    register int t0;
    register int t2;

    t0 = umemcmp((a4 + 0x30), 0xC15A1D0, 0x10);
    t2 = 0xFFFFFFFF;
    if (t0 != 0) {
    } else {
        t2 = t0;
    }
    return t2;
}

int ovMdlDeleteTbl(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = umemcmp((a4 + 0x30), 0xC15A1D0, 0x10);
    t1 = 0xFFFFFFFF;
    if (t0 == 0) {
        t0 = 0x1;
        for (;;) {
            t2 = umemcmp((((((t0 << 2) << 2) << 1) + (a4 + 0x20)) + 0x10), 0xC15A1E0, 0x10);
            if (t2 != 0) {
                FUN_0c0f0072(((((t0 << 2) << 2) << 1) + (a4 + 0x20)));
                t0 = (t0 + 0x1);
                continue;
            }
            break;
        }
        t1 = 0x0;
    }
    return t1;
}

int read_fat(int a4)
{
    register int t1;
    register int t8;
    register int t2;
    register int t7;

    t1 = *(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x10));
    t8 = 0x0;
    if ((int)t1 > 0) {
        t2 = 0x0;
        for (;;) {
            t7 = FUN_0c10121c(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0xC))) + t2), (((t2 << 8) << 1) + (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x24)))));
            if ((int)t7 < 0) {
                break;
            }
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)t1) {
                return 0x0;
            }
        }
        t8 = t7;
    }
    return t8;
}

int FUN_0c113958(int a4)
{
    register int t15;
    register int t1;
    register int t2;
    register int t6;

    t15 = 0xFFFFFFFA;
    if ((*(short *)((a4 + 0x2))) == 0) {
        t1 = *(int *)((a4 + 0x28));
        t2 = *(int *)((a4 + 0xC));
        *(volatile int *)((a4 + 0x30));
        fmMngMcpy();
        t15 = 0x0;
        if ((unsigned short)(*(short *)(((((((t1 + 0x1) << 2) << 2) << 2) + t2) + 0x0))) != 0xFFFF) {
            t6 = FUN_0c11568c(0x3E, (((((t1 + 0x1) << 2) << 2) << 2) + t2));
            t15 = 0x0;
            if ((unsigned short)((((struct o3E_short *)((((((t1 + 0x1) << 2) << 2) << 2) + t2)))->v)) != (unsigned short)t6) {
                t15 = 0xFFFFFFFC;
            }
        }
    }
    return t15;
}

int sys_set_interrupt_handler(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t4;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xE);
    if ((int)a4 < (int)0xC) {
        t4 = (((int (*)(int, int, int, int))((*(int *)(((a4 << 2) + 0xC346AD8)))))(a4, a5, a6, a7));
    } else {
        t4 = (FUN_0c0e48a0());
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t4;
}

int FUN_0c0f5428(int a4, int a5)
{
    int stk[5];
    register int t0;
    register int t15;
    register int t1;
    register int t2;

    t0 = ADXSTM_GetFad(a5, (((int)stk + 0) + 0x8));
    t15 = t0;
    if ((int)t0 >= 0) {
        t1 = ADXSTM_GetFsizeSct(a5, (((int)stk + 0) + 0x4));
        t15 = t1;
        if ((int)t1 >= 0) {
            t2 = ADXSTM_GetFsizeByte(a5, ((int)stk + 0));
            t15 = t2;
            if ((int)t2 < 0) {
            } else {
                *(unsigned int *)((a4 + 0xC)) = (*(int *)(((int)stk + 8)));
                *(unsigned int *)((a4 + 0x10)) = (*(int *)(((int)stk + 4)));
                *(unsigned int *)((a4 + 0x14)) = (*(int *)(((int)stk + 0)));
                t15 = 0x0;
            }
        }
    }
    return t15;
}

int FUN_0c0fff62(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    FUN_0c0ffdfc();
    t2 = FUN_0c11142c(a4, a5, a6, a7);
    FUN_0c0ffdba();
    *(unsigned int *)0xC805708 = 0x1;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t2;
}

int FUN_0c114cba(int a4, int a5, int a6)
{
    register int t12;
    register int t0;

    t12 = 0x0;
    if (a5 == 0) {
    } else {
        t0 = FUN_0c0e60ce(a5, a6);
        if (t0 == 0) {
            mwRnaErrCallFunc(0xC15B940);
        }
        memcpy((*(int *)(((*(int *)((a4 + 0x10))) + 0x4))), t0, (*(int *)((a6 + 0x0))));
        FUN_0c0e6102((*(short *)((a4 + 0x2))), (*(int *)(((*(int *)((a4 + 0x10))) + 0x4))));
        t12 = 0x1;
    }
    *(unsigned char *)((a4 + 0x1)) = t12;
    return t12;
}

int FUN_0c0e6212(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t6;

    *(unsigned short *)(((((int)stk + 0) + 0x6) + 0x0)) = a4;
    *(unsigned short *)(((((int)stk + 0) + 0x4) + 0x0)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = *(signed char *)(((int)stk + 6));
    if ((*(short *)((0xC7FD110 + (unsigned char)((((t0 << 1) + t0) << 2) << 1)))) != 1) {
        return 0x0;
    }
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = (*(int *)0xC7FD0F4);
    t6 = *(signed char *)(((int)stk + 6));
    return (*(int *)(((0xC7FD114 + (unsigned char)((((t6 << 1) + t6) << 2) << 1)) + ((*(short *)(((int)stk + 4))) << 2))));
}

void FUN_0c0fb042(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    if (a6 != 0) {
        *(unsigned int *)(((((a5 << 2) << 1) + (0x230 + a4)) + 0x0)) = a6;
        *(unsigned int *)((((0x230 + a4) + ((a5 << 2) << 1)) + 0x4)) = a7;
    } else {
        FUN_0c0faf30(a4, a5, a6, a7);
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

int FUN_0c10aa80(int a4)
{
    register int t0;
    register int t2;
    register int t3;
    register int t1;

    t0 = 0x0;
    t2 = 0xC8174A8;
    t3 = 0xC8174A8;
    for (;;) {
        t0 = (t0 + 0x1);
        if (t3 == a4) {
            t1 = (*(short *)((t2 + 0x0)));
            t1 = (t1 & 0xFFFE);
            *(unsigned short *)((t2 + 0x0)) = t1;
        }
        t3 = (t3 + 0x18);
        t2 = (t2 + 0x18);
        if (t3 == a4) {
            t1 = (*(short *)((t2 + 0x0)));
            t1 = (t1 & 0xFFFE);
            *(unsigned short *)((t2 + 0x0)) = t1;
        }
        t3 = (t3 + 0x18);
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x18);
        if (t3 == a4) {
            t1 = (*(short *)((t2 + 0x0)));
            t1 = (t1 & 0xFFFE);
            *(unsigned short *)((t2 + 0x0)) = t1;
        }
        t3 = (t3 + 0x18);
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x18);
        if (t3 == a4) {
            t1 = (*(short *)((t2 + 0x0)));
            t1 = (t1 & 0xFFFE);
            *(unsigned short *)((t2 + 0x0)) = t1;
        }
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x18);
        t3 = (t3 + 0x18);
        if ((int)t0 >= (int)0x1000) {
            break;
        }
    }
    return 0x1000;
}

int FUN_0c1094a0(int a4, int a5)
{
    int stk[2];
    register int t4;
    register int t9;

    if (((*(int *)0xC816FC8) & 4) != 0) {
        FUN_0c109c06(((int)stk + 0), (((int)stk + 0) + 0x4));
        t4 = 0x0;
        if ((int)(*(int *)(((int)stk + 0))) < (int)(*(int *)(((int)stk + 4)))) {
            t4 = 0x1;
        }
        t9 = (FUN_0c10a47c(t4, a4, a5));
    } else {
        t9 = (FUN_0c10a47c(0x1, a4, a5));
    }
    return t9;
}

int FUN_0c10b3e0(int a4)
{
    register int t0;
    register int t2;
    register int t3;
    register int t1;

    t0 = 0x0;
    t2 = 0xC82F4A8;
    t3 = 0xC82F4A8;
    for (;;) {
        t0 = (t0 + 0x1);
        if (t3 == a4) {
            t1 = (*(short *)((t2 + 0x0)));
            t1 = (t1 & 0xFFFE);
            *(unsigned short *)((t2 + 0x0)) = t1;
        }
        t3 = (t3 + 0x4C);
        t2 = (t2 + 0x4C);
        if (t3 == a4) {
            t1 = (*(short *)((t2 + 0x0)));
            t1 = (t1 & 0xFFFE);
            *(unsigned short *)((t2 + 0x0)) = t1;
        }
        t3 = (t3 + 0x4C);
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x4C);
        if (t3 == a4) {
            t1 = (*(short *)((t2 + 0x0)));
            t1 = (t1 & 0xFFFE);
            *(unsigned short *)((t2 + 0x0)) = t1;
        }
        t3 = (t3 + 0x4C);
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x4C);
        if (t3 == a4) {
            t1 = (*(short *)((t2 + 0x0)));
            t1 = (t1 & 0xFFFE);
            *(unsigned short *)((t2 + 0x0)) = t1;
        }
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x4C);
        t3 = (t3 + 0x4C);
        if ((int)t0 >= (int)0x400) {
            break;
        }
    }
    return 0x400;
}

int FUN_0c10d0c0(void)
{
    register int t1;
    register int t2;

    kmiRegisterPhIntHandler(0xC10DDD2);
    *(unsigned int *)0xC8171AC = 0x0;
    *(unsigned int *)0xC817268 = 0x0;
    (((struct o0_uint *)0xC817330)->v) = 0x0;
    (((struct o4_uint *)0xC817330)->v) = 0x0;
    (((struct o4_uint *)0xC8426C8)->v) = 0x0;
    (((struct o8_uint *)0xC8426C8)->v) = 0x0;
    (((struct oC_uint *)0xC8426C8)->v) = 0x0;
    (((struct o10_uint *)0xC8426C8)->v) = 0x0;
    (((struct o14_uint *)0xC8426C8)->v) = 0x0;
    (((struct o18_uint *)0xC8426C8)->v) = 0x0;
    (((struct o1C_uint *)0xC8426C8)->v) = 0x0;
    (((struct o20_uint *)0xC8426C8)->v) = 0x0;
    (((struct o24_uint *)0xC8426C8)->v) = 0x0;
    *(unsigned int *)0xC84271C = 0x0;
    (((struct o0_uint *)0xC8426C8)->v) = 0x0;
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        t2 = (t2 + 0x1);
        *(unsigned int *)(((0xC8426F8 + t1) + 0x0)) = 0x0;
        t1 = (t1 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0x5) {
            break;
        }
    }
    return 0x5;
}

int FUN_0c1139b0(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((a4 + 0x24));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = 0xFFFFFFFE;
            if (t0 != 2) {
            } else {
                t1 = (FUN_0c1137d4(a4));
            }
            t0 = t1;
        } else {
            t1 = FUN_0c0ed9e8((*(int *)((a4 + 0x4))), a5, a6);
            t2 = 0xFFFFFFFD;
            if (t1 == -1) {
            } else {
                *(unsigned int *)((a4 + 0x24)) = 0x2;
                t2 = 0x1;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = FUN_0c113890(a4);
        t2 = t0;
        if (t0 == -10) {
            *(unsigned int *)((a4 + 0x24)) = 0x1;
            t2 = 0x1;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0e6afc(int a4, int a5)
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
    return (snd_send_command((((((*(short *)(((int)stk + 0))) + 0x40) << 16) | ((((*(short *)(((int)stk + 2))) << 8) << 2) << 2)) | 0x8A1)));
}

int FUN_0c0e6b60(int a4, int a5)
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
    return (snd_send_command((((((*(short *)(((int)stk + 0))) + 0x40) << 16) | ((((*(short *)(((int)stk + 2))) << 8) << 2) << 2)) | 0x9A1)));
}

int FUN_0c104308(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x30));
    if ((int)(t0 - 1) >= (int)a5) {
        t1 = (t0 - 1);
        for (;;) {
            t0 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0xC)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x24))), (t1 << 1), a6, a7);
            if ((unsigned short)t0 == 0xFFFC) {
                break;
            }
            t1 = (t1 - 1);
            if ((int)t1 < (int)a5) {
                return 0xFFFFFFFF;
            }
        }
        t0 = t1;
    } else {
        t0 = 0xFFFFFFFF;
    }
    return t0;
}

int FUN_0c1071b4(int a4)
{
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    *(unsigned char *)((a4 + 0x4)) = 0x0;
    *(unsigned char *)((a4 + 0x5)) = 0x0;
    *(unsigned char *)((a4 + 0x6)) = 0x0;
    *(unsigned int *)((a4 + 0x3C)) = 0x0;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = 0xAC44;
    *(unsigned int *)((a4 + 0x8)) = 0x10;
    (((struct o48_uint *)(a4))->v) = 0x2000;
    (((struct o4C_uint *)(a4))->v) = 0x2000;
    (((struct o50_uint *)(a4))->v) = 0x0;
    (((struct o60_uint *)(a4))->v) = 0x0;
    (((struct o6C_uint *)(a4))->v) = 0x0;
    (((struct o70_uint *)(a4))->v) = 0x0;
    (((struct o74_uint *)(a4))->v) = 0x0;
    (((struct o78_uint *)(a4))->v) = 0x0;
    (((struct o7C_uint *)(a4))->v) = 0x0;
    (((struct o80_uint *)(a4))->v) = 0x0;
    *(unsigned char *)((a4 + 0x7)) = 0x0;
    (((struct o88_uint *)(a4))->v) = 0x0;
    return 0x88;
}

int FUN_0c0fcfa0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t0 = *(int *)((a4 + 0x10));
    t1 = *(int *)((a4 + 0xC));
    t2 = (t1 * t0);
    if (((*(int *)((a4 + 0x18))) & 0x1) != 0) {
        t3 = ((unsigned int)t0 >> 1);
        if ((unsigned int)((unsigned int)t1 >> 1) < (unsigned int)((unsigned int)t0 >> 1)) {
            t3 = ((unsigned int)t1 >> 1);
        }
        t4 = ((unsigned int)t0 >> 1);
        t5 = ((unsigned int)t1 >> 1);
        t6 = (t1 * t0);
        if ((unsigned int)t3 > (unsigned int)0x1) {
            t7 = t3;
            t3 = ((unsigned int)t0 >> 1);
            t8 = ((unsigned int)t1 >> 1);
            t9 = (t1 * t0);
            for (;;) {
                t0 = (t8 * t3);
                t8 = ((unsigned int)t8 >> 1);
                t3 = ((unsigned int)t3 >> 1);
                t7 = ((unsigned int)t7 >> 1);
                t9 = (t9 + t0);
                if ((unsigned int)t7 <= (unsigned int)0x1) {
                    break;
                }
            }
            t4 = t3;
            t5 = t8;
            t6 = t9;
        }
        t0 = (t6 + (t5 * t4));
        if (t5 == t4) {
            t0 = (t6 + 0x4);
        }
        t2 = t0;
    }
    t0 = (t2 << 2);
    if ((*(int *)((a4 + 0x4))) == 1) {
        t0 = (t2 << 1);
    }
    return t0;
}
