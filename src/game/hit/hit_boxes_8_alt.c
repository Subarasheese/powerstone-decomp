/* hit box data converters, per-frame object lists, hit edit draw (0c025958-0c026c7c) */

/* named globals (symbols.txt) */
extern char g_obj_list_heads[];
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
extern int FUN_0c025a0e();
int FUN_0c025d72(int, int);
int FUN_0c020cc2(int, int);
int conv_s16x5_to_f32(int, int);
int conv_s16x4_to_f32(int, int);
int hit_load_box_world(int, int, int);
int hit_load_cylinder_world(int, int, int);
int hit_load_sphere_world(int, int, int);
int FUN_0c0235ca(void);
int FUN_0c0235ce(int, int);
int FUN_0c023680(int, int);
int FUN_0c02374e(int, int);
int FUN_0c02380c(int, int);
int FUN_0c0238be(int, int);
int FUN_0c0239b6(int, int);
int FUN_0c023a52(int, int, int);
int FUN_0c023b22(int, int);
int hit_find_part_entry(int, int, int, int);
int hit_get_sphere_entry(int, int, int);
int hit_get_cylinder_entry(int, int, int);
int hit_get_box_entry(int, int, int);
float FUN_0c026220(int, int, int);
float FUN_0c026334(int, int, int);
struct vec3_float { float x, y, z; };
extern signed char g_game_state[];
int stage_point_in_box(struct vec3_float *, char *);
int stage_point_in_cylinder(struct vec3_float *, char *);
int stage_point_in_sphere(struct vec3_float *, char *);
#define STAGE_IDX (g_game_state[37])
#define TABLE(base) (*(char **)((base) + STAGE_IDX * 4))
#define COUNT_AT(which) (*(signed char *)(0xC33EC20 + STAGE_IDX * 3 + (which)))

int FUN_0c025d10(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = (((struct o0_int *)g_obj_list_heads)->v);
    t1 = ((int (*)(int, int, int))(FUN_0c025a0e))(t0, t0, a6);
    t0 = ((int (*)(int, int))(FUN_0c025a0e))(((((struct o0_int *)g_obj_list_heads)->v)), ((((struct o4_int *)g_obj_list_heads)->v)));
    t0 = ((int (*)(int, int))(FUN_0c025a0e))(((((struct o0_int *)g_obj_list_heads)->v)), 0xC7E40C4);
    t0 = (((struct o8_int *)g_obj_list_heads)->v);
    t1 = ((int (*)(int, int))(FUN_0c025a0e))(t0, t0);
    t0 = ((int (*)(int, int))(FUN_0c025a0e))(((((struct o4_int *)g_obj_list_heads)->v)), ((((struct o8_int *)g_obj_list_heads)->v)));
    t0 = (((struct o4_int *)g_obj_list_heads)->v);
    t1 = ((int (*)(int, int))(FUN_0c025a0e))(t0, t0);
    t0 = ((int (*)(int, int))(FUN_0c025a0e))(0xC7E40C4, ((((struct o4_int *)g_obj_list_heads)->v)));
    return ((int (*)(int, int))(FUN_0c025a0e))(0xC7E40C4, 0xC7E40C4);
}

int FUN_0c025f38(void)
{
    FUN_0c025d72(0xC7E40C4, ((((struct o0_int *)0xC7E407C)->v)));
    return FUN_0c025d72(0xC7E40C4, ((((struct o4_int *)0xC7E407C)->v)));
}

int FUN_0c026076(int a4, int a5, int a6, int a7, int a8)
{
    int stk[16];
    register int t21;
    register int t19;
    register int t88;
    register int t83;

    *(unsigned char *)(((int)stk + 0)) = a4;
    if ((0xF & (signed char)a5) != 0) {
        if ((0xF & (signed char)a5) != 1) {
            if ((0xF & (signed char)a5) != 2) {
                t83 = a5;
                t19 = a6;
            } else {
                FUN_0c020cc2((((int)stk + 0) + 0x18), a7);
                hit_load_box_world(a8, (((int)stk + 0) + 0x18), (((int)stk + 0) + 0x18));
            }
        } else {
            conv_s16x5_to_f32((((int)stk + 0) + 0x4), a7);
            hit_load_cylinder_world(a8, (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x4));
        }
    } else {
        conv_s16x4_to_f32((((int)stk + 0) + 0x30), a7);
        hit_load_sphere_world(a8, (((int)stk + 0) + 0x30), (((int)stk + 0) + 0x30));
    }
    t21 = *(signed char *)(((int)stk + 0));
    if ((t21 & 0xF) != 0) {
        if ((t21 & 0xF) != 1) {
            t88 = t83;
            if ((t21 & 0xF) != 2) {
            } else {
                if ((0xF & (signed char)a5) != 0) {
                    if ((0xF & (signed char)a5) != 1) {
                        t88 = t83;
                        if ((0xF & (signed char)a5) != 2) {
                        } else {
                            t88 = (FUN_0c023b22(a6, (((int)stk + 0) + 0x18)));
                        }
                    } else {
                        t88 = (FUN_0c023a52(a6, (((int)stk + 0) + 0x4), t19));
                    }
                } else {
                    t88 = (FUN_0c0239b6(a6, (((int)stk + 0) + 0x30)));
                }
            }
        } else {
            if ((0xF & (signed char)a5) != 0) {
                if ((0xF & (signed char)a5) != 1) {
                    t88 = t83;
                    if ((0xF & (signed char)a5) != 2) {
                    } else {
                        t88 = (FUN_0c0238be(a6, (((int)stk + 0) + 0x18)));
                    }
                } else {
                    t88 = (FUN_0c02380c(a6, (((int)stk + 0) + 0x4)));
                }
            } else {
                t88 = (FUN_0c02374e(a6, (((int)stk + 0) + 0x30)));
            }
        }
    } else {
        if ((0xF & (signed char)a5) != 0) {
            if ((0xF & (signed char)a5) != 1) {
                if ((0xF & (signed char)a5) != 2) {
                } else {
                    t83 = (FUN_0c023680(a6, (((int)stk + 0) + 0x18)));
                }
            } else {
                t83 = (FUN_0c0235ce(a6, (((int)stk + 0) + 0x4)));
            }
        } else {
            t83 = (FUN_0c0235ca());
        }
        t88 = t83;
    }
    return t88;
}

float FUN_0c02649a(int a4, int a5)
{
    int stk[16];
    register int t1;
    register int t2;
    register int t16;
    register float t23;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t1 = hit_find_part_entry(a4, 0x1, (*(signed char *)((a4 + 0x102))), 0x0);
    t2 = *(signed char *)((t1 + 0x1));
    if ((t2 & 0xF) != 0) {
        if ((t2 & 0xF) != 1) {
            if ((t2 & 0xF) == 2) {
                t16 = (hit_get_box_entry(a4, (*(short *)((t1 + 0x2))), (((int)stk + 0) + 0x18)));
            }
        } else {
            t16 = (hit_get_cylinder_entry(a4, (*(short *)((t1 + 0x2))), (((int)stk + 0) + 0x4)));
        }
    } else {
        t16 = (hit_get_sphere_entry(a4, (*(short *)((t1 + 0x2))), (((int)stk + 0) + 0x30)));
    }
    if ((*(signed char *)(((int)stk + 0))) == 0) {
        t23 = (FUN_0c026220((*(signed char *)((t1 + 0x1))), t16, a4));
    } else {
        t23 = (FUN_0c026334((*(signed char *)((t1 + 0x1))), t16, a4));
    }
    return t23;
}

int stage_point_in_volume_id(struct vec3_float *point, int id_byte)
{
    struct vec3_float probe;
    int i;
    char *id_ptr;

    probe = *point;
    probe.y = probe.y - 1.0f;
    for (i = 0; i < COUNT_AT(1); i++) {
        id_ptr = TABLE(0xC33EB60) + i * 2;
        if (stage_point_in_box(&probe, TABLE(0xC33EB20) + i * 24) && id_ptr[1] == (signed char)id_byte)
            return 1;
    }
    for (i = 0; i < COUNT_AT(0); i++) {
        id_ptr = TABLE(0xC33EAE0) + i * 2;
        if (stage_point_in_cylinder(&probe, TABLE(0xC33EAA0) + i * 20) && id_ptr[1] == (signed char)id_byte)
            return 1;
    }
    for (i = 0; i < COUNT_AT(2); i++) {
        id_ptr = TABLE(0xC33EBE0) + i * 2;
        if (stage_point_in_sphere(&probe, TABLE(0xC33EBA0) + i * 16) && id_ptr[1] == (signed char)id_byte)
            return 1;
    }
    return 0;
}
