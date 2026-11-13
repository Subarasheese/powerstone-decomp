/* character 1 (Ryoma) (0c06d8b0-0c06dff0) */

extern void FUN_0c0a3824(char *);
extern void FUN_0c0a3988(char *);
extern void pl_play_side_se_at_frame(char *, int, int);
extern void pl_play_voice_at_frame(char *, int, int);

void pl_ryoma_motion_sfx(char *player)
{
    int move_code;

    if (player[0x72B0] == 1)
        return;
    FUN_0c0a3824(player);
    FUN_0c0a3988(player);
    move_code = (player[0x71A4] << 8) + (unsigned char)player[0x71A5];
    switch (move_code) {
    case 20:
    case 21:
    case 22:
    case 23:
    case 41:
    case 55:
        pl_play_side_se_at_frame(player, 0, 14);
        break;
    case 256:
        pl_play_side_se_at_frame(player, 12, 10);
        break;
    case 266:
    case 330:
        pl_play_side_se_at_frame(player, 5, 9);
        break;
    case 268:
    case 327:
        pl_play_side_se_at_frame(player, 2, 7);
        break;
    case 270:
        pl_play_side_se_at_frame(player, 14, 10);
        break;
    case 272:
        pl_play_side_se_at_frame(player, 5, 7);
        break;
    case 273:
        pl_play_side_se_at_frame(player, 10, 8);
        break;
    case 274:
        pl_play_side_se_at_frame(player, 11, 9);
        break;
    case 275:
        pl_play_side_se_at_frame(player, 19, 10);
        break;
    case 278:
        pl_play_side_se_at_frame(player, 10, 9);
        break;
    case 279:
        pl_play_side_se_at_frame(player, 8, 10);
        break;
    case 280:
        pl_play_side_se_at_frame(player, 7, 7);
        break;
    case 281:
        pl_play_side_se_at_frame(player, 11, 8);
        break;
    case 282:
        pl_play_side_se_at_frame(player, 7, 9);
        break;
    case 283:
        pl_play_side_se_at_frame(player, 24, 10);
        break;
    case 284:
        pl_play_side_se_at_frame(player, 9, 9);
        break;
    case 285:
        pl_play_side_se_at_frame(player, 17, 10);
        break;
    case 309:
        pl_play_side_se_at_frame(player, 5, 15);
        break;
    case 310:
    case 311:
    case 313:
    case 404:
    case 407:
    case 413:
    case 416:
        pl_play_side_se_at_frame(player, 0, 9);
        break;
    case 352:
        pl_play_side_se_at_frame(player, 15, 7);
        break;
    case 353:
        pl_play_side_se_at_frame(player, 12, 9);
        break;
    case 356:
        pl_play_side_se_at_frame(player, 15, 8);
        break;
    case 357:
        pl_play_side_se_at_frame(player, 1, 9);
        break;
    case 359:
        pl_play_side_se_at_frame(player, 1, 10);
        break;
    case 403:
        pl_play_side_se_at_frame(player, 16, 11);
        break;
    case 405:
        pl_play_side_se_at_frame(player, 0, 9);
        pl_play_side_se_at_frame(player, 8, 9);
        pl_play_side_se_at_frame(player, 16, 9);
        break;
    case 418:
        pl_play_side_se_at_frame(player, 25, 9);
        break;
    case 421:
        pl_play_side_se_at_frame(player, 32, 11);
        break;
    case 1024:
        pl_play_side_se_at_frame(player, 137, 9);
        break;
    case 1031:
        pl_play_side_se_at_frame(player, 14, 11);
        break;
    default:
        break;
    }
    move_code = (player[0x71A4] << 8) + (unsigned char)player[0x71A5];
    switch (move_code) {
    case 20:
    case 21:
    case 22:
    case 23:
        pl_play_voice_at_frame(player, 1, 16);
        break;
    case 41:
        pl_play_voice_at_frame(player, 2, 4);
        break;
    case 55:
        pl_play_voice_at_frame(player, 5, 4);
        break;
    case 83:
        pl_play_voice_at_frame(player, 0, 15);
        break;
    case 157:
        pl_play_voice_at_frame(player, 0, 17);
        break;
    case 256:
    case 282:
        pl_play_voice_at_frame(player, 10, 5);
        break;
    case 266:
    case 330:
        pl_play_voice_at_frame(player, 5, 5);
        break;
    case 268:
    case 327:
        pl_play_voice_at_frame(player, 2, 3);
        break;
    case 270:
        pl_play_voice_at_frame(player, 19, 6);
        break;
    case 272:
        pl_play_voice_at_frame(player, 7, 3);
        break;
    case 273:
        pl_play_voice_at_frame(player, 12, 4);
        break;
    case 274:
    case 278:
        pl_play_voice_at_frame(player, 14, 5);
        break;
    case 275:
        pl_play_voice_at_frame(player, 23, 6);
        break;
    case 279:
        pl_play_voice_at_frame(player, 11, 6);
        break;
    case 280:
        pl_play_voice_at_frame(player, 10, 3);
        break;
    case 281:
        pl_play_voice_at_frame(player, 13, 4);
        break;
    case 283:
        pl_play_voice_at_frame(player, 28, 6);
        break;
    case 284:
        pl_play_voice_at_frame(player, 13, 5);
        break;
    case 285:
    case 405:
        pl_play_voice_at_frame(player, 16, 5);
        break;
    case 310:
        pl_play_voice_at_frame(player, 0, 4);
        break;
    case 311:
    case 313:
    case 404:
    case 407:
    case 413:
    case 416:
    case 1028:
        pl_play_voice_at_frame(player, 0, 5);
        break;
    case 352:
        pl_play_voice_at_frame(player, 15, 24);
        break;
    case 354:
        pl_play_voice_at_frame(player, 8, 6);
        break;
    case 355:
        pl_play_voice_at_frame(player, 5, 24);
        pl_play_voice_at_frame(player, 4, 48);
        break;
    case 364:
    case 365:
        pl_play_voice_at_frame(player, 29, 27);
        break;
    case 367:
        pl_play_voice_at_frame(player, 7, 25);
        pl_play_voice_at_frame(player, 8, 49);
        break;
    case 418:
        pl_play_voice_at_frame(player, 25, 5);
        break;
    case 768:
        pl_play_voice_at_frame(player, 68, 55);
        pl_play_voice_at_frame(player, 0, 0);
        break;
    case 769:
        pl_play_voice_at_frame(player, 32, 54);
        pl_play_voice_at_frame(player, 0, 28);
        break;
    case 770:
        pl_play_voice_at_frame(player, 80, 58);
        pl_play_voice_at_frame(player, 0, 19);
        break;
    case 771:
        pl_play_voice_at_frame(player, 135, 57);
        pl_play_voice_at_frame(player, 0, 20);
        break;
    case 775:
        pl_play_voice_at_frame(player, 0, 1);
        pl_play_voice_at_frame(player, 50, 56);
        pl_play_voice_at_frame(player, 66, 56);
        pl_play_voice_at_frame(player, 82, 56);
        break;
    case 1024:
        pl_play_voice_at_frame(player, 0, 5);
        pl_play_voice_at_frame(player, 138, 6);
        break;
    case 1027:
        pl_play_voice_at_frame(player, 16, 4);
        break;
    case 1031:
        pl_play_voice_at_frame(player, 14, 5);
        pl_play_voice_at_frame(*(char **)(player + 0x1C), 26, 10);
        break;
    default:
        break;
    }}
