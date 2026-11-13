/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c042728-0c043384) */

struct o0_float { float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
int fx_spawn_burst_slot(int, int, int, int, int, int);
float math_rand_float(void);
int FUN_0c0e6f24(void);

int FUN_0c042980(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)0xC7F3014;
    t1 = fx_spawn_burst_slot(a4, 0x1, 0x1, a5, 0x0, ((signed char)((((t0 & 0x3) << 1) + (t0 & 0x3)) << 2) + 0xC149E84));
    t0 = t1;
    if (t1 != 0) {
        (((struct o40_float *)(((((struct o2E0_int *)(t1))->v))))->v) = ((((struct o0_float *)0xC042A94)->v));
        u0 = (((struct o4_float *)0xC042A94)->v);
        (((struct o44_float *)(((((struct o2E0_int *)(t1))->v))))->v) = u0;
        (((struct o48_float *)(((((struct o2E0_int *)(t1))->v))))->v) = u0;
        (((struct o4C_float *)(((((struct o2E0_int *)(t1))->v))))->v) = u0;
        math_rand_float();
        *(volatile float *)0xC042AA0;
        
        t2 = FUN_0c0e6f24();
        u0 = (float)t2;
        if ((int)t2 < 0) {
            u0 = ((float)t2 + 4.2949673e+09f);
        }
        (((struct o4_float *)((0x308 + t1)))->v) = ((u0 / ((((struct o1C_float *)0xC042A94)->v))) + ((((struct o20_float *)0xC042A94)->v)));
        t0 = 0xC042AB4;
    }
    return t0;
}
