/* ui.h: the 2D layer drawn over the game: the sprite queue every menu and HUD draws through, the fight HUD (health gauges, win
   marks, hit counter, world numbers) and the screen fade.

   Drawing is queued: a draw call adds a sprite request (a 56-byte record) to g_ui_sprite_queue, which the frame's 2D pass
   renders. The HUD state is one record, g_hud_state; ui_draw_hud runs its parts every frame while it is enabled. */
#ifndef UI_H
#define UI_H

#include "game/game.h"

/* --- sprite queue (ui_sprite_queue.c) ----------------------------------------------------------------------------------- */

typedef struct UiSprite {       /* a sprite request (56 bytes) */
    int _00;
    float x, y, z;              /* 0x04 screen position; z orders (the cockpit faces put their x there) */
    float scale_x, scale_y;     /* 0x10 */
    int _18[4];
    int rot;                    /* 0x28 rotation, 0x10000 = 360 degrees */
    float alpha;                /* 0x2C */
    int _30;
    int layer;                  /* 0x34 */
} UiSprite;

void ui_sprite_queue_reset(void);
/* queues sprite `src` from the model record `model` (its texture table at model[2], entry `tex`), frame `frame`; `flip`
   (1: mirrored, the right-hand face) and `c6` go to the entry's flag bytes */
void ui_sprite_queue_add(UiSprite *src, int *model, short tex, int frame, char flip, char c6);

/* --- HUD state (g_hud_state, 0x0C366A70) -------------------------------------------------------------------------------- */

typedef struct HudClock {       /* 16 bytes: the round clock's two digits */
    char _00[4];
    signed char rolling;        /* 0x04 the ones digit is rolling over to the next */
    char _05[3];
    signed char timer;          /* 0x08 frames of the roll left (20) */
    signed char last;           /* 0x09 the time the roll started from */
    char _0A[2];
    float roll;                 /* 0x0C 1 -> 0 over the roll */
} HudClock;

typedef struct HudStoneFx {     /* 16 bytes: the effect under a gauge's stones */
    signed char mode;           /* 0 the stones pulse, 1 they blink and fade, 2 the power meter's mark, 3 a wait */
    signed char side;           /* 0x01 */
    signed char step;           /* 0x02 (0x02-0x03 are cleared together as a short) */
    signed char _03;
    int angle;                  /* 0x04 the pulse */
    float alpha;                /* 0x08 */
    signed char timer;          /* 0x0C */
    char _0D;
    signed char blink;          /* 0x0E mode 1; mode 3 keeps a short timer at 0x0E */
    signed char fade;           /* 0x0F mode 1 */
} HudStoneFx;

typedef struct HudPanel {       /* 60 bytes, one per player: the plate under the gauge, the stones and the power meter */
    char _00;
    signed char side;           /* 0x01 */
    signed char show_plate;     /* 0x02 */
    signed char show_stones;    /* 0x03 */
    signed char state;          /* 0x04 FUN_0c02e438's: 0 start, 1 in, 2 power change, 3 wait, 4 back */
    signed char step;           /* 0x05 */
    short _06;
    float x, y;                 /* 0x08 the plate; it slides in and out between -200 and 808 */
    float stones_x;             /* 0x10 */
    float spread;               /* 0x14 the stones' spacing, sliding to 0 when the power changes */
    float power_x;              /* 0x18 the power meter */
    signed char timer;          /* 0x1C */
    signed char plate_kind;     /* 0x1D which pair of frames the plate shows */
    signed char show_power;     /* 0x1E */
    char _1F;
    short glint_timer[3];       /* 0x20 per stone */
    signed char glint_frame[3]; /* 0x26 */
    char _29[3];
    HudStoneFx fx;              /* 0x2C */
} HudPanel;

typedef struct HudHitCounter {  /* 24 bytes, one per player: the "N HITS" pop-up */
    char _00[3];
    signed char shown;          /* 0x03 */
    signed char mode;           /* 0x04 0 idle, 2 counting, 3 the other message */
    signed char step;           /* 0x05 */
    char _06[2];
    signed char zoom;           /* 0x08 pop-in steps */
    signed char count;          /* 0x09 the hits shown */
    signed char rating;         /* 0x0A message after the count (99: none) */
    signed char fade;           /* 0x0B */
    signed char timer;          /* 0x0C */
    signed char restart;        /* 0x0D the count fell back while counting */
    char _0E[2];
    float x;                    /* 0x10 where the count is drawn */
    char _14[24 - 0x14];
} HudHitCounter;

typedef struct HudChip {        /* 20 bytes: a piece of the gauge falling off when the fighter loses hp_ref */
    signed char active;
    signed char timer;          /* 0x01 frames left (60); fades over the last 40 */
    char _02[2];
    float alpha;                /* 0x04 (the setup clears its low half with a short store) */
    float x, y;                 /* 0x08 y 80: a whole bar of 48 */
    float w;                    /* 0x10 its length, drawn as the sprite's height */
} HudChip;

typedef struct HudGauge {       /* 192 bytes, one per player: the health gauge */
    char _00;
    signed char slot;           /* 0x01 */
    signed char segments;       /* 0x02 bars of 48 hp */
    signed char segments_shown; /* 0x03 */
    char _04[4];
    short hp;                   /* 0x08 */
    short hp_display;           /* 0x0A eased toward hp */
    short hp_ref;               /* 0x0C full gauge */
    char _0E;
    signed char next_chip;      /* 0x0F */
    HudChip chip[8];            /* 0x10 */
    short glint_timer[5];       /* 0xB0 per bar: frames to its next glint frame; -1 idle */
    signed char glint_frame[5]; /* 0xBA 0 plain, 1-4 the glint */
    char _BF;
} HudGauge;

typedef struct HudShard {       /* 48 bytes: a lost bar of the gauge, turning over and falling away */
    signed char on;
    signed char side;           /* 0x01 */
    signed char step;           /* 0x02 0 placed, 1 turning, 2 falling */
    signed char bar;            /* 0x03 which bar of the gauge */
    signed char timer;          /* 0x04 */
    char _05[3];
    float x, y;                 /* 0x08 */
    int rot;                    /* 0x10 */
    int spin;                   /* 0x14 */
    float scale;                /* 0x18 */
    float dx;                   /* 0x1C */
    float _20;
    float dy;                   /* 0x24 */
    float ddy;                  /* 0x28 */
    int layer;                  /* 0x2C */
} HudShard;

typedef struct HudWins {        /* 36 bytes, one per player: the win marks, and the new mark flying to its place */
    signed char active;         /* 0x00 a new mark is on its way */
    signed char visible;        /* 0x01 */
    signed char side;           /* 0x02 0 left, 1 right */
    signed char wins;           /* 0x03 */
    signed char wins_shown;     /* 0x04 */
    signed char step;           /* 0x05 */
    signed char icon;           /* 0x06 kind of win (how the round was won) */
    signed char busy;           /* 0x07 */
    float x, y;                 /* 0x08 */
    float dx, dy;               /* 0x10 */
    int rot;                    /* 0x18 */
    float scale;                /* 0x1C */
    short timer;                /* 0x20 */
    char _22[2];
} HudWins;

typedef struct HudState {
    signed char enabled;        /* 0x000 ui_draw_hud runs while set */
    signed char _01;            /* 0x001 set by FUN_0c02d834, cleared by FUN_0c02d83c */
    signed char x2, x3;         /* 0x002 */
    float layout[6];            /* 0x004 [0..3] edge offsets (+-16 in the wide layout), [4] [5] scales */
    HudClock clock;             /* 0x01C */
    HudHitCounter hit[2];       /* 0x02C */
    HudPanel panel[2];          /* 0x05C */
    HudGauge gauge[2];          /* 0x0D4 */
    HudShard shard[2][5];       /* 0x254 */
    HudWins wins[2];            /* 0x434 */
    char _47C[20];              /* 0x47C */
} HudState;

GAME_CHECK(check_hud_clock, sizeof(HudClock) == 16);
GAME_CHECK(check_hud_stonefx, sizeof(HudStoneFx) == 16);
GAME_CHECK(check_hud_panel, sizeof(HudPanel) == 60);
GAME_CHECK(check_hud_counter, sizeof(HudHitCounter) == 24);
GAME_CHECK(check_hud_chip, sizeof(HudChip) == 20);
GAME_CHECK(check_hud_gauge, sizeof(HudGauge) == 192);
GAME_CHECK(check_hud_shard, sizeof(HudShard) == 48);
GAME_CHECK(check_hud_wins, sizeof(HudWins) == 36);
GAME_CHECK(check_hud_state, sizeof(HudState) == 0x490);

extern HudState g_hud_state;
extern char g_player_win_records[];             /* 120 bytes per player; +0x4F wins, +0x50 how each round was won */
extern char g_game_work[];
extern char g_save_options[];                   /* +5 and +21: the items are fixed (no cycling) when both are set */
#define GAME_PAUSED (*(int *)(g_game_work + 328))
extern int g_res_cockpit[];                     /* HUD sprite model records */
extern int g_res_cockpit_faces[];               /* 12 bytes per character */
extern int g_res_font_model[];
#define PLAYER_WINS(i) (*(signed char *)(g_player_win_records + (unsigned char)((unsigned short)(i) * 120) + 0x4F))

/* --- ui_hud_init.c ------------------------------------------------------------------------------------------------------ */
void ui_init_hud(void);
void ui_enable_hud(void);
void ui_disable_hud(void);
void FUN_0c02d834(void);
void FUN_0c02d83c(void);
int ui_hud_enabled(void);
void ui_reset_hud_wins(void);
void ui_reset_hud_gauges(void);

/* --- ui_hud_indicators.c ---------------------------------------------------------------------------------------------- */
void ui_update_hud_indicators(void);
void ui_draw_hud_cell_pair(void);

/* --- ui_hud_gauge.c --------------------------------------------------------------------------------------------------- */
void FUN_0c02f328(char slot);
void FUN_0c02f3a6(HudChip *c, HudGauge *g);
void FUN_0c02f3f2(HudGauge *g);
void FUN_0c02f786(void);
void FUN_0c02f98a(void);

/* --- ui_hud_counter.c ------------------------------------------------------------------------------------------------- */
void FUN_0c02ff18(void);
struct HudMessage;
void ui_hud_slide_text(struct HudMessage *m);
void ui_draw_hit_counter(int slot, int steps, float y_offset);
void FUN_0c0301d2(int slot, int frames);
int FUN_0c03027e(int slot);
void FUN_0c0302b6(int slot);
void FUN_0c0302fe(int slot, int frames);
void ui_update_hit_counter(void);

/* --- ui_hud_world.c ----------------------------------------------------------------------------------------------------- */
void ui_project_fighter_to_screen(char slot, Vec3 *out);
void FUN_0c030920(void);
void ui_project_world_to_screen(Vec3 *out, Vec3 *world, float *scale, float height);
void ui_draw_world_text(Vec3 *world, char *text, char mode, float height);
void ui_draw_digit_string(Vec3 *pos, char *text, float scale);
void ui_draw_world_number(Vec3 *pos, unsigned short kind, unsigned short count, int unused);
void FUN_0c031030(void);
void FUN_0c03107e(void);
void FUN_0c031388(void);
void ui_draw_hud(void);

/* --- ui_hud_draw.c ------------------------------------------------------------------------------------------------------ */
void ui_draw_text_stub(char *str, int mode, float x, float y, float scale_x, float scale_y);
void ui_draw_sprite_string(char *str, int mode, float x, float y, float scale_x, float scale_y, float z);
void FUN_0c02dc86(void);
int FUN_0c02df98(HudPanel *p, int dir, float lo, float hi);
void FUN_0c02e00a(HudPanel *p);
void FUN_0c02e050(HudPanel *p);
void FUN_0c02e092(HudPanel *p);
void FUN_0c02e144(HudPanel *p);
void FUN_0c02e2bc(HudPanel *p);
void FUN_0c02e2da(HudPanel *p);
void FUN_0c02e438(HudPanel *p, char side);
void ui_update_stone_effects(HudPanel *p);
void FUN_0c02e998(void);

/* --- stub units ---------------------------------------------------------------------------------------------------------- */
void FUN_0c02ee3c(void);
void FUN_0c03082e(void);

/* --- ui_fade.c ---------------------------------------------------------------------------------------------------------- */
typedef struct FadeState {      /* g_fade_state, 0x0C7F31C8 */
    signed char mode;           /* 0 flat, 1 bands */
    signed char dir;            /* 0 to the colour, 1 from it */
    signed char duration;
    signed char counter;        /* frames left; 0 none */
    unsigned int colour;        /* 0x00RRGGBB */
} FadeState;
extern FadeState g_fade_state;
extern char g_ui_fade_obj[];                    /* the NAOMI object the fade quad is drawn with */
extern char g_ui_fade_obj_data[];
extern Vec3 g_ui_fade_verts[4];
extern float g_ui_fade_colour[4];               /* a r g b */

void ui_fade_init(void);
void ui_fade_start(unsigned int colour, int mode, int dir, int duration);
void ui_fade_reset(void);
void ui_fade_draw(void);

/* from other modules */
void *memset(void *p, int c, int n);
int fx_spawn_049b7c(void);
int nl_model_bind_textures(char *obj, char *data);
int nlSelectMatrixStack(int mode);
void nlUnitMatrix(void);
int nlSetLightColor(float sx, float sy, float sz);
int nlObjPut(char *obj);
int nlObjPutTrnsl(char *obj, float alpha);

#endif
