/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03bcac-0c03c1ec) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(int);
int FUN_0c06231c(int, int, int);
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_uchar { char p[0x308]; unsigned char v; };

int fx_spawn_03bcac(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t18;
    register float u3;
    register int t4;
    register int t5;
    register int t8;
    register int t13;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x5, 0x1, 0xA, 0x0);
    t18 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03BE40;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        u3 = *(float *)0xC03BE30;
        t4 = 0x0;
        t5 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t5) + 0x0))) + 0x0)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t5) + 0x0))) + 0x2)) = 0x23F;
            t8 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t5) + 0x0))), ((signed char)((((t8 << 1) + t8) << 2) << 1) + 0xC6002D0), 0xA);
            t4 = (t4 + 0x1);
            t13 = *(int *)((((0x2E0 + t0) + t5) + 0x0));
            (((struct o24_float *)(t13))->v) = u3;
            (((struct o20_float *)(t13))->v) = u3;
            (((struct o1C_float *)(t13))->v) = u3;
            (((struct o44_float *)((*(int *)((((0x2E0 + t0) + t5) + 0x0)))))->v) = 1.0f;
            (((struct o48_float *)((*(int *)((((0x2E0 + t0) + t5) + 0x0)))))->v) = 1.0f;
            (((struct o4C_float *)((*(int *)((((0x2E0 + t0) + t5) + 0x0)))))->v) = 1.0f;
            t5 = (t5 + 0x4);
            if ((int)t4 >= (int)0xA) {
                break;
            }
        }
        t18 = 0x4C;
    }
    return t18;
}

int FUN_0c03bdb2(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)(((0x308 + a4) + 0x1));
    *(unsigned char *)(((0x308 + a4) + 0x1)) = (t0 + 0x1);
    if ((int)(signed char)(t0 + 0x1) >= (int)0x10) {
        *(unsigned char *)(((0x308 + a4) + 0x1)) = 0x0;
    }
    t0 = 0x0;
    t1 = (0x2E0 + a4);
    for (;;) {
        t3 = *(signed char *)((a4 + 0x3));
        t4 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        t2 = FUN_0c06231c(t4, ((signed char)((((t3 << 1) + t3) << 2) << 1) + 0xC6002D0), ((*(signed char *)(((0x308 + a4) + 0x1))) + 0xA));
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    return t2;
}

void FUN_0c03c0fa(int a4)
{
    register int t0;

    t0 = *(signed char *)(((0x308 + a4) + 0x0));
    (((struct o308_uchar *)(a4))->v) = (t0 - 1);
    if ((int)(signed char)(t0 - 1) < 0) {
        (((struct o308_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)(((0x308 + a4) + 0x1));
        *(unsigned char *)(((0x308 + a4) + 0x1)) = (t0 + 0x1);
        if ((int)(signed char)(t0 + 0x1) > (int)0x7) {
            *(unsigned char *)(((0x308 + a4) + 0x1)) = 0x0;
        }
        t0 = *(signed char *)((a4 + 0x3));
        FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), ((*(signed char *)(((0x308 + a4) + 0x1))) + 0x1));
    return;
    }
}
