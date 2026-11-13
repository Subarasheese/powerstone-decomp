/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b1264-0c0b13c8) */

struct o90_uint { char p[0x90]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);
int memset(int, int, int);

int stage_gimmick_20_spawn(void)
{
    int stk[1];
    register int t0;
    register int t20;
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t7;
    register int t10;
    register int t12;
    register int t15;
    register int t18;
    register int t4;
    register int t11;

    t0 = obj_create(0x5, 0x1, 0x9);
    t20 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B1A60;
        *(unsigned char *)((t0 + 0x4)) = 0xD;
        t1 = ((int (*)(int))(FUN_0c0e6fe8))(0x0);
        t2 = ((int (*)(void))(FUN_0c0e6fe8))();
        t3 = ((int (*)(void))(FUN_0c0e6fe8))();
        t5 = t4;
        for (;;) {
            *(unsigned int *)(((int)stk + 0)) = (((t5 << 1) + t5) << 2);
            t7 = *(int *)((((((t5 << 1) + t5) << 2) + (0x2E0 + t0)) + 0x0));
            FUN_0c06233a(t7, 0xC664958, 0x2E);
            *(unsigned char *)((t7 + 0x0)) = 0x1;
            *(unsigned short *)((t7 + 0x2)) = 0xF;
            t10 = ((int (*)(int))(FUN_0c0e6fe8))((signed char)(((t5 << 1) + t5) << 2));
            t12 = ((int (*)(int))(FUN_0c0e6fe8))(t11);
            memset((t7 + 0x28), 0x0, 0x28);
            t15 = *(int *)((((0x2E0 + t0) + (*(int *)(((int)stk + 0)))) + 0x4));
            FUN_0c06233a(t15, 0xC664958, 0x2F);
            *(unsigned char *)((t15 + 0x0)) = 0x1;
            *(unsigned short *)((t15 + 0x2)) = 0xF;
            (((struct o90_uint *)(t15))->v) = (t7 + 0x50);
            t18 = *(int *)((((0x2E0 + t0) + (*(int *)(((int)stk + 0)))) + 0x8));
            FUN_0c06233a(t18, 0xC664958, 0x30);
            *(unsigned char *)((t18 + 0x0)) = 0x1;
            *(unsigned short *)((t18 + 0x2)) = 0xF;
            t5 = (t5 + 0x1);
            (((struct o90_uint *)(t18))->v) = (t7 + 0x50);
            if ((int)t5 >= (int)0x3) {
                break;
            }
        }
        t20 = 0x90;
    }
    return t20;
}
