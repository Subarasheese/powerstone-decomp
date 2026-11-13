/* ui_hud_draw.c: text, the round clock and the panels under the gauges (original file 0c02d9e0-0c02ee3c).
   A panel holds the fighter's name plate, the power stones it carries and, while it is powered up, the power meter. It slides
   in, changes when the fighter powers up (the stones close in, the plate goes out and comes back with the meter) and slides
   back when the power runs out. */
#include "game/ui/ui.h"

#define GLYPHS_MODE0 ((signed char *)0x0C14935C)       /* 4 characters drawn with glyphs 124-127 */
#define GLYPHS_MODE1 ((signed char *)0x0C149360)       /* 18 punctuation characters, glyphs 62-79 */
#define GLYPHS_MODE2 ((signed char *)0x0C149372)       /* 21 punctuation characters, glyphs 36-56 */
#define ROUND_TIME (g_game_state[33])                   /* seconds left */
#define CLOCK_STOPPED (g_game_state[34] > 20)
#define MATCH_KIND (g_game_work[56])                    /* 4: no time limit */
#define PANEL_IN_X ((float *)0x0C149388)                /* per side: where the plate rests */
#define PANEL_IN_X_POWER ((float *)0x0C149390)
#define PANEL_STONES_X ((float *)0x0C149398)
#define PANEL_POWER_X ((float *)0x0C1493A0)
#define POWER_PULSE_SPEED ((int *)0x0C1493A8)           /* by power_time / 600 */
#define POWER_PULSE_PAUSE ((signed char *)0x0C1493BC)
#define FIGHTER_STATE_INTRO 23

typedef struct PlateFrames {    /* 20 bytes, by (plate_kind * 2 + side) */
    int frame[2];
    float dz, dscale_x;         /* from the first sprite to the second */
    float z;
} PlateFrames;
#define PLATE_FRAMES ((char *)0x0C321198)

int fx_spawn_048074(int side);
float math_sin_angle16(int angle);

void ui_draw_text_stub(char *str, int mode, float x, float y, float scale_x, float scale_y)
{
    ui_draw_sprite_string(str, mode, x, y, scale_x, scale_y, 7.0f);
}

/* `str` in font `mode`: 0 the 16-pixel font (all of ASCII), 1 the 16-pixel and 2 the 32-pixel letters and digits, 4 the HUD
   digits; spaces and 0xFF are skipped */
void ui_draw_sprite_string(char *str, int mode, float x, float y, float scale_x, float scale_y, float z)
{
    UiSprite s;
    signed char *text = (signed char *)str;
    int i, c, glyph, j;

    s.y = y;
    s.z = z;
    s.rot = 0;
    s.alpha = 1.0f;
    s.layer = 5;
    s.scale_x = scale_x;
    s.scale_y = scale_y;
    i = 0;
    switch ((signed char)mode) {
    case 0:
        while ((c = text[i]) != 0) {
            if (c != ' ' && c != -1) {
                glyph = c;
                for (j = 0; j < 4; j++) {
                    if (c == GLYPHS_MODE0[j]) {
                        glyph = j + 124;
                        break;
                    }
                }
                s.x = x + 16.0f * ((float)i * scale_x);
                ui_sprite_queue_add(&s, g_res_font_model, 0, (signed char)glyph - 32, 0, 0);
            }
            i++;
        }
        break;
    case 1:
    case 2:
        while ((c = text[i]) != 0) {
            if (c != ' ' && c != -1) {
                if (c >= '0' && c <= '9') {
                    glyph = c - '0';
                } else if (c >= 'A' && c <= 'Z') {
                    glyph = c - 'A' + 10;
                } else if (c >= 'a' && c <= 'z') {
                    glyph = c - 'a' + 36;
                } else {
                    glyph = 0;
                    if ((signed char)mode == 1) {
                        for (j = 0; j < 18; j++)
                            if (text[i] == GLYPHS_MODE1[j])
                                glyph = j + 62;
                    } else {
                        for (j = 0; j < 21; j++)
                            if (text[i] == GLYPHS_MODE2[j])
                                glyph = j + 36;
                    }
                }
                if ((signed char)glyph != 0 || (c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
                    if ((signed char)mode == 1) {
                        s.x = x + 16.0f * ((float)i * scale_x);
                        ui_sprite_queue_add(&s, g_res_font_model, 1, (signed char)glyph, 0, 0);
                    } else {
                        s.x = x + 32.0f * ((float)i * scale_x);
                        ui_sprite_queue_add(&s, g_res_font_model, 2, (signed char)glyph, 0, 0);
                    }
                }
            }
            i++;
        }
        break;
    case 4:
        while ((c = text[i]) != 0) {
            if (c >= '0' && c <= '9') {
                s.x = x + 32.0f * ((float)i * scale_x);
                ui_sprite_queue_add(&s, g_res_cockpit, 0, (signed char)(c - '0'), 0, 0);
            }
            i++;
        }
        break;
    }
}

/* the round clock: two digits at the top, the ones rolling over each second; "infinite" without a time limit */
void FUN_0c02dc86(void)
{
    UiSprite s;
    HudClock *k = &g_hud_state.clock;
    int lo, hi;

    s.rot = 0;
    s.z = 8.0f;
    s.x = 320.0f;
    s.y = g_hud_state.layout[0] + 68.0f;
    s.layer = 13;
    s.alpha = 1.0f;
    if (MATCH_KIND == 4) {
        s.x = 320.0f;
        s.y = g_hud_state.layout[0] + 41.0f;
        s.z = 8.09999942f;
        s.scale_x = 1.0f;
        s.scale_y = 1.0f;
        s.layer = 10;
        ui_sprite_queue_add(&s, g_res_cockpit, 1, 11, 0, 0);
    } else {
        if (CLOCK_STOPPED && k->rolling != 0)
            k->rolling = 0;
        if (k->rolling == 0) {
            if (!CLOCK_STOPPED && ROUND_TIME != 0) {
                k->rolling = k->rolling + 1;
                k->timer = 20;
                k->last = ROUND_TIME;
            }
            lo = ROUND_TIME % 10;
            s.x = s.x - 2.0f;
            s.scale_y = 1.0f;
            s.scale_x = 1.0f;
            ui_sprite_queue_add(&s, g_res_cockpit, 1, lo, 0, 0);
            s.layer = 15;
            s.x = s.x + 4.0f;
            hi = ROUND_TIME / 10;
        } else {
            if (k->timer != 0) {
                if (GAME_PAUSED == 0)
                    k->timer = k->timer - 1;
                k->roll = (float)k->timer / 20.0f;
            }
            lo = ROUND_TIME % 10;
            s.scale_x = 1.0f;
            s.scale_y = k->roll;
            s.x = s.x - 2.0f;
            ui_sprite_queue_add(&s, g_res_cockpit, 1, lo, 0, 0);
            lo = lo == 0 ? 9 : lo - 1;
            s.y = -(k->roll * 48.0f) + g_hud_state.layout[0] + 68.0f;
            s.scale_y = -k->roll + 1.0f;
            ui_sprite_queue_add(&s, g_res_cockpit, 1, lo, 0, 0);
            s.y = g_hud_state.layout[0] + 68.0f;
            s.x = s.x + 4.0f;
            s.layer = 15;
            if (lo == 9) {          /* the tens roll too */
                hi = ROUND_TIME / 10;
                s.scale_y = k->roll;
                ui_sprite_queue_add(&s, g_res_cockpit, 1, hi, 0, 0);
                hi = hi == 0 ? 9 : hi - 1;
                s.y = -(k->roll * 48.0f) + g_hud_state.layout[0] + 68.0f;
                s.scale_y = -k->roll + 1.0f;
            } else {
                hi = ROUND_TIME / 10;
                s.scale_y = 1.0f;
            }
        }
        ui_sprite_queue_add(&s, g_res_cockpit, 1, hi, 0, 0);
    }
    s.x = 320.0f;
    s.y = g_hud_state.layout[0] + 41.0f;
    s.z = 8.09999942f;
    s.scale_x = 1.0f;
    s.scale_y = 1.0f;
    s.layer = 10;
    ui_sprite_queue_add(&s, g_res_cockpit, 1, 10, 0, 0);
}

/* slides the plate 10 a frame, outward (dir 1: done once outside lo..hi) or inward (done once inside); done: it rests at
   lo (left) or hi (right). Returns done. */
int FUN_0c02df98(HudPanel *p, int dir, float lo, float hi)
{
    float speed;
    int done = 0;

    if (p->side == 0)
        speed = -10.0f;
    else
        speed = 10.0f;
    if (dir == 1) {
        if (GAME_PAUSED == 0)
            p->x = p->x + speed;
        if (!(p->x > lo) || !(hi > p->x))
            done = 1;
    } else {
        if (GAME_PAUSED == 0)
            p->x = p->x - speed;
        if (!(lo > p->x) && !(p->x > hi))
            done = 1;
    }
    if (done != 0) {
        if (p->side == 0)
            p->x = lo;
        else
            p->x = hi;
    }
    return done;
}

/* the stones' glints restart, staggered */
void FUN_0c02e00a(HudPanel *p)
{
    p->glint_frame[2] = 0;
    p->glint_frame[1] = 0;
    p->glint_frame[0] = 0;
    p->glint_timer[0] = 300;
    p->glint_timer[1] = 308;
    p->glint_timer[2] = 316;
}

/* the stones close in, one pixel a frame, until their spacing crosses 0 */
void FUN_0c02e050(HudPanel *p)
{
    float d, old;

    if (p->spread == 0.0f)
        return;
    d = 1.0f;
    if (p->side == 0)
        d = -1.0f;
    old = p->spread;
    if (GAME_PAUSED == 0)
        p->spread = p->spread + d;
    if (((int)p->spread ^ (int)old) < 0)
        p->spread = 0.0f;
}

/* state 1: in place; on to the power change once the fighter is out of its intro pose */
void FUN_0c02e092(HudPanel *p)
{
    switch (p->step) {
    case 0:
        p->step++;
        p->x = PANEL_IN_X[p->side];
        p->y = 416.0f;
        p->stones_x = PANEL_STONES_X[p->side];
        p->spread = (float)(-(p->side << 1) + 1) * 44.0f;
        p->show_plate = 1;
        p->show_stones = 1;
        p->show_power = 0;
        FUN_0c02e00a(p);
        /* fall through */
    case 1:
        if (FIGHTER(p->side)->state_id == FIGHTER_STATE_INTRO && FIGHTER(p->side)->_00A == 0) {
            p->state++;
            p->step = 0;
        }
        break;
    }
}

/* state 2: the power change. The stones close in and flash, the plate goes out, the stones go, the plate comes back with
   the power meter. */
void FUN_0c02e144(HudPanel *p)
{
    switch (p->step) {
    case 0:
        p->step++;
        p->timer = 1;
        p->fx.mode = 1;
        *(short *)&p->fx.step = 0;
        break;
    case 1:
        FUN_0c02e050(p);
        if (GAME_PAUSED != 0)
            p->timer++;
        if (--p->timer == 0) {
            fx_spawn_048074(p->side);
            p->step++;
        }
        break;
    case 2:
        FUN_0c02e050(p);
        if (p->show_plate != 0 && FUN_0c02df98(p, 1, -200.0f, 808.0f)) {
            p->show_plate = 0;
            p->plate_kind = 1;
            p->y = 416.0f;
        }
        if ((float)p->show_plate + p->spread == 0.0f) {
            p->step++;
            p->timer = 10;
        }
        break;
    case 3:
        if (GAME_PAUSED != 0)
            p->timer++;
        if (--p->timer == 0) {
            p->step++;
            p->show_stones = 0;
            p->timer = 20;
        }
        break;
    case 4:
        if (GAME_PAUSED != 0)
            p->timer++;
        if (--p->timer == 0) {
            p->step++;
            p->show_plate = 1;
            p->show_power = 1;
            p->power_x = PANEL_POWER_X[p->side];
            p->fx.mode = 2;
            *(short *)&p->fx.step = 0;
        }
        break;
    case 5:
        if (FUN_0c02df98(p, 0, 0.0f, 608.0f)) {
            p->state = 3;
            p->step = 0;
        }
        break;
    }
}

/* state 3: powered up, until the fighter's flag drops */
void FUN_0c02e2bc(HudPanel *p)
{
    if (FIGHTER(p->side)->_71F3 == 0)
        p->state++;
}

/* state 4: the power is over. The plate goes out, comes back with the stones, and the panel is in state 1 again. */
void FUN_0c02e2da(HudPanel *p)
{
    switch (p->step) {
    case 0:
        if (FUN_0c02df98(p, 1, -200.0f, 808.0f)) {
            p->step++;
            p->timer = 20;
            p->show_plate = 0;
            p->show_power = 0;
            p->plate_kind = 0;
            p->y = 416.0f;
            p->stones_x = p->x + PANEL_STONES_X[p->side] - PANEL_IN_X[p->side];
            p->spread = (float)(-(p->side << 1) + 1) * 44.0f;
        }
        p->power_x = p->x + PANEL_POWER_X[p->side] - PANEL_IN_X_POWER[p->side];
        break;
    case 1:
        if (GAME_PAUSED != 0)
            p->timer++;
        if (--p->timer == 0) {
            p->step++;
            p->show_plate = 1;
            p->show_stones = 1;
            p->fx.mode = 0;
            *(short *)&p->fx.step = 0;
        }
        break;
    case 2:
        if (FUN_0c02df98(p, 0, 0.0f, 608.0f)) {
            p->state = 1;
            p->step = 0;
            p->timer = 20;
        }
        p->stones_x = p->x + PANEL_STONES_X[p->side] - PANEL_IN_X[p->side];
        break;
    }
}

/* one panel's state machine */
void FUN_0c02e438(HudPanel *p, char side)
{
    switch (p->state) {
    case 0:
        p->state++;
        p->step = 0;
        p->_06 = 0;
        p->side = side;
        p->plate_kind = 0;
        FUN_0c02e00a(p);
        p->fx.side = side;
        p->fx.mode = 0;
        *(short *)&p->fx.step = 0;
        FUN_0c02e092(p);
        break;
    case 1:
        FUN_0c02e092(p);
        break;
    case 2:
        FUN_0c02e144(p);
        break;
    case 3:
        FUN_0c02e2bc(p);
        break;
    case 4:
        FUN_0c02e2da(p);
        break;
    }
}

/* the effect under a panel's stones: they pulse while the fighter holds two or more (mode 0), blink and fade when it powers
   up (1), the power meter's mark pulses faster as the power runs out (2), then a wait (3) */
void ui_update_stone_effects(HudPanel *p)
{
    HudStoneFx *e = &p->fx;
    UiSprite s;
    float sn;
    int k, n, step;

    if (FIGHTER(e->side)->chara == 10)
        return;
    switch (e->mode) {
    case 0:
        switch (e->step) {
        case 0:
            if (FIGHTER(p->side)->stones < 2)
                return;
            e->step++;
            e->timer = 1;
            /* fall through */
        case 1:
            if (FIGHTER(p->side)->stones >= 2) {
                if (--e->timer != 0)
                    return;
                e->step++;
                e->alpha = 0.0f;
                e->angle = 0;
            } else {
                e->step = 0;
            }
            return;
        case 2:
            if (FIGHTER(p->side)->stones < 2) {
                e->step = 0;
                return;
            }
            if (GAME_PAUSED == 0)
                e->angle += 1024;
            s.scale_y = 1.0f;
            s.scale_x = 1.0f;
            s.z = 7.69999886f;
            s.y = g_hud_state.layout[1] + 436.0f;
            s.x = PANEL_STONES_X[e->side] - p->spread + g_hud_state.layout[2 + p->side] + 16.0f;
            s.rot = 0;
            s.layer = 10;
            s.alpha = sn = math_sin_angle16(e->angle);
            if (!(sn > 0.0f)) {
                e->step = 1;
                e->timer = 30;
            }
            if (g_save_options[5] != 0 && g_save_options[21] != 0) {
                for (n = 2; n != 0; n--) {
                    ui_sprite_queue_add(&s, g_res_cockpit, 4, 1, e->side, 0);
                    s.x = s.x + p->spread;
                }
            } else {
                for (k = 0; k < 3; k++) {
                    if (FIGHTER(p->side)->stone_bits & (1 << k))
                        ui_sprite_queue_add(&s, g_res_cockpit, 4, 1, e->side, 0);
                    s.x = s.x + p->spread;
                }
            }
            return;
        }
        return;
    case 1:
        switch (e->step) {
        case 0:
            e->step++;
            e->timer = 2;
            e->alpha = 1.0f;
            e->angle = 0;
            e->blink = 0;
            e->fade = 80;
            /* fall through */
        case 1:
            if (GAME_PAUSED == 0)
                e->angle += 2048;
            if (GAME_PAUSED != 0)
                e->timer++;
            if (--e->timer == 0) {
                e->timer = 2;
                e->blink ^= 1;
            }
            s.scale_y = 1.0f;
            s.scale_x = 1.0f;
            s.alpha = e->alpha;
            s.z = 7.69999886f;
            s.y = g_hud_state.layout[1] + 436.0f;
            s.x = PANEL_STONES_X[e->side] - p->spread + g_hud_state.layout[2 + e->side] + 16.0f;
            s.rot = 0;
            if (e->blink != 0)
                s.rot = e->angle;
            s.layer = 10;
            for (n = 3; n != 0; n--) {
                ui_sprite_queue_add(&s, g_res_cockpit, 4, e->blink, e->side, 0);
                s.x = s.x + p->spread;
            }
            if (GAME_PAUSED != 0)
                e->fade++;
            if (--e->fade <= 20)
                e->alpha = (float)e->fade / 20.0f;
            if (e->alpha == 0.0f)
                e->step++;
            return;
        }
        return;
    case 2:
        if (p->show_power == 0)
            e->step = 3;
        switch (e->step) {
        case 0:
            e->step++;
            e->timer = 40;
            /* fall through */
        case 1:
            if (GAME_PAUSED != 0)
                e->timer++;
            if (--e->timer != 0)
                return;
            e->step++;
            e->alpha = 0.0f;
            e->angle = 0;
            return;
        case 2:
            s.rot = 0;
            s.layer = 5;
            s.scale_y = 1.0f;
            s.scale_x = 1.0f;
            s.x = p->power_x + g_hud_state.layout[2 + p->side] + -16.0f;
            s.y = g_hud_state.layout[1] + 424.0f;
            s.z = 8.19999886f;
            step = FIGHTER(p->side)->power_time / 600;
            if (GAME_PAUSED == 0)
                e->angle += POWER_PULSE_SPEED[step];
            s.alpha = sn = math_sin_angle16(e->angle);
            if (!(sn > 0.0f)) {
                e->step = 1;
                e->timer = POWER_PULSE_PAUSE[step];
                return;
            }
            ui_sprite_queue_add(&s, g_res_cockpit, 4, 4, p->side, 0);
            return;
        }
        return;
    case 3:
        switch (e->step) {
        case 0:
            e->step++;
            *(short *)&e->blink = 600;
            /* fall through */
        case 1:
            if (GAME_PAUSED != 0)
                *(short *)&e->blink = *(short *)&e->blink + 1;
            *(short *)&e->blink = *(short *)&e->blink - 1;
            if (*(short *)&e->blink == 0)
                e->step++;
            return;
        }
        return;
    }
}

/* both panels: their state machines, then the plate, the stones (glinting) and the power meter, then the stone effects */
void FUN_0c02e998(void)
{
    UiSprite s;
    HudPanel *p;
    PlateFrames *pf;
    signed char side;
    int i, j;

    FUN_0c02e438(&g_hud_state.panel[0], 0);
    FUN_0c02e438(&g_hud_state.panel[1], 1);
    for (i = 0; i < 2; i++) {
        if (FIGHTER(i)->chara == 10)
            continue;
        p = (HudPanel *)((char *)g_hud_state.panel + (signed char)(i * 60));
        if (p->show_plate != 0) {
            pf = (PlateFrames *)(PLATE_FRAMES + (signed char)((p->plate_kind * 2 + i) * 20));
            s.rot = 0;
            s.alpha = 1.0f;
            s.layer = 5;
            s.scale_x = 1.0f;
            s.scale_y = 1.0f;
            s.x = p->x + g_hud_state.layout[2 + i];
            s.y = p->y + g_hud_state.layout[1];
            s.z = pf->z;
            ui_sprite_queue_add(&s, g_res_cockpit, 2, pf->frame[0], i, 0);
            s.z = s.z + pf->dz;
            s.scale_x = s.scale_x + pf->dscale_x;
            ui_sprite_queue_add(&s, g_res_cockpit, 2, pf->frame[1], i, 0);
        }
        if (p->show_stones != 0) {
            s.rot = 0;
            s.alpha = 1.0f;
            s.layer = 5;
            s.scale_x = 1.0f;
            s.scale_y = 1.0f;
            s.x = p->stones_x - p->spread + g_hud_state.layout[2 + p->side];
            s.y = g_hud_state.layout[1] + 424.0f;
            for (j = 0; j < 3; j++) {
                s.z = 7.79999924f;
                if (GAME_PAUSED != 0)
                    p->glint_timer[j] = p->glint_timer[j] + 1;
                p->glint_timer[j] = p->glint_timer[j] - 1;
                if (p->glint_timer[j] == 0) {
                    p->glint_frame[j] = (p->glint_frame[j] + 1) % 5;
                    p->glint_timer[j] = p->glint_frame[j] == 0 ? 300 : 4;
                }
                if (g_save_options[5] != 0 && g_save_options[21] != 0) {
                    if (FIGHTER(p->side)->stones > j) {
                        ui_sprite_queue_add(&s, g_res_cockpit, 2, 13, p->side, 0);
                        if (p->glint_frame[j] != 0) {
                            s.z = s.z - 0.0999999940f;
                            ui_sprite_queue_add(&s, g_res_cockpit, 2, p->glint_frame[j] + 7, p->side, 0);
                        }
                    } else {
                        ui_sprite_queue_add(&s, g_res_cockpit, 2, 12, p->side, 0);
                    }
                } else if (FIGHTER(p->side)->stone_bits & (1 << j)) {
                    ui_sprite_queue_add(&s, g_res_cockpit, 2, j + 13, p->side, 0);
                    if (p->glint_frame[j] != 0) {
                        s.z = s.z - 0.0999999940f;
                        ui_sprite_queue_add(&s, g_res_cockpit, 2, p->glint_frame[j] + 7, p->side, 0);
                    }
                } else {
                    ui_sprite_queue_add(&s, g_res_cockpit, 2, 12, p->side, 0);
                }
                s.x = s.x + p->spread;
            }
        }
        if (p->show_power != 0) {
            s.rot = 0;
            s.alpha = 1.0f;
            s.layer = 5;
            s.scale_x = 1.0f;
            s.scale_y = 1.0f;
            s.x = p->power_x + g_hud_state.layout[2 + p->side];
            s.y = g_hud_state.layout[1] + 432.0f;
            s.z = 8.29999924f;
            ui_sprite_queue_add(&s, g_res_cockpit, 2, 7, p->side, 0);
            s.rot = 0;
            s.alpha = 1.0f;
            if (p->side == 0) {
                s.layer = 5;
                s.x = p->power_x + 16.0f;
            } else {
                s.layer = 7;
                s.x = p->power_x + 144.0f;
            }
            s.x = s.x + g_hud_state.layout[2 + p->side];
            s.y = g_hud_state.layout[1] + 441.0f;
            s.z = 8.39999962f;
            s.scale_x = (float)FIGHTER(p->side)->power_time * 0.0533333309f / 8.0f;
            s.scale_y = 14.0f;
            side = p->side;
            ui_sprite_queue_add(&s, g_res_cockpit, 6, FIGHTER(side)->power_time / 600, p->side, 0);
            if (p->side != 0)
                s.x = s.x - s.scale_x * 8.0f;
            else
                s.x = s.x + s.scale_x * 8.0f;
            s.scale_x = (-(s.scale_x * 8.0f) + 128.0f) / 8.0f;
            s.y = g_hud_state.layout[1] + 441.0f;
            s.z = 8.5f;
            ui_sprite_queue_add(&s, g_res_cockpit, 6, 5, p->side, 0);
        }
    }
    ui_update_stone_effects(&g_hud_state.panel[0]);
    ui_update_stone_effects(&g_hud_state.panel[1]);
}
