/* Straight-line functions with calls and guards (batch gen_ec): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c059330(int, int, int, int);
int FUN_0c06231c(int, int, int);
int FUN_0c0623a6(int, int, int);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c0e6fe8(int);
int thunk_FUN_0c062242(int);
int FUN_0c0354d8(int a4, int a5, int a6, int a7);
int FUN_0c0a8a86(int a4, int a5, int a6, int a7);
int FUN_0c03ca16(int a4, int a5, int a6, int a7);

int FUN_0c0354d8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c059330(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        t0 = *(signed char *)((a4 + 0x3));
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0xB0));
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.049999997f);
    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.049999997f);
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    if (((((struct oEC_short *)(a4))->v)) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t0 = 0xEC;
    if ((int)((((struct oEC_short *)(a4))->v)) < (int)0x6) {
        u0 = (((struct o68_float *)(a4))->v);
        (((struct o68_float *)(a4))->v) = (u0 - 0.149999991f);
        (((struct o64_float *)(a4))->v) = (u0 - 0.149999991f);
        (((struct o60_float *)(a4))->v) = (u0 - 0.149999991f);
        t0 = 0x60;
    }
    return t0;
}

int FUN_0c0a8a86(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
        if ((int)((((struct oF0_short *)(a4))->v)) >= (int)0x5) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        t0 = 0x14;
        if ((*(signed char *)((a4 + 0x3))) == 0) {
            t0 = 0x1A;
        }
        return FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), 0xC664A48, (t0 + (*(signed char *)((a4 + 0xF0)))));
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    *(unsigned short *)((a4 + 0x6)) = 0x1F;
    *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC7E40C8 + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0))));
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    (((struct o28_float *)(a4))->v) = 0.0f;
    (((struct o24_float *)(a4))->v) = 0.0f;
    (((struct o20_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 1.0f;
    (((struct o54_float *)(a4))->v) = 1.0f;
    (((struct o50_float *)(a4))->v) = 1.0f;
    t0 = 0x14;
    if ((*(signed char *)((a4 + 0x3))) == 0) {
        t0 = 0x1A;
    }
    FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A48, t0);
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
    return 0xF;
}

int FUN_0c03ca16(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return FUN_0c059330(a4, a5, a6, a7);
    }
    *(unsigned char *)((a4 + 0x1)) = (*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x1)));
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x3C;
        FUN_0c0e6fe8(a4);
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x38E);
    t0 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t0 & 0xFFFF);
    u0 = ((((struct o38_float *)(a4))->v));
    u0 = u0 + 50.0f * (FUN_0c0dfa50((t0 & 0xFFFF)));
    (((struct o20_float *)(a4))->v) = u0;
    u0 = ((((struct o40_float *)(a4))->v));
    u0 = u0 + 50.0f * (FUN_0c0df4d0((*(int *)((a4 + 0x30)))));
    (((struct o28_float *)(a4))->v) = u0;
    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0xE38);
    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) & 0xFFFF);
    return 0x2E0;
}
