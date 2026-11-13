/* short-lived effect objects spawned with position/angle/slot arguments (hit sparks etc) (0c0b6f5c-0c0b7150) */

struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_destroy(int);
int obj_set_record(int, int);
int fx_calc_orbit_position(int, int, float);
int FUN_0c0e21b0(int, int);

int fx_update_06(int a4, float f4)
{
    int t0;
    register int t1;
    register int t2;

    t2 = *(int *)((a4 + 0x1C));
    if ((*(signed char *)((t2 + 0x10B))) == 0) {
        fx_calc_orbit_position(a4, t2, f4);
        if ((*(signed char *)((a4 + 0x8))) == 0) {
            t2 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t2 + 0x1);
            if (((int)(short)(t2 + 0x1) < (int)0xE) && (t0 = *(int *)((a4 + 0x1C)), t1 = *(signed char *)((t0 + 0x7236)), t1 != 0)) {
                if ((*(signed char *)((a4 + 0x108))) != 0) {
                    t0 = (((struct oEE_short *)(a4))->v);
                    if (t0 != 0) {
                        if (t0 != 1) {
                            t0 = *(signed char *)((a4 + 0x8));
                            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                            return (t0 + 0x1);
                        }
                        obj_set_record(a4, 0xC);
                    } else {
                        obj_set_record(a4, 0xB);
                    }
                    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                    return FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
                }
                return FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
            }
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            return (t0 + 0x1);
        }
        return obj_destroy(a4);
    }
    return 0x10B;
}
