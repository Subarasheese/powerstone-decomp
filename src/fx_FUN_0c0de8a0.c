/* Sets a display-mode flag block when the mode word is 1, otherwise forwards to FUN_0c0f9c20. */
int FUN_0c0f9c20(int, int);

void FUN_0c0de8a0(void)
{
    if (*(int *)0xC7F8880 == 1) {
        *(int *)0xC7F886C = 32;
        *(int *)0xC7F8814 = *(int *)0xC7F8814 | 0x10;
        *(int *)0xC7F8878 = 2;
    } else {
        FUN_0c0f9c20(1, 32);
    }
}
