/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03ef18-0c03f004) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(int, int, int, int);

int fx_spawn_03ef18(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t17;
    register int t2;
    register int t4;
    register int t6;
    register int t9;
    register int t10;
    register int t14;
    register int t3;
    register int t5;
    register int t7;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x5, 0x1, 0x1);
    t17 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03F004;
        t2 = ((int (*)(int, int))(FUN_0c0e6fe8))(t0, 0x1);
        t4 = ((int (*)(int))(FUN_0c0e6fe8))(t3);
        t6 = ((int (*)(int))(FUN_0c0e6fe8))(t5);
        (((struct o118_uint *)(t7))->v) = 0x0;
        *(unsigned int *)((t7 + 0x1C)) = a4;
        (((struct oEE_ushort *)(t7))->v) = (unsigned char)(*(signed char *)(((int)stk + 0)));
        t9 = (((struct o2E0_int *)(t7))->v);
        *(unsigned char *)((t9 + 0x0)) = 0x0;
        t10 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t9, ((signed char)((((t10 << 1) + t10) << 2) << 1) + 0xC6002D0), 0x13);
        *(unsigned short *)((t9 + 0x2)) = 0x1F;
        t14 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct o28_uchar *)(t9))->v) = (*(signed char *)(((unsigned char)(*(signed char *)(((int)stk + 0))) + 0xC1499E8)));
        (((struct oC_float *)(t9))->v) = 100.0f;
        t17 = 0xC;
    }
    return t17;
}
