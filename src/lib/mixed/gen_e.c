/* Straight-line functions with calls and guards (batch gen_e): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o100_uchar { char p[0x100]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2F_uchar { char p[0x2F]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o34_float { char p[0x34]; float v; };
struct o35_uchar { char p[0x35]; unsigned char v; };
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
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BB_uchar { char p[0x71BB]; unsigned char v; };
struct o71BD_uchar { char p[0x71BD]; unsigned char v; };
struct o71DD_uchar { char p[0x71DD]; unsigned char v; };
struct o71DE_uchar { char p[0x71DE]; unsigned char v; };
struct o71E4_float { char p[0x71E4]; float v; };
struct o7211_uchar { char p[0x7211]; unsigned char v; };
struct o7212_uchar { char p[0x7212]; unsigned char v; };
struct o7213_uchar { char p[0x7213]; unsigned char v; };
struct o7225_uchar { char p[0x7225]; unsigned char v; };
struct o7243_uchar { char p[0x7243]; unsigned char v; };
struct o7254_float { char p[0x7254]; float v; };
struct o72A8_uint { char p[0x72A8]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o90_int { char p[0x90]; int v; };
struct o94_int { char p[0x94]; int v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_float { char p[0xF0]; float v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
int ADXERR_CallErrFunc(int, ...);
int ADXPD_GetStat(int);
int FUN_0c01eb32(int);
int FUN_0c01ed94(int);
int FUN_0c01f48c(int, int);
int vmu_menu_spawn_message(int);
int vmu_menu_spawn_choice_cursor(int);
int FUN_0c01f874(int);
int vmu_menu_scan_port_masks(void);
int vmu_menu_update_objs(int, int, int, int);
int vmu_menu_pad_pressed(int);
int FUN_0c01fe52(int);
int FUN_0c01ff6c(int);
extern int FUN_0c02c9f6();
int ui_fade_reset(void);
int fx_spawn_0454b4(int, int);
int game_reset_objects(void);
int obj_create(int, int, int);
int FUN_0c0593e0(int);
int obj_tick_class(int);
int FUN_0c05f2d4(int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c08d662(int);
int hit_probe_step_by_velocity(int, int, float);
int pl_apply_acceleration(int);
int pl_stick_dir_angle(int);
int pl_no_ground(int);
int snd_play_side_se(int, int);
int cam_request_mode(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlCalcPoint44(int, int);
int nlCalcPoint(int, int);
int nlSelectMatrixStack(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int snd_driver_memmove_start(int, int, int);
int snd_driver_memmove_busy(void);
int snd_bank_check_slot(int, int, int, int);
int snd_bank_place(int, int, int, int);
int snd_send_command(int);
int FUN_0c0e60ce(int, int);
int FUN_0c0e6834(int, int, int);
int _quick_odd_mvn(int, int, int, int);
int FUN_0c0ed9d4(int, int, int);
int FUN_0c0fddbe(int, int, int);
int FUN_0c10121c(int, int, int);
int vmsfs_c_progress(int, int, int, int);
int vmsfs_unmount(int);
int FUN_0c103874(int, int);
int FUN_0c104742(int);
int FUN_0c104962(int, int, int);
int write_fat(int);
int check_isopen(void);
int FUN_0c10b7b0(int, int, int, int, int);
int FUN_0c10bbb4(int);
int kmiPurgeMemory(int, int);
int vmsio_block_write(int, int, int);
int vmsio_isready(int);
int vmsio_ismount(int);
int fmMngNum2Bit(int, int, int);
int fmMngChkEmptyData(int, int);
extern int _builtin_get_imask(void);
int buIsFormat(int);
int memset(int, int, int);
int thunk_math_mat_get_translate(int, int);
int vmsfs_fread1(int a4, int a5);
int fx_spawn_036fe4(int a4, int a5);
int fx_spawn_03cf50(int a4, int a5);
float pl_launch_jump(int a4);
int FUN_0c0a2cc4(int a4);
int FUN_0c1012f4(int a4, int a5, int a6);
int opt_page2_spawn_bg_scroll(int a4);
int fx_spawn_03dca8(int a4);
int fx_spawn_03ef18(int a4, int a5);
int vmsfs_fgetinfo(int a4, int a5, int a6);
int obj_spawn_0367e4(int a4, int a5);
int FUN_0c1137d4(int a4);
int FUN_0c02c2d0(int a4);
int fx_spawn_048aa0(int a4);
int FUN_0c08c114(int a4, int a5, int a6, int a7);
int savedata_reset_default(void);
int snd_bank_load(int a4, int a5, int a6, int a7);
int FUN_0c0f4328(int a4, int a5, int a6, int a7, int a8, int a9);
int kmiCopyToFrameBuffer(int a4, int a5, int a6);
int ADXB_ExecOneSpsd(int a4, int a5, int a6, int a7);
int ending_spawn_obj_t03(int a4);
int FUN_0c02002a(int a4, int a5, int a6, int a7);
int ui_project_fighter_to_screen(int a4, int a5);
int fx_spawn_0498c4(int a4);
int obj_force_owner_state27(int a4, int a5);
int nlRotateAxeSC(int a4, float f4, float f5);
int vmsfs_fdelete(int a4, int a5);
int FUN_0c113fd2(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13);
int fx_spawn_0396bc(int a4, int a5);
int FUN_0c0ca050(int a4, int a5, int a6, float f4);
int FUN_0c01e7ac(int a4, int a5, int a6, int a7);
int FUN_0c05d0d8(int a4, int a5, int a6, int a7);
int FUN_0c0d7758(float f4);

int vmsfs_fread1(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t6;

    t1 = vmsio_isready((*(int *)((a4 + 0x28))));
    if (t1 == 0) {
        vmsfs_unmount((*(int *)((a4 + 0x28))));
        t1 = 0xFFFFFF01;
    } else {
        t2 = vmsio_ismount((*(int *)((a4 + 0x28))));
        t1 = 0xFFFFFF01;
        if (t2 != 0) {
            t2 = 0xFFFFFF01;
            if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0xC80DBD0))) == 0) {
            } else {
                t4 = buIsFormat((*(int *)((a4 + 0x28))));
                t2 = 0xFFFFFF03;
                if ((int)t4 >= 0) {
                    t4 = *(int *)((a4 + 0x28));
                    if (((((struct o40_int *)(a4))->v)) == 0xFFFA) {
                        t6 = 0x0;
                        if ((*(int *)((a4 + 0x34))) != 0) {
                            t6 = 0xFFFF0000;
                        }
                        t2 = t6;
                    } else {
                        t6 = 0x0;
                        if ((*(int *)((a4 + 0x34))) != 0) {
                            t6 = 0xFFFFFF41;
                            if ((((((struct o40_int *)(a4))->v)) != 0xFFFC) && (t0 = (((struct o40_int *)(a4))->v), t0 != 0xFFFF)) {
                                t6 = (FUN_0c10121c(t4, ((((struct o40_int *)(a4))->v)), a5));
                            }
                        }
                        t2 = t6;
                    }
                }
            }
            t1 = t2;
        }
    }
    return t1;
}

int FUN_0c1012f4(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    int t2;
    register int t3;

    t1 = (*(int *)0xC80578C);
    for (;;) {
        t2 = vmsio_block_write(a4, a5, a6);
        if (t2 != 0) {
            if (((*(int *)0xC15B0A8) != 0) && (t2 == 0xFFFFFF30)) {
                return 0xFFFFFF01;
            }
            *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = ((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34))) + 0x1);
            t3 = t1 == 0;
            t1 = (t1 - 1);
            if (t3 && (t0 = *(int *)0xC80578C, t0 != -1)) {
                break;
            }
            continue;
        }
        break;
    }
    t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30));
    t1 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34));
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = (t0 + 0x1);
    vmsfs_c_progress(a4, (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x8))), ((t0 + 0x1) - 1), t1);
    t0 = 0x0;
    if (t2 != 0) {
        t1 = 0xFFFFFF01;
        if (t2 != 0xFFFFFF01) {
            t3 = 0xFFFFFF40;
            if (t2 != 0xFFFFFF40) {
                t3 = 0xFFFF0000;
            }
            t1 = t3;
        }
        t0 = t1;
    }
    return t0;
}

int vmsfs_fgetinfo(int a4, int a5, int a6)
{
    int stk[14];
    register int t44;
    register int t1;
    register int t3;
    register int t6;
    register int t8;
    register int t10;
    int t4;
    register int t5;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = (a4 * 0x148);
    *(unsigned int *)(((int)stk + 0)) = ((a4 * 0x148) + 0xC80DBC8);
    t44 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t44 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t44 = 0xFFFFFF01;
            if ((t3 != 0) && (t4 = *(int *)(((int)stk + 8)), t5 = *(signed char *)(((t4 + 0xC80DBC8) + 0x8)), t5 != 0)) {
                t6 = buIsFormat(a4);
                t44 = 0xFFFFFF03;
                if ((int)t6 < 0) {
                } else {
                    t8 = FUN_0c104962(a4, (*(int *)(((int)stk + 4))), (((int)stk + 0) + 0xC));
                    t44 = 0xFFFFFF05;
                    if ((int)t8 < 0) {
                    } else {
                        t10 = *(int *)(((*(int *)(((int)stk + 0))) + 0x1C));
                        *(volatile int *)(((int)stk + 52));
                        *(volatile int *)((t10 + 0x2C));
                        t44 = t8;
                    }
                }
            }
        }
    }
    return t44;
}

int FUN_0c1137d4(int a4)
{
    int stk[1];

    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_6 = a4;
    v0_0 = (v0_6);
    v0_1 = ((*(int *)((v0_6 + 0x4))));
    if (((*(short *)((v0_6 + 0x2))) != 0)) goto L_C11387A;
    v0_3 = *(int *)((v0_0 + 0xC));
    v0_4 = FUN_0c0ed9d4(v0_1, v0_3, 0x40);
    v0_2 = (0xC0ED9D4);
    v0_2 = (v0_1);
    v0_3 = ((v0_3 + 0x40));
    v0_6 = (v0_4);
    if ((v0_4 != 64)) goto L_C113870;
    v0_6 = *(int *)((v0_0 + 0x14));
    v0_4 = (0x0);
    v0_2 = ((v0_2 + 0x40));
    v0_5 = (v0_6);
    if (((int)v0_6 <= 0)) goto L_C11383E;
    L_C113810:;
    v0_6 = (0xFFFF);
    if (((unsigned short)(*(short *)((v0_3 + 0x0))) == 0xFFFF)) goto L_C113836;
    v0_6 = (fmMngChkEmptyData(v0_0, v0_3)) != 0;
    if (v0_6) goto L_C113836;
    v0_7 = FUN_0c0ed9d4(v0_2, v0_3, 0x40);
    v0_6 = (v0_7);
    if ((v0_7 != 64)) goto L_C113870;
    v0_4 = ((v0_4 + 0x1));
    v0_2 = ((v0_2 + 0x40));
    L_C113836:;
    v0_6 = (int)(v0_5 - 1) > 0;
    v0_3 = ((v0_3 + 0x40));
    v0_5 = ((v0_5 - 1));
    if (v0_6) goto L_C113810;
    L_C11383E:;
    *(unsigned int *)(((int)stk + 0)) = (((((*(int *)((v0_0 + 0x14))) + 0x1) << 2) << 2) << 2);
    fmMngNum2Bit(v0_4, v0_3, (*(int *)((v0_0 + 0x18))));
    v0_1 = (FUN_0c0ed9d4(((*(int *)(((int)stk + 0))) + v0_1), v0_3, ((((*(int *)((v0_0 + 0x18))) << 2) << 2) << 2))) == ((((*(int *)((v0_0 + 0x18))) << 2) << 2) << 2);
    if (!(v0_1)) goto L_C113870;
    *(unsigned int *)((v0_0 + 0x10)) = v0_4;
    v0_0 = (0x0);
    goto L_C11387C;
    L_C113870:;
    v0_0 = (0xFFFFFFFE);
    L_C11387C:;
    return v0_0;
    L_C11387A:;
    v0_0 = (0xFFFFFFFA);
    goto L_C11387C;
}

int snd_bank_load(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t2;
    register int t33;
    register int t3;
    register int t10;
    register int t13;
    register int t19;
    register int t25;
    register int t26;
    register int t27;
    register int t28;
    register int t30;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    t2 = snd_bank_check_slot((*(int *)(((int)stk + 24))), (*(int *)(((int)stk + 20))), a6, a7);
    *(unsigned int *)(((int)stk + 4)) = t2;
    t33 = t2;
    if (t2 == 0) {
        t3 = *(int *)(((int)stk + 24));
        *(unsigned int *)(((int)stk + 12)) = (*(int *)((t3 + 0x8)));
        *(unsigned int *)(((int)stk + 8)) = (*(int *)((t3 + 0x4)));
        *(unsigned int *)(((int)stk + 16)) = (snd_bank_place((*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), ((int)stk + 0)));
        for (;;) {
            t10 = snd_send_command(0x18A0);
            if (t10 != -1) {
                break;
            }
        }
        for (;;) {
            if (((((struct o4_int *)0xA08000B0)->v)) != 0) {
                break;
            }
        }
        t13 = *(int *)(((int)stk + 0));
        if (t13 != 0) {
            snd_driver_memmove_start((*(int *)(((int)stk + 16))), ((*(int *)(((int)stk + 16))) + (*(int *)(((int)stk + 12)))), (*(int *)(((int)stk + 0))));
            for (;;) {
                t19 = snd_driver_memmove_busy();
                if (t19 == 0) {
                    break;
                }
            }
        } else {
            t25 = t13;
        }
        t26 = (*(int *)(((int)stk + 16)));
        t27 = (*(int *)(((int)stk + 24)));
        t28 = 0x0;
        for (;;) {
            if ((unsigned int)t28 >= (unsigned int)((unsigned int)(*(int *)(((int)stk + 12))) >> 2)) {
                break;
            }
            t30 = t26;
            t26 = (t26 + 0x4);
            t25 = *(int *)((t27 + 0x0));
            t27 = (t27 + 0x4);
            *(unsigned int *)((t30 + 0x0)) = t25;
            t28 = (t28 + 0x1);
        }
        (((struct o0_uint *)0xA08000B0)->v) = 0x1;
        for (;;) {
            if (((((struct o4_int *)0xA08000B0)->v)) == 0) {
                break;
            }
        }
        (((struct o0_uint *)0xA08000B0)->v) = 0x0;
        t33 = 0x0;
    }
    return t33;
}

int FUN_0c0f4328(int a4, int a5, int a6, int a7, int a8, int a9)
{
    register int t0;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0xFFFFFFFE;
    if (((*(int *)((a7 + 0x0))) & 0x100) != 0) {
        t0 = 0xFFFFFFFE;
        if ((unsigned char)(*(signed char *)((a6 + 0x4))) != 8) {
        } else {
            t2 = *(int *)((a6 + 0x8));
            if (a9 != 0) {
                *(unsigned int *)((a9 + 0x0)) = (((unsigned int)((unsigned int)(unsigned char)(*(signed char *)(((t2 + 0x8) + 0x0))) >> 2) >> 2) & 0xF);
            }
            t3 = *(signed char *)(((t2 + 0x8) + 0x1));
            *(unsigned char *)((a8 + 0x0)) = (((unsigned int)(unsigned char)(*(signed char *)(((t2 + 0x8) + 0x0))) >> 2) & 0x3);
            *(unsigned char *)((a8 + 0x1)) = ((*(signed char *)(((t2 + 0x8) + 0x0))) & 0x3);
            t4 = 0x0;
            if ((0x80 & (unsigned char)t3) != 0) {
                t4 = 0x1;
            }
            *(unsigned char *)((a8 + 0x2)) = t4;
            t4 = 0x0;
            if ((0x40 & (unsigned char)t3) != 0) {
                t4 = 0x1;
            }
            *(unsigned char *)((a8 + 0x3)) = t4;
            t4 = 0x0;
            if ((0x20 & (unsigned char)t3) != 0) {
                t4 = 0x1;
            }
            *(unsigned char *)((a8 + 0x4)) = t4;
            t4 = 0x0;
            if ((0x10 & (unsigned char)t3) != 0) {
                t4 = 0x1;
            }
            *(unsigned char *)((a8 + 0x5)) = t4;
            if ((0xF & (unsigned char)t3) != 0) {
                if ((0xF & (unsigned char)t3) != 1) {
                    if ((0xF & (unsigned char)t3) != 15) {
                        *(unsigned char *)((a8 + 0x6)) = 0xFF;
                        t3 = 0xFF;
                    } else {
                        *(unsigned char *)((a8 + 0x6)) = 0x0;
                        t3 = 0x0;
                    }
                    t4 = t3;
                } else {
                    *(unsigned char *)((a8 + 0x6)) = (*(signed char *)((((t2 + 0x8) + 0x2) + 0x0)));
                    t4 = (*(signed char *)((((t2 + 0x8) + 0x2) + 0x0)));
                }
                t3 = t4;
            } else {
                *(unsigned char *)((a8 + 0x6)) = (*(signed char *)((((t2 + 0x8) + 0x2) + 0x0)));
                t3 = (*(signed char *)(((t2 + 0x8) + 0x3)));
            }
            *(unsigned char *)((a8 + 0x7)) = t3;
            t0 = 0x0;
        }
    }
    return t0;
}

int kmiCopyToFrameBuffer(int a4, int a5, int a6)
{
    int stk[2];
    register int t2;

    if (((a4 & 0x1F) == 0) && (((a5 & 0x1F) == 0) && ((_builtin_get_imask()) == 0))) {
        kmiPurgeMemory(a5, a6);
        if ((0xFFFFFFE0 & a6) != 0) {
            for (;;) {
                *(int *)((int)stk + 0) = ((int)stk + 4);
                t2 = FUN_0c10b7b0((0x11000000 + a4), a5, (0xFFFFFFE0 & a6), 0x18, ((int)stk + 4));
                if (t2 != 0x100) {
                    break;
                }
            }
            (((struct o0_uint *)0xC8173E4)->v) = (*(int *)(((*(int *)(((int)stk + 4))) + 0x0)));
        } else {
            (((struct o0_uint *)0xC8173E4)->v) = 0x0;
        }
        if ((a6 & 0x1F) != 0) {
            FUN_0c0fddbe((0xA4000000 + (a4 + (0xFFFFFFE0 & a6))), (a5 + (0xFFFFFFE0 & a6)), (a6 & 0x1F));
        }
        if (((((struct o4_int *)0xC8173E4)->v)) == 1) {
            FUN_0c10bbb4(((((struct o0_int *)0xC8173E4)->v)));
        }
    } else {
        FUN_0c0fddbe((0xA4000000 + a4), a5, a6);
    }
    return 0x1;
}

int ADXB_ExecOneSpsd(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = (((struct o50_int *)(a4))->v);
    if ((*(int *)((a4 + 0x4))) == 1) {
        t1 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        if (t1 == 0) {
            t1 = ((int (*)(int, int, int, int))(((((struct o88_int *)(a4))->v))))(((((struct o8C_int *)(a4))->v)), ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t1 = *(int *)(((a4 + 0x50) + 0x20));
            t2 = *(int *)(((a4 + 0x50) + 0x18));
            t3 = *(int *)(((a4 + 0x50) + 0x4));
            t4 = (t2 - t1);
            if ((int)(t2 - t1) > (int)(*(int *)(((a4 + 0x50) + 0x24)))) {
                t4 = (*(int *)(((a4 + 0x50) + 0x24)));
            }
            t1 = *(int *)(((a4 + 0x50) + 0x14));
            t2 = t4;
            if ((int)t4 > (int)t3) {
                t2 = (*(int *)(((a4 + 0x50) + 0x4)));
            }
            t3 = *(int *)(((a4 + 0x50) + 0x20));
            if ((*(signed char *)((a4 + 0xE))) == 2) {
                ADXERR_CallErrFunc(0xC15B730);
            }
            if ((int)t2 > 0) {
                t4 = 0x0;
                t5 = 0x0;
                for (;;) {
                    t5 = (t5 + 0x1);
                    *(unsigned short *)(((t1 + (t3 << 1)) + t4)) = (*(short *)((t0 + t4)));
                    t4 = (t4 + 0x2);
                    if ((int)t5 >= (int)t2) {
                        break;
                    }
                }
            }
            (((struct oA0_uint *)(a4))->v) = t2;
            (((struct oA4_uint *)(a4))->v) = ((t2 * (*(signed char *)((a4 + 0xE)))) << 1);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
        }
    }
    t0 = *(int *)((a4 + 0x4));
    t1 = t0;
    if (t0 == 2) {
        t0 = ((int (*)(int, int, int, int))(((((struct o90_int *)(a4))->v))))(((((struct o94_int *)(a4))->v)), ((((struct oA4_int *)(a4))->v)), ((((struct oA0_int *)(a4))->v)), a7);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t1 = t0;
    }
    return t1;
}

int nlRotateAxeSC(int a4, float f4, float f5)
{
    int stk[16];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u10;
    register float u12;
    register float u14;
    register float u16;
    register float u18;
    register float u19;
    register float u21;
    register float u23;
    register float u25;
    register float u26;

    u0 = *(float *)((a4 + 0x0));
    u1 = (((struct o4_float *)(a4))->v);
    u2 = (((struct o8_float *)(a4))->v);
    u3 = ((1.0f - f5) * u0);
    u5 = ((1.0f - f5) * u1);
    u6 = ((1.0f - f5) * u0);
    u7 = (1.0f - ((u0 * u0)));
    u8 = (u0 * u0);
    u8 = u8 + f5 * u7;
    *(float *)(((int)stk + 0)) = u8;
    u10 = (u3 * u1);
    u12 = (f4 * u2);
    *(float *)(((int)stk + 4)) = (((f4 * u2)) + u10);
    u14 = (f4 * u1);
    u16 = (u6 * u2);
    *(float *)(((int)stk + 8)) = (((u6 * u2)) - u14);
    *(float *)(((int)stk + 16)) = (((u3 * u1)) - u12);
    u18 = (1.0f - ((u1 * u1)));
    u19 = (u1 * u1);
    u19 = u19 + f5 * u18;
    u21 = (u5 * u2);
    u23 = (f4 * u0);
    *(float *)(((int)stk + 20)) = u19;
    *(float *)(((int)stk + 24)) = (((f4 * u0)) + u21);
    *(float *)(((int)stk + 32)) = (((f4 * u1)) + u16);
    *(float *)(((int)stk + 36)) = (((u5 * u2)) - u23);
    u25 = (1.0f - ((u2 * u2)));
    u26 = (u2 * u2);
    u26 = u26 + f5 * u25;
    *(float *)(((int)stk + 40)) = u26;
    (((struct o38_float *)(((int)stk + 0)))->v) = 0.0f;
    (((struct o34_float *)(((int)stk + 0)))->v) = 0.0f;
    (((struct o30_float *)(((int)stk + 0)))->v) = 0.0f;
    (((struct o2C_float *)(((int)stk + 0)))->v) = 0.0f;
    (((struct o1C_float *)(((int)stk + 0)))->v) = 0.0f;
    (((struct oC_float *)(((int)stk + 0)))->v) = 0.0f;
    *(float *)(((int)stk + 60)) = 1.0f;
    return (nlMultiMatrix(((int)stk + 0)));
}

int vmsfs_fdelete(int a4, int a5)
{
    int t0;
    register int t1;

    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
    t1 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = (*(int *)((((((t1 << 2) + t1) << 2) << 2) + 0xC34721C)));
    if ((*(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t1 = vmsio_ismount(a4);
        if ((t1 != 0) && (t0 = *(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x8)), t0 != 0)) {
            t0 = buIsFormat(a4);
            if ((int)t0 < 0) {
                return 0xFFFFFF03;
            }
            t0 = check_isopen();
            if ((int)t0 < 0) {
                return 0xFFFFFF0B;
            }
            t0 = FUN_0c103874(a4, a5);
            if ((int)t0 >= 0) {
                t1 = FUN_0c104742(a4);
                if ((int)t1 < 0) {
                    return t1;
                }
                return write_fat(a4);
            }
            return t0;
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int FUN_0c113fd2(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
{
    int stk[3];
    register int t0;
    register int t6;
    register int t23;

    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c0e60ce(a4, ((int)stk + 0));
    *(unsigned short *)(((*(int *)(((int)stk + 4))) + 0x0)) = (*(int *)(((int)stk + 0)));
    *(unsigned char *)((a10 + 0x0)) = (FUN_0c0e6834(t0, 0x4, 0x0));
    *(unsigned int *)((a11 + 0x0)) = (FUN_0c0e6834(t0, 0x0, 0x0));
    *(unsigned char *)((a8 + 0x0)) = (FUN_0c0e6834(t0, 0x1, 0x0));
    t6 = *(signed char *)((a8 + 0x0));
    switch (t6) {
    case 4:
        *(unsigned char *)((a9 + 0x0)) = (*(signed char *)((a10 + 0x0)));
        *(unsigned int *)((a13 + 0x0)) = 0x2;
        *(unsigned int *)((a12 + 0x0)) = (FUN_0c0e6834(t0, 0x2, 0x0));
        break;
    case 8:
        *(unsigned char *)((a9 + 0x0)) = (*(signed char *)((a10 + 0x0)));
        *(unsigned int *)((a13 + 0x0)) = 0x1;
        *(unsigned int *)((a12 + 0x0)) = (FUN_0c0e6834(t0, 0x2, 0x0));
        break;
    case 16:
        *(unsigned char *)((a9 + 0x0)) = ((*(signed char *)((a10 + 0x0))) << 1);
        *(unsigned int *)((a13 + 0x0)) = 0x1;
        *(unsigned int *)((a12 + 0x0)) = (FUN_0c0e6834(t0, 0x2, 0x0));
        break;
    }
    *(unsigned char *)((a9 + 0x0)) = 0x2;
    *(unsigned int *)((a13 + 0x0)) = 0x1;
    t23 = FUN_0c0e6834(t0, 0x3, 0x0);
    *(unsigned int *)((a12 + 0x0)) = (((int)((unsigned int)((int)((unsigned int)t23 + (unsigned int)0x0)) + ((((int)0x0 > (int)t23)) ? 1u : 0u))) >> 1);
    *(unsigned char *)(((*(int *)(((int)stk + 8))) + 0x0)) = 0xFFFFFFFF;
    return 0x0;
}

