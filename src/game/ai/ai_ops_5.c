/* AI script opcode handlers (table 0C32D7F8); consecutive rows are one module game_ai (0c04ef6c-0c04f044) */

struct o0_int { int v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int ai_clear_op_state(void);

int ai_op22(void)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)0xC7F3071;
    t2 = (unsigned char)t0;
    if ((unsigned char)t0 == 0) {
        t2 = 0x1;
    }
    if ((unsigned char)t0 == 3) {
        t2 = 0x1;
    }
    (((struct o26_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = (*(signed char *)(((unsigned char)((unsigned short)(t2 + 0xFF) * (unsigned short)0x78) + 0xC7F2E46)));
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t0;
}

int ai_op23(void)
{
    register int t1;

    t1 = *(signed char *)0xC7F304B;
    *(unsigned short *)(((0xC366F66 + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = t1;
    return t1;
}

int ai_op24(void)
{
    *(unsigned short *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F66)) = (*(signed char *)0xC7F304D);
    return 0xC366F66;
}
