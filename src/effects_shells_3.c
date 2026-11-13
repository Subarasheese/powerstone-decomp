/* same module (continues) (0c0c9760-0c0c9834) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o308_int { char p[0x308]; int v; };
struct oEE_short { char p[0xEE]; short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);
int obj_set_record_char(int, int);

int fx_update_trail_segment(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o308_int *)(a4))->v);
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BA))) != 11) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
    }
    if ((*(int *)((t0 + 0x10))) != 0xC0C8D80) {
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
        t1 = *(signed char *)((t0 + 0xA));
        obj_set_record_char(a4, (*(signed char *)(((((((struct oEE_short *)(a4))->v)) + (0xC153360 + (signed char)((t1 << 1) + (t1 << 2)))) + 0x0))));
        t1 = *(signed char *)((t0 + 0xC));
        t2 = t1;
        if (t1 != 0) {
            (((struct o105_uchar *)(a4))->v) = 0x2;
            t2 = 0x105;
        }
        return t2;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct o101_uchar *)(a4))->v) = 0x2;
    (((struct o102_uchar *)(a4))->v) = 0x0;
    (((struct o105_uchar *)(a4))->v) = 0x0;
    t1 = *(signed char *)((t0 + 0xA));
    obj_set_record_char(a4, (*(signed char *)(((((((struct oEE_short *)(a4))->v)) + (0xC153360 + (signed char)((t1 << 1) + (t1 << 2)))) + 0x0))));
    t1 = *(signed char *)((t0 + 0xC));
    t0 = t1;
    if (t1 != 0) {
        (((struct o105_uchar *)(a4))->v) = 0x2;
        t0 = 0x105;
    }
    return t0;
}
