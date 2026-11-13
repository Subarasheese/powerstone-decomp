/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03f2c8-0c03f434) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o304_int { char p[0x304]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);

int fx_spawn_03f2c8(int a4)
{
    int stk[1];
    register int t0;
    register int t23;
    register int t6;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t16;
    register int t17;

    t0 = obj_create(0x5, 0x1, 0xA);
    t23 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03F738;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct oF2_ushort *)(t0))->v) = (*(short *)0xC149A3C);
        t6 = *(int *)((t0 + 0x2C));
        (((struct oF0_ushort *)(t0))->v) = (*(short *)(((0xC149A3C + (signed char)((t6 << 1) + (t6 << 2))) + 0x2)));
        (((struct oEE_ushort *)(t0))->v) = 0x1;
        *(unsigned int *)(((int)stk + 0)) = (0x2E0 + t0);
        t9 = 0x0;
        for (;;) {
            t10 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = (t10 + 0x4);
            t11 = *(int *)((((t10 + 0x4) - 4) + 0x0));
            *(unsigned char *)((t11 + 0x0)) = 0x0;
            t12 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a(t11, ((signed char)((((t12 << 1) + t12) << 2) << 1) + 0xC6002D0), 0x22);
            t9 = (t9 + 0x1);
            *(unsigned short *)((t11 + 0x2)) = 0x1F;
            (((struct oC_float *)(t11))->v) = 1.0f;
            if ((int)t9 >= (int)0x9) {
                break;
            }
        }
        t16 = (((struct o304_int *)(t0))->v);
        *(unsigned char *)((t16 + 0x0)) = 0x1;
        t17 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t16, ((signed char)((((t17 << 1) + t17) << 2) << 1) + 0xC6002D0), 0x26);
        *(unsigned short *)((t16 + 0x2)) = 0x21F;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        (((struct o28_float *)(t16))->v) = 0.399999976f;
        *(unsigned int *)((t16 + 0x34)) = 0x0;
        (((struct oC_float *)(t16))->v) = 0.0f;
        t23 = 0xC;
    }
    return t23;
}
