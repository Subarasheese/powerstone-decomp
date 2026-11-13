/* Per-move table dispatcher: calls FUN_0c0a37da and FUN_0c0a395c with a pair of values chosen by the move code (high byte at +0x71A4, low byte at +0x71A5). */
extern void FUN_0c0a3824(char *);
extern void FUN_0c0a3988(char *);
extern void FUN_0c0a37da(char *, int, int);
extern void FUN_0c0a395c(char *, int, int);

void FUN_0c06d8b0(char *o)
{
    int code;

    if (o[0x72B0] == 1)
        return;
    FUN_0c0a3824(o);
    FUN_0c0a3988(o);
    code = (o[0x71A4] << 8) + (unsigned char)o[0x71A5];
    switch (code) {
    case 20:
    case 21:
    case 22:
    case 23:
    case 41:
    case 55:
        FUN_0c0a37da(o, 0, 14);
        break;
    case 256:
        FUN_0c0a37da(o, 12, 10);
        break;
    case 266:
    case 330:
        FUN_0c0a37da(o, 5, 9);
        break;
    case 268:
    case 327:
        FUN_0c0a37da(o, 2, 7);
        break;
    case 270:
        FUN_0c0a37da(o, 14, 10);
        break;
    case 272:
        FUN_0c0a37da(o, 5, 7);
        break;
    case 273:
        FUN_0c0a37da(o, 10, 8);
        break;
    case 274:
        FUN_0c0a37da(o, 11, 9);
        break;
    case 275:
        FUN_0c0a37da(o, 19, 10);
        break;
    case 278:
        FUN_0c0a37da(o, 10, 9);
        break;
    case 279:
        FUN_0c0a37da(o, 8, 10);
        break;
    case 280:
        FUN_0c0a37da(o, 7, 7);
        break;
    case 281:
        FUN_0c0a37da(o, 11, 8);
        break;
    case 282:
        FUN_0c0a37da(o, 7, 9);
        break;
    case 283:
        FUN_0c0a37da(o, 24, 10);
        break;
    case 284:
        FUN_0c0a37da(o, 9, 9);
        break;
    case 285:
        FUN_0c0a37da(o, 17, 10);
        break;
    case 309:
        FUN_0c0a37da(o, 5, 15);
        break;
    case 310:
    case 311:
    case 313:
    case 404:
    case 407:
    case 413:
    case 416:
        FUN_0c0a37da(o, 0, 9);
        break;
    case 352:
        FUN_0c0a37da(o, 15, 7);
        break;
    case 353:
        FUN_0c0a37da(o, 12, 9);
        break;
    case 356:
        FUN_0c0a37da(o, 15, 8);
        break;
    case 357:
        FUN_0c0a37da(o, 1, 9);
        break;
    case 359:
        FUN_0c0a37da(o, 1, 10);
        break;
    case 403:
        FUN_0c0a37da(o, 16, 11);
        break;
    case 405:
        FUN_0c0a37da(o, 0, 9);
        FUN_0c0a37da(o, 8, 9);
        FUN_0c0a37da(o, 16, 9);
        break;
    case 418:
        FUN_0c0a37da(o, 25, 9);
        break;
    case 421:
        FUN_0c0a37da(o, 32, 11);
        break;
    case 1024:
        FUN_0c0a37da(o, 137, 9);
        break;
    case 1031:
        FUN_0c0a37da(o, 14, 11);
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
        FUN_0c0a395c(o, 1, 16);
        break;
    case 41:
        FUN_0c0a395c(o, 2, 4);
        break;
    case 55:
        FUN_0c0a395c(o, 5, 4);
        break;
    case 83:
        FUN_0c0a395c(o, 0, 15);
        break;
    case 157:
        FUN_0c0a395c(o, 0, 17);
        break;
    case 256:
    case 282:
        FUN_0c0a395c(o, 10, 5);
        break;
    case 266:
    case 330:
        FUN_0c0a395c(o, 5, 5);
        break;
    case 268:
    case 327:
        FUN_0c0a395c(o, 2, 3);
        break;
    case 270:
        FUN_0c0a395c(o, 19, 6);
        break;
    case 272:
        FUN_0c0a395c(o, 7, 3);
        break;
    case 273:
        FUN_0c0a395c(o, 12, 4);
        break;
    case 274:
    case 278:
        FUN_0c0a395c(o, 14, 5);
        break;
    case 275:
        FUN_0c0a395c(o, 23, 6);
        break;
    case 279:
        FUN_0c0a395c(o, 11, 6);
        break;
    case 280:
        FUN_0c0a395c(o, 10, 3);
        break;
    case 281:
        FUN_0c0a395c(o, 13, 4);
        break;
    case 283:
        FUN_0c0a395c(o, 28, 6);
        break;
    case 284:
        FUN_0c0a395c(o, 13, 5);
        break;
    case 285:
    case 405:
        FUN_0c0a395c(o, 16, 5);
        break;
    case 310:
        FUN_0c0a395c(o, 0, 4);
        break;
    case 311:
    case 313:
    case 404:
    case 407:
    case 413:
    case 416:
    case 1028:
        FUN_0c0a395c(o, 0, 5);
        break;
    case 352:
        FUN_0c0a395c(o, 15, 24);
        break;
    case 354:
        FUN_0c0a395c(o, 8, 6);
        break;
    case 355:
        FUN_0c0a395c(o, 5, 24);
        FUN_0c0a395c(o, 4, 48);
        break;
    case 364:
    case 365:
        FUN_0c0a395c(o, 29, 27);
        break;
    case 367:
        FUN_0c0a395c(o, 7, 25);
        FUN_0c0a395c(o, 8, 49);
        break;
    case 418:
        FUN_0c0a395c(o, 25, 5);
        break;
    case 768:
        FUN_0c0a395c(o, 68, 55);
        FUN_0c0a395c(o, 0, 0);
        break;
    case 769:
        FUN_0c0a395c(o, 32, 54);
        FUN_0c0a395c(o, 0, 28);
        break;
    case 770:
        FUN_0c0a395c(o, 80, 58);
        FUN_0c0a395c(o, 0, 19);
        break;
    case 771:
        FUN_0c0a395c(o, 135, 57);
        FUN_0c0a395c(o, 0, 20);
        break;
    case 775:
        FUN_0c0a395c(o, 0, 1);
        FUN_0c0a395c(o, 50, 56);
        FUN_0c0a395c(o, 66, 56);
        FUN_0c0a395c(o, 82, 56);
        break;
    case 1024:
        FUN_0c0a395c(o, 0, 5);
        FUN_0c0a395c(o, 138, 6);
        break;
    case 1027:
        FUN_0c0a395c(o, 16, 4);
        break;
    case 1031:
        FUN_0c0a395c(o, 14, 5);
        FUN_0c0a395c(*(char **)(o + 0x1C), 26, 10);
        break;
    default:
        break;
    }}
