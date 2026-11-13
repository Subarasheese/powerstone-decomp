/* node transform defaults, table getter, model vertex cursor (mdl_vtx_*) (0c06231c-0c062b1c) */

struct o90_uint { char p[0x90]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
int FUN_0c0624c4(int, int, int);
int FUN_0c0e6fe8(int);

int FUN_0c0623a6(int a4, int a5, int a6)
{
    int stk[1];
    register int t28;
    register int t6;
    register int t10;
    register int t18;
    register int t25;
    register int t26;
    register int t27;
    register int t23;

    *(unsigned char *)(((int)stk + 0)) = a6;
    FUN_0c0624c4((0x9C + a4), a5, (*(signed char *)(((int)stk + 0))));
    t28 = 0x1;
    if (((((struct o9C_int *)(a4))->v)) == 0) {
    } else {
        t6 = *(signed char *)(((int)stk + 0));
        if ((*(int *)((a5 + 0x10))) != 0) {
            *(volatile int *)((a5 + 0x10));
            t10 = ((int (*)(int))(FUN_0c0e6fe8))(((((unsigned char)t6 << 1) + (unsigned char)t6) << 2));
        } else {
            t23 = ((((unsigned char)t6 << 1) + (unsigned char)t6) << 2);
        }
        if ((*(int *)((a5 + 0x14))) != 0) {
            *(volatile int *)((a5 + 0x14));
            t18 = ((int (*)(int))(FUN_0c0e6fe8))(t23);
        } else {
        }
        t25 = ((int (*)(int))(FUN_0c0e6fe8))(t23);
        t26 = ((int (*)(void))(FUN_0c0e6fe8))();
        t27 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct o90_uint *)(a4))->v) = 0x0;
        t28 = 0x0;
    }
    return t28;
}
