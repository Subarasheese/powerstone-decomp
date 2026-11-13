/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03adf8-0c03af38) */

struct o0_float { float v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(int, int);
struct oEC_short { char p[0xEC]; short v; };
int obj_destroy(int, int, int, int);

int fx_spawn_03adf8(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t1 = obj_create(0x5, 0x1, 0x1);
    t2 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned char *)((t1 + 0x1)) = 0x1;
        *(unsigned char *)((t1 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned short *)((t1 + 0x6)) = 0xF;
        *(unsigned char *)((t1 + 0x5)) = 0x19;
        *(unsigned char *)((t1 + 0x8)) = 0x0;
        *(unsigned char *)((t1 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t1))->v) = 0x0;
        (((struct oEE_ushort *)(t1))->v) = 0x0;
        (((struct o20_float *)(t1))->v) = ((((struct o0_float *)0xC03AF10)->v));
        (((struct o24_float *)(t1))->v) = ((((struct o4_float *)0xC03AF10)->v));
        (((struct o28_float *)(t1))->v) = ((((struct o8_float *)0xC03AF10)->v));
        *(unsigned int *)((t1 + 0x2C)) = 0xC17;
        *(unsigned int *)((t1 + 0x30)) = 0xF99B;
        *(unsigned int *)((t1 + 0x34)) = 0x1555;
        FUN_0c0e6fe8(t1, 0x0);
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct o118_uint *)(t0))->v) = (0x580 + ((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0xDC0) + (0x300 + a4)));
        *(unsigned int *)((t0 + 0x10)) = 0xC03AEC0;
        t1 = (((struct o2E0_int *)(t0))->v);
        t0 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t1, ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x9);
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned short *)((t1 + 0x2)) = 0x1;
        t2 = 0x1;
    }
    return t2;
}

int fx_tick_03adf8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0x6C) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        t0 = *(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))));
        if (t0 != 33) {
            t1 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
            return (t1 + 0x1);
        }
        return t0;
    }
    return obj_destroy(a4, a5, a6, a7);
}
