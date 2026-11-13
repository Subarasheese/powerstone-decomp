/* OPTION group screen 1 (0c019bf4-0c01a42c) */

/* named globals (symbols.txt) */
extern char g_res_art_model[];
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
int opt_page1_spawn_menu_rows(int);
int opt_page1_pad_pressed(int);
int snd_play_side_se(int, int);
int FUN_0c0e6e5c(void);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
extern int FUN_0c0e6fe8();
int obj_tick_class(int, int, int, int);

int opt_page1_run_objects_in_mask(int a4, int a5, int a6, int a7);

int FUN_0c019d1c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC362329;
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = opt_page1_pad_pressed(0x80);
            if ((signed char)t0 != 0) {
                snd_play_side_se(0x0, 0x4C);
                *(volatile signed char *)0xC36232F;
                *(volatile signed char *)((0xC17FEB0 + (*(signed char *)0xC36232E)));
                (((struct o7_uchar *)0xC362328)->v) = (FUN_0c0e6e5c());
            } else {
                t0 = opt_page1_pad_pressed(0x40);
                if ((signed char)t0 != 0) {
                    snd_play_side_se(0x0, 0x4C);
                    t0 = *(signed char *)0xC36232F;
                    (((struct o7_uchar *)0xC362328)->v) = (t0 - 1);
                    if ((int)(signed char)(t0 - 1) < 0) {
                        (((struct o7_uchar *)0xC362328)->v) = ((*(signed char *)((0xC17FEB0 + (*(signed char *)0xC36232E)))) - 1);
                    }
                }
            }
            t0 = opt_page1_pad_pressed(0x2);
            t2 = (signed char)t0;
            if ((signed char)t0 != 0) {
                snd_play_side_se(0x0, 0x4D);
                (((struct o0_uchar *)0xC362328)->v) = ((*(signed char *)0xC362328) - 1);
                (((struct o3_uchar *)0xC362328)->v) = 0x0;
                (((struct o2_uchar *)0xC362328)->v) = 0x0;
                (((struct o1_uchar *)0xC362328)->v) = 0x0;
                t2 = 0x0;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        (((struct o1_uchar *)0xC362328)->v) = ((*(signed char *)0xC362329) + 0x1);
        (((struct o7_uchar *)0xC362328)->v) = 0x0;
        opt_page1_run_objects_in_mask(0x1, a5, a6, a7);
        opt_page1_spawn_menu_rows(0xE);
        t1 = opt_page1_pad_pressed(0x80);
        if ((signed char)t1 != 0) {
            snd_play_side_se(0x0, 0x4C);
            *(volatile signed char *)0xC36232F;
            *(volatile signed char *)((0xC17FEB0 + (*(signed char *)0xC36232E)));
            (((struct o7_uchar *)0xC362328)->v) = (FUN_0c0e6e5c());
        } else {
            t1 = opt_page1_pad_pressed(0x40);
            if ((signed char)t1 != 0) {
                snd_play_side_se(0x0, 0x4C);
                t1 = *(signed char *)0xC36232F;
                (((struct o7_uchar *)0xC362328)->v) = (t1 - 1);
                if ((int)(signed char)(t1 - 1) < 0) {
                    (((struct o7_uchar *)0xC362328)->v) = ((*(signed char *)((0xC17FEB0 + (*(signed char *)0xC36232E)))) - 1);
                }
            }
        }
        t1 = opt_page1_pad_pressed(0x2);
        t2 = (signed char)t1;
        if ((signed char)t1 != 0) {
            snd_play_side_se(0x0, 0x4D);
            (((struct o0_uchar *)0xC362328)->v) = ((*(signed char *)0xC362328) - 1);
            (((struct o3_uchar *)0xC362328)->v) = 0x0;
            (((struct o2_uchar *)0xC362328)->v) = 0x0;
            (((struct o1_uchar *)0xC362328)->v) = 0x0;
            t2 = 0x0;
        }
        t0 = t2;
    }
    return t0;
}

int opt_page1_spawn_cursor_pulse(int a4)
{
    int stk[1];
    register int t0;
    register int t14;
    register int t2;
    register int t3;
    register int t4;
    register int t11;
    register int t13;

    *(unsigned short *)(((int)stk + 0)) = a4;
    t0 = obj_create(0x5, 0x1, 0x5);
    t14 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC01A098;
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
        t2 = 0x0;
        t3 = 0xC11BAC8;
        t4 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t4) + 0x0))) + 0x0)) = 0x1;
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t4) + 0x0))) + 0x1)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t4) + 0x0))) + 0x2)) = 0x1F;
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t4) + 0x0))), ((int)g_res_art_model), (*(signed char *)((t3 + 0xC))));
            t11 = *(int *)((((0x2E0 + t0) + t4) + 0x0));
            (((struct o24_float *)(t11))->v) = 1.0f;
            (((struct o20_float *)(t11))->v) = 1.0f;
            (((struct o1C_float *)(t11))->v) = 1.0f;
            *(volatile int *)((((0x2E0 + t0) + t4) + 0x0));
            t13 = FUN_0c0e6fe8(t11);
            t2 = (t2 + 0x1);
            t3 = (t3 + 0x10);
            t4 = (t4 + 0x4);
            if ((int)t2 >= (int)0x5) {
                break;
            }
        }
        t14 = t13;
    }
    return t14;
}

int opt_page1_run_objects_in_mask(int a4, int a5, int a6, int a7)
{
    register int t0;

    *(unsigned short *)0xC36232C = a4;
    t0 = obj_tick_class(0x5, a5, a6, a7);
    *(unsigned short *)0xC36232C = 0x0;
    return t0;
}
