/* Straight-line functions with calls and guards (batch gen_x): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o10B_uchar { char p[0x10B]; unsigned char v; };
struct o10F4_int { char p[0x10F4]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o64_int { char p[0x64]; int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BB_uchar { char p[0x71BB]; unsigned char v; };
struct o71E4_float { char p[0x71E4]; float v; };
struct o71E8_float { char p[0x71E8]; float v; };
struct o720B_uchar { char p[0x720B]; unsigned char v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o90_int { char p[0x90]; int v; };
struct o94_int { char p[0x94]; int v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oE_short { char p[0xE]; short v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int ADXPD_ExecHndl(int);
int ADXPD_GetStat(int);
int ADXPD_Reset(int);
int ending_obj_init_basic(int);
int ending_obj_set_sprite(int, int);
int ui_draw_element_sprite(int);
int conv_s16x4_to_f32(int, int);
int hit_load_sphere_world(int, int, int);
int hit_probe_object_vs_slots(int);
int logo_spawn_overlay(float);
int FUN_0c02c2d0(int);
int FUN_0c02c830(int);
int FUN_0c02c91a(int);
int ui_fade_start(int, int, int, int);
int fx_spawn_0457d0(void);
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int pl_rel_angle_to_linked(int);
float ai_dist_to_opponent(int);
int ai_roll_chance(void);
int pl_reset_pose(int);
int pl_timer_arm_forever(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int hit_find_interactable_contact(int, int);
int hit_probe_step_max(int, int, float);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_angle_to_opponent(int);
int pl_stick_dir_angle(int);
int pl_set_power_form_off(int);
extern int pl_try_char_special_move();
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int obj_set_mode_owner(int, int);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlCalcVector(int, int);
int nlSelectMatrixStack(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlTransposeMatrix(void);
int nlTranslate(float, float, float);
int FUN_0c0e22e0(int, int, float);
int syRtcGetDate(int);
int syRtcAicaGetCount(int);
int snd_send_command(int);
int FUN_0c0e66f4(int, int, int);
int FUN_0c0e69a8(int, int, int);
int _divls(void);
int _modls(int);
int _quick_evn_mvn(int, int, int);
int _quick_odd_mvn(int, int);
int FUN_0c0f1c44(int);
int FUN_0c0f1fd2(int);
int FUN_0c0f202c(int);
int FUN_0c0f2044(int);
int vmsfs_fread1(int, int);
extern int FUN_0c108094();
int mpdrv_setcmd_force(int, int, int, int, int, int);
int FUN_0c1144b8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c1145f4(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c114f90(int, int, int);
int FUN_0c1150aa(int, int);
int buGetDiskFree(int, int);
int buIsExistFile(int, int);
int buSaveFile(int, int, int, int, int, int);
extern int mwRnaErrCallFunc();
int FUN_0c1048e6(int a4, int a5, int a6, int a7);
int vmu_check_create_obj(void);
int ai_dist_class(int a4);
int nlInvLightVectorUseViewMatrix(void);
int FUN_0c114ef4(int a4, int a5);
int vmu_write_icondata_file(int a4);
int FUN_0c0459d6(int a4, int a5, int a6, int a7);
int pl_set_spawn_position(int a4);
int mot_read_vec3_float(int a4, int a5);
int FUN_0c0a022e(int a4, float f4);
int FUN_0c1080f0(int a4, int a5, int a6, int a7);
int FUN_0c107f44(int a4, int a5, int a6, int a7);
int ADXB_ExecOneAdx(int a4, int a5, int a6, int a7);
int vmu_get_foreign_exec_mask(void);
int vmu_get_savefile_mask(void);
int vmu_get_vmgame_mask(void);
int ending_spawn_obj_typed_b(int a4, int a5, int a6);
int FUN_0c0246b2(int a4, int a5, int a6, int a7);
int fx_spawn_042514(int a4, int a5);
int pl_garuda_mode04_phase0(int a4);
int ai_reaction_check_2(int a4, int a5);
int pl_hitreact_phase4_update(int a4, int a5, int a6, int a7);
int FUN_0c092a58(int a4, int a5, int a6, int a7);
int FUN_0c09dd88(int a4);
int FUN_0c0a2830(int a4);
int cam_request_mode_25(int a4, int a5);
int syRtcGetAndCheckCount(int a4, int a5, int a6, int a7);
int FUN_0c0e6c78(int a4, int a5, int a6);
int vmsfs_c_setfname(int a4, int a5, int a6);
int ending_spawn_obj_t02(int a4);
int FUN_0c02279a(int a4, int a5, int a6, int a7);
int FUN_0c02ccbc(int a4, int a5, int a6, int a7);
int FUN_0c02c9f6(void);
int FUN_0c053dcc(void);
int pl_stick_zone(int a4);
int FUN_0c0ad7a4(int a4);
int FUN_0c0d32dc(void);
int cam_select_mode0_variant(int a4);
void math_pow_float(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c016d08(void);
int FUN_0c01d9e0(int a4, int a5, float f4);
float FUN_0c022dfc(int a4, int a5);
int stage_point_in_cylinder(int a4, int a5);
int ui_sprite_queue_add(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c02df98(int a4, int a5, float f4, float f5);
int FUN_0c06148a(void);
int pl_wangtang_cue_at_frame(int a4, int a5, int a6, int a7);
int pl_set_effect_at_frame(int a4, int a5, int a6, int a7);
int pl_garuda_cue_at_frame(int a4, int a5, int a6, int a7);
int FUN_0c0f9c20(int a4, int a5, int a6, int a7);
int FUN_0c0ffcda(void);
int vmsfs_fread(int a4, int a5, int a6);
int FUN_0c10b680(void);

int FUN_0c1048e6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    *(unsigned int *)((a5 + 0x4)) = (unsigned char)(*(signed char *)((a4 + 0x0)));
    t0 = (a5 + 0x10);
    t1 = (a4 + 0x4);
    for (;;) {
        t2 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        *(unsigned char *)((t0 + 0x0)) = t2;
        t0 = (t0 + 0x1);
        if ((unsigned int)t0 >= (unsigned int)(a5 + 0x1C)) {
            break;
        }
    }
    (((struct o1C_uchar *)(a5))->v) = 0x0;
    t0 = (a5 + 0x20);
    t1 = (a4 + 0x10);
    for (;;) {
        t2 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        *(unsigned char *)((t0 + 0x0)) = t2;
        t0 = (t0 + 0x1);
        if ((unsigned int)t0 >= (unsigned int)(a5 + 0x28)) {
            break;
        }
    }
    *(unsigned int *)((a5 + 0xC)) = (unsigned short)(((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0xC)))))(a4, 0x2, a6, a7));
    *(unsigned int *)((a5 + 0x28)) = (unsigned short)(((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0xC)))))(a4, 0x18, a6, a7));
    *(unsigned char *)((a5 + 0xA)) = (*(signed char *)((a4 + 0x1)));
    t0 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0xC)))))(a4, 0x1A, a6, a7);
    *(unsigned short *)((a5 + 0x8)) = t0;
    return t0;
}

int FUN_0c114ef4(int a4, int a5)
{
    register int t11;
    register int t0;

    t11 = 0x0;
    if ((int)a5 < (int)0xFF) {
        t11 = 0x7F;
        if ((int)a5 > 0) {
            t0 = (int)((int)(((a5 << 2) + a5) << 2) / (int)0xA);
            t11 = 0x7F;
            if ((int)(0x7F - t0) > (int)0x7F) {
            } else {
                t11 = (0x7F - t0);
                if ((int)(0x7F - t0) < 0) {
                    t11 = 0x0;
                }
            }
        }
    }
    if ((*(int *)((a4 + 0xC))) == 0) {
        FUN_0c0e66f4((*(int *)(((*(int *)((a4 + 0x10))) + 0x4))), 0x0, t11);
        FUN_0c0e66f4((*(int *)(((*(int *)((a4 + 0x10))) + 0x4))), 0x1, t11);
    } else {
        FUN_0c0e69a8((*(short *)((a4 + 0x2))), 0x0, t11);
        FUN_0c0e69a8((*(short *)((a4 + 0x2))), 0x1, t11);
    }
    return 0x0;
}

int FUN_0c107f44(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t1;
    register int t2;
    register int t11;
    register int t12;

    if (a4 == 0) {
        return ((int (*)(int, int, int, int))(mwRnaErrCallFunc))(0xC15B31C, a5, a6, a7);
    }
    *(unsigned char *)((a4 + 0x3)) = a5;
    t1 = FUN_0c1150aa(((((struct o40_int *)(a4))->v)), a5);
    if (t1 != 0) {
        t2 = ((int (*)(int))(mwRnaErrCallFunc))(0xC15B438);
    }
    if (a5 == 1) {
        (((struct o64_uint *)(a4))->v) = 0x0;
        (((struct o68_uint *)(a4))->v) = 0x0;
    } else {
        (((struct o64_uint *)(a4))->v) = 0xFFFFFFF1;
        (((struct o68_uint *)(a4))->v) = 0xF;
    }
    t11 = ((int (*)(int, int, int, int, int, int, int))(FUN_0c108094))(a4, 0x0, ((((struct o64_int *)(a4))->v)), 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
    t12 = (((struct o68_int *)(a4))->v);
    return ((int (*)(int, int, int))(FUN_0c108094))(a4, 0x1, t12);
}

int ADXB_ExecOneAdx(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t2;
    register int t5;
    register int t14;
    register int t30;
    register int t18;

    if ((*(int *)((a4 + 0x4))) == 1) {
        t2 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        if (t2 == 0) {
            t5 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o88_int *)(a4))->v))))(((((struct o8C_int *)(a4))->v)), ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            FUN_0c1144b8(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            *(unsigned int *)((a4 + 0x4)) = 0x2;
        }
    }
    t14 = *(int *)((a4 + 0x4));
    t30 = t14;
    if (t14 == 2) {
        ADXPD_ExecHndl((*(int *)((a4 + 0x8))));
        t18 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        t30 = t18;
        if (t18 == 3) {
            FUN_0c1145f4(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            ADXPD_Reset((*(int *)((a4 + 0x8))));
            t30 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o90_int *)(a4))->v))))(((((struct o94_int *)(a4))->v)), ((((struct oA4_int *)(a4))->v)), ((((struct oA0_int *)(a4))->v)), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            *(unsigned int *)((a4 + 0x4)) = 0x3;
        }
    }
    return t30;
}

int syRtcGetAndCheckCount(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t1;
    register int t2;
    register int t18;
    register int t8;
    register int t9;
    register int t22;
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x4);
    t1 = (((int)stk + 0) + 0x4);
    t2 = (((int)stk + 0) + 0x4);
    for (;;) {
        if ((unsigned int)t2 >= (unsigned int)((((int)stk + 0) + 0x4) + 0x8)) {
            break;
        }
        t0 = (syRtcAicaGetCount(t2));
        if (t0 != 0) {
            *(unsigned int *)((t1 + 0x0)) = a4;
        }
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x4);
    }
    t8 = *(int *)(((int)stk + 0));
    t18 = 0x0;
    if ((unsigned int)t8 < (unsigned int)((((int)stk + 0) + 0x4) + 0x4)) {
        t9 = ((((int)stk + 0) + 0x4) + 0x4);
        for (;;) {
            if ((*(int *)((t8 + 0x0))) != (*(int *)((t9 + 0x0)))) {
                break;
            }
            t8 = (t8 + 0x4);
            t9 = (t9 + 0x4);
            if ((unsigned int)t8 >= (unsigned int)((((int)stk + 0) + 0x4) + 0x4)) {
                if (0x0 == 0) {
                    return (*(int *)(((*(int *)(((int)stk + 0))) + 0x0)));
                }
                return a4;
            }
        }
        t18 = 0x1;
    }
    t22 = a4;
    if (t18 == 0) {
        t22 = (*(int *)(((*(int *)(((int)stk + 0))) + 0x0)));
    }
    return t22;
}

int FUN_0c0e6c78(int a4, int a5, int a6)
{
    int stk[4];
    register int t0;
    register int t3;

    *(unsigned short *)(((((int)stk + 0) + 0x6) + 0x0)) = a4;
    *(unsigned short *)(((((int)stk + 0) + 0x4) + 0x0)) = a5;
    *(unsigned short *)(((((int)stk + 0) + 0x2) + 0x0)) = a6;
    t0 = *(signed char *)(((int)stk + 6));
    t3 = *(short *)((0xC7FD110 + (unsigned char)((((t0 << 1) + t0) << 2) << 1)));
    if (t3 != 1) {
        return t3;
    }
    snd_send_command(((((((*(short *)(((int)stk + 6))) << 8) << 2) << 2) | ((*(short *)(((int)stk + 4))) << 16)) | 0xAA1));
    return (snd_send_command(((((((*(short *)(((int)stk + 6))) << 8) << 2) << 2) | ((*(short *)(((int)stk + 2))) << 16)) | 0xBA1)));
}

int vmsfs_c_setfname(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = ((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x2C);
    for (;;) {
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x1);
        if ((unsigned int)t0 >= (unsigned int)((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x39)) {
            break;
        }
    }
    t0 = ((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x3C);
    for (;;) {
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x1);
        if ((unsigned int)t0 >= (unsigned int)((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x49)) {
            break;
        }
    }
    t0 = a5;
    t1 = 0xC8057B0;
    if ((unsigned int)a5 < (unsigned int)(a5 + 0xC)) {
        t2 = a5;
        t3 = a5;
        t4 = ((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x2C);
        for (;;) {
            t6 = *(signed char *)((t3 + 0x0));
            if (t6 != 0) {
                t7 = *(signed char *)((t2 + 0x0));
                t2 = (t2 + 0x1);
                t3 = (t3 + 0x1);
                *(unsigned char *)((t4 + 0x0)) = t7;
                t4 = (t4 + 0x1);
                if ((unsigned int)t3 >= (unsigned int)(a5 + 0xC)) {
                    t5 = t7; break;
                }
                continue;
            }
            t5 = t6; break;
        }
        t0 = t2;
        t1 = t5;
    }
    if ((unsigned int)a6 < (unsigned int)(a6 + 0xC)) {
        t2 = t1;
        t1 = a6;
        t3 = ((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x3C);
        t4 = a6;
        for (;;) {
            if ((*(signed char *)((t1 + 0x0))) != 0) {
                t5 = *(signed char *)((t4 + 0x0));
                t4 = (t4 + 0x1);
                t2 = t5;
                t1 = (t1 + 0x1);
                *(unsigned char *)((t3 + 0x0)) = t2;
                t3 = (t3 + 0x1);
                if ((unsigned int)t1 >= (unsigned int)(a6 + 0xC)) {
                    break;
                }
                continue;
            }
            break;
        }
    }
    return t0;
}

int FUN_0c0f9c20(int a4, int a5, int a6, int a7)
{
    register int t3;
    int t5;

    (((struct o2C_uint *)0xC8172FC)->v) = 0x0;
    if ((*(int *)0xC8171CC) != 0) {
        for (;;) {
            t3 = ((int (*)(int, int, int, int))(((((struct o0_int *)0xC817228)->v))))(((((struct o4_int *)0xC817228)->v)), a5, a6, a7);
            if (((unsigned int)((((struct o2C_int *)0xC8172FC)->v)) <= (unsigned int)0xA) && (t5 = *(int *)0xC8171CC, t5 != 0)) continue;
            break;
        }
    }
    (((struct o0_uint *)0xC8172FC)->v) = a4;
    (((struct o0_uint *)0xC8173D8)->v) = a5;
    (((struct o4_uint *)0xC8173D8)->v) = (a5 & 0xF);
    (((struct o8_uint *)0xC8172FC)->v) = 0x0;
    (((struct oC_uint *)0xC8172FC)->v) = 0xFFFFFFFF;
    (((struct o10_uint *)0xC8172FC)->v) = 0xFFFFFFFF;
    (((struct o14_uint *)0xC8172FC)->v) = 0xFFFFFFFF;
    (((struct o18_uint *)0xC8172FC)->v) = 0x0;
    (((struct o1C_uint *)0xC8172FC)->v) = 0x0;
    (((struct o20_uint *)0xC8172FC)->v) = 0x0;
    return 0x0;
}

int FUN_0c0ffcda(void)
{
    int stk[3];
    register int t0;
    register int t8;

    t0 = (((struct o0_int *)0xC80571C)->v);
    if (t0 != 0) {
        *(unsigned int *)0xAC805760 = (((t0 - 1) << 16) | 0x80000200);
        (((struct o20_uint *)0xC80571C)->v) = 0x1;
        *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC843924)))->v)) + 0x4)) = 0xC805760;
        *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC843924)))->v)) + 0x18)) = 0x1;
        *(unsigned int *)(((int)stk + 8)) = 0x1;
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x0;
        t8 = mpdrv_setcmd_force((((t0 - 1) << 1) + ((t0 - 1) << 2)), 0x9, (((int)stk + 0) + 0x8), 0x1, 0x0, 0x0);
        (((struct o8_uint *)0xC80571C)->v) = ((((struct o0_int *)0xC80571C)->v));
    }
    return t8;
}

int vmsfs_fread(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = 0xFFFFFF00;
    if (a4 != 0) {
        t1 = 0xFFFFFF01;
        if ((*(signed char *)(((((*(int *)((a4 + 0x28))) * 0x148) + 0xC80DBC8) + 0x2))) == 0) {
        } else {
            t2 = *(int *)((a4 + 0x28));
            *(unsigned int *)(((0xC80DBC8 + (t2 * 0x148)) + 0x30)) = 0x1;
            *(unsigned int *)(((0xC80DBC8 + (t2 * 0x148)) + 0x34)) = a6;
            t2 = 0x0;
            if ((int)a6 > 0) {
                t3 = 0x0;
                t4 = a5;
                for (;;) {
                    t5 = vmsfs_fread1(a4, t4);
                    if ((int)t5 < 0) {
                        break;
                    }
                    t3 = (t3 + 0x1);
                    t4 = (t4 + 0x200);
                    if ((int)t3 >= (int)a6) {
                        return 0x0;
                    }
                }
                t2 = t5;
            }
            t1 = t2;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c10b680(void)
{
    register int t1;
    register int t2;
    register int t3;

    *(volatile int *)0xFFA0002C;
    (((struct o0_uint *)0xFFA00020)->v) = 0x0;
    (((struct o4_uint *)0xFFA00020)->v) = 0x0;
    (((struct o8_uint *)0xFFA00020)->v) = 0x0;
    (((struct oC_uint *)0xFFA00020)->v) = 0x12C0;
    (((struct o20_uint *)0xFFA00020)->v) = 0x8201;
    *(unsigned int *)0xA05F6884 = 0x0;
    (((struct o0_uint *)0xFF000038)->v) = 0x10;
    (((struct o4_uint *)0xFF000038)->v) = 0x10;
    (((struct o0_uint *)0xC8426A8)->v) = 0x0;
    (((struct o4_uint *)0xC8426A8)->v) = 0x0;
    (((struct oC_uint *)0xC8426A8)->v) = 0x0;
    (((struct o10_uint *)0xC8426A8)->v) = 0x0;
    (((struct o8_uint *)0xC8426A8)->v) = 0x0;
    (((struct o14_uint *)0xC8426A8)->v) = 0x7;
    (((struct o18_uint *)0xC8426A8)->v) = 0x1;
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        *(unsigned int *)(((0xC8424A8 + t2) + 0x18)) = 0x0;
        *(unsigned int *)((((0xC8424A8 + t2) + 0x100) + 0x18)) = 0x8;
        t2 = (t2 + 0x20);
        *(unsigned int *)(((0xC8424A8 + t2) + 0x18)) = 0x0;
        t1 = (t1 + 0x2);
        *(unsigned int *)((((0xC8424A8 + t2) + 0x100) + 0x18)) = 0x8;
        t3 = ((0xC8424A8 + t2) + 0x100);
        t2 = (t2 + 0x20);
        if ((unsigned int)t1 >= (unsigned int)0x8) {
            break;
        }
    }
    return t3;
}
