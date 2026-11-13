/* Straight-line functions with calls and guards (batch gen_dw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c1070b8(int);
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o308_float { char p[0x308]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_short { char p[0x48]; short v; };
struct o4A_short { char p[0x4A]; short v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_float { char p[0x70]; float v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o729C_float { char p[0x729C]; float v; };
struct o72A0_short { char p[0x72A0]; short v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_ushort { char p[0x7C]; unsigned short v; };
struct o7E_ushort { char p[0x7E]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA8_uint { char p[0xA8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oE_short { char p[0xE]; short v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int ADXPD_SetCoef(int, int, int);
int ui_draw_object_sprite(int);
int hit_build_part_shape(int, int);
int hit_dispatch_shape_pair(int, int, int, int);
int FUN_0c031030(void);
int ui_fade_start(int, int, int, int);
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
extern int game_frame_update();
int obj_create(int, int, int);
int obj_destroy(int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0623a6(int, int, int);
int FUN_0c0634b4(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int FUN_0c09c45a(int);
int pl_get_held_item_class(int, int, int);
int FUN_0c09c782(int);
int hit_find_wall_entry_by_kind(int, int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_landed(int);
int obj_set_record_char(int, int);
int obj_set_record(int, int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
extern int bgm_play_rank();
int snd_play_stage_obj_se(int, int, int);
int obj_set_mode_owner(int, int, int);
extern int rank_screen_time_ranking();
extern int rank_screen_vs_ranking();
int FUN_0c0d5292(void);
int ui_draw_no_challenge(int);
int FUN_0c0d5f3a(int);
int FUN_0c0d6098(int);
int FUN_0c0d6190(int);
int FUN_0c0d6212(int);
int ui_draw_continue_countdown(int);
int cam_set_shake_ramp(int, int);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int _divls(void);
int _modlu(void);
int _quick_odd_mvn(void);
extern int _slow_mvn();
int FUN_0c0f059e(int);
int FUN_0c0f9c92(int);
int FUN_0c0fdda0(int, int, int);
int FUN_0c1012f4(int, int, int);
int FUN_0c102556(int, int);
int FUN_0c103874(int, int);
int FUN_0c104962(int, int, int);
int FUN_0c1070a0(int);
int FUN_0c1071b4(int);
int FUN_0c107206(void);
int FUN_0c107f44(int, int, int, int, int, int, int);
int FUN_0c114bae(int);
int FUN_0c1151de(int, int, int, int);
int FUN_0c11574c(int, int, int, int);
int FUN_0c115880(int, int, int);
int FUN_0c1158e6(int, int, int, int, int, int, int, int, int);
extern void _builtin_prefetch(void *);
int buIsFormat(int, int, int, int);
int check_isopen(void);
int direntry(int, int);
int gdFsGetDirEnt(int, int, int, int);
int gdFsSearchName(int, int, int);
int gdFsSearchPath(int, int, int, int);
int gdFsSearchPath_dds(int, int, int, int, int);
int get_fat(int, int, int, int);
int memset(int, int, int);
extern int mwRnaErrCallFunc();
int open_file_handle(void);
int search_free_dir(int);
int set_fat(int, int, int);
int thunk_FUN_0c062242(int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_fat(int);
int write_sys(int);
int FUN_0c019204(int a4, int a5);
int FUN_0c062de8(int a4);
int pl_mode15_cls08_f0(int a4);
int pl_gunrock_mode08_09_update_v1(int a4);
int FUN_0c0d3d50(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0efc6a(int a4, int a5, int a6, int a7, int a8, int a9);
int fx_spawn_24(int a4);
int FUN_0c104622(int a4, int a5, int a6, int a7);
int pl_falcon_spawn_timed_fx(int a4);
int FUN_0c09ff0c(int a4, int a5, int a6);
int FUN_0c0f0b42(int a4, int a5);
float vmsfs_fcreate(int a4, int a5, int a6, int a7);
int FUN_0c114182(int a4, int a5, int a6);
int fx_tick_034bfc(int a4, int a5, int a6, int a7);
int fx_tick_03ed0c(int a4, int a5, int a6, int a7);
int fx_spawn_03c1ec(int a4, int a5, int a6, int a7);
int FUN_0c107234(int a4, int a5, int a6, int a7);
int FUN_0c0a65a8(int a4, int a5, int a6, int a7, float f4);
int stage_gimmick_34_update(int a4);
int vmsfs_setwork(int a4, int a5, int a6);
int FUN_0c01bc38(int a4, int a5, int a6, int a7);
int FUN_0c01bd3e(int a4, int a5, int a6, int a7);
int FUN_0c0d5f6a(int a4, int a5, int a6, int a7);

int FUN_0c0efc6a(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[11];
    register int t0;
    int t4;
    register int t5;
    register int t8;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t29;
    register int t31;

    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = FUN_0c0f9c92(a5);
    if (t0 != 8) {
        t4 = *(int *)(((*(int *)((a4 + 0x4))) + 0x0));
        t5 = 0xA0000000;
        if ((a5 & 0x1) != 0) {
            t5 = 0x81000040;
        }
        *(unsigned int *)0xC346B78 = ((0x830000 & t4) | t5);
        t8 = *(int *)(((a5 << 2) + (*(int *)((a4 + 0x0)))));
        (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t8 >> 16) >> 8);
        (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t8 >> 16) >> 8);
        FUN_0c0fdda0(((t8 & 0x3FFFFFF) | 0xE0000000), 0xC346B78, 0x20);
        _builtin_prefetch((void *)((t8 & 0x3FFFFFF) | 0xE0000000));
        t12 = *(int *)((a4 + 0x0));
        t11 = *(int *)(((a5 << 2) + t12));
        *(unsigned int *)(((a5 << 2) + t12)) = (t11 + 0x20);
        *(unsigned int *)(((int)stk + 0)) = 0x2;
        t13 = (t11 + 0x20);
        t14 = ((t8 & 0x3FFFFFF) | 0xE0000000);
        for (;;) {
            if ((*(int *)(((int)stk + 0))) == 0) {
                break;
            }
            t12 = (*(int *)((a4 + 0x0)));
            t14 = *(int *)(((a5 << 2) + t12));
            (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t14 >> 16) >> 8);
            (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t14 >> 16) >> 8);
            t13 = 0xC0FDDA0;
            t14 = (t14 & 0x3FFFFFF);
            t14 = (t14 | 0xE0000000);
            t12 = (FUN_0c0fdda0(t14, 0xC346B98, 0x40));
            _builtin_prefetch((void *)t14);
            t14 = (t14 + 0x20);
            _builtin_prefetch((void *)t14);
            t12 = (*(int *)((a4 + 0x0)));
            *(unsigned int *)(((a5 << 2) + t12)) = ((*(int *)(((a5 << 2) + t12))) + 0x40);
            t13 = (*(int *)(((int)stk + 0)));
            t13 = (t13 - 1);
            *(unsigned int *)(((int)stk + 0)) = t13;
        }
    }
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x0)) = 0x20000000;
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x10)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x14)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x18)) = a8;
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x1C)) = a9;
    t29 = *(int *)(((a5 << 2) + (*(int *)((a4 + 0x0)))));
    (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t29 >> 16) >> 8);
    (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t29 >> 16) >> 8);
    FUN_0c0fdda0(((t29 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 0) + 0xC), 0x20);
    _builtin_prefetch((void *)((t29 & 0x3FFFFFF) | 0xE0000000));
    t31 = *(int *)((a4 + 0x0));
    *(unsigned int *)(((a5 << 2) + t31)) = ((*(int *)(((a5 << 2) + t31))) + 0x20);
    return 0x0;
}

int FUN_0c104622(int a4, int a5, int a6, int a7)
{
    int stk[12];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_8 = a4;
    v0_7 = a6;
    v0_4 = *(int *)((((v0_8 * 0x148) + 0xC80DBC8) + 0x1C));
    *(unsigned short *)(((int)stk + 4)) = (*(short *)((v0_4 + 0x14)));
    v0_9 = *(int *)((v0_4 + 0x18));
    v0_6 = ((v0_8 * 0x148) + 0xC80DBC8);
    v0_1 = (0xFFFA);
    v0_2 = (0x0);
    v0_5 = ((*(short *)(((int)stk + 4))));
    v0_3 = (0xFFFC);
    v0_0 = (v0_8);
    v0_8 = (v0_4);
    v0_4 = (v0_9);
    v0_6 = v0_6;
    if (((int)v0_9 <= 0)) goto L_C10467C;
    L_C104658:;
    *(unsigned int *)(((int)stk + 0)) = (unsigned short)v0_5;
    v0_8 = get_fat(v0_0, (unsigned short)v0_5, v0_7, a7);
    set_fat(v0_0, (*(int *)(((int)stk + 0))), v0_3);
    v0_5 = (v0_8);
    if (((unsigned short)v0_8 == v0_1)) goto L_C10467C;
    if (((unsigned short)v0_5 == v0_3)) goto L_C10467C;
    v0_8 = (int)(v0_2 + 0x1) < (int)v0_4;
    v0_2 = ((v0_2 + 0x1));
    if (v0_8) goto L_C104658;
    L_C10467C:;
    v0_5 = *(short *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = (v0_4 - 1);
    v0_2 = (0x0);
    v0_5 = (v0_5);
    L_C104704:;
    if (((int)v0_2 < (int)v0_4)) goto L_C10469C;
    if (((unsigned short)(*(short *)(((int)stk + 4))) == (*(int *)(((*(int *)((v0_6 + 0x1C))) + 0x14))))) goto L_C10472C;
    v0_1 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((v0_6 + 0x20))), 0x4A, (*(short *)(((int)stk + 4))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    write_fat(v0_0);
    write_sys(v0_0);
    L_C10472C:;
    v0_0 = (0x0);
    L_C10472E:;
    return v0_0;
    L_C10469C:;
    *(unsigned int *)(((int)stk + 0)) = ((v0_2 << 8) << 1);
    L_C1046A4:;
    v0_7 = FUN_0c1012f4(v0_0, (unsigned short)v0_5, ((*(int *)((v0_6 + 0x28))) + (*(int *)(((int)stk + 0)))));
    v0_8 = (v0_7);
    if ((v0_7 == 0)) goto L_C1046D6;
    if ((v0_8 != 0xFFFFFF01)) goto L_C1046C2;
    v0_0 = (v0_8);
    goto L_C10472E;
    L_C1046C2:;
    set_fat(v0_0, (unsigned short)v0_5, 0xFFFF);
    v0_5 = ((FUN_0c102556(v0_0, v0_3)));
    goto L_C1046A4;
    L_C1046D6:;
    v0_7 = (v0_1);
    if ((v0_2 != 0)) goto L_C1046E0;
    *(unsigned short *)(((int)stk + 4)) = v0_5;
    L_C1046E0:;
    *(unsigned int *)(((int)stk + 12)) = (unsigned short)v0_5;
    set_fat(v0_0, (unsigned short)v0_5, v0_7);
    if ((v0_2 == (*(int *)(((int)stk + 8))))) goto L_C104702;
    v0_5 = FUN_0c102556(v0_0, v0_3);
    *(unsigned short *)(((int)stk + 0)) = v0_5;
    set_fat(v0_0, (*(int *)(((int)stk + 12))), v0_5);
    v0_5 = ((*(short *)(((int)stk + 0))));
    L_C104702:;
    v0_2 = ((v0_2 + 0x1));
    goto L_C104704;
}

int FUN_0c0f0b42(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t11;

    t4 = *(int *)0xC346BD8;
    t5 = a5;
    if (a5 == 0) {
        t5 = (*(int *)((t4 + 0x10)));
    }
    t6 = *(signed char *)((a4 + 0x0));
    t7 = *(int *)0xC7FE6D8;
    if ((t6 != 47) && (t6 != 92)) {
        t6 = gdFsSearchName(a4, (*(int *)((t4 + 0x10))), 0x0);
        t8 = 0xFFFFFFF8;
        if (t6 != 0) {
            t9 = *(int *)(((*(int *)0xC346BD8) + 0x10));
            t8 = 0xFFFFFFF5;
            if (((unsigned char)(*(signed char *)((((t9 + 0x10) + ((t6 - 1) * 0x2C)) + 0x8))) & 2) == 0) {
            } else {
                t11 = *(int *)((((t9 + 0x10) + ((t6 - 1) * 0x2C)) + 0x0));
                t8 = gdFsGetDirEnt(((*(int *)0xC346BD8) + 0x40), (t11 + 0x96), t5, (*(int *)((((t9 + 0x10) + ((t6 - 1) * 0x2C)) + 0x4))));
                if (((*(short *)(((*(int *)0xC7FE6D8) + 0x0))) == 1) && ((t0 = *(int *)0xC7FE6D8, t1 = *(int *)((t0 + 0x4)), t1 == (t11 + 0x96)) && ((t8 == 0) || (t8 == -12)))) {
                    FUN_0c0f059e(t5);
                }
            }
        }
        t0 = t8;
    } else {
        if ((*(short *)((t7 + 0x0))) == 1) {
            t1 = (gdFsSearchPath_dds(((t4 + 0x40) + 0x40), (*(int *)((t4 + 0x4))), (*(int *)((t4 + 0x8))), a4, (0x8 + t7)));
        } else {
            t1 = (gdFsSearchPath(((t4 + 0x40) + 0x40), (*(int *)((t4 + 0x4))), (*(int *)((t4 + 0x8))), a4));
        }
        t4 = 0xFFFFFFF8;
        if (t1 != 0) {
            t6 = gdFsGetDirEnt(((*(int *)0xC346BD8) + 0x40), (0x96 + t1), t5, 0x800);
            if (((*(short *)(((*(int *)0xC7FE6D8) + 0x0))) == 1) && ((t2 = *(int *)0xC7FE6D8, t3 = *(int *)((t2 + 0x4)), t3 == (0x96 + t1)) && ((t6 == 0) || (t6 == -12)))) {
                FUN_0c0f059e(t5);
            }
            t4 = t6;
        }
        t0 = t4;
    }
    return t0;
}

float vmsfs_fcreate(int a4, int a5, int a6, int a7)
{
    int stk[13];

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
    v0_6 = a4;
    v0_3 = a5;
    v0_4 = a6;
    v0_5 = a7;
    *(unsigned int *)(((int)stk + 4)) = v0_4;
    *(unsigned int *)(((int)stk + 0)) = v0_5;
    *(unsigned int *)((v0_5 + 0x0)) = 0x0;
    v0_0 = (0x0);
    v0_2 = (v0_3);
    v0_1 = (v0_6);
    if (((*(signed char *)(((v0_6 * 0x148) + 0xC80DBCA))) == 0)) goto L_C102BFA;
    v0_6 = (vmsio_isready(v0_1)) != 0;
    if (v0_6) goto L_C102BE2;
    vmsfs_unmount(v0_1);
    L_C102BFA:;
    v0_0 = (0xFFFFFF01);
    L_C102CDE:;
    return F0;
    L_C102BE2:;
    v0_6 = (vmsio_ismount(v0_1)) == 0;
    if (v0_6) goto L_C102BFA;
    if (((*(signed char *)(((v0_1 * 0x148) + 0xC80DBD0))) != 0)) goto L_C102C3C;
    goto L_C102BFA;
    L_C102C3C:;
    v0_3 = (int)(buIsFormat(v0_1, v0_3, v0_4, v0_5)) >= 0;
    if (v0_3) goto L_C102C4C;
    v0_0 = (0xFFFFFF03);
    goto L_C102CDE;
    L_C102C4C:;
    v0_3 = (int)(check_isopen()) < 0;
    if (v0_3) goto L_C102C84;
    v0_3 = (int)(FUN_0c104962(v0_1, v0_2, (((int)stk + 0) + 0x8))) < 0;
    if (v0_3) goto L_C102C78;
    v0_2 = FUN_0c103874(v0_1, v0_2);
    v0_6 = (v0_2);
    if (((int)v0_2 >= 0)) goto L_C102C78;
    v0_0 = (v0_6);
    goto L_C102CDE;
    L_C102C78:;
    v0_3 = search_free_dir(v0_1);
    v0_2 = (v0_3);
    if (!(((int)v0_3 >= 0))) goto L_C102C84;
    direntry(v0_1, v0_2);
    v0_1 = open_file_handle();
    v0_3 = (v0_1);
    if ((v0_1 != 0)) goto L_C102CA4;
    v0_0 = (0xFFFFFF07);
    goto L_C102CDE;
    L_C102C84:;
    v0_0 = (0xFFFFFF08);
    goto L_C102CDE;
    L_C102CA4:;
    *(unsigned int *)((v0_3 + 0x8)) = v0_0;
    *(unsigned int *)((v0_3 + 0x4)) = 0x1;
    *(unsigned int *)((v0_3 + 0x2C)) = v0_2;
    v0_0 = (v0_0);
    goto L_C102CDE;
}

int FUN_0c114182(int a4, int a5, int a6)
{
    int stk[11];
    register int t0;
    register int t20;
    register int t1;

    *(unsigned short *)((a4 + 0x2)) = 0x1;
    *(int *)((int)stk + 20) = (a4 + 0x10);
    *(int *)((int)stk + 16) = (a4 + 0x18);
    *(int *)((int)stk + 12) = (a4 + 0x14);
    *(int *)((int)stk + 8) = (a4 + 0xE);
    *(int *)((int)stk + 4) = (a4 + 0xF);
    *(int *)((int)stk + 0) = (a4 + 0xD);
    t0 = FUN_0c11574c(a5, a6, (((int)stk + 0) + 0x18), (a4 + 0xC));
    t20 = 0x0;
    if ((int)t0 >= 0) {
        t1 = FUN_0c115880(a5, a6, (a4 + 0x1C));
        t20 = 0x0;
        if ((int)t1 < 0) {
        } else {
            ADXPD_SetCoef((*(int *)((a4 + 0x8))), (*(int *)((a4 + 0x14))), (*(short *)((a4 + 0x1C))));
            *(int *)((int)stk + 20) = (a4 + 0x34);
            *(int *)((int)stk + 16) = (a4 + 0x30);
            *(int *)((int)stk + 12) = (a4 + 0x2C);
            *(int *)((int)stk + 8) = (a4 + 0x28);
            *(int *)((int)stk + 4) = (a4 + 0x26);
            FUN_0c1158e6(a5, a6, (a4 + 0x20), (a4 + 0x24), (a4 + 0x26), (a4 + 0x28), (a4 + 0x2C), (a4 + 0x30), (a4 + 0x34));
            (((struct o58_uint *)(a4))->v) = (*(signed char *)((a4 + 0xE)));
            (((struct o5C_uint *)(a4))->v) = (*(signed char *)((a4 + 0xF)));
            (((struct o60_uint *)(a4))->v) = (*(int *)((a4 + 0x10)));
            (((struct o64_uint *)(a4))->v) = (*(int *)((a4 + 0x3C)));
            (((struct o68_uint *)(a4))->v) = ((((struct o40_int *)(a4))->v));
            (((struct o6C_uint *)(a4))->v) = ((((struct o44_int *)(a4))->v));
            (((struct o7C_ushort *)(a4))->v) = ((((struct o48_short *)(a4))->v));
            (((struct o7E_ushort *)(a4))->v) = ((((struct o4A_short *)(a4))->v));
            (((struct o80_uint *)(a4))->v) = (a4 + 0x4C);
            (((struct o9C_uint *)(a4))->v) = 0x0;
            (((struct oA8_uint *)(a4))->v) = 0x0;
            memset((a4 + 0x4C), 0x0, 0x4);
            t20 = (*(short *)(((int)stk + 24)));
        }
    }
    return t20;
}

int FUN_0c107234(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t0;
    register int t1;
    register int t4;
    register int t5;
    register int t12;
    register int t17;
    register int t21;
    register int t34;
    register int t39;
    register int t43;
    register int t54;
    register int t56;
    register int t57;
    register int t58;
    register int t59;
    register int t70;
    register int t74;
    register int t78;
    register int t108;
    register int t114;
    register int t115;
    register int t104;
    register int t99;
    register int t92;

    if (((int)a5 >= (int)0x1) && ((int)a5 <= (int)0x2)) {
        if (a4 != 0) {
            if ((int)a5 > 0) {
                t0 = a4;
                t1 = 0x0;
                for (;;) {
                    if ((*(int *)((t0 + 0x0))) == 0) {
                        break;
                    }
                    t1 = (t1 + 0x1);
                    t0 = (t0 + 0x4);
                    if ((int)t1 >= (int)a5) {
                        t0 = ((int)stk + 0);
                        t0 = (t0 + 0x8);
                        FUN_0c1070a0(t0);
                        t4 = FUN_0c107206();
                        if (t4 == 0) {
                            t0 = 0xC15B2C8;
                            t5 = ((int (*)(int))(mwRnaErrCallFunc))(t0);
                        } else {
                            *(unsigned char *)((t4 + 0x3)) = a5;
                            t1 = 0x0;
                            *(unsigned char *)((t4 + 0x2)) = a5;
                            t0 = t1;
                            if ((int)a5 > 0) {
                                for (;;) {
                                    t1 = (t1 + 0x1);
                                    *(unsigned int *)((((t4 + 0x10) + t0) + 0x0)) = (*(int *)((a4 + t0)));
                                    t0 = (t0 + 0x4);
                                    if ((int)t1 >= (int)a5) {
                                        break;
                                    }
                                }
                                t0 = a5;
                                (((struct o40_uint *)(t4))->v) = (FUN_0c114bae(t0));
                                if (((((struct o40_int *)(t4))->v)) == 0) {
                                    t0 = 0xC15B2F8;
                                    t12 = ((int (*)(int))(mwRnaErrCallFunc))(t0);
                                    t0 = ((int)stk + 0);
                                    t0 = (t0 + 0x8);
                                    FUN_0c1070b8(t0);
                                    return 0x0;
                                }
                                t0 = t4;
                                FUN_0c1071b4(t0);
                                t1 = (unsigned char)(*(signed char *)((t4 + 0x3)));
                                t0 = t4;
                                FUN_0c107f44(t0, t1, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
                                if ((int)a5 > 0) {
                                    t17 = 0x0;
                                    for (;;) {
                                        t1 = t17;
                                        t0 = ((((struct o40_int *)(t4))->v));
                                        FUN_0c1151de(t0, t1, ((int)stk + 0), (((int)stk + 0) + 0x4));
                                        t21 = ((t17 << 2) + (t4 + 0x28));
                                        t17 = (t17 + 0x1);
                                        *(unsigned int *)((t21 + 0x0)) = (*(int *)(((int)stk + 0)));
                                        if ((int)t17 >= (int)a5) {
                                            break;
                                        }
                                    }
                                }
                            } else {
                                t0 = a5;
                                (((struct o40_uint *)(t4))->v) = (FUN_0c114bae(t0));
                                if (((((struct o40_int *)(t4))->v)) == 0) {
                                    t0 = 0xC15B2F8;
                                    t34 = ((int (*)(int))(mwRnaErrCallFunc))(t0);
                                    t0 = ((int)stk + 0);
                                    t0 = (t0 + 0x8);
                                    FUN_0c1070b8(t0);
                                    return 0x0;
                                }
                                t0 = t4;
                                FUN_0c1071b4(t0);
                                t1 = (unsigned char)(*(signed char *)((t4 + 0x3)));
                                t0 = t4;
                                FUN_0c107f44(t0, t1, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
                                if ((int)a5 > 0) {
                                    t39 = 0x0;
                                    for (;;) {
                                        t1 = t39;
                                        t0 = ((((struct o40_int *)(t4))->v));
                                        FUN_0c1151de(t0, t1, ((int)stk + 0), (((int)stk + 0) + 0x4));
                                        t43 = ((t39 << 2) + (t4 + 0x28));
                                        t39 = (t39 + 0x1);
                                        *(unsigned int *)((t43 + 0x0)) = (*(int *)(((int)stk + 0)));
                                        if ((int)t39 >= (int)a5) {
                                            break;
                                        }
                                    }
                                }
                            }
                            *(unsigned int *)((t4 + 0x30)) = ((((int)((int)(*(int *)(((int)stk + 4))) / (int)(*(int *)((t4 + 0x8))))) << 2) << 1);
                            *(unsigned char *)((t4 + 0x0)) = 0x1;
                        }
                        t0 = ((int)stk + 0);
                        t0 = (t0 + 0x8);
                        FUN_0c1070b8(t0);
                        return t4;
                    }
                }
                t54 = ((int (*)(int, int, int, int))(mwRnaErrCallFunc))(0xC15B29C, t1, a6, a7);
                t104 = 0x0;
            } else {
                FUN_0c1070a0((((int)stk + 0) + 0x8));
                t56 = FUN_0c107206();
                if (t56 == 0) {
                    t57 = ((int (*)(int))(mwRnaErrCallFunc))(0xC15B2C8);
                    t99 = t56;
                } else {
                    *(unsigned char *)((t56 + 0x3)) = a5;
                    *(unsigned char *)((t56 + 0x2)) = a5;
                    if ((int)a5 > 0) {
                        t58 = 0x0;
                        t59 = 0x0;
                        for (;;) {
                            t59 = (t59 + 0x1);
                            *(unsigned int *)((((t56 + 0x10) + t58) + 0x0)) = (*(int *)((a4 + t58)));
                            t58 = (t58 + 0x4);
                            if ((int)t59 >= (int)a5) {
                                break;
                            }
                        }
                    }
                    (((struct o40_uint *)(t56))->v) = (FUN_0c114bae(a5));
                    if (((((struct o40_int *)(t56))->v)) == 0) {
                        t70 = ((int (*)(int))(mwRnaErrCallFunc))(0xC15B2F8);
                        t92 = 0x0;
                    } else {
                        FUN_0c1071b4(t56);
                        FUN_0c107f44(t56, (unsigned char)(*(signed char *)((t56 + 0x3))), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
                        if ((int)a5 > 0) {
                            t74 = 0x0;
                            for (;;) {
                                FUN_0c1151de(((((struct o40_int *)(t56))->v)), t74, ((int)stk + 0), (((int)stk + 0) + 0x4));
                                t78 = ((t74 << 2) + (t56 + 0x28));
                                t74 = (t74 + 0x1);
                                *(unsigned int *)((t78 + 0x0)) = (*(int *)(((int)stk + 0)));
                                if ((int)t74 >= (int)a5) {
                                    break;
                                }
                            }
                        }
                        *(unsigned int *)((t56 + 0x30)) = ((((int)((int)(*(int *)(((int)stk + 4))) / (int)(*(int *)((t56 + 0x8))))) << 2) << 1);
                        *(unsigned char *)((t56 + 0x0)) = 0x1;
                        t92 = t56;
                    }
                    t99 = t92;
                }
                FUN_0c1070b8((((int)stk + 0) + 0x8));
                t104 = t99;
            }
            t115 = t104;
        } else {
            t108 = ((int (*)(int, int, int, int))(mwRnaErrCallFunc))(0xC15B29C, a5, a6, a7);
            t115 = 0x0;
        }
    } else {
        t114 = ((int (*)(int, int, int, int))(mwRnaErrCallFunc))(0xC15B26C, a5, a6, a7);
        t115 = 0x0;
    }
    return t115;
}

int vmsfs_setwork(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = a6;
    if (((*(int *)(((*(int *)0xC80DBC4) + 0x8))) == 0)) goto L_C101D60;
    if ((v0_2 == 0)) goto L_C101D60;
    v0_5 = *(int *)((((v0_1 * 0x148) + 0xC80DBC8) + 0x4));
    v0_6 = (v0_5);
    v0_7 = (0xC3471F0);
    v0_0 = (((v0_1 * 0x148) + 0xC80DBC8));
    v0_4 = (0xC3471E0);
    if ((v0_5 == 0)) goto L_C101D38;
    if ((v0_6 == 1)) goto L_C101D3E;
    if ((v0_6 == 2)) goto L_C101D44;
    if ((v0_6 == 3)) goto L_C101D4A;
    L_C101D60:;
    v0_6 = (0xFFFFFF00);
    L_C101DF4:;
    return v0_6;
    L_C101D4A:;
    v0_5 = ((*(int *)((v0_7 + 0xC))));
    v0_4 = ((*(int *)((v0_4 + 0xC))));
    L_C101D4E:;
    if (((int)(((((v0_4 + v0_5) + 0x1) << 8) << 1) + 0x20) <= (int)v0_3)) goto L_C101D66;
    goto L_C101D60;
    L_C101D66:;
    *(unsigned char *)((v0_0 + 0x2)) = 0x1;
    *(unsigned short *)((v0_0 + 0x0)) = v0_1;
    *(unsigned int *)((v0_0 + 0x1C)) = ((v0_1 * 0x4C) + 0xC812628);
    *(unsigned char *)((v0_0 + 0xA)) = 0x0;
    *(unsigned char *)((v0_0 + 0xB)) = 0x0;
    *(unsigned char *)((v0_0 + 0xC)) = 0x0;
    *(unsigned int *)((v0_0 + 0x2C)) = v0_2;
    *(unsigned int *)((v0_0 + 0x20)) = (v0_2 + 0x20);
    *(unsigned int *)((v0_0 + 0x24)) = (0x220 + v0_2);
    *(unsigned int *)((v0_0 + 0x28)) = (((((v0_4 + 0x1) << 8) << 1) + v0_2) + 0x20);
    *(unsigned short *)((v0_0 + 0xE)) = 0x1;
    *(unsigned short *)((v0_0 + 0x10)) = v0_4;
    *(unsigned short *)((v0_0 + 0x12)) = v0_5;
    *(unsigned short *)((v0_0 + 0x14)) = 0x20;
    memset((v0_0 + 0x38), 0x0, 0x10);
    memset((v0_0 + 0x48), 0x0, 0x100);
    memset((*(int *)((v0_0 + 0x2C))), 0x47, 0x20);
    memset((*(int *)((v0_0 + 0x20))), 0x53, 0x20);
    memset((*(int *)((v0_0 + 0x24))), 0x46, 0x20);
    memset((*(int *)((v0_0 + 0x28))), 0x44, 0x20);
    v0_1 = *(int *)((v0_0 + 0x1C));
    *(unsigned int *)((v0_1 + 0x30)) = (*(int *)((v0_1 + 0x1C)));
    *(unsigned char *)((v0_0 + 0x8)) = 0x1;
    *(unsigned char *)((v0_0 + 0x9)) = 0x1;
    v0_6 = (0x0);
    goto L_C101DF4;
    L_C101D44:;
    v0_5 = ((*(int *)((v0_7 + 0x8))));
    v0_4 = ((*(int *)((v0_4 + 0x8))));
    goto L_C101D4E;
    L_C101D3E:;
    v0_5 = ((*(int *)((v0_7 + 0x4))));
    v0_4 = ((*(int *)((v0_4 + 0x4))));
    goto L_C101D4E;
    L_C101D38:;
    v0_5 = ((*(int *)((v0_7 + 0x0))));
    v0_4 = ((*(int *)((v0_4 + 0x0))));
    goto L_C101D4E;
}

