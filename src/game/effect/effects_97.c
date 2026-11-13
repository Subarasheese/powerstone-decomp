/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0434cc-0c043730) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
struct o10_float { char p[0x10]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o40_float { char p[0x40]; float v; };
int obj_destroy(int);
int math_vec3_add(int, int, int);
int FUN_0c06231c(int, int, int);
int _quick_odd_mvn(int, int, int, int, float);

int FUN_0c0434cc(int a4, int a5, int a6)
{
    int stk[1];
    register int t0;
    register int t3;
    register int t4;
    register int t21;
    register float u29;
    register int t45;
    register int t44;
    register int t50;
    register int t51;
    register int t55;
    register int t60;
    register int t62;
    register int t63;
    register int t2;
    register int t5;
    register float u6;
    register float u7;
    register float u8;
    register int t41;
    register float u32;
    register float u33;
    register int t48;
    register int t49;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                return obj_destroy(a4);
            }
            if (t0 == 3) {
                return obj_destroy(a4);
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
    t50 = 0x0;
    t51 = a6;
    for (;;) {
        if ((int)t50 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        *(unsigned char *)((((0x308 + a4) + t50) + 0x0)) = 0x1;
        t49 = (0x308 + a4);
        t51 = t50;
        t49 = (t49 + 0x8);
        t48 = 0x2E0;
        t51 = (t51 << 2);
        t49 = (t49 + t50);
        *(unsigned char *)((t49 + 0x0)) = 0x1;
        t49 = (*(int *)((((0x2E0 + a4) + t51) + 0x0)));
        t48 = (t48 + a4);
        *(unsigned char *)((t49 + 0x0)) = 0x1;
        t48 = (t48 + t51);
        t49 = (*(int *)((((0x2E0 + a4) + t51) + 0x0)));
        (((struct o40_float *)(t49))->v) = 1.0f;
        t55 = *(signed char *)0xC7F3051;
        t48 = (*(int *)((t48 + 0x0)));
        t49 = t55;
        t48 = (t48 + 0x44);
        t60 = (short)(((((t55 << 2) << 1) + t49) << 2) << 1);
        t49 = (*(signed char *)((a4 + 0xEC)));
        t62 = t49;
        t49 = (t49 << 1);
        t49 = (t49 + t62);
        t49 = (t49 << 2);
        t49 = (signed char)t49;
        t63 = ((t60 + 0xC14A2B4) + t49);
        t49 = 0xC0E6FE8;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t48) = *(struct mv3 *)(t63); }
        t50 = (t50 + 0x1);
    }
    return 0x2DC;
}

int FUN_0c043706(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC321810 + ((*(signed char *)((a4 + 0x4))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}
