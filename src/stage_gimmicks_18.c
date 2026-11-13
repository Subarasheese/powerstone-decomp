/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b0e04-0c0b10cc) */

struct o2F0_int { char p[0x2F0]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o2F8_int { char p[0x2F8]; int v; };
struct o2FC_int { char p[0x2FC]; int v; };
struct o300_int { char p[0x300]; int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
extern int FUN_0c0e6fe8();

int stage_gimmick_18_spawn(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t2 = obj_create(0x5, 0x1, 0x9);
    t3 = t2;
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned char *)((t2 + 0x1)) = 0x1;
        *(unsigned char *)((t2 + 0x3)) = 0x2;
        *(unsigned short *)((t2 + 0x6)) = 0x1;
        *(unsigned char *)((t2 + 0x5)) = 0x19;
        (((struct oEC_ushort *)(t2))->v) = 0x0;
        (((struct oEE_ushort *)(t2))->v) = 0x0;
        (((struct oF0_ushort *)(t2))->v) = 0x0;
        *(unsigned int *)((t2 + 0x10)) = 0xC0B0DA0;
        *(unsigned char *)((t2 + 0x4)) = 0xD;
        t4 = ((int (*)(void))(FUN_0c0e6fe8))();
        t4 = ((int (*)(void))(FUN_0c0e6fe8))();
        t4 = ((int (*)(void))(FUN_0c0e6fe8))();
        t4 = 0x0;
        for (;;) {
            FUN_0c06233a((*(int *)((((0x2E0 + t2) + (t4 << 2)) + 0x0))), 0xC664958, 0xA);
            *(unsigned char *)(((*(int *)((((0x2E0 + t2) + (t4 << 2)) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t2) + (t4 << 2)) + 0x0))) + 0x2)) = 0x5;
            *(volatile int *)((((0x2E0 + t2) + (t4 << 2)) + 0x0));
            t5 = ((int (*)(void))(FUN_0c0e6fe8))();
            t5 = (t4 << 2);
            t4 = (t4 + 0x1);
            *(unsigned int *)(((*(int *)((((0x2E0 + t2) + t5) + 0x0))) + 0x14)) = (*(int *)((t5 + 0xC33A504)));
            if ((int)t4 >= (int)0x4) {
                break;
            }
        }
        FUN_0c06233a(((((struct o2F0_int *)(t2))->v)), 0xC664958, 0x9);
        *(unsigned char *)((((((struct o2F0_int *)(t2))->v)) + 0x0)) = 0x0;
        FUN_0c06233a(((((struct o2F4_int *)(t2))->v)), 0xC664958, 0x23);
        *(unsigned char *)((((((struct o2F4_int *)(t2))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2F4_int *)(t2))->v)) + 0x2)) = 0x5;
        *(volatile int *)((t2 + 0x2F4));
        *(volatile int *)((((short)((short)(*(signed char *)0xC7F3051) * (short)0x34) + 0xC350B60) + 0x18));
        t4 = ((int (*)(int))(FUN_0c0e6fe8))(0x1A4);
        *(volatile int *)((t2 + 0x2F4));
        *(volatile int *)((((short)((short)(*(signed char *)0xC7F3051) * (short)0x34) + 0xC350B60) + 0x1C));
        t4 = ((int (*)(int))(FUN_0c0e6fe8))(t0);
        FUN_0c06233a(((((struct o2F8_int *)(t2))->v)), 0xC664958, 0x22);
        *(unsigned char *)((((((struct o2F8_int *)(t2))->v)) + 0x0)) = 0x0;
        FUN_0c06233a(((((struct o2FC_int *)(t2))->v)), 0xC664958, 0x2A);
        *(unsigned char *)((((((struct o2FC_int *)(t2))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2FC_int *)(t2))->v)) + 0x2)) = 0x5;
        *(volatile int *)((t2 + 0x2FC));
        *(volatile int *)((((short)((short)(*(signed char *)0xC7F3051) * (short)0x34) + 0xC350B60) + 0x18));
        t0 = ((int (*)(int))(FUN_0c0e6fe8))(0x1F8);
        *(volatile int *)((t2 + 0x2FC));
        *(volatile int *)((((short)((short)(*(signed char *)0xC7F3051) * (short)0x34) + 0xC350B60) + 0x1C));
        t0 = ((int (*)(int))(FUN_0c0e6fe8))(t1);
        FUN_0c06233a(((((struct o300_int *)(t2))->v)), 0xC664958, 0x29);
        *(unsigned char *)((((((struct o300_int *)(t2))->v)) + 0x0)) = 0x0;
        t3 = 0x300;
    }
    return t3;
}
