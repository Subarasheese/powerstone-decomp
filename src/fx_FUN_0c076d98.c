/* Per-move table dispatcher: calls FUN_0c0a37da and FUN_0c0a395c with a pair of values chosen by the move code (high byte at +0x71A4, low byte at +0x71A5). */
extern void FUN_0c0a3824(char *);
extern void FUN_0c0a3988(char *);
extern void FUN_0c0a37da(char *, int, int);
extern void FUN_0c0a395c(char *, int, int);

void FUN_0c076d98(char *o)
{
    int code;

    if (o[0x72B0] == 1)
        return;
    FUN_0c0a3824(o);
    FUN_0c0a3988(o);
    code = (o[0x71A4] << 8) + (unsigned char)o[0x71A5];
    switch (code) {
    case 21:
    case 22:
    case 23:
    case 41:
        FUN_0c0a37da(o, 0, 14);
        break;
    case 256:
        FUN_0c0a37da(o, 5, 10);
        break;
    case 257:
    case 273:
    case 281:
        FUN_0c0a37da(o, 9, 8);
        break;
    case 258:
        FUN_0c0a37da(o, 9, 9);
        break;
    case 259:
    case 403:
        FUN_0c0a37da(o, 9, 11);
        break;
    case 260:
        FUN_0c0a37da(o, 10, 10);
        break;
    case 266:
    case 272:
    case 280:
    case 327:
        FUN_0c0a37da(o, 5, 7);
        break;
    case 268:
        FUN_0c0a37da(o, 5, 9);
        break;
    case 274:
        FUN_0c0a37da(o, 8, 9);
        break;
    case 275:
        FUN_0c0a37da(o, 13, 10);
        break;
    case 277:
        FUN_0c0a37da(o, 10, 9);
        break;
    case 279:
        FUN_0c0a37da(o, 7, 8);
        break;
    case 282:
    case 283:
        FUN_0c0a37da(o, 10, 9);
        FUN_0c0a37da(o, 20, 10);
        break;
    case 286:
        FUN_0c0a37da(o, 11, 10);
        break;
    case 309:
        FUN_0c0a37da(o, 5, 15);
        break;
    case 310:
    case 404:
        FUN_0c0a37da(o, 0, 9);
        break;
    case 311:
        FUN_0c0a37da(o, 3, 12);
        break;
    case 313:
        FUN_0c0a37da(o, 3, 11);
        break;
    case 330:
        FUN_0c0a37da(o, 6, 9);
        break;
    case 407:
        FUN_0c0a37da(o, 0, 10);
        break;
    case 413:
        FUN_0c0a37da(o, 9, 7);
        FUN_0c0a37da(o, 18, 7);
        break;
    case 415:
        FUN_0c0a37da(o, 0, 15);
        break;
    case 418:
        FUN_0c0a37da(o, 25, 11);
        break;
    case 1024:
        FUN_0c0a37da(o, 21, 7);
        FUN_0c0a37da(o, 32, 7);
        FUN_0c0a37da(o, 48, 7);
        FUN_0c0a37da(o, 64, 7);
        FUN_0c0a37da(o, 80, 7);
        FUN_0c0a37da(o, 98, 3);
        break;
    case 1027:
        FUN_0c0a37da(o, 36, 7);
        FUN_0c0a37da(o, 44, 7);
        FUN_0c0a37da(o, 49, 7);
        break;
    case 1031:
        FUN_0c0a37da(o, 12, 11);
        break;
    default:
        break;
    }
    code = (o[0x71A4] << 8) + (unsigned char)o[0x71A5];
    switch (code) {
    case 21:
    case 22:
    case 23:
    case 41:
    case 55:
    case 56:
        FUN_0c0a395c(o, 0, 16);
        break;
    case 256:
    case 257:
    case 273:
        FUN_0c0a395c(o, 10, 4);
        break;
    case 258:
    case 259:
    case 274:
        FUN_0c0a395c(o, 8, 5);
        break;
    case 260:
        FUN_0c0a395c(o, 8, 6);
        break;
    case 266:
        FUN_0c0a395c(o, 4, 5);
        break;
    case 268:
        FUN_0c0a395c(o, 5, 5);
        break;
    case 272:
    case 280:
    case 305:
        FUN_0c0a395c(o, 10, 3);
        break;
    case 282:
    case 283:
        FUN_0c0a395c(o, 10, 6);
        break;
    case 309:
    case 404:
    case 407:
    case 412:
    case 416:
        FUN_0c0a395c(o, 0, 5);
        break;
    case 313:
        FUN_0c0a395c(o, 3, 5);
        break;
    case 327:
        FUN_0c0a395c(o, 5, 3);
        break;
    case 330:
        FUN_0c0a395c(o, 6, 5);
        break;
    case 352:
    case 353:
    case 356:
    case 358:
        FUN_0c0a395c(o, 10, 24);
        FUN_0c0a395c(o, 10, 48);
        break;
    case 354:
    case 355:
    case 357:
    case 359:
        FUN_0c0a395c(o, 10, 26);
        FUN_0c0a395c(o, 10, 48);
        break;
    case 360:
    case 365:
        FUN_0c0a395c(o, 10, 27);
        FUN_0c0a395c(o, 30, 49);
        break;
    case 363:
        FUN_0c0a395c(o, 0, 28);
        FUN_0c0a395c(o, 0, 50);
        break;
    case 418:
        FUN_0c0a395c(o, 25, 5);
        break;
    case 768:
        FUN_0c0a395c(o, 0, 29);
        break;
    case 769:
        FUN_0c0a395c(o, 0, 0);
        break;
    case 770:
        FUN_0c0a395c(o, 0, 19);
        break;
    case 771:
        FUN_0c0a395c(o, 0, 20);
        break;
    case 1024:
        FUN_0c0a395c(o, 21, 7);
        FUN_0c0a395c(o, 91, 5);
        break;
    case 1025:
        FUN_0c0a395c(o, 30, 7);
        FUN_0c0a395c(o, 90, 5);
        break;
    case 1027:
        FUN_0c0a395c(o, 0, 3);
        FUN_0c0a395c(o, 30, 7);
        break;
    case 1031:
        FUN_0c0a395c(*(char **)(o + 0x1C), 31, 12);
        FUN_0c0a395c(o, 40, 6);
        break;
    default:
        break;
    }}
