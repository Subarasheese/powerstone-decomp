/* hit box data converters, per-frame object lists, hit edit draw (0c02380c-0c023bf4) */

int FUN_0c023a52(int a4, int a5, int a6, int a7);
struct o10_float { char p[0x10]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float FUN_0c0211d0(float, float, float, float);
float math_signed_sqrt(float);
struct o14_float { char p[0x14]; float v; };

int FUN_0c02380c(int a4, int a5)
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

    u0 = (((struct oC_float *)(a4))->v);
    u1 = (((struct oC_float *)(a5))->v);
    u2 = *(float *)((a4 + 0x0));
    u3 = *(float *)((a5 + 0x0));
    u4 = (((struct o8_float *)(a5))->v);
    u5 = (((struct o8_float *)(a4))->v);
    u6 = ((u5 - u4) * (u5 - u4));
    u6 = u6 + ((u2 - u3)) * ((u2 - u3));
    u2 = math_signed_sqrt(u6);
    u3 = (((struct o4_float *)(a5))->v);
    u4 = (((struct o10_float *)(a5))->v);
    u5 = (((struct o4_float *)(a4))->v);
    u6 = (((struct o10_float *)(a4))->v);
    u7 = FUN_0c0211d0((u6 + u5), (u5 - u6), (u4 + u3), (u3 - u4));
    t0 = 0x8;
    if (u7 > ((u0 + u1) - u2)) {
    } else {
        t0 = 0x2;
        if (((((struct o4_float *)(a5))->v)) > ((((struct o4_float *)(a4))->v))) {
            t0 = 0x3;
        }
    }
    return t0;
}

int FUN_0c0239b6(int a4, int a5)
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
    register int t28;
    float u19;

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a5 + 0x0));
    u2 = (((struct oC_float *)(a4))->v);
    u3 = (((struct oC_float *)(a5))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = (u1 - u0);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u2 + u3) - u4);
    u6 = (((struct oC_float *)(a5))->v);
    u7 = (((struct o14_float *)(a4))->v);
    u8 = (((struct o8_float *)(a4))->v);
    u9 = (((struct o8_float *)(a5))->v);
    u10 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u10 = (u9 - u8);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u7 + u6) - u10);
    u12 = (((struct oC_float *)(a5))->v);
    u13 = (((struct o10_float *)(a4))->v);
    u14 = (((struct o4_float *)(a4))->v);
    u15 = (((struct o4_float *)(a5))->v);
    u16 = (u14 - u15);
    if (0.0f > (u14 - u15)) {
        u16 = (u15 - u14);
    }
    (((struct o4_float *)(((int)stk + 0)))->v) = ((u13 + u12) - u16);
    t28 = 0x8;
    if (!(((u13 + u12) - u16) > (*(float *)((((int)stk + 0) + 0x0)))) && (u19 = (((struct o8_float *)(((int)stk + 0)))->v), !(((u13 + u12) - u16) > u19))) {
        t28 = 0x2;
        if (((((struct o4_float *)(a5))->v)) > ((((struct o4_float *)(a4))->v))) {
            t28 = 0x3;
        }
    }
    return t28;
}


int FUN_0c023b22(int a4, int a5)
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
    register float u52;
    float u20;
    register int t76;
    float u53;

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a5 + 0x0));
    u2 = (((struct oC_float *)(a4))->v);
    u3 = (((struct oC_float *)(a5))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = (u1 - u0);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u2 + u3) - u4);
    u6 = (((struct o10_float *)(a4))->v);
    u7 = (((struct o10_float *)(a5))->v);
    u8 = (((struct o4_float *)(a4))->v);
    u9 = (((struct o4_float *)(a5))->v);
    u10 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u10 = (u9 - u8);
    }
    (((struct o4_float *)(((int)stk + 0)))->v) = ((u6 + u7) - u10);
    u12 = (((struct o14_float *)(a4))->v);
    u13 = (((struct o14_float *)(a5))->v);
    u14 = (((struct o8_float *)(a4))->v);
    u15 = (((struct o8_float *)(a5))->v);
    u16 = (u14 - u15);
    if (0.0f > (u14 - u15)) {
        u16 = (u15 - u14);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u12 + u13) - u16);
    u19 = *(float *)((((int)stk + 0) + 0x0));
    if (!(u19 > ((((struct o4_float *)(((int)stk + 0)))->v))) && (u20 = (((struct o8_float *)(((int)stk + 0)))->v), !(u19 > u20))) {
        t76 = 0x7;
        if ((*(float *)((a5 + 0x0))) > (*(float *)((a4 + 0x0)))) {
            t76 = 0x5;
        }
    } else {
        u52 = (((struct o8_float *)(((int)stk + 0)))->v);
        if (((*(float *)((((int)stk + 0) + 0x0))) > u52) && (u53 = (((struct o4_float *)(((int)stk + 0)))->v), u53 > u52)) {
            t76 = 0x6;
            if (((((struct o8_float *)(a5))->v)) > ((((struct o8_float *)(a4))->v))) {
                t76 = 0x4;
            }
        } else {
            t76 = 0x2;
            if (((((struct o4_float *)(a5))->v)) > ((((struct o4_float *)(a4))->v))) {
                t76 = 0x3;
            }
        }
    }
    return t76;
}
