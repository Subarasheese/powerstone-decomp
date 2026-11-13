/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03f2c8-0c03f434) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o304_int { char p[0x304]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(void);

int fx_spawn_03f2c8(int a4)
{
    int stk[1];
    register int t0;
    register int t19;
    register int t4;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t14;
    register int t15;

    t0 = obj_create(0x5, 0x1, 0xA, 0x0);
    t19 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03F738;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC149A24); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC149A30); }
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct oF2_ushort *)(t0))->v) = (*(short *)0xC149A3C);
        t4 = *(int *)((t0 + 0x2C));
        (((struct oF0_ushort *)(t0))->v) = (*(short *)(((0xC149A3C + (signed char)((t4 << 1) + (t4 << 2))) + 0x2)));
        (((struct oEE_ushort *)(t0))->v) = 0x1;
        *(unsigned int *)(((int)stk + 0)) = (0x2E0 + t0);
        t7 = 0x0;
        for (;;) {
            t8 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = (t8 + 0x4);
            t9 = *(int *)((((t8 + 0x4) - 4) + 0x0));
            *(unsigned char *)((t9 + 0x0)) = 0x0;
            t10 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a(t9, ((signed char)((((t10 << 1) + t10) << 2) << 1) + 0xC6002D0), 0x22);
            t7 = (t7 + 0x1);
            *(unsigned short *)((t9 + 0x2)) = 0x1F;
            (((struct oC_float *)(t9))->v) = 1.0f;
            if ((int)t7 >= (int)0x9) {
                break;
            }
        }
        t14 = (((struct o304_int *)(t0))->v);
        *(unsigned char *)((t14 + 0x0)) = 0x1;
        t15 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t14, ((signed char)((((t15 << 1) + t15) << 2) << 1) + 0xC6002D0), 0x26);
        *(unsigned short *)((t14 + 0x2)) = 0x21F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t14 + 0x44)) = *(struct mv3 *)(0xC149A24); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t14 + 0x1C)) = *(struct mv3 *)(0xC149A18); }
        (((struct o28_float *)(t14))->v) = 0.399999976f;
        *(unsigned int *)((t14 + 0x34)) = 0x0;
        (((struct oC_float *)(t14))->v) = 0.0f;
        t19 = 0xC;
    }
    return t19;
}
