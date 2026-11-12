/* Hand-written: classifies the object a player points at: 0 none, 1 for kind 1, 2..19 for kind 6 by its sub-kind. */
int FUN_0c09c6b8(char *p)
{
    char *o;
    unsigned int sub;

    o = *(char **)(p + 0x71CC);
    if (o == 0) {
        return 0;
    }
    if (o[4] == 1) {
        return 1;
    }
    if (o[4] != 6) {
        return 0;
    }
    sub = *(signed char *)(o + 0x30C);
    if (sub >= 18) {
        return 0;
    }
    return sub + 2;
}
