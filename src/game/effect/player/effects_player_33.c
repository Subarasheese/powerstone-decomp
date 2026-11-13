/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0bfe20-0c0bfecc) */

struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
int thunk_math_mat_get_translate(int, int);

int FUN_0c0bfe20(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x1C));
    t1 = *(signed char *)((t0 + 0x3));
    thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160), a4 + 0x20);
    (((struct o20_float *)(a4))->v) = ((((struct o20_float *)(t0))->v));
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(t0))->v));
    return 0x28;
}

int FUN_0c0bfe76(int a4)
{
    register int t1;

    t1 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
    return thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0), a4 + 0x20);
}
