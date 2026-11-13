/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c042728-0c043384) */

typedef struct { int x, y, z; } vec3_int;
extern char *fx_spawn_burst_slot(int, int, int, vec3_int *, int, vec3_int *);

void fx_spawn_with_params(vec3_int *pos_ptr, float val_a, float val_b, float val_c, float val_d)
{
    vec3_int pos_copy;
    char *obj;

    pos_copy = *pos_ptr;
    obj = fx_spawn_burst_slot(0, 1, 1, &pos_copy, 0, (vec3_int *)0x0C14A110 + (*(char *)0x0C7F307C & 3));
    if (obj) {
        *(float *)(*(char **)(obj + 0x2E0) + 64) = 1.0f;
        *(float *)(*(char **)(obj + 0x2E0) + 68) = val_a;
        *(float *)(*(char **)(obj + 0x2E0) + 72) = val_b;
        *(float *)(*(char **)(obj + 0x2E0) + 76) = val_c;
        *(float *)(obj + 0x308 + 4) = val_d;
    }
}
