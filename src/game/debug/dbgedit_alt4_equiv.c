/* debug work/player/stage editor (CHAR/EDIT/MENU mode); not a resource loader (0c0cfe04-0c0d24ec) */

int sprintf(char *, int, int, int, const char *, int);
void thunk_FUN_0c05fff4(void);
void FUN_0c09939c(void);
void pl_init_player_record(int slot);
void FUN_0c05f2d4(int a, int b);
void res_player_entries_release_all(void);
void res_load_pl_effect(int slot, int v);
void FUN_0c062cf4(int slot, int v);
void FUN_0c06233a(char *s, int tbl, int n);
void dbg_print_at(char *s, int a, float x, float y, float sx, float sy);
#define SLOT_REC(slot) ((signed char *)(0xC4949A0 + (short)((slot) * 168)))

void dbgedit_select_player_object(char *obj)
{
    char *player;
    char *linked;
    signed char *unused_rec;
    int unused_flags;
    player = (char *)0xC7E40C4 + (unsigned short)(obj[5] * 0x72D0);
    linked = *(char **)(obj + 36);
    if (*(int *)(obj + 72) & 16) {
        *(short *)(obj + 156) = *(short *)(obj + 156) - 1;
        if ((unsigned short)*(short *)(obj + 156) > 255)
            *(short *)(obj + 156) = 255;
    }
    if (*(int *)(obj + 72) & 32) {
        *(short *)(obj + 156) = *(short *)(obj + 156) + 1;
        if ((unsigned short)*(short *)(obj + 156) > 255)
            *(short *)(obj + 156) = 0;
    }
    if (*(int *)(obj + 72) & 64) {
        if (SLOT_REC((signed char)obj[5])[6] > 0)
            SLOT_REC((signed char)obj[5])[6] = SLOT_REC((signed char)obj[5])[6] - 1;
        thunk_FUN_0c05fff4();
        FUN_0c09939c();
        player[4] = SLOT_REC((signed char)obj[5])[6];
        thunk_FUN_0c05fff4();
        FUN_0c09939c();
        pl_init_player_record(obj[5]);
        FUN_0c05f2d4(0, 0);
        player[1] = 0;
        res_player_entries_release_all();
        res_load_pl_effect((signed char)obj[5], SLOT_REC((signed char)obj[5])[6]);
        FUN_0c062cf4((signed char)obj[5], SLOT_REC((signed char)obj[5])[6]);
    }
    if (*(int *)(obj + 72) & 128) {
        if (SLOT_REC((signed char)obj[5])[6] < 10)
            SLOT_REC((signed char)obj[5])[6] = SLOT_REC((signed char)obj[5])[6] + 1;
        thunk_FUN_0c05fff4();
        FUN_0c09939c();
        player[4] = SLOT_REC((signed char)obj[5])[6];
        thunk_FUN_0c05fff4();
        FUN_0c09939c();
        pl_init_player_record(obj[5]);
        FUN_0c05f2d4(0, 0);
        player[1] = 0;
        res_player_entries_release_all();
        res_load_pl_effect((signed char)obj[5], SLOT_REC((signed char)obj[5])[6]);
        FUN_0c062cf4((signed char)obj[5], SLOT_REC((signed char)obj[5])[6]);
    }
    FUN_0c06233a(*(char **)(linked + 736), 0xC6002D0, *(short *)(obj + 156));
    sprintf((char *)0xC7F36B8, 0, 0, 0, (const char *)0xC1544B8, 0);
    dbg_print_at((char *)0xC7F36B8, 7, 80.0f, 104.0f, 8.0f, 8.0f);
    sprintf((char *)0xC7F36B8, 0, 0, 0, (const char *)0xC1544C8, SLOT_REC((signed char)obj[5])[6]);
    dbg_print_at((char *)0xC7F36B8, 7, 200.0f, 104.0f, 8.0f, 8.0f);
    sprintf((char *)0xC7F36B8, 0, 0, 0, (const char *)0xC1544D0, 0);
    dbg_print_at((char *)0xC7F36B8, 7, 80.0f, 112.0f, 8.0f, 8.0f);
    sprintf((char *)0xC7F36B8, 0, 0, 0, (const char *)0xC1544C8, (unsigned short)*(short *)(obj + 156));
    dbg_print_at((char *)0xC7F36B8, 7, 200.0f, 112.0f, 8.0f, 8.0f);
}
