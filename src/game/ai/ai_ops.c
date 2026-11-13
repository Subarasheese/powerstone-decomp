/* AI script opcode handlers (table 0C32D7F8); consecutive rows are one module game_ai (0c04e94c-0c04eade) */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int ai_clear_op_state(void);
int dbg_print_at(int, float, float);
int sprintf(int, int, ...);
struct o26_ushort { char p[0x26]; unsigned short v; };

int ai_op52_print(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = (((struct o0_int *)0xC3673E8)->v);
    (((struct o0_uint *)0xC3673E8)->v) = (t0 + 0x2);
    sprintf(0xC7F36B8, 0xC14AB80, (int)*(short *)((((t0 + 0x2) - 2) + 0x0)));
    *(volatile float *)0xC04EA9C;
    u0 = ((((struct o8_float *)0xC04EAA0)->v));
    u0 = u0 + ((((struct oC_float *)0xC04EAA0)->v)) * (float)(unsigned char)(*(signed char *)0xC3673EE);
    dbg_print_at(0xC7F36B8, u0, ((((struct o0_float *)0xC04EAA0)->v)));
    *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t0;
}

int ai_op77_set_var18(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC3673EE;
    t1 = (((struct o0_int *)0xC3673E8)->v);
    (((struct o0_uint *)0xC3673E8)->v) = (t1 + 0x2);
    *(unsigned short *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x18)) = (*(short *)((((t1 + 0x2) - 2) + 0x0)));
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t0;
}

int ai_op78_get_var18(void)
{
    register int t0;

    t0 = *(signed char *)0xC3673EE;
    (((struct o26_ushort *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v) = (*(short *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x18)));
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t0;
}

int ai_op79_clear_var18(void)
{
    register int t3;

    *(unsigned short *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0x18)) = 0x0;
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t3 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t3;
}
