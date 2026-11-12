/* Straight-line functions with calls and guards (batch gen_cr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c03e096(int);
int FUN_0c059330(int);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e6e5c(int);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(int);
int thunk_FUN_0c062242(int);
int FUN_0c03e148(int a4);

int FUN_0c03e148(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t1 = (((struct o2E0_int *)(a4))->v);
    (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) + 0.5f);
    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 11) {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
    }
    t1 = *(signed char *)((a4 + 0x3));
    thunk_FUN_0c062242(((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 == 1) {
            t2 = FUN_0c03e096(a4);
            t3 = (signed char)t2;
            if ((signed char)t2 == 0) {
                t2 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
                t3 = (t2 + 0x1);
            }
            return t3;
        }
        if (t1 == 2) {
            return FUN_0c059330(a4);
        }
        return t1;
    }
    t1 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t1 - 1);
    if ((short)(t1 - 1) == 0) {
        t1 = *(int *)((((((((struct oF0_short *)(a4))->v)) << 2) + (0x2E0 + a4)) + 0x0));
        if ((*(signed char *)((t1 + 0x0))) != 0) {
            (((struct oEE_ushort *)(a4))->v) = 0x1;
        } else {
            (((struct oEE_ushort *)(a4))->v) = 0x1;
            *(volatile short *)((a4 + 0xF0));
            (((struct oF0_ushort *)(a4))->v) = (FUN_0c0e6e5c(0x1));
            *(unsigned char *)((t1 + 0x0)) = t0;
            FUN_0c0e6fe8(t0);
            (((struct oC_float *)(t1))->v) = 100.0f;
            FUN_0c0df940();
            
            t0 = FUN_0c0e6f24();
            u0 = (float)(((t0 << 8) << 2) << 1);
            if ((int)(((t0 << 8) << 2) << 1) < 0) {
                u0 = ((float)(((t0 << 8) << 2) << 1) + 4.2949673e+09f);
            }
            u1 = FUN_0c0df4d0((int)((u0 * 65536.0f) / 360.0f));
            (((struct o4_float *)(t1))->v) = (u1 * 100.0f);
            u1 = FUN_0c0dfa50((int)((u0 * 65536.0f) / 360.0f));
            (((struct o8_float *)(t1))->v) = (u1 * 100.0f);
            (((struct o34_ushort *)(t1))->v) = 0xA;
            (((struct o28_float *)(t1))->v) = (-(((((struct o4_float *)(t1))->v)) / 10.0f));
            (((struct o2C_float *)(t1))->v) = (-(((((struct o8_float *)(t1))->v)) / 10.0f));
            (((struct o30_float *)(t1))->v) = (-(((((struct oC_float *)(t1))->v)) / 10.0f));
        }
    }
    FUN_0c03e096(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) != 0) {
    } else {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
