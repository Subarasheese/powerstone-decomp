/* Straight-line functions with calls and guards (batch gen_gh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c059132(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0a1d88(int, int);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c0e6fe8(void);
int FUN_0c0b8460(int a4, int a5);

int FUN_0c0b8460(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = FUN_0c059132(0x1, 0x1, 0x2);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)((a4 + 0x4)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        (((struct oF0_ushort *)(t0))->v) = a5;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B8604;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t2 = *(int *)((t0 + 0x30));
        t3 = *(int *)(((a5 << 2) + 0xC153090));
        u0 = ((((struct o20_float *)(t0))->v));
        u0 = u0 + (*(float *)(((0xC1530A8 + (a5 << 2)) + 0x0))) * (FUN_0c0df4d0((((-t2) + t3) + 0x14000)));
        (((struct o20_float *)(t0))->v) = u0;
        u0 = ((((struct o28_float *)(t0))->v));
        u0 = u0 + (*(float *)(((0xC1530A8 + (a5 << 2)) + 0x0))) * (FUN_0c0dfa50((((-t2) + t3) + 0x14000)));
        (((struct o28_float *)(t0))->v) = u0;
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 300.0f);
        u0 = *(float *)(((a5 << 2) + 0xC153060));
        (((struct o58_float *)(t0))->v) = u0;
        (((struct o54_float *)(t0))->v) = u0;
        (((struct o50_float *)(t0))->v) = u0;
        (((struct o101_uchar *)(t0))->v) = 0x2;
        (((struct o102_uchar *)(t0))->v) = 0x1;
        FUN_0c0a1d88(t0, 0x72);
        t4 = (((-t2) + t3) + 0x14000);
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t4 = t2;
            t4 = (t4 << 2);
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t4) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t4) + 0x0))) + 0x2)) = 0xF;
            t3 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t4) + 0x0))), ((signed char)((((t3 << 1) + t3) << 2) << 1) + 0xC6002D0), t2);
            t2 = (t2 + 0x1);
        }
        (((struct o8_float *)(((((struct o2E4_int *)(t0))->v))))->v) = (((((struct o2D4_float *)(a4))->v)) - ((((struct o24_float *)(t0))->v)));
        t1 = 0x8;
    }
    return t1;
}
