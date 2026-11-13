/* same module (continues) (0c0cb00c-0c0cb50c) */

int FUN_0c0555dc(void);
int obj_destroy(int);
int FUN_0c0cb252(int);
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int, int);
int _quick_odd_mvn(float);

int FUN_0c0cb344(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
    }
    *(unsigned int *)((a4 + 0x30)) = (*(int *)0xC7F2B0C);
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return obj_destroy(a4);
            }
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            return obj_destroy(a4);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t0 = FUN_0c0cb252(a4);
    if ((signed char)t0 == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    return ((int (*)(int, int, int, int))(0xC0CB2AA))(a4, a5, a6, a7);
}

int FUN_0c0cb3b8(int a4)
{
    register int t0;
    register int t5;

    t0 = obj_create(0x1, 0x1, 0x0, 0x0);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0CB456;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(((unsigned short)((unsigned short)(*(signed char *)((t0 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40F0)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC1533A4); }
        (((struct o118_uint *)(t0))->v) = 0x0;
        (((struct o38_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + (*(float *)0xC0CB4F8));
        (((struct oEC_ushort *)(t0))->v) = 0x4;
        (((struct o101_uchar *)(t0))->v) = 0x2;
        (((struct o102_uchar *)(t0))->v) = 0x0;
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o2D9_uchar *)(t0))->v) = 0x2;
        t5 = 0x2D9;
    }
    return t5;
}
