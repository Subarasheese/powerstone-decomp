/* AI script opcode handlers (table 0C32D7F8); consecutive rows are one module game_ai (0c051360-0c0517a8) */

int ai_clear_op_state(void);
int ai_calc_goal_angle(int);
int ai_calc_dist_to_goal_obj(int);
int ai_angle_to_pad_dir(int);
float math_rand_float(void);
struct actor_rec {
    unsigned char step;       /* 0x00 */
    char pad1[0xB];
    int script_ptr;               /* 0x0C */
    char pad10[0x1C - 0x10];
    unsigned short frames;     /* 0x1C */
    char pad1e[0x2A - 0x1E];
    unsigned short side_flag;    /* 0x2A */
};
#define ENT ((struct actor_rec *)(0xC366F40 + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)))

void ai_op49(int obj)
{
    short target_word;
    int cur_angle;
    int base_angle, mask_a, mask_b;

    target_word = *(short *)*(int *)0xC3673E8;
    *(int *)0xC3673E8 = *(int *)0xC3673E8 + 2;
    cur_angle = (short)ai_calc_dist_to_goal_obj(obj);
    switch (ENT->step) {
    case 0:
        *(unsigned short *)0xC3673EC = 0;
        ENT->side_flag = (unsigned)(math_rand_float() * 255.0f) % 2;
        ENT->frames = 1;
        if (*(signed char *)(obj + 0x71BA) == 31) {
            ENT->step = 4;
        } else {
            ENT->step = ENT->step + 1;
        }
        break;
    case 1:
        *(unsigned short *)0xC3673EC = 0;
        ENT->frames = ENT->frames - 1;
        if (ENT->frames == 0) {
            ENT->step = ENT->step + 1;
        }
        break;
    case 2:
        *(unsigned short *)0xC3673EC = 0;
        base_angle = ai_calc_goal_angle(obj);
        if (ENT->side_flag != 0) {
            mask_a = ai_angle_to_pad_dir(0x6000 + base_angle);
            mask_b = ai_angle_to_pad_dir(0x2000 + base_angle);
        } else {
            mask_a = ai_angle_to_pad_dir(0xA000 + base_angle);
            mask_b = ai_angle_to_pad_dir(0xE000 + base_angle);
        }
        if (!(target_word >= cur_angle - 10)) {
            *(unsigned *)(obj + 0x2DC) = *(unsigned *)(obj + 0x2DC) | (unsigned short)mask_b;
        }
        if (target_word > cur_angle + 10) {
            *(unsigned *)(obj + 0x2DC) = *(unsigned *)(obj + 0x2DC) | (unsigned short)mask_a;
        }
        ENT->step = ENT->step + 1;
        break;
    case 3:
        *(unsigned short *)0xC3673EC = 0;
        ENT->step = ENT->step + 1;
        break;
    case 4:
        *(unsigned short *)0xC3673EC = 0;
        base_angle = ai_calc_goal_angle(obj);
        if (ENT->side_flag != 0) {
            mask_a = ai_angle_to_pad_dir(0x6000 + base_angle);
            mask_b = ai_angle_to_pad_dir(0x2000 + base_angle);
        } else {
            mask_a = ai_angle_to_pad_dir(0xA000 + base_angle);
            mask_b = ai_angle_to_pad_dir(0xE000 + base_angle);
        }
        if (!(target_word >= cur_angle - 10)) {
            *(unsigned *)(obj + 0x2DC) = *(unsigned *)(obj + 0x2DC) | (unsigned short)mask_b;
        } else if (target_word > cur_angle + 10) {
            *(unsigned *)(obj + 0x2DC) = *(unsigned *)(obj + 0x2DC) | (unsigned short)mask_a;
        } else {
            *(unsigned *)(obj + 0x2DC) = *(unsigned *)(obj + 0x2DC) | (unsigned short)ai_angle_to_pad_dir(base_angle);
            ENT->step = ENT->step + 1;
        }
        break;
    case 5:
        *(unsigned short *)0xC3673EC = 1;
        ai_clear_op_state();
        ENT->script_ptr = *(int *)0xC3673E8;
        break;
    }
}
