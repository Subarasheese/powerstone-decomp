/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c044408-0c04463c) */

int FUN_0c044408(int a4, int a5, int a6, int a7)
{
    int stk[8];

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 12)) = a5;
    *(unsigned char *)(((int)stk + 0)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = 0xC14A61C;
    *(unsigned int *)(((int)stk + 8)) = 0xC14A618;
    *(unsigned int *)(((int)stk + 16)) = ((unsigned short)((unsigned short)(*(signed char *)(((int)stk + 4))) * (unsigned short)0x72D0) + 0xC7E40C4);
    return ((int (*)(int, int, int, int))(0xC044582))(a4, a5, a6, a7);
}
