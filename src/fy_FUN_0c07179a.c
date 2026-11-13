/* Dispatches on the signed byte at offset 0x7209 of the object through a table of handlers at 0xC336F74, passing its arguments on. */
typedef int (*Handler)(char *, int, int, int);
int FUN_0c07179a(char *obj, int a5, int a6, int a7)
{
    return ((Handler *)0xC336F74)[*(signed char *)(obj + 0x7209)](obj, a5, a6, a7);
}
