
int FUN_0c01ea20(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC362A50;
    if (t0 != 0) {
        if (t0 != 1) {
            switch (t0) {
            case 2:
                break;
            case 3:
                (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
                vmu_menu_update_objs(a4, 0x0, 0xC362A50, a7);
                (((struct o8_ushort *)0xC362A50)->v) = 0x1;
                vmu_menu_spawn_message(0x10);
                vmu_menu_spawn_choice_cursor(0x10);
                break;
            case 4:
                break;
            default:
                if (t0 != 5) {
                    if (t0 != 6) {
                        if (t0 != 7) {
                            if (t0 != 8) {
                                vmu_menu_update_objs(a4, 0x0, 0xC362A50, a7);
                                return 0x2;
                            }
                            return FUN_0c01ec9c(0xC362A50);
                        }
                        (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
                        (((struct o3_uchar *)0xC362A50)->v) = 0x0;
                        (((struct o2_uchar *)0xC362A50)->v) = 0x0;
                        (((struct o31_uchar *)0xC362A50)->v) = 0x0;
                        return FUN_0c01ec9c(0xC362A50);
                    }
                    return FUN_0c01ebc0(0xC362A50);
                }
                (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
                (((struct o2F_uchar *)0xC362A50)->v) = 0x7;
                (((struct o30_uchar *)0xC362A50)->v) = 0x63;
                (((struct o1_uchar *)0xC362A50)->v) = 0x0;
                (((struct o2_uchar *)0xC362A50)->v) = 0x0;
                (((struct o31_uchar *)0xC362A50)->v) = 0x0;
                return FUN_0c01ebc0(0xC362A50);
            }
        } else {
            (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
            vmu_menu_update_objs(a4, 0x0, 0xC362A50, a7);
            vmu_menu_spawn_message(0xF);
            vmu_menu_spawn_choice_cursor(0xF);
        }
    } else {
        (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
        (((struct oA_ushort *)0xC362A50)->v) = 0x0;
        (((struct o8_ushort *)0xC362A50)->v) = 0x1;
        (((struct o28_float *)0xC362A50)->v) = (*(float *)0xC01EBB4);
        (((struct o34_uchar *)0xC362A50)->v) = a4;
        (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
        vmu_menu_update_objs(a4, 0x0, 0xC362A50, a7);
        vmu_menu_spawn_message(0xF);
        vmu_menu_spawn_choice_cursor(0xF);
    }
    t0 = vmu_menu_poll_yes_no(0xC362A50);
    if ((signed char)t0 != 0) {
        if ((signed char)t0 != 1) {
        } else {
            (((struct o0_uchar *)0xC362A50)->v) = 0x63;
        }
    } else {
        (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
    }
    return 0x0;
}
