/* Rouge motion-id sound table (0c083ce0-0c084168) */

extern void FUN_0c0a3824(unsigned char *);
extern void FUN_0c0a3988(unsigned char *);
extern void pl_play_side_se_at_frame(unsigned char *, int, int);
extern void pl_play_voice_at_frame(unsigned char *, int, int);

void pl_rouge_play_motion_sounds(unsigned char *obj)
{
    int event_code;

    if ((signed char)obj[0x72B0] == 1)
        return;
    FUN_0c0a3824(obj);
    FUN_0c0a3988(obj);
    event_code = ((signed char)obj[0x71A4] << 8) + obj[0x71A5];
    switch (event_code) {
    case 256: case 257: case 258: case 261:
        pl_play_side_se_at_frame(obj, 11, 10);
        break;
    case 259:
        pl_play_side_se_at_frame(obj, 9, 8);
        break;
    case 266: case 268: case 272: case 280:
        pl_play_side_se_at_frame(obj, 8, 7);
        break;
    case 270:
        pl_play_side_se_at_frame(obj, 25, 11);
        break;
    case 273: case 281:
        pl_play_side_se_at_frame(obj, 9, 8);
        break;
    case 274:
        pl_play_side_se_at_frame(obj, 9, 9);
        break;
    case 275: case 284:
        pl_play_side_se_at_frame(obj, 10, 9);
        break;
    case 282:
        pl_play_side_se_at_frame(obj, 10, 9);
        break;
    case 283:
        pl_play_side_se_at_frame(obj, 0, 9);
        pl_play_side_se_at_frame(obj, 26, 10);
        break;
    case 309:
        pl_play_side_se_at_frame(obj, 0, 15);
        break;
    case 310:
        pl_play_side_se_at_frame(obj, 0, 10);
        pl_play_voice_at_frame(obj, 0, 4);
        break;
    case 311:
        pl_play_side_se_at_frame(obj, 16, 15);
        pl_play_side_se_at_frame(obj, 36, 10);
        pl_play_voice_at_frame(obj, 36, 4);
        break;
    case 313: case 330:
        pl_play_side_se_at_frame(obj, 0, 9);
        pl_play_voice_at_frame(obj, 0, 4);
        break;
    case 327:
        pl_play_side_se_at_frame(obj, 0, 7);
        pl_play_voice_at_frame(obj, 0, 3);
        break;
    case 403:
        pl_play_side_se_at_frame(obj, 5, 11);
        break;
    case 404:
        pl_play_side_se_at_frame(obj, 0, 10);
        pl_play_voice_at_frame(obj, 0, 4);
        break;
    case 407:
        pl_play_side_se_at_frame(obj, 0, 10);
        pl_play_voice_at_frame(obj, 0, 3);
        break;
    case 408:
        pl_play_side_se_at_frame(obj, 0, 7);
        pl_play_voice_at_frame(obj, 0, 4);
        break;
    case 413: case 416:
        pl_play_side_se_at_frame(obj, 0, 9);
        pl_play_voice_at_frame(obj, 0, 4);
        break;
    case 418:
        pl_play_side_se_at_frame(obj, 0, 12);
        pl_play_voice_at_frame(obj, 0, 4);
        break;
    case 769:
        pl_play_side_se_at_frame(obj, 73, 7);
        break;
    }
    event_code = ((signed char)obj[0x71A4] << 8) + obj[0x71A5];
    switch (event_code) {
    case 20: case 21: case 22: case 23: case 41:
        pl_play_voice_at_frame(obj, 0, 16);
        break;
    case 55:
        pl_play_voice_at_frame(obj, 1, 16);
        break;
    case 256: case 257: case 258: case 261: case 270: case 283:
        pl_play_voice_at_frame(obj, 11, 6);
        break;
    case 259: case 273: case 281:
        pl_play_voice_at_frame(obj, 9, 4);
        break;
    case 266: case 268: case 272: case 280:
        pl_play_voice_at_frame(obj, 8, 3);
        break;
    case 274:
        pl_play_voice_at_frame(obj, 9, 5);
        break;
    case 275: case 282: case 284:
        pl_play_voice_at_frame(obj, 10, 5);
        break;
    case 1025:
        pl_play_voice_at_frame(obj, 0, 7);
        pl_play_voice_at_frame(obj, 44, 50);
        break;
    case 1026:
        pl_play_side_se_at_frame(obj, 51, 12);
        pl_play_voice_at_frame(obj, 51, 7);
        break;
    case 1031:
        pl_play_side_se_at_frame(obj, 21, 15);
        pl_play_side_se_at_frame(obj, 74, 9);
        pl_play_voice_at_frame(obj, 21, 7);
        pl_play_voice_at_frame(obj, 74, 5);
        pl_play_side_se_at_frame(obj, 74, 3);
        pl_play_voice_at_frame(*(unsigned char **)(obj + 28), 74, 12);
        break;
    }
}
