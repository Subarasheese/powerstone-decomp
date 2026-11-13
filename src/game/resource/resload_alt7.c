/* resource loader: file load/unpack, texture and model register/release, per-scene sets, per-player model load (0c05fc50-0c061094) */

/* named globals (symbols.txt) */
extern char g_menu_option_work[];
extern char g_res_art_art[];
struct entry_rec { int seq_id; int row_index; };
struct row_rec { int field_0; short field_4; short field_6; int field_8; int field_12; int field_16; };
struct out_rec { short field_0; short field_2; int field_4; int field_8; int field_12; int field_16; int field_20; };
extern void res_load_file_unpack(int seq_id);
extern void res_textures_register(struct out_rec *out, int q);

void res_art_art_load(void)
{
    struct entry_rec *entries = (struct entry_rec *)0xC14DF74;
    struct row_rec *rows = (struct row_rec *)0xC31FD20;
    struct out_rec *out = (struct out_rec *)g_res_art_art;
    signed char *sel = (signed char *)(((int)g_menu_option_work) + 28);
    res_load_file_unpack(entries[*sel].seq_id);
    out->field_8 = rows[entries[*sel].row_index].field_0;
    out->field_2 = rows[entries[*sel].row_index].field_4;
    out->field_12 = rows[entries[*sel].row_index].field_16;
    out->field_16 = rows[entries[*sel].row_index].field_8;
    out->field_20 = rows[entries[*sel].row_index].field_12;
    out->field_4 = 1400;
    res_textures_register(out, 0xC14DFC4);
}
