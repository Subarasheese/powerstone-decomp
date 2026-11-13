/* resource loader: file load/unpack, texture and model register/release, per-scene sets, per-player model load (0c05fc50-0c061094) */

typedef struct { char field_00; char field_01; short field_02; int field_04; int field_08; int field_12; int field_16; int field_20; } draw_dst;
typedef struct { int field_00; short field_04; short pad_06; int field_08; int field_12; int field_16; } model_src;
extern void res_load_file_unpack(int);
extern void res_textures_register(draw_dst *, char *);
extern void res_model_register(void *, char *);

void res_csel_open_load(void)
{
    model_src *src;
    draw_dst *dst;
    res_load_file_unpack(166);
    src = (model_src *)0x0c31fdfc;
    dst = (draw_dst *)0x0c664a30;
    dst->field_08 = src->field_00;
    dst->field_02 = src->field_04;
    dst->field_12 = src->field_16;
    dst->field_16 = src->field_08;
    dst->field_20 = src->field_12;
    dst->field_04 = 1300;
    res_textures_register(dst, (char *)0x0c14de6c);
}

void res_capcom_logo_load(void)
{
    model_src *src;
    draw_dst *dst;
    res_load_file_unpack(173);
    src = (model_src *)0x0c31fe88;
    dst = (draw_dst *)0x0c664a18;
    dst->field_08 = src->field_00;
    dst->field_02 = src->field_04;
    dst->field_12 = src->field_16;
    dst->field_16 = src->field_08;
    dst->field_20 = src->field_12;
    dst->field_04 = 1710;
    res_textures_register(dst, (char *)0x0c14dffc);
    res_load_file_unpack(154);
    res_model_register((void *)0x0c17fe58, (char *)0x0c14e008);
}
