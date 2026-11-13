/* Straight-line functions with calls and guards (batch gen_ds): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_short { char p[0x26]; short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o2A_ushort { char p[0x2A]; unsigned short v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2C_ushort { char p[0x2C]; unsigned short v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
struct o2E_ushort { char p[0x2E]; unsigned short v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2F0_int { char p[0x2F0]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o2F8_int { char p[0x2F8]; int v; };
struct o2FC_int { char p[0x2FC]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o300_int { char p[0x300]; int v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_short { char p[0x38]; short v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o3A_short { char p[0x3A]; short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o50_float { char p[0x50]; float v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o7237_uchar { char p[0x7237]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_short { char p[0x7248]; short v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o7254_float { char p[0x7254]; float v; };
struct o7294_int { char p[0x7294]; int v; };
struct o72A8_int { char p[0x72A8]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int vmu_get_ready_mask(void);
int vmu_get_savefile_mask(void);
int vmu_get_vmgame_mask(void);
int vmu_get_foreign_exec_mask(void);
int vmu_get_free_space_mask(void);
int FUN_0c0109e4(void);
float FUN_0c02649a(int, int);
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
int ai_clear_op_state(void);
int ai_calc_angle_to_goal_point(int);
int ai_calc_dist_to_goal_point(int);
int ai_angle_to_pad_dir(int);
int game_reset_objects(void);
int obj_create(int, int, int);
int obj_destroy(int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0623a6(int, int, int);
int pl_falcon_attack_kind24_phase0(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_spawn_hit_effect_with_se(int);
int pl_get_hit_count_of_opponent(int);
int hit_find_interactable_contact(int, int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_turn_to_opponent(int, int);
int pl_landed(int);
int obj_set_record_char(int, int);
int pl_enter_state_27_28(int, int, int, int, int, int);
int bgm_stop_all(void);
int FUN_0c0a3762(int, int);
int snd_play_side_se(int, int);
int attract_set_step3_flag(int);
int FUN_0c0d320a(void);
int FUN_0c0d3366(void);
int attract_screen_adx_logo(int, int, int, int);
int FUN_0c0d4094(void);
int FUN_0c0d4196(int, int, int, int);
int attract_screen_urls(void);
extern int FUN_0c0d452e();
float math_signed_sqrt(float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int FUN_0c0e24f0(int);
int _modlu(void);
int _quick_odd_mvn(void);
int _slow_mvn(int);
int FUN_0c0f05c8(void);
int FUN_0c0f0d04(int, int, int, int);
int FUN_0c0fae08(void);
int FUN_0c10274c(int, int);
int FUN_0c104742(int);
int FUN_0c1048e6(int, int, int, int);
int FUN_0c104962(int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buIsFormat(int);
int check_isopen(void);
int direntry(int, int);
int direntry_dirty(int, int);
int gdFsCreateDirhn(int, int);
int gdFsGetGdDcf(void);
int gdFsReopenHn(int, int, int, int);
int get_vmstime(int, int);
int kmiWriteRegister(int, int);
int nlCalcVector(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int set_vmstime(int, int);
int thunk_FUN_0c062242(int);
int thunk_FUN_0c0d45fe(void);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int pl_falcon_attack_kind24_phase2(int a4);
int gdFsDaReleaseG(int a4, int a5, int a6, int a7);
int FUN_0c018ed0(int a4, int a5);
int FUN_0c08e5b4(int a4);
int gdFsInitG(int a4, int a5, int a6, int a7, int a8);
int FUN_0c01fb0c(int a4, int a5, int a6, int a7);
int FUN_0c096a64(int a4, int a5, int a6, int a7);
int kmActivateFrameBuffer(int a4, int a5, int a6, int a7);
int vmsfs_findfirst_ex(int a4, int a5, int a6);
int FUN_0c01f874(int a4);
int ai_op54(int a4, int a5, int a6, int a7);
int pl_ryoma_mode04_phase1(int a4);
int pl_ryoma_mode07_phase1(int a4);
int FUN_0c102632(int a4, int a5);
int menu_ui_task_05(int a4, int a5, int a6, int a7);
int menu_ui_task_29(int a4, int a5, int a6, int a7);
int fx_spawn_33(int a4, int a5, int a6, int a7);
int fx_tick_03c724(int a4, int a5, int a6, int a7);
int FUN_0c064a1c(int a4);
int FUN_0c09660c(int a4, int a5, int a6, int a7);
int attract_run_sequence(int a4, int a5, int a6, int a7);
int FUN_0c103c40(int a4, int a5, int a6);
int hit_part_pair_overlap(int a4, int a5, int a6, float f4);

int gdFsDaReleaseG(int a4, int a5, int a6, int a7)
{
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t3 = gdFsReopenHn((*(int *)(((*(int *)0xC346BD8) + 0x14))), 0x0, 0x0, 0x0);
    t4 = 0xFFFFFFF3;
    if (t3 != 0) {
        t5 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t6 = *(int *)0xC346BD8;
        if ((((((struct o3A_short *)(t6))->v)) != 0) && (t4 = (((struct o10_int *)0xC7FE6E8)->v), t1 = (((struct o14_int *)0xC7FE6E8)->v), t4 != t1)) {
            (((struct o3A_ushort *)(t6))->v) = 0x0;
        }
        t4 = *(int *)0xC346BD8;
        if ((((((struct o3A_short *)(t4))->v)) != 0) && (t2 = *(int *)((t4 + 0x2C)), (int)t2 >= (int)0x10001)) {
            t1 = (((struct o8_int *)0xC7FE6E8)->v);
            t2 = (((struct oC_int *)0xC7FE6E8)->v);
            t6 = (((struct o4_int *)0xC7FE6E8)->v);
            if (((((struct o0_int *)0xC7FE6E8)->v)) == 1) {
                t7 = (*(int *)(((*(int *)((t4 + 0xC))) + 0x28)));
            } else {
                t7 = (*(int *)(((*(int *)((t4 + 0xC))) + 0x2C)));
            }
            t8 = ((int (*)(int, int, int, int))(t7))(t6, t1, t2, a7);
            if (t8 != 0) {
                *(unsigned int *)((t3 + 0x3C)) = t8;
                (((struct o50_ushort *)(t3))->v) = 0x4;
                *(unsigned int *)((t3 + 0x4)) = 0xC7FE6F8;
                (((struct o48_ushort *)(t3))->v) = 0x8;
                *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x1C)) = t3;
                t1 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC346BD8) + 0xC)))))->v))))();
            }
            t1 = t8;
        } else {
            t2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t4 + 0xC))) + 0x34)))))(a4, a5, a6, a7);
            if (t2 != 0) {
                *(unsigned int *)((t3 + 0x3C)) = t2;
                (((struct o50_ushort *)(t3))->v) = 0x4;
                (((struct o48_ushort *)(t3))->v) = 0x6;
                *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x1C)) = t3;
                t4 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC346BD8) + 0xC)))))->v))))();
            }
            t1 = t2;
        }
        _builtin_set_imask(((unsigned int)(((t5 & 0xF) << 2) << 2) >> 4));
        t4 = 0x0;
        if (t1 == 0) {
            t4 = 0xFFFFFFF3;
        }
    }
    return t4;
}

int gdFsInitG(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(int *)0xC346BD8;
    if ((t1 != 0) && (t0 = (((struct o38_short *)(t1))->v), t0 == 1)) {
        return 0x0;
    }
    if ((a5 & 31) != 0) {
        return 0xFFFFFFF2;
    }
    t0 = gdFsGetGdDcf();
    t1 = ((int (*)(void))((*(int *)((t0 + 0x0)))))();
    t1 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0xC346BD8 = a5;
    (((struct o38_ushort *)(a5))->v) = 0x0;
    *(unsigned int *)(((*(int *)0xC346BD8) + 0x20)) = 0x0;
    *(unsigned int *)(((*(int *)0xC346BD8) + 0x0)) = a4;
    *(unsigned int *)((((*(int *)0xC346BD8) + 0x10) + 0x0)) = (gdFsCreateDirhn(a7, a6));
    *(unsigned int *)(((*(int *)0xC346BD8) + 0xC)) = t0;
    *(unsigned int *)(((*(int *)0xC346BD8) + 0x1C)) = 0x0;
    (((struct o3A_ushort *)((*(int *)0xC346BD8)))->v) = 0x0;
    *(unsigned int *)(((*(int *)0xC346BD8) + 0x24)) = 0x0;
    *(unsigned int *)(((*(int *)0xC346BD8) + 0x34)) = 0x0;
    *(unsigned int *)(((*(int *)0xC346BD8) + 0x3C)) = a8;
    t0 = 0x3A;
    t2 = ((*(int *)0xC346BD8) + 0x1080);
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)((*(int *)(((*(int *)0xC346BD8) + 0x0))) + 0x1)) {
            break;
        }
        t0 = 0x4C;
        *(unsigned short *)((t2 + t0)) = 0x0;
        t3 = (t3 + 0x1);
        *(unsigned int *)((t2 + 0x0)) = (*(int *)0xC346BD8);
        t2 = (t2 + 0x54);
    }
    t0 = *(int *)0xC346BD8;
    *(unsigned int *)((t0 + 0x14)) = (0x1080 + t0);
    t0 = *(int *)0xC346BD8;
    *(unsigned int *)((t0 + 0x18)) = ((0x1080 + t0) + 0x54);
    FUN_0c0f0d04((*(int *)(((*(int *)0xC346BD8) + 0x14))), 0x0, 0x0, 0x0);
    _builtin_set_imask(((unsigned int)(((t1 & 0xF) << 2) << 2) >> 4));
    return FUN_0c0f05c8();
}

int kmActivateFrameBuffer(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((a4 != 0) && (a5 != 0)) {
        (((struct o24_uint *)0xC803D90)->v) = a4;
        (((struct o28_uint *)0xC803D90)->v) = a5;
        (((struct o2C_uint *)0xC803D90)->v) = a7;
        (((struct o0_uint *)0xC803D90)->v) = a6;
        *(unsigned int *)0xC816FF4 = a6;
        t0 = FUN_0c0fae08();
        if (t0 != 0x80000000) {
            return ((int (*)(void))(0xC0F5B20))();
        }
        if ((*(int *)((a4 + 0x18))) != (*(int *)((a5 + 0x18)))) {
            return 0xF;
        }
        if ((*(int *)((a4 + 0x14))) != (*(int *)((a5 + 0x14)))) {
            return 0x10;
        }
        (((struct o0_uint *)0xC8172EC)->v) = (*(int *)((a4 + 0x1C)));
        (((struct o8_uint *)0xC8172EC)->v) = 0x0;
        (((struct o4_uint *)0xC8172EC)->v) = (*(int *)((a5 + 0x1C)));
        (((struct oC_uint *)0xC8172EC)->v) = 0x0;
        kmiWriteRegister(0x50, ((((struct o28_int *)0xC817260)->v)));
        kmiWriteRegister(0x54, ((((struct o28_int *)0xC817260)->v)));
        kmiWriteRegister(0x60, ((((struct o0_int *)0xC8172EC)->v)));
        kmiWriteRegister(0x64, ((((struct o4_int *)0xC8172EC)->v)));
        (((struct o28_uint *)0xC817260)->v) = ((((struct o0_int *)0xC8172EC)->v));
        (((struct o2C_uint *)0xC817260)->v) = ((((struct o4_int *)0xC8172EC)->v));
        if (a6 == 1) {
            (((struct o30_uint *)0xC8171A8)->v) = 0x0;
            (((struct o34_uint *)0xC8171A8)->v) = 0x0;
            kmiWriteRegister(0x50, ((((struct o28_int *)0xC817260)->v)));
            t0 = ((((struct o2C_int *)0xC817260)->v));
        } else {
            kmiWriteRegister(0x50, ((((struct o28_int *)0xC817260)->v)));
            t0 = ((((struct o28_int *)0xC817260)->v));
        }
        kmiWriteRegister(0x54, t0);
        (((struct o0_uint *)0xC817260)->v) = 0x1;
        (((struct o0_uint *)0xC8171A8)->v) = a7;
        return ((int (*)(void))(0xC0F5B40))();
    }
    return 0xE;
}

int vmsfs_findfirst_ex(int a4, int a5, int a6)
{
    int stk[13];
    register int t1;
    register int t3;
    register int t6;
    register int t8;
    register int t9;
    register int t11;
    register int t14;
    register int t15;
    register int t16;
    register int t28;
    register int t30;
    register int t31;
    register int t32;
    register int t33;
    int t4;
    register int t5;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = (a4 * 0x148);
    if ((*(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t3 = vmsio_ismount(a4);
        if ((t3 != 0) && (t4 = *(int *)(((int)stk + 4)), t5 = *(signed char *)(((t4 + 0xC80DBC8) + 0x8)), t5 != 0)) {
            t6 = buIsFormat(a4);
            if ((int)t6 < 0) {
                return 0xFFFFFF03;
            }
            *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x18)) = 0x0;
            t8 = (direntry(a4, 0x0));
            t9 = 0x0;
            for (;;) {
                t11 = *(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x30));
                if ((int)t9 >= (int)t11) {
                    if (0x0 == 0) {
                        return 0xFFFFFF05;
                    }
                    t9 = (*(int *)(((int)stk + 0)));
                    t14 = (t9 + 0xC);
                    t15 = t11;
                    t16 = (t8 + 0x4);
                    for (;;) {
                        if ((unsigned int)t9 >= (unsigned int)t14) {
                            break;
                        }
                        t15 = (*(signed char *)((t16 + 0x0)));
                        t16 = (t16 + 0x1);
                        *(unsigned char *)((t9 + 0x0)) = t15;
                        t9 = (t9 + 0x1);
                    }
                    t9 = ((int)stk + 0);
                    *(unsigned char *)((t14 + 0x0)) = 0x0;
                    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x18)) = ((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x18))) + 0x1);
                    t9 = (t9 + 0x8);
                    FUN_0c1048e6(t8, t9, t16, 0x0);
                    *(unsigned int *)((a6 + 0x0)) = ((*(int *)(((int)stk + 48))) * ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x2C))) + 0x1));
                    *(unsigned short *)((a6 + 0x4)) = (*(int *)(((int)stk + 48)));
                    *(unsigned char *)((a6 + 0x6)) = (*(signed char *)(((int)stk + 12)));
                    *(unsigned char *)((a6 + 0x7)) = (*(signed char *)(((int)stk + 18)));
                    *(unsigned short *)((a6 + 0x8)) = (*(short *)(((int)stk + 16)));
                    if ((*(int *)(((int)stk + 12))) == 0xCC) {
                        return ((int (*)(void))(0xC103714))();
                    }
                    return ((int (*)(void))(0xC103712))();
                }
                t28 = *(signed char *)((t8 + 0x0));
                if (((unsigned char)t28 != 51) && ((unsigned char)t28 != 0xCC)) {
                    t8 = (t8 + 0x20);
                    t9 = (t9 + 0x1);
                    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x18)) = ((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x18))) + 0x1);
                    continue;
                }
                break;
            }
            if (0x1 == 0) {
                return 0xFFFFFF05;
            }
            t30 = *(int *)(((int)stk + 0));
            t31 = t11;
            t32 = t30;
            t33 = (t8 + 0x4);
            for (;;) {
                if ((unsigned int)t32 >= (unsigned int)(t30 + 0xC)) {
                    break;
                }
                t31 = (*(signed char *)((t33 + 0x0)));
                t33 = (t33 + 0x1);
                *(unsigned char *)((t32 + 0x0)) = t31;
                t32 = (t32 + 0x1);
            }
            *(unsigned char *)(((t30 + 0xC) + 0x0)) = 0x0;
            *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x18)) = ((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x18))) + 0x1);
            FUN_0c1048e6(t8, (((int)stk + 0) + 0x8), t33, 0x1);
            *(unsigned int *)((a6 + 0x0)) = ((*(int *)(((int)stk + 48))) * ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x2C))) + 0x1));
            *(unsigned short *)((a6 + 0x4)) = (*(int *)(((int)stk + 48)));
            *(unsigned char *)((a6 + 0x6)) = (*(signed char *)(((int)stk + 12)));
            *(unsigned char *)((a6 + 0x7)) = (*(signed char *)(((int)stk + 18)));
            *(unsigned short *)((a6 + 0x8)) = (*(short *)(((int)stk + 16)));
            if ((*(int *)(((int)stk + 12))) == 0xCC) {
                return ((int (*)(void))(0xC103714))();
            }
            return ((int (*)(void))(0xC103712))();
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int FUN_0c102632(int a4, int a5)
{
    int stk[3];
    register int t48;
    register int t1;
    register int t3;
    register int t38;
    register int t33;
    register int t7;
    register int t11;
    register int t15;
    register int t16;
    register int t17;
    register int t43;
    int t4;
    register int t5;
    register int t9;

    *(unsigned int *)(((int)stk + 0)) = (a4 * 0x148);
    t48 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t43 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t38 = 0xFFFFFF01;
            if ((t3 != 0) && (t4 = *(int *)(((int)stk + 0)), t5 = *(signed char *)(((t4 + 0xC80DBC8) + 0x8)), t5 != 0)) {
                t7 = buIsFormat(a4);
                t33 = 0xFFFFFF03;
                if ((int)t7 >= 0) {
                    t11 = 0x0;
                    for (;;) {
                        if ((int)t11 >= (int)0x20) {
                            break;
                        }
                        t15 = t11;
                        t7 = (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20)));
                        t15 = (t15 + 0x10);
                        t9 = a5;
                        t9 = (t9 + t11);
                        t11 = (t11 + 0x1);
                        *(unsigned char *)((t9 + 0x0)) = ((*(signed char *)((t15 + t7))));
                    }
                    t16 = (((int)stk + 0) + 0x4);
                    t17 = ((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))) + 0x30);
                    for (;;) {
                        if ((unsigned int)t16 >= (unsigned int)((((int)stk + 0) + 0x4) + 0x8)) {
                            break;
                        }
                        t15 = (*(signed char *)((t17 + 0x0)));
                        t17 = (t17 + 0x1);
                        *(unsigned char *)((t16 + 0x0)) = t15;
                        t16 = (t16 + 0x1);
                    }
                    get_vmstime((a5 + 0x30), (((int)stk + 0) + 0x4));
                    (((struct o20_ushort *)(a5))->v) = ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x0))) + 0x1);
                    (((struct o22_ushort *)(a5))->v) = (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x30)));
                    (((struct o26_ushort *)(a5))->v) = (FUN_0c10274c(a4, 0x0));
                    (((struct o24_ushort *)(a5))->v) = ((((struct o26_short *)(a5))->v));
                    (((struct o28_ushort *)(a5))->v) = (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x38)));
                    (((struct o2A_ushort *)(a5))->v) = (FUN_0c10274c(a4, 0x1));
                    (((struct o2C_ushort *)(a5))->v) = ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x2C))) + 0x1);
                    (((struct o2E_ushort *)(a5))->v) = (unsigned char)(*(signed char *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))) + 0x4E)));
                    t33 = 0x0;
                }
                t38 = t33;
            }
            t43 = t38;
        }
        t48 = t43;
    }
    return t48;
}

int FUN_0c103c40(int a4, int a5, int a6)
{
    int stk[16];
    register int t0;
    register int t36;
    register int t3;
    register int t5;
    register int t30;
    register int t8;
    register int t27;
    register int t10;
    register int t24;
    register int t12;
    register int t22;
    register int t13;
    register int t17;
    register int t18;
    register int t33;
    int t6;
    register int t7;
    register int t16;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = (a4 * 0x148);
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC347228)));
    t36 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x2))) != 0) {
        t3 = vmsio_isready(a4);
        if (t3 == 0) {
            vmsfs_unmount(a4);
            t33 = 0xFFFFFF01;
        } else {
            t5 = vmsio_ismount(a4);
            t30 = 0xFFFFFF01;
            if ((t5 != 0) && (t6 = *(int *)(((int)stk + 8)), t7 = *(signed char *)(((t6 + 0xC80DBC8) + 0x8)), t7 != 0)) {
                t8 = buIsFormat(a4);
                t27 = 0xFFFFFF03;
                if ((int)t8 >= 0) {
                    *(volatile int *)(((int)stk + 0));
                    t10 = check_isopen();
                    t24 = 0xFFFFFF0B;
                    if ((int)t10 >= 0) {
                        t12 = FUN_0c104962(a4, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0xC));
                        t22 = 0xFFFFFF05;
                        if ((int)t12 >= 0) {
                            t13 = direntry(a4, t12);
                            set_vmstime((((int)stk + 0) + 0x38), (*(int *)(((int)stk + 4))));
                            t17 = (t13 + 0x10);
                            t18 = (((int)stk + 0) + 0x38);
                            for (;;) {
                                if ((unsigned int)t17 >= (unsigned int)(t13 + 0x18)) {
                                    break;
                                }
                                t16 = (*(signed char *)((t18 + 0x0)));
                                t18 = (t18 + 0x1);
                                *(unsigned char *)((t17 + 0x0)) = t16;
                                t17 = (t17 + 0x1);
                            }
                            direntry_dirty(a4, t12);
                            t22 = (FUN_0c104742(a4));
                        }
                        t24 = t22;
                    }
                    t27 = t24;
                }
                t30 = t27;
            }
            t33 = t30;
        }
        t36 = t33;
    }
    return t36;
}

