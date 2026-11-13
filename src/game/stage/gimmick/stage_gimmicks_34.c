/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b4494-0c0b45dc) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DA_uchar { char p[0x2DA]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(int);

int stage_gimmick_32_spawn(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t2 = obj_create(0x2, 0x1, 0x1);
    t3 = t2;
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned char *)((t2 + 0x1)) = 0x1;
        *(unsigned char *)((t2 + 0x3)) = 0x2;
        *(unsigned short *)((t2 + 0x6)) = 0x9;
        *(unsigned char *)((t2 + 0x5)) = 0x19;
        *(unsigned char *)((t2 + 0x8)) = 0x0;
        *(unsigned char *)((t2 + 0x9)) = 0x0;
        if ((*(signed char *)((a4 + 0x1))) == 0) {
            (((struct oEC_ushort *)(t2))->v) = 0x0;
        } else {
            (((struct oEC_ushort *)(t2))->v) = 0x3C;
        }
        (((struct oEE_ushort *)(t2))->v) = 0x0;
        (((struct oF0_ushort *)(t2))->v) = 0x4B0;
        *(unsigned int *)((t2 + 0x10)) = 0xC0B45DC;
        *(unsigned char *)((t2 + 0x4)) = 0x8;
        (((struct o308_uint *)(t2))->v) = a4;
        (((struct o101_uchar *)(t2))->v) = (*(signed char *)((a4 + 0x4)));
        (((struct o102_uchar *)(t2))->v) = (*(signed char *)((a4 + 0x5)));
        (((struct o105_uchar *)(t2))->v) = 0x1;
        (((struct o106_uchar *)(t2))->v) = 0x1;
        (((struct o107_uchar *)(t2))->v) = 0x0;
        (((struct o2D9_uchar *)(t2))->v) = (*(signed char *)((a4 + 0x8)));
        (((struct o2DA_uchar *)(t2))->v) = (*(signed char *)((a4 + 0x9)));
        t4 = *(signed char *)0xC7F3051;
        *(volatile signed char *)((a4 + 0x2));
        *(volatile int *)((((short)((short)t4 * (short)0x34) + 0xC350B60) + 0x18));
        t4 = ((int (*)(int, int))(FUN_0c0e6fe8))(0xC350B60, 0xC7F302C);
        t4 = *(signed char *)((t0 + 0x25));
        *(volatile signed char *)((a4 + 0x2));
        *(volatile int *)((((short)((short)t4 * (short)0x34) + t1) + 0x1C));
        t4 = ((int (*)(int, int))(FUN_0c0e6fe8))(t1, t0);
        t0 = ((int (*)(void))(FUN_0c0e6fe8))();
        FUN_0c06233a(((((struct o2E0_int *)(t2))->v)), 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t2))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t2))->v)) + 0x2)) = 0x9;
        t3 = 0x9;
    }
    return t3;
}
