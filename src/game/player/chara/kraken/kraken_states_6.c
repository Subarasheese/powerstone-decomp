/* Kraken attack update, class handlers and state updates (part 6 of 7 of the same module) (0c086d26-0c086d98) */

int pl_kraken_special_id2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return ((int (*)(int, int, int, int))(0xC086CF8))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC086C34))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC086B86))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC086AB0))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC086A04))(a4, a5, a6, a7);
}
