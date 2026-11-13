/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c045968-0c045f9c) */

struct o2E0_int { char p[0x2E0]; int v; };
struct o308_float { char p[0x308]; float v; };
struct o9C_int { char p[0x9C]; int v; };
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_uv(int, int);
int mdl_vtx_set_uv(int, int);
struct o2EC_int { char p[0x2EC]; int v; };
struct o40_float { char p[0x40]; float v; };
int FUN_0c0e6e5c(int);
int FUN_0c0e6fe8(int, int);

int FUN_0c045968(int a4)
{
    int stk[4];
    register int t8;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = (a4 + 0x2E0);
    mdl_vtx_iter_begin(((((struct o9C_int *)((*(int *)(((*(int *)(((int)stk + 12))) + 0x14)))))->v)), ((((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v)));
    (((struct o308_float *)(a4))->v) = (((((struct o308_float *)(a4))->v)) - (*(float *)0xC045A90));
    for (;;) {
        t8 = mdl_vtx_iter_next();
        if (t8 != 0) {
            break;
        }
        mdl_vtx_get_uv(((int)stk + 0), (((int)stk + 0) + 0x4));
        *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + ((((struct o308_float *)(a4))->v)));
        mdl_vtx_set_uv(((int)stk + 0), (((int)stk + 0) + 0x4));
    }
    return t8;
}

int FUN_0c0459d6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t7 = *(signed char *)(((0x308 + a4) + 0x5));
    *(unsigned char *)(((0x308 + a4) + 0x5)) = (t7 - 1);
    t8 = (signed char)(t7 - 1);
    if ((signed char)(t7 - 1) == 0) {
        if ((*(signed char *)(((*(int *)(((((*(signed char *)(((0x308 + a4) + 0x4))) << 2) + (0x2E0 + a4)) + 0x18))) + 0x0))) != 0) {
            *(unsigned char *)(((0x308 + a4) + 0x5)) = 0x1;
            t7 = 0x1;
        } else {
            *(unsigned char *)(((0x308 + a4) + 0x5)) = 0x2;
            *(volatile signed char *)(((0x308 + a4) + 0x4));
            *(unsigned char *)((t1 + 0x4)) = (FUN_0c0e6e5c(a4));
            t9 = (((struct o2EC_int *)(t0))->v);
            *(unsigned char *)((t2 + 0x0)) = t3;
            t0 = ((int (*)(int, int, int, int))(FUN_0c0e6fe8))(t9, t2, t1, t3);
            t0 = ((int (*)(int, int))(FUN_0c0e6fe8))(t4, t5);
            *(unsigned short *)((t6 + 0x2)) = ((*(short *)((t6 + 0x2))) | 0x400);
            (((struct o40_float *)(t6))->v) = 1.0f;
            t7 = 0x40;
        }
        t8 = t7;
    }
    return t8;
}

int FUN_0c045a4e(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t5;
    register float u4;

    t0 = 0xC045AA8;
    t1 = ((0x2E0 + a4) + 0x18);
    t2 = 0x6;
    for (;;) {
        t5 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        if ((*(signed char *)((t5 + 0x0))) != 0) {
            t0 = 0x40;
            u4 = (*(float *)((t5 + t0)));
            u4 = (u4 - 0.099999994f);
            *(float *)((t5 + t0)) = u4;
            if (!(u4 > (0.0f))) {
                *(unsigned char *)((t5 + 0x0)) = 0x0;
            }
        }
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)0x8) {
            break;
        }
    }
    return t0;
}
