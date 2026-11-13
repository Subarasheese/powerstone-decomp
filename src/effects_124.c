/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c04a13c-0c04a294) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c0e6fe8(void);
struct oEC_short { char p[0xEC]; short v; };
int obj_destroy(int, int, int, int);
int FUN_0c06233a(int, int, int);

int fx_spawn_04a13c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t6;
    register int t7;

    t5 = obj_create(0x5, 0x1, 0x1);
    t6 = t5;
    if (t5 != 0) {
        *(unsigned char *)((t5 + 0x0)) = 0x1;
        *(unsigned char *)((t5 + 0x1)) = 0x1;
        *(unsigned short *)((t5 + 0x6)) = 0x20F;
        *(unsigned char *)((t5 + 0x5)) = 0x19;
        *(unsigned char *)((t5 + 0x8)) = 0x0;
        *(unsigned char *)((t5 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t5))->v) = 0x0;
        (((struct oEE_ushort *)(t5))->v) = 0x0;
        t7 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(t5, 0x1, 0x84);
        t5 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(t0, 0x0, t1);
        t0 = ((int (*)(int))(FUN_0c0e6fe8))(t2);
        (((struct o60_float *)(t3))->v) = 1.0f;
        (((struct o64_float *)(t3))->v) = 1.0f;
        (((struct o68_float *)(t3))->v) = 1.0f;
        (((struct o118_uint *)(t3))->v) = (0x840 + ((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0xDC0) + (a4 + 0x300)));
        *(unsigned int *)((t3 + 0x10)) = 0xC04A1EA;
        t0 = (((struct o2E0_int *)(t3))->v);
        *(unsigned char *)((t0 + 0x0)) = t6;
        *(unsigned short *)((t0 + 0x2)) = t6;
    }
    return t6;
}

int fx_tick_04a13c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664988, (*(signed char *)((((((struct oEC_short *)(a4))->v)) + 0xC321854))));
        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x6) {
            (((struct o60_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) - 0.199999988f);
            (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) - 0.199999988f);
            (((struct o68_float *)(a4))->v) = (((((struct o68_float *)(a4))->v)) - 0.199999988f);
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        t1 = 0xEC;
        if ((int)(short)(t0 + 0x1) >= (int)0xA) {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    return obj_destroy(a4, a5, a6, a7);
}
