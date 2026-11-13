/* Straight-line functions with calls and guards (batch gen_eo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o308_int { char p[0x308]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71F8_int { char p[0x71F8]; int v; };
struct o71FC_int { char p[0x71FC]; int v; };
struct o7200_uint { char p[0x7200]; unsigned int v; };
struct o721E_uchar { char p[0x721E]; unsigned char v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o72B2_uchar { char p[0x72B2]; unsigned char v; };
struct o72B3_uchar { char p[0x72B3]; unsigned char v; };
struct o72B4_uchar { char p[0x72B4]; unsigned char v; };
struct o72B5_uchar { char p[0x72B5]; unsigned char v; };
struct o72B6_uchar { char p[0x72B6]; unsigned char v; };
struct o72B7_uchar { char p[0x72B7]; unsigned char v; };
struct o72B8_uchar { char p[0x72B8]; unsigned char v; };
struct o72BC_uchar { char p[0x72BC]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o9C_int { char p[0x9C]; int v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int ADXB_EvokeExpandMono(int, int);
int ADXB_EvokeExpandSte(int, int);
int ADXERR_CallErrFunc(int, ...);
int ADXSJD_GetLpEndOfst(int);
int ADXSJD_GetLpEndPos(int);
int ADXSJD_GetLpStartOfst(int);
int ADXSJD_GetLpStartPos(int);
int ADXSJD_SetDecPos(int, int);
int ADXSJD_SetTrapNumSmpl(int, int);
int opt_page_leave_reset(void);
float FUN_0c02649a(int, int);
int FUN_0c0555dc(void);
int game_reset_objects(void);
int obj_create(int, int, int);
extern int obj_destroy();
int FUN_0c05f2d4(int, int);
int math_vec3_add(int, int, int);
int FUN_0c06233a(int, int, int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_pos(int);
int mdl_vtx_set_pos(int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int obj_set_record_char(int, int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int pl_change_state(int, int, int, int);
int obj_set_mode_owner(int, int, int);
int obj_can_interact(int, int, int);
int fx_follow_owner_create(int, int);
int dbg_print_at(int, float, float);
int game_clear_win_records(void);
int game_play_start_game_over(void);
int FUN_0c0d4ff4(int, int, int, int);
int cam_init_records(void);
int cam_reset_shake(int, int, int, int);
int gfx_set_background_color(int, int, int);
float math_sin_angle16(int);
int FUN_0c0e1550(int);
int FUN_0c0e19b0(int);
float FUN_0c0e2220(int, int);
int _divls(void);
int _modls(void);
extern int _quick_odd_mvn();
int FUN_0c0f4128(int);
int FUN_0c0f414e(int, int, int, int);
int FUN_0c101148(int, int);
int FUN_0c1062f6(int, int);
int FUN_0c106302(int, int);
int FUN_0c107fce(int, int);
int FUN_0c108000(int, int);
int FUN_0c108010(int, int);
int FUN_0c108094(int, int, int, int);
int FUN_0c1080f0(int, int, int);
int FUN_0c108304(int, int, int);
int FUN_0c114cba(int, int, int);
int FUN_0c114dde(int, int);
int FUN_0c114e00(int, int);
int FUN_0c114e22(int, int);
int FUN_0c114e3e(int, int, int);
int FUN_0c114e5c(int, int, int);
int FUN_0c114ea4(int, int, int);
int buIsFormat(int);
int check_cache(int);
int check_caps(int);
int get_fat(int, int);
int kmiCopyToFrameBuffer(int, int, int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, int, int, int);
int nlCalcPoint(int, int);
int nlCalcPoint44(int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int vmsfs_c_progress(int, int, int, int);
int vmsfs_mount2(int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int pl_try_grab_target_object(int a4);
int ui_project_world_to_screen(int a4, int a5, int a6, float f4);
int fx_spawn_03c02c(int a4);
int pl_find_move_input_any(int a4, int a5, int a6, int a7);
int stage_gimmick_41_spawn_b(int a4, int a5);
int FUN_0c0d724a(int a4, float f4);
int FUN_0c102862(int a4);
int vmsfs_mount(int a4, int a5, int a6);
int FUN_0c02b884(int a4);
int fx_spawn_28(int a4, int a5);
int FUN_0c0cbd88(int a4);
int FUN_0c0cf240(int a4, int a5, int a6);
int FUN_0c0e1700(int a4);
int FUN_0c0fc746(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int FUN_0c106994(int a4, int a5, int a6, int a7);
int FUN_0c1144b8(int a4);
int fx_spawn_0380d4(int a4);
int pl_special_b_update(int a4);
int FUN_0c06f600(int a4);
int pl_vib_start_custom(int a4, int a5, int a6, int a7);
int stage_gimmick_36_spawn(int a4);
int fx_update_10(int a4, int a5, int a6, int a7);
int FUN_0c0cb50c(int a4, int a5);
int game_play_state_06(int a4, int a5, int a6, int a7);
int FUN_0c108372(int a4, int a5, int a6, int a7);

int FUN_0c102862(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

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
                t0 = buIsFormat(a4);
                t3 = 0xFFFFFF03;
                if ((int)t0 < 0) {
                } else {
                    t5 = t0;
                    t0 = 0x0;
                    t6 = 0x0;
                    for (;;) {
                        t7 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C));
                        t8 = *(int *)((t7 + 0x2C));
                        t9 = *(int *)((t7 + 0x10));
                        if ((int)t6 >= (int)(((int)((unsigned int)((int)((unsigned int)(t9 * (t8 + 0x1)) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t9 * (t8 + 0x1)))) ? 1u : 0u))) >> 1)) {
                            break;
                        }
                        t5 = (get_fat(a4, t6));
                        t5 = (unsigned short)t5;
                        t6 = (t6 + 0x1);
                        if (t5 == 0xFFFC) {
                            t0 = (t0 + 0x1);
                        }
                    }
                    t3 = t0;
                }
                t4 = t3;
            }
            t2 = t4;
        }
        t1 = t2;
    }
    return t1;
}

int vmsfs_mount(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    if ((*(int *)(((*(int *)0xC80DBC4) + 0x8))) == 1) {
        return vmsfs_mount2(a4, a5, a6);
    }
    if ((*(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x2))) != 0) {
        *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
        t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x4));
        *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC347204)));
        t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30));
        t1 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34));
        *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = (t0 + 0x1);
        vmsfs_c_progress(a4, (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x8))), ((t0 + 0x1) - 1), t1);
        t0 = FUN_0c101148(a4, (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))));
        if ((int)t0 < 0) {
            *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0x9)) = 0x0;
            *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0x8)) = 0x0;
            return 0xFFFFFF01;
        }
        t0 = check_caps(((a4 * 0x148) + 0xC80DBC8));
        if ((int)t0 < 0) {
            return 0xFFFFFF83;
        }
        t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C));
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((t0 + 0x1C)));
        *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0x9)) = 0x1;
        *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0x8)) = 0x1;
        *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0xA)) = 0x0;
        *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0xB)) = 0x0;
        *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0xC)) = 0x0;
        return check_cache(a4);
    }
    return 0xFFFFFF01;
}

int FUN_0c0e1700(int a4)
{
    int stk[16];
    register float u0;
    register float u2;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u11;
    register float t12;

    u0 = (((struct oC_float *)(a4))->v);
    *(float *)(((int)stk + 0)) = (((-(u0 * u0))) + 1.0f);
    u2 = (((struct o10_float *)(a4))->v);
    *(float *)(((int)stk + 20)) = (((-(u2 * u2))) + 1.0f);
    u4 = (((struct o14_float *)(a4))->v);
    *(float *)(((int)stk + 40)) = (((-(u4 * u4))) + 1.0f);
    u6 = (((struct o10_float *)(a4))->v);
    u7 = (((struct oC_float *)(a4))->v);
    (((struct o10_float *)(((int)stk + 0)))->v) = (-(u7 * u6));
    (((struct o4_float *)(((int)stk + 0)))->v) = (-(u7 * u6));
    u8 = (((struct o14_float *)(a4))->v);
    u9 = (((struct oC_float *)(a4))->v);
    (((struct o20_float *)(((int)stk + 0)))->v) = (-(u9 * u8));
    (((struct o8_float *)(((int)stk + 0)))->v) = (-(u9 * u8));
    u10 = (((struct o14_float *)(a4))->v);
    u11 = (((struct o10_float *)(a4))->v);
    (((struct o24_float *)(((int)stk + 0)))->v) = (-(u11 * u10));
    (((struct o18_float *)(((int)stk + 0)))->v) = (-(u11 * u10));
    t12 = FUN_0c0e2220(a4, (a4 + 0xC));
    *(float *)(((int)stk + 48)) = (t12 * ((((struct oC_float *)(a4))->v)));
    *(float *)(((int)stk + 52)) = (t12 * ((((struct o10_float *)(a4))->v)));
    *(float *)(((int)stk + 56)) = (t12 * ((((struct o14_float *)(a4))->v)));
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 60)) = 1.0f;
    return (nlMultiMatrix(((int)stk + 0)));
}

int FUN_0c0fc746(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int t0;
    register int t28;
    register int t1;
    register int t5;
    register int t10;
    register int t13;
    register int t14;
    register int t15;

    t0 = *(int *)((a4 + 0x18));
    t28 = 0x4;
    if (((0x4 & t0) == 0) && (((0x1 & t0) == 0) && (((0x8 & t0) == 0) && ((0x20 & t0) == 0)))) {
        t1 = *(int *)((a4 + 0xC));
        t5 = *(int *)((a4 + 0x1C));
        t14 = a5;
        t10 = (a6 << 1);
        if (a12 == 0) {
        } else {
            t14 = ((((unsigned int)((a11 * (a12 << 1)) + (a10 << 1)) >> 2) << 2) + a5);
            t10 = (a12 << 1);
        }
        if ((unsigned int)0x0 < (unsigned int)a7) {
            t13 = 0x0;
            t15 = (((a9 * (t1 << 1)) + (a8 << 1)) + t5);
            for (;;) {
                kmiCopyToFrameBuffer(t15, t14, (a6 << 1), t1);
                t13 = (t13 + 0x1);
                t15 = (t15 + (t1 << 1));
                t14 = (t14 + (((unsigned int)t10 >> 2) << 2));
                if ((unsigned int)t13 >= (unsigned int)a7) {
                    break;
                }
            }
        }
        t28 = 0x0;
    }
    return t28;
}

int FUN_0c106994(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t9;
    register int t19;
    register int t28;
    register int t31;
    register int t34;

    t0 = *(int *)((a4 + 0x4));
    t1 = *(int *)((a4 + 0x14));
    t2 = ADXSJD_GetLpStartPos(t0);
    t3 = ADXSJD_GetLpStartOfst(t0);
    *(unsigned int *)(((int)stk + 4)) = (ADXSJD_GetLpEndPos(t0));
    ADXSJD_GetLpEndOfst(t0);
    t9 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x18)))))(t1, 0x1, ((((struct o50_int *)(a4))->v)), (((int)stk + 4) + 0x4), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    if ((int)(*(int *)(((int)stk + 12))) < (int)((((struct o50_int *)(a4))->v))) {
        *(int *)((int)stk + 0) = 0xC15B1F8;
        ADXERR_CallErrFunc(0xC15B1F8);
    }
    t19 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x20)))))(t1, 0x0, (((int)stk + 4) + 0x4), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    FUN_0c1062f6(t0, 0x0);
    ADXSJD_SetTrapNumSmpl(t0, ((*(int *)(((int)stk + 4))) - t2));
    FUN_0c106302(t0, t3);
    ADXSJD_SetDecPos(t0, t2);
    if ((*(signed char *)((a4 + 0x2))) == 2) {
        t28 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x14)))))(t1, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        t31 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x18)))))(t1, 0x1, t3, (((int)stk + 4) + 0x4), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        t34 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x20)))))(t1, 0x0, (((int)stk + 4) + 0x4), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    }
    (((struct o4C_uint *)(a4))->v) = (((((struct o4C_int *)(a4))->v)) + 0x1);
    return 0x4C;
}

int FUN_0c1144b8(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t1 = (int)((int)(*(int *)(((a4 + 0x50) + 0x4))) / (int)(*(int *)(((a4 + 0x50) + 0x8))));
    t2 = *(int *)(((a4 + 0x50) + 0x20));
    t3 = *(int *)(((a4 + 0x50) + 0x24));
    t4 = *(int *)(((a4 + 0x50) + 0x10));
    t5 = *(int *)(((a4 + 0x50) + 0x28));
    t6 = (int)((int)((t5 + t4) - 1) / (int)t4);
    t7 = (int)((int)((t5 + t4) - 1) % (int)t4);
    t8 = (int)((int)((((*(int *)(((a4 + 0x50) + 0x18))) - t2) + t4) - 1) / (int)t4);
    t9 = t8;
    if (((int)t6 < (int)t8) && (t0 = *(int *)(((a4 + 0x50) + 0x18)), (int)(((t8 * t4) - ((t4 - t7) - 1)) + t2) < (int)t0)) {
        t9 = (t8 + 0x1);
    }
    t0 = t3;
    if ((int)t5 < (int)t3) {
        t0 = (t3 + ((t4 - t7) - 1));
    }
    t2 = (int)((int)t0 / (int)t4);
    t0 = t1;
    if ((int)t1 > (int)t2) {
        t0 = t2;
    }
    t1 = t0;
    if ((int)t0 > (int)t6) {
        t1 = t6;
    }
    t0 = *(int *)(((a4 + 0x50) + 0x8));
    t2 = t1;
    if ((int)t1 > (int)t9) {
        t2 = t9;
    }
    if (t0 == 2) {
        return ADXB_EvokeExpandSte(a4, t2);
    }
    return ADXB_EvokeExpandMono(a4, t2);
}

int FUN_0c108372(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t5;
    register int t36;

    if (a4 == 0) {
        return (mwRnaErrCallFunc(0xC15B31C, a5, a6, a7));
    }
    FUN_0c114cba(((((struct o40_int *)(a4))->v)), a5, a6);
    t5 = *(int *)(((int)stk + 0));
    t36 = (FUN_0c114e00(((((struct o40_int *)(a4))->v)), ((int)stk + 0)));
    if (t5 != 0) {
        FUN_0c114dde(((((struct o40_int *)(a4))->v)), (((int)stk + 0) + 0x18));
        FUN_0c114e22(((((struct o40_int *)(a4))->v)), (((int)stk + 0) + 0x14));
        *(unsigned int *)(((int)stk + 32)) = (((int)stk + 0) + 0x24);
        FUN_0c114e3e(((((struct o40_int *)(a4))->v)), 0x0, (((int)stk + 0) + 0x24));
        *(unsigned int *)(((int)stk + 28)) = (((int)stk + 0) + 0x28);
        FUN_0c114e3e(((((struct o40_int *)(a4))->v)), 0x1, (((int)stk + 0) + 0x28));
        FUN_0c114e5c(((((struct o40_int *)(a4))->v)), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x10));
        FUN_0c114ea4(((((struct o40_int *)(a4))->v)), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        FUN_0c107fce(a4, (*(int *)(((int)stk + 0))));
        FUN_0c108000(a4, (*(int *)(((int)stk + 24))));
        FUN_0c108010(a4, (*(int *)(((int)stk + 20))));
        FUN_0c108094(a4, 0x0, (*(int *)(((*(int *)(((int)stk + 32))) + 0x0))), 0x0);
        FUN_0c108094(a4, 0x1, (*(int *)(((*(int *)(((int)stk + 28))) + 0x0))), 0x0);
        FUN_0c1080f0(a4, (*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 16))));
        t36 = (FUN_0c108304(a4, (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8)))));
    }
    return t36;
}
