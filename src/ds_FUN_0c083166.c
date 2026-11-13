/* Straight-line functions with calls and guards (batch gen_c): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c083166(int a4, int a5, int a6, int a7);

int FUN_0c083166(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)((a4 + 0x7209))) << 2) + 0xC3378E4));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}
