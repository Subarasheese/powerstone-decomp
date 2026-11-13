/* Straight-line functions with calls and guards (batch gen_n): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c0624c4(int, int, int);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(int, int, int, float, float, float);
float math_rand_float(void);
int FUN_0c0c6424(int a4, int a5, int a6, float f4);

int FUN_0c0c6424(int a4, int a5, int a6, float f4)
{
    int stk[1];
    register float u2;
    register float u9;
    register int t29;
    register int t31;
    register int t50;
    register float u51;
    register float u64;
    register float u69;
    register float u77;
    register float u96;
    register float u101;
    register float u109;
    register float u24;
    register float u25;
    register float u16;
    register int t124;
    register int t41;
    register int t42;
    register int t43;
    register float u46;
    register float u47;
    register float u48;

    *(unsigned char *)(((int)stk + 0)) = a6;
    if ((signed char)a5 != 0) {
        if ((signed char)a5 != 1) {
            t124 = (signed char)a5;
            if ((signed char)a5 != 2) {
            } else {
                u2 = -25.0f;
                u2 = u2 + 30.0f * ((f4 + -1.0f));
                (((struct o8_float *)(((((struct o2E4_int *)(a4))->v))))->v) = u2;
                t124 = 0x8;
            }
            u16 = f4;
        } else {
            u9 = 12.0f;
            u9 = u9 + 12.0f * ((f4 + -1.0f));
            (((struct o8_float *)(((((struct o2E4_int *)(a4))->v))))->v) = u9;
            t124 = 0x8;
            u16 = 12.0f;
        }
        u24 = u16;
        u25 = (f4 + -1.0f);
    } else {
        (((struct o8_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((f4 + -1.0f) * 30.0f);
        t124 = 0x8;
        u24 = f4;
        u25 = ((f4 + -1.0f) * 30.0f);
    }
    if ((*(signed char *)(((int)stk + 0))) == 0) {
        t29 = *(int *)(((0x2E0 + a4) + 0x8));
        *(volatile int *)(((0x28 + (*(int *)(((0x2E0 + a4) + 0x4)))) + 0x0));
        *(unsigned char *)((t29 + 0x0)) = 0x0;
    } else {
        t31 = (((struct o2E4_int *)(a4))->v);
        if ((int)((((struct o28_float *)(t31))->v)) == 0) {
            FUN_0c0624c4((0x9C + t31), 0xC664988, (*(signed char *)(((((signed char)a5 << 1) + (*(signed char *)(((int)stk + 0)))) + 0xC33C7A8))));
            (((struct o28_float *)(t31))->v) = (((((struct o28_float *)(t31))->v)) + 1.0f);
        } else {
            t41 = a4;
            t42 = a5;
            t43 = a6;
            u46 = u24;
            u47 = u25;
            u48 = 30.0f;
        }
        t50 = (((struct o2E8_int *)(a4))->v);
        u51 = (((struct o28_float *)(t50))->v);
        if ((int)u51 != 0) {
            if ((int)u51 != 1) {
                math_rand_float();
                *(unsigned int *)((t50 + 0x14)) = ((*(int *)((t50 + 0x14))) + ((((FUN_0c0e6f24()) << 8) << 2) << 1));
                *(unsigned int *)((t50 + 0x14)) = ((*(int *)((t50 + 0x14))) & 0xFFFF);
                (((struct o28_float *)(t50))->v) = 0.0f;
                t124 = 0x28;
            } else {
                *(volatile int *)((a4 + 0x2E4));
                FUN_0c0e6fe8(t41, t42, t43, u46, u47, u48);
                u64 = 93.0f;
                if ((signed char)a5 == 1) {
                    u64 = 35.1999969f;
                }
                (((struct o8_float *)(t50))->v) = (((((struct o8_float *)(t50))->v)) + u64);
                u69 = 0.299999982f;
                if ((signed char)a5 == 0) {
                    u69 = 0.5f;
                }
                (((struct o1C_float *)(t50))->v) = (((((struct o1C_float *)(t50))->v)) + u69);
                (((struct o20_float *)(t50))->v) = (((((struct o20_float *)(t50))->v)) + u69);
                (((struct o24_float *)(t50))->v) = (((((struct o24_float *)(t50))->v)) + u69);
                (((struct o44_float *)(t50))->v) = (((((struct o44_float *)(t50))->v)) + -0.199999988f);
                (((struct o48_float *)(t50))->v) = (((((struct o48_float *)(t50))->v)) + -0.199999988f);
                (((struct o4C_float *)(t50))->v) = (((((struct o4C_float *)(t50))->v)) + -0.199999988f);
                u77 = (((struct o2C_float *)(t50))->v);
                (((struct o2C_float *)(t50))->v) = (u77 - 1.0f);
                t124 = 0x2C;
                if (!((u77 - 1.0f) > 0.0f)) {
                    *(unsigned char *)((t50 + 0x0)) = 0x0;
                    (((struct o28_float *)(t50))->v) = (((((struct o28_float *)(t50))->v)) + 1.0f);
                    t124 = 0x28;
                }
            }
        } else {
            *(unsigned char *)((t50 + 0x0)) = 0x1;
            (((struct o24_float *)(t50))->v) = 0.0f;
            (((struct o20_float *)(t50))->v) = 0.0f;
            (((struct o1C_float *)(t50))->v) = 0.0f;
            (((struct o4C_float *)(t50))->v) = 1.0f;
            (((struct o48_float *)(t50))->v) = 1.0f;
            (((struct o44_float *)(t50))->v) = 1.0f;
            (((struct o2C_float *)(t50))->v) = 5.0f;
            (((struct o28_float *)(t50))->v) = (((((struct o28_float *)(t50))->v)) + 1.0f);
            *(volatile int *)((a4 + 0x2E4));
            FUN_0c0e6fe8(t41, t42, t43, u46, u47, u48);
            u96 = 93.0f;
            if ((signed char)a5 == 1) {
                u96 = 35.1999969f;
            }
            (((struct o8_float *)(t50))->v) = (((((struct o8_float *)(t50))->v)) + u96);
            u101 = 0.299999982f;
            if ((signed char)a5 == 0) {
                u101 = 0.5f;
            }
            (((struct o1C_float *)(t50))->v) = (((((struct o1C_float *)(t50))->v)) + u101);
            (((struct o20_float *)(t50))->v) = (((((struct o20_float *)(t50))->v)) + u101);
            (((struct o24_float *)(t50))->v) = (((((struct o24_float *)(t50))->v)) + u101);
            (((struct o44_float *)(t50))->v) = (((((struct o44_float *)(t50))->v)) + -0.199999988f);
            (((struct o48_float *)(t50))->v) = (((((struct o48_float *)(t50))->v)) + -0.199999988f);
            (((struct o4C_float *)(t50))->v) = (((((struct o4C_float *)(t50))->v)) + -0.199999988f);
            u109 = (((struct o2C_float *)(t50))->v);
            (((struct o2C_float *)(t50))->v) = (u109 - 1.0f);
            t124 = 0x2C;
            if (!((u109 - 1.0f) > 0.0f)) {
                *(unsigned char *)((t50 + 0x0)) = 0x0;
                (((struct o28_float *)(t50))->v) = (((((struct o28_float *)(t50))->v)) + 1.0f);
                t124 = 0x28;
            }
        }
    }
    return t124;
}
