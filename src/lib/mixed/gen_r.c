/* Straight-line functions with calls and guards (batch gen_r): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o184_uchar { char p[0x184]; unsigned char v; };
struct o1A0_uint { char p[0x1A0]; unsigned int v; };
struct o1A4_uint { char p[0x1A4]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o25_uchar { char p[0x25]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
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
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o70_float { char p[0x70]; float v; };
struct o70_short { char p[0x70]; short v; };
struct o70_ushort { char p[0x70]; unsigned short v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o7237_uchar { char p[0x7237]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int vmu_lcd_set_idle_image(void);
int vmu_get_savefile_mask(void);
int vmu_get_vmgame_mask(void);
int vmu_step_load(void);
int vmu_step_load_vmgame(void);
int vmu_check_mode_02(void);
int vmu_check_mode_03(void);
int vmu_check_do_load(int);
int vmu_check_mode_04(int);
int vmu_check_mode_07(int);
int vmu_check_mode_08(int);
int vmu_check_mode_09(int);
int vmu_check_select_port(void);
int vmu_check_create_obj(void);
int vmu_menu_spawn_message(int);
int vmu_menu_update_objs(int, int, int, int);
int FUN_0c020d20(int, int);
int conv_s16x4_to_f32(int, int);
int conv_s16x7_to_f32(int, int);
int hit_build_part_shape(int, int);
int hit_dispatch_shape_pair(int, int, int, int);
int FUN_0c027c7e(void);
int ui_sprite_queue_reset(void);
int fx_spawn_036598(int, int);
int fx_spawn_03d8b0(int, int);
int fx_spawn_burst_slot(int, int, int, int, int, int);
int obj_create(int, int, int);
int FUN_0c0593e0(int);
int obj_tick_class(int, int, int, int);
extern int res_switch_scene();
int sys_load_file_adx(int, int, int);
int FUN_0c06144e(void);
int sys_shutdown_all(void);
int math_vec3_add(int, int, int);
int math_vec3_sub(int, int, int);
int math_vec3_normalize(int);
int FUN_0c06233a(int, int, int);
int pl_mode15_cls05_07_f1_move(int);
int pl_mode15_cls05_07_f1_land(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_get_held_item_class(int);
int pl_get_hit_count_of_opponent(int);
int hit_find_interactable_contact(int, int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_stick_dir_angle(int);
int pl_set_velocity_toward_target(int);
int pl_landed(int);
int pl_change_state(int, int, int, int, int, int, int, int, int);
int obj_touched_by_slot(int, int);
int FUN_0c0c3408(int, int);
int game_clear_win_records(void);
int cam_force_mode(int, int, int);
int gfx_set_background_color(int, int, int, float);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int FUN_0c0dffb0(void);
int FUN_0c0e07c0(int);
int FUN_0c0e0820(float);
int _divls(void);
int _modlu(void);
int _quick_odd_mvn(int, float, float, float, float);
int _slow_mvn(int);
int gdFsReinit(int);
int FUN_0c0fc38c(int, int, int, int);
int FUN_0c0fc5da(int, int, int, int);
int FUN_0c0fcea0(int, int);
int kdSetHandler(int, int);
int FUN_0c1013d8(int);
int FUN_0c101a22(int, int, int);
int vmsfs_unmount(int);
int FUN_0c104962(int, int, int);
int set_fat(int, int, int);
int get_fat(int, int);
int direntry(int, int);
int direntry_dirty(int, int);
int check_file_correct(int, int);
int mpdrv_check_port(int);
int mpdrv_make_devicedata(int, int);
int vmsio_isready(int);
int vmsio_ismount(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
float acosf(float);
int memset(int, int, int);
int thunk_FUN_0c0fbcf0(int);
int fx_spawn_with_params(int a4, float f4, float f5, float f6, float f7);
int ai_run_script(int a4, int a5, int a6, int a7);
int pl_garuda_mode04_phase1(int a4);
int FUN_0c103874(int a4, int a5);
int vmu_init(void);
int hit_get_sphere_entry(int a4, int a5, int a6, int a7);
int FUN_0c0437fe(int a4, int a5);
int FUN_0c05f20e(int a4, float f4, float f5);
int pl_mode05_enter(int a4);
int pl_kraken_spawn_random_fx(int a4);
int cam_reset_shake(int a4, int a5, int a6, int a7);
int FUN_0c0e45e2(void);
int vmu_check_dispatch(int a4, int a5, int a6, int a7);
int FUN_0c0187a8(int a4);
int FUN_0c01ac74(int a4);
int vmu_menu_state_load(int a4, int a5, int a6, int a7);
int FUN_0c022a5a(int a4, int a5, int a6, int a7);
int FUN_0c022b08(int a4, int a5, int a6, int a7);
int FUN_0c02b0dc(void);
int FUN_0c05f85a(int a4);
int pl_mode15_cls05_07_f1(int a4, int a5, int a6, int a7);
int FUN_0c0a02d4(int a4, float f4);
int FUN_0c0a00e4(int a4);
int fx31_mode_two(int a4);
int FUN_0c0d91d6(int a4);
int FUN_0c0dfe20(void);
int FUN_0c0f2e9c(int a4, int a5, int a6, int a7);
int FUN_0c0fae0e(int a4, int a5, int a6, int a7);
int FUN_0c1040be(int a4, int a5, int a6, int a7);
int vmsfs_fsetparam(int a4, int a5, int a6);
int FUN_0c109c06(int a4, int a5);
int hit_find_part_entry(int a4, int a5, int a6, int a7);
int FUN_0c03e096(int a4);
int sys_load_file(int a4, int a5);
int pl_wangtang_attack_kind24_phase1(int a4);
float FUN_0c0988c6(int a4);
int FUN_0c097eb6(int a4);
int FUN_0c0d6fac(int a4);
int vmsfs_fisexist(int a4, int a5);
int FUN_0c062cf4(int a4, int a5);
int pl_try_start_pickup_touched(int a4);
int boot_screens_update(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0faf30(int a4, int a5, int a6, int a7);
int FUN_0c0fd0dc(int a4);
float FUN_0c1156c8(int a4, int a5, int a6, int a7);
int FUN_0c0ccf38(int a4, int a5, int a6);
int mpdrv_frame_recv_main(int a4);
int vmu_get_free_space_mask(void);
int vmu_get_ready_mask(void);
int FUN_0c01fd48(int a4);

int FUN_0c103874(int a4, int a5)
{
    int stk[13];
    register int t0;
    register int t21;
    register int t5;
    register int t7;
    register int t8;
    register int t6;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c104962(a4, a5, (((int)stk + 0) + 0x8));
    t21 = 0xFFFFFF05;
    if ((int)t0 >= 0) {
        *(unsigned int *)(((int)stk + 4)) = (direntry(a4, t0));
        t5 = check_file_correct(a4, (*(int *)(((int)stk + 0))));
        if (t5 == 0) {
            t7 = 0x0;
            t8 = (*(int *)(((int)stk + 20)));
            for (;;) {
                if ((int)t7 >= (int)(*(int *)(((int)stk + 48)))) {
                    break;
                }
                t5 = (get_fat(a4, t8));
                t6 = (unsigned short)t5;
                t5 = (set_fat(a4, t8, 0xFFFC));
                t7 = (t7 + 0x1);
                t8 = t6;
            }
        }
        memset((*(int *)(((int)stk + 4))), 0x0, 0x20);
        direntry_dirty(a4, t0);
        t21 = 0x0;
    }
    return t21;
}

int FUN_0c0f2e9c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;
    register int t5;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    (((struct o10_uint *)0xC7FF2B4)->v) = a6;
    (((struct o0_uint *)0xC7FF2B4)->v) = 0x0;
    (((struct o4_uint *)0xC7FF2B4)->v) = 0x0;
    (((struct o8_uint *)0xC7FF2B4)->v) = 0x0;
    (((struct oC_uint *)0xC7FF2B4)->v) = 0x0;
    FUN_0c1013d8(a5);
    t2 = FUN_0c101a22(a4, a5, a6);
    kdSetHandler((*(int *)0xC15A71C), 0xC0F2FEC);
    if ((t2 == 0) && (a7 != 0)) {
        t5 = ((int (*)(void))(a7))();
    }
    *(unsigned int *)0xC346BF0 = 0x1;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t2;
}

int FUN_0c0fae0e(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct o8_uint *)0xC8172FC)->v) = 0x0;
    (((struct oC_uint *)0xC8172FC)->v) = 0xFFFFFFFF;
    (((struct o10_uint *)0xC8172FC)->v) = 0xFFFFFFFF;
    (((struct o14_uint *)0xC8172FC)->v) = 0xFFFFFFFF;
    (((struct o18_uint *)0xC8172FC)->v) = 0x0;
    (((struct o1C_uint *)0xC8172FC)->v) = 0x0;
    (((struct o20_uint *)0xC8172FC)->v) = 0x0;
    (((struct o2C_uint *)0xC8172FC)->v) = 0x0;
    if (((((struct o0_int *)0xC8171C8)->v)) != 0) {
        for (;;) {
            t1 = ((int (*)(int, int, int, int))(((((struct o0_int *)0xC817228)->v))))(((((struct o4_int *)0xC817228)->v)), a5, a6, a7);
            if (((unsigned int)((((struct o2C_int *)0xC8172FC)->v)) <= (unsigned int)0xA) && (t0 = (((struct o0_int *)0xC8171C8)->v), t0 != 0)) continue;
            break;
        }
    }
    t0 = 0xC8172FC;
    if (((((struct o0_int *)0xC8172FC)->v)) == 0) {
        (((struct o2C_uint *)0xC8172FC)->v) = 0x0;
        t1 = 0xC8172FC;
        if (((((struct o4_int *)0xC8171C8)->v)) != 0) {
            for (;;) {
                t3 = ((int (*)(int, int, int, int))(((((struct o0_int *)0xC817228)->v))))(((((struct o4_int *)0xC817228)->v)), a5, a6, a7);
                if ((unsigned int)((((struct o2C_int *)0xC8172FC)->v)) <= (unsigned int)0xA) {
                    if (((((struct o4_int *)0xC8171C8)->v)) == 0) {
                        t2 = 0xC8171CC; break;
                    }
                    continue;
                }
                t2 = t3; break;
            }
            t1 = t2;
        }
        t0 = t1;
    }
    (((struct o4_uint *)0xC8171C8)->v) = 0x0;
    (((struct o0_uint *)0xC8171C8)->v) = 0x0;
    return t0;
}

int FUN_0c1040be(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t1 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x2))) != 0) {
        t2 = vmsio_isready(a4);
        if (t2 == 0) {
            vmsfs_unmount(a4);
            t2 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t4 = 0xFFFFFF01;
            if ((t3 != 0) && (t0 = *(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x8)), t0 != 0)) {
                t0 = (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20)));
                t3 = 0x0;
                for (;;) {
                    if ((unsigned char)(*(signed char *)((t0 + 0x0))) != 85) {
                        break;
                    }
                    t3 = (t3 + 0x1);
                    t0 = (t0 + 0x1);
                    if ((int)t3 >= (int)0x10) {
                        if ((*(int *)(((a4 << 2) + 0xC80E608))) != 0) {
                            return 0xFFFFFF03;
                        }
                        return 0x0;
                    }
                }
                *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0xB)) = 0x0;
                *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0xC)) = 0x0;
                t4 = 0xFFFFFF03;
            }
            t2 = t4;
        }
        t1 = t2;
    }
    return t1;
}

int vmsfs_fsetparam(int a4, int a5, int a6)
{
    register int t3;
    register int t7;

    if (a4 == 0) {
        return 0xFFFFFF00;
    }
    if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0xC80DBCA))) != 0) {
        t3 = vmsio_isready((*(int *)((a4 + 0x28))));
        if (t3 == 0) {
            vmsfs_unmount((*(int *)((a4 + 0x28))));
        } else {
            t7 = vmsio_ismount((*(int *)((a4 + 0x28))));
            if (t7 != 0) {
                *(volatile signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0xC80DBD0));
            }
        }
    }
    return 0xFFFFFF01;
}

int FUN_0c109c06(int a4, int a5)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t3 = (((struct o8_int *)0xC347648)->v);
    t4 = 0x0;
    if (t3 != 0) {
        t5 = t3;
        t3 = 0x0;
        for (;;) {
            if ((int)(*(int *)((t5 + 0x10))) > (int)t3) {
                t3 = (*(int *)((t5 + 0x10)));
            }
            t5 = (*(int *)((t5 + 0x8)));
            if (t5 == 0) {
                break;
            }
        }
        t4 = t3;
    }
    t3 = (((struct o0_int *)0xC347648)->v);
    t5 = t4;
    if (t3 != 0) {
        t6 = t3;
        t3 = t4;
        for (;;) {
            if ((((unsigned short)(*(short *)((t6 + 0x0))) & 0x4) == 0) && (t0 = *(int *)((t6 + 0x10)), t1 = t0, (int)t1 > (int)t3)) {
                t3 = (*(int *)((t6 + 0x10)));
            }
            t6 = (*(int *)((t6 + 0x8)));
            if (t6 == 0) {
                break;
            }
        }
        t0 = t1;
        t5 = t3;
    }
    t1 = (((struct o1C_int *)0xC347648)->v);
    t3 = 0x0;
    if (t1 != 0) {
        t4 = t1;
        t1 = 0x0;
        for (;;) {
            if ((int)(*(int *)((t4 + 0x10))) > (int)t1) {
                t1 = (*(int *)((t4 + 0x10)));
            }
            t4 = (*(int *)((t4 + 0x8)));
            if (t4 == 0) {
                break;
            }
        }
        t3 = t1;
    }
    t1 = (((struct o14_int *)0xC347648)->v);
    t4 = t3;
    if (t1 != 0) {
        t6 = t0;
        t0 = t1;
        t1 = t3;
        for (;;) {
            if ((((unsigned short)(*(short *)((t0 + 0x0))) & 0x4) == 0) && (t2 = *(int *)((t0 + 0x10)), t6 = t2, (int)t6 > (int)t1)) {
                t1 = (*(int *)((t0 + 0x10)));
            }
            t0 = (*(int *)((t0 + 0x8)));
            if (t0 == 0) {
                break;
            }
        }
        t4 = t1;
    }
    *(unsigned int *)((a4 + 0x0)) = t5;
    *(unsigned int *)((a5 + 0x0)) = t4;
    return 0x0;
}

int vmsfs_fisexist(int a4, int a5)
{
    register int t0;

    if ((*(signed char *)(((a4 * 0x148) + 0xC80DBCA))) != 0) {
        t0 = vmsio_isready(a4);
        if (t0 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t0 = vmsio_ismount(a4);
        if (t0 != 0) {
            if ((*(signed char *)(((a4 * 0x148) + 0xC80DBD0))) == 0) {
                return 0xFFFFFF01;
            }
            return ((int (*)(void))(0xC1033DC))();
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int FUN_0c0faf30(int a4, int a5, int a6, int a7)
{
    if (a5 != 0) {
        if (a5 != 1) {
            if (a5 != 2) {
                if (a5 != 3) {
                    if (a5 != 4) {
                        if (a5 == 5) {
                            return ((int (*)(int, int, int, int))(0xC0FB020))(a4, a5, a6, a7);
                        }
                        if (a5 == 6) {
                            return ((int (*)(int, int, int, int))(0xC0FB028))(a4, a5, a6, a7);
                        }
                        if (a5 == 7) {
                            return ((int (*)(int, int, int, int))(0xC0FB030))(a4, a5, a6, a7);
                        }
                        if (a5 == 8) {
                            return ((int (*)(int, int, int, int))(0xC0FB038))(a4, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC0FB03E))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC0FAFE0))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0FAFD8))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0FAFD0))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0FAFC8))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0FAFC0))(a4, a5, a6, a7);
}

int FUN_0c0fd0dc(int a4)
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

    t0 = *(int *)((a4 + 0xC));
    t1 = *(int *)((a4 + 0x10));
    t2 = FUN_0c0fcea0(t0, t1);
    if (((*(int *)((a4 + 0x18))) & 0x1) != 0) {
        t3 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
        if ((unsigned int)((unsigned int)((unsigned int)t0 >> 1) >> 1) < (unsigned int)((unsigned int)((unsigned int)t1 >> 1) >> 1)) {
            t3 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
        }
        t4 = (((unsigned int)t0 >> 1) * ((unsigned int)t1 >> 1));
        t5 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
        t6 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
        if ((unsigned int)t3 > (unsigned int)0x1) {
            t7 = t3;
            t3 = (((unsigned int)t0 >> 1) * ((unsigned int)t1 >> 1));
            t8 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
            t9 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
            for (;;) {
                t10 = (t8 * t9);
                t8 = ((unsigned int)t8 >> 1);
                t9 = ((unsigned int)t9 >> 1);
                t7 = ((unsigned int)t7 >> 1);
                t3 = (t3 + t10);
                if ((unsigned int)t7 <= (unsigned int)0x1) {
                    break;
                }
            }
            t4 = t3;
            t5 = t8;
            t6 = t9;
        }
        t3 = (t4 + (t5 * t6));
        if (t5 == t6) {
            t3 = (t4 + 0x2);
        }
        t4 = ((t3 + 0xA) + (*(int *)(((t2 << 2) + 0xC15AB0C))));
    } else {
        t4 = ((((unsigned int)t0 >> 1) * ((unsigned int)t1 >> 1)) + (*(int *)(((t2 << 2) + 0xC15AAF0))));
    }
    return t4;
}

float FUN_0c1156c8(int a4, int a5, int a6, int a7)
{
    register float u0;
    register float t2;
    register float u3;
    register float u4;
    register float u5;
    register float u7;
    register float u8;
    float s1;
    float s2;

    u0 = (((struct o0_float *)0xC115858)->v);
    t2 = acosf((((float)a4 * ((((struct o4_float *)0xC115858)->v))) / (float)a5));
    u3 = (((struct o0_float *)0xC115858)->v);
    u4 = (((struct oC_float *)0xC115858)->v);
    s1 = _builtin_sqrtf(u0);
    s2 = _builtin_sqrtf(u3);
    u5 = _builtin_sqrtf((((s1 - t2) + (s2 + u4)) * ((s1 - t2) - (s2 + u4))));
    *(unsigned short *)((a6 + 0x0)) = (int)((((s1 - t2) - u5) / (s2 + u4)) * ((((struct o10_float *)0xC115858)->v)));
    u7 = (((struct o14_float *)0xC115858)->v);
    u8 = ((((s1 - t2) - u5) / (s2 + u4)) * (((s1 - t2) - u5) / (s2 + u4)));
    *(unsigned short *)((a7 + 0x0)) = (int)(-(u8 * u7));
    return u7;
}

int mpdrv_frame_recv_main(int a4)
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

    t0 = a4;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)0x4) {
            break;
        }
        t2 = 0xC15B6AC;
        t3 = 0xF90;
        t4 = (*(int *)(((t1 << 2) + t2)));
        t2 = (*(int *)0xC843924);
        t3 = (t3 + t2);
        t4 = (t4 + t3);
        if ((*(signed char *)((t4 + 0x0))) != 0) {
            t4 = 0xC1124AE;
            t0 = t1;
            t2 = (mpdrv_check_port(t0));
            t0 = t1;
            t5 = 0x0;
            t0 = (t0 << 1);
            t0 = (t0 + (t1 << 2));
            t6 = t0;
            t7 = t0;
            for (;;) {
                t2 = (*(int *)0xC843924);
                t4 = (*(signed char *)((((0xF90 + t2) + t6) + 0x0)));
                if (t4 != 0) {
                    t0 = t7;
                    t2 = (mpdrv_make_devicedata(t0, t1));
                } else {
                    t8 = t4;
                    t9 = t0;
                }
                t5 = (t5 + 0x1);
                t4 = t8;
                t0 = t9;
                t7 = (t7 + 0x1);
                t6 = (t6 + 0x1);
                if ((int)t5 >= (int)0x6) {
                    break;
                }
            }
        } else {
            t2 = t3;
        }
        t3 = t2;
        t1 = (t1 + 0x1);
    }
    return 0x0;
}

