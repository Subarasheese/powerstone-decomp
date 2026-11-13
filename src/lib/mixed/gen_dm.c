/* Straight-line functions with calls and guards (batch gen_dm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int set_vmstime(int, int);
int write_fat(int);
int close_file_handle(int);
int FUN_0c0fac00(int);
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o14_short { char p[0x14]; short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_short { char p[0x40]; short v; };
struct o42_short { char p[0x42]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o44_short { char p[0x44]; short v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o46_short { char p[0x46]; short v; };
struct o46_ushort { char p[0x46]; unsigned short v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o4E_ushort { char p[0x4E]; unsigned short v; };
struct o50_float { char p[0x50]; float v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_float { char p[0x54]; float v; };
struct o54_ushort { char p[0x54]; unsigned short v; };
struct o58_float { char p[0x58]; float v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o7221_uchar { char p[0x7221]; unsigned char v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o72B1_uchar { char p[0x72B1]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_short { char p[0xC]; short v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int ADXERR_CallErrFunc(int, int, int, int, int);
int FUN_0c02114c(int, float, float, float, float);
float FUN_0c0211d0(float, float, float, float);
int FUN_0c0496f0(int, int, int, int, int, int, int, int, int);
int ai_clear_op_state(void);
int ai_calc_goal_angle(int, float);
int ai_calc_dist_to_goal_obj(int);
int ai_angle_to_pad_dir(int);
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c063468(int);
int FUN_0c0634b4(int);
int pl_state26_phase0(int);
int pl_state26_phase1(int);
int pl_state26_phase2(int, int, int, int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_get_held_item_class(int, int, int);
int FUN_0c09c782(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_angle_to_opponent(int);
int pl_turn_to_opponent(int, int);
int pl_stick_dir_angle(int);
int pl_try_start_basic_attack(int);
int pl_button_jump_pressed(int);
int pl_landed(int);
int FUN_0c0a02d4(int, float);
int pl_end_action_choose_state(int);
int pl_change_state(int, int, int, int);
int snd_play_char_voice(int, int);
int obj_set_mode_owner(int, int, int);
int dbg_print_at(int, float, float);
float math_signed_sqrt(float);
float math_cos_angle16(int);
int math_rand_next(void);
float math_rand_float(void);
float math_sin_angle16(int);
int dbg_set_text_color(int);
int FUN_0c0e5178(int, int, int);
int FUN_0c0e51d0(void);
int snd_send_command(int);
int _divls(void);
extern int _modls();
int _modlu(void);
int _quick_odd_mvn(void);
int FUN_0c0f1766(int);
int FUN_0c0f1c44(int);
int gfx_set_frame_buffer_size(int, int, int);
int FUN_0c0fa42e(int, int, int, int, int);
int FUN_0c0fa540(int, int, int, int, int, int);
int FUN_0c0fa8c0(int);
int FUN_0c0fb0da(int, int);
int FUN_0c0fb0fc(int, int);
int FUN_0c104742(int);
int FUN_0c104962(int, int, int);
int FUN_0c109440(int, int, int);
int FUN_0c110c26(int, ...);
int SJ_SplitChunk(int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buCalcCRC(int, int, int, int);
int buIsFormat(int);
int check_isopen(void);
int direntry(int, int);
int direntry_dirty(int, int);
int gdFsReqRd32(int, int, int);
int get_fat(int, int);
#pragma inline_asm(iaOcbp)
static void iaOcbp(void *p)
{
    .DATA.W H'04A3
}
int open_file_handle(void);
int search_exec_file(int, int);
int search_free_dir(int);
int thunk_FUN_0c062242(int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int pl_state26_update(int a4);
int pl_mode15_cls02_f1(int a4);
int ai_op1(int a4, float f4);
int fx_spawn_03b86c(int a4);
int FUN_0c0f9a20(int a4, int a5);
int vmsfs_fclose(int a4, int a5, int a6, int a7);
int pl_ryoma_attack_kind68_phase1(int a4);
int warning_screen_draw(void);
int FUN_0c0e572c(void);
int FUN_0c0f3d20(int a4, int a5);
void FUN_0c0ff640(int a4, int a5);
int FUN_0c024fe4(int a4, int a5, int a6);
void FUN_0c0ff4b4(int a4);
int vmsfs_xcreate(int a4, int a5, int a6, int a7);
int stage_gimmick_09_update(int a4);
int FUN_0c1066f0(int a4, int a5, int a6, int a7);
int FUN_0c09e910(int a4, int a5, int a6, int a7);

int FUN_0c0f9a20(int a4, int a5)
{
    int stk[8];
    register int t0;
    register int t1;
    register int t27;
    register int t34;
    register int t40;
    register int t53;

    (((struct o0_uint *)0xC803DCC)->v) = 0x2;
    (((struct o0_uint *)0xC803D78)->v) = a4;
    (((struct o4_uint *)0xC803DCC)->v) = a5;
    t0 = (((struct o0_int *)0xC3471D0)->v);
    *(unsigned int *)(((int)stk + 12)) = t0;
    if (t0 != 0x80000000) {
        t1 = (((struct o0_int *)0xC3471D0)->v);
        (((struct o0_uint *)0xC3471D0)->v) = (t1 | 0x100);
        if ((t1 | 0x100) == 0xB00) {
            (((struct o0_uint *)0xC3471D0)->v) = 0x80000000;
            t53 = (FUN_0c0fac00(((((struct o0_int *)0xC803DCC)->v))));
        }
    } else {
        (((struct o4_uint *)0xC3471D0)->v) = 0x1;
        (((struct o8_uint *)0xC817314)->v) = ((((struct o0_int *)0xC817314)->v));
        *(unsigned int *)(((((((struct o0_int *)0xC817314)->v)) << 2) + 0xC817304)) = 0x2;
        *(unsigned int *)0xC8171CC = 0x0;
        (((struct o18_uint *)0xC817314)->v) = 0x1;
        *(unsigned int *)(((((int)stk + 12) + 0x4) + 0x0)) = ((*(int *)((a4 + 0x10))) & 0x1);
        *(unsigned int *)((((((int)stk + 12) + 0x4) + 0x4) + 0x0)) = (0x2 & (*(int *)((a4 + 0x10))));
        *(unsigned int *)((((((int)stk + 12) + 0x4) + 0x8) + 0x0)) = ((*(int *)((a4 + 0x10))) & 0x4);
        *(unsigned int *)((((((int)stk + 12) + 0x4) + 0xC) + 0x0)) = ((*(int *)((a4 + 0x10))) & 0x8);
        *(int *)((int)stk + 8) = 0x0;
        FUN_0c0fa42e((*(int *)(((((int)stk + 12) + 0x4) + 0x0))), (*(int *)((((((int)stk + 12) + 0x4) + 0x4) + 0x0))), (*(int *)((((((int)stk + 12) + 0x4) + 0x8) + 0x0))), (*(int *)((((((int)stk + 12) + 0x4) + 0xC) + 0x0))), 0x0);
        *(int *)((int)stk + 4) = 0x1;
        *(int *)((int)stk + 0) = 0x0;
        t27 = FUN_0c0fa540((*(int *)(((((int)stk + 12) + 0x4) + 0x0))), (*(int *)((((((int)stk + 12) + 0x4) + 0x4) + 0x0))), (*(int *)((((((int)stk + 12) + 0x4) + 0x8) + 0x0))), (*(int *)((((((int)stk + 12) + 0x4) + 0xC) + 0x0))), 0x0, 0x1);
        FUN_0c0fa8c0(t27);
        (((struct o4_uint *)0xC803DCC)->v) = ((unsigned int)((((struct o4_int *)0xC803DCC)->v)) >> 1);
        gfx_set_frame_buffer_size(0xFF, ((((struct o18_int *)0xC803D78)->v)), ((((struct o24_int *)0xC803D78)->v)));
        t34 = (((struct oC_int *)0xC803DCC)->v);
        if ((unsigned int)((((struct o4_int *)0xC803DCC)->v)) > (unsigned int)((-t34) + 0x200000)) {
            (((struct o4_uint *)0xC803DCC)->v) = ((-t34) + 0x200000);
        }
        t53 = FUN_0c109440(((((struct o4_int *)0xC803DCC)->v)), 0xC803E58, 0xC803E5C);
        if (t53 == 0) {
            *(unsigned int *)0xC817410 = ((((struct o4_int *)0xC803DCC)->v));
            *(int *)((int)stk + 8) = 0x0;
            t40 = (((struct o18_int *)0xC803D78)->v);
            *(int *)((int)stk + 4) = (t27 & (~t40));
            *(volatile int *)0xC817038;
            *(volatile int *)0xC817034;
            *(volatile int *)0xC817030;
            *(volatile int *)0xC81702C;
            FUN_0c110c26((t27 & (~t40)));
            *(unsigned int *)0xC8171CC = 0x1;
        }
    }
    return t53;
}

int vmsfs_fclose(int a4, int a5, int a6, int a7)
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
    register int t11;

    t0 = 0xFFFFFF00;
    if (a4 == 0) {
    } else {
        t1 = 0x0;
        if ((*(signed char *)(((((*(int *)((a4 + 0x28))) * 0x148) + 0xC80DBC8) + 0x2))) == 0) {
        } else {
            t2 = vmsio_ismount((*(int *)((a4 + 0x28))));
            t3 = 0x0;
            if (t2 == 0) {
            } else {
                t2 = 0x0;
                if ((*(signed char *)(((((*(int *)((a4 + 0x28))) * 0x148) + 0xC80DBC8) + 0x8))) == 0) {
                } else {
                    t4 = vmsio_isready((*(int *)((a4 + 0x28))));
                    if (t4 == 0) {
                        vmsfs_unmount((*(int *)((a4 + 0x28))));
                        t4 = 0x0;
                    } else {
                        t5 = buIsFormat((*(int *)((a4 + 0x28))));
                        t6 = 0x0;
                        if ((int)t5 >= 0) {
                            t5 = *(int *)((a4 + 0x28));
                            t7 = 0x0;
                            if ((*(int *)((a4 + 0x4))) != 0) {
                                if (a5 != 0) {
                                    *(unsigned int *)((((t5 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
                                    t8 = *(int *)((((t5 * 0x148) + 0xC80DBC8) + 0x4));
                                    *(unsigned int *)((((t5 * 0x148) + 0xC80DBC8) + 0x34)) = (*(int *)((((((t8 << 2) + t8) << 2) << 2) + 0xC347210)));
                                }
                                t8 = direntry(t5, (*(int *)((a4 + 0x2C))));
                                t9 = 0x33;
                                if ((*(int *)((a4 + 0x8))) == 1) {
                                    t9 = 0xCC;
                                }
                                *(unsigned char *)((t8 + 0x0)) = t9;
                                *(unsigned char *)((t8 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                                t9 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))(t8, 0x2, (*(int *)((a4 + 0x38))), a7);
                                t9 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))(t8, 0x18, (*(int *)((a4 + 0x30))), a7);
                                t9 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))(t8, 0x1A, (*(short *)((a4 + 0x2))), a7);
                                t9 = (t8 + 0x4);
                                t10 = (a4 + 0x10);
                                for (;;) {
                                    if ((unsigned int)t9 >= (unsigned int)(t8 + 0x10)) {
                                        break;
                                    }
                                    t11 = (*(signed char *)((t10 + 0x0)));
                                    t10 = (t10 + 0x1);
                                    *(unsigned char *)((t9 + 0x0)) = t11;
                                    t9 = (t9 + 0x1);
                                }
                                t9 = t11;
                                t10 = (t8 + 0x10);
                                t11 = (a4 + 0x20);
                                for (;;) {
                                    if ((unsigned int)t10 >= (unsigned int)(t8 + 0x18)) {
                                        break;
                                    }
                                    t9 = (*(signed char *)((t11 + 0x0)));
                                    t11 = (t11 + 0x1);
                                    *(unsigned char *)((t10 + 0x0)) = t9;
                                    t10 = (t10 + 0x1);
                                }
                                direntry_dirty(t5, (*(int *)((a4 + 0x2C))));
                                t8 = FUN_0c104742(t5);
                                t9 = t8;
                                if ((int)t8 >= 0) {
                                    write_fat(t5);
                                    t9 = 0x0;
                                }
                                t7 = t9;
                            }
                            t6 = t7;
                        }
                        t4 = t6;
                    }
                    t2 = t4;
                }
                t3 = t2;
            }
            t1 = t3;
        }
        close_file_handle(a4);
        t0 = t1;
    }
    return t0;
}

int FUN_0c0e572c(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o0_int *)0xC7FD0F8)->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        if (((((struct o4_int *)0xA08000B0)->v)) != 0) {
                            return 0x1;
                        }
                        (((struct o0_uint *)0xA08000B0)->v) = 0x0;
                        (((struct o0_uint *)0xC7FD0F8)->v) = 0x0;
                        return 0x0;
                    }
                } else {
                    t0 = FUN_0c0e51d0();
                    if (t0 != 0) {
                        return 0x1;
                    }
                    (((struct o0_uint *)0xC7FD0F8)->v) = 0x4;
                }
                t0 = 0x0;
                for (;;) {
                    if ((int)t0 >= (int)((((struct o4_int *)0xC7FD0F8)->v))) {
                        return 0x1;
                    }
                    t1 = (((struct o14_int *)0xC7FD0F8)->v);
                    (((struct o14_uint *)0xC7FD0F8)->v) = (t1 + 0x4);
                    t2 = (((struct o10_int *)0xC7FD0F8)->v);
                    (((struct o10_uint *)0xC7FD0F8)->v) = (t2 + 0x4);
                    *(unsigned int *)((((t1 + 0x4) - 4) + 0x0)) = (*(int *)((((t2 + 0x4) - 4) + 0x0)));
                    t1 = (((struct o8_int *)0xC7FD0F8)->v);
                    (((struct o8_uint *)0xC7FD0F8)->v) = (t1 - 4);
                    if ((t1 - 4) == 0) {
                        break;
                    }
                    t0 = (t0 + 0x1);
                }
                (((struct o0_uint *)0xA08000B0)->v) = 0x1;
                (((struct o0_uint *)0xC7FD0F8)->v) = 0x5;
                return 0x1;
            }
            if (((((struct o4_int *)0xA08000B0)->v)) == 0) {
                return 0x1;
            }
            if (((((struct oC_int *)0xC7FD0F8)->v)) != 0) {
                FUN_0c0e5178(((((struct o14_int *)0xC7FD0F8)->v)), (((((struct o14_int *)0xC7FD0F8)->v)) + ((((struct o8_int *)0xC7FD0F8)->v))), ((((struct oC_int *)0xC7FD0F8)->v)));
            }
            (((struct o0_uint *)0xC7FD0F8)->v) = 0x3;
            return 0x1;
        }
        for (;;) {
            t0 = snd_send_command(0x18A0);
            if (t0 != -1) {
                break;
            }
        }
        (((struct o0_uint *)0xC7FD0F8)->v) = 0x2;
        return 0x1;
    }
    return 0xFFFFFFFF;
}

int FUN_0c0f3d20(int a4, int a5)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t3 = 0xFFFFFF21;
    if ((((((struct o40_short *)(a5))->v)) != 0) && ((t0 = (((struct o40_short *)(a5))->v), (int)(unsigned short)t0 <= (int)0x3) && ((t1 = (((struct o44_short *)(a5))->v), (int)(unsigned short)t1 <= (int)0x3) && (t2 = (((struct o48_int *)(a5))->v), (unsigned int)t2 <= (unsigned int)0xE1000)))) {
        t0 = *(int *)((((unsigned short)((((struct o40_short *)(a5))->v)) << 2) + 0xC346BF4));
        t1 = *(int *)((((unsigned short)((((struct o44_short *)(a5))->v)) << 2) + 0xC346C04));
        t2 = (((struct o48_int *)(a5))->v);
        t4 = 0xFFFFFF21;
        if ((unsigned int)(((t0 + t1) + t2) + 0x80) > (unsigned int)0xE1000) {
        } else {
            t5 = 0x80;
            t6 = 0x10;
            t7 = a4;
            t8 = a5;
            for (;;) {
                if (t6 == 0) {
                    break;
                }
                t5 = (*(signed char *)((t8 + 0x0)));
                t8 = (t8 + 0x1);
                t6 = (t6 - 1);
                *(unsigned char *)((t7 + 0x0)) = t5;
                t7 = (t7 + 0x1);
            }
            *(unsigned char *)((t7 + 0x0)) = 0x0;
            t6 = t5;
            t5 = 0x20;
            t7 = (a4 + 0x12);
            t8 = (a5 + 0x10);
            for (;;) {
                if (t5 == 0) {
                    break;
                }
                t9 = *(signed char *)((t8 + 0x0));
                t8 = (t8 + 0x1);
                t6 = t9;
                t5 = (t5 - 1);
                *(unsigned char *)((t7 + 0x0)) = t6;
                t7 = (t7 + 0x1);
            }
            *(unsigned char *)((t7 + 0x0)) = 0x0;
            t5 = t6;
            t6 = 0x10;
            t7 = (a4 + 0x34);
            t8 = (a5 + 0x30);
            for (;;) {
                if (t6 == 0) {
                    break;
                }
                t9 = *(signed char *)((t8 + 0x0));
                t8 = (t8 + 0x1);
                t5 = t9;
                t6 = (t6 - 1);
                *(unsigned char *)((t7 + 0x0)) = t5;
                t7 = (t7 + 0x1);
            }
            *(unsigned char *)((t7 + 0x0)) = 0x0;
            (((struct o4E_ushort *)(a4))->v) = ((((struct o42_short *)(a5))->v));
            (((struct o4C_ushort *)(a4))->v) = ((((struct o40_short *)(a5))->v));
            (((struct o44_uint *)(a4))->v) = (a5 + 0x60);
            (((struct o48_uint *)(a4))->v) = (a5 + 0x80);
            (((struct o54_ushort *)(a4))->v) = ((((struct o44_short *)(a5))->v));
            if (((((struct o44_short *)(a5))->v)) == 0) {
                (((struct o50_uint *)(a4))->v) = 0x0;
                t5 = ((a5 + 0x80) + t0);
            } else {
                (((struct o50_uint *)(a4))->v) = ((a5 + 0x80) + t0);
                t5 = (((a5 + 0x80) + t0) + t1);
            }
            (((struct o5C_uint *)(a4))->v) = ((((struct o48_int *)(a5))->v));
            if (((((struct o48_int *)(a5))->v)) == 0) {
                (((struct o58_uint *)(a4))->v) = 0x0;
            } else {
                (((struct o58_uint *)(a4))->v) = t5;
            }
            t6 = (((struct o46_short *)(a5))->v);
            (((struct o46_ushort *)(a5))->v) = 0x0;
            t8 = buCalcCRC(a5, (((t0 + t1) + t2) + 0x80), t5, t7);
            (((struct o46_ushort *)(a5))->v) = t6;
            t0 = 0x0;
            if ((unsigned short)t8 != (unsigned short)t6) {
                t0 = 0xFFFFFF20;
            }
            t4 = t0;
        }
        t3 = t4;
    }
    return t3;
}

void FUN_0c0ff640(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0xFF00001C = ((*(int *)0xFF00001C) | 0x800);
    if (a4 == 0x80000000) {
        (((struct o0_uint *)0xC110F34)->v) = 0xC1110B8;
        (((struct o34_uint *)0xC110F34)->v) = 0xC1110B8;
        (((struct o8_uint *)0xC11123C)->v) = 0x0;
        (((struct o0_uint *)0xC11123C)->v) = a5;
    } else {
        (((struct o0_uint *)0xC110F34)->v) = 0xC110F6C;
        (((struct o34_uint *)0xC110F34)->v) = 0xC110F6C;
        (((struct o8_uint *)0xC11123C)->v) = 0x0;
        (((struct o0_uint *)0xC11123C)->v) = 0x0;
    }
    t1 = 0xC111244;
    t2 = 0xC110F04;
    t3 = (((int)_builtin_get_vbr()) + 0x100);
    for (;;) {
        if ((unsigned int)t2 > (unsigned int)0xC110F38) {
            break;
        }
        t1 = (*(int *)((t2 + 0x0)));
        t2 = (t2 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t1;
        t3 = (t3 + 0x4);
    }
    t2 = (int)_builtin_get_vbr();
    t4 = (((int)_builtin_get_vbr()) + 0x400);
    t5 = (((unsigned int)((unsigned int)((unsigned int)(0xFFFFFF00 + (t3 - t2)) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t4);
        t5 = (t5 - 0x1);
        t4 = (t4 + 0x20);
        if (t5 == 0) {
            break;
        }
    }
    t2 = t1;
    t1 = 0xC110F04;
    t3 = (((int)_builtin_get_vbr()) + 0x400);
    for (;;) {
        if ((unsigned int)t1 > (unsigned int)0xC110F38) {
            break;
        }
        t2 = (*(int *)((t1 + 0x0)));
        t1 = (t1 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t2;
        t3 = (t3 + 0x4);
    }
    t1 = (int)_builtin_get_vbr();
    t4 = (((int)_builtin_get_vbr()) + 0x1000);
    t5 = (((unsigned int)((unsigned int)((unsigned int)(0xFFFFFC00 + (t3 - t1)) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t4);
        t5 = (t5 - 0x1);
        t4 = (t4 + 0x20);
        if (t5 == 0) {
            break;
        }
    }
    t1 = t2;
    t2 = 0xC110F38;
    t3 = (((int)_builtin_get_vbr()) + 0x600);
    for (;;) {
        if ((unsigned int)t2 > (unsigned int)0xC110F6C) {
            break;
        }
        t1 = (*(int *)((t2 + 0x0)));
        t2 = (t2 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t1;
        t3 = (t3 + 0x4);
    }
    t1 = (int)_builtin_get_vbr();
    t2 = (((int)_builtin_get_vbr()) + 0x1800);
    t4 = (((unsigned int)((unsigned int)((unsigned int)(0xFFFFFA00 + (t3 - t1)) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t2);
        t4 = (t4 - 0x1);
        t2 = (t2 + 0x20);
        if (t4 == 0) {
            break;
        }
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    t0 = 0xFFFFFE40;
    for (;;) {
        t1 = (((int)_builtin_get_vbr()) + (((t0 >> 1) >> 1) >> 1));
        t0 = (t0 + 0x20);
        (((struct o200_uint *)(t1))->v) = 0xC11124C;
        if ((int)t0 >= (int)0x620) {
            break;
        }
    }
    _builtin_set_cr((_builtin_get_cr() & 0xEFFFFFFF));
}

void FUN_0c0ff4b4(int a4)
{
    int stk[1];

    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_4 = a4;
    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    v0_1 = (((v0_4 << 2) << 2));
    v0_2 = ((((v0_4 << 2) << 2) + 0xC803EA8));
    v0_4 = (0x100);
    v0_0 = (0x1);
    v0_7 = (0x1);
    v0_3 = (0xC803EA8);
    L_C0FF4EA:;
    v0_5 = ((((v0_7 << 2) << 2) + v0_3));
    if (((*(int *)(((((v0_7 << 2) << 2) + v0_3) + 0x4))) != v0_2)) goto L_C0FF500;
    if ((((*(int *)((v0_5 + 0xC))) & 0x80000000) != 0)) goto L_C0FF506;
    L_C0FF500:;
    v0_5 = (unsigned int)(v0_7 + 0x1) < (unsigned int)v0_4;
    v0_7 = ((v0_7 + 0x1));
    if (v0_5) goto L_C0FF4EA;
    L_C0FF506:;
    v0_6 = (0x0);
    if ((v0_7 == v0_4)) goto L_C0FF51E;
    *(unsigned int *)(((((v0_7 << 2) << 2) + v0_3) + 0x4)) = (*(int *)(((v0_1 + v0_3) + 0x4)));
    *(unsigned int *)(((v0_1 + v0_3) + 0xC)) = v0_6;
    L_C0FF5F8:;
    _builtin_set_imask(((unsigned int)((((unsigned short)(*(short *)(((int)stk + 0))) & 0xF) << 2) << 2) >> 4));
    return;
    L_C0FF51E:;
    v0_2 = (v0_1 + v0_3);
    v0_7 = (0xA05F6920);
    v0_1 = (0xC0);
    v0_2 = v0_2;
    v0_5 = (v0_0);
    v0_4 = (0xC804EA8);
    v0_3 = (0x90);
    v0_8 = (0x200);
    v0_9 = (0xA05F6924);
    L_C0FF530:;
    if (((*(int *)((v0_4 + (v0_5 << 2)))) != v0_2)) goto L_C0FF5F0;
    *(unsigned int *)((((v0_5 << 2) + v0_4) + 0x0)) = (*(int *)((v0_2 + 0x4)));
    *(unsigned int *)((v0_2 + 0xC)) = v0_6;
    if (((*(int *)((((v0_5 << 2) + v0_4) + 0x0))) != 0)) goto L_C0FF5F6;
    if ((v0_5 != v0_3)) goto L_C0FF55C;
    FUN_0c0fb0da(0x0, 0x0);
    L_C0FF5F6:;
    goto L_C0FF5F8;
    L_C0FF55C:;
    if ((v0_5 != 0x92)) goto L_C0FF56E;
    FUN_0c0fb0fc(0x0, 0x0);
    goto L_C0FF5F6;
    L_C0FF56E:;
    v0_1 = (((int)(short)((v0_5 << 2) << 2) >> 8));
    v0_2 = (((v0_5 << 2) << 2));
    v0_3 = (((unsigned int)((unsigned int)((unsigned int)(unsigned char)((v0_5 << 2) << 2) >> 2) >> 2) >> 1));
    if ((((int)(short)((v0_5 << 2) << 2) >> 8) != 10)) goto L_C0FF59A;
    *(unsigned int *)((v0_7 + 0x0)) = ((*(int *)((v0_7 + 0x0))) & (~((int)v0_0 << (int)(v0_3 + 0xC))));
    L_C0FF5AA:;
    *(unsigned int *)((((((int)_builtin_get_vbr()) + ((unsigned int)((unsigned int)(v0_2 - 512) >> 2) >> 1)) + v0_8) + 0x0)) = 0xC11124C;
    goto L_C0FF5F6;
    L_C0FF59A:;
    if ((v0_1 != 11)) goto L_C0FF5AA;
    *(unsigned int *)((v0_9 + 0x0)) = ((*(int *)((v0_9 + 0x0))) & (~((int)v0_0 << (int)v0_3)));
    goto L_C0FF5AA;
    L_C0FF5F0:;
    v0_10 = (unsigned int)(v0_5 + 0x1) < (unsigned int)v0_1;
    v0_5 = ((v0_5 + 0x1));
    if (v0_10) goto L_C0FF530;
    goto L_C0FF5F6;
}

int vmsfs_xcreate(int a4, int a5, int a6, int a7)
{
    int stk[15];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_2 = a4;
    v0_5 = a5;
    v0_3 = a6;
    v0_4 = a7;
    *(unsigned int *)(((int)stk + 8)) = v0_3;
    *(unsigned int *)(((int)stk + 4)) = v0_4;
    *(unsigned int *)(((int)stk + 12)) = (v0_2 * 0x148);
    *(unsigned int *)(((int)stk + 0)) = ((v0_2 * 0x148) + 0xC80DBC8);
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = 0x0;
    v0_0 = (0x0);
    v0_1 = (v0_5);
    v0_2 = (v0_2);
    if (((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x2))) == 0)) goto L_C102A9C;
    v0_6 = (vmsio_isready(v0_2)) != 0;
    if (v0_6) goto L_C102A86;
    vmsfs_unmount(v0_2);
    L_C102A9C:;
    v0_0 = (0xFFFFFF01);
    L_C102B96:;
    return v0_0;
    L_C102A86:;
    v0_6 = (vmsio_ismount(v0_2)) == 0;
    if (v0_6) goto L_C102A9C;
    if (((*(signed char *)((((*(int *)(((int)stk + 12))) + 0xC80DBC8) + 0x8))) != 0)) goto L_C102AA2;
    goto L_C102A9C;
    L_C102AA2:;
    v0_5 = (int)(buIsFormat(v0_2)) >= 0;
    if (v0_5) goto L_C102AB2;
    v0_0 = (0xFFFFFF03);
    goto L_C102B96;
    L_C102AB2:;
    if (((*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x38))) == 0)) goto L_C102B38;
    v0_5 = (int)(check_isopen()) < 0;
    if (v0_5) goto L_C102B38;
    v0_5 = (int)(FUN_0c104962(v0_2, v0_1, (((int)stk + 0) + 0x10))) < 0;
    if (v0_5) goto L_C102B08;
    v0_0 = (0xFFFFFF06);
    goto L_C102B96;
    L_C102B08:;
    v0_5 = (int)(search_exec_file(v0_2, (((int)stk + 0) + 0x10))) < 0;
    if (v0_5) goto L_C102B1C;
    v0_0 = (0xFFFFFF09);
    goto L_C102B96;
    L_C102B1C:;
    v0_3 = (unsigned short)(get_fat(v0_2, 0x0)) != 0xFFFC;
    if (v0_3) goto L_C102B38;
    v0_4 = search_free_dir(v0_2);
    v0_3 = (v0_4);
    if (!(((int)v0_4 >= 0))) goto L_C102B38;
    direntry(v0_2, v0_3);
    v0_5 = open_file_handle();
    v0_4 = (v0_5);
    if ((v0_5 != 0)) goto L_C102B58;
    v0_0 = (0xFFFFFF07);
    goto L_C102B96;
    L_C102B38:;
    v0_0 = (0xFFFFFF08);
    goto L_C102B96;
    L_C102B58:;
    *(unsigned int *)((v0_4 + 0x8)) = 0x1;
    *(unsigned int *)((v0_4 + 0x4)) = 0x2;
    *(unsigned int *)((v0_4 + 0x2C)) = v0_3;
    *(unsigned int *)((v0_4 + 0x38)) = 0xFFFF;
    *(unsigned int *)((v0_4 + 0x30)) = v0_0;
    *(unsigned int *)((v0_4 + 0x28)) = v0_2;
    *(unsigned short *)((v0_4 + 0x2)) = 0x1;
    *(unsigned char *)((v0_4 + 0x1)) = v0_0;
    v0_2 = ((v0_4 + 0x10));
    L_C102B7E:;
    if (((*(signed char *)((v0_1 + 0x0))) != 0)) goto L_C102B78;
    *(unsigned char *)((v0_2 + 0x0)) = v0_0;
    set_vmstime((v0_4 + 0x20), (*(int *)(((int)stk + 8))));
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = v0_4;
    v0_0 = (0x0);
    goto L_C102B96;
    L_C102B78:;
    *(unsigned char *)((v0_2 + 0x0)) = (*(signed char *)((v0_1 + 0x0)));
    v0_1 = ((v0_1 + 0x1));
    v0_2 = ((v0_2 + 0x1));
    goto L_C102B7E;
}

int FUN_0c1066f0(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t1;
    register int t3;
    register int t4;
    register int t9;
    register int t12;
    register int t14;
    register int t19;
    register int t24;
    register int t47;
    register int t87;
    register int t50;
    register int t55;
    register int t57;
    register int t60;
    register int t61;
    register int t62;
    register int t63;
    register int t65;
    register int t69;
    int t16;

    t1 = *(int *)((a4 + 0x4));
    if ((*(signed char *)((a4 + 0x2))) == 1) {
        t3 = FUN_0c0f1c44((*(int *)((a4 + 0x8))));
        if (t3 == 1) {
            t4 = *(int *)((a4 + 0x20));
            SJ_SplitChunk((a4 + 0x24), (((t4 << 8) << 2) << 1), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x4));
            t9 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x20)))))(t1, 0x1, (((int)stk + 4) + 0xC), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            t12 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (((int)stk + 4) + 0x4), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            t14 = FUN_0c0f1766((*(int *)((a4 + 0x8))));
            if ((t14 == (*(int *)((a4 + 0x30)))) && (t16 = *(int *)((a4 + 0x38)), t16 != 0)) {
                t19 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((a4 + 0x38)))))((*(int *)((a4 + 0x3C))), a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            }
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + (((t4 << 8) << 2) << 1));
            *(unsigned char *)((a4 + 0x2)) = 0x0;
            t24 = FUN_0c0f1766((*(int *)((a4 + 0x8))));
            if ((int)t24 >= (int)((int)((int)((*(int *)((a4 + 0x14))) + 0x7FF) / (int)0x800))) {
                *(unsigned char *)((a4 + 0x1)) = 0x3;
            }
        } else {
            if (t3 == 5) {
                *(int *)((int)stk + 0) = 0xC15B1CC;
                ADXERR_CallErrFunc(t3, 0x0, 0x0, 0x0, 0xC15B1CC);
                *(unsigned char *)((a4 + 0x1)) = 0x4;
                *(unsigned char *)((a4 + 0x2)) = 0x0;
            }
        }
    }
    t47 = *(signed char *)((a4 + 0x2));
    t87 = t47;
    if (t47 == 0) {
        t50 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x1, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        t87 = t50;
        if ((int)t50 < (int)(*(int *)((a4 + 0x1C)))) {
            t55 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x18)))))(t1, 0x0, (*(int *)((a4 + 0x18))), (a4 + 0x24), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            t57 = (int)((int)(*(int *)((a4 + 0x28))) / (int)0x800);
            *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x30)));
            t60 = FUN_0c0f1766((*(int *)((a4 + 0x8))));
            t61 = *(int *)(((int)stk + 4));
            t62 = *(int *)((a4 + 0x2C));
            t63 = (t61 - t60);
            if ((int)t57 < (int)(t61 - t60)) {
                t63 = t57;
            }
            t65 = t62;
            if ((int)t63 < (int)t62) {
                t65 = t63;
            }
            if (t65 != 0) {
                t69 = gdFsReqRd32((*(int *)((a4 + 0x8))), t65, (*(int *)((a4 + 0x24))));
                *(unsigned int *)((a4 + 0x20)) = t69;
                if ((int)t69 <= 0) {
                    t87 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (a4 + 0x24), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
                } else {
                    *(unsigned char *)((a4 + 0x2)) = 0x1;
                    t87 = 0x1;
                }
            } else {
                t87 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (a4 + 0x24), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
            }
        }
    }
    return t87;
}

