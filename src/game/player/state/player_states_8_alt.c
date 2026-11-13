/* state update functions of the player state machine (table 0xC3390D4) (part 8 of 14 of the same module) (0c095430-0c095ef8) */

struct o106_uchar { char p[0x106]; unsigned char v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c05fc00(void);
int pl_state23_phase0(int, int, int, int);
int pl_state23_phase1(int);
int pl_end_action_choose_state(int);
struct o24_float { char p[0x24]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o48_float { char p[0x48]; float v; };
int pl_step_motion(int);
int pl_spawn_hit_effect_with_se(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_landed(int);
int pl_change_state(int, int, int);

int pl_state23_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        pl_state23_phase1(a4);
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o7236_uchar *)(a4))->v) = 0x0;
            (((struct o71CC_uint *)(a4))->v) = 0x0;
            return pl_end_action_choose_state(a4);
        }
        return 0xEC;
    }
    (((struct o106_uchar *)(a4))->v) = 0x1;
    pl_state23_phase0(a4, a5, a6, a7);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned short *)0xC7F3194 = 0x0;
        FUN_0c05fc00();
        (((struct o7236_uchar *)(a4))->v) = 0x0;
        (((struct o71CC_uint *)(a4))->v) = 0x0;
        return pl_end_action_choose_state(a4);
    }
    return 0xEC;
}

int pl_state30_update(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t0 = pl_landed(a4);
        if ((signed char)t0 != 0) {
            pl_spawn_hit_effect_with_se(a4);
            return pl_change_state(a4, 0x6, 0x0);
        }
    }
    pl_step_motion(a4);
    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        pl_apply_velocity(a4);
        return pl_apply_acceleration(a4);
    }
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    u0 = (((struct o3C_float *)(a4))->v);
    u1 = (((struct o48_float *)(a4))->v);
    (((struct o3C_float *)(a4))->v) = (u0 + u1);
    t0 = 0x3C;
    if (0.0f > (u0 + u1)) {
        t1 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}
