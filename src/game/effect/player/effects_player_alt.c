/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0b7998-0c0b8460) */

int fx_spawn_08(int a4, int a5, int a6, int a7);
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0b7998(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int _quick_odd_mvn(void);
int thunk_FUN_0c062242(int);
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
int FUN_0c048ea4(int, int, int, int);
int FUN_0c0b8084(int);

int FUN_0c0b7fa0(int a4);
int FUN_0c0b83dc(int a4, int a5, int a6, int a7);


int FUN_0c0b7fa0(int a4)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register float u0;

    t3 = *(signed char *)((a4 + 0x3));
    thunk_FUN_0c062242(((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
    t3 = (0x2E0 + a4);
    t4 = 0x0;
    t5 = 0x0;
    t6 = (0x2E0 + a4);
    t7 = (0x2E0 + a4);
    t8 = 0x0;
    for (;;) {
        t9 = *(int *)((t6 + 0x0));
        u0 = (((struct o94_float *)(t9))->v);
        (((struct o94_float *)(t9))->v) = (u0 - 1.0f);
        if (0.0f > (u0 - 1.0f)) {
            t3 = (*(int *)((t7 + 0x0)));
            FUN_0c0b7998(t3);
        } else {
            t9 = t0;
            t10 = t4;
        }
        t0 = t9;
        t3 = 0x2E0;
        t4 = t10;
        t0 = 0x28;
        t3 = (t3 + a4);
        t3 = (t3 + t8);
        t3 = (*(int *)((t3 + 0x0)));
        t0 = (t0 + t3);
        u0 = *(float *)((t0 + 0x0));
        t0 = 0x30;
        (((struct o4_float *)(t3))->v) = (((((struct o4_float *)(t3))->v)) + u0);
        t3 = 0x2E0;
        t3 = (t3 + a4);
        t3 = (t3 + t8);
        t3 = (*(int *)((t3 + 0x0)));
        t0 = (t0 + t3);
        u0 = *(float *)((t0 + 0x0));
        t0 = 0x2C;
        (((struct oC_float *)(t3))->v) = (((((struct oC_float *)(t3))->v)) + u0);
        t3 = 0x2E0;
        t3 = (t3 + a4);
        t3 = (t3 + t8);
        t3 = (*(int *)((t3 + 0x0)));
        t0 = (t0 + t3);
        t5 = (t5 + 0x1);
        (((struct o8_float *)(t3))->v) = (((((struct o8_float *)(t3))->v)) + (*(float *)((t0 + 0x0))));
        t7 = (t7 + 0x4);
        t8 = (t8 + 0x4);
        t6 = (t6 + 0x4);
        if ((int)t5 >= (int)0xA) {
            break;
        }
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if (((short)(t0 - 1) != 0) && (t1 = *(int *)((a4 + 0x1C)), t2 = *(signed char *)((0x71BA + t1)), t2 == 11)) {
        t0 = t2;
    } else {
        *(unsigned char *)((a4 + 0x8)) = 0x5;
        t0 = 0x5;
    }
    return t0;
}

int FUN_0c0b83dc(int a4, int a5, int a6, int a7)
{
    register int t1;

    FUN_0c048ea4((a4 + 0x20), a5, a6, a7);
    t1 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
    return (t1 + 0x1);
}

int fx_update_08(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if ((t0 != 1) && (t0 != 2)) {
            if (t0 != 4) {
                if (t0 != 5) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC0B83FC))(a4, a5, a6, a7);
            }
            return FUN_0c0b83dc(a4, a5, a6, a7);
        }
        return FUN_0c0b8084(a4);
    }
    return FUN_0c0b7fa0(a4);
}
