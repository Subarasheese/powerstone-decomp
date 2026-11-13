/* Divides two float arguments (truncated to int) by 8, hands the quotients to FUN_0c0e06e0, then tail-calls FUN_0c0e05b0 with the object pointer. */
int FUN_0c0e06e0(int, int);
int FUN_0c0e05b0(int, int, int, int);

int FUN_0c0ccefc(int a4, float f4, float f5)
{
    int q5 = (int)f5 / 8;
    int q4 = (int)f4 / 8;
    FUN_0c0e06e0(q4, q5);
    return FUN_0c0e05b0(a4, q5, 0, 0);
}
