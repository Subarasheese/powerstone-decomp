/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0332a0-0c033670) */

int FUN_0c033390(int a4, int a5, int a6, int a7);
struct o118_uint { char p[0x118]; unsigned int v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
extern int FUN_0c0e6fe8();
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o2E8_int { char p[0x2E8]; int v; };

int fx_spawn_0332a0(int a4)
{
    register int t0;
    register int t19;
    register int t5;
    register int t7;

    t0 = obj_create(0x5, 0x1, 0x3);
    t19 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC033602;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        t5 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + (t5 << 2)) + 0x0))) + 0x0)) = 0x1;
            t7 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + (t5 << 2)) + 0x0))), ((signed char)((((t7 << 1) + t7) << 2) << 1) + 0xC6002D0), (t5 + 0xE));
            *(volatile int *)((((0x2E0 + t0) + (t5 << 2)) + 0x0));
            FUN_0c0e6fe8();
            *(volatile int *)((((0x2E0 + t0) + (t5 << 2)) + 0x0));
            FUN_0c0e6fe8();
            *(volatile int *)((((0x2E0 + t0) + (t5 << 2)) + 0x0));
            FUN_0c0e6fe8();
            t5 = (t5 + 0x1);
            if ((int)t5 >= (int)0x3) {
                break;
            }
        }
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t19 = 0x118;
    }
    return t19;
}


int FUN_0c033442(int a4)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;

    t2 = (((struct o2E4_int *)(a4))->v);
    t3 = *(signed char *)((a4 + 0x9));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                t4 = t3;
            } else {
                (((struct o1C_float *)(t2))->v) = (((((struct o1C_float *)(t2))->v)) + ((((struct o30_float *)(t2))->v)));
                (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) + ((((struct o30_float *)(t2))->v)));
                (((struct o24_float *)(t2))->v) = (((((struct o24_float *)(t2))->v)) + ((((struct o30_float *)(t2))->v)));
                (((struct o44_float *)(t2))->v) = (((((struct o44_float *)(t2))->v)) - 0.125f);
                (((struct o48_float *)(t2))->v) = (((((struct o48_float *)(t2))->v)) - 0.125f);
                (((struct o4C_float *)(t2))->v) = (((((struct o4C_float *)(t2))->v)) - 0.125f);
                t3 = 0x44;
                if (!(((((struct o44_float *)(t2))->v)) > 0.0f)) {
                    t5 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t5 + 0x1);
                    *(unsigned char *)((t2 + 0x0)) = 0x0;
                    t3 = (t5 + 0x1);
                }
                t4 = t3;
            }
            t3 = t4;
        } else {
            (((struct o1C_float *)(t2))->v) = (((((struct o1C_float *)(t2))->v)) + ((((struct o30_float *)(t2))->v)));
            (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) + ((((struct o30_float *)(t2))->v)));
            u0 = (((struct o24_float *)(t2))->v);
            u1 = (((struct o30_float *)(t2))->v);
            (((struct o24_float *)(t2))->v) = (u0 + u1);
            t4 = 0x24;
            if (!(1.0f > (u0 + u1))) {
                t5 = *(signed char *)((a4 + 0x9));
                *(unsigned char *)((a4 + 0x9)) = (t5 + 0x1);
                t4 = (t5 + 0x1);
            }
            t3 = t4;
        }
        t4 = t3;
    } else {
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        (((struct o30_float *)(t2))->v) = 0.125f;
        *(unsigned int *)((t2 + 0x14)) = (*(int *)(((*(int *)((a4 + 0x1C))) + 0x30)));
        *(unsigned short *)((t2 + 0x2)) = 0x21F;
        FUN_0c0e6fe8(a4, t2, 0.125f);
        (((struct o1C_float *)(t4))->v) = (((((struct o1C_float *)(t4))->v)) + ((((struct o30_float *)(t4))->v)));
        (((struct o20_float *)(t4))->v) = (((((struct o20_float *)(t4))->v)) + ((((struct o30_float *)(t4))->v)));
        u0 = (((struct o24_float *)(t4))->v);
        u1 = (((struct o30_float *)(t4))->v);
        (((struct o24_float *)(t4))->v) = (u0 + u1);
        t4 = 0x24;
        if (!(1.0f > (u0 + u1))) {
            t2 = *(signed char *)((t1 + 0x9));
            *(unsigned char *)((t1 + 0x9)) = (t2 + 0x1);
            t4 = (t2 + 0x1);
        }
    }
    return t4;
}

int FUN_0c033528(int a4)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;
    register float u2;

    t3 = (((struct o2E8_int *)(a4))->v);
    u0 = *(float *)0xC033654;
    t4 = *(signed char *)((a4 + 0xA));
    if (t4 != 0) {
        if (t4 != 1) {
            if (t4 != 2) {
                t5 = t4;
            } else {
                (((struct o1C_float *)(t3))->v) = (((((struct o1C_float *)(t3))->v)) + ((((struct o30_float *)(t3))->v)));
                (((struct o20_float *)(t3))->v) = (((((struct o20_float *)(t3))->v)) + ((((struct o30_float *)(t3))->v)));
                (((struct o24_float *)(t3))->v) = (((((struct o24_float *)(t3))->v)) + ((((struct o30_float *)(t3))->v)));
                (((struct o44_float *)(t3))->v) = (((((struct o44_float *)(t3))->v)) - u0);
                (((struct o48_float *)(t3))->v) = (((((struct o48_float *)(t3))->v)) - u0);
                (((struct o4C_float *)(t3))->v) = (((((struct o4C_float *)(t3))->v)) - u0);
                t4 = 0x44;
                if (!(((((struct o44_float *)(t3))->v)) > 0.0f)) {
                    t6 = *(signed char *)((a4 + 0xA));
                    *(unsigned char *)((a4 + 0xA)) = (t6 + 0x1);
                    *(unsigned char *)((t3 + 0x0)) = 0x0;
                    t4 = (t6 + 0x1);
                }
                t5 = t4;
            }
            t4 = t5;
        } else {
            (((struct o1C_float *)(t3))->v) = (((((struct o1C_float *)(t3))->v)) + ((((struct o30_float *)(t3))->v)));
            (((struct o20_float *)(t3))->v) = (((((struct o20_float *)(t3))->v)) + ((((struct o30_float *)(t3))->v)));
            u1 = (((struct o24_float *)(t3))->v);
            u2 = (((struct o30_float *)(t3))->v);
            (((struct o24_float *)(t3))->v) = (u1 + u2);
            t5 = 0x24;
            if (!(1.0f > (u1 + u2))) {
                t6 = *(signed char *)((a4 + 0xA));
                *(unsigned char *)((a4 + 0xA)) = (t6 + 0x1);
                t5 = (t6 + 0x1);
            }
            t4 = t5;
        }
        t5 = t4;
    } else {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        (((struct o30_float *)(t3))->v) = u0;
        *(unsigned short *)((t3 + 0x2)) = 0x231;
        t4 = ((int (*)(int, int, float))(FUN_0c0e6fe8))(a4, t3, u0);
        t3 = ((int (*)(int, int))(FUN_0c0e6fe8))(0x0, t5);
        (((struct o1C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) + ((((struct o30_float *)(t1))->v)));
        (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) + ((((struct o30_float *)(t1))->v)));
        u0 = (((struct o24_float *)(t1))->v);
        u1 = (((struct o30_float *)(t1))->v);
        (((struct o24_float *)(t1))->v) = (u0 + u1);
        t5 = 0x24;
        if (!(1.0f > (u0 + u1))) {
            t1 = *(signed char *)((t2 + 0xA));
            *(unsigned char *)((t2 + 0xA)) = (t1 + 0x1);
            t5 = (t1 + 0x1);
        }
    }
    return t5;
}
