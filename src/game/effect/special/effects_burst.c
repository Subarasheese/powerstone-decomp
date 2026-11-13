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
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record_char(int, int);
extern int _quick_odd_mvn();

int fx_burst_create(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t18;
    register int t4;
    register int t5;
    register int t6;
    register int t17;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x1, 0x1, 0x2, 0x0);
    t18 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C7F48;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC15327C); }
        (((struct o2D9_uchar *)(t0))->v) = 0x2;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct oF2_ushort *)(t0))->v) = (unsigned char)(*(signed char *)(((int)stk + 0)));
        (((struct o101_uchar *)(t0))->v) = 0x0;
        (((struct o102_uchar *)(t0))->v) = 0x0;
        obj_set_record_char(t0, 0x7A);
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
        t4 = 0x0;
        t5 = 0x0;
        for (;;) {
            t6 = *(signed char *)((t0 + 0x3));
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t5) + 0x0))), ((signed char)((((t6 << 1) + t6) << 2) << 1) + 0xC6002D0), 0x21);
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t5) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t5) + 0x0))) + 0x2)) = 0x21F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0x2E0 + t0) + t5) + 0x0))) + 0x4)) = *(struct mv3 *)(0xC153270); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0x2E0 + t0) + t5) + 0x0))) + 0x10)) = *(struct mv3 *)(0xC153288); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0x2E0 + t0) + t5) + 0x0))) + 0x1C)) = *(struct mv3 *)(0xC15327C); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0x2E0 + t0) + t5) + 0x0))) + 0x44)) = *(struct mv3 *)(0xC15327C); }
            t4 = (t4 + 0x1);
            t17 = *(int *)((((0x2E0 + t0) + t5) + 0x0));
            (((struct o48_float *)(t17))->v) = 1.0f;
            (((struct o4C_float *)(t17))->v) = 1.0f;
            (((struct o44_float *)(t17))->v) = 1.0f;
            t5 = (t5 + 0x4);
            if ((int)t4 >= (int)0x2) {
                break;
            }
        }
        t18 = 0x44;
    }
    return t18;
}
