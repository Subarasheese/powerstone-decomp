/* shared fighter code: item pickup, mode enter/update handlers (modes 1..15), hit/knock-back states (0c065cb4-0c06734c) */

int pl_mode15_cls14_f0_phase2(int a4, int a5, int a6, int a7);
int pl_mode15_cls05_07_f1(int a4, int a5, int a6, int a7);
int pl_mode15_cls15_f0(int a4, int a5, int a6, int a7);
int pl_mode15_cls02_f1(int a4);
struct o3C_float { char p[0x3C]; float v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c063428(int);
int FUN_0c0634b4(int);
int pl_step_motion(int);
int FUN_0c09c782(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int);
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c063468(int);
int pl_landed(int);
int obj_set_mode_owner(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int pl_start_motion(int, int, int);
struct o2DC_int { char p[0x2DC]; int v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
int pl_stick_dir_angle(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
struct o7248_short { char p[0x7248]; short v; };
struct o728C_float { char p[0x728C]; float v; };
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int pl_mode15_cls05_07_f1_move(int);
int pl_mode15_cls05_07_f1_land(int);

int pl_mode15_cls15_f1_phase0(int a4);
int pl_mode15_cls15_f1_phase2(int a4);
int pl_mode15_cls14_f1_phase0(int a4);
int pl_mode15_cls14_f1_phase2(int a4);

int pl_mode15_cls11_f0(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        t0 = FUN_0c09c782(a4);
        if ((signed char)t0 != 0) {
            FUN_0c0634b4(a4);
            (((struct o7236_uchar *)(a4))->v) = 0x0;
            (((struct o71CC_uint *)(a4))->v) = 0x0;
        }
        (((struct o3C_float *)(a4))->v) = 0.0f;
        return pl_end_action_choose_state(a4);
    }
    pl_apply_motion_translation(a4);
    t0 = (((struct o719E_short *)(a4))->v);
    if ((unsigned short)t0 == 10) {
        return FUN_0c063428(a4);
    }
    return (unsigned short)t0;
}

int pl_mode15_cls11_f1(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        t0 = FUN_0c09c782(a4);
        if ((signed char)t0 != 0) {
            FUN_0c0634b4(a4);
            (((struct o7236_uchar *)(a4))->v) = 0x0;
            (((struct o71CC_uint *)(a4))->v) = 0x0;
        }
        return pl_end_action_choose_state(a4);
    }
    pl_apply_motion_translation(a4);
    t0 = (((struct o719E_short *)(a4))->v);
    if ((unsigned short)t0 == 10) {
        return FUN_0c063428(a4);
    }
    return (unsigned short)t0;
}


int pl_mode15_cls09_10_12_f0(int a4)
{
    register int t0;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        FUN_0c063428(a4);
    }
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t0 = FUN_0c09c782(a4);
        if ((signed char)t0 != 0) {
            FUN_0c0634b4(a4);
            (((struct o7236_uchar *)(a4))->v) = 0x0;
            (((struct o71CC_uint *)(a4))->v) = 0x0;
        }
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int pl_mode15_cls09_10_12_f1(int a4)
{
    register int t0;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        FUN_0c063428(a4);
    }
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t0 = FUN_0c09c782(a4);
        if ((signed char)t0 != 0) {
            FUN_0c0634b4(a4);
            (((struct o7236_uchar *)(a4))->v) = 0x0;
            (((struct o71CC_uint *)(a4))->v) = 0x0;
        }
        (((struct o3C_float *)(a4))->v) = 0.0f;
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int pl_mode15_cls15_f0_phase0(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    t0 = (((struct o719E_short *)(a4))->v);
    t1 = (unsigned short)t0;
    if ((unsigned short)t0 == 20) {
        FUN_0c063468(a4);
        t0 = *(signed char *)((a4 + 0xC));
        *(unsigned char *)((a4 + 0xC)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_wait_anim_end_d(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}


int pl_mode15_cls15_f1_phase0(int a4)
{
    pl_step_motion(a4);
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 16) {
        FUN_0c063468(a4);
        *(unsigned char *)((a4 + 0xC)) = ((*(signed char *)((a4 + 0xC))) + 0x1);
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int pl_mode15_cls15_f1_phase2(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 == 0) {
        if (!(((((struct o3C_float *)(a4))->v)) > 0.0f)) {
            t0 = pl_landed(a4);
            if ((signed char)t0 != 0) {
                return pl_end_action_choose_state(a4);
            }
        }
        pl_apply_velocity(a4);
        return pl_apply_acceleration(a4);
    }
    return pl_end_action_choose_state(a4);
}

int pl_mode15_cls15_f1(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t1 = FUN_0c09c782(a4);
    if ((signed char)t1 != 0) {
        FUN_0c0634b4(a4);
        (((struct o7236_uchar *)(a4))->v) = 0x0;
        (((struct o71CC_uint *)(a4))->v) = 0x0;
        (((struct o48_float *)(a4))->v) = ((((struct o728C_float *)(a4))->v));
        return pl_end_action_choose_state(a4);
    }
    if (((*(signed char *)((a4 + 0xC))) == 1) && (t0 = (((struct o2DC_int *)(a4))->v), (t0 & 240) != 0)) {
        (((struct o7248_uint *)(a4))->v) = (unsigned short)(((pl_stick_dir_angle(a4)) + (*(short *)0xC7F31E0)) - (*(int *)((a4 + 0x30))));
        if ((((((struct o7248_int *)(a4))->v)) & 0x8000) != 0) {
            (((struct o7248_uint *)(a4))->v) = (((((struct o7248_int *)(a4))->v)) | 0xFFFF0000);
        }
        t0 = (((struct o7248_int *)(a4))->v);
        if (((int)t0 > (int)0x16C) || ((int)t0 < (int)0xFFFFFE94)) {
            if ((int)((((struct o7248_int *)(a4))->v)) > 0) {
                (((struct o7248_uint *)(a4))->v) = 0x16C;
            } else {
                (((struct o7248_uint *)(a4))->v) = 0xFFFFFE94;
            }
            *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + ((((struct o7248_short *)(a4))->v)));
        }
        t0 = 0x16C;
    }
    t1 = *(signed char *)((a4 + 0xC));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                return t1;
            }
            return pl_mode15_cls15_f1_phase2(a4);
        }
        return ((int (*)(int, int, int, int))(0xC06680A))(a4, t0, a6, a7);
    }
    return pl_mode15_cls15_f1_phase0(a4);
}

int pl_mode15_cls05_07_f0(int a4)
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
            obj_set_mode_owner(((((struct o71CC_int *)(a4))->v)), 0x5, (*(signed char *)((a4 + 0x3))));
        }
        return pl_end_action_choose_state(a4);
    }
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 13) {
        obj_set_mode_owner(((((struct o71CC_int *)(a4))->v)), 0xD, (*(signed char *)((a4 + 0x3))));
    }
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 9) {
        t0 = *(signed char *)((a4 + 0xA));
        switch (t0) {
        case 5:
            fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0x8, 0x1, 0x14, 0x43, 0xC14EB34, 0xC14EB40);
            break;
        case 6:
            fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0x8, 0x1, 0x14, 0x43, 0xC14EB4C, 0xC14EB58);
            break;
        case 7:
            fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0x8, 0x1, 0x14, 0x43, 0xC14EB64, 0xC14EB70);
            break;
        case 14:
            fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0x8, 0x1, 0x14, 0x43, 0xC14EB34, 0xC14EB40);
            break;
        }
    }
    return pl_apply_motion_translation(a4);
}


int pl_mode15_cls14_f0_phase1(int a4)
{
    register int t0;
    register int t1;

    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEE;
    if ((int)(short)(t0 - 1) <= 0) {
        pl_start_motion(a4, 0x2, 0x64);
        t0 = *(signed char *)((a4 + 0xC));
        *(unsigned char *)((a4 + 0xC)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}


int pl_mode15_cls14_f1_phase0(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        (((struct oEE_ushort *)(a4))->v) = 0x6;
        t0 = *(signed char *)((a4 + 0xC));
        *(unsigned char *)((a4 + 0xC)) = (t0 + 0x1);
        return (t0 + 0x1);
    }
    t0 = (((struct o719E_short *)(a4))->v);
    if ((unsigned short)t0 == 18) {
        return obj_set_mode_owner(((((struct o71CC_int *)(a4))->v)), 0xD, (*(signed char *)((a4 + 0x3))));
    }
    return (unsigned short)t0;
}

int pl_mode15_cls14_f1_phase2(int a4)
{
    register int t4;
    register int t5;

    pl_step_motion(a4);
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t4 = pl_landed(a4);
        if ((signed char)t4 != 0) {
            t5 = FUN_0c09c782(a4);
            if ((signed char)t5 != 0) {
                FUN_0c0634b4(a4);
                (((struct o7236_uchar *)(a4))->v) = 0x0;
                (((struct o71CC_uint *)(a4))->v) = 0x0;
            } else {
                obj_set_mode_owner(((((struct o71CC_int *)(a4))->v)), 0x5, (*(signed char *)((a4 + 0x3))));
            }
            return pl_end_action_choose_state(a4);
        }
        return (signed char)t4;
    }
    return 0x3C;
}

int pl_mode15_cls14_f1(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return pl_mode15_cls14_f1_phase2(a4);
        }
        return ((int (*)(int, int, int, int))(0xC066DC8))(a4, a5, a6, a7);
    }
    return pl_mode15_cls14_f1_phase0(a4);
}
