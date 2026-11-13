/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c057e28-0c05821c) */

/* named globals (symbols.txt) */
extern char g_res_font[];
typedef struct { int x, y, z; } Vec3i;
typedef struct { float f0, f1, f2, f3; } Float4;
extern int FUN_0c0d5188(void);
extern void FUN_0c06233a(void *, int, int);
extern int obj_destroy(void *);
extern signed char g_game_state;
#define STATE (*(signed char *)(obj + 8))
#define SUBSTATE (*(signed char *)(obj + 9))
#define COUNTER (*(short *)(obj + 0xEC))
#define STYLE_NUM (*(short *)(obj + 0xEE))
#define ROW_INDEX (*(signed char *)(obj + 4))
#define ACTOR(idx) (*(char **)(obj + 0x2E0 + 4 * (idx)))
#define STYLE_SRC (*(signed char *)0xC7F306C)

void fx_tick_0581b4(char *obj)
{
    char *layout_row;
    Float4 *tint_rows;
    int idx;

    if (FUN_0c0d5188() != 0) {
        STATE = 2;
    }
    layout_row = (char *)0xC14BB48 + (signed char)(ROW_INDEX * 28);
    if (STATE == 0) {
        obj[1] = 1;
        *(short *)(obj + 6) = 31;
        obj[5] = 25;
        for (idx = 0; idx < 2; idx++) {
            FUN_0c06233a(ACTOR(idx), ((int)g_res_font), layout_row[24] + (signed char)obj[0xEE] * 2 + idx);
            *ACTOR(idx) = 0;
            *(Vec3i *)(ACTOR(idx) + 4) = *(Vec3i *)layout_row;
            *(Vec3i *)(ACTOR(idx) + 28) = *(Vec3i *)(layout_row + 12);
            *(short *)(ACTOR(idx) + 2) = 0x11F;
        }
        COUNTER = 1;
        STYLE_NUM = STYLE_SRC;
        STATE = STATE + 1;
    } else if (STATE != 1) {
        obj_destroy(obj);
        return;
    }
    if (g_game_state != 7) {
        STATE = STATE + 1;
    }
    obj[1] = STYLE_NUM > 9 ? 0 : 1;
    if (STYLE_NUM != STYLE_SRC) {
        STYLE_NUM = STYLE_SRC;
        tint_rows = (Float4 *)0xC32DEC4;
        for (idx = 0; idx < 2; idx++) {
            FUN_0c06233a(ACTOR(idx), ((int)g_res_font), layout_row[24] + (signed char)obj[0xEE] * 2 + idx);
            *ACTOR(idx) = 0;
            *(Vec3i *)(ACTOR(idx) + 4) = *(Vec3i *)layout_row;
            *(Vec3i *)(ACTOR(idx) + 28) = *(Vec3i *)(layout_row + 12);
            if (idx == 0) {
                *(short *)(ACTOR(idx) + 2) = 0x71F;
                *(float *)(ACTOR(idx) + 64) = tint_rows[STYLE_NUM].f0;
            } else {
                *(short *)(ACTOR(idx) + 2) = 0x31F;
            }
            *(float *)(ACTOR(idx) + 68) = tint_rows[STYLE_NUM].f1;
            *(float *)(ACTOR(idx) + 72) = tint_rows[STYLE_NUM].f2;
            *(float *)(ACTOR(idx) + 76) = tint_rows[STYLE_NUM].f3;
        }
        COUNTER = 1;
        SUBSTATE = 0;
    }
    switch (SUBSTATE) {
    case 0:
        COUNTER = COUNTER - 1;
        if (COUNTER == 0) {
            COUNTER = 1;
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    case 1:
        COUNTER = COUNTER - 1;
        if (COUNTER == 0) {
            *ACTOR(0) = 1;
            *ACTOR(1) = 1;
            *(float *)(ACTOR(0) + 12) = 0.0f;
            *(float *)(ACTOR(1) + 12) = 0.0f;
            *(float *)(ACTOR(0) + 36) = 1.0f;
            *(float *)(ACTOR(1) + 36) = 1.0f;
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    case 2:
        *(float *)(ACTOR(0) + 12) -= 0.19999998807907104f;
        *(float *)(ACTOR(1) + 12) -= 0.19999998807907104f;
        if (!(*(float *)(ACTOR(1) + 12) > -5.0f)) {
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    case 3:
        *(float *)(ACTOR(0) + 36) -= 0.03999999910593033f;
        *(float *)(ACTOR(1) + 36) -= 0.03999999910593033f;
        if (0.0f > *(float *)(ACTOR(1) + 36)) {
            COUNTER = 60;
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    case 4:
        COUNTER = COUNTER - 1;
        if (COUNTER == 0) {
            STATE = STATE + 1;
        }
        break;
    }
}
