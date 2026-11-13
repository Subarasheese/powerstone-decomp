/* resource loader: file load/unpack, texture and model register/release, per-scene sets, per-player model load (0c05fc50-0c061094) */

typedef struct { char b0; char b1; short h2; int w4; int w8; int w12; int w16; int w20; } DstRec;
typedef struct { int w0; short h4; short pad6; int w8; int w12; int w16; } SrcRec;
extern void res_load_file_unpack(int);
extern void res_textures_register(DstRec *, char *);
extern void res_model_register(void *, char *);

void res_item_load(void)
{
    SrcRec *src;
    DstRec *dst;
    res_load_file_unpack(152);
    src = (SrcRec *)0x0c1d7728;
    dst = (DstRec *)0x0c664988;
    dst->w8 = src->w0;
    dst->h2 = src->h4;
    dst->w12 = src->w16;
    dst->w4 = 1000;
    res_textures_register(dst, (char *)0x0c14de28);
}

void res_font_load(void)
{
    SrcRec *src;
    DstRec *dst;
    res_load_file_unpack(125);
    res_model_register((void *)0x0c17fdbc, (char *)0x0c14de50);
    res_load_file_unpack(150);
    src = (SrcRec *)0x0c1d773c;
    dst = (DstRec *)0x0c4cfa80;
    dst->w8 = src->w0;
    dst->h2 = src->h4;
    dst->w12 = src->w16;
    dst->w4 = 50;
    res_textures_register(dst, (char *)0x0c14de58);
}

void res_csel_csel_load(void)
{
    SrcRec *src;
    DstRec *dst;
    res_load_file_unpack(167);
    src = (SrcRec *)0x0c31fe10;
    dst = (DstRec *)0x0c664a48;
    dst->w8 = src->w0;
    dst->h2 = src->h4;
    dst->w12 = src->w16;
    dst->w16 = src->w8;
    dst->w20 = src->w12;
    dst->w4 = 1500;
    res_textures_register(dst, (char *)0x0c14de84);
}

void res_vms_check_load(void)
{
    SrcRec *src;
    DstRec *dst;
    res_load_file_unpack(179);
    src = (SrcRec *)0x0c31ff00;
    dst = (DstRec *)0x0c664b20;
    dst->w8 = src->w0;
    dst->h2 = src->h4;
    dst->w12 = src->w16;
    dst->w16 = src->w8;
    dst->w20 = src->w12;
    dst->w4 = 1300;
    res_textures_register(dst, (char *)0x0c14dfe0);
}
