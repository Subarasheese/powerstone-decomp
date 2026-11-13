/* shared fighter code: item pickup, mode enter/update handlers (modes 1..15), hit/knock-back states (0c06588c-0c0658b8) */

int pl_step_motion(int);
int pl_end_action_choose_state(int);

int pl_mode14_update(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}
