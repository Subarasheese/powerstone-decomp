/* sound/BGM layer: ADX stream control bgm_play_* and snd_play_* table lookups (0c0a2eec-0c0a4030) */

/* named globals (symbols.txt) */
extern char g_bgm_by_index_tbl[];
int bgm_start_file(int, int);
int ADXT_SetOutVol(int, int);
int ADXT_SetLpFlg(int, int);

int bgm_play_open(void)
{
    register int t2;
    register int t3;

    bgm_start_file(0x0, 0x101);
    t2 = *(int *)0xC494048;
    t3 = 0x0;
    if ((*(signed char *)0xC7F2F0E) != 0) {
        t3 = 0x46;
    }
    return ADXT_SetOutVol(t2, t3);
}

int bgm_play_here(void)
{
    bgm_start_file(0x0, 0x106);
    *(volatile signed char *)0xC7F2F0E;
    return ADXT_SetOutVol((*(int *)0xC494048), 0xFFFFFFF6);
}

int bgm_play_rank(void)
{
    register int t2;
    register int t3;

    bgm_start_file(0x0, 0x109);
    t2 = *(int *)0xC494048;
    t3 = 0xFFFFFFFB;
    if ((*(signed char *)0xC7F2F0E) != 0) {
        t3 = 0x41;
    }
    ADXT_SetOutVol(t2, t3);
    return ADXT_SetLpFlg((*(int *)0xC494048), 0x1);
}

int bgm_play_demo_01(void)
{
    register int t2;
    register int t3;

    bgm_start_file(0x0, 0x10B);
    t2 = *(int *)0xC494048;
    t3 = 0xFFFFFFFB;
    if ((*(signed char *)0xC7F2F0E) != 0) {
        t3 = 0x41;
    }
    return ADXT_SetOutVol(t2, t3);
}

int bgm_play_ending_start(void)
{
    register int t2;
    register int t3;

    bgm_start_file(0x0, 0x125);
    t2 = *(int *)0xC494048;
    t3 = 0xFFFFFFFB;
    if ((*(signed char *)0xC7F2F0E) != 0) {
        t3 = 0x41;
    }
    return ADXT_SetOutVol(t2, t3);
}

int bgm_play_demo_w(void)
{
    register int t2;
    register int t3;

    bgm_start_file(0x1, 0x129);
    t2 = *(int *)0xC49404C;
    t3 = 0x0;
    if ((*(signed char *)0xC7F2F0E) != 0) {
        t3 = 0x46;
    }
    return ADXT_SetOutVol(t2, t3);
}

int bgm_play_demo_e(void)
{
    register int t2;
    register int t3;

    bgm_start_file(0x1, 0x12A);
    t2 = *(int *)0xC49404C;
    t3 = 0x0;
    if ((*(signed char *)0xC7F2F0E) != 0) {
        t3 = 0x46;
    }
    return ADXT_SetOutVol(t2, t3);
}

int bgm_play_demo_m(void)
{
    register int t2;
    register int t3;

    bgm_start_file(0x1, 0x12B);
    t2 = *(int *)0xC49404C;
    t3 = 0x0;
    if ((*(signed char *)0xC7F2F0E) != 0) {
        t3 = 0x46;
    }
    return ADXT_SetOutVol(t2, t3);
}

int bgm_play_omake(void)
{
    register int t2;
    register int t3;

    bgm_start_file(0x0, 0x12C);
    t2 = *(int *)0xC494048;
    t3 = 0xFFFFFFCE;
    if ((*(signed char *)0xC7F2F0E) != 0) {
        t3 = 0x14;
    }
    ADXT_SetOutVol(t2, t3);
    return ADXT_SetLpFlg((*(int *)0xC494048), 0x1);
}

void bgm_play_by_index(int a4)
{
    int stk[1];
    register int t5;
    register int t6;

    *(unsigned char *)(((int)stk + 0)) = a4;
    if ((int)(unsigned char)(*(signed char *)(((int)stk + 0))) <= (int)0x2A) {
        bgm_start_file(0x0, (*(int *)((((unsigned char)(*(signed char *)(((int)stk + 0))) << 2) + ((int)g_bgm_by_index_tbl)))));
        t5 = *(int *)0xC494048;
        t6 = 0xFFFFFFE7;
        if ((*(signed char *)0xC7F2F0E) != 0) {
            t6 = 0x2D;
        }
        ADXT_SetOutVol(t5, t6);
        ADXT_SetLpFlg((*(int *)0xC494048), 0x1);
    return;
    }
}
