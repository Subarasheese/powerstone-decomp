/* nl layer-object control helpers (end-of-frame) (0c0dca60-0c0dcae0) */

int FUN_0c0efc6a(int, int, int, int, int, int);

int FUN_0c0dca60(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;

    t0 = *(int *)0xC7F8E9C;
    t1 = *(int *)((t0 + 0x0));
    *(unsigned int *)((t0 + 0x0)) = (t1 | 0x800000);
    t0 = (t1 | 0x800000);
    t1 = 0x800000;
    t2 = 0xC7F8E9C;
    t3 = a4;
    t4 = a5;
    t5 = a6;
    t6 = a7;
    t7 = 0x0;
    t8 = a8;
    for (;;) {
        if ((t8 & 0x1) != 0) {
            t1 = a7;
            t3 = 0xC7F8E98;
            t5 = a4;
            t6 = a5;
            t4 = t7;
            t0 = (FUN_0c0efc6a(t3, t4, t5, t6, a6, (t1)));
        } else {
            t9 = t1;
            t10 = t2;
            t11 = t3;
            t12 = t4;
            t13 = t5;
            t14 = t6;
        }
        t1 = t9;
        t7 = (t7 + 0x1);
        t2 = t10;
        t3 = t11;
        t4 = t12;
        t5 = t13;
        t6 = t14;
        t8 = (t8 >> 1);
        if ((int)t7 >= (int)0x5) {
            break;
        }
    }
    return t0;
}

void FUN_0c0dcac0(int a4, int a5)
{
    *(unsigned int *)(((*(int *)0xC7F8E9C) + 0x0)) = ((a5 << 16) | 0x800000);
}
