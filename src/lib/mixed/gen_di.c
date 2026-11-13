/* Straight-line functions with calls and guards (batch gen_di): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[29]; } Stk29;
struct o0_float { float v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_short { char p[0x4C]; short v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o54_int { char p[0x54]; int v; };
struct o58_float { char p[0x58]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5C_int { char p[0x5C]; int v; };
struct o60_float { char p[0x60]; float v; };
struct o60_int { char p[0x60]; int v; };
struct o60_short { char p[0x60]; short v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o64_float { char p[0x64]; float v; };
struct o64_int { char p[0x64]; int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_float { char p[0x68]; float v; };
struct o68_short { char p[0x68]; short v; };
struct o68_ushort { char p[0x68]; unsigned short v; };
struct o6A_short { char p[0x6A]; short v; };
struct o6A_ushort { char p[0x6A]; unsigned short v; };
struct o6C_int { char p[0x6C]; int v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
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
struct o68_int { char p[0x68]; int v; };
int ADXSJD_GetDecNumSmpl(int);
int vmu_lcd_set_idle_image(void);
int vmu_lcd_set_busy_image(void);
int vmu_lcd_refresh(int);
int FUN_0c011a70(void);
int vmu_load_vmgame_data(int);
int vmu_rewrite_vmgame_data(int, int);
int hit_load_box_world(int, int, int);
int hit_load_cylinder_world(int, int, int);
int hit_load_sphere_world(int, int, int);
int hit_find_part_entry(int, int, int, int);
int hit_get_sphere_entry(int, int, int);
int hit_get_cylinder_entry(int, int, int);
int hit_get_box_entry(int, int, int);
int hit_dispatch_shape_pair(int, int, int, int);
int FUN_0c026076(int, int, int, int);
int fx_spawn_spark_rings(int, int, float, float);
int ai_clear_op_state(void);
int ai_calc_goal_angle(int, float);
int ai_calc_angle_to_goal_point(int);
int ai_calc_dist_to_goal_obj(int);
int ai_angle_to_pad_dir(int);
int obj_create(int, int, int);
int obj_destroy(int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c08e382(int);
int pl_start_knockback_reaction(int);
int FUN_0c08f6c8(int);
int FUN_0c08f76a(void);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int FUN_0c09c45a(int);
int pl_landed(int);
int obj_set_record_char(int, int);
int obj_set_record(int, int);
int snd_play_stage_obj_se(int, int, int);
int menu_ui_task_32_layout(int);
int testmode_draw_text_table(int, int);
int FUN_0c0ce99a(int, int, int, int);
int FUN_0c0cea90(int, int, int, int);
int testmode_game_config_commit(void);
int testmode_game_config_load(void);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int _quick_odd_mvn();
int _slow_mvn(int);
int ADXT_Stop(int);
int FUN_0c10687c(int);
int adxt_RcvrReplay(void);
int buMountDisk(int, int, int);
int buUnmount(int);
int kmiBGPlaneCountWords(int);
int kmiBGPlanePutColor(int, int, int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int thunk_FUN_0c062242(int, int);
int fx_burst_create(int a4, int a5);
int kmiProcessVertex_04(int a4);
int ai_op5(int a4, float f4);
int ai_op76(int a4, int a5, int a6, int a7);
int fx_spawn_11(int a4);
int FUN_0c026880(int a4);
int fx_spawn_0382a8(int a4);
int pl_hitreact_01_phase1(int a4);
int fx_tick_033990(int a4);
int stage_gimmick_25_update_b(int a4, int a5, int a6, int a7);
int FUN_0c106ef4(int a4, int a5, int a6, int a7);
int FUN_0c10c0e0(Stk29 s);
int vmu_step_rewrite_vmgame(int a4, int a5, int a6);
int testmode_game_config_screen(int a4, int a5);
int FUN_0c1158e6(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int FUN_0c01c59a(int a4);
int FUN_0c0419a8(int a4, int a5, int a6, int a7);
int fx_update_24(int a4, int a5, int a6, int a7);
int vmu_step_load_vmgame(int a4, int a5, int a6);
int menu_ui_task_32(int a4, int a5, int a6, int a7, float f4);

int kmiProcessVertex_04(int a4)
{
    int stk[3];
    register int t3;
    register int t4;
    register int t5;
    register int t14;
    register int t19;
    register int t28;
    register int t33;
    register int t42;
    register int t48;

    *(unsigned int *)((((int)stk + 0) + 0x0)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x0)) = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC81715C)->v);
    t4 = (((struct o8_int *)0xC81715C)->v);
    t5 = (((struct oC_int *)0xC81715C)->v);
    (((struct o0_uint *)0xC817064)->v) = t3;
    (((struct o4_uint *)0xC817064)->v) = t4;
    (((struct o8_uint *)0xC817064)->v) = t5;
    (((struct oC_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x4)));
    (((struct o10_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x8)));
    (((struct o14_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0xC)));
    t14 = kmiBGPlanePutColor(t3, 0x6, (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x10))));
    *(unsigned int *)(((t14 << 2) + 0xC817064)) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x18)));
    t19 = kmiBGPlanePutWord(t3, (t14 + 0x1), (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x1C))));
    *(unsigned int *)(((t19 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    *(unsigned int *)((((t19 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t19 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    t28 = kmiBGPlanePutColor(t3, (((t19 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x10))));
    *(unsigned int *)(((t28 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x18)));
    t33 = kmiBGPlanePutWord(t3, (t28 + 0x1), (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x1C))));
    *(unsigned int *)(((t33 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x4)));
    *(unsigned int *)((((t33 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t33 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0xC)));
    t42 = kmiBGPlanePutColor(t3, (((t33 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x10))));
    *(unsigned int *)(((t42 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x18)));
    (((struct o0_uint *)0xC81715C)->v) = ((kmiBGPlanePutWord(t3, (t42 + 0x1), (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x1C))))) << 2);
    t48 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t48, 0x0, 0x0);
    (((struct o14_uint *)0xC81715C)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0xC)));
    return 0x0;
}

int FUN_0c106ef4(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 == 3) {
        t1 = ADXSJD_GetDecNumSmpl((*(int *)((a4 + 0x4))));
        if (((((struct o64_int *)(a4))->v)) == t1) {
            (((struct o68_ushort *)(a4))->v) = (((((struct o68_short *)(a4))->v)) + 0x1);
            if ((int)((((struct o68_short *)(a4))->v)) > (int)(*(int *)((a4 + 0x38)))) {
                (((struct o60_ushort *)(a4))->v) = 0xFFFFFFFE;
            }
        } else {
            (((struct o68_ushort *)(a4))->v) = 0x0;
        }
        (((struct o64_uint *)(a4))->v) = t1;
        if (((((struct o60_short *)(a4))->v)) != 0) {
            t1 = *(signed char *)((a4 + 0x6D));
            if ((t1 != 1) && (t1 != 2)) {
            } else {
                ADXT_Stop(a4);
            }
            if ((*(signed char *)((a4 + 0x6D))) != 0) {
                (((struct o60_ushort *)(a4))->v) = 0x0;
                (((struct o6A_ushort *)(a4))->v) = 0x0;
            }
        }
    } else {
        (((struct o68_ushort *)(a4))->v) = 0x0;
    }
    if (((int)t0 >= (int)0x1) && ((int)t0 <= (int)0x3)) {
        t1 = 0x0;
        if ((*(int *)((a4 + 0x14))) != 0) {
            t2 = *(int *)((a4 + 0x14));
            t1 = (((int (*)(int, int, int, int))((*(int *)(((*(int *)((t2 + 0x0))) + 0x24)))))(t2, 0x1, a6, a7));
        }
        if ((int)t1 < (int)0x40) {
            (((struct o6A_ushort *)(a4))->v) = (((((struct o6A_short *)(a4))->v)) + 0x1);
            if (t0 == 3) {
                if ((int)((((struct o6A_short *)(a4))->v)) <= (int)(*(int *)((a4 + 0x38)))) {
                } else {
                    (((struct o60_ushort *)(a4))->v) = 0xFFFFFFFF;
                }
            } else {
                t0 = *(int *)((a4 + 0x38));
                if ((int)((((struct o6A_short *)(a4))->v)) > (int)((t0 << 2) + t0)) {
                    (((struct o60_ushort *)(a4))->v) = 0xFFFFFFFF;
                }
            }
            t0 = 0x60;
            if (((((struct o60_short *)(a4))->v)) != 0) {
                t1 = *(signed char *)((a4 + 0x6D));
                if (t1 == 1) {
                    ADXT_Stop(a4);
                } else {
                    if (t1 == 2) {
                        adxt_RcvrReplay();
                    }
                }
                t1 = 0x6D;
                if ((*(signed char *)((a4 + 0x6D))) != 0) {
                    (((struct o60_ushort *)(a4))->v) = 0x0;
                    (((struct o6A_ushort *)(a4))->v) = 0x0;
                    t1 = 0x6A;
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
            (((struct o6A_ushort *)(a4))->v) = 0x0;
            t1 = 0x6A;
        }
        t0 = t1;
    } else {
        (((struct o6A_ushort *)(a4))->v) = 0x0;
        t0 = 0x6A;
    }
    t1 = t0;
    if ((*(int *)((a4 + 0x8))) != 0) {
        t0 = FUN_0c10687c((*(int *)((a4 + 0x8))));
        t2 = t0;
        if (t0 == 4) {
            t0 = *(signed char *)((a4 + 0x6D));
            if (t0 == 1) {
                ADXT_Stop(a4);
            } else {
                if (t0 == 2) {
                    adxt_RcvrReplay();
                }
            }
            t0 = 0x6D;
            if ((*(signed char *)((a4 + 0x6D))) != 0) {
                (((struct o60_ushort *)(a4))->v) = 0x0;
                (((struct o6A_ushort *)(a4))->v) = 0x0;
                t0 = 0x6A;
            }
            t2 = t0;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c10c0e0(Stk29 s)
{
    int stk[39];
    register int t10;
    register int t11;
    register int t12;

    stk[2] = s.w[0];
    stk[3] = s.w[1];
    stk[4] = s.w[2];
    stk[5] = s.w[3];
    stk[6] = s.w[4];
    stk[7] = s.w[5];
    stk[8] = s.w[6];
    stk[9] = s.w[7];
    stk[10] = s.w[8];
    stk[11] = s.w[9];
    stk[12] = s.w[10];
    stk[13] = s.w[11];
    stk[14] = s.w[12];
    stk[15] = s.w[13];
    stk[16] = s.w[14];
    stk[17] = s.w[15];
    stk[18] = s.w[16];
    stk[19] = s.w[17];
    stk[20] = s.w[18];
    stk[21] = s.w[19];
    stk[22] = s.w[20];
    stk[23] = s.w[21];
    stk[24] = s.w[22];
    stk[25] = s.w[23];
    stk[26] = s.w[24];
    stk[27] = s.w[25];
    stk[28] = s.w[26];
    stk[29] = s.w[27];
    stk[30] = s.w[28];
    (((struct o0_uint *)0xC81726C)->v) = ((((((struct o58_int *)((((int)stk + 4) + 0x8)))->v)) & 0x7FF) | ((((((struct o54_int *)((((int)stk + 4) + 0x8)))->v)) & 0x7FF) << 16));
    (((struct o4_uint *)0xC81726C)->v) = ((((((struct o60_int *)((((int)stk + 4) + 0x8)))->v)) & 0x7FF) | ((((((struct o5C_int *)((((int)stk + 4) + 0x8)))->v)) & 0x7FF) << 16));
    (((struct o8_uint *)0xC81726C)->v) = (((((((struct o48_int *)((((int)stk + 4) + 0x8)))->v)) & 0xF) | (((((((struct o4C_int *)((((int)stk + 4) + 0x8)))->v)) & 0x1F) << 2) << 2)) | (((((((struct o50_int *)((((int)stk + 4) + 0x8)))->v)) & 0xF) << 8) << 1));
    (((struct o0_uint *)0xC817000)->v) = (*(int *)(((((int)stk + 4) + 0x8) + 0x0)));
    (((struct o4_uint *)0xC817000)->v) = (*(int *)(((((int)stk + 4) + 0x8) + 0x4)));
    t10 = *(int *)(((((int)stk + 4) + 0x8) + 0x8));
    t11 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t12 = *(int *)(((((int)stk + 4) + 0x8) + 0x4));
    if ((int)((((struct o14_int *)0xC817000)->v)) > 0) {
        (((struct oC_uint *)0xC81726C)->v) = (((t11 & 0x3FF) | ((((t12 - ((((struct o14_int *)0xC817000)->v))) & 0x3FF) << 8) << 2)) | ((((t10 & 0x3FF) << 16) << 2) << 2));
    } else {
        (((struct oC_uint *)0xC81726C)->v) = (((t11 & 0x3FF) | (((t12 & 0x3FF) << 8) << 2)) | ((((t10 & 0x3FF) << 16) << 2) << 2));
    }
    (((struct o0_uint *)0xC8172B4)->v) = ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x14))) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x18))) << 8));
    (((struct o4_uint *)0xC8172B4)->v) = (((unsigned short)(*(int *)(((((int)stk + 4) + 0x8) + 0x10))) | (((*(int *)(((((int)stk + 4) + 0x8) + 0xC))) & 0x1) << 16)) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x1C))) & 0x1) << 16) << 2));
    (((struct o10_uint *)0xC81726C)->v) = (((((struct o44_int *)((((int)stk + 4) + 0x8)))->v)) & 0x1FF);
    (((struct o18_uint *)0xC81726C)->v) = (((((*(int *)(((((int)stk + 4) + 0x8) + 0x30))) & 0x7) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x2C))) & 0x1) << 2) << 1)) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x34))) << 8)) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x38))) << 16));
    (((struct o14_uint *)0xC81726C)->v) = (((((((((*(int *)(((((int)stk + 4) + 0x8) + 0x20))) & 0x1) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x28))) & 0x1) << 1)) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x3C))) & 0x3) << 2)) | (((0x7 & ((((struct o40_int *)((((int)stk + 4) + 0x8)))->v))) << 2) << 2)) | ((unsigned char)(*(signed char *)(((((int)stk + 4) + 0x8) + 0x70))) << 8)) | ((0x1F & ((((struct o68_int *)((((int)stk + 4) + 0x8)))->v))) << 16)) | ((((((struct o64_int *)((((int)stk + 4) + 0x8)))->v)) & 0x1) << 22)) | ((((((struct o6C_int *)((((int)stk + 4) + 0x8)))->v)) & 0x1) << 23));
    return 0x6C;
}

int FUN_0c1158e6(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;

    *(unsigned short *)((a7 + 0x0)) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = 0x30;
    if ((int)a5 >= (int)0x30) {
        t0 = *(short *)((a4 + 0x0));
        *(unsigned int *)(((int)stk + 0)) = (unsigned short)t0;
        t1 = *(int *)(((int)stk + 0));
        *(unsigned short *)(((int)stk + 0)) = ((unsigned char)((int)(unsigned short)t0 >> 8) | ((t1 << 8) & 0xFF00));
        if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | ((t1 << 8) & 0xFF00)) == 0x8000) {
            t2 = *(short *)((a4 + 0x2));
            *(unsigned int *)(((int)stk + 0)) = t2;
            t3 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned char)((int)t2 >> 8) | ((t3 << 8) & 0xFF00));
            if ((int)((unsigned char)((int)t2 >> 8) | ((t3 << 8) & 0xFF00)) < (int)0x2C) {
                return 0xFFFFFFFF;
            }
            t4 = *(short *)((a4 + 0x14));
            *(unsigned int *)(((int)stk + 0)) = t4;
            *(unsigned int *)((a6 + 0x0)) = ((unsigned char)((int)t4 >> 8) | (((*(int *)(((int)stk + 0))) << 8) & 0xFF00));
            t6 = *(short *)((a4 + 0x16));
            *(unsigned int *)(((int)stk + 0)) = t6;
            *(unsigned short *)((a7 + 0x0)) = ((unsigned char)((int)t6 >> 8) | (((*(int *)(((int)stk + 0))) << 8) & 0xFFFFFF00));
            if ((*(short *)((a7 + 0x0))) != 1) {
                return 0xFFFFFFFE;
            }
            t9 = *(short *)((a4 + 0x1A));
            *(unsigned short *)((a8 + 0x0)) = ((unsigned char)((int)t9 >> 8) | ((t9 << 8) & 0xFFFFFF00));
            t10 = *(int *)((a4 + 0x1C));
            *(unsigned int *)((a9 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t10 >> 16) >> 8) | (((int)t10 >> 8) & 0xFF00)) | ((t10 << 8) & 0xFF0000)) | ((t10 << 16) << 8));
            t11 = *(int *)((a4 + 0x20));
            *(unsigned int *)((a10 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t11 >> 16) >> 8) | (((int)t11 >> 8) & 0xFF00)) | ((t11 << 8) & 0xFF0000)) | ((t11 << 16) << 8));
            t12 = *(int *)((a4 + 0x24));
            *(unsigned int *)((a11 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t12 >> 16) >> 8) | (((int)t12 >> 8) & 0xFF00)) | ((t12 << 8) & 0xFF0000)) | ((t12 << 16) << 8));
            t13 = *(int *)((a4 + 0x28));
            *(unsigned int *)((a12 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t13 >> 16) >> 8) | (((int)t13 >> 8) & 0xFF00)) | ((t13 << 8) & 0xFF0000)) | ((t13 << 16) << 8));
            return 0x0;
        }
        return 0xFFFFFFFE;
    }
    return 0xFFFFFFFF;
}

