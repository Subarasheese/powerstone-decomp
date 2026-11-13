/* Straight-line functions with calls and guards (batch gen_bt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlLoadMatrix(int, int, int, int);
int nlMultiMatrix(int);
int FUN_0c0e3330(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);

int FUN_0c0e3330(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    nlLoadMatrix(0xC7FCEE8, a5, a6, a7);
    return nlMultiMatrix(0xC7FCEA8);
}
