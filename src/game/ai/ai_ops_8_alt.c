/* AI script opcode handlers (table 0C32D7F8); consecutive rows are one module game_ai (0c04fc9e-0c04fed8) */

typedef struct { float x, y, z; } vec3f;
extern signed char g_stage_id;
extern vec3f *g_ai_stage_pos_tbl[];
extern unsigned char g_ai_cur_slot;
extern char g_ai_slots[];
extern int g_ai_pc;
extern short g_ai_run_flag;
extern float math_rand_float(void);
extern void ai_clear_op_state(void);

void ai_op85_set_goal_stage_table(void)
{
    vec3f *row;
    unsigned int pick;

    row = g_ai_stage_pos_tbl[g_stage_id];
    pick = (unsigned int)(math_rand_float() * 255.0f) % 4;
    *(float *)(g_ai_slots + (short)(g_ai_cur_slot * 596) + 96) = row[pick].x;
    *(float *)(g_ai_slots + (short)(g_ai_cur_slot * 596) + 100) = row[pick].y;
    *(float *)(g_ai_slots + (short)(g_ai_cur_slot * 596) + 104) = row[pick].z;
    *(int *)(g_ai_slots + (short)(g_ai_cur_slot * 596) + 12) = g_ai_pc;
    ai_clear_op_state();
    g_ai_run_flag = 1;
}
