
int vmu_menu_state_rewrite_vmgame(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x4));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            *(volatile signed char *)((a4 + 0x34));
            *(volatile int *)((a4 + 0x20));
            t0 = vmu_step_rewrite_vmgame();
            t2 = t0;
            if (t0 != -1) {
                if (t0 == 0) {
                    (((struct o2D_uchar *)0xC362A54)->v) = 0xF;
                } else {
                    (((struct o2D_uchar *)0xC362A54)->v) = 0xD;
                }
                (((struct o0_uchar *)0xC362A54)->v) = 0x0;
                t2 = 0x0;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
        vmu_menu_update_objs(a4, a5, a6, a7);
        vmu_menu_spawn_message(0x12);
        (((struct o32_uchar *)(a4))->v) = 0x3C;
        *(volatile signed char *)((a4 + 0x34));
        *(volatile int *)((a4 + 0x20));
        t1 = vmu_step_rewrite_vmgame();
        t2 = t1;
        if (t1 != -1) {
            if (t1 == 0) {
                (((struct o2D_uchar *)0xC362A54)->v) = 0xF;
            } else {
                (((struct o2D_uchar *)0xC362A54)->v) = 0xD;
            }
            (((struct o0_uchar *)0xC362A54)->v) = 0x0;
            t2 = 0x0;
        }
        t0 = t2;
    }
    return t0;
}
