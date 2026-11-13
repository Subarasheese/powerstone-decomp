/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0332a0-0c033670) */

int FUN_0c033390(int a4, int a5, int a6, int a7);
struct o118_uint { char p[0x118]; unsigned int v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
extern int _quick_odd_mvn();
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
    register int t13;
    register int t2;
    register int t4;

    t0 = obj_create(0x5, 0x1, 0x3, 0x0);
    t13 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC033602;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(0xC149628); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC149634); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC149640); }
        t2 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x0)) = 0x1;
            t4 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))), ((signed char)((((t4 << 1) + t4) << 2) << 1) + 0xC6002D0), (t2 + 0xE));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x4)) = *(struct mv3 *)((a4 + 0x20)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x1C)) = *(struct mv3 *)(0xC149628); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x10)) = *(struct mv3 *)(0xC149640); }
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x3) {
                break;
            }
        }
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t13 = 0x118;
    }
    return t13;
}


int FUN_0c033442(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = (((struct o2E4_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x9));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                t2 = t1;
            } else {
                (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
                (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
                (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
                (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.125f);
                (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.125f);
                (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - 0.125f);
                t1 = 0x44;
                if (!(((((struct o44_float *)(t0))->v)) > 0.0f)) {
                    t3 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t3 + 0x1);
                    *(unsigned char *)((t0 + 0x0)) = 0x0;
                    t1 = (t3 + 0x1);
                }
                t2 = t1;
            }
            t1 = t2;
        } else {
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
            u0 = (((struct o24_float *)(t0))->v);
            u1 = (((struct o30_float *)(t0))->v);
            (((struct o24_float *)(t0))->v) = (u0 + u1);
            t2 = 0x24;
            if (!(1.0f > (u0 + u1))) {
                t3 = *(signed char *)((a4 + 0x9));
                *(unsigned char *)((a4 + 0x9)) = (t3 + 0x1);
                t2 = (t3 + 0x1);
            }
            t1 = t2;
        }
        t2 = t1;
    } else {
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        (((struct o30_float *)(t0))->v) = 0.125f;
        *(unsigned int *)((t0 + 0x14)) = (*(int *)(((*(int *)((a4 + 0x1C))) + 0x30)));
        *(unsigned short *)((t0 + 0x2)) = 0x21F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x44)) = *(struct mv3 *)(0xC149634); }
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
        u0 = (((struct o24_float *)(t0))->v);
        u1 = (((struct o30_float *)(t0))->v);
        (((struct o24_float *)(t0))->v) = (u0 + u1);
        t0 = 0x24;
        if (!(1.0f > (u0 + u1))) {
            t1 = *(signed char *)((a4 + 0x9));
            *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
        t2 = t0;
    }
    return t2;
}

int FUN_0c033528(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    t0 = (((struct o2E8_int *)(a4))->v);
    u0 = *(float *)0xC033654;
    t1 = *(signed char *)((a4 + 0xA));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                t2 = t1;
            } else {
                (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
                (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
                (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
                (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - u0);
                (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - u0);
                (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - u0);
                t1 = 0x44;
                if (!(((((struct o44_float *)(t0))->v)) > 0.0f)) {
                    t3 = *(signed char *)((a4 + 0xA));
                    *(unsigned char *)((a4 + 0xA)) = (t3 + 0x1);
                    *(unsigned char *)((t0 + 0x0)) = 0x0;
                    t1 = (t3 + 0x1);
                }
                t2 = t1;
            }
            t1 = t2;
        } else {
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
            u1 = (((struct o24_float *)(t0))->v);
            u2 = (((struct o30_float *)(t0))->v);
            (((struct o24_float *)(t0))->v) = (u1 + u2);
            t2 = 0x24;
            if (!(1.0f > (u1 + u2))) {
                t3 = *(signed char *)((a4 + 0xA));
                *(unsigned char *)((a4 + 0xA)) = (t3 + 0x1);
                t2 = (t3 + 0x1);
            }
            t1 = t2;
        }
        t2 = t1;
    } else {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        (((struct o30_float *)(t0))->v) = u0;
        *(unsigned short *)((t0 + 0x2)) = 0x231;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x10)) = *(struct mv3 *)(0xC149640); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x44)) = *(struct mv3 *)(0xC149634); }
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
        u0 = (((struct o24_float *)(t0))->v);
        u1 = (((struct o30_float *)(t0))->v);
        (((struct o24_float *)(t0))->v) = (u0 + u1);
        t0 = 0x24;
        if (!(1.0f > (u0 + u1))) {
            t1 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
        t2 = t0;
    }
    return t2;
}
