/* AI script opcode handlers (table 0C32D7F8); consecutive rows are one module game_ai (0c050fe0-0c0510f0) */

struct o0_int { int v; };
struct o24_float { char p[0x24]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6C_int { char p[0x6C]; int v; };
int ai_clear_op_state(void);

int ai_op81_wait_while_target_busy(int a4)
{
    register int t1;

    t1 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BA));
    if ((t1 != 27) && ((t1 != 24) && ((t1 != 15) && (t1 != 16)))) {
        *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
        t1 = ai_clear_op_state();
        (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    } else {
        (((struct o4_ushort *)0xC3673E8)->v) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

int ai_op43(int a4)
{
    register int t0;
    float u4;
    register int t7;

    t0 = *(signed char *)0xC3673EE;
    if (((int)(short)(int)(((((struct o24_float *)(a4))->v)) - ((((struct o24_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v))))->v))) <= 0) && (u4 = (((struct o3C_float *)(a4))->v), !(1.0f > u4))) {
        (((struct o4_ushort *)0xC3673E8)->v) = 0x0;
        t7 = 0x3C;
    } else {
        *(unsigned int *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
        ai_clear_op_state();
        (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
        t7 = 0x1;
    }
    return t7;
}

int ai_op87(int a4)
{
    register int t5;

    if ((*(signed char *)((0x71BC + (*(int *)((a4 + 0x1C)))))) != 2) {
        *(unsigned int *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F4C)) = ((((struct o0_int *)0xC3673E8)->v));
        t5 = ai_clear_op_state();
        (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    } else {
        (((struct o4_ushort *)0xC3673E8)->v) = 0x0;
        t5 = 0x0;
    }
    return t5;
}
