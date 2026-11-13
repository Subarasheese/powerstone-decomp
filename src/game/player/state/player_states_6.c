/* state update functions of the player state machine (table 0xC3390D4) (part 6 of 14 of the same module) (0c094a58-0c09511c) */

struct o3C_float { char p[0x3C]; float v; };
int pl_step_motion(int);
int pl_apply_velocity(int);
int pl_apply_gravity(int);
int pl_landed(int);
int pl_change_state(int, int, int);
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int pl_state16_walk_step(int, int, int, int, float);
int pl_start_motion(int, int, int);
int pl_no_ground(int);
struct o720C_ushort { char p[0x720C]; unsigned short v; };
int pl_state16_phase_dispatch(int);

int pl_state_fall_update(int a4)
{
    register int t4;

    pl_apply_gravity(a4);
    pl_apply_velocity(a4);
    pl_step_motion(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t4 = pl_landed(a4);
        if ((signed char)t4 != 0) {
            return pl_change_state(a4, 0x6, 0x0);
        }
        return (signed char)t4;
    }
    return 0x3C;
}

int pl_state15_update(int a4)
{
    register int t0;

    (((struct o106_uchar *)(a4))->v) = 0x1;
    t0 = pl_no_ground(a4);
    if (t0 != 0) {
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    } else {
        (((struct o3C_float *)(a4))->v) = 0.0f;
    }
    if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            return pl_change_state(a4, 0x10, 0x0);
        }
        return pl_step_motion(a4);
    }
    return pl_step_motion(a4);
}

int pl_state16_phase0(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;

    t0 = pl_state16_walk_step(a4, a5, a6, a7, f4);
    t1 = (signed char)t0;
    if ((signed char)t0 == 0) {
        t0 = pl_step_motion(a4);
        t1 = (signed char)t0;
        if ((signed char)t0 != 0) {
            pl_start_motion(a4, 0x2, 0x9E);
            t0 = *(signed char *)((a4 + 0xB));
            *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
    }
    return t1;
}

int pl_state16_phase1(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;
    register int t2;

    t1 = pl_state16_walk_step(a4, a5, a6, a7, f4);
    if ((signed char)t1 == 0) {
        pl_step_motion(a4);
        t2 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
        if (((short)(t2 - 1) != 0) && (t0 = (((struct o2E4_int *)(a4))->v), (t0 & 0x600) == 0)) {
            t0 = (((struct o2E4_int *)(a4))->v);
            if ((t0 & 4) != 0) {
                return pl_change_state(a4, 0x5, 0x0);
            }
            return t0;
        }
        pl_start_motion(a4, 0x2, 0x9F);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        t0 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
        return (t0 + 0x1);
    }
    return (signed char)t1;
}

int pl_state16_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    (((struct o106_uchar *)(a4))->v) = 0x1;
    (((struct o720C_ushort *)(a4))->v) = 0x5;
    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_state16_phase_dispatch(a4);
    }
    return ((int (*)(int, int, int, int))(0xC094B02))(a4, a5, a6, a7);
}
