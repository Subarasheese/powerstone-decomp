/* Straight-line functions with calls and guards (batch gen_gc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o6C_int { char p[0x6C]; int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c04c028(int);
int FUN_0c04cdf2(void);
int FUN_0c04fed8(int, int, float);
int FUN_0c0500ca(int);
int FUN_0c050180(int);
int FUN_0c059330(int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);
int FUN_0c103e50(int, int, int, int);
int FUN_0c105190(int, int, int, int);
int FUN_0c10521a(int, int);
int FUN_0c1058e2(int, int, int, int, int);
int thunk_FUN_0c1155a8(void);
int vmsfs_fclose(int, int, int, int);
int vmsfs_fdelete(int, int);
int vmsfs_fdelete_ex(int, int, int);
int vmsfs_format(int, int, int, int, int);
int vmsfs_fread(int, int, int);
int vmsfs_frename(int, int, int);
int vmsfs_fwrite(int, int, int);
int vmsfs_load_file(int, int, int, int);
int vmsfs_load_file_ex(int, int, int, int, int);
int vmsfs_mount(int, int, int);
int vmsfs_save_exec_file(int, int, int, int, int, int);
int vmsfs_save_file(int, int, int, int, int, int);
int vmsfs_xdefrag(int, int, int, int);
int FUN_0c0507a4(int a4, int a5, float f4);
int FUN_0c10151a(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c058c04(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0507a4(int a4, int a5, float f4)
{
    int stk[5];

    register int R1;
    register int R2;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_6 = a4;
    v0_5 = a5;
    v0_3 = FUN_0c04fed8(v0_6, v0_5, f4);
    v0_4 = (0x4C);
    v0_5 = (v0_3);
    v0_2 = (v0_6);
    v0_0 = (0xC366F40);
    v0_1 = (0xC3673EE);
    if (((int)(unsigned short)((v0_3 - ((((struct o4C_short *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v))) + 0x1000) >= (int)0x2000)) goto L_C0507F6;
    v0_5 = ((*(int *)((((short)((short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (short)0x254) + v0_0) + v0_4))));
    L_C050806:;
    *(unsigned short *)(((int)stk + 8)) = (FUN_0c050180(v0_5));
    *(unsigned short *)(((int)stk + 12)) = (FUN_0c050180((0x8000 + v0_5)));
    v0_3 = *(int *)0xC3673E8;
    *(unsigned int *)0xC3673E8 = (v0_3 + 0x2);
    *(unsigned short *)(((int)stk + 16)) = (*(short *)((((v0_3 + 0x2) - 2) + 0x0)));
    v0_4 = (*(signed char *)((((((struct o6C_int *)(((short)((short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (short)0x254) + v0_0)))->v)) + 0x1))) != 0;
    v0_6 = (0x254);
    v0_5 = ((FUN_0c0500ca(v0_2)));
    v0_3 = (0xC3673EC);
    if (v0_4) goto L_C050872;
    v0_4 = (((struct o6C_int *)(((short)((short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (short)v0_6) + v0_0)))->v);
    v0_6 = (v0_4);
    if (!(((*(signed char *)((v0_4 + 0x0))) != 0))) goto L_C0509E0;
    if (((*(signed char *)((v0_6 + 0x4))) == 5)) goto L_C050866;
    goto L_C0509E0;
    L_C0509E0:;
    *(unsigned short *)((v0_3 + 0x0)) = 0x1;
    FUN_0c04cdf2();
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (short)0x254) + v0_0) + 0xC)) = (*(int *)0xC3673E8);
    v0_4 = (0xC3673E8);
    L_C0509FC:;
    return v0_4;
    L_C050866:;
    if (((*(signed char *)((v0_6 + 0x30D))) == 0)) goto L_C050872;
    goto L_C0509E0;
    L_C050872:;
    v0_6 = *(short *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 0)) = (unsigned short)(*(short *)(((int)stk + 8)));
    *(unsigned int *)(((int)stk + 4)) = (unsigned short)(*(short *)(((int)stk + 12)));
    v0_7 = *(signed char *)((v0_0 + (short)((short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (short)0x254)));
    v0_4 = ((unsigned char)v0_7);
    v0_6 = (v0_6);
    v0_5 = ((short)v0_5);
    v0_8 = (0x0);
    if (((unsigned char)v0_7 == 0)) goto L_C0508D4;
    if ((v0_4 == 1)) goto L_C05092C;
    if ((v0_4 == 2)) goto L_C05094C;
    if ((v0_4 == 3)) goto L_C05096A;
    if ((v0_4 == 4)) goto L_C05096E;
    if ((v0_4 != 5)) goto L_C0508B2;
    goto L_C0509E0;
    L_C0508B2:;
    goto L_C0509FC;
    L_C05096E:;
    *(unsigned short *)((v0_3 + 0x0)) = v0_8;
    if (((int)v0_6 >= (int)(v0_5 - 20))) goto L_C050980;
    v0_4 = (0x2DC);
    v0_6 = ((*(int *)(((int)stk + 0))));
    L_C05098E:;
    *(unsigned int *)((v0_2 + v0_4)) = ((*(int *)((v0_2 + v0_4))) | v0_6);
    goto L_C0509FC;
    L_C050980:;
    if (((int)v0_6 <= (int)(v0_5 + 0x14))) goto L_C050996;
    v0_4 = (0x2DC);
    v0_6 = ((*(int *)(((int)stk + 4))));
    goto L_C05098E;
    L_C050996:;
    v0_3 = (int)v0_6 >= (int)(v0_5 - 10);
    v0_5 = ((v0_5 + 0xA));
    if (v0_3) goto L_C0509AC;
    (((struct o2DC_uint *)(v0_2))->v) = (((((struct o2DC_int *)(v0_2))->v)) | (*(int *)(((int)stk + 0))));
    L_C0509AC:;
    if (((int)v0_6 <= (int)v0_5)) goto L_C0509BA;
    L_C0509B0:;
    (((struct o2DC_uint *)(v0_2))->v) = (((((struct o2DC_int *)(v0_2))->v)) | (*(int *)(((int)stk + 4))));
    L_C0509BA:;
    v0_1 = *(signed char *)((v0_1 + 0x0));
    *(unsigned char *)((((short)((short)(unsigned char)v0_1 * (short)0x254) + v0_0) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)v0_1 * (short)0x254) + v0_0) + 0x0))) + 0x1);
    v0_4 = (((short)((short)(unsigned char)v0_1 * (short)0x254) + v0_0));
    goto L_C0509FC;
    L_C05096A:;
    *(unsigned short *)((v0_3 + 0x0)) = v0_8;
    goto L_C0509BA;
    L_C05094C:;
    *(unsigned short *)((v0_3 + 0x0)) = v0_8;
    if (((int)v0_6 >= (int)(v0_5 - 20))) goto L_C050960;
    (((struct o2DC_uint *)(v0_2))->v) = (((((struct o2DC_int *)(v0_2))->v)) | (*(int *)(((int)stk + 0))));
    L_C050960:;
    if (((int)v0_6 > (int)(v0_5 + 0x14))) goto L_C0509B0;
    goto L_C0509BA;
    L_C05092C:;
    *(unsigned short *)((v0_3 + 0x0)) = v0_8;
    v0_3 = *(signed char *)((v0_1 + 0x0));
    v0_2 = *(short *)((((short)((short)(unsigned char)v0_3 * (short)0x254) + v0_0) + 0x1C));
    *(unsigned short *)((((short)((short)(unsigned char)v0_3 * (short)0x254) + v0_0) + 0x1C)) = (v0_2 - 1);
    v0_4 = ((unsigned short)(v0_2 - 1));
    if (((unsigned short)(v0_2 - 1) != 0)) goto L_C0509FC;
    goto L_C0509BA;
    L_C0508D4:;
    *(unsigned short *)((v0_3 + 0x0)) = v0_8;
    if (((*(signed char *)((v0_2 + 0x71BA))) == 31)) goto L_C0508F2;
    v0_4 = FUN_0c04c028(v0_2);
    FPUL_ = ((unsigned short)v0_4);
    if (!((!((float)(unsigned short)v0_4 > 300.0f)))) goto L_C0508F2;
    *(unsigned short *)((((short)((short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (short)0x254) + v0_0) + 0x1C)) = 0x1;
    v0_2 = *(signed char *)((v0_1 + 0x0));
    *(unsigned char *)((((short)((short)(unsigned char)v0_2 * (short)0x254) + v0_0) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)v0_2 * (short)0x254) + v0_0) + 0x0))) + 0x1);
    goto L_C05092C;
    L_C0508F2:;
    *(unsigned char *)((((short)((short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (short)0x254) + v0_0) + 0x0)) = 0x4;
    goto L_C05096E;
    L_C0507F6:;
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (short)0x254) + v0_0) + v0_4)) = v0_5;
    goto L_C050806;
}

int FUN_0c10151a(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int stk[12];

    register int R1;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    stk[3] = a8;
    v0_0 = a5;
    v0_1 = a6;
    v0_2 = a7;
    v0_3 = (0x0);
    v0_4 = (0xFFFFFF01);
    v0_4 = (v0_3);
    v0_4 = (0x0);
    v0_4 = ((((((v0_3 << 2) << 2) << 2) << 1) + 0xC8057B0));
    v0_5 = (0xC805790);
    v0_5 = (0xC8057B0);
    v0_5 = (0xC101FA6);
    v0_5 = (((v0_3 << 2) + 0xC805790));
    L_C1015AC:;
    v0_5 = *(int *)((v0_4 + 0x8));
    v0_6 = (v0_5);
    if (!(((unsigned int)v0_5 < (unsigned int)0x15))) goto L_C10177A;
    switch (((v0_6 << 1))) { case 0: goto L_C10177A; case 2: goto L_C10160A; case 4: goto L_C10177A; case 6: goto L_C101618; case 8: goto L_C101634; case 10: goto L_C101646; case 12: goto L_C10165A; case 14: goto L_C10166E; case 16: goto L_C101680; case 18: goto L_C1016AC; case 20: goto L_C101696; case 22: goto L_C1016DC; case 24: goto L_C1016F2; case 26: goto L_C101712; case 28: goto L_C101732; case 30: goto L_C1016BC; case 32: goto L_C1016CC; case 34: goto L_C10174C; case 36: goto L_C1015FE; case 38: goto L_C10177A; case 40: goto L_C10175E; }
    goto L_C10175E;
    L_C10177A:;
    thunk_FUN_0c1155a8();
    goto L_C1015AC;
    L_C10175E:;
    *(unsigned int *)((v0_4 + 0x10)) = (*(int *)((v0_4 + 0x14)));
    v0_5 = (*(int *)((v0_4 + 0x24)));
    *(int *)((int)stk + 8) = v0_5;
    v0_6 = ((FUN_0c1058e2((*(int *)((v0_4 + 0x14))), (v0_4 + 0x2C), (*(int *)((v0_4 + 0x1C))), (*(int *)((v0_4 + 0x20))), v0_5)));
    L_C101776:;
    return ((int (*)(int, int, int, int))(0xC101784))(v0_3, v0_0, v0_1, v0_2);
    L_C10174C:;
    *(unsigned int *)((v0_4 + 0x10)) = (*(int *)((v0_4 + 0x14)));
    v0_6 = ((vmsfs_fdelete_ex((*(int *)((v0_4 + 0x14))), (*(int *)((v0_4 + 0x18))), (*(int *)((v0_4 + 0x1C))))));
    goto L_C101776;
    L_C101732:;
    *(unsigned int *)((v0_4 + 0x10)) = (*(int *)((v0_4 + 0x14)));
    v0_5 = (*(int *)((v0_4 + 0x24)));
    *(int *)((int)stk + 8) = v0_5;
    v0_6 = ((vmsfs_load_file_ex((*(int *)((v0_4 + 0x14))), (v0_4 + 0x2C), (*(int *)((v0_4 + 0x1C))), (*(int *)((v0_4 + 0x20))), v0_5)));
    goto L_C101776;
    L_C101712:;
    *(unsigned int *)((v0_4 + 0x10)) = (*(int *)((v0_4 + 0x14)));
    v0_5 = (*(int *)((v0_4 + 0x28)));
    *(int *)((int)stk + 8) = v0_5;
    *(int *)((int)stk + 4) = (v0_4 + 0x6C);
    v0_6 = ((vmsfs_save_exec_file((*(int *)((v0_4 + 0x14))), (v0_4 + 0x2C), (*(int *)((v0_4 + 0x1C))), (*(int *)((v0_4 + 0x20))), (v0_4 + 0x6C), v0_5)));
    goto L_C101776;
    L_C1016F2:;
    *(unsigned int *)((v0_4 + 0x10)) = (*(int *)((v0_4 + 0x14)));
    v0_5 = (*(int *)((v0_4 + 0x28)));
    *(int *)((int)stk + 8) = v0_5;
    *(int *)((int)stk + 4) = (v0_4 + 0x6C);
    v0_6 = ((vmsfs_save_file((*(int *)((v0_4 + 0x14))), (v0_4 + 0x2C), (*(int *)((v0_4 + 0x1C))), (*(int *)((v0_4 + 0x20))), (v0_4 + 0x6C), v0_5)));
    goto L_C101776;
    L_C1016DC:;
    *(unsigned int *)((v0_4 + 0x10)) = (*(int *)((v0_4 + 0x14)));
    v0_6 = ((vmsfs_load_file((*(int *)((v0_4 + 0x14))), (v0_4 + 0x2C), (*(int *)((v0_4 + 0x1C))), (*(int *)((v0_4 + 0x20))))));
    goto L_C101776;
    L_C1016CC:;
    *(unsigned int *)((v0_4 + 0x10)) = (*(int *)((v0_4 + 0x14)));
    v0_6 = ((FUN_0c10521a((*(int *)((v0_4 + 0x14))), (*(int *)((v0_4 + 0x18))))));
    goto L_C101776;
    L_C1016BC:;
    *(unsigned int *)((v0_4 + 0x10)) = (*(int *)((v0_4 + 0x14)));
    v0_6 = ((FUN_0c105190((*(int *)((v0_4 + 0x14))), (*(int *)((v0_4 + 0x18))), v0_1, v0_2)));
    goto L_C101776;
    L_C1016AC:;
    *(unsigned int *)((v0_4 + 0x10)) = (*(int *)((v0_4 + 0x14)));
    v0_6 = ((vmsfs_xdefrag((*(int *)((v0_4 + 0x14))), (*(int *)((v0_4 + 0x18))), v0_1, v0_2)));
    goto L_C101776;
    L_C101696:;
    *(unsigned int *)((v0_4 + 0x10)) = (*(int *)((v0_4 + 0x14)));
    v0_6 = ((FUN_0c103e50((*(int *)((v0_4 + 0x14))), (v0_4 + 0x2C), (*(int *)((v0_4 + 0x1C))), (*(int *)((v0_4 + 0x20))))));
    goto L_C101776;
    L_C101680:;
    *(unsigned int *)((v0_4 + 0x10)) = (*(int *)((v0_4 + 0x14)));
    v0_6 = ((vmsfs_frename((*(int *)((v0_4 + 0x14))), (v0_4 + 0x2C), (v0_4 + 0x3C))));
    goto L_C101776;
    L_C10166E:;
    *(unsigned int *)((v0_4 + 0x10)) = (*(int *)((v0_4 + 0x14)));
    v0_6 = ((vmsfs_fdelete((*(int *)((v0_4 + 0x14))), (v0_4 + 0x2C))));
    goto L_C101776;
    L_C10165A:;
    *(unsigned int *)((v0_4 + 0x10)) = (*(int *)(((*(int *)((v0_4 + 0x14))) + 0x28)));
    v0_6 = ((vmsfs_fwrite((*(int *)((v0_4 + 0x14))), (*(int *)((v0_4 + 0x18))), (*(int *)((v0_4 + 0x1C))))));
    goto L_C101776;
    L_C101646:;
    *(unsigned int *)((v0_4 + 0x10)) = (*(int *)(((*(int *)((v0_4 + 0x14))) + 0x28)));
    v0_6 = ((vmsfs_fread((*(int *)((v0_4 + 0x14))), (*(int *)((v0_4 + 0x18))), (*(int *)((v0_4 + 0x1C))))));
    goto L_C101776;
    L_C101634:;
    *(unsigned int *)((v0_4 + 0x10)) = (*(int *)(((*(int *)((v0_4 + 0x14))) + 0x28)));
    v0_6 = ((vmsfs_fclose((*(int *)((v0_4 + 0x14))), (*(int *)((v0_4 + 0x18))), v0_1, v0_2)));
    goto L_C101776;
    L_C101618:;
    *(unsigned int *)((v0_4 + 0x10)) = (*(int *)((v0_4 + 0x14)));
    v0_5 = (*(int *)((v0_4 + 0x24)));
    *(int *)((int)stk + 8) = v0_5;
    v0_6 = ((vmsfs_format((*(int *)((v0_4 + 0x14))), (v0_4 + 0x4C), (*(int *)((v0_4 + 0x1C))), (v0_4 + 0x6C), v0_5)));
    goto L_C101776;
    L_C10160A:;
    *(unsigned int *)((v0_4 + 0x10)) = (*(int *)((v0_4 + 0x14)));
    v0_6 = ((vmsfs_mount((*(int *)((v0_4 + 0x14))), v0_0, v0_1)));
    goto L_C101776;
    L_C1015FE:;
    *(unsigned int *)((v0_4 + 0x10)) = (*(int *)((v0_4 + 0x14)));
    v0_6 = ((((int (*)(int, int, int, int))(v0_5))((*(int *)((v0_4 + 0x14))), v0_0, v0_1, v0_2)));
    goto L_C101776;
}

int FUN_0c058c04(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            t0 = *(signed char *)((a4 + 0x9));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        if (t0 != 3) {
                            t1 = t0;
                            if (t0 != 4) {
                            } else {
                                u0 = (((struct o8_float *)0xC058ECC)->v);
                                if ((*(int *)0xC3673F8) == 1) {
                                    (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = u0;
                                    (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = u0;
                                } else {
                                    (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = u0;
                                    (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o10_float *)0xC058ECC)->v));
                                }
                                t1 = 0x20;
                            }
                            t0 = t1;
                        } else {
                            t1 = (((struct o2E4_int *)(a4))->v);
                            (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) - 0.0199999996f);
                            t1 = 0x24;
                            if (0.0f > ((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v))) {
                                *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
                                t2 = *(signed char *)((a4 + 0x9));
                                *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                                t1 = (t2 + 0x1);
                            }
                            t0 = t1;
                        }
                        t1 = t0;
                    } else {
                        t0 = (((struct o2E4_int *)(a4))->v);
                        (((struct oC_float *)(t0))->v) = (((((struct oC_float *)(t0))->v)) - 0.199999988f);
                        t0 = 0xC;
                        if (!(((((struct oC_float *)(((((struct o2E4_int *)(a4))->v))))->v)) > ((((struct o0_float *)0xC058ECC)->v)))) {
                            t2 = *(signed char *)((a4 + 0x9));
                            *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                            t0 = (t2 + 0x1);
                        }
                        t1 = t0;
                    }
                    t0 = t1;
                } else {
                    t1 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                    t2 = 0xEC;
                    if ((short)(t1 - 1) == 0) {
                        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                        (((struct oC_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
                        (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
                        t1 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                        t2 = (t1 + 0x1);
                    }
                    t0 = t2;
                }
                t1 = t0;
            } else {
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                t2 = 0xEC;
                if ((short)(t0 - 1) == 0) {
                    (((struct oEC_ushort *)(a4))->v) = 0x1;
                    t0 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
                    t2 = (t0 + 0x1);
                }
                t1 = t2;
            }
            return t1;
        }
        return FUN_0c059330(a4, a5, a6, a7);
    }
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0x1F;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC4CFA80, (*(signed char *)((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x4))) * (unsigned short)0x1C) + 0xC14BFC8) + 0x18))));
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
    *(volatile int *)((a4 + 0x2E0));
    *(volatile signed char *)((a4 + 0x4));
    FUN_0c0e6fe8();
    *(volatile int *)((a4 + 0x2E0));
    *(volatile signed char *)((a4 + 0x4));
    FUN_0c0e6fe8();
    *(unsigned short *)(((0x2 + ((((struct o2E0_int *)(a4))->v))) + 0x0)) = 0x31F;
    (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
    (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
    (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
    FUN_0c06233a(((((struct o2E4_int *)(a4))->v)), 0xC4CFA80, ((*(signed char *)((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x4))) * (unsigned short)0x1C) + 0xC14BFC8) + 0x19))) + 0x1));
    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
    *(volatile int *)((a4 + 0x2E4));
    *(volatile signed char *)((a4 + 0x4));
    FUN_0c0e6fe8();
    *(volatile int *)((a4 + 0x2E4));
    *(volatile signed char *)((a4 + 0x4));
    FUN_0c0e6fe8();
    *(unsigned short *)(((0x2 + ((((struct o2E4_int *)(a4))->v))) + 0x0)) = 0x31F;
    (((struct o44_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.799999952f;
    (((struct o48_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.799999952f;
    (((struct o4C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.799999952f;
    (((struct oEC_ushort *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t1 = t0;
                    if (t0 != 4) {
                    } else {
                        u0 = (((struct o8_float *)0xC058ECC)->v);
                        if ((*(int *)0xC3673F8) == 1) {
                            (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = u0;
                            (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = u0;
                        } else {
                            (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = u0;
                            (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o10_float *)0xC058ECC)->v));
                        }
                        t1 = 0x20;
                    }
                    t0 = t1;
                } else {
                    t1 = (((struct o2E4_int *)(a4))->v);
                    (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) - 0.0199999996f);
                    t1 = 0x24;
                    if (0.0f > ((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v))) {
                        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
                        t2 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                        t1 = (t2 + 0x1);
                    }
                    t0 = t1;
                }
                t1 = t0;
            } else {
                t0 = (((struct o2E4_int *)(a4))->v);
                (((struct oC_float *)(t0))->v) = (((((struct oC_float *)(t0))->v)) - 0.199999988f);
                t0 = 0xC;
                if (!(((((struct oC_float *)(((((struct o2E4_int *)(a4))->v))))->v)) > ((((struct o0_float *)0xC058ECC)->v)))) {
                    t2 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                    t0 = (t2 + 0x1);
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            t2 = 0xEC;
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct oC_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
                (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
                t1 = *(signed char *)((a4 + 0x9));
                *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        t2 = 0xEC;
        if ((short)(t0 - 1) == 0) {
            (((struct oEC_ushort *)(a4))->v) = 0x1;
            t0 = *(signed char *)((a4 + 0x9));
            *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        t1 = t2;
    }
    return t1;
}
