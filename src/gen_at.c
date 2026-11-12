/* Straight-line functions with calls and guards (batch gen_at): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_ushort { char p[0x40]; unsigned short v; };
int ADXRNA_SetOutVol(int, int, int, int);
int FUN_0c02aab0(int, int, int, int);
int FUN_0c02b828(void);
int FUN_0c0593e0(int);
int FUN_0c05948c(int);
int FUN_0c062242(int);
int FUN_0c0df110(int, int, int, float);
int nlMultiMatrix(int);
int FUN_0c0e16c0(void);
int FUN_0c0e19b0(int);
int gdFsCreateHn(int, int);
int mpdrv_stat(int);
int FUN_0c1135c8(int, int, int);
int FUN_0c1135fa(int, int, int);
int FUN_0c11556a(int, int, int, int, float, float, float, float, float, float, float, float);
int nlMakeModelViewProjectMatrix_objput(void);
int FUN_0c0d3fbe(void);
int FUN_0c0d4136(int a4, int a5, int a6, int a7);
int FUN_0c0f4db4(int a4, int a5, int a6, int a7);
int FUN_0c0de280(int a4, int a5, int a6);
int thunk_FUN_0c062242(int a4);
int gdFsChangeDir(int a4);
int thunk_FUN_0c111b54(int a4);
int fmMngMcpy(int a4, int a5, int a6);
int fmMngSncmp(int a4, int a5, int a6);
int FUN_0c1155a8(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int nlMakeModelViewProjectMatrix_objput(void)
{
    FUN_0c0e19b0(0xC7FCF80);
    nlMultiMatrix((*(int *)0xC7FCCD4));
    return FUN_0c0e16c0();
}

int FUN_0c0d3fbe(void)
{
    FUN_0c02b828();
    FUN_0c05948c(0x5);
    return FUN_0c0593e0(0x5);
}

int FUN_0c0d4136(int a4, int a5, int a6, int a7)
{
    FUN_0c02aab0(a4, a5, a6, a7);
    FUN_0c05948c(0x5);
    return FUN_0c0593e0(0x5);
}

int FUN_0c0f4db4(int a4, int a5, int a6, int a7)
{
    (((struct o40_ushort *)(a4))->v) = a5;
    return ADXRNA_SetOutVol((*(int *)((a4 + 0xC))), a5, a6, a7);
}

int FUN_0c0de280(int a4, int a5, int a6)
{
    return FUN_0c0df110(a4, a5, a6, (*(float *)0xC0DE308));
}

int thunk_FUN_0c062242(int a4)
{
    return FUN_0c062242(a4);
}

int gdFsChangeDir(int a4)
{
    return gdFsCreateHn(a4, 0x0);
}

int thunk_FUN_0c111b54(int a4)
{
    return mpdrv_stat(a4);
}

int fmMngMcpy(int a4, int a5, int a6)
{
    return FUN_0c1135fa(a4, a5, a6);
}

int fmMngSncmp(int a4, int a5, int a6)
{
    return FUN_0c1135c8(a4, a5, a6);
}

int FUN_0c1155a8(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    return FUN_0c11556a(0x1, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
}
