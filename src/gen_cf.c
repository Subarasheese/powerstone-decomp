/* Straight-line functions with calls and guards (batch gen_cf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c015798(int);
int FUN_0c059330(int, int, int, int);
float FUN_0c0df940(void);
int FUN_0c0e6f24(void);
int FUN_0c01405e(int a4, int a5, int a6, int a7);

int FUN_0c01405e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) - ((((struct oC_float *)0xC361C60)->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - ((((struct o10_float *)0xC361C60)->v)));
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o4_float *)0xC361C60)->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o8_float *)0xC361C60)->v)));
            FUN_0c015798(a4);
            if (-120.0f > ((((struct o24_float *)(a4))->v))) {
                *(unsigned char *)((a4 + 0x8)) = 0x2;
            }
            (((struct o5C_float *)(a4))->v) = ((((struct o0_float *)0xC361C60)->v));
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
                t0 = 0xC7F3042;
                if ((*(short *)0xC7F3042) != 0) {
                    *(unsigned char *)((a4 + 0x8)) = 0x2;
                    t0 = 0x2;
                }
                t1 = t0;
            } else {
                *(unsigned char *)((a4 + 0x8)) = 0x2;
                t1 = 0x2;
            }
            return t1;
        }
        return FUN_0c059330(a4, a5, a6, a7);
    }
    FUN_0c0df940();
    
    t0 = FUN_0c0e6f24();
    FUN_0c0df940();
    
    t1 = FUN_0c0e6f24();
    u0 = (float)(t1 << 1);
    if ((int)(t1 << 1) < 0) {
        u0 = ((float)(t1 << 1) + 4.2949673e+09f);
    }
    (((struct o20_float *)(a4))->v) = (u0 + -240.0f);
    (((struct o24_float *)(a4))->v) = 208.0f;
    (((struct o28_float *)(a4))->v) = ((*(float *)(((0xC116800 + ((t0 << 2) << 1)) + 0x0))) + -24.3599911f);
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = ((((struct o4_float *)((0xC116800 + ((t0 << 2) << 1))))->v));
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = (*(float *)(((0xC116780 + ((t0 << 2) << 1)) + 0x0)));
    (((struct o54_float *)(a4))->v) = ((((struct o4_float *)((0xC116780 + ((t0 << 2) << 1))))->v));
    (((struct o58_float *)(a4))->v) = 1.0f;
    FUN_0c0df940();
    
    *(unsigned int *)((a4 + 0x34)) = (((FUN_0c0e6f24()) << 8) << 2);
    (((struct oEC_ushort *)(a4))->v) = 0x78;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) - ((((struct oC_float *)0xC361C60)->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - ((((struct o10_float *)0xC361C60)->v)));
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o4_float *)0xC361C60)->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o8_float *)0xC361C60)->v)));
    FUN_0c015798(a4);
    if (-120.0f > ((((struct o24_float *)(a4))->v))) {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
    }
    (((struct o5C_float *)(a4))->v) = ((((struct o0_float *)0xC361C60)->v));
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) != 0) {
        t0 = 0xC7F3042;
        if ((*(short *)0xC7F3042) != 0) {
            *(unsigned char *)((a4 + 0x8)) = 0x2;
            t0 = 0x2;
        }
        t1 = t0;
    } else {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
        t1 = 0x2;
    }
    return t1;
}
