/* ui_hud_world.c: what the HUD draws at places in the world, and its per-frame dispatcher (original file 0c030832-0c03148c).
   World points are projected to the 640x480 screen; text, digits and the item kinds' marks are queued there. The HUD halves
   fade while a fighter stands under them. */
#include "game/ui/ui.h"
#include "game/camera/camera.h"

#define HUD_NO_INTRO (*(signed char *)0x0C7F4769)
#define ITEM_KIND_MAX ((char *)0x0C336120)              /* 4 bytes per item kind: +1 max (kind 14), +2 short max */
#define ITEM_KIND_COLOUR ((int *)0x0C3211EC)            /* per item kind: which bar colour pair */
#define RADAR_QUADRANT_SLOT ((signed char *)0x0C14948E) /* 4 per stage: the radar slot of each quadrant of the stage */
#define RADAR_SLOT_POS ((float *)0x0C1494BC)            /* 4 x (x, y) offsets of the radar slots */

extern int g_res_eyecatch[];
extern char g_item_state[];

/* from other modules */
int thunk_FUN_0c062242(char *mat, Vec3 *out);   /* math_mat_get_translate */
int FUN_0c0e19b0(float *matrix);
void nlCalcPoint(Vec3 *in, Vec3 *out);
void nlCalcPoint44(Vec3 *in, float *out);
int nlPopMatrix(int n);
int FUN_0c0555c4(void);
int strlen(char *s);
int sprintf(char *buf, const char *fmt, ...);
extern char g_hit_fmt_d[];

/* the screen position of a fighter's joint 11 (its power form's skeleton, 64 bytes per joint); z is left alone */
void ui_project_fighter_to_screen(char slot, Vec3 *out)
{
    float q[4];
    Vec3 pos;
    Fighter *f = FIGHTER(slot);

    thunk_FUN_0c062242((char *)f + 0x300 + (short)((short)f->power_form * 0xDC0) + 0x2C0, &pos);
    FUN_0c0e19b0(0);
    FUN_0c0e1550(2);
    nlCalcPoint(&pos, &pos);
    FUN_0c0e1550(3);
    nlCalcPoint44(&pos, q);
    FUN_0c0e1550(1);
    nlPopMatrix(1);
    out->x = (q[0] / q[3] + 1.0f) / 2.0f * 640.0f;
    out->y = -((q[1] / q[3] + 1.0f) / 2.0f * 480.0f) + 480.0f;
}

/* each HUD half fades to half while either fighter is in the top corner under it, and comes back when both leave */
void FUN_0c030920(void)
{
    Vec3 p1, p0;

    ui_project_fighter_to_screen(g_players[0].slot, &p0);
    ui_project_fighter_to_screen(g_players[1].slot, &p1);

    if ((!(p0.x > 200.0f) && !(p0.y > g_hud_state.layout[0] + 100.0f))
        || (!(p1.x > 200.0f) && !(p1.y > g_hud_state.layout[0] + 100.0f))) {
        if (g_hud_state.x2 > 0)
            g_hud_state.x2--;
    } else if (40.0f > (float)g_hud_state.x2) {
        g_hud_state.x2++;
    }
    g_hud_state.layout[4] = (float)g_hud_state.x2 / 80.0f + 0.5f;

    if ((!(440.0f > p0.x) && !(p0.y > g_hud_state.layout[0] + 100.0f))
        || (!(440.0f > p1.x) && !(p1.y > g_hud_state.layout[0] + 100.0f))) {
        if (g_hud_state.x3 > 0)
            g_hud_state.x3--;
    } else if (40.0f > (float)g_hud_state.x3) {
        g_hud_state.x3++;
    }
    g_hud_state.layout[5] = (float)g_hud_state.x3 / 80.0f + 0.5f;
}

/* `world` on the screen (out may be world); *scale: how many pixels one unit `height` above it spans across */
void ui_project_world_to_screen(Vec3 *out, Vec3 *world, float *scale, float height)
{
    Vec3 p, up;
    float q[4], q_up[4];

    FUN_0c0e19b0(0);
    FUN_0c0e1550(2);
    nlCalcPoint(world, &p);
    up = p;
    up.y = up.y + 1.0f * height;
    FUN_0c0e1550(3);
    nlCalcPoint44(&p, q);
    nlCalcPoint44(&up, q_up);
    FUN_0c0e1550(1);
    nlPopMatrix(1);
    out->x = (q[0] / q[3] + 1.0f) / 2.0f * 640.0f;
    out->y = -((q[1] / q[3] + 1.0f) / 2.0f * 480.0f) + 480.0f;
    out->z = 3.0f;
    *scale = (q_up[0] / q_up[3] + 1.0f) / 2.0f * 640.0f - out->x;
}

/* `text` centred over a world point (the item pickup pop-ups); font `mode` 0 and 1 are 16 pixels wide, 2 is 32 */
void ui_draw_world_text(Vec3 *world, char *text, char mode, float height)
{
    Vec3 pos;
    float scale;
    int len;

    if (FUN_0c0555c4() == 0)
        return;
    pos = *world;
    ui_project_world_to_screen(&pos, &pos, &scale, height);
    len = strlen(text);
    switch (mode) {
    case 0:
    case 1:
        pos.x = pos.x - (float)len / 2.0f * scale * 16.0f;
        break;
    case 2:
        pos.x = pos.x - (float)len / 2.0f * scale * 32.0f;
        break;
    }
    ui_draw_sprite_string(text, mode, pos.x, pos.y, scale, scale, 9.0f);
}

/* a string of digits in the big font: 0-3 are the wide glyphs, 4-9 the narrow ones; other characters are skipped */
void ui_draw_digit_string(Vec3 *pos, char *text, float scale)
{
    UiSprite s;
    float adv_wide, adv_narrow;
    signed char ch;

    s.rot = 0;
    s.alpha = 1.0f;
    s.scale_x = scale;
    s.scale_y = scale;
    s.layer = 10;
    *(Vec3 *)&s.x = *pos;
    s.z = 9.0f;
    adv_wide = scale * 32.0f;
    adv_narrow = scale * 16.0f;
    while ((ch = *text++) != 0) {
        if (ch >= '0' && ch <= '3') {
            ch -= '0';
            ui_sprite_queue_add(&s, g_res_font_model, 2, ch, 0, 0);
            s.x += adv_wide;
        }
        if (ch >= '4' && ch <= '9') {
            ch -= '0';
            ui_sprite_queue_add(&s, g_res_font_model, 3, ch, 0, 0);
            s.x += adv_narrow;
        }
    }
}

/* what an item holds, over it in the world: marks for kinds 0, 2 and 13 (one per 5 for 13), seconds for 7-9, else a bar
   filled count/max between two end caps */
void ui_draw_world_number(Vec3 *pos, unsigned short kind, unsigned short count, int unused)
{
    UiSprite s;
    Vec3 screen;
    float scale, max;
    char text[8];
    int i, groups, colour;

    if (FUN_0c0555c4() == 0)
        return;
    screen = *pos;
    ui_project_world_to_screen(&screen, &screen, &scale, 1.0f);
    s.scale_y = scale;
    s.scale_x = scale;
    *(Vec3 *)&s.x = screen;
    s.alpha = 1.0f;
    s.layer = 10;
    s.rot = 0;
    s.z = 9.0f;
    if (kind == 0) {
        s.rot += 0x4000;            /* a quarter turn: upright marks */
        s.x -= scale * 30.0f;
        for (i = 0; i < count; i++) {
            ui_sprite_queue_add(&s, g_res_cockpit, 9, 1, 0, 0);
            s.x += 12.0f * scale;
        }
    } else if (kind == 2) {
        s.x -= scale * 40.0f;
        s.rot += 0x4000;            /* a quarter turn: upright marks */
        for (i = 0; i < count; i++) {
            ui_sprite_queue_add(&s, g_res_cockpit, 9, 0, 0, 0);
            s.x += 8.0f * scale;
        }
    } else if (kind == 13) {
        s.x -= scale * 40.0f;
        s.rot += 0x4000;            /* a quarter turn: upright marks */
        groups = (count - 1) / 5 + 1;
        for (i = 0; i < groups; i++) {
            ui_sprite_queue_add(&s, g_res_cockpit, 9, 0, 0, 0);
            s.x += 8.0f * scale;
        }
    } else if (kind == 7 || kind == 8 || kind == 9) {
        sprintf(text, g_hit_fmt_d, count / 60);
        ui_draw_digit_string(&screen, text, scale);
    } else {
        s.x -= scale * 26.0f;
        s.layer = 9;
        ui_sprite_queue_add(&s, g_res_cockpit, 9, 2, 1, 0);
        s.layer = 11;
        s.x += 52.0f * scale;
        ui_sprite_queue_add(&s, g_res_cockpit, 9, 2, 0, 0);
        s.layer = 9;
        s.x -= scale * 50.0f;
        s.y += scale;
        s.z += 0.01f;
        if (kind == 14)
            max = (float)*(signed char *)(ITEM_KIND_MAX + kind * 4 + 1);
        else
            max = (float)*(unsigned short *)(ITEM_KIND_MAX + kind * 4 + 2);
        s.scale_x = scale * ((float)count / max) * 12.0f;
        colour = ITEM_KIND_COLOUR[kind];
        ui_sprite_queue_add(&s, g_res_cockpit, 9, colour % 4 * 2 + 3, 0, 0);
        s.z += 0.01f;
        s.scale_x = scale * 12.0f;
        ui_sprite_queue_add(&s, g_res_cockpit, 9, colour % 4 * 2 + 4, 0, 0);
    }
}

/* the eyecatch in the bottom-right corner */
void FUN_0c031030(void)
{
    UiSprite s;

    s.x = 556.0f;
    s.y = 416.0f;
    s.z = 7.0f;
    s.rot = 0;
    s.alpha = 1.0f;
    s.scale_y = 1.0f;
    s.scale_x = 1.0f;
    s.layer = 0x100A;
    ui_sprite_queue_add(&s, g_res_eyecatch, 1, 0, 0, 0);
}

/* the item radar (0x0C366EEC): four marks around a point at the bottom of the screen, turned with the camera, one per
   quadrant of the stage; each shows an item lying there, cycling through the kinds when several are. It blinks. */
typedef struct ItemRadar {
    signed char state;          /* 0 start, 1 running */
    char _01[3];
    signed char kind[4];        /* 0x04 the kind (0-2) each slot shows */
    signed char mask[4];        /* 0x08 bit k: an item k lies in the slot's quadrant */
    signed char count[4];       /* 0x0C items in the quadrant */
    signed char timer;          /* 0x10 */
    signed char visible;        /* 0x11 */
} ItemRadar;
#define ITEM_RADAR (*(ItemRadar *)0x0C366EEC)
#define RADAR_ITEMS_FIXED (g_save_options[5] != 0 && g_save_options[21] != 0)   /* the marks never cycle */
#define ITEM_OBJ(i) (((char **)(g_item_state + 0x318))[i])

void FUN_0c03107e(void)
{
    ItemRadar *r = &ITEM_RADAR;
    UiSprite s;
    char *obj;
    int i, k, quadrant;
    signed char slot, first;

    if (r->state == 0) {
        r->state++;
        r->timer = 20;
        r->visible = 1;
    } else if (r->state != 1) {
        return;
    }

    if (GAME_PAUSED != 0)
        r->timer++;
    if (--r->timer == 0) {
        r->visible ^= 1;
        if (r->visible == 0) {
            r->timer = 10;
        } else {
            r->timer = 20;
            for (i = 0; i < 4; i++) {
                if (r->count[i] > 1) {
                    if (RADAR_ITEMS_FIXED) {
                        r->kind[i] = 0;
                    } else {
                        for (k = 0; k < 3; k++) {       /* on to the next kind lying there */
                            r->kind[i] = (r->kind[i] + 1) % 3;
                            if (r->mask[i] & (1 << r->kind[i]))
                                break;
                        }
                    }
                }
            }
        }
    }

    *(int *)r->mask = 0;
    *(int *)r->count = 0;
    for (i = 0; i < g_save_options[21] + 3; i++) {
        obj = ITEM_OBJ(i);
        if (obj == 0 || obj[1] == 0)
            continue;
        quadrant = 0;
        if (0.0f > *(float *)(obj + 0x20))
            quadrant = 2;
        if (0.0f > *(float *)(obj + 0x28))
            quadrant++;
        slot = RADAR_QUADRANT_SLOT[g_stage_id * 4 + quadrant];
        r->mask[slot] |= 1 << i;
        r->count[slot]++;
    }

    if (RADAR_ITEMS_FIXED) {
        r->kind[3] = 0;
        r->kind[2] = 0;
        r->kind[1] = 0;
        r->kind[0] = 0;
    } else {
        for (i = 0; i < 4; i++) {
            first = r->kind[i];
            for (k = 0; k < 3; k++) {
                if ((r->mask[i] >> k) & 1)
                    r->kind[i] = k;
            }
            if (r->count[i] > 1)        /* several: keep cycling from where it was */
                r->kind[i] = first;
        }
    }

    if (r->visible == 0)
        return;
    for (i = 0; i < 4; i++) {
        if (r->mask[i] == 0)
            continue;
        s.x = math_cos_angle16(g_cam_records[0].yaw[1]) * RADAR_SLOT_POS[i * 2]
            - math_sin_angle16(g_cam_records[0].yaw[1]) * RADAR_SLOT_POS[i * 2 + 1] + 320.0f;
        s.y = math_sin_angle16(g_cam_records[0].yaw[1]) * RADAR_SLOT_POS[i * 2]
            + math_cos_angle16(g_cam_records[0].yaw[1]) * RADAR_SLOT_POS[i * 2 + 1]
            + g_hud_state.layout[1] + 430.0f;
        s.z = 8.0f;
        s.layer = 10;
        s.alpha = 1.0f;
        s.rot = 0;
        s.scale_x = 0.75f;
        s.scale_y = 0.75f;
        ui_sprite_queue_add(&s, g_res_cockpit, 2, r->kind[i] + 13, 0, 0);
    }
}

/* without the intro: a bar across the top of the screen */
void FUN_0c031388(void)
{
    UiSprite s;

    if (HUD_NO_INTRO == 0)
        return;
    s.x = 320.0f;
    s.y = 0.0f;
    s.z = 8.19999886f;
    s.rot = 0;
    s.alpha = 1.0f;
    s.scale_x = 0.5f;
    s.scale_y = 15.0f;
    s.layer = 6;
    ui_sprite_queue_add(&s, g_res_cockpit, 13, 0, 0, 0);
}

/* the fight HUD, every frame while it is enabled */
void ui_draw_hud(void)
{
    if (g_hud_state.enabled == 0)
        return;
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
    if (HUD_NO_INTRO == 0)
        FUN_0c03107e();
}
