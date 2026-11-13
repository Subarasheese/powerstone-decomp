/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c04b054-0c04b1f0) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o5C_float { char p[0x5C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(int);
struct oEC_short { char p[0xEC]; short v; };
int FUN_0c0e6e5c(int);

int fx_spawn_04b054(int a4)
{
    int stk[1];
    register int t0;
    register int t11;
    register int t8;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = obj_create(0x5, 0x1, 0x1);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        *(unsigned char *)((t0 + 0x4)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0x41F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC04B114;
        *(unsigned int *)((t0 + 0x1C)) = ((unsigned short)((unsigned short)(*(signed char *)(((int)stk + 0))) * (unsigned short)0x72D0) + 0xC7E40C4);
        (((struct o5C_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x2C)) = 0x4000;
        FUN_0c0e6fe8(0x0);
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC4CFA68, 0x31);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t8 = *(signed char *)((t0 + 0x3));
        (((struct o118_uint *)(t0))->v) = ((short)((short)(*(signed char *)((((unsigned short)((unsigned short)t8 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0) + (0x300 + ((unsigned short)((unsigned short)t8 * (unsigned short)0x72D0) + 0xC7E40C4)));
        (((struct o24_float *)(t0))->v) = (*(float *)0xC04B170);
        t11 = 0x24;
    }
    return t11;
}

int fx_tick_04b054(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(0xC04B1CC))(a4, 0xF, a6, a7);
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0xF) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) - 0.0714285672f);
    } else {
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0xF) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x0;
        }
    }
    *(volatile short *)((a4 + 0xEC));
    FUN_0c0e6e5c(a4);
    return ((int (*)(void))(0xC04B1A8))();
}
