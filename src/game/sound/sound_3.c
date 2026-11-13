/* sound/BGM layer: ADX stream control bgm_play_* and snd_play_* table lookups (0c0a4030-0c0a40e4) */

int snd_play_se(int);
int snd_play_se(int a4);

void FUN_0c0a4030(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = *(signed char *)(((int)stk + 0));
    if ((((int)(unsigned char)t0 > (int)0x36) && ((int)(unsigned char)t0 < (int)0x40)) || ((((int)(unsigned char)t0 > (int)0x46) && ((int)(unsigned char)t0 < (int)0x80)) || ((int)(unsigned char)t0 > (int)0xAD))) {
        return;
    }
    snd_play_se((*(int *)((((unsigned char)(*(signed char *)(((int)stk + 0))) << 2) + 0xC151200))));
}

int FUN_0c0a4070(int a4, int a5)
{
    int stk[2];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = *(signed char *)(((int)stk + 0));
    if ((((int)(unsigned char)t0 > (int)0x1F) && ((int)(unsigned char)t0 < (int)0x30)) || ((int)(unsigned char)t0 > (int)0x3F)) {
        return a5;
    }
    return snd_play_se(((*(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC151600))) + (((*(signed char *)(((int)stk + 4))) << 8) << 1)));
}

void FUN_0c0a40b0(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    if ((int)(unsigned char)(*(signed char *)(((int)stk + 0))) <= (int)0x18) {
        snd_play_se((*(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC151800))));
    return;
    }
}
