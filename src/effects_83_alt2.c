/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03fd08-0c040260) */

struct o118_int { char p[0x118]; int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
int obj_create_beside(int, int, int, int, int);
int FUN_0c06233a(int, int, int);
extern int FUN_0c0e6fe8();

int fx_spawn_04015c(int a4)
{
    int stk[2];
    register int t0;
    register int t15;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t13;
    register int t14;

    *(int *)((int)stk + 0) = 0x0;
    t0 = obj_create_beside(0x5, a4, 0x1, 0xA, 0x0);
    t15 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0404BA;
        t2 = ((int (*)(int))(FUN_0c0e6fe8))(0x1);
        t3 = ((int (*)(void))(FUN_0c0e6fe8))();
        t4 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct o118_uint *)(t0))->v) = ((((struct o118_int *)(a4))->v));
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned int *)(((int)stk + 4)) = (0x2E0 + t0);
        t6 = 0x0;
        for (;;) {
            t7 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t7 + 0x4);
            t8 = *(int *)((((t7 + 0x4) - 4) + 0x0));
            *(unsigned char *)((t8 + 0x0)) = 0x0;
            t9 = *(signed char *)((t0 + 0x3));
            FUN_0c06233a(t8, ((signed char)((((t9 << 1) + t9) << 2) << 1) + 0xC6002D0), 0x10);
            *(unsigned short *)((t8 + 0x2)) = 0x221;
            t13 = ((int (*)(void))(FUN_0c0e6fe8))();
            t14 = ((int (*)(void))(FUN_0c0e6fe8))();
            t6 = (t6 + 0x1);
            if ((int)t6 >= (int)0xA) {
                break;
            }
        }
        t15 = t14;
    }
    return t15;
}
