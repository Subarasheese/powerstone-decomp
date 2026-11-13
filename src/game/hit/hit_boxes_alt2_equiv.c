/* hit box data converters, per-frame object lists, hit edit draw (0c0203d0-0c022228) */

int FUN_0c02180c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
struct vec3 { float x, y, z; };
struct vec4 { struct vec3 xyz; float w; };
struct owner_obj {
    char pad_00[80];
    float scale;            /* 80 */
    char pad_54[24];
    char mat[1];            /* 108 */
};
void math_mat_transform_point(struct vec4 *, char *);
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c02114c(int, float, float, float, float);
float FUN_0c0211d0(float, float, float, float, float, float, float);

void hit_load_sphere_world(struct owner_obj *obj, struct vec4 *dst, struct vec4 *src)
{
    math_mat_transform_point(src, obj->mat);
    dst->xyz = src->xyz;
    dst->w = src->w * obj->scale;
}

