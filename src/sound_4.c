/* sound/BGM layer: ADX stream control bgm_play_* and snd_play_* table lookups (0c0a40e4-0c0a41a0) */

int snd_play_se(int);
int snd_play_se(int a4);

void FUN_0c0a40e4(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = *(signed char *)(((int)stk + 0));
    if ((((int)(unsigned char)t0 > (int)0x5) && ((int)(unsigned char)t0 < (int)0x10)) || ((((int)(unsigned char)t0 > (int)0x14) && ((int)(unsigned char)t0 < (int)0x20)) || ((((int)(unsigned char)t0 > (int)0x29) && ((int)(unsigned char)t0 < (int)0x30)) || ((((int)(unsigned char)t0 > (int)0x34) && ((int)(unsigned char)t0 < (int)0x40)) || ((int)(unsigned char)t0 > (int)0x47))))) {
        return;
    }
    snd_play_se((*(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC1518C0))));
}

void FUN_0c0a413a(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = *(signed char *)(((int)stk + 0));
    if ((((int)(unsigned char)t0 > (int)0x4) && ((int)(unsigned char)t0 < (int)0x12)) || ((int)(unsigned char)t0 > (int)0x15)) {
        return;
    }
    snd_play_se((*(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC151178))));
}

void FUN_0c0a416c(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    if ((int)(unsigned char)(*(signed char *)(((int)stk + 0))) <= (int)0x13) {
        snd_play_se((*(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC151AC0))));
    return;
    }
}
