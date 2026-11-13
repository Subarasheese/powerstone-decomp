
int FUN_0c01ed94(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x31));
    if (t0 != 0) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    if (t0 != 5) {
                        if (t0 != 6) {
                            if (t0 != 7) {
                                if (t0 != 8) {
                                    return t0;
                                }
                                return vmu_menu_step_notice_wait_ok(a4, a5, a6, a7);
                            }
                            return FUN_0c01f248(a4, a5, a6, a7);
                        }
                        return vmu_menu_state_save(a4, a5, a6, a7);
                    }
                    t0 = FUN_0c01fa70();
                    if ((int)(signed char)t0 >= 0) {
                        return vmu_menu_step_choose_yes_no(a4);
                    }
                    return (signed char)t0;
                }
                (((struct o2F_uchar *)0xC362A52)->v) = 0x6;
                (((struct o2_uchar *)0xC362A52)->v) = 0x0;
                return vmu_menu_state_save(a4, a5, a6, a7);
            }
            t0 = FUN_0c01fa70();
            if ((int)(signed char)t0 >= 0) {
                return FUN_0c01f0a8(a4);
            }
            return (signed char)t0;
        }
        t0 = FUN_0c01fa70();
        t1 = (signed char)t0;
        if ((int)(signed char)t0 >= 0) {
            (((struct o0_uchar *)0xC362A52)->v) = 0x2;
            (((struct o1_uchar *)0xC362A52)->v) = 0x0;
            t1 = 0x0;
        }
        return t1;
    }
    
    return (signed char)(FUN_0c01fa70());
}
