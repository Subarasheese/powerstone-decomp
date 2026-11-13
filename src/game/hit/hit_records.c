/* INLINE-ASM: getfr15 */
/* attack records, hit data setup, hit-stop shake, combo counter, damage helpers (0c08d644-0c09111e) */

/* named globals (symbols.txt) */
int pl_hitreact_01_phase1(int a4);
int FUN_0c08dc24(int a4, int a5);
int FUN_0c0906e6(int a4);
int FUN_0c08e704(int a4, int a5, int a6, int a7);
extern char g_attack_record_tab[];
extern char g_hit_reaction_tab[];
struct o7228_ushort { char p[0x7228]; unsigned short v; };
int fx_spawn_hit_effect_set(int, int);
struct o38_float { char p[0x38]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o7205_uchar { char p[0x7205]; unsigned char v; };
struct oF8_int { char p[0xF8]; int v; };
int pl_start_motion(int, int, int);
int pl_vib_start_preset(int, int);
int cam_set_shake_ramp(int, int);
int math_atan_angle16(float);
struct o720E_uchar { char p[0x720E]; unsigned char v; };
struct o100_uchar { char p[0x100]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o10A_uchar { char p[0x10A]; unsigned char v; };
struct o10B_uchar { char p[0x10B]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BB_uchar { char p[0x71BB]; unsigned char v; };
struct o71BD_uchar { char p[0x71BD]; unsigned char v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71D6_short { char p[0x71D6]; short v; };
struct o71DC_uchar { char p[0x71DC]; unsigned char v; };
struct o71DD_uchar { char p[0x71DD]; unsigned char v; };
struct o71DE_uchar { char p[0x71DE]; unsigned char v; };
struct o7211_uchar { char p[0x7211]; unsigned char v; };
struct o7212_uchar { char p[0x7212]; unsigned char v; };
struct o7213_uchar { char p[0x7213]; unsigned char v; };
struct o7226_uchar { char p[0x7226]; unsigned char v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o7294_uint { char p[0x7294]; unsigned int v; };
struct o72A8_uint { char p[0x72A8]; unsigned int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
struct oFC_int { char p[0xFC]; int v; };
int FUN_0c0555c4(void);
int FUN_0c08dfa4(void);
int FUN_0c09c51e(int);
int math_angle_between_points_xz(int, int);
int pl_change_state(int, int, int, int);
int FUN_0c0a3762(int, int);
int snd_play_char_voice(int, int);
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o315_uchar { char p[0x315]; unsigned char v; };
int obj_set_mode_owner(int, int, int);
int obj_can_interact(int, int, int);
struct o274_float { char p[0x274]; float v; };
struct o7214_uchar { char p[0x7214]; unsigned char v; };
struct o7294_int { char p[0x7294]; int v; };
struct o72A8_int { char p[0x72A8]; int v; };
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
int thunk_FUN_0c062242(int);
struct o7225_uchar { char p[0x7225]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o7240_uchar { char p[0x7240]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int fx_spawn_043bdc(int);
int snd_play_side_se(int, int);
int fx_spawn_0485f8(int a4);
int FUN_0c0a3f30(int);
struct o7118_float { char p[0x7118]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
int nlCalcVector(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o7231_uchar { char p[0x7231]; unsigned char v; };
struct o72A8_short { char p[0x72A8]; short v; };
int snd_spawn_delayed_sound(int, int, int);
int FUN_0c05cb42(int, int, int);
int pl_angle_to_opponent(int);
int FUN_0c0e6fe8(void);
struct o7248_int { char p[0x7248]; int v; };
int FUN_0c09cee4(int);
int FUN_0c09d818(int, int);
int pl_apply_velocity(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
struct o2DC_int { char p[0x2DC]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o71E4_float { char p[0x71E4]; float v; };
struct o71E8_float { char p[0x71E8]; float v; };
struct o72A4_short { char p[0x72A4]; short v; };
struct o72A4_ushort { char p[0x72A4]; unsigned short v; };
struct o72AC_uchar { char p[0x72AC]; unsigned char v; };
int sys_return_zero_098c82(void);
struct o7198_short { char p[0x7198]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
int pl_start_knockback_reaction(int);
int FUN_0c08f6c8(int);
int pl_step_motion(int);
int FUN_0c09c45a(int);
int pl_landed(int);
float math_signed_sqrt(float);
int FUN_0c08ee66(int);
int pl_hitreact_01_phase0(int);
int pl_hitreact_01_phase2(int);
struct o106_uchar { char p[0x106]; unsigned char v; };
int pl_mash_reduce_counter(int, int);
int pl_end_action_choose_state(int);

int FUN_0c08d644(int a4, int a5);
int FUN_0c08d662(int a4);
int pl_inc_owner_combo(int a4, int a5);
int FUN_0c08dacc(int a4, int a5);
int FUN_0c08e382(int a4);
int FUN_0c08e3bc(int a4, int a5);
int FUN_0c08e3f2(int a4, int a5);
int pl_update_hitstop_shake(int a4);
int pl_hitreact_escape_input(int a4);
int FUN_0c08f76a(void);
int pl_hitreact_01_phase1(int a4);

#pragma inline_asm(getfr15)
static int getfr15(void)
{
    ftrc fr15,fpul
    sts fpul,r0
}

int FUN_0c08d644(int a4, int a5)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)(((int)stk + 0));
    if ((unsigned char)t0 != 99) {
        return fx_spawn_hit_effect_set(a4, (*(signed char *)(((int)stk + 0))));
    }
    return (unsigned char)t0;
}

int FUN_0c08d65c(int a4, int a5)
{
    return (signed char)a5;
}

int FUN_0c08d662(int a4)
{
    int t6;
    register int t9;

    if (((((struct o38_float *)(a4))->v)) == 0.0f) {
        (((struct o38_float *)(a4))->v) = (*(float *)0xC08D6DC);
    }
    t6 = math_atan_angle16(((-((((struct o40_float *)(a4))->v))) / ((((struct o38_float *)(a4))->v))));
    t9 = (0xFFFF & t6);
    if (0.0f > ((((struct o38_float *)(a4))->v))) {
        t9 = ((0xFFFF & t6) + 0x8000);
    }
    return (unsigned short)(t9 + 0x4000);
}

int pl_inc_owner_combo(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x4));
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 7) {
        t0 = *(int *)((a4 + 0x1C));
        t2 = *(signed char *)((t0 + 0x720E));
        (((struct o720E_uchar *)(t0))->v) = (t2 + 0x1);
        if ((int)(signed char)(t2 + 0x1) > (int)0x63) {
            (((struct o720E_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x63;
        }
        t1 = 0x720E;
    }
    return t1;
}

int FUN_0c08d6ec(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t0;
    register int t45;
    register int t129;
    register int t151;
    register int t130;
    register int t133;
    register int t141;
    register int t16;
    register int t17;
    int t18;
    register int t19;
    register int t178;
    register int t105;
    register int t158;
    register int t159;
    register int t160;
    int t161;

    t0 = (((struct oF4_int *)(a4))->v);
    (((struct oF8_uint *)(a5))->v) = t0;
    if (t0 == 0) {
        (((struct oF8_uint *)(a5))->v) = (*(int *)g_attack_record_tab);
    }
    (((struct o71DC_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x103)));
    (((struct o71BD_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x100)));
    *(unsigned char *)((a5 + 0x1)) = 0x1;
    (((struct o108_uchar *)(a4))->v) = 0x1;
    (((struct o10A_uchar *)(a5))->v) = 0x1;
    (((struct o7294_uint *)(a5))->v) = ((((struct oFC_int *)(a5))->v));
    if ((unsigned char)(*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0x5))) == 2) {
        (((struct o108_uchar *)(((unsigned short)((unsigned short)((*(signed char *)((a4 + 0x3))) & 0x1) * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = 0x1;
    }
    if ((((((struct o71CC_int *)(a5))->v)) != 0) && ((t16 = (((struct o71CC_int *)(a5))->v), t17 = *(signed char *)((t16 + 0x4)), t17 == 6) && (t18 = (((struct o71CC_int *)(a5))->v), t19 = *(signed char *)((0x30C + t18)), t19 == 11))) {
        (((struct o10B_uchar *)(a4))->v) = (*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0x2)));
        (((struct o108_uchar *)(a4))->v) = 0x0;
        if ((unsigned char)(*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0x5))) == 2) {
            (((struct o108_uchar *)((0xC7E40C4 + (unsigned short)((unsigned short)((*(signed char *)((a4 + 0x3))) & 0x1) * (unsigned short)0x72D0))))->v) = 0x0;
        }
        if ((int)(*(signed char *)((a5 + 0x7212))) < (int)0x20) {
            (((struct o72A8_uint *)(a5))->v) = (*(int *)((a4 + 0x30)));
        } else {
            (((struct o72A8_uint *)(a5))->v) = (FUN_0c08d662(a4));
            (((struct o7212_uchar *)(a5))->v) = ((*(signed char *)((a5 + 0x7212))) - 32);
        }
        FUN_0c08d644(a5, (*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0xF))));
        t178 = (pl_change_state(a5, 0x9, 0x0, 0x0));
    } else {
        t45 = *(signed char *)((((((struct oF8_int *)(a5))->v)) + 0x2));
        (((struct o10B_uchar *)(a4))->v) = t45;
        (((struct o10B_uchar *)(a5))->v) = t45;
        if ((unsigned char)(*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0x5))) == 2) {
            (((struct o10B_uchar *)(((unsigned short)((unsigned short)((*(signed char *)((a4 + 0x3))) & 0x1) * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = (*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0x2)));
        }
        (((struct o7211_uchar *)(a5))->v) = (*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0xD)));
        (((struct o7212_uchar *)(a5))->v) = (*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0xE)));
        (((struct o7213_uchar *)(a5))->v) = (*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0xC)));
        if ((*(signed char *)((a5 + 0x7212))) == 64) {
            (((struct o7212_uchar *)(a5))->v) = 0x0;
            *(float *)(((int)stk + 8)) = 0.0f;
            *(float *)(((int)stk + 4)) = 0.0f;
            *(float *)(((int)stk + 0)) = 0.0f;
            (((struct o72A8_uint *)(a5))->v) = (math_angle_between_points_xz((a5 + 0x20), ((int)stk + 0)));
        } else {
            if ((*(signed char *)((a5 + 0x7212))) == 65) {
                (((struct o7212_uchar *)(a5))->v) = 0x0;
                (((struct o72A8_uint *)(a5))->v) = (math_angle_between_points_xz((a4 + 0x20), (a5 + 0x20)));
            } else {
                if ((*(signed char *)((a5 + 0x7212))) == 66) {
                    (((struct o7212_uchar *)(a5))->v) = 0x0;
                    (((struct o72A8_uint *)(a5))->v) = (math_angle_between_points_xz((((unsigned short)((unsigned short)((-(*(signed char *)((a5 + 0x3)))) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20), (a5 + 0x20)));
                } else {
                    if ((int)(*(signed char *)((a5 + 0x7212))) < (int)0x20) {
                        (((struct o72A8_uint *)(a5))->v) = (*(int *)((a4 + 0x30)));
                        t105 = a5;
                    } else {
                        (((struct o72A8_uint *)(a5))->v) = (FUN_0c08d662(a4));
                        (((struct o7212_uchar *)(a5))->v) = ((*(signed char *)((a5 + 0x7212))) - 32);
                    }
                }
            }
        }
        if ((*(signed char *)((a5 + 0x4))) != 10) {
            pl_inc_owner_combo(a5, t105);
        }
        FUN_0c08d644(a5, (*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0xF))));
        if ((unsigned char)(*(signed char *)((0x12 + ((((struct oF8_int *)(a5))->v))))) != 99) {
            FUN_0c0a3762((*(signed char *)((a5 + 0x3))), (*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0x12))));
        }
        if ((*(signed char *)((a5 + 0x4))) == 10) {
            t129 = FUN_0c0555c4();
            t151 = t129;
            if (t129 != 0) {
                t130 = (((struct o71D6_short *)(a5))->v);
                FUN_0c08dfa4();
                if ((int)((((struct o71D4_short *)(a5))->v)) >= 0) {
                    (((struct o7226_uchar *)(a5))->v) = 0x40;
                    (((struct o7228_ushort *)(a5))->v) = 0x4;
                    t133 = 0x0;
                    for (;;) {
                        if ((*(short *)((0xC1507C8 + (t133 << 1)))) == 0) {
                            return (t133 << 1);
                        }
                        t141 = *(short *)((0xC1507C8 + (t133 << 1)));
                        if (((int)((((struct o71D6_short *)(a5))->v)) <= (int)t141) && ((int)(short)t130 > (int)t141)) {
                            break;
                        }
                        t133 = (t133 + 0x1);
                    }
                    *(unsigned char *)((a5 + 0x9)) = 0x1;
                    *(unsigned char *)((a5 + 0xA)) = 0x0;
                    *(unsigned char *)((a5 + 0xD)) = 0x0;
                    *(unsigned char *)((a5 + 0xC)) = 0x0;
                    *(unsigned char *)((a5 + 0xB)) = 0x0;
                    (((struct o71BB_uchar *)(a5))->v) = (*(signed char *)((a5 + 0x71BA)));
                    (((struct o71BA_uchar *)(a5))->v) = 0x1B;
                    snd_play_char_voice(a5, (t133 + 0x7));
                    t151 = (pl_vib_start_preset(a5, 0x5));
                } else {
                    *(unsigned char *)((a5 + 0x9)) = 0x1;
                    *(unsigned char *)((a5 + 0xA)) = 0x0;
                    *(unsigned char *)((a5 + 0xD)) = 0x0;
                    *(unsigned char *)((a5 + 0xC)) = 0x0;
                    *(unsigned char *)((a5 + 0xB)) = 0x0;
                    (((struct o71BB_uchar *)(a5))->v) = (*(signed char *)((a5 + 0x71BA)));
                    (((struct o71BA_uchar *)(a5))->v) = 0x1B;
                    t151 = (pl_vib_start_preset(a5, 0x5));
                }
            }
            t178 = t151;
        } else {
            FUN_0c08dfa4();
            if ((((unsigned char)(*(signed char *)((0x10 + ((((struct oF8_int *)(a5))->v))))) & 0x20) != 32) && (((t158 = *(signed char *)((a5 + 0x71F3)), t158 != 0) || (t159 = *(signed char *)((a5 + 0x7230)), (int)t159 >= (int)0x3)) && ((t160 = *(signed char *)((a5 + 0x71DD)), t160 != 23) && (t161 = (((struct o71D4_short *)(a5))->v), (int)t161 >= 0)))) {
                t178 = (FUN_0c09c51e(a5));
            } else {
                (((struct o7236_uchar *)(a5))->v) = 0x0;
                (((struct o71DE_uchar *)(a5))->v) = (*(signed char *)((a5 + 0x71DD)));
                (((struct o71DD_uchar *)(a5))->v) = (*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0x0)));
                *(unsigned char *)((a5 + 0x9)) = 0x1;
                *(unsigned char *)((a5 + 0xA)) = 0x0;
                *(unsigned char *)((a5 + 0xD)) = 0x0;
                *(unsigned char *)((a5 + 0xC)) = 0x0;
                *(unsigned char *)((a5 + 0xB)) = 0x0;
                (((struct o71BB_uchar *)(a5))->v) = (*(signed char *)((a5 + 0x71BA)));
                (((struct o71BA_uchar *)(a5))->v) = 0x1B;
                (((struct o100_uchar *)(a5))->v) = 0x0;
                t178 = 0x100;
            }
        }
    }
    return t178;
}

int FUN_0c08dacc(int a4, int a5)
{
    (((struct oF8_uint *)(a4))->v) = (((((unsigned char)a5 << 2) + (unsigned char)a5) << 2) + (*(int *)(((((int)g_attack_record_tab) + ((*(signed char *)((0xC7E40C8 + (unsigned short)((unsigned short)((-(*(signed char *)((a4 + 0x3)))) + 0x1) * (unsigned short)0x72D0)))) << 2)) + 0x0))));
    (((struct o71BD_uchar *)(a4))->v) = a5;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    (((struct o10A_uchar *)(a4))->v) = 0x1;
    (((struct o7294_uint *)(a4))->v) = (*(int *)((a4 + 0x1C)));
    (((struct o10B_uchar *)(a4))->v) = (*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x2)));
    (((struct o71DE_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71DD)));
    (((struct o71DD_uchar *)(a4))->v) = (*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x0)));
    (((struct o7211_uchar *)(a4))->v) = (*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0xD)));
    (((struct o7212_uchar *)(a4))->v) = (*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0xE)));
    (((struct o7213_uchar *)(a4))->v) = (*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0xC)));
    (((struct o72A8_uint *)(a4))->v) = (*(int *)((a4 + 0x30)));
    (((struct o7236_uchar *)(a4))->v) = 0x0;
    if ((*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x1))) != 0) {
        pl_inc_owner_combo(a4, a5);
    }
    if ((unsigned char)(*(signed char *)((0x12 + ((((struct oF8_int *)(a4))->v))))) != 99) {
        FUN_0c0a3762((*(signed char *)((a4 + 0x3))), (*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x12))));
    }
    FUN_0c08dfa4();
    *(unsigned char *)((a4 + 0x9)) = 0x1;
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    *(unsigned char *)((a4 + 0xD)) = 0x0;
    *(unsigned char *)((a4 + 0xC)) = 0x0;
    *(unsigned char *)((a4 + 0xB)) = 0x0;
    (((struct o71BB_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71BA)));
    (((struct o71BA_uchar *)(a4))->v) = 0x1B;
    (((struct o100_uchar *)(a4))->v) = 0x0;
    return 0x100;
}

int FUN_0c08dbc8(int a4, int a5)
{
    register int t0;

    t0 = (((struct oF4_int *)(a4))->v);
    (((struct oF8_uint *)(a5))->v) = t0;
    if (t0 == 0) {
        (((struct oF8_uint *)(a5))->v) = (*(int *)g_attack_record_tab);
    }
    (((struct o10A_uchar *)(a5))->v) = 0x1;
    (((struct o108_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)((((((struct oF8_int *)(a5))->v)) + 0x2));
    (((struct o10B_uchar *)(a5))->v) = t0;
    (((struct o10B_uchar *)(a4))->v) = t0;
    return t0;
}


int FUN_0c08de3a(int a4, int a5)
{
    int stk[7];
    register int t13;
    register int t5;
    register int t8;

    t13 = 0x0;
    if (((((struct o274_float *)((*(int *)((a4 + 0x1C)))))->v)) > 0.0f) {
        FUN_0c08dacc((*(int *)((a4 + 0x1C))), a5);
        t5 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0xC60));
        t8 = *(int *)((a4 + 0x1C));
        *(unsigned int *)(((int)stk + 0)) = t8;
        fx_spawn_hit_effect((((int)stk + 0) + 0x4), ((*(int *)(((int)stk + 0))) + 0x2C), (*(signed char *)((t8 + 0x3))), 0x4, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o7214_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x0;
        t13 = 0x1;
    }
    return t13;
}

int obj_force_owner_state27(int a4, int a5)
{
    register int t0;
    register int t18;

    t0 = *(int *)((a4 + 0x1C));
    *(unsigned char *)((t0 + 0x9)) = 0x1;
    *(unsigned char *)((t0 + 0xA)) = 0x2;
    *(unsigned char *)((t0 + 0xD)) = 0x0;
    *(unsigned char *)((t0 + 0xC)) = 0x0;
    *(unsigned char *)((t0 + 0xB)) = 0x0;
    *(unsigned char *)((t0 + 0x1)) = 0x1;
    (((struct o71BB_uchar *)(t0))->v) = (*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BA)));
    (((struct o71BA_uchar *)(t0))->v) = 0x1B;
    (((struct o100_uchar *)(a4))->v) = a5;
    (((struct o71BD_uchar *)(t0))->v) = a5;
    (((struct oF8_uint *)(t0))->v) = (((((unsigned char)a5 << 2) + (unsigned char)a5) << 2) + (*(int *)((((int)g_attack_record_tab) + ((*(signed char *)((a4 + 0x4))) << 2)))));
    (((struct o71DE_uchar *)(t0))->v) = (*(signed char *)((t0 + 0x71DD)));
    (((struct o71DD_uchar *)(t0))->v) = (*(signed char *)((((((struct oF8_int *)(t0))->v)) + 0x0)));
    (((struct o7211_uchar *)(t0))->v) = (*(signed char *)((((((struct oF8_int *)(t0))->v)) + 0xD)));
    (((struct o7212_uchar *)(t0))->v) = (*(signed char *)((((((struct oF8_int *)(t0))->v)) + 0xE)));
    (((struct o7213_uchar *)(t0))->v) = (*(signed char *)((((((struct oF8_int *)(t0))->v)) + 0xC)));
    (((struct o7225_uchar *)(t0))->v) = 0x0;
    if ((int)(*(signed char *)((t0 + 0x7212))) < (int)0x20) {
        (((struct o72A8_uint *)(t0))->v) = (*(int *)((a4 + 0x30)));
        t18 = 0x72A8;
    } else {
        (((struct o72A8_uint *)(t0))->v) = (FUN_0c08d662(a4));
        (((struct o7212_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x7212))) - 32);
        t18 = 0x7212;
    }
    return t18;
}

int FUN_0c08e382(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x7226));
    t1 = t0;
    if (t0 != 32) {
        (((struct o7228_ushort *)(a4))->v) = 0x0;
        t1 = 0x7228;
    }
    return t1;
}

int FUN_0c08e3bc(int a4, int a5)
{
    register int t0;
    register int t1;

    if ((unsigned char)a5 != 8) {
        if ((unsigned char)a5 != 16) {
            t0 = (unsigned char)a5;
            if ((unsigned char)a5 != 24) {
            } else {
                (((struct o0_uchar *)0xC7F31D0)->v) = 0x1;
                (((struct o1_uchar *)0xC7F31D0)->v) = 0x3;
                t0 = 0x15;
            }
            t1 = t0;
        } else {
            (((struct o0_uchar *)0xC7F31D0)->v) = 0x2;
            (((struct o1_uchar *)0xC7F31D0)->v) = 0x3;
            t1 = 0x15;
        }
        t0 = t1;
    } else {
        (((struct o0_uchar *)0xC7F31D0)->v) = 0x1;
        (((struct o1_uchar *)0xC7F31D0)->v) = 0x2;
        t0 = 0x15;
    }
    return t0;
}

int FUN_0c08e3f2(int a4, int a5)
{
    register int t6;

    if ((unsigned char)(a5 & 0xE0) != 32) {
        if ((unsigned char)(a5 & 0xE0) != 64) {
            if ((unsigned char)(a5 & 0xE0) != 96) {
                t6 = (unsigned char)(a5 & 0xE0);
                if ((unsigned char)(a5 & 0xE0) != 0x80) {
                } else {
                    (((struct o7226_uchar *)(a4))->v) = (a5 & 0xE0);
                    (((struct o7228_ushort *)(a4))->v) = 0xB4;
                    (((struct o7240_uchar *)(a4))->v) = 0x3C;
                    (((struct oEE_ushort *)(a4))->v) = 0x0;
                    t6 = 0xEE;
                }
                return t6;
            }
            if ((*(signed char *)((a4 + 0x7226))) != (unsigned char)(a5 & 0xE0)) {
                fx_spawn_0485f8(a4);
            }
            (((struct o7226_uchar *)(a4))->v) = (a5 & 0xE0);
            (((struct o7228_ushort *)(a4))->v) = 0xB4;
            return snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x27);
        }
        if ((*(signed char *)((a4 + 0x7226))) != (unsigned char)(a5 & 0xE0)) {
            fx_spawn_043bdc(a4);
        }
        (((struct o7226_uchar *)(a4))->v) = (a5 & 0xE0);
        (((struct o7228_ushort *)(a4))->v) = 0xB4;
        return snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x28);
    }
    if ((*(signed char *)((a4 + 0x7226))) != (unsigned char)(a5 & 0xE0)) {
        fx_spawn_0485f8(a4);
    }
    (((struct o7226_uchar *)(a4))->v) = (a5 & 0xE0);
    (((struct o7228_ushort *)(a4))->v) = 0x12C;
    (((struct o7240_uchar *)(a4))->v) = 0x14;
    return 0x7240;
}

int FUN_0c08e4bc(int a4)
{
    register int t0;

    if ((unsigned char)(*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x4))) == 1) {
        if ((*(signed char *)((0x720E + (*(int *)((a4 + 0x1C)))))) == 1) {
            t0 = 0x2B;
            if ((*(signed char *)((a4 + 0x3))) != 0) {
                t0 = 0x15;
            }
            FUN_0c0a3f30(t0);
        }
    } else {
        if ((unsigned char)(*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x4))) == 6) {
            t0 = 0x29;
            if ((*(signed char *)((a4 + 0x3))) != 0) {
                t0 = 0x13;
            }
            FUN_0c0a3f30(t0);
        } else {
            if ((unsigned char)(*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x4))) == 7) {
                t0 = FUN_0c0555c4();
                if (t0 != 0) {
                    t0 = 0x28;
                    if ((*(signed char *)((a4 + 0x3))) != 0) {
                        t0 = 0x12;
                    }
                    FUN_0c0a3f30(t0);
                }
            }
        }
    }
    if (((unsigned char)(*(signed char *)((0x11 + ((((struct oF8_int *)(a4))->v))))) & 24) != 0) {
        FUN_0c08e3bc(a4, ((*(signed char *)((0x11 + ((((struct oF8_int *)(a4))->v))))) & 0x18));
    }
    t0 = *(signed char *)((0x11 + ((((struct oF8_int *)(a4))->v))));
    if ((unsigned char)(t0 & 0xE0) != 0) {
        return FUN_0c08e3f2(a4, (t0 & 0xE0));
    }
    (((struct o7228_ushort *)(a4))->v) = 0x0;
    return 0x7228;
}

int pl_update_hitstop_shake(int a4)
{
    register float u3;
    int t1;

    u3 = 0.0f;
    if (((*(signed char *)((a4 + 0x10B))) != 0) && (t1 = *(signed char *)((a4 + 0x10B)), (t1 & 1) != 0)) {
        u3 = 4.0f;
    }
    (((struct o7118_float *)(a4))->v) = u3;
    return 0x7118;
}

int FUN_0c08e5b4(int a4)
{
    int stk[6];
    int t7;
    register int t26;
    register int t17;

    nlUnitMatrix();
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = (*(float *)((((*(signed char *)((a4 + 0x7213))) << 2) + 0xC338CB4)));
    nlRotateAX((unsigned short)(int)((((-(float)(*(signed char *)((a4 + 0x7211)))) + 32.0f) * 737280.0f) / 360.0f));
    nlCalcVector((((int)stk + 0) + 0xC), ((int)stk + 0));
    nlUnitMatrix();
    t7 = *(signed char *)((a4 + 0xA));
    if ((t7 != 2) && (t7 != 3)) {
        if (((((struct o7294_int *)(a4))->v)) != 0) {
            t17 = ((int)(((float)((-(*(signed char *)((a4 + 0x7212)))) + 0x20) * 737280.0f) / 360.0f) + ((((struct o72A8_int *)(a4))->v)));
        } else {
            t17 = ((int)(((float)((-(*(signed char *)((a4 + 0x7212)))) + 0x20) * 737280.0f) / 360.0f) + (*(int *)((a4 + 0x30))));
        }
        t26 = (t17 & 0xFFFF);
    } else {
        t26 = (((int)((((-(float)(*(signed char *)((a4 + 0x7212)))) + 32.0f) * 737280.0f) / 360.0f) + ((((struct o72A8_int *)(a4))->v))) & 0xFFFF);
    }
    nlRotateAY(t26);
    nlCalcVector(((int)stk + 0), (((int)stk + 0) + 0xC));
    (((struct o38_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
    (((struct o3C_float *)(a4))->v) = (*(float *)(((int)stk + 16)));
    (((struct o40_float *)(a4))->v) = (*(float *)(((int)stk + 20)));
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = -2.0f;
    return 0x48;
}


int FUN_0c08e8ac(int a4)
{
    register int t1;
    register int t2;
    int t3;
    register int t4;

    if (((*(signed char *)((a4 + 0x9))) == 1) && ((t1 = *(signed char *)((a4 + 0xA)), t1 == 1) && ((t2 = *(signed char *)((a4 + 0x71BC)), t2 == 2) && (t3 = *(signed char *)((a4 + 0x71DD)), t4 = *(signed char *)((t3 + 0xC1507A8)), t4 != 0)))) {
        return 0x1;
    }
    return 0x0;
}

int pl_hitreact_calc_hit_side(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(signed char *)((a4 + 0x71BC));
    t1 = t0;
    if (t0 != 3) {
        (((struct o7205_uchar *)(a4))->v) = 0x0;
        t0 = 0x7294;
        if (((((struct o7294_int *)(a4))->v)) != 0) {
            t0 = *(signed char *)((a4 + 0x7212));
            t3 = (((struct o72A8_int *)(a4))->v);
            t4 = *(int *)((a4 + 0x30));
            t5 = (unsigned short)((t3 - (int)(((float)t0 * 737280.0f) / 360.0f)) - t4);
            if ((0x8000 & (unsigned short)((t3 - (int)(((float)t0 * 737280.0f) / 360.0f)) - t4)) != 0) {
                t5 = ((unsigned short)((t3 - (int)(((float)t0 * 737280.0f) / 360.0f)) - t4) | 0xFFFF0000);
            }
            t0 = 0x72A8;
            if (((int)t5 <= (int)0x1C71) && ((int)t5 >= (int)0xFFFFE38F)) {
                (((struct o7205_uchar *)(a4))->v) = 0x1;
                t0 = 0x7205;
            }
            t3 = t0;
            if (((int)t5 <= (int)0x638E) && ((int)t5 > (int)0x1C71)) {
                (((struct o7205_uchar *)(a4))->v) = 0x2;
                t3 = 0x7205;
            }
            t0 = t3;
            if (((int)t5 < (int)0xFFFFE38F) && ((int)t5 >= (int)0xFFFF9C72)) {
                (((struct o7205_uchar *)(a4))->v) = 0x3;
                t0 = 0x7205;
            }
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c08e980(int a4)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    int R4;
    register int R5;
    register int R6;
    int R8;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    R4 = a4;
    v0_4 = (0x71D4);
    v0_0 = (0x8000);
    v0_1 = (0x0);
    v0_2 = (R4);
    R8 = (0x4);
    if (((int)((((struct o71D4_short *)(R4))->v)) >= 0)) goto L_C08E9A8;
    L_C08EB76:;
    return v0_4;
    L_C08E9A8:;
    v0_4 = (0x71F3);
    if (((*(signed char *)((v0_2 + 0x71F3))) == 0)) goto L_C08E9B4;
    goto L_C08EB76;
    L_C08E9B4:;
    v0_4 = (0x7230);
    if (((int)(*(signed char *)((v0_2 + 0x7230))) < (int)0x3)) goto L_C08E9C2;
    goto L_C08EB76;
    L_C08E9C2:;
    if (((*(signed char *)((v0_2 + v0_4))) != 0)) goto L_C08E9CC;
    goto L_C08EB76;
    L_C08E9CC:;
    R4 = (0xC7F4750);
    if (((*(signed char *)0xC7F4765) == 0)) goto L_C08E9F6;
    if (((*(signed char *)((R4 + 0x5))) == 0)) goto L_C08E9F6;
    v0_3 = *(int *)((v0_2 + 0x1C));
    v0_4 = (0x71F1);
    R4 = (v0_3);
    if (((*(signed char *)((v0_3 + 0x71F1))) == 0)) goto L_C08E9EA;
    goto L_C08EB76;
    L_C08E9EA:;
    v0_4 = (0x71F4);
    if ((((((struct o71F4_short *)(R4))->v)) == 0)) goto L_C08E9F6;
    goto L_C08EB76;
    L_C08E9F6:;
    v0_3 = *(signed char *)((((((struct oF8_int *)(v0_2))->v)) + 0x10));
    v0_4 = (0x10);
    R4 = ((unsigned char)v0_3);
    if ((((unsigned char)v0_3 & R8) != 0)) goto L_C08EA10;
    if (((0x8 & R4) != 0)) goto L_C08EA10;
    goto L_C08EB76;
    L_C08EA10:;
    *(unsigned char *)(((int)stk + 0)) = 0x1;
    R4 = (v0_2);
    if ((((unsigned char)(*(signed char *)((0x10 + ((((struct oF8_int *)(v0_2))->v))))) & 8) == 0)) goto L_C08EA28;
    *(unsigned char *)(((int)stk + 0)) = 0x2;
    L_C08EA28:;
    pl_angle_to_opponent(R4);
    FUN_0c0e6fe8();
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + 100.0f);
    v0_3 = ((unsigned short)(((((struct o72A8_short *)(v0_2))->v)) + v0_0));
    if (!((((((struct o7294_int *)(v0_2))->v)) != 0))) goto L_C08EB5E;
    v0_4 = (((struct o7294_int *)(v0_2))->v);
    w0_1 = (((struct o20_float *)(v0_2))->v);
    R4 = (v0_4);
    w0_0 = (w0_1);
    if ((w0_1 != ((((struct o20_float *)(v0_4))->v)))) goto L_C08EB5E;
    w0_1 = (((struct o28_float *)(v0_2))->v);
    w0_0 = (w0_1);
    if ((w0_1 != ((((struct o28_float *)(R4))->v)))) goto L_C08EB5E;
    v0_3 = ((unsigned short)((*(int *)(((*(int *)((v0_2 + 0x1C))) + 0x30))) + v0_0));
    goto L_C08EB5E;
    L_C08EB5E:;
    if (((*(signed char *)(((int)stk + 0))) != 0)) goto L_C08EAA4;
    v0_4 = ((*(signed char *)((v0_2 + 0x3))));
    goto L_C08EB76;
    L_C08EAA4:;
    v0_4 = (0xC05CB42);
    v0_4 = (0xC04571C);
    w0_0 = (1000.0f);
    if (((*(signed char *)((v0_2 + 0x7230))) == 0)) goto L_C08EAC4;
    if (((*(signed char *)0xC7F4765) == 0)) goto L_C08EAC4;
    if (((*(signed char *)0xC7F4755) != 0)) goto L_C08EACC;
    L_C08EAC4:;
    if (!((((*(signed char *)((v0_2 + 0x7231))) & 1) == 0))) goto L_C08EACC;
    if ((((*(signed char *)((v0_2 + 0x7231))) & 2) == 0)) goto L_C08EB1C;
    FUN_0c05cb42((((int)stk + 0) + 0x4), v0_3, 0x1);
    (((struct o7231_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x7231))) & 0xFFFFFFFD);
    snd_spawn_delayed_sound((*(signed char *)((v0_2 + 0x3))), 0x11, v0_1);
    v0_1 = ((v0_1 + 0x3));
    goto L_C08EB44;
    L_C08EACC:;
    FUN_0c05cb42((((int)stk + 0) + 0x4), v0_3, 0x0);
    snd_spawn_delayed_sound((*(signed char *)((v0_2 + 0x3))), 0x11, v0_1);
    (((struct o7231_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x7231))) & 0xFFFFFFFE);
    v0_1 = ((v0_1 + 0x3));
    L_C08EB44:;
    *(unsigned char *)(((int)stk + 0)) = ((*(signed char *)(((int)stk + 0))) - 1);
    v0_4 = (0x7230);
    if (((int)(*(signed char *)((v0_2 + 0x7230))) <= 0)) goto L_C08EB58;
    *(unsigned char *)((v0_2 + v0_4)) = ((*(signed char *)((v0_2 + v0_4))) - 1);
    L_C08EB58:;
    v0_3 = ((unsigned short)(v0_3 + v0_0));
    goto L_C08EB5E;
    L_C08EB1C:;
    if ((((*(signed char *)((v0_2 + 0x7231))) & R8) == 0)) goto L_C08EB44;
    FUN_0c05cb42((((int)stk + 0) + 0x4), v0_3, 0x2);
    (((struct o7231_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x7231))) & 0xFFFFFFFB);
    snd_spawn_delayed_sound((*(signed char *)((v0_2 + 0x3))), 0x11, v0_1);
    goto L_C08EB44;
}

int FUN_0c08ebfa(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t2 = *(int *)((((*(signed char *)((a4 + 0x7213))) << 2) + 0xC338C34));
    t3 = *(short *)((a5 + 0x0));
    if (!(0.0f > (*(float *)((t2 + (t3 << 2)))))) {
        (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-((((struct o7248_int *)(a4))->v))) + 0x14000))) * (*(float *)((t2 + ((*(short *)((a5 + 0x0))) << 2)))));
        (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-((((struct o7248_int *)(a4))->v))) + 0x14000))) * (*(float *)((t2 + ((*(short *)((a5 + 0x0))) << 2)))));
        *(unsigned short *)((a5 + 0x0)) = ((*(short *)((a5 + 0x0))) + 0x1);
        t2 = FUN_0c09cee4(a4);
        if (((*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x5))) == 0) && ((signed char)t2 != 0)) {
            t4 = FUN_0c09d818(a4, t2);
            if (((float)t4 > 0.0f) && (t0 = *(int *)((a4 + 0x1C)), t1 = *(signed char *)((0x71BC + t0)), t1 != 2)) {
                t0 = *(int *)((a4 + 0x1C));
                (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - ((((((struct o38_float *)(a4))->v)) * 2.0f)));
                t0 = *(int *)((a4 + 0x1C));
                (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) - ((((((struct o40_float *)(a4))->v)) * 2.0f)));
                return 0x28;
            }
            return pl_apply_velocity(a4);
        }
        return pl_apply_velocity(a4);
    }
    return (t3 << 2);
}

int pl_hitreact_start_vibration(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x71D4;
    if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
        t1 = *(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x4));
        t2 = 0x5;
        if (((unsigned char)t1 != 3) && ((unsigned char)t1 != 4)) {
            t1 = *(signed char *)((a4 + 0x71DD));
            t2 = 0x8;
            if (((*(signed char *)(((signed char)t1 + 0xC1507A8))) == 0) && ((int)(signed char)t1 < (int)0x1B)) {
                t2 = 0x7;
            }
        }
        t0 = (pl_vib_start_preset(a4, t2));
    }
    return t0;
}

int pl_hitreact_escape_input(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct o2DC_int *)(a4))->v);
    if (((0xF0 & (t0 & 0x6F4)) != 0) && ((0x604 & (t0 & 0x6F4)) != 0)) {
        return 0x1;
    }
    t1 = 0x604;
    t2 = ((t0 & 0x6F4) & 0x604);
    t0 = 0x0;
    t3 = 0x0;
    for (;;) {
        if ((t2 & 0x1) != 0) {
            t3 = (t3 + 0x1);
            t1 = (signed char)t3;
            if ((int)t1 >= (int)0x2) {
                break;
            }
            t0 = (t0 + 0x1);
            t2 = ((unsigned int)t2 >> 1);
            if ((int)t0 > (int)0x1F) {
                return 0x0;
            }
            continue;
        }
        t0 = (t0 + 0x1);
        t2 = ((unsigned int)t2 >> 1);
        if ((int)t0 > (int)0x1F) {
            return 0x0;
        }
    }
    return 0x1;
}

int pl_hitreact_step(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register float u0;

    if ((*(signed char *)((a4 + 0x10B))) != 0) {
        t2 = *(signed char *)((a4 + 0x10B));
        (((struct o10B_uchar *)(a4))->v) = (t2 - 1);
        if ((int)(signed char)(t2 - 1) <= 0) {
            *(unsigned short *)((a4 + 0x6)) = 0x0;
        }
    }
    if ((*(signed char *)((a4 + 0x71DD))) != 23) {
        pl_update_hitstop_shake(a4);
    }
    sys_return_zero_098c82();
    if (((*(signed char *)((a4 + 0x71BC))) != 2) && ((u0 = (((struct o274_float *)(a4))->v), !(u0 > 0.0f)) && (t0 = *(signed char *)((a4 + 0x71DD)), t0 != 23))) {
        (((struct o71E8_float *)(a4))->v) = (((((struct o71E8_float *)(a4))->v)) + ((((struct o71E4_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o71E8_float *)(a4))->v)));
    } else {
        (((struct o71E8_float *)(a4))->v) = 0.0f;
    }
    t0 = pl_hitreact_escape_input(a4);
    if (((signed char)t0 != 0) && (t1 = *(signed char *)((a4 + 0x72AC)), t1 == 0)) {
        (((struct o72AC_uchar *)(a4))->v) = 0x5;
    }
    t0 = ((int (*)(int, int, int, int))((*(int *)((((*(signed char *)((a4 + 0x71DD))) << 2) + ((int)g_hit_reaction_tab))))))(a4, a5, a6, a7);
    if (((((struct o72A4_short *)(a4))->v)) != 0) {
        (((struct o72A4_ushort *)(a4))->v) = (((((struct o72A4_short *)(a4))->v)) - 1);
    }
    return 0x72A4;
}

int pl_hitreact_00_phase0(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    t0 = *(signed char *)((a4 + 0x71BB));
    if ((t0 == 27) || (t0 == 24)) {
        t0 = *(int *)((a4 + 0x30));
        t1 = pl_angle_to_opponent(a4);
        t2 = (unsigned short)(t0 - t1);
        if ((0x8000 & (unsigned short)(t0 - t1)) != 0) {
            t2 = ((unsigned short)(t0 - t1) | 0xFFFF0000);
        }
        if (((int)t2 >= (int)0xFFFFC000) && ((int)t2 <= (int)0x4000)) {
            *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
        } else {
            if ((int)t2 > 0) {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 0x4000);
            } else {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x4000);
            }
        }
    }
    if ((*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x6))) == 0) {
        t0 = *(signed char *)((a4 + 0x71DC));
        t1 = 0x0;
        if ((t0 != 1) && (t0 != 2)) {
            t0 = *(signed char *)((a4 + 0x71DC));
            t2 = 0x2;
            if (((int)t0 >= (int)0x3) && ((int)t0 <= (int)0x5)) {
                t2 = 0x1;
            }
            t1 = t2;
        }
        t0 = t1;
        if ((int)(*(signed char *)((a4 + 0x7213))) >= (int)0x4) {
            t0 = (t1 + 0x3);
        }
        if ((*(signed char *)((a4 + 0x71BC))) == 0) {
            t1 = *(signed char *)((a4 + 0x7205));
            t2 = ((signed char)((t1 << 1) + (t1 << 2)) + 0xC1507CE);
        } else {
            t1 = *(signed char *)((a4 + 0x7205));
            t2 = ((signed char)((t1 << 1) + (t1 << 2)) + 0xC1507E6);
        }
        (((struct oEC_ushort *)(a4))->v) = (*(signed char *)(((signed char)t0 + t2)));
    } else {
        if ((*(signed char *)((a4 + 0x71BC))) == 0) {
            t0 = *(signed char *)((a4 + 0x7205));
            (((struct oEC_ushort *)(a4))->v) = (*(signed char *)((((signed char)((t0 << 1) + (t0 << 2)) + 0xC1507CE) + ((unsigned char)(*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x6))) - 1))));
        } else {
            t0 = *(signed char *)((a4 + 0x7205));
            (((struct oEC_ushort *)(a4))->v) = (*(signed char *)((((signed char)((t0 << 1) + (t0 << 2)) + 0xC1507E6) + ((unsigned char)(*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x6))) - 1))));
        }
    }
    pl_start_motion(a4, 0x2, ((((struct oEC_short *)(a4))->v)));
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t0 = 0x0;
    for (;;) {
        if (!((*(float *)(((t0 << 2) + (*(int *)((0xC338C34 + ((*(signed char *)((a4 + 0x7213))) << 2))))))) > 0.0f)) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    t1 = *(signed char *)((a4 + 0x719C));
    t2 = (((struct o7198_short *)(a4))->v);
    t3 = *(int *)(((((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2) + (0xA1234 + (((*(signed char *)((a4 + 0x3))) * 0xB5EC8) + 0xC664B50))) + 0x0));
    t4 = (*(signed char *)((((t3 + (((unsigned short)t2 << 2) << 1)) + (((signed char)t1 << 2) << 1)) + 0x5)));
    t5 = (((unsigned short)t2 << 2) << 1);
    t6 = (((signed char)t1 << 2) << 1);
    t7 = ((t3 + (((unsigned short)t2 << 2) << 1)) + (((signed char)t1 << 2) << 1));
    t2 = t1;
    for (;;) {
        if ((*(signed char *)((t7 + 0x4))) != 0) {
            break;
        }
        t2 = (t2 + 0x1);
        t6 = 0xA1234;
        t4 = (t4 + (*(signed char *)((t7 + 0x5))));
        t7 = 0x71A4;
        t7 = (t7 + a4);
        t7 = (*(signed char *)((t7 + 0x0)));
        t7 = (t7 << 2);
        t6 = (t6 + (((*(signed char *)((a4 + 0x3))) * 0xB5EC8) + 0xC664B50));
        t7 = (t7 + t6);
        t5 = ((((struct o7198_short *)(a4))->v));
        t6 = (signed char)t2;
        t7 = (*(int *)((t7 + 0x0)));
        t6 = (t6 << 2);
        t5 = (unsigned short)t5;
        t5 = (t5 << 2);
        t5 = (t5 << 1);
        t6 = (t6 << 1);
        t7 = (t7 + t5);
        t7 = (t7 + t6);
    }
    (((struct oEE_ushort *)(a4))->v) = (t0 - (signed char)t4);
    if ((int)((((struct oEE_short *)(a4))->v)) <= 0) {
        (((struct oEE_ushort *)(a4))->v) = 0x1;
    }
    (((struct oF0_ushort *)(a4))->v) = (unsigned char)(*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x3)));
    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct oF0_ushort *)(a4))->v) = 0x1;
    }
    if (((((struct o7294_int *)(a4))->v)) != 0) {
        t0 = (((((struct o72A8_int *)(a4))->v)) - (int)(((float)(*(signed char *)((a4 + 0x7212))) * 737280.0f) / 360.0f));
    } else {
        t0 = ((*(int *)((a4 + 0x30))) - (int)(((float)(*(signed char *)((a4 + 0x7212))) * 737280.0f) / 360.0f));
    }
    (((struct o7248_uint *)(a4))->v) = t0;
    (((struct o7248_uint *)(a4))->v) = (((((struct o7248_int *)(a4))->v)) & 0xFFFF);
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct oF2_ushort *)(a4))->v) = 0x0;
    return 0xF2;
}

int FUN_0c08f71c(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x7205));
    if (t0 != 0) {
        if (t0 != 1) {
            if ((t0 != 2) && (t0 != 3)) {
            } else {
                pl_start_motion(a4, 0x2, 0x63);
                (((struct o7205_uchar *)(a4))->v) = 0x0;
            }
        } else {
            pl_start_motion(a4, 0x2, 0x83);
        }
    } else {
        pl_start_motion(a4, 0x2, 0x63);
        (((struct o7205_uchar *)(a4))->v) = 0x0;
    }
    cam_set_shake_ramp(0xA, 0xA);
    (((struct o71BC_uchar *)(a4))->v) = 0x3;
    return 0x71BC;
}

int FUN_0c08f76a(void)
{
    return 0x0;
}


int pl_hitreact_01_02_update(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    if (((int)(*(signed char *)((a4 + 0xB))) > 0) && (t0 = *(signed char *)((a4 + 0x10B)), t0 != 0)) {
        return 0x10B;
    }
    t0 = *(signed char *)((a4 + 0xB));
    switch (t0) {
    case 0:
        pl_hitreact_01_phase0(a4);
        break;
    case 1:
        pl_hitreact_01_phase1(a4);
        break;
    case 2:
        pl_hitreact_01_phase2(a4);
        break;
    }
    t0 = *(signed char *)((a4 + 0x71DD));
    if (t0 != 2) {
        t1 = FUN_0c0555c4();
        if (t1 != 0) {
            if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
                if ((*(signed char *)((a4 + 0x72AC))) != 0) {
                    if (((((struct o72A4_short *)(a4))->v)) == 0) {
                        t2 = *(signed char *)((a4 + 0x72AC));
                        (((struct o72AC_uchar *)(a4))->v) = (t2 - 1);
                        if ((signed char)(t2 - 1) == 0) {
                            t2 = *(signed char *)((a4 + 0xB));
                            if (t2 == 1) {
                                t3 = *(signed char *)((a4 + 0x71DD));
                                if (t3 == 1) {
                                    return FUN_0c08ee66(a4);
                                }
                                return t3;
                            }
                            return t2;
                        }
                        return 0x72AC;
                    }
                    return 0x72A4;
                }
                return 0x72AC;
            }
            return 0x71D4;
        }
        return t1;
    }
    return t0;
}

int pl_hitreact_03_update(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0xB))) > 0) && (t0 = *(signed char *)((a4 + 0x10B)), t0 != 0)) {
        return 0x10B;
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC08FDE4))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC08FCF6))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08FC84))(a4, a5, a6, a7);
}

int pl_hitreact_07_update(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0xB))) > 0) && (t0 = *(signed char *)((a4 + 0x10B)), t0 != 0)) {
        return 0x10B;
    }
    pl_mash_reduce_counter(a4, ((0x723E + a4) + 0x2));
    if ((*(signed char *)((a4 + 0x7240))) == 0) {
        (((struct o7228_ushort *)(a4))->v) = 0x0;
        return pl_end_action_choose_state(a4);
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0905A8))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC090578))(a4, a5, a6, a7);
}


int pl_hitreact_08_update(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0xB))) > 0) && (t0 = *(signed char *)((a4 + 0x10B)), t0 != 0)) {
        return 0x10B;
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC09084C))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0907BA))(a4, a5, a6, a7);
}

int pl_hitreact_09_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC090936))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC090902))(a4, a5, a6, a7);
}

int pl_hitreact_10_update(int a4, int a5, int a6, int a7)
{
    return pl_change_state(a4, 0xD, 0x60, a7);
}

int pl_hitreact_11_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC090AAC))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC090A34))(a4, a5, a6, a7);
}

int pl_hitreact_13_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    (((struct o106_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC090C16))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC090BB4))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC090B2E))(a4, a5, a6, a7);
}

int pl_hitreact_14_update(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0xB))) > 0) && (t0 = *(signed char *)((a4 + 0x10B)), t0 != 0)) {
        return 0x10B;
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC090CF2))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC090C7A))(a4, a5, a6, a7);
}

int pl_hitreact_15_update(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0xB))) > 0) && (t0 = *(signed char *)((a4 + 0x10B)), t0 != 0)) {
        return 0x10B;
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC090E12))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC090D7C))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC090D44))(a4, a5, a6, a7);
}

int pl_hitreact_16_update(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0xB))) > 0) && (t0 = *(signed char *)((a4 + 0x10B)), t0 != 0)) {
        return 0x10B;
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC090F9A))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC090F38))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC090E6C))(a4, a5, a6, a7);
}
