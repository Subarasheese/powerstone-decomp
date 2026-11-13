/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c039aa0-0c039c6c) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(void);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct oEC_short { char p[0xEC]; short v; };
int obj_destroy(int, int, int, int);

int fx_spawn_039aa0(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t10;
    register int t3;
    register int t6;
    register int t7;
    register int t8;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x5, 0x1, 0x2, 0x0);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC3214E8); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC3214DC); }
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC039B7A;
        t3 = *(signed char *)(((int)stk + 0));
        t6 = (0x2E0 + t0);
        t7 = 0x0;
        for (;;) {
            t8 = *(int *)((t6 + 0x0));
            t6 = (t6 + 0x4);
            FUN_0c06233a(t8, ((signed char)((((t3 << 1) + t3) << 2) << 1) + 0xC6002D0), 0x15);
            *(unsigned char *)((t8 + 0x0)) = 0x1;
            *(unsigned short *)((t8 + 0x2)) = 0x239;
            (((struct o44_float *)(t8))->v) = 1.0f;
            t7 = (t7 + 0x1);
            (((struct o48_float *)(t8))->v) = 1.0f;
            (((struct o4C_float *)(t8))->v) = 1.0f;
            if ((int)t7 >= (int)0x2) {
                break;
            }
        }
        t10 = 0x4C;
    }
    return t10;
}

int fx_tick_039aa0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
        t0 = 0x0;
        for (;;) {
            t1 = *(int *)((((t0 << 2) + (0x2E0 + a4)) + 0x0));
            if (t0 == 0) {
                *(unsigned int *)((t1 + 0x18)) = ((*(int *)((t1 + 0x18))) + 0x5B0);
            } else {
                t2 = (*(int *)((t1 + 0x18)));
                t2 = (t2 - 0x5B0);
                *(unsigned int *)((t1 + 0x18)) = t2;
            }
            (((struct o1C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) + 0.199999988f);
            (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) + 0.199999988f);
            (((struct o44_float *)(t1))->v) = (((((struct o44_float *)(t1))->v)) - 0.0899999961f);
            (((struct o48_float *)(t1))->v) = (((((struct o48_float *)(t1))->v)) - 0.0899999961f);
            (((struct o4C_float *)(t1))->v) = (((((struct o4C_float *)(t1))->v)) - 0.0899999961f);
            if (!(((((struct o44_float *)(t1))->v)) > 0.0f)) {
                (((struct o44_float *)(t1))->v) = 0.0f;
            }
            if (!(((((struct o48_float *)(t1))->v)) > 0.0f)) {
                (((struct o48_float *)(t1))->v) = 0.0f;
            }
            t0 = (t0 + 0x1);
            if (!(((((struct o4C_float *)(t1))->v)) > 0.0f)) {
                (((struct o4C_float *)(t1))->v) = 0.0f;
            }
            if ((int)t0 >= (int)0x2) {
                break;
            }
        }
        t0 = 0xEC;
        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0xA) {
            t1 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
        return t0;
    }
    t0 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
    return (t0 + 0x1);
}
