/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c2e5c-0c0c3268) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record_char(int, int);
int FUN_0c0e6fe8(void);
int thunk_FUN_0c062242(int);
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int fx_spawn_03c5c0(int, int);
int FUN_0c0555c4(void);
int obj_destroy(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0e6e5c(void);

int fx_spawn_30(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = obj_create(0x1, 0x1, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C2F50;
        u0 = *(float *)0xC0C2FB4;
        (((struct o58_float *)(t0))->v) = u0;
        (((struct o54_float *)(t0))->v) = u0;
        (((struct o50_float *)(t0))->v) = u0;
        FUN_0c0e6fe8();
        t2 = *(signed char *)((a4 + 0x3));
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
        t2 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t2 << 1) + t2) << 2) << 1) + 0xC6002D0), 0x9);
        (((struct o1C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        (((struct o20_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        (((struct o24_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct o101_uchar *)(t0))->v) = 0x3;
        (((struct o102_uchar *)(t0))->v) = 0x3;
        obj_set_record_char(t0, 0x77);
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
        t1 = 0x107;
    }
    return t1;
}

int fx_update_30(int a4)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t5;
    register int t6;
    register int t10;
    register int t12;
    register int t14;
    register int t42;
    register int t59;
    register int t73;
    register int t75;
    register int t78;
    register int t85;
    register int t102;
    register int t116;
    register int t118;
    register int t121;
    int t2;
    register int t43;
    register int t44;
    register int t45;
    register int t46;
    int t47;
    register int t86;
    register int t87;
    register int t88;
    register int t89;
    int t90;

    t0 = *(int *)((a4 + 0x1C));
    t1 = FUN_0c0555c4();
    if ((t1 != 0) && (t2 = *(int *)((a4 + 0x1C)), t2 != 0)) {
        t5 = *(signed char *)((a4 + 0x8));
        if (t5 != 0) {
            if (t5 != 1) {
                if (t5 == 2) {
                    t6 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t6 - 1);
                    if ((short)(t6 - 1) == 0) {
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    }
                    t10 = (((struct o2E0_int *)(a4))->v);
                    (((struct o44_float *)(t10))->v) = (((((struct o44_float *)(t10))->v)) - 0.099999994f);
                    t12 = (((struct o2E0_int *)(a4))->v);
                    (((struct o48_float *)(t12))->v) = (((((struct o48_float *)(t12))->v)) - 0.099999994f);
                    t14 = (((struct o2E0_int *)(a4))->v);
                    (((struct o4C_float *)(t14))->v) = (((((struct o4C_float *)(t14))->v)) - 0.099999994f);
                    if (0.0f > ((((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                        (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                    }
                    if (0.0f > ((((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                        (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                    }
                    if (0.0f > ((((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                        (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                    }
                    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x200);
                    *(unsigned short *)(((int)stk + 0)) = ((((struct oEE_short *)(a4))->v));
                    (((struct o24_float *)(a4))->v) = ((math_sin_angle16((*(short *)(((int)stk + 0))))) * 20.0f);
                    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
                    *(unsigned int *)((a4 + 0x30)) = (((*(int *)((a4 + 0x30))) + 0x1111) & 0xFFFF);
                    return 0x28;
                }
                return obj_destroy(a4);
            }
            t42 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t42 - 1);
            if (((short)(t42 - 1) != 0) && ((t43 = *(signed char *)((a4 + 0x108)), t43 == 0) && ((t44 = *(signed char *)((a4 + 0x2D8)), t44 == 0) && ((t45 = *(signed char *)((t0 + 0x71BA)), t45 == 11) && ((t46 = *(signed char *)((t0 + 0x9)), t46 != 2) && (t47 = *(signed char *)((t0 + 0xA)), (int)t47 < (int)0x2)))))) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0xA;
                (((struct o105_uchar *)(a4))->v) = 0x1;
                (((struct o106_uchar *)(a4))->v) = 0x1;
                (((struct o107_uchar *)(a4))->v) = 0x1;
                *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x21F;
                (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
                (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
                (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            }
            t59 = *(int *)((a4 + 0x30));
            *(unsigned int *)((a4 + 0x30)) = ((t59 + 0x222) & 0xFFFF);
            (((struct o38_float *)(a4))->v) = ((math_sin_angle16(((t59 + 0x222) & 0xFFFF))) * 10.0f);
            (((struct o40_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x30))))) * 10.0f);
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x200);
            *(unsigned short *)(((int)stk + 0)) = ((((struct oEE_short *)(a4))->v));
            (((struct o24_float *)(a4))->v) = ((math_sin_angle16((*(short *)(((int)stk + 0))))) * 20.0f);
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
            t73 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t73 + 0x14)) = ((*(int *)((t73 + 0x14))) + 0x1111);
            t75 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t75 + 0x14)) = ((*(int *)((t75 + 0x14))) & 0xFFFF);
            *(volatile short *)((a4 + 0xEC));
            t78 = FUN_0c0e6e5c();
            if (t78 != 0) {
                return t78;
            }
            return fx_spawn_03c5c0(a4, 0x0);
        }
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x78;
        (((struct o38_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x30))))) * 8.0f);
        (((struct o40_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x30))))) * 8.0f);
        (((struct o3C_float *)(a4))->v) = ((((struct o24_float *)(a4))->v));
        t85 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t85 - 1);
        if (((short)(t85 - 1) != 0) && ((t86 = *(signed char *)((a4 + 0x108)), t86 == 0) && ((t87 = *(signed char *)((a4 + 0x2D8)), t87 == 0) && ((t88 = *(signed char *)((t0 + 0x71BA)), t88 == 11) && ((t89 = *(signed char *)((t0 + 0x9)), t89 != 2) && (t90 = *(signed char *)((t0 + 0xA)), (int)t90 < (int)0x2)))))) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0xA;
            (((struct o105_uchar *)(a4))->v) = 0x1;
            (((struct o106_uchar *)(a4))->v) = 0x1;
            (((struct o107_uchar *)(a4))->v) = 0x1;
            *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x21F;
            (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        }
        t102 = *(int *)((a4 + 0x30));
        *(unsigned int *)((a4 + 0x30)) = ((t102 + 0x222) & 0xFFFF);
        (((struct o38_float *)(a4))->v) = ((math_sin_angle16(((t102 + 0x222) & 0xFFFF))) * 10.0f);
        (((struct o40_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x30))))) * 10.0f);
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x200);
        *(unsigned short *)(((int)stk + 0)) = ((((struct oEE_short *)(a4))->v));
        (((struct o24_float *)(a4))->v) = ((math_sin_angle16((*(short *)(((int)stk + 0))))) * 20.0f);
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
        t116 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t116 + 0x14)) = ((*(int *)((t116 + 0x14))) + 0x1111);
        t118 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t118 + 0x14)) = ((*(int *)((t118 + 0x14))) & 0xFFFF);
        *(volatile short *)((a4 + 0xEC));
        t121 = FUN_0c0e6e5c();
        if (t121 != 0) {
            return t121;
        }
        return fx_spawn_03c5c0(a4, 0x0);
    }
    return obj_destroy(a4);
}
