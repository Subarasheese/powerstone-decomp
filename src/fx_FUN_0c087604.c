/* Per-move table dispatcher: calls FUN_0c0a37da and FUN_0c0a395c with a pair of values chosen by the move code (high byte at +0x71A4, low byte at +0x71A5). */
extern void FUN_0c0a3824(char *);
extern void FUN_0c0a3988(char *);
extern void FUN_0c0a37da(char *, int, int);
extern void FUN_0c0a395c(char *, int, int);

void FUN_0c087604(char *o)
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
    case 258:
        FUN_0c0a37da(o, 6, 10);
        break;
    case 266:
    case 272:
    case 327:
        FUN_0c0a37da(o, 5, 7);
        break;
    case 268:
    case 277:
        FUN_0c0a37da(o, 5, 10);
        break;
    case 269:
    case 286:
        FUN_0c0a37da(o, 5, 9);
        break;
    case 271:
        FUN_0c0a37da(o, 14, 10);
        break;
    case 273:
        FUN_0c0a37da(o, 8, 9);
        break;
    case 274:
        FUN_0c0a37da(o, 19, 10);
        break;
    case 275:
        FUN_0c0a37da(o, 12, 8);
        break;
    case 276:
        FUN_0c0a37da(o, 16, 9);
        break;
    case 279:
        FUN_0c0a37da(o, 12, 10);
        break;
    case 280:
        FUN_0c0a37da(o, 8, 7);
        break;
    case 281:
    case 283:
    case 404:
    case 407:
    case 413:
    case 416:
        FUN_0c0a37da(o, 0, 10);
        break;
    case 282:
        FUN_0c0a37da(o, 19, 9);
        break;
    case 284:
        FUN_0c0a37da(o, 13, 9);
        break;
    case 285:
        FUN_0c0a37da(o, 16, 10);
        break;
    case 287:
        FUN_0c0a37da(o, 0, 8);
        break;
    case 309:
    case 312:
        FUN_0c0a37da(o, 5, 15);
        break;
    case 310:
        FUN_0c0a37da(o, 4, 7);
        break;
    case 311:
        FUN_0c0a37da(o, 7, 8);
        break;
    case 313:
        FUN_0c0a37da(o, 13, 26);
        break;
    case 330:
        FUN_0c0a37da(o, 3, 10);
        break;
    case 403:
        FUN_0c0a37da(o, 21, 11);
        break;
    case 418:
        FUN_0c0a37da(o, 25, 11);
        break;
    case 1024:
        FUN_0c0a37da(o, 106, 9);
        break;
    case 1026:
        FUN_0c0a37da(o, 19, 11);
        break;
    case 1031:
        FUN_0c0a37da(o, 32, 11);
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
    case 55:
        FUN_0c0a395c(o, 0, 16);
        break;
    case 258:
    case 277:
    case 279:
    case 281:
    case 283:
        FUN_0c0a395c(o, 0, 6);
        break;
    case 266:
    case 327:
        FUN_0c0a395c(o, 5, 3);
        break;
    case 268:
        FUN_0c0a395c(o, 5, 5);
        break;
    case 269:
    case 274:
    case 284:
    case 286:
    case 404:
    case 407:
    case 413:
    case 416:
        FUN_0c0a395c(o, 0, 5);
        break;
    case 272:
    case 280:
        FUN_0c0a395c(o, 0, 3);
        break;
    case 275:
    case 287:
        FUN_0c0a395c(o, 0, 4);
        break;
    case 285:
        FUN_0c0a395c(o, 16, 6);
        break;
    case 310:
        FUN_0c0a395c(o, 4, 3);
        break;
    case 313:
        FUN_0c0a395c(o, 13, 5);
        break;
    case 330:
        FUN_0c0a395c(o, 3, 5);
        break;
    case 352:
    case 355:
        FUN_0c0a395c(o, 13, 25);
        break;
    case 356:
    case 357:
        FUN_0c0a395c(o, 21, 24);
        break;
    case 360:
    case 368:
        FUN_0c0a395c(o, 0, 26);
        break;
    case 363:
        FUN_0c0a395c(o, 10, 27);
        break;
    case 418:
        FUN_0c0a395c(o, 25, 5);
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
    case 1024:
        FUN_0c0a395c(o, 41, 3);
        FUN_0c0a395c(o, 57, 4);
        FUN_0c0a395c(o, 70, 3);
        FUN_0c0a395c(o, 106, 5);
        break;
    case 1025:
        FUN_0c0a395c(o, 0, 7);
        break;
    case 1026:
        FUN_0c0a395c(o, 0, 3);
        FUN_0c0a395c(o, 19, 5);
        break;
    case 1028:
        FUN_0c0a395c(o, 20, 28);
        break;
    case 1031:
        FUN_0c0a395c(o, 32, 5);
        break;
    default:
        break;
    }}
