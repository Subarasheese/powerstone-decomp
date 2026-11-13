/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0bcfbc-0c0bd078) */

struct o105_uchar { char p[0x105]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);

int fx_update_19(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c0555dc();
    if (t0 == 1) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x2;
    *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x2;
    (((struct o105_uchar *)(a4))->v) = 0x2;
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4);
        }
        t0 = *(signed char *)((a4 + 0x9));
        t1 = t0;
        if (t0 == 0) {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x400);
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.0199999996f);
            (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.0199999996f);
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 60.0f);
            if (!(((float)t0 / 60.0f) > 0.0f)) {
                *(unsigned char *)((a4 + 0x8)) = 0xA;
            }
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
            t1 = 0xEC;
        }
        return t1;
    }
    t0 = *(signed char *)((a4 + 0x9));
    t1 = t0;
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x200);
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.00999999978f);
        (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.00999999978f);
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 60.0f);
        if (!(((float)t0 / 60.0f) > 0.0f)) {
            *(unsigned char *)((a4 + 0x8)) = 0xA;
        }
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
        t1 = 0xEC;
    }
    return t1;
}
