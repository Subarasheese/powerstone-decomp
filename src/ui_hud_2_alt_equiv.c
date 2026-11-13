/* HUD: init, gauges, combo and hit counter, win marks, per-frame draw dispatcher (0c02d9e0-0c02f328) */

/* named globals (symbols.txt) */
extern char g_hud_state[];
extern char g_res_font_model[];
extern void ui_sprite_queue_add(float *, int, int, int, int, int);
#define EF(off) (*(float *)(ind + (off)))
#define ES(off) (*(short *)(ind + (off)))

void ui_draw_sprite_string(signed char *str, int mode, float x_origin, float pos_y, float scale_x, float scale_y, float arg_z)
{
    float sprite[14];
    signed char *table;
    int idx, chr, glyph, j, chr_s;

    sprite[2] = pos_y;
    sprite[3] = arg_z;
    ((int *)sprite)[10] = 0;
    sprite[11] = 1.0f;
    ((int *)sprite)[13] = 5;
    sprite[4] = scale_x;
    sprite[5] = scale_y;
    idx = 0;
    switch ((signed char)mode) {
    case 0:
        while ((chr = str[idx]) != 0) {
            if (chr != 32 && chr != -1) {
                glyph = chr;
                table = (signed char *)0xC14935C;
                for (j = 0; j < 4; j++) {
                    if (chr == table[j]) {
                        glyph = j + 124;
                        break;
                    }
                }
                sprite[1] = x_origin + 16.0f * ((float)idx * scale_x);
                ui_sprite_queue_add(sprite, ((int)g_res_font_model), 0, (signed char)glyph - 32, 0, 0);
            }
            idx++;
        }
        break;
    case 1:
        while ((chr = str[idx]) != 0) {
            if (chr != 32 && chr != -1) {
                chr_s = (signed char)chr;
                if (chr_s >= 0x30 && chr_s <= 0x39) {
                    glyph = chr - 48;
                } else if (chr_s >= 0x41 && chr_s <= 0x5A) {
                    glyph = chr - 55;
                } else if (chr_s >= 0x61 && chr_s <= 0x7A) {
                    glyph = chr - 61;
                } else {
                    glyph = 0;
                    table = (signed char *)0xC149360;
                    for (j = 0; j < 18; j++)
                        if (str[idx] == table[j])
                            glyph = j + 62;
                }
                if ((signed char)glyph != 0 || (chr_s >= 0x30 && chr_s <= 0x39) || (chr_s >= 0x41 && chr_s <= 0x5A) || (chr_s >= 0x61 && chr_s <= 0x7A)) {
                    sprite[1] = x_origin + 16.0f * ((float)idx * scale_x);
                    ui_sprite_queue_add(sprite, ((int)g_res_font_model), 1, (signed char)glyph, 0, 0);
                }
            }
            idx++;
        }
        break;
    case 2:
        while ((chr = str[idx]) != 0) {
            if (chr != 32 && chr != -1) {
                chr_s = (signed char)chr;
                if (chr_s >= 0x30 && chr_s <= 0x39) {
                    glyph = chr - 48;
                } else if (chr_s >= 0x41 && chr_s <= 0x5A) {
                    glyph = chr - 55;
                } else if (chr_s >= 0x61 && chr_s <= 0x7A) {
                    glyph = chr - 61;
                } else {
                    glyph = 0;
                    table = (signed char *)0xC149372;
                    for (j = 0; j < 21; j++)
                        if (str[idx] == table[j])
                            glyph = j + 36;
                }
                if ((signed char)glyph != 0 || (chr_s >= 0x30 && chr_s <= 0x39) || (chr_s >= 0x41 && chr_s <= 0x5A) || (chr_s >= 0x61 && chr_s <= 0x7A)) {
                    sprite[1] = x_origin + 32.0f * ((float)idx * scale_x);
                    ui_sprite_queue_add(sprite, ((int)g_res_font_model), 2, (signed char)glyph, 0, 0);
                }
            }
            idx++;
        }
        break;
    case 4:
        while ((chr = str[idx]) != 0) {
            if (chr >= 0x30 && chr <= 0x39) {
                sprite[1] = x_origin + 32.0f * ((float)idx * scale_x);
                ui_sprite_queue_add(sprite, 0xC17FDB0, 0, (signed char)(chr - 48), 0, 0);
            }
            idx++;
        }
        break;
    default:
        break;
    }
}

void ui_update_hud_indicators(void)
{
    char *hud, *game, *ind, *pl;
    float sprite[14];
    float val, step_x, decay, depth_step;
    unsigned int decay_bits, depth_bits;
    int idx, icon_idx, side, row, icon, step_idx;
    int *icon_tbl;
    signed char cur_val;

    hud = (char *)g_hud_state;
    game = (char *)0xC7F2EE0;
    icon_tbl = (int *)0xC1493C4;
    decay_bits = 0x3EE66666;
    depth_bits = 0x3A83126E;
    decay = *(float *)&decay_bits;
    depth_step = *(float *)&depth_bits;

    for (idx = 0; idx < 2; idx++) {
        ind = hud + 0x434 + (signed char)(idx * 36);
        cur_val = *(signed char *)(0xC7F2E3F + (unsigned char)(idx * 120));
        ind[3] = cur_val;
        if (cur_val == ind[4])
            continue;
        if (ind[7] != 0)
            continue;
        ind[7] = 1;
        ind[2] = idx;
        ind[5] = 0;
        ind[0] = 1;
        pl = (char *)0xC7F2DF0 + (unsigned char)(idx * 120);
        for (icon_idx = 0; icon_idx < 5; icon_idx++) {
            if (*(signed char *)(pl + 80 + pl[79] - 1) == icon_tbl[icon_idx])
                break;
        }
        ind[6] = icon_idx;
    }

    for (row = 0; row < 2; row++) {
        ind = hud + 0x434 + (signed char)(row * 36);
        if (ind[0] != 0) {
            switch (ind[5]) {
            case 0:
                ind[5] = ind[5] + 1;
                EF(28) = 10.0f;
                EF(12) = 120.0f;
                ES(32) = *(short *)(0xC1493D8 + 2 * ind[6]);
                if (ind[2] == 0) {
                    EF(8) = 100.0f;
                    val = (float)ind[4] * 40.0f - EF(8);
                    val = val + 28.0f;
                } else {
                    EF(8) = 540.0f;
                    val = -((float)ind[4] * 40.0f) - EF(8);
                    val = val + 612.0f;
                }
                EF(16) = val / 20.0f;
                EF(20) = (-EF(12) + 120.0f) / 20.0f;
                break;
            case 1:
                if (*(int *)(game + 328) == 0) {
                    ES(32) = ES(32) - 1;
                    if (ES(32) == 0) {
                        ind[5] = ind[5] + 1;
                        ES(32) = 1;
                        ind[1] = 1;
                    }
                }
                break;
            case 2:
                if (*(int *)(game + 328) == 0) {
                    ES(32) = ES(32) - 1;
                    if (ES(32) == 0) {
                        ind[5] = ind[5] + 1;
                        ES(32) = 20;
                    }
                }
                break;
            case 3:
                if (*(int *)(game + 328) == 0) {
                    EF(8) = EF(8) + EF(16);
                    EF(28) = EF(28) - decay;
                    ES(32) = ES(32) - 1;
                    if (ES(32) == 0) {
                        ES(32) = 12;
                        ind[5] = ind[5] + 1;
                    }
                }
                break;
            case 4:
                if (*(int *)(game + 328) == 0) {
                    step_idx = ES(32);
                    EF(28) = EF(28) + ((float *)0xC1493E4)[12 - step_idx];
                    ES(32) = ES(32) - 1;
                    if (ES(32) == 0)
                        ind[5] = ind[5] + 1;
                }
                break;
            case 5:
                ind[4] = ind[3];
                ind[1] = 0;
                break;
            default:
                break;
            }
        }
        if (ind[1] != 0) {
            ((int *)sprite)[10] = *(int *)(ind + 24);
            sprite[11] = 1.0f;
            val = EF(28) * 1.0f;
            sprite[5] = val;
            sprite[4] = val;
            ((int *)sprite)[13] = 10;
            sprite[1] = EF(8);
            sprite[2] = EF(12) + *(float *)(hud + 4);
            sprite[3] = 1.0f + depth_step * (float)ind[2];
            ui_sprite_queue_add(sprite, 0xC17FDB0, 5, ind[6], 0, 0);
        }
    }

    step_x = 40.0f;
    ((int *)sprite)[10] = 0;
    sprite[11] = 1.0f;
    sprite[4] = 1.0f;
    sprite[5] = 1.0f;
    ((int *)sprite)[13] = 10;
    sprite[2] = *(float *)(hud + 4) + 120.0f;
    sprite[3] = 8.0f;
    sprite[1] = 28.0f;
    for (side = 0; side < 2; side++) {
        pl = (char *)0xC7F2DF0 + (unsigned char)(side * 120);
        ind = hud + 0x434 + (signed char)(side * 36);
        for (row = 0; row < ind[4]; row++) {
            for (icon = 0; icon < 5; icon++) {
                if (pl[80 + row] == icon_tbl[icon]) {
                    ui_sprite_queue_add(sprite, 0xC17FDB0, 5, icon, 0, 0);
                    sprite[1] = sprite[1] + step_x;
                }
            }
        }
        step_x = -step_x;
        sprite[1] = 612.0f;
    }
}
