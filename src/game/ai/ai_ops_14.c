/* AI script opcode handlers (table 0C32D7F8); consecutive rows are one module game_ai (0c051aa0-0c051ce4) */

int ai_clear_op_state(void);
int ai_calc_goal_angle(int);
int ai_angle_to_pad_dir(int);
float math_rand_float(void);
struct entry {
    unsigned char state;       /* 0x00 */
    char pad_01[0xB];
    int word_0c;               /* 0x0C */
    char pad_10[0x1C - 0x10];
    unsigned short count;     /* 0x1C */
    char pad_1e[0x2A - 0x1E];
    unsigned short flip_flag;    /* 0x2A */
};
#define ENTRY ((struct entry *)(0xC366F40 + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)))

void ai_op56(int player)
{
    short opcode;
    short mask_lo;
    int tmp, mask_hi;

    opcode = *(short *)*(int *)0xC3673E8;
    *(int *)0xC3673E8 = *(int *)0xC3673E8 + 2;
    switch (ENTRY->state) {
    case 0:
        *(unsigned short *)0xC3673EC = 0;
        ENTRY->flip_flag = (unsigned)(math_rand_float() * 255.0f) % 2;
        ENTRY->count = 1;
        if (*(signed char *)(player + 0x71BA) == 31) {
            ENTRY->state = 4;
        } else {
            ENTRY->state = ENTRY->state + 1;
        }
        break;
    case 1:
        *(unsigned short *)0xC3673EC = 0;
        ENTRY->count = ENTRY->count - 1;
        if (ENTRY->count == 0) {
            ENTRY->state = ENTRY->state + 1;
        }
        break;
    case 2:
        *(unsigned short *)0xC3673EC = 0;
        tmp = ai_calc_goal_angle(player);
        mask_lo = ai_angle_to_pad_dir(0x4000 + tmp);
        mask_hi = ai_angle_to_pad_dir(0xC000 + tmp);
        if (ENTRY->flip_flag != 0) {
            *(unsigned *)(player + 0x2DC) = *(unsigned *)(player + 0x2DC) | (unsigned short)mask_lo;
        } else {
            *(unsigned *)(player + 0x2DC) = *(unsigned *)(player + 0x2DC) | (unsigned short)mask_hi;
        }
        ENTRY->state = ENTRY->state + 1;
        break;
    case 3:
        *(unsigned short *)0xC3673EC = 0;
        ENTRY->count = opcode;
        ENTRY->state = ENTRY->state + 1;
        break;
    case 4:
        *(unsigned short *)0xC3673EC = 0;
        tmp = ai_calc_goal_angle(player);
        mask_lo = ai_angle_to_pad_dir(0x4000 + tmp);
        mask_hi = ai_angle_to_pad_dir(0xC000 + tmp);
        ENTRY->count = ENTRY->count - 1;
        if (ENTRY->count == 0) {
            ENTRY->state = ENTRY->state + 1;
        }
        if (ENTRY->flip_flag != 0) {
            *(unsigned *)(player + 0x2DC) = *(unsigned *)(player + 0x2DC) | (unsigned short)mask_lo;
        } else {
            *(unsigned *)(player + 0x2DC) = *(unsigned *)(player + 0x2DC) | (unsigned short)mask_hi;
        }
        break;
    case 5:
        *(unsigned short *)0xC3673EC = 1;
        ai_clear_op_state();
        ENTRY->word_0c = *(int *)0xC3673E8;
        break;
    }
}
