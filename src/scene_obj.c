/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c0559bc-0c055d38) */

/* named globals (symbols.txt) */
extern char g_res_font[];
typedef struct { int x, y, z; } vec3_int;
extern int FUN_0c0d5188(void);
extern void FUN_0c06233a(void *, int, int);
extern int obj_destroy(void *);
extern signed char g_7f304b;
#define STATE (*(signed char *)(obj + 8))
#define SUBSTATE (*(signed char *)(obj + 9))
#define COUNTER (*(short *)(obj + 0xEC))
#define KIND (*(signed char *)(obj + 4))
#define CHILD1 (*(char **)(obj + 0x2E0))
#define CHILD2 (*(char **)(obj + 0x2E4))

void fx_tick_055cba(char *obj)
{
    char *row;
    int seq_a, seq_b;
    float fade_step = 0.04999999701976776f;

    if (FUN_0c0d5188() != 0) {
        STATE = 2;
    }
    if (STATE == 0) {
        obj[1] = 1;
        *(short *)(obj + 6) = 31;
        obj[5] = 25;
        row = (char *)0xC14AC48 + (short)(KIND * 28);
        if (KIND == 10) {
            seq_a = row[24] + g_7f304b;
            seq_b = row[25] + g_7f304b * 2;
        } else {
            seq_a = row[24];
            seq_b = row[25] + 1;
        }
        FUN_0c06233a(CHILD1, ((int)g_res_font), seq_a);
        *CHILD1 = 0;
        *(vec3_int *)(CHILD1 + 4) = *(vec3_int *)row;
        *(vec3_int *)(CHILD1 + 28) = *(vec3_int *)(row + 12);
        *(short *)(CHILD1 + 2) = 0x11F;
        FUN_0c06233a(CHILD2, ((int)g_res_font), seq_b);
        *CHILD2 = 0;
        *(vec3_int *)(CHILD2 + 4) = *(vec3_int *)row;
        *(vec3_int *)(CHILD2 + 28) = *(vec3_int *)(row + 12);
        *(short *)(CHILD2 + 2) = 0x31F;
        *(float *)(CHILD2 + 68) = 1.0f;
        *(float *)(CHILD2 + 72) = 0.699999988079071f;
        *(float *)(CHILD2 + 76) = 0.0f;
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
            COUNTER = KIND * 2 + 1;
            SUBSTATE = SUBSTATE + 1;
        }
        /* fall through */
    case 1:
        COUNTER = COUNTER - 1;
        if (COUNTER == 0) {
            *CHILD2 = 1;
            *(float *)(CHILD2 + 36) = 0.0f;
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    case 2:
        *(float *)(CHILD2 + 36) += fade_step;
        if (*(float *)(CHILD2 + 36) > 0.5f) {
            *CHILD1 = 1;
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    case 3:
        *(float *)(CHILD2 + 36) -= fade_step;
        if (0.0f > *(float *)(CHILD2 + 36)) {
            *(short *)(CHILD1 + 2) = 0x71F;
            *(float *)(CHILD1 + 64) = 1.0f;
            *(float *)(CHILD1 + 68) = 1.0f;
            *(float *)(CHILD1 + 72) = 1.0f;
            *(float *)(CHILD1 + 76) = 1.0f;
            *CHILD2 = 0;
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    case 4:
        *(float *)(CHILD1 + 64) -= fade_step;
        if (0.0f > *(float *)(CHILD1 + 64)) {
            STATE = STATE + 1;
        }
        break;
    }
}
