/* Straight-line functions with calls and guards (batch gen_i): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kdGetDeviceInfo(int);
int kdGetDevice(int);
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o10B_uchar { char p[0x10B]; unsigned char v; };
struct o10F4_int { char p[0x10F4]; int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DA_uchar { char p[0x2DA]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o71E4_float { char p[0x71E4]; float v; };
struct o71E8_float { char p[0x71E8]; float v; };
struct o72A4_short { char p[0x72A4]; short v; };
struct o72A4_ushort { char p[0x72A4]; unsigned short v; };
struct o72AC_uchar { char p[0x72AC]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int opt_game_settings_queue_row(int, int, int);
int FUN_0c019a06(int);
int opt_game_settings_queue_cursor(int, int);
int FUN_0c01f164(int);
int vmu_menu_state_load(int, int, int, int);
int FUN_0c01f350(int, int, int, int);
int vmu_menu_step_notice_wait_ok_flag(int, int, int, int);
int FUN_0c01f48c(int, int);
int FUN_0c01f874(int);
int vmu_menu_scan_port_masks(void);
int FUN_0c01fd48(void);
extern int vmu_menu_update_objs();
int vmu_menu_pad_pressed(int);
int FUN_0c01fe52(int);
int FUN_0c0210f4(int, int, int);
int FUN_0c02114c(int, float, float, float, float);
float FUN_0c0211d0(float, float, float, float);
int hit_find_part_entry(int, int, int, int);
int ui_draw_text_stub(void);
int ui_hud_slide_text(int, int, int, int);
int fx_spawn_effect_at_point(int, int);
int fx_spawn_burst_slot(int, int, int, int, int, int);
int ai_clear_op_state(void);
int obj_create(int, int, int);
int part_free0(int);
int part_free1(int);
int part_free2(int);
int item_init_hold_pose(int);
int math_vec3_sub(int, int, int);
float math_vec3_length(int);
int math_vec3_normalize(int, float);
int math_mat_transform_vector(int, int);
int math_mat_get_translate(int, int);
int FUN_0c06233a(int, int, int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_pos(int);
int mdl_vtx_set_pos(int);
int ai_dist_class(int);
int ai_roll_chance(void);
int pl_update_hitstop_shake(int);
int pl_hitreact_escape_input(int);
int sys_return_zero_098c82(void);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_angle_to_opponent(int);
int FUN_0c0a022e(int, float);
int pl_set_velocity_forward(int, int, float);
int bgm_play_stage_select(void);
int snd_play_side_se(int, int);
int FUN_0c0a3e64(int, int);
int menu_stage_select_spawn_ui(void);
int menu_ui_spawn_28(void);
int stage_obj_load_layout_pos(int);
float FUN_0c0d5bc0(void);
int cam_force_mode_23(int);
float math_signed_sqrt(float);
float math_rand_float(void);
float math_sin_angle16(int);
int snd_send_command(int);
int _divls(void);
int _modlu(void);
int _quick_odd_mvn(void);
int FUN_0c0ff8aa(void);
int FUN_0c0ff8b4(int, int);
int FUN_0c10ab20(int, int, int);
int FUN_0c10ab3c(int, int, int);
int mpdrv_timeout(int);
int mpdrv_swapmode(int);
int mpdrv_nopcount(int);
int mpdrv_speed(int);
int mpdrv_debugmode(int);
int mpdrv_dreqcount(int);
int mpdrv_optimize(int);
int mpdrv_get_lastsendaddr(int);
int mpdrv_get_rootplay(int);
int FUN_0c111c9c(int);
int adxf_ChkPrmGfr(int, int);
int memset(int, int, int);
int thunk_math_mat_get_translate(int, int);
int fx_spawn_03c3ca(int a4, int a5);
int FUN_0c042980(int a4, int a5);
int ai_op85_set_goal_stage_table(void);
int item_attach_to_hand(int a4);
int FUN_0c0647f0(int a4, int a5);
int vmu_menu_spawn_message(int a4);
int FUN_0c0209c6(int a4, float f4);
int hit_offset_point_by_owner(int a4, int a5, int a6);
int FUN_0c0301d2(int a4, int a5, int a6, int a7);
int FUN_0c0447bc(int a4);
int FUN_0c0a10b6(int a4, int a5, float f4);
int FUN_0c0d6ef6(int a4);
int FUN_0c10ac40(int a4, int a5);
int FUN_0c0193b2(int a4, int a5);
int FUN_0c01e6b4(int a4);
int FUN_0c01eee0(int a4, int a5, int a6, int a7);
int FUN_0c02018e(int a4, int a5, int a6, int a7);
int FUN_0c02545c(int a4, int a5, int a6);
int FUN_0c03cc48(int a4);
int obj_destroy(int a4, int a5, int a6, int a7);
int FUN_0c05ed92(int a4, int a5, int a6, int a7);
int FUN_0c05deec(int a4);
int FUN_0c0648d4(int a4);
int pl_hitreact_step(int a4, int a5, int a6, int a7);
int stage_spawn_type12(int a4);
int FUN_0c0f5898(int a4, int a5, int a6, int a7);
int opt_game_settings_draw(int a4, int a5);
int fx_spawn_03a024(int a4);
int fx_spawn_03d254(int a4, int a5);
float FUN_0c059c44(int a4, int a5, float f4);
int menu_stage_select_open(int a4);
int FUN_0c100196(int a4, int a5);
int kdSetDriverMode(int a4, int a5);
int FUN_0c01b788(int a4);
int FUN_0c022634(int a4, int a5, int a6, int a7);
int FUN_0c0228ac(int a4, int a5, int a6, int a7);
int FUN_0c0b13c8(int a4, int a5);
int FUN_0c0fa8c0(int a4);
int ai_reaction_check_3(int a4, int a5);
int FUN_0c0a519c(int a4, int a5);
int FUN_0c0e6bc4(int a4, int a5, int a6);
int mpdrv_exit(void);

int FUN_0c10ac40(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t48;
    register int t22;
    register int t23;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t36;
    register int t37;
    register int t29;
    register int t30;
    register int t31;
    register int t67;
    register int t41;
    register int t42;
    register int t45;

    if ((*(int *)((a4 + 0x0))) != 0) {
        t4 = *(int *)((a4 + 0x0));
        t2 = t4;
        t3 = 0x0;
        for (;;) {
            t6 = *(int *)((t4 + 0xC));
            if ((int)(*(int *)((t2 + 0xC))) > (int)t6) {
                t4 = t2;
            }
            t2 = (*(int *)((t2 + 0x8)));
            t3 = (t3 + 0x1);
            if (t2 == 0) {
                break;
            }
        }
        if ((int)t3 > (int)0x1) {
            t23 = *(int *)((a5 + 0x0));
            if (t23 != t4) {
                FUN_0c10ab3c(a4, a5, t4);
                t22 = (FUN_0c10ab20(a5, t4, (*(int *)((a5 + 0x0)))));
            } else {
                t24 = 0x1;
                t25 = t6;
                t26 = a5;
            }
            *(unsigned int *)(((int)stk + 0)) = 0x0;
            t48 = t22;
            if ((int)(t3 - 2) > 0) {
                t27 = (t3 - 2);
                for (;;) {
                    t31 = *(int *)((a4 + 0x0));
                    t36 = t31;
                    t37 = t31;
                    if ((int)t27 > 0) {
                        t29 = 0x0;
                        t30 = t31;
                        for (;;) {
                            t31 = (*(int *)((t31 + 0x8)));
                            t25 = (*(int *)((t30 + 0xC)));
                            t24 = (*(int *)((t31 + 0xC)));
                            t29 = (t29 + 0x1);
                            if ((int)t24 > (int)t25) {
                                t30 = t31;
                            }
                            if ((int)t29 >= (int)t27) {
                                break;
                            }
                        }
                        t36 = t30;
                        t37 = t31;
                    }
                    if (t37 != t36) {
                        t26 = a5;
                        t22 = (FUN_0c10ab3c(a4, t26, t36));
                        t26 = t36;
                        t22 = (FUN_0c10ab20(a5, t26, t37));
                    } else {
                        t41 = t23;
                        t42 = t24;
                        t45 = t26;
                    }
                    t23 = t41;
                    t24 = t42;
                    t25 = (*(int *)(((int)stk + 0)));
                    t26 = t45;
                    t27 = (t27 - 1);
                    t25 = (t25 + 0x1);
                    *(unsigned int *)(((int)stk + 0)) = t25;
                    if ((int)t25 >= (int)(t3 - 2)) {
                        break;
                    }
                }
                t48 = t22;
            }
            t67 = t48;
        }
    }
    return t67;
}

int FUN_0c0f5898(int a4, int a5, int a6, int a7)
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
    register int t10;

    t1 = adxf_ChkPrmGfr(a4, a5);
    if ((int)t1 < 0) {
        *(unsigned int *)((a6 + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)((a7 + 0x0)) = 0xFFFFFFFF;
    } else {
        t2 = *(int *)(((a4 << 2) + 0xC7FF7E8));
        for (;;) {
            t5 = *(int *)((t2 + 0x0));
            if (t5 == 0) {
                t6 = *(short *)(((t2 + 0x14) + 0x0));
                if ((int)a5 > 0) {
                    t7 = (0x0 + ((t2 + 0x14) + 0x2));
                    t8 = (unsigned short)t6;
                    t9 = 0x0;
                    for (;;) {
                        t10 = *(short *)((t7 + 0x0));
                        t7 = (t7 + 0x2);
                        t9 = (t9 + 0x1);
                        t8 = (t8 + (unsigned short)t10);
                        if ((int)t9 >= (int)a5) {
                            break;
                        }
                    }
                    *(unsigned int *)((a6 + 0x0)) = (t8 + (*(int *)((t2 + 0x8))));
                } else {
                    *(unsigned int *)((a6 + 0x0)) = ((unsigned short)t6 + (*(int *)((t2 + 0x8))));
                }
                *(unsigned int *)((a7 + 0x0)) = (unsigned short)(*(short *)((((t2 + 0x14) + 0x2) + (a5 << 1))));
                return t1;
            }
            t6 = (t2 + 0x14);
            t7 = t5;
            t3 = t2;
            t4 = t0;
            t5 = 0x0;
            for (;;) {
                if ((int)t5 >= (int)(unsigned short)(*(short *)((t3 + 0x10)))) {
                    t3 = (*(int *)((t3 + 0x0)));
                    t7 = (*(int *)((t3 + 0x0)));
                    if (t7 == 0) {
                        t5 = t3;
                        t5 = (t5 + 0x14);
                        t6 = t5;
                        t4 = (*(short *)((t5 + 0x0)));
                        t4 = (unsigned short)t4;
                        t6 = (t6 + 0x2);
                        t5 = 0x0;
                        if ((int)a5 > 0) {
                            t8 = (0x0 + t6);
                            for (;;) {
                                t10 = *(short *)((t8 + 0x0));
                                t8 = (t8 + 0x2);
                                t9 = t10;
                                t5 = (t5 + 0x1);
                                t9 = (unsigned short)t9;
                                t4 = (t4 + t9);
                                if ((int)t5 >= (int)a5) {
                                    break;
                                }
                            }
                        }
                        t9 = (*(int *)((t3 + 0x8)));
                        t4 = (t4 + t9);
                        *(unsigned int *)((a6 + 0x0)) = t4;
                        t9 = (*(short *)((t6 + (a5 << 1))));
                        t9 = (unsigned short)t9;
                        *(unsigned int *)((a7 + 0x0)) = t9;
                        return t1;
                    }
                    t6 = t3;
                    t6 = (t6 + 0x14);
                    t5 = 0x0;
                    continue;
                }
                t4 = t5;
                t4 = (t4 << 2);
                t4 = (t4 << 1);
                t4 = (t4 + t6);
                t9 = (*(short *)((t4 + 0x0)));
                t9 = (unsigned short)t9;
                if (t9 == a5) {
                    break;
                }
                t5 = (t5 + 0x1);
            }
            break;
        }
        *(unsigned int *)((a6 + 0x0)) = ((*(int *)((t3 + 0x8))) + (*(int *)((t4 + 0x4))));
        *(unsigned int *)((a7 + 0x0)) = (unsigned short)(*(short *)((t4 + 0x2)));
    }
    return t1;
}

int FUN_0c100196(int a4, int a5)
{
    int stk[2];
    register int t2;
    register int t3;
    int t4;
    register int t6;
    register int t5;
    register int t15;
    int t16;

    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)(((*(int *)0xC843924) + 0xFB0)));
    t2 = 0xFB0;
    t3 = a4;
    t4 = a5;
    t6 = 0x0;
    for (;;) {
        if ((int)t6 >= (int)0x4) {
            t2 = 0x0;
            return t2;
        }
        if ((((int)0x1 << (int)t6) & (unsigned char)(*(signed char *)(((int)stk + 0)))) != 0) {
            t3 = 0xC15B050;
            t3 = (t3 + t6);
            *(unsigned int *)(((int)stk + 4)) = t3;
            t3 = (*(signed char *)((t3 + 0x0)));
            t3 = (unsigned char)t3;
            t2 = (kdGetDevice(t3));
            t3 = (*(int *)(((int)stk + 4)));
            t5 = t2;
            t3 = (*(signed char *)((t3 + 0x0)));
            t3 = (unsigned char)t3;
            t2 = (kdGetDeviceInfo(t3));
            t3 = t2;
            t2 = t6;
            *(unsigned char *)((0xC805784 + t2)) = (*(signed char *)((0xC805788 + t2)));
            if ((((*(int *)((t3 + 0x0))) & 0x80) != 0) && ((t15 = *(signed char *)((t5 + 0x2)), t2 = t15, t2 == 0) && (t16 = *(signed char *)((t5 + 0x4)), t2 = t16, t2 = (unsigned char)t2, t2 == 8))) {
                t3 = (*(int *)((t5 + 0x8)));
                t2 = (*(signed char *)((t3 + 0x8)));
                t2 = (t2 & 0x4);
                t3 = t2;
                t2 = t6;
                *(unsigned char *)((0xC805788 + t2)) = t3;
                t4 = (*(signed char *)((0xC805784 + t2)));
                t4 = (t4 ^ t3);
                t3 = (unsigned char)t3;
                if ((t3 == 0) && (t4 = (unsigned char)t4, t4 != 0)) {
                    break;
                }
                t6 = (t6 + 0x1);
                continue;
            }
            t6 = (t6 + 0x1);
            continue;
        }
        t6 = (t6 + 0x1);
    }
    return (t6 + 0x1);
}

int kdSetDriverMode(int a4, int a5)
{
    if (a4 != 1) {
        if (a4 != 2) {
            if (a4 != 4) {
                if (a4 != 3) {
                    if (a4 != 6) {
                        if (a4 != 5) {
                            if (a4 != 0) {
                                if (a4 != 7) {
                                    if (a4 != 8) {
                                        if (a4 != 9) {
                                            return 0xFFFFFFFF;
                                        }
                                        FUN_0c111c9c(a5);
                                        return 0x0;
                                    }
                                    mpdrv_get_rootplay(a5);
                                    return 0x0;
                                }
                                mpdrv_get_lastsendaddr(a5);
                                return 0x0;
                            }
                            mpdrv_optimize(a5);
                            return 0x0;
                        }
                        mpdrv_swapmode(a5);
                        return 0x0;
                    }
                    mpdrv_debugmode(a5);
                    return 0x0;
                }
                mpdrv_speed(a5);
                return 0x0;
            }
            mpdrv_dreqcount(a5);
            return 0x0;
        }
        mpdrv_timeout(a5);
        return 0x0;
    }
    mpdrv_nopcount(a5);
    return 0x0;
}

int FUN_0c0fa8c0(int a4)
{
    int stk[7];
    register int t7;
    register int t8;
    register int t16;

    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x0)) = ((((struct o0_int *)0xC15AA90)->v));
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x4)) = ((((struct o4_int *)0xC15AA90)->v));
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x8)) = ((((struct o8_int *)0xC15AA90)->v));
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0xC)) = ((((struct oC_int *)0xC15AA90)->v));
    *(unsigned int *)(((int)stk + 4)) = (((unsigned int)((unsigned int)a4 >> 16) >> 1) & 0x3);
    *(unsigned int *)(((int)stk + 0)) = (((unsigned int)a4 >> 21) & 0x3);
    *(unsigned int *)(((int)stk + 8)) = (((unsigned int)a4 >> 23) & 0x3);
    t7 = (((struct o4_int *)0xC817414)->v);
    t8 = (((struct o0_int *)0xC817414)->v);
    t16 = (t8 * t7);
    if (((*(int *)0xC816FC8) & 32) != 0) {
        t16 = ((t8 * t7) + (t8 * t7));
        if (((((struct o8_int *)0xC817414)->v)) != 0) {
            t16 = ((t8 * t7) << 2);
        }
    }
    *(unsigned int *)0xC803DDC = ((((((((*(int *)(((((int)stk + 0) + 0xC) + ((*(int *)(((int)stk + 4))) << 2)))) + (*(int *)(((((int)stk + 0) + 0xC) + ((((unsigned int)((unsigned int)((unsigned int)a4 >> 16) >> 2) >> 1) & 0x3) << 2))))) + (*(int *)(((((int)stk + 0) + 0xC) + ((*(int *)(((int)stk + 0))) << 2))))) + (*(int *)(((((int)stk + 0) + 0xC) + ((*(int *)(((int)stk + 8))) << 2))))) + (*(int *)(((((int)stk + 0) + 0xC) + ((0x3 & ((unsigned int)((unsigned int)((unsigned int)a4 >> 16) >> 8) >> 1)) << 2))))) << 2) + 0x18) * t16);
    return ((0x3 & ((unsigned int)((unsigned int)((unsigned int)a4 >> 16) >> 8) >> 1)) << 2);
}

int FUN_0c0e6bc4(int a4, int a5, int a6)
{
    int stk[5];
    register int t0;
    register int t3;
    register int t23;
    register int t4;
    register int t5;
    register int t7;
    register int t8;
    register int t10;

    *(unsigned short *)(((((int)stk + 0) + 0x6) + 0x0)) = a4;
    *(unsigned short *)(((((int)stk + 0) + 0x4) + 0x0)) = a5;
    *(unsigned short *)(((((int)stk + 0) + 0x2) + 0x0)) = a6;
    t0 = *(signed char *)(((int)stk + 6));
    t3 = *(short *)((0xC7FD110 + (unsigned char)((((t0 << 1) + t0) << 2) << 1)));
    t23 = t3;
    if (t3 != 1) {
    } else {
        t4 = *(short *)(((int)stk + 6));
        t5 = *(short *)(((int)stk + 2));
        snd_send_command((((((t4 << 8) << 2) << 2) | (t5 << 16)) | 0x2A2));
        t7 = *(short *)(((int)stk + 6));
        t8 = *(short *)(((int)stk + 4));
        snd_send_command((((((t7 << 8) << 2) << 2) | (t8 << 16)) | 0x3A2));
        t10 = *(short *)(((int)stk + 6));
        t23 = 0xC7FD118;
        if ((*(int *)(((unsigned char)((((t10 << 1) + t10) << 2) << 1) + 0xC7FD118))) != 0) {
            snd_send_command(((((((t4 << 8) << 2) << 2) | (t5 << 16)) | 0x2A2) + 0x800));
            t23 = (snd_send_command(((((((t7 << 8) << 2) << 2) | (t8 << 16)) | 0x3A2) + 0x800)));
        }
    }
    return t23;
}

int mpdrv_exit(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0ff8aa();
    for (;;) {
        if (((*(int *)((((((struct o10F4_int *)((*(int *)0xC843924)))->v)) + 0x18))) & 0x1) == 0) {
            break;
        }
        t1 = FUN_0c0ff8aa();
        t2 = FUN_0c0ff8b4(t0, t1);
        if ((int)t2 <= (int)0x186A0) continue;
        break;
    }
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC843924)))->v)) + 0x18)) = 0x0;
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC843924)))->v)) + 0x14)) = 0x0;
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC843924)))->v)) + 0x10)) = 0x0;
    (((struct o8C_uint *)(((((struct o10F4_int *)((*(int *)0xC843924)))->v))))->v) = 0x6155404F;
    (((struct o80_uint *)(((((struct o10F4_int *)((*(int *)0xC843924)))->v))))->v) = 0xC3500000;
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC843924)))->v)) + 0x4)) = 0xCFF0000;
    t0 = FUN_0c0ff8aa();
    for (;;) {
        if (((*(int *)((((((struct o10F4_int *)((*(int *)0xC843924)))->v)) + 0x18))) & 0x1) == 0) {
            break;
        }
        t1 = FUN_0c0ff8aa();
        t2 = FUN_0c0ff8b4(t0, t1);
        if ((int)t2 <= (int)0x4268) continue;
        break;
    }
    return 0x0;
}
