/* Motion sound, voice and weapon-display cues of another fighter's move set (same scheme as FUN_0c080804): after
   FUN_0c0a3824 / FUN_0c0a3988 update the motion frame, the motion id +0x71A4 / +0x71A5 selects the swing sounds
   (FUN_0c0a37da(o, frame, sound)), the voices (FUN_0c0a395c(fighter, frame, voice), sometimes for the thrown fighter
   +0x1C) and, at given frames, shows or hides the weapon parts (FUN_0c07e6f6(o, frame, part, shown)). Nothing happens
   while the fighter is frozen (+0x72B0 == 1). */
void FUN_0c0a3824(char *o);
void FUN_0c0a3988(char *o);
void FUN_0c0a37da(char *o, int frame, int sound);
void FUN_0c0a395c(char *o, int frame, int voice);
void FUN_0c07e6f6(char *o, int frame, int part, int shown);

#define MOTION(o) ((*(signed char *)((o) + 0x71A4) << 8) + *(unsigned char *)((o) + 0x71A5))

void FUN_0c07dd0c(char *o)
{
    if (*(signed char *)(o + 0x72B0) == 1)
        return;
    FUN_0c0a3824(o);
    FUN_0c0a3988(o);
    switch (MOTION(o)) {
    case 256:
    case 275:
        FUN_0c0a37da(o, 14, 10);
        break;
    case 257:
        FUN_0c0a37da(o, 16, 9);
        break;
    case 258:
    case 412:
        FUN_0c0a37da(o, 16, 10);
        break;
    case 266:
        FUN_0c0a37da(o, 3, 7);
        break;
    case 268:
        FUN_0c0a37da(o, 9, 8);
        break;
    case 272:
        FUN_0c0a37da(o, 5, 7);
        break;
    case 274:
        FUN_0c0a37da(o, 7, 8);
        break;
    case 276:
    case 277:
        FUN_0c0a37da(o, 14, 9);
        break;
    case 278:
        FUN_0c0a37da(o, 3, 10);
        break;
    case 280:
        FUN_0c0a37da(o, 6, 7);
        break;
    case 282:
        FUN_0c0a37da(o, 8, 8);
        break;
    case 283:
        FUN_0c0a37da(o, 13, 9);
        break;
    case 284:
        FUN_0c0a37da(o, 13, 10);
        break;
    case 285:
        FUN_0c0a37da(o, 11, 10);
        break;
    case 313:
        FUN_0c0a37da(o, 12, 9);
        break;
    case 327:
        FUN_0c0a37da(o, 0, 7);
        break;
    case 407:
        FUN_0c0a37da(o, 9, 12);
        break;
    case 416:
        FUN_0c0a37da(o, 0, 10);
        break;
    case 418:
        FUN_0c0a37da(o, 25, 11);
        break;
    case 768:
        FUN_0c0a37da(o, 23, 13);
        break;
    case 769:
        FUN_0c0a37da(o, 42, 9);
        break;
    case 775:
        FUN_0c0a37da(o, 22, 8);
        break;
    case 1024:
        FUN_0c0a37da(o, 96, 12);
        break;
    case 1025:
        FUN_0c0a37da(o, 19, 13);
        FUN_0c0a37da(o, 50, 12);
        break;
    case 1026:
        FUN_0c0a37da(o, 62, 12);
        break;
    case 1027:
        FUN_0c0a37da(o, 43, 10);
        break;
    case 1028:
        FUN_0c0a37da(o, 70, 10);
        break;
    case 1031:
        FUN_0c0a37da(o, 25, 12);
        break;
    }
    switch (MOTION(o)) {
    case 20:
    case 21:
    case 22:
    case 23:
    case 41:
        FUN_0c0a395c(o, 0, 16);
        break;
    case 26:
        FUN_0c07e6f6(o, 0, 2, 1);
        FUN_0c07e6f6(o, 12, 2, 0);
        break;
    case 55:
        FUN_0c0a395c(o, 10, 3);
        break;
    case 256:
        FUN_0c0a395c(o, 14, 6);
        FUN_0c07e6f6(o, 0, 2, 1);
        FUN_0c07e6f6(o, 12, 0, 0);
        FUN_0c07e6f6(o, 44, 1, 0);
        break;
    case 257:
        FUN_0c0a395c(o, 16, 5);
        FUN_0c07e6f6(o, 0, 2, 2);
        FUN_0c07e6f6(o, 14, 2, 0);
        break;
    case 258:
        FUN_0c0a395c(o, 16, 6);
        FUN_0c07e6f6(o, 0, 2, 1);
        FUN_0c07e6f6(o, 11, 2, 0);
        break;
    case 266:
        FUN_0c0a395c(o, 3, 3);
        FUN_0c07e6f6(o, 0, 0, 1);
        FUN_0c07e6f6(o, 24, 0, 0);
        break;
    case 268:
        FUN_0c0a395c(o, 9, 4);
        FUN_0c07e6f6(o, 7, 2, 1);
        break;
    case 272:
        FUN_0c0a395c(o, 5, 3);
        break;
    case 274:
        FUN_0c0a395c(o, 7, 4);
        FUN_0c07e6f6(o, 0, 2, 1);
        FUN_0c07e6f6(o, 6, 2, 0);
        break;
    case 275:
        FUN_0c0a395c(o, 14, 6);
        FUN_0c07e6f6(o, 0, 2, 1);
        FUN_0c07e6f6(o, 14, 2, 0);
        break;
    case 276:
        FUN_0c0a395c(o, 14, 5);
        FUN_0c07e6f6(o, 0, 1, 1);
        FUN_0c07e6f6(o, 25, 1, 0);
        break;
    case 277:
        FUN_0c0a395c(o, 14, 5);
        FUN_0c07e6f6(o, 0, 1, 1);
        FUN_0c07e6f6(o, 49, 1, 0);
        break;
    case 278:
        FUN_0c0a395c(o, 3, 5);
        FUN_0c07e6f6(o, 0, 2, 1);
        FUN_0c07e6f6(o, 31, 2, 0);
        break;
    case 280:
        FUN_0c0a395c(o, 6, 3);
        FUN_0c07e6f6(o, 0, 2, 1);
        FUN_0c07e6f6(o, 7, 2, 0);
        break;
    case 282:
        FUN_0c0a395c(o, 8, 4);
        FUN_0c07e6f6(o, 0, 2, 1);
        FUN_0c07e6f6(o, 8, 2, 0);
        break;
    case 283:
        FUN_0c0a395c(o, 13, 5);
        FUN_0c07e6f6(o, 0, 2, 1);
        FUN_0c07e6f6(o, 31, 2, 0);
        break;
    case 284:
        FUN_0c0a395c(o, 13, 6);
        FUN_0c07e6f6(o, 0, 2, 1);
        FUN_0c07e6f6(o, 13, 2, 0);
        break;
    case 285:
        FUN_0c0a395c(o, 11, 6);
        FUN_0c07e6f6(o, 0, 2, 1);
        FUN_0c07e6f6(o, 10, 2, 0);
        break;
    case 313:
        FUN_0c0a395c(o, 12, 5);
        FUN_0c07e6f6(o, 0, 2, 2);
        FUN_0c07e6f6(o, 14, 0, 0);
        FUN_0c07e6f6(o, 14, 1, 1);
        FUN_0c07e6f6(o, 41, 1, 0);
        break;
    case 315:
        FUN_0c07e6f6(o, 0, 2, 1);
        FUN_0c07e6f6(o, 26, 2, 0);
        break;
    case 316:
        FUN_0c07e6f6(o, 0, 2, 1);
        FUN_0c07e6f6(o, 15, 2, 0);
        break;
    case 327:
        FUN_0c0a395c(o, 0, 3);
        FUN_0c07e6f6(o, 0, 2, 1);
        break;
    case 330:
        FUN_0c07e6f6(o, 0, 2, 1);
        FUN_0c07e6f6(o, 33, 2, 0);
        break;
    case 334:
        FUN_0c07e6f6(o, 0, 2, 1);
        FUN_0c07e6f6(o, 9, 2, 0);
        break;
    case 338:
        FUN_0c07e6f6(o, 0, 2, 1);
        FUN_0c07e6f6(o, 17, 2, 0);
        break;
    case 339:
        FUN_0c07e6f6(o, 0, 2, 1);
        FUN_0c07e6f6(o, 22, 2, 0);
        break;
    case 340:
    case 341:
        FUN_0c07e6f6(o, 0, 2, 1);
        break;
    case 352:
        FUN_0c07e6f6(o, 0, 1, 1);
        FUN_0c07e6f6(o, 43, 1, 0);
        break;
    case 353:
        FUN_0c07e6f6(o, 0, 1, 1);
        FUN_0c07e6f6(o, 36, 1, 0);
        break;
    case 354:
        FUN_0c0a395c(o, 1, 48);
        break;
    case 357:
    case 359:
    case 363:
    case 366:
        FUN_0c0a395c(o, 1, 51);
        break;
    case 407:
        FUN_0c0a395c(o, 9, 4);
        FUN_0c07e6f6(o, 0, 1, 1);
        break;
    case 412:
        FUN_0c0a395c(o, 16, 4);
        break;
    case 416:
        FUN_0c0a395c(o, 0, 5);
        break;
    case 418:
        FUN_0c0a395c(o, 25, 5);
        break;
    case 768:
        FUN_0c0a395c(o, 5, 0);
        break;
    case 769:
        FUN_0c0a395c(o, 5, 30);
        FUN_0c07e6f6(o, 41, 1, 3);
        FUN_0c07e6f6(o, 86, 1, 0);
        break;
    case 770:
        FUN_0c0a395c(o, 0, 19);
        FUN_0c07e6f6(o, 0, 2, 2);
        break;
    case 771:
        FUN_0c0a395c(o, 0, 20);
        FUN_0c07e6f6(o, 45, 1, 2);
        FUN_0c07e6f6(o, 59, 1, 3);
        break;
    case 773:
        FUN_0c07e6f6(o, 54, 2, 1);
        break;
    case 774:
        FUN_0c07e6f6(o, 13, 0, 1);
        FUN_0c07e6f6(o, 13, 1, 2);
        break;
    case 775:
        FUN_0c07e6f6(o, 11, 2, 2);
        FUN_0c07e6f6(o, 25, 2, 3);
        FUN_0c07e6f6(o, 66, 2, 2);
        FUN_0c07e6f6(o, 74, 2, 0);
        break;
    case 1024:
        FUN_0c0a395c(o, 35, 7);
        FUN_0c07e6f6(o, 0, 1, 1);
        FUN_0c07e6f6(o, 108, 0, 1);
        break;
    case 1025:
        FUN_0c0a395c(o, 50, 4);
        FUN_0c07e6f6(o, 0, 2, 1);
        FUN_0c07e6f6(o, 107, 2, 0);
        break;
    case 1026:
        FUN_0c07e6f6(o, 0, 2, 1);
        FUN_0c07e6f6(o, 86, 2, 0);
        break;
    case 1027:
        FUN_0c07e6f6(o, 0, 2, 1);
        FUN_0c07e6f6(o, 50, 2, 0);
        break;
    case 1028:
        FUN_0c0a395c(o, 55, 5);
        FUN_0c07e6f6(o, 0, 2, 1);
        FUN_0c07e6f6(o, 86, 2, 0);
        break;
    case 1031:
        FUN_0c0a395c(o, 25, 4);
        break;
    case 1032:
    case 1041:
        FUN_0c0a395c(o, 0, 7);
        break;
    case 1045:
        FUN_0c0a395c(o, 35, 26);
        break;
    }
}
