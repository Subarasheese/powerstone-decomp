/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0396bc-0c039828) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(int, int, int, int);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct oEC_short { char p[0xEC]; short v; };
int obj_destroy(int, int, int, int);

int fx_spawn_0396bc(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t4 = obj_create(0x5, 0x1, 0x1);
    t5 = t4;
    if (t4 != 0) {
        *(unsigned char *)((t4 + 0x0)) = 0x1;
        *(unsigned char *)((t4 + 0x1)) = 0x1;
        *(unsigned char *)((t4 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned short *)((t4 + 0x6)) = 0xF;
        *(unsigned char *)((t4 + 0x5)) = 0x19;
        *(unsigned char *)((t4 + 0x8)) = 0x0;
        *(unsigned char *)((t4 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t4))->v) = 0x0;
        (((struct oEE_ushort *)(t4))->v) = 0x0;
        *(unsigned int *)((t4 + 0x1C)) = a4;
        t6 = ((int (*)(int, int))(FUN_0c0e6fe8))(t4, 0x0);
        t4 = ((int (*)(int))(FUN_0c0e6fe8))(t0);
        t0 = ((int (*)(int))(FUN_0c0e6fe8))(t1);
        (((struct o118_uint *)(t3))->v) = t2;
        *(unsigned int *)((t3 + 0x10)) = 0xC039772;
        t0 = *(signed char *)((a4 + 0x3));
        t1 = (((struct o2E0_int *)(t3))->v);
        FUN_0c06233a(t1, ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x7);
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned short *)((t1 + 0x2)) = 0x230;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o4C_float *)(t1))->v) = 1.0f;
        t5 = 0x4C;
    }
    return t5;
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
