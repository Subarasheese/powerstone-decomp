int pl_kraken_attack_kind2_phase5(int);
int pl_kraken_attack_kind6_phase7(int);
int pl_kraken_attack_kind6_phase1(int);
/* Straight-line functions with calls and guards (batch gen_ee): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int pl_kraken_attack_kind2_phase0(int);
int pl_kraken_attack_kind2_phase1(int);
int pl_kraken_attack_kind2_phase2(int);
int pl_kraken_attack_kind2_phase3(int);
int pl_kraken_attack_kind2_phase4(int);
int pl_kraken_attack_kind2_phase6(int);
int pl_kraken_attack_kind6_phase0(int);
int pl_kraken_attack_kind6_phase2(int);
int pl_kraken_attack_kind6_phase3(int);
int pl_kraken_attack_kind6_phase4(int);
int pl_kraken_attack_kind6_phase5(int);
int pl_kraken_attack_kind6_phase6(int);
int pl_kraken_attack_kind6(int a4);
int pl_kraken_attack_kind2(int a4);

int pl_kraken_attack_kind6(int a4)
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
                                return pl_kraken_attack_kind6_phase7(a4);
                            }
                            return pl_kraken_attack_kind6_phase6(a4);
                        }
                        return pl_kraken_attack_kind6_phase5(a4);
                    }
                    return pl_kraken_attack_kind6_phase4(a4);
                }
                return pl_kraken_attack_kind6_phase3(a4);
            }
            return pl_kraken_attack_kind6_phase2(a4);
        }
        return pl_kraken_attack_kind6_phase1(a4);
    }
    return pl_kraken_attack_kind6_phase0(a4);
}

int pl_kraken_attack_kind2(int a4)
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
                                return t0;
                            }
                            return pl_kraken_attack_kind2_phase6(a4);
                        }
                        return pl_kraken_attack_kind2_phase5(a4);
                    }
                    return pl_kraken_attack_kind2_phase4(a4);
                }
                return pl_kraken_attack_kind2_phase3(a4);
            }
            return pl_kraken_attack_kind2_phase2(a4);
        }
        return pl_kraken_attack_kind2_phase1(a4);
    }
    return pl_kraken_attack_kind2_phase0(a4);
}
