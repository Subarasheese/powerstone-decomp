/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03ef18-0c03f004) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(int, int, int, int);

int fx_spawn_03ef18(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t10;
    register int t3;
    register int t4;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x5, 0x1, 0x1, 0x0);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03F004;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC1499FC); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC149A08); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct oEE_ushort *)(t0))->v) = (unsigned char)(*(signed char *)(((int)stk + 0)));
        t3 = (((struct o2E0_int *)(t0))->v);
        *(unsigned char *)((t3 + 0x0)) = 0x0;
        t4 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t3, ((signed char)((((t4 << 1) + t4) << 2) << 1) + 0xC6002D0), 0x13);
        *(unsigned short *)((t3 + 0x2)) = 0x1F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x1C)) = *(struct mv3 *)(0xC1499F0); }
        (((struct o28_uchar *)(t3))->v) = (*(signed char *)(((unsigned char)(*(signed char *)(((int)stk + 0))) + 0xC1499E8)));
        (((struct oC_float *)(t3))->v) = 100.0f;
        t10 = 0xC;
    }
    return t10;
}
