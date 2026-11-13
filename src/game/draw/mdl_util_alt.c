/* node transform defaults, table getter, model vertex cursor (mdl_vtx_*) (0c06231c-0c062b1c) */

struct o90_uint { char p[0x90]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
int FUN_0c0624c4(int, int, int);
int _quick_odd_mvn(int);

int FUN_0c0623a6(int a4, int a5, int a6)
{
    int stk[1];
    register int t20;
    register int t6;

    *(unsigned char *)(((int)stk + 0)) = a6;
    FUN_0c0624c4((0x9C + a4), a5, (*(signed char *)(((int)stk + 0))));
    t20 = 0x1;
    if (((((struct o9C_int *)(a4))->v)) == 0) {
    } else {
        t6 = *(signed char *)(((int)stk + 0));
        if ((*(int *)((a5 + 0x10))) != 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4)) = *(struct mv3 *)(((*(int *)((a5 + 0x10))) + ((((unsigned char)t6 << 1) + (unsigned char)t6) << 2))); }
        }
        if ((*(int *)((a5 + 0x14))) != 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x10)) = *(struct mv3 *)(((*(int *)((a5 + 0x14))) + ((((unsigned char)t6 << 1) + (unsigned char)t6) << 2))); }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x1C)) = *(struct mv3 *)(0xC14E3BC); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(0xC14E3B0); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(0xC14E3C8); }
        (((struct o90_uint *)(a4))->v) = 0x0;
        t20 = 0x0;
    }
    return t20;
}
