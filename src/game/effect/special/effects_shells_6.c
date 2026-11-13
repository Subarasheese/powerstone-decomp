/* same module (continues) (0c0ca124-0c0ca268) */

struct o308_uint { char p[0x308]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_create_beside(int, int, int, int, int);
int _quick_odd_mvn(int);
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o308_int { char p[0x308]; int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);
int obj_set_record_char(int, int);

int FUN_0c0ca124(int a4)
{
    register int t0;

    t0 = obj_create_beside(0x1, a4, 0x1, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0CA198;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x1C)) = (*(int *)((a4 + 0x1C)));
        (((struct o308_uint *)(t0))->v) = a4;
    }
    return t0;
}

int FUN_0c0ca198(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 11) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
    }
    t0 = (((struct o308_int *)(a4))->v);
    if ((*(int *)((t0 + 0x10))) != 0xC0C9B08) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
    }
    t1 = FUN_0c0555dc();
    if (t1 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
    }
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    return t1;
                }
                return obj_destroy(a4);
            }
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            return obj_destroy(a4);
        }
        (((struct o105_uchar *)(a4))->v) = 0x0;
        t1 = *(signed char *)((t0 + 0xC));
        t2 = t1;
        if (t1 != 0) {
            (((struct o105_uchar *)(a4))->v) = 0x2;
            t2 = 0x105;
        }
        return t2;
    }
    (((struct o101_uchar *)(a4))->v) = 0x1;
    (((struct o102_uchar *)(a4))->v) = 0x1;
    obj_set_record_char(a4, 0x70);
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x78;
    (((struct o105_uchar *)(a4))->v) = 0x0;
    t1 = *(signed char *)((t0 + 0xC));
    t0 = t1;
    if (t1 != 0) {
        (((struct o105_uchar *)(a4))->v) = 0x2;
        t0 = 0x105;
    }
    return t0;
}
