/* secondary actor objects (arena clamp, angle helpers, owner transforms) (part 6 of 6 of the same module) (0c08c648-0c08c864) */

int pl_end_action_reset(int);
int pl_step_motion(int);

int FUN_0c08c7de(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_reset(a4);
    }
    return (signed char)t0;
}
