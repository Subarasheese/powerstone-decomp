/* light/ambient helpers (vector sub/normalize, nlObjPutSetGlobalAmbience) using the slot records (0c05f6d8-0c05fc50) */

struct vec3_int { int x, y, z; };
struct camera {
    char pad0[20];
    struct vec3_int vec_20;
    char pad_v[12];
    struct vec3_int vec_44;
    char pad1[68 - 44 - 12];
    char transform[4];
    float blend;
    char pad2[112 - 72 - 4];
    float scale;
};
void math_vec3_sub(char *dst, struct vec3_int *a, struct vec3_int *b);
void math_vec3_normalize(char *transform);

void cam_init_from_stage_block(struct camera *cam)
{
    char *src_block = (char *)0xC7F29F8;
    cam->scale = 1.0f;
    cam->vec_20 = *(struct vec3_int *)(src_block + 188);
    cam->vec_44 = *(struct vec3_int *)(src_block + 236);
    math_vec3_sub(cam->transform, &cam->vec_20, &cam->vec_44);
    cam->blend = 0.0f;
    math_vec3_normalize(cam->transform);
    cam->blend = 1.0f;
    math_vec3_normalize(cam->transform);
}
