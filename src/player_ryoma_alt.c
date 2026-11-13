/* character 1 (Ryoma) (0c069a98-0c06ce50) */

int FUN_0c06b8ee(int, int);
int pl_step_motion(int);
int pl_apply_motion_translation(int);
int pl_turn_to_opponent(int, int);
int pl_end_action_choose_state(int);
struct o3C_float { char p[0x3C]; float v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_landed(int);
int pl_change_state(int, int, int);
typedef struct { char vals[13]; } byte13;
typedef struct { float vals[13]; } float13;
extern void pl_start_motion(char *, int, int);
extern void pl_set_velocity_forward(char *, int, float);

int pl_ryoma_mode04_phase2(int a4)
{
    pl_turn_to_opponent(a4, 0x71C);
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int pl_ryoma_wait_anim_end(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int pl_ryoma_mode10_phase2(int a4)
{
    register int t1;

    pl_apply_motion_translation(a4);
    t1 = pl_step_motion(a4);
    if ((signed char)t1 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t1;
}

int pl_ryoma_mode01_03_update_v0(int a4)
{
    register int t0;
    register int t1;

    if (!(((((struct o3C_float *)(a4))->v)) > 0.0f)) {
        t0 = pl_landed(a4);
        if ((signed char)t0 != 0) {
            return pl_change_state(a4, 0x6, 0x0);
        }
    }
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 + 0x1);
    if ((short)(t0 + 0x1) == 3) {
        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
            t0 = 0xC14EECC;
            t1 = 0xC14EEC0;
        } else {
            t0 = 0xC14EEE4;
            t1 = 0xC14EED8;
        }
        fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x1, 0x5, 0x1, 0x14, 0x52, t1, t0);
    }
    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

void pl_ryoma_start_action(char *obj)
{
    byte13 tbl_a, tbl_b, tbl_c, tbl_d;
    float13 tbl_f;
    int mode_idx;

    tbl_a = *(byte13 *)0x0C14EF98;
    tbl_f = *(float13 *)0x0C14EFA8;
    tbl_b = *(byte13 *)0x0C14EFDC;
    tbl_c = *(byte13 *)0x0C14EFE9;
    tbl_d = *(byte13 *)0x0C14EFF6;
    *(short *)(obj + 0xF0) = 0;
    pl_start_motion(obj, 1, tbl_a.vals[obj[0x7238]]);
    obj[0x710C] = tbl_d.vals[obj[0x7238]];
    if (tbl_b.vals[obj[0x7238]] > 0) {
        mode_idx = obj[0x7238];
        pl_set_velocity_forward(obj, tbl_b.vals[mode_idx], tbl_f.vals[mode_idx]);
    } else {
        *(float *)(obj + 76) = 0.0f;
        *(float *)(obj + 72) = 0.0f;
        *(float *)(obj + 68) = 0.0f;
        *(float *)(obj + 64) = 0.0f;
        *(float *)(obj + 60) = 0.0f;
        *(float *)(obj + 56) = 0.0f;
    }
    if (tbl_c.vals[obj[0x7238]] != 0) {
        obj[0x71A9] = 1;
        obj[0x71A8] = 1;
    }
}

int pl_ryoma_wait_anim_end_b(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int pl_ryoma_attack_kind2_phase4(int a4)
{
    register int t2;

    FUN_0c06b8ee(a4, 0xC14F0CC);
    pl_apply_motion_translation(a4);
    t2 = pl_step_motion(a4);
    if ((signed char)t2 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t2;
}

int pl_ryoma_attack_kind4_phase5(int a4)
{
    register int t2;

    FUN_0c06b8ee(a4, 0xC14F0CC);
    pl_apply_motion_translation(a4);
    t2 = pl_step_motion(a4);
    if ((signed char)t2 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t2;
}
