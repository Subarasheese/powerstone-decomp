/* Object update: copy a position from the linked object, subtract a rotating offset, blend the position toward it. */
struct v3 { int x, y, z; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int thunk_FUN_0c062242(int, int);
int FUN_0c0c3544(int a4);
int FUN_0c0c3544(int a4)
{
    int stk[4];
    register int t1;
    register float u15;

    t1 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0), (((int)stk + 0) + 0x4));
    *(struct v3 *)(a4 + 0x2C) = *(struct v3 *)((*(int *)(a4 + 0x1C)) + 0x2C);
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - (((FUN_0c0dfa50((*(int *)((a4 + 0x30))))) * 50.0f)));
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - (((FUN_0c0df4d0((*(int *)((a4 + 0x30))))) * 50.0f)));
    u15 = 50.0f;
    u15 = u15 + 80.0f * (FUN_0c0dfa50(((((struct oEE_short *)(a4))->v))));
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + u15);
    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x400);
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o4_float *)(((int)stk + 0)))->v)) - ((((struct o20_float *)(a4))->v))) / 20.0f));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((((struct o8_float *)(((int)stk + 0)))->v)) - ((((struct o24_float *)(a4))->v))) / 20.0f));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct oC_float *)(((int)stk + 0)))->v)) - ((((struct o28_float *)(a4))->v))) / 20.0f));
    return 0x28;
}

