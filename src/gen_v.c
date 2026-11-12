/* Straight-line functions with calls and guards (batch gen_v): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
int FUN_0c059132(int, int, int);
int FUN_0c0a1e0a(int, int);
int FUN_0c0b7094(int, int);
int FUN_0c0e6fe8(void);
int FUN_0c0b6f5c(int a4);

int FUN_0c0b6f5c(int a4)
{
    register int t0;
    register int t6;

    t0 = FUN_0c059132(0x2, 0x1, 0x0);
    t6 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        FUN_0c0b7094(t0, a4);
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        (((struct o101_uchar *)(t0))->v) = 0x1;
        (((struct o102_uchar *)(t0))->v) = 0xA;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
        t6 = FUN_0c0a1e0a(t0, 0xB);
        *(unsigned int *)((t0 + 0x10)) = 0xC0B6FD8;
        *(unsigned int *)((t0 + 0x1C)) = a4;
    }
    return t6;
}
