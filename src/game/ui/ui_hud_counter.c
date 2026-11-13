/* ui_hud_counter.c: the fighters' faces on the gauges and the hit counter pop-up (original file 0c02ff18-0c03082e).
   A combo of two hits or more pops up "N HITS" at the player's side; when it ends a message rates it (by hits) and a voice
   says it. */
#include "game/ui/ui.h"

#define FACE_LAYOUT ((float *)0x0C030048)         /* [0] z, [2] y, [3] left x, [8] right x */
#define HIT_ZOOM ((float *)0x0C149414)            /* zoom of the count by pop-in step */
#define HIT_MESSAGES ((char *)0x0C149290)         /* 12 bytes each: +4 width, +8 text */
#define HIT_MESSAGES_B ((char *)0x0C1492F0)
#define MSG_POS ((float *)0x0C030340)             /* [0] y, [6] x */
#define FACE_ALT_FLAG (*(signed char *)0x0C7F2F08)

typedef struct HudMessage {     /* a sliding text, built on the stack */
    signed char side;           /* 0 slides in from the left, 1 from the right */
    signed char frames;
    signed char t;              /* frames done */
    signed char kind;           /* text style; 2 = wide */
    float x, y;
    char *text;
    float width;
    float scale_x, scale_y;
} HudMessage;

int sprintf(char *buf, const char *fmt, ...);
extern char g_dbg_text_buf[];
extern char g_hit_fmt_2d[], g_hit_text[], g_hit_fmt_d[];     /* "%2d", "HIT", "%d" */
int FUN_0c0555c4(void);
int FUN_0c0a3f30(int voice);

/* the two faces; Falcon (character 0) shows his other face while FACE_ALT_FLAG is set */
void FUN_0c02ff18(void)
{
    struct { int a, b; UiSprite s; } f;
    int alt;

    f.s.rot = 0;
    f.s.z = FACE_LAYOUT[0];
    f.s.y = g_hud_state.layout[0] + FACE_LAYOUT[2];
    f.s.layer = 5;
    f.s.scale_x = 1.0f;
    f.s.scale_y = 1.0f;
    f.s.x = FACE_LAYOUT[3];
    f.s.alpha = g_hud_state.layout[3] * 1.0f;
    alt = 0;
    if (g_players[0].chara == 0 && FACE_ALT_FLAG != 0)
        alt = 1;
    f.b = 0;
    f.a = 0;
    ui_sprite_queue_add(&f.s, (int *)((char *)g_res_cockpit_faces + (unsigned char)(g_players[0].chara * 12)), 0, alt + 1, 0, 0);
    f.s.x = FACE_LAYOUT[8];
    f.s.alpha = g_hud_state.layout[4] * 1.0f;
    alt = 0;
    if (g_players[1].chara == 0 && FACE_ALT_FLAG != 0)
        alt = 1;
    f.b = 0;
    f.a = 0;
    ui_sprite_queue_add(&f.s, (int *)((char *)g_res_cockpit_faces + (unsigned char)(g_players[1].chara * 12)), 0, alt + 1, 0, 0);
}

/* draws a message sliding in: at t = 0 it is off the screen on its side, at t = frames at x */
void ui_hud_slide_text(HudMessage *m)
{
    float cw, k, x;

    cw = m->kind == 2 ? 32.0f : 16.0f;
    if (m->side == 0) {
        k = -((float)m->t / (float)m->frames) + 1.0f;
        x = m->x - k * (m->x + m->width * cw);
    } else {
        k = -((float)m->t / (float)m->frames) + 1.0f;
        x = (-m->x - cw * m->width) + (cw * m->width + m->x) * k + 640.0f;
    }
    ui_draw_text_stub(m->text, m->kind, x, m->y, m->scale_x, m->scale_y);
}

/* "N HIT(S)" for a player, sliding with the pop-in (`steps` of it) and lifted by y_offset */
void ui_draw_hit_counter(int slot, int steps, float y_offset)
{
    HudHitCounter *h = (HudHitCounter *)((char *)g_hud_state.hit + (signed char)(slot * 24));
    signed char tens = h->count / 10;
    float bar;
    float y_hi, y_lo;

    bar = (float)h->zoom * 112.0f / (float)(signed char)steps;
    if ((signed char)slot == 0) {
        h->x = bar + -80.0f;
    } else {
        h->x = -bar + 608.0f;
        if (tens == 0)
            h->x = h->x + 32.0f;
    }
    y_hi = y_offset + 208.0f;
    y_lo = 224.0f - y_offset;
    if (tens != 0) {
        sprintf(g_dbg_text_buf, g_hit_fmt_2d, h->count);
        ui_draw_text_stub(g_dbg_text_buf, 4, h->x, y_hi, 1.0f, 1.0f);
        ui_draw_text_stub(g_hit_text, 1, h->x + 64.0f, y_lo, 1.0f, 1.0f);
    } else {
        sprintf(g_dbg_text_buf, g_hit_fmt_d, h->count);
        ui_draw_text_stub(g_dbg_text_buf, 4, h->x, y_hi, 1.0f, 1.0f);
        ui_draw_text_stub(g_hit_text, 1, h->x + 32.0f, y_lo, 1.0f, 1.0f);
    }
}

/* the message after a combo (or message 14 while the other message runs) */
void FUN_0c0301d2(int slot, int frames)
{
    HudHitCounter *h = (HudHitCounter *)((char *)g_hud_state.hit + (signed char)(slot * 24));
    HudMessage m;
    char *e;

    m.side = slot;
    m.frames = frames;
    m.t = h->fade;
    m.kind = 1;
    m.x = MSG_POS[6];
    m.y = MSG_POS[0];
    if (h->shown == 0)
        e = HIT_MESSAGES + (signed char)(h->rating / 2 * 12);
    else
        e = HIT_MESSAGES_B + (signed char)(h->rating * 12);
    m.text = *(char **)(e + 8);
    m.width = *(float *)(e + 4);
    m.scale_x = 1.0f;
    m.scale_y = 1.0f;
    ui_hud_slide_text(&m);
}

/* the rating of a finished combo: its hits minus 4, at most 12; 99 under 4 hits (no message) */
int FUN_0c03027e(int slot)
{
    HudHitCounter *h = (HudHitCounter *)((char *)g_hud_state.hit + (signed char)(slot * 24));

    h->rating = h->count - 4;
    if (h->rating < 0) {
        h->rating = 99;
        return 99;
    }
    if (h->rating > 12) {
        h->rating = 12;
        return 12;
    }
    return h->rating;
}

/* the voice of the rating, one set per side */
void FUN_0c0302b6(int slot)
{
    HudHitCounter *h = (HudHitCounter *)((char *)g_hud_state.hit + (signed char)(slot * 24));

    if (h->rating == 99)
        return;
    if ((signed char)slot == 0)
        FUN_0c0a3f30(h->rating / 2 + 11);
    else
        FUN_0c0a3f30(h->rating / 2 + 33);
}

void FUN_0c0302fe(int slot, int frames)
{
    HudHitCounter *h = (HudHitCounter *)((char *)g_hud_state.hit + (signed char)(slot * 24));

    h->rating = 14;
    FUN_0c0301d2(slot, frames);
}

/* per frame: start, count, rate and fade the hit counter of each player */
void ui_update_hit_counter(void)
{
    int i;
    HudHitCounter *h;
    Fighter *pl;
    float zoom;

    if (FUN_0c0555c4() == 0)
        return;
    for (i = 0; (signed char)i < 2; i++) {
        h = &g_hud_state.hit[i];
        pl = FIGHTER(i);
        switch (h->mode) {
        case 0:
            if (pl->combo_count >= 2) {
                h->mode = 2;
                h->step = 0;
                h->shown = 0;
                h->count = pl->combo_count;
                h->restart = 0;
            } else if (pl->combo_flag != 0) {
                h->mode = 3;
                h->step = 0;
            }
            break;
        case 2:
            if (pl->combo_count < 2)
                h->restart = 1;
            if (pl->combo_count != 0 && h->restart != 0) {
                if (!(pl->combo_count > 1)) {
                    h->mode = 0;
                    return;
                }
                h->step = 0;
                h->count = pl->combo_count;
                h->restart = 0;
            }
            switch (h->step) {
            case 0:
                h->step = h->step + 1;
                h->zoom = 0;
                h->timer = 30;
            case 1:
                if (!GAME_PAUSED)
                    h->zoom = h->zoom + 1;
                if (h->zoom >= 10) {
                    h->step = h->step + 1;
                    h->timer = 30;
                }
                goto count;
            case 2:
                if (!GAME_PAUSED)
                    h->zoom = h->zoom - 1;
                if (!(h->zoom > 8)) {
                    h->step = h->step + 1;
                    h->timer = 30;
                }
            count:
                if (pl->combo_count == 0) {
                    if (GAME_PAUSED)
                        h->timer = h->timer + 1;
                    h->timer = h->timer - 1;
                    if (h->timer != 0)
                        goto flat;
                    FUN_0c03027e(i);
                    if (h->rating == 99) {
                        h->step = 9;
                    } else {
                        h->step = 5;
                        h->fade = 0;
                    }
                } else {
                    h->count = pl->combo_count;
                }
                goto flat;
            case 3:
                if (pl->combo_count == 0) {
                    if (GAME_PAUSED)
                        h->timer = h->timer + 1;
                    h->timer = h->timer - 1;
                    if (h->timer != 0)
                        goto flat;
                    FUN_0c03027e(i);
                    if (h->rating != 99) {
                        h->step = 5;
                        h->fade = 0;
                        goto flat;
                    }
                    h->step = 9;
                    h->zoom = 8;
                } else if (h->count != pl->combo_count) {
                    h->count = pl->combo_count;
                    h->rating = 11;
                    h->step = 4;
                }
                goto flat;
            case 4:
                if (!GAME_PAUSED)
                    h->rating = h->rating - 1;
                if (h->rating == 0) {
                    h->step = 3;
                    h->timer = 30;
                }
                zoom = HIT_ZOOM[h->rating];
                ui_draw_hit_counter(i, 8, zoom);
                break;
            case 5:
                if (!GAME_PAUSED)
                    h->fade = h->fade + 1;
                if (h->fade >= 10) {
                    h->step = h->step + 1;
                    FUN_0c0302b6(i);
                }
                FUN_0c0301d2(i, 8);
                break;
            case 6:
                if (!GAME_PAUSED)
                    h->fade = h->fade - 1;
                if (!(h->fade > 8)) {
                    h->step = h->step + 1;
                    h->timer = 30;
                }
                FUN_0c0301d2(i, 8);
                break;
            case 7:
                FUN_0c0301d2(i, 8);
                if (!GAME_PAUSED)
                    h->timer = h->timer - 1;
                if (h->timer == 0) {
                    h->step = h->step + 1;
                    h->zoom = 0;
                    h->fade = 8;
                }
                break;
            case 8:
                if (h->fade != 0 && !GAME_PAUSED)
                    h->fade = h->fade - 1;
                if (h->zoom == 0 && h->fade == 0) {
                    h->mode = 0;
                    h->step = 0;
                }
                FUN_0c0301d2(i, 8);
                break;
            default:
                if (!GAME_PAUSED)
                    h->zoom = h->zoom - 1;
                if (h->zoom != 0) {
                    h->mode = 0;
                    h->step = 0;
                }
            flat:
                ui_draw_hit_counter(i, 8, 0.0f);
                break;
            }
            break;
        case 3:
            if (pl->combo_count != 0) {
                h->mode = 0;
                pl->combo_flag = 0;
                return;
            }
            switch (h->step) {
            case 0:
                h->step = h->step + 1;
                h->fade = 0;
                break;
            case 1:
                if (!GAME_PAUSED)
                    h->fade = h->fade + 1;
                if (h->fade >= 10)
                    h->step = h->step + 1;
                FUN_0c0302fe(i, 8);
                break;
            case 2:
                if (!GAME_PAUSED)
                    h->fade = h->fade - 1;
                if (!(h->fade > 8)) {
                    h->step = h->step + 1;
                    h->timer = 30;
                }
                FUN_0c0302fe(i, 8);
                break;
            case 3:
                if (!GAME_PAUSED)
                    h->timer = h->timer - 1;
                if (h->timer == 0) {
                    h->step = h->step + 1;
                    h->fade = 8;
                }
                FUN_0c0302fe(i, 8);
                break;
            case 4:
                if (!GAME_PAUSED)
                    h->fade = h->fade - 1;
                if (h->fade == 0) {
                    h->mode = 0;
                    h->step = 0;
                    pl->combo_flag = 0;
                }
                FUN_0c0302fe(i, 8);
                break;
            }
            break;
        default:
            h->mode = 0;
            h->step = 0;
            break;
        }
    }
}
