/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0aed9c-0c0aeee8) */

struct o2E0_int { char p[0x2E0]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oEC_short { char p[0xEC]; short v; };
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_uv(int, int);
int mdl_vtx_set_uv(int, int);
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c026200(int, int);
int FUN_0c09c2ce(int, int, int, int);

int stage_type11_scroll_uv(int a4);

int stage_type11_scroll_uv(int a4)
{
    int stk[4];
    register int t0;
    register float u1;
    register int t8;

    *(unsigned int *)(((int)stk + 8)) = a4;
    t0 = (((struct oEC_short *)(a4))->v);
    u1 = *(float *)0xC0AEEC8;
    *(unsigned int *)(((int)stk + 12)) = (a4 + 0x2E0);
    mdl_vtx_iter_begin(((((struct o9C_int *)((*(int *)(((*(int *)(((int)stk + 12))) + 0x4)))))->v)), ((((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v)));
    for (;;) {
        t8 = mdl_vtx_iter_next();
        if (t8 != 0) {
            break;
        }
        mdl_vtx_get_uv((((int)stk + 0) + 0x4), ((int)stk + 0));
        *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) - ((float)t0 / u1));
        mdl_vtx_set_uv((((int)stk + 0) + 0x4), ((int)stk + 0));
    }
    return t8;
}

int stage_type11_update(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    t2 = a4;
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)(*(signed char *)((a4 + 0x2A8)))) {
            break;
        }
        t4 = t3;
        t4 = (t4 << 2);
        t4 = (t4 + (0x294 + a4));
        t4 = (*(int *)((t4 + 0x0)));
        if ((*(signed char *)((t4 + 0x2))) == 0) {
            t5 = FUN_0c09c2ce(t2, a5, a6, a7);
            if ((signed char)t5 != 0) {
                if (((*(signed char *)((t4 + 0x2))) == 2) && (t0 = *(signed char *)((t4 + 0x2D9)), t0 == 0)) {
                    t2 = a4;
                    t5 = FUN_0c026200(t2, t4);
                    if ((signed char)t5 == 3) {
                        u0 = ((((struct o20_float *)(t4))->v));
                        t5 = 0x4;
                        u1 = (*(float *)((((((*(signed char *)(((0x30E + a4) + 0x0))) << 2) << 1) + 0xC33A138) + 0x0)));
                        u0 = (u0 + u1);
                        (((struct o20_float *)(t4))->v) = u0;
                        u0 = ((((struct o28_float *)(t4))->v));
                        t5 = (t5 + ((((*(signed char *)(((0x30E + a4) + 0x0))) << 2) << 1) + 0xC33A138));
                        u1 = (*(float *)((t5 + 0x0)));
                        u0 = (u0 + u1);
                        (((struct o28_float *)(t4))->v) = u0;
                        t6 = t5;
                        u2 = u0;
                        u3 = u1;
                    }
                    t7 = t6;
                    u4 = u2;
                    u2 = u3;
                }
                t6 = t7;
                u3 = u4;
                u4 = u2;
            } else {
                t2 = a4;
                t7 = FUN_0c026200(t2, t4);
                if ((signed char)t7 == 3) {
                    u0 = ((((struct o20_float *)(t4))->v));
                    t5 = 0x4;
                    u1 = (*(float *)((((((*(signed char *)(((0x30E + a4) + 0x0))) << 2) << 1) + 0xC33A138) + 0x0)));
                    u0 = (u0 + u1);
                    (((struct o20_float *)(t4))->v) = u0;
                    u0 = ((((struct o28_float *)(t4))->v));
                    t5 = (t5 + ((((*(signed char *)(((0x30E + a4) + 0x0))) << 2) << 1) + 0xC33A138));
                    u1 = (*(float *)((t5 + 0x0)));
                    u0 = (u0 + u1);
                    (((struct o28_float *)(t4))->v) = u0;
                    t7 = t5;
                    u2 = u0;
                    u5 = u1;
                }
                t6 = t7;
                u3 = u2;
                u4 = u5;
            }
            t7 = t6;
            u2 = u3;
            u3 = u4;
        } else {
            t6 = t5;
            u4 = u0;
            u5 = u1;
            if (((*(signed char *)((t4 + 0x2))) == 2) && (t1 = *(signed char *)((t4 + 0x2D9)), t1 == 0)) {
                t2 = a4;
                t8 = FUN_0c026200(t2, t4);
                if ((signed char)t8 == 3) {
                    u0 = ((((struct o20_float *)(t4))->v));
                    t5 = 0x4;
                    u1 = (*(float *)((((((*(signed char *)(((0x30E + a4) + 0x0))) << 2) << 1) + 0xC33A138) + 0x0)));
                    u0 = (u0 + u1);
                    (((struct o20_float *)(t4))->v) = u0;
                    u0 = ((((struct o28_float *)(t4))->v));
                    t5 = (t5 + ((((*(signed char *)(((0x30E + a4) + 0x0))) << 2) << 1) + 0xC33A138));
                    u1 = (*(float *)((t5 + 0x0)));
                    u0 = (u0 + u1);
                    (((struct o28_float *)(t4))->v) = u0;
                    t4 = t5;
                    u6 = u0;
                    u7 = u1;
                }
                t6 = t4;
                u4 = u6;
                u5 = u7;
            } else {
                t4 = t2;
            }
            t7 = t6;
            t6 = t4;
            u2 = u4;
            u3 = u5;
        }
        u0 = u2;
        u1 = u3;
        t5 = t7;
        t3 = (t3 + 0x1);
        t2 = t6;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x78) {
        (((struct oEC_ushort *)(a4))->v) = 0x0;
    }
    return stage_type11_scroll_uv(a4);
}
