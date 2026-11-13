/* Motion sound and voice cues of a fighter (FUN_0c0a3824 / FUN_0c0a3988 first update the current motion frame): for
   the motion id +0x71A4 (bank) / +0x71A5 (number) it schedules the swing sounds (FUN_0c0a37da(o, frame, sound)) and
   the voices (FUN_0c0a395c(fighter, frame, voice); some throws also make the thrown fighter +0x1C cry out) at the given
   frames. Nothing happens while the fighter is frozen (+0x72B0 == 1). */
void FUN_0c0a3824(char *o);
void FUN_0c0a3988(char *o);
void FUN_0c0a37da(char *o, int frame, int sound);
void FUN_0c0a395c(char *o, int frame, int voice);

#define MOTION(o) ((*(signed char *)((o) + 0x71A4) << 8) + *(unsigned char *)((o) + 0x71A5))

void FUN_0c080804(char *o)
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
        FUN_0c0a37da(o, 5, 9);
        break;
    case 259:
    case 274:
    case 276:
    case 283:
    case 284:
    case 407:
    case 416:
        FUN_0c0a37da(o, 5, 10);
        break;
    case 266:
    case 272:
    case 280:
    case 327:
        FUN_0c0a37da(o, 5, 7);
        break;
    case 270:
    case 273:
    case 281:
        FUN_0c0a37da(o, 5, 8);
        break;
    case 278:
        FUN_0c0a37da(o, 14, 10);
        break;
    case 309:
        FUN_0c0a37da(o, 5, 15);
        break;
    case 311:
        FUN_0c0a37da(o, 13, 15);
        FUN_0c0a37da(o, 29, 9);
        break;
    case 313:
        FUN_0c0a37da(o, 5, 9);
        FUN_0c0a37da(o, 10, 9);
        break;
    case 403:
        FUN_0c0a37da(o, 15, 11);
        break;
    case 404:
        FUN_0c0a37da(o, 5, 11);
        break;
    case 418:
        FUN_0c0a37da(o, 25, 9);
        break;
    case 1025:
        FUN_0c0a37da(o, 13, 15);
        FUN_0c0a37da(o, 39, 7);
        FUN_0c0a37da(o, 64, 7);
        FUN_0c0a37da(o, 92, 7);
        FUN_0c0a37da(o, 116, 15);
        break;
    case 1027:
        FUN_0c0a37da(o, 9, 15);
        FUN_0c0a37da(o, 28, 7);
        FUN_0c0a37da(o, 48, 7);
        FUN_0c0a37da(o, 62, 7);
        FUN_0c0a37da(o, 76, 7);
        FUN_0c0a37da(o, 89, 7);
        FUN_0c0a37da(o, 106, 15);
        break;
    case 1031:
        FUN_0c0a37da(o, 12, 15);
        FUN_0c0a37da(o, 75, 9);
        FUN_0c0a37da(o, 76, 3);
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
        FUN_0c0a395c(o, 0, 5);
        break;
    case 41:
        FUN_0c0a395c(o, 0, 16);
        break;
    case 55:
        FUN_0c0a395c(o, 1, 4);
        break;
    case 259:
    case 274:
    case 276:
    case 278:
    case 283:
    case 284:
        FUN_0c0a395c(o, 0, 6);
        break;
    case 266:
    case 272:
    case 280:
        FUN_0c0a395c(o, 0, 3);
        break;
    case 270:
    case 273:
    case 281:
        FUN_0c0a395c(o, 0, 4);
        break;
    case 311:
        FUN_0c0a395c(o, 33, 5);
        break;
    case 327:
        FUN_0c0a395c(o, 5, 3);
        break;
    case 353:
        FUN_0c0a395c(o, 0, 25);
        FUN_0c0a395c(o, 5, 49);
        break;
    case 355:
    case 357:
        FUN_0c0a395c(o, 0, 24);
        FUN_0c0a395c(o, 5, 51);
        break;
    case 359:
    case 360:
        FUN_0c0a395c(o, 0, 28);
        break;
    case 361:
        FUN_0c0a395c(o, 0, 26);
        FUN_0c0a395c(o, 0, 48);
        break;
    case 368:
    case 370:
        FUN_0c0a395c(o, 0, 27);
        FUN_0c0a395c(o, 8, 3);
        FUN_0c0a395c(o, 34, 3);
        FUN_0c0a395c(o, 53, 3);
        FUN_0c0a395c(o, 79, 4);
        FUN_0c0a395c(o, 123, 4);
        FUN_0c0a395c(o, 153, 5);
        FUN_0c0a395c(o, 205, 6);
        FUN_0c0a395c(*(char **)(o + 28), 10, 10);
        FUN_0c0a395c(*(char **)(o + 28), 36, 10);
        FUN_0c0a395c(*(char **)(o + 28), 56, 11);
        FUN_0c0a395c(*(char **)(o + 28), 81, 11);
        FUN_0c0a395c(*(char **)(o + 28), 125, 11);
        FUN_0c0a395c(*(char **)(o + 28), 155, 12);
        FUN_0c0a395c(*(char **)(o + 28), 208, 12);
        break;
    case 404:
        FUN_0c0a395c(o, 5, 5);
        break;
    case 418:
        FUN_0c0a395c(o, 25, 5);
        break;
    case 768:
        FUN_0c0a395c(o, 0, 0);
        FUN_0c0a395c(o, 48, 52);
        break;
    case 769:
        FUN_0c0a395c(o, 0, 29);
        FUN_0c0a37da(o, 56, 15);
        break;
    case 770:
        FUN_0c0a395c(o, 0, 19);
        break;
    case 771:
        FUN_0c0a395c(o, 0, 20);
        FUN_0c0a37da(o, 137, 14);
        break;
    case 1024:
        FUN_0c0a395c(o, 30, 7);
        FUN_0c0a395c(o, 80, 6);
        break;
    case 1025:
        FUN_0c0a395c(o, 13, 5);
        FUN_0c0a395c(o, 42, 3);
        FUN_0c0a395c(o, 70, 3);
        FUN_0c0a395c(o, 99, 3);
        FUN_0c0a395c(o, 127, 5);
        FUN_0c0a395c(*(char **)(o + 28), 20, 10);
        FUN_0c0a395c(*(char **)(o + 28), 42, 10);
        FUN_0c0a395c(*(char **)(o + 28), 70, 11);
        break;
    case 1027:
        FUN_0c0a395c(o, 9, 3);
        FUN_0c0a395c(o, 28, 4);
        FUN_0c0a395c(o, 48, 5);
        FUN_0c0a395c(o, 62, 5);
        FUN_0c0a395c(o, 76, 5);
        FUN_0c0a395c(o, 89, 5);
        FUN_0c0a395c(o, 106, 15);
        FUN_0c0a395c(*(char **)(o + 28), 31, 10);
        FUN_0c0a395c(*(char **)(o + 28), 50, 10);
        FUN_0c0a395c(*(char **)(o + 28), 64, 11);
        FUN_0c0a395c(*(char **)(o + 28), 91, 10);
        break;
    case 1031:
        FUN_0c0a395c(o, 25, 7);
        FUN_0c0a395c(o, 75, 3);
        FUN_0c0a395c(*(char **)(o + 28), 74, 12);
        break;
    }
}
