/* Straight-line functions with calls and guards (batch gen_w): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o7298_float { char p[0x7298]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c0e6fe8(int, int, int, int);
int FUN_0c0ad36c(int a4);

int FUN_0c0ad36c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x314));
    t1 = *(int *)((a4 + 0x1C));
    t2 = *(signed char *)((((((t0 << 2) + t0) << 1) + 0xC33BFD8) + 0x8));
    (((struct o20_float *)(a4))->v) = ((*(float *)((((signed char)(((t2 << 1) + t2) << 2) + 0xC339EE8) + 0x0))) * ((((struct o7298_float *)(t1))->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o4_float *)(((signed char)(((t2 << 1) + t2) << 2) + 0xC339EE8)))->v)) * ((((struct o7298_float *)(t1))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o8_float *)(((signed char)(((t2 << 1) + t2) << 2) + 0xC339EE8)))->v)) * ((((struct o7298_float *)(t1))->v)));
    t0 = *(signed char *)((a4 + 0x314));
    *(volatile signed char *)((((((t0 << 2) + t0) << 1) + 0xC33BFD8) + 0x8));
    return (FUN_0c0e6fe8(a4, ((signed char)(((t2 << 1) + t2) << 2) + 0xC339EE8), t1, 0xC33BFD8));
}
