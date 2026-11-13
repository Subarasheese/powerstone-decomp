/* Object update (sibling of FUN_0c0c378c): advance phase, blend three floats */
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int thunk_FUN_0c062242(int, int);
float FUN_0c0c3998(int a4);

float FUN_0c0c3998(int a4)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t7;
    register float u11;
    register float u14;
    register float u16;
    register float u17;

    t0 = *(int *)((a4 + 0x1C));
    *(unsigned int *)(((int)stk + 4)) = t0;
    t1 = *(signed char *)((t0 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840), (((int)stk + 0) + 0x8));
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + ((((struct o0_float *)0xC0C3AE0)->v)));
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x800);
    t7 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t7 & 0xFFFF);
    u11 = (*(float *)(((int)stk + 8)));
    u11 = u11 + ((((struct oC_float *)0xC0C3AE0)->v)) * (FUN_0c0dfa50((t7 & 0xFFFF)));
    *(float *)(((int)stk + 8)) = u11;
    u14 = (((struct oC_float *)0xC0C3AE0)->v);
    u16 = (*(float *)(((int)stk + 16)));
    u16 = u16 + u14 * (FUN_0c0df4d0((*(int *)((a4 + 0x30)))));
    *(float *)(((int)stk + 16)) = u16;
    u17 = (((struct o14_float *)0xC0C3AE0)->v);
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o8_float *)(((int)stk + 0)))->v)) - ((((struct o20_float *)(a4))->v))) / u17));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((((struct oC_float *)(((int)stk + 0)))->v)) - ((((struct o24_float *)(a4))->v))) / u17));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o10_float *)(((int)stk + 0)))->v)) - ((((struct o28_float *)(a4))->v))) / u17));
    return u14;
}
