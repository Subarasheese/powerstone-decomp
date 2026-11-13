/* character 0 (Falcon): frame hook, state dispatchers, start-action wrappers, specials, victim hooks (0c067d4c-0c068e10) */

struct o719E_short { char p[0x719E]; short v; };
int pl_step_motion(int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a3dcc(int, int);

int pl_falcon_state12_phase1(int a4)
{
    int stk[2];
    register int t0;
    register int t4;
    register int t6;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    }
    t4 = *(signed char *)((a4 + 0x71A5));
    if ((unsigned char)t4 == 1) {
        t6 = (((struct o719E_short *)(a4))->v);
        if (((unsigned short)t6 != 42) && (((unsigned short)t6 != 74) && ((unsigned short)t6 != 108))) {
            return (unsigned short)t6;
        }
        return FUN_0c0a3dcc((*(signed char *)((a4 + 0x3))), (*(signed char *)((a4 + 0x27C))));
    }
    return (unsigned char)t4;
}
