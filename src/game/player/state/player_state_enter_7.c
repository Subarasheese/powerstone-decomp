/* player state enter handlers (table 0xC339490) and state-specific helpers; same module as the following rows up to 0c0a18f8 (0c0a0370-0c0a066c) */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o721C_uchar { char p[0x721C]; unsigned char v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
float FUN_0c02649a(int, int);
float FUN_0c02651e(int);
int pl_timer_disable(int);
int pl_start_motion(int, int, int);
int math_angle_between_points_xz(int, int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int obj_can_interact(int, int, int, int, int, int, int, int, int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);

int pl_enter_state_34(int a4, int a5)
{
    int stk[7];
    register int t4;
    register float t23;
    register float t24;
    register float t32;
    register float t33;

    *(unsigned char *)(((int)stk + 0)) = a5;
    (((struct o71BA_uchar *)(a4))->v) = 0x22;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    pl_timer_disable(a4);
    (((struct o721C_uchar *)(a4))->v) = 0x0;
    if (((((struct o71C8_int *)(a4))->v)) != 0) {
        t4 = obj_can_interact(((((struct o71C8_int *)(a4))->v)), 0x1, (*(signed char *)((a4 + 0x3))), 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        if (t4 != 0) {
            if ((*(signed char *)(((int)stk + 0))) == 0) {
                *(unsigned int *)((a4 + 0x30)) = (math_angle_between_points_xz((a4 + 0x20), (((((struct o71C8_int *)(a4))->v)) + 0x20)));
            }
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(((((struct o71C8_int *)(a4))->v))))->v)) - (((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 10.0f)));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(((((struct o71C8_int *)(a4))->v))))->v)) - (((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 10.0f)));
            t23 = FUN_0c02649a(((((struct o71C8_int *)(a4))->v)), 0x0);
            *(float *)(((int)stk + 8)) = t23;
            t24 = FUN_0c02649a(a4, 0x0);
            if (t24 > t23) {
                (((struct o24_float *)(a4))->v) = ((*(float *)(((int)stk + 8))) - (FUN_0c02651e(a4)));
            }
            t32 = FUN_0c02649a(((((struct o71C8_int *)(a4))->v)), 0x1);
            *(float *)(((int)stk + 4)) = t32;
            t33 = FUN_0c02649a(a4, 0x1);
            if (t32 > t33) {
                (((struct o24_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
            }
        }
    }
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    if ((*(signed char *)(((int)stk + 0))) == 0) {
        snd_play_side_se((*(signed char *)((a4 + 0x3))), 0xE);
        snd_play_char_voice(a4, 0xF);
        pl_start_motion(a4, 0x2, 0xD3);
        *(unsigned char *)((a4 + 0xA)) = 0x1;
        (((struct oEC_ushort *)(a4))->v) = 0xF;
    } else {
        pl_start_motion(a4, 0x2, 0xD4);
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    return 0x71A8;
}

int pl_enter_state_26(int a4, int a5)
{
    int stk[7];
    register int t4;
    register int t6;
    register float t17;
    register float t18;
    register float t26;
    register float t27;

    *(unsigned char *)(((int)stk + 8)) = a5;
    (((struct o71BA_uchar *)(a4))->v) = 0x1A;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    pl_timer_disable(a4);
    (((struct o721C_uchar *)(a4))->v) = 0x0;
    if (((((struct o71C8_int *)(a4))->v)) != 0) {
        t4 = obj_can_interact(((((struct o71C8_int *)(a4))->v)), 0x2, (*(signed char *)((a4 + 0x3))), 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        if (t4 != 0) {
            t6 = *(int *)((((((struct o71C8_int *)(a4))->v)) + 0x30));
            *(unsigned int *)((a4 + 0x30)) = t6;
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(((((struct o71C8_int *)(a4))->v))))->v)) - (((math_cos_angle16(((-t6) + 0x14000))) * 10.0f)));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(((((struct o71C8_int *)(a4))->v))))->v)) - (((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 10.0f)));
            t17 = FUN_0c02649a(((((struct o71C8_int *)(a4))->v)), 0x0);
            *(float *)(((int)stk + 4)) = t17;
            t18 = FUN_0c02649a(a4, 0x0);
            if (t18 > t17) {
                (((struct o24_float *)(a4))->v) = ((*(float *)(((int)stk + 4))) - (FUN_0c02651e(a4)));
            }
            t26 = FUN_0c02649a(((((struct o71C8_int *)(a4))->v)), 0x1);
            *(float *)(((int)stk + 0)) = t26;
            t27 = FUN_0c02649a(a4, 0x1);
            if (t26 > t27) {
                (((struct o24_float *)(a4))->v) = (*(float *)(((int)stk + 0)));
            }
        }
    }
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    if ((*(signed char *)(((int)stk + 8))) == 0) {
        snd_play_side_se((*(signed char *)((a4 + 0x3))), 0xE);
        snd_play_char_voice(a4, 0xF);
        pl_start_motion(a4, 0x2, 0xD7);
        *(unsigned char *)((a4 + 0xA)) = 0x1;
        (((struct oEC_ushort *)(a4))->v) = 0xF;
    } else {
        pl_start_motion(a4, 0x2, 0xD8);
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    return 0x71A8;
}
