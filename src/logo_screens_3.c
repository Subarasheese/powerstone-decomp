/* PSTONE LOGO bank objects and logo screens (0c02b884-0c02ca74) */

struct o0_float { float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_pos(int);
int mdl_vtx_set_pos(int);
float math_sin_angle16(int);
struct o2E4_int { char p[0x2E4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int fx_scroll_model_uv(int);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct oC_float { char p[0xC]; float v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
struct oEC_short { char p[0xEC]; short v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
int ui_draw_text_stub(void);
int ui_fade_start(int, int, int, int);
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
int FUN_0c0a3f30(int);
struct o2F0_int { char p[0x2F0]; int v; };
int FUN_0c06231c(int, int, int);
struct o2F4_int { char p[0x2F4]; int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
int FUN_0c0e6fe8(void);
struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };

int FUN_0c02b884(int a4);
int logo_spawn_overlay(float f4);
int FUN_0c02bc0e(int a4, int a5, int a6, int a7);
int FUN_0c02bcba(void);
int FUN_0c02c2d0(int a4);
int FUN_0c02c38a(int a4);
int FUN_0c02c830(int a4);
int FUN_0c02c91a(int a4);

int FUN_0c02b884(int a4)
{
    int stk[3];
    register float u7;
    register float u8;
    register float u9;
    register int t10;
    register float u15;
    register float u19;

    *(unsigned short *)0xC7F473C = ((*(short *)0xC7F473C) + 0x444);
    (((struct oF2_ushort *)(a4))->v) = (*(short *)0xC7F473C);
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    mdl_vtx_iter_begin((*(int *)(((*(int *)0xC664A08) + 0xC))), ((((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v)));
    u7 = (((struct o0_float *)0xC02B9C4)->v);
    u8 = (((struct o4_float *)0xC02B9C4)->v);
    u9 = (((struct o8_float *)0xC02B9C4)->v);
    for (;;) {
        t10 = mdl_vtx_iter_next();
        if (t10 != 0) {
            break;
        }
        mdl_vtx_get_pos(((int)stk + 0));
        u15 = (*(float *)(((int)stk + 0)));
        u15 = u15 + u8 * (math_sin_angle16(((((struct oF2_short *)(a4))->v))));
        *(float *)(((int)stk + 0)) = u15;
        u19 = (*(float *)(((int)stk + 4)));
        u19 = u19 + u7 * (math_sin_angle16(((((struct oF2_short *)(a4))->v))));
        *(float *)(((int)stk + 4)) = u19;
        *(float *)(((int)stk + 8)) = ((math_sin_angle16(((((struct oF2_short *)(a4))->v)))) * u9);
        mdl_vtx_set_pos(((int)stk + 0));
        if (((((struct oEE_short *)(a4))->v)) != 0) {
            (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) + 0x2AAA);
        }
        (((struct oEE_ushort *)(a4))->v) = ((-((((struct oEE_short *)(a4))->v))) + 0x1);
    }
    return t10;
}

int FUN_0c02ba14(int a4)
{
    int t0;
    int t1;
    register int t2;
    register float u0;
    register float u1;

    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                return fx_scroll_model_uv(a4);
            }
            FUN_0c02b884(a4);
            fx_scroll_model_uv(a4);
            t2 = (((struct o2E0_int *)(a4))->v);
            (((struct o40_float *)(t2))->v) = (((((struct o40_float *)(t2))->v)) - 0.099999994f);
            t2 = (((struct o2E4_int *)(a4))->v);
            (((struct o40_float *)(t2))->v) = (((((struct o40_float *)(t2))->v)) + 0.099999994f);
            t2 = 0x40;
            if (!(1.0f > ((((struct o40_float *)(((((struct o2E4_int *)(a4))->v))))->v)))) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct o40_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
                *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
                t2 = 0x2E0;
            }
            return t2;
        }
        if (((*(signed char *)0xC7F473A) != 0) && (t0 = (((struct o2E0_int *)(a4))->v), u0 = (((struct o40_float *)(t0))->v), u0 == 1.0f)) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
            (((struct o44_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
        }
        return FUN_0c02b884(a4);
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct oF2_ushort *)(a4))->v) = 0x0;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    if (((*(signed char *)0xC7F473A) != 0) && (t1 = (((struct o2E0_int *)(a4))->v), u1 = (((struct o40_float *)(t1))->v), u1 == 1.0f)) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
        (((struct o40_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
        (((struct o44_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
        return fx_scroll_model_uv(a4);
    }
    return FUN_0c02b884(a4);
}

int logo_spawn_overlay(float f4)
{
    register int t0;
    register int t19;
    register float u7;

    t0 = obj_create(0x5, 0x1, 0x2, 1);
    t19 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC02BA14;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o28_float *)(t0))->v) = ((((struct o0_float *)0xC02BC7C)->v));
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x41F;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664A00, 0x2);
        u7 = (((struct oC_float *)0xC02BC7C)->v);
        (((struct o1C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = u7;
        (((struct o20_float *)(((((struct o2E0_int *)(t0))->v))))->v) = u7;
        (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = f4;
        *(unsigned char *)((((((struct o2E4_int *)(t0))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct o2E4_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E4_int *)(t0))->v)) + 0x2)) = 0x41F;
        FUN_0c06233a(((((struct o2E4_int *)(t0))->v)), 0xC664A00, 0x6);
        (((struct o40_float *)(((((struct o2E4_int *)(t0))->v))))->v) = 0.0f;
        (((struct o1C_float *)(((((struct o2E4_int *)(t0))->v))))->v) = u7;
        (((struct o20_float *)(((((struct o2E4_int *)(t0))->v))))->v) = u7;
        t19 = 0x20;
    }
    return t19;
}

int FUN_0c02bc0e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return ((int (*)(int, int, int, int))(0xC02BCB6))(a4, 0x444, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC02BC94))(a4, 0x444, a6, a7);
        }
        t0 = (((struct o2E4_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) + 0x444);
    } else {
        t0 = (((struct o2E4_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) - (int)(((float)((((struct oEC_short *)(a4))->v)) * 65536.0f) / 360.0f));
    }
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    if (((((struct oEC_short *)(a4))->v)) == 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        return ((int (*)(int, int, int, int))(0xC02BCB0))(a4, 0x444, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC02BCB6))(a4, 0x444, a6, a7);
}

int FUN_0c02bcba(void)
{
    register int t0;

    t0 = *(signed char *)0xC7F2F08;
    if (((unsigned char)t0 != 0) && (((unsigned char)t0 != 1) && (((unsigned char)t0 != 2) && ((unsigned char)t0 != 3)))) {
        *(volatile int *)0xC321184;
        ui_draw_text_stub();
        ui_draw_text_stub();
        *(volatile int *)0xC321188;
    } else {
        *(volatile int *)0xC321180;
    }
    ui_draw_text_stub();
    return (ui_draw_text_stub());
}

int FUN_0c02bd8c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oF2_ushort *)(a4))->v) = 0x0;
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 == 1) {
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + 9.33333206f);
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + -6.99999905f);
            u0 = 0.333333313f;
            u0 = u0 + 0.049999997f * (float)((((struct oEC_short *)(a4))->v));
            (((struct o54_float *)(a4))->v) = u0;
            (((struct o50_float *)(a4))->v) = u0;
            t1 = (((struct oEC_short *)(a4))->v);
            if (t1 != 1) {
                return t1;
            }
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            *(unsigned char *)((a4 + 0xA)) = 0x0;
            (((struct oEC_ushort *)(a4))->v) = 0x3;
            (((struct oEE_ushort *)(a4))->v) = 0x2;
            (((struct o20_float *)(a4))->v) = 0.0f;
            (((struct o24_float *)(a4))->v) = 0.0f;
            FUN_0c0a3f30(0x1F);
            return FUN_0c0a3f30(0x20);
        }
        if (t0 == 2) {
            if ((*(signed char *)((a4 + 0x4))) != 0) {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                *(unsigned char *)((a4 + 0xA)) = 0x0;
                (((struct oEC_ushort *)(a4))->v) = 0x2E;
                (((struct o50_float *)(a4))->v) = 0.333333313f;
                (((struct o54_float *)(a4))->v) = 0.333333313f;
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct o24_float *)(a4))->v) = 64.0f;
                *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)0xC7F4732 = 0x1;
                t1 = 0x2E8;
            } else {
                t2 = *(signed char *)((a4 + 0xA));
                switch (t2) {
                case 0:
                    (((struct o54_float *)(a4))->v) = (((-((float)((((struct oEC_short *)(a4))->v)) / 12.0f)) + 1.25f) * 0.333333313f);
                    (((struct o50_float *)(a4))->v) = ((((float)((((struct oEC_short *)(a4))->v)) / 12.0f) + 0.75f) * 0.333333313f);
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    if (((((struct oEC_short *)(a4))->v)) != 0) {
                    } else {
                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                        (((struct oEC_ushort *)(a4))->v) = 0x3;
                    }
                    break;
                case 1:
                    (((struct o54_float *)(a4))->v) = ((((float)((((struct oEC_short *)(a4))->v)) / 12.0f) + 1.0f) * 0.333333313f);
                    (((struct o50_float *)(a4))->v) = (((-((float)((((struct oEC_short *)(a4))->v)) / 12.0f)) + 1.0f) * 0.333333313f);
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    if (((((struct oEC_short *)(a4))->v)) == 0) {
                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                        (((struct oEC_ushort *)(a4))->v) = 0x3;
                    }
                    break;
                case 2:
                    (((struct o54_float *)(a4))->v) = ((((float)((((struct oEC_short *)(a4))->v)) / 12.0f) + 0.75f) * 0.333333313f);
                    (((struct o50_float *)(a4))->v) = (((-((float)((((struct oEC_short *)(a4))->v)) / 12.0f)) + 1.25f) * 0.333333313f);
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    if (((((struct oEC_short *)(a4))->v)) == 0) {
                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                        (((struct oEC_ushort *)(a4))->v) = 0x3;
                    }
                    break;
                case 3:
                    (((struct o54_float *)(a4))->v) = (((-((float)((((struct oEC_short *)(a4))->v)) / 12.0f)) + 1.0f) * 0.333333313f);
                    (((struct o50_float *)(a4))->v) = ((((float)((((struct oEC_short *)(a4))->v)) / 12.0f) + 1.0f) * 0.333333313f);
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    if (((((struct oEC_short *)(a4))->v)) == 0) {
                        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
                        if (((((struct oEE_short *)(a4))->v)) == 0) {
                            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                            *(unsigned char *)((a4 + 0xA)) = 0x0;
                            (((struct oEC_ushort *)(a4))->v) = 0x2E;
                            (((struct o50_float *)(a4))->v) = 0.333333313f;
                            (((struct o54_float *)(a4))->v) = 0.333333313f;
                        } else {
                            *(unsigned char *)((a4 + 0xA)) = 0x0;
                            (((struct oEC_ushort *)(a4))->v) = 0x3;
                        }
                    }
                    break;
                }
                t2 = (((struct o2E4_int *)(a4))->v);
                *(unsigned int *)((t2 + 0x18)) = ((*(int *)((t2 + 0x18))) - 0x20B6);
                t1 = 0x2E4;
            }
            return t1;
        }
        if (t0 == 3) {
            FUN_0c02bc0e(a4, a5, a6, a7);
            u0 = (((struct o24_float *)(a4))->v);
            (((struct o24_float *)(a4))->v) = (u0 + 2.0f);
            t1 = 0x24;
            if (!(64.0f > (u0 + 2.0f))) {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct o24_float *)(a4))->v) = 64.0f;
                *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct o2EC_int *)(a4))->v)) + 0x2)) = 0x411;
                (((struct o40_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 0.5f;
                *(unsigned int *)((((((struct o2EC_int *)(a4))->v)) + 0x10)) = 0x4000;
                *(unsigned char *)0xC7F4732 = 0x1;
                t1 = 0x2EC;
            }
            return t1;
        }
        if (t0 == 4) {
            FUN_0c02bc0e(a4, a5, a6, a7);
            FUN_0c02bcba();
            t1 = (((struct o2EC_int *)(a4))->v);
            *(unsigned int *)((t1 + 0x10)) = (unsigned short)((*(int *)((t1 + 0x10))) + 0x444);
            t1 = (((struct o2EC_int *)(a4))->v);
            u0 = 0.599999964f;
            u0 = u0 + 0.399999976f * (math_sin_angle16((*(int *)((t1 + 0x10)))));
            (((struct o40_float *)(t1))->v) = u0;
            t1 = 0xC02C2C0;
            if ((*(signed char *)0xC7F473A) != 0) {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
                t1 = 0x2E8;
            }
            return t1;
        }
        if (t0 == 5) {
            FUN_0c02bc0e(a4, a5, a6, a7);
            u0 = (((struct o24_float *)(a4))->v);
            (((struct o24_float *)(a4))->v) = (u0 + 4.0f);
            if (!(96.0f > (u0 + 4.0f))) {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct o24_float *)(a4))->v) = 96.0f;
                *(unsigned char *)0xC7F4732 = 0x1;
            }
            return 0x24;
        }
        if (t0 == 6) {
            return FUN_0c02bc0e(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct oC_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
    (((struct o4_float *)(((((struct o2E4_int *)(a4))->v))))->v) = -264.0f;
    (((struct o8_float *)(((((struct o2E4_int *)(a4))->v))))->v) = -6.0f;
    (((struct oC_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 8.0f;
    (((struct o1C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
    (((struct o20_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
    *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
    (((struct o4_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 0.0f;
    (((struct o8_float *)(((((struct o2E8_int *)(a4))->v))))->v) = -648.0f;
    (((struct oC_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 8.0f;
    (((struct o1C_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 3.0f;
    (((struct o20_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 3.0f;
    *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x0;
    (((struct o4_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 0.0f;
    (((struct o8_float *)(((((struct o2EC_int *)(a4))->v))))->v) = -550.0f;
    (((struct o1C_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 3.0f;
    (((struct o20_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 3.0f;
    (((struct o20_float *)(a4))->v) = -559.999939f;
    (((struct o24_float *)(a4))->v) = 419.999969f;
    (((struct oEC_ushort *)(a4))->v) = 0x3C;
    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
    if ((*(signed char *)((a4 + 0x4))) != 0) {
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        *(unsigned char *)((a4 + 0xA)) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0x3;
        (((struct oEE_ushort *)(a4))->v) = 0x2;
        (((struct o20_float *)(a4))->v) = 0.0f;
        (((struct o24_float *)(a4))->v) = 0.0f;
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        *(unsigned char *)((a4 + 0xA)) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0x1;
        t0 = (((struct o2E4_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) - (int)(((float)((((struct oEC_short *)(a4))->v)) * 65536.0f) / 360.0f));
        (((struct o50_float *)(a4))->v) = 0.333333313f;
        (((struct o54_float *)(a4))->v) = 0.333333313f;
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        (((struct o24_float *)(a4))->v) = 64.0f;
        *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        (((struct o24_float *)(a4))->v) = 96.0f;
        t0 = (((struct o2E8_int *)(a4))->v);
        (((struct o8_float *)(t0))->v) = (((((struct o8_float *)(t0))->v)) - 96.0f);
        *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
        t0 = *(signed char *)((a4 + 0x9));
        *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
        *(unsigned char *)0xC7F4732 = 0x1;
        return (t0 + 0x1);
    }
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + 9.33333206f);
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + -6.99999905f);
    u0 = 0.333333313f;
    u0 = u0 + 0.049999997f * (float)((((struct oEC_short *)(a4))->v));
    (((struct o54_float *)(a4))->v) = u0;
    (((struct o50_float *)(a4))->v) = u0;
    t0 = (((struct oEC_short *)(a4))->v);
    if (t0 != 1) {
        return t0;
    }
    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x3;
    (((struct oEE_ushort *)(a4))->v) = 0x2;
    (((struct o20_float *)(a4))->v) = 0.0f;
    (((struct o24_float *)(a4))->v) = 0.0f;
    FUN_0c0a3f30(0x1F);
    return FUN_0c0a3f30(0x20);
}

int FUN_0c02c2d0(int a4)
{
    int stk[1];
    register int t0;
    register int t11;
    register int t2;
    register int t3;
    register int t4;
    register int t8;
    register int t10;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = obj_create(0x5, 0x1, 0x4, 0);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC02BD8C;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        t2 = 0x0;
        t3 = 0xC14915A;
        t4 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t4) + 0x0))) + 0x0)) = 0x1;
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t4) + 0x0))) + 0x1)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t4) + 0x0))) + 0x2)) = 0x1F;
            t8 = *(signed char *)((t3 + 0x0));
            t3 = (t3 + 0x1);
            t10 = FUN_0c06233a((*(int *)((((0x2E0 + t0) + t4) + 0x0))), 0xC664A00, t8);
            t2 = (t2 + 0x1);
            t4 = (t4 + 0x4);
            if ((int)t2 >= (int)0x4) {
                break;
            }
        }
        t11 = t10;
    }
    return t11;
}

int FUN_0c02c38a(int a4)
{
    register int t0;

    t0 = (((struct o2EC_int *)(a4))->v);
    *(unsigned short *)((t0 + 0x2)) = 0x401;
    *(unsigned char *)((t0 + 0x0)) = 0x1;
    FUN_0c06231c(t0, 0xC664A00, ((*(signed char *)0xC7F4738) + 0xC));
    t0 = (((struct o2F0_int *)(a4))->v);
    *(unsigned short *)((t0 + 0x2)) = 0x401;
    *(unsigned char *)((t0 + 0x0)) = 0x1;
    return FUN_0c06231c(t0, 0xC664A00, ((*(signed char *)0xC7F4738) + 0x12));
}

int FUN_0c02c3c4(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(signed char *)((a4 + 0x9));
            if (t1 != 0) {
                if (t1 != 1) {
                    t2 = t1;
                    if (t1 != 2) {
                    } else {
                        t1 = (((struct o2E0_int *)(a4))->v);
                        *(unsigned int *)((t1 + 0x10)) = ((*(int *)((t1 + 0x10))) + (*(int *)((t1 + 0x34))));
                        t1 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                        t3 = 0xEC;
                        if ((short)(t1 - 1) != 0) {
                        } else {
                            (((struct oEC_ushort *)(a4))->v) = 0x3;
                            *(unsigned char *)((a4 + 0x9)) = 0x1;
                            t1 = (((struct o2E0_int *)(a4))->v);
                            *(unsigned int *)((t1 + 0x34)) = (int)((float)(*(int *)((t1 + 0x34))) / 2.0f);
                            t1 = (((struct oEE_short *)(a4))->v);
                            (((struct oEE_ushort *)(a4))->v) = (t1 - 1);
                            t4 = 0xEE;
                            if ((short)(t1 - 1) != 0) {
                            } else {
                                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                                *(unsigned char *)((a4 + 0x9)) = 0x0;
                                *(unsigned int *)((((((struct o2E0_int *)(a4))->v)) + 0x10)) = 0x0;
                                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                                (((struct o40_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((((struct o5C_float *)(a4))->v));
                                *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
                                (((struct o40_float *)(((((struct o2E8_int *)(a4))->v))))->v) = ((((struct o5C_float *)(a4))->v));
                                t1 = (((struct o2F4_int *)(a4))->v);
                                *(unsigned char *)((t1 + 0x0)) = 0x1;
                                (((struct o40_float *)(t1))->v) = ((((struct o5C_float *)(a4))->v));
                                if ((*(signed char *)0xC7F4739) != 0) {
                                    FUN_0c06231c(t1, 0xC664A00, 0xB);
                                    *(unsigned int *)((t1 + 0x10)) = (-((short)(*(signed char *)0xC7F4738) * (short)0x2AAA));
                                } else {
                                    if ((int)(*(signed char *)0xC7F4738) < (int)0x3) {
                                        *(unsigned int *)((t1 + 0x10)) = (-((short)(*(signed char *)0xC7F4738) * (short)0x3333));
                                    } else {
                                        *(unsigned int *)((t1 + 0x10)) = (-(((*(signed char *)0xC7F4738) - 1) * 0x3333));
                                    }
                                }
                                FUN_0c02c38a(a4);
                                (((struct o40_float *)(((((struct o2F0_int *)(a4))->v))))->v) = ((((struct o5C_float *)(a4))->v));
                                (((struct o40_float *)(((((struct o2EC_int *)(a4))->v))))->v) = ((((struct o5C_float *)(a4))->v));
                                t4 = 0x40;
                            }
                            t3 = t4;
                        }
                        t2 = t3;
                    }
                    t1 = t2;
                } else {
                    t2 = (((struct o2E0_int *)(a4))->v);
                    *(unsigned int *)((t2 + 0x10)) = ((*(int *)((t2 + 0x10))) - (*(int *)((t2 + 0x34))));
                    t2 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
                    t3 = 0xEC;
                    if ((short)(t2 - 1) != 0) {
                    } else {
                        (((struct oEC_ushort *)(a4))->v) = 0x3;
                        t2 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                        t3 = (t2 + 0x1);
                    }
                    t1 = t3;
                }
                t2 = t1;
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0xD;
                (((struct oEE_ushort *)(a4))->v) = 0x3;
                *(unsigned int *)((((((struct o2E0_int *)(a4))->v)) + 0x34)) = 0x666;
                t1 = (((struct o2E0_int *)(a4))->v);
                *(unsigned int *)((t1 + 0x10)) = ((*(int *)((t1 + 0x10))) - (*(int *)((t1 + 0x34))));
                t1 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                t3 = 0xEC;
                if ((short)(t1 - 1) != 0) {
                } else {
                    (((struct oEC_ushort *)(a4))->v) = 0x3;
                    t1 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                    t3 = (t1 + 0x1);
                }
                t2 = t3;
            }
            t1 = t2;
        } else {
            if (t0 == 2) {
                u0 = (((struct o5C_float *)(a4))->v);
                (((struct o5C_float *)(a4))->v) = (u0 + 0.099999994f);
                if (!(1.0f > (u0 + 0.099999994f))) {
                    (((struct o5C_float *)(a4))->v) = 1.0f;
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                    (((struct o6_uchar *)0xC7F472D)->v) = 0x1;
                }
                (((struct o40_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((((struct o5C_float *)(a4))->v));
                (((struct o40_float *)(((((struct o2E8_int *)(a4))->v))))->v) = ((((struct o5C_float *)(a4))->v));
                (((struct o40_float *)(((((struct o2EC_int *)(a4))->v))))->v) = ((((struct o5C_float *)(a4))->v));
                (((struct o40_float *)(((((struct o2F4_int *)(a4))->v))))->v) = ((((struct o5C_float *)(a4))->v));
                (((struct o40_float *)(((((struct o2F0_int *)(a4))->v))))->v) = ((((struct o5C_float *)(a4))->v));
                t2 = 0x40;
            } else {
                t3 = t0;
                if (t0 == 3) {
                    t0 = *(signed char *)((a4 + 0x9));
                    if (t0 != 0) {
                        t4 = t0;
                        if (t0 != 1) {
                        } else {
                            t0 = (((struct o2F4_int *)(a4))->v);
                            *(unsigned int *)((t0 + 0x10)) = ((*(int *)((t0 + 0x10))) + (*(int *)((t0 + 0x34))));
                            t5 = *(signed char *)((a4 + 0xA));
                            if (t5 != 0) {
                                if (t5 != 1) {
                                } else {
                                    t5 = (((struct o2EC_int *)(a4))->v);
                                    (((struct o40_float *)(t5))->v) = (((((struct o40_float *)(t5))->v)) + 0.199999988f);
                                    t5 = (((struct o2F0_int *)(a4))->v);
                                    u0 = (((struct o40_float *)(t5))->v);
                                    (((struct o40_float *)(t5))->v) = (u0 + 0.199999988f);
                                    if (!(1.0f > (u0 + 0.199999988f))) {
                                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                                    }
                                }
                            } else {
                                t5 = (((struct o2EC_int *)(a4))->v);
                                (((struct o40_float *)(t5))->v) = (((((struct o40_float *)(t5))->v)) - 0.199999988f);
                                t5 = (((struct o2F0_int *)(a4))->v);
                                (((struct o40_float *)(t5))->v) = (((((struct o40_float *)(t5))->v)) - 0.199999988f);
                                t5 = (((struct oEE_short *)(a4))->v);
                                (((struct oEE_ushort *)(a4))->v) = (t5 - 1);
                                if ((short)(t5 - 1) == 0) {
                                    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                                    FUN_0c02c38a(a4);
                                }
                            }
                            t5 = (((struct oEC_short *)(a4))->v);
                            (((struct oEC_ushort *)(a4))->v) = (t5 - 1);
                            t6 = 0xEC;
                            if ((short)(t5 - 1) == 0) {
                                *(unsigned char *)((a4 + 0x9)) = 0x0;
                                *(unsigned int *)((t0 + 0x10)) = (*(int *)((t0 + 0x38)));
                                (((struct o0_uchar *)0xC7F472D)->v) = (*(signed char *)0xC7F473B);
                                (((struct oE_uchar *)0xC7F472D)->v) = 0x0;
                                (((struct o40_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 1.0f;
                                (((struct o40_float *)(((((struct o2F0_int *)(a4))->v))))->v) = 1.0f;
                                t6 = 0x40;
                            }
                            t4 = t6;
                        }
                        t0 = t4;
                    } else {
                        t4 = 0x17;
                        if ((*(signed char *)0xC7F473B) == 0) {
                        } else {
                            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                            *(unsigned char *)((a4 + 0xA)) = 0x0;
                            (((struct oEC_ushort *)(a4))->v) = 0xA;
                            (((struct oEE_ushort *)(a4))->v) = 0x5;
                            t5 = (((struct o2F4_int *)(a4))->v);
                            if ((*(signed char *)0xC7F4739) != 0) {
                                *(unsigned int *)((t5 + 0x34)) = 0x444;
                                *(unsigned int *)((t5 + 0x38)) = (-((short)(*(signed char *)0xC7F4738) * (short)0x2AAA));
                            } else {
                                *(unsigned int *)((t5 + 0x34)) = 0x51E;
                                t6 = *(signed char *)0xC7F4738;
                                t4 = t6;
                                if ((int)(*(signed char *)0xC7F4738) >= (int)0x3) {
                                    t4 = (t6 - 1);
                                }
                                *(unsigned int *)((t5 + 0x38)) = (-(t4 * 0x3333));
                            }
                            if ((*(signed char *)0xC7F473B) == 2) {
                                *(unsigned int *)((t5 + 0x34)) = (-(*(int *)((t5 + 0x34))));
                            }
                            t5 = (((struct o2F4_int *)(a4))->v);
                            *(unsigned int *)((t5 + 0x10)) = ((*(int *)((t5 + 0x10))) + (*(int *)((t5 + 0x34))));
                            t6 = *(signed char *)((a4 + 0xA));
                            if (t6 != 0) {
                                if (t6 != 1) {
                                } else {
                                    t6 = (((struct o2EC_int *)(a4))->v);
                                    (((struct o40_float *)(t6))->v) = (((((struct o40_float *)(t6))->v)) + 0.199999988f);
                                    t6 = (((struct o2F0_int *)(a4))->v);
                                    u0 = (((struct o40_float *)(t6))->v);
                                    (((struct o40_float *)(t6))->v) = (u0 + 0.199999988f);
                                    if (!(1.0f > (u0 + 0.199999988f))) {
                                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                                    }
                                }
                            } else {
                                t6 = (((struct o2EC_int *)(a4))->v);
                                (((struct o40_float *)(t6))->v) = (((((struct o40_float *)(t6))->v)) - 0.199999988f);
                                t6 = (((struct o2F0_int *)(a4))->v);
                                (((struct o40_float *)(t6))->v) = (((((struct o40_float *)(t6))->v)) - 0.199999988f);
                                t6 = (((struct oEE_short *)(a4))->v);
                                (((struct oEE_ushort *)(a4))->v) = (t6 - 1);
                                if ((short)(t6 - 1) == 0) {
                                    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                                    FUN_0c02c38a(a4);
                                }
                            }
                            t6 = (((struct oEC_short *)(a4))->v);
                            (((struct oEC_ushort *)(a4))->v) = (t6 - 1);
                            t4 = 0xEC;
                            if ((short)(t6 - 1) == 0) {
                                *(unsigned char *)((a4 + 0x9)) = 0x0;
                                *(unsigned int *)((t5 + 0x10)) = (*(int *)((t5 + 0x38)));
                                (((struct o0_uchar *)0xC7F472D)->v) = (*(signed char *)0xC7F473B);
                                (((struct oE_uchar *)0xC7F472D)->v) = 0x0;
                                (((struct o40_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 1.0f;
                                (((struct o40_float *)(((((struct o2F0_int *)(a4))->v))))->v) = 1.0f;
                                t4 = 0x40;
                            }
                        }
                        t0 = t4;
                    }
                    t3 = t0;
                }
                t2 = t3;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = 0x16;
        if ((*(signed char *)0xC7F473A) == 0) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x9)) = 0x0;
            *(unsigned char *)((a4 + 0x1)) = 0x1;
            *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned int *)((((((struct o2E0_int *)(a4))->v)) + 0x10)) = 0x4000;
            (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            (((struct o5C_float *)(a4))->v) = 0.0f;
            t2 = *(signed char *)((a4 + 0x4));
            t3 = t2;
            if (t2 == 0) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = 0x3;
                (((struct o5C_float *)(a4))->v) = 1.0f;
                *(unsigned int *)((((((struct o2E0_int *)(a4))->v)) + 0x10)) = 0x0;
                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o40_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((((struct o5C_float *)(a4))->v));
                *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o40_float *)(((((struct o2E8_int *)(a4))->v))))->v) = ((((struct o5C_float *)(a4))->v));
                t2 = (((struct o2F4_int *)(a4))->v);
                *(unsigned char *)((t2 + 0x0)) = 0x1;
                (((struct o40_float *)(t2))->v) = ((((struct o5C_float *)(a4))->v));
                if ((*(signed char *)0xC7F4739) != 0) {
                    FUN_0c06231c(t2, 0xC664A00, 0xB);
                    *(unsigned int *)((t2 + 0x10)) = (-((short)(*(signed char *)0xC7F4738) * (short)0x2AAA));
                } else {
                    if ((int)(*(signed char *)0xC7F4738) < (int)0x3) {
                        *(unsigned int *)((t2 + 0x10)) = (-((short)(*(signed char *)0xC7F4738) * (short)0x3333));
                    } else {
                        *(unsigned int *)((t2 + 0x10)) = (-(((*(signed char *)0xC7F4738) - 1) * 0x3333));
                    }
                }
                FUN_0c02c38a(a4);
                (((struct o40_float *)(((((struct o2F0_int *)(a4))->v))))->v) = ((((struct o5C_float *)(a4))->v));
                (((struct o40_float *)(((((struct o2EC_int *)(a4))->v))))->v) = ((((struct o5C_float *)(a4))->v));
                (((struct o6_uchar *)0xC7F472D)->v) = 0x1;
                t3 = 0x1;
            }
            t1 = t3;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c02c830(int a4)
{
    int stk[1];
    register int t0;
    register int t14;
    register int t2;
    register int t12;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = obj_create(0x5, 0x1, 0x6, 0);
    t14 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC02C3C4;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o28_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        t2 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x0)) = 0x0;
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x1)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x2)) = 0x41F;
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))), 0xC664A00, (*(signed char *)((t2 + 0xC14915E))));
            *(volatile int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0));
            FUN_0c0e6fe8();
            t12 = (t2 << 2);
            t2 = (t2 + 0x1);
            (((struct o40_float *)((*(int *)(((t12 + (0x2E0 + t0)) + 0x0)))))->v) = 1.0f;
            if ((int)t2 >= (int)0x6) {
                break;
            }
        }
        t14 = 0x40;
    }
    return t14;
}

int FUN_0c02c91a(int a4)
{
    register int t0;

    t0 = *(int *)((((a4 & 0x7) << 2) + 0xC1491AC));
    (((struct o8_uint *)0xC7F31BC)->v) = t0;
    (((struct o4_uint *)0xC7F31BC)->v) = t0;
    (((struct o0_uint *)0xC7F31BC)->v) = t0;
    return 0xC1491AC;
}

int FUN_0c02c95c(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC7F4727;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = t0;
            } else {
                t0 = *(signed char *)0xC7F4732;
                t2 = t0;
                if (t0 != 0) {
                    t0 = *(signed char *)0xC7F4733;
                    t2 = t0;
                    if (t0 != 0) {
                        (((struct o0_uchar *)0xC7F4727)->v) = ((*(signed char *)0xC7F4727) + 0x1);
                        (((struct o1_uchar *)0xC7F4727)->v) = 0x1;
                        (((struct o2_uchar *)0xC7F4727)->v) = 0x1;
                        t2 = 0x1;
                    }
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            t1 = *(signed char *)0xC7F4732;
            t2 = t1;
            if (t1 != 0) {
                (((struct o0_uchar *)0xC7F4727)->v) = ((*(signed char *)0xC7F4727) + 0x1);
                (((struct o1_uchar *)0xC7F4727)->v) = 0x1;
                (((struct oB_uchar *)0xC7F4727)->v) = 0x0;
                t2 = 0x0;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        (((struct o0_uchar *)0xC7F4727)->v) = ((*(signed char *)0xC7F4727) + 0x1);
        (((struct o1_uchar *)0xC7F4727)->v) = 0x0;
        (((struct o2_uchar *)0xC7F4727)->v) = 0x0;
        (((struct oA_uchar *)0xC7F4727)->v) = 0x0;
        (((struct oB_uchar *)0xC7F4727)->v) = 0x0;
        (((struct oC_uchar *)0xC7F4727)->v) = 0x0;
        logo_spawn_overlay(1.0f);
        FUN_0c02c2d0(0x0);
        FUN_0c02c830(0x0);
        FUN_0c02c91a(0x0);
        ui_fade_start(0xFFFFFFFF, 0x0, 0x0, 0x3C);
        t0 = *(signed char *)0xC7F4732;
        t2 = t0;
        if (t0 != 0) {
            (((struct o0_uchar *)0xC7F4727)->v) = ((*(signed char *)0xC7F4727) + 0x1);
            (((struct o1_uchar *)0xC7F4727)->v) = 0x1;
            (((struct oB_uchar *)0xC7F4727)->v) = 0x0;
            t2 = 0x0;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c02c9f6(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)0xC7F4727;
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
        } else {
            t0 = *(signed char *)0xC7F4732;
            t2 = t0;
            if (t0 != 0) {
                t0 = *(signed char *)0xC7F4733;
                t3 = t0;
                if (t0 != 0) {
                    (((struct o0_uchar *)0xC7F4727)->v) = ((*(signed char *)0xC7F4727) + 0x1);
                    (((struct o1_uchar *)0xC7F4727)->v) = 0x1;
                    (((struct o2_uchar *)0xC7F4727)->v) = 0x1;
                    t3 = 0x1;
                }
                t2 = t3;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        (((struct o0_uchar *)0xC7F4727)->v) = ((*(signed char *)0xC7F4727) + 0x1);
        (((struct o1_uchar *)0xC7F4727)->v) = 0x0;
        (((struct o2_uchar *)0xC7F4727)->v) = 0x0;
        (((struct oA_uchar *)0xC7F4727)->v) = 0x1;
        (((struct oB_uchar *)0xC7F4727)->v) = 0x0;
        (((struct oC_uchar *)0xC7F4727)->v) = 0x0;
        logo_spawn_overlay(1.0f);
        FUN_0c02c2d0(0x1);
        FUN_0c02c830(0x1);
        FUN_0c02c91a(0x0);
        t1 = *(signed char *)0xC7F4732;
        t2 = t1;
        if (t1 != 0) {
            t1 = *(signed char *)0xC7F4733;
            t3 = t1;
            if (t1 != 0) {
                (((struct o0_uchar *)0xC7F4727)->v) = ((*(signed char *)0xC7F4727) + 0x1);
                (((struct o1_uchar *)0xC7F4727)->v) = 0x1;
                (((struct o2_uchar *)0xC7F4727)->v) = 0x1;
                t3 = 0x1;
            }
            t2 = t3;
        }
        t0 = t2;
    }
    return t0;
}
