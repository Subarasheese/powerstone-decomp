/* swirling effect (constructor and updates) (0c0cb994-0c0cc074) */

struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0555dc(void);
int obj_create(int, int, int);
int obj_destroy(int);
int FUN_0c06233a(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int FUN_0c0e6fe8();
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
int obj_create_beside(int, int, int, int, int);
int obj_set_record_char(int, int);

int fx_swirl_create(int a4, int a5);

int FUN_0c0cba6e(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                u0 = (((struct o3C_float *)(a4))->v);
                u1 = (((struct o58_float *)(a4))->v);
                (((struct o58_float *)(a4))->v) = (u1 + u0);
                t1 = 0x58;
                if (!((u1 + u0) > 0.0f)) {
                    t2 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
                    t1 = (t2 + 0x1);
                }
                return t1;
            }
            if (t0 == 3) {
                return obj_destroy(a4);
            }
            return t0;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct o58_float *)(a4))->v) = 0.0f;
        u0 = math_sin_angle16((*(int *)((a4 + 0x30))));
        u1 = (u0 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
        (((struct o38_float *)(a4))->v) = (u1 * 30.0f);
        u0 = math_cos_angle16((*(int *)((a4 + 0x30))));
        u1 = (u0 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
        (((struct o40_float *)(a4))->v) = (u1 * 30.0f);
        (((struct o3C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x2C))))) * 30.0f));
    }
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((-((math_sin_angle16((*(int *)((a4 + 0x2C))))) * 1.0f))));
    if ((*(signed char *)((a4 + 0x2D8))) != 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct o3C_float *)(a4))->v) = (-(((((struct o58_float *)(a4))->v)) / 10.0f));
        (((struct oEC_ushort *)(a4))->v) = 0x0;
        if (((((struct o274_float *)(a4))->v)) > 0.0f) {
            (((struct oEC_ushort *)(a4))->v) = 0x1;
            t0 = obj_create(0x1, 0x1, 0x1);
            t1 = t0;
            if (t0 == 0) {
            } else {
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
                *(unsigned char *)((t0 + 0x1)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = 0x41F;
                *(unsigned char *)((t0 + 0x5)) = 0x19;
                *(unsigned int *)((t0 + 0x10)) = 0xC0CBD88;
                t2 = ((int (*)(void))(FUN_0c0e6fe8))();
                (((struct o54_float *)(t0))->v) = 1.0f;
                *(volatile int *)((a4 + 0x1C));
                t2 = ((int (*)(float))(FUN_0c0e6fe8))(1.0f);
                *(unsigned int *)((t0 + 0x1C)) = (*(int *)((a4 + 0x1C)));
                (((struct o118_uint *)(t0))->v) = 0x0;
                (((struct o5C_float *)(t0))->v) = f4;
                t2 = ((int (*)(float))(FUN_0c0e6fe8))(f4);
                (((struct o24_float *)(t0))->v) = 0.0f;
                (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - (((math_sin_angle16((*(int *)((t0 + 0x30))))) * 100.0f)));
                (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) - (((math_cos_angle16((*(int *)((t0 + 0x30))))) * 100.0f)));
                (((struct o105_uchar *)(t0))->v) = 0x1;
                (((struct o106_uchar *)(t0))->v) = 0x1;
                (((struct o107_uchar *)(t0))->v) = 0x1;
                *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
                t2 = *(signed char *)((t0 + 0x3));
                FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t2 << 1) + t2) << 2) << 1) + 0xC6002D0), 0x14);
                *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x100F;
                (((struct o98_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 2.0f;
                *(unsigned char *)((t0 + 0xE)) = 0x0;
                *(unsigned char *)((t0 + 0xF)) = 0x0;
                t2 = fx_swirl_create(t0, 0x0);
                if (t2 != 0) {
                    *(unsigned char *)((t0 + 0xF)) = ((*(signed char *)((t0 + 0xF))) + 0x1);
                }
                t2 = fx_swirl_create(t0, 0x1);
                if (t2 != 0) {
                    *(unsigned char *)((t0 + 0xF)) = ((*(signed char *)((t0 + 0xF))) + 0x1);
                }
                t2 = fx_swirl_create(t0, 0x2);
                if (t2 != 0) {
                    *(unsigned char *)((t0 + 0xF)) = ((*(signed char *)((t0 + 0xF))) + 0x1);
                }
                t2 = fx_swirl_create(t0, 0x3);
                t1 = t2;
                if (t2 != 0) {
                    t2 = *(signed char *)((t0 + 0xF));
                    *(unsigned char *)((t0 + 0xF)) = (t2 + 0x1);
                    t1 = (t2 + 0x1);
                }
            }
            return t1;
        }
        return 0x274;
    }
    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.0555555522f);
    return 0x58;
}

int fx_swirl_create(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t2;
    register int t4;
    register int t7;
    register int t8;

    *(unsigned char *)(((int)stk + 4)) = a5;
    *(int *)((int)stk + 0) = 0x0;
    t0 = obj_create_beside(0x1, a4, 0x1, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0CBF1C;
        t2 = ((int (*)(void))(FUN_0c0e6fe8))();
        *(volatile int *)((a4 + 0x1C));
        t4 = ((int (*)(void))(FUN_0c0e6fe8))();
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct o118_uint *)(t0))->v) = 0x0;
        (((struct o101_uchar *)(t0))->v) = 0xF;
        (((struct o102_uchar *)(t0))->v) = 0x0;
        obj_set_record_char(t0, 0x74);
        (((struct o105_uchar *)(t0))->v) = 0x0;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
        t7 = ((int (*)(int))(FUN_0c0e6fe8))(((((*(signed char *)(((int)stk + 4))) << 2) << 2) + 0xC33CA40));
        (((struct o44_float *)(t0))->v) = (*(float *)((t8 + 0x0)));
    }
    return t0;
}
