/* Event dispatcher for an object: unless the done flag (+0x72B0) is 1, runs FUN_0c0a3824 / FUN_0c0a3988, builds the 16-bit event code from bytes +0x71A4 (high) and +0x71A5, and in two passes over the code (first FUN_0c0a37da, then FUN_0c0a395c with the matching effect numbers and counts) starts the effect sequence for that code. */
extern void FUN_0c0a3824(unsigned char *);
extern void FUN_0c0a3988(unsigned char *);
extern void FUN_0c0a37da(unsigned char *, int, int);
extern void FUN_0c0a395c(unsigned char *, int, int);

void FUN_0c083ce0(unsigned char *o)
{
    int c;

    if ((signed char)o[0x72B0] == 1)
        return;
    FUN_0c0a3824(o);
    FUN_0c0a3988(o);
    c = ((signed char)o[0x71A4] << 8) + o[0x71A5];
    switch (c) {
    case 256: case 257: case 258: case 261:
        FUN_0c0a37da(o, 11, 10);
        break;
    case 259:
        FUN_0c0a37da(o, 9, 8);
        break;
    case 266: case 268: case 272: case 280:
        FUN_0c0a37da(o, 8, 7);
        break;
    case 270:
        FUN_0c0a37da(o, 25, 11);
        break;
    case 273: case 281:
        FUN_0c0a37da(o, 9, 8);
        break;
    case 274:
        FUN_0c0a37da(o, 9, 9);
        break;
    case 275: case 284:
        FUN_0c0a37da(o, 10, 9);
        break;
    case 282:
        FUN_0c0a37da(o, 10, 9);
        break;
    case 283:
        FUN_0c0a37da(o, 0, 9);
        FUN_0c0a37da(o, 26, 10);
        break;
    case 309:
        FUN_0c0a37da(o, 0, 15);
        break;
    case 310:
        FUN_0c0a37da(o, 0, 10);
        FUN_0c0a395c(o, 0, 4);
        break;
    case 311:
        FUN_0c0a37da(o, 16, 15);
        FUN_0c0a37da(o, 36, 10);
        FUN_0c0a395c(o, 36, 4);
        break;
    case 313: case 330:
        FUN_0c0a37da(o, 0, 9);
        FUN_0c0a395c(o, 0, 4);
        break;
    case 327:
        FUN_0c0a37da(o, 0, 7);
        FUN_0c0a395c(o, 0, 3);
        break;
    case 403:
        FUN_0c0a37da(o, 5, 11);
        break;
    case 404:
        FUN_0c0a37da(o, 0, 10);
        FUN_0c0a395c(o, 0, 4);
        break;
    case 407:
        FUN_0c0a37da(o, 0, 10);
        FUN_0c0a395c(o, 0, 3);
        break;
    case 408:
        FUN_0c0a37da(o, 0, 7);
        FUN_0c0a395c(o, 0, 4);
        break;
    case 413: case 416:
        FUN_0c0a37da(o, 0, 9);
        FUN_0c0a395c(o, 0, 4);
        break;
    case 418:
        FUN_0c0a37da(o, 0, 12);
        FUN_0c0a395c(o, 0, 4);
        break;
    case 769:
        FUN_0c0a37da(o, 73, 7);
        break;
    }
    c = ((signed char)o[0x71A4] << 8) + o[0x71A5];
    switch (c) {
    case 20: case 21: case 22: case 23: case 41:
        FUN_0c0a395c(o, 0, 16);
        break;
    case 55:
        FUN_0c0a395c(o, 1, 16);
        break;
    case 256: case 257: case 258: case 261: case 270: case 283:
        FUN_0c0a395c(o, 11, 6);
        break;
    case 259: case 273: case 281:
        FUN_0c0a395c(o, 9, 4);
        break;
    case 266: case 268: case 272: case 280:
        FUN_0c0a395c(o, 8, 3);
        break;
    case 274:
        FUN_0c0a395c(o, 9, 5);
        break;
    case 275: case 282: case 284:
        FUN_0c0a395c(o, 10, 5);
        break;
    case 1025:
        FUN_0c0a395c(o, 0, 7);
        FUN_0c0a395c(o, 44, 50);
        break;
    case 1026:
        FUN_0c0a37da(o, 51, 12);
        FUN_0c0a395c(o, 51, 7);
        break;
    case 1031:
        FUN_0c0a37da(o, 21, 15);
        FUN_0c0a37da(o, 74, 9);
        FUN_0c0a395c(o, 21, 7);
        FUN_0c0a395c(o, 74, 5);
        FUN_0c0a37da(o, 74, 3);
        FUN_0c0a395c(*(unsigned char **)(o + 28), 74, 12);
        break;
    }
}
