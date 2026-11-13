/* game mode function using camera mode 28 (0c0d7f30-0c0d80d4) */

int game_reset_objects(void);
int bgm_stop_all(void);

int FUN_0c0d7ff0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE1;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                return ((int (*)(int, int, int, int))(0xC0D809A))(0xC7F2EE1, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0D808E))(0xC7F2EE1, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0D8084))(0xC7F2EE1, a5, a6, a7);
    }
    *(unsigned char *)0xC7F2EE1 = 0x1;
    game_reset_objects();
    bgm_stop_all();
    return ((int (*)(int, int, int, int))(0xC0D8064))(0xC7F31BC, 0x0, 0x63, a7);
}
