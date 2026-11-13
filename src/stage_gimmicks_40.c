/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b5308-0c0b5420) */

struct o2E0_int { char p[0x2E0]; int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(int);

int stage_gimmick_37_spawn(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t5 = obj_create(0x5, 0x1, 0x1);
    t6 = t5;
    if (t5 != 0) {
        *(unsigned char *)((t5 + 0x0)) = 0x1;
        *(unsigned char *)((t5 + 0x1)) = 0x1;
        *(unsigned char *)((t5 + 0x3)) = 0x2;
        *(unsigned short *)((t5 + 0x6)) = 0x1;
        *(unsigned char *)((t5 + 0x5)) = 0x19;
        *(unsigned char *)((t5 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(t5))->v) = 0x0;
        *(unsigned int *)((t5 + 0x10)) = 0xC0B53CE;
        t7 = *(signed char *)0xC7F3051;
        *(volatile signed char *)((a4 + 0x2));
        *(volatile int *)((((short)((short)t7 * (short)0x34) + 0xC350B60) + 0x18));
        t7 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(t5, 0xC7F302C, 0xC350B60);
        t5 = *(signed char *)((t0 + 0x25));
        *(volatile signed char *)((a4 + 0x2));
        *(volatile int *)((((short)((short)t5 * (short)0x34) + t1) + 0x1C));
        t5 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(t2, t0, t1);
        t0 = ((int (*)(int))(FUN_0c0e6fe8))(t3);
        t0 = (((struct o2E0_int *)(t4))->v);
        FUN_0c06233a(t0, 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x2)) = 0x1;
        t6 = 0x1;
    }
    return t6;
}

void stage_gimmick_37_update(void)
{
    if ((*(signed char *)0xC7F319E) == 0) {
        ((int (*)(void))(0xC0B5298))();
    return;
    }
}
