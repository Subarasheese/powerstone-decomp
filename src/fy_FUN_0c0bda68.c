/* Straight-line functions with calls and guards (batch gen_b): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c059132(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0a1d88(int, int);
struct V12 { int x, y, z; };
int thunk_FUN_0c062242(int, int);
int FUN_0c0bda68(int a4, int a5);

int FUN_0c0bda68(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t36;
    register int t4;
    register int t9;
    register int t17;
    register int t24;

    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = FUN_0c059132(0x1, 0x1, 0x2);
    t36 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0BDC20;
        *(struct V12 *)(t0 + 32) = *(struct V12 *)(a4 + 32);
        *(struct V12 *)(t0 + 44) = *(struct V12 *)(a4 + 44);
        (((struct o40_float *)(t0))->v) = 0.0f;
        (((struct o3C_float *)(t0))->v) = 0.0f;
        (((struct o38_float *)(t0))->v) = 0.0f;
        (((struct o58_float *)(t0))->v) = 1.5f;
        (((struct o54_float *)(t0))->v) = 1.5f;
        (((struct o50_float *)(t0))->v) = 1.5f;
        t4 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580), (t0 + 0x20));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x41F;
        t9 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t9 << 1) + t9) << 2) << 1) + 0xC6002D0), 0x0);
        (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        *(unsigned char *)((((((struct o2E4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E4_int *)(t0))->v)) + 0x2)) = 0x41F;
        t17 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E4_int *)(t0))->v)), ((signed char)((((t17 << 1) + t17) << 2) << 1) + 0xC6002D0), 0x1);
        (((struct o40_float *)(((((struct o2E4_int *)(t0))->v))))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct oEC_ushort *)(t0))->v) = 0xB4;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        (((struct o101_uchar *)(t0))->v) = 0x1;
        (((struct o102_uchar *)(t0))->v) = 0x2;
        FUN_0c0a1d88(t0, 0x70);
        (((struct oEE_ushort *)(t0))->v) = 0x1;
        (((struct oF0_ushort *)(t0))->v) = 0x5;
        (((struct oF2_ushort *)(t0))->v) = 0x14;
        t24 = *(signed char *)(((int)stk + 4));
        switch (t24) {
        case 0:
            break;
        case 1:
            *(unsigned int *)((t0 + 0x30)) = (unsigned short)((*(int *)((t0 + 0x30))) + 0x1555);
            break;
        case 2:
            *(unsigned int *)((t0 + 0x30)) = (unsigned short)((*(int *)((t0 + 0x30))) + 0xEAAB);
            break;
        }
        t36 = t24;
    }
    return t36;
}
