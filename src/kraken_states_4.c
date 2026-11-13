/* Kraken attack update, class handlers and state updates (part 4 of 7 of the same module) (0c086636-0c08669c) */

int pl_kraken_attack_kind78(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    return t0;
                                }
                                return ((int (*)(int, int, int, int))(0xC08662A))(a4, a5, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(0xC086606))(a4, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC0865C0))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC086578))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0864F4))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0864B6))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC08642C))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC086392))(a4, a5, a6, a7);
}
