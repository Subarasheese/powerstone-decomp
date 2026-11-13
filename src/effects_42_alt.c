/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c039424-0c0396bc) */

struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);
int FUN_0c0e6fe8(int, int, int, int);

int fx_tick_039424(int a4, int a5, int a6, int a7)
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

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return obj_destroy(a4, a5, a6, a7);
    }
    t5 = *(signed char *)((a4 + 0x8));
    if (t5 != 0) {
        if (t5 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
        t5 = 0x0;
        t6 = (0x2E0 + a4);
        t7 = (0x2E0 + a4);
        t8 = (0x2E0 + a4);
        for (;;) {
            t9 = *(int *)((((0x2E0 + a4) + (t5 << 2)) + 0x0));
            (((struct o44_float *)(t9))->v) = (((((struct o44_float *)(t9))->v)) - 0.049999997f);
            t9 = *(int *)((((0x2E0 + a4) + (t5 << 2)) + 0x0));
            (((struct o48_float *)(t9))->v) = (((((struct o48_float *)(t9))->v)) - 0.049999997f);
            t9 = *(int *)((((0x2E0 + a4) + (t5 << 2)) + 0x0));
            (((struct o4C_float *)(t9))->v) = (((((struct o4C_float *)(t9))->v)) - 0.049999997f);
            if (!(((((struct o44_float *)((*(int *)((((0x2E0 + a4) + (t5 << 2)) + 0x0)))))->v)) > 0.0f)) {
                (((struct o44_float *)((*(int *)((((0x2E0 + a4) + (t5 << 2)) + 0x0)))))->v) = 0.0f;
            }
            if (!(((((struct o48_float *)((*(int *)((((0x2E0 + a4) + (t5 << 2)) + 0x0)))))->v)) > 0.0f)) {
                (((struct o48_float *)((*(int *)((t6 + 0x0)))))->v) = 0.0f;
            }
            t5 = (t5 + 0x1);
            if (!(((((struct o4C_float *)((*(int *)((t7 + 0x0)))))->v)) > 0.0f)) {
                (((struct o4C_float *)((*(int *)((t8 + 0x0)))))->v) = 0.0f;
            }
            t7 = (t7 + 0x4);
            t8 = (t8 + 0x4);
            t6 = (t6 + 0x4);
            if ((int)t5 >= (int)0xA) {
                break;
            }
        }
        t5 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t5 + 0x1);
        t6 = 0xEC;
        if ((int)(short)(t5 + 0x1) >= (int)0x14) {
            t5 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t5 + 0x1);
            t6 = (t5 + 0x1);
        }
        return t6;
    }
    t5 = 0x24;
    t6 = 0x20;
    t7 = 0x9;
    for (;;) {
        *(volatile int *)((t6 + (0x2E0 + a4)));
        *(volatile int *)((t5 + (0x2E0 + a4)));
        FUN_0c0e6fe8(a4, t5, t6, t7);
        t7 = (t0 - 1);
        t6 = (t1 - 4);
        t5 = (t2 - 4);
        if ((int)t7 < (int)0x1) {
            break;
        }
    }
    *(volatile int *)((t3 + 0x1C));
    *(volatile int *)((t3 + 0x2E0));
    FUN_0c0e6fe8(t3, t5, t6, t7);
    t0 = *(signed char *)(((*(int *)((t4 + 0x1C))) + 0x8));
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t4 + 0x8)) = ((*(signed char *)((t4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(t4))->v) = 0x0;
        t1 = 0xEC;
    }
    return t1;
}
