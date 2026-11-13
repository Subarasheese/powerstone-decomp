/* Straight-line functions with calls and guards (batch gen_ef): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10C0_int { char p[0x10C0]; int v; };
struct o10D0_int { char p[0x10D0]; int v; };
struct o10F4_int { char p[0x10F4]; int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o22_short { char p[0x22]; short v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o25_uchar { char p[0x25]; unsigned char v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o27_uchar { char p[0x27]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o29_uchar { char p[0x29]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2FC_short { char p[0x2FC]; short v; };
struct o2FE_short { char p[0x2FE]; short v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4E_short { char p[0x4E]; short v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o54_float { char p[0x54]; float v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_float { char p[0x58]; float v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o7198_short { char p[0x7198]; short v; };
struct o7198_ushort { char p[0x7198]; unsigned short v; };
struct o719A_ushort { char p[0x719A]; unsigned short v; };
struct o719C_uchar { char p[0x719C]; unsigned char v; };
struct o719D_uchar { char p[0x719D]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o719E_ushort { char p[0x719E]; unsigned short v; };
struct o71A0_ushort { char p[0x71A0]; unsigned short v; };
struct o71A2_uchar { char p[0x71A2]; unsigned char v; };
struct o71A4_uchar { char p[0x71A4]; unsigned char v; };
struct o71A5_uchar { char p[0x71A5]; unsigned char v; };
struct o71A6_uchar { char p[0x71A6]; unsigned char v; };
struct o71A7_uchar { char p[0x71A7]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o71D6_short { char p[0x71D6]; short v; };
struct o71D8_short { char p[0x71D8]; short v; };
struct o722C_float { char p[0x722C]; float v; };
struct o7250_float { char p[0x7250]; float v; };
struct o7254_float { char p[0x7254]; float v; };
struct o7258_float { char p[0x7258]; float v; };
struct o729C_float { char p[0x729C]; float v; };
struct o72B2_uchar { char p[0x72B2]; unsigned char v; };
struct o72B3_uchar { char p[0x72B3]; unsigned char v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_int { char p[0x90]; int v; };
struct o94_int { char p[0x94]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oB0_int { char p[0xB0]; int v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_uint { char p[0xF0]; unsigned int v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
struct oFC0_uint { char p[0xFC0]; unsigned int v; };
struct oFC4_int { char p[0xFC4]; int v; };
struct oFC4_uint { char p[0xFC4]; unsigned int v; };
struct oFC8_int { char p[0xFC8]; int v; };
struct oFC8_uint { char p[0xFC8]; unsigned int v; };
int ADXPD_GetStat(int);
int opt_game_settings_init(void);
int opt_game_settings_changed(void);
extern int opt_game_settings_main();
extern int FUN_0c01b4f2();
float FUN_0c02651e(int);
int draw_project_point_sprite(int);
int draw_project_point_sprite_z01(int);
int logo_spawn_overlay(float);
int game_reset_objects(void);
int obj_create(int, int, int);
int obj_create_beside(int, int, int, int, int);
int obj_destroy(int);
int FUN_0c0593e0(int);
int obj_tick_class(int);
int FUN_0c06233a(int, int, int);
int pl_timer_disable(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_load_motion_key(int, int);
int pl_load_motion_attack_record(int, int);
int pl_spawn_hit_effect_with_se(int);
int pl_get_hit_count_of_opponent(int);
int hit_find_wall_entry_by_kind(int, int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_angle_to_opponent(int);
int math_angle_between_points_xz(int, int);
int pl_turn_to_opponent(int, int);
int pl_landed(int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int obj_touched_by_slot(int, int);
int obj_can_interact(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0c9962(int);
int FUN_0c0c9982(int);
int FUN_0c0d6630(int);
float math_signed_sqrt(float);
float math_cos_angle16(int);
int math_rand_next(void);
float math_sin_angle16(int);
int FUN_0c0e3c54(int);
int _divls(void);
int _modls(void);
int _quick_evn_mvn(int);
extern int _quick_odd_mvn();
int _quick_mvn(int, int, int, int);
int FUN_0c0ed9ac(int, int, int);
int FUN_0c0ed9c0(int, int, int);
int FUN_0c0f4128(int);
int FUN_0c0f4202(int, int);
int FUN_0c104962(int, int, int);
int FUN_0c10c760(void);
int FUN_0c111cb8(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buIsFormat(int);
int check_isopen(void);
int direntry(int, int);
int fmMngClearBuf(int, int);
int fmMngSncmp(int, int, int);
int gdFsReopenHn(int, int, int, int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_end_ns(void);
int pdVibMxStop(int);
int thunk_FUN_0c062242(int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int FUN_0c111310(int a4, int a5, int a6);
int opt_page1_spawn_cursor_pulse(int a4);
int fx_spawn_03b1ec(int a4, int a5);
int fx_tick_041820(int a4);
float FUN_0c0641a0(int a4, float f4, float f5);
int FUN_0c063a12(int a4, float f4);
int pl_wangtang_mode11_phase0(int a4);
float FUN_0c09f8e0(int a4, int a5, float f4, float f5);
int fx_trail_spawn_segment(int a4);
int FUN_0c01b570(int a4, int a5, int a6, int a7);
int fx_spawn_03d60c(int a4, int a5);
int fx_spawn_04bc94(int a4, int a5, int a6, int a7, float f4);
int pl_mode06_enter(int a4, int a5, int a6, int a7);
int pl_start_motion_owner(int a4, int a5, int a6);
int pl_enter_state_36(int a4, int a5);
int menu_ui_task_34_bind_models(int a4, int a5);
int FUN_0c0d665c(int a4);
int FUN_0c0d7bf0(void);
void gdFsReqRd32(int a4, int a5, int a6);
int vmsfs_frename(int a4, int a5, int a6);
int FUN_0c10cf60(int a4, int a5, int a6, int a7);
int ADXB_ExecOneWav16(int a4, int a5, int a6, int a7);
int fmMngInit(int a4, int a5, int a6);
int FUN_0c02842a(int a4, int a5);
int gdFsDaPlayG(int a4, int a5, int a6, int a7);
int ui_reset_hud_gauges(void);
int pl_vib_update(int a4);

int FUN_0c111310(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    *(unsigned int *)0xC843924 = 0xC842828;
    *(unsigned int *)0xC8437EC = a4;
    (((struct oFC8_uint *)((*(int *)0xC843924)))->v) = a6;
    if ((((((struct oFC4_int *)((*(int *)0xC843924)))->v)) & 0x1F) != 0) {
        t0 = *(int *)0xC843924;
        (((struct oFC4_uint *)(t0))->v) = (((((struct oFC4_int *)(t0))->v)) + 0x20);
        t0 = *(int *)0xC843924;
        (((struct oFC4_uint *)(t0))->v) = (((((struct oFC4_int *)(t0))->v)) & 0xFFFFFFE0);
    }
    t0 = *(int *)0xC843924;
    if ((0x1F & ((((struct oFC8_int *)(t0))->v))) != 0) {
        (((struct oFC8_uint *)(t0))->v) = (((((struct oFC8_int *)(t0))->v)) + 0x20);
        t0 = *(int *)0xC843924;
        (((struct oFC8_uint *)(t0))->v) = (((((struct oFC8_int *)(t0))->v)) & 0xFFFFFFE0);
    }
    t0 = *(int *)0xC843924;
    (((struct oFC4_uint *)(t0))->v) = (((((struct oFC4_int *)(t0))->v)) | 0xA0000000);
    t0 = *(int *)0xC843924;
    (((struct oFC8_uint *)(t0))->v) = (((((struct oFC8_int *)(t0))->v)) | 0xA0000000);
    FUN_0c111cb8();
    t0 = 0xC15B6AC;
    t1 = 0xC15B6AC;
    t2 = 0xC15B6AC;
    t3 = 0xC15B6AC;
    for (;;) {
        if ((*(signed char *)((((0xF90 + (*(int *)0xC843924)) + (*(int *)((t3 + 0x0)))) + 0x0))) != 0) {
            t0 = (*(int *)((t2 + 0x0)));
            mpdrv_set_dreq_ns(t0);
        } else {
            t4 = t0;
            t5 = t1;
        }
        t3 = (t3 + 0x4);
        t0 = t4;
        t1 = t5;
        t2 = (t2 + 0x4);
        if ((unsigned int)t3 >= (unsigned int)0xC15B6BC) {
            break;
        }
    }
    mpdrv_set_end_ns();
    (((struct oFC0_uint *)((*(int *)0xC843924)))->v) = 0x1;
    (((struct o8C_uint *)(((((struct o10F4_int *)((*(int *)0xC843924)))->v))))->v) = 0x6155404F;
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC843924)))->v)) + 0x10)) = 0x0;
    t0 = *(int *)0xC843924;
    (((struct o80_uint *)(((((struct o10F4_int *)(t0))->v))))->v) = (((((struct o10C0_int *)(t0))->v)) | ((((struct o10D0_int *)(t0))->v)));
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC843924)))->v)) + 0x14)) = 0x1;
    return 0x0;
}

void gdFsReqRd32(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((a4 != 0) && (t0 = (((struct o4C_short *)(a4))->v), t0 != 0)) {
        if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x1C))) == 0) {
            if ((0x1F & a6) != 0) {
            } else {
                t0 = *(int *)((a4 + 0x14));
                t1 = *(int *)((a4 + 0x8));
                t2 = *(int *)((a4 + 0x10));
                if ((int)(t0 + t1) >= (int)(t1 + t2)) {
                    *(unsigned int *)((a4 + 0x18)) = 0x0;
                    (((struct o50_ushort *)(a4))->v) = 0x1;
                } else {
                    t3 = a5;
                    if ((int)(a5 + (t0 + t1)) > (int)(t1 + t2)) {
                        t3 = ((t1 + t2) - (t0 + t1));
                    }
                    if (t3 == 0) {
                        *(unsigned int *)((a4 + 0x18)) = 0x0;
                        (((struct o50_ushort *)(a4))->v) = 0x1;
                    } else {
                        t2 = _builtin_get_imask();
                        _builtin_set_imask(0xF);
                        t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((a4 + 0x0))) + 0xC))) + 0x4)))))((t0 + t1), t3, a6, ((((struct o4E_short *)(a4))->v)));
                        if (t4 != 0) {
                            *(unsigned int *)((a4 + 0x3C)) = t4;
                            *(unsigned int *)((a4 + 0x1C)) = t3;
                            (((struct o50_ushort *)(a4))->v) = 0x2;
                            (((struct o4A_ushort *)(a4))->v) = 0x1;
                            (((struct o48_ushort *)(a4))->v) = 0x1;
                            *(unsigned int *)((a4 + 0x18)) = 0x0;
                            *(unsigned int *)(((*(int *)((a4 + 0x0))) + 0x1C)) = a4;
                            t0 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)((a4 + 0x0))) + 0xC)))))->v))))();
                        } else {
                            (((struct o50_ushort *)(a4))->v) = 0x1;
                        }
                        _builtin_set_imask(((unsigned int)(((t2 & 0xF) << 2) << 2) >> 4));
                        
                    }
                }
            }
        }
    }
}

int vmsfs_frename(int a4, int a5, int a6)
{
    int stk[14];
    register int t0;
    register int t3;
    register int t5;
    register int t8;
    register int t10;
    register int t12;
    register int t14;
    register int t15;
    register int t16;
    int t6;
    register int t7;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = (a4 * 0x148);
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC347220)));
    if ((*(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x2))) != 0) {
        t3 = vmsio_isready(a4);
        if (t3 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t5 = vmsio_ismount(a4);
        if ((t5 != 0) && (t6 = *(int *)(((int)stk + 8)), t7 = *(signed char *)(((t6 + 0xC80DBC8) + 0x8)), t7 != 0)) {
            t8 = buIsFormat(a4);
            if ((int)t8 < 0) {
                return 0xFFFFFF03;
            }
            *(volatile int *)(((int)stk + 0));
            t10 = check_isopen();
            if ((int)t10 < 0) {
                return 0xFFFFFF0B;
            }
            t12 = FUN_0c104962(a4, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0xC));
            if ((int)t12 < 0) {
                return 0xFFFFFF05;
            }
            t14 = FUN_0c104962(a4, (*(int *)(((int)stk + 4))), (((int)stk + 0) + 0xC));
            if ((int)t14 >= 0) {
                return 0xFFFFFF06;
            }
            t15 = direntry(a4, t12);
            t16 = *(int *)(((int)stk + 4));
            return ((int (*)(int, int, int, int))(0xC103C26))((t15 + 0x4), t15, (t15 + 0x10), t16);
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int ADXB_ExecOneWav16(int a4, int a5, int a6, int a7)
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
    register int t10;

    t0 = (((struct o50_int *)(a4))->v);
    t1 = a7;
    if ((*(int *)((a4 + 0x4))) == 1) {
        t2 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        if (t2 == 0) {
            t2 = ((int (*)(int, int, int, int))(((((struct o88_int *)(a4))->v))))(((((struct o8C_int *)(a4))->v)), ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t2 = *(int *)(((a4 + 0x50) + 0x20));
            t3 = *(int *)(((a4 + 0x50) + 0x18));
            t4 = *(int *)(((a4 + 0x50) + 0x4));
            t5 = (t3 - t2);
            if ((int)(t3 - t2) > (int)(*(int *)(((a4 + 0x50) + 0x24)))) {
                t5 = (*(int *)(((a4 + 0x50) + 0x24)));
            }
            t2 = *(int *)(((a4 + 0x50) + 0x14));
            t3 = t5;
            if ((int)t5 > (int)t4) {
                t3 = (*(int *)(((a4 + 0x50) + 0x4)));
            }
            t4 = *(int *)(((a4 + 0x50) + 0x20));
            if ((*(signed char *)((a4 + 0xE))) == 2) {
                t5 = *(int *)(((a4 + 0x50) + 0x20));
                t6 = *(int *)(((a4 + 0x50) + 0x1C));
                if ((int)t3 > 0) {
                    t7 = 0x0;
                    t8 = 0x0;
                    t9 = 0x0;
                    for (;;) {
                        t9 = (t9 + 0x1);
                        *(unsigned short *)((((t4 << 1) + t2) + t8)) = (*(short *)((((t7 << 1) + t0) + 0x0)));
                        t10 = (((t7 + 0x1) << 1) + t0);
                        t7 = (t7 + 0x2);
                        *(unsigned short *)(((((t6 + t5) << 1) + t2) + t8)) = (*(short *)((t10 + 0x0)));
                        t8 = (t8 + 0x2);
                        if ((int)t9 >= (int)t3) {
                            break;
                        }
                    }
                }
            } else {
                if ((int)t3 > 0) {
                    t5 = 0x0;
                    t6 = 0x0;
                    for (;;) {
                        t6 = (t6 + 0x1);
                        *(unsigned short *)((((t4 << 1) + t2) + t5)) = (*(short *)((t0 + t5)));
                        t5 = (t5 + 0x2);
                        if ((int)t6 >= (int)t3) {
                            break;
                        }
                    }
                }
            }
            (((struct oA0_uint *)(a4))->v) = t3;
            (((struct oA4_uint *)(a4))->v) = ((t3 * (*(signed char *)((a4 + 0xE)))) << 1);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
            t0 = ((t4 << 1) + t2);
        }
        t1 = t0;
    }
    t0 = *(int *)((a4 + 0x4));
    t2 = t0;
    if (t0 == 2) {
        t0 = ((int (*)(int, int, int, int))(((((struct o90_int *)(a4))->v))))(((((struct o94_int *)(a4))->v)), ((((struct oA4_int *)(a4))->v)), ((((struct oA0_int *)(a4))->v)), t1);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t2 = t0;
    }
    return t2;
}

int fmMngInit(int a4, int a5, int a6)
{
    int stk[3];
    register int t46;
    register int t6;
    register int t8;
    register int t19;
    register int t20;
    register int t21;
    int t27;
    int t22;
    register int t23;
    register int t24;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t46 = 0xFFFFFFF9;
    if (((int)a4 >= (int)0x1) && ((int)a4 < (int)0x5)) {
        *(unsigned int *)0xC347704 = 0xC84392C;
        FUN_0c0ed9ac(a4, (((int)stk + 0) + 0x4), a6);
        *(unsigned short *)(((*(int *)0xC347704) + 0x0)) = a4;
        *(unsigned int *)(((*(int *)0xC347704) + 0x4)) = (*(int *)(((int)stk + 4)));
        *(unsigned int *)(((*(int *)0xC347704) + 0x8)) = (*(int *)(((int)stk + 8)));
        t6 = *(int *)0xC347704;
        *(unsigned int *)((t6 + 0x18)) = ((int)((*(int *)((t6 + 0x8))) + 0x7FFF) >> 15);
        t8 = *(int *)0xC347704;
        *(unsigned int *)((t8 + 0x14)) = ((((int)(*(int *)((t8 + 0x8))) >> 6) - (*(int *)((t8 + 0x18)))) - 1);
        *(unsigned int *)(((*(int *)0xC347704) + 0xC)) = (*(int *)(((int)stk + 0)));
        *(unsigned int *)(((*(int *)0xC347704) + 0x1C)) = 0x0;
        *(unsigned int *)(((*(int *)0xC347704) + 0x20)) = 0x0;
        *(unsigned int *)(((*(int *)0xC347704) + 0x2C)) = 0x0;
        t19 = FUN_0c0ed9c0((*(int *)(((*(int *)0xC347704) + 0x4))), ((*(int *)0xC347704) + 0x34), 0x40);
        t46 = 0xFFFFFFFF;
        if (t19 != -1) {
            t20 = *(int *)0xC347704;
            t21 = fmMngSncmp((t20 + 0x34), 0xC15B6E8, 0xC);
            t46 = 0xFFFFFFF8;
            if ((t21 != 0) && (t22 = *(int *)0xC347704, t23 = *(signed char *)(((t20 + 0x34) + 0x10)), t24 = *(short *)((t22 + 0x0)), t24 == t23)) {
                *(unsigned short *)((t22 + 0x2)) = (*(signed char *)(((t20 + 0x34) + 0x11)));
                t27 = *(short *)(((*(int *)0xC347704) + 0x2));
                t46 = 0xFFFFFFF8;
                if ((t27 != 0) && (t27 != 1)) {
                } else {
                    t46 = (fmMngClearBuf((*(int *)(((*(int *)0xC347704) + 0xC))), (*(int *)(((*(int *)0xC347704) + 0x8)))));
                }
            }
        }
    }
    return t46;
}

int gdFsDaPlayG(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t6;

    t0 = (((struct o0_int *)0xC7FE6D8)->v);
    t1 = a5;
    t2 = a4;
    if ((*(short *)((t0 + 0x0))) == 1) {
        t3 = *(short *)((t0 + 0x2));
        t1 = (a5 + (t3 - 4));
        t2 = (a4 + (t3 - 4));
    }
    t0 = 0xFFFFFFF3;
    if ((int)t2 >= (int)0x3) {
        t3 = gdFsReopenHn((*(int *)(((*(int *)0xC346BD8) + 0x14))), 0x0, 0x0, 0x0);
        t0 = 0xFFFFFFF3;
        if (t3 != 0) {
            t5 = _builtin_get_imask();
            _builtin_set_imask(0xF);
            t6 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC346BD8) + 0xC))) + 0x28)))))(t2, t1, a6, a7);
            if (t6 != 0) {
                *(unsigned int *)((t3 + 0x3C)) = t6;
                (((struct o50_ushort *)(t3))->v) = 0x4;
                if ((int)(*(int *)(((*(int *)0xC346BD8) + 0x2C))) >= (int)0x10001) {
                    (((struct o3A_ushort *)((*(int *)0xC346BD8)))->v) = 0x1;
                    (((struct o10_uint *)0xC7FE6D8)->v) = 0x1;
                    (((struct o14_uint *)0xC7FE6D8)->v) = t2;
                    (((struct o18_uint *)0xC7FE6D8)->v) = t1;
                    (((struct o1C_uint *)0xC7FE6D8)->v) = a6;
                    *(unsigned int *)((t3 + 0x4)) = 0xC7FE6F8;
                    (((struct o48_ushort *)(t3))->v) = 0x8;
                    t1 = 0x1;
                } else {
                    (((struct o48_ushort *)(t3))->v) = 0x6;
                }
                *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x1C)) = t3;
                t2 = ((int (*)(int, int, int, int))(((((struct o40_int *)((*(int *)(((*(int *)0xC346BD8) + 0xC)))))->v))))(t1, a5, a6, a7);
            }
            _builtin_set_imask(((unsigned int)(((t5 & 0xF) << 2) << 2) >> 4));
            t1 = 0x0;
            if (t6 == 0) {
                t1 = 0xFFFFFFF3;
            }
            t0 = t1;
        }
    }
    return t0;
}

