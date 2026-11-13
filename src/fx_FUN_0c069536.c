/* Per-move table dispatcher: calls FUN_0c0a37da and FUN_0c0a395c with a pair of values chosen by the move code (high byte at +0x71A4, low byte at +0x71A5). */
extern void FUN_0c0a3824(char *);
extern void FUN_0c0a3988(char *);
extern void FUN_0c0a37da(char *, int, int);
extern void FUN_0c0a395c(char *, int, int);

void FUN_0c069536(char *o)
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
        FUN_0c0a37da(o, 0, 15);
        break;
    case 55:
        FUN_0c0a37da(o, 12, 15);
        break;
    case 266:
    case 272:
    case 280:
    case 327:
        FUN_0c0a37da(o, 5, 7);
        break;
    case 268:
    case 276:
        FUN_0c0a37da(o, 5, 10);
        break;
    case 273:
    case 281:
        FUN_0c0a37da(o, 9, 8);
        break;
    case 274:
        FUN_0c0a37da(o, 8, 9);
        break;
    case 275:
        FUN_0c0a37da(o, 13, 10);
        break;
    case 277:
    case 407:
        FUN_0c0a37da(o, 10, 9);
        break;
    case 279:
        FUN_0c0a37da(o, 7, 8);
        break;
    case 282:
        FUN_0c0a37da(o, 12, 10);
        break;
    case 283:
        FUN_0c0a37da(o, 11, 9);
        break;
    case 286:
        FUN_0c0a37da(o, 11, 10);
        break;
    case 310:
        FUN_0c0a37da(o, 1, 8);
        break;
    case 311:
        FUN_0c0a37da(o, 15, 15);
        FUN_0c0a37da(o, 38, 9);
        break;
    case 313:
    case 330:
    case 413:
        FUN_0c0a37da(o, 5, 9);
        break;
    case 403:
        FUN_0c0a37da(o, 21, 11);
        break;
    case 404:
    case 416:
        FUN_0c0a37da(o, 0, 10);
        break;
    case 418:
        FUN_0c0a37da(o, 0, 11);
        break;
    case 775:
        FUN_0c0a37da(o, 11, 7);
        FUN_0c0a37da(o, 37, 7);
        FUN_0c0a37da(o, 62, 7);
        break;
    case 1024:
        FUN_0c0a37da(o, 12, 7);
        FUN_0c0a37da(o, 39, 7);
        FUN_0c0a37da(o, 66, 10);
        break;
    case 1026:
        FUN_0c0a37da(o, 32, 11);
        FUN_0c0a37da(o, 42, 11);
        FUN_0c0a37da(o, 52, 11);
        break;
    case 1031:
        FUN_0c0a37da(o, 16, 12);
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
        FUN_0c0a395c(o, 0, 3);
        break;
    case 266:
    case 272:
    case 280:
        FUN_0c0a395c(o, 10, 3);
        break;
    case 268:
    case 313:
    case 330:
    case 407:
    case 413:
        FUN_0c0a395c(o, 10, 5);
        break;
    case 273:
    case 281:
        FUN_0c0a395c(o, 10, 4);
        break;
    case 274:
        FUN_0c0a395c(o, 8, 5);
        break;
    case 275:
        FUN_0c0a395c(o, 14, 6);
        break;
    case 276:
    case 286:
        FUN_0c0a395c(o, 12, 6);
        break;
    case 277:
        FUN_0c0a395c(o, 11, 5);
        break;
    case 279:
        FUN_0c0a395c(o, 8, 4);
        break;
    case 282:
        FUN_0c0a395c(o, 10, 6);
        break;
    case 283:
        FUN_0c0a395c(o, 12, 5);
        break;
    case 310:
        FUN_0c0a395c(o, 1, 3);
        break;
    case 311:
        FUN_0c0a395c(o, 38, 5);
        break;
    case 327:
        FUN_0c0a395c(o, 5, 3);
        break;
    case 404:
    case 416:
        FUN_0c0a395c(o, 0, 5);
        break;
    case 418:
        FUN_0c0a395c(o, 25, 5);
        break;
    case 768:
        FUN_0c0a395c(o, 0, 0);
        FUN_0c0a395c(o, 10, 52);
        FUN_0c0a395c(o, 64, 52);
        break;
    case 769:
        FUN_0c0a395c(o, 0, 28);
        break;
    case 770:
        FUN_0c0a395c(o, 0, 19);
        break;
    case 771:
        FUN_0c0a395c(o, 0, 20);
        break;
    case 1024:
        FUN_0c0a395c(*(char **)(o + 0x1C), 14, 10);
        FUN_0c0a395c(*(char **)(o + 0x1C), 41, 10);
        FUN_0c0a395c(*(char **)(o + 0x1C), 71, 12);
        break;
    case 1026:
        FUN_0c0a395c(o, 20, 7);
        break;
    case 1027:
        FUN_0c0a395c(*(char **)(o + 0x1C), 0, 12);
        break;
    case 1031:
        FUN_0c0a395c(*(char **)(o + 0x1C), 31, 12);
        FUN_0c0a395c(o, 33, 5);
        break;
    default:
        break;
    }}
