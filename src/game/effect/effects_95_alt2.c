/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c042728-0c043384) */

struct vec3i { int x, y, z; };
struct spawn_req { char kind_id; struct vec3i pos; };
struct fx_obj { char pad[0x2E0]; float *child; char pad2[0x28]; float field_780; };
extern int math_vec3_add(struct vec3i *, struct vec3i *, void *);
extern struct fx_obj *fx_spawn_burst_slot(int, int, int, struct vec3i *, int, void *);

void fx_spawn_effect_at_point(char obj, struct vec3i *arg1)
{
    struct spawn_req req;
    struct fx_obj *fx;

    req.kind_id = obj;
    req.pos = *arg1;
    math_vec3_add(&req.pos, &req.pos, (char *)0xC149DF4 + (signed char)(((*(int *)0xC7F3014 >> 1) & 7) * 12));
    fx = fx_spawn_burst_slot(req.kind_id, 1, 1, &req.pos, 0, (char *)0xC149E54 + (signed char)((*(char *)0xC7F3014 & 3) * 12));
    if (fx) {
        fx->child[16] = 1.0f;
        fx->child[17] = 1.0f;
        fx->child[18] = 1.0f;
        fx->child[19] = 1.0f;
        fx->field_780 = 1.0f;
    }
}
