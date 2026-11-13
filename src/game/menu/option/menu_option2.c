/* OPTION group screen 2 (0c01a42c-0c01ae48) */

/* named globals (symbols.txt) */
int opt_page2_main(int a4, int a5, int a6, int a7);
extern char g_res_art_model[];
struct oF2_short { char p[0xF2]; short v; };
int memset(int, int, int);
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA_short { char p[0xA]; short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
extern int opt_page2_run_objects_in_mask();
int game_reset_objects(void);
int FUN_0c05f2d4(int, int);
int res_switch_scene(int);
int bgm_stop_all(void);
int snd_play_side_se(int, int);
int cam_request_mode(int, int, int);
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_destroy(int);
int FUN_0c06231c(int, int, int);
float math_sin_angle16(int, int, int, int);
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(void);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o1AC_int { char p[0x1AC]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o9C_int { char p[0x9C]; int v; };
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_uv(int, int);
int mdl_vtx_set_uv(int, int);
struct o2E4_int { char p[0x2E4]; int v; };
struct o0_short { short v; };
struct o14_short { char p[0x14]; short v; };

int FUN_0c01a800(int);
int FUN_0c01a928(int a4);
int opt_page2_spawn_bg_scroll(int a4);
int opt_page2_obj_in_mask(int a4);
int opt_page2_pad_pressed(int a4);

int opt_page2_init(void)
{
    return memset(0xC362338, 0x0, 0xC);
}


int FUN_0c01a74c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    if ((*(signed char *)((a4 + 0xF))) == (*(signed char *)0xC36233E)) {
        u0 = 1.0999999f;
        u0 = u0 + 0.099999994f * (math_sin_angle16((*(short *)0xC362342), a5, a6, a7));
        (((struct o58_float *)(a4))->v) = u0;
        (((struct o54_float *)(a4))->v) = u0;
        (((struct o50_float *)(a4))->v) = u0;
        u0 = 150.0f;
    } else {
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o50_float *)(a4))->v) = 1.0f;
        u0 = 50.0f;
    }
    (((struct o28_float *)(a4))->v) = u0;
    FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((int)g_res_art_model), (*(signed char *)((a4 + 0xF))));
    t0 = opt_page2_obj_in_mask(a4);
    if ((signed char)t0 != 0) {
        return obj_destroy(a4);
    }
    return (signed char)t0;
}

int FUN_0c01a800(int a4)
{
    int stk[1];
    register int t1;
    register int t2;
    register int t10;
    register int t0;

    *(unsigned short *)(((int)stk + 0)) = a4;
    t1 = 0x0;
    for (;;) {
        t2 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x1, 0x0);
        t10 = t2;
        if (t2 != 0) {
            *(unsigned int *)((t2 + 0x10)) = 0xC01A74C;
            *(unsigned char *)((t2 + 0x0)) = 0x1;
            *(unsigned char *)((t2 + 0x3)) = 0x2;
            *(unsigned char *)((t2 + 0x1)) = 0x1;
            *(unsigned short *)((t2 + 0x6)) = 0x1F;
            *(unsigned char *)((t2 + 0x5)) = 0x0;
            (((struct o58_float *)(t2))->v) = 1.0f;
            (((struct o54_float *)(t2))->v) = 1.0f;
            (((struct o50_float *)(t2))->v) = 1.0f;
            t0 = t1;
            t0 = (t0 << 2);
            t0 = (t0 << 2);
            *(unsigned int *)((t2 + 0x34)) = 0x0;
            *(unsigned int *)((t2 + 0x30)) = 0x0;
            *(unsigned int *)((t2 + 0x2C)) = 0x0;
            (((struct oF2_ushort *)(t2))->v) = (*(short *)(((int)stk + 0)));
            t0 = (t0 + 0xC11C034);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x20)) = *(struct mv3 *)(t0); }
            *(unsigned char *)((((((struct o2E0_int *)(t2))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct o2E0_int *)(t2))->v)) + 0x1)) = 0x0;
            *(unsigned short *)((((((struct o2E0_int *)(t2))->v)) + 0x2)) = 0xF;
            FUN_0c06233a(((((struct o2E0_int *)(t2))->v)), 0xC664AC0, (*(signed char *)((t0 + 0xC))));
            *(unsigned char *)((t2 + 0xF)) = t1;
            t10 = t1;
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0xC) {
            break;
        }
    }
    return t10;
}

int FUN_0c01a8c8(int a4)
{
    register int t4;

    FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((int)g_res_art_model), (*(int *)((((*(signed char *)0xC36233E) << 2) + 0xC11C0F4))));
    t4 = opt_page2_obj_in_mask(a4);
    if ((signed char)t4 != 0) {
        return obj_destroy(a4);
    }
    return (signed char)t4;
}

int FUN_0c01a928(int a4)
{
    int stk[1];
    register int t0;
    register int t5;

    *(unsigned short *)(((int)stk + 0)) = a4;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x1, 0x0);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC01A8C8;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct oF2_ushort *)(t0))->v) = (*(short *)(((int)stk + 0)));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t5 = 0xF;
    }
    return t5;
}

int opt_page2_tick_bg_scroll(int a4)
{
    int stk[2];
    register float u0;
    register int t9;

    u0 = (((struct o38_float *)(a4))->v);
    (((struct o38_float *)(a4))->v) = (u0 + 0.000999999931f);
    if (!(1.0f > (u0 + 0.000999999931f))) {
        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - 1.0f);
    }
    mdl_vtx_iter_begin(((((struct o1AC_int *)((*(int *)0xC664AC8)))->v)), ((((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v)));
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
    return (opt_page2_obj_in_mask(a4));
}

int opt_page2_spawn_bg_scroll(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned short *)(((int)stk + 0)) = a4;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x2, 0x0);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC01A9A4;
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
        (((struct oF2_ushort *)(t0))->v) = (*(short *)(((int)stk + 0)));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((int)g_res_art_model), 0xD);
        *(unsigned char *)((((((struct o2E4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E4_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E4_int *)(t0))->v)) + 0x2)) = 0xF;
        return FUN_0c06233a(((((struct o2E4_int *)(t0))->v)), ((int)g_res_art_model), 0xC);
    }
    return t0;
}

int opt_page2_tick_destroy_if_masked(int a4)
{
    register int t0;

    t0 = opt_page2_obj_in_mask(a4);
    if ((signed char)t0 != 0) {
        return obj_destroy(a4);
    }
    return (signed char)t0;
}

int FUN_0c01ab4c(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned short *)(((int)stk + 0)) = a4;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x2, 0x0);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC01AB12;
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
        (((struct oF2_ushort *)(t0))->v) = (*(short *)(((int)stk + 0)));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((int)g_res_art_model), ((*(signed char *)0xC36233E) + 0xF));
        *(unsigned char *)((((((struct o2E4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E4_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E4_int *)(t0))->v)) + 0x2)) = 0xF;
        return FUN_0c06233a(((((struct o2E4_int *)(t0))->v)), ((int)g_res_art_model), 0xE);
    }
    return t0;
}

int FUN_0c01ac0e(int a4)
{
    register int t6;

    (((struct o20_float *)(a4))->v) = (*(float *)((0xC11BF1C + (((*(signed char *)0xC36233F) << 1) << 2))));
    (((struct o24_float *)(a4))->v) = ((((struct o4_float *)((0xC11BF1C + (((*(signed char *)0xC36233F) << 1) << 2))))->v));
    t6 = opt_page2_obj_in_mask(a4);
    if ((signed char)t6 != 0) {
        return obj_destroy(a4);
    }
    return (signed char)t6;
}

int FUN_0c01ac74(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned short *)(((int)stk + 0)) = a4;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x1, 0x0);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC01AC0E;
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
        (((struct oF2_ushort *)(t0))->v) = (*(short *)(((int)stk + 0)));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        return FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((int)g_res_art_model), 0x6A);
    }
    return t0;
}

int FUN_0c01acfc(int a4)
{
    register int t6;

    FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((int)g_res_art_model), (*(signed char *)((((*(signed char *)0xC36233F) + (*(int *)((((*(signed char *)0xC36233E) << 2) + 0xC180018)))) + 0x0))));
    t6 = opt_page2_obj_in_mask(a4);
    if ((signed char)t6 != 0) {
        return obj_destroy(a4);
    }
    return (signed char)t6;
}

int FUN_0c01ad40(int a4)
{
    int stk[1];
    register int t0;
    register int t5;

    *(unsigned short *)(((int)stk + 0)) = a4;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x1, 0x0);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC01ACFC;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct oF2_ushort *)(t0))->v) = (*(short *)(((int)stk + 0)));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t5 = 0xF;
    }
    return t5;
}

int opt_page2_obj_in_mask(int a4)
{
    if ((((((struct oF2_short *)(a4))->v)) & (*(short *)0xC36233C)) != 0) {
        return 0x1;
    }
    return 0x0;
}

int opt_page2_pad_pressed(int a4)
{
    if (((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & a4) == 0) {
        if (((unsigned short)((((struct o14_short *)0xC361BFC)->v)) & a4) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}
