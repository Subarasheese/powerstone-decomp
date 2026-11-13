
int FUN_0c01f1f6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x4));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            *(volatile int *)((a4 + 0x20));
            t0 = FUN_0c011150();
            t2 = t0;
            if (t0 != -1) {
                if (t0 == 0) {
                    (((struct o2D_uchar *)0xC362A54)->v) = 0x7;
                } else {
                    (((struct o2D_uchar *)0xC362A54)->v) = 0x8;
                }
                (((struct o0_uchar *)0xC362A54)->v) = 0x0;
                t2 = 0x0;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
        FUN_0c01fdc8(a4, a5, a6, a7);
        FUN_0c01f4c8(0xA);
        (((struct o32_uchar *)(a4))->v) = 0x3C;
        *(volatile int *)((a4 + 0x20));
        t1 = FUN_0c011150();
        t2 = t1;
        if (t1 != -1) {
            if (t1 == 0) {
                (((struct o2D_uchar *)0xC362A54)->v) = 0x7;
            } else {
                (((struct o2D_uchar *)0xC362A54)->v) = 0x8;
            }
            (((struct o0_uchar *)0xC362A54)->v) = 0x0;
            t2 = 0x0;
        }
        t0 = t2;
    }
    return t0;
}
