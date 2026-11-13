/* OPTION group screen 2 (0c01a42c-0c01ae48) */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
int FUN_0c01ab4c(int);
int FUN_0c01ac74(int);
int FUN_0c01ad40(int);
int opt_page2_pad_pressed(int);
int bgm_stop_slot(int);
int FUN_0c0a3426(int);
int bgm_play_by_index(int);
int snd_play_side_se(int, int);
int FUN_0c0a4070(int, int);
int obj_tick_class(int, int, int, int);

int opt_page2_run_objects_in_mask(int a4, int a5, int a6, int a7);

int FUN_0c01a5cc(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t1;
    register int t4;
    register int t7;
    register int t10;
    register int t11;
    register int t12;
    register int t14;
    register int t23;
    register int t27;
    register int t28;
    register int t30;
    register int t48;
    register int t62;
    register int t65;
    register int t68;
    register int t71;
    register int t72;
    register int t73;
    register int t75;
    register int t84;
    register int t88;
    register int t89;
    register int t91;
    register int t109;

    t0 = *(signed char *)0xC362339;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t1 = opt_page2_pad_pressed(0x10);
        t12 = 0x4;
        if ((signed char)t1 != 0) {
            t12 = 0x0;
        }
        t4 = opt_page2_pad_pressed(0x20);
        if ((signed char)t4 != 0) {
            t12 = 0x1;
        }
        t7 = opt_page2_pad_pressed(0x40);
        if ((signed char)t7 != 0) {
            t12 = 0x2;
        }
        t10 = opt_page2_pad_pressed(0x80);
        t11 = *(signed char *)0xC36233E;
        if ((signed char)t10 != 0) {
            t12 = 0x3;
        }
        t14 = *(int *)(((t11 << 2) + 0xC17FFE8));
        if ((int)(signed char)t12 <= (int)0x3) {
            (((struct o7_uchar *)0xC362338)->v) = (*(signed char *)((t14 + (((*(signed char *)0xC36233F) << 2) + (signed char)t12))));
            snd_play_side_se(0x0, 0x4C);
        }
        t23 = opt_page2_pad_pressed(0x4);
        if ((signed char)t23 != 0) {
            t27 = *(signed char *)0xC36233E;
            t28 = *(signed char *)0xC36233F;
            if ((signed char)t27 != 11) {
                t30 = *(int *)((((signed char)t27 << 2) + 0xC180048));
                *(unsigned int *)(((int)stk + 0)) = t30;
                FUN_0c0a4070((*(signed char *)(((t30 + t28) + 0x0))), t27);
            } else {
                if ((*(signed char *)0xC362341) == 0) {
                    bgm_play_by_index((*(signed char *)((t28 + 0xC11BEF8))));
                    (((struct o9_uchar *)0xC362338)->v) = 0x3C;
                }
            }
        }
        if ((*(signed char *)0xC362341) != 0) {
            (((struct o9_uchar *)0xC362338)->v) = ((*(signed char *)0xC362341) - 1);
        }
        t48 = opt_page2_pad_pressed(0x2);
        if ((signed char)t48 != 0) {
            (((struct o0_uchar *)0xC362338)->v) = ((*(signed char *)0xC362338) - 1);
            (((struct o3_uchar *)0xC362338)->v) = 0x0;
            (((struct o2_uchar *)0xC362338)->v) = 0x0;
            (((struct o1_uchar *)0xC362338)->v) = 0x0;
            if ((*(signed char *)0xC36233E) == 11) {
                bgm_stop_slot(0x0);
                return ((int (*)(void))(0xC01A726))();
            }
            return ((int (*)(int, int, int, int))(0xC01A720))(0xC362338, a5, a6, a7);
        }
        return (signed char)t48;
    }
    (((struct o1_uchar *)0xC362338)->v) = ((*(signed char *)0xC362339) + 0x1);
    (((struct o7_uchar *)0xC362338)->v) = 0x0;
    opt_page2_run_objects_in_mask(0x1, a5, a6, a7);
    FUN_0c01ab4c(0x2);
    FUN_0c01ac74(0x2);
    FUN_0c01ad40(0x2);
    if ((*(signed char *)0xC36233E) != 11) {
        FUN_0c0a3426((*(signed char *)0xC36233E));
    }
    t62 = opt_page2_pad_pressed(0x10);
    t73 = 0x4;
    if ((signed char)t62 != 0) {
        t73 = 0x0;
    }
    t65 = opt_page2_pad_pressed(0x20);
    if ((signed char)t65 != 0) {
        t73 = 0x1;
    }
    t68 = opt_page2_pad_pressed(0x40);
    if ((signed char)t68 != 0) {
        t73 = 0x2;
    }
    t71 = opt_page2_pad_pressed(0x80);
    t72 = *(signed char *)0xC36233E;
    if ((signed char)t71 != 0) {
        t73 = 0x3;
    }
    t75 = *(int *)(((t72 << 2) + 0xC17FFE8));
    if ((int)(signed char)t73 <= (int)0x3) {
        (((struct o7_uchar *)0xC362338)->v) = (*(signed char *)((t75 + (((*(signed char *)0xC36233F) << 2) + (signed char)t73))));
        snd_play_side_se(0x0, 0x4C);
    }
    t84 = opt_page2_pad_pressed(0x4);
    if ((signed char)t84 != 0) {
        t88 = *(signed char *)0xC36233E;
        t89 = *(signed char *)0xC36233F;
        if ((signed char)t88 != 11) {
            t91 = *(int *)((((signed char)t88 << 2) + 0xC180048));
            *(unsigned int *)(((int)stk + 0)) = t91;
            FUN_0c0a4070((*(signed char *)(((t91 + t89) + 0x0))), t88);
        } else {
            if ((*(signed char *)0xC362341) == 0) {
                bgm_play_by_index((*(signed char *)((t89 + 0xC11BEF8))));
                (((struct o9_uchar *)0xC362338)->v) = 0x3C;
            }
        }
    }
    if ((*(signed char *)0xC362341) != 0) {
        (((struct o9_uchar *)0xC362338)->v) = ((*(signed char *)0xC362341) - 1);
    }
    t109 = opt_page2_pad_pressed(0x2);
    if ((signed char)t109 != 0) {
        (((struct o0_uchar *)0xC362338)->v) = ((*(signed char *)0xC362338) - 1);
        (((struct o3_uchar *)0xC362338)->v) = 0x0;
        (((struct o2_uchar *)0xC362338)->v) = 0x0;
        (((struct o1_uchar *)0xC362338)->v) = 0x0;
        if ((*(signed char *)0xC36233E) == 11) {
            bgm_stop_slot(0x0);
            return ((int (*)(void))(0xC01A726))();
        }
        return ((int (*)(int, int, int, int))(0xC01A720))(0xC362338, a5, a6, a7);
    }
    return (signed char)t109;
}

int opt_page2_run_objects_in_mask(int a4, int a5, int a6, int a7)
{
    register int t0;

    *(unsigned short *)0xC36233C = a4;
    t0 = obj_tick_class(0x5, a5, a6, a7);
    *(unsigned short *)0xC36233C = 0x0;
    return t0;
}
