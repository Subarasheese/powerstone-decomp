/* velocity/acceleration/gravity, angle to opponent, stick direction (part 3 of 3 of the same module) (0c09db78-0c09f6a8) */

int pl_stick_dir_angle(char *player);
int pl_get_held_item_class(char *player);
int pl_start_motion(char *player, int mode, int val);

void pl_update_walk_motion(char *player)
{
    int ang_diff;
    int zone;
    int mode;
    int val;
    signed char kind;

    ang_diff = (short)((unsigned short)(pl_stick_dir_angle(player) + *(short *)0xC7F31E0) - *(int *)(player + 48));
    if (ang_diff > -8192 && ang_diff < 8192) {
        zone = 0;
    } else if (ang_diff < -8192 && ang_diff > -24576) {
        zone = 1;
    } else if (ang_diff > 8192 && ang_diff < 24576) {
        zone = 2;
    } else {
        zone = 3;
    }
    if (*(signed char *)(player + 0x7237) == (signed char)zone && *(signed char *)(player + 0x7236) != 8) {
        return;
    }
    *(signed char *)(player + 0x7237) = zone;
    kind = pl_get_held_item_class(player);
    switch (kind) {
    case 0:
    case 17:
    case 18:
    case 19:
        switch (*(signed char *)(player + 0x7237)) {
        case 0:
            val = 3;
            break;
        case 1:
            val = 28;
            break;
        case 2:
            val = 27;
            break;
        default:
            val = 4;
            break;
        }
        pl_start_motion(player, 0, val);
        break;
    case 1:
    case 11:
        pl_start_motion(player, 2, 221);
        break;
    case 2:
    case 3:
        pl_start_motion(player, 2, 239);
        break;
    case 4:
    case 16:
        pl_start_motion(player, 2, 82);
        break;
    case 5:
    case 6:
    case 7:
        pl_start_motion(player, 2, 196);
        break;
    case 8:
        pl_start_motion(player, 2, 249);
        break;
    case 9:
    case 10:
    case 12:
        pl_start_motion(player, 2, 231);
        break;
    case 13:
        pl_start_motion(player, 2, 56);
        break;
    case 14:
        pl_start_motion(player, 2, 31);
        break;
    case 15:
        pl_start_motion(player, 2, 105);
        break;
    default:
        break;
    }
    *(unsigned char *)(player + 0x71A8) = 0;
    *(unsigned char *)(player + 0x71A9) = 8;
}
