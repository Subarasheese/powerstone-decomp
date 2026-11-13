/* not identified yet (keep old name) (0c027c74-0c027d50) */

int FUN_0c0dd5d0(int, int);
struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int memset(int, int, int);

int FUN_0c027c74(void)
{
    return FUN_0c0dd5d0(0xC1437B8, 0xC321050);
}

int FUN_0c027c7e(void)
{
    memset(0xC363290, 0x0, 0x4B0);
    memset(0xC363748, 0x0, 0xC8);
    (((struct o0_uint *)0xC363740)->v) = 0x0;
    (((struct o4_uint *)0xC363740)->v) = 0x0;
    return 0xC363744;
}
