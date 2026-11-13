/* Straight-line functions with calls and guards (batch gen_cs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_short { char p[0x2]; short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2A_short { char p[0x2A]; short v; };
struct o2A_ushort { char p[0x2A]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2F0_int { char p[0x2F0]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o34_float { char p[0x34]; float v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o6C_int { char p[0x6C]; int v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o7205_uchar { char p[0x7205]; unsigned char v; };
struct o7214_uchar { char p[0x7214]; unsigned char v; };
struct o7243_uchar { char p[0x7243]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
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
int vmu_lcd_set_idle_image(void);
int vmu_lcd_set_busy_image(void);
int vmu_lcd_refresh(int);
int save_pack_data(void);
int vmu_write_save_file(int);
int vmu_write_icondata_file(int);
int vmu_defrag_disk(int);
int vmu_write_vmgame_file(int, int);
int obj_step_pos_vel_acc(int);
int FUN_0c0161d8(void);
extern int FUN_0c016238();
int FUN_0c048ea0(int, int);
int ai_clear_op_state(void);
int ai_calc_goal_angle(int, float);
int ai_angle_to_pad_dir(int);
int obj_create(int, int, int);
int obj_destroy(int, int, int, int);
int FUN_0c0623a6(int, int, int);
int FUN_0c0624c4(int, int, int);
int pl_reset_pose(int);
int pl_start_motion(int, int, int);
int pl_angle_to_opponent(int);
int pl_stick_dir_angle(int);
int obj_set_record(int, int);
int FUN_0c0b3614(int);
int FUN_0c0b36bc(int);
int stage_gimmick_28_spawn_c(int);
int cam_set_shake_ramp(int, int);
float math_rand_float(void);
int FUN_0c0e21b0(int, int);
int FUN_0c0e6d00(void);
extern int FUN_0c0e6e5c();
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(void);
int FUN_0c0fddbe(int, int, int);
int FUN_0c106ef4(int);
int adxt_stat_decend(int, int, int, int);
int adxt_stat_decinfo(int);
int adxt_stat_playend(void);
int adxt_stat_playing(int);
int adxt_stat_prep(int, int, int, int);
int buMountDisk(int, int, int);
int buUnmount(int);
int kmiBGPlaneCountWords(int);
int kmiBGPlaneSetPCW(int, int, int);
int kmiWriteRegister(int, int);
int memset(int, int, int);
int FUN_0c0158ee(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int pl_enter_state_16_29(int a4, int a5);
int FUN_0c0fc04c(int a4, int a5);
int kmiProcessVertex_01(int a4);
int fx_spawn_item_sparkle(int a4);
int ai_op51(int a4, float f4);
int FUN_0c015fda(int a4, int a5, int a6, int a7);
int vmu_step_write_vmgame(int a4, int a5);
int menu_ui_task_35(int a4, int a5, int a6, int a7);
int stage_gimmick_28_update_b(int a4, int a5, int a6, int a7);
int savedata_reset_keep_ranking(void);
int FUN_0c024b5e(int a4, int a5, int a6);
int FUN_0c0fa6c0(int a4);
int vmu_step_save(int a4, int a5, int a6);
int fx_update_heading_shot(int a4, int a5, int a6, int a7);
int FUN_0c107048(int a4, int a5, int a6, int a7);

int FUN_0c0fc04c(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    if (((((struct o14_int *)0xC816FE4)->v)) == 1) {
        t1 = (((struct o4_int *)0xC817278)->v);
        t2 = (((struct o18_int *)0xC816FE4)->v);
        (((struct o0_uint *)0xC8171D8)->v) = (((((struct o0_int *)0xC8171D8)->v)) - (((t2 * t1) << 2) << 1));
        (((struct o4_uint *)0xC8171D8)->v) = (((((struct o4_int *)0xC8171D8)->v)) - (((t2 * t1) << 2) << 1));
    }
    if (a4 != 0) {
        if (a4 != 1) {
        } else {
            t1 = 0x0;
            if ((((((struct o0_int *)0xC816FE4)->v)) & 0x1) == 1) {
                t1 = 0x1;
            }
            if ((t1 != 1) && (t0 = (((struct o0_int *)0xC816FE4)->v), (t0 & 32) == 0)) {
                (((struct o18_uint *)0xC816FE4)->v) = 0x8;
            } else {
                (((struct o18_uint *)0xC816FE4)->v) = 0x10;
            }
            t0 = (((struct o4_int *)0xC817278)->v);
            t1 = (((struct o18_int *)0xC816FE4)->v);
            (((struct o0_uint *)0xC8171D8)->v) = (((((struct o0_int *)0xC8171D8)->v)) + (((t1 * t0) << 2) << 1));
            (((struct o4_uint *)0xC8171D8)->v) = ((((t1 * t0) << 2) << 1) + ((((struct o4_int *)0xC8171D8)->v)));
        }
    } else {
        (((struct o18_uint *)0xC816FE4)->v) = 0x0;
    }
    t0 = (((struct o0_int *)0xC817278)->v);
    t1 = (((struct o20_int *)0xC816FE4)->v);
    t2 = 0xC816FFC;
    if ((int)((((struct o18_int *)0xC816FE4)->v)) < (int)((((struct o30_int *)0xC816FE4)->v))) {
        t2 = 0xC817014;
    }
    t3 = *(int *)((t2 + 0x0));
    t2 = (t1 - t3);
    if ((unsigned int)(((((struct o30_int *)0xC816FE4)->v)) + (t1 - t3)) > (unsigned int)((((struct o20_int *)0xC816FE4)->v))) {
        t2 = (((((struct o20_int *)0xC816FE4)->v)) - ((((struct o18_int *)0xC816FE4)->v)));
    }
    if ((unsigned int)((((struct o20_int *)0xC816FE4)->v)) < (unsigned int)t2) {
        (((struct o20_uint *)0xC816FE4)->v) = t2;
    }
    (((struct o0_uint *)0xC817278)->v) = ((((t2 & 0x3FF) << 8) << 2) | (t0 & 0xFFF003FF));
    kmiWriteRegister(0x44, 0x0);
    kmiWriteRegister(0x5C, ((((struct o0_int *)0xC817278)->v)));
    kmiWriteRegister(0x44, ((((struct o8_int *)0xC817278)->v)));
    (((struct o14_uint *)0xC816FE4)->v) = a4;
    if (a5 != 0) {
        *(unsigned int *)((a5 + 0x0)) = ((((struct o18_int *)0xC816FE4)->v));
    }
    return 0x0;
}

int kmiProcessVertex_01(int a4)
{
    int stk[4];
    register int t3;
    register int t5;
    register int t13;
    register int t24;
    register int t35;
    register int t40;

    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)) = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC81715C)->v);
    *(unsigned int *)(((int)stk + 0)) = ((((struct o8_int *)0xC81715C)->v));
    t5 = (((struct oC_int *)0xC81715C)->v);
    (((struct o0_uint *)0xC817064)->v) = t3;
    (((struct o4_uint *)0xC817064)->v) = (*(int *)(((int)stk + 0)));
    (((struct o8_uint *)0xC817064)->v) = t5;
    (((struct oC_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    (((struct o10_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    (((struct o14_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    t13 = *(int *)(((((int)stk + 0) + 0x4) + 0x0));
    (((struct o18_uint *)0xC817064)->v) = ((((((int)(((((struct o10_float *)(t13))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o14_float *)(t13))->v)) * 255.0f) << 16)) | ((int)(((((struct o18_float *)(t13))->v)) * 255.0f) << 8)) | (int)(((((struct o1C_float *)(t13))->v)) * 255.0f));
    (((struct o1C_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x4)));
    (((struct o20_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x8)));
    (((struct o24_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0xC)));
    t24 = *(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0));
    (((struct o28_uint *)0xC817064)->v) = ((((((int)(((((struct o10_float *)(t24))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o14_float *)(t24))->v)) * 255.0f) << 16)) | ((int)(((((struct o18_float *)(t24))->v)) * 255.0f) << 8)) | (int)(((((struct o1C_float *)(t24))->v)) * 255.0f));
    (((struct o2C_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x4)));
    (((struct o30_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x8)));
    (((struct o34_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0xC)));
    t35 = *(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0));
    (((struct o38_uint *)0xC817064)->v) = ((((((int)(((((struct o10_float *)(t35))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o14_float *)(t35))->v)) * 255.0f) << 16)) | ((int)(((((struct o18_float *)(t35))->v)) * 255.0f) << 8)) | (int)(((((struct o1C_float *)(t35))->v)) * 255.0f));
    (((struct o0_uint *)0xC81715C)->v) = 0x3C;
    t40 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t40, 0x0, 0x0);
    (((struct o14_uint *)0xC81715C)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    return 0x0;
}

int FUN_0c0fa6c0(int a4)
{
    int stk[8];
    register int t11;
    register int t29;
    register int t53;
    register int t77;
    register int t98;
    register int t132;
    register int t111;
    register int t105;
    register int t102;
    register int t104;
    register int t120;
    register int t117;
    register int t119;
    register int t9;
    register int t10;
    int t28;
    int t52;
    int t76;
    register int t126;

    *(unsigned int *)((((int)stk + 0) + 0x0)) = ((((struct o0_int *)0xC15AA70)->v));
    *(unsigned int *)((((int)stk + 0) + 0x4)) = ((((struct o4_int *)0xC15AA70)->v));
    *(unsigned int *)((((int)stk + 0) + 0x8)) = ((((struct o8_int *)0xC15AA70)->v));
    *(unsigned int *)((((int)stk + 0) + 0xC)) = ((((struct oC_int *)0xC15AA70)->v));
    *(unsigned int *)((((int)stk + 0) + 0x10)) = ((((struct o10_int *)0xC15AA70)->v));
    *(unsigned int *)((((int)stk + 0) + 0x14)) = ((((struct o14_int *)0xC15AA70)->v));
    *(unsigned int *)((((int)stk + 0) + 0x18)) = ((((struct o18_int *)0xC15AA70)->v));
    *(unsigned int *)((((int)stk + 0) + 0x1C)) = ((((struct o1C_int *)0xC15AA70)->v));
    if ((((*(int *)0xC817420) & 1) != 0) && ((t9 = *(int *)0xC8172FC, t9 == 0) || (t10 = *(int *)0xC8173D8, t10 != 32))) {
        if ((unsigned int)0x0 < (unsigned int)a4) {
            t11 = 0x0;
            for (;;) {
                FUN_0c0fddbe((*(int *)((((signed char)(((t11 << 2) + t11) << 2) + 0xC803E04) + 0x0))), ((int)stk + 0), 0x20);
                t11 = (t11 + 0x1);
                if ((unsigned int)t11 >= (unsigned int)a4) {
                    break;
                }
            }
        }
        (((struct o0_uint *)0xC803E60)->v) = 0x8;
    }
    if (((*(int *)0xC817420) & 2) != 0) {
        *(unsigned int *)((((int)stk + 0) + 0x0)) = 0x81000000;
        if (((*(int *)0xC8172FC) != 0) && (t28 = *(int *)0xC8173D8, t28 == 33)) {
        } else {
            if ((unsigned int)0x0 < (unsigned int)a4) {
                t29 = 0x0;
                for (;;) {
                    FUN_0c0fddbe((*(int *)((((signed char)(((t29 << 2) + t29) << 2) + 0xC803E04) + 0x4))), ((int)stk + 0), 0x20);
                    t29 = (t29 + 0x1);
                    if ((unsigned int)t29 >= (unsigned int)a4) {
                        break;
                    }
                }
            }
            (((struct o4_uint *)0xC803E60)->v) = 0x8;
        }
    }
    if (((*(int *)0xC817420) & 4) != 0) {
        *(unsigned int *)((((int)stk + 0) + 0x0)) = 0x82000000;
        if (((*(int *)0xC8172FC) != 0) && (t52 = *(int *)0xC8173D8, t52 == 34)) {
        } else {
            if ((unsigned int)0x0 < (unsigned int)a4) {
                t53 = 0x0;
                for (;;) {
                    FUN_0c0fddbe((*(int *)((((signed char)(((t53 << 2) + t53) << 2) + 0xC803E04) + 0x8))), ((int)stk + 0), 0x20);
                    t53 = (t53 + 0x1);
                    if ((unsigned int)t53 >= (unsigned int)a4) {
                        break;
                    }
                }
            }
            (((struct o8_uint *)0xC803E60)->v) = 0x8;
        }
    }
    if (((*(int *)0xC817420) & 0x8) != 0) {
        *(unsigned int *)((((int)stk + 0) + 0x0)) = 0x83000000;
        if (((*(int *)0xC8172FC) != 0) && (t76 = *(int *)0xC8173D8, t76 == 35)) {
        } else {
            if ((unsigned int)0x0 < (unsigned int)a4) {
                t77 = 0x0;
                for (;;) {
                    FUN_0c0fddbe((*(int *)((((signed char)(((t77 << 2) + t77) << 2) + 0xC803E04) + 0xC))), ((int)stk + 0), 0x20);
                    t77 = (t77 + 0x1);
                    if ((unsigned int)t77 >= (unsigned int)a4) {
                        break;
                    }
                }
            }
            (((struct oC_uint *)0xC803E60)->v) = 0x8;
        }
    }
    t98 = *(int *)0xC817420;
    t132 = t98;
    if ((t98 & 16) != 0) {
        *(unsigned int *)((((int)stk + 0) + 0x0)) = 0x84000000;
        if ((*(int *)0xC8172FC) != 0) {
            t105 = *(int *)0xC8173D8;
            t111 = t105;
            if (t105 != 36) {
                if ((unsigned int)0x0 < (unsigned int)a4) {
                    t102 = 0x0;
                    for (;;) {
                        t104 = FUN_0c0fddbe((*(int *)((((signed char)(((t102 << 2) + t102) << 2) + 0xC803E04) + 0x10))), ((int)stk + 0), 0x20);
                        t102 = (t102 + 0x1);
                        if ((unsigned int)t102 >= (unsigned int)a4) {
                            break;
                        }
                    }
                    t105 = t104;
                }
                (((struct o10_uint *)0xC803E60)->v) = 0x8;
                t111 = t105;
            }
            t126 = t111;
        } else {
            t120 = 0xC8172FC;
            if ((unsigned int)0x0 < (unsigned int)a4) {
                t117 = 0x0;
                for (;;) {
                    t119 = FUN_0c0fddbe((*(int *)((((signed char)(((t117 << 2) + t117) << 2) + 0xC803E04) + 0x10))), ((int)stk + 0), 0x20);
                    t117 = (t117 + 0x1);
                    if ((unsigned int)t117 >= (unsigned int)a4) {
                        break;
                    }
                }
                t120 = t119;
            }
            (((struct o10_uint *)0xC803E60)->v) = 0x8;
            t126 = t120;
        }
        t132 = t126;
    }
    return t132;
}

int FUN_0c107048(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 == 3) {
        adxt_stat_playing(a4);
    } else {
        if (t0 == 1) {
            adxt_stat_decinfo(a4);
        } else {
            t0 = *(signed char *)((a4 + 0x1));
            if (t0 == 2) {
                adxt_stat_prep(a4, a5, a6, a7);
            } else {
                if (t0 == 4) {
                    adxt_stat_decend(a4, a5, a6, a7);
                } else {
                    if ((*(signed char *)((a4 + 0x1))) == 5) {
                        adxt_stat_playend();
                    }
                }
            }
        }
    }
    return FUN_0c106ef4(a4);
}
