/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03fab4-0c03fd08) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int FUN_0c0e6fe8();
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int);
int math_mat_transform_point(int, int);

int fx_spawn_03fab4(int a4)
{
    register int t0;
    register int t14;
    register int t5;
    register int t6;
    register int t7;

    t0 = obj_create(0x5, 0x1, 0x3);
    t14 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x29;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03FB92;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct o40_float *)(t0))->v) = (*(float *)0xC03FC10);
        t5 = 0x0;
        t6 = 0x0;
        for (;;) {
            t7 = *(int *)((((t5 << 2) + (0x2E0 + t0)) + 0x0));
            *(unsigned char *)((t7 + 0x0)) = 0x1;
            FUN_0c06233a(t7, 0xC4CFA68, (t5 + 0x59));
            *(unsigned short *)((t7 + 0x2)) = 0x1F;
            (((struct o4_float *)(t7))->v) = ((math_cos_angle16(t6)) * ((((struct o40_float *)(t0))->v)));
            t5 = (t5 + 0x1);
            (((struct o8_float *)(t7))->v) = ((math_sin_angle16(t6)) * ((((struct o40_float *)(t0))->v)));
            (((struct oC_float *)(t7))->v) = 0.0f;
            *(unsigned int *)((t7 + 0x3C)) = t6;
            t6 = (unsigned short)(t6 + 0x5555);
            if ((int)t5 >= (int)0x3) {
                break;
            }
        }
        t14 = 0xC;
    }
    return t14;
}

int fx_tick_03fab4(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o20_float *)(a4))->v) = 0.0f;
    (((struct o24_float *)(a4))->v) = 30.0f;
    (((struct o28_float *)(a4))->v) = 30.0f;
    t0 = *(int *)((a4 + 0x1C));
    math_mat_transform_point((a4 + 0x20), ((t0 + 0x300) + (short)((short)(*(signed char *)((t0 + 0x71F3))) * (short)0xDC0)));
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return obj_destroy(a4);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x1E;
    }
    *(unsigned int *)((a4 + 0x34)) = (unsigned short)((*(int *)((a4 + 0x34))) + 0xE38);
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 6.66666651f);
    t0 = (0x2E0 + a4);
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        *(unsigned int *)((t2 + 0x18)) = (unsigned short)(-(*(int *)((a4 + 0x34))));
        (((struct o4_float *)(t2))->v) = ((math_cos_angle16((*(int *)((t2 + 0x3C))))) * ((((struct o40_float *)(a4))->v)));
        t1 = (t1 + 0x1);
        (((struct o8_float *)(t2))->v) = ((math_sin_angle16((*(int *)((t2 + 0x3C))))) * ((((struct o40_float *)(a4))->v)));
        (((struct o1C_float *)(t2))->v) = (((((struct o1C_float *)(t2))->v)) - 0.0166666657f);
        (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) - 0.0166666657f);
        (((struct o24_float *)(t2))->v) = (((((struct o24_float *)(t2))->v)) - 0.0166666657f);
        if ((int)t1 >= (int)0x3) {
            break;
        }
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) == 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
