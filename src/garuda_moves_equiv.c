/* Garuda attack init/update dispatch and move init/update stubs (0c07ac20-0c07c3ea) */

struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int pl_mode01_03_enter(int);
int pl_mode05_enter(int);
int pl_mode06_enter(int);
int pl_mode07_enter(int);
int pl_mode10_enter(int);
int pl_mode08_enter(int);
int pl_mode09_enter(int, int, int, int);
int pl_mode11_enter(int);
int pl_mode12_enter(int);
int pl_mode13_enter(int);
int pl_mode14_enter(int);
int pl_mode15_enter(int, int, int);
int pl_start_motion(int, int, int);
int pl_mode01_03_update(int);
int pl_mode05_update(int);
int pl_mode06_update(int);
int pl_mode07_update(int);
int pl_mode10_update(int, int, int, int);
int pl_mode08_update(int, int, int, int);
int pl_mode09_update(int, int, int, int);
int pl_mode11_update(int);
int pl_mode12_update(int, int, int, int);
int pl_mode14_update(int);
int pl_mode15_update(int);
int pl_step_motion(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int);
struct o24_float { char p[0x24]; float v; };
struct o720A_uchar { char p[0x720A]; unsigned char v; };
int FUN_0c0555c4(void);
int pl_get_hit_count_of_opponent(int);
int pl_enter_state_27_28(int, int);
struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
int pl_landed(int);
int FUN_0c09c45a(int);
int cam_set_shake_ramp(int, int);

int pl_garuda_mode04_enter(int a4);
int pl_garuda_mode04_phase0(int a4);
int pl_garuda_mode04_phase1(int a4);
int pl_garuda_mode04_phase2(int a4);
int pl_garuda_mode04_phase3(int a4);
int pl_garuda_mode04_phase4(int a4);
int pl_garuda_mode04_update(int a4);

int pl_garuda_attack_init(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721F));
    if ((unsigned int)t0 < (unsigned int)0x10) {
        switch ((t0 << 1)) {
            case 0:
            case 4:
            {
                (((struct oF0_ushort *)(a4))->v) = 0x0;
                t0 = ((int (*)(int, int, int, int))((*(int *)((((*(signed char *)((a4 + 0x7238))) << 2) + 0xC3371B8)))))(a4, a5, a6, a7);
            }
                break;
            case 2:
            case 6:
            {
                pl_mode01_03_enter(a4);
            }
                break;
            case 8:
            {
                pl_garuda_mode04_enter(a4);
            }
                break;
            case 10:
            {
                pl_mode05_enter(a4);
            }
                break;
            case 12:
            {
                pl_mode06_enter(a4);
            }
                break;
            case 14:
            {
                pl_mode07_enter(a4);
            }
                break;
            case 16:
            {
                pl_mode08_enter(a4);
            }
                break;
            case 18:
            {
                pl_mode09_enter(a4, a5, a6, a7);
            }
                break;
            case 20:
            {
                pl_mode10_enter(a4);
            }
                break;
            case 22:
            {
                pl_mode11_enter(a4);
            }
                break;
            case 24:
            {
                pl_mode12_enter(a4);
            }
                break;
            case 26:
            {
                pl_mode13_enter(a4);
            }
                break;
            case 28:
            {
                pl_mode14_enter(a4);
            }
                break;
            default:
            {
                pl_mode15_enter(a4, a5, a6);
            }
                break;
        }
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    return 0x71A8;
}

int pl_garuda_move00_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x10);
}

int pl_garuda_move01_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x18);
}

int pl_garuda_move02_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x12);
}

int pl_garuda_move03_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x1A);
}

int pl_garuda_move04_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x14);
}

int pl_garuda_move05_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x1);
}

int pl_garuda_move06_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x15);
}

int pl_garuda_move07_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x1B);
}

int pl_garuda_move08_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x13);
}

int pl_garuda_move09_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x2);
}

int pl_garuda_move10_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x1C);
}

int pl_garuda_move11_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x0);
}

int pl_garuda_attack_update(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t3;

    t0 = *(signed char *)((a4 + 0x721F));
    if ((unsigned int)t0 < (unsigned int)0x10) {
        switch ((t0 << 1)) {
            case 0:
            case 4:
            {
                t3 = *(int *)((((*(signed char *)((a4 + 0x7238))) << 2) + 0xC3371F4));
                return ((int (*)(int, int, int, int))(t3))(a4, a5, a6, a7);
            }
            case 2:
            case 6:
            {
                return pl_mode01_03_update(a4);
            }
            case 8:
            {
                return pl_garuda_mode04_update(a4);
            }
            case 10:
            {
                return pl_mode05_update(a4);
            }
            case 12:
            {
                return pl_mode06_update(a4);
            }
            case 14:
            {
                return pl_mode07_update(a4);
            }
            case 16:
            {
                return pl_mode08_update(a4, a5, a6, a7);
            }
            case 18:
            {
                return pl_mode09_update(a4, a5, a6, a7);
            }
            case 20:
            {
                return pl_mode10_update(a4, a5, a6, a7);
            }
            case 22:
            {
                return pl_mode11_update(a4);
            }
            case 24:
            {
                return pl_mode12_update(a4, a5, a6, a7);
            }
            case 26:
            {
                return ((int (*)(int, int, int, int))(0xC07B0F2))(a4, a5, a6, a7);
            }
            case 28:
            {
                return pl_mode14_update(a4);
            }
            default:
            {
                return pl_mode15_update(a4);
            }
        }
    }
    return t0;
}

int pl_garuda_move_update_default(int a4)
{
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int pl_garuda_move12_update(int a4)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    pl_apply_motion_translation(a4);
    t4 = FUN_0c0555c4();
    if ((t4 == 1) && (t0 = *(int *)((a4 + 0x1C)), t1 = *(signed char *)((t0 + 0x71BC)), t1 == 0)) {
        u0 = (((struct o24_float *)(a4))->v);
        u1 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
        if (!(u0 > (u1 + 100.0f))) {
            if (!((u1 + -100.0f) > u0)) {
                t0 = pl_get_hit_count_of_opponent(a4);
                if (((signed char)t0 == 1) && (t2 = *(int *)((a4 + 0x1C)), t3 = *(signed char *)((t2 + 0x4)), t3 != 10)) {
                    (((struct o720A_uchar *)(a4))->v) = 0x0;
                    return pl_enter_state_27_28(a4, 0x6);
                }
            }
        }
    }
    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int pl_garuda_move14_update(int a4)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    pl_apply_motion_translation(a4);
    t4 = FUN_0c0555c4();
    if ((t4 == 1) && (t0 = *(int *)((a4 + 0x1C)), t1 = *(signed char *)((t0 + 0x71BC)), t1 == 0)) {
        u0 = (((struct o24_float *)(a4))->v);
        u1 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
        if (!(u0 > (u1 + 100.0f))) {
            if (!((u1 + -100.0f) > u0)) {
                t0 = pl_get_hit_count_of_opponent(a4);
                if (((signed char)t0 == 1) && (t2 = *(int *)((a4 + 0x1C)), t3 = *(signed char *)((t2 + 0x4)), t3 != 10)) {
                    (((struct o720A_uchar *)(a4))->v) = 0x0;
                    return pl_enter_state_27_28(a4, 0x7);
                }
            }
        }
    }
    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int pl_garuda_mode13_phase0(int a4)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t4 = FUN_0c0555c4();
    if ((t4 == 1) && (t0 = *(int *)((a4 + 0x1C)), t1 = *(signed char *)((t0 + 0x71BC)), t1 == 0)) {
        u0 = (((struct o24_float *)(a4))->v);
        u1 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
        if (!(u0 > (u1 + ((((struct o0_float *)0xC07B160)->v))))) {
            if (!((u1 + ((((struct o4_float *)0xC07B160)->v))) > u0)) {
                t0 = pl_get_hit_count_of_opponent(a4);
                if (((signed char)t0 == 1) && (t2 = *(int *)((a4 + 0x1C)), t3 = *(signed char *)((t2 + 0x4)), t3 != 10)) {
                    (((struct o720A_uchar *)(a4))->v) = 0x0;
                    return pl_enter_state_27_28(a4, 0x8);
                }
            }
        }
    }
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int pl_garuda_mode13_phase1(int a4)
{
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int pl_garuda_mode04_enter(int a4)
{
    pl_start_motion(a4, 0x1, 0x35);
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 40.0f;
    (((struct o48_float *)(a4))->v) = -2.79999995f;
    (((struct oEC_ushort *)(a4))->v) = 0x12;
    return 0xEC;
}

int pl_garuda_mode04_phase0(int a4)
{
    register int t0;
    register int t1;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x1, 0x36);
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC07B2A0)->v));
        (((struct o48_float *)(a4))->v) = ((((struct o4_float *)0xC07B2A0)->v));
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        snd_play_side_se((*(signed char *)((a4 + 0x3))), 0xC);
        snd_play_char_voice(a4, 0x4);
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_garuda_mode04_phase1(int a4)
{
    register int t0;

    pl_step_motion(a4);
    if (200.0f > (*(float *)0xC494D1C)) {
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o20_float *)(a4))->v))) / 8.0f));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o28_float *)(a4))->v))) / 8.0f));
    }
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t0 = pl_get_hit_count_of_opponent(a4);
        if ((signed char)t0 == 0) {
            t0 = pl_landed(a4);
            if ((signed char)t0 != 0) {
                t0 = *(signed char *)((a4 + 0xA));
                *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
                return (t0 + 0x1);
            }
            pl_apply_velocity(a4);
            return pl_apply_acceleration(a4);
        }
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        return (t0 + 0x1);
    }
    t0 = pl_landed(a4);
    if ((signed char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        return (t0 + 0x1);
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int pl_garuda_mode04_phase2(int a4)
{
    register int t0;

    pl_step_motion(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t0 = pl_landed(a4);
        if ((signed char)t0 != 0) {
            cam_set_shake_ramp(0x1E, 0x1E);
            pl_start_motion(a4, 0x1, 0x38);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            FUN_0c09c45a(a4);
            t0 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
            return (t0 + 0x1);
        }
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int pl_garuda_mode04_phase3(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x1, 0x92);
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_garuda_mode04_phase4(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int pl_garuda_mode04_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return pl_garuda_mode04_phase4(a4);
                }
                return pl_garuda_mode04_phase3(a4);
            }
            return pl_garuda_mode04_phase2(a4);
        }
        return pl_garuda_mode04_phase1(a4);
    }
    return pl_garuda_mode04_phase0(a4);
}
