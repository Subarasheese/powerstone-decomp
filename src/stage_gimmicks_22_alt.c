/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b13c8-0c0b1b34) */

struct vec3_float { float x, y, z; };
struct actor { int field_0; struct vec3_float pos; };
void math_vec3_sub(struct vec3_float *, struct vec3_float *, struct vec3_float *);
void math_vec3_length(struct vec3_float *);

void FUN_0c0b1652(struct actor *actor_a, struct actor *actor_b)
{
    struct vec3_float vec_a, vec_b;
    vec_b = actor_b->pos;
    vec_a = actor_a->pos;
    vec_b.y = 0.0f;
    vec_a.y = 0.0f;
    math_vec3_sub(&vec_b, &vec_b, &vec_a);
    math_vec3_length(&vec_b);
}
