/* shared fighter code: item pickup, mode enter/update handlers (modes 1..15), hit/knock-back states (0c064b7c-0c064cc8) */

int pl_step_motion(int);
int pl_change_state(int, int, int);

int FUN_0c064c66(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_change_state(a4, 0xE, 0x0);
    }
    return (signed char)t0;
}
