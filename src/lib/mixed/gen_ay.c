/* Straight-line functions with calls and guards (batch gen_ay): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DA_uchar { char p[0x2DA]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_int { char p[0x308]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3A_short { char p[0x3A]; short v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o71DD_uchar { char p[0x71DD]; unsigned char v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c0282cc(void);
int FUN_0c02d420(void);
int fx_spawn_034530(int);
int FUN_0c0496f0(int, int, int, int, int, int, int, int, int);
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0555c4(void);
int FUN_0c0555dc(void);
int game_reset_objects(void);
int obj_create(int, int, int);
int obj_destroy(int);
int FUN_0c0593e0(int);
int obj_tick_class(int);
int FUN_0c05f2d4(int, int);
int FUN_0c05f952(void);
int res_pl_textures_release_all(void);
int FUN_0c06231c(int, int, int);
int FUN_0c06233a(int, int, int);
int pl_mode05_update(int);
int pl_mode06_update(int);
int pl_mode07_update(int);
int pl_mode10_update(int, int, int, int);
int pl_mode12_update(int, int, int, int);
int pl_mode13_update(int);
int pl_mode14_update(int);
int pl_mode15_update(int);
int ai_dist_class(int);
int ai_select_variant_script(int, int);
int FUN_0c08cd18(int);
int ai_run_reaction_script(int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int pl_spawn_hit_effect_with_se(int);
int obj_place_linked_ahead(int, int, float);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int math_angle_between_points_xz(int, int);
int pl_landed(int);
extern int pl_set_item_carry_motion();
int obj_set_record_char(int, int);
int obj_set_record(int, int);
int pl_end_action_choose_state(int);
int pl_change_state(int, int, int);
int FUN_0c0a3762(int, int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int stage_obj_load_layout_pos(int);
int obj_set_mode_owner(int, int, int);
int FUN_0c0ac5c4(int, int, int, int);
int obj_touched_by_slot(int, int);
int fx_spawn_13(int);
int testmode_check_exit_combo(void);
int FUN_0c0cfeb0(void);
extern int dbgedit_update_camera();
int dbgedit_draw_editor_screen(int);
int cam_set_shake_ramp(int, int);
float math_exp_float(int, int, int, int, float);
int nlCalcPoint(int, int);
int nlMultiMatrixRevOrder8(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int _modls(int);
int _quick_odd_mvn(void);
int gdFsReopenHn(int, int, int, int);
int FUN_0c0f2292(int);
int FUN_0c0ff35a(int, int, int, int);
int FUN_0c0fff62(int, int, int, int);
int kdGetDeviceInfo(int);
int FUN_0c108b48(int);
int FUN_0c10a8a0(int, int);
int kmiCopyToFrameBuffer(int, int, int, int);
int FUN_0c114334(int);
int FUN_0c114342(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int memset(int, int, int);
int thunk_FUN_0c062242(int);
int thunk_FUN_0c062d78(void);
int fx_spawn_04a13c(int a4);
int pl_valgas_special_id3(int a4);
int ai_slot_state1_update(int a4, int a5, int a6, int a7);
int stage_gimmick_03_04_spawn(int a4);
int stage_gimmick_22_spawn(int a4);
int stage_gimmick_26_spawn(int a4);
int stage_gimmick_29_spawn(int a4);
int dbgedit_update(float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_0c10b4b0(int a4, int a5, int a6);
int pl_hitreact_23_phase2(int a4);
int rank_init_default_entries(void);
int FUN_0c0ca198(int a4);
int FUN_0c0dcfb0(int a4);
int gdFsDaStopG(void);
int FUN_0c0ff3ee(int a4, int a5, int a6, int a7);
int pl_gunrock_mode08_09_update_v0(int a4);
int pl_gunrock_state_update(int a4, int a5, int a6, int a7);
int stage_gimmick_30_spawn(int a4);
int FUN_0c0f21ec(int a4, int a5, int a6, int a7, int a8);
int pl_ryoma_special2_phase0(int a4);
int pl_ryoma_attack_kind68_phase2(int a4);
int pl_jack_special2_phase3(int a4);
int stage_gimmick_15_update(int a4);
int FUN_0c105fa4(int a4, int a5, int a6, int a7);
int pl_enter_state_35_pickup_item(int a4, int a5, int a6);
int stage_gimmick_16_update(int a4);
int pl_falcon_victim_phase2(int a4);
int pl_wangtang_victim_phase2(int a4);
int pl_ayame_state21_update(int a4);
int stage_gimmick_39_update(int a4, int a5, int a6, int a7);
int fx_update_19(int a4);
int FUN_0c0fc63c(int a4, int a5, int a6, int a7);
float FUN_0c0dfd72(int a4, int a5, int a6, int a7);

int FUN_0c10b4b0(int a4, int a5, int a6)
{
    int stk[3];
    register int t43;
    register int t2;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t3;
    register int t11;
    register int t12;
    int t13;
    register int t33;
    register int t34;
    register int t37;
    register int t38;
    register int t22;
    int t25;
    register int t26;
    register int t27;
    register int t28;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t9 = *(int *)(((signed char)(((a4 << 2) + a4) << 2) + 0xC347648));
    t8 = (((struct o0_int *)0xC347634)->v);
    t43 = 0x0;
    if (t9 != 0) {
        t2 = 0xC347648;
        t4 = a4;
        t5 = a5;
        t6 = a6;
        t7 = 0x0;
        for (;;) {
            t10 = *(short *)((t9 + 0x0));
            if ((((unsigned short)t10 & 0x4) == 0) && ((t3 = 0x2, (t3 & (unsigned short)t10) != 0) && ((t4 = 0x1800, (t4 & (unsigned short)t10) != 0) && ((t11 = *(int *)((t9 + 0x10)), t12 = *(int *)(((int)stk + 4)), t3 = t12, (int)t11 >= (int)t3) && (t13 = *(int *)((t9 + 0x10)), (int)t13 < (int)t8))))) {
                t5 = ((((struct o8_int *)0xC347634)->v));
                if ((short)a4 == 0) {
                    t22 = ((*(int *)((t9 + 0xC))) + t5);
                } else {
                    t22 = ((*(int *)((t9 + 0xC))) - t5);
                }
                t5 = ((int)stk + 0);
                t2 = (FUN_0c10a8a0(t22, t5));
                if ((t2 != 0) && (t25 = *(int *)((t2 + 0x14)), t4 = t25, t26 = *(short *)((t4 + 0x0)), t27 = *(int *)(((int)stk + 8)), t4 = t27, t28 = *(short *)((t4 + 0x0)), t3 = t28, t3 = (unsigned short)t3, t3 = (t3 & 0xF000), ((unsigned short)t26 & 0xF000) == t3)) {
                    t8 = (*(int *)((t9 + 0x10)));
                    t7 = t9;
                    t33 = t3;
                    t34 = t4;
                }
            } else {
                t33 = t3;
                t34 = t4;
                t37 = t5;
                t38 = t6;
            }
            t3 = t33;
            t9 = (*(int *)((t9 + 0x8)));
            t4 = t34;
            t5 = t37;
            t6 = t38;
            if (t9 == 0) {
                break;
            }
        }
        t43 = t7;
    }
    return t43;
}

int gdFsDaStopG(void)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t2 = gdFsReopenHn((*(int *)(((*(int *)0xC346BD8) + 0x14))), 0x0, 0x0, 0x0);
    t3 = 0xFFFFFFF3;
    if (t2 != 0) {
        t4 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t5 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0xC346BD8) + 0xC))) + 0x30)))))();
        if (t5 != 0) {
            *(unsigned int *)((t2 + 0x3C)) = t5;
            (((struct o50_ushort *)(t2))->v) = 0x4;
            if ((((((struct o3A_short *)((*(int *)0xC346BD8)))->v)) != 0) && (t3 = *(int *)0xC346BD8, t1 = *(int *)((t3 + 0x2C)), (int)t1 >= (int)0x10001)) {
                *(unsigned int *)((t2 + 0x4)) = 0xC7FE6FC;
                (((struct o48_ushort *)(t2))->v) = 0x8;
            } else {
                (((struct o48_ushort *)(t2))->v) = 0x6;
            }
            *(unsigned int *)(((*(int *)((t2 + 0x0))) + 0x1C)) = t2;
            t3 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC346BD8) + 0xC)))))->v))))();
        }
        _builtin_set_imask(((unsigned int)(((t4 & 0xF) << 2) << 2) >> 4));
        t3 = 0x0;
        if (t5 == 0) {
            t3 = 0xFFFFFFF3;
        }
    }
    return t3;
}

int FUN_0c0ff3ee(int a4, int a5, int a6, int a7)
{
    register int t50;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    int t15;
    int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t39;
    register int t30;
    register int t10;
    register int t12;
    register int t13;
    register int t25;
    register int t26;
    register int t27;
    register int t28;

    t50 = ((int)(short)a4 >> 4);
    if (((int)(short)a4 >> 4) != 50) {
        if (((int)(short)a4 >> 4) != 54) {
            t39 = ((int)(short)a4 >> 4);
        } else {
            _builtin_set_imask(0x4);
            t1 = (((struct o0_int *)0xA05F6900)->v);
            t2 = (((struct o20_int *)0xA05F6900)->v);
            if (((unsigned int)((unsigned int)((unsigned int)(t1 & t2) >> 8) >> 2) >> 2) != 0) {
                t3 = 0xA05F6900;
                t4 = 0xFFFFFF0F;
                t5 = t2;
                t6 = 0x0;
                t7 = 0x0;
                for (;;) {
                    if (((int)0x1 << (int)t7) == 0x80) {
                        break;
                    }
                    t5 = 0x1;
                    t5 = ((int)t5 << (int)t7);
                    if ((t5 & ((unsigned int)((unsigned int)((unsigned int)(t1 & t2) >> 8) >> 2) >> 2)) != 0) {
                        t6 = t7;
                        t6 = (t6 << 2);
                        t6 = (t6 << 2);
                        t6 = (t6 << 1);
                        t6 = (t6 + 0xA00);
                        t3 = (FUN_0c0ff35a(t6, a5, a6, a7));
                    } else {
                        t10 = t4;
                        t12 = t5;
                        t13 = t6;
                    }
                    t4 = t10;
                    t7 = (t7 + 0x1);
                    t5 = t12;
                    t6 = t13;
                }
                t30 = t3;
            } else {
                t15 = (((struct o4_int *)0xA05F6900)->v);
                t16 = (((struct o24_int *)0xA05F6900)->v);
                t17 = 0xA05F6924;
                t18 = 0xA05F6904;
                t19 = t16;
                t20 = 0x0;
                t21 = 0x0;
                for (;;) {
                    if (((int)0x1 << (int)t21) == 16) {
                        break;
                    }
                    t18 = 0x1;
                    t18 = ((int)t18 << (int)t21);
                    if ((t18 & (t15 & t16)) != 0) {
                        t20 = t21;
                        t20 = (t20 << 2);
                        t20 = (t20 << 2);
                        t20 = (t20 << 1);
                        t20 = (t20 + 0xB00);
                        FUN_0c0ff35a(t20, a5, a6, a7);
                    } else {
                        t25 = t17;
                        t26 = t18;
                        t27 = t19;
                        t28 = t20;
                    }
                    t17 = t25;
                    t21 = (t21 + 0x1);
                    t18 = t26;
                    t19 = t27;
                    t20 = t28;
                }
                t30 = ((int)0x1 << (int)t21);
            }
            t39 = t30;
        }
        t50 = t39;
    }
    return t50;
}

int FUN_0c0f21ec(int a4, int a5, int a6, int a7, int a8)
{
    register int t4;

    (((struct o0_uint *)0xC7FEC4C)->v) = a4;
    (((struct o4_uint *)0xC7FE700)->v) = 0x0;
    (((struct o0_uint *)0xC7FE700)->v) = 0x1;
    (((struct o8_uint *)0xC7FE700)->v) = 0x0;
    memset(0xC7FE70C, 0x0, 0x4E0);
    if ((a7 != 0) && (a6 != 0)) {
        (((struct o4_uint *)0xC7FE700)->v) = 0x1;
        FUN_0c0fff62(a5, a6, a7, a8);
    }
    t4 = 0x0;
    for (;;) {
        *(unsigned int *)((((t4 * 0x34) + 0xC7FE70C) + 0x30)) = (kdGetDeviceInfo(t4));
        FUN_0c0f2292(((t4 * 0x34) + 0xC7FE70C));
        *(unsigned int *)(((t4 << 2) + 0xC7FEBEC)) = 0x0;
        *(unsigned char *)((0xC7FEC52 + t4)) = 0x0;
        *(unsigned char *)((t4 + 0xC7FEC6A)) = 0x0;
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0x18) {
            break;
        }
    }
    (((struct o4_uchar *)0xC7FEC4C)->v) = 0xC0;
    (((struct o5_uchar *)0xC7FEC4C)->v) = 0xA0;
    return 0xC7FEC51;
}

int FUN_0c105fa4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)((a4 + 0xC));
    t1 = 0x0;
    for (;;) {
        t2 = FUN_0c114342((*(int *)((a4 + 0x4))));
        if ((int)t1 >= (int)t2) {
            break;
        }
        t2 = t1;
        t2 = (t2 << 2);
        t2 = (t2 + (a4 + 0xC));
        t2 = (*(int *)((t2 + 0x0)));
        t3 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t2 + 0x0))) + 0x18)))))(t2, 0x0, 0x4000, (((t1 << 2) << 1) + (a4 + 0x1C)));
        t1 = (t1 + 0x1);
    }
    *(unsigned int *)((a5 + 0x0)) = ((unsigned int)((*(int *)((a4 + 0x1C))) - (FUN_0c108b48(t0))) >> 1);
    t0 = *(int *)((a4 + 0x20));
    t1 = *(int *)((a4 + 0x38));
    t2 = t1;
    if ((int)((unsigned int)t0 >> 1) < (int)t1) {
        t2 = ((unsigned int)t0 >> 1);
    }
    *(unsigned int *)((a6 + 0x0)) = t2;
    if ((int)(*(int *)((a4 + 0x3C))) >= 0) {
        *(unsigned int *)((a7 + 0x0)) = ((*(int *)((a4 + 0x3C))) - ((((struct o40_int *)(a4))->v)));
    } else {
        *(unsigned int *)((a7 + 0x0)) = 0x1FFFFFFF;
    }
    return FUN_0c114334((*(int *)((a4 + 0x4))));
}

int FUN_0c0fc63c(int a4, int a5, int a6, int a7)
{
    register int t23;
    int t2;
    register int t4;
    register int t7;
    register int t9;
    register int t10;

    t23 = 0x4;
    if ((unsigned short)(*(int *)((a4 + 0x0))) == 3) {
    } else {
        t2 = *(int *)((a4 + 0x18));
        t4 = 0x0;
        if (((0x4 & t2) != 0) && (((0x1 & t2) != 0) && (((0x8 & t2) == 0) && ((0x20 & t2) == 0)))) {
            t4 = 0x4;
        }
        t7 = *(int *)((a4 + 0x14));
        t23 = 0xC;
        if ((unsigned int)(t4 + (a6 * (((a7 << 2) << 2) << 1))) >= (unsigned int)t7) {
        } else {
            t9 = *(int *)((a4 + 0x1C));
            t10 = (t7 - (t4 + (a6 * (((a7 << 2) << 2) << 1))));
            if ((unsigned int)(t7 - (t4 + (a6 * (((a7 << 2) << 2) << 1)))) > (unsigned int)(((a7 << 2) << 2) << 1)) {
                t10 = (((a7 << 2) << 2) << 1);
            }
            kmiCopyToFrameBuffer(((t4 + (a6 * (((a7 << 2) << 2) << 1))) + t9), a5, t10, (((a7 << 2) << 2) << 1));
            t23 = 0x0;
        }
    }
    return t23;
}

