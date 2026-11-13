/* thrown/spawned object constructor (0c0c82b8-0c0c8460) */

struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
extern int FUN_0c0e6fe8();
int memset(int, int, int);

int fx_thrown_object_create(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t27;
    register int t5;
    register int t6;
    register int t7;
    register int t11;
    register int t12;
    register int t13;
    register int t18;
    register int t19;
    register int t20;
    register int t21;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x1, 0x1, 0x6);
    t27 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C87B8;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct o2D9_uchar *)(t0))->v) = 0x2;
        (((struct oEE_ushort *)(t0))->v) = (unsigned char)(*(signed char *)(((int)stk + 0)));
        (((struct o58_float *)(t0))->v) = 1.5f;
        (((struct o54_float *)(t0))->v) = 1.5f;
        (((struct o50_float *)(t0))->v) = 1.5f;
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        *(unsigned int *)(((int)stk + 4)) = (0x2E0 + t0);
        for (;;) {
            t5 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t5 + 0x4);
            t6 = *(signed char *)((a4 + 0x3));
            t7 = *(int *)((((t5 + 0x4) - 4) + 0x0));
            FUN_0c06233a(t7, ((signed char)((((t6 << 1) + t6) << 2) << 1) + 0xC6002D0), 0x1C);
            *(unsigned char *)((t7 + 0x0)) = 0x0;
            *(unsigned short *)((t7 + 0x2)) = 0x29;
            t11 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = (t11 + 0x1);
            if ((int)(t11 + 0x1) >= (int)0x3) {
                break;
            }
        }
        t12 = (((struct o2EC_int *)(t0))->v);
        t13 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t12, ((signed char)((((t13 << 1) + t13) << 2) << 1) + 0xC6002D0), 0xC);
        *(unsigned char *)((t12 + 0x0)) = 0x0;
        *(unsigned short *)((t12 + 0x2)) = 0x23F;
        FUN_0c0e6fe8();
        *(unsigned int *)(((int)stk + 0)) = ((0x2E0 + t0) + 0x10);
        t18 = 0x4;
        for (;;) {
            t19 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = (t19 + 0x4);
            t20 = *(signed char *)((a4 + 0x3));
            t21 = *(int *)((((t19 + 0x4) - 4) + 0x0));
            FUN_0c06233a(t21, ((signed char)((((t20 << 1) + t20) << 2) << 1) + 0xC6002D0), 0x20);
            *(unsigned char *)((t21 + 0x0)) = 0x1;
            *(unsigned short *)((t21 + 0x2)) = 0x239;
            FUN_0c0e6fe8();
            memset((t21 + 0x34), 0x0, 0xC);
            *(unsigned char *)(((t21 + 0x34) + 0xA)) = 0x1;
            *(unsigned char *)(((t21 + 0x34) + 0x8)) = 0x0;
            t18 = (t18 + 0x1);
            (((struct o34_float *)(t21))->v) = 0.0f;
            (((struct o4_float *)((t21 + 0x34)))->v) = 0.799999952f;
            if ((int)t18 >= (int)0x6) {
                break;
            }
        }
        t27 = 0x4;
    }
    return t27;
}
