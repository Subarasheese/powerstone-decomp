/* Valgas (chars 9/10) frame hook, attack dispatch, move init stubs (part 2 of 2 of the same module) (0c087d60-0c08975c) */

int pl_valgas_mode04_phase1(int);
int pl_valgas_mode04_phase2(int);
int pl_valgas_mode04_phase3(int);
int pl_valgas_mode04_phase4(int);

int pl_valgas_mode04_update(int a4, int a5, int a6, int a7)
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
                    return pl_valgas_mode04_phase4(a4);
                }
                return pl_valgas_mode04_phase3(a4);
            }
            return pl_valgas_mode04_phase2(a4);
        }
        return pl_valgas_mode04_phase1(a4);
    }
    return ((int (*)(int, int, int, int))(0xC088048))(a4, a5, a6, a7);
}
