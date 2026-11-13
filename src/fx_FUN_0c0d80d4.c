/* Selects a 508-byte record by index (or the first when the flag at 0x0C7F319E is clear), copies 12 bytes of it to 0x0C7F31E4 and stores its word at +492 to 0x0C7F31E0. */
typedef struct { int a, b, c; } S12;
void FUN_0c0d80d4(int idx)
{
    char *base = (char *)0x0C7F29F8;
    char *p;
    if (*(char *)0x0C7F319E)
        p = base + (short)((signed char)idx * 508);
    else
        p = base;
    *(S12 *)0x0C7F31E4 = *(S12 *)(p + 496);
    *(int *)0x0C7F31E0 = *(int *)(p + 492);
}
