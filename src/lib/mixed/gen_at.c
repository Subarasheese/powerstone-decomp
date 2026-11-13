/* Straight-line functions with calls and guards (batch gen_at): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_ushort { char p[0x40]; unsigned short v; };
int ADXRNA_SetOutVol(int, int, int, int);
int demo_attract_main(int, int, int, int);
int FUN_0c02b828(void);
int FUN_0c0593e0(int);
int obj_tick_class(int);
int math_mat_get_translate(int);
int gfx_set_background_plane(int, int, int, float);
int nlMultiMatrix(int);
int FUN_0c0e16c0(void);
int nlPushMatrix(int);
int gdFsCreateHn(int, int);
int mpdrv_stat(int);
int FUN_0c1135c8(int, int, int);
int FUN_0c1135fa(int, int, int);
int FUN_0c11556a(int, int, int, int, float, float, float, float, float, float, float, float);
int nlMakeModelViewProjectMatrix_objput(void);
int FUN_0c0d3fbe(void);
int FUN_0c0d4136(int a4, int a5, int a6, int a7);
int ADXT_SetOutVol(int a4, int a5, int a6, int a7);
int gfx_set_background_color(int a4, int a5, int a6);
int thunk_FUN_0c062242(int a4);
int gdFsChangeDir(int a4);
int thunk_FUN_0c111b54(int a4);
int fmMngMcpy(int a4, int a5, int a6);
int fmMngSncmp(int a4, int a5, int a6);
int FUN_0c1155a8(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int ADXT_SetOutVol(int a4, int a5, int a6, int a7)
{
    (((struct o40_ushort *)(a4))->v) = a5;
    return ADXRNA_SetOutVol((*(int *)((a4 + 0xC))), a5, a6, a7);
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
