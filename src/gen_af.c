/* Straight-line functions with calls and guards (batch gen_af): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o71C8_int { char p[0x71C8]; int v; };
struct o72A4_short { char p[0x72A4]; short v; };
int FUN_0c0555c4(void);
int FUN_0c08e382(int);
int FUN_0c09c6b8(int, int, int);
int FUN_0c09fe68(int);
int FUN_0c0a2e26(int, int, int, int, int, int, int, int, int);
int FUN_0c0ac780(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c08f6c8(int a4);
int FUN_0c09feba(int a4, int a5, int a6);

int FUN_0c08f6c8(int a4)
{
    int stk[2];
    register int t3;
    register int t4;
    register int t1;
    int t2;

    if (((*(signed char *)((a4 + 0x71DD))) != 2) && ((t1 = *(signed char *)((a4 + 0x72AC)), t1 != 0) && (t2 = (((struct o72A4_short *)(a4))->v), t2 == 0))) {
        t3 = FUN_0c0555c4();
        if (t3 != 0) {
            t4 = FUN_0c09fe68(a4);
            if ((signed char)t4 != 0) {
                FUN_0c08e382(a4);
                FUN_0c0a2e26(a4, 0x22, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c09feba(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t7;
    register int t1;
    register int t2;
    register int t3;
    int t4;

    t0 = FUN_0c09c6b8(a4, a5, a6);
    if (((signed char)t0 == 0) && (((t1 = *(signed char *)((a4 + 0x71BA)), t1 != 10) || (t2 = *(signed char *)((a4 + 0x71BB)), t2 != 26)) && ((t3 = *(signed char *)((a4 + 0x71BC)), t3 == 2) && (t4 = (((struct o71C8_int *)(a4))->v), t4 != 0)))) {
        t7 = FUN_0c0ac780(((((struct o71C8_int *)(a4))->v)), 0x2, (*(signed char *)((a4 + 0x3))), 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        if (t7 != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}
