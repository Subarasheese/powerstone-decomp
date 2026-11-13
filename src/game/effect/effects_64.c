/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03c904-0c03cb28) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int thunk_math_mat_get_translate(int, int);
struct o28_float { char p[0x28]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int _quick_odd_mvn(int);

int fx_spawn_03c904(int a4, int a5);

int fx_spawn_03c904(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t20;
    register int t4;
    register int t11;
    register float u16;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x1, 0x0);
    t20 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03CA16;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        t4 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
        *(unsigned int *)(((int)stk + 4)) = ((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0), t0 + 0x20);
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 50.0f);
        *(unsigned int *)((t0 + 0x30)) = (((((*(signed char *)(((int)stk + 0))) << 8) << 2) << 2) << 2);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
        t11 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t11 << 1) + t11) << 2) << 1) + 0xC6002D0), 0x9);
        u16 = *(float *)0xC03CA68;
        (((struct o1C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = u16;
        (((struct o20_float *)(((((struct o2E0_int *)(t0))->v))))->v) = u16;
        (((struct o24_float *)(((((struct o2E0_int *)(t0))->v))))->v) = u16;
        t20 = 0x24;
    }
    return t20;
}

int FUN_0c03c9f2(int a4)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = fx_spawn_03c904(a4, t0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t1;
}

int fx_tick_03c904(int a4)
{
    register int t0;
    register float u0;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return obj_destroy(a4);
    }
    *(unsigned char *)((a4 + 0x1)) = (*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x1)));
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4);
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) < 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x38E);
        t0 = *(int *)((a4 + 0x30));
        *(unsigned int *)((a4 + 0x30)) = (t0 & 0xFFFF);
        u0 = ((((struct o38_float *)(a4))->v));
        u0 = u0 + 50.0f * (math_sin_angle16((t0 & 0xFFFF)));
        (((struct o20_float *)(a4))->v) = u0;
        u0 = ((((struct o40_float *)(a4))->v));
        u0 = u0 + 50.0f * (math_cos_angle16((*(int *)((a4 + 0x30)))));
        (((struct o28_float *)(a4))->v) = u0;
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0xE38);
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) & 0xFFFF);
        return 0x2E0;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x3C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x38)) = *(struct mv3 *)((a4 + 0x20)); }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x38E);
    t0 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t0 & 0xFFFF);
    u0 = ((((struct o38_float *)(a4))->v));
    u0 = u0 + 50.0f * (math_sin_angle16((t0 & 0xFFFF)));
    (((struct o20_float *)(a4))->v) = u0;
    u0 = ((((struct o40_float *)(a4))->v));
    u0 = u0 + 50.0f * (math_cos_angle16((*(int *)((a4 + 0x30)))));
    (((struct o28_float *)(a4))->v) = u0;
    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0xE38);
    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) & 0xFFFF);
    return 0x2E0;
}
