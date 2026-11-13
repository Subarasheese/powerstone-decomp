/* Straight-line functions with calls and guards (batch gen_ac): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[6]; } Stk6;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10E8_int { char p[0x10E8]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_short { char p[0x14]; short v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o16_short { char p[0x16]; short v; };
struct o18_int { char p[0x18]; int v; };
struct o18_short { char p[0x18]; short v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o2F8_int { char p[0x2F8]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uchar { char p[0x40]; unsigned char v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F8_int { char p[0x71F8]; int v; };
struct o721E_uchar { char p[0x721E]; unsigned char v; };
struct o7222_uchar { char p[0x7222]; unsigned char v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXSTM_GetCurOfst(int, int);
int FUN_0c01013c(void);
int ui_sprite_queue_add(int, int, int);
int ui_draw_text_stub(void);
int ui_fade_reset(void);
int obj_create(int, int, int);
int FUN_0c05ef8c(int);
int FUN_0c05f136(void);
int FUN_0c06233a(int, int, int);
int FUN_0c062de8(int);
int FUN_0c063428(int);
int FUN_0c0634b4(int);
int pl_falcon_aim_at_target(int);
int pl_for_each_part_slot(int, int, int, int);
int pl_reset_scale(int);
int pl_clear_tint_flag(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_spawn_hit_effect_with_se(int);
int FUN_0c09c45a(int);
int FUN_0c09c782(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_landed(int);
int obj_set_record_char(int, int);
int pl_end_action_choose_state(int);
int bgm_stop_all(void);
int snd_play_char_voice(int, int);
int obj_set_mode_owner(int, int);
int FUN_0c0b146e(int, int);
int fx_spawn_34(int, int);
int dbg_print_at(int, float, float);
int FUN_0c0ccf38(int, int, int);
int attract_setup_demo_round(void);
int attract_ranking_step(void);
int FUN_0c0d44c4(void);
float FUN_0c0d5bc0(void);
int cam_set_shake_ramp(int, int);
int nlObjPutUseViewMatrix(int);
int FUN_0c0dcd20(float, float, float);
int gfx_set_background_color(int, int, int);
int math_atan_angle16(float);
int nlPopMatrix(int);
int FUN_0c0e19b0(int);
int nlScale(float, float, float);
int FUN_0c0e2050(int);
int FUN_0c0e2140(int);
int nlUnitMatrix(void);
int FUN_0c0e24f0(int, int, int, float, float, float, float);
int syRtcDbgWriteLog(int);
int _modls(int);
int _quick_evn_mvn(int);
int _quick_odd_mvn(int, int, int);
int sys_strided_copy_masked(int, int, int, int, int, int);
int FUN_0c0efc6a(int, int, int, int, int, int);
int FUN_0c0f1fa4(int, int, int);
int FUN_0c0f4128(int);
int pdVibMxStop(int);
int FUN_0c0f4c2c(void);
int FUN_0c0f4f14(int);
int FUN_0c0f4f1a(int);
int FUN_0c0f553a(int);
int FUN_0c0fc38c(int, int, int, int);
int FUN_0c0fc5da(int, int, int, int);
int FUN_0c0fcea0(int, int);
int FUN_0c100260(void);
int kdGetDeviceInfo(int);
int kdDevGetLCDInfo(int, int);
int kdSetCallback(int, int, int);
int FUN_0c106436(int, int, int, int);
int FUN_0c106654(int);
int FUN_0c10a2e0(int, int, int);
int FUN_0c10b5f2(int);
int kmiWriteRegister(int, int);
int kmiCopyToFrameBuffer(int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_set_getminfo_ns(int, int, int);
int FUN_0c114fcc(int, int, int);
extern float _builtin_sqrtf(float);
extern int _builtin_tas(char *);
extern int mwRnaErrCallFunc();
int strncpy(int, int, int);
int fx_spawn_055cba(void);
int fx_spawn_05600c(void);
int fx_spawn_0565b4(void);
int fx_spawn_056340(void);
int fx_spawn_0567c4(void);
int fx_spawn_056b2c(void);
int fx_spawn_0577ca(void);
int fx_spawn_057da8(void);
int fx_spawn_057ab6(void);
int fx_spawn_058460(void);
int fx_spawn_0586de(void);
int fx_spawn_056e2c(void);
int ai_reaction_check_0(int a4, int a5);
int pl_garuda_mode04_phase2(int a4);
int pl_reset_model_parts(int a4);
int FUN_0c0a3274(void);
int menu_ui_spawn_19(void);
int menu_ui_spawn_25(int a4, int a5, int a6);
int menu_ui_spawn_33(void);
int FUN_0c0b147c(int a4, int a5, int a6);
int FUN_0c0c63c4(int a4, int a5);
int FUN_0c0fd1e0(int a4, int a5, int a6, int a7);
int FUN_0c109440(int a4, int a5, int a6);
int kmiInitializeBackGroundPlane(void);
int FUN_0c019a06(int a4);
int FUN_0c02754e(int a4, int a5);
int FUN_0c024300(int a4, float f4, float f5, float f6, float f7);
int FUN_0c0275ac(int a4, int a5);
int FUN_0c0243b0(int a4, int a5, float f4, float f5, float f6);
int FUN_0c05d536(int a4, int a5, int a6, int a7);
int FUN_0c0638a0(int a4);
int FUN_0c063bb8(int a4);
int pl_mode15_cls09_10_12_f1(int a4);
int FUN_0c099966(int a4);
int vib_stop_all(void);
int pl_start_power_form_attack(int a4, int a5, int a6, int a7);
int FUN_0c0d45fe(void);
int attract_screen_urls(void);
int FUN_0c0dca60(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0dd880(int a4, int a5, int a6);
int pdVmsLcdIsReady(int a4);
int FUN_0c0fcff0(int a4);
int FUN_0c1126ba(int a4, int a5);
int FUN_0c01e444(void);
int FUN_0c05941e(int a4, int a5, int a6, int a7);
int FUN_0c0597ce(void);
int FUN_0c061f9c(int a4);
int pl_mode15_cls11_f0(int a4);
int FUN_0c0852a6(int a4, int a5);
int FUN_0c0abd84(int a4);
float obj_update_distance_cull(int a4);
int testmode_game_config_load(void);
int testmode_draw_text_table(int a4, int a5);
int FUN_0c0ce910(int a4, int a5);
void ui_draw_no_challenge(int a4);
int syRtcAicaGetCount(int a4);
int FUN_0c0f0d04(int a4, int a5, int a6, int a7);
int FUN_0c0fb4e0(void);
int FUN_0c0fbfa2(int a4, int a5, int a6, int a7);
int kdSetGetMediaInfoEx(int a4, int a5, int a6, int a7);
int ADXSTM_OpenRange(int a4, int a5, int a6);
int FUN_0c108094(int a4, int a5, int a6, int a7);
int FUN_0c10bb58(int a4);
int pl_mode15_cls15_f0_phase1(int a4);
int FUN_0c09eb32(int a4, int a5);
int ADXF_Stop(int a4);
int FUN_0c01b4f2(int a4, int a5, int a6, int a7);
int FUN_0c01b936(int a4, int a5);
int FUN_0c01d1ce(int a4, int a5);
int FUN_0c01e606(int a4, int a5);
int vec3s_midpoint_to_vec3f(int a4, int a5, int a6, int a7, int a8);
int FUN_0c021178(int a4, Stk6 s, float f4, float f5, float f6, float f7);
int ai_calc_angle_to_target(int a4);
int game_poll_start_button(void);
int FUN_0c0557d6(int a4);
int pl_falcon_attack_kind68_phase3(int a4);
int pl_jack_mode04_phase0(int a4);
int FUN_0c095472(void);
int math_sin_reduce_quadrant(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0fd1e0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t6;
    register int t7;

    t0 = FUN_0c0fcea0(a6, a6);
    if ((a7 & 1) != 0) {
        t6 = ((*(int *)(((t0 << 2) + 0xC15AC04))) + 0xA);
        t7 = (*(int *)(((t0 << 2) + 0xC15AB0C)));
    } else {
        t6 = (*(int *)(((t0 << 2) + 0xC15ABD8)));
        t7 = (*(int *)(((t0 << 2) + 0xC15AAF0)));
    }
    kmiCopyToFrameBuffer(a4, a5, t7);
    return kmiCopyToFrameBuffer((a4 + 0x800), (a5 + t7), t6);
}

int kmiInitializeBackGroundPlane(void)
{
    (((struct o0_uint *)0xC817064)->v) = 0x80800000;
    (((struct o4_uint *)0xC817064)->v) = 0x20800000;
    (((struct o8_uint *)0xC817064)->v) = 0x0;
    (((struct oC_uint *)0xC817064)->v) = 0x40000000;
    (((struct o10_uint *)0xC817064)->v) = 0x43820000;
    (((struct o14_uint *)0xC817064)->v) = 0x3727C5AC;
    (((struct o18_uint *)0xC817064)->v) = 0xFF000000;
    (((struct o1C_uint *)0xC817064)->v) = 0x43160000;
    (((struct o20_uint *)0xC817064)->v) = 0x40000000;
    (((struct o24_uint *)0xC817064)->v) = 0x3727C5AC;
    (((struct o28_uint *)0xC817064)->v) = 0xFF000000;
    (((struct o2C_uint *)0xC817064)->v) = 0x440C0000;
    (((struct o30_uint *)0xC817064)->v) = 0x43820000;
    (((struct o34_uint *)0xC817064)->v) = 0x3727C5AC;
    (((struct o38_uint *)0xC817064)->v) = 0xFF000000;
    (((struct o4_uint *)0xC81716C)->v) = ((((struct o14_int *)0xC817064)->v));
    (((struct o0_uint *)0xC81716C)->v) = 0x1000000;
    return 0x0;
}

int pdVmsLcdIsReady(int a4)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    int t7;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = kdGetDeviceInfo(a4);
    t1 = kdDevGetLCDInfo((((int)stk + 0) + 0x4), t0);
    if (((int)t1 >= 0) && ((t2 = *(int *)((t0 + 0x0)), t2 == 14) && ((t3 = *(short *)(((int)stk + 4)), (unsigned short)t3 == 1) && ((t4 = *(short *)(((int)stk + 6)), (unsigned short)t4 == 0xC0) && ((t5 = *(short *)(((int)stk + 8)), (unsigned short)t5 == 1) && ((t6 = *(signed char *)(((int)stk + 10)), t6 == 0) && (t7 = *(signed char *)(((int)stk + 11)), t7 == 0))))))) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0fcff0(int a4)
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

    t0 = *(int *)((a4 + 0x10));
    t1 = *(int *)((a4 + 0xC));
    if (((*(int *)((a4 + 0x18))) & 0x1) != 0) {
        t2 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
        if ((unsigned int)((unsigned int)((unsigned int)t1 >> 1) >> 1) < (unsigned int)((unsigned int)((unsigned int)t0 >> 1) >> 1)) {
            t2 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
        }
        t3 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
        t4 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
        t5 = (((unsigned int)t1 >> 1) * ((unsigned int)t0 >> 1));
        if ((unsigned int)t2 > (unsigned int)0x1) {
            t6 = t2;
            t2 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
            t7 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
            t8 = (((unsigned int)t1 >> 1) * ((unsigned int)t0 >> 1));
            for (;;) {
                t9 = (t7 * t2);
                t7 = ((unsigned int)t7 >> 1);
                t2 = ((unsigned int)t2 >> 1);
                t6 = ((unsigned int)t6 >> 1);
                t8 = (t8 + t9);
                if ((unsigned int)t6 <= (unsigned int)0x1) {
                    break;
                }
            }
            t3 = t2;
            t4 = t7;
            t5 = t8;
        }
        t2 = (t5 + (t4 * t3));
        if (t4 == t3) {
            t2 = (t5 + 0x2);
        }
        t3 = (t2 + 0xA);
    } else {
        t2 = (((unsigned int)t1 >> 1) * ((unsigned int)t0 >> 1));
        if ((*(int *)((a4 + 0xC))) == 8) {
            t4 = (((unsigned int)t1 >> 1) * ((unsigned int)t0 >> 1));
            if ((*(int *)((a4 + 0x10))) == 8) {
                t4 = ((((unsigned int)t1 >> 1) * ((unsigned int)t0 >> 1)) + 0x10);
            }
            t2 = t4;
        }
        t3 = t2;
    }
    return (t3 + 0x800);
}

int FUN_0c1126ba(int a4, int a5)
{
    int stk[1];
    register int t13;

    *(unsigned int *)(((int)stk + 0)) = (*(int *)((a5 + 0x0)));
    if (((((struct o10C4_int *)((*(int *)0xC843924)))->v)) == 1) {
        *(unsigned char *)((a4 + 0xB)) = (*(signed char *)((((int)stk + 0) + 0x0)));
        *(unsigned char *)((a4 + 0xA)) = (*(signed char *)(((((int)stk + 0) + 0x1) + 0x0)));
        *(unsigned char *)((a4 + 0x9)) = (*(signed char *)((((((int)stk + 0) + 0x1) + 0x1) + 0x0)));
        *(unsigned char *)((a4 + 0x8)) = (*(signed char *)(((((((int)stk + 0) + 0x1) + 0x1) + 0x1) + 0x0)));
    } else {
        *(unsigned char *)((a4 + 0x8)) = (*(signed char *)((((int)stk + 0) + 0x0)));
        *(unsigned char *)((a4 + 0x9)) = (*(signed char *)(((((int)stk + 0) + 0x1) + 0x0)));
        *(unsigned char *)((a4 + 0xA)) = (*(signed char *)((((((int)stk + 0) + 0x1) + 0x1) + 0x0)));
        *(unsigned char *)((a4 + 0xB)) = (*(signed char *)(((((((int)stk + 0) + 0x1) + 0x1) + 0x1) + 0x0)));
    }
    t13 = *(signed char *)((a4 + 0x8));
    if ((unsigned char)t13 == 0xFF) {
        *(unsigned int *)((a4 + 0x14)) = 0xFFFFFFFF;
    } else {
        if ((int)(unsigned char)t13 < (int)0xE0) {
            *(unsigned int *)((a4 + 0x14)) = 0x0;
        } else {
            *(unsigned int *)((a4 + 0x14)) = (*(int *)(((a5 + 0x4) + 0x0)));
        }
    }
    return 0x0;
}

int syRtcAicaGetCount(int a4)
{
    int stk[7];
    register int t0;
    register int t1;
    register int t2;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(int *)((int)stk + 4) = 0x1;
    *(int *)((int)stk + 0) = 0x1;
    t0 = sys_strided_copy_masked(0xA0710000, (((int)stk + 8) + 0xC), 0x4, 0x2, 0x1, 0x1);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    t1 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 16)) = (((int)stk + 8) + 0xC);
    t2 = *(int *)(((((int)stk + 8) + 0xC) + 0x0));
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 8) + 0xC) + 0x4);
    *(unsigned int *)((t1 + 0x0)) = (((t2 << 16) & 0xFFFF0000) | (unsigned short)(*(int *)((((((int)stk + 8) + 0xC) + 0x4) + 0x0))));
    syRtcDbgWriteLog((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))));
    syRtcDbgWriteLog((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))));
    return 0x0;
}

int FUN_0c0f0d04(int a4, int a5, int a6, int a7)
{
    if (((((struct o4C_short *)(a4))->v)) != 0) {
        return 0x0;
    }
    *(unsigned int *)((a4 + 0x4)) = a5;
    *(unsigned int *)((a4 + 0x8)) = a6;
    *(unsigned int *)((a4 + 0xC)) = a7;
    *(unsigned int *)((a4 + 0x10)) = ((int)(a7 + 0x7FF) >> 11);
    *(unsigned int *)((a4 + 0x14)) = 0x0;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    *(unsigned int *)((a4 + 0x1C)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x0;
    *(unsigned int *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x3C)) = 0x0;
    (((struct o40_uint *)(a4))->v) = 0x0;
    (((struct o44_uint *)(a4))->v) = 0x0;
    (((struct o48_ushort *)(a4))->v) = 0x0;
    (((struct o4A_ushort *)(a4))->v) = 0x0;
    (((struct o4C_ushort *)(a4))->v) = 0x1;
    return ((int (*)(int, int, int, int))(0xC0F0D60))(a4, 0x0, a6, a7);
}

int FUN_0c0fb4e0(void)
{
    kmiWriteRegister(0x68, ((((struct o0_int *)0xC81726C)->v)));
    kmiWriteRegister(0x6C, ((((struct o4_int *)0xC81726C)->v)));
    kmiWriteRegister(0x5C, ((((struct oC_int *)0xC81726C)->v)));
    kmiWriteRegister(0x4C, ((((struct o10_int *)0xC81726C)->v)));
    kmiWriteRegister(0x118, ((((struct o0_int *)0xC8172B4)->v)));
    kmiWriteRegister(0xF4, ((((struct o4_int *)0xC8172B4)->v)));
    kmiWriteRegister(0x48, ((((struct o18_int *)0xC81726C)->v)));
    kmiWriteRegister(0x44, (((((struct o14_int *)0xC81726C)->v)) & 0xFFFFFFFE));
    return (kmiWriteRegister(0xE8, (((((struct o8_int *)0xC8172B4)->v)) | 0x8)));
}

int FUN_0c0fbfa2(int a4, int a5, int a6, int a7)
{
    if ((int)a4 <= (int)a6) {
        if ((int)a5 > (int)a7) {
            return 0xDDDD;
        }
        return ((int (*)(int, int, int, int))(0xC0FC000))(a4, a5, a6, a7);
    }
    return 0xDDDD;
}

int kdSetGetMediaInfoEx(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B054);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getminfo_ns(a4, a5, a6);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a7, t2);
    }
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t2;
}

int ADXSTM_OpenRange(int a4, int a5, int a6)
{
    register int t0;
    register int t3;

    t0 = FUN_0c0f1fa4(a4, a5, a6);
    if (t0 == 0) {
        ADXERR_CallErrFunc(0xC15B154);
        return 0x0;
    }
    t3 = FUN_0c106436(t0, 0x0, (((a5 << 8) << 2) << 1), a6);
    strncpy((t3 + 0x40), 0xC15B18C, 0x20);
    return t3;
}

int FUN_0c108094(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if (a4 == 0) {
        return ((int (*)(int, int, int, int))(mwRnaErrCallFunc))(0xC15B31C, a5, a6, a7);
    }
    t0 = 0xFFFFFFF1;
    if ((int)a6 < (int)0xFFFFFFF1) {
    } else {
        t1 = a6;
        if ((int)a6 > (int)0xF) {
            t1 = 0xF;
        }
        t0 = t1;
    }
    *(unsigned int *)((((a5 << 2) + (a4 + 0x64)) + 0x0)) = t0;
    t1 = FUN_0c114fcc(((((struct o40_int *)(a4))->v)), a5, t0);
    if (t1 != 0) {
        return ((int (*)(int))(mwRnaErrCallFunc))(0xC15B47C);
    }
    return t1;
}

int FUN_0c10bb58(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    int t7;

    for (;;) {
        t0 = 0xC8424A8;
        t1 = 0xC8424A8;
        t2 = 0x0;
        t3 = 0x0;
        t4 = 0xC8424A8;
        t5 = 0xC8424A8;
        for (;;) {
            if (((*(int *)((t0 + 0x0))) == a4) && (t7 = *(int *)((t1 + 0x18)), (t7 & 0x3) != 0)) {
                break;
            }
            t2 = (t2 + 0x1);
            t1 = (t1 + 0x20);
            t0 = (t0 + 0x20);
            if ((unsigned int)t2 >= (unsigned int)0x8) {
                t3 = (t3 + 0x1);
                t5 = (t5 + 0x100);
                t4 = (t4 + 0x100);
                if ((unsigned int)t3 >= (unsigned int)0x2) {
                    return 0x1;
                }
                t0 = 0x0;
                t2 = 0x0;
                t1 = 0x0;
                t0 = (t0 + t5);
                t1 = (t1 + t4);
                continue;
            }
        }
        break;
    }
    return 0x0;
}

int ADXF_Stop(int a4)
{
    int stk[1];

    if (a4 == 0) {
        return 0xFFFFFFFD;
    }
    if ((*(int *)((a4 + 0x4))) == 0) {
        return 0xFFFFFFFF;
    }
    if ((*(signed char *)((a4 + 0x1))) != 1) {
        ADXCRS_Lock();
        FUN_0c106654((*(int *)((a4 + 0x4))));
        ADXSTM_GetCurOfst((*(int *)((a4 + 0x4))), ((int)stk + 0));
        *(unsigned int *)((a4 + 0x24)) = (*(int *)(((int)stk + 0)));
        FUN_0c0f553a(a4);
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        ADXCRS_Unlock();
    }
    return (*(int *)((a4 + 0x18)));
}

