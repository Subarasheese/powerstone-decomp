/* Straight-line functions with calls and guards (batch gen_br): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
int FUN_0c09a7ba(int);
int FUN_0c09a910(int);
int FUN_0c0a2080(int, int, int, int, int, int, int, int, int, int, int, int);
extern int FUN_0c0e0bd0();
int FUN_0c0e12b0(int);
int nlMultiMatrixRevOrder8(int);
int FUN_0c087536(int a4);
int nlObjPutWorldMatrixMode(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c095398(int a4);

int FUN_0c087536(int a4)
{
    int stk[2];
    register int t0;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        FUN_0c0a2080(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        return FUN_0c09a7ba(a4);
    }
    return (signed char)t0;
}

int nlObjPutWorldMatrixMode(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;

    t0 = ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(FUN_0c0e0bd0))(0xC7F8780, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
    nlMultiMatrixRevOrder8(0xC7FCFC0);
    t0 = ((int (*)(int))(FUN_0c0e0bd0))(0xC7FCF80);
    return FUN_0c0e12b0(0xC7F8780);
}

int FUN_0c095398(int a4)
{
    int stk[2];

    FUN_0c09a910(a4);
    FUN_0c0a2080(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    (((struct o71A8_uchar *)(a4))->v) = 0x0;
    (((struct o71A9_uchar *)(a4))->v) = 0x8;
    return 0x71A9;
}
