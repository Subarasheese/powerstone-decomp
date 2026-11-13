/* Ayame (char 6) frame hook, move init stubs, attack init dispatch (part 2 of 3 of the same module) (0c07e8f8-0c07e930) */

int pl_start_motion(int, int, int);
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };

int pl_ayame_move13_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x1A);
}

int pl_ayame_move14_init(int a4)
{
    pl_start_motion(a4, 0x1, 0x14);
    (((struct o710B_uchar *)(a4))->v) = 0x1;
    (((struct o710C_uchar *)(a4))->v) = 0x1;
    return 0x710C;
}

int pl_ayame_move15_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x3);
}
