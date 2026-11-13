/* character 2 (Wang Tang) (0c06e18c-0c06e37e) */

int pl_start_motion(int, int, int);
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int pl_set_velocity_forward(int, int, float);

int pl_wangtang_start_motion_28(int a4)
{
    return pl_start_motion(a4, 0x1, 0x1C);
}

int pl_wangtang_start_motion_0(int a4)
{
    return pl_start_motion(a4, 0x1, 0x0);
}

int pl_wangtang_start_motion_1(int a4)
{
    return pl_start_motion(a4, 0x1, 0x1);
}

int pl_wangtang_start_motion_21(int a4)
{
    return pl_start_motion(a4, 0x1, 0x15);
}

int pl_wangtang_start_motion_3(int a4)
{
    return pl_start_motion(a4, 0x1, 0x3);
}

int pl_wangtang_start_motion_19_b(int a4)
{
    return pl_start_motion(a4, 0x1, 0x13);
}

int pl_wangtang_start_motion_27_fx(int a4)
{
    pl_start_motion(a4, 0x1, 0x1B);
    return (fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0xE, 0x0, 0x18, 0x43, 0xC336E38, 0xC336E44));
}

int pl_wangtang_start_motion_2(int a4)
{
    return pl_start_motion(a4, 0x1, 0x2);
}

int pl_wangtang_start_motion_fx_17(int a4)
{
    pl_start_motion(a4, 0x1, 0x1E);
    fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0xE, 0x0, 0x30, 0x43, 0xC336E38, 0xC336E44);
    fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0x11, 0x0, 0x30, 0x43, 0xC336E38, 0xC336E44);
    return pl_set_velocity_forward(a4, 0x28, (*(float *)0xC06E2B8));
}

int pl_wangtang_start_motion_0_b(int a4)
{
    return pl_start_motion(a4, 0x1, 0x0);
}

int pl_wangtang_start_motion_28_b(int a4)
{
    return pl_start_motion(a4, 0x1, 0x1C);
}

int pl_wangtang_start_motion_0_c(int a4)
{
    return pl_start_motion(a4, 0x1, 0x0);
}

int pl_wangtang_start_motion_1_b(int a4)
{
    return pl_start_motion(a4, 0x1, 0x1);
}

int pl_wangtang_start_motion_2_b(int a4)
{
    return pl_start_motion(a4, 0x1, 0x2);
}

int pl_wangtang_start_motion_3_b(int a4)
{
    return pl_start_motion(a4, 0x1, 0x3);
}

int pl_wangtang_start_motion_5(int a4)
{
    return pl_start_motion(a4, 0x1, 0x5);
}

int pl_wangtang_start_motion_14(int a4)
{
    return pl_start_motion(a4, 0x1, 0xE);
}

int pl_wangtang_start_motion_48(int a4)
{
    return pl_start_motion(a4, 0x1, 0x30);
}

int pl_wangtang_start_motion_49(int a4)
{
    return pl_start_motion(a4, 0x1, 0x31);
}
