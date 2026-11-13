/* Straight-line functions with calls and guards (batch gen_av): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E_uchar { char p[0x2E]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o315_uchar { char p[0x315]; unsigned char v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o7221_uchar { char p[0x7221]; unsigned char v; };
struct o7237_uchar { char p[0x7237]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o72B1_uchar { char p[0x72B1]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o98_float { char p[0x98]; float v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_float { char p[0xF0]; float v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF8_int { char p[0xF8]; int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
int FUN_0c01ab4c(int);
int FUN_0c01ac74(int);
int FUN_0c01ad40(int);
int FUN_0c0203f6(void);
float FUN_0c02649a(int, int);
int FUN_0c028ea0(int, int, float);
int FUN_0c049288(void);
int FUN_0c0593e0(int);
int FUN_0c05941e(int);
int FUN_0c06233a(int, int, int);
int FUN_0c062f10(int);
int FUN_0c08e382(int);
int FUN_0c08f6c8(int);
int FUN_0c08f71c(int);
int FUN_0c08f76a(void);
int FUN_0c09c35e(void);
int FUN_0c09c45a(int);
int FUN_0c09de5e(int);
int FUN_0c0a2f5c(void);
int FUN_0c0a3426(int);
int FUN_0c0a4070(int, int);
int FUN_0c0ac4d0(void);
int FUN_0c0ccbfe(void);
int FUN_0c0d5f3a(int);
int FUN_0c0d6098(int);
int FUN_0c0d6190(int);
int FUN_0c0d6212(int);
int FUN_0c0d6ca2(int);
int FUN_0c0d6ef6(int);
int FUN_0c0d75bc(int, int, int, int);
int FUN_0c0d7758(float);
int FUN_0c0d780c(void);
int FUN_0c0e6db4(void);
int FUN_0c0e6f24(void);
extern int FUN_0c0e6fe8();
int attract_take_step3_flag(void);
int bgm_play_by_index(int);
int bgm_stop_slot(int);
int cam_reset_shake(int, int, int, int);
int fx_randomize_particle(int);
int fx_spawn_040550(int, int, int);
int fx_spawn_040a84(int, int, int, int);
int fx_spawn_042514(int, int);
int fx_spawn_hit_effect_set(int, int);
int game_reset_objects(void);
int game_update_fighters(void);
int hit_find_interactable_contact(int, int);
int hit_world_step(void);
int item_director_tick(void);
int math_atan_angle16(int, float);
float math_cos_angle16(int);
float math_rand_float(void);
float math_signed_sqrt(float);
float math_sin_angle16(int);
float math_vec3_length(int);
int math_vec3_sub(int, int, int);
int memset(int, int, int);
int menu_option_run_item(void);
int obj_can_interact(int, int, int, int);
int obj_create(int, int, int, int);
int obj_destroy(int);
int obj_set_mode_owner(int, int, int);
int obj_spawn_05ca54(int);
int obj_tick_class(int);
int opt_page2_pad_pressed(int);
extern int opt_page2_run_objects_in_mask();
int pl_angle_to_opponent(int);
int pl_angle_to_target_pos(int);
int pl_apply_acceleration(int);
int pl_apply_velocity(int);
int pl_build_model_matrix(int);
int pl_end_action_choose_state(int);
int pl_get_held_item_class(int, int, int);
int pl_landed(int);
int pl_set_velocity_from_move_table(int, int);
int pl_start_knockback_reaction(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_stick_dir_angle(int);
int res_switch_scene(int);
int snd_play_side_se(int, int);
int snd_play_stage_obj_se(int, int, int);
int stage_spawn_layout_objects(void);
int strlen(int);
int ui_draw_continue_countdown(int);
int ui_draw_no_challenge(int);
int FUN_0c032262(int a4, int a5);
float FUN_0c028f48(int a4);
int game_frame_update(int a4, int a5, int a6, int a7);
int fx_spawn_04512c(int a4, int a5, int a6);
int fx_spawn_046360(int a4);
int pl_wangtang_attack_kind24_phase2(int a4, int a5, int a6, int a7);
int FUN_0c0cc074(void);
int FUN_0c0c9eb8(int a4);
int FUN_0c0419a8(int a4, int a5);
int pl_hitreact_01_phase1(int a4);
int FUN_0c01a5cc(int a4, int a5, int a6, int a7);
int FUN_0c08dc24(int a4, int a5, int a6, int a7);
int menu_option_update(int a4, int a5, int a6, int a7, float f4);
int FUN_0c09e910(int a4, int a5, int a6);
int FUN_0c096a64(int a4);
int FUN_0c09660c(int a4);
int FUN_0c0d5f6a(int a4, int a5, int a6, int a7);

int FUN_0c032262(int a4, int a5)
{
    int stk[4];
    register int t0;
    register int t1;
    register int t28;
    register int t3;
    register int t4;
    register int t5;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t15;
    register float u21;
    register int t126;
    register int t34;
    register int t117;
    register int t36;
    register int t37;
    register int t38;
    register int t40;
    register int t50;
    register int t52;
    register int t56;
    register float u65;
    register float u67;
    register int t69;
    register int t79;
    register int t83;
    register int t85;
    register int t92;
    register int t96;
    register int t105;
    register int t152;
    register int t179;
    register int t154;
    register int t155;
    register int t156;
    register int t157;
    register int t158;
    register int t169;
    register int t172;
    register int t184;
    register int t139;
    register int t6;
    register int t7;
    register int t39;
    register float u41;
    register float u42;
    register float u61;
    register float u75;
    register float u101;
    register float u110;

    *(unsigned char *)(((int)stk + 12)) = a5;
    t0 = *(signed char *)(((int)stk + 12));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = obj_create(0x5, 0x1, 0x4, 0x0);
            t28 = t1;
            if (t1 != 0) {
                *(unsigned char *)((t1 + 0x0)) = 0x1;
                *(unsigned char *)((t1 + 0x3)) = (*(signed char *)((a4 + 0x3)));
                *(unsigned char *)((t1 + 0x1)) = 0x1;
                *(unsigned short *)((t1 + 0x6)) = 0x1F;
                *(unsigned char *)((t1 + 0x5)) = 0x19;
                *(unsigned int *)((t1 + 0x10)) = 0xC0327E4;
                t3 = ((int (*)(void))(FUN_0c0e6fe8))();
                t4 = ((int (*)(void))(FUN_0c0e6fe8))();
                (((struct o50_float *)(t1))->v) = 1.0f;
                (((struct o54_float *)(t1))->v) = 1.0f;
                (((struct o58_float *)(t1))->v) = 1.0f;
                t5 = 0x58;
                t8 = t7;
                t9 = 0x0;
                t10 = 0x19;
                for (;;) {
                    if ((int)t9 >= (int)0x4) {
                        break;
                    }
                    t6 = 0x2E0;
                    t10 = t9;
                    t10 = (t10 << 2);
                    t6 = (t6 + t1);
                    t6 = (t6 + t10);
                    t11 = *(int *)((t6 + 0x0));
                    t6 = 0x2E0;
                    *(unsigned char *)((t11 + 0x0)) = 0x1;
                    t6 = (t6 + t1);
                    t6 = (t6 + t10);
                    t5 = 0x1F;
                    *(unsigned short *)(((*(int *)((t6 + 0x0))) + 0x2)) = t5;
                    t5 = (*(signed char *)((a4 + 0x3)));
                    t8 = 0x2E0;
                    t15 = t5;
                    t5 = (t5 << 1);
                    t5 = (t5 + t15);
                    t5 = (t5 << 2);
                    t5 = (t5 << 1);
                    t8 = (t8 + t1);
                    t8 = (t8 + t10);
                    t8 = (*(int *)((t8 + 0x0)));
                    t5 = (FUN_0c06233a(t8, ((signed char)t5 + 0xC6002D0), 0x7));
                    t8 = 0x2E0;
                    t5 = 0xC;
                    t8 = (t8 + t1);
                    t8 = (t8 + t10);
                    t8 = (*(int *)((t8 + 0x0)));
                    *(float *)((t8 + t5)) = 0.0f;
                    t5 = 0x4;
                    *(float *)((t8 + t5)) = 0.0f;
                    t8 = t9;
                    t6 = (*(int *)((((0x2E0 + t1) + t10) + 0x0)));
                    t8 = (t8 << 2);
                    t8 = (t8 + t9);
                    t8 = (t8 << 2);
                    t8 = (signed char)t8;
                    t8 = (t8 + 0xC1495A0);
                    t5 = 0x10;
                    u21 = *(float *)((t8 + t5));
                    t5 = 0x8;
                    *(float *)((t6 + t5)) = u21;
                    t6 = t8;
                    *(volatile int *)((((0x2E0 + t1) + t10) + 0x0));
                    t5 = 0xC;
                    t5 = (((int (*)(int))(FUN_0c0e6fe8))(t8));
                    t6 = 0x2E0;
                    t9 = (t9 + 0x1);
                    t6 = (t6 + t1);
                    t10 = (t10 + t6);
                    t6 = (*(int *)((t8 + 0xC)));
                    *(unsigned int *)(((*(int *)((t10 + 0x0))) + 0x14)) = t6;
                }
                *(unsigned char *)((t1 + 0x8)) = (*(signed char *)(((int)stk + 12)));
                *(unsigned int *)((t1 + 0x1C)) = a4;
                (((struct oEC_ushort *)(t1))->v) = 0x12C;
                t28 = 0xEC;
            }
            t139 = t28;
        } else {
            t126 = t0;
            if (t0 == 2) {
                t34 = obj_create(0x5, 0x1, 0xA, 0x0);
                t117 = t34;
                if (t34 != 0) {
                    *(unsigned char *)((t34 + 0x0)) = 0x1;
                    *(unsigned char *)((t34 + 0x3)) = (*(signed char *)((a4 + 0x3)));
                    *(unsigned char *)((t34 + 0x1)) = 0x1;
                    *(unsigned short *)((t34 + 0x6)) = 0x1F;
                    *(unsigned char *)((t34 + 0x5)) = 0x19;
                    *(unsigned int *)((t34 + 0x10)) = 0xC0327E4;
                    t36 = ((int (*)(void))(FUN_0c0e6fe8))();
                    t37 = ((int (*)(void))(FUN_0c0e6fe8))();
                    (((struct o58_float *)(t34))->v) = 1.0f;
                    (((struct o54_float *)(t34))->v) = 1.0f;
                    (((struct o50_float *)(t34))->v) = 1.0f;
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                    t38 = 0xC032554;
                    t40 = 0x0;
                    for (;;) {
                        if ((int)(*(int *)(((int)stk + 8))) < (int)0xA) {
                            *(unsigned char *)(((*(int *)((((0x2E0 + t34) + t40) + 0x0))) + 0x0)) = 0x1;
                            t38 = 0x1F;
                            *(unsigned short *)(((*(int *)((((0x2E0 + t34) + t40) + 0x0))) + 0x2)) = t38;
                            u42 = (math_rand_float());
                            u42 = (u42 * 255.0f);
                            u41 = 2.14748365e+09f;
                            if (!(u41 > u42)) {
                                u41 = (u41 + u41);
                                u42 = (u42 - u41);
                            }
                            t39 = (int)u42;
                            t38 = 0x3;
                            t38 = (FUN_0c0e6f24());
                            t50 = t38;
                            t38 = (*(signed char *)((a4 + 0x3)));
                            t52 = t38;
                            t38 = (t38 << 1);
                            t38 = (t38 + t52);
                            t38 = (t38 << 2);
                            t38 = (t38 << 1);
                            t38 = (FUN_0c06233a((*(int *)((((0x2E0 + t34) + t40) + 0x0))), ((signed char)t38 + 0xC6002D0), (t50 + 0x8)));
                            t56 = *(int *)((((0x2E0 + t34) + t40) + 0x0));
                            *(int *)((int)stk + 0) = (0x28 + t56);
                            u42 = (math_rand_float());
                            u42 = (u42 * 255.0f);
                            u41 = 2.14748365e+09f;
                            if (!(u41 > u42)) {
                                u41 = (u41 + u41);
                                u42 = (u42 - u41);
                            }
                            t39 = (int)u42;
                            t38 = 0x14;
                            t38 = (FUN_0c0e6f24());
                            u42 = (float)t38;
                            if ((int)t38 < 0) {
                                u41 = 4.2949673e+09f;
                                u42 = (u42 + u41);
                                u61 = u41;
                            }
                            u41 = u61;
                            t38 = 0xC0326D4;
                            u65 = *(float *)((t38 + 0x0));
                            t38 = 0xC0326D8;
                            t39 = (0x28 + t56);
                            u67 = u65;
                            u67 = u67 + (*(float *)((t38 + 0x0))) * u42;
                            *(float *)((t39 + 0x0)) = u67;
                            t39 = 0x14;
                            t39 = (t39 + (*(int *)((((0x2E0 + t34) + t40) + 0x0))));
                            t69 = t39;
                            *(int *)((int)stk + 0) = t69;
                            u42 = (math_rand_float());
                            u42 = (u42 * 255.0f);
                            u41 = 2.14748365e+09f;
                            if (!(u41 > u42)) {
                                u41 = (u41 + u41);
                                u42 = (u42 - u41);
                            }
                            t39 = (int)u42;
                            t38 = 0x24;
                            t38 = (FUN_0c0e6f24());
                            t39 = 0x168;
                            t38 = (t38 + 0x1);
                            t38 = (FUN_0c0e6db4());
                            u42 = (float)t38;
                            if ((int)t38 < 0) {
                                u41 = 4.2949673e+09f;
                                u42 = (u42 + u41);
                                u75 = u41;
                            }
                            u41 = u75;
                            u42 = (u42 * 65536.0f);
                            t38 = t69;
                            u42 = (u42 / 360.0f);
                            *(unsigned int *)((t38 + 0x0)) = (int)u42;
                            t79 = *(int *)((((0x2E0 + t34) + t40) + 0x0));
                            *(unsigned int *)(((int)stk + 4)) = t79;
                            *(int *)((int)stk + 0) = (0x4 + t79);
                            t39 = 0x2E0;
                            t38 = 0x28;
                            t39 = (t39 + t34);
                            t39 = (t39 + t40);
                            t83 = *(int *)((t39 + 0x0));
                            t39 = (0x4 + t79);
                            u42 = (*(float *)((t83 + t38)));
                            *(float *)((t39 + 0x0)) = ((math_cos_angle16(((-(*(int *)(((*(int *)(((int)stk + 4))) + 0x14)))) + 0x10000))) * u42);
                            t85 = *(int *)((((0x2E0 + t34) + t40) + 0x0));
                            *(unsigned int *)(((int)stk + 4)) = t85;
                            *(int *)((int)stk + 0) = (0xC + t85);
                            t38 = 0x28;
                            t39 = (*(int *)((((0x2E0 + t34) + t40) + 0x0)));
                            u42 = (*(float *)((t39 + t38)));
                            t38 = 0x8;
                            t39 = (0xC + t85);
                            *(float *)((t39 + 0x0)) = ((math_sin_angle16(((-(*(int *)(((*(int *)(((int)stk + 4))) + 0x14)))) + 0x10000))) * u42);
                            *(float *)(((*(int *)((((0x2E0 + t34) + t40) + 0x0))) + t38)) = 0.0f;
                            t92 = *(int *)((((0x2E0 + t34) + t40) + 0x0));
                            t38 = 0xC0327D0;
                            u42 = (*(float *)((t38 + 0x0)));
                            t38 = 0x24;
                            *(float *)((t92 + t38)) = u42;
                            t38 = 0x20;
                            *(float *)((t92 + t38)) = u42;
                            t39 = 0x38;
                            t38 = 0x1C;
                            *(float *)((t92 + t38)) = u42;
                            t39 = (t39 + (*(int *)((((0x2E0 + t34) + t40) + 0x0))));
                            t96 = t39;
                            *(int *)((int)stk + 0) = t96;
                            u42 = (math_rand_float());
                            u42 = (u42 * 255.0f);
                            u41 = 2.14748365e+09f;
                            if (!(u41 > u42)) {
                                u41 = (u41 + u41);
                                u42 = (u42 - u41);
                            }
                            t39 = (int)u42;
                            t38 = 0x5;
                            t38 = (FUN_0c0e6f24());
                            t38 = (t38 + 0x5);
                            u42 = (float)t38;
                            if ((int)t38 < 0) {
                                u41 = 4.2949673e+09f;
                                u42 = (u42 + u41);
                                u101 = u41;
                            }
                            u41 = u101;
                            u42 = (u42 * 65536.0f);
                            t38 = t96;
                            u42 = (u42 / 360.0f);
                            *(unsigned int *)((t38 + 0x0)) = (int)u42;
                            t105 = *(int *)((((0x2E0 + t34) + t40) + 0x0));
                            *(int *)((int)stk + 0) = (0x2C + t105);
                            u42 = (math_rand_float());
                            u42 = (u42 * 255.0f);
                            u41 = 2.14748365e+09f;
                            if (!(u41 > u42)) {
                                u41 = (u41 + u41);
                                u42 = (u42 - u41);
                            }
                            t39 = (int)u42;
                            t38 = 0x8;
                            t38 = (FUN_0c0e6f24());
                            u42 = (float)t38;
                            if ((int)t38 < 0) {
                                u41 = 4.2949673e+09f;
                                u42 = (u42 + u41);
                                u110 = u41;
                            }
                            u41 = u110;
                            t38 = 0xC0327E0;
                            t39 = (0x2C + t105);
                            u41 = (*(float *)((t38 + 0x0)));
                            t40 = (t40 + 0x4);
                            u42 = (u42 + u41);
                            *(float *)((t39 + 0x0)) = u42;
                            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
                            continue;
                        }
                        break;
                    }
                    *(unsigned char *)((t34 + 0x8)) = (*(signed char *)(((int)stk + 12)));
                    *(unsigned int *)((t34 + 0x1C)) = a4;
                    (((struct oEC_ushort *)(t34))->v) = 0x12C;
                    t117 = 0xEC;
                }
                t126 = t117;
            }
            t139 = t126;
        }
        t184 = t139;
    } else {
        t152 = obj_create(0x5, 0x1, 0xA, 0x0);
        t179 = t152;
        if (t152 != 0) {
            *(unsigned char *)((t152 + 0x0)) = 0x1;
            *(unsigned char *)((t152 + 0x3)) = (*(signed char *)((a4 + 0x3)));
            *(unsigned char *)((t152 + 0x1)) = 0x1;
            *(unsigned short *)((t152 + 0x6)) = 0x1F;
            *(unsigned char *)((t152 + 0x5)) = 0x19;
            *(unsigned int *)((t152 + 0x10)) = 0xC0327E4;
            t154 = ((int (*)(void))(FUN_0c0e6fe8))();
            t155 = ((int (*)(void))(FUN_0c0e6fe8))();
            (((struct o58_float *)(t152))->v) = 1.0f;
            (((struct o54_float *)(t152))->v) = 1.0f;
            (((struct o50_float *)(t152))->v) = 1.0f;
            t156 = 0x50;
            t157 = 0x0;
            t158 = 0x0;
            for (;;) {
                if ((int)t157 >= (int)0xA) {
                    break;
                }
                t156 = 0x21F;
                *(unsigned char *)(((*(int *)((((0x2E0 + t152) + t158) + 0x0))) + 0x0)) = 0x1;
                *(unsigned short *)(((*(int *)((((0x2E0 + t152) + t158) + 0x0))) + 0x2)) = t156;
                math_rand_float();
                t156 = 0x64;
                t156 = (FUN_0c0e6f24());
                t156 = 0x3;
                t156 = (FUN_0c0e6f24());
                t169 = *(signed char *)((0xC1495F0 + t156));
                t156 = (*(signed char *)((a4 + 0x3)));
                t172 = t156;
                t156 = (t156 << 1);
                t156 = (t156 + t172);
                t156 = (t156 << 2);
                t156 = (t156 << 1);
                t156 = (FUN_0c06233a((*(int *)((((0x2E0 + t152) + t158) + 0x0))), ((signed char)t156 + 0xC6002D0), t169));
                t156 = (fx_randomize_particle((*(int *)((((0x2E0 + t152) + t158) + 0x0)))));
                t158 = (t158 + 0x4);
                t157 = (t157 + 0x1);
            }
            *(unsigned char *)((t152 + 0x8)) = (*(signed char *)(((int)stk + 12)));
            *(unsigned int *)((t152 + 0x1C)) = a4;
            (((struct oEC_ushort *)(t152))->v) = 0x12C;
            t179 = 0xEC;
        }
        t184 = t179;
    }
    return t184;
}

float FUN_0c028f48(int a4)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R5;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
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
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_6 = a4;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((v0_6 + 0x2C)));
    v0_3 = *(int *)((v0_6 + 0x4));
    w0_0 = ((((struct o8_float *)(v0_6))->v));
    v0_4 = (0x8);
    v0_0 = (v0_6);
    v0_1 = (0x0);
    v0_4 = (v0_3);
    v0_6 = (0xC7F2EE0);
    v0_2 = (0x1);
    w0_1 = w0_0;
    w0_0 = (1.0f);
    if (((int)v0_3 <= 0)) goto L_C02902C;
    v0_4 = (0x28);
    if (((*(signed char *)((v0_6 + 0x28))) == 0)) goto L_C028F84;
    L_C029222:;
    return F0;
    L_C028F84:;
    v0_5 = obj_create(0x5, 0x1, 0x1, 0x0);
    v0_4 = (v0_5);
    v0_3 = (v0_5);
    if ((v0_5 != 0)) goto L_C028F9A;
    goto L_C029222;
    L_C028F9A:;
    *(unsigned int *)((v0_3 + 0x10)) = 0xC028C88;
    FUN_0c028ea0(v0_0, v0_3, w0_1);
    (((struct o28_float *)(v0_3))->v) = 8.0f;
    v0_5 = (v0_1);
    L_C028FFC:;
    v0_4 = (0x2DC);
    if (((int)v0_5 < (int)(*(signed char *)((v0_3 + 0x2DC))))) goto L_C028FB2;
    goto L_C029222;
    L_C028FB2:;
    v0_6 = *(int *)((((v0_5 << 2) + (0x2E0 + v0_3)) + 0x0));
    *(unsigned char *)((v0_6 + 0x0)) = v0_2;
    *(unsigned char *)((v0_6 + 0x1)) = v0_1;
    *(unsigned short *)((v0_6 + 0x2)) = 0x100F;
    FUN_0c06233a(v0_6, 0xC6649E8, (*(int *)((v0_0 + 0x4))));
    (((struct o98_float *)(v0_6))->v) = ((((struct o50_float *)(v0_3))->v));
    v0_4 = (v0_6);
    if ((!(w0_0 > ((((struct o98_float *)(v0_6))->v))))) goto L_C028FE6;
    (((struct o98_float *)(v0_4))->v) = w0_0;
    L_C028FE6:;
    v0_5 = ((v0_5 + 0x1));
    if ((!(((((struct o54_float *)(v0_3))->v)) > ((((struct o98_float *)(v0_4))->v))))) goto L_C028FFC;
    (((struct o98_float *)(v0_4))->v) = ((((struct o54_float *)(v0_3))->v));
    goto L_C028FFC;
    L_C02902C:;
    if (((int)v0_4 >= 0)) goto L_C0290BA;
    v0_4 = (0x28);
    if (((*(signed char *)((v0_6 + 0x28))) == 0)) goto L_C02903C;
    goto L_C029222;
    L_C02903C:;
    v0_5 = obj_create(0x5, 0x1, 0x1, 0x0);
    v0_4 = (v0_5);
    v0_3 = (v0_5);
    if ((v0_5 != 0)) goto L_C029052;
    goto L_C029222;
    L_C029052:;
    *(unsigned int *)((v0_3 + 0x10)) = 0xC028DEC;
    FUN_0c028ea0(v0_0, v0_3, w0_1);
    v0_5 = (v0_1);
    L_C0290AE:;
    v0_4 = (0x2DC);
    if (((int)v0_5 < (int)(*(signed char *)((v0_3 + 0x2DC))))) goto L_C029062;
    goto L_C029222;
    L_C029062:;
    v0_6 = *(int *)((((v0_5 << 2) + (0x2E0 + v0_3)) + 0x0));
    *(unsigned char *)((v0_6 + 0x0)) = v0_2;
    *(unsigned char *)((v0_6 + 0x1)) = v0_1;
    *(unsigned short *)((v0_6 + 0x2)) = 0x100F;
    FUN_0c06233a(v0_6, 0xC6649E8, (-(*(int *)((v0_0 + 0x4)))));
    (((struct o98_float *)(v0_6))->v) = ((((struct o50_float *)(v0_3))->v));
    v0_4 = (v0_6);
    if ((!(w0_0 > ((((struct o98_float *)(v0_6))->v))))) goto L_C029098;
    (((struct o98_float *)(v0_4))->v) = w0_0;
    L_C029098:;
    v0_5 = ((v0_5 + 0x1));
    if ((!(((((struct o54_float *)(v0_3))->v)) > ((((struct o98_float *)(v0_4))->v))))) goto L_C0290AE;
    (((struct o98_float *)(v0_4))->v) = ((((struct o54_float *)(v0_3))->v));
    goto L_C0290AE;
    L_C0290BA:;
    if (((*(int *)(((int)stk + 4))) != 0)) goto L_C0290C4;
    goto L_C029222;
    L_C0290C4:;
    v0_3 = strlen((*(int *)((v0_0 + 0x2C))));
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    v0_4 = (v0_3);
    L_C029218:;
    if (((*(int *)(((int)stk + 0))) == 0)) goto L_C029222;
    v0_6 = (0xA);
    v0_3 = (0x0);
    if (((int)(*(int *)(((int)stk + 0))) <= (int)0xA)) goto L_C0290E2;
    *(unsigned int *)(((int)stk + 8)) = v0_6;
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) - 10);
    L_C0290E8:;
    v0_3 = obj_create(0x5, 0x1, (*(int *)(((int)stk + 8))), v0_3);
    v0_5 = (v0_3);
    if (!((v0_3 != 0))) goto L_C0291FE;
    *(unsigned int *)((v0_5 + 0x10)) = 0xC028B00;
    FUN_0c028ea0(v0_0, v0_5, w0_1);
    (((struct o38_float *)(v0_5))->v) = ((((struct oC_float *)(v0_0))->v));
    (((struct o3C_float *)(v0_5))->v) = ((((struct o14_float *)(v0_0))->v));
    (((struct o40_float *)(v0_5))->v) = ((((struct o1C_float *)(v0_0))->v));
    v0_7 = (v0_1);
    goto L_C0291F6;
    L_C0291FE:;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + (*(int *)(((int)stk + 8))));
    v0_3 = *(int *)(((int)stk + 8));
    w0_2 = (((struct o24_float *)(v0_0))->v);
    w0_1 = w0_1;
    w0_1 = w0_1 + w0_2 * (float)(((v0_3 << 2) << 2) << 2);
    v0_4 = (0x24);
    F0 = (w0_2);
    w0_1 = (w0_1);
    FPUL_ = ((((v0_3 << 2) << 2) << 2));
    goto L_C029218;
    L_C0291F6:;
    if (((int)v0_7 < (int)(*(signed char *)((v0_5 + 0x2DC))))) goto L_C029124;
    goto L_C0291FE;
    L_C029124:;
    v0_6 = *(signed char *)((v0_7 + (*(int *)(((int)stk + 4)))));
    v0_3 = ((*(int *)((((v0_7 << 2) + (0x2E0 + v0_5)) + 0x0))));
    v0_4 = (v0_6);
    if (!((v0_6 != 32))) goto L_C02913A;
    v0_6 = (0x41);
    if (((int)v0_4 < (int)0x41)) goto L_C029170;
    if (((int)v0_4 > (int)0x5A)) goto L_C029170;
    v0_4 = ((v0_4 - 65));
    goto L_C02919C;
    L_C02913A:;
    *(unsigned char *)((v0_3 + 0x0)) = v0_1;
    L_C0291EE:;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    v0_7 = ((v0_7 + 0x1));
    goto L_C0291F6;
    L_C02919C:;
    *(unsigned char *)((v0_3 + 0x0)) = v0_2;
    *(unsigned char *)((v0_3 + 0x1)) = v0_1;
    *(unsigned short *)((v0_3 + 0x2)) = 0x100F;
    (((struct o98_float *)(v0_3))->v) = ((((struct o50_float *)(v0_5))->v));
    if ((!(w0_0 > ((((struct o98_float *)(v0_3))->v))))) goto L_C0291BA;
    (((struct o98_float *)(v0_3))->v) = w0_0;
    L_C0291BA:;
    v0_4 = (v0_4);
    if ((!(((((struct o54_float *)(v0_5))->v)) > ((((struct o98_float *)(v0_3))->v))))) goto L_C0291D0;
    (((struct o98_float *)(v0_3))->v) = ((((struct o54_float *)(v0_5))->v));
    L_C0291D0:;
    FUN_0c06233a(v0_3, 0xC6649A0, v0_4);
    (((struct o4_float *)(v0_3))->v) = (float)(((v0_7 << 2) << 2) << 2);
    (((struct o8_float *)(v0_3))->v) = 0.0f;
    FPUL_ = ((((v0_7 << 2) << 2) << 2));
    goto L_C0291EE;
    L_C029170:;
    v0_6 = (0x61);
    if (((int)v0_4 < (int)0x61)) goto L_C029180;
    if (((int)v0_4 > (int)0x7A)) goto L_C029180;
    v0_4 = ((v0_4 - 71));
    goto L_C02919C;
    L_C029180:;
    v0_6 = (0x30);
    if (((int)v0_4 < (int)0x30)) goto L_C029190;
    if (((int)v0_4 > (int)0x39)) goto L_C029190;
    v0_4 = ((v0_4 + 0x4));
    goto L_C02919C;
    L_C029190:;
    if ((v0_4 != 46)) goto L_C02913A;
    v0_4 = (0x3E);
    v0_6 = (0x3E);
    goto L_C02919C;
    L_C0290E2:;
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 0)));
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    goto L_C0290E8;
}

int game_frame_update(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t2;
    register int t16;
    register int t36;
    register int t40;
    register int t41;

    t2 = ((int (*)(void))((*(int *)((((*(signed char *)0xC7F302C) << 2) + 0xC32DE40)))))();
    if ((*(signed char *)0xC7F302C) != 0) {
        (((struct o0_uchar *)0xC7F3192)->v) = 0x0;
        if ((*(signed char *)0xC7EB2F6) != 0) {
            (((struct o0_uchar *)0xC7F3192)->v) = 0x1;
        }
        if ((*(signed char *)0xC7F25C6) != 0) {
            (((struct o0_uchar *)0xC7F3192)->v) = ((*(signed char *)0xC7F3192) | 0x2);
        }
        if ((*(signed char *)0xC7F3192) != 0) {
            (((struct o0_uchar *)0xC7F3078)->v) = 0x2;
            if (((((struct o2_short *)0xC7F3192)->v)) != 0) {
                t16 = (((struct o2_short *)0xC7F3192)->v);
                (((struct o2_ushort *)0xC7F3192)->v) = (t16 - 1);
                if ((short)(t16 - 1) == 0) {
                    FUN_0c09c35e();
                }
            } else {
                *(unsigned char *)0xC7F25C6 = 0x0;
                *(unsigned char *)0xC7EB2F6 = 0x0;
                (((struct o0_uchar *)0xC7F3192)->v) = 0x0;
                (((struct o0_uchar *)0xC7F3078)->v) = 0x0;
            }
        }
        t36 = *(signed char *)0xC7F3078;
        if (t36 != 0) {
            if (t36 == 1) {
            } else {
                if (t36 != 2) {
                } else {
                    (((struct o4_uint *)0xC7F3078)->v) = (((((struct o4_int *)0xC7F3078)->v)) + 0x1);
                    t41 = *(int *)0xC7E407C;
                    t40 = (game_update_fighters());
                    for (;;) {
                        if (t41 == 0) {
                            break;
                        }
                        t40 = (*(signed char *)((t41 + 0x4)));
                        if (t40 == 5) {
                            t40 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((t41 + 0x10)))))(t41, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                        }
                        t41 = (*(int *)((t41 + 0x18)));
                    }
                    FUN_0c0593e0(0x2);
                    FUN_0c0593e0(0x3);
                    FUN_0c0593e0(0x4);
                    FUN_0c0593e0(0x1);
                    *(unsigned int *)(((int)stk + 0)) = 0xC7E40C4;
                    pl_build_model_matrix(0xC7E40C4);
                    pl_build_model_matrix(0xC7EB394);
                    hit_world_step();
                    pl_build_model_matrix((*(int *)(((int)stk + 0))));
                    pl_build_model_matrix(0xC7EB394);
                    FUN_0c062f10((*(int *)(((int)stk + 0))));
                    FUN_0c062f10(0xC7EB394);
                    FUN_0c05941e(0x2);
                    FUN_0c05941e(0x3);
                    FUN_0c05941e(0x4);
                    FUN_0c05941e(0x1);
                    if ((int)(*(signed char *)0xC7F302C) < (int)0x5) {
                        FUN_0c0203f6();
                    }
                }
            }
        } else {
            (((struct o4_uint *)0xC7F3078)->v) = (((((struct o4_int *)0xC7F3078)->v)) + 0x1);
            game_update_fighters();
            item_director_tick();
            obj_tick_class(0x2);
            obj_tick_class(0x3);
            obj_tick_class(0x4);
            obj_tick_class(0x1);
            pl_build_model_matrix(0xC7E40C4);
            *(unsigned int *)(((int)stk + 0)) = 0xC7EB394;
            pl_build_model_matrix(0xC7EB394);
            FUN_0c0593e0(0x2);
            FUN_0c0593e0(0x3);
            FUN_0c0593e0(0x4);
            FUN_0c0593e0(0x1);
            hit_world_step();
            pl_build_model_matrix(0xC7E40C4);
            pl_build_model_matrix((*(int *)(((int)stk + 0))));
            FUN_0c062f10(0xC7E40C4);
            FUN_0c062f10((*(int *)(((int)stk + 0))));
            FUN_0c05941e(0x2);
            FUN_0c05941e(0x3);
            FUN_0c05941e(0x4);
            FUN_0c05941e(0x1);
            if ((int)(*(signed char *)0xC7F302C) < (int)0x5) {
                FUN_0c0203f6();
            }
            obj_tick_class(0x5);
            obj_tick_class(0x7);
            FUN_0c0593e0(0x5);
            FUN_0c0593e0(0x7);
        }
        obj_tick_class(0x6);
        FUN_0c0593e0(0x6);
        if ((*(signed char *)0xC7F319E) == 0) {
            return FUN_0c0ac4d0();
        }
        return 0x172;
    }
    return t2;
}

int fx_spawn_04512c(int a4, int a5, int a6)
{
    int stk[6];
    register float t2;
    register int t63;
    register int t5;
    register int t7;
    register int t55;
    register int t13;
    register int t27;
    register float u30;
    register int t34;
    register int t49;
    register int t35;
    register int t36;
    register int t37;
    register int t38;
    register int t48;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned char *)(((int)stk + 0)) = a6;
    math_vec3_sub((((int)stk + 0) + 0xC), 0xC7F2AB4, (*(int *)(((int)stk + 4))));
    t2 = math_vec3_length((((int)stk + 0) + 0xC));
    t63 = 0xC045188;
    if (!(t2 > 300.0f)) {
    } else {
        t5 = 0x3;
        if ((*(signed char *)(((int)stk + 0))) == 0) {
            t5 = 0x1;
        }
        t7 = obj_create(0x5, 0x1, (signed char)t5, 0x0);
        t55 = t7;
        if (t7 != 0) {
            *(unsigned char *)((t7 + 0x0)) = 0x1;
            *(unsigned char *)((t7 + 0x1)) = 0x1;
            *(unsigned char *)((t7 + 0x3)) = 0x2;
            *(unsigned short *)((t7 + 0x6)) = 0x1F;
            *(unsigned char *)((t7 + 0x5)) = 0x1;
            *(unsigned int *)((t7 + 0x10)) = 0xC045354;
            (((struct o118_uint *)(t7))->v) = 0x0;
            *(volatile int *)(((int)stk + 8));
            FUN_0c0e6fe8();
            *(volatile int *)(((int)stk + 4));
            FUN_0c0e6fe8();
            FUN_0c0e6fe8();
            t13 = (((struct o2E0_int *)(t7))->v);
            FUN_0c06233a(t13, 0xC4CFA68, 0x69);
            *(unsigned char *)((t13 + 0x0)) = 0x1;
            *(unsigned short *)((t13 + 0x2)) = 0x218;
            math_rand_float();
            *(unsigned int *)((t13 + 0x18)) = ((((FUN_0c0e6f24()) << 8) << 2) << 1);
            math_rand_float();
            t27 = FUN_0c0e6f24();
            u30 = (float)(t27 + 0x5);
            if ((int)(t27 + 0x5) < 0) {
                u30 = ((float)(t27 + 0x5) + 4.2949673e+09f);
            }
            (((struct o24_float *)(t13))->v) = (u30 / 10.0f);
            FUN_0c0e6fe8();
            t34 = *(signed char *)(((int)stk + 0));
            *(unsigned char *)((t7 + 0xB)) = t34;
            t49 = (signed char)t34;
            if ((signed char)t34 != 0) {
                (((struct o58_float *)(t7))->v) = 1.19999993f;
                (((struct o54_float *)(t7))->v) = 1.19999993f;
                (((struct o50_float *)(t7))->v) = 1.19999993f;
                *(unsigned int *)(((int)stk + 0)) = ((0x2E0 + t7) + 0x4);
                t35 = 0x1;
                t36 = 0x8000;
                for (;;) {
                    t37 = *(int *)(((int)stk + 0));
                    *(unsigned int *)(((int)stk + 0)) = (t37 + 0x4);
                    t38 = *(int *)((((t37 + 0x4) - 4) + 0x0));
                    FUN_0c06233a(t38, 0xC4CFA68, 0x7A);
                    *(unsigned char *)((t38 + 0x0)) = 0x1;
                    *(unsigned short *)((t38 + 0x2)) = 0x21C;
                    *(unsigned int *)((t38 + 0x14)) = t36;
                    math_rand_float();
                    *(unsigned int *)((t38 + 0x18)) = ((((FUN_0c0e6f24()) << 8) << 2) << 1);
                    FUN_0c0e6fe8();
                    t48 = FUN_0c0e6fe8();
                    t35 = (t35 + 0x1);
                    t36 = (t36 + 0x8000);
                    if ((int)(signed char)t35 >= (int)0x3) {
                        break;
                    }
                }
                t49 = t48;
            }
            t55 = t49;
        }
        t63 = t55;
    }
    return t63;
}

int fx_spawn_046360(int a4)
{
    register int t0;
    register int t39;
    register int t5;
    register int t14;
    register float u17;

    t0 = obj_create(0x5, 0x1, 0x1, 0x0);
    t39 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC046534;
        FUN_0c0e6fe8();
        (((struct o118_uint *)(t0))->v) = 0x0;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        t5 = (((struct o2E0_int *)(t0))->v);
        memset((t5 + 0x34), 0x0, 0xC);
        FUN_0c06233a(t5, 0xC4CFA68, ((*(signed char *)(((t5 + 0x34) + 0x6))) + 0x75));
        *(unsigned char *)((t5 + 0x0)) = 0x1;
        *(unsigned short *)((t5 + 0x2)) = 0x31;
        math_rand_float();
        
        t14 = FUN_0c0e6f24();
        u17 = (float)(t14 + 0x1);
        if ((int)(t14 + 0x1) < 0) {
            u17 = ((float)(t14 + 0x1) + 4.2949673e+09f);
        }
        (((struct o24_float *)(t5))->v) = ((u17 / 10.0f) + 1.0f);
        (((struct o20_float *)(t5))->v) = ((u17 / 10.0f) + 1.0f);
        (((struct o1C_float *)(t5))->v) = ((u17 / 10.0f) + 1.0f);
        (((struct o34_float *)(t5))->v) = (((((struct o1C_float *)(t5))->v)) / 8.0f);
        *(unsigned char *)(((t5 + 0x34) + 0x4)) = 0x1;
        math_rand_float();
        
        *(unsigned char *)(((t5 + 0x34) + 0x5)) = ((FUN_0c0e6f24()) + 0x1);
        math_rand_float();
        
        *(unsigned char *)(((t5 + 0x34) + 0x6)) = (FUN_0c0e6f24());
        math_rand_float();
        
        *(unsigned char *)(((t5 + 0x34) + 0x7)) = ((FUN_0c0e6f24()) + 0x1);
        (((struct oEC_ushort *)(t0))->v) = 0x78;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        (((struct oF0_ushort *)(t0))->v) = 0x1;
        (((struct oF2_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t39 = 0xF2;
    }
    return t39;
}

int pl_wangtang_attack_kind24_phase2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_target_pos(a4));
        (((struct o7248_uint *)(a4))->v) = (unsigned short)((pl_stick_dir_angle(a4)) + (*(short *)0xC7F31E0));
        pl_set_velocity_from_move_table(a4, ((((struct o7248_int *)(a4))->v)));
        pl_apply_velocity(a4);
    }
    t0 = *(int *)((a4 + 0x1C));
    u0 = (((struct o20_float *)(a4))->v);
    u1 = (((struct o20_float *)(t0))->v);
    *(volatile float *)((t0 + 0x24));
    *(volatile float *)((a4 + 0x24));
    u2 = (((struct o28_float *)(t0))->v);
    u3 = (((struct o28_float *)(a4))->v);
    u4 = (u1 - u0);
    if ((u1 - u0) == 0.0f) {
        u4 = 9.99999997e-07f;
    }
    u0 = (u2 - u3);
    if ((u2 - u3) == 0.0f) {
        u0 = 9.99999997e-07f;
    }
    t1 = math_atan_angle16(t0, ((-u0) / u4));
    t0 = t1;
    if (0.0f > u4) {
        t0 = (t1 + 0x8000);
    }
    u1 = (u0 * u0);
    u1 = u1 + u4 * u4;
    u0 = math_signed_sqrt(u1);
    if (300.0f > u0) {
        t1 = *(int *)((a4 + 0x1C));
        (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) - (((math_cos_angle16((0x14000 - (unsigned short)(t0 + 0x4000)))) * 5.0f)));
        t1 = *(int *)((a4 + 0x1C));
        (((struct o28_float *)(t1))->v) = (((((struct o28_float *)(t1))->v)) - (((math_sin_angle16((0x14000 - (unsigned short)(t0 + 0x4000)))) * 5.0f)));
    }
    pl_step_motion(a4);
    if ((((((struct o2E4_int *)(a4))->v)) & 0x200) != 0) {
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        if ((*(signed char *)((a4 + 0x71BC))) == 0) {
            pl_start_motion(a4, 0x1, 0x64);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            t0 = *(signed char *)((a4 + 0xB));
            *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
            return (t0 + 0x1);
        }
        return pl_end_action_choose_state(a4);
    }
    return 0xEC;
}

int FUN_0c0cc074(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    (((struct o0_uchar *)0xC7F2665)->v) = 0x1;
    (((struct o7_uchar *)0xC7F2665)->v) = 0x0;
    (((struct o8_uchar *)0xC7F2665)->v) = 0x0;
    (((struct o9_uchar *)0xC7F2665)->v) = 0x0;
    (((struct oA_uchar *)0xC7F2665)->v) = 0x0;
    (((struct oB_uchar *)0xC7F2665)->v) = 0x0;
    t1 = 0x0;
    for (;;) {
        t2 = (0xC7F2974 + t1);
        t1 = (t1 + 0x1);
        *(unsigned char *)((t2 + 0x0)) = 0x0;
        if ((int)t1 >= (int)0x3) {
            break;
        }
    }
    (((struct o2E_uchar *)0xC7F294C)->v) = 0x0;
    (((struct o1_uchar *)0xC7F2990)->v) = 0x0;
    if (((int)(*(signed char *)0xC7F4755) >= (int)0x1) && (t0 = *(signed char *)0xC7F4765, (int)t0 >= (int)0x1)) {
        t0 = *(signed char *)0xC7F4765;
        (((struct o0_uchar *)0xC7F2990)->v) = (t0 + 0x3);
        t1 = (t0 + 0x3);
    } else {
        (((struct o0_uchar *)0xC7F2990)->v) = 0x3;
    }
    t0 = t1;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(signed char *)0xC7F2990)) {
            break;
        }
        t0 = 0x32E;
        t0 = (t0 + 0xC7F2664);
        t0 = (t0 + t1);
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        t2 = (t1 << 2);
        t1 = (t1 + 0x1);
        t0 = 0x318;
        t0 = (t0 + 0xC7F2664);
        *(unsigned int *)(((t2 + t0) + 0x0)) = 0x0;
    }
    if ((int)(*(signed char *)0xC7F2990) > (int)0x3) {
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)(*(signed char *)0xC7F2990)) {
                break;
            }
            t1 = ((t0 << 2) + 0xC7F297C);
            t0 = (t0 + 0x1);
            *(unsigned int *)((t1 + 0x0)) = (obj_spawn_05ca54(0x0));
        }
    } else {
        t0 = 0x0;
        for (;;) {
            t1 = obj_spawn_05ca54(t0);
            t2 = ((t0 << 2) + 0xC7F297C);
            t0 = (t0 + 0x1);
            *(unsigned int *)((t2 + 0x0)) = t1;
            if ((int)t0 >= (int)0x3) {
                break;
            }
        }
    }
    (((struct o0_uint *)0xC7F294C)->v) = (*(int *)((0x0 + (*(int *)0xC664948))));
    t0 = 0x0;
    t1 = 0x1;
    for (;;) {
        t2 = 0x0;
        t3 = 0x0;
        for (;;) {
            t3 = (t3 + 0x1);
            t4 = *(int *)(((t1 << 2) + (*(int *)0xC664948)));
            t1 = (t1 + 0x1);
            *(unsigned int *)((((0xC7F2950 + ((t0 << 2) << 1)) + t2) + 0x0)) = t4;
            t2 = (t2 + 0x4);
            if ((int)t3 >= (int)0x2) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    (((struct o24_uint *)0xC7F294C)->v) = (*(int *)(((t1 << 2) + (*(int *)0xC664948))));
    FUN_0c0ccbfe();
    stage_spawn_layout_objects();
    if ((*(signed char *)0xC7F3051) == 7) {
        FUN_0c049288();
    }
    t0 = *(signed char *)0xC7F3051;
    if (((signed char)t0 != 0) && ((signed char)t0 != 3)) {
        if ((signed char)t0 != 4) {
            if ((signed char)t0 != 7) {
                t1 = (signed char)t0;
                if ((signed char)t0 != 8) {
                } else {
                    t1 = (snd_play_stage_obj_se(t0, 0x2, 0x5));
                }
                t2 = t1;
            } else {
                t2 = (snd_play_stage_obj_se(t0, 0x2, 0x2));
            }
            t1 = t2;
        } else {
            snd_play_stage_obj_se(t0, 0x2, 0x4);
            t1 = (snd_play_stage_obj_se((*(signed char *)0xC7F3051), 0x2, 0x6));
        }
        t2 = t1;
    } else {
        t2 = (snd_play_stage_obj_se(t0, 0x2, 0x6));
    }
    return t2;
}

int FUN_0c0c9eb8(int a4)
{
    int stk[12];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t17;
    register int t20;
    register int t21;
    register int t27;
    register int t29;
    register int t30;
    register int t39;
    register int t62;
    register int t84;
    register int t73;
    register int t74;
    register int t75;
    register int t76;
    register int t9;
    register int t66;
    register int t67;
    register int t69;
    register int t19;
    int t23;
    int t28;
    register int t35;
    register int t36;
    float u43;
    register int t81;

    t0 = *(signed char *)((a4 + 0xE));
    t4 = *(int *)((a4 + 0x18));
    if ((int)t0 > 0) {
        t2 = a4;
        t3 = 0x0;
        for (;;) {
            if ((*(signed char *)((t4 + 0x108))) != 0) {
                t2 = t4;
                t2 = (t2 + 0x20);
                fx_spawn_04512c(t2, (t4 + 0x2C), 0x1);
            } else {
                t9 = t2;
            }
            t3 = (t3 + 0x1);
            t2 = t9;
            t4 = (*(int *)((t4 + 0x18)));
            if ((int)t3 >= (int)t0) {
                break;
            }
        }
    }
    *(unsigned char *)((a4 + 0xF)) = 0x0;
    t17 = *(signed char *)((a4 + 0xE));
    t21 = *(int *)((a4 + 0x18));
    if ((int)t17 <= 0) {
        t66 = 0x0;
        t67 = t21;
        t69 = 0x1;
    } else {
        t20 = 0x0;
        for (;;) {
            if (((*(signed char *)((t21 + 0x2D8))) == 0) && (t23 = *(signed char *)((t21 + 0x108)), t19 = t23, t19 == 0)) {
                t20 = (t20 + 0x1);
                t21 = (*(int *)((t21 + 0x18)));
                if ((int)t20 >= (int)t17) {
                    t27 = *(signed char *)((a4 + 0xF));
                    if ((t27 != 0) && (t28 = *(int *)((t21 + 0x18)), t21 = t28, (int)t20 < (int)(t17 - 1))) {
                        t29 = t27;
                        t30 = 0x1;
                        for (;;) {
                            if ((*(int *)((t21 + 0x10))) == 0xC0CA198) {
                                t30 = t21;
                                t29 = (obj_destroy(t30));
                                t29 = (*(signed char *)((a4 + 0xE)));
                                t29 = (t29 - 1);
                                *(unsigned char *)((a4 + 0xE)) = t29;
                            } else {
                                t35 = t19;
                                t36 = t30;
                            }
                            t20 = (t20 + 0x1);
                            t19 = t35;
                            t30 = t36;
                            t21 = (*(int *)((t21 + 0x18)));
                            if ((int)t20 >= (int)(t17 - 1)) {
                                break;
                            }
                        }
                        return t29;
                    }
                    return t27;
                }
                continue;
            }
            break;
        }
        *(unsigned char *)((a4 + 0xF)) = 0x1;
        t39 = ((int (*)(int))(FUN_0c0e6fe8))(0x1);
        math_vec3_sub(((int)stk + 4), ((int)stk + 4), (a4 + 0x20));
        *(int *)((int)stk + 0) = (0xF0 + a4);
        (((struct oF0_float *)(a4))->v) = (math_vec3_length((((int)stk + 0) + 0x4)));
        *(unsigned char *)((a4 + 0xD)) = 0x5;
        *(unsigned char *)((a4 + 0xC)) = 0x4;
        if (((*(signed char *)((t21 + 0x2D8))) != 0) && (u43 = (((struct o274_float *)(t21))->v), u43 != 0.0f)) {
            fx_spawn_040550((*(signed char *)((a4 + 0x3))), (*(signed char *)(((0x308 + a4) + 0xE))), (t21 + 0x20));
            if (((((struct oF0_short *)((*(int *)((a4 + 0x1C)))))->v)) != 0) {
                (((struct o11_uchar *)((0x308 + a4)))->v) = ((*(signed char *)(((0x308 + a4) + 0x11))) ^ 0x1);
                fx_spawn_040a84((*(signed char *)((a4 + 0x3))), (*(int *)((a4 + 0x30))), (t21 + 0x20), (*(signed char *)(((0x308 + a4) + 0x11))));
            } else {
                fx_spawn_040a84((*(signed char *)((a4 + 0x3))), (*(int *)((a4 + 0x30))), (t21 + 0x20), ((*(signed char *)(((0x308 + a4) + 0x11))) ^ 0x1));
                (((struct o11_uchar *)((0x308 + a4)))->v) = 0x1;
            }
            *(unsigned char *)(((0x308 + a4) + 0xE)) = ((*(signed char *)(((0x308 + a4) + 0xE))) ^ 0x1);
            t62 = ((int (*)(void))(FUN_0c0e6fe8))();
            *(unsigned char *)(((0x308 + a4) + 0xD)) = 0x8;
        } else {
            fx_spawn_04512c((t21 + 0x20), (t21 + 0x2C), 0x1);
        }
        t66 = t20;
        t67 = t21;
    }
    t73 = *(signed char *)((a4 + 0xF));
    t84 = t73;
    if ((t73 != 0) && (t76 = *(int *)((t67 + 0x18)), (int)t66 < (int)(t17 - 1))) {
        t74 = t69;
        t75 = t66;
        for (;;) {
            if ((*(int *)((t76 + 0x10))) == 0xC0CA198) {
                t74 = t76;
                t73 = (obj_destroy(t74));
                t73 = (*(signed char *)((a4 + 0xE)));
                t73 = (t73 - 1);
                *(unsigned char *)((a4 + 0xE)) = t73;
            } else {
                t81 = t74;
            }
            t75 = (t75 + 0x1);
            t74 = t81;
            t76 = (*(int *)((t76 + 0x18)));
            if ((int)t75 >= (int)(t17 - 1)) {
                break;
            }
        }
        t84 = t73;
    }
    return t84;
}

int FUN_0c0419a8(int a4, int a5)
{
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t2 = obj_create(0x5, 0x1, 0x1, 0x0);
    t3 = t2;
    if (t2 == 0) {
    } else {
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned char *)((t2 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t2 + 0x1)) = 0x1;
        *(unsigned char *)((t2 + 0x5)) = 0x19;
        *(unsigned int *)((t2 + 0x10)) = 0xC041DC8;
        *(unsigned char *)((t2 + 0x4)) = a5;
        *(unsigned int *)((t2 + 0x1C)) = a4;
        t4 = ((int (*)(int, int))(FUN_0c0e6fe8))(0x0, 0x1);
        t4 = ((int (*)(int))(FUN_0c0e6fe8))(0xC149BD4);
        t4 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct o5C_float *)(t2))->v) = 1.0f;
        t4 = ((int (*)(int))(FUN_0c0e6fe8))(t0);
        t0 = (((struct o2E0_int *)(t2))->v);
        *(unsigned char *)((t0 + 0x0)) = t3;
        *(unsigned short *)((t0 + 0x2)) = 0xF;
        t3 = *(signed char *)(((0x3 + t2) + 0x0));
        FUN_0c06233a(t0, ((signed char)((((t3 << 1) + t3) << 2) << 1) + 0xC6002D0), (*(signed char *)(((signed char)a5 + 0xC3217C8))));
        if ((signed char)a5 != 0) {
            if ((signed char)a5 != 1) {
                if ((signed char)a5 != 2) {
                    t0 = (signed char)a5;
                    if ((signed char)a5 != 3) {
                    } else {
                        *(unsigned short *)((t2 + 0x6)) = 0x41F;
                        (((struct o118_uint *)(t2))->v) = 0x0;
                        (((struct o54_float *)(t2))->v) = 0.0f;
                        t0 = 0x54;
                    }
                    t3 = t0;
                } else {
                    *(unsigned short *)((t2 + 0x6)) = 0x21F;
                    (((struct o118_uint *)(t2))->v) = 0x0;
                    t0 = ((int (*)(int, int))(FUN_0c0e6fe8))(0x41F, 0x0);
                    u0 = ((((struct o20_float *)(t2))->v));
                    u0 = u0 + 300.0f * (math_sin_angle16((*(int *)((a4 + 0x30)))));
                    (((struct o20_float *)(t2))->v) = u0;
                    u0 = ((((struct o28_float *)(t2))->v));
                    u0 = u0 + 300.0f * (math_cos_angle16((*(int *)((a4 + 0x30)))));
                    (((struct o28_float *)(t2))->v) = u0;
                    t3 = 0xC041B18;
                }
                t0 = t3;
            } else {
                *(unsigned short *)((t2 + 0x6)) = 0x41F;
                (((struct o118_uint *)(t2))->v) = (0xF60 + a4);
                *(unsigned int *)((t2 + 0x2C)) = 0xFFFFD556;
                t0 = 0x118;
            }
            t3 = t0;
        } else {
            *(unsigned short *)((t2 + 0x6)) = 0x41F;
            (((struct o118_uint *)(t2))->v) = (0x47C0 + a4);
            (((struct o28_float *)(t2))->v) = 110.0f;
            t3 = 0x28;
        }
    }
    return t3;
}

int pl_hitreact_01_phase1(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R12;
    register int R14;
    register float F0;
    register float F1;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_1 = a4;
    v0_0 = R14;
    v0_2 = ((((struct oF0_short *)(v0_1))->v)) != 0;
    v0_0 = (0xF0);
    R14 = (v0_1);
    if (v0_2) goto L_C08FA34;
    v0_1 = pl_start_knockback_reaction(R14);
    v0_0 = ((signed char)v0_1);
    if (((signed char)v0_1 == 0)) goto L_C08FA18;
    L_C08FB78:;
    return v0_0;
    L_C08FA18:;
    L_C08FA3A:;
    v0_1 = FUN_0c08f6c8(R14);
    v0_0 = ((signed char)v0_1);
    if (((signed char)v0_1 == 0)) goto L_C08FA48;
    goto L_C08FB78;
    L_C08FA48:;
    v0_1 = FUN_0c08f76a();
    v0_0 = ((signed char)v0_1);
    if (((signed char)v0_1 == 0)) goto L_C08FA56;
    goto L_C08FB78;
    L_C08FA56:;
    v0_2 = ((((struct oEE_short *)(R14))->v)) == 0;
    v0_0 = (0xEE);
    v0_1 = (R14);
    if (v0_2) goto L_C08FA66;
    *(unsigned short *)((R14 + v0_0)) = ((*(short *)((R14 + v0_0))) - 1);
    L_C08FA66:;
    pl_step_motion(v0_1);
    v0_1 = (((struct oF2_short *)(R14))->v);
    v0_0 = (v0_1);
    if ((v0_1 == 96)) goto L_C08FA82;
    if ((v0_0 == 112)) goto L_C08FB24;
    if ((v0_0 == 0x80)) goto L_C08FA82;
    L_C08FB24:;
    v0_0 = !(0.0f > ((((struct o3C_float *)(R14))->v)));
    if (v0_0) goto L_C08FB68;
    v0_0 = (signed char)(pl_landed(R14)) == 0;
    if (v0_0) goto L_C08FB68;
    FUN_0c09c45a(R14);
    FUN_0c08e382(R14);
    v0_0 = (*(signed char *)((R14 + 0x27C))) == 2;
    if (v0_0) goto L_C08FB58;
    fx_spawn_042514((R14 + 0x20), (*(int *)((R14 + 0x30))));
    L_C08FB58:;
    FUN_0c08f71c(R14);
    v0_0 = *(signed char *)((R14 + 0xB));
    *(unsigned char *)((R14 + 0xB)) = (v0_0 + 0x1);
    return (v0_0 + 0x1);
    L_C08FB68:;
    pl_apply_velocity(R14);
    return pl_apply_acceleration(R14);
    L_C08FA82:;
    v0_1 = (((struct oEC_short *)(R14))->v);
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_C08FA92;
    if ((v0_0 == 1)) goto L_C08FAC0;
    goto L_C08FB24;
    L_C08FAC0:;
    v0_0 = !(0.0f > ((((struct o3C_float *)(R14))->v)));
    if (v0_0) goto L_C08FB68;
    pl_start_motion(R14, 0x2, ((*(signed char *)((R14 + 0xF2))) + 0x2));
    w0_0 = *(float *)0xC08FBC0;
    w0_1 = (((struct o24_float *)(R14))->v);
    w0_2 = (((struct o48_float *)(R14))->v);
    (((struct oEE_ushort *)(R14))->v) = (int)((w0_1 * w0_0) / w0_2);
    v0_1 = (int)((((struct oEE_short *)(R14))->v)) >= 0;
    v0_0 = (0xEE);
    FPUL_ = ((int)((w0_1 * w0_0) / w0_2));
    if (v0_1) goto L_C08FAFC;
    *(unsigned short *)((R14 + v0_0)) = (-(*(short *)((R14 + v0_0))));
    L_C08FAFC:;
    w0_0 = math_signed_sqrt((float)(*(short *)((R14 + v0_0))));
    (((struct oEE_ushort *)(R14))->v) = (int)w0_0;
    FPUL_ = ((int)w0_0);
    L_C08FB0E:;
    (((struct o71A8_uchar *)(R14))->v) = 0x0;
    (((struct o71A9_uchar *)(R14))->v) = (*(signed char *)((R14 + 0xEE)));
    (((struct oEC_ushort *)(R14))->v) = (((((struct oEC_short *)(R14))->v)) + 0x1);
    goto L_C08FB24;
    L_C08FA92:;
    v0_0 = (*(signed char *)((R14 + 0x71AA))) == 0;
    if (v0_0) goto L_C08FB24;
    pl_start_motion(R14, 0x2, ((*(signed char *)((R14 + 0xF2))) + 0x1));
    goto L_C08FB0E;
    L_C08FA34:;
    *(unsigned short *)((R14 + v0_0)) = ((*(short *)((R14 + v0_0))) - 1);
    goto L_C08FA3A;
}

int FUN_0c01a5cc(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t1;
    register int t4;
    register int t7;
    register int t10;
    register int t11;
    register int t12;
    register int t14;
    register int t23;
    register int t27;
    register int t28;
    register int t30;
    register int t48;
    register int t57;
    register int t66;
    register int t69;
    register int t72;
    register int t75;
    register int t76;
    register int t77;
    register int t79;
    register int t88;
    register int t92;
    register int t93;
    register int t95;
    register int t113;

    t0 = *(signed char *)0xC362339;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t1 = opt_page2_pad_pressed(0x10);
        t12 = 0x4;
        if ((signed char)t1 != 0) {
            t12 = 0x0;
        }
        t4 = opt_page2_pad_pressed(0x20);
        if ((signed char)t4 != 0) {
            t12 = 0x1;
        }
        t7 = opt_page2_pad_pressed(0x40);
        if ((signed char)t7 != 0) {
            t12 = 0x2;
        }
        t10 = opt_page2_pad_pressed(0x80);
        t11 = *(signed char *)0xC36233E;
        if ((signed char)t10 != 0) {
            t12 = 0x3;
        }
        t14 = *(int *)(((t11 << 2) + 0xC17FFE8));
        if ((int)(signed char)t12 <= (int)0x3) {
            (((struct o7_uchar *)0xC362338)->v) = (*(signed char *)((t14 + (((*(signed char *)0xC36233F) << 2) + (signed char)t12))));
            snd_play_side_se(0x0, 0x4C);
        }
        t23 = opt_page2_pad_pressed(0x4);
        if ((signed char)t23 != 0) {
            t27 = *(signed char *)0xC36233E;
            t28 = *(signed char *)0xC36233F;
            if ((signed char)t27 != 11) {
                t30 = *(int *)((((signed char)t27 << 2) + 0xC180048));
                *(unsigned int *)(((int)stk + 0)) = t30;
                FUN_0c0a4070((*(signed char *)(((t30 + t28) + 0x0))), t27);
            } else {
                if ((*(signed char *)0xC362341) == 0) {
                    bgm_play_by_index((*(signed char *)((t28 + 0xC11BEF8))));
                    (((struct o9_uchar *)0xC362338)->v) = 0x3C;
                }
            }
        }
        if ((*(signed char *)0xC362341) != 0) {
            (((struct o9_uchar *)0xC362338)->v) = ((*(signed char *)0xC362341) - 1);
        }
        t48 = opt_page2_pad_pressed(0x2);
        if ((signed char)t48 != 0) {
            (((struct o0_uchar *)0xC362338)->v) = ((*(signed char *)0xC362338) - 1);
            (((struct o3_uchar *)0xC362338)->v) = 0x0;
            (((struct o2_uchar *)0xC362338)->v) = 0x0;
            (((struct o1_uchar *)0xC362338)->v) = 0x0;
            if ((*(signed char *)0xC36233E) == 11) {
                bgm_stop_slot(0x0);
            } else {
                FUN_0c0a2f5c();
            }
            snd_play_side_se(0x0, 0x4D);
            return ((int (*)(int))(opt_page2_run_objects_in_mask))(0x2);
        }
        return (signed char)t48;
    }
    (((struct o1_uchar *)0xC362338)->v) = ((*(signed char *)0xC362339) + 0x1);
    (((struct o7_uchar *)0xC362338)->v) = 0x0;
    t57 = ((int (*)(int, int, int, int))(opt_page2_run_objects_in_mask))(0x1, a5, a6, a7);
    FUN_0c01ab4c(0x2);
    FUN_0c01ac74(0x2);
    FUN_0c01ad40(0x2);
    if ((*(signed char *)0xC36233E) != 11) {
        FUN_0c0a3426((*(signed char *)0xC36233E));
    }
    t66 = opt_page2_pad_pressed(0x10);
    t77 = 0x4;
    if ((signed char)t66 != 0) {
        t77 = 0x0;
    }
    t69 = opt_page2_pad_pressed(0x20);
    if ((signed char)t69 != 0) {
        t77 = 0x1;
    }
    t72 = opt_page2_pad_pressed(0x40);
    if ((signed char)t72 != 0) {
        t77 = 0x2;
    }
    t75 = opt_page2_pad_pressed(0x80);
    t76 = *(signed char *)0xC36233E;
    if ((signed char)t75 != 0) {
        t77 = 0x3;
    }
    t79 = *(int *)(((t76 << 2) + 0xC17FFE8));
    if ((int)(signed char)t77 <= (int)0x3) {
        (((struct o7_uchar *)0xC362338)->v) = (*(signed char *)((t79 + (((*(signed char *)0xC36233F) << 2) + (signed char)t77))));
        snd_play_side_se(0x0, 0x4C);
    }
    t88 = opt_page2_pad_pressed(0x4);
    if ((signed char)t88 != 0) {
        t92 = *(signed char *)0xC36233E;
        t93 = *(signed char *)0xC36233F;
        if ((signed char)t92 != 11) {
            t95 = *(int *)((((signed char)t92 << 2) + 0xC180048));
            *(unsigned int *)(((int)stk + 0)) = t95;
            FUN_0c0a4070((*(signed char *)(((t95 + t93) + 0x0))), t92);
        } else {
            if ((*(signed char *)0xC362341) == 0) {
                bgm_play_by_index((*(signed char *)((t93 + 0xC11BEF8))));
                (((struct o9_uchar *)0xC362338)->v) = 0x3C;
            }
        }
    }
    if ((*(signed char *)0xC362341) != 0) {
        (((struct o9_uchar *)0xC362338)->v) = ((*(signed char *)0xC362341) - 1);
    }
    t113 = opt_page2_pad_pressed(0x2);
    if ((signed char)t113 != 0) {
        (((struct o0_uchar *)0xC362338)->v) = ((*(signed char *)0xC362338) - 1);
        (((struct o3_uchar *)0xC362338)->v) = 0x0;
        (((struct o2_uchar *)0xC362338)->v) = 0x0;
        (((struct o1_uchar *)0xC362338)->v) = 0x0;
        if ((*(signed char *)0xC36233E) == 11) {
            bgm_stop_slot(0x0);
        } else {
            FUN_0c0a2f5c();
        }
        snd_play_side_se(0x0, 0x4D);
        return ((int (*)(int))(opt_page2_run_objects_in_mask))(0x2);
    }
    return (signed char)t113;
}

int FUN_0c08dc24(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t6;
    register int t28;
    register int t29;
    register int t49;
    register int t74;
    register int t55;
    register int t59;
    register int t30;
    register int t31;
    register int t32;
    register int t33;
    register int t34;
    register int t35;
    register int t36;
    register int t37;
    register int t38;
    register int t39;
    register int t40;
    int t41;

    t0 = (((struct oF4_int *)(a4))->v);
    (((struct oF8_uint *)(a5))->v) = t0;
    if (t0 == 0) {
        (((struct oF8_uint *)(a5))->v) = (*(int *)0xC338A98);
    }
    t6 = obj_can_interact(a5, 0xA, ((*(signed char *)((a4 + 0x3))) & 0x1), a7);
    if (t6 == 0) {
        return t6;
    }
    (((struct o315_uchar *)(a5))->v) = ((*(signed char *)((a5 + 0x315))) - 1);
    if ((int)(*(signed char *)((a5 + 0x315))) > 0) {
        return (obj_set_mode_owner(a5, 0x1, ((*(signed char *)((a4 + 0x3))) & 0x1)));
    }
    (((struct o315_uchar *)(a5))->v) = 0x0;
    if ((*(signed char *)((a5 + 0x4))) == 7) {
        obj_set_mode_owner(a5, 0x1, ((*(signed char *)((a4 + 0x3))) & 0x1));
        return fx_spawn_hit_effect_set(a5, 0x1);
    }
    t28 = (((struct oF8_int *)(a5))->v);
    t29 = *(signed char *)((t28 + 0x4));
    if (((unsigned char)t29 != 3) && (((unsigned char)t29 != 4) && (((unsigned char)t29 != 5) && (((unsigned char)t29 != 1) && ((t30 = *(signed char *)((t28 + 0x10)), ((unsigned char)t30 & 0x10) != 16) && ((t31 = *(signed char *)((a5 + 0x4)), t31 != 12) && ((t32 = (((struct oF8_int *)(a5))->v), t33 = *(signed char *)((t32 + 0x4)), (unsigned char)t33 != 6) || ((t34 = *(signed char *)((a5 + 0x4)), t34 != 1) || ((t35 = *(signed char *)((a5 + 0x30D)), t35 != 6) && ((t36 = *(signed char *)((a5 + 0x30D)), t36 != 7) && ((t37 = *(signed char *)((a5 + 0x30D)), t37 != 8) && ((t38 = *(signed char *)((a5 + 0x30D)), t38 != 9) && ((t39 = *(signed char *)((a5 + 0x30D)), t39 != 10) && ((t40 = *(signed char *)((a5 + 0x30D)), t40 != 11) && (t41 = *(signed char *)((a5 + 0x30D)), t41 != 12))))))))))))))) {
    } else {
        obj_set_mode_owner(a5, 0x2, ((*(signed char *)((a4 + 0x3))) & 0x1));
    }
    t49 = *(signed char *)((a4 + 0x100));
    t74 = t49;
    if (t49 == 47) {
        t55 = *(signed char *)((((((struct oF8_int *)(a5))->v)) + 0x5));
        t74 = t55;
        if (t55 != 0) {
            t59 = *(signed char *)((((((struct oF8_int *)(a5))->v)) + 0x4));
            t74 = (unsigned char)t59;
            if ((unsigned char)t59 == 7) {
                t74 = (obj_set_mode_owner(a5, 0x2, ((*(signed char *)((a4 + 0x3))) & 0x1)));
            }
        }
    }
    return t74;
}

int menu_option_update(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F4724;
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                (((struct o2_uchar *)0xC7F306E)->v) = 0x1;
                (((struct o0_uchar *)0xC7F306E)->v) = 0x1;
                *(unsigned char *)0xC7F2F04 = 0x0;
                t1 = 0x42;
            }
            return t1;
        }
        t0 = *(signed char *)0xC7F4725;
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 3) {
                        if (t0 != 4) {
                            return t0;
                        }
                        return menu_option_run_item();
                    }
                    return FUN_0c0d780c();
                }
                return FUN_0c0d7758(f4);
            }
            return FUN_0c0d75bc(a4, a5, a6, a7);
        }
        game_reset_objects();
        (((struct o1_uchar *)0xC7F4724)->v) = ((*(signed char *)0xC7F4725) + 0x1);
        (((struct o2_uchar *)0xC7F4724)->v) = 0x0;
        (((struct o3_uchar *)0xC7F4724)->v) = 0x0;
        (((struct o4_uchar *)0xC7F4724)->v) = 0x0;
        t0 = attract_take_step3_flag();
        t1 = t0;
        if (t0 != 0) {
            (((struct o1_uchar *)0xC7F4724)->v) = ((*(signed char *)0xC7F4725) + 0x1);
            (((struct o16_uchar *)0xC7F4724)->v) = 0x1;
            t1 = 0x16;
        }
        return t1;
    }
    game_reset_objects();
    (((struct o8_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
    (((struct o4_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
    (((struct o0_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
    (((struct o0_uchar *)0xC7F4724)->v) = 0x1;
    (((struct o4_uchar *)0xC7F4724)->v) = 0x0;
    (((struct o3_uchar *)0xC7F4724)->v) = 0x0;
    (((struct o2_uchar *)0xC7F4724)->v) = 0x0;
    (((struct o1_uchar *)0xC7F4724)->v) = 0x0;
    cam_reset_shake(0x0, 0x0, 0x63, 0x0);
    t0 = *(signed char *)0xC7F4755;
    (((struct o15_uchar *)0xC7F4724)->v) = t0;
    if (t0 != 0) {
        (((struct o20_uchar *)0xC7F4724)->v) = 0x1;
        (((struct o21_uchar *)0xC7F4724)->v) = 0x1;
        (((struct o22_uchar *)0xC7F4724)->v) = 0x1;
        (((struct o23_uchar *)0xC7F4724)->v) = 0x1;
    }
    (((struct o16_uchar *)0xC7F4724)->v) = 0x0;
    res_switch_scene(0x2);
    return res_switch_scene(0xD);
}

int FUN_0c09e910(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_3 = a5;
    v0_2 = (signed char)(pl_get_held_item_class(v0_1, v0_3, a6)) == 0;
    v0_0 = (v0_1);
    if (v0_2) goto L_C09E926;
    L_C09EA54:;
    v0_1 = (0x0);
    L_C09EA56:;
    return v0_1;
    L_C09E926:;
    if (((*(signed char *)((v0_0 + 0x72AF))) != 0)) goto L_C09E932;
    goto L_C09EA54;
    L_C09E932:;
    v0_1 = (0x24);
    if ((!(0.0f > (((((struct o24_float *)(v0_0))->v)) - ((((struct o24_float *)((*(int *)((v0_0 + 0x1C)))))->v)))))) goto L_C09E950;
    w0_0 = *(float *)(((*(int *)((v0_0 + 0x1C))) + v0_1));
    w0_1 = (w0_0);
    w0_0 = (((-(*(float *)((v0_0 + v0_1)))) + w0_0));
    L_C09E958:;
    if ((!(w0_0 > 100.0f))) goto L_C09E964;
    goto L_C09EA54;
    L_C09E964:;
    if (((*(signed char *)(((*(int *)((v0_0 + 0x1C))) + 0x71BC))) != 0)) goto L_C09EA54;
    v0_1 = *(int *)((v0_0 + 0x1C));
    v0_2 = *(signed char *)((v0_1 + 0x71BA));
    v0_1 = (v0_1);
    v0_3 = (v0_2);
    if ((v0_2 != 10)) goto L_C09E98E;
    if (((int)(unsigned char)(*(signed char *)((v0_1 + 0x7206))) > (int)0xF)) goto L_C09E98E;
    if (((*(signed char *)((v0_1 + 0x100))) != 0)) goto L_C09E9AA;
    L_C09E98E:;
    if ((v0_3 != 11)) goto L_C09EA54;
    if (((int)(unsigned char)(*(signed char *)((v0_1 + 0x7206))) > (int)0xF)) goto L_C09EA54;
    if (((*(signed char *)((v0_1 + 0x100))) == 0)) goto L_C09EA54;
    L_C09E9AA:;
    v0_1 = (0x1);
    if (((((((struct o2E4_int *)(v0_0))->v)) & 4) == 0)) goto L_C09E9D8;
    (((struct o72B1_uchar *)(v0_0))->v) = v0_1;
    (((struct o7221_uchar *)(v0_0))->v) = 0xC;
    L_C09EA50:;
    v0_1 = (0x1);
    goto L_C09EA56;
    L_C09E9D8:;
    if (((((((struct o2E4_int *)(v0_0))->v)) & 240) == 0)) goto L_C09EA54;
    (((struct o72B1_uchar *)(v0_0))->v) = v0_1;
    v0_2 = pl_stick_dir_angle(v0_0);
    v0_3 = *(short *)0xC7F31E0;
    v0_4 = pl_angle_to_opponent(v0_0);
    v0_1 = ((*(int *)((v0_0 + 0x1C))));
    v0_5 = ((unsigned short)((unsigned short)(v0_3 + v0_2) - v0_4));
    if (((0x8000 & (unsigned short)((unsigned short)(v0_3 + v0_2) - v0_4)) == 0)) goto L_C09EA06;
    v0_5 = ((v0_5 | 0xFFFF0000));
    L_C09EA06:;
    if (((*(signed char *)((0x71BA + v0_1))) == 11)) goto L_C09EA22;
    if (((int)v0_5 < (int)0xFFFFF1C8)) goto L_C09EA22;
    if (((int)v0_5 > (int)0xE38)) goto L_C09EA22;
    (((struct o7221_uchar *)(v0_0))->v) = 0x9;
    goto L_C09EA50;
    L_C09EA22:;
    if (((int)v0_5 <= 0)) goto L_C09EA34;
    if (((int)v0_5 > (int)0x471C)) goto L_C09EA34;
    (((struct o7221_uchar *)(v0_0))->v) = 0xA;
    goto L_C09EA50;
    L_C09EA34:;
    if (((int)v0_5 >= 0)) goto L_C09EA46;
    if (((int)v0_5 < (int)0xFFFFB8E4)) goto L_C09EA46;
    (((struct o7221_uchar *)(v0_0))->v) = 0xB;
    goto L_C09EA50;
    L_C09EA46:;
    (((struct o7221_uchar *)(v0_0))->v) = (FUN_0c09de5e(v0_0));
    goto L_C09EA50;
    L_C09E950:;
    w0_0 = (((*(float *)((v0_0 + v0_1))) - (*(float *)(((*(int *)((v0_0 + 0x1C))) + v0_1)))));
    goto L_C09E958;
}

int FUN_0c096a64(int a4)
{
    int stk[1];
    register int t18;
    register float t21;
    register float t22;
    register int t44;
    register float t49;
    register int t87;

    if ((((((struct o2DC_int *)(a4))->v)) & 16) != 0) {
        if ((*(signed char *)((a4 + 0x7237))) != 0) {
            if ((*(signed char *)((a4 + 0x71BA))) == 26) {
                pl_start_motion(a4, 0x2, 0xD9);
            }
            (((struct o7237_uchar *)(a4))->v) = 0x0;
        }
        t18 = hit_find_interactable_contact(a4, 0x2);
        *(unsigned char *)(((int)stk + 0)) = t18;
        t87 = 0x0;
        if ((signed char)t18 != 0) {
            t21 = FUN_0c02649a((*(int *)((((((*(signed char *)(((int)stk + 0))) - 1) << 2) + (0x294 + a4)) + 0x0))), 0x0);
            t22 = FUN_0c02649a(a4, 0x0);
            if (t21 > t22) {
                (((struct o3C_float *)(a4))->v) = 5.0f;
                t87 = 0x0;
            } else {
                (((struct o3C_float *)(a4))->v) = 0.0f;
                t87 = 0x2;
            }
        }
    } else {
        t87 = 0x0;
        if ((((((struct o2DC_int *)(a4))->v)) & 32) != 0) {
            if ((*(signed char *)((a4 + 0x7237))) != 1) {
                if ((*(signed char *)((a4 + 0x71BA))) == 26) {
                    pl_start_motion(a4, 0x2, 0xDA);
                }
                (((struct o7237_uchar *)(a4))->v) = 0x1;
            }
            t44 = hit_find_interactable_contact(a4, 0x2);
            t87 = 0x0;
            if ((signed char)t44 != 0) {
                if (((((struct o0_float *)0xC096C20)->v)) > ((((struct o24_float *)((*(int *)((((0x294 + a4) + (((signed char)t44 - 1) << 2)) + 0x0)))))->v))) {
                    t49 = FUN_0c02649a((*(int *)((((0x294 + a4) + (((signed char)t44 - 1) << 2)) + 0x0))), 0x1);
                    if (!((((((struct o24_float *)(a4))->v)) + ((((struct o4_float *)0xC096C20)->v))) > t49)) {
                        (((struct o24_float *)(a4))->v) = (((((struct o2D4_float *)(a4))->v)) + ((((struct o8_float *)0xC096C20)->v)));
                        (((struct o274_float *)(a4))->v) = 1.0f;
                        (((struct o3C_float *)(a4))->v) = 0.0f;
                        t87 = 0x1;
                    } else {
                        (((struct o3C_float *)(a4))->v) = ((((struct o4_float *)0xC096C20)->v));
                        t87 = 0x0;
                    }
                } else {
                    (((struct o3C_float *)(a4))->v) = ((((struct o4_float *)0xC096C20)->v));
                    t87 = 0x0;
                }
            }
        }
    }
    return t87;
}

int FUN_0c09660c(int a4)
{
    int stk[1];
    register int t18;
    register float t21;
    register float t22;
    register float u24;
    register int t44;
    register float t48;
    register int t84;

    if ((((((struct o2DC_int *)(a4))->v)) & 16) != 0) {
        if ((*(signed char *)((a4 + 0x7237))) != 0) {
            if ((*(signed char *)((a4 + 0x71BA))) == 34) {
                pl_start_motion(a4, 0x2, 0xD5);
            }
            (((struct o7237_uchar *)(a4))->v) = 0x0;
        }
        t18 = hit_find_interactable_contact(a4, 0x1);
        *(unsigned char *)(((int)stk + 0)) = t18;
        if ((signed char)t18 != 0) {
            t21 = FUN_0c02649a((*(int *)((((((*(signed char *)(((int)stk + 0))) - 1) << 2) + (0x294 + a4)) + 0x0))), 0x0);
            t22 = FUN_0c02649a(a4, 0x0);
            u24 = 0.0f;
            if (t21 > t22) {
                u24 = 5.0f;
            }
            (((struct o3C_float *)(a4))->v) = u24;
        }
        t84 = 0x0;
    } else {
        t84 = 0x0;
        if ((((((struct o2DC_int *)(a4))->v)) & 32) != 0) {
            if ((*(signed char *)((a4 + 0x7237))) != 1) {
                if ((*(signed char *)((a4 + 0x71BA))) == 34) {
                    pl_start_motion(a4, 0x2, 0xD6);
                }
                (((struct o7237_uchar *)(a4))->v) = 0x1;
            }
            t44 = hit_find_interactable_contact(a4, 0x1);
            t84 = 0x0;
            if ((signed char)t44 != 0) {
                if (300.0f > ((((struct o24_float *)((*(int *)((((0x294 + a4) + (((signed char)t44 - 1) << 2)) + 0x0)))))->v))) {
                    t48 = FUN_0c02649a((*(int *)((((0x294 + a4) + (((signed char)t44 - 1) << 2)) + 0x0))), 0x1);
                    if (!((((((struct o24_float *)(a4))->v)) + -11.7099991f) > t48)) {
                        (((struct o24_float *)(a4))->v) = (((((struct o2D4_float *)(a4))->v)) + -1.0f);
                        (((struct o274_float *)(a4))->v) = 1.0f;
                        (((struct o3C_float *)(a4))->v) = 0.0f;
                        t84 = 0x1;
                    } else {
                        (((struct o3C_float *)(a4))->v) = (*(float *)0xC096870);
                        t84 = 0x0;
                    }
                } else {
                    (((struct o3C_float *)(a4))->v) = (*(float *)0xC096870);
                    t84 = 0x0;
                }
            }
        }
    }
    return t84;
}

int FUN_0c0d5f6a(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t4;
    register int t8;
    register int t10;
    register int t12;
    register int t14;
    register int t16;
    register int t18;
    register int t20;
    register int t22;
    register int t24;

    t0 = FUN_0c0d5f3a(a4);
    if (t0 != 0) {
        t4 = *(signed char *)0xC7F2EE4;
        if ((int)(unsigned char)t4 >= (int)0x8) {
            return (unsigned char)t4;
        }
        return ui_draw_no_challenge((*(signed char *)((a4 + 0x9))));
    }
    if ((*(signed char *)0xC7F3070) != 0) {
        return t0;
    }
    t8 = *(signed char *)((a4 + 0x1));
    if (t8 != 0) {
        if (t8 != 1) {
            if (t8 != 2) {
                if (t8 != 3) {
                    if (t8 != 4) {
                        if (t8 != 5) {
                            return t8;
                        }
                        return FUN_0c0d6ef6(a4);
                    }
                    return FUN_0c0d6ca2(a4);
                }
                ui_draw_continue_countdown(a4);
                t10 = *(signed char *)0xC7F2EE4;
                if ((int)(unsigned char)t10 < (int)0x8) {
                    t12 = *(signed char *)0xC494D28;
                    if (t12 == 0) {
                        return ((int (*)(int, int, int, int))(0xC0D5ECE))(a4, a5, a6, a7);
                    }
                    return t12;
                }
                return (unsigned char)t10;
            }
            FUN_0c0d6212(a4);
            t14 = *(signed char *)0xC7F2EE4;
            if ((int)(unsigned char)t14 < (int)0x8) {
                t16 = *(signed char *)0xC494D28;
                if (t16 == 0) {
                    return ((int (*)(int, int, int, int))(0xC0D5CEE))(a4, a5, a6, a7);
                }
                return t16;
            }
            return (unsigned char)t14;
        }
        FUN_0c0d6190(a4);
        t18 = *(signed char *)0xC7F2EE4;
        if ((int)(unsigned char)t18 < (int)0x8) {
            t20 = *(signed char *)0xC494D28;
            if (t20 == 0) {
                return ((int (*)(int, int, int, int))(0xC0D5CC4))(a4, a5, a6, a7);
            }
            return t20;
        }
        return (unsigned char)t18;
    }
    FUN_0c0d6098(a4);
    t22 = *(signed char *)0xC7F2EE4;
    if ((int)(unsigned char)t22 < (int)0x8) {
        t24 = *(signed char *)0xC494D28;
        if (t24 == 0) {
            return ((int (*)(int, int, int, int))(0xC0D5C9A))(a4, a5, a6, a7);
        }
        return t24;
    }
    return (unsigned char)t22;
}
