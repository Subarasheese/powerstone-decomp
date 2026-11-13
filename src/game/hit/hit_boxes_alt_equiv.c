/* hit box data converters, per-frame object lists, hit edit draw (0c0203d0-0c022228) */

/* named globals (symbols.txt) */
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

int FUN_0c020998(int a4, int a5, int a6, int a7)
{
    return ((int (*)(int, int, int, int))(0xC0209BC))(a4, a5, a6, a7);
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

int FUN_0c0215b8(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u8;
    register float t9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float t16;
    register float u340;
    register float u329;
    register float u318;
    register float u307;
    register float u297;
    register float u104;
    register float u112;
    register float u115;
    register float u119;
    register float u123;
    register float u130;
    register float u133;
    register float u152;
    register float u159;
    register float u162;
    register float u164;
    register float u213;
    register float u226;
    register float u229;
    register float u231;
    register int t335;
    int t76;
    register float u286;
    register float u137;
    register float u126;
    register float u275;
    register float u204;
    register float u189;
    register float u178;
    register int t261;
    register float u265;
    register float u250;
    register float u245;

    u0 = (((struct oC_float *)(a6))->v);
    u1 = (((struct oC_float *)(a7))->v);
    u2 = *(float *)((a6 + 0x0));
    u3 = *(float *)((a7 + 0x0));
    *(float *)(((int)stk + 0)) = (u2 - u3);
    u4 = (((struct o8_float *)(a7))->v);
    u5 = (((struct o8_float *)(a6))->v);
    *(float *)(((int)stk + 4)) = (u5 - u4);
    u8 = ((u5 - u4) * (u5 - u4));
    u8 = u8 + ((u2 - u3)) * ((u2 - u3));
    t9 = math_signed_sqrt(u8);
    u10 = (((struct o4_float *)(a7))->v);
    *(float *)(((int)stk + 12)) = u10;
    u11 = (((struct o10_float *)(a7))->v);
    *(float *)(((int)stk + 20)) = u11;
    u12 = *(float *)(((int)stk + 12));
    u13 = (((struct o4_float *)(a6))->v);
    *(float *)(((int)stk + 16)) = u13;
    u14 = (((struct o10_float *)(a6))->v);
    *(float *)(((int)stk + 8)) = u14;
    t16 = FUN_0c0211d0((u14 + (*(float *)(((int)stk + 16)))), (u13 - u14), (u11 + u12), (u10 - u11));
    u340 = t16;
    if (0.0f > ((u0 + u1) - t9)) {
    } else {
        u329 = t16;
        if (0.0f > t16) {
        } else {
            t261 = *(signed char *)((a4 + 0x2D9));
            t335 = t261;
            u318 = t16;
            if ((signed char)t261 == 2) {
            } else {
                t335 = t261;
                u307 = t16;
                if ((*(signed char *)((a5 + 0x2D9))) == 2) {
                } else {
                    t335 = t261;
                    u297 = t16;
                    if (((signed char)t261 != 0) && (t76 = *(signed char *)((a5 + 0x2D9)), t76 != 0)) {
                    } else {
                        if (t16 > ((u0 + u1) - t9)) {
                            FUN_0c02114c((((int)stk + 0) + 0x18), (*(float *)((a7 + 0x0))), ((((struct o8_float *)(a7))->v)), (*(float *)((a6 + 0x0))), ((((struct o8_float *)(a6))->v)));
                            if ((*(signed char *)((a4 + 0x2D9))) == 0) {
                                if ((*(signed char *)((a5 + 0x2D9))) == 0) {
                                    u104 = *(float *)0xC021868;
                                    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + (((((((struct o18_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9)) / u104)));
                                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (((((((struct o20_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9)) / u104)));
                                    u112 = (((((struct o18_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9));
                                    u112 = -u112;
                                    (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + (u112 / u104));
                                    u115 = (((((struct o20_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9));
                                    u115 = -u115;
                                    (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + (u115 / u104));
                                    u126 = u104;
                                } else {
                                    u119 = ((((struct o20_float *)(a4))->v));
                                    u119 = u119 + (((u0 + u1) - t9)) * ((((struct o18_float *)(((int)stk + 0)))->v));
                                    (((struct o20_float *)(a4))->v) = u119;
                                    u123 = ((((struct o28_float *)(a4))->v));
                                    u123 = u123 + (((u0 + u1) - t9)) * ((((struct o20_float *)(((int)stk + 0)))->v));
                                    (((struct o28_float *)(a4))->v) = u123;
                                }
                                u137 = u126;
                            } else {
                                u130 = (((((struct o18_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9));
                                u130 = -u130;
                                (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + u130);
                                u133 = (((((struct o20_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9));
                                u133 = -u133;
                                (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + u133);
                            }
                            u286 = u137;
                        } else {
                            if (((((struct o4_float *)(a6))->v)) > ((((struct o4_float *)(a7))->v))) {
                                if ((*(signed char *)((a5 + 0x2DA))) != 0) {
                                    FUN_0c02114c((((int)stk + 0) + 0x18), (*(float *)((a7 + 0x0))), ((((struct o8_float *)(a7))->v)), (*(float *)((a6 + 0x0))), ((((struct o8_float *)(a6))->v)));
                                    u152 = ((u0 + u1) - t9);
                                    if (((u0 + u1) - t9) > 5.0f) {
                                        u152 = 5.0f;
                                    }
                                    if ((*(signed char *)((a4 + 0x2D9))) == 0) {
                                        if ((*(signed char *)((a5 + 0x2D9))) != 0) {
                                            u159 = ((((struct o20_float *)(a4))->v));
                                            u159 = u159 + u152 * ((((struct o18_float *)(((int)stk + 0)))->v));
                                            (((struct o20_float *)(a4))->v) = u159;
                                            u162 = ((((struct o28_float *)(a4))->v));
                                            u162 = u162 + u152 * ((((struct o20_float *)(((int)stk + 0)))->v));
                                            (((struct o28_float *)(a4))->v) = u162;
                                        } else {
                                            u164 = *(float *)0xC021868;
                                            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + (((((((struct o18_float *)(((int)stk + 0)))->v)) * u152) / u164)));
                                            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (((((((struct o20_float *)(((int)stk + 0)))->v)) * u152) / u164)));
                                            (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + (((-(((((struct o18_float *)(((int)stk + 0)))->v)) * u152)) / u164)));
                                            (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + (((-(((((struct o20_float *)(((int)stk + 0)))->v)) * u152)) / u164)));
                                            u178 = u164;
                                        }
                                        u189 = u178;
                                    } else {
                                        (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + ((-(((((struct o18_float *)(((int)stk + 0)))->v)) * u152))));
                                        (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + ((-(((((struct o20_float *)(((int)stk + 0)))->v)) * u152))));
                                    }
                                    u204 = u189;
                                } else {
                                    if ((*(signed char *)((a4 + 0x2D9))) != 0) {
                                        (((struct o24_float *)(a5))->v) = (((((struct o24_float *)(a5))->v)) - t16);
                                    } else {
                                        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + t16);
                                    }
                                    t335 = t261;
                                    u204 = t16;
                                }
                                u275 = u204;
                            } else {
                                if ((*(signed char *)((a4 + 0x2DA))) != 0) {
                                    FUN_0c02114c((((int)stk + 0) + 0x18), (*(float *)((a7 + 0x0))), ((((struct o8_float *)(a7))->v)), (*(float *)((a6 + 0x0))), ((((struct o8_float *)(a6))->v)));
                                    u213 = ((u0 + u1) - t9);
                                    if (((u0 + u1) - t9) > 5.0f) {
                                        u213 = 5.0f;
                                    }
                                    if ((*(signed char *)((a4 + 0x2D9))) != 0) {
                                        (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + ((-(((((struct o18_float *)(((int)stk + 0)))->v)) * u213))));
                                        (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + ((-(((((struct o20_float *)(((int)stk + 0)))->v)) * u213))));
                                    } else {
                                        if ((*(signed char *)((a5 + 0x2D9))) != 0) {
                                            u226 = ((((struct o20_float *)(a4))->v));
                                            u226 = u226 + u213 * ((((struct o18_float *)(((int)stk + 0)))->v));
                                            (((struct o20_float *)(a4))->v) = u226;
                                            u229 = ((((struct o28_float *)(a4))->v));
                                            u229 = u229 + u213 * ((((struct o20_float *)(((int)stk + 0)))->v));
                                            (((struct o28_float *)(a4))->v) = u229;
                                        } else {
                                            u231 = *(float *)0xC021868;
                                            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + (((((((struct o18_float *)(((int)stk + 0)))->v)) * u213) / u231)));
                                            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (((((((struct o20_float *)(((int)stk + 0)))->v)) * u213) / u231)));
                                            (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + (((-(((((struct o18_float *)(((int)stk + 0)))->v)) * u213)) / u231)));
                                            (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + (((-(((((struct o20_float *)(((int)stk + 0)))->v)) * u213)) / u231)));
                                            u245 = u231;
                                        }
                                        u250 = u245;
                                    }
                                    u265 = u250;
                                } else {
                                    if ((*(signed char *)((a5 + 0x2D9))) != 0) {
                                        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - t16);
                                    } else {
                                        (((struct o24_float *)(a5))->v) = (((((struct o24_float *)(a5))->v)) + t16);
                                    }
                                    u265 = t16;
                                }
                                t335 = t261;
                                u275 = u265;
                            }
                            u286 = u275;
                        }
                        u297 = u286;
                    }
                    u307 = u297;
                }
                u318 = u307;
            }
            u329 = u318;
        }
        u340 = u329;
    }
    return ((int (*)(int, int, int, int, float))(0xC0217FC))(t335, a5, a6, a7, u340);
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
