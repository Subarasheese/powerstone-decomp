/* AI script opcode handlers (table 0C32D7F8); consecutive rows are one module game_ai (0c0517a8-0c051aa0) */

extern int g_frame_counter;
short ai_angle_to_pad_dir(int obj);
int ai_calc_dist_to_goal_obj(char *obj);
int ai_calc_goal_angle(char *obj);
void ai_clear_op_state(short *p);
#define REC ((char *)0xC366F40 + (short)(*(unsigned char *)0xC3673EE * 596))

void ai_op50(char *obj)
{
    short *script_ptr;
    int script_val;
    int cur_val;
    int bits_a;
    int bits_b;
    int target_ang;
    short rnd;
    script_ptr = *(short **)0xC3673E8;
    *(short **)0xC3673E8 = script_ptr + 1;
    script_val = *script_ptr;
    cur_val = ai_calc_dist_to_goal_obj(obj);
    switch (*(unsigned char *)(REC)) {
    case 0:
        *(short *)0xC3673EC = 0;
        *(short *)(REC + 28) = 1;
        if (obj[0x71BA] == 31) {
            REC[0] = 4;
            return;
        }
        goto advance;
    case 1:
        *(short *)0xC3673EC = 0;
        *(short *)(REC + 28) = *(short *)(REC + 28) - 1;
        if ((unsigned short)*(short *)(REC + 28) != 0)
            return;
        goto advance;
    case 2:
    case 4: {
        unsigned char state = *(unsigned char *)(REC);
        *(short *)0xC3673EC = 0;
        target_ang = ai_calc_goal_angle(obj);
        rnd = (short)((unsigned int)g_frame_counter % 80u);
        *(short *)(REC + 42) = rnd / 20;
        switch (*(short *)(REC + 42)) {
        case 0:
            bits_a = ai_angle_to_pad_dir(target_ang);
            bits_b = 0x8000;
            break;
        case 1:
            bits_a = ai_angle_to_pad_dir(target_ang + 0x2000);
            bits_b = 0xA000;
            break;
        case 2:
            bits_a = ai_angle_to_pad_dir(target_ang);
            bits_b = 0x8000;
            break;
        case 3:
            bits_a = ai_angle_to_pad_dir(target_ang + -0x2000);
            bits_b = 0x6000;
            break;
        default:
            goto compare;
        }
        bits_b = ai_angle_to_pad_dir(bits_b + target_ang);
    compare:
        if (state == 2) {
            if ((short)script_val < (short)cur_val - 10)
                *(int *)(obj + 732) = *(int *)(obj + 732) | (unsigned short)bits_a;
            if ((short)script_val > (short)cur_val + 10)
                *(int *)(obj + 732) = *(int *)(obj + 732) | (unsigned short)bits_b;
            goto advance;
        }
        if ((short)script_val < (short)cur_val - 10) {
            *(int *)(obj + 732) = *(int *)(obj + 732) | (unsigned short)bits_a;
            return;
        }
        if ((short)script_val > (short)cur_val + 10) {
            *(int *)(obj + 732) = *(int *)(obj + 732) | (unsigned short)bits_b;
            return;
        }
        bits_b = ai_angle_to_pad_dir(target_ang);
        *(int *)(obj + 732) = *(int *)(obj + 732) | (unsigned short)bits_b;
        goto advance;
    }
    case 3:
        *(short *)0xC3673EC = 0;
        goto advance;
    case 5:
        *(short *)0xC3673EC = 1;
        ai_clear_op_state((short *)0xC3673EC);
        *(int *)(REC + 12) = *(int *)0xC3673E8;
        return;
    default:
        return;
    }
advance:
    REC[0] = REC[0] + 1;
}
