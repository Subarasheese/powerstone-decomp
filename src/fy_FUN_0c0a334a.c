/* scratch */
int FUN_0c05fcc2(int);
int FUN_0c0e55e0(int, int);
int FUN_0c0e5884(int);
void FUN_0c0a334a(int a4, int a5, int a6);

void FUN_0c0a334a(int a4, int a5, int a6)
{
    int stk[3];
    register int t3;
    register int t6;
    register int t11;
    register int t14;
    int t5;
    int t13;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned char *)(((int)stk + 0)) = a6;
    FUN_0c0e5884(0x4);
    FUN_0c0e5884(0x3);
    FUN_0c0e5884(0x2);
    t3 = *(signed char *)(((int)stk + 8));
    t6 = 0xC151BA8;
    if (((unsigned char)(*(signed char *)0xC7F2F08) == 1) && (t5 = *(signed char *)0xC7F2F10, t5 == 0)) {
        t6 = 0xC151BD4;
    }
    FUN_0c05fcc2((*(int *)(((t3 << 2) + t6))));
    FUN_0c0e55e0(0xCC00000, 0x2);
    t11 = *(signed char *)(((int)stk + 0));
    t14 = 0xC151BA8;
    if (((unsigned char)(*(signed char *)0xC7F2F08) == 1) && (t13 = *(signed char *)0xC7F2F10, t13 == 0)) {
        t14 = 0xC151BD4;
    }
    FUN_0c05fcc2((*(int *)(((t11 << 2) + t14))));
    FUN_0c0e55e0(0xCC00000, 0x3);
    FUN_0c05fcc2((*(int *)((((*(signed char *)(((int)stk + 4))) << 2) + 0xC151C00))));
    FUN_0c0e55e0(0xCC00000, 0x4);
}

