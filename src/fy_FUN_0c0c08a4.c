/* Straight-line functions with calls and guards (batch gen_b): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c059132(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0a1d88(int, int);
int FUN_0c0c07bc(int, int, int, int, float);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
struct V12 { int x, y, z; };
int FUN_0c0c08a4(int a4, int a5, int a6);

int FUN_0c0c08a4(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t46;
    register float u8;
    register float u15;
    register int t24;
    register int t26;
    register int t34;
    register float u41;
    int t22;

    *(unsigned char *)(((int)stk + 4)) = a5;
    *(unsigned char *)(((int)stk + 8)) = a6;
    t0 = FUN_0c059132(0x1, 0x1, 0x2);
    t46 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned short *)((t0 + 0x6)) = 0x5;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C0A64;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(struct V12 *)(t0 + 32) = *(struct V12 *)(a4 + 32);
        *(int *)((int)stk + 0) = (t0 + 0x20);
        u8 = ((((struct o20_float *)(t0))->v));
        u8 = u8 + (FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC33C71C)->v));
        (((struct o20_float *)(t0))->v) = u8;
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + ((((struct o4_float *)0xC33C71C)->v)));
        *(int *)((int)stk + 0) = (t0 + 0x28);
        u15 = ((((struct o28_float *)(t0))->v));
        u15 = u15 + (FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o8_float *)0xC33C71C)->v));
        (((struct o28_float *)(t0))->v) = u15;
        *(struct V12 *)(t0 + 44) = *(struct V12 *)(a4 + 44);
        *(struct V12 *)(t0 + 80) = *(struct V12 *)0xC33C704;
        FUN_0c0c07bc((t0 + 0x38), (a4 + 0x20), ((*(int *)((a4 + 0x1C))) + 0x20), (*(int *)((a4 + 0x30))), 30.0f);
        (((struct o101_uchar *)(t0))->v) = 0x3;
        (((struct o102_uchar *)(t0))->v) = 0x0;
        t24 = 0x71;
        if (((*(signed char *)(((int)stk + 8))) == 1) && (t22 = *(signed char *)(((int)stk + 4)), t22 == 2)) {
            t24 = 0x79;
        }
        FUN_0c0a1d88(t0, t24);
        t26 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t26 << 1) + t26) << 2) << 1) + 0xC6002D0), 0x3);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xB;
        *(unsigned int *)((((((struct o2E0_int *)(t0))->v)) + 0x18)) = 0x4000;
        t34 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E4_int *)(t0))->v)), ((signed char)((((t34 << 1) + t34) << 2) << 1) + 0xC6002D0), 0x4);
        *(unsigned char *)((((((struct o2E4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E4_int *)(t0))->v)) + 0x2)) = 0x21B;
        u41 = *(float *)0xC0C0AFC;
        (((struct o44_float *)(((((struct o2E4_int *)(t0))->v))))->v) = u41;
        (((struct o48_float *)(((((struct o2E4_int *)(t0))->v))))->v) = u41;
        (((struct o4C_float *)(((((struct o2E4_int *)(t0))->v))))->v) = u41;
        *(unsigned int *)((((((struct o2E4_int *)(t0))->v)) + 0x18)) = 0x4000;
        t46 = 0x2E4;
    }
    return t46;
}
