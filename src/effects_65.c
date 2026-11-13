/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03cb28-0c03cc48) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
int obj_create(int, int, int, int);
int FUN_0c062436(int, int, int);
int FUN_0c0e6fe8(void);
int memcpy(int, int, int);

int fx_spawn_03cb28(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t5 = obj_create(0x5, 0x1, 0x1, 1);
    t6 = t5;
    if (t5 != 0) {
        *(unsigned char *)((t5 + 0x0)) = 0x1;
        *(unsigned char *)((t5 + 0x1)) = 0x1;
        *(unsigned short *)((t5 + 0x6)) = 0x1F;
        *(unsigned char *)((t5 + 0x5)) = 0x20;
        *(unsigned int *)((t5 + 0x10)) = 0xC03CCF2;
        t7 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(t5, 0x1, 0x1F);
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x4)) = a5;
        t5 = ((int (*)(int))(FUN_0c0e6fe8))(t0);
        if ((a5 != 0) && (a5 != 1)) {
            (((struct o58_float *)(t1))->v) = 0.099999994f;
            (((struct o54_float *)(t1))->v) = 0.099999994f;
            (((struct o50_float *)(t1))->v) = 0.099999994f;
            t0 = t1;
        } else {
            (((struct o58_float *)(t0))->v) = 0.149999991f;
            (((struct o54_float *)(t0))->v) = 0.149999991f;
            (((struct o50_float *)(t0))->v) = 0.149999991f;
        }
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t1 = (((struct o2E0_int *)(t0))->v);
        *(unsigned char *)((t1 + 0x0)) = t3;
        *(unsigned short *)((t1 + 0x2)) = t4;
        t0 = *(signed char *)((a4 + 0x3));
        FUN_0c062436(t1, ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x0);
        memcpy((((0xA4 + t1) + 0x4) & 0xFFFFFFF8), ((((struct o9C_int *)(t1))->v)), 0x698);
        (((struct o9C_uint *)(t1))->v) = (((0xA4 + t1) + 0x4) & 0xFFFFFFF8);
        (((struct o24_float *)(t1))->v) = 1.0f;
        (((struct o20_float *)(t1))->v) = 1.0f;
        (((struct o1C_float *)(t1))->v) = 1.0f;
        t6 = 0x1C;
    }
    return t6;
}
