/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c039424-0c0396bc) */

struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int);
int _quick_odd_mvn(int, int, int, int);
struct o2E0_int { char p[0x2E0]; int v; };


int fx_tick_039424(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return obj_destroy(a4);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4);
        }
        t0 = 0x0;
        t1 = (0x2E0 + a4);
        t2 = (0x2E0 + a4);
        t3 = (0x2E0 + a4);
        for (;;) {
            t4 = *(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0));
            (((struct o44_float *)(t4))->v) = (((((struct o44_float *)(t4))->v)) - 0.049999997f);
            t4 = *(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0));
            (((struct o48_float *)(t4))->v) = (((((struct o48_float *)(t4))->v)) - 0.049999997f);
            t4 = *(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0));
            (((struct o4C_float *)(t4))->v) = (((((struct o4C_float *)(t4))->v)) - 0.049999997f);
            if (!(((((struct o44_float *)((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0)))))->v)) > 0.0f)) {
                (((struct o44_float *)((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0)))))->v) = 0.0f;
            }
            if (!(((((struct o48_float *)((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0)))))->v)) > 0.0f)) {
                (((struct o48_float *)((*(int *)((t1 + 0x0)))))->v) = 0.0f;
            }
            t0 = (t0 + 0x1);
            if (!(((((struct o4C_float *)((*(int *)((t2 + 0x0)))))->v)) > 0.0f)) {
                (((struct o4C_float *)((*(int *)((t3 + 0x0)))))->v) = 0.0f;
            }
            t2 = (t2 + 0x4);
            t3 = (t3 + 0x4);
            t1 = (t1 + 0x4);
            if ((int)t0 >= (int)0xA) {
                break;
            }
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        t1 = 0xEC;
        if ((int)(short)(t0 + 0x1) >= (int)0x14) {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    t0 = 0x24;
    t1 = 0x20;
    t2 = 0x9;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((t0 + (0x2E0 + a4)))) + 0x4)) = *(struct mv3 *)(((*(int *)((t1 + (0x2E0 + a4)))) + 0x4)); }
        t2 = (t2 - 1);
        t1 = (t1 - 4);
        t0 = (t0 - 4);
        if ((int)t2 < (int)0x1) {
            break;
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E0_int *)(a4))->v)) + 0x4)) = *(struct mv3 *)(((*(int *)((a4 + 0x1C))) + 0x20)); }
    t0 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x8));
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x0;
        t1 = 0xEC;
    }
    return t1;
}
