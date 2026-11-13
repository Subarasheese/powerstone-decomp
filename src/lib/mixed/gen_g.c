/* Straight-line functions with calls and guards (batch gen_g): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o10B4_int { char p[0x10B4]; int v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10DC_int { char p[0x10DC]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2F_uchar { char p[0x2F]; unsigned char v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o54_short { char p[0x54]; short v; };
struct o56_short { char p[0x56]; short v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o64_short { char p[0x64]; short v; };
struct o68_float { char p[0x68]; float v; };
struct o68_short { char p[0x68]; short v; };
struct o6C_float { char p[0x6C]; float v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o70_float { char p[0x70]; float v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o7226_uchar { char p[0x7226]; unsigned char v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o7240_uchar { char p[0x7240]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o80_short { char p[0x80]; short v; };
struct o80_ushort { char p[0x80]; unsigned short v; };
struct o82_short { char p[0x82]; short v; };
struct o82_ushort { char p[0x82]; unsigned short v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oA0_short { char p[0xA0]; short v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
int FUN_0c01ee40(int);
int FUN_0c01f0a8(int);
int vmu_menu_step_choose_yes_no(int);
int vmu_menu_state_save(int, int, int, int);
int FUN_0c01f248(int, int, int, int);
int vmu_menu_step_notice_wait_ok(int, int, int, int);
int FUN_0c01f48c(int, int);
int vmu_menu_spawn_message(int);
int FUN_0c01f874(int);
int vmu_menu_scan_port_masks(void);
int FUN_0c01fa70(void);
extern int vmu_menu_update_objs();
int vmu_menu_pad_pressed(int);
int FUN_0c01fe52(int);
float FUN_0c0211d0(float, float, float, float);
int fx_spawn_043bdc(int);
int game_reset_objects(void);
int obj_create(int, int, int);
int obj_create_beside(int, int, int, int, int);
int FUN_0c05f2d4(int, int);
int FUN_0c061f9c(int);
int FUN_0c06233a(int, int, int);
int FUN_0c06336c(int);
int FUN_0c0634b4(int);
int FUN_0c08d6ec(int, int);
int FUN_0c08dbc8(int, int);
int FUN_0c08dc24(int, int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int FUN_0c09c45a(int);
int FUN_0c09c782(int);
int pl_get_hit_count_of_opponent(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_stick_dir_angle(int);
int pl_landed(int);
int obj_set_record_char(int, int);
int pl_end_action_choose_state(int);
int pl_change_state(int, int, int);
int snd_play_side_se(int, int);
int dbgedit_select_object(int);
int game_clear_win_records(void);
int FUN_0c0d71f4(int);
int FUN_0c0d78fa(void);
int FUN_0c0d7a0a(void);
int FUN_0c0d7a44(int);
int cam_init_records(void);
int nl_mesh_set_texture(int, int);
int gfx_set_background_color(int, int, int, float);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int _divls(void);
int _modlu(void);
int _quick_evn_mvn(int);
extern int _quick_odd_mvn();
int vib_port_has_vibration(int);
int kdSetBlockWrite(int, ...);
int FUN_0c1012f4(int, int, int);
int vmsfs_c_progress(int, int, int, int);
int vmsfs_fgetinfo(int, int, int);
int check_file_correct(int, int);
int FUN_0c1070a0(int);
int FUN_0c1070b8(int);
int FUN_0c107ea4(int);
int FUN_0c10b7b0(int, int, int, int, int);
int vmsio_get_media_info(int, int);
int vmsio_block_read(int, int, int);
int FUN_0c11428e(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c114338(int);
int FUN_0c114d44(int, int, int);
int FUN_0c114d8a(int);
int FUN_0c115108(void);
int SJ_SplitChunk(int, int, int);
int memcpy(int, int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, int, int, int);
int pl_mode15_cls15_f0(int a4, int a5, int a6, int a7);
int FUN_0c0d780c(void);
float hit_calc_damage(int a4, float f4);
int FUN_0c0d7318(int a4, int a5, int a6, int a7, float f4);
int FUN_0c10796a(int a4, int a5, int a6, int a7);
int demo_spawn_keyframe_mover(int a4, int a5, float f4);
int FUN_0c04a8ec(int a4, int a5);
int FUN_0c0f414e(int a4, int a5, int a6, int a7);
int FUN_0c10121c(int a4, int a5, int a6);
int FUN_0c105ed2(int a4, int a5, int a6, int a7);
int FUN_0c02374e(int a4, int a5);
int FUN_0c0235ce(int a4, int a5);
int FUN_0c02380c(int a4, int a5);
int FUN_0c064056(int a4, int a5, int a6, int a7);
int pl_mode12_phase1(int a4);
int pl_wangtang_mode12_phase1(int a4);
int fx_spawn_21(int a4);
float stage_gimmick_20_pick_random_point(int a4, int a5);
int FUN_0c0d2424(int a4, int a5, int a6, int a7);
int kmiReqRestOfDMA(int a4);
int FUN_0c0194dc(int a4, int a5);
int FUN_0c02b724(void);
int fx_spawn_0485f8(int a4);
int FUN_0c05986c(int a4, int a5, int a6, int a7);
int FUN_0c059934(int a4, int a5, int a6, int a7);
float obj_place_linked_ahead(int a4, int a5, float f4);
int fx_swirl_create(int a4, int a5);
int FUN_0c0e393a(int a4);
int FUN_0c0e51e8(int a4, int a5);
int FUN_0c0eae20(int a4, int a5);
int FUN_0c101148(int a4, int a5);
int FUN_0c1058e2(int a4, int a5, int a6, int a7, int a8);
int mpdrv_check_port(int a4);
int vmu_check_show_message(int a4);
int FUN_0c0906e6(int a4);
int FUN_0c08e3f2(int a4, int a5);
int obj_set_mode_owner(int a4, int a5, int a6);
int FUN_0c0208ec(int a4, int a5);
int FUN_0c0200e2(int a4, int a5, int a6, int a7);
int FUN_0c01ed94(int a4, int a5, int a6, int a7);
int FUN_0c01db74(int a4, int a5, int a6, int a7);

int FUN_0c10796a(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t4;
    register int t6;
    register int t8;
    register int t22;
    register int t26;
    register int t28;
    register int t52;

    *(unsigned int *)(((int)stk + 4)) = a5;
    if (a4 == 0) {
        t52 = (mwRnaErrCallFunc(0xC15B31C, a5, a6, a7));
    } else {
        FUN_0c1070a0(((int)stk + 0));
        if ((*(int *)(((int)stk + 4))) == 0) {
            t4 = FUN_0c107ea4(a4);
            if (t4 != 0) {
                t6 = FUN_0c114d8a(((((struct o40_int *)(a4))->v)));
                if (t6 != 0) {
                } else {
                    *(volatile int *)((a4 + 0x40));
                    t8 = FUN_0c115108();
                    if (t8 == 0) {
                        *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) & 0x5);
                    }
                }
            }
        } else {
            if ((*(int *)(((int)stk + 4))) == 1) {
                t22 = FUN_0c107ea4(a4);
                if (t22 != 1) {
                    t26 = FUN_0c114d44(((((struct o40_int *)(a4))->v)), (*(int *)((a4 + 0x8))), (*(int *)((a4 + 0xC))));
                    if (t26 != 0) {
                    } else {
                        *(volatile int *)((a4 + 0x40));
                        t28 = FUN_0c115108();
                        if (t28 != 0) {
                        } else {
                            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) | 0x2);
                        }
                    }
                }
            }
        }
        t52 = (FUN_0c1070b8(((int)stk + 0)));
    }
    return t52;
}

int FUN_0c0f414e(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t1;
    register int t23;
    register int t9;
    register int t2;
    register int t3;
    register int t4;
    register int t11;
    register int t12;
    register int t13;
    register int t20;

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    t1 = vib_port_has_vibration((*(int *)(((int)stk + 20))));
    t23 = 0xFFFFFFFE;
    if (t1 == 0) {
    } else {
        *(unsigned int *)(((((int)stk + 12) + 0xC) + 0x10)) = 0x0;
        *(unsigned int *)(((((int)stk + 12) + 0xC) + 0xC)) = 0x0;
        *(unsigned int *)(((((int)stk + 12) + 0xC) + 0x8)) = 0x0;
        *(unsigned int *)(((((int)stk + 12) + 0xC) + 0x4)) = 0x0;
        *(unsigned int *)(((((int)stk + 12) + 0xC) + 0x0)) = 0x0;
        t9 = 0x0;
        if ((unsigned int)0x0 < (unsigned int)a7) {
            t2 = 0x0;
            t3 = 0x0;
            for (;;) {
                t4 = *(int *)(((int)stk + 16));
                t3 = (t3 + 0x1);
                *(unsigned int *)(((int)stk + 16)) = (t4 + 0x1);
                t2 = (t2 | ((int)0x1 << (int)(unsigned char)(*(signed char *)((((t4 + 0x1) - 1) + 0x0)))));
                if ((unsigned int)t3 >= (unsigned int)a7) {
                    break;
                }
            }
            t9 = t2;
        }
        *(unsigned char *)(((((int)stk + 12) + 0xC) + 0x0)) = ((unsigned int)(unsigned short)t9 >> 8);
        *(unsigned char *)((((((int)stk + 12) + 0xC) + 0x1) + 0x0)) = t9;
        if ((unsigned int)0x0 < (unsigned int)a7) {
            t11 = 0x0;
            t12 = (((((int)stk + 12) + 0xC) + 0x1) + 0x1);
            for (;;) {
                t13 = *(int *)(((int)stk + 12));
                t11 = (t11 + 0x1);
                *(unsigned int *)(((int)stk + 12)) = (t13 + 0x1);
                *(unsigned char *)((t12 + 0x0)) = (*(signed char *)((((t13 + 0x1) - 1) + 0x0)));
                t12 = (t12 + 0x1);
                if ((unsigned int)t11 >= (unsigned int)a7) {
                    break;
                }
            }
        }
        *(unsigned int *)(((int)stk + 12)) = ((unsigned int)(a7 + 0x5) >> 2);
        *(int *)((int)stk + 8) = ((unsigned int)(a7 + 0x5) >> 2);
        *(int *)((int)stk + 4) = (((int)stk + 12) + 0xC);
        *(int *)((int)stk + 0) = 0x0;
        *(volatile int *)(((int)stk + 20));
        t20 = kdSetBlockWrite(0x0, (((int)stk + 12) + 0xC), ((unsigned int)(a7 + 0x5) >> 2));
        t23 = 0x0;
        if ((int)t20 < 0) {
            t23 = 0xFFFFFFFF;
        }
    }
    return t23;
}

int FUN_0c10121c(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    int t2;
    register int t3;

    t1 = (*(int *)0xC80578C);
    for (;;) {
        t2 = vmsio_block_read(a4, a5, a6);
        if (t2 != 0) {
            if (((*(int *)0xC15B0A8) != 0) && (t2 == 0xFFFFFF30)) {
                return 0xFFFFFF01;
            }
            *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = ((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34))) + 0x1);
            t3 = t1 == 0;
            t1 = (t1 - 1);
            if (t3 && (t0 = *(int *)0xC80578C, t0 != -1)) {
                break;
            }
            continue;
        }
        break;
    }
    t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30));
    t1 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34));
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = (t0 + 0x1);
    vmsfs_c_progress(a4, (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x8))), ((t0 + 0x1) - 1), t1);
    t0 = 0x0;
    if (t2 != 0) {
        t1 = 0xFFFFFF01;
        if (t2 != 0xFFFFFF01) {
            t1 = 0xFFFF0000;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c105ed2(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register int t1;
    register int t4;
    register int t5;
    register int t7;
    register int t9;
    register int t10;
    register int t12;
    register int t21;
    register int t24;
    register int t32;
    int t8;

    t0 = *(int *)((a4 + 0x4));
    t1 = *(int *)((a4 + 0x8));
    t4 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x18)))))(t1, 0x1, 0x1000, (((int)stk + 0) + 0xC), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t5 = *(int *)(((int)stk + 16));
    if ((int)t5 >= (int)0x10) {
        t7 = FUN_0c11428e(t0, (*(int *)(((int)stk + 12))), t5, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        if ((t7 != 0) && (t8 = *(int *)(((int)stk + 16)), (int)t7 <= (int)t8)) {
            t9 = FUN_0c114338(t0);
            if (t9 == 2) {
                t10 = *(int *)(((int)stk + 16));
                *(unsigned int *)(((int)stk + 0)) = t10;
                t12 = 0x40;
                if ((int)t10 < (int)0x40) {
                    t12 = (*(int *)(((int)stk + 0)));
                }
                memcpy((a4 + 0x50), (*(int *)(((int)stk + 12))), t12);
            }
            SJ_SplitChunk((((int)stk + 0) + 0xC), t7, (((int)stk + 0) + 0xC));
            t21 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x20)))))(t1, 0x0, (((int)stk + 0) + 0xC), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            t24 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x1, (((int)stk + 0) + 0x4), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            *(unsigned char *)((a4 + 0x1)) = 0x2;
            t32 = 0x2;
        } else {
            t32 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x1, (((int)stk + 0) + 0xC), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        }
    } else {
        t32 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x1, (((int)stk + 0) + 0xC), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
    }
    return t32;
}

int kmiReqRestOfDMA(int a4)
{
    int stk[3];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t15;
    register int t19;
    register int t1;
    int t9;
    register int t30;
    register int t31;
    register int t32;
    register int t13;
    register int t14;

    *(unsigned int *)(((int)stk + 8)) = a4;
    t0 = *(int *)0xC817314;
    t2 = 0xC817314;
    t3 = t0;
    t4 = (t0 << 2);
    t5 = (0xC817338 + (t0 << 2));
    t6 = (0xC817388 + (t0 << 2));
    t7 = 0x0;
    for (;;) {
        if (((*(int *)((t6 + 0x0))) != 0) && (t9 = *(int *)(((int)stk + 8)), t2 = t9, t2 != t7)) {
            t1 = ((((struct o0_int *)0xC8173EC)->v));
            if ((t1 == 1) && ((t13 = (t1 == 1), t1 = t7, t1 == 1) || (t14 = (t1 == 1), t1 = t7, t1 == 3))) {
                t2 = 0xC8173F0;
                t15 = *(int *)((t2 + 0x0));
                t1 = t2;
                t2 = t7;
                t2 = (t2 << 16);
                t2 = (t2 << 8);
                *(unsigned int *)((t15 + 0x0)) = (((*(int *)(((*(int *)((t1 + 0x0))) + 0x0))) & 0xF0FFFFFF) | t2);
                for (;;) {
                    t2 = ((int)stk + 4);
                    t19 = t2;
                    *(int *)((int)stk + 0) = t19;
                    t2 = 0xC8173F0;
                    t4 = (*(int *)((t2 + 0x0)));
                    t3 = 0x10000000;
                    t1 = (FUN_0c10b7b0(t3, t4, ((((struct o8_int *)0xC8173EC)->v)), 0x10, t19));
                    if (t1 != 0x100) {
                        break;
                    }
                }
                for (;;) {
                    *(int *)((int)stk + 0) = ((int)stk + 4);
                    t4 = (*(int *)((t5 + 0x0)));
                    t3 = 0x10000000;
                    t1 = (FUN_0c10b7b0(t3, t4, ((*(int *)((t6 + 0x0))) + 0x20), 0x10, ((int)stk + 4)));
                    if (t1 != 0x100) {
                        break;
                    }
                }
            } else {
                for (;;) {
                    *(int *)((int)stk + 0) = ((int)stk + 4);
                    t4 = (*(int *)((t5 + 0x0)));
                    t3 = 0x10000000;
                    t1 = (FUN_0c10b7b0(t3, t4, ((*(int *)((t6 + 0x0))) + 0x20), 0x10, ((int)stk + 4)));
                    if (t1 != 0x100) {
                        break;
                    }
                }
            }
        } else {
            t30 = t2;
            t31 = t3;
            t32 = t4;
        }
        t2 = t30;
        t3 = t31;
        t4 = t32;
        t7 = (t7 + 0x1);
        t6 = (t6 + 0x10);
        t5 = (t5 + 0x10);
        if ((unsigned int)t7 >= (unsigned int)0x5) {
            break;
        }
    }
    return t1;
}

int FUN_0c0e393a(int a4)
{
    int stk[7];
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t35;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    t4 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((int)stk + 20)) = t4;
    t3 = *(int *)0xC7FD490;
    *(unsigned int *)(((int)stk + 4)) = t3;
    t2 = 0xC7FD490;
    t5 = a4;
    for (;;) {
        if ((*(int *)(((*(int *)(((int)stk + 20))) + 0x4))) == -1) {
            break;
        }
        t4 = (*(int *)(((int)stk + 4)));
        *(unsigned int *)(((int)stk + 8)) = t4;
        t3 = (*(int *)(((int)stk + 8)));
        t3 = (t3 << 2);
        t3 = (t3 << 1);
        t2 = 0xC7F87C8;
        t4 = (*(int *)((t2 + 0x0)));
        t3 = (t3 + t4);
        if ((*(int *)((t3 + 0x0))) == 0) {
            *(unsigned int *)(((int)stk + 12)) = 0xFFFFFFFF;
            t35 = t5;
        } else {
            t4 = (*(int *)(((int)stk + 8)));
            t4 = (t4 << 2);
            t4 = (t4 << 1);
            t3 = (*(int *)((t2 + 0x0)));
            t4 = (t4 + t3);
            *(unsigned int *)(((int)stk + 8)) = (*(int *)((t4 + 0x4)));
            t4 = (*(int *)(((int)stk + 4)));
            t4 = (t4 << 1);
            t3 = 0xC7FD044;
            t4 = (*(short *)((t4 + (*(int *)((t3 + 0x0))))));
            t4 = (short)t4;
            *(unsigned int *)(((int)stk + 0)) = t4;
            t4 = (t4 << 2);
            t4 = (t4 << 2);
            t4 = (t4 << 1);
            t2 = (*(int *)0xC7FD050);
            t4 = (t4 + t2);
            t2 = 0x7E00000;
            t4 = (*(int *)((t4 + 0xC)));
            t4 = (t4 & t2);
            *(unsigned int *)(((int)stk + 16)) = t4;
            t5 = (*(int *)(((int)stk + 0)));
            t5 = (t5 << 2);
            t5 = (t5 << 2);
            t5 = (t5 << 1);
            t2 = 0xC7FD050;
            t4 = (*(int *)((t2 + 0x0)));
            t5 = (t5 + t4);
            t4 = 0xFFFFA352;
            nl_mesh_set_texture(t5, (*(int *)(((int)stk + 8))));
            t4 = (*(int *)(((int)stk + 0)));
            t4 = (t4 << 2);
            t4 = (t4 << 2);
            t4 = (t4 << 1);
            t2 = 0xC7FD050;
            t3 = (*(int *)((t2 + 0x0)));
            t4 = (t4 + t3);
            t3 = (*(int *)(((int)stk + 16)));
            *(unsigned int *)((t4 + 0xC)) = ((*(int *)((t4 + 0xC))) | t3);
        }
        t4 = (*(int *)(((int)stk + 20)));
        t5 = t35;
        t4 = (t4 + 0x10);
        *(unsigned int *)(((int)stk + 20)) = t4;
        t3 = (*(int *)(((int)stk + 4)));
        t3 = (t3 + 0x1);
        *(unsigned int *)(((int)stk + 4)) = t3;
    }
    return (*(int *)(((int)stk + 12)));
}

int FUN_0c0e51e8(int a4, int a5)
{
    int stk[7];
    register int t7;
    register int t18;
    register int t19;
    register int t20;
    int t1;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    if (((int)(*(int *)(((int)stk + 20))) >= 0) && (t1 = *(int *)(((int)stk + 20)), (int)t1 < (int)0x8)) {
        *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 24)));
        *(unsigned int *)(((int)stk + 0)) = 0xC155C2C;
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 8))) >= (int)0x4) {
                t7 = *(int *)(((int)stk + 20));
                if ((*(int *)((0xC7FD1D0 + (signed char)(((t7 << 1) + t7) << 2)))) != -1) {
                    return 0xFFFFFFFD;
                }
                *(unsigned int *)(((int)stk + 12)) = (*(int *)(((*(int *)(((int)stk + 24))) + 0x8)));
                *(unsigned int *)(((int)stk + 16)) = (*(int *)0xA0800088);
                if ((int)(((((struct o0_int *)0xC7FD0F0)->v)) + (*(int *)(((int)stk + 12)))) > (int)(*(int *)(((int)stk + 16)))) {
                    return 0xFFFFFFFC;
                }
                if (((((struct o8_int *)0xC7FD0F0)->v)) != 0) {
                    return 0xFFFFFFFB;
                }
                return 0x0;
            }
            t18 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t18 + 0x1);
            t19 = *(signed char *)((((t18 + 0x1) - 1) + 0x0));
            t20 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = (t20 + 0x1);
            if (t19 != (*(signed char *)((((t20 + 0x1) - 1) + 0x0)))) {
                break;
            }
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
        }
        return 0xFFFFFFFE;
    }
    return 0xFFFFFFFF;
}

int FUN_0c101148(int a4, int a5)
{
    int t0;
    register int t1;
    int t2;
    register int t3;

    t1 = (*(int *)0xC80578C);
    for (;;) {
        t2 = vmsio_get_media_info(a4, a5);
        if (t2 != 0) {
            if (((*(int *)0xC15B0A8) != 0) && (t2 == 0xFFFFFF30)) {
                return 0xFFFFFF01;
            }
            *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = ((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34))) + 0x1);
            t3 = t1 == 0;
            t1 = (t1 - 1);
            if (t3 && (t0 = *(int *)0xC80578C, t0 != -1)) {
                break;
            }
            continue;
        }
        break;
    }
    t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30));
    t1 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34));
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = (t0 + 0x1);
    vmsfs_c_progress(a4, (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x8))), ((t0 + 0x1) - 1), t1);
    t0 = 0x0;
    if (t2 != 0) {
        t1 = 0xFFFFFF01;
        if (t2 != 0xFFFFFF01) {
            t1 = 0xFFFF0000;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c1058e2(int a4, int a5, int a6, int a7, int a8)
{
    int stk[6];
    register int t1;
    register int t6;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = a8;
    t1 = vmsfs_fgetinfo(a4, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x4));
    if ((int)t1 >= 0) {
        if ((unsigned char)(*(signed char *)(((int)stk + 10))) != 1) {
            return 0xFFFFFF0B;
        }
        t6 = *(short *)(((int)stk + 8));
        if (((unsigned int)a7 < (unsigned int)(unsigned short)t6) && (((unsigned int)a8 <= (unsigned int)(unsigned short)t6) && ((unsigned int)(a7 + a8) <= (unsigned int)(unsigned short)t6))) {
            t8 = check_file_correct(a4, (*(int *)(((int)stk + 0))));
            if ((int)t8 >= 0) {
                if ((unsigned int)0x0 < (unsigned int)a8) {
                    t9 = 0x0;
                    t10 = a6;
                    t11 = a7;
                    for (;;) {
                        t12 = FUN_0c1012f4(a4, t11, t10);
                        if ((int)t12 < 0) {
                            break;
                        }
                        t9 = (t9 + 0x1);
                        t10 = (t10 + 0x200);
                        t11 = (t11 + 0x1);
                        if ((unsigned int)t9 >= (unsigned int)a8) {
                            return t12;
                        }
                    }
                    return t12;
                }
                return 0x0;
            }
            return t8;
        }
        return 0xFFFFFF00;
    }
    return t1;
}

int mpdrv_check_port(int a4)
{
    int stk[1];
    register int t0;
    register int t2;
    register int t3;
    int t8;
    register int t11;
    register int t13;
    int t16;
    register int t17;
    int t25;
    register int t26;

    t0 = *(int *)0xC843924;
    t2 = *(int *)0xC843924;
    t3 = (((struct o10B4_int *)(t2))->v);
    t8 = *(int *)(((*(int *)(((((t2 + 0xFE8) + (((((((-t3) + 0x1) << 1) + ((-t3) + 0x1)) << 2) << 2) << 1)) + ((*(int *)(((a4 << 2) + 0xC15B6AC))) << 2)) + 0x0))) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t8;
    if ((t8 != -1) && (t8 != 0xFFFFFF00)) {
        t11 = (((int)stk + 0) + 0x2);
        if (((((struct o10C4_int *)((*(int *)0xC843924)))->v)) == 1) {
            t11 = (((int)stk + 0) + 0x1);
        }
        t13 = *(signed char *)((t11 + 0x0));
        *(unsigned int *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x4)) = 0x0;
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1)) = (*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0)));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0)) = t13;
        t16 = *(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x2)) = (((*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1))) ^ t16) & t16);
        t17 = *(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x3)) = (((*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1))) ^ t17) & (~t17));
        return 0x0;
    }
    *(unsigned int *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x4)) = ((*(int *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x4))) + 0x1);
    if ((unsigned int)(*(int *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x4))) > (unsigned int)((((struct o10DC_int *)((*(int *)0xC843924)))->v))) {
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1)) = (*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0)));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0)) = 0x0;
        t25 = *(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x2)) = (((*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1))) ^ t25) & t25);
        t26 = *(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x3)) = (((*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1))) ^ t26) & (~t26));
        return 0xFFFFFFFF;
    }
    return 0x0;
}

