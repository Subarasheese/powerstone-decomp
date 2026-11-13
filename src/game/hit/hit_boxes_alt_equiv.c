/* hit box data converters, per-frame object lists, hit edit draw (0c0203d0-0c022228) */

/* named globals (symbols.txt) */
int FUN_0c0215b8(int a4, int a5, int a6, int a7);
int FUN_0c020998(int a4, int a5, int a6, int a7);
extern char g_obj_class_head[];
extern char g_obj_list_heads[];
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
int FUN_0c02067e(int);
extern int FUN_0c0207ca();
typedef struct { int x, y, z; } vec3_int;
extern void math_mat_transform_point(void *, void *);
typedef struct { int x, y, z; } S12;
typedef struct { int x, y, z; } Vec12;
int hit_load_box_world(int, int, int);
int hit_get_box_entry(int, int, int);
struct o10_float { char p[0x10]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c02114c(int, float, float, float, float);
float FUN_0c0211d0(float, float, float, float);
float math_signed_sqrt(float);
struct Vec3f { float x, y, z; };
extern float math_signed_sqrt(float x);
extern void FUN_0c021178(struct Vec3f *out, struct Vec3f body_a, struct Vec3f body_b);

int FUN_0c02078c(void)
{
    FUN_0c02067e(0xC7E40C4);
    FUN_0c02067e(((((struct o0_int *)g_obj_list_heads)->v)));
    return FUN_0c02067e(((((struct o4_int *)g_obj_list_heads)->v)));
}

int FUN_0c020886(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t9;

    t0 = ((int)g_obj_class_head);
    t1 = a4;
    for (;;) {
        if (t1 == 0) {
            break;
        }
        t2 = 0x101;
        t3 = (*(signed char *)((t1 + t2)));
        t4 = t0;
        if (t3 != 0) {
            t2 = 0x105;
            t5 = (*(signed char *)((t1 + t2)));
            if (t5 == 0) {
                t0 = t1;
                t2 = (((int (*)(int, int, int, int))(FUN_0c0207ca))(t0, 0xC7E40C4, a6, a7));
                t0 = t1;
                t2 = (((int (*)(int, int))(FUN_0c0207ca))(t0, ((((struct o0_int *)g_obj_list_heads)->v))));
                t0 = t1;
                t2 = (((int (*)(int, int))(FUN_0c0207ca))(t0, ((((struct o4_int *)g_obj_list_heads)->v))));
            } else {
                t6 = t3;
                t7 = t5;
                t4 = t0;
            }
            t9 = t6;
            t6 = t7;
        } else {
            t9 = t3;
            t6 = t5;
        }
        t1 = (*(int *)((t1 + 0x18)));
        t3 = t9;
        t5 = t6;
        t0 = t4;
    }
    return t2;
}


void FUN_0c020cba(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        return;
    }
    ((int (*)(int, int, int, int))(0xC020C8E))(a4, a5, a6, a7);
}

void hit_load_cylinder_world_dup(char *src_obj, char *dst, char *src_vec)
{
    math_mat_transform_point(src_vec, src_obj + 108);
    *(vec3_int *)dst = *(vec3_int *)src_vec;
    *(float *)(dst + 12) = *(float *)(src_obj + 80) * *(float *)(src_vec + 12);
    *(float *)(dst + 16) = *(float *)(src_obj + 84) * *(float *)(src_vec + 16);
}

void hit_load_sphere_world_dup(char *base, char *dst, char *vec)
{
    math_mat_transform_point(vec, base + 108);
    *(S12 *)dst = *(S12 *)vec;
    *(float *)(dst + 12) = *(float *)(base + 80) * *(float *)(vec + 12);
}

void hit_load_cylinder_world(char *src, char *dst, char *vec)
{
    math_mat_transform_point(vec, src + 108);
    *(Vec12 *)dst = *(Vec12 *)vec;
    *(float *)(dst + 12) = *(float *)(vec + 12) * *(float *)(src + 80);
    *(float *)(dst + 16) = *(float *)(vec + 16) * *(float *)(src + 84);
}

int FUN_0c0210c8(int a4, int a5, int a6)
{
    int stk[9];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    hit_get_box_entry((*(int *)(((int)stk + 0))), (*(short *)(((*(int *)(((int)stk + 8))) + 0x2))), (((int)stk + 0) + 0xC));
    return (hit_load_box_world((*(int *)(((int)stk + 0))), (*(int *)(((int)stk + 4))), (((int)stk + 0) + 0xC)));
}


int hit_push_apart_spheres(char *body_a, char *body_b, float *sphere_a, float *sphere_b)
{
    float dx, dy, dz, dist, pen, radius_sum;
    struct Vec3f dir;
    float push_x, push_z;
    radius_sum = sphere_a[3] + sphere_b[3];
    dx = sphere_a[0] - sphere_b[0];
    dy = sphere_a[1] - sphere_b[1];
    dz = sphere_a[2] - sphere_b[2];
    dist = math_signed_sqrt(dy * dy + dx * dx + dz * dz);
    pen = radius_sum - dist;
    if (0.0f > pen)
        return 0;
    if (body_a[729] == 2) return 1;
    if (body_b[729] == 2) return 1;
    if (body_a[729] != 0 && body_b[729] != 0) return 1;
    FUN_0c021178(&dir, *(struct Vec3f *)sphere_b, *(struct Vec3f *)sphere_a);
    push_x = dir.x * pen;
    if (body_a[729] != 0) {
        *(float *)(body_b + 32) += -push_x;
        *(float *)(body_b + 40) += -(dir.z * pen);
    } else if (body_b[729] != 0) {
        *(float *)(body_a + 32) += push_x;
        *(float *)(body_a + 40) += pen * dir.z;
    } else {
        push_x = push_x / 2.0f;
        *(float *)(body_a + 32) += push_x;
        push_z = dir.z * pen;
        *(float *)(body_a + 40) += push_z / 2.0f;
        *(float *)(body_b + 32) += -(dir.x * pen) / 2.0f;
        *(float *)(body_b + 40) += -(dir.z * pen) / 2.0f;
    }
    return 1;
}
