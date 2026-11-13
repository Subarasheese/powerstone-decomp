/* debug work/player/stage editor (CHAR/EDIT/MENU mode); not a resource loader (0c0cfe04-0c0d24ec) */

/* named globals (symbols.txt) */
int FUN_0c0d0d80(int a4, int a5, int a6, int a7);
extern char g_hit_table_desc[];
extern char g_res_kyoutsuu[];
int FUN_0c0282cc(void);
int FUN_0c02d420(void);
int game_reset_objects(void);
int FUN_0c0593e0(int);
int obj_tick_class(int);
int FUN_0c05f2d4(int, int);
int FUN_0c05f952(void);
int res_pl_textures_release_all(void);
int testmode_check_exit_combo(void);
extern int dbgedit_update_camera();
int dbgedit_draw_editor_screen(int);
int memset(int, int, int);
int thunk_FUN_0c062d78(void);
struct o0_uint { unsigned int v; };
struct o20_float { char p[0x20]; float v; };
typedef struct { int x, y, z; } S12;
typedef struct { S12 entries[2]; } T24;
struct oEC_ushort { char p[0xEC]; unsigned short v; };
typedef struct { int x, y, z; } Vec12;
extern void res_stage_release(void);
extern void res_stage_load(int);
extern void FUN_0c062d78(void);
extern void FUN_0c06233a(char *, char *, int);
extern int sprintf(char *, const char *, ...);
extern void dbg_print_at(char *, int, float, float, float, float);
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o56_ushort { char p[0x56]; unsigned short v; };
struct o64_short { char p[0x64]; short v; };
struct o80_short { char p[0x80]; short v; };
struct o84_short { char p[0x84]; short v; };
struct o86_short { char p[0x86]; short v; };
struct o8C_int { char p[0x8C]; int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o9A_ushort { char p[0x9A]; unsigned short v; };
struct oA0_short { char p[0xA0]; short v; };
struct o54_ushort { char p[0x54]; unsigned short v; };
struct o68_short { char p[0x68]; short v; };
struct o82_short { char p[0x82]; short v; };
struct o88_short { char p[0x88]; short v; };
struct o8A_short { char p[0x8A]; short v; };
struct handler_tbl { int (*fn[12])(unsigned char *); };
struct row_ptrs { int *row_a; int *row_b; char pad_08[24]; };
extern int dbgedit_select_object(unsigned char *);

int FUN_0c0cfeb0(void);

int dbgedit_update(float f4, float f5, float f6, float f7, float f8, float f9)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE9;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 == 1) {
            t0 = ((int (*)(float, float, float, float, float, float))(dbgedit_update_camera))(f4, f5, f6, f7, f8, f9);
            t0 = 0x0;
            for (;;) {
                dbgedit_draw_editor_screen(t0);
                t0 = (t0 + 0x1);
                if ((int)(signed char)t0 >= (int)0x2) {
                    break;
                }
            }
            obj_tick_class(0x2);
            obj_tick_class(0x1);
            obj_tick_class(0x5);
            FUN_0c0593e0(0x2);
            FUN_0c0593e0(0x1);
            FUN_0c0593e0(0x5);
            FUN_0c02d420();
            FUN_0c0282cc();
        }
    } else {
        FUN_0c05f2d4(0x0, 0x0);
        res_pl_textures_release_all();
        *(unsigned char *)0xC7E40CC = 0x0;
        *(unsigned char *)0xC7EB39C = 0x0;
        *(unsigned char *)0xC7F2EE9 = ((*(signed char *)0xC7F2EE9) + 0x1);
        game_reset_objects();
        memset(0xC4949A0, 0x0, 0xA8);
        memset(0xC494A48, 0x0, 0xA8);
        thunk_FUN_0c062d78();
        FUN_0c0cfeb0();
        t0 = ((int (*)(void))(dbgedit_update_camera))();
        t0 = 0x0;
        for (;;) {
            dbgedit_draw_editor_screen(t0);
            t0 = (t0 + 0x1);
            if ((int)(signed char)t0 >= (int)0x2) {
                break;
            }
        }
        obj_tick_class(0x2);
        obj_tick_class(0x1);
        obj_tick_class(0x5);
        FUN_0c0593e0(0x2);
        FUN_0c0593e0(0x1);
        FUN_0c0593e0(0x5);
        FUN_0c02d420();
        FUN_0c0282cc();
    }
    FUN_0c05f952();
    return testmode_check_exit_combo();
}

int FUN_0c0cfeb0(void)
{
    (((struct o20_float *)0xC7F2B08)->v) = (*(float *)0xC0CFF30);
    (((struct o0_uint *)0xC7F2B08)->v) = 0x4000;
    return 0x110;
}

void dbgedit_set_start_positions(char *obj)
{
    T24 table_a, table_b;

    table_a = *(T24 *)0x0C154360;
    table_b = *(T24 *)0x0C154378;
    *(S12 *)(obj + 32) = *(S12 *)((char *)&table_a + (signed char)(obj[3] * 12));
    *(S12 *)(obj + 44) = *(S12 *)((char *)&table_b + (signed char)(obj[3] * 12));
}

int FUN_0c0d00c8(int a4)
{
    register int t3;

    t3 = *(signed char *)((a4 + 0x8));
    if (t3 != 0) {
        
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x78;
        t3 = 0xEC;
    }
    return t3;
}

void FUN_0c0d00ea(void)
{
    
}


void dbgedit_select_stage_object(char *menu)
{
    char *target = *(char **)(menu + 40);
    char *text = (char *)0x0C7F36B8;
    char *name_src;

    if (*(int *)(menu + 72) & 0x10) {
        *(short *)(menu + 156) = *(short *)(menu + 156) - 1;
        if ((unsigned short)*(short *)(menu + 156) > 255)
            *(short *)(menu + 156) = 255;
    }
    if (*(int *)(menu + 72) & 0x20) {
        *(short *)(menu + 156) = *(short *)(menu + 156) + 1;
        if ((unsigned short)*(short *)(menu + 156) > 255)
            *(short *)(menu + 156) = 0;
    }
    if (*(int *)(menu + 72) & 0x40) {
        if ((unsigned char)menu[158] > 0)
            menu[158] = menu[158] - 1;
        res_stage_release();
        res_stage_load(menu[158]);
        FUN_0c062d78();
    }
    if (*(int *)(menu + 72) & 0x80) {
        if ((unsigned char)menu[158] < 9)
            menu[158] = menu[158] + 1;
        res_stage_release();
        res_stage_load(menu[158]);
        FUN_0c062d78();
    }
    if (*(short *)(menu + 164) != 0) {
        *(Vec12 *)(target + 44) = *(Vec12 *)(*(char **)((char *)0x0C350B7C + (short)((unsigned char)menu[158] * 52)) + (unsigned short)*(short *)(menu + 156) * 12);
        name_src = (char *)0x0C664958;
    } else {
        name_src = (char *)g_res_kyoutsuu;
    }
    FUN_0c06233a(*(char **)(target + 0x2E0), name_src, *(short *)(menu + 156));
    sprintf(text, (const char *)0x0C1544E0);
    dbg_print_at(text, 7, 80.0f, 104.0f, 8.0f, 8.0f);
    sprintf(text, (const char *)0x0C1544C8, (unsigned char)menu[158]);
    dbg_print_at(text, 7, 200.0f, 104.0f, 8.0f, 8.0f);
    sprintf(text, (const char *)0x0C1544D0);
    dbg_print_at(text, 7, 80.0f, 112.0f, 8.0f, 8.0f);
    sprintf(text, (const char *)0x0C1544C8, (unsigned short)*(short *)(menu + 156));
    dbg_print_at(text, 7, 200.0f, 112.0f, 8.0f, 8.0f);
}

int FUN_0c0d1c96(int a4)
{
    register int t0;
    register int t1;

    (((struct o8C_uint *)(a4))->v) = (((((unsigned short)((((struct o80_short *)(a4))->v)) * (unsigned short)((((struct o64_short *)(a4))->v))) << 2) + (*(int *)(((((((unsigned short)((((struct oA0_short *)(a4))->v)) << 2) << 2) << 1) + ((int)g_hit_table_desc)) + 0x0)))) + ((unsigned short)((((struct o86_short *)(a4))->v)) << 2));
    t0 = (((struct o44_int *)(a4))->v);
    if ((t0 == 16) || ((t0 == 32) || ((t0 == 64) || (t0 == 0x80)))) {
        t0 = (((struct o84_short *)(a4))->v);
        if ((unsigned short)t0 != 0) {
            if ((unsigned short)t0 != 1) {
                if ((unsigned short)t0 != 2) {
                } else {
                    if ((0x40 & ((((struct o48_int *)(a4))->v))) != 0) {
                        t0 = (((struct o8C_int *)(a4))->v);
                        *(unsigned short *)((t0 + 0x2)) = ((*(short *)((t0 + 0x2))) - 1);
                    }
                    if ((0x80 & ((((struct o48_int *)(a4))->v))) != 0) {
                        t0 = (((struct o8C_int *)(a4))->v);
                        *(unsigned short *)((t0 + 0x2)) = ((*(short *)((t0 + 0x2))) + 0x1);
                    }
                    t0 = (((struct o8C_int *)(a4))->v);
                    t1 = *(signed char *)((t0 + 0x1));
                    if ((int)(unsigned short)(*(short *)((t0 + 0x2))) >= (int)(unsigned short)(*(short *)(((0xC33F604 + (signed char)((t1 << 1) + (t1 << 2))) + ((*(signed char *)((a4 + 0x4))) << 1))))) {
                        *(unsigned short *)((((((struct o8C_int *)(a4))->v)) + 0x2)) = 0x0;
                    }
                }
            } else {
                if ((0x40 & ((((struct o48_int *)(a4))->v))) != 0) {
                    t0 = (((struct o8C_int *)(a4))->v);
                    t1 = *(signed char *)((t0 + 0x1));
                    *(unsigned char *)((t0 + 0x1)) = (t1 - 1);
                    if ((int)(signed char)(t1 - 1) < 0) {
                        *(unsigned char *)((((((struct o8C_int *)(a4))->v)) + 0x1)) = 0x2;
                    }
                }
                if ((0x80 & ((((struct o48_int *)(a4))->v))) != 0) {
                    t0 = (((struct o8C_int *)(a4))->v);
                    t1 = *(signed char *)((t0 + 0x1));
                    *(unsigned char *)((t0 + 0x1)) = (t1 + 0x1);
                    if ((int)(signed char)(t1 + 0x1) > (int)0x2) {
                        *(unsigned char *)((((((struct o8C_int *)(a4))->v)) + 0x1)) = 0x0;
                    }
                }
            }
        } else {
            if ((0x40 & ((((struct o48_int *)(a4))->v))) != 0) {
                t0 = (((struct o8C_int *)(a4))->v);
                t1 = *(signed char *)((t0 + 0x0));
                *(unsigned char *)((t0 + 0x0)) = (t1 - 1);
                if ((int)(signed char)(t1 - 1) < (int)0xFFFFFFFF) {
                    *(unsigned char *)((((((struct o8C_int *)(a4))->v)) + 0x0)) = 0x12;
                }
            }
            if ((0x80 & ((((struct o48_int *)(a4))->v))) != 0) {
                t0 = (((struct o8C_int *)(a4))->v);
                t1 = *(signed char *)((t0 + 0x0));
                *(unsigned char *)((t0 + 0x0)) = (t1 + 0x1);
                if ((int)(signed char)(t1 + 0x1) > (int)0x12) {
                    *(unsigned char *)((((((struct o8C_int *)(a4))->v)) + 0x0)) = 0xFFFFFFFF;
                }
            }
        }
    }
    (((struct o9A_ushort *)(a4))->v) = (*(short *)((0xC33F628 + ((*(signed char *)((((((struct o8C_int *)(a4))->v)) + 0x1))) << 1))));
    t0 = (((struct o8C_int *)(a4))->v);
    (((struct o90_uint *)(a4))->v) = ((((unsigned short)(*(short *)((0xC33F628 + ((*(signed char *)((t0 + 0x1))) << 1)))) * (unsigned short)(*(short *)((t0 + 0x2)))) << 1) + (*(int *)(((((int)g_hit_table_desc) + ((((unsigned short)((((struct oA0_short *)(a4))->v)) << 2) << 2) << 1)) + 0x8))));
    if ((0x2 & ((((struct o48_int *)(a4))->v))) != 0) {
        (((struct o56_ushort *)(a4))->v) = 0x1;
    }
    t0 = (((struct o48_int *)(a4))->v);
    t1 = t0;
    if ((t0 & 4) != 0) {
        (((struct o56_ushort *)(a4))->v) = 0x3;
        t1 = 0x56;
    }
    return t1;
}

int FUN_0c0d2018(int a4)
{
    register int t0;
    register int t1;

    (((struct o8C_uint *)(a4))->v) = (((((unsigned short)((((struct o82_short *)(a4))->v)) * (unsigned short)((((struct o68_short *)(a4))->v))) << 2) + (*(int *)(((((((unsigned short)((((struct oA0_short *)(a4))->v)) << 2) << 2) << 1) + ((int)g_hit_table_desc)) + 0x4)))) + ((unsigned short)((((struct o8A_short *)(a4))->v)) << 2));
    t0 = (((struct o44_int *)(a4))->v);
    if ((t0 == 16) || ((t0 == 32) || ((t0 == 64) || (t0 == 0x80)))) {
        t0 = (((struct o88_short *)(a4))->v);
        if ((unsigned short)t0 != 0) {
            if ((unsigned short)t0 != 1) {
                if ((unsigned short)t0 != 2) {
                } else {
                    if ((0x40 & ((((struct o48_int *)(a4))->v))) != 0) {
                        t0 = (((struct o8C_int *)(a4))->v);
                        *(unsigned short *)((t0 + 0x2)) = ((*(short *)((t0 + 0x2))) - 1);
                    }
                    if ((0x80 & ((((struct o48_int *)(a4))->v))) != 0) {
                        t0 = (((struct o8C_int *)(a4))->v);
                        *(unsigned short *)((t0 + 0x2)) = ((*(short *)((t0 + 0x2))) + 0x1);
                    }
                    t0 = (((struct o8C_int *)(a4))->v);
                    t1 = *(signed char *)((t0 + 0x1));
                    if ((unsigned int)(*(short *)((t0 + 0x2))) >= (unsigned int)(*(short *)((((0xC33F604 + (signed char)((t1 << 1) + (t1 << 2))) + ((*(signed char *)((a4 + 0x4))) << 1)) + 0x12)))) {
                        *(unsigned short *)((((((struct o8C_int *)(a4))->v)) + 0x2)) = 0x0;
                    }
                }
            } else {
                if ((0x40 & ((((struct o48_int *)(a4))->v))) != 0) {
                    t0 = (((struct o8C_int *)(a4))->v);
                    t1 = *(signed char *)((t0 + 0x1));
                    *(unsigned char *)((t0 + 0x1)) = (t1 - 1);
                    if ((int)(signed char)(t1 - 1) < 0) {
                        *(unsigned char *)((((((struct o8C_int *)(a4))->v)) + 0x1)) = 0x2;
                    }
                }
                if ((0x80 & ((((struct o48_int *)(a4))->v))) != 0) {
                    t0 = (((struct o8C_int *)(a4))->v);
                    t1 = *(signed char *)((t0 + 0x1));
                    *(unsigned char *)((t0 + 0x1)) = (t1 + 0x1);
                    if ((int)(signed char)(t1 + 0x1) > (int)0x2) {
                        *(unsigned char *)((((((struct o8C_int *)(a4))->v)) + 0x1)) = 0x0;
                    }
                }
            }
        } else {
            if ((0x40 & ((((struct o48_int *)(a4))->v))) != 0) {
                t0 = (((struct o8C_int *)(a4))->v);
                t1 = *(signed char *)((t0 + 0x0));
                *(unsigned char *)((t0 + 0x0)) = (t1 - 1);
                if ((int)(signed char)(t1 - 1) < (int)0xFFFFFFFF) {
                    *(unsigned char *)((((((struct o8C_int *)(a4))->v)) + 0x0)) = 0x12;
                }
            }
            if ((0x80 & ((((struct o48_int *)(a4))->v))) != 0) {
                t0 = (((struct o8C_int *)(a4))->v);
                t1 = *(signed char *)((t0 + 0x0));
                *(unsigned char *)((t0 + 0x0)) = (t1 + 0x1);
                if ((int)(signed char)(t1 + 0x1) > (int)0x12) {
                    *(unsigned char *)((((((struct o8C_int *)(a4))->v)) + 0x0)) = 0xFFFFFFFF;
                }
            }
        }
    }
    (((struct o9A_ushort *)(a4))->v) = (*(short *)((0xC33F62E + ((*(signed char *)((((((struct o8C_int *)(a4))->v)) + 0x1))) << 1))));
    t0 = (((struct o8C_int *)(a4))->v);
    t1 = *(signed char *)((t0 + 0x1));
    (((struct o90_uint *)(a4))->v) = ((((unsigned short)(*(short *)(((t1 << 1) + 0xC33F62E))) * (unsigned short)(*(short *)((t0 + 0x2)))) << 1) + (*(int *)((((((int)g_hit_table_desc) + ((((unsigned short)((((struct oA0_short *)(a4))->v)) << 2) << 2) << 1)) + (t1 << 2)) + 0xC))));
    if ((0x2 & ((((struct o48_int *)(a4))->v))) != 0) {
        (((struct o54_ushort *)(a4))->v) = 0x1;
        (((struct o56_ushort *)(a4))->v) = 0x1;
    }
    t0 = (((struct o48_int *)(a4))->v);
    t1 = t0;
    if ((t0 & 4) != 0) {
        (((struct o56_ushort *)(a4))->v) = 0x3;
        t1 = 0x56;
    }
    return t1;
}

int FUN_0c0d22a0(int a4, int a5, int a6, int a7)
{
    register int t9;
    register int t11;

    if ((((((struct o48_int *)(a4))->v)) & 0x2) != 0) {
        (((struct o56_ushort *)(a4))->v) = 0x2;
    }
    (((struct o8C_uint *)(a4))->v) = (((((unsigned short)((((struct o80_short *)(a4))->v)) * (unsigned short)((((struct o64_short *)(a4))->v))) << 2) + (*(int *)(((((((unsigned short)((((struct oA0_short *)(a4))->v)) << 2) << 2) << 1) + ((int)g_hit_table_desc)) + 0x0)))) + ((unsigned short)((((struct o86_short *)(a4))->v)) << 2));
    t9 = (((struct oA0_short *)(a4))->v);
    t11 = (((struct o8C_int *)(a4))->v);
    (((struct o90_uint *)(a4))->v) = ((((unsigned short)(*(short *)((0xC33F628 + ((*(signed char *)((t11 + 0x1))) << 1)))) * (unsigned short)(*(short *)((t11 + 0x2)))) << 1) + (*(int *)(((((int)g_hit_table_desc) + ((((unsigned short)t9 << 2) << 2) << 1)) + 0x8))));
    return ((int (*)(int, int, int, int))(0xC0D21FC))(a4, t11, (((int)g_hit_table_desc) + ((((unsigned short)t9 << 2) << 2) << 1)), a7);
}

int FUN_0c0d2398(int a4)
{
    register int t9;
    register int t11;
    register int t12;

    if ((((((struct o48_int *)(a4))->v)) & 0x2) != 0) {
        (((struct o56_ushort *)(a4))->v) = 0x2;
    }
    (((struct o8C_uint *)(a4))->v) = (((((unsigned short)((((struct o82_short *)(a4))->v)) * (unsigned short)((((struct o68_short *)(a4))->v))) << 2) + (*(int *)(((((((unsigned short)((((struct oA0_short *)(a4))->v)) << 2) << 2) << 1) + ((int)g_hit_table_desc)) + 0x4)))) + ((unsigned short)((((struct o8A_short *)(a4))->v)) << 2));
    t9 = (((struct oA0_short *)(a4))->v);
    t11 = (((struct o8C_int *)(a4))->v);
    t12 = *(signed char *)((t11 + 0x1));
    (((struct o90_uint *)(a4))->v) = ((((unsigned short)(*(short *)(((t12 << 1) + 0xC33F62E))) * (unsigned short)(*(short *)((t11 + 0x2)))) << 1) + (*(int *)((((((int)g_hit_table_desc) + ((((unsigned short)t9 << 2) << 2) << 1)) + (t12 << 2)) + 0xC))));
    return ((int (*)(int, int, int, int))(0xC0D21FC))(a4, t12, t11, ((((int)g_hit_table_desc) + ((((unsigned short)t9 << 2) << 2) << 1)) + (t12 << 2)));
}

void FUN_0c0d2424(unsigned char *obj)
{
    struct handler_tbl handlers;
    short *frame_tbl = (short *)0xC33F5EC;
    struct row_ptrs *row_tbl = (struct row_ptrs *)g_hit_table_desc;

    handlers = *(struct handler_tbl *)0xC1544F0;
    *(short *)(obj + 0x80) = frame_tbl[(signed char)obj[4]];
    *(short *)(obj + 0x82) = frame_tbl[(signed char)obj[4] + 3];
    handlers.fn[((unsigned short)*(unsigned short *)(obj + 84) << 2) + *(unsigned short *)(obj + 86)](obj);
    *(int **)(obj + 108) = row_tbl[*(unsigned short *)(obj + 0xA0)].row_a + (unsigned short)(*(unsigned short *)(obj + 100)) * (unsigned short)(*(unsigned short *)(obj + 128));
    *(int **)(obj + 112) = row_tbl[*(unsigned short *)(obj + 0xA0)].row_b + (unsigned short)(*(unsigned short *)(obj + 104)) * (unsigned short)(*(unsigned short *)(obj + 130));
    if ((signed char)obj[4] == 2 && (*(int *)(obj + 68) & 2))
        dbgedit_select_object(obj);
}
