/* PSTONE LOGO bank objects and logo screens (0c02b0dc-0c02b884) */

/* named globals (symbols.txt) */
extern char g_res_pstone_logo[];
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
struct o0_float { float v; };
struct o0_int { int v; };
struct o18_float { char p[0x18]; float v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int ui_draw_text_stub(int, int, float, float, float, float);
int FUN_0c0a3f30(int);
float math_sin_angle16(int);
struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
int ui_fade_start(int, int, int, int);

int FUN_0c02b0dc(void);
int FUN_0c02b724(void);
int FUN_0c02b7d4(int a4);

int FUN_0c02b0dc(void)
{
    register int t0;
    register int t8;

    t0 = obj_create(0x5, 0x1, 0x1, 1);
    t8 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC02AFC4;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o28_float *)(t0))->v) = -150.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((int)g_res_pstone_logo), 0x2);
        (((struct o1C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.5f;
        (((struct o20_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.5f;
        t8 = 0x20;
    }
    return t8;
}

int FUN_0c02b164(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
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
            t1 = *(signed char *)((a4 + 0xA));
            switch (t1) {
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
            t1 = (((struct o2E4_int *)(a4))->v);
            *(unsigned int *)((t1 + 0x18)) = ((*(int *)((t1 + 0x18))) - 0x20B6);
            t1 = 0x2E4;
        } else {
            if (t0 == 3) {
                t2 = *(signed char *)((a4 + 0xA));
                switch (t2) {
                case 0:
                    t2 = (((struct o2E4_int *)(a4))->v);
                    *(unsigned int *)((t2 + 0x18)) = ((*(int *)((t2 + 0x18))) - (int)(((float)((((struct oEC_short *)(a4))->v)) * 65536.0f) / 360.0f));
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    if (((((struct oEC_short *)(a4))->v)) != 0) {
                    } else {
                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                        (((struct oEC_ushort *)(a4))->v) = 0x14;
                    }
                    break;
                case 1:
                    t2 = (((struct o2E4_int *)(a4))->v);
                    *(unsigned int *)((t2 + 0x18)) = ((*(int *)((t2 + 0x18))) + 0x444);
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    if (((((struct oEC_short *)(a4))->v)) == 0) {
                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                        (((struct oEC_ushort *)(a4))->v) = 0x14;
                    }
                    break;
                case 2:
                    t2 = (((struct o2E4_int *)(a4))->v);
                    *(unsigned int *)((t2 + 0x18)) = ((*(int *)((t2 + 0x18))) - 0x444);
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    if (((((struct oEC_short *)(a4))->v)) == 0) {
                        *(unsigned char *)((a4 + 0xA)) = 0x1;
                        (((struct oEC_ushort *)(a4))->v) = 0x14;
                    }
                    break;
                }
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 2.0f);
                t2 = 0x24;
                if (64.0f > ((((struct o24_float *)(a4))->v))) {
                } else {
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                    (((struct o24_float *)(a4))->v) = 64.0f;
                    *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned short *)((((((struct o2EC_int *)(a4))->v)) + 0x2)) = 0x411;
                    (((struct o40_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 0.5f;
                    *(unsigned int *)((((((struct o2EC_int *)(a4))->v)) + 0x10)) = 0x4000;
                    t2 = 0x2EC;
                }
                t3 = t2;
            } else {
                t2 = t0;
                if (t0 == 4) {
                    t0 = *(signed char *)((a4 + 0xA));
                    switch (t0) {
                    case 0:
                        t0 = (((struct o2E4_int *)(a4))->v);
                        *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) - (int)(((float)((((struct oEC_short *)(a4))->v)) * 65536.0f) / 360.0f));
                        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                        if (((((struct oEC_short *)(a4))->v)) != 0) {
                        } else {
                            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                            (((struct oEC_ushort *)(a4))->v) = 0x14;
                        }
                        break;
                    case 1:
                        t0 = (((struct o2E4_int *)(a4))->v);
                        *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) + 0x444);
                        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                        if (((((struct oEC_short *)(a4))->v)) == 0) {
                            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                            (((struct oEC_ushort *)(a4))->v) = 0x14;
                        }
                        break;
                    case 2:
                        t0 = (((struct o2E4_int *)(a4))->v);
                        *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) - 0x444);
                        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                        if (((((struct oEC_short *)(a4))->v)) == 0) {
                            *(unsigned char *)((a4 + 0xA)) = 0x1;
                            (((struct oEC_ushort *)(a4))->v) = 0x14;
                        }
                        break;
                    }
                    t0 = *(signed char *)0xC7F2F08;
                    if (((unsigned char)t0 != 0) && (((unsigned char)t0 != 1) && (((unsigned char)t0 != 2) && ((unsigned char)t0 != 3)))) {
                        ui_draw_text_stub(((((struct o4_int *)0xC321170)->v)), 0x0, 86.0f, ((((struct o4_float *)0xC02B7EC)->v)), ((((struct o0_float *)0xC02B7EC)->v)), 1.0f);
                        ui_draw_text_stub(0xC1490B0, 0x0, ((((struct o8_float *)0xC02B7EC)->v)), ((((struct o4_float *)0xC02B7EC)->v)), 1.0f, 1.0f);
                        t0 = ((((struct o8_int *)0xC321170)->v));
                        u0 = ((((struct o0_float *)0xC02B7EC)->v));
                    } else {
                        t0 = ((((struct o0_int *)0xC321170)->v));
                        u0 = 0.75f;
                    }
                    ui_draw_text_stub(t0, 0x0, 86.0f, 432.0f, u0, 1.0f);
                    ui_draw_text_stub(0xC1490B0, 0x0, ((((struct o8_float *)0xC02B7EC)->v)), 432.0f, 1.0f, 1.0f);
                    t0 = (((struct o2EC_int *)(a4))->v);
                    *(unsigned int *)((t0 + 0x10)) = (unsigned short)((*(int *)((t0 + 0x10))) + 0x444);
                    t0 = (((struct o2EC_int *)(a4))->v);
                    u0 = ((((struct o18_float *)0xC02B7EC)->v));
                    u0 = u0 + ((((struct o1C_float *)0xC02B7EC)->v)) * (math_sin_angle16((*(int *)((t0 + 0x10)))));
                    (((struct o40_float *)(t0))->v) = u0;
                    t2 = 0xC02B808;
                }
                t3 = t2;
            }
            t1 = t3;
        }
        return t1;
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

int FUN_0c02b724(void)
{
    register int t0;
    register int t9;
    register int t1;
    register int t2;
    register int t8;

    t0 = obj_create(0x5, 0x1, 0x4, 0);
    t9 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC02B164;
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
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t2) + 0x0))) + 0x0)) = 0x1;
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t2) + 0x0))) + 0x1)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t2) + 0x0))) + 0x2)) = 0x1F;
            t8 = FUN_0c06233a((*(int *)((((0x2E0 + t0) + t2) + 0x0))), ((int)g_res_pstone_logo), (*(int *)((t2 + 0xC1490B4))));
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x4);
            if ((int)t1 >= (int)0x4) {
                break;
            }
        }
        t9 = t8;
    }
    return t9;
}

int FUN_0c02b7d4(int a4)
{
    register int t0;

    t0 = *(int *)((((a4 & 0x7) << 2) + 0xC1490C4));
    (((struct o8_uint *)0xC7F31BC)->v) = t0;
    (((struct o4_uint *)0xC7F31BC)->v) = t0;
    (((struct o0_uint *)0xC7F31BC)->v) = t0;
    return 0xC1490C4;
}

int FUN_0c02b828(void)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE8;
    if ((unsigned char)t0 != 0) {
        
        return (unsigned char)t0;
    }
    (((struct o0_uchar *)0xC7F2EE8)->v) = ((*(signed char *)0xC7F2EE8) + 0x1);
    (((struct o2_uchar *)0xC7F2EE8)->v) = 0x0;
    (((struct o1_uchar *)0xC7F2EE8)->v) = 0x0;
    (((struct o10_ushort *)0xC7F2EE8)->v) = 0x0;
    (((struct oE_ushort *)0xC7F2EE8)->v) = 0x0;
    (((struct oC_ushort *)0xC7F2EE8)->v) = 0x0;
    FUN_0c02b0dc();
    FUN_0c02b724();
    FUN_0c02b7d4(0x0);
    return ui_fade_start(0xFFFFFFFF, 0x0, 0x0, 0x3C);
}
