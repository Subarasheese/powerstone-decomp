/* Sets bit g_40c8[arg*0x72d0] in the flag halfword at 0xC7F475A, counts the set low bits, calls four updaters and reports a change. */
extern int FUN_0c055782(int n);
extern int FUN_0c0557d6(int n);
extern int FUN_0c055838(int n, int a);
extern int FUN_0c0558ac(int n);
extern int FUN_0c0d487e(void);
int FUN_0c05590c(char arg)
{
    unsigned short idx = (unsigned short)((signed char)arg * 0x72d0);
    signed char sh = *(signed char *)(0xC7E40C8 + idx);
    short *fl = (short *)(0xC7F4750 + 10);
    char *s = (char *)0xC7F4750;
    short old = *fl;
    int changed, n = 0, i, r;
    *fl = old | (1 << sh);
    changed = (old != *fl);
    for (i = 0; i < 10; i++)
        if (*fl & (1 << i)) n++;
    if (n) s[5] = 1;
    r = changed;
    r |= FUN_0c055782(n);
    r |= FUN_0c0557d6(n);
    r |= FUN_0c055838(n, (signed char)arg);
    r |= FUN_0c0558ac(n);
    s[7] = 1;
    if (r != 0)
        return FUN_0c0d487e();
    return 1;
}
