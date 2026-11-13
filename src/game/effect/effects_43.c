/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0396bc-0c039828) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(int, int, int, int);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct oEC_short { char p[0xEC]; short v; };
int obj_destroy(int, int, int, int);

int fx_spawn_0396bc(int a4, int a5)
{
    register int t0;
    register int t7;
    register int t2;
    register int t5;

    t0 = obj_create(0x5, 0x1, 0x1, 0x0);
    t7 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(a5); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC321498); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC32148C); }
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC039772;
        t2 = *(signed char *)((a4 + 0x3));
        t5 = (((struct o2E0_int *)(t0))->v);
        FUN_0c06233a(t5, ((signed char)((((t2 << 1) + t2) << 2) << 1) + 0xC6002D0), 0x7);
        *(unsigned char *)((t5 + 0x0)) = 0x1;
        *(unsigned short *)((t5 + 0x2)) = 0x230;
        (((struct o44_float *)(t5))->v) = 1.0f;
        (((struct o48_float *)(t5))->v) = 1.0f;
        (((struct o4C_float *)(t5))->v) = 1.0f;
        t7 = 0x4C;
    }
    return t7;
}

int fx_tick_0396bc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - 0.099999994f);
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.199999988f);
        (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.099999994f);
        (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.099999994f);
        (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - 0.099999994f);
        if (!(((((struct o44_float *)(t0))->v)) > 0.0f)) {
            (((struct o44_float *)(t0))->v) = 0.0f;
        }
        if (!(((((struct o48_float *)(t0))->v)) > 0.0f)) {
            (((struct o48_float *)(t0))->v) = 0.0f;
        }
        if (!(((((struct o4C_float *)(t0))->v)) > 0.0f)) {
            (((struct o4C_float *)(t0))->v) = 0.0f;
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        t1 = 0xEC;
        if ((int)(short)(t0 + 0x1) >= (int)0xA) {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    return obj_destroy(a4, a5, a6, a7);
}
