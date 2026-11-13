/* Straight-line functions with calls and guards (batch gen_b): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o30_int { char p[0x30]; int v; };
struct o308_int { char p[0x308]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3E_ushort { char p[0x3E]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o7207_uchar { char p[0x7207]; unsigned char v; };
struct o720C_short { char p[0x720C]; short v; };
struct o7225_uchar { char p[0x7225]; unsigned char v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o7254_float { char p[0x7254]; float v; };
struct o7258_float { char p[0x7258]; float v; };
struct o72A8_int { char p[0x72A8]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
int save_reset_all_data(void);
int vmu_check_step(int, int, int, int, int, int, int, int, int, int, int);
int ending_exec_command(int);
int FUN_0c01b4d6(int);
float FUN_0c0211d0(float, float, float, float);
int game_draw_frame(void);
int FUN_0c055562(void);
int FUN_0c0555c4(void);
int game_reset_objects(void);
int obj_create(int, int, int);
int FUN_0c05f2d4(int, int);
int FUN_0c05f952(void);
int FUN_0c06233a(int, int, int);
int FUN_0c08c864(int);
int FUN_0c08e3bc(int, int);
int FUN_0c08e3f2(int, int);
int FUN_0c095472(void);
int pl_reset_combo_counter(int);
int pl_stick_dir_angle(int);
int FUN_0c0a2f66(int);
int bgm_stop_streams(void);
int bgm_set_volume(int, int);
int bgm_play_hen_00(void);
int bgm_play_hen_01(void);
int FUN_0c0a3f30(int);
int cam_init_records(void);
int cam_update_view_matrices(int, int, int, int, int, int, int, int);
int cam_request_mode(int, int, int);
int gfx_set_background_color(int, int, int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0e5d22(int);
int FUN_0c0e6fe8(int);
int FUN_0c0ed9d4(int, int, int);
int gdFsReadWG(int, int, int);
int FUN_0c0fcea0(int, int);
int FUN_0c0fddce(int);
int gdFsGet1DirEnt(int, int);
int vmsfs_unmount(int);
int FUN_0c10274c(int, int);
int vmsfs_xcreate(int, int, int, int);
int direntry(int, int);
int FUN_0c10563c(int, int, int, int, int, int);
int kmiReadRegister(int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiCopyFromFrameBuffer(int, int, int);
int vmsio_isready(int);
int vmsio_ismount(int);
int fmMngMcpy4(int, int, int);
int fmMngNum2Bit(int, int, int);
int FUN_0c11568c(int, int);
int buIsFormat(int);
int buUnmount(int);
int memset(int, int, int);
int fmMngMcpy(void);
void vmu_unmount_current(int a4, int a5, int a6, int a7);
int FUN_0c023a52(int a4, int a5, int a6, int a7);
float FUN_0c05d254(int a4);
float pl_jack_mode12_phase0(int a4, float f4, float f5);
int stage_gimmick_23_spawn_b(int a4, int a5);
int stage_gimmick_24_spawn_b(int a4, int a5);
int vmsfs_save_exec_file(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c113890(int a4);
int fx_spawn_034dd0(int a4, int a5);
int fx_spawn_03dfd0(int a4, int a5);
int FUN_0c055686(void);
int FUN_0c085782(int a4);
int FUN_0c0ed7e4(int a4);
int gdFsGetDirEnt(int a4, int a5, int a6, int a7);
int vmsfs_findnext(int a4, int a5, int a6, int a7);
int ending_spawn_obj_typed(int a4, int a5, int a6, int a7);
int ending_script_update(int a4);
int FUN_0c08a6e4(int a4);
int FUN_0c09c5f4(int a4);
int FUN_0c0fb236(int a4);
int FUN_0c0fd560(int a4, int a5, int a6);
int FUN_0c10d114(void);
int FUN_0c01ab4c(int a4);
int FUN_0c01b144(int a4, int a5);
int FUN_0c08e4bc(int a4);
int game_play_state_07(void);
int FUN_0c0e6518(int a4);
int vmu_check_task(void);
int FUN_0c0226da(int a4, int a5, int a6, int a7);
int ai_script_branch(int a4, int a5);
int FUN_0c0a18f8(int a4, int a5, int a6, int a7);
int FUN_0c10dabe(int a4, int a5, int a6);

int vmsfs_save_exec_file(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[5];
    register int t0;
    register int t5;
    register int t8;
    register int t9;

    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    t0 = FUN_0c10274c(a4, 0x1);
    if ((int)t0 < 0) {
        return t0;
    }
    if ((unsigned int)t0 < (unsigned int)a7) {
        return 0xFFFFFF04;
    }
    if ((0x80000000 & a9) != 0) {
        *(int *)((int)stk + 4) = a9;
        *(int *)((int)stk + 0) = a8;
        return (FUN_0c10563c(a4, (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))), a7, a8, a9));
    }
    t5 = vmsfs_xcreate(a4, (*(int *)(((int)stk + 16))), a8, ((int)stk + 8));
    if ((int)t5 >= 0) {
        *(unsigned char *)(((*(int *)(((int)stk + 8))) + 0x1)) = a9;
        *(volatile int *)(((int)stk + 12));
        *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
        t8 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x4));
        t9 = *(int *)((((((t8 << 2) + t8) << 2) << 2) + 0xC347230));
        *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = (t9 + a7);
        if ((unsigned int)0x0 < (unsigned int)a7) {
            return (t9 + a7);
        }
        return ((int (*)(int, int, int, int))(0xC105602))(((a4 * 0x148) + 0xC80DBC8), a5, a6, a7);
    }
    return ((int (*)(void))(0xC10560C))();
}

int FUN_0c113890(int a4)
{
    register int t0;
    register int t3;
    register int t4;

    t0 = 0xFFFFFFFA;
    if ((*(short *)((a4 + 0x2))) == 0) {
        (((struct o34_ushort *)(a4))->v) = (*(int *)((a4 + 0x28)));
        *(volatile int *)((a4 + 0x30));
        fmMngMcpy();
        (((struct o3E_ushort *)((a4 + 0x34)))->v) = (FUN_0c11568c(0x3E, (a4 + 0x34)));
        fmMngMcpy4((a4 + 0x34), ((*(int *)((a4 + 0xC))) + (((((*(int *)((a4 + 0x28))) + 0x1) << 2) << 2) << 2)), 0x40);
        t0 = 0xFFFFFFF6;
        if ((int)(*(int *)((a4 + 0x10))) >= (int)(*(int *)((a4 + 0x14)))) {
        } else {
            t0 = *(int *)((a4 + 0x14));
            fmMngNum2Bit(((*(int *)((a4 + 0x10))) + 0x1), ((*(int *)((a4 + 0xC))) + ((((t0 + 0x1) << 2) << 2) << 2)), (*(int *)((a4 + 0x18))));
            t3 = FUN_0c0ed9d4(((*(int *)((a4 + 0x4))) + ((((t0 + 0x1) << 2) << 2) << 2)), ((*(int *)((a4 + 0xC))) + ((((t0 + 0x1) << 2) << 2) << 2)), ((((*(int *)((a4 + 0x18))) << 2) << 2) << 2));
            t0 = 0xFFFFFFFE;
            if (t3 == ((((*(int *)((a4 + 0x18))) << 2) << 2) << 2)) {
                t3 = *(int *)((a4 + 0x10));
                *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + 0x1);
                t4 = FUN_0c0ed9d4(((*(int *)((a4 + 0x4))) + ((((t3 + 0x1) << 2) << 2) << 2)), (a4 + 0x34), 0x40);
                t3 = 0x0;
                if (t4 != 64) {
                    t3 = 0xFFFFFFFE;
                }
                t0 = t3;
            }
        }
    }
    return t0;
}

int FUN_0c0ed7e4(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)((((t0 * 0x34) + ((*(int *)0xC346B74) + 0x4)) + 0x0)) = t0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC346B74) + 0x4)) + 0x28)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC346B74) + 0x4)) + 0x2C)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC346B74) + 0x4)) + 0x30)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC346B74) + 0x4)) + 0x4)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC346B74) + 0x4)) + 0x8)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC346B74) + 0x4)) + 0xC)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC346B74) + 0x4)) + 0x10)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC346B74) + 0x4)) + 0x14)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC346B74) + 0x4)) + 0x18)) = 0x3;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC346B74) + 0x4)) + 0x1C)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC346B74) + 0x4)) + 0x20)) = 0x0;
    *(unsigned int *)(((((((*(int *)((a4 + 0x0))) << 2) << 2) << 1) + (*(int *)(((*(int *)0xC346B74) + 0x0)))) + 0x14)) = 0x0;
    return 0x0;
}

int gdFsGetDirEnt(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t36;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t8;
    register int t16;
    register int t37;
    register int t38;
    register int t39;
    register int t7;
    register int t9;
    int t10;
    int t18;
    register int t24;
    int t25;
    register int t26;
    int t27;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t36 = a4;
    if ((*(int *)((a6 + 0x8))) != a5) {
        *(unsigned int *)((a6 + 0x8)) = (*(int *)(((int)stk + 0)));
        t3 = *(int *)((a6 + 0x4));
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 4))) + 0x800);
        t4 = a4;
        t5 = a7;
        t6 = (a6 + 0x10);
        t8 = 0x0;
        for (;;) {
            if ((int)t5 <= 0) {
                *(unsigned int *)((a6 + 0x0)) = t8;
                if ((t8 == t3) && ((t5 != 0) && ((t5 != 0x800) || ((t9 = *(int *)(((int)stk + 8)), (unsigned int)t7 < (unsigned int)t9) && (t10 = *(signed char *)((t7 + 0x0)), t10 != 0))))) {
                    *(unsigned int *)((a6 + 0x8)) = 0x0;
                    return ((int (*)(int, int, int, int))(0xC0FE5EC))(t4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0FE5EC))(t4, a5, a6, a7);
            }
            t4 = (*(int *)(((int)stk + 0)));
            t4 = (gdFsReadWG(t4, 0x1, (*(int *)(((int)stk + 4)))));
            if (t4 != 0) {
                break;
            }
            t7 = (*(int *)(((int)stk + 4)));
            if ((int)t8 < (int)t3) {
                for (;;) {
                    t4 = t7;
                    t16 = gdFsGet1DirEnt(t4, t6);
                    t4 = t16;
                    if (t16 != 0) {
                        if ((t8 == 0) && (t18 = *(int *)((t6 + 0x4)), t18 != t5)) {
                            t5 = (*(int *)((t6 + 0x4)));
                        }
                        t7 = (t7 + t4);
                        t6 = (t6 + 0x2C);
                        t8 = (t8 + 0x1);
                        if (((unsigned int)t7 < (unsigned int)(*(int *)(((int)stk + 8)))) && ((int)t8 < (int)t3)) continue;
                        break;
                    }
                    break;
                }
                if ((int)t8 < (int)t3) {
                    t5 = (t5 - 0x800);
                    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
                    continue;
                }
                *(unsigned int *)((a6 + 0x0)) = t8;
                if ((t8 == t3) && ((t5 != 0) && ((t5 != 0x800) || ((t24 = *(int *)(((int)stk + 8)), (unsigned int)t7 < (unsigned int)t24) && (t25 = *(signed char *)((t7 + 0x0)), t25 != 0))))) {
                    *(unsigned int *)((a6 + 0x8)) = 0x0;
                    return ((int (*)(int, int, int, int))(0xC0FE5EC))(t4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0FE5EC))(t4, a5, a6, a7);
            }
            *(unsigned int *)((a6 + 0x0)) = t8;
            if ((t8 == t3) && ((t5 != 0) && ((t5 != 0x800) || ((t26 = *(int *)(((int)stk + 8)), (unsigned int)t7 < (unsigned int)t26) && (t27 = *(signed char *)((t7 + 0x0)), t27 != 0))))) {
                *(unsigned int *)((a6 + 0x8)) = 0x0;
                return ((int (*)(int, int, int, int))(0xC0FE5EC))(t4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0FE5EC))(t4, a5, a6, a7);
        }
        *(unsigned int *)((a6 + 0x8)) = 0x0;
        t36 = t4;
    } else {
        t37 = a5;
        t38 = a6;
        t39 = a7;
    }
    return ((int (*)(int, int, int, int))(0xC0FE5EC))(t36, t37, t38, t39);
}

int vmsfs_findnext(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t1 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x2))) != 0) {
        t2 = vmsio_isready(a4);
        if (t2 == 0) {
            vmsfs_unmount(a4);
            t2 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t4 = 0xFFFFFF01;
            if ((t3 != 0) && (t0 = *(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x8)), t0 != 0)) {
                t0 = buIsFormat(a4);
                t3 = 0xFFFFFF03;
                if ((int)t0 >= 0) {
                    t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x18));
                    t5 = (direntry(a4, (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x18)))));
                    t6 = t0;
                    for (;;) {
                        t7 = *(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x30));
                        if ((int)t6 >= (int)t7) {
                            if (0x0 == 0) {
                                return 0xFFFFFF05;
                            }
                            t6 = t5;
                            t5 = a5;
                            t6 = (t6 + 0x4);
                            t8 = t7;
                            t7 = (t5 + 0xC);
                            for (;;) {
                                if ((unsigned int)t5 >= (unsigned int)t7) {
                                    break;
                                }
                                t8 = (*(signed char *)((t6 + 0x0)));
                                t6 = (t6 + 0x1);
                                *(unsigned char *)((t5 + 0x0)) = t8;
                                t5 = (t5 + 0x1);
                            }
                            *(unsigned char *)((t7 + 0x0)) = 0x0;
                            return 0x0;
                        }
                        t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x18));
                        *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x18)) = (t0 + 0x1);
                        t7 = *(signed char *)((t5 + 0x0));
                        if (((unsigned char)t7 != 51) && ((unsigned char)t7 != 0xCC)) {
                            t5 = (t5 + 0x20);
                            t6 = (t6 + 0x1);
                            continue;
                        }
                        break;
                    }
                    t6 = 0xFFFFFF05;
                    if (0x1 != 0) {
                        t7 = (t0 + 0x1);
                        t0 = a5;
                        t8 = (t5 + 0x4);
                        for (;;) {
                            if ((unsigned int)t0 >= (unsigned int)(a5 + 0xC)) {
                                break;
                            }
                            t7 = (*(signed char *)((t8 + 0x0)));
                            t8 = (t8 + 0x1);
                            *(unsigned char *)((t0 + 0x0)) = t7;
                            t0 = (t0 + 0x1);
                        }
                        *(unsigned char *)(((a5 + 0xC) + 0x0)) = 0x0;
                        t6 = 0x0;
                    }
                    t3 = t6;
                }
                t4 = t3;
            }
            t2 = t4;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0fb236(int a4)
{
    register int t4;
    register int t5;
    int t1;
    register int t7;
    register int t8;
    register int t38;
    register float u39;
    register float u34;
    register float u28;
    register int t21;

    t4 = a4;
    t5 = 0x0;
    if ((((((struct o0_int *)0xC816FC8)->v)) & 2) != 0) {
        t1 = kmiReadRegister(0x10C);
        t4 = t1;
        t5 = (0x3FF & t1);
    }
    t7 = (((struct o0_int *)0xC817014)->v);
    t8 = (((struct o8_int *)0xC817014)->v);
    t38 = (t8 + t7);
    u39 = 1.0f;
    if (((((((struct o1C_int *)0xC816FC8)->v)) & 0x1) != 1) || (0x1 == 0)) {
        t38 = (t8 + t7);
        u34 = 1.0f;
        if (((((((struct o1C_int *)0xC816FC8)->v)) & 0x1) != 1) && ((t21 = (((struct o1C_int *)0xC816FC8)->v), (t21 & 44) != 0) && (0x1 != 0))) {
            u28 = 0.5f;
            if ((((((struct o1C_int *)0xC816FC8)->v)) & 32) != 0) {
                u28 = 1.0f;
            }
            t38 = ((t8 + t7) + (t8 + t7));
            u34 = u28;
        }
        u39 = u34;
    }
    *(volatile int *)0xC8172A8;
    return ((int (*)(int, int, int, int, float, float))(0xC0FB2FA))(t4, t5, t38, 0x1, u39, 1.0f);
}

int FUN_0c0fd560(int a4, int a5, int a6)
{
    int stk[5];
    register int t0;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t30;
    register int t31;
    register int t32;

    t0 = FUN_0c0fcea0(a6, a6);
    if ((int)a6 <= (int)0x2) {
        *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x4);
        kmiCopyFromFrameBuffer((((int)stk + 0) + 0x4), (*(int *)((a4 + 0x1C))), 0x10);
        if (a6 == 1) {
            t3 = ((0x0 + (((int)stk + 0) + 0x4)) + 0x6);
            t4 = 0x0;
            t5 = a5;
            for (;;) {
                t6 = *(signed char *)((t5 + 0x0));
                t5 = (t5 + 0x1);
                t4 = (t4 + 0x2);
                *(unsigned char *)((t3 + 0x0)) = t6;
                t3 = (t3 + 0x1);
                t7 = *(signed char *)((t5 + 0x0));
                t5 = (t5 + 0x1);
                *(unsigned char *)((t3 + 0x0)) = t7;
                t3 = (t3 + 0x1);
                if ((int)t4 >= (int)0x2) {
                    break;
                }
            }
        } else {
            t8 = ((0x0 + (((int)stk + 0) + 0x4)) + 0x8);
            t9 = 0x0;
            t10 = a5;
            for (;;) {
                t11 = *(signed char *)((t10 + 0x0));
                t10 = (t10 + 0x1);
                t9 = (t9 + 0x2);
                *(unsigned char *)((t8 + 0x0)) = t11;
                t8 = (t8 + 0x1);
                t12 = *(signed char *)((t10 + 0x0));
                t10 = (t10 + 0x1);
                *(unsigned char *)((t8 + 0x0)) = t12;
                t8 = (t8 + 0x1);
                if ((int)t9 >= (int)0x8) {
                    break;
                }
            }
        }
        *(unsigned int *)(((int)stk + 0)) = (*(int *)((a4 + 0x1C)));
        FUN_0c0fddce((((int)stk + 0) + 0x4));
        FUN_0c0fddce(((((int)stk + 0) + 0x4) + 0x20));
        t30 = (*(int *)(((int)stk + 0)));
        t31 = (((int)stk + 0) + 0x4);
        t32 = 0x10;
    } else {
        t32 = *(int *)(((t0 << 2) + 0xC15AB54));
        *(unsigned int *)(((int)stk + 0)) = a5;
        t30 = ((*(int *)(((t0 << 2) + 0xC15AB28))) + (*(int *)((a4 + 0x1C))));
        t31 = a5;
    }
    kmiCopyToFrameBuffer(t30, t31, t32);
    return 0x0;
}

int FUN_0c10d114(void)
{
    int t0;
    register int t1;
    register int t2;

    t2 = 0x0;
    for (;;) {
        if (((*(int *)(((t2 << 2) + 0xC817304))) != 5) && (t0 = *(int *)(((t2 << 2) + 0xC817304)), t0 != -3)) {
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x4) {
                return t0;
            }
            continue;
        }
        break;
    }
    *(unsigned int *)(((t2 << 2) + 0xC817304)) = 0x7;
    if (((((((struct o0_int *)0xC816FE4)->v)) & 0x1) != 1) && ((t1 = (((struct o0_int *)0xC816FE4)->v), (t1 & 0x2C) == 32) && (0x1 != 0))) {
        (((struct oC_uint *)0xA05F8044)->v) = (((((struct o30_int *)0xC8172BC)->v)) + ((((struct o0_int *)0xC8171D8)->v)));
        (((struct o10_uint *)0xA05F8044)->v) = (((((struct o34_int *)0xC8172BC)->v)) + ((((struct o4_int *)0xC8171D8)->v)));
    } else {
        if (((((struct o10_int *)0xC816FE4)->v)) != 1) {
            (((struct oC_uint *)0xA05F8044)->v) = ((*(int *)((((t2 & 0x1) << 2) + 0xC8172EC))) + ((((struct o0_int *)0xC8171D8)->v)));
            (((struct o10_uint *)0xA05F8044)->v) = ((*(int *)((((t2 & 0x1) << 2) + 0xC8172EC))) + ((((struct o4_int *)0xC8171D8)->v)));
        }
    }
    t0 = *(int *)(((t2 << 2) + 0xC817304));
    t1 = t0;
    if (t0 != -3) {
        t0 = (((struct o0_int *)0xC817260)->v);
        t2 = t0;
        if (t0 == 1) {
            *(unsigned int *)0xA05F80E8 = ((((struct o0_int *)0xC8172BC)->v));
            (((struct o0_uint *)0xA05F8044)->v) = ((((struct o20_int *)0xC817260)->v));
            (((struct o0_uint *)0xC817260)->v) = 0x0;
            t2 = 0xC817280;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0e6518(int a4)
{
    int stk[8];
    register int t0;
    register int t3;
    register int t30;
    register int t4;
    register int t8;
    register int t12;
    register int t13;
    register int t16;
    register int t20;

    *(unsigned short *)(((((int)stk + 0) + 0xA) + 0x0)) = a4;
    t0 = *(signed char *)(((int)stk + 10));
    t3 = *(short *)((0xC7FD110 + (unsigned char)((((t0 << 1) + t0) << 2) << 1)));
    t30 = t3;
    if (t3 != 1) {
    } else {
        t4 = *(short *)(((int)stk + 10));
        *(unsigned int *)(((int)stk + 0)) = ((((((t4 << 1) + t4) << 2) << 2) << 1) + 0xA0800128);
        *(unsigned int *)(((int)stk + 4)) = (((((*(short *)(((int)stk + 10))) << 8) << 2) << 2) + 0x2A1);
        t8 = *(short *)(((int)stk + 10));
        t12 = *(int *)(((*(int *)(((unsigned char)((((t8 << 1) + t8) << 2) << 1) + 0xC7FD124))) + 0x0));
        t13 = *(int *)(((t12 | 0xA0000000) + 0x0));
        *(unsigned int *)(((t12 | 0xA0000000) + 0x0)) = (t13 & 0x7FF);
        if (((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) & 0x300) == 0x100) {
            t16 = *(short *)(((int)stk + 10));
            t20 = *(int *)((((*(int *)(((unsigned char)((((t16 << 1) + t16) << 2) << 1) + 0xC7FD124))) + 0x4) + 0x0));
            *(unsigned int *)(((t20 | 0xA0000000) + 0x0)) = ((*(int *)(((t20 | 0xA0000000) + 0x0))) & 0x7FF);
        }
        *(unsigned int *)(((t12 | 0xA0000000) + 0x0)) = ((t13 & 0x7FF) | 0x8000);
        t30 = (FUN_0c0e5d22((*(int *)(((int)stk + 4)))));
    }
    return t30;
}

int FUN_0c10dabe(int a4, int a5, int a6)
{
    register int t17;

    if ((*(int *)((0xC817304 + (((((struct o0_int *)0xC81731C)->v)) << 2)))) == -1) {
        return ((int (*)(int, int, int, int))(0xC10DBCA))(a4, a5, a6, 0xC8426CC);
    }
    if (((((struct o14_int *)0xC81731C)->v)) == 0) {
        *(unsigned int *)0xC817268 = ((*(int *)0xC817268) | 0x20);
        *(unsigned int *)(((((((struct o0_int *)0xC81731C)->v)) << 2) + 0xC817304)) = 0x3;
    }
    if (((*(int *)0xC816FC8) & 0x1) != 0) {
        t17 = (*(int *)0xA05F8138);
    } else {
        t17 = (*(int *)((((((((((struct o0_int *)0xC81731C)->v)) & 0x1) << 2) << 2) << 1) + 0xC817440)));
    }
    *(volatile int *)0xC81731C;
    return ((int (*)(int, int, int, int))(0xC10DB7E))(t17, 0x1, 0xA05F8138, 0xC8426CC);
}
