/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03e918-0c03ed0c) */

struct oEE_short { char p[0xEE]; short v; };
int fx_spawn_next_spark(int);
int FUN_0c03ebf4(int);
int FUN_0c0555dc(void);
int obj_destroy(int);

int fx_tick_03e918(int a4)
{
    int t0;
    register int t1;
    register int t2;

    t1 = *(int *)((a4 + 0x1C));
    if (((*(signed char *)((t1 + 0x71BA))) != 11) && (t0 = *(signed char *)((a4 + 0x8)), (int)t0 <= 0)) {
        *(unsigned char *)((a4 + 0x8)) = 0x1;
    }
    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return obj_destroy(a4);
        }
        FUN_0c03ebf4(a4);
        t0 = FUN_0c03ebf4(a4);
        t2 = (signed char)t0;
        if ((signed char)t0 == 0) {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        return t2;
    }
    fx_spawn_next_spark(a4);
    FUN_0c03ebf4(a4);
    t0 = 0xEE;
    if (((((struct oEE_short *)(t1))->v)) == 0) {
    } else {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}
