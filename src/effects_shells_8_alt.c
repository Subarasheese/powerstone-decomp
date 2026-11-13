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
int obj_create(int, int, int);
int FUN_0c0e6fe8(float);

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
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t5 = obj_create(0x1, 0x1, 0x0);
    t6 = t5;
    if (t5 != 0) {
        *(unsigned char *)((t5 + 0x0)) = 0x1;
        *(unsigned char *)((t5 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t5 + 0x1)) = 0x0;
        *(unsigned short *)((t5 + 0x6)) = 0xF;
        *(unsigned char *)((t5 + 0x5)) = 0x19;
        *(unsigned int *)((t5 + 0x10)) = 0xC0CB456;
        t7 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(t5, 0x0, 0x1);
        *(volatile signed char *)((t0 + 0x3));
        t5 = ((int (*)(int))(FUN_0c0e6fe8))(t0);
        t0 = ((int (*)(int))(FUN_0c0e6fe8))(t1);
        (((struct o118_uint *)(t4))->v) = t2;
        (((struct o38_float *)(t4))->v) = (((((struct o24_float *)(t4))->v)) + 1000.0f);
        (((struct oEC_ushort *)(t4))->v) = 0x4;
        (((struct o101_uchar *)(t4))->v) = 0x2;
        (((struct o102_uchar *)(t4))->v) = t2;
        (((struct o105_uchar *)(t4))->v) = t3;
        (((struct o2D9_uchar *)(t4))->v) = 0x2;
        t6 = 0x2D9;
    }
    return t6;
}
