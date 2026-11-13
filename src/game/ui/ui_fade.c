/* ui_fade.c: the screen fade (original file 0c03148c-0c0318e0).
   ui_fade_start sets a fade to or from a colour over a number of frames; ui_fade_draw draws it every frame over the scene:
   mode 0 a full-screen quad whose opacity follows the counter, mode 1 a wipe of horizontal bands. */
#include "game/ui/ui.h"

typedef struct UiWord3 { int w[3]; } UiWord3;            /* a vertex, copied as three words */
typedef struct UiWord4 { int w[4]; } UiWord4;

#define FADE_OBJ_VERT(n) (*(UiWord3 *)(g_ui_fade_obj + 112 + 32 * (n)))    /* the quad's four vertices in the object */
#define FADE_OBJ_COLOUR (*(UiWord4 *)(g_ui_fade_obj + 68))
#define FADE_OBJ_F(off) (*(float *)(g_ui_fade_obj + (off)))
#define END_OF_STRIP(v) (*(int *)&(v).x = *(int *)&(v).x | 1)             /* a flag the renderer reads in the low bit of x */
#define CHANNEL(c, shift) ((float)(unsigned int)(((c) >> (shift)) & 0xFF))
#define FADE_PAUSE_A (*(signed char *)((char *)g_game_work + 0x12B))
#define FADE_PAUSE_B (*(signed char *)((char *)g_game_work + 0x12E))
#define FADE_HOLD (*(signed char *)0x0C494D20)
#define FADE_HALF_STEP (*(int *)0x0C386830)

extern char g_game_work[];

void ui_fade_init(void)
{
    nl_model_bind_textures(g_ui_fade_obj, g_ui_fade_obj_data);
}

/* a fade of `duration` frames in `colour` (0x00RRGGBB); mode 0 flat, 1 bands; dir 0 to the colour, 1 from it */
void ui_fade_start(unsigned int colour, int mode, int dir, int duration)
{
    g_fade_state.colour = colour;
    g_fade_state.mode = mode;
    g_fade_state.dir = dir;
    g_fade_state.duration = duration;
    g_fade_state.counter = duration;
    if (FADE_HALF_STEP != 0 && (signed char)dir != 0)
        g_fade_state.counter = g_fade_state.counter - 1;
    if ((signed char)mode != 0)
        g_fade_state.counter = g_fade_state.counter + 1;
    if (g_fade_state.duration == 0)
        g_fade_state.duration = 1;
}

void ui_fade_reset(void)
{
    g_fade_state.counter = 0;
}

void ui_fade_draw(void)
{
    Vec3 *v = g_ui_fade_verts;
    float *col = g_ui_fade_colour;
    float t, y, band;

    nlSelectMatrixStack(1);
    nlUnitMatrix();
    if (g_fade_state.counter == 0)
        return;
    switch (g_fade_state.mode) {
    case 0:
        if (g_fade_state.dir == 0)
            t = (float)g_fade_state.counter / (float)g_fade_state.duration;
        else
            t = -((float)(g_fade_state.counter - 1) / (float)g_fade_state.duration) + 1.0f;
        v[1].x = -320.0f;
        v[0].x = -320.0f;
        v[3].x = 320.0f;
        v[2].x = 320.0f;
        v[2].y = -240.0f;
        v[0].y = -240.0f;
        v[3].y = 240.0f;
        v[1].y = 240.0f;
        v[3].z = -1.0f;
        v[2].z = -1.0f;
        v[1].z = -1.0f;
        v[0].z = -1.0f;
        END_OF_STRIP(v[0]);
        END_OF_STRIP(v[1]);
        END_OF_STRIP(v[2]);
        END_OF_STRIP(v[3]);
        FADE_OBJ_VERT(0) = *(UiWord3 *)&v[0];
        FADE_OBJ_VERT(1) = *(UiWord3 *)&v[1];
        FADE_OBJ_VERT(2) = *(UiWord3 *)&v[2];
        FADE_OBJ_VERT(3) = *(UiWord3 *)&v[3];
        col[1] = CHANNEL(g_fade_state.colour, 16) / 255.0f * 0.75f;
        col[2] = CHANNEL(g_fade_state.colour, 8) / 255.0f * 0.75f;
        col[3] = CHANNEL(g_fade_state.colour, 0) / 255.0f * 0.75f;
        col[0] = 1.0f;
        FADE_OBJ_COLOUR = *(UiWord4 *)col;
        FADE_OBJ_F(20) = 640.0f;
        FADE_OBJ_F(52) = 640.0f;
        nlSetLightColor(1.0f, 1.0f, 1.0f);
        nlObjPutTrnsl(g_ui_fade_obj, t);
        break;
    case 1:
        if (g_fade_state.dir == 0)
            t = (float)g_fade_state.counter / (float)g_fade_state.duration;
        else
            t = -((float)(g_fade_state.counter - 1) / (float)g_fade_state.duration) + 1.0f;
        v[1].x = -320.0f;
        v[0].x = -320.0f;
        v[3].x = 320.0f;
        v[2].x = 320.0f;
        v[3].z = -100.0f;
        v[2].z = -100.0f;
        v[1].z = -100.0f;
        v[0].z = -100.0f;
        END_OF_STRIP(v[0]);
        END_OF_STRIP(v[1]);
        END_OF_STRIP(v[2]);
        END_OF_STRIP(v[3]);
        col[1] = CHANNEL(g_fade_state.colour, 16) / 255.0f;
        col[2] = CHANNEL(g_fade_state.colour, 8) / 255.0f;
        col[3] = CHANNEL(g_fade_state.colour, 0) / 255.0f;
        FADE_OBJ_COLOUR = *(UiWord4 *)col;
        FADE_OBJ_F(20) = 640.0f;
        FADE_OBJ_F(52) = 640.0f;
        nlSetLightColor(1.0f, 1.0f, 1.0f);
        band = t * 3.125f;
        for (y = -37.5f; 37.5f > y; y = y + 3.125f) {
            v[2].y = y;
            v[0].y = y;
            v[3].y = band + y;
            v[1].y = band + y;
            FADE_OBJ_VERT(0) = *(UiWord3 *)&v[0];
            FADE_OBJ_VERT(1) = *(UiWord3 *)&v[1];
            FADE_OBJ_VERT(2) = *(UiWord3 *)&v[2];
            FADE_OBJ_VERT(3) = *(UiWord3 *)&v[3];
            nlObjPut(g_ui_fade_obj);
        }
        break;
    }
    if (FADE_PAUSE_A == 0 && FADE_PAUSE_B == 0 && FADE_HOLD == 0)
        g_fade_state.counter = g_fade_state.counter - 1;
    if (g_fade_state.counter == 0 && g_fade_state.dir != 0)
        g_fade_state.counter = 1;
}
