/* State step of an object (sibling of FUN_0c01f28e): state 0 advances to 1 and plays effects 7 and 22, state 1 sets the flag byte at 0xC362A50 and clears byte 2 once FUN_0c01fff4(0x3060E, 0) reports true. */
void FUN_0c01fdc8(char *p);
void FUN_0c01f4c8(int n);
char FUN_0c01fff4(int a, int b);
extern char g8_o362a50;
void FUN_0c01f3a0(char *p)
{
    switch (p[4]) {
    case 0:
        p[4] = p[4] + 1;
        FUN_0c01fdc8(p);
        FUN_0c01f4c8(7);
        FUN_0c01f4c8(22);
    case 1:
        if (FUN_0c01fff4(0x3060E, 0)) {
            g8_o362a50 = 1;
            p[2] = 0;
        }
        break;
    default:
        break;
    }
}
