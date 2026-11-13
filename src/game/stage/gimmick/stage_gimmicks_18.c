/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b0e04-0c0b10cc) */

struct o2F0_int { char p[0x2F0]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o2F8_int { char p[0x2F8]; int v; };
struct o2FC_int { char p[0x2FC]; int v; };
struct o300_int { char p[0x300]; int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
extern int _quick_odd_mvn();

int stage_gimmick_18_spawn(void)
{
    register int t0;
    register int t41;
    register int t1;
    register int t8;

    t0 = obj_create(0x5, 0x1, 0x9, 0x0);
    t41 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        (((struct oF0_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B0DA0;
        *(unsigned char *)((t0 + 0x4)) = 0xD;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(0xC33A4B0); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC33A4C8); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33A4BC); }
        t1 = 0x0;
        for (;;) {
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + (t1 << 2)) + 0x0))), 0xC664958, 0xA);
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + (t1 << 2)) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + (t1 << 2)) + 0x0))) + 0x2)) = 0x5;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0x2E0 + t0) + (t1 << 2)) + 0x0))) + 0x4)) = *(struct mv3 *)(((signed char)(((t1 << 1) + t1) << 2) + 0xC33A4D4)); }
            t8 = (t1 << 2);
            t1 = (t1 + 0x1);
            *(unsigned int *)(((*(int *)((((0x2E0 + t0) + t8) + 0x0))) + 0x14)) = (*(int *)((t8 + 0xC33A504)));
            if ((int)t1 >= (int)0x4) {
                break;
            }
        }
        FUN_0c06233a(((((struct o2F0_int *)(t0))->v)), 0xC664958, 0x9);
        *(unsigned char *)((((((struct o2F0_int *)(t0))->v)) + 0x0)) = 0x0;
        FUN_0c06233a(((((struct o2F4_int *)(t0))->v)), 0xC664958, 0x23);
        *(unsigned char *)((((((struct o2F4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2F4_int *)(t0))->v)) + 0x2)) = 0x5;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2F4_int *)(t0))->v)) + 0x4)) = *(struct mv3 *)(((*(int *)((((short)((short)(*(signed char *)0xC7F3051) * (short)0x34) + 0xC350B60) + 0x18))) + 0x1A4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2F4_int *)(t0))->v)) + 0x10)) = *(struct mv3 *)(((*(int *)((((short)((short)(*(signed char *)0xC7F3051) * (short)0x34) + 0xC350B60) + 0x1C))) + 0x1A4)); }
        FUN_0c06233a(((((struct o2F8_int *)(t0))->v)), 0xC664958, 0x22);
        *(unsigned char *)((((((struct o2F8_int *)(t0))->v)) + 0x0)) = 0x0;
        FUN_0c06233a(((((struct o2FC_int *)(t0))->v)), 0xC664958, 0x2A);
        *(unsigned char *)((((((struct o2FC_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2FC_int *)(t0))->v)) + 0x2)) = 0x5;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2FC_int *)(t0))->v)) + 0x4)) = *(struct mv3 *)(((*(int *)((((short)((short)(*(signed char *)0xC7F3051) * (short)0x34) + 0xC350B60) + 0x18))) + 0x1F8)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2FC_int *)(t0))->v)) + 0x10)) = *(struct mv3 *)(((*(int *)((((short)((short)(*(signed char *)0xC7F3051) * (short)0x34) + 0xC350B60) + 0x1C))) + 0x1F8)); }
        FUN_0c06233a(((((struct o300_int *)(t0))->v)), 0xC664958, 0x29);
        *(unsigned char *)((((((struct o300_int *)(t0))->v)) + 0x0)) = 0x0;
        t41 = 0x300;
    }
    return t41;
}
