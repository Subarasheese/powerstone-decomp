/* shared fighter code: item pickup, mode enter/update handlers (modes 1..15), hit/knock-back states (0c063318-0c0641a0) */

extern int pl_angle_to_opponent(char *player);
extern void snd_play_char_voice(char *player, int a);
extern void obj_set_mode_owner(void *effect, int a, int b);
extern signed char pl_step_motion(char *player);
extern void pl_end_action_choose_state(char *player);
extern signed char pl_landed(char *player, float a);
extern void pl_change_state(char *player, int a, int b);
extern void pl_apply_velocity(char *player);
extern void pl_apply_acceleration(char *player);

void pl_mode05_update(char *player)
{
    int angle_diff;
    void *effect;

    if (player[0x721E] == 0 && *(short *)(player + 236) != 0) {
        angle_diff = (short)(pl_angle_to_opponent(player) - *(int *)(player + 48));
        if (*(short *)(player + 236) > 0)
            *(int *)(player + 48) = (unsigned short)(*(int *)(player + 48) + angle_diff / *(short *)(player + 236));
    }
    *(short *)(player + 236) = *(short *)(player + 236) - 1;
    if (*(short *)(player + 236) == 0 && *(int *)(player + 0x71CC) != 0) {
        effect = *(void **)(player + 0x71CC);
        if (player[0x71BC] == 2) {
            snd_play_char_voice(player, 9);
            if (player[0x721E] == 0)
                obj_set_mode_owner(effect, 8, player[3]);
            else
                obj_set_mode_owner(effect, 9, player[3]);
        } else {
            snd_play_char_voice(player, 9);
            if (player[0x721E] == 0)
                obj_set_mode_owner(effect, 6, player[3]);
            else
                obj_set_mode_owner(effect, 7, player[3]);
        }
        player[0x7236] = 0;
    }
    if (player[0x71BC] == 2) {
        pl_step_motion(player);
        if (0.0f > *(float *)(player + 60)) {
            if (pl_landed(player, 0.0f) != 0) {
                pl_change_state(player, 6, 0);
                return;
            }
        }
        pl_apply_velocity(player);
        pl_apply_acceleration(player);
    } else {
        if (pl_step_motion(player) != 0)
            pl_end_action_choose_state(player);
    }
}
