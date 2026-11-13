/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c05600c-0c056340) */

/* named globals (symbols.txt) */
extern char g_res_font[];
struct Vec3 { float x, y, z; };
struct TaskObj {
    char live;
    char pad_01[3];
    char tag;               /* 4 */
    char pad_05[11];
    void (*update)(void);   /* 16 */
    char pad_14[60];
    struct Vec3 pos;          /* 80 */
};
struct TaskObj *obj_create(int, int, int, int);
void fx_tick_05600c(void);
typedef struct { int a, b, c; } vec3i;
extern int FUN_0c0d5188(void);
extern void FUN_0c06233a(void *, int, int);
extern int obj_destroy(void *);
#define STATE (*(signed char *)(effect + 8))
#define SUBSTATE (*(signed char *)(effect + 9))
#define COUNTER (*(short *)(effect + 0xEC))
#define PARAM4 (*(signed char *)(effect + 4))
#define PART1 (*(char **)(effect + 0x2E0))
#define PART2 (*(char **)(effect + 0x2E4))

void fx_spawn_05600c(void)
{
    struct Vec3 tmpl;
    struct TaskObj *obj;
    int i;
    tmpl = *(struct Vec3 *)0xC14AE4C;
    for (i = 0; i < 7; i++) {
        obj = obj_create(6, 1, 2, 0);
        if (obj != 0) {
            obj->live = 1;
            obj->tag = i;
            obj->update = fx_tick_05600c;
            obj->pos = tmpl;
        }
    }
}

void fx_tick_056340(char *effect)
{
    char *row;
    float fade = 0.09999999403953552f;

    if (FUN_0c0d5188() != 0) {
        STATE = 2;
    }
    if (STATE == 0) {
        effect[1] = 1;
        *(short *)(effect + 6) = 31;
        effect[5] = 25;
        row = (char *)0xC14AE58 + (signed char)((short)PARAM4 * 28);
        FUN_0c06233a(PART1, ((int)g_res_font), row[24]);
        *PART1 = 0;
        *(vec3i *)(PART1 + 4) = *(vec3i *)row;
        *(vec3i *)(PART1 + 28) = *(vec3i *)(row + 12);
        *(short *)(PART1 + 2) = 0x11F;
        FUN_0c06233a(PART2, ((int)g_res_font), row[25]);
        *PART2 = 0;
        *(vec3i *)(PART2 + 4) = *(vec3i *)row;
        *(vec3i *)(PART2 + 28) = *(vec3i *)(row + 12);
        *(short *)(PART2 + 2) = 0x31F;
        *(float *)(PART2 + 68) = fade;
        *(float *)(PART2 + 72) = fade;
        *(float *)(PART2 + 76) = fade;
        COUNTER = 1;
        STATE = STATE + 1;
    } else if (STATE != 1) {
        obj_destroy(effect);
        return;
    }
    switch (SUBSTATE) {
    case 0:
        COUNTER = COUNTER - 1;
        if (COUNTER == 0) {
            COUNTER = PARAM4 * 10 + 1;
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    case 1:
        COUNTER = COUNTER - 1;
        if (COUNTER == 0) {
            *PART1 = 1;
            *PART2 = 0;
            *(float *)(PART1 + 12) = fade;
            *(float *)(PART2 + 12) = 0.0f;
            *(float *)(PART2 + 36) = 1.0f;
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    case 2:
        *(float *)(PART1 + 12) -= 0.19999998807907104f;
        *(float *)(PART2 + 12) -= 0.19999998807907104f;
        if (!(*(float *)(PART2 + 12) > -5.0f)) {
            COUNTER = 11 - PARAM4 * 10;
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    case 3:
        COUNTER = COUNTER - 1;
        if (COUNTER == 0) {
            *PART2 = 1;
            COUNTER = 5;
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    case 4:
        *(float *)(PART1 + 4) -= 0.009999999776482582f;
        *(float *)(PART1 + 8) += 0.009999999776482582f;
        *(float *)(PART2 + 4) += 0.009999999776482582f;
        *(float *)(PART2 + 8) -= 0.009999999776482582f;
        COUNTER = COUNTER - 1;
        if (COUNTER == 0) {
            COUNTER = 70;
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    case 5:
        COUNTER = COUNTER - 1;
        if (COUNTER == 0) {
            STATE = STATE + 1;
        }
        break;
    }
}
