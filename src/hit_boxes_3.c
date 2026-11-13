/* hit box data converters, per-frame object lists, hit edit draw (0c022634-0c0228ac) */

struct o10_float { char p[0x10]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float FUN_0c0211d0(float, float, float, float);
float math_signed_sqrt(float);
struct o14_float { char p[0x14]; float v; };

int FUN_0c022634(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    u0 = (((struct oC_float *)(a6))->v);
    u1 = (((struct oC_float *)(a7))->v);
    u2 = *(float *)((a6 + 0x0));
    u3 = *(float *)((a7 + 0x0));
    u4 = (((struct o8_float *)(a7))->v);
    u5 = (((struct o8_float *)(a6))->v);
    u6 = ((u5 - u4) * (u5 - u4));
    u6 = u6 + ((u2 - u3)) * ((u2 - u3));
    u2 = math_signed_sqrt(u6);
    u3 = (((struct o4_float *)(a7))->v);
    u4 = (((struct o10_float *)(a7))->v);
    u5 = (((struct o4_float *)(a6))->v);
    u6 = (((struct o10_float *)(a6))->v);
    u7 = FUN_0c0211d0((u6 + u5), (u5 - u6), (u4 + u3), (u3 - u4));
    t0 = 0x0;
    if (!(0.0f > ((u0 + u1) - u2)) && !(0.0f > u7)) {
        t0 = 0x1;
    }
    return t0;
}

int FUN_0c0226da(int a4, int a5, int a6, int a7)
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
    register int t22;
    register float u20;
    float u21;

    u0 = *(float *)((a6 + 0x0));
    u1 = *(float *)((a7 + 0x0));
    u2 = (((struct oC_float *)(a7))->v);
    u3 = (((struct oC_float *)(a6))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = (u1 - u0);
    }
    (((struct o10_float *)(((int)stk + 0)))->v) = ((u3 + u2) - u4);
    u6 = (((struct oC_float *)(a7))->v);
    u7 = (((struct o14_float *)(a6))->v);
    u8 = (((struct o8_float *)(a6))->v);
    u9 = (((struct o8_float *)(a7))->v);
    u10 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u10 = (u9 - u8);
    }
    (((struct o8_float *)((((int)stk + 0) + 0x10)))->v) = ((u7 + u6) - u10);
    u12 = (((struct o4_float *)(a7))->v);
    *(float *)(((int)stk + 8)) = u12;
    u13 = (((struct o10_float *)(a7))->v);
    *(float *)(((int)stk + 12)) = u13;
    u14 = *(float *)(((int)stk + 8));
    u15 = (((struct o4_float *)(a6))->v);
    *(float *)(((int)stk + 0)) = u15;
    u16 = (((struct o10_float *)(a6))->v);
    *(float *)(((int)stk + 4)) = u16;
    (((struct o4_float *)((((int)stk + 0) + 0x10)))->v) = (FUN_0c0211d0((u16 + (*(float *)(((int)stk + 0)))), (u15 - u16), (u13 + u14), (u12 - u13)));
    t22 = 0x0;
    if (!(0.0f > ((((struct o10_float *)(((int)stk + 0)))->v))) && ((u20 = (((struct o8_float *)((((int)stk + 0) + 0x10)))->v), !(0.0f > u20)) && (u21 = (((struct o4_float *)((((int)stk + 0) + 0x10)))->v), !(0.0f > u21)))) {
        t22 = 0x1;
    }
    return t22;
}

int FUN_0c02279a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;

    u0 = (((struct oC_float *)(a6))->v);
    u1 = (((struct oC_float *)(a7))->v);
    u2 = *(float *)((a6 + 0x0));
    u3 = *(float *)((a7 + 0x0));
    u4 = (((struct o4_float *)(a7))->v);
    u5 = (((struct o4_float *)(a6))->v);
    u6 = (((struct o8_float *)(a7))->v);
    u7 = (((struct o8_float *)(a6))->v);
    u8 = ((u5 - u4) * (u5 - u4));
    u8 = u8 + ((u2 - u3)) * ((u2 - u3));
    u2 = u8;
    u2 = u2 + ((u7 - u6)) * ((u7 - u6));
    u3 = math_signed_sqrt(u2);
    t0 = 0x0;
    if (!(0.0f > ((u0 + u1) - u3))) {
        t0 = 0x1;
    }
    return t0;
}

int FUN_0c02280e(int a4, int a5, int a6, int a7)
{
    int stk[3];
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
    register float u19;
    float u20;

    u0 = *(float *)((a6 + 0x0));
    u1 = *(float *)((a7 + 0x0));
    u2 = (((struct oC_float *)(a6))->v);
    u3 = (((struct oC_float *)(a7))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = (u1 - u0);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u2 + u3) - u4);
    u6 = (((struct oC_float *)(a7))->v);
    u7 = (((struct o14_float *)(a6))->v);
    u8 = (((struct o8_float *)(a6))->v);
    u9 = (((struct o8_float *)(a7))->v);
    u10 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u10 = (u9 - u8);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u7 + u6) - u10);
    u12 = (((struct oC_float *)(a7))->v);
    u13 = (((struct o10_float *)(a6))->v);
    u14 = (((struct o4_float *)(a6))->v);
    u15 = (((struct o4_float *)(a7))->v);
    u16 = (u14 - u15);
    if (0.0f > (u14 - u15)) {
        u16 = (u15 - u14);
    }
    (((struct o4_float *)(((int)stk + 0)))->v) = ((u13 + u12) - u16);
    if (!(0.0f > (*(float *)((((int)stk + 0) + 0x0)))) && ((u19 = (((struct o8_float *)(((int)stk + 0)))->v), !(0.0f > u19)) && (u20 = (((struct o4_float *)(((int)stk + 0)))->v), !(0.0f > u20)))) {
        return 0x1;
    }
    return 0x0;
}
