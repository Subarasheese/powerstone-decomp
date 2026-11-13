/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0af4ec-0c0af7e8) */

struct o2EC_int { char p[0x2EC]; int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);

int stage_gimmick_08_spawn(void)
{
    int stk[1];
    register int t0;
    register int t23;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t11;
    register int t15;
    register int t16;
    register int t20;
    register int t19;

    t0 = obj_create(0x5, 0x1, 0x8);
    t23 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0AF644;
        *(unsigned char *)((t0 + 0x4)) = 0xD;
        t1 = ((int (*)(void))(FUN_0c0e6fe8))();
        t2 = ((int (*)(void))(FUN_0c0e6fe8))();
        t3 = ((int (*)(void))(FUN_0c0e6fe8))();
        *(unsigned int *)(((int)stk + 0)) = 0xC33A24C;
        t4 = 0x0;
        t5 = 0x0;
        for (;;) {
            t6 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = (t6 + 0x1);
            t7 = *(signed char *)((((t6 + 0x1) - 1) + 0x0));
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t5) + 0x0))), 0xC664958, t7);
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t5) + 0x0))) + 0x0)) = 0x1;
            t11 = *(signed char *)0xC7F3051;
            *(volatile int *)((((0x2E0 + t0) + t5) + 0x0));
            *(volatile int *)((((short)((short)t11 * (short)0x34) + 0xC350B60) + 0x18));
            t15 = ((int (*)(int))(FUN_0c0e6fe8))(((((signed char)t7 << 1) + (signed char)t7) << 2));
            t16 = *(signed char *)0xC7F3051;
            *(volatile int *)((((0x2E0 + t0) + t5) + 0x0));
            *(volatile int *)((((short)((short)t16 * (short)0x34) + 0xC350B60) + 0x1C));
            t20 = ((int (*)(int))(FUN_0c0e6fe8))(t19);
            t4 = (t4 + 0x1);
            *(unsigned short *)(((*(int *)((t5 + (0x2E0 + t0)))) + 0x2)) = 0xF;
            t5 = (t5 + 0x4);
            if ((int)(signed char)t4 >= (int)0x8) {
                break;
            }
        }
        *(unsigned char *)((((((struct o2EC_int *)(t0))->v)) + 0x0)) = 0x0;
        t23 = 0x2EC;
    }
    return t23;
}
