/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b110c-0c0b1264) */

struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);

int stage_gimmick_19_spawn(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t2 = obj_create(0x5, 0x1, 0x2);
    t3 = t2;
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned char *)((t2 + 0x1)) = 0x1;
        *(unsigned char *)((t2 + 0x3)) = 0x2;
        *(unsigned short *)((t2 + 0x6)) = 0x1;
        *(unsigned char *)((t2 + 0x5)) = 0x19;
        (((struct oEC_ushort *)(t2))->v) = 0x0;
        (((struct oEE_ushort *)(t2))->v) = 0x0;
        *(unsigned int *)((t2 + 0x10)) = 0xC0B10CC;
        *(unsigned char *)((t2 + 0x4)) = (*(signed char *)((a4 + 0x1)));
        t4 = ((int (*)(int))(FUN_0c0e6fe8))(0x0);
        t4 = ((int (*)(void))(FUN_0c0e6fe8))();
        t4 = ((int (*)(void))(FUN_0c0e6fe8))();
        FUN_0c06233a(((((struct o2E0_int *)(t2))->v)), 0xC664958, (*(short *)((((((*(signed char *)((t2 + 0x4))) << 2) << 1) + 0xC33A518) + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t2))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t2))->v)) + 0x2)) = 0x1;
        *(volatile int *)((t2 + 0x2E0));
        t4 = *(signed char *)0xC7F3051;
        *(volatile short *)((((((*(signed char *)((t2 + 0x4))) << 2) << 1) + 0xC33A518) + 0x2));
        *(volatile int *)((((short)((short)t4 * (short)0x34) + 0xC350B60) + 0x18));
        t4 = ((int (*)(int, int))(FUN_0c0e6fe8))(0xC7F302C, 0xC350B60);
        *(volatile int *)((t2 + 0x2E0));
        t4 = *(signed char *)((t0 + 0x25));
        *(volatile short *)((((((*(signed char *)((t2 + 0x4))) << 2) << 1) + 0xC33A518) + 0x2));
        *(volatile int *)((((short)((short)t4 * (short)0x34) + t1) + 0x1C));
        t4 = ((int (*)(int, int))(FUN_0c0e6fe8))(t0, t1);
        FUN_0c06233a(((((struct o2E4_int *)(t2))->v)), 0xC664958, (*(short *)((((((*(signed char *)((t2 + 0x4))) << 2) << 1) + 0xC33A518) + 0x0))));
        *(unsigned char *)((((((struct o2E4_int *)(t2))->v)) + 0x0)) = 0x1;
        t3 = 0x2E4;
    }
    return t3;
}
