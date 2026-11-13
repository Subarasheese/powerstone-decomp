/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03921c-0c039424) */

struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);
int FUN_0c0e6fe8(void);
int thunk_FUN_0c062242(int);

int fx_tick_039090(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register float u0;
    register float u1;

    if ((*(signed char *)((a4 + 0x8))) != 0) {
        return obj_destroy(a4, a5, a6, a7);
    }
    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 11) {
        t6 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t6 + 0x1);
        t7 = (t6 + 0x1);
    } else {
        t6 = *(signed char *)((a4 + 0x9));
        if (t6 != 0) {
            t8 = t6;
            if (t6 != 1) {
            } else {
                t9 = 0xC0392F4;
                t10 = 0x0;
                t11 = (0x2E0 + a4);
                t12 = (0x2E0 + a4);
                t13 = (0x2E0 + a4);
                t14 = (0x2E0 + a4);
                for (;;) {
                    if ((int)t10 >= (int)0xA) {
                        break;
                    }
                    t15 = 0x2E0;
                    t14 = t10;
                    t14 = (t14 << 2);
                    t15 = (t15 + a4);
                    t15 = (t15 + t14);
                    t16 = (*(int *)((t15 + 0x0)));
                    t9 = 0x44;
                    u0 = (*(float *)((t16 + t9)));
                    u0 = (u0 - 0.049999997f);
                    *(float *)((t16 + t9)) = u0;
                    t9 = 0x48;
                    t16 = 0x2E0;
                    t16 = (t16 + a4);
                    t16 = (t16 + t14);
                    t15 = (*(int *)((t16 + 0x0)));
                    t16 = 0x2E0;
                    u0 = (*(float *)((t15 + t9)));
                    t16 = (t16 + a4);
                    u0 = (u0 - 0.049999997f);
                    t16 = (t16 + t14);
                    *(float *)((t15 + t9)) = u0;
                    t9 = 0x4C;
                    t15 = (*(int *)((t16 + 0x0)));
                    t16 = 0x2E0;
                    u0 = (*(float *)((t15 + t9)));
                    t16 = (t16 + a4);
                    u0 = (u0 - 0.049999997f);
                    t16 = (t16 + t14);
                    *(float *)((t15 + t9)) = u0;
                    t9 = 0x44;
                    t15 = (*(int *)((t16 + 0x0)));
                    u0 = 0.0f;
                    u1 = (*(float *)((t15 + t9)));
                    if (!(u1 > u0)) {
                        t15 = 0x2E0;
                        t15 = (t15 + a4);
                        t15 = (t15 + t14);
                        t16 = (*(int *)((t15 + 0x0)));
                        *(float *)((t16 + t9)) = 0.0f;
                    }
                    t16 = 0x2E0;
                    t9 = 0x48;
                    u0 = 0.0f;
                    t16 = (t16 + a4);
                    t16 = (t16 + t14);
                    t15 = (*(int *)((t16 + 0x0)));
                    u1 = (*(float *)((t15 + t9)));
                    if (!(u1 > u0)) {
                        t15 = (*(int *)((t11 + 0x0)));
                        *(float *)((t15 + t9)) = 0.0f;
                    }
                    t16 = (*(int *)((t12 + 0x0)));
                    t9 = 0x4C;
                    u0 = 0.0f;
                    u1 = (*(float *)((t16 + t9)));
                    t10 = (t10 + 0x1);
                    if (!(u1 > u0)) {
                        t15 = (*(int *)((t13 + 0x0)));
                        *(float *)((t15 + t9)) = 0.0f;
                    }
                    t11 = (t11 + 0x4);
                    t12 = (t12 + 0x4);
                    t13 = (t13 + 0x4);
                }
                t10 = t9;
                t9 = 0x24;
                t11 = 0x20;
                t12 = 0x9;
                t13 = t14;
                for (;;) {
                    if ((int)t12 < (int)0x1) {
                        break;
                    }
                    t13 = 0x2E0;
                    t13 = (t13 + a4);
                    t10 = t13;
                    *(volatile int *)((t11 + t10));
                    *(volatile int *)((t9 + t10));
                    t10 = 0xC;
                    t10 = (((int (*)(int, int, int, int, float, float))(FUN_0c0e6fe8))(0x1, t9, t11, t12, 0.0f, 0.049999997f));
                    t9 = (t0 - 4);
                    t11 = (t1 - 4);
                    t12 = (t2 - 1);
                }
                t0 = *(signed char *)((a4 + 0x3));
                thunk_FUN_0c062242(((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
                t1 = 0xEC;
                if ((int)(short)(t0 + 0x1) >= (int)0x14) {
                    t0 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                    t1 = (t0 + 0x1);
                }
                t8 = t1;
            }
            t0 = t8;
        } else {
            t1 = t6;
            t2 = 0x24;
            t6 = 0x20;
            t8 = 0x9;
            for (;;) {
                if ((int)t8 < (int)0x1) {
                    break;
                }
                t9 = 0x2E0;
                t9 = (t9 + a4);
                t1 = t9;
                *(volatile int *)((t6 + t1));
                *(volatile int *)((t2 + t1));
                t1 = 0xC;
                t1 = (((int (*)(int, int, int, int))(FUN_0c0e6fe8))(0x1, t2, t6, t8));
                t2 = (t3 - 4);
                t6 = (t4 - 4);
                t8 = (t5 - 1);
            }
            t1 = *(signed char *)((a4 + 0x3));
            thunk_FUN_0c062242(((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
            t1 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0xB));
            t2 = t1;
            if (t1 == 0) {
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x0;
                t2 = 0xEC;
            }
            t0 = t2;
        }
        t7 = t0;
    }
    return t7;
}
