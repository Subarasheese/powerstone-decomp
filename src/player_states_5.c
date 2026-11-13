/* state update functions of the player state machine (table 0xC3390D4) (part 5 of 14 of the same module) (0c094950-0c094a58) */

struct o7206_uchar { char p[0x7206]; unsigned char v; };
int pl_tick_hitstop(int);
struct o24_float { char p[0x24]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c02f328(int);
int pl_step_motion(int);
int pl_mash_reduce_counter(int, int);
int pl_apply_gravity(int);
int pl_angle_to_opponent(int);
int pl_no_ground(int);
int pl_end_action_choose_state(int);

int pl_state11_update(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t1 = pl_tick_hitstop(a4);
    if ((signed char)t1 == 0) {
        if (((*(signed char *)((a4 + 0x7206))) == 0) && (t0 = *(signed char *)((a4 + 0x100)), t0 == 0)) {
        } else {
            (((struct o7206_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x7206))) + 0x1);
        }
        t0 = *(int *)((0xC3391AC + ((*(signed char *)((a4 + 0x4))) << 2)));
        return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
    }
    return (signed char)t1;
}

int pl_state13_update(int a4)
{
    int t0;
    register int t1;

    FUN_0c02f328((*(signed char *)((a4 + 0x3))));
    pl_mash_reduce_counter(a4, (0x723E + a4));
    pl_step_motion(a4);
    t1 = *(signed char *)((a4 + 0xA));
    if (t1 != 0) {
        if (t1 != 1) {
            return t1;
        }
        t1 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
        if (((short)(t1 - 1) != 0) && (t0 = *(signed char *)((a4 + 0x723E)), (int)(unsigned char)t0 > 0)) {
            return 0x723E;
        }
        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
        return pl_end_action_choose_state(a4);
    }
    t0 = pl_no_ground(a4);
    if (t0 != 0) {
        pl_apply_gravity(a4);
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    } else {
        (((struct o3C_float *)(a4))->v) = 0.0f;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) != 0) {
        if ((int)(unsigned char)(*(signed char *)((a4 + 0x723E))) <= 0) {
            return pl_end_action_choose_state(a4);
        }
        return 0x723E;
    }
    return pl_end_action_choose_state(a4);
}
