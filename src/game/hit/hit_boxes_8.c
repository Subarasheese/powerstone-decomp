/* hit box data converters, per-frame object lists, hit edit draw (0c025958-0c026c7c) */

/* named globals (symbols.txt) */
int stage_point_in_box(int a4, int a5, int a6, int a7);
int FUN_0c025d72(int a4, int a5, int a6, int a7);
int FUN_0c025a0e(int a4, int a5, int a6, int a7);
extern char g_obj_list_heads[];
struct o2A8_uchar { char p[0x2A8]; unsigned char v; };
int FUN_0c0246b2(int);
float FUN_0c02649a(int, int);
int hit_list_calc_displacement(int);
extern int FUN_0c0235ca(int, int);
extern int FUN_0c0235ce(int, int);
extern int FUN_0c023680(int, int);
extern int FUN_0c02374e(int, int);
extern int FUN_0c02380c(int, int);
extern int FUN_0c0238be(int, int);
extern int FUN_0c0239b6(int, int);
extern int FUN_0c023a52(int, int);
extern int FUN_0c023b22(int, int);
int FUN_0c020cc2(int, int);
int conv_s16x5_to_f32(int, int);
int conv_s16x4_to_f32(int, int);
int hit_load_box_world(int, int, int);
int hit_load_cylinder_world(int, int, int);
int hit_load_sphere_world(int, int, int);
struct o10_float { char p[0x10]; float v; };
struct o4_float { char p[0x4]; float v; };
struct oC_float { char p[0xC]; float v; };
int _quick_evn_mvn(int, int);
int _quick_odd_mvn(int, int);
struct float_rec16 { float vals[4]; };
struct float_rec20 { float vals[5]; };
struct float_rec24 { float vals[6]; };
int hit_find_part_entry(int, int, int, int);
int hit_get_sphere_entry(int, int, int);
int hit_get_cylinder_entry(int, int, int);
int hit_get_box_entry(int, int, int);
struct o8_float { char p[0x8]; float v; };
float math_signed_sqrt(float);
int FUN_0c026076(int, int, int, int);
struct o14_float { char p[0x14]; float v; };

int hit_dispatch_shape_pair(int kind, int subkind, int arg_c, int arg_d);

int FUN_0c025958(int a4, int a5)
{
    register int t0;

    FUN_0c0246b2(a4);
    FUN_0c0246b2(a5);
    if ((int)(*(signed char *)((a4 + 0x2A8))) < (int)0x5) {
        *(unsigned char *)((((*(signed char *)((a4 + 0x2A8))) + (0x2A9 + a4)) + 0x0)) = (*(signed char *)((a5 + 0x248)));
        *(unsigned int *)(((((*(signed char *)((a4 + 0x2A8))) << 2) + (0x280 + a4)) + 0x0)) = (0x264 + a5);
        t0 = *(signed char *)((a4 + 0x2A8));
        (((struct o2A8_uchar *)(a4))->v) = (t0 + 0x1);
        *(unsigned int *)(((((signed char)((t0 + 0x1) - 1) << 2) + (0x294 + a4)) + 0x0)) = a5;
    }
    if ((int)(*(signed char *)((a5 + 0x2A8))) < (int)0x5) {
        *(unsigned char *)((((*(signed char *)((a5 + 0x2A8))) + (0x2A9 + a5)) + 0x0)) = (*(signed char *)((a4 + 0x248)));
        *(unsigned int *)(((((*(signed char *)((a5 + 0x2A8))) << 2) + (0x280 + a5)) + 0x0)) = (0x264 + a4);
        t0 = *(signed char *)((a5 + 0x2A8));
        (((struct o2A8_uchar *)(a5))->v) = (t0 + 0x1);
        *(unsigned int *)(((((signed char)((t0 + 0x1) - 1) << 2) + (0x294 + a5)) + 0x0)) = a4;
    }
    return 0x2A8;
}

int FUN_0c0259ee(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = (a4 + 0x294);
    t1 = 0x0;
    for (;;) {
        if ((*(int *)((t0 + 0x0))) == a5) {
            break;
        }
        t1 = (t1 + 0x1);
        t0 = (t0 + 0x4);
        if ((int)t1 >= (int)0x5) {
            return 0x1;
        }
    }
    return 0x0;
}



int hit_world_calc_displacement(void)
{
    hit_list_calc_displacement(0xC7E40C4);              /* the players, then the object classes' lists */
    hit_list_calc_displacement(*(int *)0xC7E4074);
    hit_list_calc_displacement(*(int *)0xC7E4078);
    hit_list_calc_displacement(*(int *)0xC7E407C);
    return hit_list_calc_displacement(*(int *)0xC7E4080);
}

int hit_dispatch_shape_pair(int kind, int subkind, int arg_c, int arg_d)
{
    switch (kind & 15) {
    case 0:
        switch (subkind & 15) {
        case 0:
            kind = FUN_0c0235ca(arg_c, arg_d);
            break;
        case 1:
            kind = FUN_0c0235ce(arg_c, arg_d);
            break;
        case 2:
            kind = FUN_0c023680(arg_c, arg_d);
            break;
        }
        break;
    case 1:
        switch (subkind & 15) {
        case 0:
            kind = FUN_0c02374e(arg_c, arg_d);
            break;
        case 1:
            kind = FUN_0c02380c(arg_c, arg_d);
            break;
        case 2:
            kind = FUN_0c0238be(arg_c, arg_d);
            break;
        }
        break;
    case 2:
        switch (subkind & 15) {
        case 0:
            kind = FUN_0c0239b6(arg_c, arg_d);
            break;
        case 1:
            kind = FUN_0c023a52(arg_c, arg_d);
            break;
        case 2:
            kind = FUN_0c023b22(arg_c, arg_d);
            break;
        }
        break;
    }
    return kind;
}

int FUN_0c026200(int a4, int a5)
{
    return hit_dispatch_shape_pair((*(signed char *)((a4 + 0x248))), (*(signed char *)((a5 + 0x248))), (a4 + 0x24C), (a5 + 0x24C));
}

float FUN_0c026220(int a4, int a5, int a6)
{
    int stk[15];
    register float u27;
    register float u17;
    register float u7;

    if (((signed char)a4 & 0xF) != 0) {
        if (((signed char)a4 & 0xF) != 1) {
            if (((signed char)a4 & 0xF) != 2) {
            } else {
                FUN_0c020cc2((((int)stk + 0) + 0x14), a5);
                hit_load_box_world(a6, (((int)stk + 0) + 0x14), (((int)stk + 0) + 0x14));
                u7 = ((*(float *)(((int)stk + 24))) + (*(float *)(((int)stk + 36))));
            }
            u17 = u7;
        } else {
            conv_s16x5_to_f32(((int)stk + 0), a5);
            hit_load_cylinder_world(a6, ((int)stk + 0), ((int)stk + 0));
            u17 = ((*(float *)(((int)stk + 4))) + (*(float *)(((int)stk + 16))));
        }
        u27 = u17;
    } else {
        conv_s16x4_to_f32((((int)stk + 0) + 0x2C), a5);
        hit_load_sphere_world(a6, (((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x2C));
        u27 = ((*(float *)(((int)stk + 48))) + (*(float *)(((int)stk + 56))));
    }
    return u27;
}

float FUN_0c02629e(int a4, int a5)
{
    int stk[15];
    register float u27;
    register float u17;
    register float u7;

    if (((signed char)a4 & 0xF) != 0) {
        if (((signed char)a4 & 0xF) != 1) {
            if (((signed char)a4 & 0xF) != 2) {
            } else {
                { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 0) + 0x14)) = *(struct mv6 *)(a5); }
                u7 = (((((struct o4_float *)((((int)stk + 0) + 0x14)))->v)) + ((((struct o10_float *)((((int)stk + 0) + 0x14)))->v)));
            }
            u17 = u7;
        } else {
            { struct mv5 { int w[5]; }; *(struct mv5 *)(((int)stk + 0)) = *(struct mv5 *)(a5); }
            u17 = (((((struct o4_float *)(((int)stk + 0)))->v)) + ((((struct o10_float *)(((int)stk + 0)))->v)));
        }
        u27 = u17;
    } else {
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 0) + 0x2C)) = *(struct mv4 *)(a5); }
        u27 = (((((struct o4_float *)((((int)stk + 0) + 0x2C)))->v)) + ((((struct oC_float *)((((int)stk + 0) + 0x2C)))->v)));
    }
    return u27;
}

float FUN_0c0262f8(int a4)
{
    int stk[5];

    conv_s16x5_to_f32(((int)stk + 0), a4);
    return (*(float *)(((int)stk + 12)));
}

float FUN_0c026334(int a4, int a5, int a6)
{
    int stk[15];
    register float u27;
    register float u17;
    register float u7;

    if (((signed char)a4 & 0xF) != 0) {
        if (((signed char)a4 & 0xF) != 1) {
            if (((signed char)a4 & 0xF) != 2) {
            } else {
                FUN_0c020cc2((((int)stk + 0) + 0x14), a5);
                hit_load_box_world(a6, (((int)stk + 0) + 0x14), (((int)stk + 0) + 0x14));
                u7 = ((*(float *)(((int)stk + 24))) - (*(float *)(((int)stk + 36))));
            }
            u17 = u7;
        } else {
            conv_s16x5_to_f32(((int)stk + 0), a5);
            hit_load_cylinder_world(a6, ((int)stk + 0), ((int)stk + 0));
            u17 = ((*(float *)(((int)stk + 4))) - (*(float *)(((int)stk + 16))));
        }
        u27 = u17;
    } else {
        conv_s16x4_to_f32((((int)stk + 0) + 0x2C), a5);
        hit_load_sphere_world(a6, (((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x2C));
        u27 = ((*(float *)(((int)stk + 48))) - (*(float *)(((int)stk + 56))));
    }
    return u27;
}

float FUN_0c0263b2(int selector, void *rec)
{
    struct float_rec20 rec20;
    struct float_rec24 rec24;
    struct float_rec16 rec16;
    float diff;

    switch ((signed char)selector & 15) {
    case 0:
        rec16 = *(struct float_rec16 *)rec;
        diff = rec16.vals[1] - rec16.vals[3];
        break;
    case 1:
        rec20 = *(struct float_rec20 *)rec;
        diff = rec20.vals[1] - rec20.vals[4];
        break;
    case 2:
        rec24 = *(struct float_rec24 *)rec;
        diff = rec24.vals[1] - rec24.vals[4];
        break;
    }
    return diff;
}

int FUN_0c02642c(int a4, int a5)
{
    int stk[15];
    register int t1;
    register int t2;

    t1 = hit_find_part_entry(a5, 0x1, (*(signed char *)((a5 + 0x102))), 0x0);
    t2 = *(signed char *)((t1 + 0x1));
    if ((t2 & 0xF) != 0) {
        if ((t2 & 0xF) != 1) {
            if ((t2 & 0xF) == 2) {
                *(unsigned int *)((a4 + 0x0)) = (hit_get_box_entry(a5, (*(short *)((t1 + 0x2))), (((int)stk + 0) + 0x14)));
            }
        } else {
            *(unsigned int *)((a4 + 0x0)) = (hit_get_cylinder_entry(a5, (*(short *)((t1 + 0x2))), ((int)stk + 0)));
        }
    } else {
        *(unsigned int *)((a4 + 0x0)) = (hit_get_sphere_entry(a5, (*(short *)((t1 + 0x2))), (((int)stk + 0) + 0x2C)));
    }
    return (*(signed char *)((t1 + 0x1)));
}

float FUN_0c02651e(int a4)
{
    register float t0;
    register float t1;

    t0 = FUN_0c02649a(a4, 0x0);
    t1 = FUN_0c02649a(a4, 0x1);
    return (t0 - t1);
}

int FUN_0c026554(int a4)
{
    if ((*(signed char *)((a4 + 0x2A8))) == 0) {
        if ((*(signed char *)((a4 + 0x2D8))) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c02656e(int a4, int a5)
{
    int stk[15];
    register int t1;
    register int t2;

    t1 = hit_find_part_entry(a4, 0x1, (*(signed char *)((a4 + 0x102))), 0x0);
    t2 = *(signed char *)((t1 + 0x1));
    if ((t2 & 0xF) != 0) {
        if ((t2 & 0xF) != 1) {
            if ((t2 & 0xF) == 2) {
                *(unsigned int *)((a5 + 0x0)) = (hit_get_box_entry(a4, (*(short *)((t1 + 0x2))), (((int)stk + 0) + 0x14)));
            }
        } else {
            *(unsigned int *)((a5 + 0x0)) = (hit_get_cylinder_entry(a4, (*(short *)((t1 + 0x2))), ((int)stk + 0)));
        }
    } else {
        *(unsigned int *)((a5 + 0x0)) = (hit_get_sphere_entry(a4, (*(short *)((t1 + 0x2))), (((int)stk + 0) + 0x2C)));
    }
    return ((*(signed char *)((t1 + 0x1))) & 0xF);
}

int FUN_0c0265de(int a4)
{
    int stk[16];
    register int t1;
    register int t2;
    register int t22;
    register int t24;
    register int t31;
    register int t32;
    register int t37;
    register int t19;
    register int t21;
    register int t23;

    t1 = hit_find_part_entry(a4, 0x1, (*(signed char *)((a4 + 0x102))), 0x0);
    t2 = *(signed char *)((t1 + 0x1));
    if ((t2 & 0xF) != 0) {
        if ((t2 & 0xF) != 1) {
            if ((t2 & 0xF) == 2) {
                hit_get_box_entry(a4, (*(short *)((t1 + 0x2))), (((int)stk + 4) + 0x14));
                hit_load_box_world(a4, (((int)stk + 4) + 0x14), (((int)stk + 4) + 0x14));
                t19 = (((int)stk + 4) + 0x14);
            }
        } else {
            hit_get_cylinder_entry(a4, (*(short *)((t1 + 0x2))), ((int)stk + 4));
            hit_load_cylinder_world(a4, ((int)stk + 4), ((int)stk + 4));
            t19 = ((int)stk + 4);
        }
    } else {
        hit_get_sphere_entry(a4, (*(short *)((t1 + 0x2))), (((int)stk + 4) + 0x2C));
        hit_load_sphere_world(a4, (((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x2C));
        t19 = (((int)stk + 4) + 0x2C);
    }
    t22 = t21;
    t24 = 0x0;
    for (;;) {
        if ((int)t24 >= (int)(*(signed char *)((a4 + 0x2A8)))) {
            break;
        }
        t23 = t24;
        t23 = (t23 << 2);
        *(int *)((int)stk + 0) = ((*(int *)((((0x294 + a4) + t23) + 0x0))));
        t22 = (*(signed char *)((t1 + 0x1)));
        t31 = FUN_0c026076(t22, (*(signed char *)((((0x2A9 + a4) + t24) + 0x0))), t19, (*(int *)((((0x280 + a4) + t23) + 0x0))));
        t22 = t31;
        if ((int)(signed char)t31 < (int)0x4) {
            t24 = (t24 + 0x1);
            continue;
        }
        return t22;
    }
    t32 = 0x0;
    for (;;) {
        if ((int)t32 >= (int)(*(signed char *)((a4 + 0x2D8)))) {
            return 0x0;
        }
        t37 = hit_dispatch_shape_pair((*(signed char *)((t1 + 0x1))), (*(signed char *)((((0x2B8 + a4) + t32) + 0x0))), t19, (*(int *)((((t32 << 2) + (0x2C0 + a4)) + 0x0))));
        if ((int)(signed char)t37 >= (int)0x4) {
            break;
        }
        t32 = (t32 + 0x1);
    }
    return t37;
}

int FUN_0c026880(int a4)
{
    int stk[16];
    register int t1;
    register int t2;
    int t23;
    register int t25;
    register int t30;
    register int t36;
    register int t37;
    register int t42;
    register int t19;
    register int t21;
    register int t22;
    register int t24;

    t1 = hit_find_part_entry(a4, 0x1, (*(signed char *)((a4 + 0x102))), 0x0);
    t2 = *(signed char *)((t1 + 0x1));
    if ((t2 & 0xF) != 0) {
        if ((t2 & 0xF) != 1) {
            if ((t2 & 0xF) == 2) {
                hit_get_box_entry(a4, (*(short *)((t1 + 0x2))), (((int)stk + 4) + 0x14));
                hit_load_box_world(a4, (((int)stk + 4) + 0x14), (((int)stk + 4) + 0x14));
                t19 = (((int)stk + 4) + 0x14);
            }
        } else {
            hit_get_cylinder_entry(a4, (*(short *)((t1 + 0x2))), ((int)stk + 4));
            hit_load_cylinder_world(a4, ((int)stk + 4), ((int)stk + 4));
            t19 = ((int)stk + 4);
        }
    } else {
        hit_get_sphere_entry(a4, (*(short *)((t1 + 0x2))), (((int)stk + 4) + 0x2C));
        hit_load_sphere_world(a4, (((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x2C));
        t19 = (((int)stk + 4) + 0x2C);
    }
    t23 = t22;
    t25 = 0x0;
    for (;;) {
        if ((int)t25 >= (int)(*(signed char *)((a4 + 0x2A8)))) {
            break;
        }
        t21 = 0x294;
        t23 = t25;
        t23 = (t23 << 2);
        t21 = (t21 + a4);
        t23 = (t23 + t21);
        t23 = (*(int *)((t23 + 0x0)));
        t30 = *(signed char *)((t23 + 0x2));
        t23 = t30;
        if ((t30 != 1) && (t23 != 2)) {
            t25 = (t25 + 0x1);
            continue;
        }
        t21 = 0x294;
        t24 = t25;
        t24 = (t24 << 2);
        t21 = (t21 + a4);
        t21 = (t21 + t24);
        *(int *)((int)stk + 0) = ((*(int *)((t21 + 0x0))));
        t23 = (*(signed char *)((t1 + 0x1)));
        t36 = FUN_0c026076(t23, (*(signed char *)((((0x2A9 + a4) + t25) + 0x0))), t19, (*(int *)((((0x280 + a4) + t24) + 0x0))));
        t23 = t36;
        if ((int)(signed char)t36 < (int)0x4) {
            t25 = (t25 + 0x1);
            continue;
        }
        return t23;
    }
    t37 = 0x0;
    for (;;) {
        if ((int)t37 >= (int)(*(signed char *)((a4 + 0x2D8)))) {
            return 0x0;
        }
        t42 = hit_dispatch_shape_pair((*(signed char *)((t1 + 0x1))), (*(signed char *)((((0x2B8 + a4) + t37) + 0x0))), t19, (*(int *)((((t37 << 2) + (0x2C0 + a4)) + 0x0))));
        if ((int)(signed char)t42 >= (int)0x4) {
            break;
        }
        t37 = (t37 + 0x1);
    }
    return t42;
}


int stage_point_in_cylinder(int a4, int a5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    u0 = *(float *)((a5 + 0x0));
    u1 = *(float *)((a4 + 0x0));
    u2 = (((struct o8_float *)(a4))->v);
    u3 = (((struct o8_float *)(a5))->v);
    u4 = ((u3 - u2) * (u3 - u2));
    u4 = u4 + ((u0 - u1)) * ((u0 - u1));
    u0 = math_signed_sqrt(u4);
    t0 = 0x0;
    if (!(0.0f > (((((struct oC_float *)(a5))->v)) - u0))) {
        t0 = 0x0;
        if (!((((((struct o4_float *)(a5))->v)) - ((((struct o10_float *)(a5))->v))) > ((((struct o4_float *)(a4))->v)))) {
            t0 = 0x0;
            if (!(((((struct o4_float *)(a4))->v)) > (((((struct o4_float *)(a5))->v)) + ((((struct o10_float *)(a5))->v))))) {
                t0 = 0x1;
            }
        }
    }
    return t0;
}

int stage_point_in_sphere(int a4, int a5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    u0 = *(float *)((a5 + 0x0));
    u1 = *(float *)((a4 + 0x0));
    u2 = (((struct o4_float *)(a4))->v);
    u3 = (((struct o4_float *)(a5))->v);
    u4 = (((struct o8_float *)(a5))->v);
    u5 = (((struct o8_float *)(a4))->v);
    u6 = ((u3 - u2) * (u3 - u2));
    u6 = u6 + ((u0 - u1)) * ((u0 - u1));
    u0 = u6;
    u0 = u0 + ((u4 - u5)) * ((u4 - u5));
    u1 = math_signed_sqrt(u0);
    t0 = 0x0;
    if (!(0.0f > (((((struct oC_float *)(a5))->v)) - u1))) {
        t0 = 0x1;
    }
    return t0;
}
