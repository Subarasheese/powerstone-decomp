/* Straight-line functions with calls and guards (batch gen_dn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o718C_int { char p[0x718C]; int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c059330(int, int, int, int);
int FUN_0c06208c(int, float, float, float);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c0e6fe8(int);
float FUN_0c09da1c(int a4);
int FUN_0c016bd2(int a4, int a5, int a6, int a7);

float FUN_0c09da1c(int a4)
{
    int stk[3];
    register int t1;
    register int t4;
    register int t7;
    register int t10;
    register float u14;
    register float u18;
    register float t35;
    register float t37;
    register float u40;
    register float u46;

    t1 = *(short *)((((((struct o718C_int *)(a4))->v)) + 0x0));
    *(float *)(((int)stk + 0)) = (((float)(short)(((int)(t1 & 0xFF00) >> 8) | ((unsigned char)t1 << 8)) / 16.0f) * (1.0f / (float)(unsigned char)(*(signed char *)((a4 + 0x71A7)))));
    t4 = *(short *)((((((struct o718C_int *)(a4))->v)) + 0x2));
    *(float *)(((int)stk + 4)) = (((float)(short)(((int)((short)t4 & 0xFF00) >> 8) | ((unsigned char)(short)t4 << 8)) / 16.0f) * (1.0f / (float)(unsigned char)(*(signed char *)((a4 + 0x71A7)))));
    t7 = *(short *)((((((struct o718C_int *)(a4))->v)) + 0x4));
    *(float *)(((int)stk + 8)) = (((float)(short)(((int)(0xFF00 & (short)t7) >> 8) | ((unsigned char)(short)t7 << 8)) / 16.0f) * (1.0f / (float)(unsigned char)(*(signed char *)((a4 + 0x71A7)))));
    if ((*(signed char *)((a4 + 0x71B4))) != 0) {
        t10 = *(int *)((a4 + 0x1C));
        u14 = *(float *)((((*(signed char *)(((0x71F1 + t10) + 0x0))) << 2) + ((((*(signed char *)((t10 + 0x4))) << 2) << 1) + 0xC150C60)));
        u18 = *(float *)((((*(signed char *)(((0x71F1 + a4) + 0x0))) << 2) + ((((*(signed char *)((a4 + 0x4))) << 2) << 1) + 0xC150C60)));
        FUN_0c06208c(((int)stk + 0), (u14 / u18), (u14 / u18), (u14 / u18));
    }
    t35 = FUN_0c0dfa50((*(int *)((a4 + 0x30))));
    t37 = FUN_0c0df4d0((*(int *)((a4 + 0x30))));
    u40 = (((((struct o8_float *)(((int)stk + 0)))->v)) * t35);
    u40 = u40 + t37 * (*(float *)(((int)stk + 0)));
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + u40);
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o4_float *)(((int)stk + 0)))->v)));
    u46 = (-((*(float *)(((int)stk + 0))) * t35));
    u46 = u46 + t37 * (*(float *)(((int)stk + 8)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + u46);
    return t37;
}

int FUN_0c016bd2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct o20_float *)(a4))->v) = 17.0157051f;
        (((struct o24_float *)(a4))->v) = 238.219894f;
        (((struct o28_float *)(a4))->v) = -10.0f;
    }
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + 0.00255491049f);
    t1 = *(signed char *)((a4 + 0x9));
    if (t1 != 0) {
        if (t1 != 1) {
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 1.02094233f);
        } else {
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 0.510471165f);
            if ((int)(*(short *)0xC7F2EEE) >= (int)0x1950) {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            }
        }
    } else {
        if ((int)(*(short *)0xC7F2EEE) < (int)0x18EC) {
        } else {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        }
    }
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        t2 = 0x2E0;
        t2 = (t2 + a4);
        t2 = (t2 + (t1 << 2));
        t2 = (*(int *)((t2 + 0x0)));
        FUN_0c0e6fe8((t1 << 2));
        (((struct oC_float *)(t2))->v) = 0.0f;
        u0 = (*(float *)((0xC116BDC + t0)));
        FUN_0c06208c((t2 + 0x4), u0, u0, u0);
        t1 = (t1 + 0x1);
    }
    t0 = *(signed char *)0xC7F2EE5;
    if ((int)(unsigned char)t0 > (int)0x1) {
        return FUN_0c059330(a4, a5, a6, a7);
    }
    return (unsigned char)t0;
}
