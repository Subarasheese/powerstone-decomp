/* Straight-line functions with calls and guards (batch gen_ge): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0367e4(int, int);
int FUN_0c0555dc(void);
int FUN_0c059330(int);
float FUN_0c0df340(float);
int FUN_0c0df360(float);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c0b989e(int a4);

int FUN_0c0b989e(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t1 + 0x18)) = ((*(int *)((t1 + 0x18))) + 0xC16);
            if ((*(signed char *)((a4 + 0x2D8))) == 0) {
                t1 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) - ((((struct o38_float *)(a4))->v)));
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - ((((struct o40_float *)(a4))->v)));
                    (((struct o101_uchar *)(a4))->v) = 0x0;
                    (((struct o102_uchar *)(a4))->v) = 0x0;
                    (((struct oEC_ushort *)(a4))->v) = 0xA;
                    t1 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                    t2 = (t1 + 0x1);
                } else {
                    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - ((((struct o3C_float *)(a4))->v)));
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
                    t2 = 0x28;
                }
                t1 = t2;
            } else {
                (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) - ((((struct o38_float *)(a4))->v)));
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - ((((struct o40_float *)(a4))->v)));
                (((struct o101_uchar *)(a4))->v) = 0x0;
                (((struct o102_uchar *)(a4))->v) = 0x0;
                (((struct oEC_ushort *)(a4))->v) = 0xA;
                t2 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
                t1 = (t2 + 0x1);
            }
            return t1;
        }
        if (t0 == 2) {
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.399999976f);
            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.399999976f);
            (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) - 0.099999994f);
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            t2 = 0xEC;
            if ((short)(t1 - 1) == 0) {
                t1 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            return t2;
        }
        if (t0 == 3) {
            return FUN_0c059330(a4);
        }
        return t0;
    }
    t0 = *(int *)((a4 + 0x1C));
    t1 = *(int *)((t0 + 0x1C));
    u0 = (((struct o20_float *)(t0))->v);
    u1 = (((struct o20_float *)(t1))->v);
    u2 = (((struct o24_float *)(t1))->v);
    u3 = (((struct o24_float *)(t0))->v);
    u4 = (((struct o28_float *)(t1))->v);
    u5 = (((struct o28_float *)(t0))->v);
    u6 = (u1 - u0);
    if ((u1 - u0) == 0.0f) {
        u6 = 9.99999997e-07f;
    }
    u0 = (u2 - u3);
    if ((u2 - u3) == 0.0f) {
        u0 = 9.99999997e-07f;
    }
    u1 = (u4 - u5);
    if ((u4 - u5) == 0.0f) {
        u1 = 9.99999997e-07f;
    }
    u2 = (u1 * u1);
    u2 = u2 + u6 * u6;
    u1 = FUN_0c0df340(u2);
    t0 = FUN_0c0df360(((-u1) / u0));
    t1 = t0;
    if (0.0f > u0) {
        t1 = (t0 + 0x8000);
    }
    *(unsigned int *)((a4 + 0x2C)) = (-(unsigned short)(t1 + 0x4000));
    u0 = FUN_0c0dfa50(((-(-(unsigned short)(t1 + 0x4000))) + 0x14000));
    u1 = (u0 * (FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))));
    (((struct o38_float *)(a4))->v) = (u1 * 50.0f);
    (((struct o3C_float *)(a4))->v) = ((FUN_0c0df4d0(((-(*(int *)((a4 + 0x2C)))) + 0x14000))) * 50.0f);
    u0 = FUN_0c0dfa50(((-(*(int *)((a4 + 0x2C)))) + 0x14000));
    u1 = (u0 * (FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))));
    (((struct o40_float *)(a4))->v) = (u1 * 50.0f);
    FUN_0c0367e4(a4, 0x0);
    (((struct o2D9_uchar *)(a4))->v) = 0x2;
    (((struct oEC_ushort *)(a4))->v) = 0x3C;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) + 0xC16);
    if ((*(signed char *)((a4 + 0x2D8))) == 0) {
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) - ((((struct o38_float *)(a4))->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - ((((struct o40_float *)(a4))->v)));
            (((struct o101_uchar *)(a4))->v) = 0x0;
            (((struct o102_uchar *)(a4))->v) = 0x0;
            (((struct oEC_ushort *)(a4))->v) = 0xA;
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        } else {
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - ((((struct o3C_float *)(a4))->v)));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
            t1 = 0x28;
        }
        t0 = t1;
    } else {
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) - ((((struct o38_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - ((((struct o40_float *)(a4))->v)));
        (((struct o101_uchar *)(a4))->v) = 0x0;
        (((struct o102_uchar *)(a4))->v) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}
