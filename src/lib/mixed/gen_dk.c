/* Straight-line functions with calls and guards (batch gen_dk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int write_fat(int, int, int);
int FUN_0c104742(int);
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o315_uchar { char p[0x315]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o670_uint { char p[0x670]; unsigned int v; };
struct o674_uint { char p[0x674]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o71A6_uchar { char p[0x71A6]; unsigned char v; };
struct o71A7_uchar { char p[0x71A7]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71E4_float { char p[0x71E4]; float v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o7243_uchar { char p[0x7243]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF8_int { char p[0xF8]; int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
int pad_get_type(int);
int ending_scene_main(void);
int FUN_0c01ab4c(int);
int FUN_0c01ac74(int);
int FUN_0c01ad40(int);
int opt_page2_run_objects_in_mask(int, int, int, int);
int opt_page2_pad_pressed(int);
int FUN_0c01e75e(int, int);
extern int FUN_0c02c95c();
int game_draw_frame(void);
int fx_spawn_hit_effect_set(int, int);
int game_reset_objects(void);
int obj_create(int, int, int);
int obj_destroy(int, int, int, int);
int FUN_0c0593e0(int);
int obj_tick_class(int);
int FUN_0c05f2d4(int, int);
int res_switch_scene(int, int, int, int);
int FUN_0c061f9c(int);
int FUN_0c06233a(int, int, int);
int FUN_0c062436(int, int, int);
int FUN_0c0634b4(int);
int pl_timer_disable(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_get_held_item_class(int);
int FUN_0c09c782(int);
int pl_apply_velocity(int);
int pl_angle_to_target_pos(int);
int pl_stick_dir_angle(int);
int pl_set_velocity_from_move_table(int, int);
int pl_try_start_move(int, int, int);
int pl_button_jump_pressed(int);
int pl_no_ground(int);
int FUN_0c09e7fc(int, int, int);
int FUN_0c09e89a(int, int, int);
int FUN_0c09e910(int, int, int);
int pl_start_item_action(int);
int pl_start_idle_motion(int);
int FUN_0c09f8e0(int);
int FUN_0c09fa84(int, int);
int FUN_0c09fdf6(int);
int pl_check_dual_button_input(int);
int pl_check_power_form_attack_input(int, int, int);
int pl_try_dual_button_action(int, int, int);
int pl_start_power_form_attack(int, int, int);
int pl_change_state(int, int, int, int);
int bgm_stop_all(void);
int bgm_stop_slot(int);
int FUN_0c0a3426(int);
int bgm_play_by_index(int);
int snd_play_side_se(int, int);
int FUN_0c0a4070(int, int);
int obj_set_mode_owner(int, int, int);
int obj_can_interact(int, int, int);
int dbg_print_at(int, float, float);
int testmode_check_exit_combo(void);
int FUN_0c0d6460(int);
int FUN_0c0d7a0a(void);
int cam_request_mode(int, int, int);
float math_signed_sqrt(float);
int math_atan_angle16(int, float);
float math_cos_angle16(int);
int math_rand_next(void);
float math_sin_angle16(int);
int FUN_0c0e09f0(int, int, int, int, float);
int nlStoreMatrix(int);
int nlLoadMatrix(int);
float nlLUDecompose(int, int);
int nlSelectMatrixStack(int);
extern int _modls();
extern int _quick_evn_mvn();
int _quick_odd_mvn(void);
int FUN_0c0f7b60(int, int, int, int);
int FUN_0c0f94a0(int, int, int, int);
int FUN_0c0f9a20(int, int);
int FUN_0c10121c(int, int, int);
int FUN_0c1012f4(int, int, int);
int FUN_0c104006(int, int);
int FUN_0c1042ba(int);
int FUN_0c104308(int, int);
int FUN_0c10435a(int, int);
int FUN_0c1043c6(int);
int buIsFormat(int);
int get_fat(int, int);
int kmActivateFrameBuffer(int, int, int, int);
int kmiWriteRegister(int, int);
int memcpy(int, int, int);
int nlUnitMatrix(void);
int search_fat(int, int);
int set_fat(int, int, int);
int sprintf(int, int, ...);
int thunk_FUN_0c062242(int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int pl_enter_state_31(int a4, int a5);
int pl_state_idle_update(int a4);
float nlInvertMatrix(int a4);
int FUN_0c01a5cc(int a4, int a5, int a6, int a7);
float FUN_0c01dee2(int a4);
int pl_wangtang_attack_kind24_phase2(int a4, int a5, int a6, int a7);
int fx_spawn_039090(int a4);
int fx_spawn_model_effect(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int FUN_0c08dc24(int a4, int a5);
int FUN_0c0d64e8(int a4);
int FUN_0c0fac00(int a4);
int ending_mode_frame(int a4, int a5, int a6, int a7);
int FUN_0c0c55cc(int a4, int a5, int a6, int a7);
int vmsfs_xdefrag(int a4, int a5, int a6, int a7);
int FUN_0c0cea90(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c0d52e8(void);
int FUN_0c0d75bc(int a4, int a5, int a6, int a7, float f4);
int stage_gimmick_11_update(int a4);

float nlInvertMatrix(int a4)
{
    int stk[20];
    register int t2;
    register float t5;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register float u24;
    register float u25;
    register int t11;
    register int t12;
    register int t13;
    register float u14;
    register float u16;
    register int t26;
    register int t28;
    register int t29;
    register int t30;
    register int t31;
    register float u32;
    register float u33;
    register int t34;
    register int t45;
    register int t46;
    register float u47;
    register int t35;
    register int t36;
    register int t37;
    register float u38;
    register int t50;
    register int t53;
    register float u6;

    *(unsigned int *)(((int)stk + 8)) = a4;
    t2 = a4;
    if (a4 == 0) {
        t2 = (nlStoreMatrix(0x0));
    }
    t5 = nlLUDecompose(t2, (((int)stk + 0) + 0x4C));
    if (t5 == 0.0f) {
    } else {
        *(unsigned char *)(((int)stk + 0)) = 0x0;
        for (;;) {
            t7 = *(signed char *)(((int)stk + 0));
            t8 = 0x0;
            for (;;) {
                t9 = *(signed char *)(((int)stk + 0));
                t10 = *(signed char *)((((signed char)t8 + (((int)stk + 0) + 0x4C)) + 0x0));
                u24 = (float)((((signed char)t10 == t9)) ? 1 : 0);
                u25 = (float)((((signed char)t10 == t9)) ? 1 : 0);
                if ((int)(signed char)t8 > 0) {
                    t11 = 0x0;
                    t12 = ((((signed char)t10 << 2) << 2) + t2);
                    t13 = 0x0;
                    u14 = (float)((((signed char)t10 == t9)) ? 1 : 0);
                    for (;;) {
                        u6 = (*(float *)((t12 + 0x0)));
                        t12 = (t12 + 0x4);
                        u16 = *(float *)(((t7 << 2) + ((((int)stk + 0) + 0xC) + t11)));
                        t13 = (t13 + 0x1);
                        u6 = (u6 * u16);
                        u14 = (u14 - u6);
                        t11 = (t11 + 0x10);
                        if ((int)(signed char)t13 >= (int)(signed char)t8) {
                            break;
                        }
                    }
                    u24 = u16;
                    u25 = u14;
                }
                t26 = (signed char)t8;
                t8 = (t8 + 0x1);
                *(float *)(((t7 << 2) + (((t26 << 2) << 2) + (((int)stk + 0) + 0xC)))) = u25;
                if ((int)(signed char)t8 >= (int)0x4) {
                    break;
                }
            }
            t28 = 0x30;
            t29 = 0xC;
            t30 = 0x4;
            t31 = 0x3;
            u32 = u24;
            for (;;) {
                u33 = *(float *)(((t7 << 2) + ((((signed char)t31 << 2) << 2) + (((int)stk + 0) + 0xC))));
                t34 = *(signed char *)((((signed char)t31 + (((int)stk + 0) + 0x4C)) + 0x0));
                *(unsigned int *)(((int)stk + 4)) = ((t34 << 2) << 2);
                t45 = ((((t34 << 2) << 2) + t2) + ((signed char)t30 << 2));
                t46 = (((signed char)t30 << 2) << 2);
                u47 = u33;
                if ((int)(signed char)t30 < (int)0x4) {
                    t35 = t30;
                    t36 = ((((t34 << 2) << 2) + t2) + ((signed char)t30 << 2));
                    t37 = (((signed char)t30 << 2) << 2);
                    u38 = u33;
                    for (;;) {
                        u6 = (*(float *)((t36 + 0x0)));
                        t36 = (t36 + 0x4);
                        u32 = (*(float *)(((t7 << 2) + ((((int)stk + 0) + 0xC) + t37))));
                        t35 = (t35 + 0x1);
                        u6 = (u6 * u32);
                        u38 = (u38 - u6);
                        t37 = (t37 + 0x10);
                        if ((int)(signed char)t35 >= (int)0x4) {
                            break;
                        }
                    }
                    t45 = t36;
                    t46 = t37;
                    u47 = u38;
                }
                t31 = (t31 - 1);
                u32 = (*(float *)((((t2 + (*(int *)(((int)stk + 4)))) + t29) + 0x0)));
                t50 = ((((int)stk + 0) + 0xC) + t28);
                t28 = (t28 - 16);
                t29 = (t29 - 4);
                *(float *)(((t7 << 2) + t50)) = (u47 / u32);
                t30 = (t30 - 1);
                if ((int)(signed char)t31 < 0) {
                    break;
                }
            }
            t53 = *(signed char *)(((int)stk + 0));
            *(unsigned char *)(((int)stk + 0)) = (t53 + 0x1);
            if ((int)(signed char)(t53 + 0x1) >= (int)0x4) {
                break;
            }
        }
        FUN_0c0e09f0(t2, (((int)stk + 0) + 0xC), t45, t46, (u47 / u32));
        if ((*(int *)(((int)stk + 8))) == 0) {
            nlLoadMatrix(t2);
        }
    }
    return t5;
}

int vmsfs_xdefrag(int a4, int a5, int a6, int a7)
{
    int stk[12];

    register int R2;
    register int R3;
    register int R6;
    register int R9;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_6 = a4;
    v0_3 = a5;
    *(unsigned int *)(((int)stk + 0)) = (v0_6 * 0x148);
    v0_1 = (v0_3);
    v0_2 = (((v0_6 * 0x148) + 0xC80DBC8));
    v0_0 = (v0_6);
    if (((*(signed char *)((((v0_6 * 0x148) + 0xC80DBC8) + 0x2))) == 0)) goto L_C10449E;
    v0_4 = (vmsio_isready(v0_0)) != 0;
    if (v0_4) goto L_C104488;
    vmsfs_unmount(v0_0);
    L_C10449E:;
    v0_0 = (0xFFFFFF01);
    L_C1045A2:;
    return v0_0;
    L_C104488:;
    v0_4 = (vmsio_ismount(v0_0)) == 0;
    if (v0_4) goto L_C10449E;
    if (((*(signed char *)((((*(int *)(((int)stk + 0))) + 0xC80DBC8) + 0x8))) != 0)) goto L_C1044A4;
    goto L_C10449E;
    L_C1044A4:;
    v0_4 = (int)(buIsFormat(v0_0)) >= 0;
    if (v0_4) goto L_C1044B4;
    v0_0 = (0xFFFFFF03);
    goto L_C1045A2;
    L_C1044B4:;
    if (((*(int *)(((*(int *)((v0_2 + 0x1C))) + 0x38))) == 0)) goto L_C1044D2;
    v0_4 = FUN_0c104006(v0_0, (((int)stk + 0) + 0x4));
    v0_6 = (v0_4);
    if ((v0_4 == 0)) goto L_C1044D2;
    v0_4 = (int)(FUN_0c1043c6(v0_0)) >= 0;
    if (v0_4) goto L_C1044D8;
    L_C1044D2:;
    v0_0 = (0xFFFFFF0B);
    goto L_C1045A2;
    L_C1044D8:;
    v0_3 = FUN_0c1042ba(v0_0);
    v0_4 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C104578;
    v0_3 = FUN_0c104308(v0_0, (v0_4 + 0x1));
    v0_5 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C104578;
    v0_3 = FUN_0c10121c(v0_0, v0_4, v0_1);
    v0_6 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C1045A0;
    v0_3 = FUN_0c1012f4(v0_0, v0_5, v0_1);
    v0_6 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C1045A0;
    v0_6 = search_fat(v0_0, v0_4);
    v0_3 = (v0_6);
    if (((int)v0_6 <= 0)) goto L_C104526;
    set_fat(v0_0, v0_3, v0_5);
    L_C10453A:;
    v0_6 = get_fat(v0_0, v0_4);
    set_fat(v0_0, v0_5, v0_6);
    set_fat(v0_0, v0_4, 0xFFFC);
    goto L_C1044D8;
    L_C104526:;
    v0_6 = FUN_0c10435a(v0_0, v0_4);
    v0_6 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))(v0_6, 0x2, v0_5, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    goto L_C10453A;
    L_C1045A0:;
    v0_0 = (v0_6);
    goto L_C1045A2;
    L_C104578:;
    v0_6 = ((v0_2 + 0x48));
    v0_3 = (0x100);
    R6 = (0x1);
    L_C104586:;
    if (((unsigned int)v0_6 < (unsigned int)((v0_2 + 0x48) + v0_3))) goto L_C104582;
    v0_1 = FUN_0c104742(v0_0);
    v0_6 = (v0_1);
    if (((int)v0_1 < 0)) goto L_C1045A0;
    v0_6 = ((write_fat(v0_0, v0_3, R6)));
    goto L_C1045A0;
    L_C104582:;
    *(unsigned char *)((v0_6 + 0x0)) = R6;
    v0_6 = ((v0_6 + 0x1));
    goto L_C104586;
}

