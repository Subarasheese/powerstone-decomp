/* Straight-line functions with calls and guards (batch gen_q): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdFsWaitCompleteReq(int);
int FUN_0c0f184c(int, int, int);
int gdFsReqRd32(int, int, int);
int gdFsRead(int a4, int a5, int a6);

int gdFsRead(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t3 = 0x0;
    if ((0x1F & a6) == 0) {
        t3 = 0x1;
    }
    t4 = 0x1F;
    t5 = 0x0;
    t6 = a5;
    t7 = 0x0;
    for (;;) {
        if ((int)t7 >= (int)0x4E20) {
            break;
        }
        t8 = t3;
        if (t8 == 1) {
            t6 = a5;
            t5 = a4;
            t8 = (gdFsReqRd32(t5, t6, a6));
        } else {
            t6 = a5;
            t5 = a4;
            t8 = (FUN_0c0f184c(t5, t6, a6));
        }
        t5 = t8;
        if ((t5 == 0) && ((a5 != 0) && (t0 = *(int *)((a4 + 0x14)), t1 = t0, t2 = *(int *)((a4 + 0x10)), t4 = t2, (int)t1 < (int)t4))) {
            t6 = 0xC350;
            for (;;) {
                if (t6 == 0) {
                    break;
                }
                t6 = (t6 - 1);
            }
            t7 = (t7 + 0x1);
            continue;
        }
        break;
    }
    t0 = 0xFFFFFFEB;
    if (t7 == 0x4E20) {
    } else {
        t1 = t5;
        if ((int)t5 >= 0) {
            t1 = (gdFsWaitCompleteReq(a4));
        }
        t0 = t1;
    }
    return t0;
}
