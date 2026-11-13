/* Straight-line functions with calls and guards (batch gen_b): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2DC_int { char p[0x2DC]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_short { char p[0x7248]; short v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o728C_float { char p[0x728C]; float v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c0634b4(int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09c782(int);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09da1c(int);
int FUN_0c09ddfe(int);
int FUN_0c09e7b8(int);
int FUN_0c0a2080(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0abe44(int, int);
int FUN_0c067004(int a4, int a5);

int FUN_0c067004(int a4, int a5)
{
    int stk[3];
    register int t5;
    register int t22;
    register int t40;
    register int t45;
    register int t54;
    register int t56;
    register int t68;
    int t1;

    if (((((((struct o2DC_int *)(a4))->v)) & 0x600) == 0) && (t1 = (((struct oF2_short *)(a4))->v), t1 == 0)) {
        (((struct o48_float *)(a4))->v) = ((((struct o728C_float *)(a4))->v));
        t5 = FUN_0c09c782(a4);
        if ((signed char)t5 != 0) {
            FUN_0c0634b4(a4);
            (((struct o7236_uchar *)(a4))->v) = 0x0;
            (((struct o71CC_uint *)(a4))->v) = 0x0;
        } else {
            *(volatile signed char *)((a4 + 0x3));
            FUN_0c0abe44(((((struct o71CC_int *)(a4))->v)), 0x5);
        }
        FUN_0c0a2080(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    } else {
        if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
            (((struct o7248_uint *)(a4))->v) = (unsigned short)(((FUN_0c09ddfe(a4)) + (*(short *)0xC7F31E0)) - (*(int *)((a4 + 0x30))));
            if ((((((struct o7248_int *)(a4))->v)) & 0x8000) != 0) {
                (((struct o7248_uint *)(a4))->v) = (((((struct o7248_int *)(a4))->v)) | 0xFFFF0000);
            }
            t22 = (((struct o7248_int *)(a4))->v);
            if (((int)t22 > (int)0x16C) || ((int)t22 < (int)0xFFFFFE94)) {
                if ((int)((((struct o7248_int *)(a4))->v)) > 0) {
                    (((struct o7248_uint *)(a4))->v) = 0x16C;
                } else {
                    (((struct o7248_uint *)(a4))->v) = 0xFFFFFE94;
                }
                *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + ((((struct o7248_short *)(a4))->v)));
            }
        }
        t40 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (t40 - 1);
        if ((int)(short)(t40 - 1) < 0) {
            (((struct oEE_ushort *)(a4))->v) = 0x4;
        }
        FUN_0c09a910(a4);
        FUN_0c09da1c(a4);
        t45 = FUN_0c09c782(a4);
        if ((signed char)t45 != 0) {
            FUN_0c0634b4(a4);
            (((struct o7236_uchar *)(a4))->v) = 0x0;
            (((struct o71CC_uint *)(a4))->v) = 0x0;
            (((struct o48_float *)(a4))->v) = ((((struct o728C_float *)(a4))->v));
            FUN_0c0a2080(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        }
    }
    if (!(((((struct o3C_float *)(a4))->v)) > 0.0f)) {
        t54 = FUN_0c09e7b8(a4);
        if ((signed char)t54 != 0) {
            FUN_0c09a808(a4, 0x2, 0xF2);
            (((struct o71BC_uchar *)(a4))->v) = 0x0;
            *(unsigned char *)((a4 + 0xB)) = 0x0;
            return 0x0;
        }
        t56 = (((struct oF0_short *)(a4))->v);
        (((struct oF0_ushort *)(a4))->v) = (t56 - 1);
        if ((short)(t56 - 1) == 0) {
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) * 10.0f);
        }
    } else {
        t68 = (((struct oF0_short *)(a4))->v);
        (((struct oF0_ushort *)(a4))->v) = (t68 - 1);
        if ((short)(t68 - 1) == 0) {
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) * 10.0f);
        }
    }
    if (((((struct oF2_short *)(a4))->v)) != 0) {
        (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) - 1);
    }
    FUN_0c09d990(a4);
    return FUN_0c09d9bc(a4);
}
