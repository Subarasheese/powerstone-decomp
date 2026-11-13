/* debug work/player/stage editor (CHAR/EDIT/MENU mode); not a resource loader (0c0cfe04-0c0d24ec) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
typedef struct { int a, b, c; } vec12;
extern int sprintf(char *, const char *, ...);
extern void FUN_0c06233a(int a, int b, int c);
extern void dbg_print_at(char *s, int n, float x, float y, float sx, float sy);

void dbgedit_select_object(char *obj)
{
    char *owner = *(char **)(obj + 40);
    char *buf;
    int sel, row;
    float eight = 8.0f;

    if (*(int *)(obj + 72) & 64) {
        *(short *)(obj + 156) = *(short *)(obj + 156) - 1;
        if ((unsigned short)*(short *)(obj + 156) > 255)
            *(short *)(obj + 156) = 255;
    }
    if (*(int *)(obj + 72) & 128) {
        *(short *)(obj + 156) = *(short *)(obj + 156) + 1;
        if ((unsigned short)*(short *)(obj + 156) > 255)
            *(short *)(obj + 156) = 0;
    }
    if (*(short *)(obj + 164) != 0) {
        row = *(int *)(0xC350B7C + (short)((unsigned char)obj[158] * 52));
        *(vec12 *)(owner + 44) = *(vec12 *)(row + (unsigned short)*(short *)(obj + 156) * 12);
        FUN_0c06233a(*(int *)(owner + 736), 0xC664958, *(short *)(obj + 156));
    } else {
        FUN_0c06233a(*(int *)(owner + 736), ((int)g_res_kyoutsuu), *(short *)(obj + 156));
    }
    buf = (char *)0xC7F36B8;
    sprintf(buf, (const char *)0xC1544D0);
    dbg_print_at(buf, 7, 40.0f, 136.0f, eight, eight);
    sprintf(buf, (const char *)0xC1544C8, (unsigned short)*(short *)(obj + 156));
    dbg_print_at(buf, 7, 160.0f, 136.0f, eight, eight);
}
