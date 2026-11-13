/* Straight-line functions with calls and guards (batch gen_p): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o208_uint { char p[0x208]; unsigned int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2FC_int { char p[0x2FC]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uchar { char p[0x4C]; unsigned char v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4D_uchar { char p[0x4D]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o52_short { char p[0x52]; short v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5A_uchar { char p[0x5A]; unsigned char v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71B4_uchar { char p[0x71B4]; unsigned char v; };
struct o71BB_uchar { char p[0x71BB]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71EC_uchar { char p[0x71EC]; unsigned char v; };
struct o71F3_uchar { char p[0x71F3]; unsigned char v; };
struct o7210_uchar { char p[0x7210]; unsigned char v; };
struct o7216_uchar { char p[0x7216]; unsigned char v; };
struct o721F_uchar { char p[0x721F]; unsigned char v; };
struct o7238_uchar { char p[0x7238]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXRNA_Destroy(int);
int ADXSTM_GetFad(int, int);
int ADXSTM_GetFsizeSct(int, int);
int ADXSTM_OpenRange(int, int, int);
int vmu_get_ready_mask(void);
int vmu_get_savefile_mask(void);
int vmu_get_vmgame_mask(void);
int vmu_get_free_space_mask(void);
int FUN_0c0109e4(void);
int ui_draw_element_sprite(int);
int vmu_menu_pad_pressed(int);
int conv_s16x5_to_f32(int, int);
int fx_spawn_032fd4(int, int);
int fx_spawn_04463c(int);
int obj_create(int, int, int);
int FUN_0c059bf8(int);
int FUN_0c05cb46(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0624c4(int, int, int);
int FUN_0c0645ee(int);
int pl_falcon_aim_at_target(int);
int pl_update_frame(int);
int FUN_0c09788c(int);
int pl_timer_arm_forever(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_blend_motion_pose(int);
int pl_start_hit_freeze(int);
int pl_reset_combo_counter(int);
int math_angle_between_points_xz(int, int);
int pl_stick_dir_angle(int);
int obj_set_record_char(int, int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int obj_can_interact(int, int, int);
int FUN_0c0cc7fc(int);
int dbg_print_at(int, float, float);
int cam_publish_active_position(int);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int _modls(void);
int _quick_odd_mvn(int);
int _slow_mvn(int);
int FUN_0c0ed9d4(int, int, int);
int FUN_0c0ed9e8(int, int, int);
int FUN_0c0eee64(int);
int gdFsReopenHn(int, int, int, int);
int FUN_0c0f1c44(int);
int FUN_0c0f4968(int);
int FUN_0c0f4c2c(void);
int FUN_0c0ff8aa(void);
int FUN_0c0ff8b4(int, int);
int vmsfs_unmount(int);
int FUN_0c104962(int, int, int);
int search_exec_file(int, int);
int get_fat(int, int);
int direntry(int, int);
int FUN_0c105e60(int);
int FUN_0c10660e(int);
int FUN_0c106636(int);
int FUN_0c10a8a0(int, int);
int FUN_0c10a8de(int, int);
int FUN_0c112672(int);
int FUN_0c1126ba(int, int);
int FUN_0c1128ee(int, int, int);
int mpdrv_clear_deviceinfo(int);
int vmsio_isready(int);
int vmsio_ismount(int);
int fmMngClearBuf(int, int);
int FUN_0c1136ee(int);
int FUN_0c115270(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buIsFormat(int);
int memset(int, int, int);
int fmMngMcpy(void);
int pl_change_state(int a4, int a5, int a6, int a7);
int FUN_0c104006(int a4, int a5, int a6, int a7);
int FUN_0c1152a4(int a4);
int fx_spawn_035444(int a4);
int fx_spawn_036598(int a4, int a5);
int fx_spawn_041820(int a4);
int FUN_0c04ae50(int a4, int a5, int a6, float f4, float f5, float f6);
int fx_spawn_04a4c4(int a4);
int FUN_0c092ace(int a4);
int FUN_0c0f488a(int a4, int a5, int a6, int a7);
int FUN_0c112718(int a4, int a5, int a6, int a7);
int pl_mode10_enter(int a4);
int gdFsWaitCompleteReq(int a4, int a5, int a6, int a7);
int vmu_menu_scan_port_masks(int a4, int a5, int a6, int a7);
int FUN_0c028ea0(int a4, int a5, int a6, int a7, float f4);
int fx_spawn_04a294(int a4);
int FUN_0c0623a6(int a4, int a5, int a6);
int FUN_0c0a43b8(int a4);
int testmode_move_cursor(int a4, int a5, int a6, int a7);
int gdFsReqDrvStatG(int a4, int a5, int a6, int a7);
int check_file_correct(int a4, int a5);
int FUN_0c109800(int a4);
int FUN_0c0207ca(int a4, int a5, int a6, int a7);
int hit_get_box_entry(int a4, int a5, int a6, int a7);
int hit_get_cylinder_entry(int a4, int a5, int a6, int a7);
int FUN_0c044868(int a4, int a5);
float pl_hitreact_21_stick_vector(int a4);
int item_director_phase1(int a4, int a5, int a6, int a7);
int item_director_spawn_queued(int a4);
int FUN_0c0d2d22(int a4);
int FUN_0c0f55a2(int a4, int a5, int a6);
int FUN_0c0f4a06(int a4, int a5);
int opt_page1_spawn_bg_scroll(int a4);
int opt_page3_spawn_bg_scroll(int a4);
int FUN_0c01fe52(int a4);
int FUN_0c023c72(int a4, int a5);
int FUN_0c033390(int a4, int a5, int a6, int a7);
int FUN_0c03ebf4(int a4);
int pl_falcon_attack_kind68_phase1(int a4);
int FUN_0c09bb9e(int a4, int a5);
int FUN_0c0c8cea(int a4, int a5, int a6, float f4);
int FUN_0c0c99c0(int a4, int a5, int a6, float f4);
int FUN_0c0d6104(int a4);
int FUN_0c0e59e8(int a4, int a5, int a6, int a7);
int fmMngFormat(int a4, int a5, int a6);
int FUN_0c01e4ea(int a4, float f4);
int FUN_0c023d04(int a4, int a5);

int FUN_0c104006(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t1;
    register int t3;
    register int t5;
    register int t6;

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
            t6 = search_exec_file(a4, ((int)stk + 0));
            if ((int)t6 < 0) {
                return 0xFFFFFF05;
            }
            return ((int (*)(int, int, int, int))(0xC1040AA))(0x0, 0xC, 0x0, a7);
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int FUN_0c1152a4(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t1 = 0x0;
    t2 = 0xC8447E0;
    for (;;) {
        if ((*(int *)((t2 + 0x0))) != 0) {
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x2694);
            if ((int)t1 >= (int)0x8) {
                break;
            }
            continue;
        }
        break;
    }
    if (t1 == 8) {
        t1 = 0x0;
    } else {
        (((struct o208_uint *)(t2))->v) = a4;
        (((struct o20C_uint *)(t2))->v) = 0x0;
        (((struct o204_uint *)(t2))->v) = 0x0;
        memset((0x210 + t2), 0x0, 0x2480);
        memset((0x104 + t2), 0x0, 0x100);
        FUN_0c0eee64((0x104 + t2));
        *(unsigned int *)((t2 + 0x0)) = 0x1;
        *(unsigned int *)0xC857C88 = ((*(int *)0xC857C88) + 0x1);
        t1 = t2;
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t1;
}

int FUN_0c0f488a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if (a4 != 0) {
        FUN_0c0f4c2c();
        t0 = *(int *)((a4 + 0xC));
        if (t0 != 0) {
            ADXRNA_Destroy((*(int *)((a4 + 0xC))));
        } else {
            t1 = t0;
        }
        if ((*(int *)((a4 + 0x4))) != 0) {
            FUN_0c105e60((*(int *)((a4 + 0x4))));
        } else {
            t0 = t1;
        }
        if ((*(int *)((a4 + 0x8))) != 0) {
            FUN_0c10660e((*(int *)((a4 + 0x8))));
        } else {
            t1 = t0;
        }
        t0 = *(int *)((a4 + 0x10));
        if (t0 != 0) {
            t2 = *(int *)((a4 + 0x10));
            t3 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t2 + 0x0))) + 0xC)))))(t2, a5, a6, a7);
        } else {
            t2 = t0;
            t0 = t1;
        }
        t1 = t2;
        t2 = t0;
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t3 = t0;
            t3 = (t3 << 2);
            t1 = a4;
            t1 = (t1 + 0x18);
            t1 = (t1 + t3);
            t2 = (*(int *)((t1 + 0x0)));
            if (t2 != 0) {
                t4 = a4;
                t4 = (t4 + 0x18);
                t4 = (t4 + t3);
                t4 = (*(int *)((t4 + 0x0)));
                t2 = (*(int *)((t4 + 0x0)));
                t1 = (*(int *)((t2 + 0xC)));
                t3 = ((int (*)(int, int, int, int))(t1))(t4, a5, a6, a7);
            } else {
                t3 = t1;
                t4 = t2;
            }
            t0 = (t0 + 0x1);
            t1 = t3;
            t2 = t4;
        }
        t0 = memset(a4, 0x0, 0x74);
        *(unsigned char *)((a4 + 0x0)) = 0x0;
        t1 = t0;
    }
    return t1;
}

int FUN_0c112718(int a4, int a5, int a6, int a7)
{
    int t3;
    register int t4;
    register int t16;
    register int t8;

    FUN_0c1126ba(a6, a7);
    FUN_0c112672(a6);
    t3 = *(signed char *)((a6 + 0x0));
    *(unsigned char *)((a6 + 0x2)) = (((*(signed char *)((a6 + 0x1))) ^ t3) & t3);
    t4 = *(signed char *)((a6 + 0x0));
    *(unsigned char *)((a6 + 0x3)) = (((*(signed char *)((a6 + 0x1))) ^ t4) & (~t4));
    if ((((((struct o10C4_int *)((*(int *)0xC843924)))->v)) == 1) && ((t8 = *(signed char *)((a6 + 0x8)), (unsigned char)t8 != 0xFF) && ((unsigned char)t8 != 0))) {
        FUN_0c115270(a7, ((unsigned char)(*(int *)((a7 + 0x0))) + 0x1));
    }
    t16 = 0x1;
    if ((*(signed char *)((a6 + 0x0))) != 0) {
        t16 = 0x9;
    }
    *(unsigned char *)((a6 + 0x4)) = t16;
    *(volatile signed char *)((a6 + 0x3));
    if ((*(signed char *)((a6 + 0x2))) != 0) {
        (((struct o10_uchar *)(a5))->v) = 0x1;
        FUN_0c1128ee(a5, a6, a7);
    }
    if ((*(signed char *)((a6 + 0x3))) != 0) {
        mpdrv_clear_deviceinfo(a5);
    }
    return 0x0;
}

int gdFsWaitCompleteReq(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    int t3;
    register int t4;

    t1 = t0;
    t0 = (*(int *)((a4 + 0x18)));
    t2 = (FUN_0c0ff8aa());
    for (;;) {
        t4 = ((int (*)(int, int, int, int))(((((struct o48_int *)((*(int *)(((*(int *)((a4 + 0x0))) + 0x3C)))))->v))))(t1, a5, a6, a7);
        t1 = a4;
        t3 = FUN_0c0f1c44(t1);
        t1 = t3;
        if (t3 != 0) {
            if (t3 != 1) {
                if ((t3 != 2) && ((t3 != 3) && (t3 != 4))) {
                    break;
                }
                if (t0 != (*(int *)((a4 + 0x18)))) {
                    t2 = (FUN_0c0ff8aa());
                    t0 = (*(int *)((a4 + 0x18)));
                } else {
                    t4 = t1;
                }
                t1 = t4;
                t4 = FUN_0c0ff8aa();
                t1 = t2;
                t1 = (FUN_0c0ff8b4(t1, t4));
                if ((unsigned int)t1 > (unsigned int)0xEE6B28) {
                    return 0xFFFFFFEB;
                }
                continue;
            }
            return 0x0;
        }
        return 0xFFFFFFE0;
    }
    t0 = 0xFFFFFFE7;
    if ((t3 == 5) || (t3 == 64)) {
        t0 = ((((struct o52_short *)(a4))->v));
    }
    return t0;
}

int gdFsReqDrvStatG(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = gdFsReopenHn((*(int *)(((*(int *)0xC346BD8) + 0x14))), 0x0, 0x0, 0x0);
    t1 = 0xFFFFFFF3;
    if (t0 != 0) {
        t2 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t3 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC346BD8) + 0xC))) + 0x3C)))))(0x1, 0xE, ((*(int *)0xC346BD8) + 0x40), a7);
        if (t3 != 0) {
            *(unsigned int *)((t0 + 0x3C)) = t3;
            (((struct o50_ushort *)(t0))->v) = 0x4;
            (((struct o48_ushort *)(t0))->v) = 0xA;
            *(unsigned int *)(((*(int *)((t0 + 0x0))) + 0x1C)) = t0;
            t0 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC346BD8) + 0xC)))))->v))))();
        }
        _builtin_set_imask(((unsigned int)(((t2 & 0xF) << 2) << 2) >> 4));
        t0 = 0x0;
        if (t3 == 0) {
            t0 = 0xFFFFFFF3;
        }
        t1 = t0;
    }
    return t1;
}

int check_file_correct(int a4, int a5)
{
    int stk[11];
    register int t0;
    register int t20;
    register int t5;
    register int t6;
    register int t8;
    int t12;
    register int t13;

    t0 = FUN_0c104962(a4, a5, ((int)stk + 0));
    t20 = 0xFFFFFF05;
    if ((int)t0 >= 0) {
        direntry(a4, t0);
        t5 = *(int *)(((int)stk + 12));
        if ((int)t5 < (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x30)))) {
            t6 = 0x0;
            for (;;) {
                if ((int)t6 >= (int)(*(int *)(((int)stk + 40)))) {
                    return 0x0;
                }
                t8 = get_fat(a4, t5);
                if (t6 == ((*(int *)(((int)stk + 40))) - 1)) {
                    if ((unsigned short)t8 != 0xFFFA) {
                        break;
                    }
                    t6 = (t6 + 0x1);
                    t5 = (unsigned short)t8;
                    continue;
                }
                if (((unsigned short)t8 != t5) && (((unsigned short)t8 != 0xFFFA) && (((unsigned short)t8 != 0xFFFC) && (((unsigned short)t8 != 0xFFFF) && (t12 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C)), t13 = *(int *)((t12 + 0x30)), (int)(unsigned short)t8 < (int)t13))))) {
                    t6 = (t6 + 0x1);
                    t5 = (unsigned short)t8;
                    continue;
                }
                return 0xFFFFFF41;
            }
        }
        t20 = 0xFFFFFF41;
    }
    return t20;
}

int FUN_0c109800(int a4)
{
    int stk[2];
    register int t0;
    register int t39;
    register int t8;
    register int t9;
    register int t11;

    t0 = FUN_0c10a8a0(a4, ((int)stk + 0));
    t39 = 0x7;
    if (t0 == 0) {
    } else {
        if (((unsigned short)(*(short *)((t0 + 0x0))) & 2) != 0) {
            t8 = *(int *)0xC34763C;
            t9 = (a4 - t8);
            if ((*(short *)(((int)stk + 0))) == 0) {
                t9 = (t8 + a4);
            }
            t11 = FUN_0c10a8a0(t9, (((int)stk + 0) + 0x4));
            if (t11 == 0) {
                FUN_0c10a8de((*(short *)(((int)stk + 0))), t0);
                t39 = 0x0;
            } else {
                if (((unsigned short)(*(short *)((t11 + 0x0))) & 4) != 0) {
                    *(unsigned short *)((t0 + 0x0)) = ((*(short *)((t0 + 0x0))) & 0xFFFB);
                    t39 = 0x0;
                } else {
                    FUN_0c10a8de((*(short *)(((int)stk + 0))), t0);
                    t39 = (FUN_0c10a8de((*(short *)(((int)stk + 4))), t11));
                }
            }
        } else {
            t39 = (FUN_0c10a8de((*(short *)(((int)stk + 0))), t0));
        }
    }
    return t39;
}

int FUN_0c0f55a2(int a4, int a5, int a6)
{
    register int t0;
    register int t3;
    register int t5;

    t0 = 0xFFFFFFFD;
    if ((a4 != 0) && (((int)a5 >= 0) && (a6 != 0))) {
        t0 = 0x0;
        if ((*(signed char *)((a4 + 0x1))) == 2) {
        } else {
            t0 = 0xFFFFFFFF;
            if ((*(int *)((a4 + 0x4))) != 0) {
            } else {
                ADXCRS_Lock();
                *(unsigned int *)((a4 + 0x1C)) = ((*(int *)((a4 + 0xC))) + (*(int *)((a4 + 0x18))));
                t3 = *(int *)((a4 + 0x18));
                t0 = *(int *)((a4 + 0x10));
                t5 = (t0 - t3);
                if ((int)a5 < (int)(t0 - t3)) {
                    t5 = a5;
                }
                *(unsigned int *)((a4 + 0x20)) = t5;
                *(unsigned int *)((a4 + 0x24)) = 0x0;
                t3 = ADXSTM_OpenRange((*(int *)((a4 + 0x1C))), (*(int *)((a4 + 0x20))), a6);
                t0 = 0xFFFFFFFF;
                if (t3 == 0) {
                } else {
                    *(unsigned int *)((a4 + 0x4)) = t3;
                    *(unsigned char *)((a4 + 0x1)) = 0x2;
                    FUN_0c106636((*(int *)((a4 + 0x4))));
                    t0 = (*(int *)((a4 + 0x20)));
                }
                ADXCRS_Unlock();
            }
        }
    }
    return t0;
}

int FUN_0c0f4a06(int a4, int a5)
{
    int stk[7];
    register int t2;
    register int t5;
    register int t11;
    register int t20;

    FUN_0c0f4c2c();
    ADXCRS_Lock();
    t2 = ADXSTM_GetFad(a5, (((int)stk + 8) + 0x4));
    if ((int)t2 < 0) {
        ADXCRS_Unlock();
        *(int *)((int)stk + 4) = a5;
        *(int *)((int)stk + 0) = 0xC15A808;
        t20 = (ADXERR_CallErrFunc(0xC15A808));
    } else {
        t5 = ADXSTM_GetFsizeSct(a5, ((int)stk + 8));
        if ((int)t5 < 0) {
            ADXCRS_Unlock();
            *(int *)((int)stk + 4) = a5;
            *(int *)((int)stk + 0) = 0xC15A834;
            t20 = (ADXERR_CallErrFunc(0xC15A834));
        } else {
            t11 = ADXSTM_OpenRange((*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 8))), (*(int *)((a4 + 0x10))));
            *(unsigned int *)((a4 + 0x8)) = t11;
            if (t11 == 0) {
                ADXCRS_Unlock();
                *(int *)((int)stk + 4) = a5;
                *(int *)((int)stk + 0) = 0xC15A860;
                ADXERR_CallErrFunc(0xC15A860);
            } else {
                FUN_0c0f4968(a4);
            }
            t20 = (ADXCRS_Unlock());
        }
    }
    return t20;
}

int FUN_0c0e59e8(int a4, int a5, int a6, int a7)
{
    int stk[5];
    int t3;

    *(unsigned short *)(((((int)stk + 0) + 0xA) + 0x0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(volatile short *)(((int)stk + 10));
    if (((*(int *)(((int)stk + 4))) & 0xFF00) != 0) {
        t3 = *(int *)(((int)stk + 4));
        if ((t3 != 0x1A0) && (t3 != 0x4A0)) {
            if ((t3 != 0x5A0) && ((t3 != 0x6A0) && (t3 != 0x7A0))) {
                if ((t3 != 0x9A0) && ((t3 != 0xAA0) && (t3 != 0x10A0))) {
                    if (t3 != 0x11A0) {
                        return ((int (*)(int, int, int, int))(0xC0E5A7A))(a4, a5, a6, a7);
                    }
                    *(volatile int *)(((int)stk + 0));
                    return ((int (*)(int, int, int, int))(0xC0E5A74))(a4, a5, a6, a7);
                }
                *(volatile int *)(((int)stk + 0));
                return ((int (*)(int, int, int, int))(0xC0E5A7A))(a4, a5, a6, a7);
            }
            *(volatile int *)(((int)stk + 0));
            return ((int (*)(int, int, int, int))(0xC0E5A74))(a4, a5, a6, a7);
        }
        *(volatile int *)(((int)stk + 0));
        return ((int (*)(int, int, int, int))(0xC0E5A7A))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0E5A7A))(a4, a5, a6, a7);
}

int fmMngFormat(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;

    t0 = *(int *)0xC347704;
    t1 = 0xFFFFFFF5;
    if (t0 == 0) {
    } else {
        t1 = 0xFFFFFFFA;
        if ((a4 == 0) || (a4 == 1)) {
            t3 = FUN_0c0ed9e8((*(int *)((t0 + 0x4))), a5, a6);
            t0 = 0xFFFFFFFD;
            if (t3 != 0) {
            } else {
                t3 = *(int *)0xC347704;
                fmMngMcpy();
                *(unsigned short *)(((*(int *)0xC347704) + 0x2)) = a4;
                (((struct o11_uchar *)((t3 + 0x34)))->v) = a4;
                (((struct o10_uchar *)((t3 + 0x34)))->v) = (*(signed char *)(((*(int *)0xC347704) + 0x0)));
                t4 = FUN_0c0ed9d4((*(int *)(((*(int *)0xC347704) + 0x4))), (t3 + 0x34), 0x12);
                t3 = 0xFFFFFFFE;
                if (t4 != 18) {
                } else {
                    fmMngClearBuf((*(int *)(((*(int *)0xC347704) + 0xC))), (*(int *)(((*(int *)0xC347704) + 0x8))));
                    t4 = FUN_0c1136ee((*(int *)0xC347704));
                    t3 = 0x0;
                    if (t4 != 0) {
                        t3 = t4;
                    }
                }
                t0 = t3;
            }
            t1 = t0;
        }
    }
    return t1;
}

