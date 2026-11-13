/* Garuda motion-id sound table (0c07dd0c-0c07e774) */

void FUN_0c0a3824(char *o);
void FUN_0c0a3988(char *o);
void pl_play_side_se_at_frame(char *o, int frame, int sound);
void pl_play_voice_at_frame(char *o, int frame, int voice);
void pl_garuda_cue_at_frame(char *o, int frame, int part, int shown);
#define MOTION(o) ((*(signed char *)((o) + 0x71A4) << 8) + *(unsigned char *)((o) + 0x71A5))

void pl_garuda_play_motion_sounds(char *o)
{
    if (*(signed char *)(o + 0x72B0) == 1)
        return;
    FUN_0c0a3824(o);
    FUN_0c0a3988(o);
    switch (MOTION(o)) {
    case 256:
    case 275:
        pl_play_side_se_at_frame(o, 14, 10);
        break;
    case 257:
        pl_play_side_se_at_frame(o, 16, 9);
        break;
    case 258:
    case 412:
        pl_play_side_se_at_frame(o, 16, 10);
        break;
    case 266:
        pl_play_side_se_at_frame(o, 3, 7);
        break;
    case 268:
        pl_play_side_se_at_frame(o, 9, 8);
        break;
    case 272:
        pl_play_side_se_at_frame(o, 5, 7);
        break;
    case 274:
        pl_play_side_se_at_frame(o, 7, 8);
        break;
    case 276:
    case 277:
        pl_play_side_se_at_frame(o, 14, 9);
        break;
    case 278:
        pl_play_side_se_at_frame(o, 3, 10);
        break;
    case 280:
        pl_play_side_se_at_frame(o, 6, 7);
        break;
    case 282:
        pl_play_side_se_at_frame(o, 8, 8);
        break;
    case 283:
        pl_play_side_se_at_frame(o, 13, 9);
        break;
    case 284:
        pl_play_side_se_at_frame(o, 13, 10);
        break;
    case 285:
        pl_play_side_se_at_frame(o, 11, 10);
        break;
    case 313:
        pl_play_side_se_at_frame(o, 12, 9);
        break;
    case 327:
        pl_play_side_se_at_frame(o, 0, 7);
        break;
    case 407:
        pl_play_side_se_at_frame(o, 9, 12);
        break;
    case 416:
        pl_play_side_se_at_frame(o, 0, 10);
        break;
    case 418:
        pl_play_side_se_at_frame(o, 25, 11);
        break;
    case 768:
        pl_play_side_se_at_frame(o, 23, 13);
        break;
    case 769:
        pl_play_side_se_at_frame(o, 42, 9);
        break;
    case 775:
        pl_play_side_se_at_frame(o, 22, 8);
        break;
    case 1024:
        pl_play_side_se_at_frame(o, 96, 12);
        break;
    case 1025:
        pl_play_side_se_at_frame(o, 19, 13);
        pl_play_side_se_at_frame(o, 50, 12);
        break;
    case 1026:
        pl_play_side_se_at_frame(o, 62, 12);
        break;
    case 1027:
        pl_play_side_se_at_frame(o, 43, 10);
        break;
    case 1028:
        pl_play_side_se_at_frame(o, 70, 10);
        break;
    case 1031:
        pl_play_side_se_at_frame(o, 25, 12);
        break;
    }
    switch (MOTION(o)) {
    case 20:
    case 21:
    case 22:
    case 23:
    case 41:
        pl_play_voice_at_frame(o, 0, 16);
        break;
    case 26:
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        pl_garuda_cue_at_frame(o, 12, 2, 0);
        break;
    case 55:
        pl_play_voice_at_frame(o, 10, 3);
        break;
    case 256:
        pl_play_voice_at_frame(o, 14, 6);
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        pl_garuda_cue_at_frame(o, 12, 0, 0);
        pl_garuda_cue_at_frame(o, 44, 1, 0);
        break;
    case 257:
        pl_play_voice_at_frame(o, 16, 5);
        pl_garuda_cue_at_frame(o, 0, 2, 2);
        pl_garuda_cue_at_frame(o, 14, 2, 0);
        break;
    case 258:
        pl_play_voice_at_frame(o, 16, 6);
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        pl_garuda_cue_at_frame(o, 11, 2, 0);
        break;
    case 266:
        pl_play_voice_at_frame(o, 3, 3);
        pl_garuda_cue_at_frame(o, 0, 0, 1);
        pl_garuda_cue_at_frame(o, 24, 0, 0);
        break;
    case 268:
        pl_play_voice_at_frame(o, 9, 4);
        pl_garuda_cue_at_frame(o, 7, 2, 1);
        break;
    case 272:
        pl_play_voice_at_frame(o, 5, 3);
        break;
    case 274:
        pl_play_voice_at_frame(o, 7, 4);
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        pl_garuda_cue_at_frame(o, 6, 2, 0);
        break;
    case 275:
        pl_play_voice_at_frame(o, 14, 6);
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        pl_garuda_cue_at_frame(o, 14, 2, 0);
        break;
    case 276:
        pl_play_voice_at_frame(o, 14, 5);
        pl_garuda_cue_at_frame(o, 0, 1, 1);
        pl_garuda_cue_at_frame(o, 25, 1, 0);
        break;
    case 277:
        pl_play_voice_at_frame(o, 14, 5);
        pl_garuda_cue_at_frame(o, 0, 1, 1);
        pl_garuda_cue_at_frame(o, 49, 1, 0);
        break;
    case 278:
        pl_play_voice_at_frame(o, 3, 5);
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        pl_garuda_cue_at_frame(o, 31, 2, 0);
        break;
    case 280:
        pl_play_voice_at_frame(o, 6, 3);
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        pl_garuda_cue_at_frame(o, 7, 2, 0);
        break;
    case 282:
        pl_play_voice_at_frame(o, 8, 4);
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        pl_garuda_cue_at_frame(o, 8, 2, 0);
        break;
    case 283:
        pl_play_voice_at_frame(o, 13, 5);
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        pl_garuda_cue_at_frame(o, 31, 2, 0);
        break;
    case 284:
        pl_play_voice_at_frame(o, 13, 6);
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        pl_garuda_cue_at_frame(o, 13, 2, 0);
        break;
    case 285:
        pl_play_voice_at_frame(o, 11, 6);
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        pl_garuda_cue_at_frame(o, 10, 2, 0);
        break;
    case 313:
        pl_play_voice_at_frame(o, 12, 5);
        pl_garuda_cue_at_frame(o, 0, 2, 2);
        pl_garuda_cue_at_frame(o, 14, 0, 0);
        pl_garuda_cue_at_frame(o, 14, 1, 1);
        pl_garuda_cue_at_frame(o, 41, 1, 0);
        break;
    case 315:
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        pl_garuda_cue_at_frame(o, 26, 2, 0);
        break;
    case 316:
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        pl_garuda_cue_at_frame(o, 15, 2, 0);
        break;
    case 327:
        pl_play_voice_at_frame(o, 0, 3);
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        break;
    case 330:
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        pl_garuda_cue_at_frame(o, 33, 2, 0);
        break;
    case 334:
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        pl_garuda_cue_at_frame(o, 9, 2, 0);
        break;
    case 338:
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        pl_garuda_cue_at_frame(o, 17, 2, 0);
        break;
    case 339:
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        pl_garuda_cue_at_frame(o, 22, 2, 0);
        break;
    case 340:
    case 341:
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        break;
    case 352:
        pl_garuda_cue_at_frame(o, 0, 1, 1);
        pl_garuda_cue_at_frame(o, 43, 1, 0);
        break;
    case 353:
        pl_garuda_cue_at_frame(o, 0, 1, 1);
        pl_garuda_cue_at_frame(o, 36, 1, 0);
        break;
    case 354:
        pl_play_voice_at_frame(o, 1, 48);
        break;
    case 357:
    case 359:
    case 363:
    case 366:
        pl_play_voice_at_frame(o, 1, 51);
        break;
    case 407:
        pl_play_voice_at_frame(o, 9, 4);
        pl_garuda_cue_at_frame(o, 0, 1, 1);
        break;
    case 412:
        pl_play_voice_at_frame(o, 16, 4);
        break;
    case 416:
        pl_play_voice_at_frame(o, 0, 5);
        break;
    case 418:
        pl_play_voice_at_frame(o, 25, 5);
        break;
    case 768:
        pl_play_voice_at_frame(o, 5, 0);
        break;
    case 769:
        pl_play_voice_at_frame(o, 5, 30);
        pl_garuda_cue_at_frame(o, 41, 1, 3);
        pl_garuda_cue_at_frame(o, 86, 1, 0);
        break;
    case 770:
        pl_play_voice_at_frame(o, 0, 19);
        pl_garuda_cue_at_frame(o, 0, 2, 2);
        break;
    case 771:
        pl_play_voice_at_frame(o, 0, 20);
        pl_garuda_cue_at_frame(o, 45, 1, 2);
        pl_garuda_cue_at_frame(o, 59, 1, 3);
        break;
    case 773:
        pl_garuda_cue_at_frame(o, 54, 2, 1);
        break;
    case 774:
        pl_garuda_cue_at_frame(o, 13, 0, 1);
        pl_garuda_cue_at_frame(o, 13, 1, 2);
        break;
    case 775:
        pl_garuda_cue_at_frame(o, 11, 2, 2);
        pl_garuda_cue_at_frame(o, 25, 2, 3);
        pl_garuda_cue_at_frame(o, 66, 2, 2);
        pl_garuda_cue_at_frame(o, 74, 2, 0);
        break;
    case 1024:
        pl_play_voice_at_frame(o, 35, 7);
        pl_garuda_cue_at_frame(o, 0, 1, 1);
        pl_garuda_cue_at_frame(o, 108, 0, 1);
        break;
    case 1025:
        pl_play_voice_at_frame(o, 50, 4);
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        pl_garuda_cue_at_frame(o, 107, 2, 0);
        break;
    case 1026:
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        pl_garuda_cue_at_frame(o, 86, 2, 0);
        break;
    case 1027:
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        pl_garuda_cue_at_frame(o, 50, 2, 0);
        break;
    case 1028:
        pl_play_voice_at_frame(o, 55, 5);
        pl_garuda_cue_at_frame(o, 0, 2, 1);
        pl_garuda_cue_at_frame(o, 86, 2, 0);
        break;
    case 1031:
        pl_play_voice_at_frame(o, 25, 4);
        break;
    case 1032:
    case 1041:
        pl_play_voice_at_frame(o, 0, 7);
        break;
    case 1045:
        pl_play_voice_at_frame(o, 35, 26);
        break;
    }
}
