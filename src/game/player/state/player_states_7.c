/* state update functions of the player state machine (table 0xC3390D4) (part 7 of 14 of the same module) (0c09511c-0c095430) */

struct o0_float { float v; };
struct o24_float { char p[0x24]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct oEE_short { char p[0xEE]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
float FUN_0c02649a(int, int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int hit_find_interactable_contact(int, int);
int pl_apply_velocity(int);
int pl_angle_to_opponent(int);
int pl_stick_dir_angle(int);
int pl_button_jump_pressed(int);
int pl_check_power_form_attack_input(int, int, int);
int pl_start_power_form_attack(int, int, int);
int pl_change_state(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int pl_state17_phase2(int, int, int);

int pl_state17_phase1(int a4, int a5, int a6);
int pl_state17_phase3(int a4);

int pl_state17_phase1(int a4, int a5, int a6)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F2;
    register float F3;
    register float F12;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_3 = (signed char)(pl_check_power_form_attack_input(v0_0, v0_1, v0_2)) == 0;
    v0_0 = (v0_0);
    if (v0_3) goto L_C095140;
    v0_1 = pl_start_power_form_attack(v0_0, v0_1, v0_2);
    v0_2 = ((signed char)v0_1);
    if (((signed char)v0_1 == 0)) goto L_C095140;
    L_C09529E:;
    return v0_2;
    L_C095140:;
    v0_1 = (pl_button_jump_pressed(v0_0)) == 0;
    if (v0_1) goto L_C09515C;
    return pl_change_state(v0_0, 0x4, 0x0);
    L_C09515C:;
    v0_2 = (0xEE);
    if ((((((struct oEE_short *)(v0_0))->v)) != 0)) goto L_C095200;
    v0_1 = hit_find_interactable_contact(v0_0, 0x5);
    *(unsigned char *)(((int)stk + 0)) = v0_1;
    if (((signed char)v0_1 != 0)) goto L_C0951AA;
    pl_start_motion(v0_0, 0x0, 0x3A);
    (((struct o71A9_uchar *)(v0_0))->v) = 0x1;
    (((struct o71A8_uchar *)(v0_0))->v) = 0x1;
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) - 100.0f);
    *(unsigned char *)((v0_0 + 0xA)) = ((*(signed char *)((v0_0 + 0xA))) + 0x1);
    (((struct oF0_ushort *)(v0_0))->v) = 0x0;
    (((struct oF2_ushort *)(v0_0))->v) = 0x8;
    v0_2 = (0xF2);
    FPUL_ = (0x42C80000);
    goto L_C09529E;
    L_C0951AA:;
    w0_0 = (((struct o24_float *)(v0_0))->v);
    w0_1 = FUN_0c02649a((*(int *)((((((*(signed char *)(((int)stk + 0))) - 1) << 2) + (0x294 + v0_0)) + 0x0))), 0x0);
    w0_2 = (w0_1);
    if ((!((w0_0 + 100.0f) > w0_1))) goto L_C095206;
    (((struct o24_float *)(v0_0))->v) = w0_2;
    L_C095206:;
    if (((((((struct o2DC_int *)(v0_0))->v)) & 240) != 0)) goto L_C095216;
    if (!((((((struct oEE_short *)(v0_0))->v)) == 0))) goto L_C095216;
    *(unsigned int *)((v0_0 + 0x30)) = (pl_angle_to_opponent(v0_0));
    pl_start_motion(v0_0, 0x0, 0x1);
    *(unsigned char *)((v0_0 + 0xA)) = 0x3;
    (((struct o71A9_uchar *)(v0_0))->v) = 0x1;
    (((struct o71A8_uchar *)(v0_0))->v) = 0x1;
    v0_2 = (0x71A8);
    goto L_C09529E;
    L_C095216:;
    if ((((((struct oEE_short *)(v0_0))->v)) != 0)) goto L_C095232;
    *(unsigned int *)((v0_0 + 0x30)) = (((pl_stick_dir_angle(v0_0)) + (*(int *)0xC7F31E0)) & 0xFFFF);
    L_C095232:;
    (((struct o38_float *)(v0_0))->v) = (((math_cos_angle16(((-(*(int *)((v0_0 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC0952F8)->v))) / ((((struct o4_float *)0xC0952F8)->v)));
    (((struct o40_float *)(v0_0))->v) = (((math_sin_angle16(((-(*(int *)((v0_0 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC0952F8)->v))) / ((((struct o4_float *)0xC0952F8)->v)));
    pl_apply_velocity(v0_0);
    return pl_step_motion(v0_0);
    L_C095200:;
    *(unsigned short *)((v0_0 + v0_2)) = ((*(short *)((v0_0 + v0_2))) - 1);
    goto L_C095206;
}

int pl_state17_phase3(int a4)
{
    int stk[2];

    pl_step_motion(a4);
    pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    (((struct o71A8_uchar *)(a4))->v) = 0x0;
    (((struct o71A9_uchar *)(a4))->v) = 0x8;
    return 0x71A9;
}

int pl_state17_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return pl_state17_phase3(a4);
            }
            return pl_state17_phase2(a4, a5, a6);
        }
        return pl_state17_phase1(a4, a5, a6);
    }
    return ((int (*)(int, int, int, int))(0xC094FB8))(a4, a5, a6, a7);
}
