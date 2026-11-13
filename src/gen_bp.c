/* Straight-line functions with calls and guards (batch gen_bp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o7205_uchar { char p[0x7205]; unsigned char v; };
struct o7206_uchar { char p[0x7206]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int ADXERR_CallErrFunc(int, int, int, int, int);
int ADXRNA_SetOutPan(int, int, int, int);
int FUN_0c0555dc(void);
int obj_destroy(int, int, int, int);
int pl_wangtang_wait_anim_end_e(int);
int FUN_0c08a9a8(int);
int FUN_0c097fc4(int);
int pl_timer_arm_forever(int);
int pl_step_motion(int);
int pl_tick_hitstop(int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int pl_change_state(int, int, int, int);
int FUN_0c0a3dcc(int, int);
int obj_find_hitting_player(int);
int stage_obj_on_break(int);
int FUN_0c0ae4f0(int);
int FUN_0c0ae520(int);
int stage_gimmick_22_spawn_b(int, int);
int stage_gimmick_23_spawn_b(int, int);
int FUN_0c097e22(int a4);
int pl_wangtang_state12_phase1(int a4);
int stage_type02_mode_03(int a4);
int stage_type12_mode_02(int a4, int a5, int a6, int a7);
int stage_gimmick_22_update(int a4, int a5, int a6, int a7);
int stage_gimmick_23_update(int a4, int a5, int a6, int a7);
int pl_mode12_phase3(int a4);
int fx_tick_03adf8(int a4, int a5, int a6, int a7);
int stage_gimmick_28_update(int a4, int a5, int a6, int a7);
int fx_tick_03a024(int a4, int a5, int a6, int a7);
int pl_wangtang_attack_kind57(int a4, int a5, int a6, int a7);
int FUN_0c0f4d74(int a4, int a5, int a6, int a7);

int FUN_0c0f4d74(int a4, int a5, int a6, int a7)
{
    *(unsigned short *)((((a5 << 1) + (a4 + 0x42)) + 0x0)) = a6;
    if ((int)a5 < (int)(*(signed char *)((a4 + 0x3)))) {
        return ADXRNA_SetOutPan((*(int *)((a4 + 0xC))), a5, a6, a7);
    }
    return (ADXERR_CallErrFunc(a4, a5, a6, a7, 0xC15A8E8));
}
