/* Straight-line functions with calls and guards (batch gen_cg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiWriteRegister(int, int);
int kmiReadRegister(int);
int FUN_0c0fcf46(int);
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
struct o18_uint { char p[0x18]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
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
int thunk_math_mat_get_translate(int, int);
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

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    int R14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_4 = a4;
    v0_0 = a5;
    v0_1 = a6;
    v0_2 = a7;
    v0_3 = (0x0);
    R14 = (0x1);
    if (((*(int *)0xC346FF8) == 0)) goto L_C0F5CA2;
    L_C0F5DCA:;
    (((struct o2C_uint *)0xC8172FC)->v) = v0_3;
    v0_4 = (v0_3);
    if ((((((struct o30_int *)0xC8172FC)->v)) == 0)) goto L_C0F5E00;
    L_C0F5DD8:;
    v0_5 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC817228)->v))))(((((struct o4_int *)0xC817228)->v)), v0_0, v0_1, v0_2, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    if (((unsigned int)((((struct o2C_int *)0xC8172FC)->v)) <= (unsigned int)((((((struct o20_int *)0xC8171C8)->v)) + ((((struct o1C_int *)0xC8171C8)->v))) + 0x1))) goto L_C0F5DF8;
    v0_4 = (R14);
    L_C0F5E00:;
    if ((v0_4 == 0)) goto L_C0F5E92;
    (((struct o0_uint *)0xC8171C8)->v) = v0_3;
    (((struct o2C_uint *)0xC8172FC)->v) = v0_3;
    v0_4 = (v0_3);
    if ((((((struct o30_int *)0xC8172FC)->v)) == 0)) goto L_C0F5E88;
    v0_5 = (0x14);
    L_C0F5E18:;
    v0_6 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC817228)->v))))(((((struct o4_int *)0xC817228)->v)), v0_0, v0_1, v0_2, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    if (((unsigned int)((((struct o2C_int *)0xC8172FC)->v)) <= (unsigned int)v0_5)) goto L_C0F5E80;
    v0_4 = (R14);
    L_C0F5E88:;
    if ((v0_4 == 0)) goto L_C0F5E92;
    FUN_0c108fe8(0x4);
    L_C0F5E92:;
    (((struct o18_uint *)0xC8172FC)->v) = (((((struct o18_int *)0xC8172FC)->v)) + 0x1);
    (((struct o18_uint *)0xC8172FC)->v) = (((((struct o18_int *)0xC8172FC)->v)) & 0x3);
    *(unsigned int *)(((((((struct o18_int *)0xC8172FC)->v)) << 2) + 0xC817304)) = v0_3;
    if ((((((struct o0_int *)0xC8172FC)->v)) == 1)) goto L_C0F5EB8;
    if (((*(int *)0xC346FF8) != 1)) goto L_C0F5F40;
    L_C0F5EB8:;
    *(unsigned int *)(((int)stk + 8)) = (((((struct o18_int *)0xC8172FC)->v)) & R14);
    kmiWriteRegister(0x8, 0x1);
    kmiWriteRegister(0x8, 0x0);
    v0_0 = *(int *)(((int)stk + 8));
    kmiWriteRegister(0x124, (*(int *)(((((v0_0 << 2) << 2) << 1) + 0xC817430))));
    kmiWriteRegister(0x12C, (*(int *)(((((v0_0 << 2) << 2) << 1) + 0xC817434))));
    kmiWriteRegister(0x128, (*(int *)(((((v0_0 << 2) << 2) << 1) + 0xC81743C))));
    kmiWriteRegister(0x130, (*(int *)(((((v0_0 << 2) << 2) << 1) + 0xC817440))));
    kmiWriteRegister(0x164, (*(int *)(((((v0_0 << 2) << 2) << 1) + 0xC817438))));
    kmiWriteRegister(0x144, 0x80000000);
    kmiReadRegister(0x144);
    (((struct o28_uint *)0xC8172FC)->v) = 0x0;
    (((struct o24_uint *)0xC8172FC)->v) = (*(int *)0xC817420);
    if (((*(int *)0xC346FF8) == 0)) goto L_C0F5F40;
    (((struct o20_uint *)0xC8172FC)->v) = ((((struct o18_int *)0xC8172FC)->v));
    *(unsigned int *)(((((((struct o18_int *)0xC8172FC)->v)) << 2) + 0xC817304)) = 0x2;
    (((struct o4_uint *)0xC8171C8)->v) = R14;
    (((struct o38_uint *)0xC8172FC)->v) = R14;
    L_C0F5F40:;
    return 0x0;
    L_C0F5E80:;
    if ((((((struct o30_int *)0xC8172FC)->v)) != 0)) goto L_C0F5E18;
    goto L_C0F5E88;
    L_C0F5DF8:;
    if ((((((struct o30_int *)0xC8172FC)->v)) != 0)) goto L_C0F5DD8;
    goto L_C0F5E00;
    L_C0F5CA2:;
    if ((((((struct o0_int *)0xC8172FC)->v)) != 0)) goto L_C0F5CBA;
    *(unsigned int *)(((((((struct o18_int *)0xC8172FC)->v)) << 2) + 0xC817304)) = R14;
    (((struct o30_uint *)0xC8172FC)->v) = R14;
    goto L_C0F5DCA;
    L_C0F5CBA:;
    *(unsigned int *)0xC842714 = (*(int *)0xFFD8000C);
    v0_4 = (((struct o18_int *)0xC8172FC)->v);
    (((struct o20_uint *)0xC8172FC)->v) = v0_4;
    (((struct o4_uint *)0xC8171C8)->v) = R14;
    (((struct o28_uint *)0xC8172FC)->v) = v0_3;
    (((struct o24_uint *)0xC8172FC)->v) = (*(int *)0xC817420);
    (((struct o30_uint *)0xC8172FC)->v) = R14;
    *(unsigned int *)0xC8426D0 = v0_3;
    *(unsigned int *)(((v0_4 << 2) + 0xC817304)) = 0x2;
    v0_4 = ((v0_4 << 2));
    if (((((((struct o0_int *)0xC8173D8)->v)) & 32) == 0)) goto L_C0F5D80;
    (((struct o0_uint *)0xFF000038)->v) = 0x10;
    (((struct o4_uint *)0xFF000038)->v) = 0x10;
    FUN_0c0fddbe(0xE0000000, 0xC15A9B0, 0x4);
    _builtin_prefetch((void *)0xE0000000);
    kmiReqRestOfDMA(((((struct o4_int *)0xC8173D8)->v)));
    goto L_C0F5DCA;
    L_C0F5D80:;
    v0_6 = ((((((((struct o18_int *)0xC8172FC)->v)) << 2) + 0xC817338) + ((((((struct o4_int *)0xC8173D8)->v)) << 2) << 2)));
    v0_5 = (0x10000000);
    v0_4 = (0x100);
    v0_7 = (0xC10B7B0);
    v0_7 = ((((((((struct o18_int *)0xC8172FC)->v)) << 2) + 0xC817388) + ((((((struct o4_int *)0xC8173D8)->v)) << 2) << 2)));
    L_C0F5DAE:;
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_8 = (FUN_0c10b7b0(v0_5, (*(int *)((v0_6 + 0x0))), ((*(int *)((v0_7 + 0x0))) + 0x20), 0x10, ((int)stk + 4))) == v0_4;
    if (v0_8) goto L_C0F5DAE;
    kmiReqRestOfDMA(((((struct o4_int *)0xC8173D8)->v)));
    goto L_C0F5DCA;
}

int FUN_0c0fcbc0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

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
                            t0 = 0x4;
                            if ((unsigned char)a7 != 4) {
                            } else {
                                *(unsigned int *)((a4 + 0x8)) = 0x20000000;
                                t0 = 0x0;
                            }
                            t1 = t0;
                        } else {
                            *(unsigned int *)((a4 + 0x8)) = 0x18000000;
                            t1 = 0x0;
                        }
                        t0 = t1;
                    } else {
                        *(unsigned int *)((a4 + 0x8)) = 0x10000000;
                        t0 = 0x0;
                    }
                    t1 = t0;
                } else {
                    *(unsigned int *)((a4 + 0x8)) = 0x8000000;
                    t1 = 0x0;
                }
                t0 = t1;
            } else {
                *(unsigned int *)((a4 + 0x8)) = 0x0;
                t0 = 0x0;
            }
            t1 = t0;
        } else {
            if (((((struct o9C_int *)((*(int *)0xC347628)))->v)) == 3) {
                *(unsigned int *)((a4 + 0x4)) = 0x3;
            } else {
                *(unsigned int *)((a4 + 0x4)) = 0x1;
            }
            *(unsigned int *)((a4 + 0x8)) = 0x30000000;
            t1 = 0x0;
        }
        t0 = t1;
    } else {
        if (((((struct o9C_int *)((*(int *)0xC347628)))->v)) == 3) {
            *(unsigned int *)((a4 + 0x4)) = 0x3;
        } else {
            *(unsigned int *)((a4 + 0x4)) = 0x1;
        }
        *(unsigned int *)((a4 + 0x8)) = 0x28000000;
        t0 = 0x0;
    }
    *(unsigned int *)((a4 + 0xC)) = a5;
    *(unsigned int *)((a4 + 0x10)) = a6;
    t1 = t0;
    if ((a5 != 8) && ((a5 != 16) && ((a5 != 32) && ((a5 != 64) && ((a5 != 0x80) && ((a5 != 0x100) && ((a5 != 0x200) && (a5 != 0x400)))))))) {
        t1 = 0x4;
    }
    t0 = t1;
    if ((a6 != 8) && ((a6 != 16) && ((a6 != 32) && ((a6 != 64) && ((a6 != 0x80) && ((a6 != 0x100) && ((a6 != 0x200) && (a6 != 0x400)))))))) {
        t0 = 0x4;
    }
    t1 = t0;
    if (((0xFF00 & a7) != 0x900) && (((0xFF00 & a7) != 0xB00) && (((0xFF00 & a7) != 0xD00) && (((0xFF00 & a7) != 0x500) && (((0xFF00 & a7) != 0x700) && (a5 != a6)))))) {
        t1 = 0x4;
    }
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    if (((0xFF00 & a7) == 0xF00) || (((0xFF00 & a7) == 0x200) || (((0xFF00 & a7) == 0x400) || (((0xFF00 & a7) == 0x1100) || (((0xFF00 & a7) == 0x600) || ((0xFF00 & a7) == 0x800)))))) {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x1);
    }
    if ((0xFF00 & a7) != 0xE00) {
        if (((0xFF00 & a7) == 0xF00) || (((0xFF00 & a7) == 0x100) || (((0xFF00 & a7) == 0x200) || ((0xFF00 & a7) == 0xD00)))) {
            *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x4);
        }
    } else {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x4);
    }
    if (((0xFF00 & a7) == 0x300) || (((0xFF00 & a7) == 0x400) || (((0xFF00 & a7) == 0x1000) || ((0xFF00 & a7) == 0x1100)))) {
        *(unsigned int *)((a4 + 0x18)) = (((*(int *)((a4 + 0x18))) | 0x8) | 0x4);
    }
    if ((0xFF00 & a7) == 0xB00) {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x10);
    }
    if (((0xFF00 & a7) == 0x500) || (((0xFF00 & a7) == 0x600) || (((0xFF00 & a7) == 0x700) || ((0xFF00 & a7) == 0x800)))) {
        *(unsigned int *)((a4 + 0x18)) = (((*(int *)((a4 + 0x18))) | 0x20) | 0x4);
    }
    FUN_0c0fcf46(a4);
    return t1;
}

