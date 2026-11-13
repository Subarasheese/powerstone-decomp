/* state update functions of the player state machine (table 0xC3390D4) (part 11 of 14 of the same module) (0c096484-0c0975c8) */

int pl_state26_phase2(int a4, int a5, int a6, int a7);
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
int _divls(void);
struct o7244_short { char p[0x7244]; short v; };


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


int pl_state37_update(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if (((((struct oEC_short *)(a4))->v)) != 0) {
        t0 = *(int *)((a4 + 0x30));
        t1 = (((struct o7244_short *)(a4))->v);
        t2 = (unsigned short)(t1 - t0);
        if ((0x8000 & (unsigned short)(t1 - t0)) != 0) {
            t2 = ((unsigned short)(t1 - t0) | 0xFFFF0000);
        }
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + ((int)((int)t2 / (int)((((struct oEC_short *)(a4))->v)))));
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
