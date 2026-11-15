/* Straight-line functions with calls and guards (batch gen_ec): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2DC_int { char p[0x2DC]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o7223_uchar { char p[0x7223]; unsigned char v; };
struct o7248_short { char p[0x7248]; short v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int pl_kraken_attack_kind4(int, int, int, int);
int FUN_0c0c6094(int, int);
int pl_angle_to_target_pos(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int);
int pl_kraken_attack_kind2(int);
int pl_kraken_attack_kind3(int, int, int, int);
int pl_kraken_attack_kind5(int, int, int, int);
int pl_kraken_attack_kind6(int);
int pl_kraken_attack_kind78(int, int, int, int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_stick_dir_angle(int);
int snd_play_char_voice(int, int);
int pl_kraken_attack_kind1_phase0(int a4);
int pl_kraken_attack_kind1_phase1(int a4);
int pl_kraken_attack_dispatch(int a4, int a5, int a6, int a7);
int pl_kraken_attack_kind1(int a4);
int pl_kraken_attack_kind1_phase2(int a4);
int pl_kraken_attack_kind1_phase3(int a4);

int pl_kraken_attack_kind1_phase0(int a4)
{
    register int t0;

    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_start_motion(a4, 0x1, 0x64);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
        t0 = ((pl_stick_dir_angle(a4)) + (*(short *)0xC7F31E0));
    } else {
        t0 = (pl_angle_to_target_pos(a4));
    }
    (((struct o7248_uint *)(a4))->v) = (unsigned short)t0;
    t0 = (((struct o71F4_short *)(a4))->v);
    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t0 - 288.0f);
    if ((int)(short)(int)((float)t0 - 288.0f) < 0) {
        (((struct o71F4_ushort *)(a4))->v) = 0x0;
    }
    (((struct oEC_ushort *)(a4))->v) = 0x15;
    return pl_kraken_attack_kind1_phase1(a4);
}

int pl_kraken_attack_kind1_phase1(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        snd_play_char_voice(a4, 0x36);
        FUN_0c0c6094(a4, 0x0);
    } else {
        t0 = *(int *)((a4 + 0x30));
        t1 = (((struct o7248_short *)(a4))->v);
        t2 = *(int *)((a4 + 0x30));
        t3 = (unsigned short)(t1 - t0);
        if ((0x8000 & (unsigned short)(t1 - t0)) != 0) {
            t3 = ((unsigned short)(t1 - t0) | 0xFFFF0000);
        }
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)(t2 + ((int)((int)t3 / (int)((((struct oEC_short *)(a4))->v)))));
    }
    return pl_step_motion(a4);
}

int pl_kraken_attack_dispatch(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x7223));
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    if (t0 != 5) {
                        if (t0 != 6) {
                            if ((t0 != 7) && (t0 != 8)) {
                                return t0;
                            }
                            return pl_kraken_attack_kind78(a4, a5, a6, a7);
                        }
                        return pl_kraken_attack_kind6(a4);
                    }
                    return pl_kraken_attack_kind5(a4, a5, a6, a7);
                }
                return pl_kraken_attack_kind4(a4, a5, a6, a7);
            }
            return pl_kraken_attack_kind3(a4, a5, a6, a7);
        }
        return pl_kraken_attack_kind2(a4);
    }
    return pl_kraken_attack_kind1(a4);
}

int pl_kraken_attack_kind1(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return pl_kraken_attack_kind1_phase3(a4);
            }
            return pl_kraken_attack_kind1_phase2(a4);
        }
        return pl_kraken_attack_kind1_phase1(a4);
    }
    return pl_kraken_attack_kind1_phase0(a4);
}

int pl_kraken_attack_kind1_phase2(int a4)
{
    register int t4;
    register int t3;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t4 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t3 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t3 + 0x1);
        t4 = (t3 + 0x1);
    }
    return t4;
}

int pl_kraken_attack_kind1_phase3(int a4)
{
    (((struct o7223_uchar *)(a4))->v) = 0x0;
    return pl_end_action_choose_state(a4);
}
