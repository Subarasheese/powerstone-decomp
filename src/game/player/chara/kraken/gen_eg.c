/* Straight-line functions with calls and guards (batch gen_eg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o7223_uchar { char p[0x7223]; unsigned char v; };
int pl_end_action_choose_state(int);
int pl_kraken_attack_kind6_phase7(int a4);
int pl_kraken_attack_kind2_phase5(int a4);

int pl_kraken_attack_kind6_phase7(int a4)
{
    (((struct o7223_uchar *)(a4))->v) = 0x0;
    return pl_end_action_choose_state(a4);
}

int pl_kraken_attack_kind2_phase5(int a4)
{
    (((struct o7223_uchar *)(a4))->v) = 0x0;
    return pl_end_action_choose_state(a4);
}
