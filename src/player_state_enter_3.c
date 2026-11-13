/* player state enter handlers (table 0xC339490) and state-specific helpers; same module as the following rows up to 0c0a18f8 (0c09fe58-0c0a0074) */

struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
int pl_timer_disable(int);
struct o71C8_int { char p[0x71C8]; int v; };
int pl_get_held_item_class(int, int, int);
int obj_can_interact(int, int, int, int, int, int, int, int, int, int, int, int);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o729C_float { char p[0x729C]; float v; };
struct o72A0_short { char p[0x72A0]; short v; };
int hit_build_part_shape(int, int);
int hit_dispatch_shape_pair(int, int, int, int);
int hit_find_wall_entry_by_kind(int, int);
float math_signed_sqrt(float);

int pl_enter_state_33(int a4)
{
    (((struct o71BA_uchar *)(a4))->v) = 0x21;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    return pl_timer_disable(a4);
}

int FUN_0c09fe68(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t7;
    register int t1;
    register int t2;
    register int t3;
    int t4;

    t0 = pl_get_held_item_class(a4, a5, a6);
    if (((signed char)t0 == 0) && (((t1 = *(signed char *)((a4 + 0x71BA)), t1 != 10) || (t2 = *(signed char *)((a4 + 0x71BB)), t2 != 34)) && ((t3 = *(signed char *)((a4 + 0x71BC)), t3 == 2) && (t4 = (((struct o71C8_int *)(a4))->v), t4 != 0)))) {
        t7 = obj_can_interact(((((struct o71C8_int *)(a4))->v)), 0x1, (*(signed char *)((a4 + 0x3))), 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        if (t7 != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c09feba(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t7;
    register int t1;
    register int t2;
    register int t3;
    int t4;

    t0 = pl_get_held_item_class(a4, a5, a6);
    if (((signed char)t0 == 0) && (((t1 = *(signed char *)((a4 + 0x71BA)), t1 != 10) || (t2 = *(signed char *)((a4 + 0x71BB)), t2 != 26)) && ((t3 = *(signed char *)((a4 + 0x71BC)), t3 == 2) && (t4 = (((struct o71C8_int *)(a4))->v), t4 != 0)))) {
        t7 = obj_can_interact(((((struct o71C8_int *)(a4))->v)), 0x2, (*(signed char *)((a4 + 0x3))), 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        if (t7 != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c09ff0c(int a4, int a5, int a6)
{
    int stk[9];
    register int t0;
    register int t3;
    register int t12;
    register int t16;
    register int t24;
    register float u25;
    register int t27;
    register float u28;
    register float u31;
    int t14;
    register int t15;
    float u20;

    t0 = pl_get_held_item_class(a4, a5, a6);
    if ((signed char)t0 != 0) {
        return 0x0;
    }
    hit_build_part_shape(a4, (((int)stk + 0) + 0xC));
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)(*(signed char *)((a4 + 0x2D8)))) {
            break;
        }
        if ((*(signed char *)((t3 + (0x2AE + a4)))) == 9) {
            t12 = hit_dispatch_shape_pair(0x1, (*(signed char *)((((0x2B8 + a4) + t3) + 0x0))), (((int)stk + 0) + 0xC), (*(int *)((((t3 << 2) + (0x2C0 + a4)) + 0x0))));
            if ((signed char)t12 == 3) {
                t3 = (t3 + 0x1);
                continue;
            }
            return 0x0;
        }
        t3 = (t3 + 0x1);
    }
    if ((((*(signed char *)((a4 + 0x71BA))) == 10) && (t14 = *(signed char *)((a4 + 0x71BB)), t14 == 36)) || (t15 = *(signed char *)((a4 + 0x71BC)), t15 != 2)) {
        return 0x0;
    }
    t16 = hit_find_wall_entry_by_kind(a4, 0x9);
    if ((signed char)t16 != 0) {
        return 0x1;
    }
    if (((*(signed char *)((a4 + 0x71BA))) != 36) && (u20 = (((struct o729C_float *)(a4))->v), u20 != 0.0f)) {
        if (((((struct o24_float *)(a4))->v)) > (((((struct o729C_float *)(a4))->v)) + (*(float *)0xC0A0068))) {
            *(unsigned int *)(((int)stk + 4)) = (0x72A0 + a4);
            t24 = (((struct o72A0_short *)(a4))->v);
            u25 = (((struct o20_float *)(a4))->v);
            *(float *)(((int)stk + 8)) = ((float)t24 - u25);
            t27 = *(short *)(((*(int *)(((int)stk + 4))) + 0x2));
            u28 = (((struct o28_float *)(a4))->v);
            *(float *)(((int)stk + 0)) = ((float)t27 - u28);
            u31 = (((float)t27 - u28) * ((float)t27 - u28));
            u31 = u31 + (((float)t24 - u25)) * (((float)t24 - u25));
            math_signed_sqrt(u31);
            *(volatile float *)0xC0A0070;
        }
    }
    return 0x0;
}

int FUN_0c0a0030(int a4)
{
    register int t0;

    t0 = hit_find_wall_entry_by_kind(a4, 0x9);
    if ((signed char)t0 != 0) {
        return 0x1;
    }
    return 0x0;
}
