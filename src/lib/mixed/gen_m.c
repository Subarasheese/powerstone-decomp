/* Straight-line functions with calls and guards (batch gen_m): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o114_int { char p[0x114]; int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1E0_float { char p[0x1E0]; float v; };
struct o1E8_float { char p[0x1E8]; float v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F0_float { char p[0x1F0]; float v; };
struct o1F8_float { char p[0x1F8]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2A8_uchar { char p[0x2A8]; unsigned char v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DB_uchar { char p[0x2DB]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o30_short { char p[0x30]; short v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_float { char p[0x70]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o7110_float { char p[0x7110]; float v; };
struct o7114_float { char p[0x7114]; float v; };
struct o7118_float { char p[0x7118]; float v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o71DD_uchar { char p[0x71DD]; unsigned char v; };
struct o71F0_uchar { char p[0x71F0]; unsigned char v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o721E_uchar { char p[0x721E]; unsigned char v; };
struct o7225_uchar { char p[0x7225]; unsigned char v; };
struct o7226_uchar { char p[0x7226]; unsigned char v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o7294_int { char p[0x7294]; int v; };
struct o7298_float { char p[0x7298]; float v; };
struct o72A8_int { char p[0x72A8]; int v; };
struct o72A8_uint { char p[0x72A8]; unsigned int v; };
struct o74_float { char p[0x74]; float v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o94_int { char p[0x94]; int v; };
struct o94_uint { char p[0x94]; unsigned int v; };
struct o98_int { char p[0x98]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_short { char p[0xC]; short v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXRNA_SetPlaySw(int, int);
int ADXRNA_SetTransSw(int, int);
int ending_main(void);
int FUN_0c0158ee(void);
int ending_scene_main(void);
int ui_draw_element_sprite(int);
int FUN_0c0246b2(int);
int FUN_0c0555c4(void);
int obj_create(int, int, int);
int math_vec3_sub(int, int, int);
float math_vec3_length(int);
int FUN_0c06233a(int, int, int);
int FUN_0c0634b4(int);
int FUN_0c098c48(int);
int pl_reset_scale(int);
int FUN_0c099966(int);
int FUN_0c099a1c(void);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int FUN_0c09c5f4(int);
int FUN_0c09c782(int);
int pl_get_hit_count_of_opponent(int);
int pl_tick_hitstop(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_landed(int);
int FUN_0c0a1a60(int);
int pl_end_action_choose_state(int);
int pl_check_power_form_attack_input(int, int, int);
int pl_start_power_form_attack(int);
extern int pl_change_state();
int obj_set_mode_owner(int, int);
int obj_clear_slot_contact(int);
int obj_collect_slot_contacts(int);
int FUN_0c0d48ea(int);
int FUN_0c0d4d00(void);
int game_play_state_00(void);
int game_play_state_01(void);
int game_play_state_02(void);
int game_play_state_03(void);
int game_play_state_04(void);
int game_play_state_05(void);
int game_play_state_06(void);
int game_play_state_07(void);
int FUN_0c0d52aa(void);
int FUN_0c0d5428(void);
int nlObjPutSetGlobalAmbience(float);
int FUN_0c0dccd0(int);
int FUN_0c0dcd20(float, float, float);
float math_signed_sqrt(float);
float math_cos_angle16(int);
int math_rand_next(void);
float math_sin_angle16(int);
float FUN_0c0e2220(int, int);
int FUN_0c0e24f0(int);
int _modls(void);
int _quick_odd_mvn(float);
int FUN_0c0f2292(int);
int FUN_0c0f8180(int);
int FUN_0c0f8920(int);
int gdFsMemcpy(int, int, int);
int gdFsGetSearchID(int);
int FUN_0c0fff10(int, int);
int kdGetDeviceInfo(int);
int vmsfs_unmount(int);
int vmsfs_fopen(int, int, int);
int vmsfs_fclose(int, int);
int vmsfs_fread1(int, int);
int FUN_0c104962(int, int, int);
int check_isopen(void);
int vmsfs_fseek(int, int, int, int);
int FUN_0c105eb8(int);
int FUN_0c10660e(int);
int FUN_0c106654(int);
int vmsio_isready(int);
int vmsio_ismount(int);
int FUN_0c113df4(int);
int FUN_0c1151d6(int, int, int);
int FUN_0c115a52(void);
int FUN_0c115c70(int, int, int, int, int, int);
int FUN_0c115fb8(int, int, int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxpd_error(void);
int buIsFormat(int);
int memset(int, int, int);
int mwRnaErrCallFunc(int);
int FUN_0c0cb3b8(int a4);
int game_play_dispatch_state(void);
int FUN_0c0f2114(int a4, int a5, int a6);
int FUN_0c107602(int a4, int a5, int a6, int a7);
int FUN_0c068488(int a4);
int pl_jack_mode04_phase1(int a4);
int fx_calc_orbit_position(int a4, int a5, float f4);
int FUN_0c01dada(int a4);
int FUN_0c02a5e4(void);
int FUN_0c09c35e(void);
int FUN_0c0de120(int a4);
void FUN_0c0f2968(int a4, int a5, int a6);
int FUN_0c0f4c2c(int a4, int a5, int a6, int a7);
int FUN_0c103f6c(int a4, int a5);
int vmsfs_load_file_ex(int a4, int a5, int a6, int a7, int a8);
int ending_spawn_obj_t08(void);
int pl_mode15_cls08_f1(int a4);
int FUN_0c098c86(int a4);
int pl_reset_pose(int a4);
int FUN_0c0a2666(int a4, int a5, int a6);
int item_director_pick_kind(int a4, int a5, int a6, int a7);
float cam_publish_heading(int a4);
int gfx_init_background_render_state(int a4);
int FUN_0c0f9872(int a4);
int FUN_0c113d5c(int a4, int a5, int a6, int a7);
int FUN_0c01dc58(void);
int FUN_0c02280e(int a4, int a5, int a6, int a7);
int FUN_0c025958(int a4, int a5);
int FUN_0c027168(int a4, int a5);
int FUN_0c0270c6(int a4, int a5);
int FUN_0c0271fe(int a4, int a5);
int FUN_0c0272a0(int a4, int a5);
int ui_hud_slide_text(int a4, int a5, int a6, int a7, float f4);
int fx_spawn_0372a8(int a4);
int FUN_0c05fb58(int a4);
int FUN_0c09375c(int a4, int a5, int a6, int a7);
int fx23_outside_arena_bounds(int a4);
int gdFsGet1DirEnt(int a4, int a5);
int FUN_0c02259e(int a4, int a5, int a6, int a7);
int mot_read_vec3_scaled(int a4, int a5);
int FUN_0c09c51e(int a4);
int FUN_0c0f28b6(int a4);
int kmSetBackGroundRenderState(int a4);
int FUN_0c0d4ff4(int a4, int a5, int a6, int a7);
int ADXPD_ExecHndl(int a4);
int keycfg_settings_changed(int a4, int a5, int a6, int a7);

int FUN_0c0f2114(int a4, int a5, int a6)
{
    register int t4;

    (((struct o0_uint *)0xC7FEC4C)->v) = a4;
    (((struct o4_uint *)0xC7FE700)->v) = 0x0;
    (((struct o0_uint *)0xC7FE700)->v) = 0x1;
    (((struct o8_uint *)0xC7FE700)->v) = 0x0;
    memset(0xC7FE70C, 0x0, 0x4E0);
    if ((a6 != 0) && (a5 != 0)) {
        (((struct o4_uint *)0xC7FE700)->v) = 0x1;
        FUN_0c0fff10(a5, a6);
    }
    t4 = 0x0;
    for (;;) {
        *(unsigned int *)((((t4 * 0x34) + 0xC7FE70C) + 0x30)) = (kdGetDeviceInfo(t4));
        FUN_0c0f2292(((t4 * 0x34) + 0xC7FE70C));
        *(unsigned int *)((0xC7FEBEC + (t4 << 2))) = 0x0;
        *(unsigned char *)((t4 + 0xC7FEC52)) = 0x0;
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

int FUN_0c107602(int a4, int a5, int a6, int a7)
{
    int stk[13];
    register int t1;
    register int t2;
    register int t3;
    register int t14;

    if ((int)((((struct o44_int *)(a4))->v)) <= 0) {
        return 0x1;
    }
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0xC);
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0xC) + 0x4);
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x4) + 0x0)) = 0x1;
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x0)) = 0x1;
    t1 = a4;
    t2 = 0x0;
    for (;;) {
        t3 = *(signed char *)((a4 + 0x3));
        if ((int)t2 >= (int)(unsigned char)t3) {
            if ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) != 0) {
                if ((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) == 0) {
                    return (unsigned char)t3;
                }
                return ((int (*)(int, int, int, int))(0xC1076A2))(t1, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC1076A0))(t1, a5, a6, a7);
        }
        t1 = ((((struct o40_int *)(a4))->v));
        t1 = (FUN_0c1151d6(t1, t2, ((int)stk + 0)));
        if (t1 != 0) {
            break;
        }
        if ((*(int *)(((int)stk + 0))) != 1) {
            *(unsigned int *)(((((int)stk + 0) + 0xC) + (t2 << 2))) = 0x0;
        }
        t2 = (t2 + 0x1);
    }
    t14 = mwRnaErrCallFunc(0xC15B38C);
    if ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) != 0) {
        if ((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) == 0) {
            return t14;
        }
        return ((int (*)(void))(0xC1076A2))();
    }
    return ((int (*)(void))(0xC1076A0))();
}

void FUN_0c0f2968(int a4, int a5, int a6)
{
    register int t0;
    register int t2;
    register int t3;
    int t4;
    register int t5;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    if (a4 != 0) {
        t2 = (*(int *)0xC7FECA4);
        t3 = a6;
        for (;;) {
            if ((((unsigned int)(a4 - 32) > (unsigned int)t2) && (t4 = *(int *)((t2 + 0x0)), (unsigned int)(a4 - 32) < (unsigned int)t4)) || ((t5 = *(int *)((t2 + 0x0)), t3 = t5, (unsigned int)t2 >= (unsigned int)t3) && (((unsigned int)(a4 - 32) > (unsigned int)t2) || ((unsigned int)(a4 - 32) < (unsigned int)t3)))) {
                break;
            }
            t2 = (*(int *)((t2 + 0x0)));
        }
        if ((((((*(int *)(((a4 - 32) + 0x4))) << 2) << 2) << 1) + (a4 - 32)) == (*(int *)((t2 + 0x0)))) {
            *(unsigned int *)(((a4 - 32) + 0x4)) = ((*(int *)(((a4 - 32) + 0x4))) + (*(int *)(((*(int *)((t2 + 0x0))) + 0x4))));
            *(unsigned int *)(((a4 - 32) + 0x0)) = (*(int *)(((*(int *)((t2 + 0x0))) + 0x0)));
        } else {
            *(unsigned int *)(((a4 - 32) + 0x0)) = (*(int *)((t2 + 0x0)));
        }
        if ((((((*(int *)((t2 + 0x4))) << 2) << 2) << 1) + t2) == (a4 - 32)) {
            *(unsigned int *)((t2 + 0x4)) = ((*(int *)((t2 + 0x4))) + (*(int *)(((a4 - 32) + 0x4))));
            *(unsigned int *)((t2 + 0x0)) = (*(int *)(((a4 - 32) + 0x0)));
        } else {
            *(unsigned int *)((t2 + 0x0)) = (a4 - 32);
        }
        *(unsigned int *)0xC7FECA4 = t2;
    }
    _builtin_set_imask(((unsigned int)((((unsigned short)t0 & 0xF) << 2) << 2) >> 4));
}

int FUN_0c0f4c2c(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    ADXCRS_Lock();
    ADXRNA_SetTransSw((*(int *)((a4 + 0xC))), 0x0);
    ADXRNA_SetPlaySw((*(int *)((a4 + 0xC))), 0x0);
    FUN_0c105eb8((*(int *)((a4 + 0x4))));
    if ((*(int *)((a4 + 0x8))) != 0) {
        FUN_0c106654((*(int *)((a4 + 0x8))));
        FUN_0c10660e((*(int *)((a4 + 0x8))));
        t1 = *(int *)((a4 + 0x14));
        t2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x14)))))(t1, a5, a6, a7);
        *(unsigned int *)((a4 + 0x8)) = 0x0;
    }
    if (((*(signed char *)((a4 + 0x2))) == 2) && (t0 = *(int *)((a4 + 0x14)), t0 != 0)) {
        t0 = *(int *)((a4 + 0x14));
        t1 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0xC)))))(t0, a5, a6, a7);
    }
    *(unsigned int *)((a4 + 0x14)) = 0x0;
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        t1 = t0;
        t1 = (t1 << 2);
        t1 = (t1 + (a4 + 0x18));
        t1 = (*(int *)((t1 + 0x0)));
        t2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x14)))))(t1, a5, a6, a7);
        t0 = (t0 + 0x1);
    }
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    return ADXCRS_Unlock();
}

int FUN_0c103f6c(int a4, int a5)
{
    int stk[12];
    register int t1;
    register int t3;
    register int t5;
    register int t7;
    register int t9;

    *(unsigned int *)(((int)stk + 0)) = a5;
    if ((*(signed char *)(((a4 * 0x148) + 0xC80DBCA))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t3 = vmsio_ismount(a4);
        if (t3 != 0) {
            if ((*(signed char *)(((a4 * 0x148) + 0xC80DBD0))) == 0) {
                return 0xFFFFFF01;
            }
            t5 = buIsFormat(a4);
            if ((int)t5 < 0) {
                return 0xFFFFFF03;
            }
            *(volatile int *)(((int)stk + 0));
            t7 = check_isopen();
            if ((int)t7 < 0) {
                return 0xFFFFFF0B;
            }
            t9 = FUN_0c104962(a4, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x4));
            if ((int)t9 < 0) {
                return 0xFFFFFF05;
            }
            return (*(int *)(((int)stk + 44)));
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int vmsfs_load_file_ex(int a4, int a5, int a6, int a7, int a8)
{
    int stk[4];

    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_2 = a4;
    v0_0 = a5;
    v0_3 = a6;
    v0_1 = a7;
    *(unsigned int *)(((int)stk + 8)) = v0_0;
    *(unsigned int *)(((int)stk + 12)) = v0_3;
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    v0_0 = (v0_2);
    v0_2 = (a8);
    if ((a8 != 0)) goto L_C1057F2;
    v0_3 = FUN_0c103f6c(v0_0, (*(int *)(((int)stk + 8))));
    v0_2 = (v0_3);
    if (((int)v0_3 >= 0)) goto L_C1057EC;
    v0_0 = (v0_2);
    L_C105848:;
    return v0_0;
    L_C1057EC:;
    v0_2 = ((v0_2 - (*(int *)(((int)stk + 4)))));
    L_C1057F2:;
    v0_4 = vmsfs_fopen(v0_0, (*(int *)(((int)stk + 8))), ((int)stk + 0));
    v0_3 = (v0_4);
    if (((int)v0_4 < 0)) goto L_C105846;
    v0_3 = *(int *)(((int)stk + 12));
    *(unsigned int *)((((v0_0 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
    *(unsigned int *)((((v0_0 * 0x148) + 0xC80DBC8) + 0x34)) = v0_2;
    vmsfs_fseek((*(int *)(((int)stk + 0))), (*(int *)(((int)stk + 4))), 0x0, v0_1);
    v0_0 = (0x0);
    v0_1 = (v0_3);
    if (((unsigned int)0x0 >= (unsigned int)v0_2)) goto L_C10583C;
    v0_4 = (0x200);
    L_C105826:;
    v0_5 = vmsfs_fread1((*(int *)(((int)stk + 0))), v0_1);
    v0_3 = (v0_5);
    if (((int)v0_5 < 0)) goto L_C10583E;
    v0_3 = (unsigned int)(v0_0 + 0x1) < (unsigned int)v0_2;
    v0_0 = ((v0_0 + 0x1));
    v0_1 = ((v0_1 + v0_4));
    if (v0_3) goto L_C105826;
    L_C10583C:;
    v0_3 = (0x0);
    L_C10583E:;
    vmsfs_fclose((*(int *)(((int)stk + 0))), 0x0);
    L_C105846:;
    v0_0 = (v0_3);
    goto L_C105848;
}

int FUN_0c0f9872(int a4)
{
    register int t19;
    register int t20;

    if ((*(int *)0xC8172FC) != 1) {
        (((struct o0_uint *)0xC803DF0)->v) = ((signed char)(((a4 << 2) + a4) << 2) + 0xC803E04);
    } else {
        (((struct o0_uint *)0xC803DF0)->v) = 0xC803E04;
    }
    *(unsigned int *)((((((struct o4_int *)0xC803DF0)->v)) + 0x0)) = (*(int *)((((((struct o0_int *)0xC803DF0)->v)) + 0x0)));
    *(unsigned int *)((((((struct o4_int *)0xC803DF0)->v)) + 0x4)) = (*(int *)((((((struct o0_int *)0xC803DF0)->v)) + 0x4)));
    *(unsigned int *)((((((struct o4_int *)0xC803DF0)->v)) + 0x8)) = (*(int *)((((((struct o0_int *)0xC803DF0)->v)) + 0x8)));
    *(unsigned int *)((((((struct o4_int *)0xC803DF0)->v)) + 0xC)) = (*(int *)((((((struct o0_int *)0xC803DF0)->v)) + 0xC)));
    *(unsigned int *)((((((struct o4_int *)0xC803DF0)->v)) + 0x10)) = (*(int *)((((((struct o0_int *)0xC803DF0)->v)) + 0x10)));
    t19 = 0x0;
    t20 = 0x0;
    for (;;) {
        t20 = (t20 + 0x1);
        *(unsigned int *)(((t19 + 0xC803E40) + 0x0)) = (*(int *)((((((struct o4_int *)0xC803DF0)->v)) + t19)));
        t19 = (t19 + 0x4);
        if ((unsigned int)t20 >= (unsigned int)0x5) {
            return ((int (*)(int, int, int, int))(0xC0F990A))(a4, 0xC803DF4, t19, 0x5);
        }
    }
}

int FUN_0c113d5c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t8;

    t0 = 0x0;
    for (;;) {
        if ((*(short *)((((short)((short)t0 * (short)0xAC) + 0xC8439A0) + 0x0))) != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x8) {
                break;
            }
            continue;
        }
        break;
    }
    if (t0 != 8) {
        memset(((short)((short)t0 * (short)0xAC) + 0xC8439A0), 0x0, 0xAC);
        *(unsigned short *)((((short)((short)t0 * (short)0xAC) + 0xC8439A0) + 0x0)) = 0x1;
        t8 = FUN_0c115a52();
        *(unsigned int *)((((short)((short)t0 * (short)0xAC) + 0xC8439A0) + 0x8)) = t8;
        if (t8 == 0) {
            FUN_0c113df4(((short)((short)t0 * (short)0xAC) + 0xC8439A0));
            return 0x0;
        }
        *(unsigned int *)((((short)((short)t0 * (short)0xAC) + 0xC8439A0) + 0x38)) = a4;
        *(unsigned int *)((((short)((short)t0 * (short)0xAC) + 0xC8439A0) + 0x3C)) = a5;
        (((struct o40_uint *)(((short)((short)t0 * (short)0xAC) + 0xC8439A0)))->v) = a6;
        (((struct o44_uint *)(((short)((short)t0 * (short)0xAC) + 0xC8439A0)))->v) = a7;
        (((struct o88_uint *)(((short)((short)t0 * (short)0xAC) + 0xC8439A0)))->v) = 0xC113D2C;
        (((struct o8C_uint *)(((short)((short)t0 * (short)0xAC) + 0xC8439A0)))->v) = ((short)((short)t0 * (short)0xAC) + 0xC8439A0);
        (((struct o90_uint *)(((short)((short)t0 * (short)0xAC) + 0xC8439A0)))->v) = 0xC113D4A;
        (((struct o94_uint *)(((short)((short)t0 * (short)0xAC) + 0xC8439A0)))->v) = ((short)((short)t0 * (short)0xAC) + 0xC8439A0);
        return ((short)((short)t0 * (short)0xAC) + 0xC8439A0);
    }
    return 0x0;
}

int gdFsGet1DirEnt(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    if ((int)(unsigned char)(*(signed char *)((a4 + 0x0))) < (int)0x22) {
    } else {
        gdFsMemcpy((a4 + 0x2), a5, 0x4);
        gdFsMemcpy((a4 + 0xA), (a5 + 0x4), 0x4);
        *(unsigned char *)((a5 + 0x8)) = (*(signed char *)((a4 + 0x19)));
        t1 = *(signed char *)((a4 + 0x20));
        t2 = (unsigned char)t1;
        if (((unsigned char)(*(signed char *)((a5 + 0x8))) & 2) == 0) {
            t2 = ((unsigned char)t1 - 2);
        }
        gdFsMemcpy((a4 + 0x21), (a5 + 0xA), t2);
        *(unsigned char *)(((t2 + (a5 + 0xA)) + 0x0)) = 0x0;
        if (((unsigned char)(*(signed char *)((a5 + 0x8))) & 2) != 0) {
            t1 = *(signed char *)((a5 + 0xA));
            if (t1 == 0) {
                *(unsigned char *)((a5 + 0xA)) = 0x2E;
            } else {
                if (t1 == 1) {
                    *(unsigned char *)((a5 + 0xA)) = 0x2E;
                    *(unsigned char *)((a5 + 0xB)) = 0x2E;
                    *(unsigned char *)((a5 + 0xC)) = 0x0;
                }
            }
        }
        *(unsigned char *)((a5 + 0x9)) = (gdFsGetSearchID((a5 + 0xA)));
        t0 = (unsigned char)(*(signed char *)((a4 + 0x0)));
    }
    return t0;
}

int FUN_0c0f28b6(int a4)
{
    int stk[1];
    register int t1;
    register int t2;
    register int t5;
    register int t6;
    register int t10;
    register int t16;

    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = *(short *)(((int)stk + 0));
    t2 = *(int *)0xC7FECA4;
    t5 = (*(int *)((t2 + 0x0)));
    t6 = t2;
    for (;;) {
        if ((unsigned int)(*(int *)((t5 + 0x4))) >= (unsigned int)(((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) {
            break;
        }
        if (t5 == t2) {
            _builtin_set_imask(((unsigned int)((((unsigned short)t1 & 0xF) << 2) << 2) >> 4));
            return 0x0;
        }
        t6 = t5;
        t5 = (*(int *)((t5 + 0x0)));
    }
    t10 = *(int *)((t5 + 0x4));
    if (t10 == (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) {
        *(unsigned int *)((t6 + 0x0)) = (*(int *)((t5 + 0x0)));
        t16 = t5;
    } else {
        *(unsigned int *)((t5 + 0x4)) = (t10 - (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1));
        *(unsigned int *)(((t5 + ((((t10 - (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) << 2) << 2) << 1)) + 0x4)) = (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1);
        t16 = (t5 + ((((t10 - (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) << 2) << 2) << 1));
    }
    *(unsigned int *)0xC7FECA4 = t6;
    _builtin_set_imask(((unsigned int)((((unsigned short)t1 & 0xF) << 2) << 2) >> 4));
    return (t16 + 0x20);
}

int kmSetBackGroundRenderState(int a4)
{
    (((struct o18_uint *)0xC817160)->v) = ((((((int)(((((struct o70_float *)(a4))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o74_float *)(a4))->v)) * 255.0f) << 16)) | ((int)(((((struct o78_float *)(a4))->v)) * 255.0f) << 8)) | (int)(((((struct o7C_float *)(a4))->v)) * 255.0f));
    (((struct o1C_uint *)0xC817160)->v) = ((((((int)(((((struct o80_float *)(a4))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o84_float *)(a4))->v)) * 255.0f) << 16)) | ((int)(((((struct o88_float *)(a4))->v)) * 255.0f) << 8)) | (int)(((((struct o8C_float *)(a4))->v)) * 255.0f));
    (((struct o0_uint *)0xC817160)->v) = ((((struct o94_int *)(a4))->v));
    (((struct o4_uint *)0xC817160)->v) = ((((struct o98_int *)(a4))->v));
    (((struct o8_uint *)0xC817160)->v) = ((((struct o9C_int *)(a4))->v));
    return 0x0;
}

int ADXPD_ExecHndl(int a4)
{
    register int t0;
    register int t1;
    register int t3;

    if ((*(int *)((a4 + 0xC))) == 1) {
        *(unsigned int *)((a4 + 0xC)) = 0x2;
    }
    t0 = *(int *)((a4 + 0xC));
    t1 = t0;
    if (t0 == 2) {
        if ((*(int *)((a4 + 0x14))) == 1) {
            t0 = FUN_0c115c70((*(int *)((a4 + 0x18))), (*(int *)((a4 + 0x1C))), (*(int *)((a4 + 0x20))), (a4 + 0x28), (((((struct o30_short *)(a4))->v))), ((*(short *)(((a4 + 0x30) + 0x2)))));
            *(unsigned int *)((a4 + 0x10)) = t0;
            t1 = t0;
        } else {
            *(volatile short *)(((a4 + 0x30) + 0x2));
            *(volatile short *)(((a4 + 0x30) + 0x0));
            t0 = FUN_0c115fb8((*(int *)((a4 + 0x18))), (*(int *)((a4 + 0x1C))), (*(int *)((a4 + 0x20))), (a4 + 0x28), ((*(int *)((a4 + 0x24)))), ((a4 + 0x28) + 0x4));
            *(unsigned int *)((a4 + 0x10)) = t0;
            t3 = (int)((int)t0 % (int)0x2);
            t0 = t3;
            if (t3 == 1) {
                t0 = (adxpd_error());
            }
            t1 = t0;
        }
        *(unsigned int *)((a4 + 0xC)) = 0x3;
    }
    return t1;
}

