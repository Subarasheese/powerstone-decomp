/* Main loop of the game: brings the hardware and subsystems up with interrupts masked (level 14), then repeats the per-frame work at level 0 (frame counter at 0xC386838, a swap request at 0xC386830 starts a 4-frame skip window with 0xC4CD1B4 as the skip flag) until the run flag at 0xC7F3024 clears, and finally leaves through FUN_0c061f60. */
extern void _builtin_set_imask(int);
void FUN_0c0e4ac0(int);
void syHwInit(void);
void FUN_0c061514(void);
void FUN_0c061444(int);
void FUN_0c0f2808(int, int);
void syHwInit2(void);
void FUN_0c0e46c0(void);
void FUN_0c06143c(void);
void FUN_0c061be2(void);
void FUN_0c0616f4(void);
void FUN_0c0ddf80(void);
void FUN_0c0a3274(void);
void FUN_0c061f60(void);
void FUN_0c0615b0(void)
{
    *(int *)0xC7F3024 = 1;
    _builtin_set_imask(14);
    FUN_0c0e4ac0(0xC386828);
    syHwInit();
    FUN_0c061514();
    FUN_0c061444(*(int *)0xC7F3020);
    FUN_0c0f2808((0xC3B9D48 & -32) + 32, 0x80000);
    _builtin_set_imask(14);
    syHwInit2();
    FUN_0c0e46c0();
    FUN_0c06143c();
    _builtin_set_imask(0);
    FUN_0c061be2();
    do {
        _builtin_set_imask(0);
        *(int *)0xC386838 = *(int *)0xC386838 + 1;
        if (*(int *)0xC386830 != 0)
            *(int *)0xC386834 = 1;
        *(int *)0xC4CD1B4 = -1;
        if (*(int *)0xC386834 != 0 && *(int *)0xC386838 > 4)
            *(int *)0xC4CD1B4 = 0;
        FUN_0c0616f4();
        if (*(int *)0xC386834 != 0 && *(int *)0xC386838 > 4) {
            *(int *)0xC386838 = 0;
            *(int *)0xC4CD1B4 = -1;
            FUN_0c0616f4();
        }
        FUN_0c0ddf80();
        _builtin_set_imask(0);
        FUN_0c0a3274();
    } while (*(int *)0xC7F3024 != 0);
    FUN_0c061f60();
}
