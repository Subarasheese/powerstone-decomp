/* Per-move table dispatcher: three stages (FUN_0c0a37da, FUN_0c0a395c, FUN_0c07ab86) each get values chosen by the move code (high byte at +0x71A4, low byte at +0x71A5). */
extern void FUN_0c0a3824(char *);
extern void FUN_0c0a3988(char *);
extern void FUN_0c0a37da(char *, int, int);
extern void FUN_0c0a395c(char *, int, int);
extern void FUN_0c07ab86(char *, int, int, int);

void FUN_0c07a1e4(char *o)
{
    int code;

    if (o[0x72B0] == 1)
        return;
    FUN_0c0a3824(o);
    FUN_0c0a3988(o);
    code = (o[0x71A4] << 8) + (unsigned char)o[0x71A5];
    switch (code) {
    case 257:
        FUN_0c0a37da(o, 15, 9);
        break;
    case 266:
        FUN_0c0a37da(o, 3, 7);
        break;
    case 268:
        FUN_0c0a37da(o, 6, 8);
        break;
    case 270:
        FUN_0c0a37da(o, 1, 7);
        FUN_0c0a37da(o, 12, 7);
        FUN_0c0a37da(o, 23, 7);
        FUN_0c0a37da(o, 30, 7);
        break;
    case 271:
        FUN_0c0a37da(o, 14, 10);
        break;
    case 272:
        FUN_0c0a37da(o, 5, 7);
        break;
    case 273:
        FUN_0c0a37da(o, 8, 9);
        break;
    case 274:
        FUN_0c0a37da(o, 19, 10);
        break;
    case 275:
    case 281:
        FUN_0c0a37da(o, 12, 8);
        break;
    case 276:
        FUN_0c0a37da(o, 16, 9);
        break;
    case 280:
        FUN_0c0a37da(o, 8, 7);
        break;
    case 282:
        FUN_0c0a37da(o, 19, 9);
        break;
    case 284:
        FUN_0c0a37da(o, 13, 10);
        break;
    case 313:
    case 330:
        FUN_0c0a37da(o, 14, 9);
        break;
    case 327:
        FUN_0c0a37da(o, 2, 7);
        break;
    case 407:
    case 413:
        FUN_0c0a37da(o, 4, 10);
        break;
    case 416:
        FUN_0c0a37da(o, 0, 10);
        break;
    case 418:
        FUN_0c0a37da(o, 13, 9);
        break;
    case 1026:
        FUN_0c0a37da(o, 65, 10);
        break;
    case 1027:
        FUN_0c0a37da(o, 10, 12);
        FUN_0c0a37da(o, 80, 24);
        break;
    case 1031:
        FUN_0c0a37da(o, 10, 12);
        break;
    case 1079:
        FUN_0c0a37da(o, 58, 12);
        break;
    default:
        break;
    }
    code = (o[0x71A4] << 8) + (unsigned char)o[0x71A5];
    switch (code) {
    case 20:
    case 21:
    case 22:
    case 23:
    case 41:
        FUN_0c0a395c(o, 0, 16);
        break;
    case 55:
        FUN_0c0a395c(o, 10, 3);
        break;
    case 257:
        FUN_0c0a395c(o, 15, 5);
        break;
    case 266:
        FUN_0c0a395c(o, 3, 3);
        break;
    case 268:
        FUN_0c0a395c(o, 6, 4);
        break;
    case 270:
        FUN_0c0a395c(o, 27, 4);
        break;
    case 271:
        FUN_0c0a395c(o, 14, 6);
        break;
    case 272:
        FUN_0c0a395c(o, 5, 3);
        break;
    case 273:
        FUN_0c0a395c(o, 8, 5);
        break;
    case 274:
    case 282:
        FUN_0c0a395c(o, 19, 6);
        break;
    case 275:
    case 281:
        FUN_0c0a395c(o, 12, 4);
        break;
    case 276:
        FUN_0c0a395c(o, 16, 6);
        break;
    case 280:
        FUN_0c0a395c(o, 8, 3);
        break;
    case 284:
        FUN_0c0a395c(o, 13, 6);
        break;
    case 313:
        FUN_0c0a395c(o, 14, 3);
        break;
    case 327:
        FUN_0c0a395c(o, 2, 3);
        break;
    case 330:
        FUN_0c0a395c(o, 14, 4);
        break;
    case 407:
    case 413:
        FUN_0c0a395c(o, 4, 4);
        break;
    case 416:
        FUN_0c0a395c(o, 0, 5);
        break;
    case 418:
        FUN_0c0a395c(o, 13, 5);
        break;
    case 768:
        FUN_0c0a395c(o, 0, 0);
        break;
    case 769:
        FUN_0c0a395c(o, 0, 29);
        break;
    case 770:
        FUN_0c0a395c(o, 0, 19);
        break;
    case 771:
        FUN_0c0a395c(o, 0, 20);
        break;
    case 1026:
        FUN_0c0a395c(o, 0, 3);
        FUN_0c0a395c(o, 60, 7);
        break;
    case 1027:
        FUN_0c0a395c(o, 0, 7);
        break;
    case 1029:
        FUN_0c0a395c(o, 5, 7);
        FUN_0c0a395c(o, 50, 4);
        break;
    case 1031:
        FUN_0c0a395c(o, 26, 7);
        break;
    default:
        break;
    }
    code = (o[0x71A4] << 8) + (unsigned char)o[0x71A5];
    switch (code) {
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
        FUN_0c07ab86(o, 0, 2, 2);
        break;
    case 56:
        FUN_0c07ab86(o, 0, 2, 2);
        FUN_0c07ab86(o, 40, 2, 0);
        break;
    case 266:
        FUN_0c07ab86(o, 0, 2, 1);
        FUN_0c07ab86(o, 6, 2, 0);
        FUN_0c07ab86(o, 25, 2, 1);
        break;
    case 270:
        FUN_0c07ab86(o, 0, 1, 2);
        break;
    case 271:
        FUN_0c07ab86(o, 14, 0, 1);
        FUN_0c07ab86(o, 26, 0, 0);
        break;
    case 274:
        FUN_0c07ab86(o, 0, 0, 2);
        FUN_0c07ab86(o, 0, 1, 1);
        FUN_0c07ab86(o, 18, 0, 0);
        FUN_0c07ab86(o, 18, 1, 2);
        FUN_0c07ab86(o, 40, 1, 0);
        break;
    case 275:
        FUN_0c07ab86(o, 0, 2, 2);
        FUN_0c07ab86(o, 33, 2, 0);
        break;
    case 276:
        FUN_0c07ab86(o, 0, 2, 2);
        FUN_0c07ab86(o, 21, 2, 0);
        break;
    case 280:
        FUN_0c07ab86(o, 0, 2, 2);
        FUN_0c07ab86(o, 29, 2, 0);
        break;
    case 282:
        FUN_0c07ab86(o, 0, 2, 1);
        FUN_0c07ab86(o, 48, 2, 0);
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
        FUN_0c07ab86(o, 0, 2, 1);
        break;
    case 311:
    case 312:
    case 357:
        FUN_0c07ab86(o, 0, 2, 0);
        break;
    case 313:
        FUN_0c07ab86(o, 0, 2, 1);
        FUN_0c07ab86(o, 44, 2, 0);
        break;
    case 315:
        FUN_0c07ab86(o, 0, 2, 2);
        FUN_0c07ab86(o, 30, 2, 0);
        break;
    case 316:
        FUN_0c07ab86(o, 0, 2, 2);
        FUN_0c07ab86(o, 31, 2, 0);
        break;
    case 334:
        FUN_0c07ab86(o, 0, 2, 3);
        FUN_0c07ab86(o, 19, 2, 0);
        break;
    case 352:
        FUN_0c07ab86(o, 53, 2, 1);
        break;
    case 353:
        FUN_0c07ab86(o, 0, 2, 1);
        FUN_0c07ab86(o, 11, 2, 0);
        break;
    case 358:
        FUN_0c07ab86(o, 4, 1, 2);
        FUN_0c07ab86(o, 12, 1, 0);
        FUN_0c07ab86(o, 16, 0, 2);
        FUN_0c07ab86(o, 23, 0, 0);
        break;
    case 361:
        FUN_0c07ab86(o, 0, 2, 1);
        FUN_0c07ab86(o, 76, 2, 0);
        break;
    case 408:
    case 417:
        FUN_0c07ab86(o, 0, 2, 1);
        FUN_0c07ab86(o, 24, 2, 0);
        break;
    case 409:
        FUN_0c07ab86(o, 0, 2, 3);
        break;
    case 410:
        FUN_0c07ab86(o, 0, 2, 3);
        FUN_0c07ab86(o, 17, 2, 0);
        break;
    case 413:
        FUN_0c07ab86(o, 0, 2, 1);
        FUN_0c07ab86(o, 71, 2, 0);
        break;
    case 768:
        FUN_0c07ab86(o, 59, 2, 1);
        FUN_0c07ab86(o, 117, 2, 0);
        break;
    case 769:
        FUN_0c07ab86(o, 48, 1, 1);
        FUN_0c07ab86(o, 116, 1, 0);
        break;
    case 770:
        FUN_0c07ab86(o, 51, 2, 1);
        break;
    case 771:
        FUN_0c07ab86(o, 133, 2, 1);
        FUN_0c07ab86(o, 206, 2, 0);
        break;
    case 776:
        FUN_0c07ab86(o, 0, 2, 1);
        FUN_0c07ab86(o, 75, 2, 0);
        break;
    case 1026:
        FUN_0c07ab86(o, 66, 2, 2);
        break;
    case 1027:
        FUN_0c07ab86(o, 0, 0, 2);
        FUN_0c07ab86(o, 26, 2, 2);
        break;
    case 1029:
        FUN_0c07ab86(o, 52, 2, 2);
        FUN_0c07ab86(o, 60, 3, 0);
        break;
    case 1031:
        FUN_0c07ab86(o, 63, 2, 2);
        break;
    default:
        break;
    }}
