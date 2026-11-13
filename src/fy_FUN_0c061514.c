/* Sets the game-state word at 0xC7F2EE0+0x140 from the mode FUN_0c0e5126 reports (0 -> 9, 1 -> 0, 2 -> 19, else 9) and the flag at 0xC386830 (1 for mode 2, else 0). */
extern int FUN_0c0e5126(void);
void FUN_0c061514(void)
{
    char *g = (char *)0xC7F2EE0;
    int *flag = (int *)0xC386830;
    switch (FUN_0c0e5126()) {
    case 0:
        *(int *)(g + 0x140) = 9;
        *flag = 0;
        break;
    case 1:
        *(int *)(g + 0x140) = 0;
        *flag = 0;
        break;
    case 2:
        *(int *)(g + 0x140) = 19;
        *flag = 1;
        break;
    default:
        *(int *)(g + 0x140) = 9;
        *flag = 0;
        break;
    }
}
