/* AI script opcode handlers (table 0C32D7F8); consecutive rows are one module game_ai (0c04fb04-0c04fc9e) */

float math_rand_float(void);
int ai_clear_op_state(void);
#define ACTIVE_SLOT ((char *)0xC366F40 + (short)((short)*(unsigned char *)0xC3673EE * (short)0x254))

int ai_op72_set_random_goal(void)
{
    unsigned int rand_val;
    int result;

    rand_val = (unsigned int)(math_rand_float() * 255.0f);
    *(float *)(ACTIVE_SLOT + 96) = (float)(short)(int)(10.0f * (float)(rand_val % 100) + -500.0f);
    *(float *)(ACTIVE_SLOT + 100) = 0.0f;
    rand_val = (unsigned int)(math_rand_float() * 255.0f);
    *(float *)(ACTIVE_SLOT + 104) = (float)(short)(int)(10.0f * (float)(rand_val % 100) + -500.0f);
    *(int *)(ACTIVE_SLOT + 12) = *(int *)0xC3673E8;
    result = ai_clear_op_state();
    *(short *)0xC3673EC = 1;
    return result;
}
