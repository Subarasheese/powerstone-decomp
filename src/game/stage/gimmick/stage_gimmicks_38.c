/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b4c0c-0c0b4dc4) */

struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(int);

void stage_gimmick_35_spawn(void)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t11;

    t0 = obj_create(0x5, 0x1, 0x2, 0x0);
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
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(0xC33A9F0); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC33AA08); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33A9FC); }
        *(unsigned char *)(((int)stk + 0)) = 0x0;
        *(unsigned int *)(((int)stk + 4)) = (0x2E0 + t0);
        *(unsigned int *)(((int)stk + 8)) = 0xC33AA14;
        for (;;) {
            t1 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 8)) = (t1 + 0x1);
            t2 = *(int *)(((int)stk + 4));
            t3 = *(signed char *)((((t1 + 0x1) - 1) + 0x0));
            *(unsigned int *)(((int)stk + 4)) = (t2 + 0x4);
            t4 = *(int *)((((t2 + 0x4) - 4) + 0x0));
            FUN_0c06233a(t4, 0xC664958, t3);
            *(unsigned char *)((t4 + 0x0)) = 0x1;
            *(unsigned short *)((t4 + 0x2)) = 0xF;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x4)) = *(struct mv3 *)(((*(int *)((((short)((short)(*(signed char *)0xC7F3051) * (short)0x34) + 0xC350B60) + 0x18))) + ((((signed char)t3 << 1) + (signed char)t3) << 2))); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x10)) = *(struct mv3 *)(((*(int *)((((short)((short)(*(signed char *)0xC7F3051) * (short)0x34) + 0xC350B60) + 0x1C))) + ((((signed char)t3 << 1) + (signed char)t3) << 2))); }
            t11 = *(signed char *)(((int)stk + 0));
            *(unsigned char *)(((int)stk + 0)) = (t11 + 0x1);
            if ((int)(signed char)(t11 + 0x1) >= (int)0x2) {
                break;
            }
        }
    }
}
