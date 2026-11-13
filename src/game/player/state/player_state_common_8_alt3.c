/* shared fighter code: item pickup, mode enter/update handlers (modes 1..15), hit/knock-back states (0c065cb4-0c06734c) */

struct o3C_float { char p[0x3C]; float v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
int FUN_0c0634b4(int);
int pl_step_motion(int);
int FUN_0c09c782(int);
int pl_end_action_choose_state(int);
int obj_set_mode_owner(int, int);
struct o2DC_int { char p[0x2DC]; int v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int pl_start_motion(int, int, int);
struct o0_float { float v; };
struct o38_float { char p[0x38]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int pl_apply_motion_translation(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int pl_apply_velocity(int);
int pl_landed(int);
int pl_change_state(int, int, int);

int pl_mode15_cls08_f1(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        t0 = FUN_0c09c782(a4);
        if ((signed char)t0 != 0) {
            FUN_0c0634b4(a4);
            (((struct o7236_uchar *)(a4))->v) = 0x0;
            (((struct o71CC_uint *)(a4))->v) = 0x0;
        } else {
            *(volatile signed char *)((a4 + 0x3));
            obj_set_mode_owner(((((struct o71CC_int *)(a4))->v)), 0x5);
        }
        (((struct o3C_float *)(a4))->v) = 0.0f;
        return pl_end_action_choose_state(a4);
    }
    return ((int (*)(void))(0xC0662F4))();
}

int pl_mode15_cls15_f0_phase1(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if (((((struct oF0_short *)(a4))->v)) == 0) {
        t0 = *(signed char *)((a4 + 0x71F1));
        if (t0 != 0) {
            t1 = 0x71F1;
            if ((signed char)t0 != 0) {
                t0 = 0x71F4;
                if (((((struct o71F4_short *)(a4))->v)) != 0) {
                    t2 = 0x2DC;
                    if ((((((struct o2DC_int *)(a4))->v)) & 0x600) == 0) {
                        *(volatile signed char *)((a4 + 0x3));
                        obj_set_mode_owner(((((struct o71CC_int *)(a4))->v)), 0x5);
                        pl_start_motion(a4, 0x2, 0x78);
                        t3 = *(signed char *)((a4 + 0xC));
                        *(unsigned char *)((a4 + 0xC)) = (t3 + 0x1);
                        t2 = (t3 + 0x1);
                    }
                    t0 = t2;
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            t1 = 0x2DC;
            if ((((((struct o2DC_int *)(a4))->v)) & 0x600) == 0) {
                *(volatile signed char *)((a4 + 0x3));
                obj_set_mode_owner(((((struct o71CC_int *)(a4))->v)), 0x5);
                pl_start_motion(a4, 0x2, 0x78);
                t2 = *(signed char *)((a4 + 0xC));
                *(unsigned char *)((a4 + 0xC)) = (t2 + 0x1);
                t1 = (t2 + 0x1);
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
        t1 = 0xF0;
    }
    return t1;
}

int pl_mode15_cls05_07_f1_move(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEE;
    if ((short)(t0 - 1) == 0) {
        *(volatile signed char *)((a4 + 0x3));
        obj_set_mode_owner(((((struct o71CC_int *)(a4))->v)), 0xD);
        (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC066BF4)->v));
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct oC_float *)0xC066BF4)->v)));
        (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct oC_float *)0xC066BF4)->v)));
        t0 = *(signed char *)((a4 + 0xC));
        *(unsigned char *)((a4 + 0xC)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_mode15_cls05_07_f1_land(int a4)
{
    register int t3;
    register int t4;

    pl_step_motion(a4);
    pl_apply_velocity(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t3 = pl_landed(a4);
        if ((signed char)t3 != 0) {
            t4 = FUN_0c09c782(a4);
            if ((signed char)t4 != 0) {
                FUN_0c0634b4(a4);
                (((struct o7236_uchar *)(a4))->v) = 0x0;
                (((struct o71CC_uint *)(a4))->v) = 0x0;
            } else {
                *(volatile signed char *)((a4 + 0x3));
                obj_set_mode_owner(((((struct o71CC_int *)(a4))->v)), 0x5);
            }
            return pl_change_state(a4, 0x6, 0x0);
        }
        return (signed char)t3;
    }
    return 0x3C;
}

int pl_mode15_cls14_f0_phase0(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        *(volatile signed char *)((a4 + 0x3));
        obj_set_mode_owner(((((struct o71CC_int *)(a4))->v)), 0xD);
        (((struct oEE_ushort *)(a4))->v) = 0x14;
        t0 = *(signed char *)((a4 + 0xC));
        *(unsigned char *)((a4 + 0xC)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
