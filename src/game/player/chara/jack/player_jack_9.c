/* character 3 (Jack) (0c076d98-0c077428) */

extern void FUN_0c0a3824(char *);
extern void FUN_0c0a3988(char *);
extern void pl_play_side_se_at_frame(char *, int, int);
extern void pl_play_voice_at_frame(char *, int, int);

void pl_jack_motion_sfx(char *player)
{
    int move_code;

    if (player[0x72B0] == 1)
        return;
    FUN_0c0a3824(player);
    FUN_0c0a3988(player);
    move_code = (player[0x71A4] << 8) + (unsigned char)player[0x71A5];
    switch (move_code) {
    case 21:
    case 22:
    case 23:
    case 41:
        pl_play_side_se_at_frame(player, 0, 14);
        break;
    case 256:
        pl_play_side_se_at_frame(player, 5, 10);
        break;
    case 257:
    case 273:
    case 281:
        pl_play_side_se_at_frame(player, 9, 8);
        break;
    case 258:
        pl_play_side_se_at_frame(player, 9, 9);
        break;
    case 259:
    case 403:
        pl_play_side_se_at_frame(player, 9, 11);
        break;
    case 260:
        pl_play_side_se_at_frame(player, 10, 10);
        break;
    case 266:
    case 272:
    case 280:
    case 327:
        pl_play_side_se_at_frame(player, 5, 7);
        break;
    case 268:
        pl_play_side_se_at_frame(player, 5, 9);
        break;
    case 274:
        pl_play_side_se_at_frame(player, 8, 9);
        break;
    case 275:
        pl_play_side_se_at_frame(player, 13, 10);
        break;
    case 277:
        pl_play_side_se_at_frame(player, 10, 9);
        break;
    case 279:
        pl_play_side_se_at_frame(player, 7, 8);
        break;
    case 282:
    case 283:
        pl_play_side_se_at_frame(player, 10, 9);
        pl_play_side_se_at_frame(player, 20, 10);
        break;
    case 286:
        pl_play_side_se_at_frame(player, 11, 10);
        break;
    case 309:
        pl_play_side_se_at_frame(player, 5, 15);
        break;
    case 310:
    case 404:
        pl_play_side_se_at_frame(player, 0, 9);
        break;
    case 311:
        pl_play_side_se_at_frame(player, 3, 12);
        break;
    case 313:
        pl_play_side_se_at_frame(player, 3, 11);
        break;
    case 330:
        pl_play_side_se_at_frame(player, 6, 9);
        break;
    case 407:
        pl_play_side_se_at_frame(player, 0, 10);
        break;
    case 413:
        pl_play_side_se_at_frame(player, 9, 7);
        pl_play_side_se_at_frame(player, 18, 7);
        break;
    case 415:
        pl_play_side_se_at_frame(player, 0, 15);
        break;
    case 418:
        pl_play_side_se_at_frame(player, 25, 11);
        break;
    case 1024:
        pl_play_side_se_at_frame(player, 21, 7);
        pl_play_side_se_at_frame(player, 32, 7);
        pl_play_side_se_at_frame(player, 48, 7);
        pl_play_side_se_at_frame(player, 64, 7);
        pl_play_side_se_at_frame(player, 80, 7);
        pl_play_side_se_at_frame(player, 98, 3);
        break;
    case 1027:
        pl_play_side_se_at_frame(player, 36, 7);
        pl_play_side_se_at_frame(player, 44, 7);
        pl_play_side_se_at_frame(player, 49, 7);
        break;
    case 1031:
        pl_play_side_se_at_frame(player, 12, 11);
        break;
    default:
        break;
    }
    move_code = (player[0x71A4] << 8) + (unsigned char)player[0x71A5];
    switch (move_code) {
    case 21:
    case 22:
    case 23:
    case 41:
    case 55:
    case 56:
        pl_play_voice_at_frame(player, 0, 16);
        break;
    case 256:
    case 257:
    case 273:
        pl_play_voice_at_frame(player, 10, 4);
        break;
    case 258:
    case 259:
    case 274:
        pl_play_voice_at_frame(player, 8, 5);
        break;
    case 260:
        pl_play_voice_at_frame(player, 8, 6);
        break;
    case 266:
        pl_play_voice_at_frame(player, 4, 5);
        break;
    case 268:
        pl_play_voice_at_frame(player, 5, 5);
        break;
    case 272:
    case 280:
    case 305:
        pl_play_voice_at_frame(player, 10, 3);
        break;
    case 282:
    case 283:
        pl_play_voice_at_frame(player, 10, 6);
        break;
    case 309:
    case 404:
    case 407:
    case 412:
    case 416:
        pl_play_voice_at_frame(player, 0, 5);
        break;
    case 313:
        pl_play_voice_at_frame(player, 3, 5);
        break;
    case 327:
        pl_play_voice_at_frame(player, 5, 3);
        break;
    case 330:
        pl_play_voice_at_frame(player, 6, 5);
        break;
    case 352:
    case 353:
    case 356:
    case 358:
        pl_play_voice_at_frame(player, 10, 24);
        pl_play_voice_at_frame(player, 10, 48);
        break;
    case 354:
    case 355:
    case 357:
    case 359:
        pl_play_voice_at_frame(player, 10, 26);
        pl_play_voice_at_frame(player, 10, 48);
        break;
    case 360:
    case 365:
        pl_play_voice_at_frame(player, 10, 27);
        pl_play_voice_at_frame(player, 30, 49);
        break;
    case 363:
        pl_play_voice_at_frame(player, 0, 28);
        pl_play_voice_at_frame(player, 0, 50);
        break;
    case 418:
        pl_play_voice_at_frame(player, 25, 5);
        break;
    case 768:
        pl_play_voice_at_frame(player, 0, 29);
        break;
    case 769:
        pl_play_voice_at_frame(player, 0, 0);
        break;
    case 770:
        pl_play_voice_at_frame(player, 0, 19);
        break;
    case 771:
        pl_play_voice_at_frame(player, 0, 20);
        break;
    case 1024:
        pl_play_voice_at_frame(player, 21, 7);
        pl_play_voice_at_frame(player, 91, 5);
        break;
    case 1025:
        pl_play_voice_at_frame(player, 30, 7);
        pl_play_voice_at_frame(player, 90, 5);
        break;
    case 1027:
        pl_play_voice_at_frame(player, 0, 3);
        pl_play_voice_at_frame(player, 30, 7);
        break;
    case 1031:
        pl_play_voice_at_frame(*(char **)(player + 0x1C), 31, 12);
        pl_play_voice_at_frame(player, 40, 6);
        break;
    default:
        break;
    }}
