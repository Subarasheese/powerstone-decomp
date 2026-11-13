/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c048c18-0c049288) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_uchar { char p[0x308]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oC_float { char p[0xC]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
float math_rand_float(void);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(void);

int fx_spawn_048c18(int a4, int a5, float f4);

int fx_spawn_048c18(int a4, int a5, float f4)
{
    int stk[4];
    register int t77;
    register int t18;
    register int t64;
    register float u21;
    register int t31;
    register int t32;
    register int t40;
    register int t42;
    register int t43;
    register int t44;
    register float u54;
    register int t55;
    register float t57;
    register float u60;
    register int t11;
    register int t41;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(float *)(((int)stk + 12)) = f4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t77 = 0x16B;
    if ((int)(*(signed char *)0xC7F3197) >= (int)0x4) {
    } else {
        *(unsigned char *)0xC7F3197 = ((*(signed char *)0xC7F3197) + 0x1);
        if ((*(signed char *)(((int)stk + 4))) != 0) {
            math_rand_float();
            
            t11 = ((FUN_0c0e6f24()) + 0x3);
        } else {
            t11 = (((*(int *)0xC7F307C) & 0x1) + 0x1);
        }
        t18 = obj_create(0x5, 0x1, (t11 + 0x1));
        t64 = t18;
        if (t18 != 0) {
            *(unsigned char *)((t18 + 0x0)) = 0x1;
            *(unsigned char *)((t18 + 0x1)) = 0x1;
            *(unsigned short *)((t18 + 0x6)) = 0x31;
            *(unsigned char *)((t18 + 0x5)) = 0x1;
            *(unsigned int *)((t18 + 0x10)) = 0xC048EA8;
            *(unsigned char *)((t18 + 0x3)) = 0x2;
            *(volatile int *)(((int)stk + 8));
            FUN_0c0e6fe8();
            (((struct o118_uint *)(t18))->v) = 0x0;
            *(unsigned int *)((t18 + 0x34)) = 0x0;
            *(unsigned int *)((t18 + 0x30)) = 0x0;
            *(unsigned int *)((t18 + 0x2C)) = 0x0;
            u21 = *(float *)(((int)stk + 12));
            (((struct o58_float *)(t18))->v) = (u21 * 1.0f);
            (((struct o54_float *)(t18))->v) = (u21 * 1.0f);
            (((struct o50_float *)(t18))->v) = (u21 * 1.0f);
            (((struct o308_uchar *)(t18))->v) = t11;
            *(unsigned char *)(((0x308 + t18) + 0x1)) = (*(signed char *)(((int)stk + 4)));
            FUN_0c06233a(((((struct o2E0_int *)(t18))->v)), 0xC4CFA68, 0x48);
            *(unsigned char *)((((((struct o2E0_int *)(t18))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct o2E0_int *)(t18))->v)) + 0x2)) = 0x219;
            (((struct o40_float *)(((((struct o2E0_int *)(t18))->v))))->v) = 1.0f;
            (((struct o44_float *)(((((struct o2E0_int *)(t18))->v))))->v) = 1.0f;
            (((struct o48_float *)(((((struct o2E0_int *)(t18))->v))))->v) = 1.0f;
            (((struct o4C_float *)(((((struct o2E0_int *)(t18))->v))))->v) = 1.0f;
            t31 = (((struct o2E0_int *)(t18))->v);
            (((struct o24_float *)(t31))->v) = 1.0f;
            (((struct o20_float *)(t31))->v) = 1.0f;
            (((struct o1C_float *)(t31))->v) = 1.0f;
            t32 = (((struct o2E0_int *)(t18))->v);
            *(int *)((int)stk + 0) = (0x18 + t32);
            math_rand_float();
            
            *(unsigned int *)(((0x18 + t32) + 0x0)) = ((((FUN_0c0e6f24()) << 8) << 2) << 2);
            (((struct oC_float *)(((((struct o2E0_int *)(t18))->v))))->v) = 100.0f;
            t40 = 0xC048DC4;
            t42 = (0x18 + t32);
            t43 = 0x1;
            t44 = 0x1;
            for (;;) {
                if ((int)t43 >= (int)((*(signed char *)(((0x308 + t18) + 0x0))) + 0x1)) {
                    break;
                }
                t44 = t43;
                t44 = (t44 << 2);
                t40 = (FUN_0c06233a((*(int *)((((0x2E0 + t18) + t44) + 0x0))), 0xC4CFA68, 0x21));
                t40 = 0x619;
                t42 = (*(int *)((((0x2E0 + t18) + t44) + 0x0)));
                *(unsigned char *)((t42 + 0x0)) = 0x0;
                t42 = (*(int *)((((0x2E0 + t18) + t44) + 0x0)));
                *(unsigned short *)((t42 + 0x2)) = t40;
                t40 = 0x40;
                t42 = (*(int *)((((0x2E0 + t18) + t44) + 0x0)));
                *(float *)((t42 + t40)) = 1.0f;
                t40 = 0x44;
                t42 = (*(int *)((((0x2E0 + t18) + t44) + 0x0)));
                *(float *)((t42 + t40)) = 0.0f;
                t40 = 0x48;
                t42 = (*(int *)((((0x2E0 + t18) + t44) + 0x0)));
                *(float *)((t42 + t40)) = 0.0f;
                t40 = 0x4C;
                t42 = (*(int *)((((0x2E0 + t18) + t44) + 0x0)));
                *(float *)((t42 + t40)) = 0.0f;
                t40 = 0xC048F18;
                u54 = *(float *)((t40 + 0x0));
                t55 = *(int *)((((0x2E0 + t18) + t44) + 0x0));
                t40 = 0x24;
                *(float *)((t55 + t40)) = u54;
                t40 = 0x20;
                *(float *)((t55 + t40)) = u54;
                t40 = 0x1C;
                *(float *)((t55 + t40)) = u54;
                t42 = (*(int *)((((0x2E0 + t18) + t44) + 0x0)));
                *(int *)((int)stk + 0) = (0x18 + t42);
                t57 = math_rand_float();
                u60 = (t57 * 255.0f);
                if (!(2.14748365e+09f > (t57 * 255.0f))) {
                    u60 = (((t57 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                }
                t42 = 0xC0E6F24;
                t41 = (int)u60;
                t40 = 0x10;
                t40 = (FUN_0c0e6f24());
                t40 = (t40 << 8);
                t41 = (0x18 + t42);
                t40 = (t40 << 2);
                t44 = (t44 + (0x2E0 + t18));
                t40 = (t40 << 2);
                *(unsigned int *)((t41 + 0x0)) = t40;
                t40 = 0xC;
                t42 = (*(int *)((t44 + 0x0)));
                t43 = (t43 + 0x1);
                *(float *)((t42 + t40)) = 90.0f;
            }
            t64 = t40;
        }
        t77 = t64;
    }
    return t77;
}

int FUN_0c048ea0(int a4, int a5, int a6, int a7)
{
    return ((int (*)(int, int, int, int))(0xC048C18))(a4, 0x0, a6, a7);
}

int FUN_0c048ea4(int a4, float f4)
{
    return fx_spawn_048c18(a4, 0x1, f4);
}
