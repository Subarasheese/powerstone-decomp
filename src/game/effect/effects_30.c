/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c037848-0c037ab8) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);
int thunk_math_mat_get_translate(int, int);

int obj_spawn_037848(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = ((int (*)(int, int, int, int))obj_create)(0x1, 0x1, 0x2, 0x0);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned int *)((t0 + 0x10)) = 0xC03792C;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        (((struct o20_float *)(t0))->v) = ((((struct o20_float *)(a4))->v));
        (((struct o24_float *)(t0))->v) = ((((struct o24_float *)(a4))->v));
        (((struct o28_float *)(t0))->v) = ((((struct o28_float *)(a4))->v));
        *(unsigned int *)((t0 + 0x2C)) = (*(int *)((a4 + 0x2C)));
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0x30)));
        *(unsigned int *)((t0 + 0x34)) = (*(int *)((a4 + 0x34)));
        t2 = 0x0;
        for (;;) {
            t3 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))), ((signed char)((((t3 << 1) + t3) << 2) << 1) + 0xC6002D0), (t2 + 0x14));
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x0)) = 0x1;
            t3 = *(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0));
            t4 = (t2 << 2);
            t2 = (t2 + 0x1);
            *(unsigned short *)((t3 + 0x2)) = 0x1F;
            (((struct o1C_float *)((*(int *)((((0x2E0 + t0) + t4) + 0x0)))))->v) = 0.0f;
            (((struct o20_float *)((*(int *)((((0x2E0 + t0) + t4) + 0x0)))))->v) = 0.0f;
            (((struct o24_float *)((*(int *)(((t4 + (0x2E0 + t0)) + 0x0)))))->v) = 0.0f;
            if ((int)t2 >= (int)0x2) {
                break;
            }
        }
        t1 = 0x24;
    }
    return t1;
}

int obj_tick_037848(int a4)
{
    int stk[4];
    register int t0;
    register int t3;
    register int t10;
    register int t16;
    register int t21;
    register int t23;
    register int t35;
    register int t47;
    register int t54;
    register int t55;
    register int t11;
    register int t12;
    int t13;
    register int t14;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x4;
    }
    t3 = *(signed char *)((a4 + 0x8));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                if (t3 == 3) {
                    t55 = (obj_destroy(a4));
                } else {
                    t55 = t3;
                    if (t3 == 4) {
                        t55 = (obj_destroy(a4));
                    }
                }
            } else {
                t10 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t10 - 1);
                if (((short)(t10 - 1) != 0) && ((t11 = *(int *)((a4 + 0x1C)), t12 = (((struct oF2_short *)(t11))->v), t12 != 1) && (t13 = *(int *)((a4 + 0x1C)), t14 = *(signed char *)((0x71BA + t13)), t14 == 11))) {
                    t16 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
                    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t16 * (unsigned short)0x72D0) + 0xC7E40C4);
                    thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t16 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t16 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0), (int)stk + 4);
                    (((struct o20_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
                    (((struct o28_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
                    t21 = (((struct o2E4_int *)(a4))->v);
                    (((struct o24_float *)(t21))->v) = (((((struct o24_float *)(t21))->v)) + 0.5f);
                    t55 = 0x24;
                } else {
                    t23 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t23 + 0x1);
                    t55 = (t23 + 0x1);
                }
            }
        } else {
            t35 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t35 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t35 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t35 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0), (int)stk + 4);
            (((struct o20_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
            (((struct o24_float *)(a4))->v) = (*(float *)(((int)stk + 8)));
            (((struct o28_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
            (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            (((struct o1C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
            (((struct o20_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
            (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
            (((struct oEC_ushort *)(a4))->v) = 0x12;
            t47 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t47 + 0x1);
            t55 = (t47 + 0x1);
        }
    } else {
        t54 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t54 + 0x1);
        t55 = (t54 + 0x1);
    }
    return t55;
}
