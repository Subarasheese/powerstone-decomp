/* Straight-line functions with calls and guards (batch gen_eh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_float { char p[0x58]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71C8_uint { char p[0x71C8]; unsigned int v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o72BC_int { char p[0x72BC]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c0158d8(void);
int hit_build_part_shape(int, int);
float FUN_0c02629e(int, int);
float FUN_0c02649a(int, int);
int ui_sprite_queue_add(int, int, int, int, int, int);
int ui_fade_start(int, int, int, int);
int FUN_0c0442c0(int);
int fx_spawn_model_effect(int, int, int, int, int, int, int, int, int);
int obj_create(int, int, int);
int obj_destroy(int, int, int, int);
int FUN_0c05f2d4(int, int);
int FUN_0c06231c(int, int, int);
int FUN_0c06233a(int, int, int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_pos(int);
int mdl_vtx_set_pos(int);
int FUN_0c063468(int);
int FUN_0c0634b4(int);
int pl_mode01_03_enter(int);
int pl_mode05_enter(int);
int pl_mode06_enter(int);
int pl_mode07_enter(int);
int pl_mode10_enter(int);
int pl_mode08_enter(int);
int pl_mode09_enter(int, int, int, int);
int pl_mode11_enter(int);
int pl_mode12_enter(int);
int pl_mode13_enter(int);
int pl_mode14_enter(int);
int pl_mode15_enter(int, int, int);
int pl_gunrock_mode04_enter(int);
int pl_gunrock_mode01_03_enter(int, int, int, int);
int pl_garuda_mode04_enter(int);
int pl_valgas_mode04_enter(int);
int pl_state39_phase0(int);
int pl_state39_phase1(int);
int pl_state39_phase2(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int FUN_0c09c782(int);
int FUN_0c09ca88(int, int, int);
int pl_apply_motion_translation(int);
int pl_is_airborne(int);
extern int pl_try_start_move();
int pl_button_jump_pressed(int);
int FUN_0c0a00e4(int);
int obj_set_record(int, int);
int pl_end_action_choose_state(int, int, int);
int pl_check_dual_button_input(int);
int pl_change_state(int, int, int, int);
int bgm_stop_all(void);
int bgm_play_player_select(void);
int snd_play_announcer(int, int);
int menu_ui_spawn_08(void);
int menu_ui_spawn_09(int);
int menu_ui_spawn_11(void);
int menu_ui_spawn_12(void);
int menu_ui_spawn_15(void);
int menu_ui_spawn_17(void);
int menu_ui_spawn_18(void);
int menu_ui_spawn_19(void);
int menu_ui_spawn_20(void);
int menu_ui_spawn_22(void);
int obj_set_mode_owner(int, int, int);
int obj_can_interact(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0b7998(int);
int cam_force_mode_23(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0e6d00(void);
extern int FUN_0c0e6fe8();
int FUN_0c0eb6f4(int, int, int);
int FUN_0c104742(int);
int FUN_0c104962(int, int, int);
int FUN_0c108b48(int);
int FUN_0c108b4c(int);
int FUN_0c108b50(int);
int FUN_0c113d5c(int, int, int, int);
int FUN_0c114320(int, int, int);
extern void _builtin_prefetch(void *);
int adxsjd_clear(int);
int buIsFormat(int);
int check_file_correct(int, int);
int check_isopen(void);
int close_file_handle(int);
int direntry(int, int);
int direntry_dirty(int, int);
int fmMngExecServer(void);
int fmMngFormat(int, int, int);
int fmMngInit(int, int, int);
int fmMngRead(int, int);
int fmMngWrite(int, int);
int open_file_handle(void);
int thunk_FUN_0c062242(int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int menu_player_select_init(void);
int FUN_0c02afc4(int a4);
int fx_spawn_03de24(int a4);
int pl_mode15_cls04_16_f0(int a4);
int ADXSJD_Create(int a4, int a5, int a6);
int FUN_0c103e50(int a4, int a5, int a6, int a7);
int FUN_0c02ff18(void);
int obj_spawn_037848(int a4);
int obj_spawn_037ab8(int a4);
int fx_spawn_038640(int a4);
int pl_garuda_attack_init(int a4, int a5, int a6, int a7);
int pl_valgas_attack_init(int a4, int a5, int a6, int a7);
int FUN_0c09d710(int a4, int a5, float f4);
int pl_state39_update(int a4, int a5, int a6);
int fx_spawn_debris_sprites(int a4, int a5);
int fx_spawn_02(int a4, int a5, int a6);
int FUN_0c0b7fa0(int a4);
int vmsfs_fopen(int a4, int a5, int a6);
int FUN_0c029abc(int a4, int a5);
int FUN_0c085606(int a4);
int pl_gunrock_state_enter(int a4, int a5, int a6, int a7);
int stage_gimmick_15_spawn(void);
int FUN_0c0ce530(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c0f7d04(int a4, int a5, int a6);
int FUN_0c105a14(int a4, int a5, int a6);
int fx_tick_044250(int a4, int a5, int a6, int a7);
int fx_tick_044e38(int a4, int a5, int a6, int a7);
int FUN_0c0496f0(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int dbg_print_string(int a4, int a5, int a6, int a7);

int ADXSJD_Create(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(int *)((a6 + 0x0));
    t1 = 0x0;
    for (;;) {
        if ((*(signed char *)((((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + 0xC813FD4) + 0x0))) != 0) {
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x8) {
                break;
            }
            continue;
        }
        break;
    }
    t2 = 0x0;
    if (t1 != 8) {
        t3 = FUN_0c108b48(t0);
        t4 = FUN_0c108b4c(t0);
        t5 = FUN_0c108b50(t0);
        t0 = FUN_0c113d5c(a5, t3, ((unsigned int)t4 >> 1), (((unsigned int)t4 >> 1) + ((unsigned int)t5 >> 1)));
        *(unsigned int *)((((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + 0xC813FD4) + 0x4)) = t0;
        FUN_0c114320(t0, 0xC105FA4, ((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + 0xC813FD4));
        if ((*(int *)((((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + 0xC813FD4) + 0x4))) == 0) {
            t0 = 0x0;
        } else {
            *(unsigned int *)((((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + 0xC813FD4) + 0x8)) = a4;
            *(unsigned char *)((((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + 0xC813FD4) + 0x2)) = a5;
            if ((int)a5 > 0) {
                t3 = 0x0;
                t4 = 0x0;
                for (;;) {
                    t4 = (t4 + 0x1);
                    *(unsigned int *)((((((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + 0xC813FD4) + 0xC) + t3) + 0x0)) = (*(int *)((a6 + t3)));
                    t3 = (t3 + 0x4);
                    if ((int)t4 >= (int)a5) {
                        break;
                    }
                }
            }
            *(unsigned char *)((((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + 0xC813FD4) + 0x1)) = 0x0;
            adxsjd_clear(((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + 0xC813FD4));
            (((struct o48_uint *)(((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + 0xC813FD4)))->v) = 0x0;
            (((struct o4C_uint *)(((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + 0xC813FD4)))->v) = 0x0;
            *(unsigned char *)((((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + 0xC813FD4) + 0x0)) = 0x1;
            t0 = ((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + 0xC813FD4);
        }
        t2 = t0;
    }
    return t2;
}

int FUN_0c103e50(int a4, int a5, int a6, int a7)
{
    int stk[15];
    register int t0;
    register int t44;
    register int t3;
    register int t5;
    register int t8;
    register int t10;
    register int t12;
    register int t13;
    register int t18;
    int t6;
    register int t7;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned short *)(((int)stk + 8)) = a6;
    *(unsigned char *)(((int)stk + 4)) = a7;
    *(unsigned int *)(((int)stk + 12)) = (a4 * 0x148);
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC347228)));
    t44 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x2))) != 0) {
        t3 = vmsio_isready(a4);
        if (t3 == 0) {
            vmsfs_unmount(a4);
            t44 = 0xFFFFFF01;
        } else {
            t5 = vmsio_ismount(a4);
            t44 = 0xFFFFFF01;
            if ((t5 != 0) && (t6 = *(int *)(((int)stk + 12)), t7 = *(signed char *)(((t6 + 0xC80DBC8) + 0x8)), t7 != 0)) {
                t8 = buIsFormat(a4);
                t44 = 0xFFFFFF03;
                if ((int)t8 < 0) {
                } else {
                    *(volatile int *)(((int)stk + 0));
                    t10 = check_isopen();
                    t44 = 0xFFFFFF0B;
                    if ((int)t10 < 0) {
                    } else {
                        t12 = FUN_0c104962(a4, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x10));
                        t44 = 0xFFFFFF05;
                        if ((int)t12 < 0) {
                        } else {
                            t13 = direntry(a4, t12);
                            if ((*(int *)0xC15B0B0) != 0) {
                                t18 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))(t13, 0x1A, (*(short *)(((((int)stk + 0) + 0x8) + 0x0))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            }
                            *(unsigned char *)((t13 + 0x1)) = (*(signed char *)(((int)stk + 4)));
                            direntry_dirty(a4, t12);
                            t44 = (FUN_0c104742(a4));
                        }
                    }
                }
            }
        }
    }
    return t44;
}

int vmsfs_fopen(int a4, int a5, int a6)
{
    int stk[12];
    register int t1;
    register int t3;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)((a6 + 0x0)) = 0x0;
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
            t6 = check_isopen();
            if ((int)t6 >= 0) {
                t7 = check_file_correct(a4, a5);
                if ((int)t7 < 0) {
                    return 0xFFFFFF41;
                }
                t8 = open_file_handle();
                if (t8 == 0) {
                    return 0xFFFFFF07;
                }
                t9 = FUN_0c104962(a4, a5, (((int)stk + 0) + 0x4));
                *(unsigned int *)0xC812ACC = t9;
                if ((int)t9 < 0) {
                    close_file_handle(t8);
                    return 0xFFFFFF05;
                }
                return ((int (*)(void))(0xC102A14))();
            }
            return 0xFFFFFF07;
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int FUN_0c0f7d04(int a4, int a5, int a6)
{
    int stk[6];
    register int t10;
    int t7;
    register int t20;

    *(unsigned int *)((((int)stk + 0) + 0x0)) = ((((struct o0_int *)0xC15A9F8)->v));
    *(unsigned int *)((((int)stk + 0) + 0x4)) = ((((struct o4_int *)0xC15A9F8)->v));
    *(unsigned int *)((((int)stk + 0) + 0x8)) = ((((struct o8_int *)0xC15A9F8)->v));
    *(unsigned int *)((((int)stk + 0) + 0xC)) = ((((struct oC_int *)0xC15A9F8)->v));
    *(unsigned int *)((((int)stk + 0) + 0x10)) = ((((struct o10_int *)0xC15A9F8)->v));
    *(unsigned int *)((((int)stk + 0) + 0x14)) = ((((struct o14_int *)0xC15A9F8)->v));
    t10 = 0x280;
    if ((((((struct o0_int *)0xC816FE0)->v)) != 1) && (t7 = (((struct o4_int *)0xC816FE0)->v), (t7 & 16) == 0)) {
        t10 = 0x140;
    }
    if (a5 == 1) {
        *(unsigned int *)0xC817280 = ((((*(int *)0xC817280) & 0xFFA0FFFF) | (a5 << 22)) | ((((unsigned int)((unsigned int)((unsigned int)((a6 + 0x1F) & 0xFFFFFFE0) >> 2) >> 2) >> 1) & 0x1F) << 16));
        return ((int (*)(int, int, int, int))(0xC0F7E02))(a4, (a5 << 22), ((a6 + 0x1F) & 0xFFFFFFE0), t10);
    }
    if (((((struct o0_int *)0xC816FE0)->v)) != 1) {
        if (((((((struct o4_int *)0xC816FE0)->v)) & 0x1) != 1) && ((t20 = (((struct o4_int *)0xC816FE0)->v), (t20 & 0x2C) == 32) && (0x1 != 0))) {
            return ((int (*)(int, int, int, int))(0xC0F7E02))(a4, 0x1, 0xF0, t10);
        }
        if ((((((struct o4_int *)0xC816FE0)->v)) & 32) != 0) {
            return ((int (*)(int, int, int, int))(0xC0F7E02))(a4, 0x1, 0x1E0, t10);
        }
        return ((int (*)(int, int, int, int))(0xC0F7E00))(a4, 0x1, a6, t10);
    }
    return ((int (*)(int, int, int, int))(0xC0F7E02))(a4, a5, 0x1E0, t10);
}

int FUN_0c105a14(int a4, int a5, int a6)
{
    int stk[15];

    register int R1;
    register int R2;
    register int R3;
    int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_4 = fmMngInit(0x2, v0_1, v0_2);
    v0_3 = (v0_0);
    v0_0 = (v0_4);
    if ((v0_4 != -8)) goto L_C105A3E;
    v0_4 = fmMngFormat(0x0, v0_1, v0_2);
    v0_0 = (v0_4);
    if ((v0_4 != 0)) goto L_C105AE2;
    L_C105A42:;
    v0_0 = (fmMngRead(0x5, ((int)stk + 0))) != 0;
    v0_4 = (((int)stk + 0));
    if (v0_0) goto L_C105AE2;
    v0_0 = (0xC113C1C);
    L_C105A54:;
    v0_5 = fmMngExecServer();
    v0_0 = (v0_5);
    if ((v0_5 == 2)) goto L_C105A54;
    if ((v0_0 != 1)) goto L_C105AE2;
    v0_0 = (((FUN_0c0eb6f4(v0_0, v0_1, v0_2)) + 0x10));
    if ((v0_3 != 0)) goto L_C105A88;
    v0_1 = (0x8);
    v0_2 = (v0_4);
    L_C105A80:;
    if (!((v0_1 != 0))) goto L_C105AE6;
    *(unsigned char *)((v0_0 + 0x0)) = (*(signed char *)((v0_2 + 0x0)));
    v0_0 = ((v0_0 + 0x1));
    v0_1 = ((v0_1 - 1));
    v0_2 = ((v0_2 + 0x1));
    goto L_C105A80;
    L_C105AE6:;
    v0_0 = (0x0);
    L_C105AE8:;
    return v0_0;
    L_C105A88:;
    v0_5 = (0x5);
    v0_0 = ((v0_0 + 0x7));
    v0_1 = ((v0_4 + 0x7));
    v0_2 = (0x0);
    R7 = (0x1);
    L_C105AC0:;
    if (((int)v0_2 < (int)v0_5)) goto L_C105A96;
    v0_1 = fmMngWrite(0x5, v0_4);
    v0_0 = (v0_1);
    if ((v0_1 != 0)) goto L_C105AE2;
    L_C105AD2:;
    v0_1 = fmMngExecServer();
    v0_0 = (v0_1);
    if ((v0_1 == 2)) goto L_C105AD2;
    if ((v0_0 == 1)) goto L_C105AE6;
    L_C105AE2:;
    v0_0 = (0xFFFFFFFF);
    goto L_C105AE8;
    L_C105A96:;
    if (((v0_3 & R7) == 0)) goto L_C105AB8;
    *(unsigned char *)((v0_1 + 0x0)) = (*(signed char *)((v0_0 + 0x0)));
    if ((v0_2 != 4)) goto L_C105AB8;
    *(unsigned char *)(((v0_1 - 0x1) + 0x0)) = (*(signed char *)(((v0_0 - 1) + 0x0)));
    *(unsigned char *)((((v0_1 - 0x1) - 0x1) + 0x0)) = (*(signed char *)((((v0_0 - 1) - 1) + 0x0)));
    *(unsigned char *)(((((v0_1 - 0x1) - 0x1) - 0x1) + 0x0)) = (*(signed char *)(((((v0_0 - 1) - 1) - 1) + 0x0)));
    v0_0 = ((((v0_0 - 1) - 1) - 1));
    v0_1 = ((((v0_1 - 0x1) - 0x1) - 0x1));
    L_C105AB8:;
    v0_3 = ((v0_3 >> 1));
    v0_0 = ((v0_0 - 1));
    v0_1 = ((v0_1 - 1));
    v0_2 = ((v0_2 + 0x1));
    goto L_C105AC0;
    L_C105A3E:;
    if ((v0_0 != 0)) goto L_C105AE2;
    goto L_C105A42;
}

