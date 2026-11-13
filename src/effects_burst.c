/* burst effect constructor with two child sprites (0c0c7aa0-0c0c7c2c) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record_char(int, int);
extern int FUN_0c0e6fe8();

int fx_burst_create(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t25;
    register int t7;
    register int t8;
    register int t9;
    register int t24;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x1, 0x1, 0x2);
    t25 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C7F48;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        (((struct o2D9_uchar *)(t0))->v) = 0x2;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct oF2_ushort *)(t0))->v) = (unsigned char)(*(signed char *)(((int)stk + 0)));
        (((struct o101_uchar *)(t0))->v) = 0x0;
        (((struct o102_uchar *)(t0))->v) = 0x0;
        obj_set_record_char(t0, 0x7A);
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
        t7 = 0x0;
        t8 = 0x0;
        for (;;) {
            t9 = *(signed char *)((t0 + 0x3));
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t8) + 0x0))), ((signed char)((((t9 << 1) + t9) << 2) << 1) + 0xC6002D0), 0x21);
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t8) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t8) + 0x0))) + 0x2)) = 0x21F;
            *(volatile int *)((((0x2E0 + t0) + t8) + 0x0));
            FUN_0c0e6fe8();
            *(volatile int *)((((0x2E0 + t0) + t8) + 0x0));
            FUN_0c0e6fe8();
            *(volatile int *)((((0x2E0 + t0) + t8) + 0x0));
            FUN_0c0e6fe8();
            *(volatile int *)((((0x2E0 + t0) + t8) + 0x0));
            FUN_0c0e6fe8();
            t7 = (t7 + 0x1);
            t24 = *(int *)((((0x2E0 + t0) + t8) + 0x0));
            (((struct o48_float *)(t24))->v) = 1.0f;
            (((struct o4C_float *)(t24))->v) = 1.0f;
            (((struct o44_float *)(t24))->v) = 1.0f;
            t8 = (t8 + 0x4);
            if ((int)t7 >= (int)0x2) {
                break;
            }
        }
        t25 = 0x44;
    }
    return t25;
}
