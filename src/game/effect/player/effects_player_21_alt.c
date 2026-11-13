/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0bd078-0c0bd4fc) */

struct o105_uchar { char p[0x105]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);

int fx_update_burst_sprites(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0555dc();
    if (t0 == 1) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x2;
    *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x2;
    (((struct o105_uchar *)(a4))->v) = 0x2;
    if ((*(signed char *)((a4 + 0x8))) == 0) {
        t0 = *(signed char *)((a4 + 0x9));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct o5C_float *)(a4))->v) = ((float)t0 / 4.0f);
                if (!(((float)t0 / 4.0f) > 0.0f)) {
                    *(unsigned char *)((a4 + 0x8)) = 0xA;
                }
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
            }
        } else {
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct oEC_ushort *)(a4))->v) = 0x4;
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            }
        }
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            t2 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
            (((struct o4_float *)(t2))->v) = (((((struct o4_float *)(t2))->v)) + ((((struct o28_float *)(t2))->v)));
            t2 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
            (((struct oC_float *)(t2))->v) = (((((struct oC_float *)(t2))->v)) + ((((struct o30_float *)(t2))->v)));
            t2 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
            t1 = (t1 + 0x1);
            (((struct o8_float *)(t2))->v) = (((((struct o8_float *)(t2))->v)) + ((((struct o2C_float *)(t2))->v)));
            t0 = (t0 + 0x4);
            if ((int)t1 >= (int)0xA) {
                break;
            }
        }
        return 0x8;
    }
    return obj_destroy(a4);
}
