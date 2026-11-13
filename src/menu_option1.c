/* OPTION group screen 1 (0c019bf4-0c01a42c) */

struct oF2_short { char p[0xF2]; short v; };
int memset(int, int, int);
struct byte_at_00 { unsigned char value; };
struct word_at_00 { unsigned int value; };
struct byte_at_01 { char pad[0x1]; unsigned char value; };
struct word_at_04 { char pad[0x4]; unsigned int value; };
struct byte_at_06 { char pad[0x6]; unsigned char value; };
struct word_at_08 { char pad[0x8]; unsigned int value; };
int FUN_0c019d1c(int, int, int, int);
int opt_page1_spawn_cursor_pulse(int);
extern int opt_page1_run_objects_in_mask();
int opt_page_leave_reset(void);
int game_reset_objects(void);
int FUN_0c0593e0(int);
int obj_tick_class(int);
int FUN_0c05f2d4(int, int);
int res_switch_scene(int);
int snd_play_side_se(int, int);
int cam_request_mode(int, int, int);
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2F0_int { char p[0x2F0]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
int obj_destroy(int);
int FUN_0c06231c(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6d00(void);
int FUN_0c0e6e5c(int);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c0e6fe8(int);
struct o2E4_int { char p[0x2E4]; int v; };
struct oC_float { char p[0xC]; float v; };
float math_sin_angle16(int);
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct oE8_int { char p[0xE8]; int v; };
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_uv(int, int);
int mdl_vtx_set_uv(int, int);
struct o0_short { short v; };
struct o14_short { char p[0x14]; short v; };

int opt_page1_spawn_bg_scroll(int a4);
int opt_page1_obj_in_mask(int a4);
int opt_page1_pad_pressed(int a4);

int opt_page1_init(void)
{
    return memset(0xC362328, 0x0, 0xA);
}

int opt_page1_main(int arg0, int arg1, int arg2, int arg3)
{
    register int tmp;

    tmp = *(signed char *)0xC362328;
    switch (tmp) {
    case 0:
        (((struct byte_at_00 *)0xC362328)->value) = ((*(signed char *)0xC362328) + 0x1);
        FUN_0c05f2d4(0x3, 0x0);
        (((struct word_at_08 *)0xC7F31BC)->value) = 0x0;
        (((struct word_at_04 *)0xC7F31BC)->value) = 0x0;
        (((struct word_at_00 *)0xC7F31BC)->value) = 0x0;
        game_reset_objects();
        cam_request_mode(0x1C, 0x0, 0xF0);
        res_switch_scene(0xE);
        opt_page1_spawn_bg_scroll(0x0);
        tmp = *(signed char *)0xC362329;
        if (tmp != 0) {
            if (tmp != 1) {
            } else {
                tmp = opt_page1_pad_pressed(0x10);
                if ((signed char)tmp != 0) {
                    snd_play_side_se(0x0, 0x4B);
                    tmp = *(signed char *)0xC36232E;
                    (((struct byte_at_06 *)0xC362328)->value) = (tmp - 1);
                    if ((int)(signed char)(tmp - 1) < 0) {
                        (((struct byte_at_06 *)0xC362328)->value) = 0x2;
                    }
                } else {
                    tmp = opt_page1_pad_pressed(0x20);
                    if ((signed char)tmp != 0) {
                        snd_play_side_se(0x0, 0x4B);
                        (((struct byte_at_06 *)0xC362328)->value) = (*(signed char *)0xC36232E + 1) % 3;
                    }
                }
                tmp = opt_page1_pad_pressed(0x4);
                if ((signed char)tmp != 0) {
                    (((struct byte_at_00 *)0xC362328)->value) = ((*(signed char *)0xC362328) + 0x1);
                    (((struct byte_at_01 *)0xC362328)->value) = 0x0;
                    snd_play_side_se(0x0, 0x4D);
                } else {
                    tmp = opt_page1_pad_pressed(0x2);
                    if ((signed char)tmp != 0) {
                        opt_page_leave_reset();
                        snd_play_side_se(0x0, 0x4D);
                    }
                }
            }
        } else {
            (((struct byte_at_01 *)0xC362328)->value) = ((*(signed char *)0xC362329) + 0x1);
            tmp = ((int (*)(int))(opt_page1_run_objects_in_mask))(0xF);
            opt_page1_spawn_cursor_pulse(0x1);
        }
        break;
    case 1:
        tmp = *(signed char *)0xC362329;
        if (tmp != 0) {
            if (tmp != 1) {
            } else {
                tmp = opt_page1_pad_pressed(0x10);
                if ((signed char)tmp != 0) {
                    snd_play_side_se(0x0, 0x4B);
                    tmp = *(signed char *)0xC36232E;
                    (((struct byte_at_06 *)0xC362328)->value) = (tmp - 1);
                    if ((int)(signed char)(tmp - 1) < 0) {
                        (((struct byte_at_06 *)0xC362328)->value) = 0x2;
                    }
                } else {
                    tmp = opt_page1_pad_pressed(0x20);
                    if ((signed char)tmp != 0) {
                        snd_play_side_se(0x0, 0x4B);
                        (((struct byte_at_06 *)0xC362328)->value) = (*(signed char *)0xC36232E + 1) % 3;
                    }
                }
                tmp = opt_page1_pad_pressed(0x4);
                if ((signed char)tmp != 0) {
                    (((struct byte_at_00 *)0xC362328)->value) = ((*(signed char *)0xC362328) + 0x1);
                    (((struct byte_at_01 *)0xC362328)->value) = 0x0;
                    snd_play_side_se(0x0, 0x4D);
                } else {
                    tmp = opt_page1_pad_pressed(0x2);
                    if ((signed char)tmp != 0) {
                        opt_page_leave_reset();
                        snd_play_side_se(0x0, 0x4D);
                    }
                }
            }
        } else {
            (((struct byte_at_01 *)0xC362328)->value) = ((*(signed char *)0xC362329) + 0x1);
            tmp = ((int (*)(int, int, int, int))(opt_page1_run_objects_in_mask))(0xF, arg1, arg2, arg3);
            opt_page1_spawn_cursor_pulse(0x1);
        }
        break;
    case 2:
        FUN_0c019d1c(0xC362328, arg1, arg2, arg3);
        break;
    }
    obj_tick_class(0x5);
    return FUN_0c0593e0(0x5);
}

int opt_page1_tick_menu_rows(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC36232F;
    if ((*(signed char *)((a4 + 0xF))) == (signed char)t0) {
    } else {
        *(unsigned char *)((a4 + 0xF)) = t0;
        *(volatile signed char *)0xC36232F;
        t1 = FUN_0c0e6e5c(t0);
        FUN_0c06231c(((((struct o2EC_int *)(a4))->v)), 0xC664AC0, (t1 + 0xC));
        *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = ((((int)((*(signed char *)0xC36232F) + 0x1) >= (int)0xA)) ? 1 : 0);
        *(volatile signed char *)0xC36232F;
        t0 = FUN_0c0e6d00();
        FUN_0c06231c(((((struct o2E8_int *)(a4))->v)), 0xC664AC0, (t0 + 0xC));
        t0 = *(signed char *)0xC36232E;
        if (t0 == 0) {
            t1 = *(signed char *)0xC36232F;
            FUN_0c06231c(((((struct o2F0_int *)(a4))->v)), 0xC664AC0, (*(signed char *)((((signed char)((t1 << 1) + t1) + 0xC11BA78) + 0x0))));
            t1 = *(signed char *)0xC36232F;
            if ((*(signed char *)((a4 + 0xE))) != (*(signed char *)((((signed char)((t1 << 1) + t1) + 0xC11BA78) + 0x2)))) {
                t1 = *(signed char *)0xC36232F;
                *(unsigned char *)((a4 + 0xE)) = (*(signed char *)((((signed char)((t1 << 1) + t1) + 0xC11BA78) + 0x2)));
                t1 = *(signed char *)0xC36232F;
                *(unsigned char *)0xC7F4740 = (*(signed char *)((((signed char)((t1 << 1) + t1) + 0xC11BA78) + 0x2)));
                res_switch_scene(0xF);
            }
            *(unsigned char *)((((((struct o2F4_int *)(a4))->v)) + 0x0)) = 0x1;
            t1 = *(signed char *)0xC36232F;
            t2 = (*(signed char *)((((signed char)((t1 << 1) + t1) + 0xC11BA78) + 0x1)));
        } else {
            FUN_0c06231c(((((struct o2F0_int *)(a4))->v)), 0xC664AC0, ((*(signed char *)((0xC17FEB4 + t0))) + (*(signed char *)0xC36232F)));
            *(unsigned char *)((((((struct o2F4_int *)(a4))->v)) + 0x0)) = 0x1;
            if ((*(signed char *)((a4 + 0xE))) == 99) {
                *(unsigned char *)((a4 + 0xE)) = 0x0;
                *(unsigned char *)0xC7F4740 = ((*(signed char *)0xC36232E) + 0x7);
                res_switch_scene(0xF);
            }
            *(unsigned char *)((((((struct o2F4_int *)(a4))->v)) + 0x0)) = 0x1;
            t2 = (*(signed char *)0xC36232F);
        }
        FUN_0c06233a(((((struct o2F4_int *)(a4))->v)), 0xC664AD8, t2);
    }
    t0 = opt_page1_obj_in_mask(a4);
    if ((signed char)t0 != 0) {
        return obj_destroy(a4);
    }
    return (signed char)t0;
}

int opt_page1_spawn_menu_rows(int a4)
{
    int stk[1];
    register int t0;
    register int t19;
    register int t4;
    register int t5;
    register int t6;
    register int t13;

    *(unsigned short *)(((int)stk + 0)) = a4;
    t0 = obj_create(0x5, 0x1, 0x6);
    t19 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC019DDC;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct oF2_ushort *)(t0))->v) = (*(short *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0xE)) = 0x63;
        *(unsigned char *)((t0 + 0xF)) = 0x63;
        t4 = 0x0;
        t5 = (*(int *)((((*(signed char *)0xC36232E) << 2) + 0xC17FFD8)));
        t6 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t6) + 0x0))) + 0x0)) = 0x1;
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t6) + 0x0))) + 0x1)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t6) + 0x0))) + 0x2)) = 0x1F;
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t6) + 0x0))), 0xC664AC0, (*(signed char *)((t5 + 0xC))));
            t13 = *(int *)((((0x2E0 + t0) + t6) + 0x0));
            (((struct o24_float *)(t13))->v) = 1.0f;
            (((struct o20_float *)(t13))->v) = 1.0f;
            (((struct o1C_float *)(t13))->v) = 1.0f;
            *(volatile int *)((((0x2E0 + t0) + t6) + 0x0));
            FUN_0c0e6fe8(t13);
            t4 = (t4 + 0x1);
            t5 = (t5 + 0x10);
            t6 = (t6 + 0x4);
            if ((int)t4 >= (int)0x5) {
                break;
            }
        }
        *(unsigned char *)((((((struct o2F4_int *)(t0))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct o2F4_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2F4_int *)(t0))->v)) + 0x2)) = 0xF;
        t19 = 0xF;
    }
    return t19;
}

int opt_page1_tick_cursor_pulse(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    *(unsigned short *)0xC362330 = ((*(short *)0xC362330) + 0x5B0);
    t0 = a4;
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((((t1 << 2) + (0x2E0 + a4)) + 0x8));
        if ((*(signed char *)0xC36232E) == t1) {
            t0 = (*(short *)0xC362330);
            u0 = (math_sin_angle16(t0));
            u1 = u0;
            u2 = 1.0999999f;
            u0 = 0.099999994f;
            u3 = u2;
            u3 = u3 + u0 * u1;
            u2 = u3;
            (((struct o24_float *)(t2))->v) = u2;
            (((struct o20_float *)(t2))->v) = u2;
            (((struct o1C_float *)(t2))->v) = u2;
            (((struct oC_float *)(t2))->v) = 150.0f;
        } else {
            (((struct o24_float *)(t2))->v) = 1.0f;
            (((struct o20_float *)(t2))->v) = 1.0f;
            (((struct o1C_float *)(t2))->v) = 1.0f;
            (((struct oC_float *)(t2))->v) = 50.0f;
            t2 = t0;
        }
        t1 = (t1 + 0x1);
        t0 = t2;
        if ((int)t1 >= (int)0x3) {
            break;
        }
    }
    FUN_0c06231c(((((struct o2E4_int *)(a4))->v)), 0xC664AC0, ((*(signed char *)0xC36232E) + 0x5));
    t0 = opt_page1_obj_in_mask(a4);
    if ((signed char)t0 != 0) {
        return obj_destroy(a4);
    }
    return (signed char)t0;
}

int opt_page1_tick_bg_scroll(int a4)
{
    int stk[2];
    register float u0;
    register int t9;

    u0 = (((struct o38_float *)(a4))->v);
    (((struct o38_float *)(a4))->v) = (u0 + 0.000999999931f);
    if (!(1.0f > (u0 + 0.000999999931f))) {
        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - 1.0f);
    }
    mdl_vtx_iter_begin(((((struct oE8_int *)((*(int *)0xC664AC8)))->v)), ((((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v)));
    for (;;) {
        t9 = mdl_vtx_iter_next();
        if (t9 != 0) {
            break;
        }
        mdl_vtx_get_uv(((int)stk + 0), (((int)stk + 0) + 0x4));
        *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + ((((struct o38_float *)(a4))->v)));
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + ((((struct o38_float *)(a4))->v)));
        mdl_vtx_set_uv(((int)stk + 0), (((int)stk + 0) + 0x4));
    }
    return (opt_page1_obj_in_mask(a4));
}

int opt_page1_spawn_bg_scroll(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned short *)(((int)stk + 0)) = a4;
    t0 = obj_create(0x5, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC01A27A;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct o38_float *)(t0))->v) = 0.0f;
        (((struct oF2_ushort *)(t0))->v) = (*(short *)(((int)stk + 0)));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        return FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664AC0, 0x4);
    }
    return t0;
}

int opt_page1_obj_in_mask(int a4)
{
    if ((((((struct oF2_short *)(a4))->v)) & (*(short *)0xC36232C)) != 0) {
        return 0x1;
    }
    return 0x0;
}

int opt_page1_pad_pressed(int a4)
{
    if (((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & a4) == 0) {
        if (((unsigned short)((((struct o14_short *)0xC361BFC)->v)) & a4) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}
