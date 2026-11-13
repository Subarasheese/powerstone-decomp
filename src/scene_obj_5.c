/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c0567c4-0c056bb4) */

struct vec3_int { int x, y, z; };
struct spawn_obj { char used; char pad[3]; char index; char pad1[11]; void *handler; char pad2[60]; struct vec3_int vec; };
extern int fx_tick_0567c4(void);
extern struct spawn_obj *obj_create(int, int, int, int);
typedef struct { int x, y, z; } Vec3i;
extern int FUN_0c0d5188(void);
extern void FUN_0c06233a(void *, int, int);
extern int obj_destroy(void *);
#define STATE (*(signed char *)(obj + 8))
#define SUBSTATE (*(signed char *)(obj + 9))
#define COUNTER (*(short *)(obj + 0xEC))
#define ROW_INDEX (*(signed char *)(obj + 4))
#define ACTOR_A (*(char **)(obj + 0x2E0))
#define ACTOR_B (*(char **)(obj + 0x2E4))

void fx_spawn_0567c4(void)
{
    struct vec3_int vec;
    struct spawn_obj *obj;
    int i;

    vec = *(struct vec3_int *)0xC14B014;
    for (i = 0; i < 7; i++) {
        obj = obj_create(6, 1, 1, 0);
        if (obj) {
            obj->used = 1;
            obj->index = i;
            obj->handler = (void *)fx_tick_0567c4;
            obj->vec = vec;
        }
    }
}

void fx_tick_056b2c(char *obj)
{
    char *layout_row;

    if (FUN_0c0d5188() != 0) {
        STATE = 2;
    }
    if (STATE == 0) {
        obj[1] = 1;
        *(short *)(obj + 6) = 31;
        obj[5] = 25;
        layout_row = (char *)0xC14B020 + (unsigned char)((unsigned short)ROW_INDEX * 28);
        FUN_0c06233a(ACTOR_A, 0xC4CFA80, layout_row[24]);
        *ACTOR_A = 0;
        *(Vec3i *)(ACTOR_A + 4) = *(Vec3i *)layout_row;
        *(Vec3i *)(ACTOR_A + 28) = *(Vec3i *)(layout_row + 12);
        *(short *)(ACTOR_A + 2) = 0x31F;
        if (ROW_INDEX < 6) {
            *(float *)(ACTOR_A + 68) = 0.0f;
            *(float *)(ACTOR_A + 72) = 0.0f;
            *(float *)(ACTOR_A + 76) = 1.0f;
        } else {
            *(float *)(ACTOR_A + 68) = 1.0f;
            *(float *)(ACTOR_A + 72) = 0.29999998211860657f;
            *(float *)(ACTOR_A + 76) = 0.0f;
        }
        FUN_0c06233a(ACTOR_B, 0xC4CFA80, layout_row[25] + 1);
        *ACTOR_B = 0;
        *(Vec3i *)(ACTOR_B + 4) = *(Vec3i *)layout_row;
        *(Vec3i *)(ACTOR_B + 28) = *(Vec3i *)(layout_row + 12);
        *(short *)(ACTOR_B + 2) = 0x11F;
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
            COUNTER = ROW_INDEX * 5 + 1;
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    case 1:
        COUNTER = COUNTER - 1;
        if (COUNTER == 0) {
            *ACTOR_A = 1;
            *ACTOR_B = 1;
            *(float *)(ACTOR_A + 12) = 0.0f;
            *(float *)(ACTOR_B + 12) = 0.0f;
            *(float *)(ACTOR_B + 36) = 1.0f;
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    case 2:
        *(float *)(ACTOR_A + 12) -= 0.19999998807907104f;
        *(float *)(ACTOR_B + 12) -= 0.19999998807907104f;
        if (!(*(float *)(ACTOR_B + 12) > -5.0f)) {
            *ACTOR_A = 1;
            SUBSTATE = SUBSTATE + 1;
        }
        break;
    case 3:
        *(float *)(ACTOR_B + 36) -= 0.0399999991f;
        if (0.0f > *(float *)(ACTOR_B + 36)) {
            COUNTER = 60 - ROW_INDEX * 5;
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
