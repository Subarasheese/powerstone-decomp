/* Draft: proven in a copy without the runtime-helper renames, but the call arguments differ from the original once
   _divls/_modls/_quick_*mvn/_slow_mvn run for real. Cases: partial/cases/fx_FUN_0c053fae.json (synthetic). */
/* Countdown timer on the record at 0xC7F302C: when the halfword at +10 runs out, step a counter and redraw according to a mode nibble. */
extern void cam_force_mode(int a, int b);
extern void snd_play_char_voice(int p, int a);
extern char g_players[];
void game_stage_intro_countdown(void)
{
    unsigned char *b = (unsigned char *)0xC7F302C;
    short *t = (short *)(0xC7F302C + 10);
    int n;
    *t = *t - 1;
    if (*t > 0) return;
    b[1]++;
    b[2] = 0;
    b[76] = 0;
    cam_force_mode(0, 128);
    *t = 300;
    n = b[39] & 0xF0;
    if (n == 0) {
        snd_play_char_voice((int)g_players + (unsigned short)((unsigned short)(1 - (signed char)b[35]) * 29392), 2);
    } else if (n == 16) {
        snd_play_char_voice((int)g_players, 2);
        snd_play_char_voice(0xC7EB394, 2);
    }
}
