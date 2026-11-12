/* Straight-line functions with calls and guards (batch gen_gi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c046798(int, int, int, int, int, int, int, int, int);
int FUN_0c059132(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0a1d88(int, int);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c0e6fe8(void);
int FUN_0c0c0f44(int a4, int a5, int a6);

int FUN_0c0c0f44(int a4, int a5, int a6)
{
    int stk[7];
    register int t0;
    register int t32;
    register float u14;
    register int t22;
    register int t23;
    register int t27;
    register float u18;

    *(unsigned int *)(((int)stk + 24)) = a5;
    *(unsigned char *)(((int)stk + 20)) = a6;
    t0 = FUN_0c059132(0x1, 0x1, 0x1);
    t32 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned short *)((t0 + 0x6)) = 0x7;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C1186;
        *(unsigned int *)((t0 + 0x1C)) = (*(int *)((a4 + 0x1C)));
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        *(unsigned int *)((t0 + 0x30)) = (*(int *)(((int)stk + 24)));
        FUN_0c0e6fe8();
        (((struct o38_float *)(t0))->v) = ((FUN_0c0df4d0(((-(*(int *)((t0 + 0x30)))) + 0x14000))) * 40.0f);
        (((struct o40_float *)(t0))->v) = ((FUN_0c0dfa50(((-(*(int *)((t0 + 0x30)))) + 0x14000))) * 40.0f);
        if ((*(signed char *)((0x71BC + (*(int *)((a4 + 0x1C)))))) == 2) {
            u14 = ((float)((*(signed char *)(((int)stk + 20))) + 0x1) * 10.0f);
            u14 = -u14;
            u18 = u14;
        } else {
            u18 = ((float)(*(signed char *)(((int)stk + 20))) * 10.0f);
        }
        (((struct o3C_float *)(t0))->v) = u18;
        (((struct o101_uchar *)(t0))->v) = 0x3;
        (((struct o102_uchar *)(t0))->v) = 0x1;
        (((struct o105_uchar *)(t0))->v) = 0x0;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
        FUN_0c0a1d88(t0, 0x72);
        t22 = (((struct o2E0_int *)(t0))->v);
        t23 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t22, ((signed char)((((t23 << 1) + t23) << 2) << 1) + 0xC6002D0), 0x3);
        *(unsigned char *)((t22 + 0x0)) = 0x1;
        *(unsigned short *)((t22 + 0x2)) = 0xB;
        *(unsigned int *)((t22 + 0x18)) = 0x4000;
        *(int *)((int)stk + 16) = 0xC1531B4;
        *(int *)((int)stk + 12) = 0xC1531A8;
        *(int *)((int)stk + 8) = 0x6F;
        *(int *)((int)stk + 4) = 0xB4;
        *(int *)((int)stk + 0) = 0x5;
        t27 = *(signed char *)((a4 + 0x3));
        t32 = (FUN_0c046798((*(signed char *)((t0 + 0x3))), (t0 + 0x6C), t0, ((signed char)((((t27 << 1) + t27) << 2) << 1) + 0xC6002D0), 0x5, 0xB4, 0x6F, 0xC1531A8, 0xC1531B4));
    }
    return t32;
}
