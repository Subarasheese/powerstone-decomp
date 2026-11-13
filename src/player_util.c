/* player helper functions: lists, item class, combo, linked object placement (0c09c974-0c09d544) */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
float math_cos_angle16(int);
float math_sin_angle16(int);
int obj_can_interact(int, int, int);
int hit_build_part_shape(int, int);
int hit_dispatch_shape_pair(int, int, int, int);
int FUN_0c026076(int, int, int, int, int);

float obj_place_linked_ahead(int a4, int a5, float f4)
{
    register int t0;
    register float u0;

    if ((signed char)a5 == 0) {
        t0 = *(int *)((a4 + 0x1C));
        u0 = ((((struct o20_float *)(a4))->v));
        u0 = u0 + f4 * (math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
        (((struct o20_float *)(t0))->v) = u0;
        t0 = *(int *)((a4 + 0x1C));
        u0 = ((((struct o28_float *)(a4))->v));
        u0 = u0 + f4 * (math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
        (((struct o28_float *)(t0))->v) = u0;
        (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v) = ((((struct o24_float *)(a4))->v));
        *(unsigned int *)(((*(int *)((a4 + 0x1C))) + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
    } else {
        t0 = *(int *)((a4 + 0x1C));
        u0 = ((((struct o20_float *)(a4))->v));
        u0 = u0 + f4 * (math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
        (((struct o20_float *)(t0))->v) = u0;
        t0 = *(int *)((a4 + 0x1C));
        u0 = ((((struct o28_float *)(a4))->v));
        u0 = u0 + f4 * (math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
        (((struct o28_float *)(t0))->v) = u0;
        (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v) = ((((struct o24_float *)(a4))->v));
        *(unsigned int *)(((*(int *)((a4 + 0x1C))) + 0x30)) = (*(int *)((a4 + 0x30)));
    }
    return f4;
}

int hit_find_interactable_contact(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t4;
    register int t9;
    int t5;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = 0x0;
    for (;;) {
        if ((int)(signed char)t0 >= (int)(*(signed char *)((a4 + 0x2A8)))) {
            return 0x0;
        }
        t4 = *(int *)((((0x294 + a4) + ((signed char)t0 << 2)) + 0x0));
        if ((t4 != 0) && (t5 = *(signed char *)((t4 + 0x2)), t5 == 2)) {
            t9 = obj_can_interact((*(int *)((((0x294 + a4) + ((signed char)t0 << 2)) + 0x0))), (*(signed char *)(((int)stk + 0))), (*(signed char *)((a4 + 0x3))));
            if (t9 != 0) {
                break;
            }
            t0 = (t0 + 0x1);
            continue;
        }
        t0 = (t0 + 0x1);
    }
    return (t0 + 0x1);
}

int FUN_0c09ca88(int a4, int a5, int a6, int a7)
{
    return ((int (*)(int, int, int, int))(0xC09CADA))(a4, a5, 0x0, a7);
}

int hit_find_wall_entry_by_kind(int a4, int a5)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((int)(signed char)t0 >= (int)(*(signed char *)((a4 + 0x2D8)))) {
            return 0x0;
        }
        if ((*(signed char *)((((signed char)t0 + (0x2AE + a4)) + 0x0))) == (signed char)a5) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return (t0 + 0x1);
}

int hit_find_contact_direction(int a4)
{
    int stk[7];
    register int t2;
    register int t4;
    register int t21;
    register int t24;
    register int t25;
    register int t29;
    register int t1;
    register int t3;
    register int t15;
    register int t16;
    register int t17;
    int t18;
    register int t19;

    hit_build_part_shape(a4, ((int)stk + 4));
    t2 = t1;
    t4 = 0x0;
    for (;;) {
        if ((int)t4 >= (int)(*(signed char *)((a4 + 0x2A8)))) {
            break;
        }
        if (((*(signed char *)(((*(int *)(((0x294 + a4) + (t4 << 2)))) + 0x2))) == 2) && ((t15 = *(signed char *)((t4 + (0x2A9 + a4))), t15 == 2) && ((t16 = *(int *)((((t4 << 2) + (0x294 + a4)) + 0x0)), t17 = *(signed char *)((t16 + 0x30D)), t17 == 0) && (t18 = *(int *)(((0x294 + a4) + (t4 << 2))), t19 = *(signed char *)((0x2D9 + t18)), t19 != 2)))) {
            t3 = t4;
            t3 = (t3 << 2);
            t21 = (*(int *)((((0x294 + a4) + t3) + 0x0)));
            *(int *)((int)stk + 0) = t21;
            t2 = 0x1;
            t24 = FUN_0c026076(t2, (*(signed char *)((((0x2A9 + a4) + t4) + 0x0))), ((int)stk + 4), (*(int *)((((0x280 + a4) + t3) + 0x0))), t21);
            t2 = t24;
            if ((int)(signed char)t24 < (int)0x4) {
                t4 = (t4 + 0x1);
                continue;
            }
            return t2;
        }
        t4 = (t4 + 0x1);
    }
    t25 = 0x0;
    for (;;) {
        if ((int)t25 >= (int)(*(signed char *)((a4 + 0x2D8)))) {
            return 0x0;
        }
        t29 = hit_dispatch_shape_pair(0x1, (*(signed char *)((((0x2B8 + a4) + t25) + 0x0))), ((int)stk + 4), (*(int *)((((t25 << 2) + (0x2C0 + a4)) + 0x0))));
        if ((int)(signed char)t29 >= (int)0x4) {
            break;
        }
        t25 = (t25 + 0x1);
    }
    return t29;
}
