/* Straight-line functions with calls and guards (batch gen_t): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o308_float { char p[0x308]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o58_float { char p[0x58]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o68_ushort { char p[0x68]; unsigned short v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71F8_int { char p[0x71F8]; int v; };
struct o71FC_int { char p[0x71FC]; int v; };
struct o721E_uchar { char p[0x721E]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o9C_ushort { char p[0x9C]; unsigned short v; };
struct oA_short { char p[0xA]; short v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oE_short { char p[0xE]; short v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0158d8(void);
int FUN_0c01a5cc(int, int, int, int);
int FUN_0c01a800(int);
int FUN_0c01a928(int);
int FUN_0c02114c(int, float, float, float, float);
float FUN_0c0211d0(float, float, float, float);
int FUN_0c0229d8(int, int, int);
int FUN_0c022e90(int, int, int);
int FUN_0c055562(void);
int FUN_0c0593e0(int);
int FUN_0c05f2d4(int, int);
int FUN_0c05f952(void);
int FUN_0c062f10(int);
int FUN_0c095472(void);
int FUN_0c0a32dc(void);
int FUN_0c0b13c8(int, int);
int FUN_0c0b147c(int, int, int);
int FUN_0c0b1508(int, int, int);
int FUN_0c0b1536(int, int);
float FUN_0c0b1652(int, int);
int FUN_0c0d0d80(int, int, int, int, int, int, int);
int FUN_0c0d0e50(int, int, int);
int FUN_0c0d2a70(int);
int FUN_0c0d2a84(void);
int FUN_0c0d2d22(int);
int FUN_0c0e21b0(int, int);
int FUN_0c0e6e5c(int);
int FUN_0c0e6f24(int);
int FUN_0c0e6fdc(void);
int FUN_0c0e6fe8(int);
int bgm_play_demo_00(void);
int bgm_play_hen_00(void);
int bgm_play_hen_01(void);
int bgm_set_volume(int, int);
int bgm_stop_all(void);
int bgm_stop_streams(void);
int cam_init_records(void);
int cam_request_mode(int, int, int);
int cam_request_mode_with_args(int, int, int, int);
int cam_set_priority(int, int);
int cam_update_view_matrices(void);
int dbg_print_at(int, float, float);
int dbgatk_edit_params(int);
int dbgedit_select_player_object(int);
int dbgedit_select_stage_object(int);
int dbgedit_spawn_player_tasks(int);
int dbgedit_work_player_menu(int, int, int, int, int, int, int, int, int, int, int, int);
int dbgkey_draw_info(int);
int fx_spawn_0488b8(int, int, int, int);
int game_clear_win_records(void);
int game_draw_frame(void);
int game_reset_objects(void);
int gfx_set_background_color(int, int, int);
int hit_find_part_entry(int, int, int, int);
int hit_offset_point_by_owner(int, int, int);
int math_angle_between_points_xz(int, int);
float math_cos_angle16(int);
float math_rand_float(void);
int math_rand_next(void);
float math_signed_sqrt(float);
float math_sin_angle16(int);
float math_vec3_length(int);
int math_vec3_sub(int, int, int);
int memcpy(int, int, int);
int memset(int, int, int);
extern int menu_option_update();
int menu_ui_spawn_01(void);
int menu_ui_spawn_02(void);
int menu_ui_spawn_03(void);
int menu_ui_spawn_04(void);
int menu_ui_spawn_05(void);
int menu_ui_spawn_06(void);
int menu_ui_spawn_32(int);
int menu_ui_spawn_33(void);
int obj_can_interact(int, int, int, int);
int obj_destroy(int);
int obj_set_mode_owner(int, int, int);
int obj_tick_class(int);
int obj_touched_by_slot(int, int);
int opt_page2_pad_pressed(int);
extern int opt_page2_run_objects_in_mask();
int opt_page2_spawn_bg_scroll(int);
int opt_page_leave_reset(void);
int pl_angle_to_opponent(int);
int pl_blend_motion_pose(int);
int pl_build_model_matrix(int);
int pl_start_motion(int, int, int);
int res_load_file_raw_d(int);
int res_load_file_unpack(int);
int res_load_pl_effect(int, int, int);
int res_stage_load(int);
int res_stage_release(void);
int res_switch_scene(int);
int res_textures_register(int);
int snd_play_announcer(int, int);
int snd_play_side_se(int, int);
int sprintf(int, int, int, int, int);
int stage_gimmick_20_pick_random_point(int, int);
int ui_draw_element_sprite(int);
int ui_fade_start(int, int, int, int);
int dbgedit_draw_editor_screen(int a4, int a5, int a6);
float stage_gimmick_20_run(int a4, int a5, int a6, int a7, float f4);
int res_load_pl_models(int a4);
int menu_scene1_update(void);
int item_tick_thrown(int a4);
int opt_page2_main(int a4, int a5, int a6, int a7);
int FUN_0c09e4ac(int a4, int a5, int a6);
int FUN_0c05bcde(int a4);
int FUN_0c024ea6(int a4, int a5, int a6);
int pl_mode06_enter(int a4);
int FUN_0c02743c(int a4, int a5);
int FUN_0c01e156(int a4, int a5, int a6);
int FUN_0c02067e(int a4);
float FUN_0c0c9526(int a4);
int menu_vs_announce_names(void);
void FUN_0c055686(void);
int FUN_0c0d7318(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_0c05ed92(int a4, int a5, int a6);
int FUN_0c0d4d00(int a4, int a5, int a6, int a7);
int FUN_0c01db74(int a4);
int FUN_0c0109e4(void);

int dbgedit_draw_editor_screen(int a4, int a5, int a6)
{
    int stk[14];

    register int R1;
    register int R2;
    register int R5;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register float F7;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    v0_5 = a4;
    v0_0 = a6;
    v0_7 = *(signed char *)((((short)((short)(signed char)v0_5 * (short)0xA8) + 0xC4949A0) + 0x0));
    v0_6 = (v0_7);
    v0_1 = (0xC4949A0);
    v0_3 = (0xC7F36B8);
    v0_4 = (0x0);
    v0_2 = (v0_5);
    v0_5 = (((short)((short)(signed char)v0_5 * (short)0xA8) + 0xC4949A0));
    v0_8 = (0xC0CCEFC);
    v0_8 = (0xC0E71D4);
    w0_0 = (0.0f);
    w0_1 = (8.0f);
    if ((v0_7 == 0)) goto L_C0D0334;
    if ((v0_6 == 1)) goto L_C0D0398;
    return v0_6;
    L_C0D0398:;
    *(unsigned int *)(((int)stk + 4)) = ((short)((short)(signed char)v0_2 * (short)0xA8) + v0_1);
    FUN_0c0d2d22(((short)((short)(signed char)v0_2 * (short)0xA8) + v0_1));
    v0_7 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x4));
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C0D03BE;
    if ((v0_6 == 1)) goto L_C0D0400;
    if (!((v0_6 == 2))) goto L_C0D0436;
    *(int *)((int)stk + 0) = 0xC1543A4;
    sprintf(v0_3, R5, v0_0, 0x0, 0xC1543A4);
    goto L_C0D0416;
    L_C0D0436:;
    *(unsigned int *)(((int)stk + 4)) = (signed char)((((v0_2 << 2) << 1) + v0_2) << 2);
    v0_7 = *(signed char *)((v0_5 + 0x1));
    v0_6 = (v0_7);
    w0_1 = ((float)(((((short)(signed char)v0_2 * (short)0x1E) + 0xA) << 2) << 1));
    FPUL_ = ((((((short)(signed char)v0_2 * (short)0x1E) + 0xA) << 2) << 1));
    if ((v0_7 == 0)) goto L_C0D0472;
    if ((v0_6 == 1)) goto L_C0D0536;
    if ((v0_6 != 2)) goto L_C0D046E;
    *(int *)((int)stk + 0) = 0xC1543C4;
    sprintf(v0_3, R5, v0_0, 0x0, 0xC1543C4);
    dbg_print_at(v0_3, w0_1, w0_0);
    if ((((*(int *)((((*(int *)(((int)stk + 4))) + 0xC7F31F0) + 0x8))) & 8) == 0)) goto L_C0D05D8;
    *(unsigned char *)((v0_5 + 0x1)) = v0_4;
    *(unsigned char *)(((*(int *)((v0_5 + 0x1C))) + 0x1)) = 0x1;
    L_C0D05E6:;
    pl_blend_motion_pose(((unsigned short)((unsigned short)(signed char)v0_2 * (unsigned short)0x72D0) + 0xC7E40C4));
    pl_build_model_matrix(((unsigned short)((unsigned short)(signed char)v0_2 * (unsigned short)0x72D0) + 0xC7E40C4));
    return FUN_0c062f10(((unsigned short)((unsigned short)(signed char)v0_2 * (unsigned short)0x72D0) + 0xC7E40C4));
    L_C0D05D8:;
    dbgedit_work_player_menu(((short)((short)(signed char)v0_2 * (short)0xA8) + v0_1), R5, v0_0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    goto L_C0D05E6;
    L_C0D046E:;
    goto L_C0D05E6;
    L_C0D0536:;
    *(int *)((int)stk + 0) = 0xC1543B8;
    sprintf(v0_3, R5, v0_0, 0x0, 0xC1543B8);
    dbg_print_at(v0_3, w0_1, w0_0);
    if ((((*(int *)((((*(int *)(((int)stk + 4))) + 0xC7F31F0) + 0x8))) & 8) == 0)) goto L_C0D056E;
    *(unsigned char *)((v0_5 + 0x1)) = ((*(signed char *)((v0_5 + 0x1))) + 0x1);
    *(unsigned char *)((v0_5 + 0x2)) = v0_4;
    *(unsigned char *)(((*(int *)((v0_5 + 0x1C))) + 0x1)) = v0_4;
    L_C0D057C:;
    FUN_0c0d2a70(((short)((short)(signed char)v0_2 * (short)0xA8) + v0_1));
    FUN_0c0d2a84();
    dbgkey_draw_info(((short)((short)(signed char)v0_2 * (short)0xA8) + v0_1));
    dbgatk_edit_params(((short)((short)(signed char)v0_2 * (short)0xA8) + v0_1));
    goto L_C0D05E6;
    L_C0D056E:;
    FUN_0c0d0d80(((short)((short)(signed char)v0_2 * (short)0xA8) + v0_1), R5, v0_0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    goto L_C0D057C;
    L_C0D0472:;
    *(int *)((int)stk + 0) = 0xC1543AC;
    sprintf(v0_3, R5, v0_0, 0x0, 0xC1543AC);
    dbg_print_at(v0_3, w0_1, w0_0);
    if ((((*(int *)((((*(int *)(((int)stk + 4))) + 0xC7F31F0) + 0x8))) & 8) == 0)) goto L_C0D049E;
    *(unsigned char *)((v0_5 + 0x1)) = ((*(signed char *)((v0_5 + 0x1))) + 0x1);
    L_C0D04F8:;
    (((struct o64_ushort *)(v0_5))->v) = (unsigned char)(*(signed char *)((((unsigned short)((unsigned short)(signed char)v0_2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x101)));
    (((struct o68_ushort *)(v0_5))->v) = (unsigned char)(*(signed char *)((((unsigned short)((unsigned short)(signed char)v0_2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x102)));
    *(unsigned int *)(((int)stk + 4)) = ((short)((short)(signed char)v0_2 * (short)0xA8) + v0_1);
    FUN_0c0d2a70(((short)((short)(signed char)v0_2 * (short)0xA8) + v0_1));
    dbgkey_draw_info((*(int *)(((int)stk + 4))));
    goto L_C0D05E6;
    L_C0D049E:;
    v0_3 = *(signed char *)((v0_5 + 0x4));
    v0_6 = (v0_3);
    if ((v0_3 == 0)) goto L_C0D04B0;
    if ((v0_6 == 1)) goto L_C0D04C2;
    if ((v0_6 == 2)) goto L_C0D04E8;
    goto L_C0D04F8;
    L_C0D04E8:;
    dbgedit_select_stage_object(((short)((short)(signed char)v0_2 * (short)0xA8) + v0_1));
    goto L_C0D04F8;
    L_C0D04C2:;
    dbgedit_select_player_object(((short)((short)(signed char)v0_2 * (short)0xA8) + v0_1));
    goto L_C0D04F8;
    L_C0D04B0:;
    FUN_0c0d0e50(((short)((short)(signed char)v0_2 * (short)0xA8) + v0_1), R5, v0_0);
    goto L_C0D04F8;
    L_C0D0416:;
    dbg_print_at(v0_3, (float)(((((short)(signed char)v0_2 * (short)0x1E) + 0x14) << 2) << 1), w0_0);
    goto L_C0D0436;
    L_C0D0400:;
    v0_6 = (0xC15439C);
    L_C0D0402:;
    v0_6 = v0_6;
    *(int *)((int)stk + 0) = v0_6;
    sprintf(v0_3, R5, v0_0, 0x0, v0_6);
    goto L_C0D0416;
    L_C0D03BE:;
    v0_6 = (0xC154390);
    goto L_C0D0402;
    L_C0D0334:;
    *(unsigned char *)((v0_5 + 0x0)) = ((*(signed char *)((v0_5 + 0x0))) + 0x1);
    *(unsigned char *)((v0_5 + 0x6)) = v0_4;
    *(unsigned char *)((v0_5 + 0x7)) = v0_4;
    *(unsigned char *)((v0_5 + 0x8)) = v0_4;
    *(unsigned char *)((v0_5 + 0x9)) = v0_4;
    *(unsigned char *)((v0_5 + 0xA)) = v0_4;
    *(unsigned int *)((v0_5 + 0xC)) = v0_4;
    *(unsigned char *)((v0_5 + 0x4)) = v0_4;
    (((struct o14_uchar *)(v0_5))->v) = v0_4;
    (((struct o15_uchar *)(v0_5))->v) = v0_4;
    (((struct o16_uchar *)(v0_5))->v) = v0_4;
    (((struct o17_uchar *)(v0_5))->v) = v0_4;
    *(unsigned char *)((v0_5 + 0x5)) = v0_2;
    (((struct o9C_ushort *)(v0_5))->v) = v0_4;
    if (((signed char)v0_2 != 0)) goto L_C0D0388;
    res_stage_release();
    res_stage_load((*(signed char *)((((short)((short)(signed char)v0_2 * (short)0xA8) + v0_1) + 0x9E))));
    L_C0D0388:;
    res_load_pl_effect(0x0, (*(signed char *)0xC7E40C8), v0_0);
    dbgedit_spawn_player_tasks(v0_5);
    goto L_C0D0398;
}

float stage_gimmick_20_run(int a4, int a5, int a6, int a7, float f4)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register float F0;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_4 = a4;
    v0_0 = a5;
    v0_1 = a7;
    w0_1 = f4;
    v0_3 = *(signed char *)((v0_0 + 0x0));
    v0_1 = (0x0);
    v0_2 = (v0_4);
    v0_0 = (v0_0);
    v0_4 = (v0_3);
    if ((v0_3 == 1)) goto L_C0B1706;
    if ((v0_4 != 2)) goto L_C0B1748;
    L_C0B1706:;
    v0_5 = (0x2);
    v0_3 = (v0_1);
    v0_6 = (0xC7E40C4);
    v0_7 = (0x3);
    w0_0 = (100.0f);
    L_C0B1712:;
    math_vec3_sub((((int)stk + 4) + 0x4), (((unsigned short)((unsigned short)v0_3 * (unsigned short)0x72D0) + v0_6) + 0x20), (v0_2 + 0x4));
    w0_2 = math_vec3_length((((int)stk + 4) + 0x4));
    F0 = (w0_2);
    w0_1 = (w0_2);
    if ((w0_2 > w0_0)) goto L_C0B1742;
    *(unsigned char *)((v0_0 + 0x0)) = v0_7;
    *(unsigned char *)((v0_0 + 0x1)) = v0_1;
    L_C0B1748:;
    v0_6 = *(signed char *)((v0_0 + 0x0));
    v0_5 = (v0_6);
    v0_3 = (0x1);
    w0_0 = (22.0f);
    if ((v0_6 == 0)) goto L_C0B1768;
    if ((v0_5 == 1)) goto L_C0B1776;
    if ((v0_5 == 2)) goto L_C0B182A;
    if ((v0_5 != 3)) goto L_C0B1764;
    v0_4 = *(signed char *)((v0_0 + 0x1));
    v0_5 = (v0_4);
    w0_1 = (8.0f);
    if ((v0_4 == 0)) goto L_C0B18F0;
    if (!((v0_5 == 1))) goto L_C0B1A38;
    *(float *)(((int)stk + 4)) = (FUN_0c0b1652(v0_2, v0_0));
    if (((*(short *)((v0_0 + 0x16))) != 0)) goto L_C0B1960;
    FUN_0c0b147c(v0_2, v0_0, 0x4);
    goto L_C0B1968;
    L_C0B1A38:;
    return F0;
    L_C0B1968:;
    *(int *)((int)stk + 0) = (v0_2 + 0x4);
    w0_2 = ((((struct o4_float *)(v0_2))->v));
    w0_2 = w0_2 + w0_1 * (math_sin_angle16((*(int *)((v0_2 + 0x14)))));
    (((struct o4_float *)(v0_2))->v) = w0_2;
    *(int *)((int)stk + 0) = (v0_2 + 0xC);
    w0_2 = ((((struct oC_float *)(v0_2))->v));
    w0_2 = w0_2 + w0_1 * (math_cos_angle16((*(int *)((v0_2 + 0x14)))));
    (((struct oC_float *)(v0_2))->v) = w0_2;
    (((struct o8_float *)(v0_2))->v) = (((((struct o8_float *)(v0_2))->v)) + ((((struct o8_float *)(v0_0))->v)));
    (((struct o8_float *)(v0_0))->v) = (((((struct o8_float *)(v0_0))->v)) + -0.399999976f);
    F0 = (w0_1);
    FPUL_ = (0xBECCCCCC);
    if (((unsigned char)(*(signed char *)((v0_0 + 0x1B))) != 0xFF)) goto L_C0B19E0;
    if (((*(short *)((v0_0 + 0x16))) != 0)) goto L_C0B19E0;
    w0_1 = FUN_0c0b1652(v0_2, v0_0);
    F0 = (w0_1);
    if ((!(w0_1 > (*(float *)(((int)stk + 4)))))) goto L_C0B19E0;
    *(unsigned short *)((v0_0 + 0x16)) = v0_3;
    FUN_0c0b1536(v0_2, v0_0);
    L_C0B19E0:;
    v0_5 = (0x8);
    if ((((((struct o8_float *)(v0_2))->v)) > w0_0)) goto L_C0B1A16;
    *(float *)((v0_2 + v0_5)) = w0_0;
    FUN_0c0b13c8(v0_2, v0_0);
    v0_2 = *(signed char *)((v0_0 + 0x19));
    v0_4 = (v0_2);
    if ((v0_2 == 4)) goto L_C0B1A00;
    if (!(((int)v0_4 < (int)0x9))) goto L_C0B1A00;
    *(unsigned char *)((v0_0 + 0x0)) = v0_3;
    *(unsigned char *)((v0_0 + 0x1)) = v0_1;
    (((struct o18_uchar *)(v0_0))->v) = v0_1;
    v0_5 = (0x18);
    goto L_C0B1A38;
    L_C0B1A00:;
    *(unsigned char *)((v0_0 + 0x1)) = v0_1;
    v0_5 = (v0_1);
    goto L_C0B1A38;
    L_C0B1A16:;
    v0_1 = *(short *)((v0_0 + 0x14));
    *(unsigned short *)((v0_0 + 0x14)) = (v0_1 - 1);
    v0_5 = ((short)(v0_1 - 1));
    if (((short)(v0_1 - 1) != 0)) goto L_C0B1A38;
    *(unsigned short *)((v0_0 + 0x14)) = 0x4;
    v0_1 = *(signed char *)((v0_0 + 0x18));
    (((struct o18_uchar *)(v0_0))->v) = (v0_1 + 0x1);
    v0_5 = ((signed char)(v0_1 + 0x1));
    if (((signed char)(v0_1 + 0x1) != 3)) goto L_C0B1A38;
    (((struct o18_uchar *)(v0_0))->v) = v0_3;
    v0_5 = (0x18);
    goto L_C0B1A38;
    L_C0B1960:;
    FUN_0c0b1508(v0_2, v0_0, 0xA);
    goto L_C0B1968;
    L_C0B18F0:;
    *(unsigned char *)((v0_0 + 0x1)) = ((*(signed char *)((v0_0 + 0x1))) + 0x1);
    *(unsigned short *)((v0_0 + 0x14)) = 0x4;
    *(unsigned short *)((v0_0 + 0x16)) = v0_1;
    (((struct o18_uchar *)(v0_0))->v) = v0_3;
    (((struct o8_float *)(v0_0))->v) = w0_1;
    stage_gimmick_20_pick_random_point(v0_2, v0_0);
    v0_5 = ((FUN_0c0b1536(v0_2, v0_0)));
    goto L_C0B1A38;
    L_C0B1764:;
    goto L_C0B1A38;
    L_C0B182A:;
    v0_4 = *(signed char *)((v0_0 + 0x1));
    v0_5 = (v0_4);
    if ((v0_4 == 0)) goto L_C0B1838;
    if ((v0_5 == 1)) goto L_C0B1850;
    goto L_C0B1A38;
    L_C0B1850:;
    FUN_0c0b147c(v0_2, v0_0, 0x2);
    *(int *)((int)stk + 0) = (v0_2 + 0x4);
    w0_1 = ((((struct o4_float *)(v0_2))->v));
    w0_1 = w0_1 + 0.799999952f * (math_sin_angle16((*(int *)((v0_2 + 0x14)))));
    (((struct o4_float *)(v0_2))->v) = w0_1;
    *(int *)((int)stk + 0) = (v0_2 + 0xC);
    w0_1 = ((((struct oC_float *)(v0_2))->v));
    w0_1 = w0_1 + 0.799999952f * (math_cos_angle16((*(int *)((v0_2 + 0x14)))));
    (((struct oC_float *)(v0_2))->v) = w0_1;
    (((struct o8_float *)(v0_2))->v) = (((((struct o8_float *)(v0_2))->v)) + ((((struct o8_float *)(v0_0))->v)));
    (((struct o8_float *)(v0_0))->v) = (((((struct o8_float *)(v0_0))->v)) + 0.0799999982f);
    v0_5 = (0x8);
    F0 = (0.799999952f);
    FPUL_ = (0x3DA3D70A);
    if ((!(w0_0 > ((((struct o8_float *)(v0_2))->v))))) goto L_C0B18B4;
    goto L_C0B1A38;
    L_C0B18B4:;
    w0_2 = *(float *)((v0_0 + v0_5));
    w0_1 = (w0_2);
    if ((!(0.0f > w0_2))) goto L_C0B18C0;
    goto L_C0B1A38;
    L_C0B18C0:;
    *(float *)((v0_2 + v0_5)) = w0_0;
    (((struct o8_float *)(v0_0))->v) = -0.5f;
    v0_2 = *(short *)((v0_0 + 0x14));
    *(unsigned short *)((v0_0 + 0x14)) = (v0_2 - 1);
    v0_5 = ((short)(v0_2 - 1));
    if (((short)(v0_2 - 1) == 0)) goto L_C0B18DA;
    goto L_C0B1A38;
    L_C0B18DA:;
    *(unsigned char *)((v0_0 + 0x0)) = v0_3;
    goto L_C0B1A00;
    L_C0B1838:;
    *(unsigned char *)((v0_0 + 0x1)) = ((*(signed char *)((v0_0 + 0x1))) + 0x1);
    *(unsigned short *)((v0_0 + 0x14)) = 0x6;
    (((struct o8_float *)(v0_0))->v) = -0.5f;
    FUN_0c0b1536(v0_2, v0_0);
    goto L_C0B1850;
    L_C0B1776:;
    v0_3 = *(signed char *)((v0_0 + 0x1));
    v0_5 = (v0_3);
    if ((v0_3 == 0)) goto L_C0B179C;
    if ((v0_5 == 1)) goto L_C0B17EC;
    goto L_C0B1A38;
    L_C0B17EC:;
    v0_2 = *(short *)((v0_0 + 0x14));
    *(unsigned short *)((v0_0 + 0x14)) = (v0_2 - 1);
    v0_5 = ((short)(v0_2 - 1));
    if (((short)(v0_2 - 1) == 0)) goto L_C0B17FC;
    goto L_C0B1A38;
    L_C0B17FC:;
    w0_2 = math_rand_float();
    w0_1 = (2.14748365e+09f);
    w0_0 = ((w0_2 * 255.0f));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_2 * 255.0f))) goto L_C0B1818;
    w0_0 = ((w0_0 - (w0_1 + w0_1)));
    L_C0B1818:;
    *(unsigned char *)((v0_0 + 0x0)) = (*(signed char *)((0xC152FF0 + (FUN_0c0e6f24(v0_4)))));
    goto L_C0B1A00;
    L_C0B179C:;
    *(unsigned char *)((v0_0 + 0x1)) = ((*(signed char *)((v0_0 + 0x1))) + 0x1);
    w0_2 = math_rand_float();
    w0_1 = (2.14748365e+09f);
    w0_0 = ((w0_2 * 255.0f));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_2 * 255.0f))) goto L_C0B17BC;
    w0_0 = ((w0_0 - (w0_1 + w0_1)));
    L_C0B17BC:;
    *(unsigned short *)((v0_0 + 0x14)) = ((short)((FUN_0c0e6f24(v0_4)) + 0x1) * (short)0x3C);
    (((struct o18_uchar *)(v0_0))->v) = v0_1;
    FUN_0c0b13c8(v0_2, v0_0);
    if (((*(signed char *)((v0_0 + 0x1A))) == (*(signed char *)((v0_0 + 0x19))))) goto L_C0B17EC;
    stage_gimmick_20_pick_random_point(v0_2, v0_0);
    goto L_C0B17EC;
    L_C0B1768:;
    *(unsigned char *)((v0_0 + 0x0)) = v0_3;
    *(unsigned char *)((v0_0 + 0x1)) = v0_1;
    (((struct o19_uchar *)(v0_0))->v) = 0xFFFFFFFF;
    goto L_C0B1776;
    L_C0B1742:;
    v0_8 = (int)(v0_3 + 0x1) < (int)v0_5;
    v0_3 = ((v0_3 + 0x1));
    if (v0_8) goto L_C0B1712;
    goto L_C0B1748;
}

int res_load_pl_models(int a4)
{
    int stk[18];
    register int t0;
    register int t1;
    int t2;
    register int t4;
    register int t10;
    register int t12;
    register int t13;
    register int t14;
    register int t23;
    register int t26;
    register int t30;
    register int t32;
    register int t37;
    register int t40;
    register int t50;
    register int t51;
    register int t52;
    register int t53;
    register int t54;
    register int t55;
    register int t56;
    register int t82;
    register int t104;
    register int t11;
    register int t98;

    *(unsigned char *)(((int)stk + 8)) = a4;
    t0 = *(signed char *)(((int)stk + 8));
    t1 = *(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4));
    t2 = *(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71EC));
    t4 = *(signed char *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 0)) = (0xC4CFAB0 + (short)((short)(signed char)t4 * (short)0xF0));
    *(unsigned int *)(((int)stk + 68)) = (0xC14DA54 + ((t1 << 2) << 1));
    *(unsigned int *)(((int)stk + 20)) = (0xC4D02D0 + ((signed char)t4 * 0x98000));
    *(unsigned int *)(((int)stk + 64)) = (0xC4CFAB0 + (short)((short)(signed char)t4 * (short)0xF0));
    *(unsigned int *)(((int)stk + 52)) = (0xC4CFC90 + (short)((short)(signed char)t4 * (short)0x320));
    *(unsigned int *)(((int)stk + 56)) = ((0xC14DACC + ((t1 << 2) << 2)) + ((((-(0x1 & t2)) + 0x1) << 2) << 1));
    *(unsigned int *)(((int)stk + 60)) = ((0xC14DBBC + ((t1 << 2) << 2)) + ((((-(0x1 & t2)) + 0x1) << 2) << 1));
    *(unsigned int *)(((int)stk + 44)) = (((((-(0x1 & t2)) + 0x1) << 2) << 1) + (0xC14DCAC + ((t1 << 2) << 2)));
    *(unsigned int *)(((int)stk + 48)) = ((signed char)((((t4 << 2) + t4) << 2) << 1) + 0xC336578);
    t10 = 0xC336578;
    t12 = 0x0;
    t13 = t4;
    t14 = (0xC4CFAB0 + (short)((short)(signed char)t4 * (short)0xF0));
    for (;;) {
        if ((int)t12 < (int)0x2) {
            t10 = 0x44;
            *(unsigned int *)(((int)stk + 4)) = (t12 << 2);
            t10 = (*(int *)((((int)stk + 0) + t10)));
            t10 = (res_load_file_raw_d((*(int *)(((t12 << 2) + t10)))));
            *(unsigned int *)(((int)stk + 12)) = (t12 * 0x4C000);
            t10 = (memcpy(((t12 * 0x4C000) + (*(int *)(((int)stk + 20)))), 0xCC00000, t10));
            t14 = t12;
            t10 = (*(signed char *)(((int)stk + 8)));
            t11 = t12;
            t14 = (t14 << 1);
            t11 = (t11 << 2);
            t14 = (t14 + t12);
            t23 = (t10 * 0x98000);
            t10 = (*(signed char *)(((int)stk + 8)));
            t14 = (t14 << 2);
            t10 = (t10 << 2);
            t14 = (t14 << 1);
            t11 = (t11 << 1);
            t11 = (t11 + t12);
            t26 = *(int *)(((int)stk + 12));
            t11 = (t11 << 2);
            t11 = (t11 << 1);
            t11 = (unsigned char)t11;
            t10 = (t10 << 1);
            t14 = (signed char)t14;
            *(unsigned int *)(((int)stk + 16)) = ((0xC14DA30 + t10) + (*(int *)(((int)stk + 4))));
            t30 = 0x0;
            for (;;) {
                t32 = *(int *)(((int)stk + 0));
                *(unsigned int *)(((((unsigned char)((((t30 << 1) + t30) << 2) << 2) + t32) + t14) + 0xC)) = ((*(int *)(((t11 + ((((((((t1 << 2) << 1) + t1) << 2) << 2) << 1) + 0xC34BBA0) + (short)(((((((-(0x1 & t2)) + 0x1) << 2) << 1) + ((-(0x1 & t2)) + 0x1)) << 2) << 2))) + 0x3C))) + ((t23 + 0xC4D02D0) + t26));
                *(unsigned int *)(((((unsigned char)((((t30 << 1) + t30) << 2) << 2) + t32) + t14) + 0x4)) = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
                t10 = t30;
                t10 = (t10 << 2);
                t37 = (((unsigned char)((((t30 << 1) + t30) << 2) << 2) + t32) + t14);
                t30 = (t30 + 0x1);
                t10 = (*(int *)((0xC14DA40 + t10)));
                *(unsigned short *)((t37 + 0x2)) = t10;
                *(unsigned int *)((t37 + 0x10)) = 0x0;
                *(unsigned int *)((t37 + 0x14)) = 0x0;
                if ((int)t30 >= (int)0x5) {
                    break;
                }
            }
            t10 = 0x40;
            t40 = *(int *)((((int)stk + 0) + t10));
            t10 = 0x32;
            *(unsigned short *)(((t40 + t14) + t10)) = (*(int *)(((t11 + ((((((((t1 << 2) << 1) + t1) << 2) << 2) << 1) + 0xC34BBA0) + (short)(((((((-(0x1 & t2)) + 0x1) << 2) << 1) + ((-(0x1 & t2)) + 0x1)) << 2) << 2))) + 0x34)));
            *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 52))) + (short)((short)t12 * (short)0x190));
            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + (*(int *)(((int)stk + 20))));
            t10 = (*(signed char *)(((int)stk + 8)));
            t10 = ((short)t10 * (short)0x320);
            t10 = (short)t10;
            *(unsigned int *)(((int)stk + 24)) = ((short)((short)t12 * (short)0x190) + (0xC4CFC90 + t10));
            *(unsigned int *)(((int)stk + 40)) = (t11 + ((((((((t1 << 2) << 1) + t1) << 2) << 2) << 1) + 0xC34BBA0) + (short)(((((((-(0x1 & t2)) + 0x1) << 2) << 1) + ((-(0x1 & t2)) + 0x1)) << 2) << 2)));
            *(unsigned int *)(((int)stk + 36)) = (t11 + ((((((((t1 << 2) << 1) + t1) << 2) << 2) << 1) + 0xC34BBA0) + (short)(((((((-(0x1 & t2)) + 0x1) << 2) << 1) + ((-(0x1 & t2)) + 0x1)) << 2) << 2)));
            *(unsigned int *)(((int)stk + 32)) = (t11 + ((((((((t1 << 2) << 1) + t1) << 2) << 2) << 1) + 0xC34BBA0) + (short)(((((((-(0x1 & t2)) + 0x1) << 2) << 1) + ((-(0x1 & t2)) + 0x1)) << 2) << 2)));
            *(unsigned int *)(((int)stk + 28)) = (t11 + ((((((((t1 << 2) << 1) + t1) << 2) << 2) << 1) + 0xC34BBA0) + (short)(((((((-(0x1 & t2)) + 0x1) << 2) << 1) + ((-(0x1 & t2)) + 0x1)) << 2) << 2)));
            t52 = (t11 + ((((((((t1 << 2) << 1) + t1) << 2) << 2) << 1) + 0xC34BBA0) + (short)(((((((-(0x1 & t2)) + 0x1) << 2) << 1) + ((-(0x1 & t2)) + 0x1)) << 2) << 2)));
            t51 = (t11 + ((((((((t1 << 2) << 1) + t1) << 2) << 2) << 1) + 0xC34BBA0) + (short)(((((((-(0x1 & t2)) + 0x1) << 2) << 1) + ((-(0x1 & t2)) + 0x1)) << 2) << 2)));
            t50 = (t11 + ((((((((t1 << 2) << 1) + t1) << 2) << 2) << 1) + 0xC34BBA0) + (short)(((((((-(0x1 & t2)) + 0x1) << 2) << 1) + ((-(0x1 & t2)) + 0x1)) << 2) << 2)));
            t56 = (t11 + ((((((((t1 << 2) << 1) + t1) << 2) << 2) << 1) + 0xC34BBA0) + (short)(((((((-(0x1 & t2)) + 0x1) << 2) << 1) + ((-(0x1 & t2)) + 0x1)) << 2) << 2)));
            t11 = (t11 + ((((((((t1 << 2) << 1) + t1) << 2) << 2) << 1) + 0xC34BBA0) + (short)(((((((-(0x1 & t2)) + 0x1) << 2) << 1) + ((-(0x1 & t2)) + 0x1)) << 2) << 2)));
            t53 = 0x0;
            t54 = ((short)((short)t12 * (short)0x190) + (0xC4CFC90 + t10));
            t55 = 0x0;
            for (;;) {
                if ((int)t53 >= (int)0x5) {
                    break;
                }
                t52 = t53;
                t52 = (t52 << 1);
                t51 = t53;
                t52 = (t52 + t51);
                t52 = (t52 << 2);
                t50 = (*(int *)(((int)stk + 0)));
                t52 = (t52 << 2);
                t51 = t55;
                t52 = (unsigned char)t52;
                t52 = (t52 + t50);
                t50 = (*(int *)(((int)stk + 24)));
                t51 = (t51 << 2);
                t51 = (t51 + t50);
                t52 = (t52 + t14);
                t10 = t53;
                *(unsigned int *)((t52 + 0x8)) = t51;
                switch (t10) {
                case 0:
                    t13 = (*(int *)(((int)stk + 40)));
                    t13 = (*(int *)((t13 + 0x0)));
                    break;
                case 1:
                    t13 = (*(int *)(((int)stk + 36)));
                    t13 = (*(int *)((t13 + 0x4)));
                    break;
                case 2:
                    t13 = (*(int *)(((int)stk + 32)));
                    t13 = (*(int *)((t13 + 0x8)));
                    break;
                case 3:
                    t13 = (*(int *)(((int)stk + 28)));
                    t13 = (*(int *)((t13 + 0xC)));
                    break;
                case 4:
                    t13 = (*(int *)((t11 + 0x10)));
                    break;
                }
                t56 = t53;
                t56 = (t56 << 1);
                t52 = t53;
                t56 = (t56 + t52);
                t56 = (t56 << 2);
                t51 = (*(int *)(((int)stk + 0)));
                t56 = (t56 << 2);
                t54 = 0x0;
                t56 = (unsigned char)t56;
                t56 = (t56 + t51);
                t56 = (t56 + t14);
                for (;;) {
                    t10 = (*(short *)((t56 + 0x2)));
                    if ((int)t54 >= (int)t10) {
                        break;
                    }
                    t52 = t54;
                    t52 = (t52 << 2);
                    t52 = (t52 + t13);
                    t50 = (*(int *)(((int)stk + 12)));
                    t52 = (*(int *)((t52 + 0x0)));
                    t51 = t55;
                    t10 = (*(int *)(((int)stk + 16)));
                    t51 = (t51 << 2);
                    t52 = (t52 + t50);
                    t54 = (t54 + 0x1);
                    *(unsigned int *)((t51 + t10)) = t52;
                    t55 = (t55 + 0x1);
                }
                t53 = (t53 + 0x1);
            }
            t82 = *(signed char *)0xC7F2F08;
            if ((unsigned char)t82 == 0) {
                t10 = (*(int *)(((int)stk + 4)));
                t98 = (*(int *)(((*(int *)(((int)stk + 56))) + t10)));
            } else {
                t10 = (unsigned char)t82;
                if (t10 == 1) {
                    t10 = (*(int *)(((int)stk + 4)));
                    t98 = (*(int *)(((*(int *)(((int)stk + 60))) + t10)));
                } else {
                    t10 = (*(int *)(((int)stk + 4)));
                    t98 = (*(int *)(((*(int *)(((int)stk + 44))) + t10)));
                }
            }
            t10 = (res_load_file_unpack(t98));
            t11 = 0x0;
            *(unsigned int *)(((int)stk + 4)) = ((signed char)(((t12 << 2) + t12) << 2) + (*(int *)(((int)stk + 48))));
            for (;;) {
                t10 = (*(int *)(((int)stk + 4)));
                t104 = *(int *)(((int)stk + 0));
                *(volatile int *)(((t11 << 2) + t10));
                t10 = (res_textures_register((((unsigned char)((((t11 << 1) + t11) << 2) << 2) + t104) + t14)));
                t11 = (t11 + 0x1);
                if ((int)t11 >= (int)0x5) {
                    break;
                }
            }
            t12 = (t12 + 0x1);
            continue;
        }
        break;
    }
    return t10;
}

int menu_scene1_update(void)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE5;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 == 2) {
                t0 = *(signed char *)0xC7F3071;
                if ((unsigned char)t0 != 1) {
                    if ((unsigned char)t0 != 2) {
                        if ((unsigned char)t0 != 3) {
                        } else {
                            if ((((((struct o3C_int *)0xC7F31BC)->v)) & 0x8) != 0) {
                                *(unsigned short *)0xC7F3036 = 0x0;
                            }
                            if ((0x8 & (*(int *)0xC7F321C)) != 0) {
                                *(unsigned short *)0xC7F3036 = 0x0;
                            }
                        }
                    } else {
                        if ((0x8 & (*(int *)0xC7F321C)) != 0) {
                            *(unsigned short *)0xC7F3036 = 0x0;
                        }
                    }
                } else {
                    if ((0x8 & ((((struct o3C_int *)0xC7F31BC)->v))) == 0) {
                    } else {
                        *(unsigned short *)0xC7F3036 = 0x0;
                    }
                }
                t0 = *(short *)0xC7F3036;
                *(unsigned short *)0xC7F3036 = (t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    (((struct o1_uchar *)0xC7F2EE4)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
                }
                t0 = *(short *)0xC7F3036;
                if (t0 == 16) {
                    ui_fade_start(0xFFFFFFFF, 0x0, 0x1, 0xF);
                    return fx_spawn_0488b8(0x0, 0x0, 0xF, 0x0);
                }
                return t0;
            }
            (((struct o0_uchar *)0xC7F2EE4)->v) = 0x2;
            (((struct o3_uchar *)0xC7F2EE4)->v) = 0x0;
            (((struct o2_uchar *)0xC7F2EE4)->v) = 0x0;
            (((struct o1_uchar *)0xC7F2EE4)->v) = 0x0;
            return 0x0;
        }
    } else {
        (((struct o1_uchar *)0xC7F2EE4)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
        (((struct o2_uchar *)0xC7F2EE4)->v) = 0x0;
        game_reset_objects();
        bgm_stop_streams();
        (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
        FUN_0c0158d8();
        res_switch_scene(0x4);
        FUN_0c0a32dc();
        bgm_play_demo_00();
        FUN_0c05f2d4(0x1, 0x0);
        (((struct o0_float *)0xC494060)->v) = 0.0f;
        (((struct o4_float *)0xC494060)->v) = 110.0f;
        (((struct o8_float *)0xC494060)->v) = 0.0f;
        (((struct oC_float *)0xC494060)->v) = 0.0f;
        (((struct o10_float *)0xC494060)->v) = 110.0f;
        (((struct o14_float *)0xC494060)->v) = 0.0f;
        cam_set_priority(0x0, 0x40);
        cam_request_mode_with_args(0x17, 0x40, 0xC494060, 0xC49406C);
        (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
    }
    (((struct o1_uchar *)0xC7F2EE4)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
    *(unsigned short *)0xC7F3036 = 0xB4;
    menu_ui_spawn_01();
    menu_ui_spawn_02();
    menu_ui_spawn_03();
    menu_ui_spawn_04();
    menu_ui_spawn_05();
    return menu_ui_spawn_06();
}

int item_tick_thrown(int a4)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x30C))) == 14) {
        snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x35);
    }
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                return t1;
            }
            *(volatile short *)((a4 + 0xEC));
            *(unsigned char *)((t0 + 0x1)) = (FUN_0c0e6e5c(a4));
            t1 = (((struct oEC_short *)(t0))->v);
            (((struct oEC_ushort *)(t0))->v) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) > (int)0x1E) {
                return obj_destroy(t0);
            }
            return 0xEC;
        }
        if (((((struct o274_float *)(a4))->v)) > 0.0f) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            return 0xEC;
        }
        FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
        FUN_0c0e21b0((a4 + 0x38), (a4 + 0x44));
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x10)) = ((*(int *)((t0 + 0x10))) + 0xB6);
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x16C);
        return 0x2E0;
    }
    t0 = *(int *)((a4 + 0x1C));
    *(unsigned char *)((a4 + 0x3)) = 0x2;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    FUN_0c0e6fe8(a4);
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 180.0f);
    (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((t0 + 0x30)))) + 0x14000))) * 5.0f));
    (((struct o3C_float *)(a4))->v) = 10.0f;
    (((struct o40_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((t0 + 0x30)))) + 0x14000))) * 5.0f));
    (((struct o44_float *)(a4))->v) = ((-((((struct o38_float *)(a4))->v))) / 180.0f);
    (((struct o48_float *)(a4))->v) = -2.0f;
    (((struct o4C_float *)(a4))->v) = ((-((((struct o40_float *)(a4))->v))) / 180.0f);
    (((struct o118_uint *)(a4))->v) = 0x0;
    (((struct o107_uchar *)(a4))->v) = 0x0;
    return 0x107;
}

int opt_page2_main(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t5;
    register int t7;
    int t9;
    register int t15;
    int t17;
    register int t23;
    register int t25;
    register int t27;
    register int t32;
    register int t34;
    register int t36;
    register int t48;
    register int t51;
    register int t65;
    register int t86;
    register int t88;
    int t90;
    register int t96;
    int t98;
    register int t104;
    register int t106;
    register int t108;
    register int t113;
    register int t115;
    register int t117;
    register int t129;
    register int t132;
    register int t146;
    register int t12;
    register int t20;
    register int t93;
    register int t101;

    t0 = *(signed char *)0xC362338;
    switch (t0) {
    case 0:
        (((struct o0_uchar *)0xC362338)->v) = ((*(signed char *)0xC362338) + 0x1);
        FUN_0c05f2d4(0x3, 0x0);
        (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
        game_reset_objects();
        bgm_stop_all();
        cam_request_mode(0x1C, 0x0, 0xF0);
        res_switch_scene(0xE);
        opt_page2_spawn_bg_scroll(0x0);
        t86 = *(signed char *)0xC362339;
        if (t86 != 0) {
            if (t86 != 1) {
            } else {
                (((struct oA_ushort *)0xC362338)->v) = (((((struct oA_short *)0xC362338)->v)) + 0x5B0);
                t88 = opt_page2_pad_pressed(0x40);
                if ((signed char)t88 != 0) {
                    t90 = *(signed char *)0xC36233E;
                    if ((t90 != 0) && (t90 != 6)) {
                        t93 = ((*(signed char *)0xC36233E) - 1);
                    } else {
                        t93 = ((*(signed char *)0xC36233E) + 0x5);
                    }
                    (((struct o6_uchar *)0xC362338)->v) = t93;
                }
                t96 = opt_page2_pad_pressed(0x80);
                if ((signed char)t96 != 0) {
                    t98 = *(signed char *)0xC36233E;
                    if ((t98 != 5) && (t98 != 11)) {
                        t101 = ((*(signed char *)0xC36233E) + 0x1);
                    } else {
                        t101 = ((*(signed char *)0xC36233E) - 5);
                    }
                    (((struct o6_uchar *)0xC362338)->v) = t101;
                }
                t104 = opt_page2_pad_pressed(0x10);
                if ((signed char)t104 != 0) {
                    t106 = *(signed char *)0xC36233E;
                    t108 = (t106 - 0x6);
                    if ((int)t106 < (int)0x6) {
                        t108 = ((*(signed char *)0xC36233E) + 0x6);
                    }
                    (((struct o6_uchar *)0xC362338)->v) = t108;
                }
                t113 = opt_page2_pad_pressed(0x20);
                if ((signed char)t113 != 0) {
                    t115 = *(signed char *)0xC36233E;
                    t117 = (t115 - 0x6);
                    if ((int)t115 < (int)0x6) {
                        t117 = ((*(signed char *)0xC36233E) + 0x6);
                    }
                    (((struct o6_uchar *)0xC362338)->v) = t117;
                }
                if ((*(signed char *)0xC36233E) != (*(signed char *)0xC362340)) {
                    snd_play_side_se(0x0, 0x4B);
                }
                (((struct o8_uchar *)0xC362338)->v) = (*(signed char *)0xC36233E);
                t129 = opt_page2_pad_pressed(0x4);
                if ((signed char)t129 != 0) {
                    snd_play_side_se(0x0, 0x4D);
                    (((struct o0_uchar *)0xC362338)->v) = ((*(signed char *)0xC362338) + 0x1);
                    (((struct o1_uchar *)0xC362338)->v) = 0x0;
                } else {
                    t132 = opt_page2_pad_pressed(0x2);
                    if ((signed char)t132 != 0) {
                        snd_play_side_se(0x0, 0x4D);
                        opt_page_leave_reset();
                    }
                }
            }
        } else {
            (((struct o1_uchar *)0xC362338)->v) = ((*(signed char *)0xC362339) + 0x1);
            t146 = ((int (*)(int))(opt_page2_run_objects_in_mask))(0x3);
            FUN_0c01a800(0x1);
            FUN_0c01a928(0x1);
            (((struct o8_uchar *)0xC362338)->v) = (*(signed char *)0xC36233E);
        }
        break;
    case 1:
        t5 = *(signed char *)0xC362339;
        if (t5 != 0) {
            if (t5 != 1) {
            } else {
                (((struct oA_ushort *)0xC362338)->v) = (((((struct oA_short *)0xC362338)->v)) + 0x5B0);
                t7 = opt_page2_pad_pressed(0x40);
                if ((signed char)t7 != 0) {
                    t9 = *(signed char *)0xC36233E;
                    if ((t9 != 0) && (t9 != 6)) {
                        t12 = ((*(signed char *)0xC36233E) - 1);
                    } else {
                        t12 = ((*(signed char *)0xC36233E) + 0x5);
                    }
                    (((struct o6_uchar *)0xC362338)->v) = t12;
                }
                t15 = opt_page2_pad_pressed(0x80);
                if ((signed char)t15 != 0) {
                    t17 = *(signed char *)0xC36233E;
                    if ((t17 != 5) && (t17 != 11)) {
                        t20 = ((*(signed char *)0xC36233E) + 0x1);
                    } else {
                        t20 = ((*(signed char *)0xC36233E) - 5);
                    }
                    (((struct o6_uchar *)0xC362338)->v) = t20;
                }
                t23 = opt_page2_pad_pressed(0x10);
                if ((signed char)t23 != 0) {
                    t25 = *(signed char *)0xC36233E;
                    t27 = (t25 - 0x6);
                    if ((int)t25 < (int)0x6) {
                        t27 = ((*(signed char *)0xC36233E) + 0x6);
                    }
                    (((struct o6_uchar *)0xC362338)->v) = t27;
                }
                t32 = opt_page2_pad_pressed(0x20);
                if ((signed char)t32 != 0) {
                    t34 = *(signed char *)0xC36233E;
                    t36 = (t34 - 0x6);
                    if ((int)t34 < (int)0x6) {
                        t36 = ((*(signed char *)0xC36233E) + 0x6);
                    }
                    (((struct o6_uchar *)0xC362338)->v) = t36;
                }
                if ((*(signed char *)0xC36233E) != (*(signed char *)0xC362340)) {
                    snd_play_side_se(0x0, 0x4B);
                }
                (((struct o8_uchar *)0xC362338)->v) = (*(signed char *)0xC36233E);
                t48 = opt_page2_pad_pressed(0x4);
                if ((signed char)t48 != 0) {
                    snd_play_side_se(0x0, 0x4D);
                    (((struct o0_uchar *)0xC362338)->v) = ((*(signed char *)0xC362338) + 0x1);
                    (((struct o1_uchar *)0xC362338)->v) = 0x0;
                } else {
                    t51 = opt_page2_pad_pressed(0x2);
                    if ((signed char)t51 != 0) {
                        snd_play_side_se(0x0, 0x4D);
                        opt_page_leave_reset();
                    }
                }
            }
        } else {
            (((struct o1_uchar *)0xC362338)->v) = ((*(signed char *)0xC362339) + 0x1);
            t65 = ((int (*)(int, int, int, int))(opt_page2_run_objects_in_mask))(0x3, a5, a6, a7);
            FUN_0c01a800(0x1);
            FUN_0c01a928(0x1);
            (((struct o8_uchar *)0xC362338)->v) = (*(signed char *)0xC36233E);
        }
        break;
    case 2:
        FUN_0c01a5cc(0xC362338, a5, a6, a7);
        break;
    }
    obj_tick_class(0x5);
    return FUN_0c0593e0(0x5);
}

int FUN_0c09e4ac(int a4, int a5, int a6)
{
    int t0;
    register int t14;
    int t22;
    register int t16;
    register int t24;
    register int t25;
    register int t26;
    int t29;
    register int t32;
    register int t33;
    int t43;
    register int t47;
    register int t48;
    register int t57;
    int t71;
    register int t91;
    register int t75;
    register int t76;
    register int t99;
    int t27;
    register int t54;
    int t55;
    register int t59;
    register int t60;
    register int t61;
    int t62;
    int t63;
    register int t82;
    int t83;

    t0 = *(signed char *)((a4 + 0x71BC));
    if ((t0 != 0) && (t0 != 1)) {
        t99 = 0x0;
        if ((0x600 & ((((struct o2E4_int *)(a4))->v))) != 0) {
            if ((((((struct o2E4_int *)(a4))->v)) & 0x400) != 0) {
                (((struct o721E_uchar *)(a4))->v) = 0x0;
            } else {
                (((struct o721E_uchar *)(a4))->v) = 0x1;
            }
            t99 = 0x1;
        }
    } else {
        if ((((((((struct o2E4_int *)(a4))->v)) | ((((struct o71F8_int *)(a4))->v))) | ((((struct o71FC_int *)(a4))->v))) & 0x600) != 0) {
            t14 = (((struct o2E4_int *)(a4))->v);
            t22 = (t14 & 0x600);
            if ((t14 & 0x600) == 0) {
                t16 = (((struct o71F8_int *)(a4))->v);
                t22 = (t16 & 0x600);
                if ((t16 & 0x600) == 0) {
                    t22 = (((((struct o71FC_int *)(a4))->v)) & 0x600);
                }
            }
            t24 = (((struct o71F8_int *)(a4))->v);
            t25 = (((struct o71FC_int *)(a4))->v);
            t26 = (((struct o2E4_int *)(a4))->v);
            t29 = (t22 | (((t26 | t24) | t25) & 0xF0));
            t33 = t25;
            if (((0xC0 & (t22 | (((t26 | t24) | t25) & 0xF0))) != 0) && (t27 = *(signed char *)((a4 + 0x71EE)), t27 == 1)) {
                t29 = ((t22 | (((t26 | t24) | t25) & 0xF0)) ^ 0xC0);
                t33 = 0xC0;
            }
            t32 = *(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC338E4C));
            *(unsigned char *)((a5 + 0x0)) = 0x0;
            for (;;) {
                if ((*(signed char *)((t32 + (((*(signed char *)((a5 + 0x0))) << 2) << 2)))) == 99) {
                    t43 = (((struct o2E4_int *)(a4))->v);
                    if ((t43 & 0x600) != 0) {
                        t33 = (*(signed char *)((a6 + 0x0)));
                        if (t33 == 0) {
                            t47 = *(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC338E4C));
                            t48 = 0x0;
                            for (;;) {
                                if ((*(signed char *)((t47 + (((signed char)t48 << 2) << 2)))) == 99) {
                                    return 0x0;
                                }
                                if (((*(signed char *)((((((signed char)t48 << 2) << 2) + t47) + 0x0))) == 0) && ((t54 = *(int *)((((((signed char)t48 << 2) << 2) + t47) + 0x8)), t54 == 0) && (t55 = *(int *)((((((signed char)t48 << 2) << 2) + t47) + 0x4)), ((t55 & (t43 & 0x600)) & 0x600) != 0))) {
                                    break;
                                }
                                t48 = (t48 + 0x1);
                            }
                            *(unsigned char *)((a5 + 0x0)) = t48;
                        }
                        if ((0x400 & (t43 & 0x600)) == 0) {
                            (((struct o721E_uchar *)(a4))->v) = 0x1;
                            return 0x1;
                        }
                        (((struct o721E_uchar *)(a4))->v) = 0x0;
                        return 0x1;
                    }
                    return 0x0;
                }
                t57 = *(signed char *)((a5 + 0x0));
                if (((*(signed char *)(((((t57 << 2) << 2) + t32) + 0x0))) == 0) && ((t59 = *(int *)(((((t57 << 2) << 2) + t32) + 0x8)), t59 != 0) && ((t60 = *(signed char *)((a5 + 0x0)), t61 = *(int *)(((((t60 << 2) << 2) + t32) + 0x4)), ((t61 & t29) & 0x600) != 0) && (t62 = *(int *)(((((t60 << 2) << 2) + t32) + 0x8)), t63 = *(int *)(((((t60 << 2) << 2) + t32) + 0x8)), (((t62 & t29) & t63) & 240) != 0)))) {
                    break;
                }
                t33 = (*(signed char *)((a5 + 0x0)));
                t33 = (t33 + 0x1);
                *(unsigned char *)((a5 + 0x0)) = t33;
            }
            *(unsigned char *)((a6 + 0x0)) = 0x1;
        }
        t71 = (((struct o2E4_int *)(a4))->v);
        t91 = 0x0;
        if ((t71 & 0x600) != 0) {
            if ((*(signed char *)((a6 + 0x0))) == 0) {
                t75 = *(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC338E4C));
                t76 = 0x0;
                for (;;) {
                    if ((*(signed char *)((t75 + (((signed char)t76 << 2) << 2)))) == 99) {
                        return 0x0;
                    }
                    if (((*(signed char *)((((((signed char)t76 << 2) << 2) + t75) + 0x0))) == 0) && ((t82 = *(int *)((((((signed char)t76 << 2) << 2) + t75) + 0x8)), t82 == 0) && (t83 = *(int *)((((((signed char)t76 << 2) << 2) + t75) + 0x4)), ((t83 & (t71 & 0x600)) & 0x600) != 0))) {
                        break;
                    }
                    t76 = (t76 + 0x1);
                }
                *(unsigned char *)((a5 + 0x0)) = t76;
                if ((0x400 & (t71 & 0x600)) == 0) {
                    (((struct o721E_uchar *)(a4))->v) = 0x1;
                } else {
                    (((struct o721E_uchar *)(a4))->v) = 0x0;
                }
            } else {
                if ((0x400 & (t71 & 0x600)) == 0) {
                    (((struct o721E_uchar *)(a4))->v) = 0x1;
                } else {
                    (((struct o721E_uchar *)(a4))->v) = 0x0;
                }
            }
            t91 = 0x1;
        }
        t99 = t91;
    }
    return t99;
}

int FUN_0c05bcde(int a4)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return obj_set_mode_owner(a4, 0x0, (*(signed char *)((a4 + 0x3))));
        }
        if (((((struct o274_float *)(a4))->v)) > 0.0f) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            return 0xEC;
        }
        FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
        t0 = FUN_0c0e21b0((a4 + 0x38), (a4 + 0x44));
        *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + 0xB6);
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x16C);
        return t0;
    }
    t0 = *(int *)((a4 + 0x1C));
    *(unsigned char *)((a4 + 0x3)) = 0x2;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned int *)((a4 + 0x1C)) = 0x0;
    FUN_0c0e6fe8(a4);
    u0 = (((struct o0_float *)0xC05BE7C)->v);
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + u0);
    math_rand_next();
    (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((t0 + 0x30)))) + 0x14000))) * ((((struct o10_float *)0xC05BE7C)->v))));
    (((struct o3C_float *)(a4))->v) = ((((struct o14_float *)0xC05BE7C)->v));
    (((struct o40_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((t0 + 0x30)))) + 0x14000))) * ((((struct o10_float *)0xC05BE7C)->v))));
    (((struct o44_float *)(a4))->v) = ((-((((struct o38_float *)(a4))->v))) / u0);
    (((struct o48_float *)(a4))->v) = ((((struct o1C_float *)0xC05BE7C)->v));
    (((struct o4C_float *)(a4))->v) = ((-((((struct o40_float *)(a4))->v))) / u0);
    (((struct o118_uint *)(a4))->v) = 0x0;
    (((struct o107_uchar *)(a4))->v) = 0x0;
    return 0x107;
}

int FUN_0c024ea6(int a4, int a5, int a6)
{
    int stk[9];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u8;
    register float t9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float t16;
    register int t71;
    register float u35;
    register float u38;
    register float u39;
    register float u40;
    register float u45;

    u0 = (((struct oC_float *)(a4))->v);
    u1 = (((struct oC_float *)(a6))->v);
    u2 = *(float *)((a4 + 0x0));
    u3 = *(float *)((a6 + 0x0));
    *(float *)(((int)stk + 4)) = (u2 - u3);
    u4 = (((struct o8_float *)(a6))->v);
    u5 = (((struct o8_float *)(a4))->v);
    *(float *)(((int)stk + 0)) = (u5 - u4);
    u8 = ((u5 - u4) * (u5 - u4));
    u8 = u8 + ((u2 - u3)) * ((u2 - u3));
    t9 = math_signed_sqrt(u8);
    u10 = (((struct o4_float *)(a6))->v);
    *(float *)(((int)stk + 16)) = u10;
    u11 = (((struct o10_float *)(a6))->v);
    *(float *)(((int)stk + 20)) = u11;
    u12 = *(float *)(((int)stk + 16));
    u13 = (((struct o4_float *)(a4))->v);
    *(float *)(((int)stk + 8)) = u13;
    u14 = (((struct o10_float *)(a4))->v);
    *(float *)(((int)stk + 12)) = u14;
    t16 = FUN_0c0211d0((u14 + (*(float *)(((int)stk + 8)))), (u13 - u14), (u11 + u12), (u10 - u11));
    t71 = 0x0;
    if (!(0.0f > ((u0 + u1) - t9)) && !(0.0f > t16)) {
        t71 = 0x1;
        if ((*(signed char *)((a5 + 0x2D9))) != 0) {
        } else {
            if (t16 > ((u0 + u1) - t9)) {
                FUN_0c02114c((((int)stk + 0) + 0x18), (*(float *)((a6 + 0x0))), ((((struct o8_float *)(a6))->v)), (*(float *)((a4 + 0x0))), ((((struct o8_float *)(a4))->v)));
                u35 = (((((struct o18_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9));
                u35 = -u35;
                (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + u35);
                u38 = (((((struct o20_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9));
                u38 = -u38;
                (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + u38);
                t71 = 0x8;
            } else {
                u39 = (((struct o4_float *)(a6))->v);
                u40 = (((struct o4_float *)(a4))->v);
                if (u40 > u39) {
                    u45 = ((u40 - ((((struct o10_float *)(a4))->v))) - ((((struct o10_float *)(a6))->v)));
                } else {
                    u45 = ((u40 + ((((struct o10_float *)(a4))->v))) + ((((struct o10_float *)(a6))->v)));
                }
                (((struct o24_float *)(a5))->v) = ((u45 - u39) + ((((struct o24_float *)(a5))->v)));
                t71 = 0x2;
                if (((((struct o4_float *)(a4))->v)) > ((((struct o4_float *)(a6))->v))) {
                    t71 = 0x3;
                }
            }
        }
    }
    return t71;
}

int pl_mode06_enter(int a4)
{
    int stk[6];
    register int t0;
    register int t2;
    register int t4;
    register int t7;
    register int t8;
    register int t10;
    register int t37;

    t0 = (((struct o71C8_int *)(a4))->v);
    if (t0 != 0) {
        t2 = obj_touched_by_slot(t0, (*(signed char *)((a4 + 0x3))));
        if ((signed char)t2 != 0) {
            t4 = obj_can_interact(t0, 0x7, (*(signed char *)((a4 + 0x3))), 0x0);
            if (t4 != 0) {
                if ((*(signed char *)((a4 + 0x721E))) == 0) {
                    t7 = pl_angle_to_opponent(a4);
                    t8 = math_angle_between_points_xz((a4 + 0x20), (t0 + 0x20));
                    t10 = (unsigned short)(t7 - t8);
                    if ((0x8000 & (unsigned short)(t7 - t8)) != 0) {
                        t10 = ((unsigned short)(t7 - t8) | 0xFFFF0000);
                    }
                    if (((int)t10 < (int)0x4000) && ((int)t10 > (int)0xFFFFC000)) {
                        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                        pl_start_motion(a4, 0x1, 0x4E);
                        (((struct o710B_uchar *)(a4))->v) = 0x1;
                        (((struct oEC_ushort *)(a4))->v) = 0x8;
                        t37 = 0x0;
                    } else {
                        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((pl_angle_to_opponent(a4)) + 0x8000);
                        pl_start_motion(a4, 0x1, 0x99);
                        (((struct o710B_uchar *)(a4))->v) = 0x1;
                        (((struct o710C_uchar *)(a4))->v) = 0x1;
                        t37 = 0x2;
                    }
                } else {
                    pl_start_motion(a4, 0x1, 0x3B);
                    (((struct o710B_uchar *)(a4))->v) = 0x1;
                    (((struct oEC_ushort *)(a4))->v) = 0xD;
                    t37 = 0x1;
                }
            } else {
                pl_start_motion(a4, 0x2, 0x3B);
                (((struct o710B_uchar *)(a4))->v) = 0x1;
                (((struct oEC_ushort *)(a4))->v) = 0xD;
                t37 = 0x0;
            }
        } else {
            pl_start_motion(a4, 0x2, 0x3B);
            (((struct o710B_uchar *)(a4))->v) = 0x1;
            (((struct oEC_ushort *)(a4))->v) = 0xD;
            t37 = 0x0;
        }
    } else {
        pl_start_motion(a4, 0x2, 0x3B);
        (((struct o710B_uchar *)(a4))->v) = 0x1;
        (((struct oEC_ushort *)(a4))->v) = 0xD;
        t37 = 0x0;
    }
    *(unsigned char *)((a4 + 0xA)) = t37;
    return t37;
}

int FUN_0c02743c(int a4, int a5)
{
    int stk[1];
    register int t4;
    register int t5;
    register int t29;
    register int t32;

    *(unsigned short *)(((int)stk + 0)) = ((*(short *)((((((unsigned char)a4 << 2) << 1) + 0xC362A90) + 0x2))) ^ (*(short *)((((((unsigned char)a4 << 2) << 1) + 0xC362A90) + 0x0))));
    t4 = *(short *)(((int)stk + 0));
    t5 = *(int *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x4));
    if (((unsigned short)(*(short *)((t5 + 0x8))) & (unsigned short)t4) != 0) {
        *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x0)) = (*(short *)(((t5 + 0x10) + 0x0)));
        *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2)) = (*(short *)(((t5 + 0x10) + 0x2)));
        *(unsigned int *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x4)) = (t5 + 0x10);
        if (0x0 != 0) {
            *(unsigned char *)(((((short)((short)(unsigned char)a4 * (short)0x190) + 0xC362E70) + (short)((((unsigned char)a5 << 2) + (unsigned char)a5) << 1)) + 0x5)) = 0x0;
        }
        if ((0x400 & (unsigned short)t4) != 0) {
            *(unsigned char *)(((((short)((short)(unsigned char)a4 * (short)0x190) + 0xC362E70) + (short)((((unsigned char)a5 << 2) + (unsigned char)a5) << 1)) + 0x5)) = 0x1;
        }
        if ((0x4 & (unsigned short)t4) != 0) {
            *(unsigned char *)(((((short)((short)(unsigned char)a4 * (short)0x190) + 0xC362E70) + (short)((((unsigned char)a5 << 2) + (unsigned char)a5) << 1)) + 0x5)) = 0x0;
        }
        if (((unsigned short)t4 & 0x2) != 0) {
            *(unsigned char *)(((((short)((short)(unsigned char)a4 * (short)0x190) + 0xC362E70) + (short)((((unsigned char)a5 << 2) + (unsigned char)a5) << 1)) + 0x5)) = 0x1;
        }
        t32 = 0x0;
    } else {
        t29 = *(short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2));
        *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2)) = (t29 - 1);
        if ((short)(t29 - 1) == 0) {
            *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x0)) = 0x0;
        }
        t32 = 0x1;
    }
    return t32;
}

int FUN_0c01e156(int a4, int a5, int a6)
{
    register int t4;
    register int t5;
    register int t0;
    register int t1;
    register int t2;

    t4 = 0x0;
    t5 = a6;
    for (;;) {
        if ((int)t4 < (int)0x24) {
            t2 = t4;
            t2 = (t2 << 1);
            t2 = (t2 + (t4));
            t2 = (t2 << 2);
            t2 = (t2 << 2);
            t2 = (short)t2;
            t5 = (0xC36238C + t2);
            t0 = 0x0;
            *(unsigned char *)((t5 + 0x3)) = t0;
            *(unsigned char *)((t5 + 0x2)) = t0;
            *(unsigned char *)((t5 + 0x1)) = t0;
            *(unsigned char *)((t5 + 0x0)) = t0;
            t5 = 0x1;
            if ((int)t4 < (int)t5) {
                t0 = 0x0;
                *(unsigned char *)(((0xC36238C + t2) + 0x4)) = t0;
                t0 = t4;
                *(unsigned char *)(((0xC36238C + t2) + 0x5)) = t0;
            } else {
                t1 = 0xB;
                if ((int)t4 < (int)t1) {
                    t0 = t5;
                    t5 = 0xFF;
                    *(unsigned char *)(((0xC36238C + t2) + 0x4)) = t0;
                    t0 = t4;
                    t0 = (t0 + t5);
                    *(unsigned char *)(((0xC36238C + t2) + 0x5)) = t0;
                    t0 = 0x0;
                    *(unsigned char *)(((0xC36238C + t2) + 0x6)) = t0;
                } else {
                    t1 = 0x15;
                    if ((int)t4 < (int)t1) {
                        t0 = t5;
                        t1 = 0xF5;
                        *(unsigned char *)(((0xC36238C + t2) + 0x4)) = t0;
                        t0 = t4;
                        t0 = (t0 + t1);
                        *(unsigned char *)(((0xC36238C + t2) + 0x5)) = t0;
                        t0 = t5;
                        *(unsigned char *)(((0xC36238C + t2) + 0x6)) = t0;
                    } else {
                        t1 = 0x17;
                        if ((int)t4 < (int)t1) {
                            t5 = 0xEB;
                            t0 = 0x2;
                            *(unsigned char *)(((0xC36238C + t2) + 0x4)) = t0;
                            t0 = t4;
                            t0 = (t0 + t5);
                            *(unsigned char *)(((0xC36238C + t2) + 0x6)) = t0;
                        } else {
                            t0 = 0x1D;
                            t1 = 0x3;
                            if ((int)t4 < (int)t0) {
                                t0 = t1;
                                t5 = 0xE9;
                                *(unsigned char *)(((0xC36238C + t2) + 0x4)) = t0;
                                t0 = t4;
                                t0 = (t0 + t5);
                                *(unsigned char *)(((0xC36238C + t2) + 0x5)) = t0;
                                t0 = 0x0;
                                *(unsigned char *)(((0xC36238C + t2) + 0x6)) = t0;
                            } else {
                                t0 = 0x23;
                                if ((int)t4 < (int)t0) {
                                    t0 = t1;
                                    t1 = 0xE3;
                                    *(unsigned char *)(((0xC36238C + t2) + 0x4)) = t0;
                                    t0 = t4;
                                    t0 = (t0 + t1);
                                    *(unsigned char *)(((0xC36238C + t2) + 0x5)) = t0;
                                    t0 = t5;
                                    *(unsigned char *)(((0xC36238C + t2) + 0x6)) = t0;
                                } else {
                                    t5 = 0xDD;
                                    t0 = 0x4;
                                    *(unsigned char *)(((0xC36238C + t2) + 0x4)) = t0;
                                    t0 = t4;
                                    t0 = (t0 + t5);
                                    *(unsigned char *)(((0xC36238C + t2) + 0x5)) = t0;
                                }
                            }
                        }
                    }
                }
            }
            t4 = (t4 + 0x1);
            continue;
        }
        break;
    }
    return t0;
}

int FUN_0c02067e(int a4)
{
    int stk[4];
    register int t4;
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t4 = a4;
    for (;;) {
        if (t4 == 0) {
            break;
        }
        t0 = 0x102;
        t1 = 0xC022952;
        t0 = (hit_find_part_entry(t4, 0x1, (*(signed char *)((t4 + t0))), 0x0));
        t3 = 0x0;
        for (;;) {
            t0 = (*(signed char *)((t4 + 0x2)));
            t0 = (t0 << 1);
            t0 = (t0 + 0xC320034);
            t1 = (*(signed char *)((t0 + 0x0)));
            if ((int)t3 >= (int)t1) {
                break;
            }
            t0 = 0x101;
            t0 = (hit_find_part_entry(t4, 0x0, (*(signed char *)((t4 + t0))), t3));
            t2 = t0;
            t0 = (*(short *)((t2 + 0x2)));
            t1 = 0xC0229D8;
            t0 = (FUN_0c0229d8(t4, t0, ((int)stk + 0)));
            t0 = (hit_offset_point_by_owner(t4, ((int)stk + 0), (*(signed char *)((t2 + 0x0)))));
            t1 = 0xC022E90;
            t0 = (FUN_0c022e90(t4, ((int)stk + 0), (*(signed char *)((t2 + 0x0)))));
            t1 = 0x148;
            t1 = (t1 + t4);
            t1 = 0xC0E6FDC;
            t0 = 0x10;
            t0 = (FUN_0c0e6fdc());
            t3 = (t3 + 0x1);
        }
        t3 = 0x1;
        for (;;) {
            t0 = (*(signed char *)((t4 + 0x2)));
            t0 = (t0 << 1);
            t0 = (t0 + 0xC320034);
            t0 = (*(signed char *)((t0 + 0x1)));
            if ((int)t3 >= (int)t0) {
                break;
            }
            t0 = 0x102;
            t1 = 0xC022952;
            t0 = (hit_find_part_entry(t4, 0x1, (*(signed char *)((t4 + t0))), t3));
            t2 = t0;
            t0 = (*(short *)((t2 + 0x2)));
            t1 = 0xC0229D8;
            t0 = (FUN_0c0229d8(t4, t0, ((int)stk + 0)));
            t0 = (hit_offset_point_by_owner(t4, ((int)stk + 0), (*(signed char *)((t2 + 0x0)))));
            t1 = 0xC022E90;
            t0 = (FUN_0c022e90(t4, ((int)stk + 0), (*(signed char *)((t2 + 0x0)))));
            t1 = 0x188;
            t1 = (t1 + t4);
            t1 = 0xC0E6FDC;
            t0 = 0x10;
            t0 = (FUN_0c0e6fdc());
            t3 = (t3 + 0x1);
        }
        t4 = (*(int *)((t4 + 0x18)));
    }
    return t0;
}

float FUN_0c0c9526(int a4)
{
    int stk[3];
    register int t0;
    register int t8;
    register float u18;
    register float u26;
    register float u40;
    register float t44;
    register float u49;

    t0 = (((struct o2EC_int *)(a4))->v);
    if ((*(signed char *)(((0x308 + a4) + 0x5))) != 0) {
        *(unsigned char *)(((0x308 + a4) + 0x5)) = ((*(signed char *)(((0x308 + a4) + 0x5))) - 1);
    }
    if ((*(signed char *)(((0x308 + a4) + 0x5))) != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        (((struct oC_float *)(t0))->v) = (((((struct o308_float *)(a4))->v)) / ((((struct o58_float *)(a4))->v)));
        t8 = *(signed char *)(((0x308 + a4) + 0x4));
        switch (t8) {
        case 0:
            *(unsigned char *)(((0x308 + a4) + 0x4)) = ((*(signed char *)(((0x308 + a4) + 0x4))) + 0x1);
            (((struct o1C_float *)(t0))->v) = 0.125f;
            break;
        case 1:
            u26 = (((struct o1C_float *)(t0))->v);
            (((struct o1C_float *)(t0))->v) = (u26 + 0.25f);
            if (!(1.0f > (u26 + 0.25f))) {
                *(unsigned char *)(((0x308 + a4) + 0x4)) = ((*(signed char *)(((0x308 + a4) + 0x4))) + 0x1);
                (((struct o1C_float *)(t0))->v) = 1.0f;
            }
            break;
        case 2:
            u18 = (((struct o1C_float *)(t0))->v);
            (((struct o1C_float *)(t0))->v) = (u18 - 0.125f);
            if (!((u18 - 0.125f) > 0.25f)) {
                *(unsigned char *)(((0x308 + a4) + 0x4)) = ((*(signed char *)(((0x308 + a4) + 0x4))) + 0x1);
            }
            break;
        case 3:
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.125f);
            if (!(0.5f > ((((struct o1C_float *)(t0))->v)))) {
                *(unsigned char *)(((0x308 + a4) + 0x4)) = ((*(signed char *)(((0x308 + a4) + 0x4))) - 1);
            }
            break;
        }
        u40 = (((struct o1C_float *)(t0))->v);
        (((struct o24_float *)(t0))->v) = u40;
        (((struct o20_float *)(t0))->v) = u40;
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) / ((((struct o58_float *)(a4))->v)));
        math_vec3_sub(((int)stk + 0), 0xC7F2AB4, (t0 + 0x4));
        t44 = math_vec3_length(((int)stk + 0));
        if (!(t44 > 400.0f)) {
            *(unsigned char *)((t0 + 0x0)) = 0x0;
        }
        u49 = t44;
    } else {
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        *(unsigned char *)(((0x308 + a4) + 0x4)) = 0x0;
    }
    return u49;
}

int menu_vs_announce_names(void)
{
    int t0;
    int t1;
    int t3;
    register int t4;

    t4 = *(signed char *)0xC7F2EE7;
    if ((unsigned char)t4 != 0) {
        if ((unsigned char)t4 != 1) {
            (((struct o0_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE6) + 0x1);
            (((struct o1_uchar *)0xC7F2EE6)->v) = 0x0;
            t4 = 0x0;
        } else {
            if (((((struct oE_short *)0xC7F2EE6)->v)) == 0) {
                if (((*(signed char *)0xC7F2F08) != 0) && (t0 = *(signed char *)0xC7E40C8, t0 == 0)) {
                    t0 = ((*(signed char *)0xC7E40C8) + 0xA);
                } else {
                    t0 = (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7E40C8))));
                }
                snd_play_announcer(0x0, t0);
            }
            if (((((struct oE_short *)0xC7F2EE6)->v)) == 40) {
                snd_play_announcer(0x0, 0x16);
            }
            if (((((struct oE_short *)0xC7F2EE6)->v)) == 80) {
                if (((*(signed char *)0xC7F2F08) != 0) && (t1 = *(signed char *)0xC7EB398, t1 == 0)) {
                    t0 = ((*(signed char *)0xC7EB398) + 0xA);
                } else {
                    t0 = (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7EB398))));
                }
                snd_play_announcer(0x1, t0);
            }
            t0 = (((struct oE_short *)0xC7F2EE6)->v);
            (((struct oE_ushort *)0xC7F2EE6)->v) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0xA0) {
                t0 = *(signed char *)0xC7F2EE7;
                (((struct o1_uchar *)0xC7F2EE6)->v) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            }
            t4 = t1;
        }
        t0 = t4;
    } else {
        (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
        (((struct oE_ushort *)0xC7F2EE6)->v) = 0x0;
        menu_ui_spawn_32(0x0);
        menu_ui_spawn_32(0x1);
        menu_ui_spawn_33();
        if (((((struct oE_short *)0xC7F2EE6)->v)) == 0) {
            if (((*(signed char *)0xC7F2F08) != 0) && (t0 = *(signed char *)0xC7E40C8, t0 == 0)) {
                t1 = ((*(signed char *)0xC7E40C8) + 0xA);
            } else {
                t1 = (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7E40C8))));
            }
            snd_play_announcer(0x0, t1);
        }
        if (((((struct oE_short *)0xC7F2EE6)->v)) == 40) {
            snd_play_announcer(0x0, 0x16);
        }
        if (((((struct oE_short *)0xC7F2EE6)->v)) == 80) {
            if (((*(signed char *)0xC7F2F08) != 0) && (t3 = *(signed char *)0xC7EB398, t3 == 0)) {
                t1 = ((*(signed char *)0xC7EB398) + 0xA);
            } else {
                t1 = (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7EB398))));
            }
            snd_play_announcer(0x1, t1);
        }
        t1 = (((struct oE_short *)0xC7F2EE6)->v);
        (((struct oE_ushort *)0xC7F2EE6)->v) = (t1 + 0x1);
        t0 = (short)(t1 + 0x1);
        if ((int)(short)(t1 + 0x1) > (int)0xA0) {
            t1 = *(signed char *)0xC7F2EE7;
            (((struct o1_uchar *)0xC7F2EE6)->v) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
    }
    return t0;
}

void FUN_0c055686(void)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC7F2F03) == 0) {
        t0 = *(signed char *)0xC7F3196;
        if (t0 != 0) {
            if (t0 != 1) {
                return;
            }
            t0 = *(signed char *)0xC3673FC;
            t1 = FUN_0c095472();
            if (t0 != (signed char)t1) {
                *(unsigned char *)0xC7F3196 = 0x0;
                t0 = FUN_0c095472();
                if ((signed char)t0 == 0) {
                    fx_spawn_0488b8(0x1, 0x0, 0x1E, 0x0);
                    fx_spawn_0488b8(0x0, 0x1, 0x1E, 0x0);
    return;
                }
                return;
            }
            return;
        }
        t0 = FUN_0c095472();
        *(unsigned char *)0xC3673FC = t0;
        if ((signed char)t0 != 0) {
            *(unsigned char *)0xC7F3196 = 0x1;
            bgm_set_volume(0x0, 0x0);
            if ((int)(*(signed char *)(((unsigned short)((unsigned short)((*(signed char *)0xC3673FC) + 0xFFFF) * (unsigned short)0x72D0) + 0xC7E40C8))) >= (int)0x9) {
                bgm_play_hen_01();
    return;
            }
            bgm_play_hen_00();
    return;
        }
        return;
    }
}

int FUN_0c0d7318(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[3];
    register int t0;
    register int t3;
    register int t19;
    register int t31;
    int t2;
    int t18;
    register int t26;

    t0 = *(signed char *)0xC7F2EE0;
    if ((unsigned char)t0 != 0) {
        t31 = (unsigned char)t0;
        if ((unsigned char)t0 == 1) {
            if (((*(signed char *)0xC7F300B) == 0) && (t2 = *(signed char *)0xC7F300E, t2 == 0)) {
                t3 = ((int (*)(int, int, int, int, float, float, float, float, float, float))(menu_option_update))(a4, a5, a6, a7, f4, f5, f6, f7, f8, f9);
                cam_update_view_matrices();
                FUN_0c05f952();
                FUN_0c055562();
            }
            t31 = (game_draw_frame());
        }
    } else {
        gfx_set_background_color(0xFF000000, 0xFF000000, 0xFF000000);
        (((struct o0_uchar *)0xC7F2EE0)->v) = 0x1;
        (((struct oD_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct oC_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct oB_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct oA_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct o9_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct o8_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct o7_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct o6_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct o5_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct o4_uchar *)0xC7F2EE0)->v) = 0x0;
        memset(0xC7F4724, 0x0, 0x2C);
        game_clear_win_records();
        game_reset_objects();
        cam_init_records();
        FUN_0c05f2d4(0x3, 0x0);
        (((struct o0_uchar *)0xC7F4768)->v) = 0x0;
        (((struct o1_uchar *)0xC7F4768)->v) = 0x0;
        if (((*(signed char *)0xC7F300B) == 0) && (t18 = *(signed char *)0xC7F300E, t18 == 0)) {
            t19 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(menu_option_update))(0xC7F4750, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            cam_update_view_matrices();
            FUN_0c05f952();
            FUN_0c055562();
        } else {
            t26 = 0xC7F4750;
        }
        t31 = (game_draw_frame());
    }
    if ((*(signed char *)0xC7F473A) == 0) {
        *(unsigned char *)0xC7F301F = 0x1;
        t31 = 0x13F;
    }
    return t31;
}

int FUN_0c05ed92(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o8_float *)(t0))->v) = (((((struct o8_float *)(t0))->v)) + 2.0f);
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0xEAAC);
        t0 = (((struct o2E0_int *)(a4))->v);
        u0 = (((struct o1C_float *)(t0))->v);
        (((struct o1C_float *)(t0))->v) = (u0 * 1.03999996f);
        (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = (u0 * 1.03999996f);
        (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = (u0 * 1.03999996f);
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        if ((short)(t0 + 0x1) == 20) {
            return obj_set_mode_owner(a4, 0x3, 0x2);
        }
        return (short)(t0 + 0x1);
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned short *)((t0 + 0x2)) = ((*(short *)((t0 + 0x2))) | 0x10);
    (((struct o107_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)((a4 + 0xB));
    t1 = t0;
    if (t0 == 0) {
        (((struct o0_uchar *)0xC7F2979)->v) = (*(signed char *)((a4 + 0xD)));
        (((struct o1_uchar *)0xC7F2979)->v) = 0x1;
        *(unsigned char *)((a4 + 0xB)) = 0x1;
        t1 = 0x1;
    }
    return t1;
}

int FUN_0c0d4d00(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;

    t3 = *(signed char *)0xC7F3072;
    t4 = *(signed char *)0xC7F3071;
    t5 = 0x45;
    if (((~(unsigned char)t3) & (unsigned char)t4) != 0) {
        t5 = 0x42;
        if (((*(signed char *)0xC7F306E) == 0) && (t0 = *(signed char *)0xC7F2EE4, (int)(unsigned char)t0 >= (int)0x1)) {
            if (((unsigned char)t3 == 0) && (t1 = *(signed char *)0xC7F3071, t1 != 0)) {
                if ((unsigned char)t4 != 0) {
                    if (((unsigned char)t4 != 1) && ((unsigned char)t4 != 2)) {
                        if ((unsigned char)t4 != 3) {
                        } else {
                            (((struct o0_uchar *)0xC7F2EE4)->v) = 0x2;
                            (((struct o1_uchar *)0xC7F2EE4)->v) = 0x1;
                        }
                    } else {
                        if ((*(signed char *)(((unsigned char)((unsigned short)((*(signed char *)0xC7F3071) + 0xFF) * (unsigned short)0x78) + 0xC7F2E3C))) == 0) {
                            (((struct o0_uchar *)0xC7F2EE4)->v) = 0x1;
                            (((struct o1_uchar *)0xC7F2EE4)->v) = 0x0;
                        } else {
                            (((struct o0_uchar *)0xC7F2EE4)->v) = 0x2;
                            (((struct o1_uchar *)0xC7F2EE4)->v) = 0x1;
                        }
                    }
                } else {
                    (((struct o0_uchar *)0xC7F2EE4)->v) = 0x2;
                    (((struct o1_uchar *)0xC7F2EE4)->v) = 0x1;
                }
            } else {
                t0 = *(signed char *)0xC7F2EE4;
                if (((int)(unsigned char)t0 > (int)0x2) || (((unsigned char)t0 == 2) && (t2 = *(signed char *)0xC7F2EE5, (int)(unsigned char)t2 >= (int)0x3))) {
                    (((struct o0_uchar *)0xC7F2EE4)->v) = 0x7;
                    (((struct o4_uchar *)0xC7F3072)->v) = ((*(signed char *)0xC7F3072) ^ 0x3);
                    (((struct o1_uchar *)0xC7F2EE4)->v) = 0x0;
                }
            }
            (((struct o0_uchar *)0xC7F3072)->v) = (*(signed char *)0xC7F3071);
            t5 = 0x46;
        }
    }
    return t5;
}

int FUN_0c01db74(int a4)
{
    int t0;
    register int t1;

    if ((unsigned char)(*(signed char *)((a4 + 0x0))) == 0) {
        *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
        *(unsigned char *)((a4 + 0xC)) = 0x0;
        (((struct o20_float *)(a4))->v) = 0.0f;
        (((struct o1C_float *)(a4))->v) = 0.0f;
        (((struct o24_float *)(a4))->v) = 9.99999997e-07f;
        (((struct o18_float *)(a4))->v) = 1.0f;
        (((struct o14_float *)(a4))->v) = 1.0f;
        *(unsigned int *)((a4 + 0x2C)) = 0xC180698;
    }
    t1 = *(signed char *)((a4 + 0x1));
    if ((unsigned char)t1 != 0) {
        if ((unsigned char)t1 != 1) {
            if ((unsigned char)t1 != 2) {
            } else {
                t1 = *(signed char *)0xC36237E;
                if ((*(short *)(((signed char)(((t1 << 2) + t1) << 2) + 0xC361BFC))) != 0) {
                    *(unsigned char *)((a4 + 0x1)) = 0x0;
                }
            }
        } else {
            t1 = *(int *)((a4 + 0x8));
            *(unsigned int *)((a4 + 0x8)) = (t1 + 0x1);
            if ((int)t1 >= (int)0x4650) {
                *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                *(unsigned char *)((a4 + 0x7)) = 0x1;
                (((struct o10_float *)(a4))->v) = 1.0f;
            }
        }
    } else {
        *(unsigned int *)((a4 + 0x8)) = 0x0;
        *(unsigned char *)((a4 + 0x7)) = 0x0;
        (((struct o10_float *)(a4))->v) = 0.0f;
        *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
        t1 = *(int *)((a4 + 0x8));
        *(unsigned int *)((a4 + 0x8)) = (t1 + 0x1);
        if ((int)t1 >= (int)0x4650) {
            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
            *(unsigned char *)((a4 + 0x7)) = 0x1;
            (((struct o10_float *)(a4))->v) = 1.0f;
        }
    }
    t1 = *(signed char *)((a4 + 0x7));
    if ((t1 != 0) && (t0 = *(signed char *)0xC36237C, t0 != 0)) {
        return ui_draw_element_sprite(a4);
    }
    return t1;
}

int FUN_0c0109e4(void)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;

    t5 = 0x0;
    for (;;) {
        t6 = *(int *)((((short)((((t5 << 2) + t5) << 2) << 1) + 0xC361A60) + 0x4));
        if ((t6 == 18) && (t0 = *(int *)((((short)((((t5 << 2) + t5) << 2) << 1) + 0xC361A60) + 0x8)), t0 == 0xFFFF0000)) {
            break;
        }
        t7 = t5;
        t5 = (t5 + 0x1);
        if ((int)t5 >= (int)0x8) {
            t5 = 0x0;
            t8 = t6;
            t6 = t7;
            t7 = 0x0;
            t9 = 0x0;
            for (;;) {
                if ((int)t5 >= (int)0x8) {
                    break;
                }
                t9 = t5;
                t9 = (t9 << 2);
                t6 = t5;
                t9 = (t9 + t6);
                t9 = (t9 << 2);
                t9 = (t9 << 1);
                t9 = (short)t9;
                t9 = (t9 + 0xC361A60);
                t9 = (*(int *)((t9 + 0x4)));
                t8 = t9;
                if (((t8 == 18) || (t1 = (t8 == 18), t8 = t9, t8 == 1)) && (t2 = (t8 == 18), t8 = t5, t8 = (t8 << 2), t6 = t5, t8 = (t8 + t6), t8 = (t8 << 2), t3 = (int)(((unsigned int)t8) >> 31), t8 = (t8 << 1), t8 = (short)t8, t8 = (t8 + 0xC361A60), t4 = *(int *)((t8 + 0x1C)), t8 = t4, t8 == 1)) {
                    t8 = t5;
                    t8 = (t8 << 2);
                    t6 = t5;
                    t8 = (t8 + t6);
                    t8 = (t8 << 2);
                    t8 = (t8 << 1);
                    t8 = (short)t8;
                    t8 = (t8 + 0xC361A60);
                    t8 = (*(int *)((t8 + 0x14)));
                    if (t8 == 2) {
                        t6 = t5;
                        t6 = (t6 << 2);
                        t10 = t5;
                        t6 = (t6 + t10);
                        t6 = (t6 << 2);
                        t9 = 0x80;
                        t6 = (t6 << 1);
                        t6 = (short)t6;
                        t6 = (t6 + 0xC361A60);
                        t11 = (*(int *)((t6 + 0x20)));
                        if ((int)t11 < (int)t9) {
                        } else {
                            t9 = 0x1;
                            t10 = t9;
                            t10 = ((int)t10 << (int)t5);
                            t7 = (t7 | t10);
                        }
                    } else {
                        t10 = t5;
                        t10 = (t10 << 2);
                        t6 = t5;
                        t10 = (t10 + t6);
                        t10 = (t10 << 2);
                        t9 = 0x84;
                        t10 = (t10 << 1);
                        t10 = (short)t10;
                        t10 = (t10 + 0xC361A60);
                        t11 = (*(int *)((t10 + 0x20)));
                        if ((int)t11 >= (int)t9) {
                            t9 = 0x1;
                            t10 = t9;
                            t10 = ((int)t10 << (int)t5);
                            t7 = (t7 | t10);
                        }
                    }
                }
                t5 = (t5 + 0x1);
            }
            return t7;
        }
    }
    return 0xFFFFFFFF;
}
