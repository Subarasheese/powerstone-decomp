/* Straight-line functions with calls and guards (batch gen_cg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2A_short { char p[0x2A]; short v; };
struct o2A_ushort { char p[0x2A]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o308_float { char p[0x308]; float v; };
struct o3620_uchar { char p[0x3620]; unsigned char v; };
struct o36D0_uchar { char p[0x36D0]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5CA0_uchar { char p[0x5CA0]; unsigned char v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o6C_int { char p[0x6C]; int v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o7243_uchar { char p[0x7243]; unsigned char v; };
struct o7254_float { char p[0x7254]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF2_short { char p[0xF2]; short v; };
int ending_main(void);
int FUN_0c01b144(int, int);
int FUN_0c01b274(int);
int opt_page3_spawn_bg_scroll(int);
extern int opt_page3_run_objects_in_mask();
int FUN_0c01b4d6(int);
int FUN_0c01b4f2(int, int);
extern int FUN_0c01b570();
int opt_page_leave_reset(void);
int fx_spawn_0387ec(int);
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
int ai_clear_op_state(void);
int ai_calc_goal_angle(int, float);
int ai_calc_angle_to_goal_point(int);
int ai_calc_dist_to_goal_point(int);
int ai_angle_to_pad_dir(int);
int FUN_0c0555dc(void);
int game_reset_objects(void);
int obj_destroy(int);
int FUN_0c0593e0(int);
extern int obj_tick_class();
int FUN_0c05f2d4(int, int);
extern int res_switch_scene();
int FUN_0c06231c(int, int, int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int hit_probe_step_by_velocity(int, int, float);
int pl_apply_velocity(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a2f66(int);
int bgm_stop_streams(void);
int FUN_0c0a3762(int, int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int cam_request_mode(int, int, int);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
float math_pow_float(float, float);
float math_rand_float(void);
float math_sin_angle16(int);
int _modls(void);
int _modlu(void);
int _quick_odd_mvn(void);
int FUN_0c0fddbe(int, int, int);
int FUN_0c108fe8(int);
int FUN_0c10b7b0(int, int, int, int, int);
extern void _builtin_prefetch(void *);
extern float _builtin_sqrtf(float);
int kmiReqRestOfDMA(int);
int thunk_FUN_0c062242(int);
int FUN_0c0cb5d6(int a4);
int kmFlipFrameBuffer(int a4, int a5, int a6, int a7);
int pl_kraken_attack_kind2_phase3(int a4);
int pl_wangtang_special0_update(int a4);
int ai_op67(int a4, float f4);
int fx_tick_0382a8(int a4);
int ai_op55(int a4, int a5, int a6, int a7);
int fx_tick_036fe4(int a4);
int opt_page3_main(int a4, int a5, int a6, int a7);
int FUN_0c0fcbc0(int a4, int a5, int a6, int a7);
int FUN_0c03f434(int a4, int a5, int a6, int a7);

int kmFlipFrameBuffer(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t5;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t17;
    register int t71;
    register int t47;
    register int t56;
    register int t87;
    register int t77;

    if ((*(int *)0xC346FF8) == 0) {
        if (((((struct o0_int *)0xC8172FC)->v)) == 0) {
            *(unsigned int *)(((((((struct o18_int *)0xC8172FC)->v)) << 2) + 0xC817304)) = 0x1;
            (((struct o30_uint *)0xC8172FC)->v) = 0x1;
        } else {
            *(unsigned int *)0xC842714 = (*(int *)0xFFD8000C);
            t5 = (((struct o18_int *)0xC8172FC)->v);
            (((struct o20_uint *)0xC8172FC)->v) = t5;
            (((struct o4_uint *)0xC8171C8)->v) = 0x1;
            (((struct o28_uint *)0xC8172FC)->v) = 0x0;
            (((struct o24_uint *)0xC8172FC)->v) = (*(int *)0xC817420);
            (((struct o30_uint *)0xC8172FC)->v) = 0x1;
            *(unsigned int *)0xC8426D0 = 0x0;
            *(unsigned int *)(((t5 << 2) + 0xC817304)) = 0x2;
            if ((((((struct o0_int *)0xC8173D8)->v)) & 32) != 0) {
                (((struct o0_uint *)0xFF000038)->v) = 0x10;
                (((struct o4_uint *)0xFF000038)->v) = 0x10;
                FUN_0c0fddbe(0xE0000000, 0xC15A9B0, 0x4);
                _builtin_prefetch((void *)0xE0000000);
                kmiReqRestOfDMA(((((struct o4_int *)0xC8173D8)->v)));
            } else {
                t11 = (((struct o18_int *)0xC8172FC)->v);
                t12 = (((struct o18_int *)0xC8172FC)->v);
                t13 = (((struct o4_int *)0xC8173D8)->v);
                t14 = (((struct o4_int *)0xC8173D8)->v);
                for (;;) {
                    *(int *)((int)stk + 0) = ((int)stk + 4);
                    t17 = FUN_0c10b7b0(0x10000000, (*(int *)(((((t11 << 2) + 0xC817338) + ((t14 << 2) << 2)) + 0x0))), ((*(int *)(((((t12 << 2) + 0xC817388) + ((t13 << 2) << 2)) + 0x0))) + 0x20), 0x10, ((int)stk + 4));
                    if (t17 != 0x100) {
                        break;
                    }
                }
                kmiReqRestOfDMA(((((struct o4_int *)0xC8173D8)->v)));
            }
        }
    }
    (((struct o2C_uint *)0xC8172FC)->v) = 0x0;
    t71 = 0x0;
    if (((((struct o30_int *)0xC8172FC)->v)) != 0) {
        for (;;) {
            t47 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC817228)->v))))(((((struct o4_int *)0xC817228)->v)), a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            if ((unsigned int)((((struct o2C_int *)0xC8172FC)->v)) > (unsigned int)((((((struct o20_int *)0xC8171C8)->v)) + ((((struct o1C_int *)0xC8171C8)->v))) + 0x1)) {
                break;
            }
            if (((((struct o30_int *)0xC8172FC)->v)) == 0) {
                if (0x0 != 0) {
                    (((struct o0_uint *)0xC8171C8)->v) = 0x0;
                    (((struct o2C_uint *)0xC8172FC)->v) = 0x0;
                    if (((((struct o30_int *)0xC8172FC)->v)) != 0) {
                        for (;;) {
                            t56 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC817228)->v))))(((((struct o4_int *)0xC817228)->v)), a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                            if ((unsigned int)((((struct o2C_int *)0xC8172FC)->v)) > (unsigned int)0x14) {
                                break;
                            }
                            if (((((struct o30_int *)0xC8172FC)->v)) == 0) {
                                if (0x0 != 0) {
                                    FUN_0c108fe8(0x4);
                                }
                                *(volatile int *)0xC817314;
                                return ((int (*)(void))(0xC0F5E96))();
                            }
                        }
                        if (0x1 != 0) {
                            FUN_0c108fe8(0x4);
                        }
                    } else {
                        if (0x0 != 0) {
                            FUN_0c108fe8(0x4);
                        }
                    }
                }
                *(volatile int *)0xC817314;
                return ((int (*)(void))(0xC0F5E96))();
            }
        }
        t71 = 0x1;
    }
    if (t71 != 0) {
        (((struct o0_uint *)0xC8171C8)->v) = 0x0;
        (((struct o2C_uint *)0xC8172FC)->v) = 0x0;
        t87 = 0x0;
        if (((((struct o30_int *)0xC8172FC)->v)) != 0) {
            for (;;) {
                t77 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC817228)->v))))(((((struct o4_int *)0xC817228)->v)), a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                if ((unsigned int)((((struct o2C_int *)0xC8172FC)->v)) > (unsigned int)0x14) {
                    break;
                }
                if (((((struct o30_int *)0xC8172FC)->v)) == 0) {
                    if (0x0 != 0) {
                        FUN_0c108fe8(0x4);
                    }
                    *(volatile int *)0xC817314;
                    return ((int (*)(void))(0xC0F5E96))();
                }
            }
            t87 = 0x1;
        }
        if (t87 != 0) {
            FUN_0c108fe8(0x4);
        }
    }
    *(volatile int *)0xC817314;
    return ((int (*)(void))(0xC0F5E96))();
}

int FUN_0c0fcbc0(int a4, int a5, int a6, int a7)
{
    if (((0xFF00 & a7) != 0x1000) && ((0xFF00 & a7) != 0x1100)) {
        *(unsigned int *)((a4 + 0x0)) = 0x2;
    } else {
        *(unsigned int *)((a4 + 0x0)) = 0x3;
    }
    if (((0xFF00 & a7) != 0x500) && ((0xFF00 & a7) != 0x600)) {
        if (((0xFF00 & a7) != 0x700) && ((0xFF00 & a7) != 0x800)) {
            *(unsigned int *)((a4 + 0x4)) = 0x1;
            if ((unsigned char)a7 != 0) {
                if ((unsigned char)a7 != 1) {
                    if ((unsigned char)a7 != 2) {
                        if ((unsigned char)a7 != 3) {
                            if ((unsigned char)a7 != 4) {
                            } else {
                                *(unsigned int *)((a4 + 0x8)) = 0x20000000;
                            }
                        } else {
                            *(unsigned int *)((a4 + 0x8)) = 0x18000000;
                        }
                    } else {
                        *(unsigned int *)((a4 + 0x8)) = 0x10000000;
                    }
                } else {
                    *(unsigned int *)((a4 + 0x8)) = 0x8000000;
                }
            } else {
                *(unsigned int *)((a4 + 0x8)) = 0x0;
            }
        } else {
            if (((((struct o9C_int *)((*(int *)0xC347628)))->v)) == 3) {
                *(unsigned int *)((a4 + 0x4)) = 0x3;
            } else {
                *(unsigned int *)((a4 + 0x4)) = 0x1;
            }
            *(unsigned int *)((a4 + 0x8)) = 0x30000000;
        }
    } else {
        if (((((struct o9C_int *)((*(int *)0xC347628)))->v)) == 3) {
            *(unsigned int *)((a4 + 0x4)) = 0x3;
        } else {
            *(unsigned int *)((a4 + 0x4)) = 0x1;
        }
        *(unsigned int *)((a4 + 0x8)) = 0x28000000;
    }
    *(unsigned int *)((a4 + 0xC)) = a5;
    *(unsigned int *)((a4 + 0x10)) = a6;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    if (((0xFF00 & a7) == 0xF00) || (((0xFF00 & a7) == 0x200) || (((0xFF00 & a7) == 0x400) || (((0xFF00 & a7) == 0x1100) || (((0xFF00 & a7) == 0x600) || ((0xFF00 & a7) == 0x800)))))) {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x1);
    }
    return ((int (*)(int, int, int, int))(0xC0FCDB0))(a4, a5, a6, 0x4);
}

