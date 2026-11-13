/* Straight-line functions with calls and guards (batch gen_bh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o248_uint { char p[0x248]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_short { char p[0x28]; short v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E4_uint { char p[0x2E4]; unsigned int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o720B_uchar { char p[0x720B]; unsigned char v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o7243_uchar { char p[0x7243]; unsigned char v; };
struct o72BC_uchar { char p[0x72BC]; unsigned char v; };
struct o72BC_uint { char p[0x72BC]; unsigned int v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int ADXERR_CallErrFunc(int, ...);
int ADXRNA_GetTime(int, int, int, int);
int FUN_0c01db74(int, int, int, int);
int FUN_0c01dd6a(int, int, float);
int FUN_0c01dde2(int);
int FUN_0c01dee2(int);
int FUN_0c01e05a(int);
int FUN_0c01efd0(int);
int vmu_menu_scan_port_masks(int, int, int, int);
int vmu_menu_update_objs(void);
int FUN_0c02018e(int, int, int, int);
int vec3f_to_vec3s(int, int);
int vec3s_to_vec3f(int, int);
int hit_find_part_entry(int, int, int, int);
int hit_get_sphere_entry(int, int, int);
int hit_get_cylinder_entry(int, int, int);
int hit_get_box_entry(int, int, int);
int ui_sprite_queue_add(int, int, int, int, int, int);
int FUN_0c03d19a(int);
int ai_clear_op_state(void);
int obj_destroy(int, int, int, int);
int FUN_0c05fc00(void);
int math_mat_transform_vector(int, int);
int FUN_0c06231c(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0623a6(int, int, int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_uv(int, int);
int mdl_vtx_set_uv(int, int);
int pl_rouge_play_motion_sounds(int);
int FUN_0c085606(int);
int FUN_0c08bbce(int);
int pl_state16_walk_step(int, int, int, int, float);
int pl_state23_phase0(int, int, int, int);
int pl_state23_phase1(int);
int pl_timer_arm_forever(int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int FUN_0c09bc3a(int, int);
int obj_place_linked_ahead(int, int, float);
int pl_apply_motion_translation(int);
int pl_angle_to_opponent(int);
int pl_turn_to_opponent(int, int);
int pl_no_ground(int);
int obj_set_record(int, int);
int pl_end_action_choose_state(int);
int pl_check_dual_button_input(int);
int pl_check_power_form_attack_input(int, int, int);
int pl_try_dual_button_action(int, int, int);
int pl_start_power_form_attack(int, int, int);
int pl_detect_special_input(int, int);
int pl_set_velocity_forward(int, int, float);
int pl_change_state(int, int, int);
int obj_set_mode_owner(int, int, int);
int obj_touched_by_slot(int, int);
int stage_type01_mode_05_held(int);
int stage_type01_mode_02(int);
int stage_type01_mode_03(void);
int stage_random_spawn_position(int);
int fx_spawn_31(int);
int dbg_print_at(int, float, float);
float math_rand_float(void);
int dbg_set_cell_size(int, int);
int dbg_set_cursor_cell(int, int);
int dbg_set_text_color(int);
int dbg_printf(int, ...);
int nlRotateAxeSC(int, float, float);
int FUN_0c0e21b0(int, int);
float FUN_0c0e2220(int, int);
int FUN_0c0e2260(int, int, int);
float FUN_0c0e24f0(int);
int _divls(void);
int _modlu(void);
extern int _quick_evn_mvn();
int gdFsLoadDirFast(void);
int FUN_0c0f4328(int, int, int, int, int, int);
int FUN_0c0fd18a(int, int, int);
int FUN_0c0fd240(int, int, int, int);
int FUN_0c0fdda0(int, int, int);
int gdFsMemcpy(int, int, int);
int FUN_0c0ffcda(void);
int FUN_0c100260(void);
int kdGetDeviceInfo(int);
int kdSetBlockWrite(int, ...);
int kdSetGetMediaInfoEx(int, int, int, int);
int FUN_0c104962(int, int, int);
int get_fat(int, int);
int direntry(int, int);
int check_file_correct(int, int);
int ADXSJD_GetSfreq(int);
int ADXSJD_GetOutBps(int);
int ADXSJD_GetTotalNumSmpl(int);
int FUN_0c106436(int, int, int, int);
int FUN_0c109800(int);
int FUN_0c109e20(int, int);
int FUN_0c109fae(int, int, int, int, int, int);
int kmiCopyFromPVRMemory(int, int, int);
int kmiCopyFromFrameBuffer(int, int, int);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
extern void _builtin_st_ext(float (*)[4]);
int gdFsClose(int);
int gdFsGetFileSize(int, int);
int sprintf(int, int, int, int, int);
int strncpy(int, int, int);
int pdVibMxIsReady(int);
int pl_kraken_special_id3_phase0(int a4);
int FUN_0c08bcd4(int a4);
int nlRotateV(int a4, int a5);
int ai_op52_print(int a4, int a5, int a6, int a7);
int pl_kraken_attack_kind2_phase2(int a4);
int stage_type11_scroll_uv(int a4);
void FUN_0c0f2842(int a4, int a5);
int FUN_0c0f44fc(int a4);
int keycfg_queue_table_sprite(int a4);
int FUN_0c01e264(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c02642c(int a4, int a5);
int pl_mode11_phase0(int a4);
int pl_state04_update(int a4);
int FUN_0c0f4430(int a4, int a5, int a6, int a7);
int ADXT_GetTime(int a4, int a5, int a6, int a7);
int FUN_0c1064c0(int a4, int a5);
int FUN_0c01ec30(int a4, int a5, int a6, int a7);
int FUN_0c02cade(void);
int fx_tick_04a13c(int a4, int a5, int a6, int a7);
int pl_ryoma_update_action_9(int a4);
int pl_wangtang_check_special_input(int a4);
int pl_wangtang_special0_start(int a4);
int pl_jack_special0_start(int a4);
int ai_reaction_mode2(int a4, int a5);
int pl_state16_phase1(int a4, int a5, int a6, int a7, float f4);
int FUN_0c098818(int a4);
int stage_gimmick_40_update(int a4);
int FUN_0c0ffa42(int a4, int a5);
int FUN_0c109518(int a4, int a5, int a6);
int FUN_0c020594(int a4, int a5, int a6);
int fx_tick_item_sparkle(int a4, int a5, int a6, int a7);
int pl_mode12_phase0(int a4, int a5, int a6, int a7);
int pl_kraken_special_id3_phase4(int a4);
int pl_state23_update(int a4, int a5, int a6, int a7);
int stage_gimmick_06_update(int a4);
int stage_type01_update(int a4, int a5, int a6, int a7);
int FUN_0c105878(int a4, int a5, int a6);
int pl_wangtang_state11_update(int a4);
int pl_jack_state11_update(int a4);
int pl_gunrock_state11_update(int a4);
int pl_kraken_state21_update(int a4);
int ai_reaction_mode3(int a4);
int pl_state15_update(int a4);
int pl_enter_state_40(int a4, int a5);
float FUN_0c0e3400(int a4, int a5);
int FUN_0c0f0c52(int a4);
void FUN_0c0ffc72(int a4, int a5, int a6, int a7);
int fx_tick_03d0d4(int a4, int a5, int a6, int a7);
int pl_rouge_frame_hook(int a4);
int pl_kraken_attack_kind78(int a4, int a5, int a6, int a7);
int pl_enter_state_25_pickup_item(int a4);
int menu_ui_task_12(int a4, int a5, int a6, int a7);
int fx_update_05(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0efc04(int a4, int a5, int a6, int a7);
int ending_obj_update_t01(int a4, int a5, int a6, int a7);
int fx_tick_03b1ec(int a4, int a5, int a6, int a7);
int FUN_0c0efba0(int a4);
int pdVibMxSetStopTime(int a4, int a5);
int FUN_0c0fcb28(int a4, int a5, int a6, int a7);
int ending_obj_update_t04(int a4, int a5, int a6, int a7);
int cam_request_mode_20(int a4);

int nlRotateV(int a4, int a5)
{
    int stk[4];
    register float t1;
    register float t3;
    register int t13;

    *(unsigned int *)(((int)stk + 0)) = a5;
    FUN_0c0e2260(a4, a5, (((int)stk + 0) + 0x4));
    t1 = FUN_0c0e24f0((((int)stk + 0) + 0x4));
    t3 = FUN_0c0e2220(a4, (*(int *)(((int)stk + 0))));
    if (t1 != 0.0f) {
        t13 = (nlRotateAxeSC((((int)stk + 0) + 0x4), t1, t3));
    } else {
        if (0.0f > t3) {
            *(float *)(((int)stk + 4)) = ((((struct o4_float *)(a4))->v));
            *(float *)(((int)stk + 8)) = ((((struct o8_float *)(a4))->v));
            *(float *)(((int)stk + 12)) = (*(float *)((a4 + 0x0)));
            t13 = (nlRotateAxeSC((((int)stk + 0) + 0x4), 0.0f, -1.0f));
        }
    }
    return t13;
}

void FUN_0c0f2842(int a4, int a5)
{
    int stk[1];
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t8;

    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = *(int *)0xC7FECA4;
    t3 = (*(int *)((t1 + 0x0)));
    t4 = 0x0;
    t5 = 0x0;
    for (;;) {
        if ((unsigned int)(*(int *)((t3 + 0x4))) > (unsigned int)0x0) {
            t8 = *(int *)((t3 + 0x4));
            t5 = (t5 + (t8 - 1));
            if ((unsigned int)t4 < (unsigned int)(t8 - 1)) {
                t4 = (*(int *)((t3 + 0x4)));
                t4 = (t4 - 1);
            }
        }
        if (t3 != t1) {
            t3 = (*(int *)((t3 + 0x0)));
            continue;
        }
        break;
    }
    *(unsigned int *)((a4 + 0x0)) = (((t5 << 2) << 2) << 1);
    *(unsigned int *)((a5 + 0x0)) = (((t4 << 2) << 2) << 1);
    _builtin_set_imask(((unsigned int)((((unsigned short)(*(short *)(((int)stk + 0))) & 0xF) << 2) << 2) >> 4));
}

int FUN_0c0f44fc(int a4)
{
    register int t1;
    register int t2;
    register int t3;

    t1 = kdGetDeviceInfo((unsigned char)(*(signed char *)((a4 + 0xC15A7A8))));
    t2 = kdGetDeviceInfo(a4);
    t3 = 0x1;
    if ((a4 != 2) && ((a4 != 8) && ((a4 != 14) && (a4 != 20)))) {
        t3 = 0x0;
    }
    return (unsigned char)(*(signed char *)((0xC15A7C0 + (((unsigned char)(*(signed char *)((t3 + (t1 + 0x12)))) << 2) + (unsigned char)(*(signed char *)(((t2 + 0x12) + 0x0)))))));
}

int FUN_0c0f4430(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t25;
    register int t17;
    register int t8;

    *(unsigned int *)((((a4 * 0x1C) + 0xC7FF2C8) + 0x0)) = 0x0;
    if ((*(int *)((((a4 * 0x1C) + 0xC7FF2C8) + 0x10))) != 0) {
        *(int *)((int)stk + 4) = ((int)stk + 8);
        *(int *)((int)stk + 0) = (((int)stk + 4) + 0x8);
        t8 = FUN_0c0f4328(a4, a5, a6, a7, (((int)stk + 4) + 0x8), ((int)stk + 8));
        t25 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((((a4 * 0x1C) + 0xC7FF2C8) + 0x10)))))((*(int *)(((int)stk + 8))), t8, (((int)stk + 8) + 0x4), (*(int *)((((a4 * 0x1C) + 0xC7FF2C8) + 0x8))), *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24)));
    }
    if (t8 == 0) {
        t25 = 0x18;
        if ((unsigned int)(unsigned char)(*(signed char *)((((a4 * 0x1C) + 0xC7FF2C8) + 0x18))) > (unsigned int)(*(int *)((((a4 * 0x1C) + 0xC7FF2C8) + 0x14)))) {
            t17 = *(int *)((((a4 * 0x1C) + 0xC7FF2C8) + 0x14));
            *(unsigned int *)((((a4 * 0x1C) + 0xC7FF2C8) + 0x14)) = (t17 + 0x1);
            t25 = (kdSetGetMediaInfoEx(a4, 0x100, (t17 + 0x1), 0xC0F4430));
        }
    }
    return t25;
}

int ADXT_GetTime(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t2;

    t0 = *(signed char *)((a4 + 0x1));
    if ((t0 != 3) && (t0 != 4)) {
        t0 = *(signed char *)((a4 + 0x1));
        if (t0 == 5) {
            *(unsigned int *)((a5 + 0x0)) = (ADXSJD_GetTotalNumSmpl((*(int *)((a4 + 0x4)))));
            *(unsigned int *)((a6 + 0x0)) = (ADXSJD_GetSfreq((*(int *)((a4 + 0x4)))));
            t2 = (int)((int)0x10 / (int)(ADXSJD_GetOutBps((*(int *)((a4 + 0x4))))));
            *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) * t2);
        } else {
            *(unsigned int *)((a5 + 0x0)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x1;
            t2 = t0;
        }
        return t2;
    }
    return ADXRNA_GetTime((*(int *)((a4 + 0xC))), a5, a6, a7);
}

int FUN_0c1064c0(int a4, int a5)
{
    int stk[4];
    register int t0;
    register int t2;
    register int t12;

    *(unsigned int *)(((int)stk + 12)) = a5;
    t0 = gdFsLoadDirFast();
    if (t0 == 0) {
        *(int *)((int)stk + 4) = a4;
        *(int *)((int)stk + 0) = 0xC15B0F4;
        ADXERR_CallErrFunc(0xC15B0F4);
        t12 = 0x0;
    } else {
        t2 = gdFsGetFileSize(t0, ((int)stk + 8));
        if (t2 == 0) {
            *(int *)((int)stk + 4) = 0xC15B124;
            ADXERR_CallErrFunc(0xC15B124);
            gdFsClose(t0);
            t12 = 0x0;
        } else {
            t12 = FUN_0c106436(t0, 0x0, (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))));
            strncpy((t12 + 0x40), a4, 0x20);
        }
    }
    return t12;
}

int FUN_0c0ffa42(int a4, int a5)
{
    int stk[1];
    register int t1;
    register int t5;
    register int t17;
    register int t15;

    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)0xFFD80004);
    t1 = *(signed char *)0xFFD80004;
    (((struct o4_uchar *)0xFFD80000)->v) = (t1 & 0xFB);
    t17 = (t1 & 0xFB);
    if (a4 != 0) {
        (((struct o248_uint *)(((int)_builtin_get_vbr())))->v) = 0xC0FFA04;
        (((struct o0_uint *)0xC8051B0)->v) = a4;
        (((struct o4_uint *)0xC8051B0)->v) = a5;
        (((struct o28_ushort *)0xFFD80000)->v) = (((((struct o28_short *)0xFFD80000)->v)) | 0x20);
        *(unsigned short *)0xFFD00004 = (((*(short *)0xFFD00004) & 0xFFFFFF0F) | 0xF0);
        t5 = (((struct o28_short *)0xFFD80000)->v);
        (((struct o28_ushort *)0xFFD80000)->v) = (t5 & 0xFFFFFEFF);
        t17 = (t5 & 0xFFFFFEFF);
    }
    (((struct o4_uchar *)0xFFD80000)->v) = (*(signed char *)(((int)stk + 0)));
    if (a4 == 0) {
        (((struct o0_uchar *)0xFFD80000)->v) = 0x0;
        (((struct o4_uchar *)0xFFD80000)->v) = ((*(signed char *)0xFFD80004) | 0x4);
        for (;;) {
            if ((((((struct o28_short *)0xFFD80000)->v)) & 0x100) != 0) {
                break;
            }
        }
        t15 = *(signed char *)0xFFD80004;
        (((struct o4_uchar *)0xFFD80000)->v) = (t15 & 0xFB);
        (((struct o28_ushort *)0xFFD80000)->v) = (((((struct o28_short *)0xFFD80000)->v)) & 0xFFFFFEFF);
        t17 = (t15 & 0xFB);
    }
    return t17;
}

int FUN_0c109518(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c109e20(a4, a5);
    t1 = 0x3;
    if (t0 == -1) {
    } else {
        t2 = FUN_0c109fae(0x0, t0, a4, a5, 0x1, 0x1);
        t1 = t2;
        if (t2 != 0) {
        } else {
            t2 = FUN_0c109fae(0x1, ((*(int *)0xC34763C) + t0), a4, a6, 0x1, 0x1);
            if (t2 != 0) {
                FUN_0c109800((*(int *)((a5 + 0x1C))));
            }
            t1 = t2;
        }
    }
    return t1;
}

int FUN_0c105878(int a4, int a5, int a6)
{
    int stk[12];
    register int t0;
    register int t15;
    register int t3;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t12;
    register int t4;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c104962(a4, a5, (((int)stk + 0) + 0x4));
    t15 = 0xFFFFFF05;
    if ((int)t0 < 0) {
    } else {
        t3 = direntry(a4, t0);
        t6 = *(int *)(((int)stk + 16));
        *(unsigned short *)((a6 + 0x0)) = t6;
        t5 = t4;
        t7 = (a6 + 0x2);
        t8 = 0x0;
        for (;;) {
            if ((int)t8 >= (int)(*(int *)(((int)stk + 44)))) {
                break;
            }
            t5 = a4;
            t3 = (get_fat(t5, t6));
            t5 = (unsigned short)t3;
            t6 = t5;
            *(unsigned short *)((t7 + 0x0)) = t6;
            t8 = (t8 + 0x1);
            t7 = (t7 + 0x2);
        }
        t12 = check_file_correct(a4, (*(int *)(((int)stk + 0))));
        t15 = t0;
        if ((int)t12 < 0) {
            t15 = t12;
        }
    }
    return t15;
}

/* XMTRX = b . a . XMTRX: a (a4, 8-aligned, moved in pairs) applied first, then b (a5); fr0 is left holding b[0] */
float FUN_0c0e3400(int a4, int a5)
{
    float *a = (float *)a4;
    float *b = (float *)a5;
    float cur[16];
    float m[16];
    int i;

    _builtin_st_ext((float (*)[4])cur);
    for (i = 0; i < 16; i++) {
        m[i] = a[i];
    }
    _builtin_ld_ext((float (*)[4])m);
    _builtin_prefetch((void *)b);
    for (i = 0; i < 16; i += 4) {
        _builtin_ftrv(&cur[i], &cur[i]);
    }
    _builtin_prefetch((void *)(b + 8));
    for (i = 0; i < 16; i++) {
        m[i] = b[i];
    }
    _builtin_ld_ext((float (*)[4])m);
    for (i = 0; i < 16; i += 4) {
        _builtin_ftrv(&cur[i], &cur[i]);
    }
    _builtin_ld_ext((float (*)[4])cur);
    return m[0];
}

int FUN_0c0f0c52(int a4)
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

    t0 = *(int *)((a4 + 0x0));
    t1 = *(int *)(((*(int *)0xC346BD8) + 0x10));
    t2 = *(int *)((t1 + 0x4));
    t3 = *(int *)((a4 + 0x8));
    t4 = t2;
    if ((int)t2 > (int)t0) {
        t4 = t0;
    }
    *(unsigned int *)((t1 + 0x8)) = t3;
    t3 = 0x0;
    if ((int)t4 > 0) {
        t5 = (a4 + 0x10);
        t6 = (t1 + 0x10);
        t7 = 0x0;
        for (;;) {
            t8 = t6;
            t6 = (t6 + 0x2C);
            t9 = t5;
            t5 = (t5 + 0x2C);
            gdFsMemcpy(t9, t8, 0x2C);
            t7 = (t7 + 0x1);
            if ((int)t7 >= (int)t4) {
                break;
            }
        }
        t3 = t7;
    }
    *(unsigned int *)((t1 + 0x0)) = t3;
    t1 = 0x0;
    if ((int)t2 < (int)t0) {
        t1 = 0xFFFFFFF4;
    }
    return t1;
}

void FUN_0c0ffc72(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    _builtin_set_imask(0xF);
    if (((((struct o0_int *)0xC80573C)->v)) == 0) {
        *(unsigned int *)0xC805494 = ((*(int *)0xC805494) + 0x1);
        FUN_0c100260();
        FUN_0c0ffcda();
        t0 = 0xC8051C8;
        t1 = 0xC8051C8;
        t2 = 0xC8051C8;
        t3 = 0xC8051C8;
        for (;;) {
            if ((*(int *)((t3 + 0x0))) != 0) {
                t4 = ((int (*)(int, int, int, int))(((*(int *)((t2 + 0x0))))))(t0, t1, a6, a7);
            } else {
                t4 = t0;
                t5 = t1;
            }
            t3 = (t3 + 0x4);
            t0 = t4;
            t1 = t5;
            t2 = (t2 + 0x4);
            if ((unsigned int)t3 >= (unsigned int)0xC805248) {
                break;
            }
        }
    } else {
        (((struct o0_uint *)0xC80573C)->v) = 0x0;
        (((struct o4_uint *)0xC80573C)->v) = (((((struct o4_int *)0xC80573C)->v)) + 0x1);
    }
}

int FUN_0c0efc04(int a4, int a5, int a6, int a7)
{
    register int t1;
    int t3;
    register int t7;

    *(unsigned int *)0xC803DE8 = a6;
    t1 = *(int *)(((*(int *)((a4 + 0x8))) + 0x0));
    t3 = *(int *)(((t1 << 2) + (*(int *)((a4 + 0x0)))));
    (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t3 >> 16) >> 8);
    (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t3 >> 16) >> 8);
    FUN_0c0fdda0(((0x3FFFFFF & t3) | 0xE0000000), a5, a7);
    _builtin_prefetch((void *)((0x3FFFFFF & t3) | 0xE0000000));
    if (a7 == 64) {
        _builtin_prefetch((void *)(((0x3FFFFFF & t3) | 0xE0000000) + 0x20));
    }
    t7 = *(int *)((a4 + 0x0));
    *(unsigned int *)(((t1 << 2) + t7)) = ((*(int *)(((t1 << 2) + t7))) + (((a7 >> 1) >> 1) << 2));
    return 0x0;
}

int FUN_0c0efba0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    int t5;
    register int t9;

    t0 = *(int *)((a4 + 0x8));
    t1 = *(int *)((t0 + 0x0));
    t2 = *(int *)((t0 + 0x4));
    t4 = *(int *)((a4 + 0x4));
    t5 = *(int *)(((t1 << 2) + (*(int *)((a4 + 0x0)))));
    (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t5 >> 16) >> 8);
    (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t5 >> 16) >> 8);
    FUN_0c0fdda0(((0x3FFFFFF & t5) | 0xE0000000), t4, t2);
    _builtin_prefetch((void *)((0x3FFFFFF & t5) | 0xE0000000));
    if (t2 == 64) {
        _builtin_prefetch((void *)(((0x3FFFFFF & t5) | 0xE0000000) + 0x20));
    }
    t9 = *(int *)((a4 + 0x0));
    *(unsigned int *)(((t1 << 2) + t9)) = ((*(int *)(((t1 << 2) + t9))) + (((unsigned int)t2 >> 2) << 2));
    return 0x0;
}

int pdVibMxSetStopTime(int a4, int a5)
{
    int stk[6];
    register int t1;
    register int t4;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    t1 = pdVibMxIsReady((*(int *)(((int)stk + 16))));
    if (t1 == 0) {
        return 0xFFFFFFFE;
    }
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned char *)((((int)stk + 12) + 0x0)) = 0x0;
    *(unsigned char *)(((((int)stk + 12) + 0x1) + 0x0)) = 0x2;
    *(unsigned char *)((((((int)stk + 12) + 0x1) + 0x1) + 0x0)) = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 8) = 0x1;
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x4);
    *(int *)((int)stk + 0) = 0x0;
    *(volatile int *)(((int)stk + 16));
    t4 = kdSetBlockWrite(0x0, (((int)stk + 8) + 0x4), 0x1);
    if ((int)t4 < 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c0fcb28(int a4, int a5, int a6, int a7)
{
    int t12;

    if (((*(int *)((a5 + 0x0))) & 0x3) == 1) {
        kmiCopyFromPVRMemory(a4, (*(int *)((a5 + 0x1C))), (*(int *)((a5 + 0x14))));
    } else {
        if ((unsigned short)(*(int *)((a5 + 0x0))) == 3) {
            FUN_0c0fd240(a4, (*(int *)((a5 + 0x1C))), (*(int *)((a5 + 0xC))), (*(int *)((a5 + 0x18))));
        } else {
            t12 = *(int *)((a5 + 0x18));
            if (((0x4 & t12) != 0) && (((0x1 & t12) != 0) && (((0x8 & t12) == 0) && ((0x20 & t12) == 0)))) {
                FUN_0c0fd18a(a4, (*(int *)((a5 + 0x1C))), (*(int *)((a5 + 0xC))));
            } else {
                kmiCopyFromFrameBuffer(a4, (*(int *)((a5 + 0x1C))), (*(int *)((a5 + 0x14))));
            }
        }
    }
    return 0x0;
}

