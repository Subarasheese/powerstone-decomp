/* Hand-written: tests one entry of the table at 0xC7F4750 (small counters s[0..2] against a level, flag bytes s[3], s[4], s[6..8]). */
int FUN_0c01d0ec(int idx)
{
    signed char *s;

    s = (signed char *)0xC7F4750;
    switch ((unsigned char)idx) {
    case 0:
        return s[0] >= 1;
    case 1:
        return s[0] >= 2;
    case 2:
        return s[0] >= 3;
    case 3:
        return s[0] >= 4;
    case 4:
        return s[3] != 0;
    case 5:
        return s[4] != 0;
    case 6:
        return s[2] >= 1;
    case 7:
        return s[2] >= 2;
    case 8:
        return s[2] >= 3;
    case 9:
        return s[1] >= 1;
    case 10:
        return s[1] >= 2;
    case 11:
        return s[1] >= 3;
    case 12:
        return s[6] != 0;
    case 13:
        return s[7] != 0;
    case 14:
        return s[8] != 0;
    default:
        return 0;
    }
}
