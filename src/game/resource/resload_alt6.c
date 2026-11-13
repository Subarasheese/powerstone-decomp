/* resource loader: file load/unpack, texture and model register/release, per-scene sets, per-player model load (0c05fc50-0c061094) */

/* named globals (symbols.txt) */
extern char g_menu_option_work[];
extern char g_res_art_model[];
extern char g_res_ending[];
struct Row { int w0; short h4; short h6; int w8; int w12; int w16; };
struct Out { short h0; short h2; int w4; int w8; int w12; int w16; int w20; };
extern void res_load_file_unpack(int a);
extern void res_textures_register(struct Out *out1, int q);
extern void res_model_register(int a, int b);
struct Ent { int a; int k; };
extern void res_textures_register(struct Out *out, int q);

void res_ending_load(void)
{
    signed char *slot_sel = (signed char *)(0xC7F302C + 85);
    struct Row *row_table = (struct Row *)0xC31FD20;
    struct Out *out1 = (struct Out *)g_res_ending;
    struct Out *out2;
    struct Row *row2;
    if (*slot_sel == 10) {
        res_load_file_unpack(195);
        res_model_register(0xC17FE70, 0xC14DF08);
        return;
    }
    res_load_file_unpack(((int *)0xC14DEB4)[*slot_sel]);
    out1->w8 = row_table[*slot_sel].w0;
    out1->h2 = row_table[*slot_sel].h4;
    out1->w12 = row_table[*slot_sel].w16;
    out1->w16 = row_table[*slot_sel].w8;
    out1->w20 = row_table[*slot_sel].w12;
    out1->w4 = 1300;
    res_textures_register(out1, 0xC14DEF4);
    res_load_file_unpack(170);
    row2 = (struct Row *)((char *)row_table + 300);
    out2 = (struct Out *)0xC6649D0;
    out2->w8 = row2->w0;
    out2->h2 = row2->h4;
    out2->w12 = row2->w16;
    out2->w16 = row2->w8;
    out2->w20 = row2->w12;
    out2->w4 = 1200;
    res_textures_register(out2, 0xC14DEFC);
}

void res_art_model_load(void)
{
    struct Ent *entries = (struct Ent *)0xC14DF30;
    struct Row *row_table = (struct Row *)0xC31FD20;
    struct Out *out = (struct Out *)g_res_art_model;
    signed char *sel_ptr = (signed char *)(((int)g_menu_option_work) + 27);
    res_load_file_unpack(entries[*sel_ptr].a);
    out->w8 = row_table[entries[*sel_ptr].k].w0;
    out->h2 = row_table[entries[*sel_ptr].k].h4;
    out->w12 = row_table[entries[*sel_ptr].k].w16;
    out->w16 = row_table[entries[*sel_ptr].k].w8;
    out->w20 = row_table[entries[*sel_ptr].k].w12;
    out->w4 = 1500;
    res_textures_register(out, 0xC14DF68);
}
