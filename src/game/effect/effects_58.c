/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03b86c-0c03ba7a) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
float math_rand_float(void);
int thunk_math_mat_get_translate(int, int);

int fx_spawn_03b86c(int a4);

int fx_spawn_03b86c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x1, 0x0);
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03BA7A;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
        (((struct o58_float *)(t0))->v) = 0.099999994f;
        (((struct o54_float *)(t0))->v) = 0.099999994f;
        (((struct o50_float *)(t0))->v) = 0.099999994f;
        t1 = *(signed char *)((a4 + 0x3));
        thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840), t0 + 0x20);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x23F;
        t1 = (int)((unsigned int)(math_rand_float() * 255.0f) % 16u);
        t2 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t2 << 1) + t2) << 2) << 1) + 0xC6002D0), (t1 + 0xA));
        (((struct o1C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = ((((struct o50_float *)(t0))->v));
        (((struct o20_float *)(((((struct o2E0_int *)(t0))->v))))->v) = ((((struct o54_float *)(t0))->v));
        (((struct o24_float *)(((((struct o2E0_int *)(t0))->v))))->v) = ((((struct o58_float *)(t0))->v));
        (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        (((struct o44_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        (((struct o48_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        (((struct o4C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
    }
    return t0;
}

int FUN_0c03b9f0(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t3;
    register int t4;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = 0x0;
    for (;;) {
        *(volatile signed char *)(((int)stk + 4));
        t3 = fx_spawn_03b86c((*(int *)(((int)stk + 0))));
        t4 = t3;
        if (t3 != 0) {
            *(unsigned char *)((t3 + 0x4)) = t0;
            t4 = t0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x6) {
            break;
        }
    }
    return t4;
}
