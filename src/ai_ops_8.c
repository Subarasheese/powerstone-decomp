/* AI script opcode handlers (table 0C32D7F8); consecutive rows are one module game_ai (0c04fc9e-0c04fed8) */

struct o0_int { int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
int ai_clear_op_state(void);

int ai_op73_set_goal_by_side(int a4)
{
    register int t43;

    if (400.0f > ((((struct o24_float *)(a4))->v))) {
        if (((((struct o20_float *)(a4))->v)) > ((-((((struct o28_float *)(a4))->v))) + -100.0f)) {
            (((struct o60_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = ((((struct o20_float *)(a4))->v));
            (((struct o64_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = 0.0f;
            (((struct o68_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = 300.0f;
        } else {
            (((struct o60_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = -550.0f;
            (((struct o64_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = 0.0f;
            (((struct o68_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = ((((struct o28_float *)(a4))->v));
        }
    } else {
        if (((((struct o20_float *)(a4))->v)) > ((-((((struct o28_float *)(a4))->v))) + -100.0f)) {
            (((struct o60_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = ((((struct o20_float *)(a4))->v));
            (((struct o64_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = 0.0f;
            (((struct o68_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = -100.0f;
        } else {
            (((struct o60_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = (*(float *)0xC04FEA8);
            (((struct o64_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = 0.0f;
            (((struct o68_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = ((((struct o28_float *)(a4))->v));
        }
    }
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t43 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t43;
}
