
int hit_find_contact_direction(int a4)
{
    int stk[7];
    register int t2;
    register int t4;
    register int t24;
    register int t25;
    register int t29;
    register int t1;
    register int t3;
    register int t15;
    register int t16;
    register int t17;
    int t18;
    register int t19;

    hit_build_part_shape(a4, ((int)stk + 4));
    t2 = t1;
    t4 = 0x0;
    for (;;) {
        if ((int)t4 >= (int)(*(signed char *)((a4 + 0x2A8)))) {
            break;
        }
        if (((*(signed char *)(((*(int *)(((0x294 + a4) + (t4 << 2)))) + 0x2))) == 2) && ((t15 = *(signed char *)((t4 + (0x2A9 + a4))), t15 == 2) && ((t16 = *(int *)((((t4 << 2) + (0x294 + a4)) + 0x0)), t17 = *(signed char *)((t16 + 0x30D)), t17 == 0) && (t18 = *(int *)(((0x294 + a4) + (t4 << 2))), t19 = *(signed char *)((0x2D9 + t18)), t19 != 2)))) {
            t3 = t4;
            t3 = (t3 << 2);
            *(int *)((int)stk + 0) = ((*(int *)((((0x294 + a4) + t3) + 0x0))));
            t2 = 0x1;
            t24 = FUN_0c026076(t2, (*(signed char *)((((0x2A9 + a4) + t4) + 0x0))), ((int)stk + 4), (*(int *)((((0x280 + a4) + t3) + 0x0))));
            t2 = t24;
            if ((int)(signed char)t24 < (int)0x4) {
                t4 = (t4 + 0x1);
                continue;
            }
            return t2;
        }
        t4 = (t4 + 0x1);
    }
    t25 = 0x0;
    for (;;) {
        if ((int)t25 >= (int)(*(signed char *)((a4 + 0x2D8)))) {
            return 0x0;
        }
        t29 = hit_dispatch_shape_pair(0x1, (*(signed char *)((((0x2B8 + a4) + t25) + 0x0))), ((int)stk + 4), (*(int *)((((t25 << 2) + (0x2C0 + a4)) + 0x0))));
        if ((int)(signed char)t29 >= (int)0x4) {
            break;
        }
        t25 = (t25 + 0x1);
    }
    return t29;
}
