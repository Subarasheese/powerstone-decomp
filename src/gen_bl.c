/* Straight-line functions with calls and guards (batch gen_bl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c04492c(int);
int FUN_0c059330(int, int, int, int);
int FUN_0c09a91a(int);
int FUN_0c09da1c(int);
int FUN_0c0a2e26(int, int, int);
int FUN_0c07da48(int a4);
int FUN_0c044b40(int a4, int a5, int a6, int a7);

int FUN_0c07da48(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        FUN_0c09a91a(a4);
        FUN_0c09da1c(a4);
        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
            return FUN_0c0a2e26(a4, 0xF, 0x0);
        }
        return 0x71AA;
    }
    FUN_0c09a91a(a4);
    return FUN_0c09da1c(a4);
}

int FUN_0c044b40(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c059330(a4, a5, a6, a7);
            }
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            return (t0 + 0x1);
        }
        return FUN_0c04492c(a4);
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    return FUN_0c04492c(a4);
}
