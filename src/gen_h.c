/* Straight-line functions with calls and guards (batch gen_h): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c059132(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);
int FUN_0c033990(int a4);
int FUN_0c0bd4fc(int a4);

int FUN_0c033990(int a4)
{
    register int t0;
    register int t10;
    register int t3;
    register int t5;
    register int t6;

    t0 = FUN_0c059132(0x5, 0x1, 0x2);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x41F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC033A42;
        FUN_0c0e6fe8();
        (((struct o58_float *)(t0))->v) = 2.0f;
        (((struct o50_float *)(t0))->v) = 2.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o5C_float *)(t0))->v) = 1.0f;
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t5 = *(int *)((((t3 << 2) + (0x2E0 + t0)) + 0x0));
            *(unsigned char *)((t5 + 0x0)) = 0x1;
            *(unsigned short *)((t5 + 0x2)) = 0xF;
            t6 = *(signed char *)((t0 + 0x3));
            FUN_0c06233a(t5, ((signed char)((((t6 << 1) + t6) << 2) << 1) + 0xC6002D0), t3);
            t3 = (t3 + 0x1);
        }
        t10 = 0x2DC;
    }
    return t10;
}

int FUN_0c0bd4fc(int a4)
{
    register int t0;
    register int t12;
    register int t4;

    t0 = FUN_0c059132(0x1, 0x1, 0x1);
    t12 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0BD5AE;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        (((struct o40_float *)(t0))->v) = 0.0f;
        (((struct o3C_float *)(t0))->v) = 0.0f;
        (((struct o38_float *)(t0))->v) = 0.0f;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t4 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t4 << 1) + t4) << 2) << 1) + 0xC6002D0), 0x0);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x41F;
        (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        (((struct oEE_ushort *)(t0))->v) = 0xA;
        t12 = 0xEE;
    }
    return t12;
}
