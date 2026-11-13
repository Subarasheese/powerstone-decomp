/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0bfecc-0c0c033c) */

struct o105_uchar { char p[0x105]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);
int FUN_0c06231c(int, int, int);

int FUN_0c0c00aa(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c0555dc();
    if (t0 == 1) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    t0 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BA));
    if ((t0 != 11) && (t0 != 28)) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x2;
    *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x2;
    (((struct o105_uchar *)(a4))->v) = 0x2;
    if ((*(signed char *)((a4 + 0x8))) != 0) {
        return obj_destroy(a4);
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0xF));
            t2 = t1;
            if (t1 != 1) {
            } else {
                t1 = (((struct o2E0_int *)(a4))->v);
                *(unsigned int *)((t1 + 0x18)) = ((*(int *)((t1 + 0x18))) + 0xE38);
                t1 = (((struct o2E4_int *)(a4))->v);
                *(unsigned int *)((t1 + 0x18)) = ((*(int *)((t1 + 0x18))) - 0xE38);
                t1 = *(signed char *)((a4 + 0x9));
                *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            t1 = t2;
        } else {
            if (t0 == 2) {
                t2 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0xF));
                t3 = t2;
                if (t2 == 2) {
                    (((struct oEC_ushort *)(a4))->v) = 0x4;
                    t2 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                    t3 = (t2 + 0x1);
                }
                t2 = t3;
            } else {
                t3 = t0;
                if (t0 == 3) {
                    (((struct o44_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 4.0f);
                    (((struct o48_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 4.0f);
                    (((struct o4C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 4.0f);
                    (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 4.0f);
                    (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 4.0f);
                    t0 = (((struct oEC_short *)(a4))->v);
                    (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 4.0f);
                    if (!(((float)t0 / 4.0f) > 0.0f)) {
                        t0 = (((struct o2E0_int *)(a4))->v);
                        (((struct o4C_float *)(t0))->v) = 0.0f;
                        (((struct o48_float *)(t0))->v) = 0.0f;
                        (((struct o44_float *)(t0))->v) = 0.0f;
                        t0 = (((struct o2E4_int *)(a4))->v);
                        (((struct o4C_float *)(t0))->v) = 0.0f;
                        (((struct o48_float *)(t0))->v) = 0.0f;
                        (((struct o44_float *)(t0))->v) = 0.0f;
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    }
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    t3 = 0xEC;
                }
                t2 = t3;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t1 + 0x14)) = ((*(int *)((t1 + 0x14))) - 0x3CA);
        t1 = (((struct o2E4_int *)(a4))->v);
        *(unsigned int *)((t1 + 0x14)) = ((*(int *)((t1 + 0x14))) + 0x3CA);
        (((struct o44_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 15.0f);
        (((struct o48_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 15.0f);
        (((struct o4C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 15.0f);
        (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 15.0f);
        (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 15.0f);
        t1 = (((struct oEC_short *)(a4))->v);
        (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t1 / 15.0f);
        if (!(1.0f > ((float)t1 / 15.0f))) {
            t1 = (((struct o2E0_int *)(a4))->v);
            (((struct o4C_float *)(t1))->v) = 1.0f;
            (((struct o48_float *)(t1))->v) = 1.0f;
            (((struct o44_float *)(t1))->v) = 1.0f;
            t1 = (((struct o2E4_int *)(a4))->v);
            (((struct o4C_float *)(t1))->v) = 1.0f;
            (((struct o48_float *)(t1))->v) = 1.0f;
            (((struct o44_float *)(t1))->v) = 1.0f;
            t1 = *(signed char *)((a4 + 0x3));
            FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), 0x15);
            t1 = *(signed char *)((a4 + 0x3));
            FUN_0c06231c(((((struct o2E4_int *)(a4))->v)), ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), 0x15);
            t1 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t1 + 0x14)) = ((*(int *)((t1 + 0x14))) + 0x2AAA);
            t1 = (((struct o2E4_int *)(a4))->v);
            *(unsigned int *)((t1 + 0x14)) = ((*(int *)((t1 + 0x14))) - 0x2AAA);
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        }
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        t0 = 0xEC;
    }
    return t0;
}
