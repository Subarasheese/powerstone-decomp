/* AI script opcode handlers (table 0C32D7F8); consecutive rows are one module game_ai (0c04ec40-0c04eddc) */

struct o0_int { int v; };
struct o20_float { char p[0x20]; float v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o71C8_int { char p[0x71C8]; int v; };
int ai_clear_op_state(void);
float math_signed_sqrt(float);
struct o71D4_short { char p[0x71D4]; short v; };

float ai_op16_get_dist_from_center(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(signed char *)0xC3673EE;
    u0 = (((struct o20_float *)(a4))->v);
    u1 = (((struct o28_float *)(a4))->v);
    u2 = (u1 * u1);
    u2 = u2 + u0 * u0;
    u0 = math_signed_sqrt(u2);
    *(unsigned short *)(((0xC366F66 + (short)((short)(unsigned char)t0 * (short)0x254)) + 0x0)) = (int)u0;
    return u0;
}

int ai_op84_get_held_item_kind(int a4)
{
    register int t0;

    t0 = *(signed char *)0xC3673EE;
    if (((((struct o71C8_int *)(a4))->v)) != 0) {
        (((struct o26_ushort *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v) = (*(signed char *)((((((struct o71C8_int *)(a4))->v)) + 0x30C)));
    } else {
        (((struct o26_ushort *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v) = 0x0;
    }
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t0;
}

int ai_op58(int a4)
{
    (((struct o26_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = (*(signed char *)((a4 + 0x7236)));
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return 0x1;
}

int ai_op74_get_own_move(int a4)
{
    (((struct o26_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = (*(signed char *)((a4 + 0x71BA)));
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return 0x1;
}

int ai_op17_get_target_hp(int a4)
{
    register int t2;

    t2 = (((struct o71D4_short *)((*(int *)((a4 + 0x1C)))))->v);
    *(unsigned short *)(((0xC366F66 + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = t2;
    return t2;
}
