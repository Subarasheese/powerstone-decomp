/* player state enter handlers (table 0xC339490) and state-specific helpers; same module as the following rows up to 0c0a18f8 (0c0a0188-0c0a02d4) */

int hit_build_part_shape(int, int);
int hit_dispatch_shape_pair(int, int, int, int);
struct o71C8_int { char p[0x71C8]; int v; };
int pl_get_held_item_class(int, int, int);
int obj_can_interact(int, int, int, int, int, int, int, int, int, int, int, int);
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
int hit_find_interactable_contact(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);

int FUN_0c0a0188(int a4)
{
    int stk[6];
    register int t1;
    register int t7;

    hit_build_part_shape(a4, ((int)stk + 0));
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(signed char *)((a4 + 0x2D8)))) {
            return 0x0;
        }
        if ((*(signed char *)((t1 + (0x2AE + a4)))) == 10) {
            t7 = hit_dispatch_shape_pair(0x1, (*(signed char *)((((0x2B8 + a4) + t1) + 0x0))), ((int)stk + 0), (*(int *)((((t1 << 2) + (0x2C0 + a4)) + 0x0))));
            if ((signed char)t7 == 3) {
                break;
            }
            t1 = (t1 + 0x1);
            continue;
        }
        t1 = (t1 + 0x1);
    }
    return 0x1;
}

int FUN_0c0a01ec(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t5;
    register int t1;
    int t2;

    t0 = pl_get_held_item_class(a4, a5, a6);
    if (((signed char)t0 == 0) && ((t1 = *(signed char *)((a4 + 0x71BC)), t1 == 2) && (t2 = (((struct o71C8_int *)(a4))->v), t2 != 0))) {
        t5 = obj_can_interact(((((struct o71C8_int *)(a4))->v)), 0xB, (*(signed char *)((a4 + 0x3))), 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        if (t5 != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c0a022e(int a4, float f4)
{
    int stk[3];
    register int t0;
    register int t15;
    register int t1;

    *(float *)(((int)stk + 0)) = f4;
    t0 = hit_find_interactable_contact(a4, 0x1);
    *(unsigned char *)(((int)stk + 8)) = t0;
    t15 = 0x1;
    if ((signed char)t0 != 0) {
        t1 = *(signed char *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 4)) = ((t1 - 1) << 2);
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)((*(int *)(((0x294 + a4) + ((t1 - 1) << 2))))))->v)) - (((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * (*(float *)(((int)stk + 0))))));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)((*(int *)((((0x294 + a4) + (*(int *)(((int)stk + 4)))) + 0x0)))))->v)) - (((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * (*(float *)(((int)stk + 0))))));
        t15 = 0x0;
    }
    return t15;
}
