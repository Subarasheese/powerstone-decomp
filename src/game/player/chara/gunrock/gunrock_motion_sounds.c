/* tail of the Gunrock (char 4) block: motion sound table and effect-at-frame helper (0c07a1e4-0c07ac0c) */

extern void FUN_0c0a3824(char *);
extern void FUN_0c0a3988(char *);
extern void pl_play_side_se_at_frame(char *, int, int);
extern void pl_play_voice_at_frame(char *, int, int);
extern void pl_set_effect_at_frame(char *, int, int, int);

void pl_gunrock_play_motion_sounds(char *obj)
{
    int move_code;

    if (obj[0x72B0] == 1)
        return;
    FUN_0c0a3824(obj);
    FUN_0c0a3988(obj);
    move_code = (obj[0x71A4] << 8) + (unsigned char)obj[0x71A5];
    switch (move_code) {
    case 257:
        pl_play_side_se_at_frame(obj, 15, 9);
        break;
    case 266:
        pl_play_side_se_at_frame(obj, 3, 7);
        break;
    case 268:
        pl_play_side_se_at_frame(obj, 6, 8);
        break;
    case 270:
        pl_play_side_se_at_frame(obj, 1, 7);
        pl_play_side_se_at_frame(obj, 12, 7);
        pl_play_side_se_at_frame(obj, 23, 7);
        pl_play_side_se_at_frame(obj, 30, 7);
        break;
    case 271:
        pl_play_side_se_at_frame(obj, 14, 10);
        break;
    case 272:
        pl_play_side_se_at_frame(obj, 5, 7);
        break;
    case 273:
        pl_play_side_se_at_frame(obj, 8, 9);
        break;
    case 274:
        pl_play_side_se_at_frame(obj, 19, 10);
        break;
    case 275:
    case 281:
        pl_play_side_se_at_frame(obj, 12, 8);
        break;
    case 276:
        pl_play_side_se_at_frame(obj, 16, 9);
        break;
    case 280:
        pl_play_side_se_at_frame(obj, 8, 7);
        break;
    case 282:
        pl_play_side_se_at_frame(obj, 19, 9);
        break;
    case 284:
        pl_play_side_se_at_frame(obj, 13, 10);
        break;
    case 313:
    case 330:
        pl_play_side_se_at_frame(obj, 14, 9);
        break;
    case 327:
        pl_play_side_se_at_frame(obj, 2, 7);
        break;
    case 407:
    case 413:
        pl_play_side_se_at_frame(obj, 4, 10);
        break;
    case 416:
        pl_play_side_se_at_frame(obj, 0, 10);
        break;
    case 418:
        pl_play_side_se_at_frame(obj, 13, 9);
        break;
    case 1026:
        pl_play_side_se_at_frame(obj, 65, 10);
        break;
    case 1027:
        pl_play_side_se_at_frame(obj, 10, 12);
        pl_play_side_se_at_frame(obj, 80, 24);
        break;
    case 1031:
        pl_play_side_se_at_frame(obj, 10, 12);
        break;
    case 1079:
        pl_play_side_se_at_frame(obj, 58, 12);
        break;
    default:
        break;
    }
    move_code = (obj[0x71A4] << 8) + (unsigned char)obj[0x71A5];
    switch (move_code) {
    case 20:
    case 21:
    case 22:
    case 23:
    case 41:
        pl_play_voice_at_frame(obj, 0, 16);
        break;
    case 55:
        pl_play_voice_at_frame(obj, 10, 3);
        break;
    case 257:
        pl_play_voice_at_frame(obj, 15, 5);
        break;
    case 266:
        pl_play_voice_at_frame(obj, 3, 3);
        break;
    case 268:
        pl_play_voice_at_frame(obj, 6, 4);
        break;
    case 270:
        pl_play_voice_at_frame(obj, 27, 4);
        break;
    case 271:
        pl_play_voice_at_frame(obj, 14, 6);
        break;
    case 272:
        pl_play_voice_at_frame(obj, 5, 3);
        break;
    case 273:
        pl_play_voice_at_frame(obj, 8, 5);
        break;
    case 274:
    case 282:
        pl_play_voice_at_frame(obj, 19, 6);
        break;
    case 275:
    case 281:
        pl_play_voice_at_frame(obj, 12, 4);
        break;
    case 276:
        pl_play_voice_at_frame(obj, 16, 6);
        break;
    case 280:
        pl_play_voice_at_frame(obj, 8, 3);
        break;
    case 284:
        pl_play_voice_at_frame(obj, 13, 6);
        break;
    case 313:
        pl_play_voice_at_frame(obj, 14, 3);
        break;
    case 327:
        pl_play_voice_at_frame(obj, 2, 3);
        break;
    case 330:
        pl_play_voice_at_frame(obj, 14, 4);
        break;
    case 407:
    case 413:
        pl_play_voice_at_frame(obj, 4, 4);
        break;
    case 416:
        pl_play_voice_at_frame(obj, 0, 5);
        break;
    case 418:
        pl_play_voice_at_frame(obj, 13, 5);
        break;
    case 768:
        pl_play_voice_at_frame(obj, 0, 0);
        break;
    case 769:
        pl_play_voice_at_frame(obj, 0, 29);
        break;
    case 770:
        pl_play_voice_at_frame(obj, 0, 19);
        break;
    case 771:
        pl_play_voice_at_frame(obj, 0, 20);
        break;
    case 1026:
        pl_play_voice_at_frame(obj, 0, 3);
        pl_play_voice_at_frame(obj, 60, 7);
        break;
    case 1027:
        pl_play_voice_at_frame(obj, 0, 7);
        break;
    case 1029:
        pl_play_voice_at_frame(obj, 5, 7);
        pl_play_voice_at_frame(obj, 50, 4);
        break;
    case 1031:
        pl_play_voice_at_frame(obj, 26, 7);
        break;
    default:
        break;
    }
    move_code = (obj[0x71A4] << 8) + (unsigned char)obj[0x71A5];
    switch (move_code) {
    case 6:
    case 8:
    case 10:
    case 13:
    case 16:
    case 41:
    case 55:
    case 268:
    case 338:
    case 339:
    case 340:
    case 341:
    case 406:
        pl_set_effect_at_frame(obj, 0, 2, 2);
        break;
    case 56:
        pl_set_effect_at_frame(obj, 0, 2, 2);
        pl_set_effect_at_frame(obj, 40, 2, 0);
        break;
    case 266:
        pl_set_effect_at_frame(obj, 0, 2, 1);
        pl_set_effect_at_frame(obj, 6, 2, 0);
        pl_set_effect_at_frame(obj, 25, 2, 1);
        break;
    case 270:
        pl_set_effect_at_frame(obj, 0, 1, 2);
        break;
    case 271:
        pl_set_effect_at_frame(obj, 14, 0, 1);
        pl_set_effect_at_frame(obj, 26, 0, 0);
        break;
    case 274:
        pl_set_effect_at_frame(obj, 0, 0, 2);
        pl_set_effect_at_frame(obj, 0, 1, 1);
        pl_set_effect_at_frame(obj, 18, 0, 0);
        pl_set_effect_at_frame(obj, 18, 1, 2);
        pl_set_effect_at_frame(obj, 40, 1, 0);
        break;
    case 275:
        pl_set_effect_at_frame(obj, 0, 2, 2);
        pl_set_effect_at_frame(obj, 33, 2, 0);
        break;
    case 276:
        pl_set_effect_at_frame(obj, 0, 2, 2);
        pl_set_effect_at_frame(obj, 21, 2, 0);
        break;
    case 280:
        pl_set_effect_at_frame(obj, 0, 2, 2);
        pl_set_effect_at_frame(obj, 29, 2, 0);
        break;
    case 282:
        pl_set_effect_at_frame(obj, 0, 2, 1);
        pl_set_effect_at_frame(obj, 48, 2, 0);
        break;
    case 310:
    case 355:
    case 356:
    case 360:
    case 407:
    case 416:
    case 418:
    case 777:
    case 779:
        pl_set_effect_at_frame(obj, 0, 2, 1);
        break;
    case 311:
    case 312:
    case 357:
        pl_set_effect_at_frame(obj, 0, 2, 0);
        break;
    case 313:
        pl_set_effect_at_frame(obj, 0, 2, 1);
        pl_set_effect_at_frame(obj, 44, 2, 0);
        break;
    case 315:
        pl_set_effect_at_frame(obj, 0, 2, 2);
        pl_set_effect_at_frame(obj, 30, 2, 0);
        break;
    case 316:
        pl_set_effect_at_frame(obj, 0, 2, 2);
        pl_set_effect_at_frame(obj, 31, 2, 0);
        break;
    case 334:
        pl_set_effect_at_frame(obj, 0, 2, 3);
        pl_set_effect_at_frame(obj, 19, 2, 0);
        break;
    case 352:
        pl_set_effect_at_frame(obj, 53, 2, 1);
        break;
    case 353:
        pl_set_effect_at_frame(obj, 0, 2, 1);
        pl_set_effect_at_frame(obj, 11, 2, 0);
        break;
    case 358:
        pl_set_effect_at_frame(obj, 4, 1, 2);
        pl_set_effect_at_frame(obj, 12, 1, 0);
        pl_set_effect_at_frame(obj, 16, 0, 2);
        pl_set_effect_at_frame(obj, 23, 0, 0);
        break;
    case 361:
        pl_set_effect_at_frame(obj, 0, 2, 1);
        pl_set_effect_at_frame(obj, 76, 2, 0);
        break;
    case 408:
    case 417:
        pl_set_effect_at_frame(obj, 0, 2, 1);
        pl_set_effect_at_frame(obj, 24, 2, 0);
        break;
    case 409:
        pl_set_effect_at_frame(obj, 0, 2, 3);
        break;
    case 410:
        pl_set_effect_at_frame(obj, 0, 2, 3);
        pl_set_effect_at_frame(obj, 17, 2, 0);
        break;
    case 413:
        pl_set_effect_at_frame(obj, 0, 2, 1);
        pl_set_effect_at_frame(obj, 71, 2, 0);
        break;
    case 768:
        pl_set_effect_at_frame(obj, 59, 2, 1);
        pl_set_effect_at_frame(obj, 117, 2, 0);
        break;
    case 769:
        pl_set_effect_at_frame(obj, 48, 1, 1);
        pl_set_effect_at_frame(obj, 116, 1, 0);
        break;
    case 770:
        pl_set_effect_at_frame(obj, 51, 2, 1);
        break;
    case 771:
        pl_set_effect_at_frame(obj, 133, 2, 1);
        pl_set_effect_at_frame(obj, 206, 2, 0);
        break;
    case 776:
        pl_set_effect_at_frame(obj, 0, 2, 1);
        pl_set_effect_at_frame(obj, 75, 2, 0);
        break;
    case 1026:
        pl_set_effect_at_frame(obj, 66, 2, 2);
        break;
    case 1027:
        pl_set_effect_at_frame(obj, 0, 0, 2);
        pl_set_effect_at_frame(obj, 26, 2, 2);
        break;
    case 1029:
        pl_set_effect_at_frame(obj, 52, 2, 2);
        pl_set_effect_at_frame(obj, 60, 3, 0);
        break;
    case 1031:
        pl_set_effect_at_frame(obj, 63, 2, 2);
        break;
    default:
        break;
    }}
