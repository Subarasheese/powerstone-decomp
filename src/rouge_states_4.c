/* Rouge state updates and specials (part 4 of 7 of the same module) (0c0833fa-0c08352c) */

int pl_rouge_special_id0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08321C))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC083194))(a4, a5, a6, a7);
}
