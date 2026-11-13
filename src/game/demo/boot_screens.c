/* version and warning screens at boot (0c0d54c0-0c0d57a4) */

struct o0_uchar { unsigned char v; };
struct o25_uchar { char p[0x25]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
int FUN_0c027c7e(void);
int ui_sprite_queue_reset(void);
extern int res_switch_scene();
int game_clear_win_records(void);
int gfx_set_background_color(int, int, int, float);
typedef struct { char pad0[5]; unsigned char b5, b6, b7; char pad1[8]; short h16; short pad18; short h20; } StateBlock;
struct o0_float { float v; };
struct o0_short { short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_short { char p[0x14]; short v; };
struct o1C_float { char p[0x1C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct oC_short { char p[0xC]; short v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
int dbg_print_at(int, float, float);
int sprintf(int, int, ...);
typedef struct { char pad0[5]; unsigned char counter_5, field_6, field_7; char pad1[8]; short timer_16; short pad_18; short field_20; } state_rec;
int dbg_set_text_color(int);

int boot_screens_update(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F2EE0;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return (unsigned char)t0;
        }
        t0 = *(signed char *)0xC7F2EE4;
        t1 = (unsigned char)t0;
        if ((unsigned char)t0 == 0) {
            (((struct o4_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE4) + 0x1);
            t0 = ((int (*)(int, int, int, int))(res_switch_scene))(0x0, a5, a6, a7);
            t1 = (game_clear_win_records());
        }
    } else {
        gfx_set_background_color(0xFF000000, 0xFF000000, 0xFF000000, f4);
        (((struct o0_uchar *)0xC7F2EE0)->v) = 0x1;
        (((struct oD_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct oC_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct oB_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct oA_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct o9_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct o8_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct o7_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct o6_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct o5_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct o4_uchar *)0xC7F2EE0)->v) = 0x0;
        FUN_0c027c7e();
        ui_sprite_queue_reset();
        t0 = *(signed char *)0xC7F2EE4;
        t1 = (unsigned char)t0;
        if ((unsigned char)t0 == 0) {
            (((struct o4_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE4) + 0x1);
            t0 = ((int (*)(int))(res_switch_scene))(0x0);
            t1 = (game_clear_win_records());
        }
    }
    (((struct o25_uchar *)0xC7F2EE0)->v) = 0x0;
    return t1;
}

void boot_advance_to_version_screen(void)
{
    StateBlock *state = (StateBlock *)0x0C7F2EE0;
    state->b5 = state->b5 + 1;
    state->h16 = 180;
}

int version_screen_draw(int a4, int a5, int a6, int a7)
{
    int t0;
    register float u0;

    if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x604) == 0) && (t0 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t0 & 0x604) == 0)) {
    } else {
        (((struct oC_ushort *)0xC7F2EE4)->v) = 0x1;
    }
    (((struct oC_ushort *)0xC7F2EE4)->v) = (((((struct oC_short *)0xC7F2EE4)->v)) - 1);
    if (((((struct oC_short *)0xC7F2EE4)->v)) == 0) {
        (((struct o0_uchar *)0xC7F2EE4)->v) = ((*(signed char *)0xC7F2EE4) + 0x1);
        (((struct o1_uchar *)0xC7F2EE4)->v) = 0x0;
        t0 = 0x0;
    } else {
        sprintf(0xC7F36B8, 0xC154878);
        *(volatile float *)0xC0D56D8;
        dbg_print_at(0xC7F36B8, ((((struct o4_float *)0xC0D56DC)->v)), ((((struct o0_float *)0xC0D56DC)->v)));
        sprintf(0xC7F36B8, 0xC154884, 0xC154888);
        u0 = (((struct o10_float *)0xC0D56DC)->v);
        dbg_print_at(0xC7F36B8, u0, ((((struct o14_float *)0xC0D56DC)->v)));
        sprintf(0xC7F36B8, 0xC154884, 0xC154894);
        dbg_print_at(0xC7F36B8, u0, ((((struct o1C_float *)0xC0D56DC)->v)));
        sprintf(0xC7F36B8, 0xC1548A0);
        t0 = (dbg_print_at(0xC7F36B8, ((((struct o1C_float *)0xC0D56DC)->v)), u0));
    }
    return t0;
}

void boot_advance_to_warning_screen(void)
{
    state_rec *rec = (state_rec *)0x0C7F2EE0;
    rec->counter_5 = rec->counter_5 + 1;
    rec->timer_16 = 180;
}

int warning_screen_draw(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x604) == 0) && (t0 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t0 & 0x604) == 0)) {
    } else {
        (((struct oC_ushort *)0xC7F2EE4)->v) = 0x1;
    }
    (((struct oC_ushort *)0xC7F2EE4)->v) = (((((struct oC_short *)0xC7F2EE4)->v)) - 1);
    if (((((struct oC_short *)0xC7F2EE4)->v)) == 0) {
        (((struct o0_uchar *)0xC7F2EE4)->v) = ((*(signed char *)0xC7F2EE4) + 0x1);
        (((struct o1_uchar *)0xC7F2EE4)->v) = 0x0;
        return 0x0;
    }
    t0 = *(signed char *)0xC7F2F08;
    t1 = 0x0;
    if ((unsigned char)t0 != 0) {
        t2 = 0x1;
        if ((unsigned char)t0 != 1) {
            t3 = 0x2;
            if ((unsigned char)t0 != 2) {
                t3 = 0x3;
                if ((unsigned char)t0 != 3) {
                    t3 = 0x4;
                    if ((unsigned char)t0 != 4) {
                        t3 = 0x5;
                        if ((unsigned char)t0 != 5) {
                            if ((unsigned char)t0 != 6) {
                            } else {
                                t0 = 0x6;
                            }
                            t3 = t0;
                        }
                    }
                }
            }
            t2 = t3;
        }
        t1 = t2;
    }
    dbg_set_text_color((*(int *)(((signed char)(((t1 << 1) + t1) << 2) + 0xC33F6C8))));
    t0 = 0xC0D57A0;
    t2 = 0x0;
    t3 = t1;
    for (;;) {
        if ((int)t2 >= (int)(*(int *)((((signed char)(((t1 << 1) + t1) << 2) + 0xC33F6C8) + 0x8)))) {
            break;
        }
        t3 = t2;
        t3 = (t3 << 1);
        t3 = (t3 + t2);
        t3 = (t3 << 2);
        t0 = 0x4;
        t3 = (t3 + (*(int *)((((signed char)(((t1 << 1) + t1) << 2) + 0xC33F6C8) + 0x4))));
        t0 = (dbg_print_at((*(int *)((t3 + 0x8))), (*(float *)((t3 + 0x0))), (*(float *)((t3 + t0)))));
        t2 = (t2 + 0x1);
    }
    return dbg_set_text_color(0xFFFFFFFF);
}
