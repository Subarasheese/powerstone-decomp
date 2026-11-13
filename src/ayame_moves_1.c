/* Ayame (char 6) frame hook, move init stubs, attack init dispatch (part 1 of 3 of the same module) (0c07e774-0c07e8f8) */

int pl_ayame_play_motion_sounds(int);
int pl_start_motion(int, int, int);
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
int pl_start_motion(int a4, int a5, int a6);

int pl_ayame_frame_hook(int a4)
{
    pl_ayame_play_motion_sounds(a4);
    return 0x0;
}

int pl_ayame_move00_init(int a4)
{
    pl_start_motion(a4, 0x1, 0x10);
    (((struct o710C_uchar *)(a4))->v) = 0x1;
    return 0x710C;
}

int pl_ayame_move01_init(int a4)
{
    pl_start_motion(a4, 0x1, 0x11);
    (((struct o710B_uchar *)(a4))->v) = 0x1;
    (((struct o710C_uchar *)(a4))->v) = 0x1;
    return 0x710C;
}

int pl_ayame_move02_init(int a4)
{
    pl_start_motion(a4, 0x1, 0x15);
    (((struct o710B_uchar *)(a4))->v) = 0x1;
    (((struct o710C_uchar *)(a4))->v) = 0x1;
    return 0x710C;
}

int pl_ayame_move03_init(int a4)
{
    pl_start_motion(a4, 0x1, 0x16);
    (((struct o710B_uchar *)(a4))->v) = 0x1;
    (((struct o710C_uchar *)(a4))->v) = 0x1;
    return 0x710C;
}

int pl_ayame_move04_init(int a4)
{
    pl_start_motion(a4, 0x1, 0x1B);
    (((struct o710B_uchar *)(a4))->v) = 0x1;
    (((struct o710C_uchar *)(a4))->v) = 0x1;
    return 0x710C;
}

int pl_ayame_move05_init(int a4)
{
    pl_start_motion(a4, 0x1, 0x1);
    (((struct o710B_uchar *)(a4))->v) = 0x1;
    return 0x710B;
}

int pl_ayame_move06_init(int a4)
{
    pl_start_motion(a4, 0x1, 0x19);
    (((struct o710C_uchar *)(a4))->v) = 0x1;
    return 0x710C;
}

int pl_ayame_move07_init(int a4)
{
    pl_start_motion(a4, 0x1, 0x1D);
    (((struct o710B_uchar *)(a4))->v) = 0x1;
    (((struct o710C_uchar *)(a4))->v) = 0x1;
    return 0x710C;
}

int pl_ayame_move08_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x12);
}

int pl_ayame_move09_init(int a4)
{
    pl_start_motion(a4, 0x1, 0x1C);
    (((struct o710B_uchar *)(a4))->v) = 0x1;
    (((struct o710C_uchar *)(a4))->v) = 0x1;
    return 0x710C;
}

int pl_ayame_move10_init(int a4)
{
    pl_start_motion(a4, 0x1, 0x0);
    (((struct o710C_uchar *)(a4))->v) = 0x1;
    return 0x710C;
}

int pl_ayame_move11_init(int a4)
{
    pl_start_motion(a4, 0x1, 0x18);
    (((struct o710B_uchar *)(a4))->v) = 0x1;
    (((struct o710C_uchar *)(a4))->v) = 0x1;
    return 0x710C;
}

int pl_ayame_move12_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0xE);
}
