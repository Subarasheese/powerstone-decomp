/* attract/demo screen objects (bank SYUKYAKU/DEMO COMN) (0c029268-0c029660) */

float math_cos_angle16(int angle);
float math_sin_angle16(int angle);
void math_vec3_add(float *a, float *b, float *c);
void obj_destroy(char *o, int **anim);
typedef struct { float x, y, z; } VEC3;
#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define PART(o, i) (((char **)((o) + 0x2E0))[i])
#define END ((float *)0x0C148DDC)
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
struct pair_ints { int vals[2]; };
struct actor_rec {
    char active;                /* 0x00 */
    char field_1;                /* 0x01 */
    char pad_2;
    char field_3;                /* 0x03 */
    char kind;              /* 0x04 */
    char field_5;                /* 0x05 */
    unsigned short flags;   /* 0x06 */
    char pad_8[0x10 - 8];
    int tick_fn;                 /* 0x10 */
    char pad_14[0x20 - 0x14];
    float pos_x, pos_y, pos_z;    /* 0x20 */
    int field_2c, field_30, field_34;      /* 0x2C */
    char pad_38[0xEC - 0x38];
    unsigned short timer_a;      /* 0xEC */
    unsigned short timer_b;      /* 0xEE */
    char pad_f0[2];
    unsigned short slot_index;     /* 0xF2 */
};
struct child_obj { char active; char field_1; unsigned short flags; };

void FUN_0c029268(char *o)
{
    char *e;
    int i;
    float a;
    int **anim = 0;

    if (B(o, 8) == 0) {
        B(o, 8) = B(o, 8) + 1;
        H(o, 0xF0) = 0;
        if (B(o, 4) == 0) {
            for (i = 0; i < B(o, 0x2DC); i++) {
                e = PART(o, i);
                *(VEC3 *)(e + 4) = *(VEC3 *)0x0C148DD0;
                a = 960.0f / (float)H(o, 0xEE);
                F(e, 0x28) = a * math_sin_angle16((int)((float)((H(o, 0xF2) + i * 2) * 5) * 65536.0f / 360.0f));
                a = 832.0f / (float)H(o, 0xEE);
                F(e, 0x2C) = a * math_cos_angle16((int)((float)((H(o, 0xF2) + i * 2) * 5) * 65536.0f / 360.0f));
                F(e, 0x30) = 0.0f;
                F(e, 0x20) = 1.0f;
                F(e, 0x1C) = 1.0f;
                *(int *)(e + 0x18) = -(int)((float)((H(o, 0xF2) + 1) * i * 5) * 65536.0f / 360.0f);
            }
        } else {
            e = PART(o, 0);
            *(VEC3 *)(e + 4) = *(VEC3 *)END;
            F(e, 0x24) = 1.0f;
            F(e, 0x20) = 1.0f;
            F(e, 0x1C) = 1.0f;
            H(o, 0xF2) = 10;
        }
    }
    if (B(o, 4) == 0) {
        for (i = 0; i < B(o, 0x2DC); i++) {
            e = PART(o, i);
            math_vec3_add((float *)(e + 4), (float *)(e + 4), (float *)(e + 40));
            F(e, 0x20) = F(e, 0x20) + 2.0f / (float)H(o, 0xEE);
            F(e, 0x1C) = F(e, 0x20);
        }
    } else if (H(o, 0xF2) != 0) {
        F(PART(o, 0), 4) = F(PART(o, 0), 4) + (END[3] - END[0]) / 10.0f;
        H(o, 0xF2) = H(o, 0xF2) - 1;
        if (H(o, 0xF2) == 0)
            F(PART(o, 0), 4) = END[3];
    }
    if (H(o, 0xEC) & 1) {
        H(o, 0xF0) = H(o, 0xF0) + 1;
        H(o, 0xF0) = H(o, 0xF0) & 7;
        anim = (int **)0x0C6649E8;
        for (i = 0; i < B(o, 0x2DC); i++) {
            e = PART(o, i);
            *(int *)(e + 0x9C) = anim[2][((int *)0x0C148DF4)[H(o, 0xF0)]];
        }
    }
    F(e, 0x98) = F(e, 0x1C);
    if (1.0f > F(e, 0x98))
        F(e, 0x98) = 1.0f;
    if (F(e, 0x20) > F(e, 0x98))
        F(e, 0x98) = F(e, 0x20);
    H(o, 0xEC) = H(o, 0xEC) - 1;
    if (H(o, 0xEC) <= 0)
        obj_destroy(o, anim);
}

void demo_spawn_effect_actors(int kind, int sprite_count)
{
    struct pair_ints kind_table;
    int count, child_count, i, j;
    struct actor_rec *actor;
    struct child_obj **child_ptr;

    kind_table = *(struct pair_ints *)0xC148E14;
    if (*(int *)0xC386830 != 0) {
        sprite_count = (int)((float)sprite_count * 0.833333313f);
    }
    child_count = kind_table.vals[kind];
    count = (kind == 0) ? 2 : 1;
    for (i = 0; i < count; i++) {
        actor = (struct actor_rec *)obj_create(5, 1, child_count, 0);
        if (actor == 0) {
            continue;
        }
        actor->tick_fn = 0xC029268;
        actor->active = 1;
        actor->field_3 = 2;
        actor->field_1 = 1;
        actor->kind = kind;
        actor->flags = 15;
        actor->field_5 = 0;
        actor->pos_z = 0.0f;
        actor->pos_y = 0.0f;
        actor->pos_x = 0.0f;
        actor->field_34 = 0;
        actor->field_30 = 0;
        actor->field_2c = 0;
        child_ptr = (struct child_obj **)((char *)actor + 0x2E0);
        if (child_count > 0) {
            j = 0;
            do {
                struct child_obj *child = *child_ptr++;
                child->active = 1;
                child->field_1 = 0;
                child->flags = 0x101F;
                FUN_0c06233a((int)child, 0xC6649E8, 0x1C);
                j++;
            } while (j < child_count);
        }
        actor->timer_b = sprite_count;
        actor->timer_a = sprite_count;
        actor->slot_index = i;
    }
}
