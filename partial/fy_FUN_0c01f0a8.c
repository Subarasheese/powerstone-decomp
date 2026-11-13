
int FUN_0c01f0a8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x4));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = vmu_menu_poll_confirm_cancel(0x3060E);
            t2 = (signed char)t0;
            if ((signed char)t0 != 0) {
                *(unsigned char *)((a4 + 0x2)) = 0x0;
                t2 = 0x0;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
        vmu_menu_update_objs(a4, a5, a6, a7);
        vmu_menu_spawn_message(0x8);
        FUN_0c01f9a0();
        t1 = vmu_menu_poll_confirm_cancel(0x3060E);
        t2 = (signed char)t1;
        if ((signed char)t1 != 0) {
            *(unsigned char *)((a4 + 0x2)) = 0x0;
            t2 = 0x0;
        }
        t0 = t2;
    }
    return t0;
}
