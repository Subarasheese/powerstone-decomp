/* state update functions of the player state machine (table 0xC3390D4) (part 1 of 14 of the same module) (0c093998-0c093d88) */

extern short g_cam_yaw16;
int FUN_0c09c782(char *player);
void FUN_0c0634b4(char *player);
void pl_update_walk_motion(char *player);
signed char pl_check_power_form_attack_input(char *player);
signed char pl_start_power_form_attack(char *player);
signed char pl_check_dual_button_input(char *player);
signed char pl_try_dual_button_action(char *player);
int pl_try_start_move(char *player);
signed char FUN_0c09e910(char *player);
void pl_start_item_action(char *player);
int pl_button_jump_pressed(char *player);
signed char FUN_0c09e89a(char *player);
signed char FUN_0c09e7fc(char *player);
signed char hit_probe_step_max(char *player, float *p, float limit);
int pl_no_ground(char *player);
void pl_apply_acceleration(char *player);
signed char pl_get_held_item_class(char *player);
int pl_angle_to_target_pos(char *player);
int pl_stick_dir_angle(char *player);
void pl_set_velocity_from_move_table(char *player, int anim_id);
signed char pl_step_motion(char *player);
void pl_apply_velocity(char *player);
void thunk_FUN_0c062242(char *mat, char *vec);
void FUN_0c0421ee(char *p, int anim_id);
void FUN_0c0a3e10(int slot, int anim_id, int anim_flag);
void pl_change_state(char *player, int anim_id, int anim_flag);
#define I8(offset) (*(signed char *)(player + (offset)))
#define I16(offset) (*(short *)(player + (offset)))
#define I32(offset) (*(int *)(player + (offset)))
#define F32(offset) (*(float *)(player + (offset)))
#define PLAYER_BLOCK ((char *)0xC7E40C4 + (unsigned short)(I8(3) * 0x72D0))

void pl_state_walk_update(char *player)
{
    int anim_id;
    int anim_flag;
    int angle_diff;
    char *block;
    if (player[0x7236] != 0) {
        if ((signed char)FUN_0c09c782(player) != 0) {
            FUN_0c0634b4(player);
            pl_update_walk_motion(player);
        }
    }
    if (pl_check_power_form_attack_input(player) != 0) {
        if (pl_start_power_form_attack(player) != 0)
            return;
    }
    if (pl_check_dual_button_input(player) != 0) {
        if (pl_try_dual_button_action(player) != 0)
            return;
    }
    if (pl_try_start_move(player) != 0) {
        anim_id = 10; anim_flag = 0;
        goto start_anim;
    }
    if (FUN_0c09e910(player) != 0) {
        pl_start_item_action(player);
        return;
    }
    if (pl_button_jump_pressed(player) != 0) {
        anim_id = 4; anim_flag = 0;
        goto start_anim;
    }
    if (FUN_0c09e89a(player) != 0) {
        anim_id = 31; anim_flag = 1;
        goto start_anim;
    }
    if (FUN_0c09e7fc(player) == 0) {
        anim_id = 31; anim_flag = 0;
        goto start_anim;
    }
    if (hit_probe_step_max(player, (float *)(player + 0x7254), 60.0f) == 2) {
        I8(0x7243) = I8(0x7243) - 1;
        if (I8(0x7243) == 0) {
            F32(36) = F32(36) + *(float *)(player + 0x7254);
            I8(0x7243) = 4;
        }
    } else {
        I8(0x7243) = 4;
    }
    if (pl_no_ground(player) != 0) {
        pl_apply_acceleration(player);
        I16(238) = I16(238) + 1;
        if (I16(238) > 10) {
            anim_id = 5; anim_flag = 6;
            goto start_anim;
        }
        goto post_update;
    }
    I16(238) = 0;
    F32(60) = 0.0f;
    F32(72) = *(float *)(player + 0x71E4);
    if (I16(236) != 0) {
        if (pl_get_held_item_class(player) != 0) {
            angle_diff = (unsigned short)(I16(0x7248) - I32(48));
            if (angle_diff & 0x8000)
                angle_diff |= 0xFFFF0000;
            I32(48) = (unsigned short)(I32(48) + angle_diff / I16(236));
            I16(236) = I16(236) - 1;
            if (I16(236) != 0)
                pl_update_walk_motion(player);
        } else {
            angle_diff = (unsigned short)(pl_angle_to_target_pos(player) - I32(48));
            if (angle_diff & 0x8000)
                angle_diff |= 0xFFFF0000;
            I32(48) = (unsigned short)(I32(48) + angle_diff / I16(236));
            I16(236) = I16(236) - 1;
        }
    } else {
        if (pl_get_held_item_class(player) != 0)
            I32(48) = I32(0x7248);
        else
            I32(48) = pl_angle_to_target_pos(player);
    }
    if (I32(732) & 0xF0) {
        I32(0x7248) = (unsigned short)(pl_stick_dir_angle(player) + g_cam_yaw16);
        pl_set_velocity_from_move_table(player, I32(0x7248));
        if (I32(740) & 0xF0) {
            if (pl_get_held_item_class(player) != 0) {
                I16(236) = 10;
                pl_update_walk_motion(player);
            } else {
                I16(236) = 6;
            }
        }
    } else {
        if (I16(236) == 0) {
            anim_id = 0; anim_flag = 0;
            goto start_anim;
        }
    }
post_update:
    if (pl_step_motion(player) != 0)
        pl_update_walk_motion(player);
    pl_apply_velocity(player);
    if (player[0x7236] == 0)
        return;
    if (I16(242) == 0) {
        if (I8(0x27C) == 2) {
            block = PLAYER_BLOCK;
            thunk_FUN_0c062242(block + 768 + (short)((signed char)block[0x71F1] * 3520) + 3168, player + 0x727C);
            F32(0x7280) = F32(36);
            FUN_0c0421ee(player + 0x727C, 0);
        }
        FUN_0c0a3e10(I8(3), I8(0x27C), 0);
        I16(242) = 32;
    }
    if (I16(242) == 16) {
        if (I8(0x27C) == 2) {
            block = PLAYER_BLOCK;
            thunk_FUN_0c062242(block + 768 + (short)((signed char)block[0x71F1] * 3520) + 2640, player + 0x727C);
            F32(0x7280) = F32(36);
            FUN_0c0421ee(player + 0x727C, 0);
        }
        FUN_0c0a3e10(I8(3), I8(0x27C), 1);
    }
    I16(242) = I16(242) - 1;
    return;
start_anim:
    pl_change_state(player, anim_id, anim_flag);
}
