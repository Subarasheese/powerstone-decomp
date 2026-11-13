/* AI script opcode handlers (table 0C32D7F8); consecutive rows are one module game_ai (0c050edc-0c050fe0) */

struct o0_int { int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int ai_clear_op_state(void);

int ai_op80_wait_until_actionable(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x71BA));
    if ((t0 != 0) && ((t0 != 2) && (t0 != 31))) {
        (((struct o4_ushort *)0xC3673E8)->v) = 0x0;
        t0 = 0x0;
    } else {
        *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
        t0 = ai_clear_op_state();
        (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    }
    return t0;
}

int ai_op46_wait_until_free(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x71BA));
    if ((t0 != 0) && ((t0 != 2) && ((t0 != 31) && (t0 != 5)))) {
        (((struct o4_ushort *)0xC3673E8)->v) = 0x0;
        t0 = 0x0;
    } else {
        *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
        t0 = ai_clear_op_state();
        (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    }
    return t0;
}

int ai_op82(int a4)
{
    register int t5;

    if ((int)(unsigned char)(*(signed char *)((a4 + 0x7206))) > (int)(*(signed char *)((a4 + 0x7234)))) {
        *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
        t5 = ai_clear_op_state();
        (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    } else {
        (((struct o4_ushort *)0xC3673E8)->v) = 0x0;
        t5 = 0x7234;
    }
    return t5;
}
