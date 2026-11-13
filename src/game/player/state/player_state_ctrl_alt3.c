/* player state change (pl_change_state) power form flags input chords and character move hooks (0c0a18f8-0c0a2ee8) */

void pl_reset_pose(char *o);
void pl_reset_combo_counter(char *o);
void pl_timer_disable(char *o);
void pl_vib_stop(char *o);
char FUN_0c0a0030(char *o);
char FUN_0c0a0188(char *o);
int pl_no_ground(char *o);
char FUN_0c09e89a(char *o);
int pl_button_jump_pressed(char *o);
void pl_start_fall_motion(char *o);
void pl_change_state(char *o, int action, int arg);
#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))

void pl_end_action_choose_state(char *o)
{
    signed char r;

    B(o, 9) = 0;
    B(o, 13) = 0;
    B(o, 12) = 0;
    B(o, 11) = 0;
    B(o, 10) = 0;
    pl_reset_pose(o);
    B(o, 0x710A) = 0;
    B(o, 0x710B) = 0;
    B(o, 0x710C) = 0;
    pl_reset_combo_counter(o);
    B(o, 0x7234) = 0;
    B(o, 0x720A) = 0;
    pl_timer_disable(o);
    B(o, 0x71DF) = 0;
    F(o, 0x71E0) = F(o, 36);
    F(o, 0x729C) = 0.0f;
    H(o, 0x72A2) = 0;
    H(o, 0x72A0) = 0;
    pl_vib_stop(o);
    B(o, 0x100) = 0;
    I(o, 0xF4) = 0;
    B(o, 0x7238) = 0;
    if (B(o, 0x71F1) != 0 || H(o, 0x71F4) != 0) {
        if (F(o, 0x274) > 0.0f)
            pl_change_state(o, 0, 0);
        else
            pl_change_state(o, 5, 6);
        return;
    }
    if (B(o, 0x71BA) == 10) {
        if (B(o, 0x721F) == 8 && B(o, 0x71BB) == 36) {
            r = FUN_0c0a0030(o);
            if (r != 0) {
                F(o, 36) = F(o, 36) + 3.0f;
                pl_change_state(o, 36, 1);
                return;
            }
        }
        if (B(o, 0x71BA) == 10 && B(o, 0x721F) == 9 && B(o, 0x71BB) == 39) {
            r = FUN_0c0a0188(o);
            if (r != 0) {
                F(o, 36) = F(o, 36) + 3.0f;
                pl_change_state(o, 39, 1);
                return;
            }
        }
    }
    B(o, 0x721F) = 0;
    if (F(o, 0x274) > 0.0f) {
        if (B(o, 0x71BC) == 1) {
            pl_change_state(o, 0, 1);
            return;
        }
        if (pl_no_ground(o) != 0) {
            pl_change_state(o, 14, 0);
            return;
        }
        B(o, 0x71BC) = 0;
        if (FUN_0c09e89a(o) != 0) {
            pl_change_state(o, 31, 0);
            return;
        }
        if (pl_button_jump_pressed(o) != 0) {
            pl_change_state(o, 4, 0);
            return;
        }
        if (I(o, 0x2DC) & 0xF0)
            pl_change_state(o, 2, 0);
        else
            pl_change_state(o, 0, 0);
        return;
    }
    B(o, 0x71BA) = 5;
    B(o, 0x71BC) = 2;
    B(o, 0x721B) = 0;
    B(o, 0x7219) = B(o, 0x7219) + 1;
    B(o, 0x721A) = B(o, 0x721A) + 1;
    F(o, 76) = 0.0f;
    F(o, 68) = 0.0f;
    if (-3.0f > F(o, 56))
        F(o, 56) = -3.0f;
    if (F(o, 56) > 3.0f)
        F(o, 56) = 3.0f;
    if (-3.0f > F(o, 64))
        F(o, 64) = -3.0f;
    if (F(o, 64) > 3.0f)
        F(o, 64) = 3.0f;
    if (!(0.0f > F(o, 72)))
        F(o, 72) = F(o, 0x71E4);
    pl_start_fall_motion(o);
    B(o, 0x71A9) = 1;
    B(o, 0x71A8) = 1;
}
