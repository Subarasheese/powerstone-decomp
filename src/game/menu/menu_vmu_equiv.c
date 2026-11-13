/* VMU save/load menu UI (handlers over the vmu_step_* state machines) (0c01e798-0c020258) */

/* named globals (symbols.txt) */
int FUN_0c01fb0c(int a4, int a5, int a6, int a7);
int vmu_menu_scan_port_masks(int a4, int a5, int a6, int a7);
extern char g_res_system_font[];
int memset(int, int, int);
struct o0_uchar { unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2F_uchar { char p[0x2F]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o35_uchar { char p[0x35]; unsigned char v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
int FUN_0c01eb32(int);
int vmu_menu_spawn_choice_cursor(int);
int vmu_menu_update_objs(int, int, int, int);
struct o1_uchar { char p[0x1]; unsigned char v; };
int FUN_0c01f0a8(int);
int vmu_menu_step_choose_yes_no(int);
int vmu_menu_step_notice_wait_ok(int, int, int, int);
int vmu_menu_state_save(int a4, int a5, int a6, int a7);
int FUN_0c01f9a0(void);
int vmu_menu_poll_confirm_cancel(int);
int obj_destroy(int, int, int, int);
struct o0_float { float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o300_int { char p[0x300]; int v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int vmu_get_ready_mask(void);
int vmu_get_savefile_mask(void);
int vmu_get_vmgame_mask(void);
int vmu_get_foreign_exec_mask(void);
int vmu_get_free_space_mask(void);
int FUN_0c0109e4(void);
float math_sin_angle16(int);
struct o2C_uchar { char p[0x2C]; unsigned char v; };
int snd_play_side_se(int, int);
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o0_short { short v; };
struct o14_short { char p[0x14]; short v; };

int FUN_0c01f248(int a4, int a5, int a6, int a7);
int vmu_menu_spawn_message(int a4);
int FUN_0c01fa70(int a4);
int vmu_menu_pad_pressed(int a4);
int FUN_0c01ff6c(int a4);

int vmu_menu_init(void)
{
    return memset(0xC362A50, 0x0, 0x38);
}

int vmu_menu_reset(void)
{
    return memset(0xC362A50, 0x0, 0x38);
}

int FUN_0c01e7ac(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC362A85) != 0) {
        t0 = *(signed char *)0xC362A85;
        (((struct o35_uchar *)0xC362A50)->v) = (t0 - 1);
        if ((signed char)(t0 - 1) == 0) {
            *(unsigned char *)0xC7F2EE1 = 0x2;
        }
        return 0x35;
    }
    t0 = *(signed char *)0xC362A50;
    switch (t0) {
    case 0:
        (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
        (((struct oA_ushort *)0xC362A50)->v) = 0x0;
        (((struct o8_ushort *)0xC362A50)->v) = 0x1;
        (((struct o2F_uchar *)0xC362A50)->v) = 0x63;
        (((struct o30_uchar *)0xC362A50)->v) = 0x0;
        (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
        vmu_menu_update_objs(0xC362A50, a5, a6, a7);
        vmu_menu_spawn_message(0xE);
        vmu_menu_spawn_choice_cursor(0xE);
        break;
    case 1:
        (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
        vmu_menu_update_objs(0xC362A50, a5, a6, a7);
        vmu_menu_spawn_message(0xE);
        vmu_menu_spawn_choice_cursor(0xE);
        break;
    case 2:
        break;
    default:
        if (t0 != 3) {
            (((struct o35_uchar *)0xC362A50)->v) = 0x2D;
            return 0x35;
        }
        return FUN_0c01eb32(0xC362A50);
    }
    t0 = FUN_0c01ff6c(0xC362A50);
    if ((signed char)t0 != 0) {
        if ((signed char)t0 != 1) {
        } else {
            (((struct o0_uchar *)0xC362A50)->v) = 0x63;
        }
        t1 = (signed char)t0;
    } else {
        (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
        (((struct o3_uchar *)0xC362A50)->v) = 0x0;
        (((struct o2_uchar *)0xC362A50)->v) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

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
                    t0 = FUN_0c01fa70(a4);
                    if ((int)(signed char)t0 >= 0) {
                        return vmu_menu_step_choose_yes_no(a4);
                    }
                    return (signed char)t0;
                }
                (((struct o2F_uchar *)0xC362A52)->v) = 0x6;
                (((struct o2_uchar *)0xC362A52)->v) = 0x0;
                return vmu_menu_state_save(a4, a5, a6, a7);
            }
            t0 = FUN_0c01fa70(a4);
            if ((int)(signed char)t0 >= 0) {
                return FUN_0c01f0a8(a4);
            }
            return (signed char)t0;
        }
        t0 = FUN_0c01fa70(a4);
        t1 = (signed char)t0;
        if ((int)(signed char)t0 >= 0) {
            (((struct o0_uchar *)0xC362A52)->v) = 0x2;
            (((struct o1_uchar *)0xC362A52)->v) = 0x0;
            t1 = 0x0;
        }
        return t1;
    }
    
    return (signed char)(FUN_0c01fa70(a4));
}

int FUN_0c01ef8e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = vmu_menu_poll_confirm_cancel(0x3060E);
            t2 = (signed char)t0;
            if ((signed char)t0 != 0) {
                t0 = ((int (*)(void))(vmu_menu_update_objs))();
                *(unsigned char *)0xC362A50 = (*(signed char *)0xC362A80);
                t2 = 0x30;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
        t1 = ((int (*)(int, int, int, int))(vmu_menu_update_objs))(a4, a5, a6, a7);
        vmu_menu_spawn_message(0x1);
        FUN_0c01f9a0();
        t1 = vmu_menu_poll_confirm_cancel(0x3060E);
        t2 = (signed char)t1;
        if ((signed char)t1 != 0) {
            t1 = ((int (*)(void))(vmu_menu_update_objs))();
            *(unsigned char *)0xC362A50 = (*(signed char *)0xC362A80);
            t2 = 0x30;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c01efd0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = vmu_menu_poll_confirm_cancel(0x3060E);
            t2 = (signed char)t0;
            if ((signed char)t0 != 0) {
                t0 = ((int (*)(void))(vmu_menu_update_objs))();
                *(unsigned char *)0xC362A50 = 0x1;
                t2 = t0;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
        t1 = ((int (*)(int, int, int, int))(vmu_menu_update_objs))(a4, a5, a6, a7);
        vmu_menu_spawn_message(0x0);
        t1 = vmu_menu_poll_confirm_cancel(0x3060E);
        t2 = (signed char)t1;
        if ((signed char)t1 != 0) {
            t1 = ((int (*)(void))(vmu_menu_update_objs))();
            *(unsigned char *)0xC362A50 = 0x1;
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c01f164(int a4, int a5, int a6, int a7)
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
        vmu_menu_spawn_message(0x3);
        vmu_menu_spawn_message(0x16);
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

int FUN_0c01f248(int a4, int a5, int a6, int a7)
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
                *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
                t0 = ((int (*)(void))(vmu_menu_update_objs))();
                *(unsigned char *)0xC362A50 = (*(signed char *)((a4 + 0x2F)));
                t2 = 0x2F;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
        t1 = ((int (*)(int, int, int, int))(vmu_menu_update_objs))(a4, a5, a6, a7);
        vmu_menu_spawn_message(0xB);
        vmu_menu_spawn_message(0x16);
        t1 = vmu_menu_poll_confirm_cancel(0x3060E);
        t2 = (signed char)t1;
        if ((signed char)t1 != 0) {
            *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
            t1 = ((int (*)(void))(vmu_menu_update_objs))();
            *(unsigned char *)0xC362A50 = (*(signed char *)((a4 + 0x2F)));
            t2 = 0x2F;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c01f350(int a4, int a5, int a6, int a7)
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
                t0 = ((int (*)(void))(vmu_menu_update_objs))();
                *(unsigned char *)0xC362A50 = 0x1;
                t2 = t0;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
        t1 = ((int (*)(int, int, int, int))(vmu_menu_update_objs))(a4, a5, a6, a7);
        vmu_menu_spawn_message(0x6);
        vmu_menu_spawn_message(0x16);
        t1 = vmu_menu_poll_confirm_cancel(0x3060E);
        t2 = (signed char)t1;
        if ((signed char)t1 != 0) {
            t1 = ((int (*)(void))(vmu_menu_update_objs))();
            *(unsigned char *)0xC362A50 = 0x1;
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}

void FUN_0c01f48c(int a4, int a5)
{
    *(unsigned int *)0xC362A70 = (((signed char)a4 << 1) + (signed char)a5);
}

void vmu_menu_tick_message(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)0xC362A7E) != 0) {
        obj_destroy(a4, a5, a6, a7);
    return;
    }
}

int vmu_menu_spawn_message(int a4)
{
    int stk[2];
    register int t0;
    register int t13;
    register int t6;

    *(unsigned char *)(((int)stk + 0)) = a4;
    (((struct o6_uchar *)0xC362A78)->v) = 0x0;
    t0 = obj_create(0x5, 0x1, 0x1);
    t13 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC01F49A;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        (((struct o24_float *)(t0))->v) = ((((struct o0_float *)0xC362A78)->v));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t6 = *(signed char *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 4)) = (((t6 << 2) << 2) + 0xC11C644);
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((int)g_res_system_font), (*(signed char *)(((((t6 << 2) << 2) + 0xC11C644) + 0xC))));
        *(volatile int *)((t0 + 0x2E0));
        *(volatile int *)(((int)stk + 4));
        t13 = (FUN_0c0e6fe8());
    }
    return t13;
}

int FUN_0c01f874(int a4)
{
    int stk[2];
    register int t0;
    register int t21;
    int t3;
    register int t15;
    register float u20;

    *(unsigned char *)(((int)stk + 4)) = a4;
    (((struct o6_uchar *)0xC362A78)->v) = 0x0;
    t0 = obj_create(0x5, 0x1, 0x9);
    t21 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC01F6FC;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned char *)((t0 + 0xE)) = 0x63;
        *(unsigned char *)((t0 + 0xF)) = 0x63;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 4)));
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct o24_float *)(t0))->v) = ((((struct o0_float *)0xC362A78)->v));
        t3 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + (t3 << 2)) + 0x0))) + 0x0)) = 0x1;
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + (t3 << 2)) + 0x0))) + 0x1)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + (t3 << 2)) + 0x0))) + 0x2)) = 0x40F;
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + (t3 << 2)) + 0x0))), ((int)g_res_system_font), ((0x1 & t3) + 0xC));
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x8) {
                break;
            }
        }
        *(unsigned char *)((((((struct o300_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o300_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o300_int *)(t0))->v)) + 0x2)) = 0x40F;
        FUN_0c06233a(((((struct o300_int *)(t0))->v)), ((int)g_res_system_font), 0x23);
        t15 = (((struct o300_int *)(t0))->v);
        *(int *)((int)stk + 0) = (0x40 + t15);
        u20 = ((((struct o0_float *)0xC01F9E4)->v));
        u20 = u20 + ((((struct o4_float *)0xC01F9E4)->v)) * (math_sin_angle16(((((struct oEC_short *)(t0))->v))));
        (((struct o40_float *)(t15))->v) = u20;
        t21 = 0xC01F9E8;
    }
    return t21;
}

void FUN_0c01f98e(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)0xC362A7E) != 0) {
        obj_destroy(a4, a5, a6, a7);
    return;
    }
}


int FUN_0c01fa70(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    t0 = vmu_get_ready_mask();
    t1 = 0xFFFFFFFF;
    if ((int)t0 < 0) {
    } else {
        t2 = *(int *)((a4 + 0x20));
        *(unsigned int *)((a4 + 0xC)) = t0;
        if ((t0 & ((int)0x1 << (int)t2)) == 0) {
            t0 = 0x0;
            if ((*(signed char *)((a4 + 0x31))) != 2) {
                (((struct o2D_uchar *)0xC362A54)->v) = 0x2;
                (((struct o0_uchar *)0xC362A54)->v) = 0x0;
                t0 = 0x1;
            }
            t1 = t0;
        } else {
            t0 = vmu_get_savefile_mask();
            *(unsigned int *)((a4 + 0x14)) = t0;
            t4 = vmu_get_free_space_mask();
            *(unsigned int *)((a4 + 0x10)) = t4;
            if ((t0 & ((int)0x1 << (int)t2)) != 0) {
                t1 = 0x0;
                if ((*(signed char *)((a4 + 0x31))) != 5) {
                    (((struct o2D_uchar *)0xC362A54)->v) = 0x5;
                    (((struct o0_uchar *)0xC362A54)->v) = 0x0;
                    t1 = 0x1;
                }
            } else {
                if (((t4 & ((int)0x1 << (int)t2)) != 0) && ((t0 & ((int)0x1 << (int)t2)) == 0)) {
                    t0 = 0x0;
                    if ((*(signed char *)((a4 + 0x31))) != 4) {
                        (((struct o2D_uchar *)0xC362A54)->v) = 0x4;
                        (((struct o0_uchar *)0xC362A54)->v) = 0x0;
                        t0 = 0x1;
                    }
                    t2 = t0;
                } else {
                    t0 = 0x0;
                    if ((*(signed char *)((a4 + 0x31))) == 3) {
                    } else {
                        (((struct o2D_uchar *)0xC362A54)->v) = 0x3;
                        (((struct o0_uchar *)0xC362A54)->v) = 0x0;
                        t0 = 0x1;
                    }
                    t2 = t0;
                }
                t1 = t2;
            }
        }
    }
    return t1;
}


int FUN_0c01fc44(int a4)
{
    int stk[4];

    register int R3;
    int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_3 = a4;
    v0_1 = vmu_get_ready_mask();
    v0_0 = (v0_3);
    v0_3 = (v0_1);
    if (((int)v0_1 >= 0)) goto L_C01FC60;
    v0_0 = (0xFFFFFFFF);
    L_C01FD3A:;
    return v0_0;
    L_C01FC60:;
    v0_4 = *(int *)((v0_0 + 0x20));
    *(unsigned int *)((v0_0 + 0xC)) = v0_3;
    v0_1 = (0x0);
    v0_2 = (0xC362A50);
    R13 = (((int)0x1 << (int)v0_4));
    if (((v0_3 & ((int)0x1 << (int)v0_4)) != 0)) goto L_C01FC82;
    if (((*(signed char *)((v0_0 + 0x31))) == 2)) goto L_C01FD0E;
    v0_0 = (0x2);
    L_C01FC7C:;
    (((struct o31_uchar *)(v0_2))->v) = v0_0;
    L_C01FCFE:;
    *(unsigned char *)((v0_2 + 0x4)) = v0_1;
    L_C01FD38:;
    v0_0 = (0x1);
    goto L_C01FD3A;
    L_C01FD0E:;
    v0_0 = (0x0);
    goto L_C01FD3A;
    L_C01FC82:;
    v0_3 = vmu_get_savefile_mask();
    *(unsigned int *)((v0_0 + 0x14)) = v0_3;
    *(unsigned int *)(((int)stk + 8)) = (v0_3 & R13);
    v0_3 = vmu_get_free_space_mask();
    *(unsigned int *)((v0_0 + 0x10)) = v0_3;
    *(unsigned int *)(((int)stk + 4)) = (v0_3 & R13);
    v0_3 = FUN_0c0109e4();
    *(unsigned int *)((v0_0 + 0x1C)) = v0_3;
    *(unsigned int *)(((int)stk + 0)) = (v0_3 & R13);
    v0_3 = vmu_get_vmgame_mask();
    *(unsigned int *)((v0_0 + 0x18)) = v0_3;
    *(unsigned int *)(((int)stk + 12)) = (v0_3 & R13);
    v0_3 = vmu_get_foreign_exec_mask();
    *(unsigned int *)((v0_0 + 0x24)) = v0_3;
    if (((v0_3 & R13) == 0)) goto L_C01FCD6;
    if (((*(signed char *)((v0_0 + 0x31))) == 17)) goto L_C01FD0E;
    (((struct o31_uchar *)(v0_2))->v) = 0x11;
    *(unsigned char *)((v0_2 + 0x4)) = v0_1;
    (((struct o33_uchar *)(v0_0))->v) = 0x2;
    goto L_C01FD38;
    L_C01FCD6:;
    v0_4 = *(int *)(((int)stk + 0));
    v0_3 = ((v0_4 & R13));
    if (((v0_4 & R13) == 0)) goto L_C01FCEA;
    if (((*(signed char *)((v0_0 + 0x31))) == 14)) goto L_C01FD0E;
    v0_0 = (0xE);
    goto L_C01FC7C;
    L_C01FCEA:;
    if ((((*(int *)(((int)stk + 12))) & R13) == 0)) goto L_C01FD06;
    if (((*(signed char *)((v0_0 + 0x31))) == 16)) goto L_C01FD0E;
    (((struct o31_uchar *)(v0_2))->v) = 0x10;
    goto L_C01FCFE;
    L_C01FD06:;
    if (((*(signed char *)((v0_0 + 0x31))) != 3)) goto L_C01FD12;
    goto L_C01FD0E;
    L_C01FD12:;
    (((struct o31_uchar *)(v0_2))->v) = 0x3;
    *(unsigned char *)((v0_2 + 0x4)) = v0_1;
    if ((((*(int *)(((int)stk + 8))) & R13) != 0)) goto L_C01FD32;
    if (((R13 & (*(int *)(((int)stk + 4)))) != 0)) goto L_C01FD30;
    (((struct o33_uchar *)(v0_0))->v) = v0_1;
    goto L_C01FD38;
    L_C01FD30:;
    L_C01FD32:;
    (((struct o33_uchar *)(v0_0))->v) = 0x1;
    goto L_C01FD38;
}

int FUN_0c01fd48(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = vmu_get_ready_mask();
    t1 = 0xFFFFFFFF;
    if ((int)t0 < 0) {
    } else {
        t2 = *(int *)((a4 + 0x20));
        *(unsigned int *)((a4 + 0xC)) = t0;
        if ((t0 & ((int)0x1 << (int)t2)) == 0) {
            t0 = 0x0;
            if ((*(signed char *)((a4 + 0x31))) != 2) {
                (((struct o2D_uchar *)0xC362A54)->v) = 0x2;
                (((struct o0_uchar *)0xC362A54)->v) = 0x0;
                t0 = 0x1;
            }
            t1 = t0;
        } else {
            *(unsigned int *)((a4 + 0x18)) = (vmu_get_vmgame_mask());
            t0 = vmu_get_savefile_mask();
            *(unsigned int *)((a4 + 0x14)) = t0;
            if ((t0 & ((int)0x1 << (int)t2)) != 0) {
                t0 = 0x0;
                if ((*(signed char *)((a4 + 0x31))) != 5) {
                    (((struct o2D_uchar *)0xC362A54)->v) = 0x5;
                    (((struct o0_uchar *)0xC362A54)->v) = 0x0;
                    t0 = 0x1;
                }
                t2 = t0;
            } else {
                t0 = 0x0;
                if ((*(signed char *)((a4 + 0x31))) == 4) {
                } else {
                    (((struct o2D_uchar *)0xC362A54)->v) = 0x4;
                    (((struct o0_uchar *)0xC362A54)->v) = 0x0;
                    t0 = 0x1;
                }
                t2 = t0;
            }
            t1 = t2;
        }
    }
    return t1;
}

int vmu_menu_pad_pressed(int a4)
{
    if (((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & a4) == 0) {
        if (((unsigned short)((((struct o14_short *)0xC361BFC)->v)) & a4) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c01fe52(int a4)
{
    register int t0;
    register int t3;

    t0 = vmu_menu_pad_pressed(0x10);
    if ((signed char)t0 != 0) {
        snd_play_side_se(0x0, 0x4B);
        t0 = *(signed char *)((a4 + 0x2C));
        (((struct o2C_uchar *)(a4))->v) = (t0 - 1);
        if ((int)(signed char)(t0 - 1) < 0) {
            (((struct o2C_uchar *)(a4))->v) = 0x3;
        }
        t0 = 0x2C;
    } else {
        t0 = vmu_menu_pad_pressed(0x20);
        if ((signed char)t0 != 0) {
            snd_play_side_se(0x0, 0x4B);
            t0 = *(signed char *)((a4 + 0x2C));
            (((struct o2C_uchar *)(a4))->v) = (t0 + 0x1);
            if ((int)(signed char)(t0 + 0x1) > (int)0x3) {
                (((struct o2C_uchar *)(a4))->v) = 0x0;
            }
            t0 = 0x2C;
        } else {
            t0 = vmu_menu_pad_pressed(0x40);
            if ((signed char)t0 != 0) {
                snd_play_side_se(0x0, 0x4C);
                (((struct o2D_uchar *)(a4))->v) = 0x0;
                t0 = 0x2D;
            } else {
                t3 = vmu_menu_pad_pressed(0x80);
                t0 = (signed char)t3;
                if ((signed char)t3 != 0) {
                    snd_play_side_se(0x0, 0x4C);
                    (((struct o2D_uchar *)(a4))->v) = 0x1;
                    t0 = 0x2D;
                }
            }
        }
    }
    return t0;
}

int vmu_menu_poll_yes_no(int a4)
{
    int stk[1];
    register int t1;
    register int t4;
    register int t13;
    register int t16;
    register int t20;

    *(unsigned short *)(((int)stk + 0)) = (*(short *)((a4 + 0x8)));
    t1 = vmu_menu_pad_pressed(0x40);
    if ((signed char)t1 != 0) {
        *(unsigned short *)((a4 + 0x8)) = 0x0;
    }
    t4 = vmu_menu_pad_pressed(0x80);
    if ((signed char)t4 != 0) {
        *(unsigned short *)((a4 + 0x8)) = 0x1;
    }
    if ((*(short *)((a4 + 0x8))) != (*(short *)(((int)stk + 0)))) {
        snd_play_side_se(0x0, 0x4C);
    }
    t13 = vmu_menu_pad_pressed(0x4);
    if ((signed char)t13 != 0) {
        snd_play_side_se(0x0, 0x4D);
        t20 = (*(short *)((a4 + 0x8)));
    } else {
        t16 = vmu_menu_pad_pressed(0x2);
        t20 = 0xFFFFFFFF;
        if ((signed char)t16 != 0) {
            snd_play_side_se(0x0, 0x4E);
            t20 = 0x1;
        }
    }
    return t20;
}

int FUN_0c01ff6c(int a4)
{
    int stk[1];
    register int t1;
    register int t4;
    register int t13;
    register int t20;
    register int t25;

    *(unsigned short *)(((int)stk + 0)) = (*(short *)((a4 + 0x8)));
    t1 = vmu_menu_pad_pressed(0x40);
    if ((signed char)t1 != 0) {
        *(unsigned short *)((a4 + 0x8)) = 0x0;
    }
    t4 = vmu_menu_pad_pressed(0x80);
    if ((signed char)t4 != 0) {
        *(unsigned short *)((a4 + 0x8)) = 0x1;
    }
    if ((*(short *)((a4 + 0x8))) != (*(short *)(((int)stk + 0)))) {
        snd_play_side_se(0x0, 0x4C);
    }
    t13 = vmu_menu_pad_pressed(0x4);
    if ((signed char)t13 != 0) {
        snd_play_side_se(0x0, 0x4D);
        if ((*(short *)((a4 + 0x8))) == 1) {
            (((struct o35_uchar *)(a4))->v) = 0x2D;
        }
        t25 = (*(short *)((a4 + 0x8)));
    } else {
        t20 = vmu_menu_pad_pressed(0x2);
        t25 = 0xFFFFFFFF;
        if ((signed char)t20 != 0) {
            snd_play_side_se(0x0, 0x4E);
            (((struct o35_uchar *)(a4))->v) = 0x1E;
            t25 = 0x1;
        }
    }
    return t25;
}
