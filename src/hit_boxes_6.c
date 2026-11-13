/* hit box data converters, per-frame object lists, hit edit draw (0c023bf4-0c023d04) */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float math_signed_sqrt(float);

int FUN_0c023bf4(int a4, int a5)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = *(float *)((a5 + 0x0));
    u1 = (((struct oC_float *)(a5))->v);
    u2 = (((struct o20_float *)(a4))->v);
    if (!((u0 - u1) > u2)) {
        if (!(u2 > (u1 + u0))) {
            if (!((((((struct o8_float *)(a5))->v)) - ((((struct o14_float *)(a5))->v))) > ((((struct o28_float *)(a4))->v)))) {
                if (!(((((struct o28_float *)(a4))->v)) > (((((struct o8_float *)(a5))->v)) + ((((struct o14_float *)(a5))->v))))) {
                    if (!((((((struct o4_float *)(a5))->v)) + ((((struct o10_float *)(a5))->v))) > (((((struct o24_float *)(a4))->v)) + 1.0f))) {
                        if ((((((struct o4_float *)(a5))->v)) + ((((struct o10_float *)(a5))->v))) > ((((struct o2D4_float *)(a4))->v))) {
                            (((struct o2D4_float *)(a4))->v) = (((((struct o4_float *)(a5))->v)) + ((((struct o10_float *)(a5))->v)));
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c023c72(int a4, int a5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    u0 = *(float *)((a5 + 0x0));
    u1 = (((struct o20_float *)(a4))->v);
    u2 = (((struct o28_float *)(a4))->v);
    u3 = (((struct o8_float *)(a5))->v);
    u4 = ((u3 - u2) * (u3 - u2));
    u4 = u4 + ((u0 - u1)) * ((u0 - u1));
    u0 = math_signed_sqrt(u4);
    t0 = 0x0;
    if (!(0.0f > (((((struct oC_float *)(a5))->v)) - u0))) {
        t0 = 0x0;
        if (!((((((struct o4_float *)(a5))->v)) + ((((struct o10_float *)(a5))->v))) > (((((struct o24_float *)(a4))->v)) + 1.0f))) {
            t0 = 0x0;
            if ((((((struct o4_float *)(a5))->v)) + ((((struct o10_float *)(a5))->v))) > ((((struct o2D4_float *)(a4))->v))) {
                (((struct o2D4_float *)(a4))->v) = (((((struct o4_float *)(a5))->v)) + ((((struct o10_float *)(a5))->v)));
                t0 = 0x1;
            }
        }
    }
    return t0;
}
