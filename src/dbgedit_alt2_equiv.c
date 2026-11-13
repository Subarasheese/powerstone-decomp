/* debug work/player/stage editor (CHAR/EDIT/MENU mode); not a resource loader (0c0cfe04-0c0d24ec) */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o68_ushort { char p[0x68]; unsigned short v; };
struct o9C_ushort { char p[0x9C]; unsigned short v; };
int res_load_pl_effect(int, int);
int res_stage_release(void);
int res_stage_load(int);
int dbg_print_at(int, float, float);
int dbgedit_spawn_player_tasks(int);
int dbgedit_work_player_menu(int);
int FUN_0c0d0d80(int);
int FUN_0c0d0e50(int);
int dbgedit_select_player_object(int);
int dbgedit_select_stage_object(int);
int dbgatk_edit_params(int);
int FUN_0c0d2a70(int);
int FUN_0c0d2a84(void);
int dbgkey_draw_info(int);
int FUN_0c0d2d22(int);
int sprintf(int, int, int, int, int);

int dbgedit_draw_editor_screen(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x0));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(0xC0D0658))(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x0)) = ((*(signed char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x0))) + 0x1);
        *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x6)) = 0x0;
        *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x7)) = 0x0;
        *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x8)) = 0x0;
        *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x9)) = 0x0;
        *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0xA)) = 0x0;
        *(unsigned int *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0xC)) = 0x0;
        *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x4)) = 0x0;
        (((struct o14_uchar *)(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0)))->v) = 0x0;
        (((struct o15_uchar *)(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0)))->v) = 0x0;
        (((struct o16_uchar *)(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0)))->v) = 0x0;
        (((struct o17_uchar *)(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0)))->v) = 0x0;
        *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x5)) = a4;
        (((struct o9C_ushort *)(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0)))->v) = 0x0;
        if ((signed char)a4 == 0) {
            res_stage_release();
            res_stage_load((*(signed char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x9E))));
        }
        res_load_pl_effect(0x0, (*(signed char *)0xC7E40C8));
        dbgedit_spawn_player_tasks(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
    }
    FUN_0c0d2d22(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
    t0 = *(signed char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x4));
    switch (t0) {
    case 0:
        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC154390);
        dbg_print_at(0xC7F36B8, (float)(((((short)(signed char)a4 * (short)0x1E) + 0x14) << 2) << 1), 0.0f);
        break;
    case 1:
        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC15439C);
        dbg_print_at(0xC7F36B8, (float)(((((short)(signed char)a4 * (short)0x1E) + 0x14) << 2) << 1), 0.0f);
        break;
    case 2:
        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC1543A4);
        dbg_print_at(0xC7F36B8, (float)(((((short)(signed char)a4 * (short)0x1E) + 0x14) << 2) << 1), 0.0f);
        break;
    }
    t0 = *(signed char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x1));
    switch (t0) {
    case 0:
        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC1543AC);
        dbg_print_at(0xC7F36B8, (float)(((((short)(signed char)a4 * (short)0x1E) + 0xA) << 2) << 1), 0.0f);
        if (((*(int *)((((signed char)((((a4 << 2) << 1) + a4) << 2) + 0xC7F31F0) + 0x8))) & 8) != 0) {
            *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x1)) = ((*(signed char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x1))) + 0x1);
        } else {
            t0 = *(signed char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x4));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                    } else {
                        dbgedit_select_stage_object(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
                    }
                } else {
                    dbgedit_select_player_object(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
                }
            } else {
                FUN_0c0d0e50(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
            }
        }
        (((struct o64_ushort *)(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0)))->v) = (unsigned char)(*(signed char *)((((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x101)));
        (((struct o68_ushort *)(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0)))->v) = (unsigned char)(*(signed char *)((((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x102)));
        FUN_0c0d2a70(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
        dbgkey_draw_info(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
        break;
    case 1:
        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC1543B8);
        dbg_print_at(0xC7F36B8, (float)(((((short)(signed char)a4 * (short)0x1E) + 0xA) << 2) << 1), 0.0f);
        if (((*(int *)((((signed char)((((a4 << 2) << 1) + a4) << 2) + 0xC7F31F0) + 0x8))) & 8) != 0) {
            *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x1)) = ((*(signed char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x1))) + 0x1);
            *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x2)) = 0x0;
            *(unsigned char *)(((*(int *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x1C))) + 0x1)) = 0x0;
        } else {
            FUN_0c0d0d80(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
        }
        FUN_0c0d2a70(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
        FUN_0c0d2a84();
        dbgkey_draw_info(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
        dbgatk_edit_params(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
        break;
    case 2:
        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC1543C4);
        dbg_print_at(0xC7F36B8, (float)(((((short)(signed char)a4 * (short)0x1E) + 0xA) << 2) << 1), 0.0f);
        if (((*(int *)((((signed char)((((a4 << 2) << 1) + a4) << 2) + 0xC7F31F0) + 0x8))) & 8) != 0) {
            *(unsigned char *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x1)) = 0x0;
            *(unsigned char *)(((*(int *)((((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0) + 0x1C))) + 0x1)) = 0x1;
        } else {
            dbgedit_work_player_menu(((short)((short)(signed char)a4 * (short)0xA8) + 0xC4949A0));
        }
        break;
    }
    return ((int (*)(void))(0xC0D05EC))();
}
