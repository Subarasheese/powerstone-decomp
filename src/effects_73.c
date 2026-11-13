/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03de24-0c03dfd0) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
extern int FUN_0c0e6fe8();
int thunk_FUN_0c062242(int);
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);

int fx_spawn_03de24(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;

    t4 = obj_create(0x5, 0x1, 0x1);
    if (t4 != 0) {
        *(unsigned char *)((t4 + 0x0)) = 0x1;
        *(unsigned char *)((t4 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t4 + 0x1)) = 0x1;
        *(unsigned short *)((t4 + 0x6)) = 0xF;
        *(unsigned char *)((t4 + 0x5)) = 0x19;
        *(unsigned int *)((t4 + 0x10)) = 0xC03DF0A;
        t5 = ((int (*)(int, int))(FUN_0c0e6fe8))(t4, 0x1);
        t5 = ((int (*)(int))(FUN_0c0e6fe8))(t0);
        t0 = ((int (*)(int))(FUN_0c0e6fe8))(t1);
        (((struct o118_uint *)(t2))->v) = 0x0;
        *(unsigned int *)((t2 + 0x1C)) = a4;
        t0 = (((struct o2E0_int *)(t2))->v);
        *(unsigned char *)((t0 + 0x0)) = t3;
        t1 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t0, ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), 0x2);
        *(unsigned short *)((t0 + 0x2)) = 0x23F;
        u0 = *(float *)0xC03DF84;
        (((struct o1C_float *)(t0))->v) = u0;
        (((struct o20_float *)(t0))->v) = u0;
        t1 = ((int (*)(float))(FUN_0c0e6fe8))(u0);
        t1 = *(signed char *)((a4 + 0x3));
        return thunk_FUN_0c062242((((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0xA50));
    }
    return t4;
}

int fx_tick_03de24(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o8_float *)(t0))->v) = (((((struct o8_float *)(t0))->v)) + 4.0f);
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    return t1;
                }
                return obj_destroy(a4, t0, a6, a7);
            }
            (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.125f);
            (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.125f);
            u0 = (((struct o4C_float *)(t0))->v);
            (((struct o4C_float *)(t0))->v) = (u0 - 0.125f);
            t0 = 0x4C;
            if (!((u0 - 0.125f) > 0.0f)) {
                t1 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                t0 = (t1 + 0x1);
            }
            return t0;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x4;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) != 0) {
    } else {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
