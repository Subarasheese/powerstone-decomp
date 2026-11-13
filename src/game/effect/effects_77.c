/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03ed0c-0c03ef18) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oC_float { char p[0xC]; float v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
extern int _quick_odd_mvn();
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
int obj_destroy(int, int, int, int);

int fx_spawn_03ed0c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = obj_create(0x5, 0x1, 0xA, 0x0);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03EDFA;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC14993C); }
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        u0 = *(float *)0xC03EE30;
        t2 = 0x0;
        for (;;) {
            t3 = *(int *)((((t2 << 2) + (0x2E0 + t0)) + 0x0));
            *(unsigned char *)((t3 + 0x0)) = 0x0;
            t4 = *(signed char *)((t0 + 0x3));
            FUN_0c06233a(t3, ((signed char)((((t4 << 1) + t4) << 2) << 1) + 0xC6002D0), 0x19);
            *(unsigned short *)((t3 + 0x2)) = 0x411;
            (((struct o28_float *)(t3))->v) = (float)(t2 << 1);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x1C)) = *(struct mv3 *)(0xC149930); }
            t4 = t2;
            t2 = (t2 + 0x1);
            (((struct oC_float *)(t3))->v) = ((float)t4 * u0);
            (((struct o40_float *)(t3))->v) = 1.0f;
            if ((int)t2 >= (int)0xA) {
                break;
            }
        }
        t1 = 0x40;
    }
    return t1;
}

int fx_tick_03ed0c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    int t4;
    int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register float u0;
    register float u1;
    register float u2;

    t6 = *(signed char *)((a4 + 0x8));
    if (t6 != 0) {
        if (t6 != 1) {
            return t6;
        }
        return obj_destroy(a4, a5, a6, a7);
    }
    t6 = a7;
    t7 = (0x2E0 + a4);
    t8 = 0x0;
    t9 = 0x0;
    for (;;) {
        t11 = *(int *)((t7 + 0x0));
        t7 = (t7 + 0x4);
        t10 = 0x28;
        if ((((((struct o28_float *)(t11))->v)) != 0.0f) || (t0 = *(signed char *)((t11 + 0x0)), t1 = t0, t1 != 0)) {
            t8 = (t8 + 0x1);
            if (((((struct o28_float *)(t11))->v)) != 0.0f) {
                u2 = (((struct o28_float *)(t11))->v);
                (((struct o28_float *)(t11))->v) = (u2 - 1.0f);
                if (((u2 - 1.0f) == (0.0f)) && ((t2 = *(int *)((a4 + 0x1C)), t6 = t2, t3 = *(int *)((t6 + 0x10)), t1 = t3, t1 == 0xC0C8D80) && (t4 = 0xF0, u0 = (((struct oC_float *)(t11))->v), t4 = (t4 + t6), u1 = *(float *)((t4 + 0x0)), !(u0 > u1)))) {
                    *(unsigned char *)((t11 + 0x0)) = 0x1;
                }
            }
            t10 = 0x28;
            if ((((((struct o28_float *)(t11))->v)) == 0.0f) && (t5 = *(signed char *)((t11 + 0x0)), t1 = t5, t1 != 0)) {
                (((struct o1C_float *)(t11))->v) = (((((struct o1C_float *)(t11))->v)) + 0.099999994f);
                (((struct o20_float *)(t11))->v) = (((((struct o20_float *)(t11))->v)) + 0.099999994f);
                u2 = (((struct o24_float *)(t11))->v);
                (((struct o24_float *)(t11))->v) = (u2 + 0.099999994f);
                t10 = 0x24;
                if (!(1.0f > (u2 + 0.099999994f))) {
                    u2 = (((struct o40_float *)(t11))->v);
                    (((struct o40_float *)(t11))->v) = (u2 - 0.125f);
                    if (!((u2 - 0.125f) > 0.0f)) {
                        *(unsigned char *)((t11 + 0x0)) = 0x0;
                    }
                    t10 = 0x40;
                }
            }
        }
        t9 = (t9 + 0x1);
        if ((int)t9 >= (int)0xA) {
            break;
        }
    }
    t0 = t10;
    if (t8 == 0) {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}
