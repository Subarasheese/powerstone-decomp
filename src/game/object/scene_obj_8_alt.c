/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c057128-0c057850) */

/* named globals (symbols.txt) */
extern char g_res_font[];
struct Vec3i { int x, y, z; };
struct Obj { char used; char pad[3]; char index; char pad1[11]; void *handler; char pad2[60]; struct Vec3i offset; char pad3[150]; short owner; };
extern int fx_tick_0574d2(void);
extern struct Obj *obj_create(int, int, int, int);
typedef struct { int x, y, z; } S12;
extern int FUN_0c0d5188(void);
extern int FUN_0c055634(void);
extern void FUN_0c06233a(void *, int, int);
extern int obj_destroy(void *);
#define ST (*(signed char *)(actor + 8))
#define SUB (*(signed char *)(actor + 9))
#define CNT (*(short *)(actor + 0xEC))
#define O1 (*(char **)(actor + 0x2E0))
#define O2 (*(char **)(actor + 0x2E4))

static void setup(char *part, char *row)
{
    *part = 0;
    *(S12 *)(part + 4) = *(S12 *)row;
    *(S12 *)(part + 28) = *(S12 *)(row + 12);
    *(short *)(part + 2) = 0x31F;
    *(float *)(part + 68) = 1.0f;
    *(float *)(part + 72) = 0.0f;
    *(float *)(part + 76) = 0.0f;
}

void fx_spawn_0574d2(int owner_idx)
{
    struct Vec3i offset;
    struct Obj *obj;
    int idx;
    int count;

    offset = *(struct Vec3i *)0xC14B894;
    count = *(signed char *)(0xC32DE68 + owner_idx);
    for (idx = 0; idx < count; idx++) {
        obj = obj_create(5, 1, 2, 0);
        if (obj) {
            obj->used = 1;
            obj->index = idx;
            obj->owner = owner_idx;
            obj->handler = (void *)fx_tick_0574d2;
            obj->offset = offset;
        }
    }
}

void fx_tick_0577ca(char *actor)
{
    char *row;

    if (FUN_0c0d5188() != 0 || FUN_0c055634() != 0) {
        ST = 2;
    }
    if (ST == 0) {
        actor[1] = 1;
        *(short *)(actor + 6) = 31;
        actor[5] = 25;
        row = (char *)0xC14B8A0 + (unsigned char)((unsigned short)(signed char)actor[4] * 28);
        FUN_0c06233a(O1, ((int)g_res_font), row[24]);
        setup(O1, row);
        FUN_0c06233a(O2, ((int)g_res_font), row[25] + 1);
        setup(O2, row);
        CNT = 1;
        ST = ST + 1;
    } else if (ST != 1) {
        obj_destroy(actor);
        return;
    }
    switch (SUB) {
    case 0:
        CNT = CNT - 1;
        if (CNT == 0) {
            CNT = 1;
            SUB = SUB + 1;
        }
        break;
    case 1:
        CNT = CNT - 1;
        if (CNT == 0) {
            *O1 = 1;
            *O2 = 1;
            *(float *)(O1 + 12) = 0.0f;
            *(float *)(O2 + 12) = 0.0f;
            *(float *)(O2 + 36) = 1.0f;
            SUB = SUB + 1;
        }
        break;
    case 2:
        *(float *)(O1 + 12) -= 0.19999998807907104f;
        *(float *)(O2 + 12) -= 0.19999998807907104f;
        if (!(*(float *)(O2 + 12) > -5.0f)) {
            *O1 = 1;
            SUB = SUB + 1;
        }
        break;
    case 3:
        *(float *)(O2 + 36) -= 0.0399999991f;
        if (0.0f > *(float *)(O2 + 36)) {
            CNT = 60;
            SUB = SUB + 1;
        }
        break;
    case 4:
        CNT = CNT - 1;
        if (CNT == 0) {
            ST = ST + 1;
        }
        break;
    }
}
