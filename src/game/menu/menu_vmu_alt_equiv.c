/* VMU save/load menu UI (handlers over the vmu_step_* state machines) (0c01e798-0c020258) */

int FUN_0c01e860(int a4, int a5, int a6, int a7);
int vmu_menu_update_objs();
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2F_uchar { char p[0x2F]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
int vmu_menu_pad_pressed(int);
int vmu_menu_draw_buttons(void);
int snd_play_side_se(int, int);
int FUN_0c0d7566(int, int, int, int);
struct o28_float { char p[0x28]; float v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o34_uchar { char p[0x34]; unsigned char v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
int FUN_0c01ec9c(int, int, int, int);
int vmu_menu_spawn_message(int);
int vmu_menu_spawn_choice_cursor(int);
int vmu_menu_poll_yes_no(int);
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
int FUN_0c01ef8e(int);
int FUN_0c01f00a(int);
int vmu_menu_scan_port_masks(int, int, int, int);
int FUN_0c02002a(int, int, int, int);
int FUN_0c0200e2(int, int, int, int);
int FUN_0c01efd0(int);
int FUN_0c02018e(int, int, int, int);
extern signed char FUN_0c01fb0c(char *obj);
extern void vmu_menu_step_choose_yes_no(char *obj);
extern void vmu_menu_step_notice_by_kind(char *obj);
extern void vmu_menu_state_save(char *obj);
extern void vmu_menu_step_notice_wait_ok(char *obj);
int FUN_0c01f9a0(void);
int vmu_menu_poll_confirm_cancel(int);
int vmu_menu_spawn_message(int a);
int vmu_step_load(int);
int vmu_step_load_vmgame(int);
struct Obj {
    char pad0[4];
    signed char state;      /* 4 */
    char pad5[19];
    int mask;               /* 24 */
    char pad28[4];
    int player;             /* 32 */
    char pad36[14];
    char timer;             /* 50 */
};
struct o32_uchar { char p[0x32]; unsigned char v; };
extern int vmu_step_rewrite_vmgame();
int vmu_menu_spawn_message(int);
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int);
float math_sin_angle16(int, int, int, int);

int FUN_0c01eb32(int a4, int a5, int a6, int a7);
int FUN_0c01ebc0(int a4, int a5, int a6, int a7);
int vmu_menu_update_objs();


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
                vmu_menu_update_objs(a4, 0, 0x0C362A50, a7);   /* r6: g_vmu_menu_work, left by the switch */
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
                                vmu_menu_update_objs(a4, 0, 0x0C362A50, a7);   /* r6: g_vmu_menu_work, left by the switch */
                                return 0x2;
                            }
                            return FUN_0c01ec9c(0xC362A50, 0x0, 0xC362A50, a7);
                        }
                        (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
                        (((struct o3_uchar *)0xC362A50)->v) = 0x0;
                        (((struct o2_uchar *)0xC362A50)->v) = 0x0;
                        (((struct o31_uchar *)0xC362A50)->v) = 0x0;
                        return FUN_0c01ec9c(0xC362A50, 0x0, 0xC362A50, a7);
                    }
                    return FUN_0c01ebc0(0xC362A50, 0x0, 0xC362A50, a7);
                }
                (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
                (((struct o2F_uchar *)0xC362A50)->v) = 0x7;
                (((struct o30_uchar *)0xC362A50)->v) = 0x63;
                (((struct o1_uchar *)0xC362A50)->v) = 0x0;
                (((struct o2_uchar *)0xC362A50)->v) = 0x0;
                (((struct o31_uchar *)0xC362A50)->v) = 0x0;
                return FUN_0c01ebc0(0xC362A50, 0x0, 0xC362A50, a7);
            }
        } else {
            (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
            vmu_menu_update_objs(a4, 0, 0x0C362A50, a7);   /* r6: g_vmu_menu_work, left by the switch */
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
        vmu_menu_update_objs(a4, 0, 0x0C362A50, a7);   /* r6: g_vmu_menu_work, left by the switch */
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

int FUN_0c01eb32(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if ((t0 != 3) && (t0 != 4)) {
                    vmu_menu_update_objs();
                    *(unsigned char *)0xC362A50 = (*(signed char *)((a4 + 0x30)));
                    return 0x30;
                }
                return FUN_0c02002a(a4, a5, a6, a7);
            }
            t0 = vmu_menu_scan_port_masks(a4, a5, a6, a7);
            if ((signed char)t0 == 0) {
                return FUN_0c01ef8e(a4);
            }
            return (signed char)t0;
        }
        return vmu_menu_scan_port_masks(a4, a5, a6, a7);
    }
    *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) + 0x1);
    *(unsigned char *)((a4 + 0x3)) = 0x0;
    (((struct o2C_uchar *)(a4))->v) = 0x0;
    (((struct o2D_uchar *)(a4))->v) = 0x0;
    return vmu_menu_scan_port_masks(a4, a5, a6, a7);
}

int FUN_0c01ebc0(int a4, int a5, int a6, int a7)
{
    int stk[2];
    int t0;
    register int t7;

    t0 = *(signed char *)((a4 + 0x2));
    switch (t0) {
    case 0:
        *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) + 0x1);
        *(unsigned char *)((a4 + 0x3)) = 0x0;
        (((struct o2C_uchar *)(a4))->v) = 0x0;
        (((struct o2D_uchar *)(a4))->v) = 0x0;
        vmu_menu_scan_port_masks(a4, a5, a6, a7);
        break;
    case 1:
        vmu_menu_scan_port_masks(a4, a5, a6, a7);
        break;
    case 2:
        t7 = vmu_menu_scan_port_masks(a4, a5, a6, a7);
        if ((signed char)t7 == 0) {
            FUN_0c01f00a(a4);
        }
        break;
    default:
        if ((t0 != 3) && (t0 != 4)) {
            vmu_menu_update_objs();
            *(unsigned char *)0xC362A50 = (*(signed char *)((a4 + 0x30)));
        } else {
            FUN_0c0200e2(a4, a5, a6, a7);
        }
        break;
    }
    return 0x0;
}

int FUN_0c01ec30(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if ((t0 != 3) && (t0 != 4)) {
                    vmu_menu_update_objs();
                    *(unsigned char *)((a4 + 0x0)) = (*(signed char *)((a4 + 0x30)));
                    return 0x30;
                }
                return FUN_0c02018e(a4, a5, a6, a7);
            }
            t0 = vmu_menu_scan_port_masks(a4, a5, a6, a7);
            if ((signed char)t0 == 0) {
                return FUN_0c01efd0(a4);
            }
            return (signed char)t0;
        }
        return vmu_menu_scan_port_masks(a4, a5, a6, a7);
    }
    *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) + 0x1);
    *(unsigned char *)((a4 + 0x3)) = 0x0;
    (((struct o2C_uchar *)(a4))->v) = 0x0;
    (((struct o2D_uchar *)(a4))->v) = 0x0;
    return vmu_menu_scan_port_masks(a4, a5, a6, a7);
}

void FUN_0c01ee40(char *obj)
{
    char *sm = (char *)0xC362A50;
    switch (obj[49]) {
    case 0:
        FUN_0c01fb0c(obj);
        break;
    case 2:
        if (FUN_0c01fb0c(obj) >= 0) {
            sm[2] = 2;
            sm[3] = 0;
        }
        break;
    case 5:
        if (FUN_0c01fb0c(obj) >= 0)
            vmu_menu_step_choose_yes_no(obj);
        break;
    case 3:
    case 17:
        if (FUN_0c01fb0c(obj) >= 0)
            vmu_menu_step_notice_by_kind(obj);
        break;
    case 6:
        vmu_menu_state_save(obj);
        break;
    case 7:
        sm[0] = obj[47];
        break;
    case 8:
        vmu_menu_step_notice_wait_ok(obj);
        break;
    }
}

int FUN_0c01f060(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x4));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = ((int (*)(int, int))vmu_menu_poll_confirm_cancel)(0x3060E, 0x0);
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
        *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
        t1 = ((int (*)(int, int, int, int))(vmu_menu_update_objs))(a4, a5, a6, a7);
        vmu_menu_spawn_message(0x2);
        FUN_0c01f9a0();
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

void vmu_menu_state_load(struct Obj *obj)
{
    signed char *result_rec = (signed char *)0xC362A50;
    int poll;

    switch (obj->state) {
    case 0:
        obj->state = obj->state + 1;
        vmu_menu_update_objs();
        vmu_menu_spawn_message(5);
        obj->timer = 60;
        /* fall through */
    case 1:
        poll = vmu_step_load(obj->player);
        if (poll == -1)
            break;
        if (poll == 0) {
            if ((1 << obj->player) & obj->mask) {
                obj->state = obj->state + 1;
                break;
            }
            result_rec[49] = 10;
        } else {
            result_rec[49] = 11;
        }
        result_rec[4] = 0;
        break;
    case 2:
        poll = vmu_step_load_vmgame(obj->player);
        if (poll == -1)
            break;
        if (poll == 0)
            result_rec[49] = 10;
        else
            result_rec[49] = 11;
        result_rec[4] = 0;
        break;
    }
}

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
            t0 = ((int (*)(int, int, int))(vmu_step_rewrite_vmgame))((*(int *)((a4 + 0x20))), (*(signed char *)((a4 + 0x34))), a6);
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
        vmu_menu_update_objs();
        vmu_menu_spawn_message(0x12);
        (((struct o32_uchar *)(a4))->v) = 0x3C;
        t1 = ((int (*)(int, int))(vmu_step_rewrite_vmgame))((*(int *)((a4 + 0x20))), (*(signed char *)((a4 + 0x34))));
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

int vmu_menu_tick_choice_cursor(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    if ((*(signed char *)((a4 + 0xF))) != (*(short *)0xC362A58)) {
        *(unsigned char *)((a4 + 0xF)) = (*(signed char *)0xC362A58);
        u0 = -60.0f;
        u0 = u0 + 120.0f * (float)(*(signed char *)((a4 + 0xF)));
        (((struct o4_float *)(((((struct o2E0_int *)(a4))->v))))->v) = u0;
    }
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x5B0);
    t0 = (((struct o2E0_int *)(a4))->v);
    u0 = 0.75f;
    u0 = u0 + 0.25f * (math_sin_angle16(((((struct oEC_short *)(a4))->v)), a5, a6, a7));
    (((struct o40_float *)(t0))->v) = u0;
    if ((*(signed char *)0xC362A7E) != 0) {
        return obj_destroy(a4);
    }
    return 0xC01F620;
}

