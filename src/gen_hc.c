/* Straight-line functions with calls and guards (batch gen_hc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c059132(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(int, int, int);
int FUN_0c0b43a4(int a4);
int FUN_0c0dfce0(int a4, int a5, int a6, int a7);
int FUN_0c0dfa50(int a4, int a5, int a6, int a7);

int FUN_0c0b43a4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t4 = FUN_0c059132(0x5, 0x1, 0x1);
    t5 = t4;
    if (t4 != 0) {
        *(unsigned char *)((t4 + 0x0)) = 0x1;
        *(unsigned char *)((t4 + 0x1)) = 0x1;
        *(unsigned char *)((t4 + 0x3)) = 0x2;
        *(unsigned short *)((t4 + 0x6)) = 0x1;
        *(unsigned char *)((t4 + 0x5)) = 0x19;
        *(unsigned char *)((t4 + 0x8)) = 0x0;
        *(unsigned char *)((t4 + 0x9)) = 0x0;
        *(unsigned char *)((t4 + 0xC)) = (*(signed char *)((a4 + 0x1)));
        (((struct oEC_ushort *)(t4))->v) = 0x0;
        (((struct oEE_ushort *)(t4))->v) = 0x0;
        (((struct oF0_ushort *)(t4))->v) = 0x0;
        *(unsigned int *)((t4 + 0x10)) = 0xC0B4010;
        *(unsigned char *)((t4 + 0x4)) = 0xD;
        t6 = *(signed char *)0xC7F3051;
        *(volatile signed char *)((a4 + 0x2));
        *(volatile int *)((((short)((short)t6 * (short)0x34) + 0xC350B60) + 0x18));
        FUN_0c0e6fe8(t4, 0xC350B60, 0xC7F302C);
        t4 = *(signed char *)((t0 + 0x25));
        *(volatile signed char *)((a4 + 0x2));
        *(volatile int *)((((short)((short)t4 * (short)0x34) + t1) + 0x1C));
        FUN_0c0e6fe8(t2, t1, t0);
        t0 = (((struct o2E0_int *)(t3))->v);
        FUN_0c06233a(t0, 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x2)) = 0x1;
        t5 = 0x1;
    }
    return t5;
}


