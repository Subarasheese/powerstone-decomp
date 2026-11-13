/* same module (continues) (0c0c99c0-0c0ca124) */

struct o11_uchar { char p[0x11]; unsigned char v; };
struct o274_float { char p[0x274]; float v; };
struct oF0_float { char p[0xF0]; float v; };
struct oF0_short { char p[0xF0]; short v; };
int fx_spawn_040550(int, int, int);
int fx_spawn_040a84(int, int, int, int, int, int, int, int, int, int);
int fx_spawn_04512c(int, int, int);
int obj_destroy(int);
int math_vec3_sub(int, int, int);
float math_vec3_length(int);
int FUN_0c0e6fe8(int);

int FUN_0c0c9eb8(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t17;
    register int t20;
    register int t21;
    register int t27;
    register int t31;
    register int t54;
    register int t63;
    register int t9;
    register int t58;
    register int t59;
    register int t61;
    register int t19;
    int t23;
    int t28;
    float u35;
    int t64;

    t0 = *(signed char *)((a4 + 0xE));
    t4 = *(int *)((a4 + 0x18));
    if ((int)t0 > 0) {
        t2 = a4;
        t3 = 0x0;
        for (;;) {
            if ((*(signed char *)((t4 + 0x108))) != 0) {
                t2 = t4;
                t2 = (t2 + 0x20);
                fx_spawn_04512c(t2, (t4 + 0x2C), 0x1);
            } else {
                t9 = t2;
            }
            t3 = (t3 + 0x1);
            t2 = t9;
            t4 = (*(int *)((t4 + 0x18)));
            if ((int)t3 >= (int)t0) {
                break;
            }
        }
    }
    *(unsigned char *)((a4 + 0xF)) = 0x0;
    t17 = *(signed char *)((a4 + 0xE));
    t21 = *(int *)((a4 + 0x18));
    if ((int)t17 <= 0) {
        t58 = 0x0;
        t59 = t21;
        t61 = 0x1;
    } else {
        t20 = 0x0;
        for (;;) {
            if (((*(signed char *)((t21 + 0x2D8))) == 0) && (t23 = *(signed char *)((t21 + 0x108)), t19 = t23, t19 == 0)) {
                t20 = (t20 + 0x1);
                t21 = (*(int *)((t21 + 0x18)));
                if ((int)t20 >= (int)t17) {
                    t27 = *(signed char *)((a4 + 0xF));
                    if ((t27 != 0) && (t28 = *(int *)((t21 + 0x18)), t21 = t28, (int)t20 < (int)(t17 - 1))) {
                        if ((*(int *)((t21 + 0x10))) == 0xC0CA198) {
                            return (obj_destroy(t21));
                        }
                        return ((int (*)(int, int, int, int))(0xC0CA034))(0x1, a5, a6, a7);
                    }
                    return t27;
                }
                continue;
            }
            break;
        }
        *(unsigned char *)((a4 + 0xF)) = 0x1;
        t31 = ((int (*)(int))(FUN_0c0e6fe8))(0x1);
        math_vec3_sub(((int)stk + 4), ((int)stk + 4), (a4 + 0x20));
        *(int *)((int)stk + 0) = (0xF0 + a4);
        (((struct oF0_float *)(a4))->v) = (math_vec3_length((((int)stk + 0) + 0x4)));
        *(unsigned char *)((a4 + 0xD)) = 0x5;
        *(unsigned char *)((a4 + 0xC)) = 0x4;
        if (((*(signed char *)((t21 + 0x2D8))) != 0) && (u35 = (((struct o274_float *)(t21))->v), u35 != 0.0f)) {
            fx_spawn_040550((*(signed char *)((a4 + 0x3))), (*(signed char *)(((0x308 + a4) + 0xE))), (t21 + 0x20));
            if (((((struct oF0_short *)((*(int *)((a4 + 0x1C)))))->v)) != 0) {
                (((struct o11_uchar *)((0x308 + a4)))->v) = ((*(signed char *)(((0x308 + a4) + 0x11))) ^ 0x1);
                fx_spawn_040a84((*(signed char *)((a4 + 0x3))), (*(int *)((a4 + 0x30))), (t21 + 0x20), (*(signed char *)(((0x308 + a4) + 0x11))), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
            } else {
                fx_spawn_040a84((*(signed char *)((a4 + 0x3))), (*(int *)((a4 + 0x30))), (t21 + 0x20), ((*(signed char *)(((0x308 + a4) + 0x11))) ^ 0x1), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
                (((struct o11_uchar *)((0x308 + a4)))->v) = 0x1;
            }
            *(unsigned char *)(((0x308 + a4) + 0xE)) = ((*(signed char *)(((0x308 + a4) + 0xE))) ^ 0x1);
            t54 = ((int (*)(void))(FUN_0c0e6fe8))();
            *(unsigned char *)(((0x308 + a4) + 0xD)) = 0x8;
        } else {
            fx_spawn_04512c((t21 + 0x20), (t21 + 0x2C), 0x1);
        }
        t58 = t20;
        t59 = t21;
    }
    t63 = *(signed char *)((a4 + 0xF));
    if ((t63 != 0) && (t64 = *(int *)((t59 + 0x18)), (int)t58 < (int)(t17 - 1))) {
        if ((*(int *)((t64 + 0x10))) == 0xC0CA198) {
            return (obj_destroy(t64));
        }
        return ((int (*)(int, int, int, int))(0xC0CA034))(t61, a5, a6, a7);
    }
    return t63;
}
