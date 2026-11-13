/* item pickup and collision queries between fighters (0c09d544-0c09d89c) */

struct o10_float { char p[0x10]; float v; };
struct o4_float { char p[0x4]; float v; };
int hit_build_part_shape(int, int);
float FUN_0c02629e(int, int);
float FUN_0c02649a(int, int);
int obj_can_interact(int, int, int, int, int, int, int, int, int, int, int, int);

int FUN_0c09d710(int a4, int a5, float f4)
{
    int stk[8];
    register float u1;
    register float u2;
    register int t3;
    register float u5;
    register float u6;
    register int t13;
    register int t14;
    register int t15;
    register float u16;
    register float u17;
    register float u18;
    register int t28;
    register float u4;
    register int t12;
    int t25;

    *(float *)(((int)stk + 0)) = f4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    hit_build_part_shape(a4, (((int)stk + 0) + 0x8));
    u1 = (((struct o10_float *)((((int)stk + 0) + 0x8)))->v);
    u2 = (((struct o4_float *)((((int)stk + 0) + 0x8)))->v);
    t3 = 0x0;
    u5 = f4;
    u6 = 0.0f;
    for (;;) {
        if ((int)t3 >= (int)(*(signed char *)((a4 + 0x2D8)))) {
            break;
        }
        u4 = (FUN_0c02629e((*(signed char *)((((0x2B8 + a4) + t3) + 0x0))), (*(int *)((((t3 << 2) + (0x2C0 + a4)) + 0x0)))));
        u5 = u4;
        u5 = (u5 - (u2 - u1));
        t3 = (t3 + 0x1);
        if (u5 > u6) {
            u6 = u5;
        }
    }
    t13 = t12;
    t14 = 0x0;
    t15 = t3;
    u16 = u4;
    u17 = u5;
    u18 = u6;
    for (;;) {
        if ((int)t14 >= (int)(*(signed char *)((a4 + 0x2A8)))) {
            break;
        }
        t13 = 0x294;
        t15 = t14;
        t15 = (t15 << 2);
        t13 = (t13 + a4);
        t13 = (t13 + t15);
        t13 = (*(int *)((t13 + 0x0)));
        if (((*(signed char *)((t13 + 0x2))) == 2) && (t25 = *(signed char *)((t13 + 0x2D9)), t25 != 2)) {
            t13 = 0x294;
            t13 = (t13 + a4);
            t13 = (t13 + t15);
            t13 = (*(int *)((t13 + 0x0)));
            t28 = obj_can_interact(t13, 0x0, (*(signed char *)((a4 + 0x3))), 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            if (t28 != 0) {
                t13 = 0x294;
                t13 = (t13 + a4);
                t13 = (t13 + t15);
                t13 = (*(int *)((t13 + 0x0)));
                u16 = (FUN_0c02649a(t13, 0x0));
                u17 = u16;
                u17 = (u17 - (u2 - u1));
                if (u17 > u18) {
                    u18 = u17;
                }
                t14 = (t14 + 0x1);
                continue;
            }
            return ((int (*)(void))(0xC09D7FA))();
        }
        t14 = (t14 + 0x1);
    }
    *(float *)(((*(int *)(((int)stk + 4))) + 0x0)) = u18;
    
    return 0x0;
}
