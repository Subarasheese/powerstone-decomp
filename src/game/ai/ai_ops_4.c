/* AI script opcode handlers (table 0C32D7F8); consecutive rows are one module game_ai (0c04eddc-0c04ef6c) */

struct o0_int { int v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int ai_clear_op_state(void);
float math_signed_sqrt(float);
struct o24_float { char p[0x24]; float v; };
struct o26_ushort { char p[0x26]; unsigned short v; };

int ai_op19_get_dist_to_target(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = *(int *)((a4 + 0x1C));
    u0 = (((struct o20_float *)(t0))->v);
    u1 = (((struct o20_float *)(a4))->v);
    u2 = (((struct o28_float *)(a4))->v);
    u3 = (((struct o28_float *)(t0))->v);
    u4 = ((u2 - u3) * (u2 - u3));
    u4 = u4 + ((u1 - u0)) * ((u1 - u0));
    *(unsigned short *)(((0xC366F66 + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = (int)(math_signed_sqrt(u4));
    *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t0;
}

int ai_op20_get_target_height_diff(int a4)
{
    (((struct o26_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = (int)(((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o24_float *)(a4))->v)));
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return 0x1;
}

int ai_op21_get_own_height_diff(int a4)
{
    (((struct o26_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = (int)(((((struct o24_float *)(a4))->v)) - ((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v)));
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return 0x1;
}
