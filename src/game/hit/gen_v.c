/* Straight-line functions with calls and guards (batch gen_v): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float FUN_0c0211d0(float, float, float, float, float, float, float);
int FUN_0c023a52(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10);

int FUN_0c023a52(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[7];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float t18;
    register int t29;
    float u20;

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a5 + 0x0));
    u2 = (((struct oC_float *)(a5))->v);
    u3 = (((struct oC_float *)(a4))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = (u1 - u0);
    }
    (((struct o10_float *)(((int)stk + 0)))->v) = ((u3 + u2) - u4);
    u6 = (((struct oC_float *)(a5))->v);
    u7 = (((struct o14_float *)(a4))->v);
    u8 = (((struct o8_float *)(a4))->v);
    u9 = (((struct o8_float *)(a5))->v);
    u10 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u10 = (u9 - u8);
    }
    (((struct o8_float *)((((int)stk + 0) + 0x10)))->v) = ((u7 + u6) - u10);
    u12 = (((struct o4_float *)(a5))->v);
    *(float *)(((int)stk + 8)) = u12;
    u13 = (((struct o10_float *)(a5))->v);
    *(float *)(((int)stk + 12)) = u13;
    u14 = *(float *)(((int)stk + 8));
    u15 = (((struct o4_float *)(a4))->v);
    *(float *)(((int)stk + 0)) = u15;
    u16 = (((struct o10_float *)(a4))->v);
    *(float *)(((int)stk + 4)) = u16;
    t18 = FUN_0c0211d0((u16 + (*(float *)(((int)stk + 0)))), (u15 - u16), (u13 + u14), (u12 - u13), f8, f9, f10);
    (((struct o4_float *)((((int)stk + 0) + 0x10)))->v) = t18;
    t29 = 0x8;
    if (!(t18 > ((((struct o10_float *)(((int)stk + 0)))->v))) && (u20 = (((struct o8_float *)((((int)stk + 0) + 0x10)))->v), !(t18 > u20))) {
        t29 = 0x2;
        if (((((struct o4_float *)(a5))->v)) > ((((struct o4_float *)(a4))->v))) {
            t29 = 0x3;
        }
    }
    return t29;
}
