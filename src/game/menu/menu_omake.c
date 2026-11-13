/* OMAKE menu screens and unlock query (0c01b9f4-0c01d254) */

/* named globals (symbols.txt) */
int omake_menu_main(int a4, int a5, int a6, int a7);
extern char g_menu_option_work[];
extern char g_res_omake[];
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
int ui_draw_object_sprite(int);
int obj_destroy(int, int, int, int);
struct o308_float { char p[0x308]; float v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int mdl_vtx_iter_next(void);
int mdl_vtx_get_pos(float *);
int mdl_vtx_set_pos(float *);
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o38_float { char p[0x38]; float v; };
int bgm_set_volume(int, int, int, int);
int obj_create(int, int, int);
struct field_40_float { char p[0x40]; float field_40; };
int FUN_0c06233a(int, int, int);
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o14_short { char p[0x14]; short v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oA_short { char p[0xA]; short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
int FUN_0c01c99e(int, int);
int vmu_menu_reset(void);
int FUN_0c01ea20(int, int, int, int);
int game_reset_objects(void);
int FUN_0c05f2d4(int, int);
int res_switch_scene(int);
int bgm_play_omake(void);
int snd_play_side_se(int, int);
int FUN_0c0d71f4(int);
int cam_force_mode(int, int, int);
struct o0_int { int v; };
struct o14_int { char p[0x14]; int v; };
struct o16_short { char p[0x16]; short v; };
struct o18_short { char p[0x18]; short v; };
struct o2_short { char p[0x2]; short v; };
struct o4_short { char p[0x4]; short v; };

int FUN_0c01c75e(int a4);
int FUN_0c01c7c4(int a4);
int FUN_0c01c80a(int a4);
int FUN_0c01c850(int index, int variant);
int FUN_0c01cab6(int a4);
int FUN_0c01cb1e(int a4);
int FUN_0c01cb86(int a4);
int omake_is_item_unlocked(int idx);
int FUN_0c01d1ce(int a4, int a5);
int FUN_0c01d226(void);

int FUN_0c01b9f4(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_1 = a4;
    v0_0 = R13;
    v0_2 = R12;
    v0_4 = R11;
    v0_5 = R10;
    v0_3 = *(signed char *)((v0_1 + 0x8));
    v0_2 = (v0_3);
    R13 = ((0x308 + v0_1));
    v0_0 = (v0_1);
    v0_1 = (0x0);
    if ((v0_3 == 0)) goto L_C01BA16;
    if ((v0_2 == 1)) goto L_C01BA70;
    return obj_destroy(v0_0, R5, a6, a7);
    L_C01BA70:;
    v0_3 = *(signed char *)0xC7F473E;
    v0_4 = *(signed char *)((v0_0 + 0x4));
    v0_2 = (v0_4);
    R11 = (v0_3);
    R12 = (((int)g_menu_option_work));
    R5 = (0xC1801B8);
    if ((v0_4 == 0)) goto L_C01BAAE;
    if ((v0_2 == 1)) goto L_C01BAAE;
    if ((v0_2 == 2)) goto L_C01BAAE;
    if ((v0_2 == 3)) goto L_C01BAAE;
    if ((v0_2 == 4)) goto L_C01BAAE;
    if ((v0_2 == 5)) goto L_C01BAE0;
    if ((v0_2 == 6)) goto L_C01BB08;
    if ((v0_2 == 7)) goto L_C01BAE0;
    if ((v0_2 == 8)) goto L_C01BB08;
    if ((v0_2 == 9)) goto L_C01BB3C;
    if ((v0_2 != 10)) goto L_C01BAAA;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_3);
    v0_1 = (0xC1801F8);
    if ((v0_3 == 0)) goto L_C01BBCC;
    if ((v0_2 == 1)) goto L_C01BBE0;
    L_C01BBFA:;
    *(float *)((R13 + 0x0)) = (*(float *)0xC36236C);
    v0_1 = *(signed char *)((v0_0 + 0x1));
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C01BC2A;
    return ui_draw_object_sprite(v0_0);
    L_C01BC2A:;
    return v0_2;
    L_C01BBE0:;
    v0_2 = *(signed char *)((R12 + 0x1A));
    v0_3 = (*(signed char *)((v0_0 + 0xF))) == (signed char)v0_2;
    R5 = (v0_2);
    if (v0_3) goto L_C01BBFA;
    *(unsigned int *)((R13 + 0x4)) = (*(int *)((v0_1 + ((signed char)R5 << 2))));
    *(unsigned char *)((v0_0 + 0xF)) = (*(signed char *)((R12 + 0x1A)));
    goto L_C01BBFA;
    L_C01BBCC:;
    *(unsigned int *)((R13 + 0x4)) = (*(int *)((v0_1 + ((signed char)R11 << 2))));
    *(unsigned char *)((v0_0 + 0xF)) = (*(signed char *)((R12 + 0x1A)));
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01BBE0;
    L_C01BAAA:;
    goto L_C01BBFA;
    L_C01BB3C:;
    v0_1 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_1);
    R10 = (0xC1801DC);
    if ((v0_1 == 0)) goto L_C01BB4C;
    if ((v0_2 == 1)) goto L_C01BB78;
    goto L_C01BBFA;
    L_C01BB78:;
    v0_1 = (*(signed char *)((v0_0 + 0xF))) == (*(signed char *)(((0x1A + R12) + 0x0)));
    if (v0_1) goto L_C01BBFA;
    *(unsigned char *)((v0_0 + 0xF)) = (*(signed char *)((R12 + 0x1A)));
    v0_1 = (signed char)(omake_is_item_unlocked((*(signed char *)((R12 + 0x1A))))) == 0;
    if (v0_1) goto L_C01BBA8;
    *(unsigned int *)((R13 + 0x4)) = (*(int *)((R10 + ((*(signed char *)((0xC1801E8 + (*(signed char *)((R12 + 0x1A)))))) << 2))));
    goto L_C01BBFA;
    L_C01BBA8:;
    *(unsigned int *)((R13 + 0x4)) = (*(int *)((R10 + 0x8)));
    goto L_C01BBFA;
    L_C01BB4C:;
    v0_1 = (signed char)(omake_is_item_unlocked(R11)) == 0;
    if (v0_1) goto L_C01BB68;
    *(unsigned int *)((R13 + 0x4)) = (*(int *)((R10 + ((*(signed char *)((0xC1801E8 + (*(signed char *)((R12 + 0x1A)))))) << 2))));
    L_C01BB6C:;
    *(unsigned char *)((v0_0 + 0xF)) = (*(signed char *)((R12 + 0x1A)));
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01BB78;
    L_C01BB68:;
    *(unsigned int *)((R13 + 0x4)) = (*(int *)((R10 + 0x8)));
    goto L_C01BB6C;
    L_C01BB08:;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C01BB16;
    if ((v0_2 == 1)) goto L_C01BB28;
    goto L_C01BBFA;
    L_C01BB28:;
    v0_2 = (int)(*(signed char *)((R12 + 0x1A))) < (int)0xE;
    if (v0_2) goto L_C01BB36;
    L_C01BB32:;
    v0_2 = (v0_1);
    L_C01BB38:;
    *(unsigned char *)((v0_0 + 0x1)) = v0_2;
    goto L_C01BBFA;
    L_C01BB36:;
    v0_2 = (0x1);
    goto L_C01BB38;
    L_C01BB16:;
    *(unsigned int *)((R13 + 0x4)) = (*(int *)((R5 + ((*(signed char *)((v0_0 + 0x4))) << 2))));
    v0_2 = (*(signed char *)((v0_0 + 0x4))) != 6;
    if (v0_2) goto L_C01BB28;
    *(unsigned int *)((v0_0 + 0x30)) = 0x4000;
    goto L_C01BB28;
    L_C01BAE0:;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C01BAEE;
    if ((v0_2 == 1)) goto L_C01BAFC;
    goto L_C01BBFA;
    L_C01BAFC:;
    v0_2 = (*(signed char *)((R12 + 0x1A))) == 0;
    if (v0_2) goto L_C01BB32;
    goto L_C01BB36;
    L_C01BAEE:;
    *(unsigned int *)((R13 + 0x4)) = (*(int *)((R5 + ((*(signed char *)((v0_0 + 0x4))) << 2))));
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01BAFC;
    L_C01BAAE:;
    v0_1 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C01BAC0;
    if ((v0_2 != 1)) goto L_C01BABC;
    goto L_C01BBFA;
    L_C01BABC:;
    goto L_C01BBFA;
    L_C01BAC0:;
    *(unsigned int *)((R13 + 0x4)) = (*(int *)((R5 + ((*(signed char *)((v0_0 + 0x4))) << 2))));
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01BBFA;
    L_C01BA16:;
    v0_2 = *(signed char *)((v0_0 + 0x4));
    (((struct o20_float *)(v0_0))->v) = (*(float *)((0xC180280 + (unsigned char)(((v0_2 << 1) + v0_2) << 2))));
    v0_2 = *(signed char *)((v0_0 + 0x4));
    (((struct o24_float *)(v0_0))->v) = ((((struct o4_float *)(((unsigned char)(((v0_2 << 1) + v0_2) << 2) + 0xC180280)))->v));
    v0_2 = *(signed char *)((v0_0 + 0x4));
    (((struct o28_float *)(v0_0))->v) = ((((struct o8_float *)((0xC180280 + (unsigned char)(((v0_2 << 1) + v0_2) << 2))))->v));
    *(unsigned int *)((v0_0 + 0x34)) = v0_1;
    *(unsigned int *)((v0_0 + 0x30)) = v0_1;
    *(unsigned int *)((v0_0 + 0x2C)) = v0_1;
    (((struct o58_float *)(v0_0))->v) = 1.0f;
    (((struct o54_float *)(v0_0))->v) = 1.0f;
    (((struct o50_float *)(v0_0))->v) = 1.0f;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C01BA70;
}

int FUN_0c01bc38(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, 0xC362360, (0x308 + a4), a7);
        }
    } else {
        t0 = *(signed char *)0xC362371;
        *(unsigned int *)(((0x308 + a4) + 0x4)) = (*(int *)(((0xC180238 + (signed char)((((t0 << 1) + t0) << 2) << 1)) + ((*(signed char *)((a4 + 0x4))) << 2))));
        t0 = *(signed char *)0xC362371;
        t1 = *(signed char *)((a4 + 0x4));
        (((struct o20_float *)(a4))->v) = (*(float *)((((unsigned char)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC180304) + (signed char)(((t1 << 1) + t1) << 2))));
        t0 = *(signed char *)0xC362371;
        t1 = *(signed char *)((a4 + 0x4));
        (((struct o24_float *)(a4))->v) = ((((struct o4_float *)((((unsigned char)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC180304) + (signed char)(((t1 << 1) + t1) << 2))))->v));
        t0 = *(signed char *)0xC362371;
        t1 = *(signed char *)((a4 + 0x4));
        (((struct o28_float *)(a4))->v) = ((((struct o8_float *)(((0xC180304 + (unsigned char)(((((t0 << 2) << 1) + t0) << 2) << 1)) + (signed char)(((t1 << 1) + t1) << 2))))->v));
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0x30)) = 0x0;
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o50_float *)(a4))->v) = 1.0f;
        (((struct o308_float *)(a4))->v) = 1.0f;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    if ((unsigned char)(*(signed char *)0xC362361) != 5) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x1));
    if (t0 != 0) {
        return ui_draw_object_sprite(a4);
    }
    return t0;
}

int FUN_0c01bd3e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, 0xC362360, (0x308 + a4), a7);
        }
    } else {
        *(unsigned int *)(((0x308 + a4) + 0x4)) = 0xC180158;
        t0 = *(signed char *)0xC362371;
        t1 = *(signed char *)((a4 + 0x4));
        (((struct o20_float *)(a4))->v) = (*(float *)((((unsigned char)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC1803DC) + (signed char)(((t1 << 1) + t1) << 2))));
        t0 = *(signed char *)0xC362371;
        t1 = *(signed char *)((a4 + 0x4));
        (((struct o24_float *)(a4))->v) = ((((struct o4_float *)((((unsigned char)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC1803DC) + (signed char)(((t1 << 1) + t1) << 2))))->v));
        t0 = *(signed char *)0xC362371;
        t1 = *(signed char *)((a4 + 0x4));
        (((struct o28_float *)(a4))->v) = ((((struct o8_float *)(((0xC1803DC + (unsigned char)(((((t0 << 2) << 1) + t0) << 2) << 1)) + (signed char)(((t1 << 1) + t1) << 2))))->v));
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0x30)) = 0x0;
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        t0 = *(signed char *)0xC362371;
        (((struct o50_float *)(a4))->v) = (*(float *)(((0xC1804B4 + (signed char)((((t0 << 1) + t0) << 2) << 1)) + ((*(signed char *)((a4 + 0x4))) << 2))));
        (((struct o308_float *)(a4))->v) = 1.0f;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    if ((unsigned char)(*(signed char *)0xC362361) != 5) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x1));
    if (t0 != 0) {
        return ui_draw_object_sprite(a4);
    }
    return t0;
}

int FUN_0c01be44(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R11;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x8));
    v0_2 = (v0_3);
    v0_1 = (0xC362360);
    if ((v0_3 == 0)) goto L_C01BE70;
    if ((v0_2 == 1)) goto L_C01BE76;
    return obj_destroy(v0_0, R5, R6, a7);
    L_C01BE76:;
    v0_3 = *(signed char *)((v0_0 + 0x4));
    v0_2 = (v0_3);
    R5 = (0x0);
    R6 = (0xFFFFF556);
    w0_3 = (-76.0759964f);
    w0_4 = (-16.421999f);
    w0_0 = (0.0f);
    w0_2 = (1.0f);
    w0_1 = (-295.0f);
    w0_5 = (-600.0f);
    w0_6 = (76.0759964f);
    if ((v0_3 == 0)) goto L_C01BEC4;
    if ((v0_2 != 1)) goto L_C01BEA0;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C01BFB6;
    if ((v0_2 == 1)) goto L_C01BFFA;
    if ((v0_2 == 2)) goto L_C01C09C;
    L_C01C1BE:;
    return v0_2;
    L_C01C09C:;
    v0_3 = *(signed char *)((v0_0 + 0x4));
    v0_2 = (v0_3);
    if (!(((unsigned char)(*(signed char *)((v0_1 + 0x1))) == v0_3))) goto L_C01C1B0;
    goto L_C01C1BE;
    L_C01C1B0:;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_2 = ((v0_1 + 0x1));
    goto L_C01C1BE;
    L_C01BFFA:;
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) + w0_0);
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + -3.33333325f);
    w0_2 = (((struct o28_float *)(v0_0))->v);
    (((struct o28_float *)(v0_0))->v) = (w0_2 + 20.0f);
    *(unsigned int *)((v0_0 + 0x2C)) = ((*(int *)((v0_0 + 0x2C))) + 0x5B);
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_2 = (0xEC);
    w0_2 = ((w0_2 + 20.0f));
    FPUL_ = (0x41A00000);
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C01C036;
    goto L_C01C1BE;
    L_C01C036:;
    (((struct o20_float *)(v0_0))->v) = w0_1;
    (((struct o24_float *)(v0_0))->v) = -100.0f;
    (((struct o28_float *)(v0_0))->v) = w0_0;
    *(unsigned int *)((v0_0 + 0x2C)) = R5;
    *(unsigned int *)((v0_0 + 0x30)) = R5;
    v0_1 = *(signed char *)((v0_0 + 0x9));
    *(unsigned char *)((v0_0 + 0x9)) = (v0_1 + 0x1);
    v0_2 = ((v0_1 + 0x1));
    w0_2 = (-100.0f);
    goto L_C01C1BE;
    L_C01BFB6:;
    (((struct o4_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_4;
    (((struct o4_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_6;
    (((struct oC_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_4;
    (((struct oC_float *)(((((struct o2F4_int *)(v0_0))->v))))->v) = w0_2;
    (((struct o20_float *)(v0_0))->v) = w0_1;
    (((struct o24_float *)(v0_0))->v) = w0_0;
    (((struct o28_float *)(v0_0))->v) = w0_5;
    *(unsigned int *)((v0_0 + 0x2C)) = R6;
    *(unsigned int *)((v0_0 + 0x30)) = R5;
    (((struct oEC_ushort *)(v0_0))->v) = 0x1D;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01BFFA;
    L_C01BEA0:;
    if (!((v0_2 != 2))) goto L_C01C052;
    if ((v0_2 != 3)) goto L_C01BEB0;
    goto L_C01C052;
    L_C01C052:;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C01C060;
    if ((v0_2 == 1)) goto L_C01C09C;
    goto L_C01C1BE;
    L_C01C060:;
    (((struct o4_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_4;
    (((struct o4_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_6;
    (((struct oC_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_4;
    *(unsigned char *)((((((struct o2F4_int *)(v0_0))->v)) + 0x0)) = R5;
    (((struct o20_float *)(v0_0))->v) = w0_1;
    (((struct o24_float *)(v0_0))->v) = w0_0;
    (((struct o28_float *)(v0_0))->v) = w0_5;
    *(unsigned int *)((v0_0 + 0x2C)) = R6;
    *(unsigned int *)((v0_0 + 0x30)) = R5;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01C09C;
    L_C01BEB0:;
    if ((v0_2 != 4)) goto L_C01BEB8;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C01C0D4;
    if ((v0_2 == 1)) goto L_C01C118;
    if ((v0_2 == 2)) goto L_C01C1A6;
    goto L_C01C1BE;
    L_C01C1A6:;
    v0_3 = *(signed char *)((v0_0 + 0x4));
    v0_2 = (v0_3);
    if (((unsigned char)(*(signed char *)((v0_1 + 0x1))) == v0_3)) goto L_C01C1BE;
    goto L_C01C1B0;
    L_C01C118:;
    v0_2 = (((struct o2F4_int *)(v0_0))->v);
    (((struct o40_float *)(v0_2))->v) = (((((struct o40_float *)(v0_2))->v)) + -0.199999988f);
    w0_1 = (((struct o40_float *)(((((struct o2F4_int *)(v0_0))->v))))->v);
    w0_2 = (w0_1);
    FPUL_ = (0xBE4CCCCC);
    if ((!(0.0f > w0_1))) goto L_C01C140;
    (((struct o40_float *)(((((struct o2F4_int *)(v0_0))->v))))->v) = w0_0;
    L_C01C140:;
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) >= 0)) goto L_C01C1A6;
    (((struct o40_float *)(((((struct o2F4_int *)(v0_0))->v))))->v) = w0_0;
    L_C01C1A0:;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01C1A6;
    L_C01C0D4:;
    (((struct o4_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_4;
    (((struct o4_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_6;
    (((struct oC_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_4;
    (((struct oC_float *)(((((struct o2F4_int *)(v0_0))->v))))->v) = w0_2;
    (((struct o20_float *)(v0_0))->v) = w0_1;
    (((struct o24_float *)(v0_0))->v) = w0_0;
    (((struct o28_float *)(v0_0))->v) = w0_5;
    *(unsigned int *)((v0_0 + 0x2C)) = R6;
    *(unsigned int *)((v0_0 + 0x30)) = R5;
    (((struct oEC_ushort *)(v0_0))->v) = 0x5;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01C118;
    L_C01BEB8:;
    if ((v0_2 != 5)) goto L_C01BEC0;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C01C168;
    if ((v0_2 == 1)) goto L_C01C1A6;
    goto L_C01C1BE;
    L_C01C168:;
    (((struct o4_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_4;
    (((struct o4_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_6;
    (((struct oC_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_4;
    (((struct oC_float *)(((((struct o2F4_int *)(v0_0))->v))))->v) = w0_2;
    (((struct o20_float *)(v0_0))->v) = w0_1;
    (((struct o24_float *)(v0_0))->v) = w0_0;
    (((struct o28_float *)(v0_0))->v) = w0_5;
    *(unsigned int *)((v0_0 + 0x2C)) = R6;
    *(unsigned int *)((v0_0 + 0x30)) = R5;
    goto L_C01C1A0;
    L_C01BEC0:;
    goto L_C01C1BE;
    L_C01BEC4:;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C01BED6;
    if ((v0_2 == 1)) goto L_C01BF2E;
    if ((v0_2 == 2)) goto L_C01BF70;
    goto L_C01C1BE;
    L_C01BF70:;
    v0_3 = *(signed char *)((v0_0 + 0x4));
    v0_2 = (v0_3);
    if (((unsigned char)(*(signed char *)((v0_1 + 0x1))) == v0_3)) goto L_C01BF7E;
    goto L_C01C1B0;
    L_C01BF7E:;
    goto L_C01C1BE;
    L_C01BF2E:;
    v0_2 = (((struct o2F4_int *)(v0_0))->v);
    (((struct o40_float *)(v0_2))->v) = (((((struct o40_float *)(v0_2))->v)) + 0.099999994f);
    FPUL_ = (0x3DCCCCCC);
    if ((!(((((struct o40_float *)(((((struct o2F4_int *)(v0_0))->v))))->v)) > w0_2))) goto L_C01BF54;
    (((struct o40_float *)(((((struct o2F4_int *)(v0_0))->v))))->v) = w0_2;
    L_C01BF54:;
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) >= 0)) goto L_C01BF70;
    (((struct o40_float *)(((((struct o2F4_int *)(v0_0))->v))))->v) = w0_2;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01BF70;
    L_C01BED6:;
    (((struct o4_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_4;
    (((struct o4_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_6;
    (((struct oC_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_4;
    (((struct oC_float *)(((((struct o2F4_int *)(v0_0))->v))))->v) = w0_2;
    if (((*(signed char *)((v0_1 + 0x12))) != 0)) goto L_C01BF0E;
    (((struct o40_float *)(((((struct o2F4_int *)(v0_0))->v))))->v) = w0_0;
    L_C01BF0E:;
    (((struct o12_uchar *)(v0_1))->v) = R5;
    (((struct o20_float *)(v0_0))->v) = w0_1;
    (((struct o24_float *)(v0_0))->v) = w0_0;
    (((struct o28_float *)(v0_0))->v) = w0_5;
    *(unsigned int *)((v0_0 + 0x2C)) = R6;
    *(unsigned int *)((v0_0 + 0x30)) = R5;
    (((struct oEC_ushort *)(v0_0))->v) = 0xA;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01BF2E;
    L_C01BE70:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C01BE76;
}

void omake_vtx_lerp_keyed_rows(int obj, int mode_arg, int key_arg, int count, signed char *idx_list)
{
    char *row;
    signed char mode;
    int key, i;
    float point[3];

    row = (char *)0xC11C2B8;
    key = (short)key_arg;
    while (key > (int)*(unsigned short *)row)
        row += 108;
    mode = (signed char)mode_arg;
    if (key == (int)*(unsigned short *)row) {
        for (i = 0; i < count; i++) {
            mdl_vtx_iter_next();
            mdl_vtx_get_pos(point);
            point[0] = *(float *)(row + 4 + 8 * idx_list[i]);
            point[2] = *(float *)(row + 8 + 8 * idx_list[i]);
            if (mode != 2)
                point[0] = point[0] * -1.0f;
            mdl_vtx_set_pos(point);
        }
    } else {
        char *prev_row = row - 108;
        int prev_key = *(unsigned short *)prev_row;
        int key_span = (int)*(unsigned short *)row - prev_key;
        int key_off = key - prev_key;
        for (i = 0; i < count; i++) {
            float x0, x1;
            mdl_vtx_iter_next();
            mdl_vtx_get_pos(point);
            x0 = *(float *)(prev_row + 4 + 8 * idx_list[i]);
            x1 = *(float *)(row + 4 + 8 * idx_list[i]);
            point[0] = x0 + (float)key_off * ((x1 - x0) / (float)key_span);
            x0 = *(float *)(prev_row + 8 + 8 * idx_list[i]);
            x1 = *(float *)(row + 8 + 8 * idx_list[i]);
            point[2] = x0 + (float)key_off * ((x1 - x0) / (float)key_span);
            if (mode != 2)
                point[0] = point[0] * -1.0f;
            mdl_vtx_set_pos(point);
        }
    }
}

int FUN_0c01c4dc(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R8;
    register int R9;
    register int R12;
    register int R13;
    register int R14;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x8));
    v0_1 = (v0_2);
    w0_0 = (1.0f);
    if ((v0_2 == 0)) goto L_C01C4EC;
    if ((v0_1 == 1)) goto L_C01C51A;
    return obj_destroy(v0_0, R5, R6, a7);
    L_C01C51A:;
    v0_2 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C01C55C;
    if ((v0_1 == 1)) goto L_C01C568;
    if ((v0_1 == 2)) goto L_C01C596;
    L_C01C596:;
    return v0_1;
    L_C01C568:;
    (((struct o5C_float *)(v0_0))->v) = (((((struct o5C_float *)(v0_0))->v)) + 0.0333333313f);
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    v0_1 = (0xEC);
    FPUL_ = (0x3D088888);
    if (((int)(short)(v0_2 - 1) >= 0)) goto L_C01C596;
    (((struct o5C_float *)(v0_0))->v) = w0_0;
    v0_1 = *(signed char *)((v0_0 + 0x9));
    *(unsigned char *)((v0_0 + 0x9)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C01C596;
    L_C01C55C:;
    (((struct oEC_ushort *)(v0_0))->v) = 0x1E;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01C568;
    L_C01C4EC:;
    (((struct o20_float *)(v0_0))->v) = 0.0f;
    (((struct o24_float *)(v0_0))->v) = 0.0f;
    (((struct o28_float *)(v0_0))->v) = 200.0f;
    *(unsigned int *)((v0_0 + 0x2C)) = 0x0;
    *(unsigned int *)((v0_0 + 0x30)) = 0x0;
    (((struct o58_float *)(v0_0))->v) = w0_0;
    (((struct o54_float *)(v0_0))->v) = w0_0;
    (((struct o50_float *)(v0_0))->v) = w0_0;
    (((struct o5C_float *)(v0_0))->v) = 0.0f;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C01C51A;
}

int FUN_0c01c59a(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x8));
    v0_1 = (v0_3);
    v0_2 = (0x0);
    w0_0 = (0.0f);
    w0_1 = (1.0f);
    if ((v0_3 == 0)) goto L_C01C5AE;
    if ((v0_1 == 1)) goto L_C01C5E8;
    return obj_destroy(v0_0, R5, R6, v0_2);
    L_C01C5E8:;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_3);
    R5 = (0xC362360);
    R6 = (0xC362361);
    if ((v0_3 == 0)) goto L_C01C604;
    if ((v0_1 == 1)) goto L_C01C610;
    if ((v0_1 == 2)) goto L_C01C680;
    if (!((v0_1 == 3))) goto L_C01C6E6;
    (((struct o5C_float *)(v0_0))->v) = (((((struct o5C_float *)(v0_0))->v)) + -0.0249999985f);
    w0_3 = (((struct o5C_float *)(v0_0))->v);
    v0_1 = (0x5C);
    w0_2 = (w0_3);
    FPUL_ = (0xBCCCCCCC);
    if ((!(0.0f > w0_3))) goto L_C01C6AE;
    *(float *)((v0_0 + v0_1)) = w0_0;
    goto L_C01C6AE;
    L_C01C6E6:;
    return v0_1;
    L_C01C6AE:;
    w0_2 = (((struct oC_float *)(R5))->v);
    (((struct oC_float *)(R5))->v) = (w0_2 + 0.0333333313f);
    v0_1 = (0xC);
    FPUL_ = (0x3D088888);
    if ((!((w0_2 + 0.0333333313f) > w0_1))) goto L_C01C6C2;
    *(float *)((R5 + v0_1)) = w0_1;
    L_C01C6C2:;
    v0_3 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_3 - 1);
    v0_1 = (0xEC);
    if (((int)(short)(v0_3 - 1) >= 0)) goto L_C01C6E6;
    (((struct o5C_float *)(v0_0))->v) = w0_0;
    (((struct oC_float *)(R5))->v) = w0_1;
    *(unsigned char *)((v0_0 + 0x9)) = v0_2;
    v0_1 = (v0_2);
    goto L_C01C6E6;
    L_C01C680:;
    v0_2 = *(signed char *)((R6 + 0x0));
    v0_1 = ((unsigned char)v0_2);
    if (((unsigned char)v0_2 == 5)) goto L_C01C6E6;
    L_C01C688:;
    (((struct oEC_ushort *)(v0_0))->v) = 0x1E;
    L_C01C68E:;
    v0_1 = *(signed char *)((v0_0 + 0x9));
    *(unsigned char *)((v0_0 + 0x9)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C01C6E6;
    L_C01C610:;
    (((struct o5C_float *)(v0_0))->v) = (((((struct o5C_float *)(v0_0))->v)) + 0.0249999985f);
    v0_1 = (0x5C);
    w0_1 = (0.75f);
    FPUL_ = (0x3CCCCCCC);
    if ((!(((((struct o5C_float *)(v0_0))->v)) > 0.75f))) goto L_C01C62C;
    *(float *)((v0_0 + v0_1)) = w0_1;
    L_C01C62C:;
    (((struct oC_float *)(R5))->v) = (((((struct oC_float *)(R5))->v)) + -0.0333333313f);
    w0_3 = (((struct oC_float *)(R5))->v);
    v0_1 = (0xC);
    w0_2 = (w0_3);
    FPUL_ = (0xBD088888);
    if ((!(0.0f > w0_3))) goto L_C01C644;
    *(float *)((R5 + v0_1)) = w0_0;
    L_C01C644:;
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    v0_1 = (0xEC);
    if (((int)(short)(v0_2 - 1) >= 0)) goto L_C01C6E6;
    (((struct o5C_float *)(v0_0))->v) = w0_1;
    (((struct oC_float *)(R5))->v) = w0_0;
    goto L_C01C68E;
    L_C01C604:;
    v0_2 = *(signed char *)((R6 + 0x0));
    v0_1 = ((unsigned char)v0_2);
    if (((unsigned char)v0_2 == 5)) goto L_C01C688;
    goto L_C01C6E6;
    L_C01C5AE:;
    (((struct o20_float *)(v0_0))->v) = w0_0;
    (((struct o24_float *)(v0_0))->v) = w0_0;
    (((struct o28_float *)(v0_0))->v) = -100.0f;
    *(unsigned int *)((v0_0 + 0x2C)) = v0_2;
    *(unsigned int *)((v0_0 + 0x30)) = v0_2;
    (((struct o54_float *)(v0_0))->v) = 2.0f;
    (((struct o50_float *)(v0_0))->v) = 2.0f;
    (((struct o58_float *)(v0_0))->v) = w0_1;
    (((struct o5C_float *)(v0_0))->v) = w0_0;
    (((struct o68_float *)(v0_0))->v) = w0_0;
    (((struct o64_float *)(v0_0))->v) = w0_0;
    (((struct o60_float *)(v0_0))->v) = w0_0;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C01C5E8;
}

int FUN_0c01c6ea(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    u0 = *(float *)0xC01C7B4;
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
    } else {
        (((struct o38_float *)(a4))->v) = u0;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - (u0 / (float)(*(signed char *)((a4 + 0x4)))));
    if (!(((((struct o38_float *)(a4))->v)) > 0.0f)) {
        (((struct o38_float *)(a4))->v) = 0.0f;
    }
    (((struct oEC_ushort *)(a4))->v) = (int)((((struct o38_float *)(a4))->v));
    bgm_set_volume(0x0, ((((struct oEC_short *)(a4))->v)), a6, a7);
    t0 = 0xEC;
    if (((((struct oEC_short *)(a4))->v)) == 0) {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int FUN_0c01c75e(int a4)
{
    int stk[1];
    register int t0;
    register int t4;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x0, 0x0);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x0;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        t2 = *(signed char *)((t0 + 0x3));
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((0xC1804FC + (t2 << 2))));
        t4 = (t2 << 2);
    }
    return t4;
}

int FUN_0c01c7c4(int a4)
{
    int stk[1];
    register int t0;
    register int t4;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x0, 0x0);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x5;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        t2 = *(signed char *)((t0 + 0x3));
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((0xC1804FC + (t2 << 2))));
        t4 = (t2 << 2);
    }
    return t4;
}

int FUN_0c01c80a(int a4)
{
    int stk[1];
    register int t0;
    register int t4;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x0, 0x0);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x6;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        t2 = *(signed char *)((t0 + 0x3));
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((0xC1804FC + (t2 << 2))));
        t4 = (t2 << 2);
    }
    return t4;
}

int FUN_0c01c850(int index, int variant)
{
    int frame_buf[4];
    register int task;
    register int result;
    register int child_idx;
    register int flag_b;
    register int flag_a;
    register int bind_result;
    register int name_b;
    register int name_a;

    *(unsigned char *)(((int)frame_buf + 0)) = index;
    task = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x6, 0x0);
    result = task;
    if (task != 0) {
        *(unsigned char *)((task + 0x0)) = 0x1;
        *(unsigned char *)((task + 0x3)) = 0x1;
        *(unsigned char *)((task + 0x4)) = (*(signed char *)(((int)frame_buf + 0)));
        *(unsigned char *)((task + 0x1)) = 0x1;
        *(unsigned short *)((task + 0x6)) = 0xF;
        *(unsigned char *)((task + 0x5)) = 0x1;
        *(unsigned int *)((task + 0x10)) = (*(int *)((0xC1804FC + ((*(signed char *)((task + 0x3))) << 2))));
        *(unsigned int *)((task + 0x34)) = 0x0;
        *(unsigned int *)((task + 0x30)) = 0x0;
        *(unsigned int *)((task + 0x2C)) = 0x0;
        *(unsigned int *)(((int)frame_buf + 0)) = ((unsigned char)variant + 0xC180522);
        *(unsigned int *)(((int)frame_buf + 12)) = 0xC180531;
        *(unsigned int *)(((int)frame_buf + 8)) = ((unsigned char)variant + 0xC180532);
        *(unsigned int *)(((int)frame_buf + 4)) = 0xC180541;
        child_idx = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + task) + (child_idx << 2)) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + task) + (child_idx << 2)) + 0x0))) + 0x2)) = 0x40F;
            (((struct field_40_float *)((*(int *)((((child_idx << 2) + (0x2E0 + task)) + 0x0)))))->field_40) = 1.0f;
            if (child_idx != 4) {
                if (child_idx != 5) {
                    bind_result = (FUN_0c06233a((*(int *)((((child_idx << 2) + (0x2E0 + task)) + 0x0))), ((int)g_res_omake), (*(signed char *)((child_idx + 0xC18051C)))));
                } else {
                    flag_b = omake_is_item_unlocked(variant);
                    if ((signed char)flag_b != 0) {
                        name_b = (*(int *)(((int)frame_buf + 8)));
                    } else {
                        name_b = (*(int *)(((int)frame_buf + 4)));
                    }
                    bind_result = (FUN_0c06233a((*(int *)((((child_idx << 2) + (0x2E0 + task)) + 0x0))), ((int)g_res_omake), (*(signed char *)((name_b + 0x0)))));
                }
            } else {
                flag_a = omake_is_item_unlocked(variant);
                if ((signed char)flag_a != 0) {
                    name_a = (*(int *)(((int)frame_buf + 0)));
                } else {
                    name_a = (*(int *)(((int)frame_buf + 12)));
                }
                bind_result = (FUN_0c06233a((*(int *)((((child_idx << 2) + (0x2E0 + task)) + 0x0))), ((int)g_res_omake), (*(signed char *)((name_a + 0x0)))));
            }
            child_idx = (child_idx + 0x1);
            if ((int)child_idx >= (int)0x6) {
                break;
            }
        }
        result = bind_result;
    }
    return result;
}

int FUN_0c01cab6(int a4)
{
    int stk[1];
    register int t0;
    register int t8;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x1, 0x0);
    t8 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x4;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x41F;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((0xC1804FC + ((*(signed char *)((t0 + 0x3))) << 2))));
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t8 = (FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((int)g_res_omake), 0x39));
    }
    return t8;
}

int FUN_0c01cb1e(int a4)
{
    int stk[1];
    register int t0;
    register int t8;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x1, 0x0);
    t8 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x3;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x61F;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((0xC1804FC + ((*(signed char *)((t0 + 0x3))) << 2))));
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t8 = (FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((int)g_res_omake), 0x39));
    }
    return t8;
}

int FUN_0c01cb86(int a4)
{
    int stk[1];
    register int t0;
    register int t4;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x0, 0x0);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x7;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        t2 = *(signed char *)((t0 + 0x3));
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((0xC1804FC + (t2 << 2))));
        t4 = (t2 << 2);
    }
    return t4;
}


int omake_state_reset(void)
{
    *(unsigned char *)0xC7F473E = 0x0;
    (((struct o3_uchar *)0xC362360)->v) = 0x0;
    (((struct o2_uchar *)0xC362360)->v) = 0x0;
    (((struct o1_uchar *)0xC362360)->v) = 0x0;
    (((struct o0_uchar *)0xC362360)->v) = 0x0;
    return 0x0;
}

int opt_page_leave_reset(void)
{
    game_reset_objects();
    *(unsigned char *)0xC7F4726 = 0x2;
    (((struct o3_uchar *)0xC362360)->v) = 0x0;
    (((struct o2_uchar *)0xC362360)->v) = 0x0;
    (((struct o1_uchar *)0xC362360)->v) = 0x0;
    (((struct o0_uchar *)0xC362360)->v) = 0x0;
    return 0x0;
}

/* Tests one entry of the table at 0xC7F4750 (small counters against a level, flag bytes) selected by idx. */
int omake_is_item_unlocked(int idx)
{
    signed char *table;

    table = (signed char *)0xC7F4750;
    switch ((unsigned char)idx) {
    case 0:
        return table[0] >= 1;
    case 1:
        return table[0] >= 2;
    case 2:
        return table[0] >= 3;
    case 3:
        return table[0] >= 4;
    case 4:
        return table[3] != 0;
    case 5:
        return table[4] != 0;
    case 6:
        return table[2] >= 1;
    case 7:
        return table[2] >= 2;
    case 8:
        return table[2] >= 3;
    case 9:
        return table[1] >= 1;
    case 10:
        return table[1] >= 2;
    case 11:
        return table[1] >= 3;
    case 12:
        return table[6] != 0;
    case 13:
        return table[7] != 0;
    case 14:
        return table[8] != 0;
    default:
        return 0;
    }
}

int FUN_0c01d1ce(int a4, int a5)
{
    if ((signed char)a4 != 0) {
        if ((signed char)a4 != 1) {
            if ((signed char)a4 != 2) {
                return 0x0;
            }
            if (((unsigned short)((((struct o4_short *)0xC361BF8)->v)) & a5) == 0) {
                if (((unsigned short)((((struct o18_short *)0xC361BF8)->v)) & a5) != 0) {
                    return 0x1;
                }
                return 0x0;
            }
            return 0x1;
        }
        if (((unsigned short)((((struct o2_short *)0xC361BF8)->v)) & a5) == 0) {
            if (((unsigned short)((((struct o16_short *)0xC361BF8)->v)) & a5) != 0) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x1;
    }
    if (((unsigned short)((((struct o0_short *)0xC361BF8)->v)) & a5) == 0) {
        if (((unsigned short)((((struct o14_short *)0xC361BF8)->v)) & a5) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c01d226(void)
{
    register int t1;
    register int t2;

    if (((*(signed char *)0xC7F473E) == 5) && ((t1 = (((struct o0_int *)0xC361BF0)->v), t1 == 0) || (t2 = (((struct o14_int *)0xC361BF0)->v), t2 == 0))) {
        return 0x0;
    }
    return 0x1;
}
