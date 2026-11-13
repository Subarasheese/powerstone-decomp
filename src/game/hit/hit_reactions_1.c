/* hit reaction handlers (table indexed by +71DD) and dispatcher (part 1 of 2 of the same module) (0c09111e-0c09153c) */

int pl_hitreact_17_update(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0xB))) > 0) && (t0 = *(signed char *)((a4 + 0x10B)), t0 != 0)) {
        return 0x10B;
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0910C0))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC091028))(a4, a5, a6, a7);
}
