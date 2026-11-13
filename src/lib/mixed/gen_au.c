/* Straight-line functions with calls and guards (batch gen_au): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o308_int { char p[0x308]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o7206_uchar { char p[0x7206]; unsigned char v; };
struct o721D_uchar { char p[0x721D]; unsigned char v; };
struct o7223_uchar { char p[0x7223]; unsigned char v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
float FUN_0c0262f8(int);
int FUN_0c02656e(int, int);
int ui_fade_reset(void);
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
int ai_calc_angle_to_target(void);
int ai_clear_op_state(void);
int FUN_0c0555dc(void);
int obj_create(int, int, int);
int obj_destroy(int);
int FUN_0c059b48(int);
int FUN_0c059b5a(int);
int FUN_0c05f2d4(int, int);
int res_switch_scene(int);
int FUN_0c06233a(int, int, int);
int FUN_0c0623a6(int, int, int);
int pl_mode01_03_update(int);
int pl_mode05_update(int);
int pl_mode06_update(int);
int pl_mode10_update(int, int, int, int);
int pl_mode08_update(int, int, int, int);
int pl_mode09_update(int, int, int, int);
int pl_mode13_update(int);
int pl_mode14_update(int);
int pl_mode15_update(int);
int pl_jack_mode01_03_update(int);
int pl_jack_mode04_update(int, int, int, int);
int pl_jack_mode12_update(int);
int pl_jack_mode11_update(int, int, int, int);
int ai_dist_class(int);
int ai_lookup_dir_sector(int, int);
int FUN_0c0972b2(int);
int pl_timer_arm_forever(int);
int pl_start_motion_owner(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int FUN_0c09ca88(int, int, int, int);
int pl_apply_motion_translation(int);
int pl_stick_dir_angle(int);
int pl_change_state(int, int, int, int);
int bgm_play_stage_select(void);
int FUN_0c0a3762(int, int);
extern int menu_player_select_slot_update();
int menu_stage_select_spawn_ui(void);
int menu_ui_spawn_24(void);
int menu_ui_spawn_28(void);
int menu_ui_spawn_35(int);
int stage_spawn_type03(int);
int stage_spawn_type01(int);
int stage_spawn_type02(int);
int stage_spawn_type12(int);
int stage_spawn_type08(int);
int stage_spawn_gimmick_by_kind(int, int, int, int);
int stage_spawn_type11(int);
int stage_spawn_type04(int);
int stage_gimmick_20_run(int, int);
int FUN_0c0b5420(int);
int FUN_0c0c3408(int, int);
int fx31_follow_phase_a(int);
int fx31_follow_circle(int);
int fx31_follow_phase_b(int);
int fx31_pick_mode3_from_owner(int);
int testmode_draw_text_table(int, int);
int testmode_game_config_screen(int, int, int, int);
int testmode_input_test_screen(void);
int testmode_game_data_screen(void);
int FUN_0c0cf240(int, int, int);
int cam_force_mode_23(int);
int FUN_0c0ddd10(int, int);
int FUN_0c0ddee0(int);
int gfx_set_background_color(int, int, int);
float math_cos_angle16(int);
int math_rand_next(void);
float math_rand_float(void);
float math_sin_angle16(int);
int nlMultiMatrix(int);
int FUN_0c0e2120(int);
int FUN_0c0e2260(int, int, int);
int FUN_0c0e2390(int, int, int);
int FUN_0c0e24f0(int);
int _modlu(void);
int _quick_odd_mvn(int);
int FUN_0c0f4938(int, int);
int FUN_0c0f4c2c(int, int, int, int);
int vmsfs_unmount(int);
int FUN_0c104962(int, int, int);
int direntry(int, int);
int check_isopen(void);
int get_vmstime(int, int);
int FUN_0c1084b6(int, int);
int vmsio_isready(int);
int vmsio_ismount(int);
int buIsFormat(int);
int memset(int, int, int);
int thunk_FUN_0c062242(int);
float stage_type01_start_thrown_item(int a4);
int FUN_0c0f4b64(int a4, int a5, int a6, int a7);
int fx_spawn_03d0d4(int a4, int a5, int a6, int a7);
int pl_rouge_special_id5(int a4);
int ai_reaction_mode1(int a4, int a5);
int FUN_0c0967a0(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int menu_ui_task_18(int a4);
int stage_gimmick_37_spawn(int a4);
int fx31_mode_three(int a4);
int FUN_0c103d56(int a4, int a5, int a6);
int stage_gimmick_20_update(int a4);
int stage_gimmick_38_spawn(int a4);
int testmode_main(int a4, int a5, int a6, int a7);
int nlLookAtUp_L(int a4, int a5, int a6);
int menu_ui_spawn_00(void);
int stage_spawn_layout_objects(int a4, int a5, int a6, int a7);
int stage_gimmick_33_spawn(int a4);
int fx_spawn_04b054(int a4);
int ai_op68(void);
int menu_player_select_update_slots(void);
int fx_spawn_03c724(int a4, int a5);
int pl_jack_state_update(int a4, int a5, int a6, int a7);
int pl_enter_state_11_12(int a4);
int FUN_0c0d7108(float f4);
int fx_tick_038640(int a4);
int menu_stage_select_init(int a4);
int FUN_0c0dd600(int a4);
int ai_op60(void);
int pl_garuda_victim_phase9(int a4, int a5, int a6, int a7);
int FUN_0c0fdaca(int a4, int a5);

int FUN_0c0f4b64(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    FUN_0c0f4c2c(a4, a5, a6, a7);
    t0 = *(int *)((a5 + 0x4));
    if (((int)a6 < (int)((((unsigned char)(signed char)((unsigned int)((unsigned int)t0 >> 16) >> 8) | (((int)t0 >> 8) & 0xFF00)) | ((t0 << 8) & 0xFF0000)) | ((t0 << 16) << 8))) && ((int)a6 >= 0)) {
        ADXCRS_Lock();
        t0 = *(int *)((a5 + (((a6 + 0x1) << 1) << 2)));
        t1 = FUN_0c1084b6((((((unsigned char)(signed char)((unsigned int)((unsigned int)t0 >> 16) >> 8) | (((int)t0 >> 8) & 0xFF00)) | ((t0 << 8) & 0xFF0000)) | ((t0 << 16) << 8)) + a5), 0x40000000);
        if (t1 == 0) {
            ADXCRS_Unlock();
            ADXERR_CallErrFunc(0xC15A8B8);
        } else {
            FUN_0c0f4938(a4, t1);
            *(unsigned char *)((a4 + 0x2)) = 0x2;
        }
        return ADXCRS_Unlock();
    }
    return 0xFF00;
}

int FUN_0c103d56(int a4, int a5, int a6)
{
    int stk[15];
    register int t1;
    register int t3;
    register int t5;
    register int t7;
    register int t9;
    register int t12;
    register int t13;
    register int t11;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    if ((*(signed char *)(((a4 * 0x148) + 0xC80DBCA))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t3 = vmsio_ismount(a4);
        if (t3 != 0) {
            if ((*(signed char *)(((a4 * 0x148) + 0xC80DBD0))) == 0) {
                return 0xFFFFFF01;
            }
            t5 = buIsFormat(a4);
            if ((int)t5 < 0) {
                return 0xFFFFFF03;
            }
            *(volatile int *)(((int)stk + 0));
            t7 = check_isopen();
            if ((int)t7 < 0) {
                return 0xFFFFFF0B;
            }
            t9 = FUN_0c104962(a4, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x10));
            if ((int)t9 < 0) {
                return 0xFFFFFF05;
            }
            t12 = (((int)stk + 0) + 0x8);
            t13 = ((direntry(a4, t9)) + 0x10);
            for (;;) {
                if ((unsigned int)t12 >= (unsigned int)((((int)stk + 0) + 0x8) + 0x8)) {
                    break;
                }
                t11 = (*(signed char *)((t13 + 0x0)));
                t13 = (t13 + 0x1);
                *(unsigned char *)((t12 + 0x0)) = t11;
                t12 = (t12 + 0x1);
            }
            get_vmstime((*(int *)(((int)stk + 4))), (((int)stk + 0) + 0x8));
            return 0x0;
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int nlLookAtUp_L(int a4, int a5, int a6)
{
    int stk[27];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a6;
    FUN_0c0e2390((((int)stk + 0) + 0x8), a5, (*(int *)(((int)stk + 0))));
    FUN_0c0e2260((*(int *)(((int)stk + 4))), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x20));
    FUN_0c0e2260((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x20), (((int)stk + 0) + 0x14));
    FUN_0c0e24f0((((int)stk + 0) + 0x20));
    FUN_0c0e24f0((((int)stk + 0) + 0x14));
    FUN_0c0e24f0((((int)stk + 0) + 0x8));
    *(float *)(((int)stk + 44)) = (*(float *)(((int)stk + 32)));
    *(float *)(((int)stk + 60)) = (*(float *)(((int)stk + 36)));
    *(float *)(((int)stk + 76)) = (*(float *)(((int)stk + 40)));
    *(float *)(((int)stk + 92)) = 0.0f;
    *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 64)) = (*(float *)(((int)stk + 24)));
    *(float *)(((int)stk + 80)) = (*(float *)(((int)stk + 28)));
    *(float *)(((int)stk + 96)) = 0.0f;
    *(float *)(((int)stk + 52)) = (*(float *)(((int)stk + 8)));
    *(float *)(((int)stk + 68)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 84)) = (*(float *)(((int)stk + 16)));
    *(float *)(((int)stk + 100)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 72)) = 0.0f;
    *(float *)(((int)stk + 88)) = 0.0f;
    *(float *)(((int)stk + 104)) = 1.0f;
    nlMultiMatrix((((int)stk + 0) + 0x2C));
    return (FUN_0c0e2120((*(int *)(((int)stk + 0)))));
}

int FUN_0c0fdaca(int a4, int a5)
{
    int t2;

    (((struct o4_uint *)0xC8171E4)->v) = a4;
    (((struct o0_uint *)0xC8171E4)->v) = a5;
    if (a5 == 0) {
        *(unsigned int *)0xC816FC8 = ((*(int *)0xC816FC8) | 0x10);
    } else {
        t2 = *(int *)0xA05F689C;
        if ((t2 != 0) && ((t2 != 1) && (t2 != 2))) {
            if ((t2 != 4) && ((t2 != 5) && ((t2 != 6) && (t2 != 8)))) {
                
                *(unsigned int *)0xC816FC8 = ((*(int *)0xC816FC8) & 0xFFFFFFEF);
            } else {
                *(unsigned int *)0xC816FC8 = ((*(int *)0xC816FC8) | 0x10);
            }
        } else {
            *(unsigned int *)0xC816FC8 = ((*(int *)0xC816FC8) & 0xFFFFFFEF);
        }
    }
    return 0x0;
}
