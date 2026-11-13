/* stage placement records: spawners and update/mode handlers for record types 1 2 3 4 8 11 12 and debris (0c0ace1c-0c0ad15c) */

struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);
int math_rand_next(void);
int FUN_0c0e24f0(int);
int FUN_0c0e6e5c(void);
int FUN_0c0e6fe8(void);

int FUN_0c0acf90(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t1;
    register int t5;
    register int t6;
    register int t7;
    register int t19;
    register int t21;
    register int t20;
    register int t23;
    register int t24;
    register int t31;
    register int t35;
    register int t39;
    register int t45;
    register int t2;
    register int t3;
    register float u8;
    register float u9;
    register int t25;

    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
        t5 = 0x0;
        t6 = 0x0;
        t7 = (0x2E0 + a4);
        for (;;) {
            if ((int)t6 >= (int)0x5) {
                break;
            }
            t5 = (*(int *)((t7 + 0x0)));
            t7 = (t7 + 0x4);
            t2 = 0x28;
            t1 = 0x4;
            t2 = (t2 + t5);
            u8 = (*(float *)((t5 + t1)));
            u9 = (*(float *)((t2 + 0x0)));
            t2 = 0x2C;
            t2 = (t2 + t5);
            u8 = (u8 + u9);
            t6 = (t6 + 0x1);
            *(float *)((t5 + t1)) = u8;
            t1 = 0x8;
            u8 = (*(float *)((t5 + t1)));
            u9 = (*(float *)((t2 + 0x0)));
            t2 = 0x30;
            t2 = (t2 + t5);
            u8 = (u8 + u9);
            *(float *)((t5 + t1)) = u8;
            t1 = 0xC;
            u8 = (*(float *)((t5 + t1)));
            u9 = (*(float *)((t2 + 0x0)));
            u8 = (u8 + u9);
            *(float *)((t5 + t1)) = u8;
            t3 = (*(int *)((t5 + 0x14)));
            t3 = (t3 + ((*(int *)((t5 + 0x38)))));
            *(unsigned int *)((t5 + 0x14)) = t3;
        }
        t19 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t19 + 0x1);
        t21 = 0xEC;
        if ((int)(short)(t19 + 0x1) > (int)0xF) {
            t20 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t20 + 0x1);
            t21 = (t20 + 0x1);
        }
        return t21;
    }
    *(unsigned int *)(((int)stk + 0)) = (0x2E0 + a4);
    t23 = 0xC0ACFF8;
    t24 = 0x0;
    for (;;) {
        if ((int)t24 >= (int)0x5) {
            break;
        }
        t25 = (*(int *)(((int)stk + 0)));
        t25 = (t25 + 0x4);
        *(unsigned int *)(((int)stk + 0)) = t25;
        t25 = (t25 - 4);
        t25 = (*(int *)((t25 + 0x0)));
        t23 = (math_rand_next());
        t23 = 0xA;
        t23 = (FUN_0c0e6e5c());
        t23 = (t23 - 5);
        t31 = t23;
        t23 = 0x28;
        *(float *)((t25 + t23)) = (float)t31;
        t23 = (math_rand_next());
        t23 = 0x5;
        t23 = (FUN_0c0e6e5c());
        t35 = t23;
        t23 = 0x2C;
        *(float *)((t25 + t23)) = (float)t35;
        t23 = (math_rand_next());
        t23 = 0xA;
        t23 = (FUN_0c0e6e5c());
        t23 = (t23 - 5);
        t39 = t23;
        t23 = 0x30;
        *(float *)((t25 + t23)) = (float)t39;
        t23 = (FUN_0c0e24f0((t25 + 0x28)));
        t23 = 0x28;
        *(float *)((t25 + t23)) = ((*(float *)((t25 + t23))) * 20.0f);
        t23 = 0x2C;
        *(float *)((t25 + t23)) = ((*(float *)((t25 + t23))) * 20.0f);
        t23 = 0x30;
        *(float *)((t25 + t23)) = ((*(float *)((t25 + t23))) * 20.0f);
        t23 = 0xC;
        t23 = (FUN_0c0e6fe8());
        t24 = (t24 + 0x1);
        *(unsigned int *)((t25 + 0x38)) = 0xE39;
    }
    t45 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)((a4 + 0x8)) = (t45 + 0x1);
    return (t45 + 0x1);
}
