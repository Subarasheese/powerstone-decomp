/* Object init: reset counters, load per-state parameters from a table, set velocity vector from the linked object's angle. */
struct v3 { int x, y, z; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c0a1e0a(int, int);
int FUN_0c0ad1b8(int);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c0ad818(int a4);
int FUN_0c0ad818(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x3)) = (*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3)));
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    (((struct o2D9_uchar *)(a4))->v) = 0x0;
    t0 = *(signed char *)((a4 + 0x314));
    (((struct o101_uchar *)(a4))->v) = (*(signed char *)((((((t0 << 2) + t0) << 1) + 0xC33BFD8) + 0x4)));
    (((struct o102_uchar *)(a4))->v) = (*(signed char *)((((((t0 << 2) + t0) << 1) + 0xC33BFD8) + 0x5)));
    FUN_0c0a1e0a(a4, (*(signed char *)((((((t0 << 2) + t0) << 1) + 0xC33BFD8) + 0x3))));
    (((struct o105_uchar *)(a4))->v) = 0x0;
    (((struct o106_uchar *)(a4))->v) = 0x0;
    (((struct o107_uchar *)(a4))->v) = 0x0;
    if ((*(signed char *)((((((t0 << 2) + t0) << 1) + 0xC33BFD8) + 0x7))) != 0) {
        t0 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x4));
        t1 = 0x14;
        t2 = (0xC33C05C + ((((t0 << 1) + t0) << 2) << 1));
    } else {
        t0 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x4));
        t1 = 0x10;
        t2 = (0xC33C05C + ((((t0 << 1) + t0) << 2) << 1));
    }
    u0 = *(float *)((t2 + t1));
    (((struct o38_float *)(a4))->v) = ((FUN_0c0df4d0(((-(*(int *)(((*(int *)((a4 + 0x1C))) + 0x30)))) + 0x14000))) * u0);
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = ((FUN_0c0dfa50(((-(*(int *)(((*(int *)((a4 + 0x1C))) + 0x30)))) + 0x14000))) * u0);
    *(struct v3 *)(a4 + 0x44) = *(struct v3 *)0xC339FA8;
    return FUN_0c0ad1b8(a4);
}

