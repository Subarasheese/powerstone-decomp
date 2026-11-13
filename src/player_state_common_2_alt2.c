/* shared fighter code: item pickup, mode enter/update handlers (modes 1..15), hit/knock-back states (0c0641a0-0c064a1c) */

struct o719E_short { char p[0x719E]; short v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int snd_play_side_se(int, int);
int snd_play_stage_obj_se(int, int, int);
int obj_set_mode_owner(int, int, int);

int FUN_0c0645f6(int a4)
{
    int stk[2];
    register int t0;
    register int t5;
    register int t9;
    int t10;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x2, 0x5B);
        t5 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t5 + 0x1);
        return (t5 + 0x1);
    }
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 9) {
        t9 = (((struct o71CC_int *)(a4))->v);
        if ((t9 != 0) && (t10 = *(signed char *)((t9 + 0x30D)), t10 == 5)) {
            obj_set_mode_owner(((((struct o71CC_int *)(a4))->v)), 0x12, (*(signed char *)((a4 + 0x3))));
            snd_play_stage_obj_se(0x0, (*(signed char *)((a4 + 0x3))), 0x0);
        } else {
            (((struct o7236_uchar *)(a4))->v) = 0x0;
            pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        }
        snd_play_side_se((*(signed char *)((a4 + 0x3))), 0xE);
    }
    return pl_apply_motion_translation(a4);
}
