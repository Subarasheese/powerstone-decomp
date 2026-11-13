/* Straight-line functions with calls and guards (batch gen_l): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct oA_short { char p[0xA]; short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c027fa4(int, int, int, int, int, int);
int FUN_0c02d9e0(void);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6d00(void);
int FUN_0c0e6e5c(int);
int FUN_0c0e6fe8(int, int, int, int);
int FUN_0c107432(int, int, int, int, int);
int FUN_0c10a2e0(int, int, int);
int FUN_0c10b5f2(int);
int FUN_0c1092e0(int a4, int a5);
int FUN_0c042150(int a4, int a5, int a6, int a7);
int FUN_0c1077d4(int a4);
int FUN_0c0150f8(void);




int FUN_0c0150f8(void)
{
    int stk[16];
    register int t24;

    t24 = *(signed char *)0xC7F302F;
    if (t24 != 0) {
        if (t24 != 1) {
            (((struct o0_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302C) + 0x1);
        } else {
            if (((((struct oA_short *)0xC7F302C)->v)) == 0) {
                (((struct o3_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302F) + 0x1);
            }
            *(volatile int *)0xC17AFB0;
            FUN_0c02d9e0();
            *(float *)(((int)stk + 12)) = 0.0f;
            *(float *)(((int)stk + 16)) = 0.0f;
            *(float *)(((int)stk + 20)) = 8.0f;
            *(unsigned int *)(((int)stk + 48)) = 0x0;
            *(float *)(((int)stk + 52)) = 1.0f;
            *(unsigned int *)(((int)stk + 60)) = 0x1005;
            *(float *)(((int)stk + 28)) = 1.25f;
            *(float *)(((int)stk + 24)) = 1.25f;
            *(int *)((int)stk + 4) = 0x0;
            *(int *)((int)stk + 0) = 0x0;
            t24 = (FUN_0c027fa4((((int)stk + 0) + 0x8), 0xC17FE70, 0x0, 0x0, 0x0, 0x0));
        }
    } else {
        (((struct o3_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302F) + 0x1);
        (((struct oA_ushort *)0xC7F302C)->v) = 0x258;
        if (((((struct oA_short *)0xC7F302C)->v)) == 0) {
            (((struct o3_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302F) + 0x1);
        }
        *(volatile int *)0xC17AFB0;
        FUN_0c02d9e0();
        *(float *)(((int)stk + 12)) = 0.0f;
        *(float *)(((int)stk + 16)) = 0.0f;
        *(float *)(((int)stk + 20)) = 8.0f;
        *(unsigned int *)(((int)stk + 48)) = 0x0;
        *(float *)(((int)stk + 52)) = 1.0f;
        *(unsigned int *)(((int)stk + 60)) = 0x1005;
        *(float *)(((int)stk + 28)) = 1.25f;
        *(float *)(((int)stk + 24)) = 1.25f;
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x0;
        t24 = (FUN_0c027fa4((((int)stk + 0) + 0x8), 0xC17FE70, 0x0, 0x0, 0x0, 0x0));
    }
    return t24;
}
