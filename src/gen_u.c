/* Straight-line functions with calls and guards (batch gen_u): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int FUN_0c059132(int, int, int);
int FUN_0c0a1d88(int, int);
int FUN_0c0e6fe8(int, int, int);
int FUN_0c0b9694(int a4);

int FUN_0c0b9694(int a4)
{
    register int t0;
    register int t3;
    register int t4;
    register int t5;

    t0 = FUN_0c059132(0x1, 0x1, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B9710;
        FUN_0c0e6fe8(t0, 0x0, 0x1);
        (((struct o58_float *)(t3))->v) = 0.0f;
        (((struct o54_float *)(t3))->v) = 0.0f;
        (((struct o50_float *)(t3))->v) = 0.0f;
        (((struct o101_uchar *)(t3))->v) = 0x7;
        (((struct o102_uchar *)(t3))->v) = t4;
        (((struct o105_uchar *)(t3))->v) = t5;
        (((struct o106_uchar *)(t3))->v) = t5;
        (((struct o107_uchar *)(t3))->v) = t5;
        return FUN_0c0a1d88(t3, 0x7C);
    }
    return t0;
}
