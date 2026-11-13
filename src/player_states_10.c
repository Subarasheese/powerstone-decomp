/* state update functions of the player state machine (table 0xC3390D4) (part 10 of 14 of the same module) (0c09646a-0c096484) */

int pl_state33_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC096464))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC096454))(a4, a5, a6, a7);
}
