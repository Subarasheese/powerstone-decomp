/* Hand-written: asks FUN_0c09c6b8 for the kind of the player's object and passes the (mode, value) pair of that kind to FUN_0c09a808. */
int FUN_0c09c6b8(char *p);
int FUN_0c09a808(char *p, int mode, int val);

int FUN_0c09f024(char *p)
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
        val = 6;
        break;
    case 1:
    case 11:
        mode = 2;
        val = 223;
        break;
    case 2:
    case 3:
        mode = 2;
        val = 241;
        break;
    case 4:
    case 16:
        mode = 2;
        val = 84;
        break;
    case 5:
    case 6:
    case 7:
        mode = 2;
        val = 199;
        break;
    case 8:
        mode = 2;
        val = 251;
        break;
    case 9:
    case 10:
    case 12:
        mode = 2;
        val = 233;
        break;
    case 13:
        mode = 2;
        val = 93;
        break;
    case 14:
        mode = 2;
        val = 66;
        break;
    case 15:
        mode = 2;
        val = 107;
        break;
    default:
        return kind;
    }
    return FUN_0c09a808(p, mode, val);
}
