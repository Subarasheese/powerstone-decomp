/* shared fighter code: item pickup, mode enter/update handlers (modes 1..15), hit/knock-back states (0c065cb4-0c06734c) */

struct Player {
    char pad0[3];
    signed char side;
    char pad1[48 - 4];
    int yaw;
    char pad2[238 - 52];
    short counter_238;
    short field_240;
    short timer_242;
    char pad3[732 - 244];
    int flags;
};
extern short g_cam_yaw16;
int pl_stick_dir_angle(struct Player *o);
void pl_step_motion(struct Player *o);
void pl_apply_motion_translation(struct Player *o);
signed char FUN_0c09c782(struct Player *o);
void FUN_0c0634b4(struct Player *o);
void pl_end_action_choose_state(struct Player *o);
void obj_set_mode_owner(int a, int b, int c);

void pl_mode15_cls03_f0(char *raw)
{
    struct Player *player = (struct Player *)raw;
    short cnt;
    if ((player->flags & 0x600) == 0 && player->timer_242 == 0) {
        if (FUN_0c09c782(player) != 0) {
            FUN_0c0634b4(player);
            raw[0x7236] = 0;
            *(int *)(raw + 0x71CC) = 0;
        } else {
            obj_set_mode_owner(*(int *)(raw + 0x71CC), 5, player->side);
        }
        pl_end_action_choose_state(player);
    } else {
        if (player->flags & 0xF0) {
            *(int *)(raw + 0x7248) = (unsigned short)(pl_stick_dir_angle(player) + g_cam_yaw16 - player->yaw);
            if (*(int *)(raw + 0x7248) & 0x8000)
                *(int *)(raw + 0x7248) |= 0xFFFF0000;
            if (*(int *)(raw + 0x7248) > 364 || *(int *)(raw + 0x7248) < -364) {
                if (*(int *)(raw + 0x7248) > 0)
                    *(int *)(raw + 0x7248) = 364;
                else
                    *(int *)(raw + 0x7248) = -364;
                player->yaw = (unsigned short)(player->yaw + *(short *)(raw + 0x7248));
            }
        }
        cnt = player->counter_238 - 1;
        player->counter_238 = cnt;
        if (cnt < 0)
            player->counter_238 = 4;
        pl_step_motion(player);
        pl_apply_motion_translation(player);
        if (FUN_0c09c782(player) != 0 && (raw[0x71F1] == 0 || *(short *)(raw + 0x71F4) != 0)) {
            FUN_0c0634b4(player);
            raw[0x7236] = 0;
            *(int *)(raw + 0x71CC) = 0;
            pl_end_action_choose_state(player);
        }
    }
    if (player->timer_242 != 0)
        player->timer_242 = player->timer_242 - 1;
}
