/* Garuda per-state update functions (states 11,21,22,31, specials) (part 3 of 6 of the same module) (0c07cb42-0c07cda6) */

int pl_garuda_special_id2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC07CB1C))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC07CA78))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC07C9DA))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC07C8F0))(a4, a5, a6, a7);
}
