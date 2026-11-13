/* Straight-line functions with calls and guards (batch gen_cu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0555dc(void);
int FUN_0c05d536(int);
int FUN_0c05d594(int, int, int, int, int, int, int, int, int, int, int, int);
int obj_destroy(int);
int thunk_FUN_0c059330(int);
int FUN_0c05d4e4(int a4);

int FUN_0c05d4e4(int a4)
{
    int stk[2];
    register int t0;
    register int t2;
    register int t3;
    register int t5;
    register int t7;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        return obj_destroy(a4);
    }
    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                t3 = *(signed char *)((a4 + 0xD));
                *(unsigned char *)(((0xC7F2974 + t3) + 0x0)) = 0x1;
                return t3;
            }
            return thunk_FUN_0c059330(a4);
        }
        FUN_0c05d594(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        t5 = *(signed char *)((a4 + 0xD));
        *(unsigned char *)(((0xC7F2974 + t5) + 0x0)) = 0x1;
        return t5;
    }
    FUN_0c05d536(a4);
    t7 = *(signed char *)((a4 + 0xD));
    *(unsigned char *)(((0xC7F2974 + t7) + 0x0)) = 0x1;
    return t7;
}
