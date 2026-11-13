/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c055d38-0c05600c) */

/* named globals (symbols.txt) */
extern char g_res_font[];
typedef struct { int x, y, z; } vec3_int;
extern int FUN_0c0d5188(void);
extern void FUN_0c06233a(void *, int, int);
extern int obj_destroy(void *);
#define STATE (*(signed char *)(obj + 8))
#define SUBSTATE (*(signed char *)(obj + 9))
#define COUNTER (*(short *)(obj + 0xEC))
#define CHILD1 (*(char **)(obj + 0x2E0))
#define CHILD2 (*(char **)(obj + 0x2E4))

static void setup(char *child, char *row)
{
    *child = 0;
    *(vec3_int *)(child + 4) = *(vec3_int *)row;
    *(vec3_int *)(child + 28) = *(vec3_int *)(row + 12);
    *(short *)(child + 2) = 0x31F;
    *(float *)(child + 68) = 1.0f;
    *(float *)(child + 72) = 0.0f;
    *(float *)(child + 76) = 0.0f;
}

void fx_tick_05600c(char *obj)
{
    char *row;
    float fade_step = 0.03999999910593033f;

    if (FUN_0c0d5188() != 0) {
        STATE = 2;
    }
    if (STATE == 0) {
        obj[1] = 1;
        *(short *)(obj + 6) = 31;
        obj[5] = 25;
        row = (char *)0xC14AD88 + (unsigned char)((unsigned short)(signed char)obj[4] * 28);
        FUN_0c06233a(CHILD1, ((int)g_res_font), row[24]);
        setup(CHILD1, row);
        FUN_0c06233a(CHILD2, ((int)g_res_font), row[25] + 1);
        setup(CHILD2, row);
        COUNTER = 1;
        STATE = STATE + 1;
    } else if (STATE != 1) {
        obj_destroy(obj);
        return;
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
            *CHILD1 = 1;
            *CHILD2 = 1;
            *(float *)(CHILD1 + 12) = 0.0f;
            *(float *)(CHILD2 + 12) = 0.0f;
            *(float *)(CHILD2 + 36) = 0.29999998211860657f;
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    case 2:
        *(float *)(CHILD1 + 12) -= 0.19999998807907104f;
        *(float *)(CHILD2 + 12) -= 0.19999998807907104f;
        if (!(*(float *)(CHILD2 + 12) > -5.0f)) {
            *CHILD1 = 1;
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    case 3:
        *(float *)(CHILD2 + 36) -= 0.0299999993f;
        if (0.0f > *(float *)(CHILD2 + 36)) {
            *(short *)(CHILD1 + 2) = 0x71F;
            *(float *)(CHILD1 + 64) = 1.0f;
            COUNTER = 25;
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    case 4:
        *(float *)(CHILD1 + 72) += fade_step;
        *(float *)(CHILD1 + 76) += fade_step;
        COUNTER = COUNTER - 1;
        if (COUNTER == 0) {
            COUNTER = 25;
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    case 5:
        *(float *)(CHILD1 + 64) -= fade_step;
        COUNTER = COUNTER - 1;
        if (COUNTER == 0) {
            STATE = STATE + 1;
        }
        break;
    }
}
