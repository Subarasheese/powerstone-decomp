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
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(int);

int stage_gimmick_32_spawn(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = obj_create(0x2, 0x1, 0x1, 0x0);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x9;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        if ((*(signed char *)((a4 + 0x1))) == 0) {
            (((struct oEC_ushort *)(t0))->v) = 0x0;
        } else {
            (((struct oEC_ushort *)(t0))->v) = 0x3C;
        }
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        (((struct oF0_ushort *)(t0))->v) = 0x4B0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B45DC;
        *(unsigned char *)((t0 + 0x4)) = 0x8;
        (((struct o308_uint *)(t0))->v) = a4;
        (((struct o101_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x4)));
        (((struct o102_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x5)));
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x0;
        (((struct o2D9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x8)));
        (((struct o2DA_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x9)));
        t2 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(((*(int *)((((short)((short)(*(signed char *)0xC7F3051) * (short)0x34) + 0xC350B60) + 0x18))) + (((t2 << 1) + t2) << 2))); }
        t2 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(((*(int *)((((short)((short)(*(signed char *)0xC7F3051) * (short)0x34) + 0xC350B60) + 0x1C))) + (((t2 << 1) + t2) << 2))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33A984); }
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x9;
        t1 = 0x9;
    }
    return t1;
}
