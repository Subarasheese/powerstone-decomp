/* player state enter handlers (table 0xC339490) and state-specific helpers; same module as the following rows up to 0c0a18f8 (0c0a0074-0c0a0188) */

int hit_build_part_shape(int, int);
int hit_dispatch_shape_pair(int, int, int, int);
int pl_get_held_item_class(int, int, int);

int FUN_0c0a0074(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register int t9;
    register int t2;
    register int t8;

    t0 = pl_get_held_item_class(a4, a5, a6);
    t9 = 0x0;
    if ((signed char)t0 == 0) {
        hit_build_part_shape(a4, ((int)stk + 0));
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)(*(signed char *)((a4 + 0x2D8)))) {
                return 0x0;
            }
            if ((*(signed char *)((t2 + (0x2AE + a4)))) == 9) {
                t8 = hit_dispatch_shape_pair(0x1, (*(signed char *)((((0x2B8 + a4) + t2) + 0x0))), ((int)stk + 0), (*(int *)((((t2 << 2) + (0x2C0 + a4)) + 0x0))));
                if ((signed char)t8 == 3) {
                    break;
                }
                t2 = (t2 + 0x1);
                continue;
            }
            t2 = (t2 + 0x1);
        }
        t9 = 0x1;
    }
    return t9;
}
