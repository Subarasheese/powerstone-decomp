/* state update functions of the player state machine (table 0xC3390D4) (part 9 of 14 of the same module) (0c095ef8-0c09646a) */

char FUN_0c09c782(char *o);
void FUN_0c0634b4(char *o);
void FUN_0c09fa84(char *o);
char pl_check_power_form_attack_input(char *o);
char pl_start_power_form_attack(char *o);
char pl_check_dual_button_input(char *o);
char pl_try_dual_button_action(char *o);
int pl_try_start_move(char *o);
char FUN_0c09e910(char *o);
void pl_start_item_action(char *o);
int pl_button_jump_pressed(char *o);
char FUN_0c0a1162(char *o);
void pl_change_state(char *o, int action, int arg);
char hit_probe_step_max(char *o, float *step, float height);
int pl_no_ground(char *o);
void pl_apply_acceleration(char *o);
void FUN_0c09f8e0(char *o);
int pl_stick_dir_angle(char *o);
float math_cos_angle16(int angle);
float math_sin_angle16(int angle);
void thunk_FUN_0c062242(char *slot, float *pos);
void FUN_0c0421ee(float *pos, int kind);
void FUN_0c0a3e10(int side, int ground, int foot);
void pl_step_motion(char *o);
void pl_apply_velocity(char *o);
#define PL(i) ((char *)((unsigned short)((unsigned short)(i) * (unsigned short)0x72D0) + 0xC7E40C4))
#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))

void pl_state31_update(char *o)
{
    char *pl;
    short d;

    if (B(o, 0x7236) != 0 && FUN_0c09c782(o) != 0) {
        FUN_0c0634b4(o);
        FUN_0c09fa84(o);
    }
    if (pl_check_power_form_attack_input(o) != 0 && pl_start_power_form_attack(o) != 0)
        return;
    if (pl_check_dual_button_input(o) != 0 && pl_try_dual_button_action(o) != 0)
        return;
    if (pl_try_start_move(o) != 0) {
        pl_change_state(o, 10, 2);
        return;
    }
    if (FUN_0c09e910(o) != 0) {
        pl_start_item_action(o);
        return;
    }
    if (pl_button_jump_pressed(o) != 0) {
        pl_change_state(o, 5, 2);
        return;
    }
    if (FUN_0c0a1162(o) != 0) {
        H(o, 0xEE) = H(o, 0xEE) - 1;
        if (H(o, 0xEE) == 0) {
            B(o, 0x7243) = 5;
            pl_change_state(o, 17, 0);
            return;
        }
    } else {
        H(o, 0xEE) = 5;
    }
    if (hit_probe_step_max(o, (float *)(o + 0x7254), 60.0f) == 2) {
        B(o, 0x7243) = B(o, 0x7243) - 1;
        if (B(o, 0x7243) != 0)
            goto steer;
        F(o, 36) = F(o, 36) + F(o, 0x7254);
    }
    B(o, 0x7243) = 4;
steer:
    if (pl_no_ground(o) != 0) {
        pl_apply_acceleration(o);
    } else {
        F(o, 60) = 0.0f;
        F(o, 72) = F(o, 0x71E4);
        if (!(I(o, 0x2DC) & 0xF0)) {
            I(o, 48) = I(o, 0x7248);
            if (H(o, 0xF0) != 0) {
                pl_change_state(o, 0, 0);
            } else {
                FUN_0c09f8e0(o);
                pl_change_state(o, 32, 0);
            }
            return;
        }
        if (H(o, 0xF0) == 0) {
            if (I(o, 0x2DC) & 0xF0)
                I(o, 0x7248) = (unsigned short)(pl_stick_dir_angle(o) + *(short *)0x0C7F31E0 - I(o, 48));
            if (I(o, 0x7248) & 0x8000)
                I(o, 0x7248) = I(o, 0x7248) | 0xFFFF0000;
            if (!(I(o, 0x7248) > -3640))
                I(o, 48) = I(o, 48) - 3640;
            else if (I(o, 0x7248) >= 3640)
                I(o, 48) = I(o, 48) + 3640;
            else
                I(o, 48) = I(o, 48) + I(o, 0x7248) / 2;
            I(o, 48) = I(o, 48) & 0xFFFF;
        }
    }
    if (H(o, 0xF0) != 0) {
        d = (short)(H(o, 0x7248) - I(o, 48));
        F(o, 56) = math_cos_angle16(0x14000 - I(o, 0x7248)) * 4.0f;
        F(o, 64) = math_sin_angle16(0x14000 - I(o, 0x7248)) * 4.0f;
        I(o, 48) = (unsigned short)(I(o, 48) + d / H(o, 0xF0));
        H(o, 0xF0) = H(o, 0xF0) - 1;
        if (H(o, 0xF0) == 0)
            FUN_0c09fa84(o);
    } else {
        if (I(o, 0x2DC) & 0xF0)
            I(o, 0x7248) = (unsigned short)(pl_stick_dir_angle(o) + *(short *)0x0C7F31E0);
        FUN_0c09f8e0(o);
    }
    if (H(o, 0xF2) == 0) {
        if (B(o, 0x27C) == 2) {
            pl = PL(B(o, 3));
            thunk_FUN_0c062242(pl + 0x300 + (short)(B(pl, 0x71F1) * 3520) + 2640, (float *)(o + 0x727C));
            F(o, 0x7280) = F(o, 36);
            FUN_0c0421ee((float *)(o + 0x727C), 0);
        }
        FUN_0c0a3e10(B(o, 3), B(o, 0x27C), 0);
        H(o, 0xF2) = 36;
    }
    if (H(o, 0xF2) == 18) {
        if (B(o, 0x27C) == 2) {
            pl = PL(B(o, 3));
            thunk_FUN_0c062242(pl + 0x300 + (short)(B(pl, 0x71F1) * 3520) + 3168, (float *)(o + 0x727C));
            F(o, 0x7280) = F(o, 36);
            FUN_0c0421ee((float *)(o + 0x727C), 0);
        }
        FUN_0c0a3e10(B(o, 3), B(o, 0x27C), 1);
    }
    H(o, 0xF2) = H(o, 0xF2) - 1;
    pl_step_motion(o);
    pl_apply_velocity(o);
}
