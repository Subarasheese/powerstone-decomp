/* resource loader: file load/unpack, texture and model register/release, per-scene sets, per-player model load (0c05fc50-0c061094) */

typedef struct { char b0; char b1; short h2; int w4; int w8; int w12; int w16; int w20; } Dst;
typedef struct { int w0; short h4; short pad6; int w8; int w12; int w16; } Src;
extern void res_load_file_unpack(int);
extern void res_textures_register(Dst *, char *);
extern void res_model_register(void *, char *);

void res_csel_ksel_load(void)
{
    Src *src;
    Dst *dst;
    res_load_file_unpack(169);
    src = (Src *)0x0c31fe38;
    dst = (Dst *)0x0c664a78;
    dst->w8 = src->w0;
    dst->h2 = src->h4;
    dst->w12 = src->w16;
    dst->w16 = src->w8;
    dst->w20 = src->w12;
    dst->w4 = 1400;
    res_textures_register(dst, (char *)0x0c14de78);
}

void res_csel_ssel_load(void)
{
    Src *src;
    Dst *dst;
    res_load_file_unpack(168);
    src = (Src *)0x0c31fe24;
    dst = (Dst *)0x0c664a60;
    dst->w8 = src->w0;
    dst->h2 = src->h4;
    dst->w12 = src->w16;
    dst->w16 = src->w8;
    dst->w20 = src->w12;
    dst->w4 = 1600;
    res_textures_register(dst, (char *)0x0c14de90);
}

void res_demo_comn_load(void)
{
    Src *src;
    Dst *dst;
    res_load_file_unpack(165);
    src = (Src *)0x0c31fde8;
    dst = (Dst *)0x0c6649e8;
    dst->w8 = src->w0;
    dst->h2 = src->h4;
    dst->w12 = src->w16;
    dst->w16 = src->w8;
    dst->w20 = src->w12;
    dst->w4 = 1300;
    res_textures_register(dst, (char *)0x0c14de9c);
    res_load_file_unpack(171);
    src = (Src *)0x0c31fe60;
    dst = (Dst *)0x0c6649a0;
    dst->w8 = src->w0;
    dst->h2 = src->h4;
    dst->w12 = src->w16;
    dst->w16 = src->w8;
    dst->w20 = src->w12;
    dst->w4 = 1100;
    res_textures_register(dst, (char *)0x0c14dea8);
}

void res_kyoutsuu_load(void)
{
    Src *src;
    Dst *dst;
    res_load_file_unpack(151);
    src = (Src *)0x0c1d7714;
    dst = (Dst *)0x0c4cfa68;
    dst->w8 = src->w0;
    dst->h2 = src->h4;
    dst->w12 = src->w16;
    dst->w4 = 900;
    res_textures_register(dst, (char *)0x0c14e024);
    res_load_file_unpack(153);
    res_model_register((void *)0x0c33f66c, (char *)0x0c14e030);
}
