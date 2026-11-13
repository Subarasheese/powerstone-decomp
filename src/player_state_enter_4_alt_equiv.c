/* player state enter handlers (table 0xC339490) and state-specific helpers; same module as the following rows up to 0c0a18f8 (0c0a0074-0c0a0188) */

int hit_build_part_shape(int, int);
int hit_dispatch_shape_pair(int, int, int, int);
int pl_get_held_item_class(int);

int FUN_0c0a00e4(int a4)
{
    int stk[6];
    register int t1;
    register int t12;
    register int t5;
    register int t11;
    register int t2;
    register int t3;
    int t4;

    hit_build_part_shape(a4, ((int)stk + 0));
    t1 = pl_get_held_item_class(a4);
    t12 = 0x0;
    if (((signed char)t1 == 0) && (((t2 = *(signed char *)((a4 + 0x71BA)), t2 != 10) || (t3 = *(signed char *)((a4 + 0x71BB)), t3 != 39)) && (t4 = *(signed char *)((a4 + 0x71BC)), t4 == 2))) {
        t5 = 0x0;
        for (;;) {
            if ((int)t5 >= (int)(*(signed char *)((a4 + 0x2D8)))) {
                return 0x0;
            }
            if ((*(signed char *)((t5 + (0x2AE + a4)))) == 10) {
                t11 = hit_dispatch_shape_pair(0x1, (*(signed char *)((((0x2B8 + a4) + t5) + 0x0))), ((int)stk + 0), (*(int *)((((t5 << 2) + (0x2C0 + a4)) + 0x0))));
                if ((signed char)t11 == 3) {
                    break;
                }
                t5 = (t5 + 0x1);
                continue;
            }
            t5 = (t5 + 0x1);
        }
        t12 = 0x1;
    }
    return t12;
}
