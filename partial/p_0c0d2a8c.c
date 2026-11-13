/* @unit 0c0d2a8c-0c0d2dd8 -macsave=1 */
typedef struct Z Z;
struct Z { char pad0[5]; char c5; char c6; char c7; char c8; char c9; char pad10[18]; Z *z28; char pad32[36]; int l68; int l72; int l76; int l80; char pad84[78]; unsigned short w162; };
typedef Z *P;
extern char g_dbg_text_buf[];
extern char dbgfmt_588[], dbgfmt_59c[], dbgfmt_5b0[], dbgfmt_5c4[], dbgfmt_5d8[], dbgfmt_5ec[], dbgfmt_600[], dbgfmt_614[], dbgfmt_628[], dbgfmt_63c[];
extern char g_players[];
extern char g_pad_buttons[];
int sprintf(char *, char *, ...);
void dbg_print_at(char *, int, float, float, float, float);

void dbgkey_draw_info(P p)
{
    sprintf(g_dbg_text_buf, dbgfmt_588, p->c6);
    dbg_print_at(g_dbg_text_buf, 7, (float)((p->c5 * 30 + 10) * 8), 24.0f, 8.0f, 8.0f);
    sprintf(g_dbg_text_buf, dbgfmt_59c, (unsigned char)p->c7);
    dbg_print_at(g_dbg_text_buf, 7, (float)((p->c5 * 30 + 10) * 8), 32.0f, 8.0f, 8.0f);
    sprintf(g_dbg_text_buf, dbgfmt_5b0, p->c8);
    dbg_print_at(g_dbg_text_buf, 7, (float)((p->c5 * 30 + 10) * 8), 40.0f, 8.0f, 8.0f);
    sprintf(g_dbg_text_buf, dbgfmt_5c4, (unsigned char)p->c9);
    dbg_print_at(g_dbg_text_buf, 7, (float)((p->c5 * 30 + 10) * 8), 48.0f, 8.0f, 8.0f);
    sprintf(g_dbg_text_buf, dbgfmt_5d8, (unsigned char)(g_players + (unsigned short)(p->c5 * 29392))[29084]);
    dbg_print_at(g_dbg_text_buf, 7, (float)((p->c5 * 30 + 10) * 8), 56.0f, 8.0f, 8.0f);
    sprintf(g_dbg_text_buf, dbgfmt_5ec, (unsigned char)(g_players + (unsigned short)(p->c5 * 29392))[29094]);
    dbg_print_at(g_dbg_text_buf, 7, (float)((p->c5 * 30 + 10) * 8), 64.0f, 8.0f, 8.0f);
    sprintf(g_dbg_text_buf, dbgfmt_600, *(unsigned short *)(g_players + (unsigned short)(p->c5 * 29392) + 29086));
    dbg_print_at(g_dbg_text_buf, 7, (float)((p->c5 * 30 + 10) * 8), 72.0f, 8.0f, 8.0f);
    sprintf(g_dbg_text_buf, dbgfmt_614, p->w162);
    dbg_print_at(g_dbg_text_buf, 7, (float)((p->c5 * 30 + 10) * 8), 80.0f, 8.0f, 8.0f);
    sprintf(g_dbg_text_buf, dbgfmt_628, (unsigned char)((char *)p->z28)[257]);
    dbg_print_at(g_dbg_text_buf, 7, (float)((p->c5 * 30 + 10) * 8), 88.0f, 8.0f, 8.0f);
    sprintf(g_dbg_text_buf, dbgfmt_63c, (unsigned char)((char *)p->z28)[258]);
    dbg_print_at(g_dbg_text_buf, 7, (float)((p->c5 * 30 + 10) * 8), 96.0f, 8.0f, 8.0f);
}
void FUN_0c0d2d22(P p)
{
    char *e;
    p->l72 = *(int *)(g_pad_buttons + (char)(p->c5 * 36) + 8);
    p->l68 = *(int *)(g_pad_buttons + (char)(p->c5 * 36));
    if (*(int *)(g_pad_buttons + (char)(p->c5 * 36)) & 0xf0) {
        if (p->l76 < 10)
            p->l76++;
    } else
        p->l76 = 0;
    if (p->l76 >= 10) {
        p->l80 ^= 1;
        if (p->l80 != 0)
            p->l72 = *(int *)(g_pad_buttons + (char)(p->c5 * 36));
    }
}
