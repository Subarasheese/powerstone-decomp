/* Dispatch: jumps to the handler in a table indexed by the signed byte at +0x7209 of the object, handing the object on. */
int FUN_0c068de4(int a4, int a5, int a6, int a7);

int FUN_0c068de4(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)((a4 + 0x7209))) << 2) + 0xC3369C4));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}
