/* OPTION group screen 3 (0c01ae48-0c01b66c) */

/* named globals (symbols.txt) */
int opt_page3_main(int a4, int a5, int a6, int a7);
extern char g_res_art_model[];
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct oF2_short { char p[0xF2]; short v; };
int memset(int, int, int);
struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
int ending_main(void);
int FUN_0c01b274(int);
extern int opt_page3_run_objects_in_mask();
int FUN_0c01b4f2(int, int);
extern int FUN_0c01b570();
int opt_page_leave_reset(void);
int game_reset_objects(void);
int FUN_0c0593e0(int);
extern int obj_tick_class();
int FUN_0c05f2d4(int, int);
extern int res_switch_scene();
int FUN_0c0a2f66(int);
int bgm_stop_streams(void);
int snd_play_side_se(int, int);
int cam_request_mode(int, int, int);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct oC_float { char p[0xC]; float v; };
int obj_destroy(int);
float math_sin_angle16(int, int, int, int);
struct o28_float { char p[0x28]; float v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(int);
struct o2E4_int { char p[0x2E4]; int v; };
int FUN_0c06231c(int, int, int);
struct o38_float { char p[0x38]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o9C_int { char p[0x9C]; int v; };
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_uv(int, int);
int mdl_vtx_set_uv(int, int);

void FUN_0c01b144(int, int);
int opt_page3_spawn_bg_scroll(int a4);
int opt_page3_obj_in_mask(int a4);
int FUN_0c01b4d6(int a4);

int opt_page3_init(void)
{
    memset(0xC362348, 0x0, 0xC);
    (((struct o1_uchar *)0xC362351)->v) = 0x1;
    (((struct o0_uchar *)0xC362351)->v) = 0x1;
    return 0x1;
}


int FUN_0c01b0a4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = (((struct o2E0_int *)(a4))->v);
    if ((*(signed char *)((a4 + 0x4))) == (unsigned char)(*(signed char *)0xC362350)) {
        u0 = 1.0999999f;
        u0 = u0 + 0.099999994f * (math_sin_angle16((*(short *)0xC36234E), a5, a6, a7));
        (((struct o24_float *)(t0))->v) = u0;
        (((struct o20_float *)(t0))->v) = u0;
        (((struct o1C_float *)(t0))->v) = u0;
        u0 = 150.0f;
    } else {
        (((struct o24_float *)(t0))->v) = 1.0f;
        (((struct o20_float *)(t0))->v) = 1.0f;
        (((struct o1C_float *)(t0))->v) = 1.0f;
        u0 = 50.0f;
    }
    (((struct oC_float *)(t0))->v) = u0;
    t0 = opt_page3_obj_in_mask(a4);
    if ((signed char)t0 != 0) {
        return obj_destroy(a4);
    }
    return (signed char)t0;
}

void FUN_0c01b144(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t5;
    register int t8;
    register int t12;

    *(unsigned short *)(((int)stk + 0)) = a4;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x1, 0x0);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC01B0A4;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x4)) = a5;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct oF2_ushort *)(t0))->v) = (*(short *)(((int)stk + 0)));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
        t5 = FUN_0c01b4d6(a5);
        t8 = 0xB;
        if ((short)t5 != 0) {
            t8 = (*(signed char *)(((((signed char)a5 << 2) << 2) + 0xC11C17C)));
        }
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664AC0, t8);
        t12 = (((struct o2E0_int *)(t0))->v);
        (((struct o24_float *)(t12))->v) = 1.0f;
        (((struct o20_float *)(t12))->v) = 1.0f;
        (((struct o1C_float *)(t12))->v) = 1.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E0_int *)(t0))->v)) + 0x4)) = *(struct mv3 *)((0xC11C170 + (((signed char)a5 << 2) << 2))); }
    }
}

int FUN_0c01b206(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c01b4d6((*(signed char *)0xC362350));
    t1 = 0x19;
    if ((short)t0 != 0) {
        t1 = ((*(signed char *)0xC362350) + 0xE);
    }
    FUN_0c06231c(((((struct o2E4_int *)(a4))->v)), ((int)g_res_art_model), t1);
    t0 = opt_page3_obj_in_mask(a4);
    if ((signed char)t0 != 0) {
        return obj_destroy(a4);
    }
    return (signed char)t0;
}

int opt_page3_tick_bg_scroll(int a4)
{
    int stk[2];
    register float u0;
    register int t9;

    u0 = (((struct o38_float *)(a4))->v);
    (((struct o38_float *)(a4))->v) = (u0 + 0.000999999931f);
    if (!(1.0f > (u0 + 0.000999999931f))) {
        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - 1.0f);
    }
    mdl_vtx_iter_begin(((((struct o68_int *)((*(int *)0xC664AC8)))->v)), ((((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v)));
    for (;;) {
        t9 = mdl_vtx_iter_next();
        if (t9 != 0) {
            break;
        }
        mdl_vtx_get_uv(((int)stk + 0), (((int)stk + 0) + 0x4));
        *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + ((((struct o38_float *)(a4))->v)));
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + ((((struct o38_float *)(a4))->v)));
        mdl_vtx_set_uv(((int)stk + 0), (((int)stk + 0) + 0x4));
    }
    return (opt_page3_obj_in_mask(a4));
}

int opt_page3_spawn_bg_scroll(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned short *)(((int)stk + 0)) = a4;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x1, 0x0);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC01B360;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct o38_float *)(t0))->v) = 0.0f;
        (((struct oF2_ushort *)(t0))->v) = (*(short *)(((int)stk + 0)));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        return FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((int)g_res_art_model), 0xD);
    }
    return t0;
}

int opt_page3_obj_in_mask(int a4)
{
    if ((((((struct oF2_short *)(a4))->v)) & (*(short *)0xC36234C)) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c01b4d6(int a4)
{
    int t0;

    t0 = *(short *)0xC7F475A;
    if ((signed char)a4 == 10) {
        return t0;
    }
    return (((int)0x1 << (int)(signed char)a4) & t0);
}
