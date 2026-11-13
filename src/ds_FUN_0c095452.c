/* Straight-line functions with calls and guards (batch gen_b): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c095452(int a4, int a5, int a6, int a7);

int FUN_0c095452(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC3391D8 + ((*(signed char *)((a4 + 0x4))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}
