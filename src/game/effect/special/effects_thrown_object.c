/* thrown/spawned object constructor (0c0c82b8-0c0c8460) */

struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
extern int _quick_odd_mvn();
int memset(int, int, int);

int fx_thrown_object_create(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t23;
    register int t3;
    register int t4;
    register int t5;
    register int t9;
    register int t10;
    register int t11;
    register int t15;
    register int t16;
    register int t17;
    register int t18;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x1, 0x1, 0x6, 0x0);
    t23 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C87B8;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct o2D9_uchar *)(t0))->v) = 0x2;
        (((struct oEE_ushort *)(t0))->v) = (unsigned char)(*(signed char *)(((int)stk + 0)));
        (((struct o58_float *)(t0))->v) = 1.5f;
        (((struct o54_float *)(t0))->v) = 1.5f;
        (((struct o50_float *)(t0))->v) = 1.5f;
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        *(unsigned int *)(((int)stk + 4)) = (0x2E0 + t0);
        for (;;) {
            t3 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t3 + 0x4);
            t4 = *(signed char *)((a4 + 0x3));
            t5 = *(int *)((((t3 + 0x4) - 4) + 0x0));
            FUN_0c06233a(t5, ((signed char)((((t4 << 1) + t4) << 2) << 1) + 0xC6002D0), 0x1C);
            *(unsigned char *)((t5 + 0x0)) = 0x0;
            *(unsigned short *)((t5 + 0x2)) = 0x29;
            t9 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = (t9 + 0x1);
            if ((int)(t9 + 0x1) >= (int)0x3) {
                break;
            }
        }
        t10 = (((struct o2EC_int *)(t0))->v);
        t11 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t10, ((signed char)((((t11 << 1) + t11) << 2) << 1) + 0xC6002D0), 0xC);
        *(unsigned char *)((t10 + 0x0)) = 0x0;
        *(unsigned short *)((t10 + 0x2)) = 0x23F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t10 + 0x44)) = *(struct mv3 *)(0xC153304); }
        *(unsigned int *)(((int)stk + 0)) = ((0x2E0 + t0) + 0x10);
        t15 = 0x4;
        for (;;) {
            t16 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = (t16 + 0x4);
            t17 = *(signed char *)((a4 + 0x3));
            t18 = *(int *)((((t16 + 0x4) - 4) + 0x0));
            FUN_0c06233a(t18, ((signed char)((((t17 << 1) + t17) << 2) << 1) + 0xC6002D0), 0x20);
            *(unsigned char *)((t18 + 0x0)) = 0x1;
            *(unsigned short *)((t18 + 0x2)) = 0x239;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t18 + 0x1C)) = *(struct mv3 *)(0xC1532F8); }
            memset((t18 + 0x34), 0x0, 0xC);
            *(unsigned char *)(((t18 + 0x34) + 0xA)) = 0x1;
            *(unsigned char *)(((t18 + 0x34) + 0x8)) = 0x0;
            t15 = (t15 + 0x1);
            (((struct o34_float *)(t18))->v) = 0.0f;
            (((struct o4_float *)((t18 + 0x34)))->v) = 0.799999952f;
            if ((int)t15 >= (int)0x6) {
                break;
            }
        }
        t23 = 0x4;
    }
    return t23;
}
