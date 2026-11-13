/* HUD: init, gauges, combo and hit counter, win marks, per-frame draw dispatcher (0c02ff18-0c03148c) */

/* named globals (symbols.txt) */
int FUN_0c03107e(void);
int FUN_0c02fffc(int a4, int a5, int a6, int a7, float f4);
extern char g_hit_counter_slots[];
extern char g_hud_state[];
extern char g_res_cockpit_faces[];
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
    ui_sprite_queue_add((((int)stk + 0) + 0x8), ((unsigned char)(((t10 << 1) + t10) << 2) + ((int)g_res_cockpit_faces)), 0x0, (t7 + 0x1), 0x0, 0x0);
    *(float *)(((int)stk + 12)) = ((((struct o20_float *)0xC030048)->v));
    *(float *)(((int)stk + 52)) = (((((struct o14_float *)0xC366A74)->v)) * 1.0f);
    t18 = 0x0;
    if (((*(signed char *)0xC7EB398) == 0) && (t16 = *(signed char *)0xC7F2F08, t16 != 0)) {
        t18 = 0x1;
    }
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    t20 = *(signed char *)0xC7EB398;
    return (ui_sprite_queue_add((((int)stk + 0) + 0x8), ((unsigned char)(((t20 << 1) + t20) << 2) + ((int)g_res_cockpit_faces)), 0x0, (t18 + 0x1), 0x0, 0x0));
}


void ui_draw_hit_counter(int slot_idx, int max_value, int arg_c, int arg_d, float y_offset)
{
    char *slot_rec;
    int tens;
    float bar_pos;
    float y_lo, y_hi;

    slot_rec = (char *)g_hit_counter_slots + (signed char)(slot_idx * 24);
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

    *(unsigned char *)(((((signed char)((((a4 << 1) + a4) << 2) << 1) + ((int)g_hit_counter_slots)) + 0x8) + 0x2)) = ((*(signed char *)(((((signed char)((((a4 << 1) + a4) << 2) << 1) + ((int)g_hit_counter_slots)) + 0x8) + 0x1))) - 4);
    if ((int)(*(signed char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + ((int)g_hit_counter_slots)) + 0xA))) < 0) {
        *(unsigned char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + ((int)g_hit_counter_slots)) + 0xA)) = 0x63;
        t8 = 0x63;
    } else {
        t5 = *(signed char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + ((int)g_hit_counter_slots)) + 0xA));
        t8 = t5;
        if ((int)t5 > (int)0xC) {
            *(unsigned char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + ((int)g_hit_counter_slots)) + 0xA)) = 0xC;
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

    t0 = *(signed char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + ((int)g_hit_counter_slots)) + 0xA));
    if (t0 != 99) {
        if ((signed char)a4 == 0) {
            t1 = *(signed char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + ((int)g_hit_counter_slots)) + 0xA));
            t2 = ((((int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u))) >> 1) + 0xB);
        } else {
            t1 = *(signed char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + ((int)g_hit_counter_slots)) + 0xA));
            t2 = ((((int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u))) >> 1) + 0x21);
        }
        return FUN_0c0a3f30(t2);
    }
    return t0;
}

int FUN_0c0302fe(int a4, int a5, int a6, int a7)
{
    *(unsigned char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + ((int)g_hit_counter_slots)) + 0xA)) = 0xE;
    return FUN_0c0301d2(a4, a5, ((signed char)((((a4 << 1) + a4) << 2) << 1) + ((int)g_hit_counter_slots)), a7);
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
    v0_0 = (((int)g_hud_state));
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
