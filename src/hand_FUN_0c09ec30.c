/* Hand-written: asks FUN_0c09c6b8 for the kind of the player's object and passes the (mode, value) pair of that kind to FUN_0c09a808. */
int FUN_0c09c6b8(char *p);
int FUN_0c09a808(char *p, int mode, int val);

int FUN_0c09ec30(char *p)
{
    signed char kind;
    int mode;
    int val;

    kind = FUN_0c09c6b8(p);
    switch (kind) {
    case 0:
    case 17:
    case 18:
    case 19:
        mode = 0;
        val = 0;
        break;
    case 1:
    case 11:
        mode = 2;
        val = 220;
        break;
    case 2:
    case 3:
        mode = 2;
        val = 238;
        break;
    case 4:
    case 16:
        mode = 2;
        val = 81;
        break;
    case 5:
    case 6:
    case 7:
        mode = 2;
        val = 194;
        break;
    case 8:
        mode = 2;
        val = 248;
        break;
    case 9:
    case 10:
    case 12:
        mode = 2;
        val = 230;
        break;
    case 13:
        mode = 2;
        val = 55;
        break;
    case 14:
        mode = 2;
        val = 26;
        break;
    case 15:
        mode = 2;
        val = 104;
        break;
    default:
        return kind;
    }
    return FUN_0c09a808(p, mode, val);
}
