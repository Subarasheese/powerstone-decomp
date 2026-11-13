/* sound/BGM layer: ADX stream control bgm_play_* and snd_play_* table lookups (0c0a2eec-0c0a4030) */

int ADXT_SetOutVol(int, int, int, int);
int bgm_start_file(int, int);
int ADXT_SetLpFlg(int a4, int a5);
int ADXT_SetLpFlg(int, int);

int bgm_set_volume(int a4, int a5, int a6, int a7)
{
    register int t3;

    t3 = 0xFFFFFC40;
    if ((signed char)a5 != 0) {
        t3 = ((*(int *)0xC494058) + ((signed char)a5 - 127));
    }
    return ADXT_SetOutVol((*(int *)(((((signed char)a4 << 2) + 0xC494048) + 0x0))), t3, (signed char)a5, a7);
}

int bgm_play_demo_00(void)
{
    bgm_start_file(0x0, 0x102);
    return ADXT_SetLpFlg((*(int *)0xC494048), 0x1);
}

int bgm_play_player_select(void)
{
    bgm_start_file(0x0, 0x103);
    return ADXT_SetLpFlg((*(int *)0xC494048), 0x1);
}

int bgm_play_stage_select(void)
{
    bgm_start_file(0x0, 0x104);
    return ADXT_SetLpFlg((*(int *)0xC494048), 0x1);
}

int bgm_play_vs(void)
{
    return bgm_start_file(0x0, 0x105);
}

int bgm_play_continue(void)
{
    bgm_start_file(0x0, 0x107);
    return ADXT_SetLpFlg((*(int *)0xC494048), 0x1);
}

int bgm_play_game_over(void)
{
    bgm_start_file(0x0, 0x108);
    return ADXT_SetLpFlg((*(int *)0xC494048), 0x1);
}

int bgm_play_win(void)
{
    bgm_start_file(0x0, 0x10A);
    return ADXT_SetLpFlg((*(int *)0xC494048), 0x1);
}

int bgm_play_hen_00(void)
{
    bgm_start_file(0x1, 0x117);
    return ADXT_SetLpFlg((*(int *)0xC49404C), 0x1);
}

int bgm_play_hen_01(void)
{
    bgm_start_file(0x1, 0x118);
    return ADXT_SetLpFlg((*(int *)0xC49404C), 0x1);
}

int bgm_play_capcom(void)
{
    return bgm_start_file(0x0, 0x128);
}

void bgm_play_stage_theme(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    if ((int)(unsigned char)(*(signed char *)(((int)stk + 0))) <= (int)0xB) {
        bgm_start_file(0x0, (*(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC151C2C))));
        ADXT_SetLpFlg((*(int *)0xC494048), 0x1);
    return;
    }
}
