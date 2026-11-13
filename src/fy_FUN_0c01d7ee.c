/* Menu step on the screen-state block 0xC362378: state 0 initialises, state 1 moves the selection (pad bits 32/16 up/down, 8 or 4 confirm: go to state 2 or 3 and reset the delay), states 2 and 3 count a 60-frame delay at 8 and report 1 / 2 (done) to the caller. */
signed char FUN_0c01e606(int, int);
void FUN_0c01e444(void);
void FUN_0c01e4a0(void);
void FUN_0c0a3796(int, int);
int FUN_0c01d7ee(void)
{
    unsigned char *g = (unsigned char *)0xC362378;
    int r = 0;

    switch (g[0]) {
    case 0:
        FUN_0c01e444();
        g[7] = 0;
        *(int *)(g + 16) = 0;
        g[0] = g[0] + 1;
        /* fall through */
    case 1:
        *(int *)(g + 16) = (unsigned short)(*(int *)(g + 16) + 0x5b0);
        if (FUN_0c01e606(2, 32) != 0) {
            g[7] = g[7] + 1;
            FUN_0c0a3796(0, 75);
            g[7] = (signed char)g[7] % 2;
        } else if (FUN_0c01e606(2, 16) != 0) {
            g[7] = g[7] - 1;
            FUN_0c0a3796(0, 75);
            if ((signed char)g[7] < 0)
                g[7] = 1;
        }
        if (FUN_0c01e606(2, 8) != 0 || FUN_0c01e606(2, 4) != 0) {
            if ((signed char)g[7] == 1)
                g[0] = 3;
            else
                g[0] = 2;
            g[1] = 0;
        }
        break;
    case 3:
        if (g[1] == 0) {
            g[8] = 60;
            g[1] = g[1] + 1;
        }
        g[8] = g[8] - 1;
        if ((signed char)g[8] <= 0)
            r = 2;
        break;
    default:
        if (g[1] == 0) {
            g[8] = 60;
            g[1] = g[1] + 1;
        }
        g[8] = g[8] - 1;
        if ((signed char)g[8] <= 0)
            r = 1;
        break;
    }
    FUN_0c01e4a0();
    return r;
}
