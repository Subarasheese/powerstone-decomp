/* Straight-line functions with calls and guards (batch gen_dj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o7223_uchar { char p[0x7223]; unsigned char v; };
int pl_end_action_choose_state(int);
int FUN_0c0862a8(int a4);

int FUN_0c0862a8(int a4)
{
    (((struct o7223_uchar *)(a4))->v) = 0x0;
    return pl_end_action_choose_state(a4);
}
