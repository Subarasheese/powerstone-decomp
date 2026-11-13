/* Kraken attack update, class handlers and state updates (part 5 of 7 of the same module) (0c08669c-0c086d26) */

int pl_detect_special_input(int, int);

int pl_kraken_get_state28_action(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_detect_special_input(a4, 0xC337E40);
    t1 = 0x1;
    if ((signed char)t0 != 0) {
    } else {
        t0 = pl_detect_special_input(a4, 0xC337E2C);
        t1 = 0x0;
        if ((signed char)t0 != 0) {
        } else {
            t0 = pl_detect_special_input(a4, 0xC337E54);
            t1 = 0x63;
            if ((signed char)t0 != 0) {
                t1 = 0x2;
            }
        }
    }
    return t1;
}

int pl_kraken_special_move_dispatch(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)((a4 + 0x7209))) << 2) + 0xC337E68));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int pl_kraken_special_id0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC086794))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0866FA))(a4, a5, a6, a7);
}
