/* State step of an object: state 0 advances to 1 and plays two sounds/effects (12 and 22) and falls into state 1, which clears byte 2 once FUN_0c01fff4(0x3060E, 0) reports true; other states do nothing. */
void FUN_0c01fdc8(char *p);
void FUN_0c01f4c8(int n);
char FUN_0c01fff4(int a, int b);
void FUN_0c01f28e(char *p)
{
    switch (p[4]) {
    case 0:
        p[4] = p[4] + 1;
        FUN_0c01fdc8(p);
        FUN_0c01f4c8(12);
        FUN_0c01f4c8(22);
    case 1:
        if (FUN_0c01fff4(0x3060E, 0))
            p[2] = 0;
        break;
    default:
        break;
    }
}
