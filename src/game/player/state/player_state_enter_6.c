/* player state enter handlers (table 0xC339490) and state-specific helpers; same module as the following rows up to 0c0a18f8 (0c0a02d4-0c0a0370) */

struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
int hit_find_interactable_contact(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);

int FUN_0c0a02d4(int a4, float f4)
{
    int stk[2];
    register int t0;
    register int t16;
    register int t1;

    *(float *)(((int)stk + 0)) = f4;
    t0 = hit_find_interactable_contact(a4, 0x2);
    *(unsigned char *)(((int)stk + 4)) = t0;
    t16 = 0x1;
    if ((signed char)t0 != 0) {
        t1 = *(signed char *)(((int)stk + 4));
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)((*(int *)((((0x294 + a4) + ((t1 - 1) << 2)) + 0x0)))))->v)) - (((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * (*(float *)(((int)stk + 0))))));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)((*(int *)((((0x294 + a4) + ((t1 - 1) << 2)) + 0x0)))))->v)) - (((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * (*(float *)(((int)stk + 0))))));
        *(unsigned int *)((a4 + 0x30)) = (*(int *)(((*(int *)(((((t1 - 1) << 2) + (0x294 + a4)) + 0x0))) + 0x30)));
        t16 = 0x0;
    }
    return t16;
}
