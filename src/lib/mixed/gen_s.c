/* Straight-line functions with calls and guards (batch gen_s): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Unlock(void);
struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o100_uchar { char p[0x100]; unsigned char v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o3360_uchar { char p[0x3360]; unsigned char v; };
struct o35_uchar { char p[0x35]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o4540_uchar { char p[0x4540]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o7198_short { char p[0x7198]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71E0_float { char p[0x71E0]; float v; };
struct o7205_uchar { char p[0x7205]; unsigned char v; };
struct o720A_uchar { char p[0x720A]; unsigned char v; };
struct o7214_uchar { char p[0x7214]; unsigned char v; };
struct o721F_uchar { char p[0x721F]; unsigned char v; };
struct o7222_uchar { char p[0x7222]; unsigned char v; };
struct o7234_uchar { char p[0x7234]; unsigned char v; };
struct o7238_uchar { char p[0x7238]; unsigned char v; };
struct o7294_int { char p[0x7294]; int v; };
struct o729C_float { char p[0x729C]; float v; };
struct o72A8_int { char p[0x72A8]; int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };
int ADXCRS_Lock(void);
int vmu_get_vmgame_mask(void);
int vmu_step_load(void);
int vmu_step_load_vmgame(void);
int vmu_check_run_objects(int, int, int, int);
int vmu_menu_pad_pressed(int);
int conv_s16x4_to_f32_b(int, int);
int hit_find_part_entry(int, int, int, int);
int hit_get_sphere_entry(int, int, int);
int hit_get_cylinder_entry(int, int, int);
int hit_get_box_entry(int, int, int);
int FUN_0c026220(int, int, int);
int FUN_0c026334(int, int, int);
int ui_sprite_queue_add(int, int, int);
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
int obj_create(int, int, int);
int obj_destroy(int);
int part_pool0_init(void);
int part_pool1_init(void);
int part_pool2_init(void);
int item_init_hold_pose(int);
int fxslot_start(int, int, int, int, int, int, float);
int math_vec3_sub(int, int, int);
float math_vec3_length(int);
int FUN_0c06233a(int, int, int);
int FUN_0c0645ee(int);
int FUN_0c08dacc(int, int);
int FUN_0c097f3c(int);
int pl_reset_pose(int);
int pl_timer_disable(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_reset_combo_counter(int);
int hit_find_contact_direction(int);
int math_angle_between_points_xz(int, int);
int obj_set_record_char(int, int);
int pl_change_state(int, int, int);
int snd_play_side_se(int, int);
int FUN_0c0abd84(int);
int obj_can_interact(int, int, int);
int fx_spawn_03(int, int, int, float);
int dbg_print_at(int, float, float);
int cam_set_shake_ramp(int, int);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlCalcPoint44(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int _divls(void);
int _modls(void);
int _quick_odd_mvn(int, int);
int _slow_mvn(int);
int ADXF_ReadSj(int, int, int);
int FUN_0c1012f4(int, int, int);
int FUN_0c1025e0(int, int, int, int);
int FUN_0c1040be(int);
int FUN_0c1045b4(int);
int read_sys(int);
int read_fat(int);
int set_fat(int, int, int);
int get_fat(int, int, int, int);
int DECtoBCD(int);
int FUN_0c10735c(int);
int FUN_0c107482(int, int, int, int);
int FUN_0c107e7e(int);
int FUN_0c1082d4(int);
int FUN_0c108776(int, int, int);
int FUN_0c113958(int);
int FUN_0c1139b0(int);
int FUN_0c114ed2(int, int, int);
int FUN_0c1156c8(int, int, int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int);
int thunk_FUN_0c062242(int, int);
int pl_end_action_reset(int a4);
int ADXF_ReadNw(int a4, int a5, int a6, int a7);
int set_vmstime(int a4, int a5);
int FUN_0c107a36(int a4);
float FUN_0c02649a(int a4, int a5);
int check_cache(int a4);
int FUN_0c01ff6c(int a4);
int FUN_0c0229d8(int a4, int a5, int a6, int a7);
int fx_spawn_03d8b0(int a4, int a5);
int fmMngExecServer(void);
int FUN_0c027336(int a4, int a5);
int FUN_0c02bc0e(int a4, int a5, int a6, int a7);
int FUN_0c04add0(int a4, int a5, int a6);
int obj_system_init(void);
int FUN_0c063b38(int a4);
int FUN_0c08a928(int a4);
int pl_hitreact_calc_hit_side(int a4, int a5);
int fx_follow_owner_create(int a4, int a5);
int opt_game_settings_queue_row(int a4, int a5, int a6);
int ui_draw_element_sprite(int a4);
int FUN_0c023bf4(int a4, int a5);
int FUN_0c04cc5c(int a4);
int FUN_0c05e06e(int a4, float f4);
int FUN_0c05f0b8(int a4);
int FUN_0c05db76(int a4);
int ai_lookup_dir_sector(int a4, int a5);
int cam_init_records(void);
int nlProjectScreen(int a4, int a5);
int search_subst_fat_top(int a4);
int write_fat_1(int a4);
int FUN_0c10710e(int a4, int a5, int a6, int a7);
int FUN_0c115a52(void);
int FUN_0c01a928(int a4);
int FUN_0c01ad40(int a4);
int opt_game_settings_queue_cursor(int a4, int a5);
int FUN_0c0273c0(int a4, int a5);
int pl_ryoma_mode10_enter(int a4);
int pl_motion_length(int a4);
int FUN_0c0ce634(int a4, int a5, int a6);
int FUN_0c0ce6b0(int a4, int a5, int a6);
int FUN_0c0ce72c(int a4, int a5, int a6);
int math_tan_angle16(int a4, int a5, int a6, int a7);
int FUN_0c05c07a(int a4);
int FUN_0c06b8ee(int a4, int a5);
int FUN_0c08de3a(int a4, int a5);
int FUN_0c109d40(int a4, int a5);
int vmu_check_do_load(int a4, int a5, int a6, int a7);
int FUN_0c01dd6a(int a4, int a5, float f4);
int FUN_0c098026(int a4);

int ADXF_ReadNw(int a4, int a5, int a6, int a7)
{
    register int t35;
    register int t10;
    register int t15;

    t35 = 0xFFFFFFFD;
    if ((a4 != 0) && (((int)a5 >= 0) && (a6 != 0))) {
        t35 = 0x0;
        if ((*(signed char *)((a4 + 0x1))) == 2) {
        } else {
            t35 = 0xFFFFFFFF;
            if ((*(int *)((a4 + 0x8))) != 0) {
            } else {
                t10 = FUN_0c108776(a6, (((a5 << 8) << 2) << 1), 0x0);
                t35 = 0xFFFFFFFE;
                if (t10 == 0) {
                } else {
                    ADXCRS_Lock();
                    t35 = ADXF_ReadSj(a4, a5, t10);
                    if ((int)t35 <= 0) {
                        t15 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t10 + 0x0))) + 0xC)))))(t10, a5, a6, a7);
                    } else {
                        *(unsigned int *)((a4 + 0x8)) = t10;
                    }
                    ADXCRS_Unlock();
                }
            }
        }
    }
    return t35;
}

int FUN_0c107a36(int a4)
{
    int stk[6];
    register int t0;
    register int t2;
    register int t7;
    register int t9;
    register int t12;
    register int t15;
    register int t16;
    register int t13;
    register int t18;
    register int t19;

    t0 = *(int *)((a4 + 0x38));
    t2 = FUN_0c114ed2(((((struct o40_int *)(a4))->v)), 0x0, ((int)stk + 0));
    if (t2 != 0) {
        mwRnaErrCallFunc(0xC15B414);
    }
    t7 = *(int *)(((int)stk + 0));
    *(unsigned int *)((a4 + 0x38)) = ((((int)t7 >> 4) << 2) << 2);
    t9 = (((((int)t7 >> 4) << 2) << 2) - t0);
    if ((int)(((((int)t7 >> 4) << 2) << 2) - t0) < 0) {
        t9 = ((((((int)t7 >> 4) << 2) << 2) - t0) + (*(int *)((a4 + 0x30))));
    }
    t12 = *(int *)((a4 + 0x3C));
    t15 = (t12 - t9);
    t16 = t9;
    if ((int)(t12 - t9) < 0) {
        t13 = *(int *)((a4 + 0x34));
        *(unsigned char *)((a4 + 0x4)) = 0x1;
        t15 = 0x0;
        t16 = (t13 - t0);
    }
    t18 = FUN_0c1082d4(a4);
    if (t18 == 1) {
        t19 = FUN_0c107e7e(a4);
        if (t19 == 1) {
            *(unsigned int *)((a4 + 0x34)) = (*(int *)((a4 + 0x38)));
            *(unsigned char *)((a4 + 0x4)) = 0x0;
        }
    }
    *(unsigned int *)((a4 + 0x3C)) = t15;
    (((struct o50_uint *)(a4))->v) = (((((struct o50_int *)(a4))->v)) + t16);
    return 0x50;
}

int check_cache(int a4)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_2 = a4;
    *(unsigned int *)(((int)stk + 0)) = (v0_2 << 2);
    *(unsigned int *)(((v0_2 << 2) + 0xC80E608)) = 0x0;
    v0_0 = (0x1);
    v0_3 = (v0_2);
    v0_1 = (((v0_2 * 0x148) + 0xC80DBC8));
    if (((*(signed char *)((((v0_2 * 0x148) + 0xC80DBC8) + 0xA))) != 0)) goto L_C104E30;
    v0_4 = read_sys(v0_3);
    v0_2 = (v0_4);
    if (((int)v0_4 < 0)) goto L_C104E66;
    L_C104E30:;
    v0_2 = (int)(FUN_0c1040be(v0_3)) < 0;
    if (v0_2) goto L_C104E72;
    if (((*(signed char *)((v0_1 + 0xB))) != 0)) goto L_C104E48;
    v0_4 = read_fat(v0_3);
    v0_2 = (v0_4);
    if (((int)v0_4 < 0)) goto L_C104E58;
    L_C104E48:;
    if (((*(signed char *)((v0_1 + 0xC))) != 0)) goto L_C104E6A;
    v0_3 = FUN_0c1045b4(v0_3);
    v0_2 = (v0_3);
    if (((int)v0_3 >= 0)) goto L_C104E6A;
    L_C104E58:;
    if ((v0_2 != 0xFFFF0000)) goto L_C104E66;
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0xC80E608)) = v0_0;
    L_C104E72:;
    v0_0 = (0x0);
    L_C104E74:;
    return v0_0;
    L_C104E66:;
    v0_0 = (v0_2);
    goto L_C104E74;
    L_C104E6A:;
    *(unsigned char *)((v0_1 + 0xA)) = v0_0;
    *(unsigned char *)((v0_1 + 0xB)) = v0_0;
    *(unsigned char *)((v0_1 + 0xC)) = v0_0;
    goto L_C104E72;
}

int fmMngExecServer(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)0xC347704;
    t1 = 0x0;
    if (t0 == 0) {
    } else {
        t2 = *(int *)((t0 + 0x1C));
        switch (t2) {
        case 0:
            break;
        case 1:
            t2 = FUN_0c113958(t0);
            *(unsigned int *)(((*(int *)0xC347704) + 0x1C)) = 0x0;
            if (t2 != 0) {
                *(unsigned int *)(((*(int *)0xC347704) + 0x20)) = 0x3;
            } else {
                *(unsigned int *)(((*(int *)0xC347704) + 0x20)) = 0x1;
            }
            *(unsigned int *)(((*(int *)0xC347704) + 0x2C)) = t2;
            break;
        case 2:
            t2 = FUN_0c1139b0(t0);
            if (t2 != 1) {
                *(unsigned int *)(((*(int *)0xC347704) + 0x1C)) = 0x0;
                if (t2 != 0) {
                    *(unsigned int *)(((*(int *)0xC347704) + 0x20)) = 0x3;
                } else {
                    *(unsigned int *)(((*(int *)0xC347704) + 0x20)) = 0x1;
                }
                *(unsigned int *)(((*(int *)0xC347704) + 0x2C)) = t2;
            }
            break;
        default:
            *(unsigned int *)((t0 + 0x1C)) = 0x0;
            *(unsigned int *)(((*(int *)0xC347704) + 0x20)) = 0x0;
            break;
        }
        t1 = (*(int *)(((*(int *)0xC347704) + 0x20)));
    }
    return t1;
}

int nlProjectScreen(int a4, int a5)
{
    int stk[6];
    register float u3;
    register float u6;
    register float u11;
    register float u12;
    register float u17;
    register float u18;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    nlPushMatrix(0xC7FCEA8);
    nlCalcPoint44((*(int *)(((int)stk + 4))), (((int)stk + 0) + 0x8));
    u3 = *(float *)(((int)stk + 20));
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) * (1.0f / u3));
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) * (1.0f / u3));
    u6 = *(float *)0xC0E3164;
    u11 = (((*(float *)(((int)stk + 8))) + 1.0f) * ((((struct o0_float *)0xC346AC4)->v)));
    u12 = ((((struct oC_float *)0xC346AC4)->v));
    u12 = u12 + u6 * u11;
    *(float *)(((*(int *)(((int)stk + 0))) + 0x0)) = u12;
    u17 = (((-((((struct oC_float *)(((int)stk + 0)))->v))) + 1.0f) * ((((struct o4_float *)0xC346AC4)->v)));
    u18 = ((((struct o8_float *)0xC346AC4)->v));
    u18 = u18 + u6 * u17;
    (((struct o4_float *)((*(int *)(((int)stk + 0)))))->v) = u18;
    return (nlPopMatrix(0x1));
}

int search_subst_fat_top(int a4)
{

    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register int R9;
    register int R10;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_2 = a4;
    v0_0 = R10;
    v0_6 = R9;
    v0_7 = R8;
    v0_3 = *(int *)((((v0_2 * 0x148) + 0xC80DBC8) + 0x1C));
    v0_4 = *(int *)((v0_3 + 0x20));
    v0_5 = *(int *)((v0_3 + 0x1C));
    v0_1 = *(int *)((v0_3 + 0x10));
    R10 = (v0_2);
    v0_0 = (0xFFFC);
    v0_1 = (v0_1);
    v0_2 = (v0_3);
    R8 = (v0_5);
    R9 = (((v0_4 + v0_5) - 1));
    L_C104B80:;
    v0_3 = FUN_0c1025e0(R10, v0_0, R8, R9);
    v0_2 = (v0_3);
    if (((int)v0_3 >= 0)) goto L_C104B96;
    v0_0 = (0xFFFFFFFF);
    L_C104BC2:;
    return v0_0;
    L_C104B96:;
    v0_3 = (0x0);
    if (((int)v0_1 <= 0)) goto L_C104BB8;
    L_C104B9C:;
    v0_4 = (unsigned short)(get_fat(R10, (v0_2 - v0_3), R6, R7)) == v0_0;
    if (v0_4) goto L_C104BB2;
    R9 = (((v0_2 - v0_3) - 1));
    L_C104BB8:;
    if ((v0_3 != v0_1)) goto L_C104B80;
    v0_0 = (((v0_2 - v0_1) + 0x1));
    goto L_C104BC2;
    L_C104BB2:;
    v0_4 = (int)(v0_3 + 0x1) < (int)v0_1;
    v0_3 = ((v0_3 + 0x1));
    if (v0_4) goto L_C104B9C;
    goto L_C104BB8;
}

int write_fat_1(int a4)
{
    register int t1;
    register int t14;
    register int t2;
    register int t7;

    t1 = *(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x10));
    t14 = 0x0;
    if ((int)t1 > 0) {
        t2 = 0x0;
        for (;;) {
            t7 = FUN_0c1012f4(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0xC))) + t2), (((t2 << 8) << 1) + (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x24)))));
            if ((int)t7 < 0) {
                break;
            }
            set_fat(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0xC))) + t2), 0xFFFA);
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)t1) {
                return 0x0;
            }
        }
        set_fat(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0xC))) + t2), 0xFFFF);
        t14 = t7;
    }
    return t14;
}

int FUN_0c10710e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    for (;;) {
        if ((unsigned char)(*(signed char *)((0xC8150D4 + (short)((short)t0 * (short)0x8C)))) == 1) {
            FUN_0c107482(((short)((short)t0 * (short)0x8C) + 0xC8150D4), a5, a6, a7);
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        if ((unsigned char)(*(signed char *)((((short)((short)t0 * (short)0x8C) + 0xC8150D4) + 0x0))) == 1) {
            FUN_0c10735c(((short)((short)t0 * (short)0x8C) + 0xC8150D4));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    memset(0xC8150D4, 0x0, 0x460);
    t0 = memset(0xC815534, 0x0, 0x800);
    t1 = 0x0;
    t2 = 0xC815D34;
    for (;;) {
        *(unsigned int *)((t2 + 0x0)) = 0x80808080;
        t1 = (t1 + 0x1);
        t2 = (t2 + 0x4);
        if ((int)t1 >= (int)0x200) {
            break;
        }
    }
    return t0;
}

int FUN_0c115a52(void)
{
    register int t0;
    register int t10;

    t0 = 0x0;
    for (;;) {
        if ((*(int *)((((short)((short)t0 * (short)0x34) + 0xC857C8C) + 0x0))) != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x8) {
                break;
            }
            continue;
        }
        break;
    }
    if (t0 == 8) {
        t10 = 0x0;
    } else {
        memset(((short)((short)t0 * (short)0x34) + 0xC857C8C), 0x0, 0x34);
        *(unsigned int *)((((short)((short)t0 * (short)0x34) + 0xC857C8C) + 0x0)) = 0x1;
        *(unsigned int *)((((short)((short)t0 * (short)0x34) + 0xC857C8C) + 0x4)) = t0;
        *(unsigned int *)((((short)((short)t0 * (short)0x34) + 0xC857C8C) + 0x8)) = 0x0;
        *(unsigned int *)((((short)((short)t0 * (short)0x34) + 0xC857C8C) + 0xC)) = 0x0;
        FUN_0c1156c8(0x1F4, 0xAC44, (((short)((short)t0 * (short)0x34) + 0xC857C8C) + 0x30), ((((short)((short)t0 * (short)0x34) + 0xC857C8C) + 0x30) + 0x2));
        memset((((short)((short)t0 * (short)0x34) + 0xC857C8C) + 0x28), 0x0, 0x8);
        t10 = ((short)((short)t0 * (short)0x34) + 0xC857C8C);
    }
    return t10;
}

int FUN_0c109d40(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(int *)((a4 + 0xC));
    t2 = *(int *)((a4 + 0x10));
    if ((unsigned int)a5 <= (unsigned int)0x2B0) {
        if (((unsigned int)((0x800 + t1) & 0xFFFFF800) < (unsigned int)(t1 + t2)) && (t0 = *(int *)((a4 + 0xC)), (unsigned int)(((0x800 + t1) & 0xFFFFF800) - t0) < (unsigned int)a5)) {
            t0 = 0xFFFFFFFF;
            if ((unsigned int)((t1 + t2) - ((0x800 + t1) & 0xFFFFF800)) >= (unsigned int)a5) {
                t0 = ((0x800 + t1) & 0xFFFFF800);
            }
            t3 = t0;
        } else {
            t3 = (*(int *)((a4 + 0xC)));
        }
        t0 = t3;
    } else {
        if ((unsigned int)(((0x800 + t1) & 0xFFFFF800) - (*(int *)((a4 + 0xC)))) >= (unsigned int)0x2B0) {
            t3 = (((0x800 + t1) & 0xFFFFF800) - 688);
            if ((unsigned int)(((((0x800 + t1) & 0xFFFFF800) - (*(int *)((a4 + 0xC)))) + a5) - 688) > (unsigned int)(t1 + t2)) {
                t3 = 0xFFFFFFFF;
            }
            t0 = t3;
        } else {
            t3 = 0xFFFFFFFF;
            if ((unsigned int)((((((0x800 + t1) & 0xFFFFF800) + 0x800) - (*(int *)((a4 + 0xC)))) + a5) - 688) <= (unsigned int)(t1 + t2)) {
                t3 = ((((0x800 + t1) & 0xFFFFF800) + 0x800) - 688);
            }
            t0 = t3;
        }
    }
    return t0;
}

