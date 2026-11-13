/* Straight-line functions with calls and guards (batch gen_bf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o10E8_int { char p[0x10E8]; int v; };
struct o1B2_short { char p[0x1B2]; short v; };
struct o1B2_ushort { char p[0x1B2]; unsigned short v; };
struct o1B4_short { char p[0x1B4]; short v; };
struct o1B4_ushort { char p[0x1B4]; unsigned short v; };
struct o1B6_short { char p[0x1B6]; short v; };
struct o1B6_ushort { char p[0x1B6]; unsigned short v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o3360_uchar { char p[0x3360]; unsigned char v; };
struct o3620_uchar { char p[0x3620]; unsigned char v; };
struct o36D0_uchar { char p[0x36D0]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o4540_uchar { char p[0x4540]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o56_ushort { char p[0x56]; unsigned short v; };
struct o5CA0_uchar { char p[0x5CA0]; unsigned char v; };
struct o64_short { char p[0x64]; short v; };
struct o68_short { char p[0x68]; short v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o720A_uchar { char p[0x720A]; unsigned char v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_short { char p[0x80]; short v; };
struct o82_short { char p[0x82]; short v; };
struct o86_short { char p[0x86]; short v; };
struct o8A_short { char p[0x8A]; short v; };
struct o8C_int { char p[0x8C]; int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct oA0_short { char p[0xA0]; short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_short { char p[0xC]; short v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c01ef8e(int);
int FUN_0c01f00a(int);
int vmu_menu_scan_port_masks(int, int, int, int);
int vmu_menu_update_objs(void);
int FUN_0c02002a(int, int, int, int);
int FUN_0c0200e2(int, int, int, int);
int ui_fade_start(int, int, int, int);
int FUN_0c03d010(int);
int ai_clear_op_state(void);
int FUN_0c0555c4(void);
int game_reset_objects(void);
int obj_create(int, int, int);
int obj_destroy(int, int, int, int);
int math_vec3_add(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c062436(int, int, int);
int FUN_0c06b868(int, int);
int FUN_0c08bd78(int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int pl_get_hit_count_of_opponent(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_angle_to_opponent(int);
int pl_turn_to_opponent(int, int);
int pl_try_start_basic_attack(int, int, int);
int pl_landed(int);
int pl_end_action_choose_state(int);
int pl_enter_state_27_28(int, int);
int pl_detect_special_input(int, int);
extern int pl_change_state();
int bgm_stop_all(void);
int bgm_set_volume(int, int, int, int);
int menu_ui_spawn_07(void);
int obj_set_mode_owner(int, int, int);
int FUN_0c0ae276(int);
int FUN_0c0ae284(void);
int FUN_0c0d3fbe(void);
int cam_compute_follow(int, int);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int gfx_set_fog_color(int);
int gfx_set_fog_density(int);
int nlCalcPoint44(int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int _modls(int);
int _modlu(void);
extern int _quick_odd_mvn();
int _slow_mvn(int);
int gdFsSetGlobalErrG(int);
int FUN_0c0f0d04(int, int, int, int);
int FUN_0c0f8180(int);
int gdFsSearchName(int, int, int);
int FUN_0c100260(void);
int kdSetCallback(int, int, int);
int FUN_0c108474(void);
int FUN_0c10848c(int, int);
int FUN_0c10b7b0(int, int, int, int, int);
int kmiWriteRegister(int, int);
int kmiCopyToFrameBuffer(int, int, int, int);
int mpdrv_dpf(int, int, int, int, int);
int mpdrv_set_dreset_ns(int);
extern int _builtin_tas(char *);
int thunk_FUN_0c062242(int, int);
int thunk_FUN_0c0fbcf0(int);
int pl_garuda_mode13_phase0(int a4);
int kmSetPaletteBankData(int a4, int a5, int a6);
int pl_jack_mode12_phase1(int a4);
int pl_garuda_move14_update(int a4);
int FUN_0c10864c(int a4, int a5, int a6, int a7);
int pl_rouge_special_id4(int a4);
int kdSetDeviceResetEx(int a4, int a5, int a6, int a7);
int FUN_0c06428a(int a4);
int FUN_0c0f9936(int a4);
int fx_spawn_057128(void);
int FUN_0c05f194(void);
int FUN_0c06244a(int a4, int a5, int a6);
int pl_jack_mode12_phase2(int a4);
int pl_jack_special2_phase0(int a4);
int stage_gimmick_11_spawn(void);
int FUN_0c0d2398(int a4);
int FUN_0c0fdb84(int a4, int a5, int a6, int a7, int a8);
int fx_tick_0342a0(int a4, int a5, int a6, int a7);
int ai_op25_get_random(void);
int pl_special_a_update(int a4);
int FUN_0c08bde8(int a4);
int pl_state38_update(int a4, int a5, int a6, int a7);
int gdFsOpenG(int a4, int a5);
float FUN_0c041614(int a4);
int menu_ui_task_07_spawner(int a4, int a5, int a6, int a7);
int FUN_0c0ddfa0(int a4);
int FUN_0c0e32b0(int a4, int a5, int a6, float f4, float f5, float f6);
int FUN_0c01c6ea(int a4, int a5, int a6, int a7);
int pl_ryoma_attack_kind2_phase0(int a4);
int pl_kraken_attack_kind2_phase6(int a4);
int stage_type02_mode_05_held(int a4);
int FUN_0c0d7ff0(int a4, int a5, int a6, int a7);
int FUN_0c0da8c0(int a4);
int FUN_0c01eb32(int a4, int a5, int a6, int a7);
int pl_falcon_special2_phase1(int a4);
int pl_jack_special2_phase1(int a4);
int pl_garuda_state21_update(int a4);
int pl_kraken_special_id2(int a4, int a5, int a6, int a7);
int FUN_0c08c5c0(int a4);
int gdFsOpenRangeG(int a4, int a5);
int FUN_0c01ebc0(int a4, int a5, int a6, int a7);
int fx_tick_04baa6(int a4, int a5, int a6, int a7);
int fx_tick_04bc94(int a4, int a5, int a6, int a7);
int ai_op22(void);
int FUN_0c0d22a0(int a4, int a5, int a6, int a7);
int FUN_0c0fc6d6(int a4, int a5, int a6, int a7);
int fx_tick_03cf50(int a4, int a5, int a6, int a7);
int pl_valgas_get_state28_action(int a4);
int FUN_0c0d4010(void);

int kmSetPaletteBankData(int a4, int a5, int a6)
{
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = (a5 + a4);
    if ((int)(a5 + a4) > (int)0x400) {
        t0 = 0x3FF;
    }
    if ((int)a4 < (int)t0) {
        t2 = ((a4 << 2) + a6);
        t3 = ((a4 << 2) + 0x1000);
        t4 = a4;
        for (;;) {
            t5 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            kmiWriteRegister(t3, t5);
            t4 = (t4 + 0x1);
            t3 = (t3 + 0x4);
            if ((int)t4 >= (int)t0) {
                break;
            }
        }
    }
    return 0x0;
}

int FUN_0c10864c(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t1 = FUN_0c108474();
    if (a5 == 0) {
        if ((*(int *)((a4 + 0x1C))) == 0) {
        } else {
            t2 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD, a6, a7);
        }
    } else {
        if (a5 == 1) {
            t2 = *(int *)((a6 + 0x4));
            t3 = *(int *)((a4 + 0x10));
            t4 = (t3 - t2);
            if ((int)(t3 - t2) <= 0) {
                t4 = 0x0;
            }
            *(unsigned int *)((a4 + 0x10)) = t4;
            t2 = *(int *)((a4 + 0x18));
            t3 = *(int *)((a6 + 0x4));
            t5 = *(int *)((a4 + 0xC));
            t6 = (t5 + t3);
            if ((int)t2 < (int)(t5 + t3)) {
                t6 = t2;
            }
            *(unsigned int *)((a4 + 0xC)) = t6;
            if ((t4 != ((*(int *)((a6 + 0x0))) - (*(int *)((a4 + 0x14))))) && (t0 = *(int *)((a4 + 0x1C)), t0 != 0)) {
                t0 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD, (t5 + t3), a7);
            }
        } else {
            *(unsigned int *)((a6 + 0x4)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x0;
            if ((*(int *)((a4 + 0x1C))) != 0) {
                t0 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD, a6, a7);
            }
        }
    }
    return FUN_0c10848c(a4, t1);
}

int kdSetDeviceResetEx(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC15B054);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreset_ns(a4);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a5, t2);
    }
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t2;
}

int FUN_0c0f9936(int a4)
{
    int stk[2];
    register int t1;
    register int t2;
    register int t3;
    register int t8;

    t1 = *(int *)(((a4 << 2) + (*(int *)0xC803DF4)));
    t2 = *(int *)(((a4 << 2) + 0xC803E40));
    t3 = (t1 - t2);
    if ((int)(t1 - t2) < 0) {
        t3 = ((t1 - t2) + 0x3);
    }
    for (;;) {
        *(int *)((int)stk + 0) = ((int)stk + 4);
        t8 = FUN_0c10b7b0(0x10000000, (*(int *)((((a4 << 2) + 0xC803E40) + 0x0))), (((t3 >> 1) >> 1) << 2), 0x10, ((int)stk + 4));
        if (t8 != 0x100) {
            break;
        }
    }
    *(unsigned int *)((((*(int *)0xC803DF4) + (a4 << 2)) + 0x0)) = (((*(int *)(((a4 << 2) + 0xC803E60))) << 2) + (*(int *)(((a4 << 2) + 0xC803E40))));
    *(unsigned int *)0xC8173E0 = (*(int *)(((*(int *)(((int)stk + 4))) + 0x0)));
    return 0x0;
}

int FUN_0c0fdb84(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t2;

    t0 = 0x0;
    if (a5 == 3) {
        t0 = 0x1000000;
    }
    t2 = (0x10000 | (((((a8 - 1) & 0x3F) << 8) | ((a7 - 1) & 0x3F)) | t0));
    if (a6 == 0) {
        t2 = (((((a8 - 1) & 0x3F) << 8) | ((a7 - 1) & 0x3F)) | t0);
    }
    kmiWriteRegister(0x14C, t2);
    kmiWriteRegister(0x148, (*(int *)((a4 + 0x1C))));
    return 0x0;
}

int gdFsOpenG(int a4, int a5)
{
    register int t2;
    register int t5;
    register int t7;
    register int t9;
    register int t10;
    register int t19;

    t2 = a5;
    if (a5 == 0) {
        t2 = (*(int *)(((*(int *)0xC346BD8) + 0x10)));
    }
    t5 = gdFsSearchName(a4, t2, 0x0);
    if (t5 == 0) {
        gdFsSetGlobalErrG(0xFFFFFFF8);
        t19 = 0x0;
    } else {
        t7 = *(int *)0xC346BD8;
        t9 = 0x0;
        t10 = (*(int *)((t7 + 0x18)));
        for (;;) {
            if ((int)t9 >= (int)(*(int *)((t7 + 0x0)))) {
                t9 = 0xFFFFFFF7;
                gdFsSetGlobalErrG(t9);
                return 0x0;
            }
            if (((((struct o4C_short *)(t10))->v)) == 0) {
                break;
            }
            t10 = (t10 + 0x54);
            t9 = (t9 + 0x1);
        }
        FUN_0c0f0d04(t10, t5, ((*(int *)((((t2 + 0x10) + ((t5 - 1) * 0x2C)) + 0x0))) + 0x96), (*(int *)((((t2 + 0x10) + ((t5 - 1) * 0x2C)) + 0x4))));
        gdFsSetGlobalErrG(0x0);
        t19 = t10;
    }
    return t19;
}

int FUN_0c0e32b0(int a4, int a5, int a6, float f4, float f5, float f6)
{
    int stk[13];
    register float u6;

    *(float *)(((int)stk + 20)) = f4;
    *(float *)(((int)stk + 8)) = f5;
    *(float *)(((int)stk + 16)) = f6;
    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    nlPushMatrix(0xC7FCEE8);
    nlMultiMatrix(0xC7FCEA8);
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 44)) = (*(float *)(((int)stk + 8)));
    *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 16)));
    nlCalcPoint44((((int)stk + 0) + 0x28), (((int)stk + 0) + 0x18));
    u6 = *(float *)(((int)stk + 36));
    *(float *)(((*(int *)(((int)stk + 12))) + 0x0)) = ((*(float *)(((int)stk + 24))) * (1.0f / u6));
    *(float *)(((*(int *)(((int)stk + 4))) + 0x0)) = ((*(float *)(((int)stk + 28))) * (1.0f / u6));
    *(float *)(((*(int *)(((int)stk + 0))) + 0x0)) = (1.0f / u6);
    return (nlPopMatrix(0x1));
}

int gdFsOpenRangeG(int a4, int a5)
{
    register int t1;
    register int t4;
    register int t5;
    register int t12;

    if ((int)a4 < (int)0xB05E) {
        gdFsSetGlobalErrG(0xFFFFFFE0);
        t12 = 0x0;
    } else {
        t1 = *(int *)0xC346BD8;
        t4 = 0x0;
        t5 = (*(int *)((t1 + 0x18)));
        for (;;) {
            if ((int)t4 >= (int)(*(int *)((t1 + 0x0)))) {
                t4 = 0xFFFFFFF7;
                gdFsSetGlobalErrG(t4);
                return 0x0;
            }
            if (((((struct o4C_short *)(t5))->v)) == 0) {
                break;
            }
            t5 = (t5 + 0x54);
            t4 = (t4 + 0x1);
        }
        FUN_0c0f0d04(t5, 0x0, a4, (((a5 << 8) << 2) << 1));
        gdFsSetGlobalErrG(0x0);
        t12 = t5;
    }
    return t12;
}

int FUN_0c0fc6d6(int a4, int a5, int a6, int a7)
{
    register int t34;
    int t4;
    register int t7;
    register int t8;
    register int t10;
    register int t11;

    t34 = 0x0;
    if ((a7 & 0xFFFFFFFC) != 0) {
        t34 = 0x4;
        if ((unsigned short)(*(int *)((a4 + 0x0))) == 3) {
        } else {
            t4 = *(int *)((a4 + 0x18));
            t7 = 0x0;
            if (((0x4 & t4) != 0) && (((0x1 & t4) != 0) && (((0x8 & t4) == 0) && ((0x20 & t4) == 0)))) {
                t7 = 0x4;
            }
            t8 = *(int *)((a4 + 0x14));
            t34 = 0x7;
            if ((unsigned int)((a6 & 0xFFFFFFFC) + t7) >= (unsigned int)t8) {
            } else {
                t10 = *(int *)((a4 + 0x1C));
                t11 = (t8 - ((a6 & 0xFFFFFFFC) + t7));
                if ((unsigned int)(t8 - ((a6 & 0xFFFFFFFC) + t7)) > (unsigned int)(a7 & 0xFFFFFFFC)) {
                    t11 = (a7 & 0xFFFFFFFC);
                }
                kmiCopyToFrameBuffer((((a6 & 0xFFFFFFFC) + t7) + t10), a5, t11, (a7 & 0xFFFFFFFC));
                t34 = 0x0;
            }
        }
    }
    return t34;
}

