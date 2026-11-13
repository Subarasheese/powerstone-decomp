/* resource loader: file load/unpack, texture and model register/release, per-scene sets, per-player model load (0c05fc50-0c061094) */

/* named globals (symbols.txt) */
extern char g_res_key_cfg[];
extern char g_res_omake[];
extern char g_res_omake_model[];
extern char g_res_pstone_logo[];
extern char g_res_system_font[];
typedef struct { char byte_0; char byte_1; short half_2; int word_4; int word_8; int word_12; int word_16; int word_20; } dst_rec;
typedef struct { int word_0; short half_4; short pad6; int word_8; int word_12; int word_16; } src_rec;
extern void res_load_file_unpack(int);
extern void res_textures_register(dst_rec *, char *);
extern void res_model_register(void *, char *);
typedef struct { char field_0; char field_1; short field_2; int field_4; int field_8; int field_12; int field_16; int field_20; } dst_rec_r3;
typedef struct { int field_0; short field_4; short pad_6; int field_8; int field_12; int field_16; } src_rec_r4;

void res_pstone_logo_load(void)
{
    src_rec *src;
    dst_rec *dst;
    res_load_file_unpack(172);
    src = (src_rec *)0x0c31fe74;
    dst = (dst_rec *)g_res_pstone_logo;
    dst->word_8 = src->word_0;
    dst->half_2 = src->half_4;
    dst->word_12 = src->word_16;
    dst->word_16 = src->word_8;
    dst->word_20 = src->word_12;
    dst->word_4 = 1700;
    res_textures_register(dst, (char *)0x0c14de60);
}

void res_omake_load(void)
{
    src_rec *src;
    dst_rec *dst;
    res_load_file_unpack(174);
    src = (src_rec *)0x0c31fe9c;
    dst = (dst_rec *)g_res_omake;
    dst->word_8 = src->word_0;
    dst->half_2 = src->half_4;
    dst->word_12 = src->word_16;
    dst->word_16 = src->word_8;
    dst->word_20 = src->word_12;
    dst->word_4 = 1400;
    res_textures_register(dst, (char *)0x0c14df14);
    res_load_file_unpack(193);
    res_model_register((void *)g_res_omake_model, (char *)0x0c14df20);
}

void res_key_cfg_load(void)
{
    src_rec_r4 *src;
    dst_rec_r3 *dst;
    res_load_file_unpack(175);
    src = (src_rec_r4 *)0x0c31feb0;
    dst = (dst_rec_r3 *)g_res_key_cfg;
    dst->field_8 = src->field_0;
    dst->field_2 = src->field_4;
    dst->field_12 = src->field_16;
    dst->field_16 = src->field_8;
    dst->field_20 = src->field_12;
    dst->field_4 = 1400;
    res_textures_register(dst, (char *)0x0c14dfd4);
}

void res_system_font_load(void)
{
    src_rec *src;
    dst_rec *dst;
    res_load_file_unpack(180);
    src = (src_rec *)0x0c31ff14;
    dst = (dst_rec *)g_res_system_font;
    dst->word_8 = src->word_0;
    dst->half_2 = src->half_4;
    dst->word_12 = src->word_16;
    dst->word_16 = src->word_8;
    dst->word_20 = src->word_12;
    dst->word_4 = 1800;
    res_textures_register(dst, (char *)0x0c14dff0);
}
