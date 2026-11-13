/* Garuda state helpers (sub-step switches) (0c07d90c-0c07dd0c) */

int pl_step_motion_owner(int);
int pl_apply_motion_translation(int);
int pl_change_state(int, int, int, int);
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int pl_start_motion_owner(int, int, int);

int pl_garuda_victim_phase7(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_change_state(a4, 0xF, 0x1, a7);
    }
    pl_step_motion_owner(a4);
    pl_apply_motion_translation(a4);
    t0 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t1 = *(signed char *)((a4 + 0xC));
        *(unsigned char *)((a4 + 0xC)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int pl_garuda_victim_phase9(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0xC));
    if ((t0 != 0) && (t0 != 1)) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    return t0;
                }
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    return pl_change_state(a4, 0xF, 0x0, a7);
                }
                return 0xEC;
            }
            pl_step_motion_owner(a4);
            pl_apply_motion_translation(a4);
            t0 = 0x71AA;
            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                (((struct oEC_ushort *)(a4))->v) = 0x3C;
                t1 = *(signed char *)((a4 + 0xC));
                *(unsigned char *)((a4 + 0xC)) = (t1 + 0x1);
                t0 = (t1 + 0x1);
            }
            return t0;
        }
        pl_step_motion_owner(a4);
        pl_apply_motion_translation(a4);
        t0 = 0x71AA;
        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
            pl_start_motion_owner(a4, 0x2, 0x63);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            t1 = *(signed char *)((a4 + 0xC));
            *(unsigned char *)((a4 + 0xC)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
        return t0;
    }
    pl_step_motion_owner(a4);
    return (pl_apply_motion_translation(a4));
}
