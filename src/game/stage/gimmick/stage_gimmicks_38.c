/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b4c0c-0c0b4dc4) */

struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(int);

int stage_gimmick_35_spawn(void)
{
    int stk[3];
    register int t0;
    register int t22;
    register int t1;
    register int t3;
    register int t5;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t16;
    register int t20;
    register int t21;
    register int t2;
    register int t4;
    register int t6;
    register int t7;
    register int t19;

    t0 = obj_create(0x5, 0x1, 0x2);
    t22 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B4D54;
        *(unsigned char *)((t0 + 0x4)) = 0xD;
        t1 = ((int (*)(int, int))(FUN_0c0e6fe8))(t0, 0x0);
        t3 = ((int (*)(int))(FUN_0c0e6fe8))(t2);
        t5 = ((int (*)(int))(FUN_0c0e6fe8))(t4);
        *(unsigned char *)(((int)stk + 0)) = t7;
        *(unsigned int *)(((int)stk + 4)) = (0x2E0 + t6);
        *(unsigned int *)(((int)stk + 8)) = 0xC33AA14;
        for (;;) {
            t8 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 8)) = (t8 + 0x1);
            t9 = *(int *)(((int)stk + 4));
            t10 = *(signed char *)((((t8 + 0x1) - 1) + 0x0));
            *(unsigned int *)(((int)stk + 4)) = (t9 + 0x4);
            t11 = *(int *)((((t9 + 0x4) - 4) + 0x0));
            FUN_0c06233a(t11, 0xC664958, t10);
            *(unsigned char *)((t11 + 0x0)) = 0x1;
            *(unsigned short *)((t11 + 0x2)) = 0xF;
            *(volatile int *)((((short)((short)(*(signed char *)0xC7F3051) * (short)0x34) + 0xC350B60) + 0x18));
            t16 = ((int (*)(int))(FUN_0c0e6fe8))(((((signed char)t10 << 1) + (signed char)t10) << 2));
            *(volatile int *)((((short)((short)(*(signed char *)0xC7F3051) * (short)0x34) + 0xC350B60) + 0x1C));
            t20 = ((int (*)(int))(FUN_0c0e6fe8))(t19);
            t21 = *(signed char *)(((int)stk + 0));
            *(unsigned char *)(((int)stk + 0)) = (t21 + 0x1);
            if ((int)(signed char)(t21 + 0x1) >= (int)0x2) {
                break;
            }
        }
        t22 = t20;
    }
    return t22;
}
