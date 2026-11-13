/* Straight-line functions with calls and guards (batch gen_y): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o308_uint { char p[0x308]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o720A_uchar { char p[0x720A]; unsigned char v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c059132(int, int, int);
int FUN_0c05923a(int, int, int, int, int);
int FUN_0c08b7d6(int);
int FUN_0c09a828(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09c894(int);
int FUN_0c09da1c(int);
int FUN_0c0a2830(int, int, int, int, int, int);
int FUN_0c0e6fe8(int);
int FUN_0c08b844(int a4);
int FUN_0c0ca124(int a4);
int FUN_0c0dfa50(int a4, int a5, int a6, int a7);
int FUN_0c0574d2(int a4);

int FUN_0c08b844(int a4)
{
    int stk[2];
    register int t1;
    register int t6;
    register int t18;
    register int t17;
    int t2;
    register int t3;

    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t1 = FUN_0c09c894(a4);
        if (((signed char)t1 == 1) && (t2 = *(int *)((a4 + 0x1C)), t3 = *(signed char *)((t2 + 0x4)), t3 != 10)) {
            *(unsigned char *)((a4 + 0xA)) = 0x3;
            FUN_0c09a828((*(int *)((a4 + 0x1C))), 0x4, 0x32);
            t6 = *(int *)((a4 + 0x1C));
            (((struct o71A9_uchar *)(t6))->v) = 0x1;
            (((struct o71A8_uchar *)(t6))->v) = 0x1;
            (((struct o720A_uchar *)(a4))->v) = 0x0;
            FUN_0c0a2830(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
            *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x0;
            FUN_0c08b7d6(a4);
        }
    }
    FUN_0c09a910(a4);
    FUN_0c09da1c(a4);
    t18 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t17 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t17 + 0x1);
        t18 = (t17 + 0x1);
    }
    return t18;
}

int FUN_0c0ca124(int a4)
{
    register int t0;
    register int t9;
    register int t3;

    t0 = FUN_0c05923a(0x1, a4, 0x1, 0x0, 0x0);
    t9 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0CA198;
        FUN_0c0e6fe8(t0);
        FUN_0c0e6fe8(t3);
        (((struct o58_float *)(t9))->v) = 1.0f;
        (((struct o54_float *)(t9))->v) = 1.0f;
        (((struct o50_float *)(t9))->v) = 1.0f;
        *(unsigned int *)((t9 + 0x1C)) = (*(int *)((a4 + 0x1C)));
        (((struct o308_uint *)(t9))->v) = a4;
    }
    return t9;
}

