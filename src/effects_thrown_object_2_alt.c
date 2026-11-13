/* same module: helpers and update state machine (0c0c8460-0c0c8acc) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_uchar { char p[0x34]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
float math_rand_float(void);
int FUN_0c0e6e5c(int);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(void);

int FUN_0c0c8580(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t1;
    register int t2;
    register int t6;
    register int t11;
    register int t55;
    register int t59;
    register int t60;
    register int t61;
    register int t62;
    register int t63;
    int t0;
    register float u3;
    register float u4;
    register int t22;
    register int t24;
    register float u25;
    register float u26;

    *(unsigned int *)(((int)stk + 4)) = a4;
    t1 = a4;
    t2 = 0x4;
    for (;;) {
        t6 = *(int *)((((t2 << 2) + (0x2E0 + (*(int *)(((int)stk + 4))))) + 0x0));
        if (t2 == 4) {
            *(unsigned int *)((t6 + 0x18)) = ((*(int *)((t6 + 0x18))) + 0x71C);
        } else {
            t0 = (*(int *)((t6 + 0x18)));
            t0 = (t0 - 0x71C);
            *(unsigned int *)((t6 + 0x18)) = t0;
        }
        t11 = *(signed char *)(((t6 + 0x34) + 0xA));
        *(unsigned char *)(((t6 + 0x34) + 0xA)) = (t11 - 1);
        if ((signed char)(t11 - 1) == 0) {
            *(unsigned char *)(((t6 + 0x34) + 0xA)) = 0x1;
            t0 = (*(signed char *)(((t6 + 0x34) + 0x9)));
            t0 = (t0 + 0x1);
            t0 = t6;
            t0 = (t0 + 0x44);
            *(unsigned char *)(((t6 + 0x34) + 0x9)) = (FUN_0c0e6e5c(t1));
            *(unsigned int *)(((int)stk + 0)) = t0;
            u4 = 255.0f;
            u3 = (math_rand_float());
            u3 = (u3 * u4);
            if (!(2.14748365e+09f > u3)) {
                u3 = (u3 - (2.14748365e+09f + 2.14748365e+09f));
            }
            t0 = (int)u3;
            FUN_0c0e6f24();
            t0 = (*(int *)(((int)stk + 0)));
            FUN_0c0e6fe8();
        } else {
            t22 = t0;
            t24 = t1;
            u25 = u3;
            u26 = u4;
        }
        u3 = u25;
        u4 = u26;
        t0 = t22;
        t1 = t24;
        if ((*(signed char *)(((t6 + 0x34) + 0x8))) != 0) {
            u4 = ((((struct o1C_float *)(t6))->v));
            u4 = (u4 + 0.399999976f);
            (((struct o1C_float *)(t6))->v) = u4;
            u3 = ((((struct o20_float *)(t6))->v));
            u3 = (u3 + 0.399999976f);
            (((struct o20_float *)(t6))->v) = u3;
            u4 = ((((struct o4_float *)((t6 + 0x34)))->v));
            if (!(u4 > u3)) {
                u4 = ((((struct o4_float *)((t6 + 0x34)))->v));
                t0 = 0x3F4CCCCC;
                (((struct o1C_float *)(t6))->v) = u4;
                u4 = ((((struct o4_float *)((t6 + 0x34)))->v));
                (((struct o20_float *)(t6))->v) = u4;
                u4 = (*(float *)&(t0));
                *(unsigned char *)(((t6 + 0x34) + 0x8)) = ((*(signed char *)(((t6 + 0x34) + 0x8))) ^ 0x1);
                u3 = ((((struct o4_float *)((t6 + 0x34)))->v));
                u3 = (u3 + u4);
                (((struct o4_float *)((t6 + 0x34)))->v) = u3;
                if (!(3.0f > u3)) {
                    (((struct o4_float *)((t6 + 0x34)))->v) = 3.0f;
                }
            }
        } else {
            u4 = ((((struct o1C_float *)(t6))->v));
            u4 = (u4 - 0.399999976f);
            (((struct o1C_float *)(t6))->v) = u4;
            u3 = ((((struct o20_float *)(t6))->v));
            u3 = (u3 - 0.399999976f);
            (((struct o20_float *)(t6))->v) = u3;
            u4 = ((((struct o34_float *)(t6))->v));
            if (!(u3 > u4)) {
                u4 = ((((struct o34_float *)(t6))->v));
                (((struct o1C_float *)(t6))->v) = u4;
                u4 = ((((struct o34_float *)(t6))->v));
                (((struct o20_float *)(t6))->v) = u4;
                *(unsigned char *)(((t6 + 0x34) + 0x8)) = ((*(signed char *)(((t6 + 0x34) + 0x8))) ^ 0x1);
                u3 = ((((struct o34_float *)(t6))->v));
                u4 = 0.799999952f;
                u3 = (u3 + u4);
                (((struct o34_float *)(t6))->v) = u3;
                if (!(2.5999999f > u3)) {
                    (((struct o4_float *)((t6 + 0x34)))->v) = 2.5999999f;
                }
            }
        }
        u4 = ((((struct o1C_float *)(t6))->v));
        t2 = (t2 + 0x1);
        u4 = (u4 / 1.5f);
        (((struct o1C_float *)(t6))->v) = u4;
        u3 = ((((struct o20_float *)(t6))->v));
        u3 = (u3 / 1.5f);
        (((struct o20_float *)(t6))->v) = u3;
        u4 = ((((struct o24_float *)(t6))->v));
        u4 = (u4 / 1.5f);
        (((struct o24_float *)(t6))->v) = u4;
        if ((int)t2 < (int)0x6) continue;
        break;
    }
    *(unsigned char *)(((int)stk + 8)) = 0x0;
    t55 = *(int *)(((int)stk + 4));
    if ((*(signed char *)((((((struct o2E0_int *)(t55))->v)) + 0x0))) != 0) {
        *(unsigned char *)(((int)stk + 8)) = ((*(signed char *)(((int)stk + 8))) + 0x1);
        t59 = (((struct o2E0_int *)(t55))->v);
        t60 = *(signed char *)(((t59 + 0x34) + 0x1));
        *(unsigned char *)(((t59 + 0x34) + 0x1)) = (t60 - 1);
        if ((signed char)(t60 - 1) == 0) {
            t61 = *(signed char *)(((t59 + 0x34) + 0x0));
            (((struct o34_uchar *)(t59))->v) = (t61 + 0x1);
            if ((int)(signed char)(t61 + 0x1) >= (int)0x4) {
                *(unsigned char *)((t59 + 0x0)) = 0x0;
                return ((int (*)(int, int, int, int))(0xC0C8780))(t59, a5, a6, a7);
            }
            *(unsigned char *)(((t59 + 0x34) + 0x1)) = 0x2;
            t62 = *(int *)(((int)stk + 4));
            t63 = *(signed char *)(((t59 + 0x34) + 0x0));
            *(volatile signed char *)((t62 + 0x3));
            return ((int (*)(int, int, int, int))(0xC0C8774))(t59, t62, (t63 + 0x1C), a7);
        }
        return ((int (*)(int, int, int, int))(0xC0C8780))(t59, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0C8780))((t55 + 0x2E0), a5, a6, a7);
}
