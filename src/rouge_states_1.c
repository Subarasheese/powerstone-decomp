/* Rouge state updates and specials (part 1 of 7 of the same module) (0c081a46-0c082efc) */

int FUN_0c081a46(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC081A20))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC081984))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC081940))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0818C4))(a4, a5, a6, a7);
}

int FUN_0c081b98(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return ((int (*)(int, int, int, int))(0xC081B72))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC081B1C))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC081AD2))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC081A70))(a4, a5, a6, a7);
}
