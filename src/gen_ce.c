/* Straight-line functions with calls and guards (batch gen_ce): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o300_int { char p[0x300]; int v; };
struct o308_uchar { char p[0x308]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c048314(int, int);
int FUN_0c048480(int, int);
int FUN_0c059330(int);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e6f24(void);
int FUN_0c0480e2(int a4, float f4);

int FUN_0c0480e2(int a4, float f4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                FUN_0c048314(a4, (0x308 + a4));
                FUN_0c048480(a4, (0x308 + a4));
                t1 = *(signed char *)(((0x308 + a4) + 0x1));
                if (t1 == 0) {
                    return FUN_0c059330(a4);
                }
                return t1;
            }
            return t0;
        }
        t0 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct oEE_ushort *)(a4))->v) = 0x2;
            FUN_0c0df940();
            t0 = FUN_0c0e6f24();
            t1 = *(int *)(((((*(signed char *)(((0x308 + a4) + 0x0))) << 2) + (0x2E0 + a4)) + 0x0));
            if ((*(signed char *)((t1 + 0x0))) == 0) {
                *(unsigned char *)((t1 + 0x0)) = 0x1;
                *(unsigned int *)((t1 + 0x18)) = (((t0 << 8) << 2) << 1);
                *(unsigned char *)((t1 + 0x1)) = 0xC;
                u0 = FUN_0c0df4d0((*(int *)((t1 + 0x18))));
                (((struct o28_float *)(t1))->v) = (-((u0 * 160.0f) / (float)(*(signed char *)((t1 + 0x1)))));
                (((struct o4_float *)(t1))->v) = (((((struct o20_float *)(a4))->v)) + ((u0 * 160.0f)));
                u0 = FUN_0c0dfa50((*(int *)((t1 + 0x18))));
                (((struct o2C_float *)(t1))->v) = (-(((u0 * 480.0f) / 8.0f) / (float)(*(signed char *)((t1 + 0x1)))));
                (((struct o8_float *)(t1))->v) = (((((struct o24_float *)(a4))->v)) + (((u0 * 480.0f) / 8.0f)));
                (((struct oC_float *)(t1))->v) = ((((struct o28_float *)(a4))->v));
                *(unsigned char *)((((*(signed char *)(((0x308 + a4) + 0x0))) + ((0x308 + a4) + 0x4)) + 0x0)) = 0x0;
                *(unsigned char *)((((*(signed char *)(((0x308 + a4) + 0x0))) + ((0x308 + a4) + 0xC)) + 0x0)) = 0x2;
                *(unsigned char *)(((0x308 + a4) + 0x1)) = ((*(signed char *)(((0x308 + a4) + 0x1))) + 0x1);
                (((struct o308_uchar *)(a4))->v) = (((*(signed char *)(((0x308 + a4) + 0x0))) + 0x1) & 0x7);
            }
        }
        FUN_0c048314(a4, (0x308 + a4));
        FUN_0c048480(a4, (0x308 + a4));
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        t1 = 0xEC;
        if ((short)(t0 - 1) == 0) {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct o20_float *)(a4))->v) = (*(float *)((0xC14A920 + ((*(signed char *)((a4 + 0x3))) << 2))));
    (((struct o24_float *)(a4))->v) = 440.0f;
    if ((*(int *)0xC7F3020) != 0) {
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 16.0f);
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + (((-((float)(*(signed char *)((a4 + 0x3))) * 32.0f))) + 16.0f));
    }
    (((struct o28_float *)(a4))->v) = 7.0f;
    (((struct oEC_ushort *)(a4))->v) = 0x3C;
    (((struct oEE_ushort *)(a4))->v) = 0x2;
    (((struct o308_uchar *)(a4))->v) = 0x0;
    *(unsigned char *)(((0x308 + a4) + 0x1)) = 0x0;
    t0 = (((struct o300_int *)(a4))->v);
    *(unsigned char *)((t0 + 0x1)) = 0x32;
    *(unsigned char *)((t0 + 0x0)) = 0x0;
    *(unsigned char *)(((0x308 + a4) + 0x2)) = 0x0;
    t0 = *(signed char *)(((0x308 + a4) + 0x1));
    *(unsigned char *)(((0x308 + a4) + 0x1)) = (t0 + 0x1);
    return (t0 + 0x1);
}
