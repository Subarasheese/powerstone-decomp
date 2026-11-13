/* Straight-line functions with calls and guards (batch gen_bc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2DC_int { char p[0x2DC]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_short { char p[0x7248]; short v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c06336c(int);
int FUN_0c0634b4(int);
int FUN_0c09c782(int);
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int obj_set_mode_owner(int, int, int);
int pl_apply_motion_translation(int);
int pl_apply_velocity(int);
int pl_end_action_choose_state(int);
int pl_mode15_cls15_f0_phase0(int);
int pl_mode15_cls15_f0_phase1(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_stick_dir_angle(int);
int pl_wait_anim_end_d(int);
int snd_play_char_voice(int, int);
int pl_mode15_cls15_f0(int a4);
int pl_mode15_cls08_f1(int a4);
int FUN_0c064056(int a4, int a5, int a6, int a7);
int pl_mode15_cls14_f0_phase2(int a4);

int pl_mode15_cls15_f0(int a4)
{
    int t0;
    register int t1;

    t1 = FUN_0c09c782(a4);
    if ((signed char)t1 != 0) {
        FUN_0c0634b4(a4);
        (((struct o7236_uchar *)(a4))->v) = 0x0;
        (((struct o71CC_uint *)(a4))->v) = 0x0;
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
    }
    t0 = *(signed char *)((a4 + 0xC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return pl_wait_anim_end_d(a4);
        }
        return pl_mode15_cls15_f0_phase1(a4);
    }
    return pl_mode15_cls15_f0_phase0(a4);
}

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
            obj_set_mode_owner(((((struct o71CC_int *)(a4))->v)), 0x5, (*(signed char *)((a4 + 0x3))));
        }
        (((struct o3C_float *)(a4))->v) = 0.0f;
        return pl_end_action_choose_state(a4);
    }
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 20) {
        obj_set_mode_owner(((((struct o71CC_int *)(a4))->v)), 0xD, (*(signed char *)((a4 + 0x3))));
    }
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 12) {
        fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0x8, 0x1, 0xD, 0x43, 0xC14EB7C, 0xC14EB88);
    }
    return pl_apply_motion_translation(a4);
}

int FUN_0c064056(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            FUN_0c06336c(a4);
            snd_play_char_voice(a4, 0x9);
        }
        pl_apply_velocity(a4);
        t0 = pl_step_motion(a4);
        if ((signed char)t0 != 0) {
            return pl_end_action_choose_state(a4);
        }
        return (signed char)t0;
    }
    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x1, 0x9A);
        (((struct o710B_uchar *)(a4))->v) = 0x1;
        (((struct o710C_uchar *)(a4))->v) = 0x1;
        (((struct oEC_ushort *)(a4))->v) = 0x6;
        (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.08163261f);
        (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.08163261f);
        (((struct o3C_float *)(a4))->v) = 0.0f;
        t0 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_mode15_cls14_f0_phase2(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        t1 = FUN_0c09c782(a4);
        if ((signed char)t1 != 0) {
            FUN_0c0634b4(a4);
            (((struct o7236_uchar *)(a4))->v) = 0x0;
            (((struct o71CC_uint *)(a4))->v) = 0x0;
        } else {
            obj_set_mode_owner(((((struct o71CC_int *)(a4))->v)), 0x5, (*(signed char *)((a4 + 0x3))));
        }
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}
