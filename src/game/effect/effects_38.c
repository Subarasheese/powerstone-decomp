/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c038a0c-0c038b98) */

struct o0_float { float v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);

int fx_spawn_038a0c(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t20;
    register int t5;
    register float u14;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x1, 0x0);
    t20 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned int *)((t0 + 0x10)) = 0xC038AFE;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        (((struct o118_uint *)(t0))->v) = (((short)((short)(*(int *)((((unsigned char)(*(signed char *)(((int)stk + 0))) << 2) + 0xC3213A8))) * (short)0xB0) + (0x300 + a4)) + 0xDC0);
        (((struct oF2_ushort *)(t0))->v) = (unsigned char)(*(signed char *)(((int)stk + 0)));
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o28_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        (((struct o50_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o58_float *)(t0))->v) = 1.0f;
        t5 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t5 << 1) + t5) << 2) << 1) + 0xC6002D0), 0x7);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
        (((struct o1C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = ((((struct o0_float *)0xC038B4C)->v));
        u14 = (((struct o4_float *)0xC038B4C)->v);
        (((struct o20_float *)(((((struct o2E0_int *)(t0))->v))))->v) = u14;
        (((struct o24_float *)(((((struct o2E0_int *)(t0))->v))))->v) = u14;
        *(unsigned int *)((((((struct o2E0_int *)(t0))->v)) + 0x10)) = 0x0;
        *(unsigned int *)((((((struct o2E0_int *)(t0))->v)) + 0x14)) = 0x0;
        *(unsigned int *)((((((struct o2E0_int *)(t0))->v)) + 0x18)) = 0x0;
        t20 = 0x2E0;
    }
    return t20;
}

int fx_tick_038a0c(int a4)
{
    int t0;
    int t1;
    int t2;

    t2 = FUN_0c0555dc();
    if (t2 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
    }
    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 != 1) {
            if ((t2 != 2) && (t2 != 3)) {
                return t2;
            }
            return obj_destroy(a4);
        }
        t2 = *(int *)((a4 + 0x1C));
        if (((int)(*(signed char *)((t2 + 0xB))) <= (int)0x3) && (t0 = *(signed char *)((t2 + 0x71BA)), t0 == 11)) {
            t2 = t0;
        } else {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        return t2;
    }
    (((struct oEC_ushort *)(a4))->v) = 0x3;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    t0 = *(int *)((a4 + 0x1C));
    if (((int)(*(signed char *)((t0 + 0xB))) <= (int)0x3) && (t1 = *(signed char *)((t0 + 0x71BA)), t1 == 11)) {
        t0 = t1;
    } else {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}
