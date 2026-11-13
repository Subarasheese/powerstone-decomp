/* Straight-line functions with calls and guards (batch gen_bw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o4_float { char p[0x4]; float v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c09c45a(int);
int cam_set_shake_ramp(int, int);
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_apply_acceleration(int);
int pl_apply_velocity(int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int pl_landed(int);
int pl_ryoma_cue_table_next(int, int, int, int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_timer_arm_forever(int);
int snd_play_char_voice(int, int);
int snd_play_side_se(int, int);
int FUN_0c07ca78(int a4);
int FUN_0c06c8b0(int a4);

int FUN_0c07ca78(int a4)
{
    int stk[3];
    register int t3;
    register int t19;
    register int t17;
    register int t18;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((a4 + 0x1C))) + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
    t3 = pl_landed(a4);
    t19 = (signed char)t3;
    if ((signed char)t3 != 0) {
        obj_set_owner_hit_record(a4, 0x32);
        obj_force_owner_state27(a4, 0x32);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x20)); }
        (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(((int)stk + 0)))->v)) + 30.0f);
        FUN_0c09c45a(a4);
        snd_play_char_voice(a4, 0x7);
        cam_set_shake_ramp(0x14, 0x14);
        pl_start_motion(a4, 0x0, 0x9);
        snd_play_side_se((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3))), 0x10);
        snd_play_char_voice((*(int *)((a4 + 0x1C))), 0xC);
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        t17 = *(int *)((a4 + 0x1C));
        t18 = *(signed char *)((t17 + 0xC));
        *(unsigned char *)((t17 + 0xC)) = (t18 + 0x1);
        t19 = (t18 + 0x1);
    }
    return t19;
}

int FUN_0c06c8b0(int a4)
{
    int stk[6];
    register int t2;
    register int t17;
    register int t8;
    register int t9;
    register int t11;

    (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
    t2 = *(signed char *)((a4 + 0xF2));
    pl_ryoma_cue_table_next(a4, ((signed char)((t2 << 1) + t2) + 0xC14F1FD), ((((struct oF0_short *)(a4))->v)), (0xF2 + a4));
    if (((((struct oF0_short *)(a4))->v)) == 37) {
        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
            *(int *)((int)stk + 12) = 0xC14EF2C;
            *(int *)((int)stk + 8) = 0xC14EF20;
            *(int *)((int)stk + 4) = 0x42;
            *(int *)((int)stk + 0) = 0x1C;
            t8 = 0xC14EF2C;
            t9 = 0xC14EF20;
            t11 = 0x11;
        } else {
            *(int *)((int)stk + 12) = 0xC14EF44;
            *(int *)((int)stk + 8) = 0xC14EF38;
            *(int *)((int)stk + 4) = 0x42;
            *(int *)((int)stk + 0) = 0x1C;
            t8 = 0xC14EF44;
            t9 = 0xC14EF38;
            t11 = 0x1A;
        }
        fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x1, t11, 0x1, 0x1C, 0x42, t9, t8);
    }
    t17 = pl_step_motion(a4);
    if ((signed char)t17 != 0) {
        pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
        return pl_timer_arm_forever(a4);
    }
    return (signed char)t17;
}
