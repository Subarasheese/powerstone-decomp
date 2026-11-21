/* Straight-line functions with calls and guards (batch gen_em): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o204_int { char p[0x204]; int v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o208_int { char p[0x208]; int v; };
struct o2690_uint { char p[0x2690]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int FUN_0c0eedf0(int, int);
int FUN_0c0eee64(int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c115416(int, int);
int FUN_0c1155ac(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int FUN_0c1155ac(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct o4_uint *)0xC857C80)->v) = ((((struct o0_int *)0xC857C80)->v));
    t0 = _builtin_get_fpscr();
    _builtin_set_fpscr(0x40001);
    (((struct o0_uint *)0xC857C80)->v) = a4;
    FUN_0c0eee64((a4 + 0x4), a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
    t1 = 0x0;
    t2 = (0x210 + a4);
    for (;;) {
        if ((int)t1 >= (int)((((struct o208_int *)(a4))->v))) {
            break;
        }
        (((struct o2690_uint *)(a4))->v) = t2;
        t3 = *(int *)((t2 + 0xC));
        switch (t3) {
        case 0:
            break;
        case 3:
            FUN_0c115416(a4, t2);
            break;
        case 1:
            t3 = (*(int *)((t2 + 0x14)));
            if ((unsigned int)t3 <= (unsigned int)((((struct o204_int *)(a4))->v))) {
                FUN_0c0eedf0((t2 + 0x18), 0x1);
            }
            break;
        case 2:
            t3 = 0xC1154A2;
            *(unsigned int *)((t2 + 0xC)) = 0x3;
            *(unsigned int *)((t2 + 0x20)) = t3;
            break;
        }
        t3 = 0x124;
        t1 = (t1 + 0x1);
        t2 = (t2 + t3);
    }
    (((struct o204_uint *)(a4))->v) = (((((struct o204_int *)(a4))->v)) + 0x1);
    (((struct o0_uint *)0xC857C80)->v) = ((((struct o4_int *)0xC857C80)->v));
    _builtin_set_fpscr(t0);
    return 0x204;
}
