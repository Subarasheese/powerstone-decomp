/* AI script opcode handlers (table 0C32D7F8); consecutive rows are one module game_ai (0c04eade-0c04ec40) */

struct o71D4_short { char p[0x71D4]; short v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int ai_clear_op_state(void);
struct o26_ushort { char p[0x26]; unsigned short v; };

int ai_op36_clear_flag24(void)
{
    *(unsigned char *)(((0xC366F64 + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = 0x0;
    return 0x0;
}

int ai_op35_set_flag25(void)
{
    *(unsigned char *)(((0xC366F65 + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = 0x1;
    return 0x1;
}

int ai_op37_clear_flag25(void)
{
    *(unsigned char *)(((0xC366F65 + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = 0x0;
    return 0x0;
}

int ai_op75_set_timer(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC3673EE;
    t1 = (((struct o0_int *)0xC3673E8)->v);
    (((struct o0_uint *)0xC3673E8)->v) = (t1 + 0x2);
    *(unsigned short *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x14)) = (*(short *)((((t1 + 0x2) - 2) + 0x0)));
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t0;
}

int ai_op12_get_own_form(int a4)
{
    *(unsigned short *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F66)) = (*(signed char *)((a4 + 0x71F3)));
    return 0xC366F66;
}

int ai_op13_get_target_form(int a4)
{
    register int t2;

    t2 = *(signed char *)((0x71F3 + (*(int *)((a4 + 0x1C)))));
    *(unsigned short *)(((0xC366F66 + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = t2;
    return t2;
}

int ai_op14_get_own_hp(int a4)
{
    register int t1;

    t1 = (((struct o71D4_short *)(a4))->v);
    *(unsigned short *)(((0xC366F66 + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = t1;
    return t1;
}

int ai_op15(int a4)
{
    (((struct o26_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = (*(signed char *)((a4 + 0x7230)));
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return 0x1;
}
