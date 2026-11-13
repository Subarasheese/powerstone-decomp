/* HUD: init, gauges, combo and hit counter, win marks, per-frame draw dispatcher (0c02ff18-0c03148c) */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int ui_sprite_queue_add(int, int, int, int, int, int);
struct o4_float { char p[0x4]; float v; };
int sprintf(char *, int, int, int, const char *, int);
void ui_draw_text_stub(const char *, int, float, float, float, float);
#define BUF ((char *)0xC7F36B8)
int FUN_0c0a3f30(int);
int FUN_0c0301d2(int, int, int, int);
int nlCalcPoint44(int, int);
int nlCalcPoint(int, int);
int FUN_0c0e1550(int);
int nlPopMatrix(int);
int FUN_0c0e19b0(int);
int thunk_FUN_0c062242(int);
struct o18_float { char p[0x18]; float v; };
extern int FUN_0c0e6fe8();
struct o0_uchar { unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0e6e5c(int);

int FUN_0c030832(int a4, int a5);

int FUN_0c02ff18(void)
{
    int stk[16];
    register int t7;
    register int t10;
    register int t18;
    register int t20;
    int t6;
    int t16;

    *(unsigned int *)(((int)stk + 48)) = 0x0;
    *(float *)(((int)stk + 20)) = ((((struct o0_float *)0xC030048)->v));
    *(float *)(((int)stk + 16)) = (((((struct o0_float *)0xC366A74)->v)) + ((((struct o8_float *)0xC030048)->v)));
    *(unsigned int *)(((int)stk + 60)) = 0x5;
    *(float *)(((int)stk + 24)) = 1.0f;
    *(float *)(((int)stk + 28)) = 1.0f;
    *(float *)(((int)stk + 12)) = ((((struct oC_float *)0xC030048)->v));
    *(float *)(((int)stk + 52)) = (((((struct o10_float *)0xC366A74)->v)) * 1.0f);
    t7 = 0x0;
    if (((*(signed char *)0xC7E40C8) == 0) && (t6 = *(signed char *)0xC7F2F08, t6 != 0)) {
        t7 = 0x1;
    }
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    t10 = *(signed char *)0xC7E40C8;
    ui_sprite_queue_add((((int)stk + 0) + 0x8), ((unsigned char)(((t10 << 1) + t10) << 2) + 0xC17FDC8), 0x0, (t7 + 0x1), 0x0, 0x0);
    *(float *)(((int)stk + 12)) = ((((struct o20_float *)0xC030048)->v));
    *(float *)(((int)stk + 52)) = (((((struct o14_float *)0xC366A74)->v)) * 1.0f);
    t18 = 0x0;
    if (((*(signed char *)0xC7EB398) == 0) && (t16 = *(signed char *)0xC7F2F08, t16 != 0)) {
        t18 = 0x1;
    }
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    t20 = *(signed char *)0xC7EB398;
    return (ui_sprite_queue_add((((int)stk + 0) + 0x8), ((unsigned char)(((t20 << 1) + t20) << 2) + 0xC17FDC8), 0x0, (t18 + 0x1), 0x0, 0x0));
}

int FUN_0c02fffc(int a4, int a5, int a6, int a7, float f4)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    u0 = 16.0f;
    if ((*(signed char *)((a4 + 0x3))) == 2) {
        u0 = 32.0f;
    }
    if ((*(signed char *)((a4 + 0x0))) == 0) {
        u1 = (((struct o4_float *)(a4))->v);
        u2 = u1;
        u2 = u2 + ((((struct o10_float *)(a4))->v)) * u0;
        u3 = (((-((float)(*(signed char *)((a4 + 0x2))) / (float)(*(signed char *)((a4 + 0x1))))) + 1.0f) * u2);
        return ((int (*)(int, int, int, int, float, float, float, float))(0xC0300AA))(a4, a5, a6, a7, (u1 - u3), u0, 1.0f, u1);
    }
    u1 = (((struct o4_float *)(a4))->v);
    u2 = (((struct o10_float *)(a4))->v);
    *(volatile signed char *)((a4 + 0x2));
    *(volatile signed char *)((a4 + 0x1));
    return ((int (*)(int, int, int, int, float, float, float, float, float))(0xC030092))(a4, a5, a6, a7, f4, u0, 1.0f, u1, (u0 * u2));
}

void ui_draw_hit_counter(int slot_idx, int max_value, int arg_c, int arg_d, float y_offset)
{
    char *slot_rec;
    int tens;
    float bar_pos;
    float y_lo, y_hi;

    slot_rec = (char *)0xC366A9C + (signed char)(slot_idx * 24);
    tens = slot_rec[9] / 10;
    bar_pos = (float)(signed char)slot_rec[8] * 112.0f / (float)(signed char)max_value;
    if ((signed char)slot_idx == 0) {
        *(float *)(slot_rec + 16) = bar_pos + -80.0f;
    } else {
        *(float *)(slot_rec + 16) = -bar_pos + 608.0f;
        if ((signed char)tens == 0)
            *(float *)(slot_rec + 16) = *(float *)(slot_rec + 16) + 32.0f;
    }
    y_hi = y_offset + 208.0f;
    y_lo = 224.0f - y_offset;
    if ((signed char)tens != 0) {
        sprintf(BUF, max_value, (signed char)tens, arg_d, (const char *)0xC149440, slot_rec[9]);
        ui_draw_text_stub(BUF, 4, *(float *)(slot_rec + 16), y_hi, 1.0f, 1.0f);
        ui_draw_text_stub((const char *)0xC149444, 1, *(float *)(slot_rec + 16) + 64.0f, y_lo, 1.0f, 1.0f);
    } else {
        sprintf(BUF, max_value, (signed char)tens, arg_d, (const char *)0xC149448, slot_rec[9]);
        ui_draw_text_stub(BUF, 4, *(float *)(slot_rec + 16), y_hi, 1.0f, 1.0f);
        ui_draw_text_stub((const char *)0xC149444, 1, *(float *)(slot_rec + 16) + 32.0f, y_lo, 1.0f, 1.0f);
    }
}

int FUN_0c03027e(int a4)
{
    register int t5;
    register int t8;

    *(unsigned char *)(((((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC366A9C) + 0x8) + 0x2)) = ((*(signed char *)(((((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC366A9C) + 0x8) + 0x1))) - 4);
    if ((int)(*(signed char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC366A9C) + 0xA))) < 0) {
        *(unsigned char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC366A9C) + 0xA)) = 0x63;
        t8 = 0x63;
    } else {
        t5 = *(signed char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC366A9C) + 0xA));
        t8 = t5;
        if ((int)t5 > (int)0xC) {
            *(unsigned char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC366A9C) + 0xA)) = 0xC;
            t8 = 0xC;
        }
    }
    return t8;
}

int FUN_0c0302b6(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC366A9C) + 0xA));
    if (t0 != 99) {
        if ((signed char)a4 == 0) {
            t1 = *(signed char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC366A9C) + 0xA));
            t2 = ((((int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u))) >> 1) + 0xB);
        } else {
            t1 = *(signed char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC366A9C) + 0xA));
            t2 = ((((int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u))) >> 1) + 0x21);
        }
        return FUN_0c0a3f30(t2);
    }
    return t0;
}

int FUN_0c0302fe(int a4, int a5, int a6, int a7)
{
    *(unsigned char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC366A9C) + 0xA)) = 0xE;
    return FUN_0c0301d2(a4, a5, ((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC366A9C), a7);
}

void FUN_0c03082e(void)
{
    
}

int FUN_0c030832(int a4, int a5)
{
    int stk[10];
    register int t0;
    register float u16;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = ((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0));
    FUN_0c0e19b0(0x0);
    FUN_0c0e1550(0x2);
    nlCalcPoint((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x1C));
    FUN_0c0e1550(0x3);
    nlCalcPoint44((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0xC));
    FUN_0c0e1550(0x1);
    nlPopMatrix(0x1);
    *(float *)(((*(int *)(((int)stk + 0))) + 0x0)) = (((((*(float *)(((int)stk + 12))) / (*(float *)(((int)stk + 24)))) + 1.0f) / 2.0f) * 640.0f);
    u16 = (((((*(float *)(((int)stk + 16))) / (*(float *)(((int)stk + 24)))) + 1.0f) / 2.0f) * 480.0f);
    u16 = -u16;
    (((struct o4_float *)((*(int *)(((int)stk + 0)))))->v) = (u16 + 480.0f);
    return 0x4;
}

int FUN_0c030920(void)
{
    int stk[4];

    register int R0;
    register int R3;
    register int R4;
    register int R5;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    FUN_0c030832((*(signed char *)0xC7E40C7), (((int)stk + 0) + 0x8));
    FUN_0c030832((*(signed char *)0xC7EB397), ((int)stk + 0));
    w0_2 = (((struct o0_float *)0xC030B90)->v);
    v0_0 = (0xC366A70);
    w0_1 = (w0_2);
    w0_0 = (((((struct o4_float *)0xC030B90)->v)));
    if (((*(float *)(((int)stk + 8))) > w0_2)) goto L_C030960;
    w0_2 = *(float *)(((int)stk + 12));
    w0_3 = (w0_2);
    if ((!(w0_2 > (((((struct o4_float *)(v0_0))->v)) + ((((struct o8_float *)0xC030B90)->v)))))) goto L_C030978;
    L_C030960:;
    if (((*(float *)(((int)stk + 0))) > w0_1)) goto L_C030986;
    w0_1 = *(float *)(((int)stk + 4));
    w0_3 = (w0_1);
    if ((w0_1 > (((((struct o4_float *)(v0_0))->v)) + ((((struct o8_float *)0xC030B90)->v))))) goto L_C030986;
    L_C030978:;
    if (((int)(*(signed char *)((v0_0 + 0x2))) <= 0)) goto L_C030998;
    *(unsigned char *)((v0_0 + 0x2)) = ((*(signed char *)((v0_0 + 0x2))) - 1);
    L_C030998:;
    w0_2 = (((struct oC_float *)0xC030B90)->v);
    w0_1 = (((struct o10_float *)0xC030B90)->v);
    v0_1 = *(signed char *)((v0_0 + 0x2));
    (((struct o14_float *)(v0_0))->v) = (((float)v0_1 / w0_1) + w0_2);
    w0_3 = (((struct o14_float *)0xC030B90)->v);
    w0_1 = (w0_1);
    w0_4 = (w0_3);
    w0_2 = (w0_2);
    FPUL_ = (v0_1);
    if ((w0_3 > (*(float *)(((int)stk + 8))))) goto L_C0309CE;
    w0_5 = *(float *)(((int)stk + 12));
    w0_3 = (w0_5);
    if ((!(w0_5 > (((((struct o4_float *)(v0_0))->v)) + ((((struct o8_float *)0xC030B90)->v)))))) goto L_C0309E6;
    L_C0309CE:;
    if ((w0_4 > (*(float *)(((int)stk + 0))))) goto L_C0309F4;
    w0_4 = *(float *)(((int)stk + 4));
    w0_3 = (w0_4);
    if ((w0_4 > (((((struct o4_float *)(v0_0))->v)) + ((((struct o8_float *)0xC030B90)->v))))) goto L_C0309F4;
    L_C0309E6:;
    if (((int)(*(signed char *)((v0_0 + 0x3))) <= 0)) goto L_C030A06;
    *(unsigned char *)((v0_0 + 0x3)) = ((*(signed char *)((v0_0 + 0x3))) - 1);
    L_C030A06:;
    (((struct o18_float *)(v0_0))->v) = (((float)(*(signed char *)((v0_0 + 0x3))) / w0_1) + w0_2);
    return 0x18;
    L_C0309F4:;
    v0_1 = *(signed char *)((v0_0 + 0x3));
    FPUL_ = (v0_1);
    if ((!(w0_0 > (float)v0_1))) goto L_C030A06;
    *(unsigned char *)((v0_0 + 0x3)) = ((*(signed char *)((v0_0 + 0x3))) + 0x1);
    goto L_C030A06;
    L_C030986:;
    v0_1 = *(signed char *)((v0_0 + 0x2));
    FPUL_ = (v0_1);
    if ((!(w0_0 > (float)v0_1))) goto L_C030998;
    *(unsigned char *)((v0_0 + 0x2)) = ((*(signed char *)((v0_0 + 0x2))) + 0x1);
    goto L_C030998;
}

int ui_project_world_to_screen(int a4, int a5, int a6, float f4)
{
    int stk[17];
    register float u7;
    register float u13;
    register float u14;
    register float u17;
    register float u20;

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(float *)(((int)stk + 0)) = f4;
    FUN_0c0e19b0(0x0);
    FUN_0c0e1550(0x2);
    nlCalcPoint((*(int *)(((int)stk + 8))), (((int)stk + 0) + 0x18));
    FUN_0c0e6fe8();
    u7 = (*(float *)(((int)stk + 12)));
    u7 = u7 + 1.0f * (*(float *)(((int)stk + 0)));
    *(float *)(((int)stk + 12)) = u7;
    FUN_0c0e1550(0x3);
    nlCalcPoint44((((int)stk + 0) + 0x18), (((int)stk + 0) + 0x34));
    nlCalcPoint44((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x24));
    FUN_0c0e1550(0x1);
    nlPopMatrix(0x1);
    u13 = (((struct o0_float *)0xC030BC0)->v);
    u14 = (((struct o4_float *)0xC030BC0)->v);
    *(float *)((a4 + 0x0)) = (((((*(float *)(((int)stk + 52))) / (*(float *)(((int)stk + 64)))) + 1.0f) / u14) * u13);
    u17 = (((struct o8_float *)0xC030BC0)->v);
    u20 = (((((*(float *)(((int)stk + 56))) / (*(float *)(((int)stk + 64)))) + 1.0f) / u14) * u17);
    u20 = -u20;
    (((struct o4_float *)(a4))->v) = (u20 + u17);
    (((struct o8_float *)(a4))->v) = ((((struct oC_float *)0xC030BC0)->v));
    *(float *)(((*(int *)(((int)stk + 4))) + 0x0)) = (((((((*(float *)(((int)stk + 36))) / (*(float *)(((int)stk + 48)))) + 1.0f) / u14) * u13)) - (*(float *)((a4 + 0x0))));
    return 0x24;
}

int FUN_0c03107e(void)
{
    int stk[20];
    register int t0;
    register int t6;
    register int t51;
    register int t53;
    int t54;
    register int t55;
    register int t7;
    register int t8;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t33;
    register int t35;
    register int t57;
    register int t58;
    register int t59;
    register int t60;
    register int t61;
    register int t89;
    register int t90;
    register int t91;
    register float t112;
    register int t113;
    register float u114;
    register float t116;
    register float u119;
    register float t121;
    register float u126;
    register float u127;
    register int t138;
    register int t183;
    register int t185;
    int t186;
    register int t187;
    register int t139;
    register int t140;
    register int t142;
    register int t143;
    register int t144;
    register int t145;
    register int t165;
    register int t167;
    register int t189;
    register int t190;
    register int t191;
    register int t192;
    register int t193;
    register int t221;
    register int t222;
    register int t223;
    register float t244;
    register int t245;
    register float u246;
    register float t248;
    register float u251;
    register float t253;
    register float u258;
    register float u259;
    register int t38;
    register int t41;
    register int t43;
    register int t44;
    register int t45;
    register int t9;
    register int t14;
    int t15;
    register int t36;
    int t20;
    register int t21;
    register int t29;
    register int t31;
    register int t32;
    register int t24;
    register int t25;
    register int t28;
    register float u62;
    register float u63;
    int t72;
    int t88;
    register int t107;
    register int t108;
    register int t170;
    register int t173;
    register int t175;
    register int t176;
    register int t177;
    register int t141;
    register int t146;
    int t147;
    register int t168;
    int t152;
    register int t153;
    register int t161;
    register int t163;
    register int t164;
    register int t156;
    register int t157;
    register int t160;
    register float u194;
    register float u195;
    int t204;
    int t220;
    register int t239;
    register int t240;

    t0 = *(signed char *)0xC366EEC;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if ((*(int *)0xC7F3028) != 0) {
            (((struct o10_uchar *)0xC366EEC)->v) = ((*(signed char *)0xC366EFC) + 0x1);
        }
        t6 = *(signed char *)0xC366EFC;
        (((struct o10_uchar *)0xC366EEC)->v) = (t6 - 1);
        t51 = (signed char)(t6 - 1);
        t53 = 0xC366EEC;
        t54 = 0x1;
        t55 = 0x3;
        if ((signed char)(t6 - 1) == 0) {
            t7 = *(signed char *)0xC366EFD;
            (((struct o11_uchar *)0xC366EEC)->v) = (t7 ^ 0x1);
            if ((signed char)(t7 ^ 0x1) == 0) {
                (((struct o10_uchar *)0xC366EEC)->v) = 0xA;
                t38 = 0xC366EFC;
                t41 = (signed char)(t7 ^ 0x1);
                t43 = 0xC366EEC;
                t44 = 0x1;
                t45 = 0x3;
            } else {
                (((struct o10_uchar *)0xC366EEC)->v) = 0x14;
                t8 = 0x10;
                t10 = 0xC366EEC;
                t11 = 0x1;
                t12 = 0x3;
                t13 = 0x0;
                for (;;) {
                    t29 = *(signed char *)((((t10 + 0xC) + t13) + 0x0));
                    t33 = t29;
                    t35 = t11;
                    if ((int)t29 > (int)t11) {
                        t8 = (*(signed char *)0xC7F4755);
                        if ((t8 != 0) && (t20 = (t8 == 0), t8 = 0x15, t21 = *(signed char *)((0xC7F4750 + t8)), t21 != 0)) {
                            *(unsigned char *)((((t10 + 0x4) + t13) + 0x0)) = 0x0;
                            t31 = t11;
                            t32 = t12;
                        } else {
                            t15 = 0x0;
                            for (;;) {
                                t14 = t10;
                                t14 = (t14 + 0x4);
                                t14 = (t14 + t13);
                                t9 = (*(signed char *)((t14 + 0x0)));
                                t9 = (t9 + 0x1);
                                t8 = t12;
                                t8 = (FUN_0c0e6e5c(t10));
                                t10 = t24;
                                t13 = t25;
                                *(unsigned char *)((t14 + 0x0)) = t8;
                                t9 = (*(signed char *)((((t10 + 0x4) + t13) + 0x0)));
                                if ((((*(signed char *)((((t24 + 0x8) + t25) + 0x0))) & ((int)0x1 << (int)t9)) == 0) && (t15 = (t15 + 0x1), t12 = t28, (int)t15 < (int)t28)) continue;
                                break;
                            }
                            t29 = ((int)0x1 << (int)t9);
                        }
                        t33 = t29;
                        t35 = t31;
                        t36 = t32;
                    } else {
                        t36 = t12;
                    }
                    t11 = t35;
                    t12 = t36;
                    t13 = (t13 + 0x1);
                    if ((int)t13 >= (int)0x4) {
                        break;
                    }
                }
                t38 = t9;
                t60 = t14;
                t61 = t15;
                t41 = t33;
                t43 = t10;
                t44 = t11;
                t45 = t12;
            }
            t57 = t38;
            t51 = t41;
            t53 = t43;
            t54 = t44;
            t55 = t45;
        }
        *(unsigned int *)((t53 + 0x8)) = 0x0;
        *(unsigned int *)((t53 + 0xC)) = 0x0;
        t58 = t51;
        t59 = 0x0;
        for (;;) {
            if ((int)t59 >= (int)((*(signed char *)0xC7F4765) + 0x3)) {
                break;
            }
            t61 = t59;
            t61 = (t61 << 2);
            t61 = (t61 + 0xC7F297C);
            t61 = (*(int *)((t61 + 0x0)));
            if ((t61 != 0) && (t72 = *(signed char *)((t61 + 0x1)), t72 != 0)) {
                u63 = 0.0f;
                u62 = ((((struct o20_float *)(t61))->v));
                t60 = 0x0;
                if (u63 > u62) {
                    t60 = 0x2;
                }
                u63 = 0.0f;
                u62 = ((((struct o28_float *)(t61))->v));
                if (u63 > u62) {
                    t60 = (t60 + 0x1);
                }
                t58 = t53;
                t61 = 0xC14948E;
                t58 = (t58 + 0x8);
                t57 = t54;
                t57 = ((int)t57 << (int)t59);
                t61 = (t61 + ((*(signed char *)0xC7F3051) << 2));
                t61 = (t61 + t60);
                t61 = (*(signed char *)((t61 + 0x0)));
                t58 = (t58 + t61);
                *(unsigned char *)((t58 + 0x0)) = ((*(signed char *)((t58 + 0x0))) | t57);
                t58 = t53;
                t58 = (t58 + 0xC);
                t61 = (t61 + t58);
                t57 = (*(signed char *)((t61 + 0x0)));
                t57 = (t57 + 0x1);
                *(unsigned char *)((t61 + 0x0)) = t57;
            }
            t59 = (t59 + 0x1);
        }
        if (((*(signed char *)0xC7F4755) != 0) && (t88 = *(signed char *)0xC7F4765, t88 != 0)) {
            *(unsigned char *)(((t53 + 0x4) + 0x3)) = 0x0;
            *(unsigned char *)(((t53 + 0x4) + 0x2)) = 0x0;
            *(unsigned char *)(((t53 + 0x4) + 0x1)) = 0x0;
            *(unsigned char *)(((t53 + 0x4) + 0x0)) = 0x0;
            t107 = (t53 + 0x4);
            t108 = t59;
        } else {
            t89 = 0x0;
            for (;;) {
                t90 = *(signed char *)((((t53 + 0x4) + t89) + 0x0));
                t91 = 0x0;
                for (;;) {
                    if ((((int)(*(signed char *)((((t53 + 0x8) + t89) + 0x0))) << (int)(-t91)) & t54) != 0) {
                        *(unsigned char *)((((t53 + 0x4) + t89) + 0x0)) = t91;
                    }
                    t91 = (t91 + 0x1);
                    if ((int)t91 >= (int)t55) {
                        break;
                    }
                }
                if ((int)(*(signed char *)((((t53 + 0xC) + t89) + 0x0))) > (int)t54) {
                    *(unsigned char *)((((t53 + 0x4) + t89) + 0x0)) = t90;
                }
                t89 = (t89 + 0x1);
                if ((int)t89 >= (int)0x4) {
                    break;
                }
            }
            t107 = t54;
            t108 = t89;
        }
        if ((*(signed char *)((t53 + 0x11))) != 0) {
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            *(unsigned int *)(((int)stk + 16)) = (t53 + 0x4);
            *(unsigned int *)(((int)stk + 12)) = 0xC1494BC;
            if ((*(signed char *)(((t53 + 0x8) + 0x0))) != 0) {
                t112 = math_cos_angle16((*(int *)0xC7F2B0C));
                t113 = *(int *)(((int)stk + 12));
                u114 = *(float *)((t113 + 0x0));
                *(float *)(((int)stk + 4)) = (t112 * u114);
                t116 = math_sin_angle16((*(int *)0xC7F2B0C));
                *(unsigned int *)(((int)stk + 20)) = (t113 + 0x4);
                u119 = (t116 * ((((struct o4_float *)(t113))->v)));
                *(float *)(((int)stk + 28)) = ((((t112 * u114)) - u119) + 320.0f);
                t121 = math_sin_angle16((*(int *)0xC7F2B0C));
                *(float *)(((int)stk + 4)) = t121;
                u126 = *(float *)((t113 + 0x0));
                u127 = ((math_cos_angle16((*(int *)0xC7F2B0C))) * (*(float *)(((*(int *)(((int)stk + 20))) + 0x0))));
                u127 = u127 + u126 * t121;
                *(float *)(((int)stk + 32)) = ((u127 + (*(float *)0xC366A78)) + 430.0f);
                *(float *)(((int)stk + 36)) = 8.0f;
                *(unsigned int *)(((int)stk + 76)) = 0xA;
                *(float *)(((int)stk + 68)) = 1.0f;
                *(unsigned int *)(((int)stk + 64)) = 0x0;
                *(float *)(((int)stk + 40)) = 0.75f;
                *(float *)(((int)stk + 44)) = 0.75f;
                *(int *)((int)stk + 4) = 0x0;
                *(int *)((int)stk + 0) = 0x0;
                return (ui_sprite_queue_add((((int)stk + 0) + 0x18), 0xC17FDB0, 0x2, ((*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))) + 0xD), 0x0, 0x0));
            }
            return ((int (*)(int, int, int, int))(0xC031322))(t53, t107, t55, t108);
        }
        return 0x11;
    }
    (((struct o0_uchar *)0xC366EEC)->v) = ((*(signed char *)0xC366EEC) + 0x1);
    (((struct o10_uchar *)0xC366EEC)->v) = 0x14;
    (((struct o11_uchar *)0xC366EEC)->v) = 0x1;
    if ((*(int *)0xC7F3028) != 0) {
        (((struct o10_uchar *)0xC366EEC)->v) = ((*(signed char *)0xC366EFC) + 0x1);
    }
    t138 = *(signed char *)0xC366EFC;
    (((struct o10_uchar *)0xC366EEC)->v) = (t138 - 1);
    t183 = (signed char)(t138 - 1);
    t185 = 0xC366EEC;
    t186 = 0x1;
    t187 = 0x3;
    if ((signed char)(t138 - 1) == 0) {
        t139 = *(signed char *)0xC366EFD;
        (((struct o11_uchar *)0xC366EEC)->v) = (t139 ^ 0x1);
        if ((signed char)(t139 ^ 0x1) == 0) {
            (((struct o10_uchar *)0xC366EEC)->v) = 0xA;
            t170 = 0xC366EFC;
            t173 = (signed char)(t139 ^ 0x1);
            t175 = 0xC366EEC;
            t176 = 0x1;
            t177 = 0x3;
        } else {
            (((struct o10_uchar *)0xC366EEC)->v) = 0x14;
            t140 = 0x10;
            t142 = 0xC366EEC;
            t143 = 0x1;
            t144 = 0x3;
            t145 = 0x0;
            for (;;) {
                t161 = *(signed char *)((((t142 + 0xC) + t145) + 0x0));
                t165 = t161;
                t167 = t143;
                if ((int)t161 > (int)t143) {
                    t140 = (*(signed char *)0xC7F4755);
                    if ((t140 != 0) && (t152 = (t140 == 0), t140 = 0x15, t153 = *(signed char *)((0xC7F4750 + t140)), t153 != 0)) {
                        *(unsigned char *)((((t142 + 0x4) + t145) + 0x0)) = 0x0;
                        t163 = t143;
                        t164 = t144;
                    } else {
                        t147 = 0x0;
                        for (;;) {
                            t146 = t142;
                            t146 = (t146 + 0x4);
                            t146 = (t146 + t145);
                            t141 = (*(signed char *)((t146 + 0x0)));
                            t141 = (t141 + 0x1);
                            t140 = t144;
                            t140 = (FUN_0c0e6e5c(t142));
                            t142 = t156;
                            t145 = t157;
                            *(unsigned char *)((t146 + 0x0)) = t140;
                            t141 = (*(signed char *)((((t142 + 0x4) + t145) + 0x0)));
                            if ((((*(signed char *)((((t156 + 0x8) + t157) + 0x0))) & ((int)0x1 << (int)t141)) == 0) && (t147 = (t147 + 0x1), t144 = t160, (int)t147 < (int)t160)) continue;
                            break;
                        }
                        t161 = ((int)0x1 << (int)t141);
                    }
                    t165 = t161;
                    t167 = t163;
                    t168 = t164;
                } else {
                    t168 = t144;
                }
                t143 = t167;
                t144 = t168;
                t145 = (t145 + 0x1);
                if ((int)t145 >= (int)0x4) {
                    break;
                }
            }
            t170 = t141;
            t192 = t146;
            t193 = t147;
            t173 = t165;
            t175 = t142;
            t176 = t143;
            t177 = t144;
        }
        t189 = t170;
        t183 = t173;
        t185 = t175;
        t186 = t176;
        t187 = t177;
    }
    *(unsigned int *)((t185 + 0x8)) = 0x0;
    *(unsigned int *)((t185 + 0xC)) = 0x0;
    t190 = t183;
    t191 = 0x0;
    for (;;) {
        if ((int)t191 >= (int)((*(signed char *)0xC7F4765) + 0x3)) {
            break;
        }
        t193 = t191;
        t193 = (t193 << 2);
        t193 = (t193 + 0xC7F297C);
        t193 = (*(int *)((t193 + 0x0)));
        if ((t193 != 0) && (t204 = *(signed char *)((t193 + 0x1)), t204 != 0)) {
            u195 = 0.0f;
            u194 = ((((struct o20_float *)(t193))->v));
            t192 = 0x0;
            if (u195 > u194) {
                t192 = 0x2;
            }
            u195 = 0.0f;
            u194 = ((((struct o28_float *)(t193))->v));
            if (u195 > u194) {
                t192 = (t192 + 0x1);
            }
            t190 = t185;
            t193 = 0xC14948E;
            t190 = (t190 + 0x8);
            t189 = t186;
            t189 = ((int)t189 << (int)t191);
            t193 = (t193 + ((*(signed char *)0xC7F3051) << 2));
            t193 = (t193 + t192);
            t193 = (*(signed char *)((t193 + 0x0)));
            t190 = (t190 + t193);
            *(unsigned char *)((t190 + 0x0)) = ((*(signed char *)((t190 + 0x0))) | t189);
            t190 = t185;
            t190 = (t190 + 0xC);
            t193 = (t193 + t190);
            t189 = (*(signed char *)((t193 + 0x0)));
            t189 = (t189 + 0x1);
            *(unsigned char *)((t193 + 0x0)) = t189;
        }
        t191 = (t191 + 0x1);
    }
    if (((*(signed char *)0xC7F4755) != 0) && (t220 = *(signed char *)0xC7F4765, t220 != 0)) {
        *(unsigned char *)(((t185 + 0x4) + 0x3)) = 0x0;
        *(unsigned char *)(((t185 + 0x4) + 0x2)) = 0x0;
        *(unsigned char *)(((t185 + 0x4) + 0x1)) = 0x0;
        *(unsigned char *)(((t185 + 0x4) + 0x0)) = 0x0;
        t239 = (t185 + 0x4);
        t240 = t191;
    } else {
        t221 = 0x0;
        for (;;) {
            t222 = *(signed char *)((((t185 + 0x4) + t221) + 0x0));
            t223 = 0x0;
            for (;;) {
                if ((((int)(*(signed char *)((((t185 + 0x8) + t221) + 0x0))) << (int)(-t223)) & t186) != 0) {
                    *(unsigned char *)((((t185 + 0x4) + t221) + 0x0)) = t223;
                }
                t223 = (t223 + 0x1);
                if ((int)t223 >= (int)t187) {
                    break;
                }
            }
            if ((int)(*(signed char *)((((t185 + 0xC) + t221) + 0x0))) > (int)t186) {
                *(unsigned char *)((((t185 + 0x4) + t221) + 0x0)) = t222;
            }
            t221 = (t221 + 0x1);
            if ((int)t221 >= (int)0x4) {
                break;
            }
        }
        t239 = t186;
        t240 = t221;
    }
    if ((*(signed char *)((t185 + 0x11))) != 0) {
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        *(unsigned int *)(((int)stk + 16)) = (t185 + 0x4);
        *(unsigned int *)(((int)stk + 12)) = 0xC1494BC;
        if ((*(signed char *)(((t185 + 0x8) + 0x0))) != 0) {
            t244 = math_cos_angle16((*(int *)0xC7F2B0C));
            t245 = *(int *)(((int)stk + 12));
            u246 = *(float *)((t245 + 0x0));
            *(float *)(((int)stk + 4)) = (t244 * u246);
            t248 = math_sin_angle16((*(int *)0xC7F2B0C));
            *(unsigned int *)(((int)stk + 20)) = (t245 + 0x4);
            u251 = (t248 * ((((struct o4_float *)(t245))->v)));
            *(float *)(((int)stk + 28)) = ((((t244 * u246)) - u251) + 320.0f);
            t253 = math_sin_angle16((*(int *)0xC7F2B0C));
            *(float *)(((int)stk + 4)) = t253;
            u258 = *(float *)((t245 + 0x0));
            u259 = ((math_cos_angle16((*(int *)0xC7F2B0C))) * (*(float *)(((*(int *)(((int)stk + 20))) + 0x0))));
            u259 = u259 + u258 * t253;
            *(float *)(((int)stk + 32)) = ((u259 + (*(float *)0xC366A78)) + 430.0f);
            *(float *)(((int)stk + 36)) = 8.0f;
            *(unsigned int *)(((int)stk + 76)) = 0xA;
            *(float *)(((int)stk + 68)) = 1.0f;
            *(unsigned int *)(((int)stk + 64)) = 0x0;
            *(float *)(((int)stk + 40)) = 0.75f;
            *(float *)(((int)stk + 44)) = 0.75f;
            *(int *)((int)stk + 4) = 0x0;
            *(int *)((int)stk + 0) = 0x0;
            return (ui_sprite_queue_add((((int)stk + 0) + 0x18), 0xC17FDB0, 0x2, ((*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))) + 0xD), 0x0, 0x0));
        }
        return ((int (*)(int, int, int, int))(0xC031322))(t185, t239, t187, t240);
    }
    return 0x11;
}

int FUN_0c031388(void)
{
    int stk[16];
    register int t6;

    if ((*(signed char *)0xC7F4769) != 0) {
        *(float *)(((int)stk + 12)) = ((((struct o0_float *)0xC031440)->v));
        *(float *)(((int)stk + 16)) = 0.0f;
        *(float *)(((int)stk + 20)) = ((((struct o4_float *)0xC031440)->v));
        *(unsigned int *)(((int)stk + 48)) = 0x0;
        *(float *)(((int)stk + 52)) = 1.0f;
        *(float *)(((int)stk + 24)) = ((((struct o8_float *)0xC031440)->v));
        *(float *)(((int)stk + 28)) = ((((struct oC_float *)0xC031440)->v));
        *(unsigned int *)(((int)stk + 60)) = 0x6;
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x0;
        t6 = (ui_sprite_queue_add((((int)stk + 0) + 0x8), 0xC17FDB0, 0xD, 0x0, 0x0, 0x0));
    }
    return t6;
}
