/* Garuda per-state update functions (states 11,21,22,31, specials) (part 4 of 6 of the same module) (0c07cda6-0c07d662) */

int pl_garuda_special_id3(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC07CD24))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC07CC8E))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC07CC52))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC07CBA8))(a4, a5, a6, a7);
}

int pl_garuda_special_id9(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC07D2F4))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC07D1B6))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC07D4A8))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC07D3A2))(a4, a5, a6, a7);
}
