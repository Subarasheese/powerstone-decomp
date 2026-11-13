/* Straight-line functions with calls and guards (batch gen_b): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c059132(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0a1d88(int, int);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int thunk_FUN_0c062242(int, int);
int FUN_0c0bbaf8(int a4, int a5);

int FUN_0c0bbaf8(int a4, int a5)
{
    int stk[5];
    register int t0;
    register int t37;
    register int t5;
    register int t8;
    register int t9;
    register float u10;
    register float t12;
    register float u14;
    register float u18;
    register float t19;
    register float u21;
    register int t24;
    register int t25;
    register int t33;

    *(unsigned char *)(((int)stk + 8)) = a5;
    t0 = FUN_0c059132(0x1, 0x1, 0x3);
    t37 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned int *)((t0 + 0x10)) = 0xC0BBD02;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x2C)) = (*(int *)((a4 + 0x2C)));
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0x30)));
        *(unsigned int *)((t0 + 0x34)) = (*(int *)((a4 + 0x34)));
        (((struct o50_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o58_float *)(t0))->v) = 1.0f;
        t5 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 4)) = ((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242(((((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)), (t0 + 0x20));
        *(int *)((int)stk + 0) = (t0 + 0x20);
        t8 = *(signed char *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 4)) = ((unsigned char)t8 << 2);
        *(unsigned int *)(((int)stk + 16)) = (((unsigned char)t8 << 2) + 0xC33C3F8);
        t9 = *(int *)(((int)stk + 4));
        u10 = *(float *)(((((unsigned char)t8 << 2) + 0xC33C3F8) + 0x0));
        *(unsigned int *)(((int)stk + 12)) = (t9 + 0xC33C438);
        t12 = FUN_0c0df4d0(((int)(((*(float *)(((t9 + 0xC33C438) + 0x0))) * 65536.0f) / 360.0f) + 0x4000));
        u14 = ((((struct o20_float *)(t0))->v));
        u14 = u14 + t12 * u10;
        (((struct o20_float *)(t0))->v) = u14;
        *(int *)((int)stk + 0) = (t0 + 0x28);
        u18 = *(float *)(((*(int *)(((int)stk + 16))) + 0x0));
        t19 = FUN_0c0dfa50(((int)(((*(float *)(((*(int *)(((int)stk + 12))) + 0x0))) * 65536.0f) / 360.0f) + 0x4000));
        u21 = ((((struct o28_float *)(t0))->v));
        u21 = u21 + t19 * u18;
        (((struct o28_float *)(t0))->v) = u21;
        (((struct oF2_ushort *)(t0))->v) = (unsigned char)(*(signed char *)(((int)stk + 8)));
        (((struct o101_uchar *)(t0))->v) = 0x1;
        (((struct o102_uchar *)(t0))->v) = 0x1;
        FUN_0c0a1d88(t0, 0x78);
        t24 = 0x0;
        for (;;) {
            t25 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + (t24 << 2)) + 0x0))), ((signed char)((((t25 << 1) + t25) << 2) << 1) + 0xC6002D0), (t24 + 0x2));
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + (t24 << 2)) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + (t24 << 2)) + 0x0))) + 0x2)) = 0x1F;
            (((struct o1C_float *)((*(int *)((((0x2E0 + t0) + (t24 << 2)) + 0x0)))))->v) = 1.0f;
            t33 = (t24 << 2);
            t24 = (t24 + 0x1);
            (((struct o20_float *)((*(int *)((((0x2E0 + t0) + t33) + 0x0)))))->v) = 1.0f;
            (((struct o24_float *)((*(int *)(((t33 + (0x2E0 + t0)) + 0x0)))))->v) = 2.0f;
            if ((int)t24 >= (int)0x3) {
                break;
            }
        }
        *(unsigned char *)((((((struct o2E4_int *)(t0))->v)) + 0x0)) = 0x0;
        t37 = 0x2E4;
    }
    return t37;
}
