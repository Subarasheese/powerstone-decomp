/* Object update: advance a 16-bit phase, blend three floats toward targets */
struct o10_float { char p[0x10]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int thunk_FUN_0c062242(int, int);
int FUN_0c0c378c(int a4);

int FUN_0c0c378c(int a4)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t6;
    register float u9;
    register float u13;

    t0 = *(int *)((a4 + 0x1C));
    *(unsigned int *)(((int)stk + 4)) = t0;
    t1 = *(signed char *)((t0 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0), (((int)stk + 0) + 0x8));
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + 50.0f);
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x400);
    t6 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t6 & 0xFFFF);
    u9 = (*(float *)(((int)stk + 8)));
    u9 = u9 + 120.0f * (FUN_0c0dfa50((t6 & 0xFFFF)));
    *(float *)(((int)stk + 8)) = u9;
    u13 = (*(float *)(((int)stk + 16)));
    u13 = u13 + 120.0f * (FUN_0c0df4d0((*(int *)((a4 + 0x30)))));
    *(float *)(((int)stk + 16)) = u13;
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o8_float *)(((int)stk + 0)))->v)) - ((((struct o20_float *)(a4))->v))) / 20.0f));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((((struct oC_float *)(((int)stk + 0)))->v)) - ((((struct o24_float *)(a4))->v))) / 20.0f));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o10_float *)(((int)stk + 0)))->v)) - ((((struct o28_float *)(a4))->v))) / 20.0f));
    return 0x28;
}
