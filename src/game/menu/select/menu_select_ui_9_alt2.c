/* UI task objects (spawn/update pairs) of the player-select and stage-select screens (0c0a9d9c-0c0aba84) */

/* named globals (symbols.txt) */
extern char g_res_font[];
typedef struct { int x, y, z; } Vec12;
extern int FUN_0c0d5188(void);
extern void FUN_0c06233a(void *, int, int);
extern int obj_destroy(void *);
extern void menu_ui_spawn_37(void);
#define STATE (*(signed char *)(obj + 8))
#define SUBSTATE (*(signed char *)(obj + 9))
#define COUNTER (*(short *)(obj + 0xEC))
#define BYTE4 (*(signed char *)(obj + 4))
#define CHILD(i) (*(char **)(obj + 0x2E0 + 4 * (i)))

void menu_ui_task_33(char *obj)
{
    char *cfg;
    int i;
    char *flags;

    if (FUN_0c0d5188() != 0) {
        obj_destroy(obj);
        return;
    }
    if (STATE == 0) {
        STATE = STATE + 1;
        SUBSTATE = 0;
        obj[1] = 1;
        *(short *)(obj + 6) = 31;
        obj[5] = 25;
        cfg = (char *)0xC152C8C + (signed char)(BYTE4 * 28);
        for (i = 0; i < 2; i++) {
            FUN_0c06233a(CHILD(i), ((int)g_res_font), cfg[24] + i);
            *CHILD(i) = 0;
            *(Vec12 *)(CHILD(i) + 4) = *(Vec12 *)cfg;
            *(Vec12 *)(CHILD(i) + 28) = *(Vec12 *)(cfg + 12);
            *(short *)(CHILD(i) + 2) = 799;
            *(float *)(CHILD(i) + 68) = 1.0f;
            *(float *)(CHILD(i) + 72) = 0.0f;
            *(float *)(CHILD(i) + 76) = 0.0f;
        }
    } else if (STATE != 1) {
        obj_destroy(obj);
        return;
    }
    switch (SUBSTATE) {
    case 0:
        SUBSTATE = SUBSTATE + 1;
        COUNTER = 1;
        /* fall through */
    case 1:
        COUNTER = COUNTER - 1;
        if (COUNTER == 0) {
            *CHILD(1) = 1;
            *(float *)(CHILD(1) + 36) = 1.0f;
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    case 2:
        *(float *)(CHILD(0) + 12) -= 0.19999998807907104f;
        *(float *)(CHILD(1) + 12) -= 0.19999998807907104f;
        if (!(*(float *)(CHILD(1) + 12) > -10.0f)) {
            *CHILD(0) = 1;
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    case 3:
        *(float *)(CHILD(1) + 36) -= 0.03999999910593033f;
        if (0.0f > *(float *)(CHILD(1) + 36)) {
            *(short *)(CHILD(0) + 2) = 0x71F;
            *(float *)(CHILD(0) + 64) = 1.0f;
            COUNTER = 25;
            SUBSTATE = SUBSTATE + 1;
            menu_ui_spawn_37();
            flags = (char *)0xC7F31BC;
            flags[20] = 1;
            flags[21] = 6;
        }
        break;
    case 4:
        *(float *)(CHILD(0) + 72) += 0.03999999910593033f;
        *(float *)(CHILD(0) + 76) += 0.03999999910593033f;
        COUNTER = COUNTER - 1;
        if (COUNTER == 0) {
            COUNTER = 25;
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    case 5:
        COUNTER = COUNTER - 1;
        if (COUNTER == 0) {
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    }
}
