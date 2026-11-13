/* Kraken motion-id sound table (0c087604-0c087c34) */

extern void FUN_0c0a3824(char *);
extern void FUN_0c0a3988(char *);
extern void pl_play_side_se_at_frame(char *, int, int);
extern void pl_play_voice_at_frame(char *, int, int);

void pl_kraken_play_motion_sounds(char *obj)
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
    case 258:
        pl_play_side_se_at_frame(obj, 6, 10);
        break;
    case 266:
    case 272:
    case 327:
        pl_play_side_se_at_frame(obj, 5, 7);
        break;
    case 268:
    case 277:
        pl_play_side_se_at_frame(obj, 5, 10);
        break;
    case 269:
    case 286:
        pl_play_side_se_at_frame(obj, 5, 9);
        break;
    case 271:
        pl_play_side_se_at_frame(obj, 14, 10);
        break;
    case 273:
        pl_play_side_se_at_frame(obj, 8, 9);
        break;
    case 274:
        pl_play_side_se_at_frame(obj, 19, 10);
        break;
    case 275:
        pl_play_side_se_at_frame(obj, 12, 8);
        break;
    case 276:
        pl_play_side_se_at_frame(obj, 16, 9);
        break;
    case 279:
        pl_play_side_se_at_frame(obj, 12, 10);
        break;
    case 280:
        pl_play_side_se_at_frame(obj, 8, 7);
        break;
    case 281:
    case 283:
    case 404:
    case 407:
    case 413:
    case 416:
        pl_play_side_se_at_frame(obj, 0, 10);
        break;
    case 282:
        pl_play_side_se_at_frame(obj, 19, 9);
        break;
    case 284:
        pl_play_side_se_at_frame(obj, 13, 9);
        break;
    case 285:
        pl_play_side_se_at_frame(obj, 16, 10);
        break;
    case 287:
        pl_play_side_se_at_frame(obj, 0, 8);
        break;
    case 309:
    case 312:
        pl_play_side_se_at_frame(obj, 5, 15);
        break;
    case 310:
        pl_play_side_se_at_frame(obj, 4, 7);
        break;
    case 311:
        pl_play_side_se_at_frame(obj, 7, 8);
        break;
    case 313:
        pl_play_side_se_at_frame(obj, 13, 26);
        break;
    case 330:
        pl_play_side_se_at_frame(obj, 3, 10);
        break;
    case 403:
        pl_play_side_se_at_frame(obj, 21, 11);
        break;
    case 418:
        pl_play_side_se_at_frame(obj, 25, 11);
        break;
    case 1024:
        pl_play_side_se_at_frame(obj, 106, 9);
        break;
    case 1026:
        pl_play_side_se_at_frame(obj, 19, 11);
        break;
    case 1031:
        pl_play_side_se_at_frame(obj, 32, 11);
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
    case 55:
        pl_play_voice_at_frame(obj, 0, 16);
        break;
    case 258:
    case 277:
    case 279:
    case 281:
    case 283:
        pl_play_voice_at_frame(obj, 0, 6);
        break;
    case 266:
    case 327:
        pl_play_voice_at_frame(obj, 5, 3);
        break;
    case 268:
        pl_play_voice_at_frame(obj, 5, 5);
        break;
    case 269:
    case 274:
    case 284:
    case 286:
    case 404:
    case 407:
    case 413:
    case 416:
        pl_play_voice_at_frame(obj, 0, 5);
        break;
    case 272:
    case 280:
        pl_play_voice_at_frame(obj, 0, 3);
        break;
    case 275:
    case 287:
        pl_play_voice_at_frame(obj, 0, 4);
        break;
    case 285:
        pl_play_voice_at_frame(obj, 16, 6);
        break;
    case 310:
        pl_play_voice_at_frame(obj, 4, 3);
        break;
    case 313:
        pl_play_voice_at_frame(obj, 13, 5);
        break;
    case 330:
        pl_play_voice_at_frame(obj, 3, 5);
        break;
    case 352:
    case 355:
        pl_play_voice_at_frame(obj, 13, 25);
        break;
    case 356:
    case 357:
        pl_play_voice_at_frame(obj, 21, 24);
        break;
    case 360:
    case 368:
        pl_play_voice_at_frame(obj, 0, 26);
        break;
    case 363:
        pl_play_voice_at_frame(obj, 10, 27);
        break;
    case 418:
        pl_play_voice_at_frame(obj, 25, 5);
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
    case 1024:
        pl_play_voice_at_frame(obj, 41, 3);
        pl_play_voice_at_frame(obj, 57, 4);
        pl_play_voice_at_frame(obj, 70, 3);
        pl_play_voice_at_frame(obj, 106, 5);
        break;
    case 1025:
        pl_play_voice_at_frame(obj, 0, 7);
        break;
    case 1026:
        pl_play_voice_at_frame(obj, 0, 3);
        pl_play_voice_at_frame(obj, 19, 5);
        break;
    case 1028:
        pl_play_voice_at_frame(obj, 20, 28);
        break;
    case 1031:
        pl_play_voice_at_frame(obj, 32, 5);
        break;
    default:
        break;
    }}
