/* state update functions of the player state machine (table 0xC3390D4) (part 11 of 14 of the same module) (0c096484-0c0975c8) */

struct o2DC_int { char p[0x2DC]; int v; };
int FUN_0c09660c(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_apply_velocity(int);
int pl_change_state(int, int, int);
struct oF2_short { char p[0xF2]; short v; };
int FUN_0c096a64(int);
struct o7207_uchar { char p[0x7207]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int pl_apply_motion_translation(int);
int pl_no_ground(int);
int pl_end_action_choose_state(int);
int FUN_0c0e6d00(void);

int pl_state34_phase2(int a4)
{
    register int t1;

    if ((((((struct o2DC_int *)(a4))->v)) & 48) != 0) {
        t1 = FUN_0c09660c(a4);
        if ((signed char)t1 != 0) {
            return pl_change_state(a4, 0x6, 0x0);
        }
        pl_step_motion(a4);
        return pl_apply_velocity(a4);
    }
    pl_start_motion(a4, 0x2, 0xD4);
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    return 0x0;
}

int pl_state26_phase2(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((((((struct o2DC_int *)(a4))->v)) & 48) != 0) {
        t0 = FUN_0c096a64(a4);
        if ((signed char)t0 != 1) {
            if ((signed char)t0 != 2) {
                pl_step_motion(a4);
                pl_apply_velocity(a4);
                if (((((struct oF2_short *)(a4))->v)) == 0) {
                    t0 = *(signed char *)((a4 + 0x27C));
                    *(volatile signed char *)((a4 + 0x3));
                    return ((int (*)(int, int, int, int))(0xC096C52))(a4, t0, 0x0, a7);
                }
                return ((int (*)(void))(0xC096C5C))();
            }
            *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
            return pl_change_state(a4, 0x5, 0x5);
        }
        return pl_change_state(a4, 0x6, 0x0);
    }
    pl_start_motion(a4, 0x2, 0xD8);
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    return 0x0;
}

int pl_state37_update(int a4)
{
    register int t0;

    if (((((struct oEC_short *)(a4))->v)) != 0) {
        *(volatile int *)((a4 + 0x30));
        *(volatile short *)((a4 + 0x7244));
        
        *(volatile short *)((a4 + 0xEC));
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + (FUN_0c0e6d00()));
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o7207_uchar *)(a4))->v) = 0x1;
    }
    t0 = pl_no_ground(a4);
    if (t0 != 0) {
        return pl_change_state(a4, 0xE, 0x0);
    }
    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return pl_apply_motion_translation(a4);
}
