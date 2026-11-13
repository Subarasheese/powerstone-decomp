/* @unit 0c0a4030-0c0a40e4 -extra=a=400 */
extern int g_151200[];
extern int g_151600[];
extern int g_151800[];
extern void snd_play_se(int);
void FUN_0c0a4030(unsigned char c)
{
    if ((c <= 54 || c >= 64) && (c <= 70 || c >= 128) && c <= 173)
        snd_play_se(g_151200[c]);
}
void FUN_0c0a4070(unsigned char c, char d)
{
    if ((c <= 31 || c >= 48) && c <= 63)
        snd_play_se(g_151600[c] + (d << 9));
}
void FUN_0c0a40b0(unsigned char c)
{
    if (c <= 24)
        snd_play_se(g_151800[c]);
}
