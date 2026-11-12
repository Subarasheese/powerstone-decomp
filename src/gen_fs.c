/* Straight-line functions with calls and guards (batch gen_fs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o74_float { char p[0x74]; float v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_int { char p[0x90]; int v; };
struct o94_int { char p[0x94]; int v; };
struct o98_int { char p[0x98]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
int FUN_0c059330(int);
int FUN_0c079f68(int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09c894(int);
int FUN_0c09cfd6(int, int, float);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09e7b8(int);
int FUN_0c0a2e26(int, int, int);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int kmiBGPlaneCountWords(int);
int kmiBGPlanePutColor(int, int, int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int thunk_FUN_0c062242(int);
int FUN_0c03f004(int a4);
int kmiProcessVertex_06(int a4);
int FUN_0c06a3a6(int a4);
int FUN_0c077f8c(int a4);
int FUN_0c0f8920(int a4, int a5);

int FUN_0c03f004(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t2 = *(int *)((a4 + 0x1C));
    if ((*(signed char *)((t2 + 0x71BA))) != 11) {
        *(unsigned char *)((a4 + 0x8)) = 0x1;
    }
    t3 = *(signed char *)((a4 + 0x3));
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0xB0));
    u0 = FUN_0c0dfa50((*(int *)((t2 + 0x30))));
    t3 = *(signed char *)(((0xEE + a4) + 0x0));
    u1 = (((struct o8_float *)(((signed char)(((t3 << 1) + t3) << 2) + 0xC149958)))->v);
    u2 = (((struct o20_float *)(a4))->v);
    t3 = *(signed char *)(((0xEE + a4) + 0x0));
    u3 = ((FUN_0c0df4d0((*(int *)((t2 + 0x30))))) * (*(float *)((((signed char)(((t3 << 1) + t3) << 2) + 0xC149958) + 0x0))));
    u3 = u3 + u1 * u0;
    (((struct o20_float *)(a4))->v) = (u2 + u3);
    u0 = FUN_0c0df4d0((*(int *)((t2 + 0x30))));
    t3 = *(signed char *)(((0xEE + a4) + 0x0));
    u1 = (((struct o8_float *)(((signed char)(((t3 << 1) + t3) << 2) + 0xC149958)))->v);
    t3 = *(signed char *)(((0xEE + a4) + 0x0));
    u2 = (((struct o28_float *)(a4))->v);
    u3 = ((FUN_0c0dfa50((*(int *)((t2 + 0x30))))) * (*(float *)((((signed char)(((t3 << 1) + t3) << 2) + 0xC149958) + 0x0))));
    (((struct o28_float *)(a4))->v) = (u2 + (((u0 * u1)) - u3));
    t2 = *(signed char *)(((0xEE + a4) + 0x0));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o4_float *)((0xC149958 + (signed char)(((t2 << 1) + t2) << 2))))->v)));
    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 == 1) {
            return FUN_0c059330(a4);
        }
        return t2;
    }
    t2 = (((struct o2E0_int *)(a4))->v);
    if (((int)(*(signed char *)((a4 + 0x9))) <= (int)0x2) && (t0 = *(int *)((a4 + 0x1C)), t1 = (((struct oEE_short *)(t0))->v), t1 != 0)) {
        *(unsigned char *)((a4 + 0x9)) = 0x3;
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = t0;
                if (t0 != 3) {
                } else {
                    (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) - (*(float *)(((0xC1499D0 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0))));
                    (((struct o24_float *)(t2))->v) = (((((struct o24_float *)(t2))->v)) - (*(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC1499D0) + 0x0))));
                    u0 = (((struct o1C_float *)(t2))->v);
                    u1 = *(float *)(((0xC1499D0 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0));
                    (((struct o1C_float *)(t2))->v) = (u0 - u1);
                    t3 = 0x1C;
                    if (!((u0 - u1) > 0.0f)) {
                        t4 = *(signed char *)((a4 + 0x8));
                        *(unsigned char *)((a4 + 0x8)) = (t4 + 0x1);
                        *(unsigned char *)((t2 + 0x0)) = 0x0;
                        t3 = (t4 + 0x1);
                    }
                    t1 = t3;
                }
                t3 = t1;
            } else {
                (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) - (*(float *)(((0xC1499D0 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0))));
                (((struct o24_float *)(t2))->v) = (((((struct o24_float *)(t2))->v)) - (*(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC1499D0) + 0x0))));
                u0 = (((struct o1C_float *)(t2))->v);
                u1 = *(float *)(((0xC1499D0 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0));
                (((struct o1C_float *)(t2))->v) = (u0 - u1);
                t1 = 0xC1499B8;
                if (!((u0 - u1) > (*(float *)(((((((struct oEE_short *)(a4))->v)) << 2) + 0xC1499B8))))) {
                    t4 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t4 - 1);
                    t1 = (t4 - 1);
                }
                t3 = t1;
            }
            t1 = t3;
        } else {
            (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) + (*(float *)(((0xC1499D0 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0))));
            (((struct o24_float *)(t2))->v) = (((((struct o24_float *)(t2))->v)) + (*(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC1499D0) + 0x0))));
            u0 = (((struct o1C_float *)(t2))->v);
            u1 = *(float *)(((0xC1499D0 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0));
            (((struct o1C_float *)(t2))->v) = (u0 + u1);
            t3 = 0xC1499A0;
            if (!((*(float *)(((((((struct oEE_short *)(a4))->v)) << 2) + 0xC1499A0))) > (u0 + u1))) {
                t4 = *(signed char *)((a4 + 0x9));
                *(unsigned char *)((a4 + 0x9)) = (t4 + 0x1);
                t3 = (t4 + 0x1);
            }
            t1 = t3;
        }
        t3 = t1;
    } else {
        t1 = *(signed char *)(((t2 + 0x28) + 0x0));
        (((struct o28_uchar *)(t2))->v) = (t1 - 1);
        t4 = t0;
        if ((int)(unsigned char)(t1 - 1) > 0) {
        } else {
            t0 = *(signed char *)((a4 + 0x9));
            *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
            *(unsigned char *)((t2 + 0x0)) = 0x1;
            t4 = (t0 + 0x1);
        }
        t3 = t4;
    }
    return t3;
}

int kmiProcessVertex_06(int a4)
{
    int stk[3];
    register int t3;
    register int t4;
    register int t5;
    register int t14;
    register int t15;
    register int t20;
    register int t25;
    register int t34;
    register int t35;
    register int t40;
    register int t45;
    register int t54;
    register int t55;
    register int t60;
    register int t66;

    *(unsigned int *)((((int)stk + 0) + 0x0)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x0)) = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC81715C)->v);
    t4 = (((struct o8_int *)0xC81715C)->v);
    t5 = (((struct oC_int *)0xC81715C)->v);
    (((struct o0_uint *)0xC817064)->v) = t3;
    (((struct o4_uint *)0xC817064)->v) = t4;
    (((struct o8_uint *)0xC817064)->v) = t5;
    (((struct oC_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x4)));
    (((struct o10_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x8)));
    (((struct o14_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0xC)));
    t14 = kmiBGPlanePutColor(t3, 0x6, (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x10))));
    t15 = *(int *)((((int)stk + 0) + 0x0));
    *(unsigned int *)(((t14 << 2) + 0xC817064)) = ((((((int)(((((struct o20_float *)(t15))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o24_float *)(t15))->v)) * 255.0f) << 16)) | ((int)(((((struct o28_float *)(t15))->v)) * 255.0f) << 8)) | (int)(((((struct o2C_float *)(t15))->v)) * 255.0f));
    t20 = *(int *)((((int)stk + 0) + 0x0));
    t25 = kmiBGPlanePutWord(t3, (t14 + 0x1), ((((((int)(((((struct o30_float *)(t20))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o34_float *)(t20))->v)) * 255.0f) << 16)) | ((int)(((((struct o38_float *)(t20))->v)) * 255.0f) << 8)) | (int)(((((struct o3C_float *)(t20))->v)) * 255.0f)));
    *(unsigned int *)(((t25 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    *(unsigned int *)((((t25 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t25 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    t34 = kmiBGPlanePutColor(t3, (((t25 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x10))));
    t35 = *(int *)(((((int)stk + 0) + 0x4) + 0x0));
    *(unsigned int *)(((t34 << 2) + 0xC817064)) = ((((((int)(((((struct o20_float *)(t35))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o24_float *)(t35))->v)) * 255.0f) << 16)) | ((int)(((((struct o28_float *)(t35))->v)) * 255.0f) << 8)) | (int)(((((struct o2C_float *)(t35))->v)) * 255.0f));
    t40 = *(int *)(((((int)stk + 0) + 0x4) + 0x0));
    t45 = kmiBGPlanePutWord(t3, (t34 + 0x1), ((((((int)(((((struct o30_float *)(t40))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o34_float *)(t40))->v)) * 255.0f) << 16)) | ((int)(((((struct o38_float *)(t40))->v)) * 255.0f) << 8)) | (int)(((((struct o3C_float *)(t40))->v)) * 255.0f)));
    *(unsigned int *)(((t45 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x4)));
    *(unsigned int *)((((t45 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t45 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0xC)));
    t54 = kmiBGPlanePutColor(t3, (((t45 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x10))));
    t55 = *(int *)(((((int)stk + 0) + 0x8) + 0x0));
    *(unsigned int *)(((t54 << 2) + 0xC817064)) = ((((((int)(((((struct o20_float *)(t55))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o24_float *)(t55))->v)) * 255.0f) << 16)) | ((int)(((((struct o28_float *)(t55))->v)) * 255.0f) << 8)) | (int)(((((struct o2C_float *)(t55))->v)) * 255.0f));
    t60 = *(int *)(((((int)stk + 0) + 0x8) + 0x0));
    (((struct o0_uint *)0xC81715C)->v) = ((kmiBGPlanePutWord(t3, (t54 + 0x1), ((((((int)(((((struct o30_float *)(t60))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o34_float *)(t60))->v)) * 255.0f) << 16)) | ((int)(((((struct o38_float *)(t60))->v)) * 255.0f) << 8)) | (int)(((((struct o3C_float *)(t60))->v)) * 255.0f)))) << 2);
    t66 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t66, 0x0, 0x0);
    (((struct o14_uint *)0xC81715C)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0xC)));
    return 0x0;
}

int FUN_0c06a3a6(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = FUN_0c09a910(a4);
                if ((signed char)t1 == 0) {
                    t1 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                    t2 = 0xEC;
                    if ((short)(t1 - 1) == 0) {
                        t1 = *(signed char *)((a4 + 0xA));
                        *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
                        t2 = (t1 + 0x1);
                    }
                    t1 = t2;
                } else {
                    t2 = *(signed char *)((a4 + 0xA));
                    *(unsigned char *)((a4 + 0xA)) = (t2 + 0x1);
                    t1 = (t2 + 0x1);
                }
                return t1;
            }
            if (t0 == 3) {
                FUN_0c09a910(a4);
                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                    t1 = FUN_0c09e7b8(a4);
                    if ((signed char)t1 != 0) {
                        return FUN_0c0a2e26(a4, 0x6, 0x0);
                    }
                }
                FUN_0c09d990(a4);
                return FUN_0c09d9bc(a4);
            }
            return t0;
        }
        FUN_0c09a910(a4);
        t0 = FUN_0c09c894(a4);
        if ((signed char)t0 == 0) {
            t1 = FUN_0c09cfd6(a4, (0x7254 + a4), 0.0f);
            if ((signed char)t1 != 0) {
                FUN_0c09a808(a4, 0x2, 0xCD);
                (((struct oEC_ushort *)(a4))->v) = 0x3;
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                (((struct o38_float *)(a4))->v) = (-((FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 6.0f));
                (((struct o40_float *)(a4))->v) = (-((FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 6.0f));
                (((struct o3C_float *)(a4))->v) = 15.0f;
                (((struct o48_float *)(a4))->v) = -1.2249999f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                t1 = *(signed char *)((a4 + 0xA));
                *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
                return (t1 + 0x1);
            }
            if ((signed char)t0 == 2) {
                FUN_0c09a808(a4, 0x0, 0x8);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                (((struct o38_float *)(a4))->v) = (-((FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC06A664)->v))));
                (((struct o40_float *)(a4))->v) = (-((FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC06A664)->v))));
                (((struct o3C_float *)(a4))->v) = ((((struct o4_float *)0xC06A664)->v));
                (((struct o48_float *)(a4))->v) = ((((struct o8_float *)0xC06A664)->v));
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                *(unsigned char *)((a4 + 0xA)) = 0x3;
                return 0x3;
            }
            t1 = FUN_0c09e7b8(a4);
            if ((signed char)t1 == 0) {
                FUN_0c09d990(a4);
                return FUN_0c09d9bc(a4);
            }
            return FUN_0c0a2e26(a4, 0x6, 0x0);
        }
        if ((signed char)t0 == 2) {
            FUN_0c09a808(a4, 0x0, 0x8);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            (((struct o38_float *)(a4))->v) = (-((FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC06A664)->v))));
            (((struct o40_float *)(a4))->v) = (-((FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC06A664)->v))));
            (((struct o3C_float *)(a4))->v) = ((((struct o4_float *)0xC06A664)->v));
            (((struct o48_float *)(a4))->v) = ((((struct o8_float *)0xC06A664)->v));
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o44_float *)(a4))->v) = 0.0f;
            *(unsigned char *)((a4 + 0xA)) = 0x3;
            return 0x3;
        }
        t0 = FUN_0c09e7b8(a4);
        if ((signed char)t0 == 0) {
            FUN_0c09d990(a4);
            return FUN_0c09d9bc(a4);
        }
        return FUN_0c0a2e26(a4, 0x6, 0x0);
    }
    FUN_0c09a910(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) != 0) {
    } else {
        (((struct o3C_float *)(a4))->v) = -17.5f;
        (((struct o48_float *)(a4))->v) = 0.0f;
        if ((*(signed char *)((a4 + 0x721F))) == 3) {
            u0 = ((((struct o38_float *)(a4))->v));
            u0 = u0 + 17.5f * (FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
            (((struct o38_float *)(a4))->v) = u0;
            u0 = ((((struct o40_float *)(a4))->v));
            u0 = u0 + 17.5f * (FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
            (((struct o40_float *)(a4))->v) = u0;
        } else {
            (((struct o38_float *)(a4))->v) = ((FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 17.5f);
            (((struct o40_float *)(a4))->v) = ((FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 17.5f);
        }
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c077f8c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = FUN_0c079f68(a4);
                if (t1 == 0) {
                    t1 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                    t2 = 0xEC;
                    if ((short)(t1 - 1) == 0) {
                        t1 = *(signed char *)((a4 + 0xA));
                        *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
                        t2 = (t1 + 0x1);
                    }
                    t1 = t2;
                } else {
                    t2 = *(signed char *)((a4 + 0xA));
                    *(unsigned char *)((a4 + 0xA)) = (t2 + 0x1);
                    t1 = (t2 + 0x1);
                }
                return t1;
            }
            if (t0 == 3) {
                FUN_0c079f68(a4);
                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                    t1 = FUN_0c09e7b8(a4);
                    if ((signed char)t1 != 0) {
                        return FUN_0c0a2e26(a4, 0x6, 0x0);
                    }
                }
                FUN_0c09d990(a4);
                return FUN_0c09d9bc(a4);
            }
            return t0;
        }
        FUN_0c079f68(a4);
        t0 = FUN_0c09c894(a4);
        if ((signed char)t0 == 0) {
            t1 = FUN_0c09cfd6(a4, (0x7254 + a4), 0.0f);
            if ((signed char)t1 != 0) {
                FUN_0c09a808(a4, 0x2, 0xFFFFFFCD);
                (((struct oEC_ushort *)(a4))->v) = 0x3;
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                (((struct o38_float *)(a4))->v) = (-((FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 6.0f));
                (((struct o40_float *)(a4))->v) = (-((FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 6.0f));
                (((struct o3C_float *)(a4))->v) = 15.0f;
                (((struct o48_float *)(a4))->v) = -1.2249999f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                t1 = *(signed char *)((a4 + 0xA));
                *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
                return (t1 + 0x1);
            }
            if ((signed char)t0 == 2) {
                FUN_0c09a808(a4, 0x0, 0x8);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                (((struct o38_float *)(a4))->v) = (-((FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.5f));
                (((struct o40_float *)(a4))->v) = (-((FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.5f));
                (((struct o3C_float *)(a4))->v) = 14.0f;
                (((struct o48_float *)(a4))->v) = -2.5f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                *(unsigned char *)((a4 + 0xA)) = 0x3;
                return 0x3;
            }
            t1 = FUN_0c09e7b8(a4);
            if ((signed char)t1 == 0) {
                FUN_0c09d990(a4);
                return FUN_0c09d9bc(a4);
            }
            return FUN_0c0a2e26(a4, 0x6, 0x0);
        }
        if ((signed char)t0 == 2) {
            FUN_0c09a808(a4, 0x0, 0x8);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            (((struct o38_float *)(a4))->v) = (-((FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.5f));
            (((struct o40_float *)(a4))->v) = (-((FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.5f));
            (((struct o3C_float *)(a4))->v) = 14.0f;
            (((struct o48_float *)(a4))->v) = -2.5f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o44_float *)(a4))->v) = 0.0f;
            *(unsigned char *)((a4 + 0xA)) = 0x3;
            return 0x3;
        }
        t0 = FUN_0c09e7b8(a4);
        if ((signed char)t0 == 0) {
            FUN_0c09d990(a4);
            return FUN_0c09d9bc(a4);
        }
        return FUN_0c0a2e26(a4, 0x6, 0x0);
    }
    FUN_0c079f68(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) != 0) {
    } else {
        (((struct o3C_float *)(a4))->v) = -20.0f;
        (((struct o48_float *)(a4))->v) = 0.0f;
        if ((*(signed char *)((a4 + 0x721F))) == 3) {
            u0 = ((((struct o38_float *)(a4))->v));
            u0 = u0 + 20.0f * (FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
            (((struct o38_float *)(a4))->v) = u0;
            u0 = ((((struct o40_float *)(a4))->v));
            u0 = u0 + 20.0f * (FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
            (((struct o40_float *)(a4))->v) = u0;
        } else {
            (((struct o38_float *)(a4))->v) = ((FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 20.0f);
            (((struct o40_float *)(a4))->v) = ((FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 20.0f);
        }
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0f8920(int a4, int a5)
{
    int t19;
    register int t25;
    register int t29;

    (((struct o0_uint *)0xC803D00)->v) = ((((struct o90_int *)(a4))->v));
    (((struct o10_uint *)0xC803D00)->v) = ((((struct o94_int *)(a4))->v));
    (((struct o14_uint *)0xC803D00)->v) = ((((struct o98_int *)(a4))->v));
    if ((((unsigned int)((unsigned int)((((struct o0_int *)0xC803D00)->v)) >> 16) >> 8) & 7) == 0) {
        (((struct o14_uint *)0xC803D00)->v) = ((((((struct o14_int *)0xC803D00)->v)) & 0x3FFFFFF) | 0x20000000);
    }
    (((struct o18_uint *)0xC803D00)->v) = ((((struct o9C_int *)(a4))->v));
    (((struct o20_float *)0xC803D00)->v) = ((((struct o70_float *)(a4))->v));
    (((struct o24_float *)0xC803D00)->v) = ((((struct o74_float *)(a4))->v));
    (((struct o28_float *)0xC803D00)->v) = ((((struct o78_float *)(a4))->v));
    (((struct o2C_float *)0xC803D00)->v) = ((((struct o7C_float *)(a4))->v));
    (((struct o30_float *)0xC803D00)->v) = ((((struct o80_float *)(a4))->v));
    (((struct o34_float *)0xC803D00)->v) = ((((struct o84_float *)(a4))->v));
    (((struct o38_float *)0xC803D00)->v) = ((((struct o88_float *)(a4))->v));
    (((struct o3C_float *)0xC803D00)->v) = ((((struct o8C_float *)(a4))->v));
    (((struct o0_uint *)0xC803D40)->v) = ((((struct oA0_int *)(a4))->v));
    t19 = (((struct o0_int *)0xC803D00)->v);
    (((struct o30_uint *)0xC803D40)->v) = (*(int *)((((((((((unsigned int)((unsigned int)(0x20000000 & t19) >> 16) >> 8) | ((unsigned int)((unsigned int)((unsigned int)(0x1000000 & t19) >> 16) >> 2) >> 2)) | ((unsigned int)((unsigned int)(0x40 & t19) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x20 & t19) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x10 & t19) >> 2) >> 1)) | ((unsigned int)(0x4 & t19) >> 2)) << 2) + 0xC3470D0)));
    (((struct o0_uint *)0xC347090)->v) = ((((struct o0_int *)0xC803D00)->v));
    t25 = (((struct o0_int *)0xC803D00)->v);
    *(unsigned int *)0xC803E54 = ((unsigned int)((unsigned int)(t25 & 0x7000000) >> 16) >> 8);
    if ((((unsigned int)((unsigned int)(t25 & 0x7000000) >> 16) >> 8) & 1) != 0) {
        return ((int (*)(int, int, int, int))(0xC0F8BD4))(0xC347094, 0xC347090, 0xC803D00, 0xC803E54);
    }
    (((struct o4_uint *)0xC347090)->v) = ((((struct o10_int *)0xC803D00)->v));
    (((struct o8_uint *)0xC347090)->v) = ((((struct o14_int *)0xC803D00)->v));
    (((struct oC_uint *)0xC347090)->v) = ((((struct o18_int *)0xC803D00)->v));
    t29 = (((struct o30_int *)0xC803D40)->v);
    if (t29 != 0) {
        if (t29 != 1) {
            if (t29 != 2) {
                if (t29 != 3) {
                    if (t29 != 4) {
                        if (t29 == 16) {
                            (((struct o10_uint *)0xC347090)->v) = ((((((int)(((((struct o20_float *)0xC803D00)->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o24_float *)0xC803D00)->v)) * 255.0f) << 16)) | ((int)(((((struct o28_float *)0xC803D00)->v)) * 255.0f) << 8)) | (int)(((((struct o2C_float *)0xC803D00)->v)) * 255.0f));
                            *(volatile float *)0xC803D30;
                            *(volatile float *)0xC803D34;
                            return ((int (*)(int, int, int, int, float))(0xC0F8BA8))(0xC3470A4, 0xC347090, 0xC803D00, 0xC803E54, 255.0f);
                        }
                        return ((int (*)(int, int, int, int))(0xC0F8BDC))(0xC3470A0, 0xC347090, 0xC803D00, 0xC803E54);
                    }
                    (((struct o10_uint *)0xC347090)->v) = ((((struct o4_int *)0xC803D40)->v));
                    (((struct o14_uint *)0xC347090)->v) = ((((struct o8_int *)0xC803D40)->v));
                    (((struct o20_uint *)0xC347090)->v) = ((((struct o20_int *)0xC803D00)->v));
                    (((struct o24_uint *)0xC347090)->v) = ((((struct o24_int *)0xC803D00)->v));
                    (((struct o28_uint *)0xC347090)->v) = ((((struct o28_int *)0xC803D00)->v));
                    (((struct o2C_uint *)0xC347090)->v) = ((((struct o2C_int *)0xC803D00)->v));
                    (((struct o30_uint *)0xC347090)->v) = ((((struct o10_int *)0xC803D40)->v));
                    (((struct o34_uint *)0xC347090)->v) = ((((struct o14_int *)0xC803D40)->v));
                    (((struct o38_uint *)0xC347090)->v) = ((((struct o18_int *)0xC803D40)->v));
                    (((struct o3C_uint *)0xC347090)->v) = ((((struct o1C_int *)0xC803D40)->v));
                    return ((int (*)(int, int, int, int))(0xC0F8BDC))(0xC3470D0, 0xC347090, 0xC803D00, 0xC803E54);
                }
                (((struct o10_uint *)0xC347090)->v) = ((((struct o4_int *)0xC803D40)->v));
                (((struct o14_uint *)0xC347090)->v) = ((((struct o8_int *)0xC803D40)->v));
                return ((int (*)(int, int, int, int))(0xC0F8BDC))(0xC3470B0, 0xC347090, 0xC803D00, 0xC803E54);
            }
            (((struct o20_uint *)0xC347090)->v) = ((((struct o20_int *)0xC803D00)->v));
            (((struct o24_uint *)0xC347090)->v) = ((((struct o24_int *)0xC803D00)->v));
            (((struct o28_uint *)0xC347090)->v) = ((((struct o28_int *)0xC803D00)->v));
            (((struct o2C_uint *)0xC347090)->v) = ((((struct o2C_int *)0xC803D00)->v));
            (((struct o30_uint *)0xC347090)->v) = ((((struct o30_int *)0xC803D00)->v));
            (((struct o34_uint *)0xC347090)->v) = ((((struct o34_int *)0xC803D00)->v));
            (((struct o38_uint *)0xC347090)->v) = ((((struct o38_int *)0xC803D00)->v));
            (((struct o3C_uint *)0xC347090)->v) = ((((struct o3C_int *)0xC803D00)->v));
            return ((int (*)(int, int, int, int))(0xC0F8BDC))(0xC3470D0, 0xC347090, 0xC803D00, 0xC803E54);
        }
        (((struct o10_uint *)0xC347090)->v) = ((((struct o20_int *)0xC803D00)->v));
        (((struct o14_uint *)0xC347090)->v) = ((((struct o24_int *)0xC803D00)->v));
        (((struct o18_uint *)0xC347090)->v) = ((((struct o28_int *)0xC803D00)->v));
        (((struct o1C_uint *)0xC347090)->v) = ((((struct o2C_int *)0xC803D00)->v));
        return ((int (*)(int, int, int, int))(0xC0F8BDC))(0xC3470B0, 0xC347090, 0xC803D00, 0xC803E54);
    }
    return ((int (*)(int, int, int, int))(0xC0F8BDC))(0xC3470B0, 0xC347090, 0xC803D00, 0xC803E54);
}
