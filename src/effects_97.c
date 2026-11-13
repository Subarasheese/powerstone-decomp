/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0434cc-0c043730) */

struct o10_float { char p[0x10]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o40_float { char p[0x40]; float v; };
int obj_destroy(int, int, int, int);
int math_vec3_add(int, int, int);
int FUN_0c06231c(int, int, int);
int FUN_0c0e6fe8(int, int, int, int, float);

int FUN_0c0434cc(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t0;
    register int t3;
    register int t4;
    register int t21;
    register float u29;
    register int t45;
    register int t44;
    register int t48;
    register int t2;
    register int t5;
    register float u6;
    register float u7;
    register float u8;
    register int t41;
    register float u32;
    register float u33;
    register int t59;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                return obj_destroy(a4, a5, a6, a7);
            }
            if (t0 == 3) {
                return obj_destroy(a4, a5, a6, a7);
            }
            return t0;
        }
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        t3 = a4;
        t4 = 0x0;
        for (;;) {
            if ((int)t4 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
                break;
            }
            t5 = t4;
            t5 = (t5 << 2);
            t5 = (t5 + (0x2E0 + a4));
            t5 = (*(int *)((t5 + 0x0)));
            t2 = (*(signed char *)((t5 + 0x0)));
            if (t2 != 0) {
                t3 = t5;
                *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
                t3 = (t3 + 0x28);
                math_vec3_add(t3, (t5 + 0x28), (t5 + 0x34));
                t3 = t5;
                t3 = (t3 + 0x4);
                math_vec3_add(t3, (t5 + 0x4), (t5 + 0x28));
                t2 = (*(signed char *)(((((0x308 + a4) + 0x8) + t4) + 0x0)));
                t2 = (t2 - 1);
                *(unsigned char *)(((((0x308 + a4) + 0x8) + t4) + 0x0)) = t2;
                t2 = (signed char)t2;
                if (t2 == 0) {
                    *(unsigned char *)(((((0x308 + a4) + 0x8) + t4) + 0x0)) = 0x3;
                    t3 = t5;
                    FUN_0c06231c(t3, 0xC4CFA68, ((*(signed char *)((((0x308 + a4) + t4) + 0x0))) + 0x21));
                    t2 = (0x308 + a4);
                    t2 = (t2 + t4);
                    t21 = *(signed char *)((t2 + 0x0));
                    *(unsigned char *)((t2 + 0x0)) = (t21 + 0x1);
                    t2 = 0x10;
                    if ((int)(signed char)(t21 + 0x1) >= (int)t2) {
                        *(unsigned char *)((t5 + 0x0)) = 0x0;
                    }
                }
                t2 = (0x308 + a4);
                t2 = (t2 + t4);
                if ((int)(*(signed char *)((t2 + 0x0))) >= (int)0x8) {
                    u8 = (float)(*(signed char *)((((0x308 + a4) + t4) + 0x0)));
                    u7 = (float)(*(signed char *)(((((0x308 + a4) + 0x8) + t4) + 0x0)));
                    u8 = (-u8);
                    u8 = (u8 + 15.0f);
                    u29 = u7;
                    u29 = u29 + 3.0f * u8;
                    u7 = u29;
                    u7 = (u7 / 24.0f);
                    (((struct o40_float *)(t5))->v) = u7;
                    u32 = u7;
                    u33 = u8;
                }
                u7 = u32;
                u8 = u33;
                u6 = ((((struct o10_float *)((0x308 + a4)))->v));
                u8 = (float)(*(signed char *)((((0x308 + a4) + t4) + 0x0)));
                u7 = (float)(*(signed char *)(((((0x308 + a4) + 0x8) + t4) + 0x0)));
                u8 = (u8 * 3.0f);
                u8 = (u8 - u7);
                u8 = (u8 + 3.0f);
                u8 = (u8 / 48.0f);
                u6 = (u6 + u8);
                u8 = (*(float *)0xC043724);
                u6 = (u6 * u8);
                (((struct o24_float *)(t5))->v) = u6;
                (((struct o20_float *)(t5))->v) = u6;
                (((struct o1C_float *)(t5))->v) = u6;
            } else {
                t41 = t3;
            }
            t4 = (t4 + 0x1);
            t3 = t41;
        }
        t45 = 0x2DC;
        if ((*(int *)(((int)stk + 0))) == 0) {
            t44 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t44 + 0x1);
            t45 = (t44 + 0x1);
        }
        return t45;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    t48 = 0x0;
    for (;;) {
        if ((int)t48 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        *(unsigned char *)((((0x308 + a4) + t48) + 0x0)) = 0x1;
        *(unsigned char *)(((((0x308 + a4) + 0x8) + t48) + 0x0)) = 0x1;
        *(unsigned char *)(((*(int *)((((0x2E0 + a4) + (t48 << 2)) + 0x0))) + 0x0)) = 0x1;
        (((struct o40_float *)((*(int *)((((0x2E0 + a4) + (t48 << 2)) + 0x0)))))->v) = 1.0f;
        *(volatile signed char *)0xC7F3051;
        *(volatile int *)((((0x2E0 + a4) + (t48 << 2)) + 0x0));
        *(volatile signed char *)((a4 + 0xEC));
        FUN_0c0e6fe8(0x1, t48, (t48 << 2), 0xC7F302C, 1.0f);
        t48 = (t59 + 0x1);
    }
    return 0x2DC;
}

int FUN_0c043706(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC321810 + ((*(signed char *)((a4 + 0x4))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}
