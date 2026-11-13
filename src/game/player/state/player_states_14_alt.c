/* state update functions of the player state machine (table 0xC3390D4) (part 14 of 14 of the same module) (0c09788c-0c097c26) */

struct o71F0_uchar { char p[0x71F0]; unsigned char v; };
int FUN_0c09c5f4(int);
int pl_tick_hitstop(int);

int FUN_0c097b10(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    register int t3;

    if (((*(signed char *)((a4 + 0x71F0))) != 0) && (t0 = *(signed char *)((a4 + 0x10B)), t0 == 0)) {
        (((struct o71F0_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x71F0))) - 1);
    }
    t0 = *(signed char *)((a4 + 0x71BA));
    if ((t0 != 10) && (t0 != 11)) {
        t0 = pl_tick_hitstop(a4);
        if ((signed char)t0 == 0) {
            if (((*(signed char *)((a4 + 0x71F1))) != 0) && (t1 = *(signed char *)((a4 + 0x71BA)), t1 != 11)) {
                t1 = FUN_0c09c5f4(a4);
                if ((signed char)t1 == 0) {
                    t3 = *(int *)((((*(signed char *)((a4 + 0x71BA))) << 2) + 0xC339260));
                    return ((int (*)(int, int, int, int))(t3))(a4, a5, a6, a7);
                }
                return (signed char)t1;
            }
            t1 = *(int *)((((*(signed char *)((a4 + 0x71BA))) << 2) + 0xC339260));
            return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
        }
        return (signed char)t0;
    }
    if (((*(signed char *)((a4 + 0x71F1))) != 0) && (t2 = *(signed char *)((a4 + 0x71BA)), t2 != 11)) {
        t0 = FUN_0c09c5f4(a4);
        if ((signed char)t0 == 0) {
            t1 = *(int *)((((*(signed char *)((a4 + 0x71BA))) << 2) + 0xC339260));
            return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
        }
        return (signed char)t0;
    }
    t0 = *(int *)((((*(signed char *)((a4 + 0x71BA))) << 2) + 0xC339260));
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
}
