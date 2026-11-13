/* Kraken attack update, class handlers and state updates (part 7 of 7 of the same module) (0c086d98-0c087604) */

extern float math_sin_angle16(int a);
extern float math_cos_angle16(int a);
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o72BC_uint { char p[0x72BC]; unsigned int v; };
struct o74_float { char p[0x74]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c085606(int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int pl_step_motion(int);
int pl_apply_motion_translation(int);
struct oEC_short { char p[0xEC]; short v; };
int pl_kraken_special_id3_phase1(int);
int pl_kraken_special_id3_phase2(int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
struct o107_uchar { char p[0x107]; unsigned char v; };
int pl_step_motion_owner(int);
int pl_timer_arm_forever(int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);

int pl_kraken_special_id3_phase0(int a4);
int pl_kraken_special_id3_phase3(int a4);
int pl_kraken_special_id3_phase4(int a4);
int FUN_0c08740a(int a4);
int pl_kraken_state31_phase0(int a4);
int pl_kraken_state31_phase1(int a4);

void pl_kraken_play_attached_keyframes(char *fighter)
{
    char *target = *(char **)(fighter + 28);
    char *key = *(char **)(fighter + 0x72BC + 4);
    char *block, *prev_key;
    float cur_val, prev_val, delta, step, unused_g;
    int slot, dt;

    while ((unsigned short)*(short *)(fighter + 0x719E) > *(short *)key)
        key += 12;
    slot = target[0x71F1];
    switch (*(short *)(key + 2)) {
    case 1:
        block = target + 768 + (short)(slot * 3520) + 528;
        *(float *)(block + 116) = 0.0f;
        *(float *)(block + 112) = 0.0f;
        *(float *)(block + 108) = 0.0f;
        block = target + 768 + (short)(slot * 3520) + 1760;
        *(float *)(block + 116) = 0.0f;
        *(float *)(block + 112) = 0.0f;
        *(float *)(block + 108) = 0.0f;
        block = target + 768 + (short)(slot * 3520) + 1056;
        *(float *)(block + 116) = 0.0f;
        *(float *)(block + 112) = 0.0f;
        *(float *)(block + 108) = 0.0f;
        break;
    case 2:
        block = target + 768 + (short)(slot * 3520) + 176;
        *(float *)(block + 116) = 0.0f;
        *(float *)(block + 112) = 0.0f;
        *(float *)(block + 108) = 0.0f;
        break;
    case 3:
        block = target + 768 + (short)(slot * 3520);
        *(float *)(block + 116) = 0.0f;
        *(float *)(block + 112) = 0.0f;
        *(float *)(block + 108) = 0.0f;
        break;
    }
    if ((unsigned short)*(short *)(fighter + 0x719E) == *(short *)key) {
        *(float *)(target + 32) = *(float *)(fighter + 32) + *(float *)(key + 4) * math_sin_angle16(*(int *)(fighter + 48));
        *(float *)(target + 36) = *(float *)(fighter + 36) + *(float *)(key + 8);
        *(float *)(target + 40) = *(float *)(fighter + 40) + *(float *)(key + 4) * math_cos_angle16(*(int *)(fighter + 48));
    } else {
        prev_key = key - 12;
        cur_val = *(float *)(key + 4);
        prev_val = *(float *)(prev_key + 4);
        delta = cur_val - prev_val;
        step = cur_val;
        dt = *(short *)key - *(short *)prev_key;
        delta = delta / (float)dt;
        step = step + delta;
        *(float *)(target + 32) = *(float *)(fighter + 32) + step * math_sin_angle16(*(int *)(fighter + 48));
        *(float *)(target + 40) = *(float *)(fighter + 40) + step * math_cos_angle16(*(int *)(fighter + 48));
        cur_val = *(float *)(key + 8);
        prev_val = *(float *)(prev_key + 8);
        dt = *(short *)key - *(short *)prev_key;
        delta = cur_val - prev_val;
        delta = delta / (float)dt;
        cur_val = cur_val + delta;
        *(float *)(target + 36) = *(float *)(fighter + 36) + cur_val;
    }
}

int pl_kraken_special_id3_phase0(int a4)
{
    register int t0;

    pl_start_motion(a4, 0x4, 0x3);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x33);
    t0 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t0))->v) = 0x1;
    (((struct o71A8_uchar *)(t0))->v) = 0x1;
    (((struct o710B_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o710C_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o72BC_uint *)(a4))->v) = 0xC337C3C;
    FUN_0c085606(a4);
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x3;
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xC)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0xE;
    t0 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int pl_kraken_special_id3_phase3(int a4)
{
    register int t3;

    pl_step_motion(a4);
    FUN_0c085606(a4);
    pl_apply_motion_translation(a4);
    t3 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t3 - 1);
    if ((short)(t3 - 1) == 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        obj_set_owner_hit_record(a4, 0x31);
        return obj_force_owner_state27(a4, 0x31);
    }
    return 0xEC;
}

int pl_kraken_special_id3_phase4(int a4)
{
    register float u0;
    register float u1;
    register float u2;
    register int t9;

    u0 = (((struct o6C_float *)(((0x300 + a4) + 0x1080)))->v);
    u1 = *(float *)0xC08743C;
    u2 = (u0 - u1);
    if (1.0f > (u0 - u1)) {
        u2 = 1.0f;
    }
    (((struct o74_float *)(((0x300 + a4) + 0x1080)))->v) = u2;
    (((struct o70_float *)(((0x300 + a4) + 0x1080)))->v) = u2;
    (((struct o6C_float *)(((0x300 + a4) + 0x1080)))->v) = u2;
    pl_step_motion(a4);
    FUN_0c085606(a4);
    pl_apply_motion_translation(a4);
    t9 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        (((struct o74_float *)(((0x300 + a4) + 0x1080)))->v) = 1.0f;
        (((struct o70_float *)(((0x300 + a4) + 0x1080)))->v) = 1.0f;
        (((struct o6C_float *)(((0x300 + a4) + 0x1080)))->v) = 1.0f;
        t9 = 0x6C;
    }
    return t9;
}

int pl_kraken_special_id3(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return ((int (*)(int, int, int, int))(0xC0873CA))(a4, a5, a6, a7);
                    }
                    return pl_kraken_special_id3_phase4(a4);
                }
                return pl_kraken_special_id3_phase3(a4);
            }
            return pl_kraken_special_id3_phase2(a4);
        }
        return pl_kraken_special_id3_phase1(a4);
    }
    return pl_kraken_special_id3_phase0(a4);
}

int FUN_0c08740a(int a4)
{
    register int t0;
    register int t1;
    register int t3;

    (((struct o107_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)((a4 + 0xC));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                pl_step_motion_owner(a4);
                pl_apply_motion_translation(a4);
                t0 = 0x71AA;
                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                    t3 = *(signed char *)((a4 + 0x71F1));
                    (((struct o74_float *)(((short)((short)t3 * (short)0xDC0) + (0x300 + a4))))->v) = 0.0f;
                    (((struct o70_float *)(((short)((short)t3 * (short)0xDC0) + (0x300 + a4))))->v) = 0.0f;
                    (((struct o6C_float *)(((short)((short)t3 * (short)0xDC0) + (0x300 + a4))))->v) = 0.0f;
                    *(unsigned char *)((a4 + 0x1)) = 0x0;
                    t3 = *(signed char *)((a4 + 0xC));
                    *(unsigned char *)((a4 + 0xC)) = (t3 + 0x1);
                    t0 = (t3 + 0x1);
                }
                t1 = t0;
            }
        }
        t0 = t1;
    } else {
        t1 = *(signed char *)((a4 + 0xC));
        *(unsigned char *)((a4 + 0xC)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int pl_kraken_victim_dispatch(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 == 3) {
        return FUN_0c08740a(a4);
    }
    return t0;
}

int pl_kraken_state21_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_step_motion(a4);
    }
    t0 = *(signed char *)((a4 + 0xB));
    switch (t0) {
    case 0:
        pl_start_motion(a4, 0x3, 0x2);
        break;
    case 1:
        pl_start_motion(a4, 0x3, 0x3);
        break;
    case 2:
        pl_start_motion(a4, 0x3, 0x5);
        break;
    case 3:
        pl_start_motion(a4, 0x3, 0x6);
        break;
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int pl_kraken_state22_phase0(int a4)
{
    register int t2;

    pl_start_motion(a4, 0x3, ((((*(signed char *)((a4 + 0xB))) == 0)) ? 1 : 0));
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t2 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t2 + 0x1);
    return (t2 + 0x1);
}

int pl_kraken_state22_phase1(int a4)
{
    int stk[2];
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        return pl_timer_arm_forever(a4);
    }
    return (signed char)t0;
}

int pl_kraken_state31_phase0(int a4)
{
    register int t1;

    pl_start_motion(a4, 0x3, 0x7);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t1 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
    return (t1 + 0x1);
}

int pl_kraken_state31_phase1(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_kraken_state31_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_kraken_state31_phase1(a4);
    }
    return pl_kraken_state31_phase0(a4);
}
