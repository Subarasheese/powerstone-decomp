/* Garuda per-state update functions (states 11,21,22,31, specials) (part 5 of 6 of the same module) (0c07d662-0c07d7b0) */

int pl_garuda_special_id6(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC07D63A))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC07D56C))(a4, a5, a6, a7);
}
