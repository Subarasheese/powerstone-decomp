/* Copies the 12-byte record the global pointer at 0xC439DC8 points to into the caller's record; returns 0. */
typedef struct { int a, b, c; } S12;

int FUN_0c062a7e(S12 *dst)
{
    *dst = **(S12 **)0xC439DC8;
    return 0;
}
