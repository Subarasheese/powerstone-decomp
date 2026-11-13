/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c039c6c-0c039ed8) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(void);
struct oEC_short { char p[0xEC]; short v; };
struct oEE_short { char p[0xEE]; short v; };
int obj_destroy(int);
int math_rand_next(void);
int _modls(void);

int fx_spawn_039c78(int a4, int a5, int a6, int a7);

int FUN_0c039c6c(int a4, int a5, int a6)
{
    return (fx_spawn_039c78(a4, a5, a6, 0xA));
}

int fx_spawn_039c78(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t12;
    register int t5;
    register int t8;
    register int t9;
    register int t10;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned char *)(((int)stk + 0)) = a6;
    *(unsigned char *)(((int)stk + 4)) = a7;
    t0 = obj_create(0x5, 0x1, 0xA, 0x0);
    t12 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned short *)((t0 + 0x6)) = 0x5;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = (*(signed char *)(((int)stk + 4)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC321504); }
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC039D4A;
        t5 = *(signed char *)(((int)stk + 0));
        t8 = (0x2E0 + t0);
        t9 = 0x0;
        for (;;) {
            t10 = *(int *)((t8 + 0x0));
            t8 = (t8 + 0x4);
            FUN_0c06233a(t10, ((signed char)((((t5 << 1) + t5) << 2) << 1) + 0xC6002D0), 0x14);
            *(unsigned char *)((t10 + 0x0)) = 0x0;
            t9 = (t9 + 0x1);
            *(unsigned short *)((t10 + 0x2)) = 0x13;
            if ((int)t9 >= (int)0xA) {
                break;
            }
        }
        t12 = 0x13;
    }
    return t12;
}

int fx_tick_039c78(int a4)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t6;
    register int t34;
    register int t33;
    register int t36;
    register int t37;
    register int t38;
    register int t44;
    register int t46;
    register int t48;
    register int t50;
    register int t52;
    register int t54;
    register int t55;
    register int t3;
    register float u7;
    register float u8;
    register int t39;
    register float u40;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4);
        }
        t1 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t1 + 0x1);
        t2 = 0xC039ED0;
        t4 = (t1 + 0x1);
        t5 = a4;
        t6 = 0x0;
        for (;;) {
            if ((int)t6 >= (int)0xA) {
                break;
            }
            t2 = 0xEC;
            t5 = t6;
            t3 = (*(short *)((a4 + t2)));
            t2 = (t2 + 0x2);
            t4 = (*(short *)((a4 + t2)));
            t4 = (t4 + t6);
            t4 = (t4 + 0x5);
            t5 = (t5 << 2);
            if ((int)t3 > (int)t4) {
                t3 = 0x2E0;
                t3 = (t3 + a4);
                t5 = (t5 + t3);
                t4 = (*(int *)((t5 + 0x0)));
                *(unsigned char *)((t4 + 0x0)) = 0x0;
            } else {
                t2 = 0xEC;
                t4 = (*(short *)((a4 + t2)));
                t2 = (t2 + 0x2);
                t3 = (*(short *)((a4 + t2)));
                t3 = (t3 + t6);
                if ((int)t4 > (int)t3) {
                    t3 = 0x2E0;
                    t2 = 0x8;
                    t3 = (t3 + a4);
                    t5 = (t5 + t3);
                    t5 = (*(int *)((t5 + 0x0)));
                    *(unsigned char *)((t5 + 0x0)) = 0x1;
                    u8 = (*(float *)((t5 + t2)));
                    u8 = (u8 + 30.0f);
                    *(float *)((t5 + t2)) = u8;
                    t2 = 0xC;
                    u7 = (*(float *)((t5 + t2)));
                    u7 = (u7 + 30.0f);
                    *(float *)((t5 + t2)) = u7;
                    t2 = 0x1C;
                    u8 = (*(float *)((t5 + t2)));
                    u8 = (u8 - 0.149999991f);
                    *(float *)((t5 + t2)) = u8;
                    t2 = 0x20;
                    u7 = (*(float *)((t5 + t2)));
                    u7 = (u7 + 0.5f);
                    *(float *)((t5 + t2)) = u7;
                    t2 = 0x24;
                    u8 = (*(float *)((t5 + t2)));
                    u8 = (u8 - 0.149999991f);
                    *(float *)((t5 + t2)) = u8;
                }
            }
            t6 = (t6 + 0x1);
        }
        t34 = 0xEE;
        if ((int)((((struct oEC_short *)(a4))->v)) > (int)(((((struct oEE_short *)(a4))->v)) + 0xF)) {
            t33 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t33 + 0x1);
            t34 = (t33 + 0x1);
        }
        return t34;
    }
    *(unsigned int *)(((int)stk + 0)) = (0x2E0 + a4);
    t36 = t0;
    t37 = (0x2E0 + a4);
    t38 = 0x0;
    for (;;) {
        if ((int)t38 >= (int)0xA) {
            break;
        }
        t39 = (*(int *)(((int)stk + 0)));
        t39 = (t39 + 0x4);
        *(unsigned int *)(((int)stk + 0)) = t39;
        t39 = (t39 - 4);
        t39 = (*(int *)((t39 + 0x0)));
        t36 = (math_rand_next());
        t37 = 0xC0E6E5C;
        t44 = t36;
        t36 = 0x64;
        t36 = ((int)((int)t44 % (int)t36));
        t36 = (t36 - 50);
        t46 = t36;
        t36 = 0x4;
        u40 = (float)t46;
        *(float *)((t39 + t36)) = u40;
        t36 = (math_rand_next());
        t48 = t36;
        t36 = 0x64;
        t36 = ((int)((int)t48 % (int)t36));
        t36 = (t36 + 0x96);
        t50 = t36;
        t36 = 0x8;
        u40 = (float)t50;
        *(float *)((t39 + t36)) = u40;
        t36 = (math_rand_next());
        t52 = t36;
        t36 = 0x64;
        t36 = ((int)((int)t52 % (int)t36));
        t54 = t36;
        t36 = 0xC;
        t37 = 0x2000;
        t38 = (t38 + 0x1);
        u40 = (float)t54;
        *(float *)((t39 + t36)) = u40;
        *(unsigned int *)((t39 + 0x10)) = t37;
    }
    t55 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)((a4 + 0x8)) = (t55 + 0x1);
    return (t55 + 0x1);
}
