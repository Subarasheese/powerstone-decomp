/* Straight-line functions with calls and guards (batch gen_b): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
int FUN_0c027fa4(int, int, int, int, int, int);
int FUN_0c01d962(int a4);

int FUN_0c01d962(int a4)
{
    int stk[16];
    register int t0;
    register int t12;

    t0 = *(int *)((a4 + 0x2C));
    *(float *)(((int)stk + 12)) = (((((struct o1C_float *)(a4))->v)) + (float)(*(short *)((t0 + 0x6))));
    *(float *)(((int)stk + 16)) = (((((struct o20_float *)(a4))->v)) + (float)(*(short *)((t0 + 0x8))));
    *(float *)(((int)stk + 20)) = ((((struct o24_float *)(a4))->v));
    *(float *)(((int)stk + 24)) = ((((struct o14_float *)(a4))->v));
    *(float *)(((int)stk + 28)) = ((((struct o18_float *)(a4))->v));
    *(unsigned int *)(((int)stk + 48)) = (*(int *)((a4 + 0x28)));
    *(float *)(((int)stk + 52)) = ((((struct o10_float *)(a4))->v));
    *(unsigned int *)(((int)stk + 60)) = (unsigned short)(*(short *)((t0 + 0x4)));
    *(int *)((int)stk + 4) = 0x0;
    t12 = (*(signed char *)((a4 + 0xC)));
    *(int *)((int)stk + 0) = t12;
    return (FUN_0c027fa4((((int)stk + 0) + 0x8), 0xC17FDB0, (*(short *)((t0 + 0x0))), (*(short *)((t0 + 0x2))), t12, 0x0));
}
