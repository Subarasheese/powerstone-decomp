/* Ayame motion-id sound table (0c080804-0c080ff4) */

void FUN_0c0a3824(char *o);
void FUN_0c0a3988(char *o);
void pl_play_side_se_at_frame(char *o, int frame, int sound);
void pl_play_voice_at_frame(char *o, int frame, int voice);
#define MOTION(o) ((*(signed char *)((o) + 0x71A4) << 8) + *(unsigned char *)((o) + 0x71A5))

void pl_ayame_play_motion_sounds(char *o)
{
    if (*(signed char *)(o + 0x72B0) == 1)
        return;
    FUN_0c0a3824(o);
    FUN_0c0a3988(o);
    switch (MOTION(o)) {
    case 256:
    case 257:
    case 268:
    case 277:
    case 282:
    case 285:
    case 310:
    case 330:
    case 413:
        pl_play_side_se_at_frame(o, 5, 9);
        break;
    case 259:
    case 274:
    case 276:
    case 283:
    case 284:
    case 407:
    case 416:
        pl_play_side_se_at_frame(o, 5, 10);
        break;
    case 266:
    case 272:
    case 280:
    case 327:
        pl_play_side_se_at_frame(o, 5, 7);
        break;
    case 270:
    case 273:
    case 281:
        pl_play_side_se_at_frame(o, 5, 8);
        break;
    case 278:
        pl_play_side_se_at_frame(o, 14, 10);
        break;
    case 309:
        pl_play_side_se_at_frame(o, 5, 15);
        break;
    case 311:
        pl_play_side_se_at_frame(o, 13, 15);
        pl_play_side_se_at_frame(o, 29, 9);
        break;
    case 313:
        pl_play_side_se_at_frame(o, 5, 9);
        pl_play_side_se_at_frame(o, 10, 9);
        break;
    case 403:
        pl_play_side_se_at_frame(o, 15, 11);
        break;
    case 404:
        pl_play_side_se_at_frame(o, 5, 11);
        break;
    case 418:
        pl_play_side_se_at_frame(o, 25, 9);
        break;
    case 1025:
        pl_play_side_se_at_frame(o, 13, 15);
        pl_play_side_se_at_frame(o, 39, 7);
        pl_play_side_se_at_frame(o, 64, 7);
        pl_play_side_se_at_frame(o, 92, 7);
        pl_play_side_se_at_frame(o, 116, 15);
        break;
    case 1027:
        pl_play_side_se_at_frame(o, 9, 15);
        pl_play_side_se_at_frame(o, 28, 7);
        pl_play_side_se_at_frame(o, 48, 7);
        pl_play_side_se_at_frame(o, 62, 7);
        pl_play_side_se_at_frame(o, 76, 7);
        pl_play_side_se_at_frame(o, 89, 7);
        pl_play_side_se_at_frame(o, 106, 15);
        break;
    case 1031:
        pl_play_side_se_at_frame(o, 12, 15);
        pl_play_side_se_at_frame(o, 75, 9);
        pl_play_side_se_at_frame(o, 76, 3);
        break;
    }
    switch (MOTION(o)) {
    case 21:
    case 22:
    case 23:
    case 256:
    case 257:
    case 268:
    case 277:
    case 282:
    case 285:
    case 310:
    case 313:
    case 330:
    case 407:
    case 413:
    case 416:
        pl_play_voice_at_frame(o, 0, 5);
        break;
    case 41:
        pl_play_voice_at_frame(o, 0, 16);
        break;
    case 55:
        pl_play_voice_at_frame(o, 1, 4);
        break;
    case 259:
    case 274:
    case 276:
    case 278:
    case 283:
    case 284:
        pl_play_voice_at_frame(o, 0, 6);
        break;
    case 266:
    case 272:
    case 280:
        pl_play_voice_at_frame(o, 0, 3);
        break;
    case 270:
    case 273:
    case 281:
        pl_play_voice_at_frame(o, 0, 4);
        break;
    case 311:
        pl_play_voice_at_frame(o, 33, 5);
        break;
    case 327:
        pl_play_voice_at_frame(o, 5, 3);
        break;
    case 353:
        pl_play_voice_at_frame(o, 0, 25);
        pl_play_voice_at_frame(o, 5, 49);
        break;
    case 355:
    case 357:
        pl_play_voice_at_frame(o, 0, 24);
        pl_play_voice_at_frame(o, 5, 51);
        break;
    case 359:
    case 360:
        pl_play_voice_at_frame(o, 0, 28);
        break;
    case 361:
        pl_play_voice_at_frame(o, 0, 26);
        pl_play_voice_at_frame(o, 0, 48);
        break;
    case 368:
    case 370:
        pl_play_voice_at_frame(o, 0, 27);
        pl_play_voice_at_frame(o, 8, 3);
        pl_play_voice_at_frame(o, 34, 3);
        pl_play_voice_at_frame(o, 53, 3);
        pl_play_voice_at_frame(o, 79, 4);
        pl_play_voice_at_frame(o, 123, 4);
        pl_play_voice_at_frame(o, 153, 5);
        pl_play_voice_at_frame(o, 205, 6);
        pl_play_voice_at_frame(*(char **)(o + 28), 10, 10);
        pl_play_voice_at_frame(*(char **)(o + 28), 36, 10);
        pl_play_voice_at_frame(*(char **)(o + 28), 56, 11);
        pl_play_voice_at_frame(*(char **)(o + 28), 81, 11);
        pl_play_voice_at_frame(*(char **)(o + 28), 125, 11);
        pl_play_voice_at_frame(*(char **)(o + 28), 155, 12);
        pl_play_voice_at_frame(*(char **)(o + 28), 208, 12);
        break;
    case 404:
        pl_play_voice_at_frame(o, 5, 5);
        break;
    case 418:
        pl_play_voice_at_frame(o, 25, 5);
        break;
    case 768:
        pl_play_voice_at_frame(o, 0, 0);
        pl_play_voice_at_frame(o, 48, 52);
        break;
    case 769:
        pl_play_voice_at_frame(o, 0, 29);
        pl_play_side_se_at_frame(o, 56, 15);
        break;
    case 770:
        pl_play_voice_at_frame(o, 0, 19);
        break;
    case 771:
        pl_play_voice_at_frame(o, 0, 20);
        pl_play_side_se_at_frame(o, 137, 14);
        break;
    case 1024:
        pl_play_voice_at_frame(o, 30, 7);
        pl_play_voice_at_frame(o, 80, 6);
        break;
    case 1025:
        pl_play_voice_at_frame(o, 13, 5);
        pl_play_voice_at_frame(o, 42, 3);
        pl_play_voice_at_frame(o, 70, 3);
        pl_play_voice_at_frame(o, 99, 3);
        pl_play_voice_at_frame(o, 127, 5);
        pl_play_voice_at_frame(*(char **)(o + 28), 20, 10);
        pl_play_voice_at_frame(*(char **)(o + 28), 42, 10);
        pl_play_voice_at_frame(*(char **)(o + 28), 70, 11);
        break;
    case 1027:
        pl_play_voice_at_frame(o, 9, 3);
        pl_play_voice_at_frame(o, 28, 4);
        pl_play_voice_at_frame(o, 48, 5);
        pl_play_voice_at_frame(o, 62, 5);
        pl_play_voice_at_frame(o, 76, 5);
        pl_play_voice_at_frame(o, 89, 5);
        pl_play_voice_at_frame(o, 106, 15);
        pl_play_voice_at_frame(*(char **)(o + 28), 31, 10);
        pl_play_voice_at_frame(*(char **)(o + 28), 50, 10);
        pl_play_voice_at_frame(*(char **)(o + 28), 64, 11);
        pl_play_voice_at_frame(*(char **)(o + 28), 91, 10);
        break;
    case 1031:
        pl_play_voice_at_frame(o, 25, 7);
        pl_play_voice_at_frame(o, 75, 3);
        pl_play_voice_at_frame(*(char **)(o + 28), 74, 12);
        break;
    }
}
