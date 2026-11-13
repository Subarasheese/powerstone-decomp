/* VMU save/load menu UI (handlers over the vmu_step_* state machines) (0c01e798-0c020258) */

int FUN_0c01f060(int, int);
int vmu_menu_step_notice_by_kind(int, int);
int vmu_menu_state_write_vmgame(int, int);
int vmu_menu_state_rewrite_vmgame(int, int);
int vmu_menu_spawn_message(int);
int FUN_0c01fc44(void);
extern int vmu_menu_update_objs();
struct o0_uchar { unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
int FUN_0c01f164(int);
int vmu_menu_state_load(int, int, int, int);
int FUN_0c01f350(int, int, int, int);
int vmu_menu_step_notice_wait_ok_flag(int, int, int, int);
int FUN_0c01f48c(int, int);
int FUN_0c01f874(int);
int vmu_menu_scan_port_masks(void);
int FUN_0c01fd48(void);
int vmu_menu_pad_pressed(int);
int FUN_0c01fe52(int);
int snd_play_side_se(int, int);
int vmu_menu_spawn_message(int a4);
int FUN_0c01ee40(int);
int vmu_menu_spawn_message(int);

int vmu_menu_poll_confirm_cancel(int a4, int a5);

int FUN_0c01ec9c(int a4, int a5, int a6, int a7)
{

    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_2 = a4;
    v0_0 = a5;
    v0_4 = *(signed char *)((v0_2 + 0x31));
    v0_3 = (v0_4);
    v0_1 = (v0_2);
    if ((v0_4 == 0)) goto L_C01ECCA;
    if ((v0_3 == 2)) goto L_C01ECD4;
    if ((v0_3 == 3)) goto L_C01ECDC;
    if ((v0_3 == 13)) goto L_C01ED1C;
    if ((v0_3 == 14)) goto L_C01ECF8;
    if ((v0_3 == 15)) goto L_C01ED00;
    if ((v0_3 == 16)) goto L_C01ECF0;
    if ((v0_3 == 17)) goto L_C01ECDC;
    v0_0 = ((int (*)(int, int, int, int))(vmu_menu_update_objs))(v0_2, v0_0, a6, a7);
    *(unsigned char *)0xC362A50 = (*(signed char *)((v0_1 + 0x30)));
    L_C01ED6E:;
    return 0x0;
    L_C01ECDC:;
    v0_2 = (int)(signed char)(FUN_0c01fc44()) < 0;
    if (v0_2) goto L_C01ED6E;
    vmu_menu_step_notice_by_kind(v0_1, v0_0);
    goto L_C01ED6E;
    L_C01ECF0:;
    vmu_menu_state_rewrite_vmgame(v0_1, v0_0);
    L_C01ED58:;
    return 0x1;
    L_C01ED00:;
    v0_4 = *(signed char *)((v0_1 + 0x4));
    v0_3 = (v0_4);
    if ((v0_4 == 0)) goto L_C01ED0E;
    if ((v0_3 == 1)) goto L_C01ED3E;
    goto L_C01ED58;
    L_C01ED3E:;
    v0_1 = (signed char)(vmu_menu_poll_confirm_cancel(0x3060E, 0x0)) == 0;
    if (v0_1) goto L_C01ED58;
    v0_0 = ((int (*)(int, int))(vmu_menu_update_objs))(v0_2, v0_0);
    *(unsigned char *)0xC362A50 = 0x63;
    goto L_C01ED58;
    L_C01ED0E:;
    *(unsigned char *)((v0_1 + 0x4)) = ((*(signed char *)((v0_1 + 0x4))) + 0x1);
    v0_1 = ((int (*)(int, int))(vmu_menu_update_objs))(v0_2, v0_0);
    v0_2 = (0x13);
    L_C01ED36:;
    vmu_menu_spawn_message(v0_2);
    vmu_menu_spawn_message(0x16);
    goto L_C01ED3E;
    L_C01ECF8:;
    vmu_menu_state_write_vmgame(v0_1, v0_0);
    goto L_C01ED58;
    L_C01ED1C:;
    v0_4 = *(signed char *)((v0_1 + 0x4));
    v0_3 = (v0_4);
    if ((v0_4 == 0)) goto L_C01ED2A;
    if ((v0_3 == 1)) goto L_C01ED3E;
    goto L_C01ED58;
    L_C01ED2A:;
    *(unsigned char *)((v0_1 + 0x4)) = ((*(signed char *)((v0_1 + 0x4))) + 0x1);
    v0_1 = ((int (*)(int, int))(vmu_menu_update_objs))(v0_2, v0_0);
    v0_2 = (0x11);
    goto L_C01ED36;
    L_C01ECD4:;
    FUN_0c01f060(v0_1, v0_0);
    goto L_C01ED6E;
    L_C01ECCA:;
    FUN_0c01fc44();
    goto L_C01ED6E;
}

int FUN_0c01eee0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x31));
    if (t0 != 0) {
        if (t0 != 2) {
            if (t0 != 4) {
                if (t0 != 5) {
                    if (t0 != 9) {
                        if (t0 != 10) {
                            if (t0 != 11) {
                                vmu_menu_update_objs(a4, a5, a6, a7);
                                (((struct o0_uchar *)0xC362A50)->v) = (*(signed char *)((a4 + 0x30)));
                                return ((int (*)(void))(0xC01EF8A))();
                            }
                            return vmu_menu_step_notice_wait_ok_flag(a4, a5, a6, a7);
                        }
                        return FUN_0c01f350(a4, a5, a6, a7);
                    }
                    return vmu_menu_state_load(a4, a5, a6, a7);
                }
                t0 = FUN_0c01fd48();
                if ((int)(signed char)t0 >= 0) {
                    (((struct o31_uchar *)0xC362A50)->v) = 0x9;
                    (((struct o4_uchar *)0xC362A50)->v) = 0x0;
                }
                return ((int (*)(void))(0xC01EF8A))();
            }
            t0 = FUN_0c01fd48();
            if ((int)(signed char)t0 >= 0) {
                return FUN_0c01f164(a4);
            }
            return ((int (*)(void))(0xC01EF8A))();
        }
        t0 = FUN_0c01fd48();
        if ((int)(signed char)t0 >= 0) {
            (((struct o2_uchar *)0xC362A50)->v) = 0x2;
            (((struct o3_uchar *)0xC362A50)->v) = 0x0;
        }
        return ((int (*)(void))(0xC01EF8A))();
    }
    FUN_0c01fd48();
    
    return ((int (*)(void))(0xC01EF8A))();
}

void FUN_0c01f9a0(void)
{
    
}

int vmu_menu_poll_confirm_cancel(int a4, int a5)
{
    register int t0;

    t0 = vmu_menu_pad_pressed(a4);
    if ((signed char)t0 != 0) {
        snd_play_side_se(0x0, 0x4D);
        return 0x1;
    }
    t0 = vmu_menu_pad_pressed(a5);
    if ((signed char)t0 != 0) {
        snd_play_side_se(0x0, 0x4E);
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0200e2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c01ee40(a4);
        }
    } else {
        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
        t0 = ((int (*)(int, int, int, int))(vmu_menu_update_objs))(a4, a5, a6, a7);
        vmu_menu_spawn_message(0x4);
        (((struct o2D_uchar *)(a4))->v) = 0x0;
        (((struct o2C_uchar *)(a4))->v) = 0x0;
        FUN_0c01f874(0x0);
    }
    t0 = vmu_menu_scan_port_masks();
    if ((signed char)t0 == 0) {
        FUN_0c01fe52(a4);
        t1 = vmu_menu_pad_pressed(0x2);
        if ((signed char)t1 != 0) {
            t1 = ((int (*)(void))(vmu_menu_update_objs))();
            *(unsigned char *)((a4 + 0x0)) = (*(signed char *)0xC362A80);
            return snd_play_side_se(0x0, 0x4E);
        }
        t1 = vmu_menu_pad_pressed(0x4);
        if ((signed char)t1 != 0) {
            t2 = 0x4E;
            if ((((int)0x1 << (int)(((*(signed char *)((a4 + 0x2C))) << 1) + (*(signed char *)((a4 + 0x2D))))) & (*(int *)((a4 + 0xC)))) != 0) {
                *(unsigned char *)((a4 + 0x3)) = 0x2;
                (((struct o31_uchar *)(a4))->v) = 0x0;
                FUN_0c01f48c((*(signed char *)((a4 + 0x2C))), (*(signed char *)((a4 + 0x2D))));
                t2 = 0x4D;
            }
            return snd_play_side_se(0x0, t2);
        }
        return (signed char)t1;
    }
    return (signed char)t0;
}

int FUN_0c02018e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC02023A))(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
        t0 = ((int (*)(int, int, int, int))(vmu_menu_update_objs))(a4, a5, a6, a7);
        vmu_menu_spawn_message(0x4);
        (((struct o2D_uchar *)(a4))->v) = 0x0;
        (((struct o2C_uchar *)(a4))->v) = 0x0;
        FUN_0c01f874(0x1);
    }
    t0 = vmu_menu_scan_port_masks();
    if ((signed char)t0 == 0) {
        FUN_0c01fe52(a4);
        t1 = vmu_menu_pad_pressed(0x2);
        if ((signed char)t1 != 0) {
            t1 = ((int (*)(void))(vmu_menu_update_objs))();
            *(unsigned char *)((a4 + 0x0)) = (*(signed char *)0xC362A80);
            return snd_play_side_se(0x0, 0x4E);
        }
        t1 = vmu_menu_pad_pressed(0x4);
        if ((signed char)t1 != 0) {
            t2 = 0x4E;
            if ((((int)0x1 << (int)(((*(signed char *)((a4 + 0x2C))) << 1) + (*(signed char *)((a4 + 0x2D))))) & (*(int *)((a4 + 0xC)))) != 0) {
                *(unsigned char *)((a4 + 0x3)) = 0x2;
                (((struct o31_uchar *)(a4))->v) = 0x0;
                FUN_0c01f48c((*(signed char *)((a4 + 0x2C))), (*(signed char *)((a4 + 0x2D))));
                t2 = 0x4D;
            }
            return snd_play_side_se(0x0, t2);
        }
        return (signed char)t1;
    }
    return (signed char)t0;
}
