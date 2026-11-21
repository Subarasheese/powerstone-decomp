/* Straight-line functions with calls and guards (batch gen_eq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10B0_uint { char p[0x10B0]; unsigned int v; };
struct o10B4_int { char p[0x10B4]; int v; };
struct o10B4_uint { char p[0x10B4]; unsigned int v; };
struct o10B8_int { char p[0x10B8]; int v; };
struct o10B8_uint { char p[0x10B8]; unsigned int v; };
struct o10C0_int { char p[0x10C0]; int v; };
struct o10C0_uint { char p[0x10C0]; unsigned int v; };
struct o10D0_int { char p[0x10D0]; int v; };
struct o10F4_int { char p[0x10F4]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3C_short { char p[0x3C]; short v; };
struct o3C_ushort { char p[0x3C]; unsigned short v; };
struct o3E_ushort { char p[0x3E]; unsigned short v; };
struct o40_int { char p[0x40]; int v; };
struct o40_short { char p[0x40]; short v; };
struct o40_ushort { char p[0x40]; unsigned short v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_ushort { char p[0x68]; unsigned short v; };
struct o6A_ushort { char p[0x6A]; unsigned short v; };
struct o6C_uchar { char p[0x6C]; unsigned char v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o6D_uchar { char p[0x6D]; unsigned char v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oFAC_int { char p[0xFAC]; int v; };
struct oFB0_int { char p[0xFB0]; int v; };
struct oFB0_uint { char p[0xFB0]; unsigned int v; };
struct oFC0_int { char p[0xFC0]; int v; };
struct oFC0_uint { char p[0xFC0]; unsigned int v; };
struct oFCC_uint { char p[0xFCC]; unsigned int v; };
struct oFD8_uint { char p[0xFD8]; unsigned int v; };
struct oFDC_uint { char p[0xFDC]; unsigned int v; };
int ADXRNA_SetBitPerSmpl(int, int);
int ADXRNA_SetNumChan(int, int);
int ADXRNA_SetOutVol(int, int);
int ADXRNA_SetSfreq(int, int);
int ADXRNA_SetStmHdInfo(int, int);
int ADXRNA_SetTotalNumSmpl(void);
int ADXRNA_SetTransSw(int, int);
int ADXSJD_Create(int, int, int);
int ADXSJD_EntryTrapFunc(int, int, int);
int ADXSJD_GetBlkSmpl(int);
int ADXSJD_GetFormat(int);
int ADXSJD_GetLpEndOfst(int);
int ADXSJD_GetLpEndPos(int);
int ADXSJD_GetNumChan(int);
int ADXSJD_GetNumLoop(int);
int ADXSJD_GetOutBps(int);
int ADXSJD_GetSfreq(int);
int ADXSJD_GetTotalNumSmpl(int);
int ADXSJD_SetTrapNumSmpl(int, int);
int ADXT_Destroy(int);
int FUN_0c105e8a(int);
int FUN_0c105e9e(int, int);
int FUN_0c1062f6(int, int);
int FUN_0c106302(int, int);
int FUN_0c106408(int);
int FUN_0c1066a0(int, int, int);
int FUN_0c1066a6(int, int);
int FUN_0c106a86(int);
int FUN_0c108776(int, int, int);
int FUN_0c10aa20(void);
int FUN_0c10aa80(int);
int FUN_0c10aad4(int, int, int);
int FUN_0c10ab20(int, int, int);
int FUN_0c10ab3c(int, int, int);
int FUN_0c11163a(void);
int FUN_0c112f1e(int);
int FUN_0c114f90(int, int, int);
extern int _builtin_tas(char *);
int memset(int, int, int);
int mpdrv_dpf(int, int, int, int, int);
extern int mwRnaErrCallFunc();
int thunk_ADXRNA_Create(int, int);
int FUN_0c109fae(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c10af66(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c10a5c0(int a4, int a5, int a6, int a7);
int mpdrv_frame_send(int a4, int a5, int a6, int a7);
int adxt_stat_decinfo(int a4);
int ADXT_Create(int a4, int a5, int a6, int a7);
int FUN_0c10a47c(int a4, int a5, int a6);
float FUN_0c0e4358(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_0c1080f0(int a4, int a5, int a6, int a7);

int FUN_0c109fae(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[4];

    register int R1;
    register int R2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_6 = a4;
    v0_9 = a5;
    v0_7 = a6;
    v0_8 = a7;
    *(unsigned short *)(((int)stk + 4)) = v0_6;
    v0_3 = (int)((int)v0_7 % (int)0x20);
    v0_2 = v0_8;
    v0_1 = (v0_9);
    v0_0 = (v0_7);
    v0_6 = (v0_3);
    v0_7 = ((v0_9 + v0_7));
    v0_8 = (0x0);
    v0_2 = v0_2;
    if ((v0_3 == 0)) goto L_C109FE4;
    v0_0 = ((v0_0 + (0x20 - v0_6)));
    L_C109FE4:;
    v0_5 = *(short *)(((int)stk + 4));
    v0_9 = *(int *)((((signed char)(((v0_5 << 2) + v0_5) << 2) + 0xC347648) + 0x8));
    v0_3 = (0xC347648);
    v0_4 = (v0_8);
    v0_6 = (v0_9);
    v0_5 = ((signed char)(((v0_5 << 2) + v0_5) << 2));
    if ((v0_9 == 0)) goto L_C10A046;
    L_C10A000:;
    v0_10 = *(int *)((v0_6 + 0xC));
    v0_9 = (v0_10);
    if (((int)v0_10 > (int)v0_1)) goto L_C10A040;
    if (((int)((*(int *)((v0_6 + 0x10))) + v0_9) <= (int)v0_1)) goto L_C10A040;
    if (((int)v0_9 > (int)v0_7)) goto L_C10A040;
    if (((int)((*(int *)((v0_6 + 0x10))) + v0_9) < (int)v0_7)) goto L_C10A040;
    v0_4 = (v0_6);
    v0_6 = (v0_8);
    L_C10A042:;
    if ((v0_6 != 0)) goto L_C10A000;
    L_C10A046:;
    if (!((v0_4 != 0))) goto L_C10A1FA;
    if (((*(int *)((v0_4 + 0x10))) != v0_0)) goto L_C10A0E0;
    FUN_0c10ab3c(((v0_5 + v0_3) + 0x8), ((v0_5 + v0_3) + 0xC), v0_4);
    FUN_0c10aad4((v0_5 + v0_3), ((v0_5 + v0_3) + 0x4), v0_4);
    *(unsigned int *)((v0_2 + 0x1C)) = (*(int *)((v0_4 + 0xC)));
    *(unsigned int *)((v0_4 + 0x14)) = v0_2;
    *(unsigned short *)((v0_4 + 0x0)) = 0x1;
    if (((*(short *)(((int)stk + 4))) != 0)) goto L_C10A086;
    *(unsigned short *)((v0_4 + 0x0)) = ((*(short *)((v0_4 + 0x0))) | 0x80);
    goto L_C10A08E;
    L_C10A1FA:;
    v0_0 = (0x3);
    L_C10A29E:;
    return v0_0;
    L_C10A08E:;
    if ((a8 == 0)) goto L_C10A09A;
    *(unsigned short *)((v0_4 + 0x0)) = ((*(short *)((v0_4 + 0x0))) | 0x2);
    L_C10A09A:;
    v0_5 = ((v0_5 + v0_3));
    if ((a9 == 0)) goto L_C10A0A8;
    *(unsigned short *)((v0_4 + 0x0)) = ((*(short *)((v0_4 + 0x0))) | 0x4);
    L_C10A0A8:;
    v0_0 = ((*(int *)((v0_4 + 0x10))));
    L_C10A14C:;
    *(unsigned int *)((v0_5 + 0x10)) = ((*(int *)((v0_5 + 0x10))) - v0_0);
    L_C10A29C:;
    v0_0 = (0x0);
    goto L_C10A29E;
    L_C10A086:;
    *(unsigned short *)((v0_4 + 0x0)) = ((*(short *)((v0_4 + 0x0))) | 0x100);
    goto L_C10A08E;
    L_C10A0E0:;
    if (((*(int *)((v0_4 + 0xC))) != v0_1)) goto L_C10A180;
    v0_1 = FUN_0c10aa20();
    v0_6 = (v0_1);
    if ((v0_1 != 0)) goto L_C10A0F4;
    goto L_C10A1FA;
    L_C10A0F4:;
    *(unsigned int *)((v0_6 + 0xC)) = (*(int *)((v0_4 + 0xC)));
    *(unsigned int *)((v0_6 + 0x10)) = v0_0;
    *(unsigned int *)((v0_4 + 0x10)) = ((*(int *)((v0_4 + 0x10))) - v0_0);
    *(unsigned int *)((v0_4 + 0xC)) = ((*(int *)((v0_4 + 0xC))) + v0_0);
    *(unsigned int *)(((int)stk + 0)) = (v0_5 + v0_3);
    FUN_0c10aad4((*(int *)(((int)stk + 0))), ((v0_5 + v0_3) + 0x4), v0_6);
    *(unsigned int *)((v0_2 + 0x1C)) = (*(int *)((v0_6 + 0xC)));
    *(unsigned int *)((v0_6 + 0x14)) = v0_2;
    if (((*(short *)(((int)stk + 4))) != 0)) goto L_C10A128;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x80);
    L_C10A130:;
    if ((a8 == 0)) goto L_C10A13C;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x2);
    L_C10A13C:;
    v0_5 = ((v0_5 + v0_3));
    if ((a9 == 0)) goto L_C10A14A;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x4);
    L_C10A14A:;
    v0_0 = ((*(int *)((v0_6 + 0x10))));
    goto L_C10A14C;
    L_C10A128:;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x100);
    goto L_C10A130;
    L_C10A180:;
    if ((((*(int *)((v0_4 + 0xC))) + (*(int *)((v0_4 + 0x10)))) != v0_7)) goto L_C10A1E2;
    v0_7 = FUN_0c10aa20();
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C10A1FA;
    *(unsigned int *)((v0_4 + 0x10)) = ((*(int *)((v0_4 + 0x10))) - v0_0);
    *(unsigned int *)((v0_6 + 0xC)) = v0_1;
    *(unsigned int *)((v0_6 + 0x10)) = v0_0;
    *(unsigned int *)(((int)stk + 0)) = (v0_5 + v0_3);
    FUN_0c10aad4((*(int *)(((int)stk + 0))), ((v0_5 + v0_3) + 0x4), v0_6);
    *(unsigned int *)((v0_2 + 0x1C)) = (*(int *)((v0_6 + 0xC)));
    *(unsigned int *)((v0_6 + 0x14)) = v0_2;
    if (((*(short *)(((int)stk + 4))) != 0)) goto L_C10A1C0;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x80);
    L_C10A1C8:;
    if ((a8 == 0)) goto L_C10A1D4;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x2);
    L_C10A1D4:;
    if ((a9 == 0)) goto L_C10A292;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x4);
    L_C10A292:;
    *(unsigned int *)(((v0_5 + v0_3) + 0x10)) = ((*(int *)(((v0_5 + v0_3) + 0x10))) - (*(int *)((v0_6 + 0x10))));
    goto L_C10A29C;
    L_C10A1C0:;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x100);
    goto L_C10A1C8;
    L_C10A1E2:;
    v0_7 = FUN_0c10aa20();
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C10A1FA;
    v0_7 = FUN_0c10aa20();
    *(unsigned int *)(((int)stk + 0)) = v0_7;
    if ((v0_7 != 0)) goto L_C10A220;
    FUN_0c10aa80(v0_6);
    goto L_C10A1FA;
    L_C10A220:;
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((v0_4 + 0x10)));
    v0_7 = *(int *)((v0_4 + 0xC));
    *(unsigned int *)(((int)stk + 8)) = (v0_1 - v0_7);
    *(unsigned int *)((v0_4 + 0x10)) = (v0_1 - v0_7);
    *(unsigned int *)((v0_6 + 0xC)) = v0_1;
    *(unsigned int *)((v0_6 + 0x10)) = v0_0;
    FUN_0c10aad4((v0_5 + v0_3), ((v0_5 + v0_3) + 0x4), v0_6);
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0xC)) = (v0_1 + v0_0);
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x10)) = (((*(int *)(((int)stk + 12))) - v0_0) - (*(int *)(((int)stk + 8))));
    FUN_0c10ab20(((v0_5 + v0_3) + 0xC), (*(int *)(((int)stk + 0))), (*(int *)(((v0_5 + v0_3) + 0xC))));
    *(unsigned int *)((v0_2 + 0x1C)) = (*(int *)((v0_6 + 0xC)));
    *(unsigned int *)((v0_6 + 0x14)) = v0_2;
    v0_4 = ((v0_5 + v0_3));
    if (((*(short *)(((int)stk + 4))) != 0)) goto L_C10A272;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x80);
    L_C10A27A:;
    if ((a8 == 0)) goto L_C10A286;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x2);
    L_C10A286:;
    if ((a9 == 0)) goto L_C10A292;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x4);
    goto L_C10A292;
    L_C10A272:;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x100);
    goto L_C10A27A;
    L_C10A040:;
    v0_6 = ((*(int *)((v0_6 + 0x8))));
    goto L_C10A042;
}

int FUN_0c10af66(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[4];

    register int R1;
    register int R2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_6 = a4;
    v0_9 = a5;
    v0_7 = a6;
    v0_8 = a7;
    *(unsigned short *)(((int)stk + 4)) = v0_6;
    v0_3 = (int)((int)v0_7 % (int)0x20);
    v0_2 = v0_8;
    v0_1 = (v0_9);
    v0_0 = (v0_7);
    v0_6 = (v0_3);
    v0_7 = ((v0_9 + v0_7));
    v0_8 = (0x0);
    v0_2 = v0_2;
    if ((v0_3 == 0)) goto L_C10AF9C;
    v0_0 = ((v0_0 + (0x20 - v0_6)));
    L_C10AF9C:;
    v0_5 = *(short *)(((int)stk + 4));
    v0_9 = *(int *)((((signed char)(((v0_5 << 2) + v0_5) << 2) + 0xC347648) + 0x8));
    v0_3 = (0xC347648);
    v0_4 = (v0_8);
    v0_6 = (v0_9);
    v0_5 = ((signed char)(((v0_5 << 2) + v0_5) << 2));
    if ((v0_9 == 0)) goto L_C10AFDE;
    L_C10AFB8:;
    v0_10 = *(int *)((v0_6 + 0xC));
    v0_9 = (v0_10);
    if (((int)v0_10 > (int)v0_1)) goto L_C10AFD8;
    if (((int)((*(int *)((v0_6 + 0x10))) + v0_9) <= (int)v0_1)) goto L_C10AFD8;
    if (((int)v0_9 > (int)v0_7)) goto L_C10AFD8;
    if (((int)((*(int *)((v0_6 + 0x10))) + v0_9) < (int)v0_7)) goto L_C10AFD8;
    v0_4 = (v0_6);
    v0_6 = (v0_8);
    L_C10AFDA:;
    if ((v0_6 != 0)) goto L_C10AFB8;
    L_C10AFDE:;
    if (!((v0_4 != 0))) goto L_C10B17C;
    if (((*(int *)((v0_4 + 0x10))) != v0_0)) goto L_C10B066;
    FUN_0c10ab3c(((v0_5 + v0_3) + 0x8), ((v0_5 + v0_3) + 0xC), v0_4);
    FUN_0c10aad4((v0_5 + v0_3), ((v0_5 + v0_3) + 0x4), v0_4);
    *(unsigned int *)((v0_2 + 0x8)) = (*(int *)((v0_4 + 0xC)));
    *(unsigned int *)((v0_4 + 0x14)) = v0_2;
    *(unsigned short *)((v0_4 + 0x0)) = 0x1;
    if (((*(short *)(((int)stk + 4))) != 0)) goto L_C10B040;
    *(unsigned short *)((v0_4 + 0x0)) = ((*(short *)((v0_4 + 0x0))) | 0x800);
    goto L_C10B048;
    L_C10B17C:;
    v0_0 = (0x3);
    L_C10B220:;
    return v0_0;
    L_C10B048:;
    if ((a8 == 0)) goto L_C10B054;
    *(unsigned short *)((v0_4 + 0x0)) = ((*(short *)((v0_4 + 0x0))) | 0x2);
    L_C10B054:;
    v0_5 = ((v0_5 + v0_3));
    if ((a9 == 0)) goto L_C10B062;
    *(unsigned short *)((v0_4 + 0x0)) = ((*(short *)((v0_4 + 0x0))) | 0x4);
    L_C10B062:;
    v0_0 = ((*(int *)((v0_4 + 0x10))));
    L_C10B0D4:;
    *(unsigned int *)((v0_5 + 0x10)) = ((*(int *)((v0_5 + 0x10))) - v0_0);
    L_C10B21E:;
    v0_0 = (0x0);
    goto L_C10B220;
    L_C10B040:;
    *(unsigned short *)((v0_4 + 0x0)) = ((*(short *)((v0_4 + 0x0))) | 0x1000);
    goto L_C10B048;
    L_C10B066:;
    if (((*(int *)((v0_4 + 0xC))) != v0_1)) goto L_C10B100;
    v0_1 = FUN_0c10aa20();
    v0_6 = (v0_1);
    if ((v0_1 != 0)) goto L_C10B07A;
    goto L_C10B17C;
    L_C10B07A:;
    *(unsigned int *)((v0_6 + 0xC)) = (*(int *)((v0_4 + 0xC)));
    *(unsigned int *)((v0_6 + 0x10)) = v0_0;
    *(unsigned int *)((v0_4 + 0x10)) = ((*(int *)((v0_4 + 0x10))) - v0_0);
    *(unsigned int *)((v0_4 + 0xC)) = ((*(int *)((v0_4 + 0xC))) + v0_0);
    *(unsigned int *)(((int)stk + 0)) = (v0_5 + v0_3);
    FUN_0c10aad4((*(int *)(((int)stk + 0))), ((v0_5 + v0_3) + 0x4), v0_6);
    *(unsigned int *)((v0_2 + 0x8)) = (*(int *)((v0_6 + 0xC)));
    *(unsigned int *)((v0_6 + 0x14)) = v0_2;
    if (((*(short *)(((int)stk + 4))) != 0)) goto L_C10B0B0;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x800);
    L_C10B0B8:;
    if ((a8 == 0)) goto L_C10B0C4;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x2);
    L_C10B0C4:;
    v0_5 = ((v0_5 + v0_3));
    if ((a9 == 0)) goto L_C10B0D2;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x4);
    L_C10B0D2:;
    v0_0 = ((*(int *)((v0_6 + 0x10))));
    goto L_C10B0D4;
    L_C10B0B0:;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x1000);
    goto L_C10B0B8;
    L_C10B100:;
    if ((((*(int *)((v0_4 + 0xC))) + (*(int *)((v0_4 + 0x10)))) != v0_7)) goto L_C10B164;
    v0_7 = FUN_0c10aa20();
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C10B17C;
    *(unsigned int *)((v0_4 + 0x10)) = ((*(int *)((v0_4 + 0x10))) - v0_0);
    *(unsigned int *)((v0_6 + 0xC)) = v0_1;
    *(unsigned int *)((v0_6 + 0x10)) = v0_0;
    *(unsigned int *)(((int)stk + 0)) = (v0_5 + v0_3);
    FUN_0c10aad4((*(int *)(((int)stk + 0))), ((v0_5 + v0_3) + 0x4), v0_6);
    *(unsigned int *)((v0_2 + 0x8)) = (*(int *)((v0_6 + 0xC)));
    *(unsigned int *)((v0_6 + 0x14)) = v0_2;
    if (((*(short *)(((int)stk + 4))) != 0)) goto L_C10B142;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x800);
    L_C10B14A:;
    if ((a8 == 0)) goto L_C10B156;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x2);
    L_C10B156:;
    if ((a9 == 0)) goto L_C10B214;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x4);
    L_C10B214:;
    *(unsigned int *)(((v0_5 + v0_3) + 0x10)) = ((*(int *)(((v0_5 + v0_3) + 0x10))) - (*(int *)((v0_6 + 0x10))));
    goto L_C10B21E;
    L_C10B142:;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x1000);
    goto L_C10B14A;
    L_C10B164:;
    v0_7 = FUN_0c10aa20();
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C10B17C;
    v0_7 = FUN_0c10aa20();
    *(unsigned int *)(((int)stk + 0)) = v0_7;
    if ((v0_7 != 0)) goto L_C10B1A0;
    FUN_0c10aa80(v0_6);
    goto L_C10B17C;
    L_C10B1A0:;
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((v0_4 + 0x10)));
    v0_7 = *(int *)((v0_4 + 0xC));
    *(unsigned int *)(((int)stk + 8)) = (v0_1 - v0_7);
    *(unsigned int *)((v0_4 + 0x10)) = (v0_1 - v0_7);
    *(unsigned int *)((v0_6 + 0xC)) = v0_1;
    *(unsigned int *)((v0_6 + 0x10)) = v0_0;
    FUN_0c10aad4((v0_5 + v0_3), ((v0_5 + v0_3) + 0x4), v0_6);
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0xC)) = (v0_1 + v0_0);
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x10)) = (((*(int *)(((int)stk + 12))) - v0_0) - (*(int *)(((int)stk + 8))));
    FUN_0c10ab20(((v0_5 + v0_3) + 0xC), (*(int *)(((int)stk + 0))), (*(int *)(((v0_5 + v0_3) + 0xC))));
    *(unsigned int *)((v0_2 + 0x8)) = (*(int *)((v0_6 + 0xC)));
    *(unsigned int *)((v0_6 + 0x14)) = v0_2;
    v0_4 = ((v0_5 + v0_3));
    if (((*(short *)(((int)stk + 4))) != 0)) goto L_C10B1F4;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x800);
    L_C10B1FC:;
    if ((a8 == 0)) goto L_C10B208;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x2);
    L_C10B208:;
    if ((a9 == 0)) goto L_C10B214;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x4);
    goto L_C10B214;
    L_C10B1F4:;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x1000);
    goto L_C10B1FC;
    L_C10AFD8:;
    v0_6 = ((*(int *)((v0_6 + 0x8))));
    goto L_C10AFDA;
}

int FUN_0c10a5c0(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t4;
    register int t41;
    register int t45;
    register int t46;
    int t48;
    register int t6;
    int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t49;
    register int t50;
    register int t111;
    register int t72;
    register int t7;
    register int t35;
    register int t37;
    int t21;
    register int t22;

    *(unsigned short *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a6;
    t0 = (int)((int)a5 % (int)0x20);
    t1 = a5;
    if (t0 != 0) {
        t1 = (a5 + (0x20 - t0));
    }
    t4 = *(short *)(((int)stk + 16));
    t9 = *(int *)((((signed char)(((t4 << 2) + t4) << 2) + 0xC347648) + 0x8));
    t41 = 0x0;
    t45 = a5;
    t46 = 0x0;
    t48 = 0x0;
    if (t9 != 0) {
        t6 = t4;
        t8 = t4;
        t10 = a5;
        t11 = 0x0;
        t12 = 0x0;
        t13 = 0x0;
        for (;;) {
            if ((int)(*(int *)((t9 + 0x10))) >= (int)t1) {
                if (t12 == 0) {
                    t12 = t9;
                }
                t8 = 0xC0E6E5C;
                t7 = (*(int *)((t9 + 0xC)));
                t6 = 0x800;
                t6 = ((int)((int)t7 % (int)t6));
                if (t6 != 0) {
                    t10 = (*(int *)((t9 + 0xC)));
                    t8 = 0xFFFFF800;
                    *(unsigned int *)(((int)stk + 8)) = t10;
                    t10 = (t10 + 0x800);
                    t10 = (t10 & t8);
                    t7 = (*(int *)(((int)stk + 8)));
                    t7 = (t7 + (*(int *)((t9 + 0x10))));
                    *(unsigned int *)(((int)stk + 8)) = t7;
                    if (((int)t10 < (int)t7) && (t21 = *(int *)((t9 + 0xC)), t22 = ((int)t10 >= (int)t7), t7 = t10, t7 = (t7 - t21), (int)t7 < (int)t1)) {
                        if ((int)((*(int *)(((int)stk + 8))) - t10) >= (int)t1) {
                            t11 = 0x2;
                            t13 = t9;
                            t9 = 0x0;
                        } else {
                            t9 = (*(int *)((t9 + 0x8)));
                        }
                    } else {
                        t11 = 0x1;
                        t13 = t9;
                        t9 = 0x0;
                    }
                    t35 = t7;
                    t37 = t8;
                } else {
                    t10 = (*(int *)((t9 + 0xC)));
                    t11 = 0x1;
                    t13 = t9;
                    t9 = 0x0;
                    t37 = 0xC0E6E5C;
                }
            } else {
                t9 = (*(int *)((t9 + 0x8)));
                t35 = t7;
                t37 = t8;
            }
            t7 = t35;
            t8 = t37;
            if (t9 == 0) {
                break;
            }
        }
        t41 = t13;
        t45 = t10;
        t46 = t11;
        t48 = t12;
    }
    t49 = t41;
    t50 = t46;
    if ((t46 == 0) && (t48 != 0)) {
        t49 = t48;
        t50 = 0x1;
    }
    t111 = 0x3;
    if (t49 != 0) {
        if (t50 == 2) {
            *(int *)((int)stk + 4) = 0x1;
            *(int *)((int)stk + 0) = 0x0;
            t111 = (FUN_0c10af66((*(short *)(((int)stk + 16))), t45, t1, (*(int *)(((int)stk + 12))), 0x0, 0x1));
        } else {
            if ((*(int *)((t49 + 0x10))) == t1) {
                FUN_0c10ab3c((((signed char)(((t4 << 2) + t4) << 2) + 0xC347648) + 0x8), (((signed char)(((t4 << 2) + t4) << 2) + 0xC347648) + 0xC), t49);
                FUN_0c10aad4(((signed char)(((t4 << 2) + t4) << 2) + 0xC347648), (((signed char)(((t4 << 2) + t4) << 2) + 0xC347648) + 0x4), t49);
                *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x8)) = (*(int *)((t49 + 0xC)));
                *(unsigned int *)((t49 + 0x14)) = (*(int *)(((int)stk + 12)));
                *(unsigned short *)((t49 + 0x0)) = 0x1;
                if ((*(short *)(((int)stk + 16))) == 0) {
                    *(unsigned short *)((t49 + 0x0)) = ((*(short *)((t49 + 0x0))) | 0x200);
                } else {
                    *(unsigned short *)((t49 + 0x0)) = ((*(short *)((t49 + 0x0))) | 0x400);
                }
                *(unsigned short *)((t49 + 0x0)) = ((*(short *)((t49 + 0x0))) | 0x4);
                *(unsigned int *)((((signed char)(((t4 << 2) + t4) << 2) + 0xC347648) + 0x10)) = ((*(int *)((((signed char)(((t4 << 2) + t4) << 2) + 0xC347648) + 0x10))) - (*(int *)((t49 + 0x10))));
                t111 = 0x0;
            } else {
                t72 = FUN_0c10aa20();
                t111 = 0x3;
                if (t72 == 0) {
                } else {
                    *(unsigned int *)((t72 + 0xC)) = (*(int *)((t49 + 0xC)));
                    *(unsigned int *)((t72 + 0x10)) = t1;
                    *(unsigned int *)((t49 + 0x10)) = ((*(int *)((t49 + 0x10))) - t1);
                    *(unsigned int *)((t49 + 0xC)) = ((*(int *)((t49 + 0xC))) + t1);
                    *(unsigned int *)(((int)stk + 8)) = ((signed char)(((t4 << 2) + t4) << 2) + 0xC347648);
                    FUN_0c10aad4((*(int *)(((int)stk + 8))), (((signed char)(((t4 << 2) + t4) << 2) + 0xC347648) + 0x4), t72);
                    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x8)) = (*(int *)((t72 + 0xC)));
                    *(unsigned int *)((t72 + 0x14)) = (*(int *)(((int)stk + 12)));
                    if ((*(short *)(((int)stk + 16))) == 0) {
                        *(unsigned short *)((t72 + 0x0)) = ((*(short *)((t72 + 0x0))) | 0x200);
                    } else {
                        *(unsigned short *)((t72 + 0x0)) = ((*(short *)((t72 + 0x0))) | 0x400);
                    }
                    *(unsigned short *)((t72 + 0x0)) = ((*(short *)((t72 + 0x0))) | 0x4);
                    *(unsigned int *)((((signed char)(((t4 << 2) + t4) << 2) + 0xC347648) + 0x10)) = ((*(int *)((((signed char)(((t4 << 2) + t4) << 2) + 0xC347648) + 0x10))) - (*(int *)((t72 + 0x10))));
                    t111 = 0x0;
                }
            }
        }
    }
    return t111;
}

int mpdrv_frame_send(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = 0xFFFFFFFD;
    if (((((struct oFC0_int *)((*(int *)0xC843924)))->v)) != 1) {
    } else {
        t1 = 0xFFFFFFFF;
        if (((*(int *)((((((struct o10F4_int *)((*(int *)0xC843924)))->v)) + 0x18))) & 0x1) != 0) {
        } else {
            if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
                mpdrv_dpf(a4, a5, a6, a7, 0xC15B640);
                t2 = 0xFFFFFFFE;
            } else {
                t3 = *(int *)0xC843924;
                if (((((struct oFB0_int *)(t3))->v)) != ((((struct oFAC_int *)(t3))->v))) {
                    t3 = *(int *)0xC843924;
                    (((struct oFB0_uint *)(t3))->v) = ((((struct oFAC_int *)(t3))->v));
                    if (((((struct oFAC_int *)((*(int *)0xC843924)))->v)) != 0) {
                        (((struct o10C0_uint *)((*(int *)0xC843924)))->v) = (((int)((int)((*(int *)0xC15B04C) * 0x3E8) / (int)0x14)) << 16);
                    } else {
                        (((struct o10C0_uint *)((*(int *)0xC843924)))->v) = 0xC3500000;
                    }
                    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC843924)))->v)) + 0x14)) = 0x0;
                    t3 = *(int *)0xC843924;
                    (((struct o80_uint *)(((((struct o10F4_int *)(t3))->v))))->v) = (((((struct o10C0_int *)(t3))->v)) | ((((struct o10D0_int *)(t3))->v)));
                    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC843924)))->v)) + 0x14)) = 0x1;
                }
                FUN_0c11163a();
                t3 = *(int *)0xC843924;
                (((struct o10B0_uint *)(t3))->v) = (*(int *)((((((((struct o10B8_int *)(t3))->v)) << 2) + (0x10A8 + t3)) + 0x0)));
                t3 = *(int *)0xC843924;
                *(unsigned int *)(((((((struct o10F4_int *)(t3))->v)) + 0x4) + 0x0)) = (FUN_0c112f1e((*(int *)((((((((struct o10B8_int *)(t3))->v)) << 2) + (0x10A8 + t3)) + 0x0)))));
                *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC843924)))->v)) + 0x18)) = 0x1;
                (((struct oFD8_uint *)((*(int *)0xC843924)))->v) = 0x0;
                t3 = *(int *)0xC843924;
                (((struct o10B8_uint *)(t3))->v) = (((((struct o10B8_int *)(t3))->v)) ^ 0x1);
                t3 = *(int *)0xC843924;
                (((struct oFCC_uint *)(t3))->v) = (*(int *)((((((((struct o10B8_int *)(t3))->v)) << 2) + (0x10A8 + t3)) + 0x0)));
                t3 = *(int *)0xC843924;
                t4 = (((struct o10B4_int *)(t3))->v);
                (((struct o10B4_uint *)(t3))->v) = (t4 ^ 0x1);
                t3 = *(int *)0xC843924;
                (((struct oFDC_uint *)(t3))->v) = 0x0;
                t5 = 0xFDC;
                t6 = (t4 ^ 0x1);
                t4 = t3;
                t3 = ((*(int *)0xC843924) + 0x28);
                t7 = 0x0;
                for (;;) {
                    if ((int)t7 >= (int)0x18) {
                        break;
                    }
                    t4 = 0xF90;
                    t5 = (*(int *)0xC843924);
                    t4 = (t4 + t5);
                    t4 = (t4 + t7);
                    t6 = (*(signed char *)((t4 + 0x0)));
                    t7 = (t7 + 0x1);
                    if (t6 != 0) {
                        t5 = (*(signed char *)((t3 + 0x6)));
                        *(unsigned char *)((t3 + 0x7)) = t5;
                        t5 = 0x0;
                        *(unsigned char *)((t3 + 0x6)) = t5;
                        t4 = (*(int *)((t3 + 0x18)));
                        *(unsigned int *)((t3 + 0x1C)) = t4;
                        *(unsigned int *)((t3 + 0x18)) = t5;
                    }
                    t3 = (t3 + 0x2C);
                }
                (((struct oFC0_uint *)((*(int *)0xC843924)))->v) = 0x0;
                *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
                t2 = 0x0;
            }
            t1 = t2;
        }
        t0 = t1;
    }
    return t0;
}

int adxt_stat_decinfo(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(int *)((a4 + 0x4));
    t1 = FUN_0c105e8a(t0);
    t2 = t1;
    if (t1 != 2) {
    } else {
        t1 = ADXSJD_GetSfreq(t0);
        t3 = ADXSJD_GetNumLoop(t0);
        if ((int)t3 > 0) {
            t4 = (int)((int)t1 / (int)(*(int *)((a4 + 0x38))));
            t5 = ((t4 << 1) + t4);
        } else {
            t4 = (int)((int)t1 / (int)(*(int *)((a4 + 0x38))));
            t5 = (((int)((unsigned int)((int)((unsigned int)((t4 << 1) + t4) + (unsigned int)0x0)) + ((((int)0x0 > (int)((t4 << 1) + t4))) ? 1u : 0u))) >> 1);
        }
        (((struct o48_uint *)(a4))->v) = t5;
        t1 = ADXSJD_GetBlkSmpl(t0);
        (((struct o48_uint *)(a4))->v) = (((int)((int)(((((struct o48_int *)(a4))->v)) + (t1 << 1)) / (int)(t1 << 1))) * (t1 << 1));
        FUN_0c105e9e(t0, ((((struct o48_int *)(a4))->v)));
        if ((int)t3 > 0) {
            if ((*(signed char *)((a4 + 0x2))) == 2) {
                (((struct o50_uint *)(a4))->v) = 0x0;
            } else {
                t1 = ADXSJD_GetLpEndOfst(t0);
                (((struct o50_uint *)(a4))->v) = (0x800 - ((int)((int)t1 % (int)0x800)));
                (((struct o50_uint *)(a4))->v) = ((int)((int)((((struct o50_int *)(a4))->v)) % (int)0x800));
                FUN_0c1066a6((*(int *)((a4 + 0x8))), ((int)((int)((0x800 + t1) - 1) / (int)0x800)));
                FUN_0c1066a0((*(int *)((a4 + 0x8))), 0xC106A60, a4);
            }
            t1 = ADXSJD_GetLpEndPos(t0);
            ADXSJD_SetTrapNumSmpl(t0, t1);
            FUN_0c106302(t0, 0x0);
            FUN_0c1062f6(t0, 0x0);
            ADXSJD_EntryTrapFunc(t0, 0xC106994, a4);
        } else {
            if ((*(int *)((a4 + 0x8))) != 0) {
                FUN_0c1066a6((*(int *)((a4 + 0x8))), 0x7FFFFFFF);
            }
        }
        t1 = ADXSJD_GetSfreq(t0);
        t3 = ADXSJD_GetNumChan(t0);
        ADXSJD_GetTotalNumSmpl(t0);
        t4 = ADXSJD_GetOutBps(t0);
        ADXRNA_SetBitPerSmpl((*(int *)((a4 + 0xC))), t4);
        ADXRNA_SetSfreq((*(int *)((a4 + 0xC))), t1);
        ADXRNA_SetNumChan((*(int *)((a4 + 0xC))), t3);
        *(volatile int *)((a4 + 0xC));
        ADXRNA_SetTotalNumSmpl();
        ADXRNA_SetOutVol((*(int *)((a4 + 0xC))), ((((struct o40_short *)(a4))->v)));
        FUN_0c106a86(a4);
        t1 = ADXSJD_GetFormat(t0);
        if (t1 == 2) {
            t1 = FUN_0c106408(t0);
            ADXRNA_SetStmHdInfo((*(int *)((a4 + 0xC))), t1);
        }
        ADXRNA_SetTransSw((*(int *)((a4 + 0xC))), 0x1);
        *(unsigned char *)((a4 + 0x1)) = 0x2;
        t2 = 0x2;
    }
    return t2;
}

int ADXT_Create(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = 0x0;
    for (;;) {
        if ((*(signed char *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x0))) != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x8) {
                break;
            }
            continue;
        }
        break;
    }
    t1 = 0x0;
    if (t0 != 8) {
        memset(((short)((short)t0 * (short)0x74) + 0xC346C2C), 0x0, 0x74);
        *(unsigned char *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x3)) = a4;
        *(unsigned int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x20)) = (((((((a4 << 8) + a4) << 2) << 2) << 1) << 1) + ((a5 + 0x1F) & 0xFFFFFFE0));
        *(unsigned int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x24)) = (((((unsigned int)((unsigned int)((unsigned int)(((a6 - (((a5 + 0x1F) & 0xFFFFFFE0) - a5)) - ((((((a4 << 8) + a4) << 2) << 2) << 1) << 1)) - 36) >> 8) >> 2) >> 1) << 8) << 2) << 1);
        *(unsigned int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x28)) = 0x24;
        *(unsigned int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x2C)) = ((a5 + 0x1F) & 0xFFFFFFE0);
        *(unsigned int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x30)) = 0x2000;
        *(unsigned int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x34)) = 0x2020;
        t2 = FUN_0c108776((*(int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x20))), (*(int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x24))), (*(int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x28))));
        *(unsigned int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x10)) = t2;
        *(unsigned int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x14)) = t2;
        if (t2 != 0) {
            if ((int)a4 > 0) {
                t2 = 0x0;
                for (;;) {
                    t3 = *(int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x34));
                    t4 = *(int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x30));
                    *(unsigned int *)((((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x18) + (t2 << 2)) + 0x0)) = (FUN_0c108776((((t3 * t2) << 1) + (*(int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x2C)))), (t4 << 1), ((t3 - t4) << 1)));
                    if ((*(int *)((((t2 << 2) + (((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x18)) + 0x0))) != 0) {
                        t2 = (t2 + 0x1);
                        if ((int)t2 >= (int)a4) {
                            break;
                        }
                        continue;
                    }
                    ADXT_Destroy(((short)((short)t0 * (short)0x74) + 0xC346C2C));
                    return 0x0;
                }
                t2 = ADXSJD_Create((*(int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x14))), a4, (((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x18));
                *(unsigned int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x4)) = t2;
                if (t2 != 0) {
                    t2 = thunk_ADXRNA_Create((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x18), a4);
                    *(unsigned int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0xC)) = t2;
                    if (t2 == 0) {
                        ADXT_Destroy(((short)((short)t0 * (short)0x74) + 0xC346C2C));
                        t2 = 0x0;
                    } else {
                        *(unsigned int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x38)) = 0x3C;
                        (((struct o3C_ushort *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = ((int)((int)(*(int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x24))) / (int)0x800));
                        (((struct o3E_ushort *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = (int)((float)((((struct o3C_short *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v)) * (*(float *)0xC0F4924));
                        (((struct o40_ushort *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = 0x0;
                        if ((int)a4 > 0) {
                            t3 = (((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x42);
                            t4 = 0x0;
                            for (;;) {
                                *(unsigned short *)((t3 + 0x0)) = 0xFFFFFF80;
                                t4 = (t4 + 0x1);
                                t3 = (t3 + 0x2);
                                if ((int)t4 >= (int)a4) {
                                    break;
                                }
                            }
                        }
                        (((struct o6C_uchar *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = 0x1;
                        (((struct o54_uint *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = 0x0;
                        (((struct o58_uint *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = 0x0;
                        (((struct o5C_uint *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = 0x0;
                        (((struct o60_ushort *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = 0x0;
                        (((struct o64_uint *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = 0x0;
                        (((struct o68_ushort *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = 0x0;
                        (((struct o6A_ushort *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = 0x0;
                        (((struct o6D_uchar *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = 0x1;
                        *(unsigned char *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x0)) = 0x1;
                        t2 = ((short)((short)t0 * (short)0x74) + 0xC346C2C);
                    }
                    t3 = t2;
                } else {
                    ADXT_Destroy(((short)((short)t0 * (short)0x74) + 0xC346C2C));
                    t3 = 0x0;
                }
                t2 = t3;
            } else {
                t3 = ADXSJD_Create((*(int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x14))), a4, (((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x18));
                *(unsigned int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x4)) = t3;
                if (t3 != 0) {
                    t3 = thunk_ADXRNA_Create((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x18), a4);
                    *(unsigned int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0xC)) = t3;
                    if (t3 == 0) {
                        ADXT_Destroy(((short)((short)t0 * (short)0x74) + 0xC346C2C));
                        t3 = 0x0;
                    } else {
                        *(unsigned int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x38)) = 0x3C;
                        (((struct o3C_ushort *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = ((int)((int)(*(int *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x24))) / (int)0x800));
                        (((struct o3E_ushort *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = (int)((float)((((struct o3C_short *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v)) * (*(float *)0xC0F4924));
                        (((struct o40_ushort *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = 0x0;
                        if ((int)a4 > 0) {
                            t4 = (((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x42);
                            t5 = 0x0;
                            for (;;) {
                                *(unsigned short *)((t4 + 0x0)) = 0xFFFFFF80;
                                t5 = (t5 + 0x1);
                                t4 = (t4 + 0x2);
                                if ((int)t5 >= (int)a4) {
                                    break;
                                }
                            }
                        }
                        (((struct o6C_uchar *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = 0x1;
                        (((struct o54_uint *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = 0x0;
                        (((struct o58_uint *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = 0x0;
                        (((struct o5C_uint *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = 0x0;
                        (((struct o60_ushort *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = 0x0;
                        (((struct o64_uint *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = 0x0;
                        (((struct o68_ushort *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = 0x0;
                        (((struct o6A_ushort *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = 0x0;
                        (((struct o6D_uchar *)(((short)((short)t0 * (short)0x74) + 0xC346C2C)))->v) = 0x1;
                        *(unsigned char *)((((short)((short)t0 * (short)0x74) + 0xC346C2C) + 0x0)) = 0x1;
                        t3 = ((short)((short)t0 * (short)0x74) + 0xC346C2C);
                    }
                    t4 = t3;
                } else {
                    ADXT_Destroy(((short)((short)t0 * (short)0x74) + 0xC346C2C));
                    t4 = 0x0;
                }
                t2 = t4;
            }
            t3 = t2;
        } else {
            ADXT_Destroy(((short)((short)t0 * (short)0x74) + 0xC346C2C));
            t3 = 0x0;
        }
        t1 = t3;
    }
    return t1;
}

int FUN_0c10a47c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = (int)((int)a5 % (int)0x20);
    t1 = a5;
    if (t0 != 0) {
        t1 = (a5 + (0x20 - t0));
    }
    t0 = *(int *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC347648) + 0x8));
    t2 = 0x0;
    if (t0 != 0) {
        t3 = t0;
        t0 = 0x0;
        for (;;) {
            if ((int)(*(int *)((t3 + 0x10))) >= (int)t1) {
                t0 = t3;
                t3 = 0x0;
            } else {
                t3 = (*(int *)((t3 + 0x8)));
            }
            if (t3 == 0) {
                break;
            }
        }
        t2 = t0;
    }
    t0 = 0x3;
    if (t2 != 0) {
        if ((*(int *)((t2 + 0x10))) == t1) {
            FUN_0c10ab3c((((signed char)(((a4 << 2) + a4) << 2) + 0xC347648) + 0x8), (((signed char)(((a4 << 2) + a4) << 2) + 0xC347648) + 0xC), t2);
            FUN_0c10aad4(((signed char)(((a4 << 2) + a4) << 2) + 0xC347648), (((signed char)(((a4 << 2) + a4) << 2) + 0xC347648) + 0x4), t2);
            *(unsigned int *)((a6 + 0x1C)) = (*(int *)((t2 + 0xC)));
            *(unsigned int *)((t2 + 0x14)) = a6;
            *(unsigned short *)((t2 + 0x0)) = 0x1;
            if ((short)a4 == 0) {
                t3 = ((*(short *)((t2 + 0x0))) | 0x20);
            } else {
                t3 = ((*(short *)((t2 + 0x0))) | 0x40);
            }
            *(unsigned short *)((t2 + 0x0)) = t3;
            *(unsigned short *)((t2 + 0x0)) = ((*(short *)((t2 + 0x0))) | 0x4);
            *(unsigned int *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC347648) + 0x10)) = ((*(int *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC347648) + 0x10))) - (*(int *)((t2 + 0x10))));
            t3 = 0x0;
        } else {
            t4 = FUN_0c10aa20();
            t3 = 0x3;
            if (t4 == 0) {
            } else {
                *(unsigned int *)((t4 + 0xC)) = (*(int *)((t2 + 0xC)));
                *(unsigned int *)((t4 + 0x10)) = t1;
                *(unsigned int *)((t2 + 0x10)) = ((*(int *)((t2 + 0x10))) - t1);
                *(unsigned int *)((t2 + 0xC)) = ((*(int *)((t2 + 0xC))) + t1);
                FUN_0c10aad4(((signed char)(((a4 << 2) + a4) << 2) + 0xC347648), (((signed char)(((a4 << 2) + a4) << 2) + 0xC347648) + 0x4), t4);
                *(unsigned int *)((a6 + 0x1C)) = (*(int *)((t4 + 0xC)));
                *(unsigned int *)((t4 + 0x14)) = a6;
                if ((short)a4 == 0) {
                    t1 = ((*(short *)((t4 + 0x0))) | 0x20);
                } else {
                    t1 = ((*(short *)((t4 + 0x0))) | 0x40);
                }
                *(unsigned short *)((t4 + 0x0)) = t1;
                *(unsigned short *)((t4 + 0x0)) = ((*(short *)((t4 + 0x0))) | 0x4);
                *(unsigned int *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC347648) + 0x10)) = ((*(int *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC347648) + 0x10))) - (*(int *)((t4 + 0x10))));
                t3 = 0x0;
            }
        }
        t0 = t3;
    }
    return t0;
}

float FUN_0c0e4358(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[15];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register int t7;
    register float u15;
    register float u16;
    register float u17;
    register int t11;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    register float u24;
    register float u25;
    register float u26;
    register float u27;
    register float u28;
    register float u29;
    register float u36;
    register float u37;
    register float u40;
    register float u41;
    register float u42;
    register float u43;
    register int t46;
    register float u23;

    *(unsigned int *)(((int)stk + 56)) = a4;
    *(unsigned int *)(((int)stk + 52)) = a5;
    *(unsigned int *)(((int)stk + 48)) = a6;
    (((struct o2C_float *)(((int)stk + 0)))->v) = f4;
    (((struct o28_float *)(((int)stk + 0)))->v) = f5;
    (((struct o24_float *)(((int)stk + 0)))->v) = f6;
    (((struct o20_float *)(((int)stk + 0)))->v) = f7;
    u0 = *(float *)(((int)stk + 32));
    u1 = *(float *)(((int)stk + 44));
    u2 = *(float *)(((int)stk + 36));
    u3 = *(float *)(((int)stk + 40));
    u4 = *(float *)(((int)stk + 44));
    u5 = *(float *)(((int)stk + 40));
    { struct mv8 { int w[8]; }; *(struct mv8 *)(((int)stk + 0)) = *(struct mv8 *)(0xC155AF0); }
    t7 = *(int *)(((*(int *)(((int)stk + 56))) + 0x34));
    t19 = t7;
    u15 = 1.0f;
    u16 = 1.0f;
    u17 = u0;
    if ((t7 & 15) == 0) {
    } else {
        t11 = *(int *)(((*(int *)(((int)stk + 56))) + 0x34));
        t19 = (((t11 >> 1) >> 1) & 0x3);
        u15 = (float)(((t11 >> 1) >> 1) & 0x3);
        u16 = (float)((*(int *)(((*(int *)(((int)stk + 56))) + 0x34))) & 0x3);
        u17 = (float)(((t11 >> 1) >> 1) & 0x3);
    }
    t20 = 0xC155AF0;
    t21 = ((int)stk + 0);
    t22 = 0x0;
    u24 = u2;
    u25 = u17;
    u26 = f6;
    u27 = f7;
    u28 = f8;
    u29 = f9;
    for (;;) {
        if ((int)t22 >= (int)0x4) {
            break;
        }
        u29 = (*(float *)((t21 + 0x0)));
        t21 = (t21 + 0x4);
        u28 = (*(float *)((t21 + 0x0)));
        t21 = (t21 + 0x4);
        u29 = (u29 - u16);
        u28 = (u28 - u15);
        t19 = 0x4;
        u27 = (*(float *)(((*(int *)(((int)stk + 56))) + t19)));
        t20 = (*(int *)(((int)stk + 56)));
        t19 = 0x8;
        u26 = (*(float *)((t20 + t19)));
        u25 = 0.0f;
        if (u29 != u25) {
            u23 = u29;
            u36 = (u1 * u0);
            u37 = u27;
            u37 = u37 + u23 * u36;
            u27 = u37;
            u24 = (u4 * u2);
            u24 = (u24 * u29);
            u24 = (-u24);
            u26 = (u26 + u24);
        }
        u25 = 0.0f;
        if (u28 != u25) {
            u23 = u28;
            u40 = (u3 * u2);
            u41 = u27;
            u41 = u41 + u23 * u40;
            u27 = u41;
            u23 = u28;
            u42 = (u5 * u0);
            u43 = u26;
            u43 = u43 + u23 * u42;
            u26 = u43;
        }
        t20 = (*(int *)(((int)stk + 52)));
        t20 = (t20 + 0x4);
        *(unsigned int *)(((int)stk + 52)) = t20;
        t20 = (t20 - 4);
        *(float *)((t20 + 0x0)) = u27;
        t46 = *(int *)(((int)stk + 48));
        *(unsigned int *)(((int)stk + 48)) = (t46 + 0x4);
        *(float *)((((t46 + 0x4) - 4) + 0x0)) = u26;
        t22 = (t22 + 0x1);
    }
    return u23;
}

int FUN_0c1080f0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if (a4 == 0) {
        return ((int (*)(int, int, int, int))(mwRnaErrCallFunc))(0xC15B31C, a5, a6, a7);
    }
    t0 = 0x0;
    if ((int)a6 < (int)0xFFFFFFD6) {
    } else {
        t1 = 0xF;
        if ((int)a6 >= 0) {
        } else {
            t2 = (int)((int)a6 / (int)0x3);
            t3 = t2;
            t1 = (t2 + 0xF);
        }
        t2 = t3;
        t0 = t1;
    }
    if (((int)a5 >= 0) && ((int)a5 <= (int)0x10)) {
        (((struct o6C_uint *)(a4))->v) = a5;
        (((struct o70_uint *)(a4))->v) = a6;
        t1 = FUN_0c114f90(((((struct o40_int *)(a4))->v)), a5, t0);
        if (t1 != 0) {
            return ((int (*)(int))(mwRnaErrCallFunc))(0xC15B49C);
        }
        return t1;
    }
    return t2;
}
