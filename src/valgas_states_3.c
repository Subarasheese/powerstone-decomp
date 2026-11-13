/* Valgas attack update and state updates (part 3 of 3 of the same module) (0c08a106-0c08a140) */

int pl_valgas_victim_dispatch(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC08A0C8))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC08A09C))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08A06C))(a4, a5, a6, a7);
}
