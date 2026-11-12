/* Hand-written: re-aims the player: classifies the angle difference to the target into 4 zones and, when the zone changed,
   tells FUN_0c09a808 the (mode, value) pair for the player's current kind. */
int FUN_0c09ddfe(char *p);
int FUN_0c09c6b8(char *p);
int FUN_0c09a808(char *p, int mode, int val);

void FUN_0c09ed26(char *p)
{
    int d;
    int zone;
    int mode;
    int val;
    signed char kind;

    d = (short)((unsigned short)(FUN_0c09ddfe(p) + *(short *)0xC7F31E0) - *(int *)(p + 48));
    if (d > -8192 && d < 8192) {
        zone = 0;
    } else if (d < -8192 && d > -24576) {
        zone = 1;
    } else if (d > 8192 && d < 24576) {
        zone = 2;
    } else {
        zone = 3;
    }
    if (*(signed char *)(p + 0x7237) == (signed char)zone && *(signed char *)(p + 0x7236) != 8) {
        return;
    }
    *(signed char *)(p + 0x7237) = zone;
    kind = FUN_0c09c6b8(p);
    switch (kind) {
    case 0:
    case 17:
    case 18:
    case 19:
        switch (*(signed char *)(p + 0x7237)) {
        case 0:
            val = 3;
            break;
        case 1:
            val = 28;
            break;
        case 2:
            val = 27;
            break;
        default:
            val = 4;
            break;
        }
        FUN_0c09a808(p, 0, val);
        break;
    case 1:
    case 11:
        FUN_0c09a808(p, 2, 221);
        break;
    case 2:
    case 3:
        FUN_0c09a808(p, 2, 239);
        break;
    case 4:
    case 16:
        FUN_0c09a808(p, 2, 82);
        break;
    case 5:
    case 6:
    case 7:
        FUN_0c09a808(p, 2, 196);
        break;
    case 8:
        FUN_0c09a808(p, 2, 249);
        break;
    case 9:
    case 10:
    case 12:
        FUN_0c09a808(p, 2, 231);
        break;
    case 13:
        FUN_0c09a808(p, 2, 56);
        break;
    case 14:
        FUN_0c09a808(p, 2, 31);
        break;
    case 15:
        FUN_0c09a808(p, 2, 105);
        break;
    default:
        break;
    }
    *(unsigned char *)(p + 0x71A8) = 0;
    *(unsigned char *)(p + 0x71A9) = 8;
}
