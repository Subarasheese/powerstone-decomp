/* character 2 (Wang Tang) (0c070b46-0c071264) */

int pl_wangtang_attack_kind13(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC070A06))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC07080E))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC070618))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC070598))(a4, a5, a6, a7);
}
