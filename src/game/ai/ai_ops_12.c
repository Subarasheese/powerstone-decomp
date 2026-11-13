/* AI script opcode handlers (table 0C32D7F8); consecutive rows are one module game_ai (0c051360-0c0517a8) */

extern int ai_calc_dist_to_goal_obj(char *obj);
extern int ai_calc_goal_angle(char *obj);
extern int ai_angle_to_pad_dir(int a);
extern void ai_clear_op_state(void);

void ai_op48(char *obj)
{
    char *records = (char *)0xC366F40;
    unsigned char *cur_index = (unsigned char *)0xC3673EE;
    short *script_flag = (short *)0xC3673EC;
    short **script_ptr = (short **)0xC3673E8;
    short *script_cur;
    short script_val, pos_val;
    char *rec;
    int heading, cand_a, cand_b, quarter;

    script_cur = *script_ptr;
    *script_ptr = script_cur + 1;
    script_val = *script_cur;
    pos_val = ai_calc_dist_to_goal_obj(obj);
    rec = records + (short)(*cur_index * 596);
    switch ((unsigned char)rec[0]) {
    case 0:
        *script_flag = 0;
        rec = records + (short)(*cur_index * 596);
        rec[0] = rec[0] + 1;
    case 1:
        *script_flag = 0;
        heading = ai_calc_goal_angle(obj);
        rec = records + (short)(*cur_index * 596);
        *(short *)(rec + 42) = (short)(*(unsigned int *)0xC7F307C % 80) / 20;
        quarter = *(short *)(records + (short)(*cur_index * 596) + 42);
        switch (quarter) {
        case 0:
        case 2:
            cand_a = ai_angle_to_pad_dir(heading);
            cand_b = ai_angle_to_pad_dir(heading + 0x8000);
            break;
        case 1:
            cand_a = ai_angle_to_pad_dir(heading + 0x4000);
            cand_b = ai_angle_to_pad_dir(heading + 0xC000);
            break;
        case 3:
            cand_a = ai_angle_to_pad_dir(heading - 0x4000);
            cand_b = ai_angle_to_pad_dir(heading + 0x4000);
            break;
        }
        if (script_val >= pos_val - 10) {
            if (script_val > pos_val + 10) {
                *(int *)(obj + 732) = *(int *)(obj + 732) | (unsigned short)cand_b;
            } else {
                rec = records + (short)(*cur_index * 596);
                rec[0] = rec[0] + 1;
            }
        } else {
            *(int *)(obj + 732) = *(int *)(obj + 732) | (unsigned short)cand_a;
        }
        break;
    case 2:
        *script_flag = 1;
        ai_clear_op_state();
        *(int *)(records + (short)(*cur_index * 596) + 12) = (int)*script_ptr;
        break;
    }
}
