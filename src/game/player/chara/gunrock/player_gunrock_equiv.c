/* character 4 (Gunrock) (0c077428-0c07746c) */

int pl_gunrock_play_motion_sounds(int);
int snd_play_char_voice(int, int);

int FUN_0c07743e(int a4);

int pl_gunrock_frame_hook(int a4)
{
    pl_gunrock_play_motion_sounds(a4);
    FUN_0c07743e(a4);
    return 0x0;
}

int FUN_0c07743e(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)(((0x72BC + a4) + 0xD));
    if (t0 != 0) {
        t2 = *(signed char *)((a4 + 0x71BA));
        if (t2 != 11) {
            *(unsigned char *)(((0x72BC + a4) + 0xD)) = 0x0;
            return snd_play_char_voice(a4, 0x31);
        }
        return t2;
    }
    return t0;
}
