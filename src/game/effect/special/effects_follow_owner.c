/* effects that follow their owner (constructor and update) (0c0cb50c-0c0cb994) */

struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o5C_float { char p[0x5C]; float v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int fx_follow_owner_create(int, int);
extern int _quick_odd_mvn();
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o308_float { char p[0x308]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);
float math_cos_angle16(int);
float math_sin_angle16(int);

int FUN_0c0cb50c(int a4, int a5)
{
    register int t0;
    register int t3;
    register int t4;

    t0 = obj_create(0x1, 0x1, 0x1, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x41F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0CB5D6;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC1533C0); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC1533D8); }
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0x30)));
        (((struct o5C_float *)(t0))->v) = 1.0f;
        (((struct oF2_ushort *)(t0))->v) = (signed char)a5;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct o118_uint *)(t0))->v) = 0x0;
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
        t3 = (((struct o2E0_int *)(t0))->v);
        *(unsigned char *)((t3 + 0x0)) = 0x1;
        t4 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t3, ((signed char)((((t4 << 1) + t4) << 2) << 1) + 0xC6002D0), 0x17);
        *(unsigned short *)((t3 + 0x2)) = 0x1F;
        if ((signed char)a5 == 2) {
            return fx_follow_owner_create(t0, a5);
        }
        return (signed char)a5;
    }
    return t0;
}

int FUN_0c0cb5d6(int a4)
{
    register int t0;
    register float u0;
    register float u1;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                return obj_destroy(a4);
            }
            if (t0 == 3) {
                return obj_destroy(a4);
            }
            return t0;
        }
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o44_float *)(a4))->v)));
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o308_float *)(a4))->v)));
        (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + ((((struct o308_float *)(a4))->v)));
        u0 = (((struct o308_float *)(a4))->v);
        u1 = (((struct o8_float *)((0x308 + a4)))->v);
        (((struct o308_float *)(a4))->v) = (u0 + u1);
        if (0.0f > (u0 + u1)) {
            (((struct o308_float *)(a4))->v) = 0.0f;
        }
        u0 = (((struct o4_float *)((0x308 + a4)))->v);
        u1 = (((struct o54_float *)(a4))->v);
        (((struct o54_float *)(a4))->v) = (u1 + u0);
        if (!((u1 + u0) > 0.0f)) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        if (!(((((struct o4_float *)((0x308 + a4)))->v)) > 0.0f)) {
            u0 = ((((struct o4_float *)((0x308 + a4)))->v));
            u0 = u0 + 2.0f * ((((struct oC_float *)((0x308 + a4)))->v));
            (((struct o4_float *)((0x308 + a4)))->v) = u0;
            if (((((struct o5C_float *)(a4))->v)) != 0.0f) {
                u0 = (((struct o5C_float *)(a4))->v);
                (((struct o5C_float *)(a4))->v) = (u0 - 0.049999997f);
                if (!((u0 - 0.049999997f) > 0.0f)) {
                    (((struct o5C_float *)(a4))->v) = 0.0f;
                }
            }
            t0 = 0x5C;
        } else {
            (((struct o4_float *)((0x308 + a4)))->v) = (((((struct o4_float *)((0x308 + a4)))->v)) + ((((struct oC_float *)((0x308 + a4)))->v)));
            t0 = 0x4;
        }
        return t0;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    u0 = ((((struct o20_float *)(a4))->v));
    u0 = u0 + 300.0f * (math_sin_angle16((*(int *)((a4 + 0x30)))));
    (((struct o20_float *)(a4))->v) = u0;
    u0 = ((((struct o28_float *)(a4))->v));
    u0 = u0 + 300.0f * (math_cos_angle16((*(int *)((a4 + 0x30)))));
    (((struct o28_float *)(a4))->v) = u0;
    (((struct oEC_ushort *)(a4))->v) = 0x14;
    (((struct o38_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x30))))) * 10.0f);
    (((struct o40_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x30))))) * 10.0f);
    (((struct o44_float *)(a4))->v) = (-(((((struct o38_float *)(a4))->v)) / 40.0f));
    (((struct o4C_float *)(a4))->v) = (-(((((struct o40_float *)(a4))->v)) / 40.0f));
    (((struct o308_float *)(a4))->v) = (*(float *)(((((((struct oF2_short *)(a4))->v)) << 2) + 0xC1533E4)));
    (((struct o4_float *)((0x308 + a4)))->v) = 0.199999988f;
    (((struct o8_float *)((0x308 + a4)))->v) = (-(((((struct o308_float *)(a4))->v)) / 20.0f));
    (((struct oC_float *)((0x308 + a4)))->v) = (-(((((struct o4_float *)((0x308 + a4)))->v)) / 20.0f));
    return 0xC;
}
