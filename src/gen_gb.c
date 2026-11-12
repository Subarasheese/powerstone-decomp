/* Straight-line functions with calls and guards (batch gen_gb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_float { char p[0x20]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c059330(int, int, int, int);
int FUN_0c0623a6(int, int, int);
int FUN_0c0a8a66(int);
int FUN_0c0e6fe8(void);
int FUN_0c0a7546(int a4, int a5, int a6, int a7);

int FUN_0c0a7546(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            
            return FUN_0c059330(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned short *)((a4 + 0x6)) = 0xF;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        *(unsigned char *)((a4 + 0x4)) = (*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0)));
        FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A48, (((*(signed char *)((a4 + 0x3))) << 1) + 0xA));
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
        t0 = *(signed char *)((a4 + 0x4));
        (((struct o4_float *)(((((struct o2E0_int *)(a4))->v))))->v) = (*(float *)((0xC152644 + (unsigned char)(((t0 << 1) + t0) << 2))));
        *(volatile int *)((a4 + 0x2E0));
        FUN_0c0e6fe8();
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct oC_float *)(t0))->v) = 0.0f;
        (((struct o8_float *)(t0))->v) = 0.0f;
        (((struct o4_float *)(t0))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o50_float *)(a4))->v) = 1.0f;
    }
    if (((*(signed char *)0xC7F3074) & ((*(signed char *)((a4 + 0x3))) + 0x1)) != 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x4));
    t1 = 0x0;
    if (((int)t0 >= (int)0x1) && ((int)t0 <= (int)0x8)) {
        t1 = 0x1;
    }
    *(unsigned char *)((a4 + 0x1)) = t1;
    if ((*(signed char *)((a4 + 0x4))) != (*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0)))) {
        t0 = *(signed char *)((a4 + 0x4));
        t1 = *(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0));
        t2 = (t1 - t0);
        if ((int)(t1 - t0) < 0) {
            t2 = (t0 - t1);
        }
        if ((int)t2 > (int)0x1) {
            t0 = *(signed char *)((((0xC7F2DF0 + (unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78)) + 0x64) + 0x0));
            (((struct o20_float *)(a4))->v) = (*(float *)((((unsigned char)(((t0 << 1) + t0) << 2) + 0xC152644) + 0x0)));
            FUN_0c0a8a66((*(signed char *)((a4 + 0x3))));
        }
        *(unsigned char *)((a4 + 0x4)) = (*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0)));
    }
    t0 = *(signed char *)((a4 + 0x4));
    if (((((struct o20_float *)(a4))->v)) != (*(float *)((0xC152644 + (unsigned char)(((t0 << 1) + t0) << 2))))) {
        u0 = *(float *)0xC0A77DC;
        t0 = *(signed char *)((a4 + 0x4));
        if (((((struct o20_float *)(a4))->v)) > (*(float *)(((0xC152644 + (unsigned char)(((t0 << 1) + t0) << 2)) + 0x0)))) {
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) - u0);
            t0 = *(signed char *)((a4 + 0x4));
            if (!((*(float *)((0xC152644 + (unsigned char)(((t0 << 1) + t0) << 2)))) > ((((struct o20_float *)(a4))->v)))) {
                return 0x20;
            }
            t0 = *(signed char *)((a4 + 0x4));
            (((struct o20_float *)(a4))->v) = (*(float *)((0xC152644 + (unsigned char)(((t0 << 1) + t0) << 2))));
            return FUN_0c0a8a66((*(signed char *)((a4 + 0x3))));
        }
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + u0);
        t0 = *(signed char *)((a4 + 0x4));
        if (((((struct o20_float *)(a4))->v)) > (*(float *)((0xC152644 + (unsigned char)(((t0 << 1) + t0) << 2))))) {
            t0 = *(signed char *)((a4 + 0x4));
            (((struct o20_float *)(a4))->v) = (*(float *)((0xC152644 + (unsigned char)(((t0 << 1) + t0) << 2))));
            return FUN_0c0a8a66((*(signed char *)((a4 + 0x3))));
        }
        return 0x20;
    }
    return 0x20;
}
