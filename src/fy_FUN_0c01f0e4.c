/* Two-step state machine on byte +4 of the object: step 0 advances it and starts sound/effects chosen by byte +51 (20, 21, or 24 and 25), then both steps poll FUN_0c01fff4 and set state byte +0 to 5 when it reports non-zero. */
extern void FUN_0c01fdc8(void);
extern int FUN_0c01f4c8(int a);
extern void FUN_0c01f9a0(int a, int b);
extern signed char FUN_0c01fff4(int a, int b);
void FUN_0c01f0e4(char *o)
{
    switch (o[4]) {
    case 0:
        o[4] = o[4] + 1;
        FUN_0c01fdc8();
        switch (o[51]) {
        case 0:
            FUN_0c01f4c8(20);
            FUN_0c01f9a0(0, 4);
            FUN_0c01f9a0(2, 128);
            break;
        case 1:
            FUN_0c01f4c8(21);
            FUN_0c01f9a0(0, 128);
            break;
        case 2:
            FUN_0c01f4c8(24);
            FUN_0c01f4c8(25);
            break;
        }
    case 1:
        if (FUN_0c01fff4(0x0003060E, 0))
            o[0] = 5;
        break;
    default:
        break;
    }
}
