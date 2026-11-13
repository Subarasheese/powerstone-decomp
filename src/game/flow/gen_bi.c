/* Straight-line functions with calls and guards (batch gen_bi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c085996(int);
struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o42_uchar { char p[0x42]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71E0_float { char p[0x71E0]; float v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o7219_uchar { char p[0x7219]; unsigned char v; };
struct o721C_uchar { char p[0x721C]; unsigned char v; };
struct o7248_short { char p[0x7248]; short v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o729C_float { char p[0x729C]; float v; };
struct o72BC_uint { char p[0x72BC]; unsigned int v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c044408(int, int);
int FUN_0c0624c4(int, int, int);
int FUN_0c0634b4(int);
int FUN_0c085606(int);
int FUN_0c09c782(int);
int FUN_0c09f2e2(int);
int FUN_0c09fe68(int, int, int);
int FUN_0c09feba(int, int, int);
int FUN_0c09ff0c(int, int, int);
int FUN_0c0a00e4(int);
int FUN_0c0a01ec(int, int, int);
int FUN_0c0a3762(int, int);
int FUN_0c0a3cb0(int, int);
int FUN_0c0a3f0e(int);
int bgm_play_demo_01(void);
int bgm_stop_all(void);
int cam_request_mode_01(int);
int cam_request_mode_03(int, int);
int cam_request_mode_04(int, int);
int cam_reset_shake(int, int, int, int);
int cam_reset_to_default(void);
int cam_set_priority(int, int);
int cam_set_shake_ramp(int, int);
int fx_spawn_0318e0(int, int);
int fx_spawn_033670(int);
int fx_spawn_036fe4(int, int);
int fx_spawn_0488b8(int, int, int, int);
int fx_spawn_0498c4(int);
int fx_spawn_14(int, int);
int fx_spawn_hit_effect(int, int, int, int);
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int game_poll_start_button(void);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_rand_float(void);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int obj_set_record_char(int, int);
int obj_spawn_037ab8(int);
int pl_angle_to_opponent(int);
int pl_angle_to_target_pos(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_apply_velocity(int);
int pl_change_state(int, int, int, int);
int pl_check_dual_button_input(int);
int pl_check_pickup_input(int, int, int);
int pl_check_power_form_attack_input(int, int, int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int pl_get_held_item_class(int, int, int);
int pl_is_airborne(int);
int pl_landed(int);
int pl_spawn_hit_effect_with_se(int, int, int, float, float);
int pl_start_fall_motion(int);
int pl_start_hit_freeze(int);
int pl_start_motion(int, int, int);
int pl_start_power_form_attack(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int pl_timer_arm_forever(int);
int pl_timer_disable(int);
int pl_try_dual_button_action(int, int, int);
int pl_try_start_basic_attack(int, int, int);
int snd_play_char_voice(int, int);
int snd_play_side_se(int, int);
int thunk_FUN_0c062242(int);
int ui_fade_start(int, int, int, int);
int FUN_0c052f0a(void);
int FUN_0c093df6(int a4);
int FUN_0c06cb36(int a4);
int FUN_0c06fc84(int a4);
int FUN_0c0700c4(int a4);
int FUN_0c0c3e24(int a4);
int FUN_0c086794(int a4);
int FUN_0c054b50(int a4, int a5, int a6, int a7, float f4);
int FUN_0c05cb5c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c07080e(int a4);
int FUN_0c070618(int a4);
int FUN_0c0858f0(int a4);

int FUN_0c052f0a(void)
{
    int stk[13];
    register int t0;
    register int t3;
    register int t4;
    register float t10;
    register float u13;
    register int t29;
    register int t31;
    register int t32;
    register int t33;
    register float t35;
    register float u38;
    register int t61;
    register int t62;
    register int t63;
    register float u71;
    register float t94;
    register float u97;
    register int t106;
    register int t108;
    register int t109;
    register int t111;
    register float t112;
    register float u115;
    register int t124;
    register int t125;
    register float t131;
    register float u134;
    register int t150;
    register int t152;
    register int t153;
    register int t154;
    register float t156;
    register float u159;
    register int t180;

    t0 = *(signed char *)0xC7F302E;
    if (t0 != 0) {
        if (t0 == 1) {
            *(unsigned char *)(((0x1 + ((unsigned short)((unsigned short)(*(short *)0xC7F303C) * (unsigned short)0x72D0) + 0xC7E40C4)) + 0x0)) = 0x1;
            *(unsigned char *)(((0x1 + ((unsigned short)((unsigned short)((-(*(short *)0xC7F303C)) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4)) + 0x0)) = 0x0;
            t3 = game_poll_start_button();
            if (t3 != 0) {
                (((struct o1_uchar *)0xC7F302D)->v) = 0x63;
                t180 = 0x63;
            } else {
                t4 = *(short *)0xC7F3036;
                *(unsigned short *)0xC7F3036 = (t4 - 1);
                t180 = (short)(t4 - 1);
                if ((int)(short)(t4 - 1) >= 0) {
                } else {
                    (((struct o1_uchar *)0xC7F302D)->v) = ((*(signed char *)0xC7F302E) + 0x1);
                    *(unsigned short *)0xC7F3036 = 0x78;
                    *(unsigned short *)0xC7F303C = (0x1 - (*(short *)0xC7F303C));
                    if ((*(signed char *)0xC7E40C8) == (*(signed char *)0xC7EB398)) {
                        *(unsigned short *)0xC7F303A = ((((*(short *)0xC7F303A) == 0)) ? 1 : 0);
                    } else {
                        t10 = math_rand_float();
                        u13 = (t10 * 255.0f);
                        if (!(2.14748365e+09f > (t10 * 255.0f))) {
                            u13 = (((t10 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                        }
                        *(unsigned short *)0xC7F303A = ((int)((unsigned int)(int)u13 % (unsigned int)0x2));
                    }
                    *(unsigned int *)(((int)stk + 4)) = 0xC7F3036;
                    pl_change_state(((unsigned short)((unsigned short)(*(short *)(((*(int *)(((int)stk + 4))) + 0x6))) * (unsigned short)0x72D0) + 0xC7E40C4), 0x16, (*(short *)0xC7F303A), 0x0);
                    pl_timer_arm_forever(((unsigned short)((unsigned short)(*(short *)0xC7F303C) * (unsigned short)0x72D0) + 0xC7E40C4));
                    *(unsigned int *)(((int)stk + 4)) = 0xC7F3036;
                    t29 = *(short *)0xC7F303C;
                    *(unsigned short *)(((int)stk + 8)) = t29;
                    t31 = *(signed char *)((((unsigned short)((unsigned short)t29 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4));
                    t32 = *(short *)(((*(int *)(((int)stk + 4))) + 0x4));
                    t33 = *(short *)(((int)stk + 8));
                    *(int *)((int)stk + 0) = ((0xC155458 + ((t31 << 2) << 2)) + ((t32 + (t33 << 1)) << 2));
                    t35 = math_rand_float();
                    u38 = (t35 * 255.0f);
                    if (!(2.14748365e+09f > (t35 * 255.0f))) {
                        u38 = (((t35 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                    }
                    cam_request_mode_01((*(signed char *)((((0xC155458 + ((t31 << 2) << 2)) + ((t32 + (t33 << 1)) << 2)) + ((int)((unsigned int)(int)u38 % (unsigned int)0x4))))));
                    *(unsigned char *)(((0x1 + ((unsigned short)((unsigned short)(*(short *)0xC7F303C) * (unsigned short)0x72D0) + 0xC7E40C4)) + 0x0)) = 0x1;
                    *(unsigned char *)(((0xC7E40C4 + (unsigned short)((unsigned short)((-(*(short *)0xC7F303C)) + 0x1) * (unsigned short)0x72D0)) + 0x1)) = 0x0;
                    t180 = 0x0;
                }
            }
        } else {
            if (t0 == 2) {
                *(unsigned char *)(((0x1 + ((unsigned short)((unsigned short)(*(short *)0xC7F303C) * (unsigned short)0x72D0) + 0xC7E40C4)) + 0x0)) = 0x1;
                *(unsigned char *)(((0xC7E40C4 + (unsigned short)((unsigned short)((-(*(short *)0xC7F303C)) + 0x1) * (unsigned short)0x72D0)) + 0x1)) = 0x0;
                t61 = game_poll_start_button();
                if (t61 != 0) {
                    (((struct o1_uchar *)0xC7F302D)->v) = 0x63;
                    t180 = 0x63;
                } else {
                    t62 = *(short *)0xC7F3036;
                    *(unsigned short *)0xC7F3036 = (t62 - 1);
                    t180 = (short)(t62 - 1);
                    if ((int)(short)(t62 - 1) < 0) {
                        t63 = *(signed char *)0xC7F302E;
                        (((struct o1_uchar *)0xC7F302D)->v) = (t63 + 0x1);
                        t180 = (t63 + 0x1);
                    }
                }
            } else {
                cam_reset_to_default();
                (((struct o0_uchar *)0xC7E40C5)->v) = 0x1;
                (((struct o0_uchar *)0xC7EB395)->v) = 0x1;
                pl_change_state(0xC7E40C4, 0x0, 0x0, 0x0);
                pl_change_state(0xC7EB394, 0x0, 0x0, 0x0);
                u71 = *(float *)0xC0532C0;
                *(float *)0xC7E40E8 = ((*(float *)0xC7E40E8) - u71);
                *(float *)0xC7EB3B8 = ((*(float *)0xC7EB3B8) - u71);
                *(unsigned int *)0xC7E40F4 = (pl_angle_to_opponent(0xC7E40C4));
                *(unsigned int *)0xC7EB3C4 = (pl_angle_to_opponent(0xC7EB394));
                pl_timer_disable(0xC7E40C4);
                pl_timer_disable(0xC7EB394);
                (((struct o0_uchar *)0xC7F302D)->v) = 0x63;
                (((struct o1_uchar *)0xC7F302D)->v) = 0x0;
                t180 = 0x0;
            }
        }
    } else {
        (((struct o1_uchar *)0xC7F302D)->v) = ((*(signed char *)0xC7F302E) + 0x1);
        *(unsigned short *)0xC7F3036 = 0x78;
        *(unsigned short *)0xC7F303C = 0x0;
        *(unsigned int *)0xC7E40F4 = ((*(int *)0xC7E40F4) - 0x4000);
        *(unsigned int *)0xC7EB3C4 = ((*(int *)0xC7EB3C4) + 0x4000);
        t94 = math_rand_float();
        u97 = (t94 * 255.0f);
        if (!(2.14748365e+09f > (t94 * 255.0f))) {
            u97 = (((t94 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        *(unsigned short *)0xC7F303A = ((int)((unsigned int)(int)u97 % (unsigned int)0x2));
        *(unsigned int *)(((int)stk + 4)) = 0xC7F3036;
        pl_change_state(((unsigned short)((unsigned short)(*(short *)(((*(int *)(((int)stk + 4))) + 0x6))) * (unsigned short)0x72D0) + 0xC7E40C4), 0x16, (*(short *)0xC7F303A), 0x0);
        pl_timer_arm_forever(((unsigned short)((unsigned short)(*(short *)0xC7F303C) * (unsigned short)0x72D0) + 0xC7E40C4));
        *(unsigned int *)(((int)stk + 8)) = 0xC7F3036;
        t106 = *(short *)0xC7F303C;
        *(unsigned short *)(((int)stk + 4)) = t106;
        t108 = *(short *)(((int)stk + 4));
        t109 = *(signed char *)((((unsigned short)((unsigned short)t106 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4));
        t111 = *(short *)(((*(int *)(((int)stk + 8))) + 0x4));
        *(int *)((int)stk + 0) = (((t111 + (t108 << 1)) << 2) + (0xC155458 + ((t109 << 2) << 2)));
        t112 = math_rand_float();
        u115 = (t112 * 255.0f);
        if (!(2.14748365e+09f > (t112 * 255.0f))) {
            u115 = (((t112 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        cam_request_mode_01((*(signed char *)(((((t111 + (t108 << 1)) << 2) + (0xC155458 + ((t109 << 2) << 2))) + ((int)((unsigned int)(int)u115 % (unsigned int)0x4))))));
        *(unsigned char *)(((0x1 + ((unsigned short)((unsigned short)(*(short *)0xC7F303C) * (unsigned short)0x72D0) + 0xC7E40C4)) + 0x0)) = 0x1;
        *(unsigned char *)(((0x1 + ((unsigned short)((unsigned short)((-(*(short *)0xC7F303C)) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4)) + 0x0)) = 0x0;
        *(unsigned char *)(((0x1 + ((unsigned short)((unsigned short)(*(short *)0xC7F303C) * (unsigned short)0x72D0) + 0xC7E40C4)) + 0x0)) = 0x1;
        *(unsigned char *)(((0x1 + ((unsigned short)((unsigned short)((-(*(short *)0xC7F303C)) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4)) + 0x0)) = 0x0;
        t124 = game_poll_start_button();
        if (t124 != 0) {
            (((struct o1_uchar *)0xC7F302D)->v) = 0x63;
            t180 = 0x63;
        } else {
            t125 = *(short *)0xC7F3036;
            *(unsigned short *)0xC7F3036 = (t125 - 1);
            t180 = (short)(t125 - 1);
            if ((int)(short)(t125 - 1) >= 0) {
            } else {
                (((struct o1_uchar *)0xC7F302D)->v) = ((*(signed char *)0xC7F302E) + 0x1);
                *(unsigned short *)0xC7F3036 = 0x78;
                *(unsigned short *)0xC7F303C = (0x1 - (*(short *)0xC7F303C));
                if ((*(signed char *)0xC7E40C8) == (*(signed char *)0xC7EB398)) {
                    *(unsigned short *)0xC7F303A = ((((*(short *)0xC7F303A) == 0)) ? 1 : 0);
                } else {
                    t131 = math_rand_float();
                    u134 = (t131 * 255.0f);
                    if (!(2.14748365e+09f > (t131 * 255.0f))) {
                        u134 = (((t131 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                    }
                    *(unsigned short *)0xC7F303A = ((int)((unsigned int)(int)u134 % (unsigned int)0x2));
                }
                *(unsigned int *)(((int)stk + 4)) = 0xC7F3036;
                pl_change_state(((unsigned short)((unsigned short)(*(short *)(((*(int *)(((int)stk + 4))) + 0x6))) * (unsigned short)0x72D0) + 0xC7E40C4), 0x16, (*(short *)0xC7F303A), 0x0);
                pl_timer_arm_forever(((unsigned short)((unsigned short)(*(short *)0xC7F303C) * (unsigned short)0x72D0) + 0xC7E40C4));
                *(unsigned int *)(((int)stk + 4)) = 0xC7F3036;
                t150 = *(short *)0xC7F303C;
                *(unsigned short *)(((int)stk + 8)) = t150;
                t152 = *(signed char *)((((unsigned short)((unsigned short)t150 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4));
                t153 = *(short *)(((*(int *)(((int)stk + 4))) + 0x4));
                t154 = *(short *)(((int)stk + 8));
                *(int *)((int)stk + 0) = ((0xC155458 + ((t152 << 2) << 2)) + ((t153 + (t154 << 1)) << 2));
                t156 = math_rand_float();
                u159 = (t156 * 255.0f);
                if (!(2.14748365e+09f > (t156 * 255.0f))) {
                    u159 = (((t156 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                }
                cam_request_mode_01((*(signed char *)((((0xC155458 + ((t152 << 2) << 2)) + ((t153 + (t154 << 1)) << 2)) + ((int)((unsigned int)(int)u159 % (unsigned int)0x4))))));
                *(unsigned char *)(((0x1 + ((unsigned short)((unsigned short)(*(short *)0xC7F303C) * (unsigned short)0x72D0) + 0xC7E40C4)) + 0x0)) = 0x1;
                *(unsigned char *)(((0xC7E40C4 + (unsigned short)((unsigned short)((-(*(short *)0xC7F303C)) + 0x1) * (unsigned short)0x72D0)) + 0x1)) = 0x0;
                t180 = 0x0;
            }
        }
    }
    return t180;
}

int FUN_0c093df6(int a4)
{
    int stk[4];

    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R9;
    register int R12;
    register float F2;
    register float F4;
    register float F5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_2 = a4;
    v0_0 = (v0_2);
    if (((*(signed char *)((v0_2 + 0x7236))) == 0)) goto L_C093E20;
    v0_1 = (signed char)(FUN_0c09c782(v0_0)) == 0;
    if (v0_1) goto L_C093E20;
    FUN_0c0634b4(v0_0);
    pl_start_fall_motion(v0_0);
    L_C093E20:;
    v0_1 = (0xC0A2E26);
    w0_0 = (0.0f);
    if ((!(0.0f > ((((struct o3C_float *)(v0_0))->v))))) goto L_C093E98;
    v0_1 = (signed char)(pl_landed(v0_0)) == 0;
    if (v0_1) goto L_C093E98;
    (((struct o721C_uchar *)(v0_0))->v) = 0x0;
    if (((*(signed char *)((v0_0 + 0x721B))) != 2)) goto L_C093E5C;
    if ((((((struct oEC_short *)(v0_0))->v)) != 0)) goto L_C093E5C;
    pl_spawn_hit_effect_with_se(v0_0, R5, R6, F4, F5);
    R5 = (0x1F);
    R6 = (0x1);
    L_C094066:;
    v0_1 = ((pl_change_state(v0_0, R5, R6, 0x0)));
    L_C094130:;
    return v0_1;
    L_C093E5C:;
    R5 = (0x6);
    R6 = (0x0);
    goto L_C094066;
    L_C093E98:;
    pl_apply_velocity(v0_0);
    pl_apply_acceleration(v0_0);
    pl_step_motion(v0_0);
    if (((*(signed char *)((v0_0 + 0x721B))) != 4)) goto L_C093EC6;
    if (((unsigned short)((((struct o719E_short *)(v0_0))->v)) != 1)) goto L_C093EC6;
    FUN_0c044408((*(signed char *)((v0_0 + 0x3))), 0x1);
    L_C093EC6:;
    FUN_0c09f2e2(v0_0);
    v0_1 = (signed char)(pl_check_dual_button_input(v0_0)) == 0;
    if (v0_1) goto L_C093F9C;
    v0_2 = pl_try_dual_button_action(v0_0, R5, R6);
    v0_1 = ((signed char)v0_2);
    if (((signed char)v0_2 == 0)) goto L_C093EE8;
    goto L_C094130;
    L_C093EE8:;
    v0_2 = FUN_0c09ff0c(v0_0, R5, R6);
    *(unsigned char *)(((int)stk + 0)) = v0_2;
    v0_1 = ((signed char)v0_2);
    if (((signed char)v0_2 == 0)) goto L_C093F08;
    R5 = (0x24);
    if (((signed char)v0_1 != 1)) goto L_C093F02;
    R6 = (0x0);
    L_C093F04:;
    goto L_C094066;
    L_C093F02:;
    R6 = (0x2);
    goto L_C093F04;
    L_C093F08:;
    v0_1 = (signed char)(FUN_0c0a00e4(v0_0)) == 0;
    if (v0_1) goto L_C093F1A;
    R5 = (0x27);
    R6 = (0x0);
    goto L_C094066;
    L_C093F1A:;
    v0_1 = (signed char)(FUN_0c09fe68(v0_0, R5, R6)) == 0;
    if (v0_1) goto L_C093F2C;
    R5 = (0x22);
    R6 = (0x0);
    goto L_C094066;
    L_C093F2C:;
    v0_1 = (signed char)(FUN_0c09feba(v0_0, R5, R6)) == 0;
    if (v0_1) goto L_C093F3E;
    R5 = (0x1A);
    R6 = (0x0);
    goto L_C094066;
    L_C093F3E:;
    v0_1 = (signed char)(FUN_0c0a01ec(v0_0, R5, R6)) == 0;
    if (v0_1) goto L_C093F50;
    R5 = (0x29);
    R6 = (0x0);
    goto L_C094066;
    L_C093F50:;
    v0_1 = (signed char)(pl_is_airborne(v0_0)) == 0;
    if (v0_1) goto L_C093F9C;
    R5 = (0xA);
    R6 = (0x4);
    goto L_C094066;
    L_C093F9C:;
    v0_1 = (signed char)(pl_check_power_form_attack_input(v0_0, R5, R6)) == 0;
    if (v0_1) goto L_C093FB8;
    v0_2 = pl_start_power_form_attack(v0_0, R5, R6);
    v0_1 = ((signed char)v0_2);
    if (((signed char)v0_2 == 0)) goto L_C093FB8;
    goto L_C094130;
    L_C093FB8:;
    v0_1 = pl_check_pickup_input(v0_0, R5, R6);
    R6 = (v0_1);
    if (((signed char)v0_1 == 0)) goto L_C093FCA;
    R5 = (0x26);
    goto L_C094066;
    L_C093FCA:;
    v0_2 = (v0_0);
    if (((((((struct o2DC_int *)(v0_0))->v)) & 240) != 0)) goto L_C093FDC;
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) + 0x1);
    L_C093FDC:;
    v0_1 = (signed char)(pl_try_start_basic_attack(v0_2, R5, R6)) == 0;
    if (v0_1) goto L_C094090;
    if (((*(signed char *)((v0_0 + 0x721E))) != 1)) goto L_C094062;
    v0_1 = pl_get_held_item_class(v0_0, R5, R6);
    v0_3 = ((signed char)v0_1);
    v0_2 = (v0_1);
    if (((signed char)v0_1 != 0)) goto L_C094010;
    if (((((((struct o24_float *)(v0_0))->v)) - ((((struct o71E0_float *)(v0_0))->v))) > 100.0f)) goto L_C094062;
    L_C094010:;
    if (((((((struct o24_float *)(v0_0))->v)) - ((((struct o2D4_float *)(v0_0))->v))) > 100.0f)) goto L_C094062;
    if ((v0_3 == 5)) goto L_C09403A;
    if ((v0_3 == 6)) goto L_C09403A;
    if (!((v0_3 != 7))) goto L_C09403A;
    if ((v0_3 == 0)) goto L_C094090;
    goto L_C094062;
    L_C09403A:;
    w0_0 = (((struct o24_float *)(v0_0))->v);
    F4 = (100.0f);
    F5 = (w0_0);
    if (((w0_0 - ((((struct o71E0_float *)(v0_0))->v))) > 100.0f)) goto L_C094062;
    if ((!((F5 - ((((struct o2D4_float *)(v0_0))->v))) > F4))) goto L_C094090;
    L_C094062:;
    R5 = (0xA);
    R6 = (0x1);
    goto L_C094066;
    L_C094090:;
    v0_2 = pl_get_held_item_class(v0_0, R5, R6);
    v0_1 = ((signed char)v0_2);
    if (((signed char)v0_2 != 0)) goto L_C094130;
    v0_1 = *(signed char *)((v0_0 + 0x4));
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C0940AC;
    v0_1 = (v0_2);
    if ((v0_2 != 6)) goto L_C094130;
    L_C0940AC:;
    w0_1 = *(float *)0xC094198;
    w0_0 = (w0_1);
    if (((((((struct o24_float *)(v0_0))->v)) - ((((struct o71E0_float *)(v0_0))->v))) > w0_1)) goto L_C0940CC;
    w0_1 = (((struct o2D4_float *)(v0_0))->v);
    w0_2 = (((struct o24_float *)(v0_0))->v);
    v0_1 = (0x24);
    w0_3 = ((w0_2 - w0_1));
    if ((!((w0_2 - w0_1) > w0_0))) goto L_C094130;
    L_C0940CC:;
    v0_1 = (0x7219);
    if (((*(signed char *)((v0_0 + 0x7219))) != 0)) goto L_C094130;
    v0_2 = (((struct o2E4_int *)(v0_0))->v);
    v0_1 = (v0_2);
    if (((v0_2 & 4) == 0)) goto L_C094130;
    pl_start_motion(v0_0, 0x3, 0x10);
    (((struct o71A9_uchar *)(v0_0))->v) = 0x1;
    (((struct o71A8_uchar *)(v0_0))->v) = 0x1;
    (((struct oEC_ushort *)(v0_0))->v) = 0x4;
    (((struct o7219_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x7219))) + 0x1);
    (((struct o729C_float *)(v0_0))->v) = 0.0f;
    *(unsigned char *)((v0_0 + 0xA)) = 0x1;
    FUN_0c0a3cb0((*(signed char *)((v0_0 + 0x3))), 0x1);
    v0_2 = *(signed char *)((v0_0 + 0x4));
    v0_1 = (v0_2);
    if ((v0_2 != 0)) goto L_C094130;
    v0_1 = (0x71F1);
    if (((*(signed char *)((v0_0 + 0x71F1))) == 0)) goto L_C094130;
    return fx_spawn_0318e0(v0_0, 0x2);
}

int FUN_0c06cb36(int a4)
{
    int stk[16];
    register int t12;
    register int t14;
    register int t29;
    register int t44;
    register int t101;
    register int t122;
    register int t160;
    register int t138;
    register int t139;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    if (((((struct oEC_short *)(a4))->v)) != (*(int *)(((((((((struct oEE_short *)(a4))->v)) << 2) << 1) + 0xC336DA8) + 0x0)))) {
    } else {
        t12 = *(int *)(((((((((struct oEE_short *)(a4))->v)) << 2) << 1) + 0xC336DA8) + 0x4));
        switch (t12) {
        case 0:
            t44 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
            *(unsigned int *)(((int)stk + 16)) = ((unsigned short)((unsigned short)t44 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t44 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t44 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0));
            FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x7);
            snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x7);
            snd_play_char_voice(a4, 0x3);
            break;
        case 1:
            t29 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
            *(unsigned int *)(((int)stk + 16)) = ((unsigned short)((unsigned short)t29 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242(((((unsigned short)((unsigned short)t29 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t29 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
            FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x7);
            snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x7);
            snd_play_char_voice(a4, 0x3);
            break;
        case 2:
            t14 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
            *(unsigned int *)(((int)stk + 16)) = ((unsigned short)((unsigned short)t14 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t14 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t14 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
            FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x7);
            snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x7);
            snd_play_char_voice(a4, 0x3);
            break;
        }
        fx_spawn_hit_effect((((int)stk + 16) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x5);
        obj_set_owner_hit_record(a4, 0x34);
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
    }
    if (((((struct oEC_short *)(a4))->v)) != 41) {
        if (((((struct oEC_short *)(a4))->v)) == 69) {
            snd_play_char_voice((*(int *)((a4 + 0x1C))), 0xB);
        } else {
            if (((((struct oEC_short *)(a4))->v)) == 96) {
                snd_play_char_voice((*(int *)((a4 + 0x1C))), 0xA);
            }
        }
    } else {
        snd_play_char_voice((*(int *)((a4 + 0x1C))), 0xA);
    }
    if (((((struct oEC_short *)(a4))->v)) == 0x8A) {
        obj_set_owner_hit_record(a4, 0x35);
        obj_force_owner_state27(a4, 0x35);
        t101 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
        *(unsigned int *)(((int)stk + 16)) = ((unsigned short)((unsigned short)t101 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t101 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t101 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
        fx_spawn_hit_effect((((int)stk + 16) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x5);
        if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
            (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
        }
        FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0xA);
    }
    if (((((struct oEC_short *)(a4))->v)) == 1) {
        t122 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 16)) = ((unsigned short)((unsigned short)t122 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t122 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t122 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840));
        fx_spawn_hit_effect((((int)stk + 16) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1);
        FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x0);
    }
    if (((((struct oEC_short *)(a4))->v)) == 36) {
        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
            *(int *)((int)stk + 12) = 0xC14EECC;
            *(int *)((int)stk + 8) = 0xC14EEC0;
            *(int *)((int)stk + 4) = 0x42;
            *(int *)((int)stk + 0) = 0x7C;
            t138 = 0xC14EECC;
            t139 = 0xC14EEC0;
        } else {
            *(int *)((int)stk + 12) = 0xC14EEE4;
            *(int *)((int)stk + 8) = 0xC14EED8;
            *(int *)((int)stk + 4) = 0x42;
            *(int *)((int)stk + 0) = 0x7C;
            t138 = 0xC14EEE4;
            t139 = 0xC14EED8;
        }
        fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x1, 0x5, 0x1, 0x7C, 0x42, t139, t138);
    }
    if (((((struct oEC_short *)(a4))->v)) == 10) {
        fx_spawn_033670(a4);
    }
    t160 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t160 = 0x71A8;
    }
    return t160;
}

int FUN_0c06fc84(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;

    (((struct o2D9_uchar *)(a4))->v) = 0x2;
    (((struct o107_uchar *)(a4))->v) = 0x1;
    u0 = math_rand_float();
    u1 = (u0 * 255.0f);
    if (!(2.14748365e+09f > (u0 * 255.0f))) {
        u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
    }
    t0 = (int)((unsigned int)(int)u1 % (unsigned int)0xB4);
    u0 = (float)(t0 - 90);
    if ((int)(t0 - 90) < 0) {
        u0 = ((float)(t0 - 90) + 4.2949673e+09f);
    }
    *(unsigned int *)((a4 + 0x2C)) = (int)((u0 * 65536.0f) / 360.0f);
    u0 = math_rand_float();
    u1 = (u0 * 255.0f);
    if (!(2.14748365e+09f > (u0 * 255.0f))) {
        u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
    }
    t0 = (int)((unsigned int)(int)u1 % (unsigned int)0x5A);
    u0 = (float)(t0 - 45);
    if ((int)(t0 - 45) < 0) {
        u0 = ((float)(t0 - 45) + 4.2949673e+09f);
    }
    *(unsigned int *)((a4 + 0x30)) = ((int)((u0 * 65536.0f) / 360.0f) + (*(int *)((a4 + 0x30))));
    u0 = math_rand_float();
    u1 = (u0 * 255.0f);
    if (!(2.14748365e+09f > (u0 * 255.0f))) {
        u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
    }
    t0 = (int)((unsigned int)(int)u1 % (unsigned int)0x64);
    u0 = (float)t0;
    if ((int)t0 < 0) {
        u0 = ((float)t0 + 4.2949673e+09f);
    }
    u1 = (((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v);
    u2 = ((u0 + 200.0f) * (math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
    u3 = u1;
    u3 = u3 + (math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * u2;
    (((struct o20_float *)(a4))->v) = u3;
    u1 = ((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v));
    u1 = u1 + (math_cos_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))) * ((u0 + 200.0f));
    (((struct o24_float *)(a4))->v) = u1;
    u1 = (((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v);
    u2 = ((u0 + 200.0f) * (math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
    u0 = u1;
    u0 = u0 + (math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * u2;
    (((struct o28_float *)(a4))->v) = u0;
    if (((((struct oEE_short *)(a4))->v)) == 9) {
        t0 = *(int *)((a4 + 0x1C));
        u0 = (((((struct o24_float *)(t0))->v)) - ((((struct o24_float *)(a4))->v)));
        u1 = (((((struct o28_float *)(t0))->v)) - ((((struct o28_float *)(a4))->v)));
        u2 = (((((struct o20_float *)(t0))->v)) - ((((struct o20_float *)(a4))->v)));
    } else {
        t0 = *(int *)((a4 + 0x1C));
        u3 = (((struct o20_float *)(t0))->v);
        u4 = (((struct o20_float *)(a4))->v);
        u5 = (((struct o24_float *)(t0))->v);
        u6 = (((struct o24_float *)(a4))->v);
        u7 = math_rand_float();
        u8 = (u7 * 255.0f);
        if (!(2.14748365e+09f > (u7 * 255.0f))) {
            u8 = (((u7 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t0 = (int)((unsigned int)(int)u8 % (unsigned int)0x96);
        u7 = (float)t0;
        if ((int)t0 < 0) {
            u7 = ((float)t0 + 4.2949673e+09f);
        }
        u0 = (((u5 - u6) + u7) + -75.0f);
        u1 = (((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o28_float *)(a4))->v)));
        u2 = (u3 - u4);
    }
    u3 = u2;
    if (u2 == 0.0f) {
        u3 = 9.99999997e-07f;
    }
    u2 = u0;
    if (u0 == 0.0f) {
        u2 = 9.99999997e-07f;
    }
    u0 = u1;
    if (u1 == 0.0f) {
        u0 = 9.99999997e-07f;
    }
    t0 = math_atan_angle16(((-u0) / u3));
    t1 = t0;
    if (0.0f > u3) {
        t1 = (t0 + 0x8000);
    }
    u1 = (u0 * u0);
    u1 = u1 + u3 * u3;
    *(unsigned int *)((a4 + 0x30)) = (unsigned short)(t1 + 0x4000);
    u0 = math_signed_sqrt(u1);
    t0 = math_atan_angle16(((-u0) / u2));
    t1 = t0;
    if (0.0f > u2) {
        t1 = (t0 + 0x8000);
    }
    *(unsigned int *)((a4 + 0x2C)) = (-(unsigned short)(t1 + 0x4000));
    u0 = math_sin_angle16(((-(-(unsigned short)(t1 + 0x4000))) + 0x14000));
    u1 = (u0 * (math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))));
    (((struct o38_float *)(a4))->v) = (u1 * 50.0f);
    (((struct o3C_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))) * 50.0f);
    u0 = math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000));
    u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))));
    (((struct o40_float *)(a4))->v) = (u1 * 50.0f);
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    pl_start_motion(a4, 0x1, 0x6D);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0xB)) = 0x4;
    return 0x4;
}

int FUN_0c0700c4(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    (((struct o2D9_uchar *)(a4))->v) = 0x2;
    (((struct o107_uchar *)(a4))->v) = 0x1;
    t0 = *(int *)((a4 + 0x1C));
    u0 = (((struct o0_float *)0xC7F2AB4)->v);
    u1 = (((struct o20_float *)(t0))->v);
    u2 = (((struct o24_float *)(t0))->v);
    u3 = (((struct o4_float *)0xC7F2AB4)->v);
    u4 = (((struct o28_float *)(t0))->v);
    u5 = (((struct o8_float *)0xC7F2AB4)->v);
    u6 = ((u0 - u1) + -0.0f);
    if (((u0 - u1) + -0.0f) == 0.0f) {
        u6 = 9.99999997e-07f;
    }
    u0 = ((u3 - u2) + -120.0f);
    if (((u3 - u2) + -120.0f) == 0.0f) {
        u0 = 9.99999997e-07f;
    }
    u1 = ((u5 - u4) + -0.0f);
    if (((u5 - u4) + -0.0f) == 0.0f) {
        u1 = 9.99999997e-07f;
    }
    t0 = math_atan_angle16(((-u1) / u6));
    t1 = t0;
    if (0.0f > u6) {
        t1 = (t0 + 0x8000);
    }
    u2 = (u1 * u1);
    u2 = u2 + u6 * u6;
    *(unsigned int *)((a4 + 0x30)) = (unsigned short)(t1 + 0x4000);
    u1 = math_signed_sqrt(u2);
    t0 = math_atan_angle16(((-u1) / u0));
    t1 = t0;
    if (0.0f > u0) {
        t1 = (t0 + 0x8000);
    }
    *(unsigned int *)((a4 + 0x2C)) = (-(unsigned short)(t1 + 0x4000));
    u0 = math_rand_float();
    u1 = (u0 * 255.0f);
    if (!(2.14748365e+09f > (u0 * 255.0f))) {
        u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
    }
    t0 = (int)((unsigned int)(int)u1 % (unsigned int)0x5);
    switch (t0) {
    case 0:
        break;
    case 1:
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x2000);
        break;
    case 2:
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 8192);
        break;
    case 3:
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x6000);
        break;
    case 4:
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 24576);
        break;
    }
    u0 = (((struct o0_float *)0xC070364)->v);
    u1 = math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000));
    u2 = (u1 * (math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))));
    (((struct o38_float *)(a4))->v) = (u2 * u0);
    (((struct o3C_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))) * u0);
    u1 = math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000));
    u2 = (u1 * (math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))));
    (((struct o40_float *)(a4))->v) = (u2 * u0);
    u0 = (((struct o10_float *)0xC070364)->v);
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((((struct o38_float *)(a4))->v)) * u0)));
    u1 = ((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v));
    u1 = u1 + u0 * ((((struct o3C_float *)(a4))->v));
    (((struct o24_float *)(a4))->v) = u1;
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((((struct o40_float *)(a4))->v)) * u0)));
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    obj_spawn_037ab8(a4);
    fx_spawn_036fe4(a4, 0x0);
    fx_spawn_036fe4(a4, 0x1);
    fx_spawn_036fe4(a4, 0x2);
    fx_spawn_036fe4(a4, 0x3);
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x4))) != 10) {
        cam_request_mode_03(0x1E, (*(signed char *)((a4 + 0x3))));
    }
    pl_start_motion(a4, 0x1, 0x6E);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0xB)) = 0x6;
    return 0x6;
}

int FUN_0c0c3e24(int a4)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0xC));
    v0_1 = (v0_3);
    v0_2 = ((*(int *)((v0_0 + 0x1C))));
    v0_0 = (v0_0);
    if ((v0_3 == 0)) goto L_C0C3E4A;
    if ((v0_1 == 1)) goto L_C0C3E5E;
    if ((v0_1 != 2)) goto L_C0C3E46;
    w0_1 = (((struct o50_float *)(v0_0))->v);
    (((struct o50_float *)(v0_0))->v) = (w0_1 + 0.099999994f);
    v0_1 = (0x50);
    w0_0 = (1.0f);
    FPUL_ = (0x3DCCCCCC);
    if ((!((w0_1 + 0.099999994f) > 1.0f))) goto L_C0C401E;
    *(float *)((v0_0 + v0_1)) = w0_0;
    L_C0C401E:;
    w0_0 = *(float *)((v0_0 + v0_1));
    (((struct o58_float *)(v0_0))->v) = w0_0;
    (((struct o54_float *)(v0_0))->v) = w0_0;
    if (((*(signed char *)((v0_0 + 0x2D8))) == 0)) goto L_C0C4038;
    v0_1 = *(signed char *)((v0_0 + 0xC));
    *(unsigned char *)((v0_0 + 0xC)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    L_C0C405C:;
    return v0_1;
    L_C0C4038:;
    (((struct o3C_float *)(v0_0))->v) = (((((struct o3C_float *)(v0_0))->v)) + ((((struct o48_float *)(v0_0))->v)));
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + ((((struct o3C_float *)(v0_0))->v)));
    v0_1 = (0x24);
    goto L_C0C405C;
    L_C0C3E46:;
    (((struct o105_uchar *)(v0_0))->v) = 0x1;
    v0_1 = (0x105);
    goto L_C0C405C;
    L_C0C3E5E:;
    (((struct oF2_ushort *)(v0_0))->v) = (((((struct oF2_short *)(v0_0))->v)) + 0x1);
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + 0.099999994f);
    v0_1 = (0x50);
    w0_0 = (2.0f);
    FPUL_ = (0x3DCCCCCC);
    if ((!(((((struct o50_float *)(v0_0))->v)) > 2.0f))) goto L_C0C3E82;
    *(float *)((v0_0 + v0_1)) = w0_0;
    L_C0C3E82:;
    if ((((((struct oF2_short *)(v0_0))->v)) != 31)) goto L_C0C3ECE;
    *(unsigned char *)((v0_0 + 0xC)) = ((*(signed char *)((v0_0 + 0xC))) + 0x1);
    (((struct o40_float *)(v0_0))->v) = 0.0f;
    (((struct o38_float *)(v0_0))->v) = 0.0f;
    (((struct o4C_float *)(v0_0))->v) = 0.0f;
    (((struct o44_float *)(v0_0))->v) = 0.0f;
    (((struct o3C_float *)(v0_0))->v) = -10.0f;
    (((struct o48_float *)(v0_0))->v) = -5.0f;
    cam_set_shake_ramp(0x3C, 0x3C);
    (((struct o105_uchar *)(v0_0))->v) = 0x0;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + 4.0f);
    FPUL_ = (0x40800000);
    L_C0C3ECE:;
    w0_0 = (((struct o50_float *)(v0_0))->v);
    (((struct o58_float *)(v0_0))->v) = w0_0;
    (((struct o54_float *)(v0_0))->v) = w0_0;
    v0_1 = (0xC7E40C4);
    if (((int)((((struct oF2_short *)(v0_0))->v)) >= (int)0x10)) goto L_C0C3FBC;
    v0_3 = *(signed char *)((v0_2 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)v0_3 * (unsigned short)0x72D0) + v0_1);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)v0_3 * (unsigned short)0x72D0) + v0_1) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_3 * (unsigned short)0x72D0) + v0_1) + 0x71F1))) * (short)0xDC0)) + 0x840));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x38)) = *(struct mv3 *)((v0_2 + 0x20)); }
    (((struct o3C_float *)(v0_0))->v) = ((*(float *)(((int)stk + 8))) + 20.0f);
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) + ((((((struct o38_float *)(v0_0))->v)) - ((((struct o20_float *)(v0_0))->v))) / 5.0f));
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + ((((((struct o3C_float *)(v0_0))->v)) - ((((struct o24_float *)(v0_0))->v))) / 5.0f));
    w0_0 = (((struct o28_float *)(v0_0))->v);
    w0_1 = (((struct o40_float *)(v0_0))->v);
    v0_1 = (0x28);
    w0_2 = (((w0_1 - w0_0) / 5.0f));
    w0_0 = ((((((struct o28_float *)(v0_0))->v)) + ((w0_1 - w0_0) / 5.0f)));
    L_C0C4004:;
    *(float *)((v0_0 + v0_1)) = w0_0;
    goto L_C0C405C;
    L_C0C3FBC:;
    v0_3 = *(signed char *)((v0_2 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)v0_3 * (unsigned short)0x72D0) + v0_1);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)v0_3 * (unsigned short)0x72D0) + v0_1) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_3 * (unsigned short)0x72D0) + v0_1) + 0x71F1))) * (short)0xDC0)) + 0x840));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x20)) = *(struct mv3 *)((v0_2 + 0x20)); }
    v0_1 = (0x24);
    w0_0 = (((*(float *)(((int)stk + 8))) + (*(float *)0xC0C40B4)));
    goto L_C0C4004;
    L_C0C3E4A:;
    *(unsigned char *)((v0_0 + 0xC)) = ((*(signed char *)((v0_0 + 0xC))) + 0x1);
    (((struct oF2_ushort *)(v0_0))->v) = 0x0;
    obj_set_record_char(v0_0, 0x7C);
    goto L_C0C3E5E;
}

int FUN_0c086794(int a4)
{
    int stk[13];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_1 = a4;
    pl_step_motion(v0_1);
    pl_apply_motion_translation(v0_1);
    v0_0 = (v0_1);
    if ((((((struct oEC_short *)(v0_1))->v)) != 0)) goto L_C0867C8;
    pl_step_motion_owner((*(int *)((v0_0 + 0x1C))));
    pl_apply_motion_translation((*(int *)((v0_0 + 0x1C))));
    L_C0867C8:;
    v0_1 = (0xC08EBA8);
    if (((*(signed char *)(((*(int *)((v0_0 + 0x1C))) + 0x71AA))) == 0)) goto L_C0867EE;
    v0_4 = (0xEC);
    if ((((((struct oEC_short *)(v0_0))->v)) != 0)) goto L_C0867EE;
    *(unsigned short *)((v0_0 + v0_4)) = 0x1;
    obj_set_owner_hit_record(v0_0, 0x30);
    obj_force_owner_state27(v0_0, 0x30);
    L_C0867EE:;
    v0_5 = (((struct o719E_short *)(v0_0))->v);
    v0_4 = ((unsigned short)v0_5);
    v0_1 = (0x2C0);
    v0_3 = (0xC7E40C4);
    v0_2 = (0xC7E40C4);
    v0_6 = (0xC0CCF32);
    v0_6 = (0xC0A3914);
    if (((unsigned short)v0_5 == 1)) goto L_C08682E;
    if ((v0_4 == 24)) goto L_C08688C;
    if ((v0_4 == 35)) goto L_C086892;
    if ((v0_4 == 42)) goto L_C086892;
    if ((v0_4 == 52)) goto L_C08688C;
    if ((v0_4 == 62)) goto L_C0868CA;
    if ((v0_4 == 72)) goto L_C086892;
    if ((v0_4 == 82)) goto L_C086892;
    if ((v0_4 == 93)) goto L_C086906;
    if ((v0_4 != 113)) goto L_C08682A;
    v0_1 = *(signed char *)((v0_0 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)v0_1 * (unsigned short)0x72D0) + v0_3);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)v0_1 * (unsigned short)0x72D0) + v0_3) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_1 * (unsigned short)0x72D0) + v0_3) + 0x71F1))) * (short)0xDC0)) + 0xA50));
    fx_spawn_hit_effect((((int)stk + 0) + 0x4), (v0_0 + 0x2C), (*(signed char *)((v0_0 + 0x3))), 0x1);
    R5 = (0x3);
    L_C086994:;
    FUN_0c0a3762(((-(*(signed char *)((v0_0 + 0x3)))) + 0x1), R5);
    L_C0869A0:;
    v0_4 = (0x71AA);
    if (((*(signed char *)((v0_0 + 0x71AA))) == 0)) goto L_C0869B8;
    pl_end_action_choose_state(v0_0, R5, R6, R7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    (((struct o71A9_uchar *)(v0_0))->v) = 0x1;
    (((struct o71A8_uchar *)(v0_0))->v) = 0x1;
    v0_4 = (0x71A8);
    L_C0869B8:;
    return v0_4;
    L_C08682A:;
    goto L_C0869A0;
    L_C086906:;
    snd_play_char_voice((*(int *)((v0_0 + 0x1C))), 0xA);
    obj_set_owner_hit_record(v0_0, 0x37);
    v0_3 = *(signed char *)(((*(int *)((v0_0 + 0x1C))) + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)v0_3 * (unsigned short)0x72D0) + v0_2);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)v0_3 * (unsigned short)0x72D0) + v0_2) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_3 * (unsigned short)0x72D0) + v0_2) + 0x71F1))) * (short)0xDC0)) + v0_1));
    L_C08693E:;
    fx_spawn_hit_effect((((int)stk + 0) + 0x4), (v0_0 + 0x2C), (*(signed char *)((v0_0 + 0x3))), 0x1);
    R5 = (0x0);
    goto L_C086994;
    L_C086892:;
    obj_set_owner_hit_record(v0_0, 0x37);
    v0_3 = *(signed char *)(((*(int *)((v0_0 + 0x1C))) + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)v0_3 * (unsigned short)0x72D0) + v0_2);
    v0_1 = ((((((unsigned short)((unsigned short)v0_3 * (unsigned short)0x72D0) + v0_2) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_3 * (unsigned short)0x72D0) + v0_2) + 0x71F1))) * (short)0xDC0)) + v0_1));
    R5 = ((((int)stk + 0) + 0x4));
    L_C0868C2:;
    thunk_FUN_0c062242(v0_1);
    goto L_C08693E;
    L_C0868CA:;
    snd_play_char_voice((*(int *)((v0_0 + 0x1C))), 0xB);
    obj_set_owner_hit_record(v0_0, 0x37);
    v0_3 = *(signed char *)(((*(int *)((v0_0 + 0x1C))) + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)v0_3 * (unsigned short)0x72D0) + v0_2);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)v0_3 * (unsigned short)0x72D0) + v0_2) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_3 * (unsigned short)0x72D0) + v0_2) + 0x71F1))) * (short)0xDC0)) + v0_1));
    goto L_C08693E;
    L_C08688C:;
    snd_play_char_voice((*(int *)((v0_0 + 0x1C))), 0xA);
    goto L_C086892;
    L_C08682E:;
    v0_1 = *(signed char *)((v0_0 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)v0_1 * (unsigned short)0x72D0) + v0_3);
    v0_1 = ((((((unsigned short)((unsigned short)v0_1 * (unsigned short)0x72D0) + v0_3) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_1 * (unsigned short)0x72D0) + v0_3) + 0x71F1))) * (short)0xDC0)) + 0x580));
    R5 = ((((int)stk + 0) + 0x4));
    goto L_C0868C2;
}

int FUN_0c054b50(int a4, int a5, int a6, int a7, float f4)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register int R10;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    v0_3 = a5;
    v0_4 = a6;
    v0_5 = a7;
    w0_0 = f4;
    v0_0 = *(signed char *)0xC7F3073;
    *(unsigned int *)(((int)stk + 0)) = (unsigned short)((unsigned short)(0x1 - (signed char)((-v0_0) + 0x2)) * (unsigned short)0x72D0);
    v0_9 = *(signed char *)0xC7F302E;
    v0_2 = (v0_9);
    v0_6 = (((-v0_0) + 0x2));
    v0_0 = (0x0);
    v0_1 = (0xC7F302C);
    v0_10 = (0xC7F302E);
    v0_7 = (0x1);
    v0_8 = (0xC7E40C4);
    if ((v0_9 == 0)) goto L_C054BC4;
    if ((v0_2 == 1)) goto L_C054C50;
    if ((v0_2 != 2)) goto L_C054B9C;
    if (((*(signed char *)((v0_1 + 0x3))) != 0)) goto L_C054D34;
    *(unsigned char *)((v0_1 + 0x3)) = ((*(signed char *)((v0_1 + 0x3))) + 0x1);
    *(unsigned short *)((v0_1 + 0xE)) = 0xF;
    (((struct o42_uchar *)(v0_1))->v) = v0_7;
    ui_fade_start(0xFFFFFFFF, 0x0, 0x1, 0xF);
    fx_spawn_0488b8(0x0, 0x0, 0xF, 0x0);
    L_C054D34:;
    v0_3 = *(short *)((v0_1 + 0xE));
    *(unsigned short *)((v0_1 + 0xE)) = (v0_3 - 1);
    v0_2 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) != 0)) goto L_C054D6A;
    L_C054D40:;
    *(unsigned char *)((v0_1 + 0x2)) = ((*(signed char *)((v0_1 + 0x2))) + 0x1);
    L_C054D64:;
    *(unsigned char *)((v0_1 + 0x3)) = v0_0;
    v0_2 = (v0_0);
    L_C054D6A:;
    return v0_2;
    L_C054B9C:;
    bgm_stop_all();
    cam_reset_shake(0x0, 0x0, 0x63, 0x0);
    *(unsigned char *)((v0_1 + 0x0)) = v0_0;
    *(unsigned char *)((v0_1 + 0x1)) = v0_0;
    *(unsigned char *)((v0_1 + 0x2)) = v0_0;
    goto L_C054D64;
    L_C054C50:;
    *(unsigned char *)((((unsigned short)((unsigned short)(signed char)v0_6 * (unsigned short)0x72D0) + v0_8) + 0x1)) = v0_7;
    *(unsigned char *)(((v0_8 + (*(int *)(((int)stk + 0)))) + 0x1)) = v0_0;
    v0_2 = (0xC0A3F0E);
    if (((*(short *)((v0_1 + 0xE))) != 0x12C)) goto L_C054C86;
    cam_reset_shake(0x2, 0x78, 0x2, 0x2);
    FUN_0c0a3f0e(0x4);
    L_C054C86:;
    if (((*(short *)((v0_1 + 0xE))) != 0x1A4)) goto L_C054C92;
    FUN_0c0a3f0e(0x3);
    L_C054C92:;
    if (((*(short *)((v0_1 + 0xE))) != 0x21C)) goto L_C054CA6;
    cam_reset_shake(0x5, 0x12C, 0x2, 0x5);
    L_C054CA6:;
    if (((*(short *)((v0_1 + 0xE))) != 0x30C)) goto L_C054CB2;
    FUN_0c0a3f0e(0x6);
    L_C054CB2:;
    v0_2 = (game_poll_start_button()) != 0;
    if (v0_2) goto L_C054D40;
    v0_3 = *(short *)((v0_1 + 0xE));
    *(unsigned short *)((v0_1 + 0xE)) = (v0_3 + 0x1);
    v0_2 = ((short)(v0_3 + 0x1));
    if (((int)(short)(v0_3 + 0x1) <= (int)0x348)) goto L_C054D6A;
    goto L_C054D40;
    L_C054BC4:;
    *(unsigned char *)((v0_10 + 0x0)) = ((*(signed char *)((v0_10 + 0x0))) + 0x1);
    *(unsigned char *)((v0_1 + 0x3)) = v0_0;
    *(unsigned short *)((v0_1 + 0xE)) = v0_0;
    bgm_play_demo_01();
    pl_change_state(((unsigned short)((unsigned short)(signed char)v0_6 * (unsigned short)0x72D0) + v0_8), 0x2A, 0x0, 0x0);
    v0_2 = *(int *)(((int)stk + 0));
    pl_change_state((v0_2 + v0_8), 0x8, 0x0, 0x0);
    *(unsigned char *)((((unsigned short)((unsigned short)(signed char)v0_6 * (unsigned short)0x72D0) + v0_8) + 0x1)) = v0_7;
    *(unsigned char *)(((v0_2 + v0_8) + 0x1)) = v0_0;
    v0_3 = *(signed char *)((v0_1 + 0x25));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((unsigned short)((unsigned short)(signed char)v0_6 * (unsigned short)0x72D0) + v0_8) + 0x20)) = *(struct mv3 *)(((((v0_3 << 1) + v0_3) << 2) + 0xC345DF4)); }
    *(unsigned int *)((((unsigned short)((unsigned short)(signed char)v0_6 * (unsigned short)0x72D0) + v0_8) + 0x30)) = (*(int *)((((*(signed char *)((v0_1 + 0x25))) << 2) + 0xC345EE4)));
    (((struct o20_float *)((v0_2 + v0_8)))->v) = (((((struct o20_float *)(((unsigned short)((unsigned short)(signed char)v0_6 * (unsigned short)0x72D0) + v0_8)))->v)) + -400.0f);
    (((struct o28_float *)((v0_2 + v0_8)))->v) = (((((struct o28_float *)(((unsigned short)((unsigned short)(signed char)v0_6 * (unsigned short)0x72D0) + v0_8)))->v)) + -400.0f);
    cam_set_priority(0x0, 0x40);
    cam_request_mode_04(0x3, v0_6);
    goto L_C054C50;
}

int FUN_0c05cb5c(int a4, int a5, int a6, int a7, float f4)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register int R9;
    register int R14;
    register float F0;
    register float F2;
    register float F3;
    register float F10;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_3 = a5;
    v0_2 = a6;
    v0_4 = a7;
    w0_0 = f4;
    *(unsigned int *)(((int)stk + 12)) = v0_3;
    *(float *)(((int)stk + 16)) = w0_0;
    *(unsigned char *)(((int)stk + 4)) = v0_4;
    v0_3 = *(signed char *)0xC7F2990;
    v0_5 = (v0_2);
    v0_6 = (0xC7F2664);
    v0_0 = (0x0);
    v0_2 = (v0_3);
    if (((int)v0_3 <= (int)0x3)) goto L_C05CBDE;
    v0_3 = (v0_0);
    L_C05CBD6:;
    if (!(((int)v0_3 < (int)v0_2))) goto L_C05CBEA;
    v0_4 = (((v0_3 << 2) + (0x318 + v0_6)));
    if (((*(signed char *)(((*(int *)((((v0_3 << 2) + (0x318 + v0_6)) + 0x0))) + 0x30D))) == 0)) goto L_C05CBD4;
    R14 = ((*(int *)((v0_4 + 0x0))));
    goto L_C05CBEA;
    L_C05CBEA:;
    *(unsigned char *)((R14 + 0x1)) = v0_0;
    (((struct o30D_uchar *)(R14))->v) = v0_0;
    *(unsigned char *)((R14 + 0x8)) = v0_0;
    *(unsigned char *)((R14 + 0x9)) = v0_0;
    *(unsigned char *)((R14 + 0xA)) = v0_0;
    *(unsigned char *)((R14 + 0xB)) = v0_0;
    *(unsigned char *)((R14 + 0xC)) = v0_0;
    *(unsigned char *)((R14 + 0xD)) = (*(signed char *)(((int)stk + 4)));
    *(unsigned char *)((R14 + 0xE)) = v0_5;
    (((struct oEC_ushort *)(R14))->v) = v0_0;
    (((struct oEE_ushort *)(R14))->v) = v0_0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0x20)) = *(struct mv3 *)(v0_1); }
    FUN_0c0624c4((((((struct o2E0_int *)(R14))->v)) + 0x9C), 0xC4CFA68, (v0_5 + 0x59));
    v0_1 = *(signed char *)(((int)stk + 4));
    v0_2 = (v0_1);
    w0_0 = (20.0f);
    if ((v0_1 != -1)) goto L_C05CCBC;
    *(int *)((int)stk + 0) = (R14 + 0x20);
    v0_1 = *(int *)(((int)stk + 12));
    w0_1 = ((((struct o20_float *)(R14))->v));
    w0_1 = w0_1 + 100.0f * (math_cos_angle16((0x14000 - v0_1)));
    (((struct o20_float *)(R14))->v) = w0_1;
    *(int *)((int)stk + 0) = (R14 + 0x28);
    w0_1 = ((((struct o28_float *)(R14))->v));
    w0_1 = w0_1 + 100.0f * (math_sin_angle16((0x14000 - v0_1)));
    (((struct o28_float *)(R14))->v) = w0_1;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 16))) / w0_0);
    (((struct o38_float *)(R14))->v) = ((math_cos_angle16((0x14000 - v0_1))) * w0_0);
    (((struct o3C_float *)(R14))->v) = ((*(float *)(((int)stk + 8))) * 0.599999964f);
    (((struct o40_float *)(R14))->v) = ((math_sin_angle16((0x14000 - v0_1))) * w0_0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E0_int *)(R14))->v)) + 0x1C)) = *(struct mv3 *)(0xC336320); }
    L_C05CCDA:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0x44)) = *(struct mv3 *)(0xC336338); }
    (((struct o107_uchar *)(R14))->v) = v0_0;
    *(unsigned char *)((((((struct o2E0_int *)(R14))->v)) + 0x0)) = 0x1;
    *(unsigned char *)((((((struct o2E4_int *)(R14))->v)) + 0x0)) = v0_0;
    *(unsigned char *)((((((struct o2E8_int *)(R14))->v)) + 0x0)) = v0_0;
    *(unsigned char *)((((((struct o2EC_int *)(R14))->v)) + 0x0)) = v0_0;
    fx_spawn_0498c4(R14);
    return snd_play_side_se((*(signed char *)((R14 + 0x3))), 0x11);
    L_C05CCBC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0x38)) = *(struct mv3 *)(0xC336320); }
    (((struct o3C_float *)(R14))->v) = w0_0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E0_int *)(R14))->v)) + 0x1C)) = *(struct mv3 *)(0xC33632C); }
    goto L_C05CCDA;
    L_C05CBD4:;
    v0_3 = ((v0_3 + 0x1));
    goto L_C05CBD6;
    L_C05CBDE:;
    R14 = ((*(int *)(((((signed char)v0_5 << 2) + (0x318 + v0_6)) + 0x0))));
    goto L_C05CBEA;
}

int FUN_0c07080e(int a4)
{
    int stk[6];
    register float u4;
    register int t12;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u17;
    register float u18;
    register float u19;
    register float u21;
    register float u23;
    register int t25;
    register int t27;
    register float u30;
    register float t31;
    register int t32;
    register int t34;
    register int t40;
    register int t44;
    register int t49;
    register int t80;
    register int t59;
    register int t62;
    register int t65;
    int t50;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    u4 = 20.0f;
    if ((*(signed char *)((a4 + 0x71BC))) == 0) {
        u4 = 10.0f;
    }
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - (((((struct o38_float *)(a4))->v)) / u4));
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) - (((((struct o3C_float *)(a4))->v)) / u4));
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - (((((struct o40_float *)(a4))->v)) / u4));
    t12 = *(int *)((a4 + 0x1C));
    u13 = (((struct o20_float *)(a4))->v);
    u14 = (((struct o20_float *)(t12))->v);
    u15 = (((struct o24_float *)(t12))->v);
    u16 = (((struct o24_float *)(a4))->v);
    u17 = (((struct o28_float *)(t12))->v);
    u18 = (((struct o28_float *)(a4))->v);
    u19 = (u14 - u13);
    if ((u14 - u13) == 0.0f) {
        u19 = 9.99999997e-07f;
    }
    u21 = (u15 - u16);
    if ((u15 - u16) == 0.0f) {
        u21 = 9.99999997e-07f;
    }
    u23 = (u17 - u18);
    if ((u17 - u18) == 0.0f) {
        u23 = 9.99999997e-07f;
    }
    t25 = math_atan_angle16(((-u23) / u19));
    t27 = t25;
    if (0.0f > u19) {
        t27 = (t25 + 0x8000);
    }
    *(unsigned int *)((a4 + 0x30)) = (unsigned short)(t27 + 0x4000);
    if ((*(signed char *)((a4 + 0x71BC))) != 0) {
        u30 = (u23 * u23);
        u30 = u30 + u19 * u19;
        t31 = math_signed_sqrt(u30);
        t32 = math_atan_angle16(((-t31) / u21));
        t34 = t32;
        if (0.0f > u21) {
            t34 = (t32 + 0x8000);
        }
        *(unsigned int *)((a4 + 0x2C)) = (-(unsigned short)(t34 + 0x4000));
    }
    t40 = pl_step_motion(a4);
    if ((signed char)t40 != 0) {
        pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    }
    t44 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t44 + 0x1);
    if ((short)(t44 + 0x1) == 12) {
        fx_spawn_14(a4, 0x1);
    }
    t49 = (((struct oEC_short *)(a4))->v);
    if (((int)t49 >= (int)0x2) && (((int)t49 <= (int)0x16) && (t50 = (((struct o2E4_int *)(a4))->v), (t50 & 0x400) != 0))) {
        (((struct oEE_ushort *)(a4))->v) = 0x1;
    }
    t80 = 0x71F4;
    if (((((struct o71F4_short *)(a4))->v)) != 0) {
        t80 = 0xEC;
        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x11) {
            t80 = 0xEE;
            if (((((struct oEE_short *)(a4))->v)) != 0) {
                t59 = (((struct o71F4_short *)(a4))->v);
                (((struct o71F4_ushort *)(a4))->v) = (int)((float)t59 - 360.0f);
                if ((int)(short)(int)((float)t59 - 360.0f) < 0) {
                    (((struct o71F4_ushort *)(a4))->v) = 0x0;
                }
                t62 = 0x69;
                if ((*(signed char *)((a4 + 0x71BC))) == 0) {
                    t62 = 0x62;
                }
                pl_start_motion(a4, 0x1, t62);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                (((struct oEC_ushort *)(a4))->v) = 0x0;
                (((struct oEE_ushort *)(a4))->v) = 0x0;
                t65 = *(signed char *)((a4 + 0xB));
                *(unsigned char *)((a4 + 0xB)) = (t65 + 0x1);
                t80 = (t65 + 0x1);
            }
        }
    }
    return t80;
}

int FUN_0c070618(int a4)
{
    int stk[6];
    register float u4;
    register int t12;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u17;
    register float u18;
    register float u19;
    register float u21;
    register float u23;
    register int t25;
    register int t27;
    register float u30;
    register float t31;
    register int t32;
    register int t34;
    register int t40;
    register int t44;
    register int t49;
    register int t80;
    register int t59;
    register int t62;
    register int t65;
    int t50;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    u4 = 20.0f;
    if ((*(signed char *)((a4 + 0x71BC))) == 0) {
        u4 = 10.0f;
    }
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - (((((struct o38_float *)(a4))->v)) / u4));
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) - (((((struct o3C_float *)(a4))->v)) / u4));
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - (((((struct o40_float *)(a4))->v)) / u4));
    t12 = *(int *)((a4 + 0x1C));
    u13 = (((struct o20_float *)(a4))->v);
    u14 = (((struct o20_float *)(t12))->v);
    u15 = (((struct o24_float *)(t12))->v);
    u16 = (((struct o24_float *)(a4))->v);
    u17 = (((struct o28_float *)(t12))->v);
    u18 = (((struct o28_float *)(a4))->v);
    u19 = (u14 - u13);
    if ((u14 - u13) == 0.0f) {
        u19 = 9.99999997e-07f;
    }
    u21 = (u15 - u16);
    if ((u15 - u16) == 0.0f) {
        u21 = 9.99999997e-07f;
    }
    u23 = (u17 - u18);
    if ((u17 - u18) == 0.0f) {
        u23 = 9.99999997e-07f;
    }
    t25 = math_atan_angle16(((-u23) / u19));
    t27 = t25;
    if (0.0f > u19) {
        t27 = (t25 + 0x8000);
    }
    *(unsigned int *)((a4 + 0x30)) = (unsigned short)(t27 + 0x4000);
    if ((*(signed char *)((a4 + 0x71BC))) != 0) {
        u30 = (u23 * u23);
        u30 = u30 + u19 * u19;
        t31 = math_signed_sqrt(u30);
        t32 = math_atan_angle16(((-t31) / u21));
        t34 = t32;
        if (0.0f > u21) {
            t34 = (t32 + 0x8000);
        }
        *(unsigned int *)((a4 + 0x2C)) = (-(unsigned short)(t34 + 0x4000));
    }
    t40 = pl_step_motion(a4);
    if ((signed char)t40 != 0) {
        pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    }
    t44 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t44 + 0x1);
    if ((short)(t44 + 0x1) == 14) {
        fx_spawn_14(a4, 0x0);
    }
    t49 = (((struct oEC_short *)(a4))->v);
    if (((int)t49 >= (int)0x2) && (((int)t49 <= (int)0x16) && (t50 = (((struct o2E4_int *)(a4))->v), (t50 & 0x400) != 0))) {
        (((struct oEE_ushort *)(a4))->v) = 0x1;
    }
    t80 = 0x71F4;
    if (((((struct o71F4_short *)(a4))->v)) != 0) {
        t80 = 0xEC;
        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x14) {
            t80 = 0xEE;
            if (((((struct oEE_short *)(a4))->v)) != 0) {
                t59 = (((struct o71F4_short *)(a4))->v);
                (((struct o71F4_ushort *)(a4))->v) = (int)((float)t59 - 240.0f);
                if ((int)(short)(int)((float)t59 - 240.0f) < 0) {
                    (((struct o71F4_ushort *)(a4))->v) = 0x0;
                }
                t62 = 0x68;
                if ((*(signed char *)((a4 + 0x71BC))) == 0) {
                    t62 = 0x61;
                }
                pl_start_motion(a4, 0x1, t62);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                (((struct oEC_ushort *)(a4))->v) = 0x0;
                (((struct oEE_ushort *)(a4))->v) = 0x0;
                t65 = *(signed char *)((a4 + 0xB));
                *(unsigned char *)((a4 + 0xB)) = (t65 + 0x1);
                t80 = (t65 + 0x1);
            }
        }
    }
    return t80;
}

int FUN_0c0858f0(int a4)
{
    register float t2;
    register float u3;
    register float u6;

    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o710B_uchar *)(a4))->v) = 0x0;
    (((struct o710C_uchar *)(a4))->v) = 0x0;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_start_motion(a4, 0x1, 0x6B);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct oEE_ushort *)(a4))->v) = 0x4;
    t2 = math_rand_float();
    u3 = *(float *)0xC085A58;
    u6 = (t2 * u3);
    if (!(2.14748365e+09f > (t2 * u3))) {
        u6 = (((t2 * u3)) - (2.14748365e+09f + 2.14748365e+09f));
    }
    (((struct oF0_ushort *)(a4))->v) = ((int)((unsigned int)(int)u6 % (unsigned int)0x8));
    (((struct o7248_uint *)(a4))->v) = (unsigned short)(pl_angle_to_target_pos(a4));
    (((struct oEC_ushort *)(a4))->v) = 0xD;
    (((struct o72BC_uint *)(a4))->v) = 0xC337BAC;
    FUN_0c085606(a4);
    return FUN_0c085996(a4);
}
