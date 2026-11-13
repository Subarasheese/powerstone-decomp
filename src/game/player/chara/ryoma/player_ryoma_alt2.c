/* character 1 (Ryoma) (0c069a98-0c06ce50) */

int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int pl_step_motion(void *);
int pl_apply_velocity(void *);
int pl_apply_acceleration(void *);
int pl_apply_motion_translation(void *);
void pl_end_action_choose_state(void *);

void pl_ryoma_update_action_default(char *obj)
{
    signed char kind[13] = {0, 0, 0, 0, 0, 0, 2, 2, -1, -1, 4, -1, 5};
    signed char when[13] = {4, 6, 10, 15, 6, 2, 5, 6, -1, -1, 10, -1, 10};
    signed char arg[13] = {12, 16, 13, 18, 8, 35, 12, 21, -1, -1, 16, -1, 27};
    int idx;
    short frame;

    idx = *(signed char *)(obj + 0x7238);
    if (when[idx] > 0) {
        frame = *(short *)(obj + 0xF0) + 1;
        *(short *)(obj + 0xF0) = frame;
        if (frame == when[idx]) {
            switch (kind[idx]) {
            case 0:
                if (*(signed char *)(obj + 0x71F1) == 0)
                    fx_spawn_on_player_part(obj[3], 1, 5, 1, arg[idx], 0x52, 0xC14EEC0, 0xC14EECC);
                else
                    fx_spawn_on_player_part(obj[3], 1, 5, 1, arg[idx], 0x52, 0xC14EED8, 0xC14EEE4);
                break;
            case 1:
                if (*(signed char *)(obj + 0x71F1) == 0)
                    fx_spawn_on_player_part(obj[3], 1, 7, 1, arg[idx], 0x42, 0xC14EF20, 0xC14EF2C);
                else
                    fx_spawn_on_player_part(obj[3], 1, 7, 1, arg[idx], 0x42, 0xC14EF38, 0xC14EF44);
                break;
            case 2:
                if (*(signed char *)(obj + 0x71F1) == 0)
                    fx_spawn_on_player_part(obj[3], 0, 14, 5, arg[idx], 0x53, 0xC14EF80, 0xC14EF8C);
                else
                    fx_spawn_on_player_part(obj[3], 0, 14, 6, arg[idx], 0x53, 0xC14EF80, 0xC14EF8C);
                break;
            case 3:
                if (*(signed char *)(obj + 0x71F1) == 0)
                    fx_spawn_on_player_part(obj[3], 0, 17, 5, arg[idx], 0x53, 0xC14EF80, 0xC14EF8C);
                else
                    fx_spawn_on_player_part(obj[3], 0, 17, 6, arg[idx], 0x53, 0xC14EF80, 0xC14EF8C);
                break;
            case 4:
                if (*(signed char *)(obj + 0x71F1) == 0) {
                    fx_spawn_on_player_part(obj[3], 1, 5, 1, arg[idx], 0x43, 0xC14EEC0, 0xC14EECC);
                    fx_spawn_on_player_part(obj[3], 1, 5, 1, arg[idx], 0x43, 0xC14EEF0, 0xC14EEFC);
                    fx_spawn_on_player_part(obj[3], 1, 5, 1, arg[idx], 0x43, 0xC14EF08, 0xC14EF14);
                } else {
                    fx_spawn_on_player_part(obj[3], 1, 5, 1, arg[idx], 0x43, 0xC14EED8, 0xC14EEE4);
                }
                break;
            default:
                if (*(signed char *)(obj + 0x71F1) == 0)
                    fx_spawn_on_player_part(obj[3], 1, 5, 1, arg[idx], 0x52, 0xC14EEC0, 0xC14EECC);
                else
                    fx_spawn_on_player_part(obj[3], 1, 5, 1, arg[idx], 0x52, 0xC14EED8, 0xC14EEE4);
                if (*(signed char *)(obj + 0x71F1) == 0)
                    fx_spawn_on_player_part(obj[3], 1, 7, 1, arg[idx], 0x42, 0xC14EF20, 0xC14EF2C);
                else
                    fx_spawn_on_player_part(obj[3], 1, 7, 1, arg[idx], 0x42, 0xC14EF38, 0xC14EF44);
                break;
            }
        }
    }
    pl_step_motion(obj);
    pl_apply_velocity(obj);
    pl_apply_acceleration(obj);
    pl_apply_motion_translation(obj);
    if (*(signed char *)(obj + 0x71AA) != 0)
        pl_end_action_choose_state(obj);
}
