/* HUD: init, gauges, combo and hit counter, win marks, per-frame draw dispatcher (0c02ff18-0c03148c) */

/* named globals (symbols.txt) */
extern char g_hit_counter_slots[];
extern char g_hud_state[];
extern char g_res_font_model[];
struct o0_float { float v; };
struct o18_float { char p[0x18]; float v; };
struct o4_float { char p[0x4]; float v; };
int FUN_0c02fffc(int, int, int, int);
int ui_draw_sprite_string(int, int, float, float, float, float, float);
int ui_project_world_to_screen(int, int, int, float);
int FUN_0c0555c4(void);
int FUN_0c0e6fe8(void);
int strlen(int);
struct vec3i { int w0, w1, w2; };
struct glyph_req { int field_00; float x, y, z; float size_x, size_y; int pad_24[4]; int field_40; float field_44; int pad_48; int field_52; };
extern void ui_sprite_queue_add(struct glyph_req *req, int tbl, int kind, int digit, int z1, int z2);
int FUN_0c02dc86(void);
int FUN_0c02e998(void);
int FUN_0c02ee3c(void);
int ui_update_hud_indicators(void);
int ui_draw_hud_cell_pair(void);
int FUN_0c02f98a(void);
int FUN_0c02ff18(void);
int ui_update_hit_counter(void);
int FUN_0c03082e(void);
int FUN_0c030920(void);
int FUN_0c03107e(void);

int FUN_0c0301d2(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t6;
    register int t8;
    register int t13;
    register int t15;
    register int t19;
    register int t22;
    register int t24;
    register int t27;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 1)) = a5;
    *(unsigned char *)(((int)stk + 2)) = (*(signed char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + ((int)g_hit_counter_slots)) + 0xB)));
    *(unsigned char *)(((int)stk + 3)) = 0x1;
    *(float *)(((int)stk + 4)) = ((((struct o18_float *)0xC030340)->v));
    *(float *)(((int)stk + 8)) = ((((struct o0_float *)0xC030340)->v));
    if ((*(signed char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + ((int)g_hit_counter_slots)) + 0x3))) == 0) {
        t6 = *(signed char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + ((int)g_hit_counter_slots)) + 0xA));
        t8 = (int)((unsigned int)((int)((unsigned int)t6 + (unsigned int)0x0)) + ((((int)0x0 > (int)t6)) ? 1u : 0u));
        *(unsigned int *)(((int)stk + 12)) = (*(int *)((((signed char)((((t8 >> 1) << 1) + (t8 >> 1)) << 2) + 0xC149290) + 0x8)));
        t13 = *(signed char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + ((int)g_hit_counter_slots)) + 0xA));
        t15 = (int)((unsigned int)((int)((unsigned int)t13 + (unsigned int)0x0)) + ((((int)0x0 > (int)t13)) ? 1u : 0u));
        t24 = (((t15 >> 1) << 1) + (t15 >> 1));
        t27 = 0xC149290;
    } else {
        t19 = *(signed char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + ((int)g_hit_counter_slots)) + 0xA));
        *(unsigned int *)(((int)stk + 12)) = (*(int *)((((signed char)(((t19 << 1) + t19) << 2) + 0xC1492F0) + 0x8)));
        t22 = *(signed char *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + ((int)g_hit_counter_slots)) + 0xA));
        t24 = ((t22 << 1) + t22);
        t27 = 0xC1492F0;
    }
    *(float *)(((int)stk + 16)) = ((((struct o4_float *)((t27 + (signed char)(t24 << 2))))->v));
    *(float *)(((int)stk + 20)) = 1.0f;
    *(float *)(((int)stk + 24)) = 1.0f;
    return (FUN_0c02fffc(((int)stk + 0), a5, ((signed char)((((a4 << 1) + a4) << 2) << 1) + ((int)g_hit_counter_slots)), a7));
}

int FUN_0c030aec(int a4, int a5, int a6, float f4)
{
    int stk[8];
    register int t0;
    register int t30;
    register int t6;
    register float u7;
    int t8;
    register float u9;
    register float u17;
    register float u24;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(float *)(((int)stk + 12)) = f4;
    *(unsigned char *)(((int)stk + 8)) = a6;
    t0 = FUN_0c0555c4();
    t30 = t0;
    if (t0 != 0) {
        *(volatile int *)(((int)stk + 16));
        FUN_0c0e6fe8();
        ui_project_world_to_screen((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x14), ((int)stk + 0), (*(float *)(((int)stk + 12))));
        t6 = strlen((*(int *)(((int)stk + 4))));
        u7 = *(float *)(((int)stk + 0));
        t8 = *(signed char *)(((int)stk + 8));
        if ((t8 != 0) && (t8 != 1)) {
            if (t8 != 2) {
            } else {
                u9 = (((float)t6 / 2.0f) * u7);
                *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - ((u9 * 32.0f)));
            }
        } else {
            u17 = (((float)t6 / 2.0f) * u7);
            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - ((u17 * 16.0f)));
        }
        u24 = *(float *)(((int)stk + 0));
        t30 = (ui_draw_sprite_string((*(int *)(((int)stk + 4))), (*(signed char *)(((int)stk + 8))), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))), u24, u24, 9.0f));
    }
    return t30;
}

void ui_draw_digit_string(struct vec3i *pos, char *text, float scale)
{
    struct glyph_req req;
    float adv_wide, adv_narrow;
    signed char ch;
    req.field_40 = 0;
    req.field_44 = 1.0f;
    req.size_x = scale;
    req.size_y = scale;
    req.field_52 = 10;
    *(struct vec3i *)&req.x = *pos;
    req.z = 9.0f;
    adv_wide = scale * 32.0f;
    adv_narrow = scale * 16.0f;
    while ((ch = *text++) != 0) {
        if (ch >= 48 && ch <= 51) {
            ch -= 48;
            ui_sprite_queue_add(&req, ((int)g_res_font_model), 2, ch, 0, 0);
            req.x += adv_wide;
        }
        if (ch >= 52 && ch <= 57) {
            ch -= 48;
            ui_sprite_queue_add(&req, ((int)g_res_font_model), 3, ch, 0, 0);
            req.x += adv_narrow;
        }
    }
}

void ui_draw_hud(void)
{
    if ((*(signed char *)g_hud_state) != 0) {
        FUN_0c030920();
        FUN_0c02f98a();
        FUN_0c02dc86();
        ui_draw_hud_cell_pair();
        ui_update_hud_indicators();
        FUN_0c02e998();
        FUN_0c02ee3c();
        ui_update_hit_counter();
        FUN_0c03082e();
        FUN_0c02ff18();
        if ((*(signed char *)0xC7F4769) == 0) {
            FUN_0c03107e();
    return;
        }
        return;
    }
}
