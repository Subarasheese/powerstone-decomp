/* motion length, key stream readers, angle deltas (part 2 of 2 of the same module) (0c09b0f8-0c09b7a4) */

/* named globals (symbols.txt) */
extern char g_model_scale_tab[];
#define SLOT ((signed char)player[0x71F1])
#define SEG_REC(b) (player + 768 + (short)(SLOT * 3520) + (short)((signed char)(b) * 176))
#define WORD_AT(p) (*(int *)(p))
#define FLOAT_AT(p) (*(float *)(p))
void mot_read_vec3_scaled(char *dst, char *src);
void mot_read_vec3_float(char *dst, char *src);
void math_angle3_delta_scaled(char *dst, char *a, char *b, float f);
void math_vec3_sub_scaled(char *dst, char *a, char *b, float s);
void math_vec3i_add(char *dst, char *a, char *b);
void math_vec3_add(char *dst, char *a, char *b);
void math_vec3_sub(char *dst, char *a, char *b);

int math_angle_delta16(int a4, int a5);

void pl_blend_motion_pose(char *player)
{
    int buf_words[117];
    char *buf_bytes = (char *)buf_words;
    float weight;
    float blend;
    signed char *seg_order;
    char *rec;
    int idx;
    if (*(char *)0xC494D2B != 0) {
        WORD_AT(buf_bytes) = WORD_AT(player + 0x718C) + 6;
        mot_read_vec3_scaled(player + 0x7134, buf_bytes);
        mot_read_vec3_float(player + 0x711C, buf_bytes);
        FLOAT_AT(player + 0x7120) = FLOAT_AT(player + 0x7120) * (FLOAT_AT(((int)g_model_scale_tab) + player[4] * 8 + SLOT * 4) * FLOAT_AT(player + 84));
        seg_order = (signed char *)0xC150D50;
        for (idx = 0; idx < 19; idx++) {
            mot_read_vec3_scaled(SEG_REC(*seg_order) + 84, buf_bytes);
            seg_order++;
        }
        return;
    }
    weight = (float)(unsigned char)player[0x71A7];
    if (!(weight > 0.0f))
        weight = 1.0f;
    blend = (float)((unsigned char)player[0x71A7] - (unsigned char)player[0x71A6] + 1) / weight;
    if ((unsigned char)player[0x71A7] == 1)
        blend = 1.0f;
    WORD_AT(buf_bytes) = WORD_AT(player + 0x718C) + 6;
    WORD_AT(buf_bytes + 4) = WORD_AT(player + 0x7194) + 6;
    mot_read_vec3_scaled(buf_bytes + 432, buf_bytes);
    mot_read_vec3_scaled(buf_bytes + 420, buf_bytes + 4);
    math_angle3_delta_scaled(buf_bytes + 408, buf_bytes + 432, buf_bytes + 420, blend);
    math_vec3i_add(buf_bytes + 408, buf_bytes + 408, buf_bytes + 420);
    mot_read_vec3_float(buf_bytes + 456, buf_bytes);
    mot_read_vec3_float(buf_bytes + 444, buf_bytes + 4);
    FLOAT_AT(buf_bytes + 460) = FLOAT_AT(buf_bytes + 460) * FLOAT_AT(0xC150CD8 + player[4] * 8 + SLOT * 4);
    FLOAT_AT(buf_bytes + 448) = FLOAT_AT(buf_bytes + 448) * FLOAT_AT(0xC150CD8 + player[4] * 8 + SLOT * 4);
    math_vec3_sub_scaled(buf_bytes + 396, buf_bytes + 444, buf_bytes + 456, blend);
    math_vec3_add(buf_bytes + 396, buf_bytes + 396, buf_bytes + 444);
    for (idx = 0; idx < 19; idx++) {
        mot_read_vec3_scaled(buf_bytes + 432, buf_bytes);
        mot_read_vec3_scaled(buf_bytes + 420, buf_bytes + 4);
        math_angle3_delta_scaled(buf_bytes + 12 + idx * 12, buf_bytes + 432, buf_bytes + 420, blend);
        math_vec3i_add(buf_bytes + 12 + idx * 12, buf_bytes + 12 + idx * 12, buf_bytes + 420);
    }
    if (player[0x71A8] < player[0x71A9])
        player[0x71A8] = player[0x71A8] + 1;
    weight = (float)(unsigned char)player[0x71A9];
    if (weight == 0.0f)
        weight = 1.0f;
    blend = (float)player[0x71A8] / weight;
    WORD_AT(player + 0x7134) = WORD_AT(player + 0x7134) & 0xFFFF;
    WORD_AT(player + 0x7138) = WORD_AT(player + 0x7138) & 0xFFFF;
    WORD_AT(player + 0x713C) = WORD_AT(player + 0x713C) & 0xFFFF;
    math_angle3_delta_scaled(buf_bytes + 408, buf_bytes + 408, player + 0x7134, blend);
    math_vec3i_add(player + 0x7134, player + 0x7134, buf_bytes + 408);
    math_vec3_sub(buf_bytes + 396, buf_bytes + 396, player + 0x711C);
    FLOAT_AT(buf_bytes + 396) = FLOAT_AT(buf_bytes + 396) * blend;
    FLOAT_AT(buf_bytes + 400) = FLOAT_AT(buf_bytes + 400) * blend;
    FLOAT_AT(buf_bytes + 404) = FLOAT_AT(buf_bytes + 404) * blend;
    math_vec3_add(player + 0x711C, player + 0x711C, buf_bytes + 396);
    seg_order = (signed char *)0xC150D50;
    for (idx = 0; idx < 19; idx++) {
        rec = SEG_REC(*seg_order);
        WORD_AT(rec + 84) = WORD_AT(rec + 84) & 0xFFFF;
        WORD_AT(rec + 88) = WORD_AT(rec + 88) & 0xFFFF;
        WORD_AT(rec + 92) = WORD_AT(rec + 92) & 0xFFFF;
        math_angle3_delta_scaled(buf_bytes + 12 + idx * 12, buf_bytes + 12 + idx * 12, SEG_REC(*seg_order) + 84, blend);
        math_vec3i_add(SEG_REC(*seg_order) + 84, SEG_REC(*seg_order) + 84, buf_bytes + 12 + idx * 12);
        rec = SEG_REC(*seg_order);
        WORD_AT(rec + 84) = WORD_AT(rec + 84) & 0xFFFF;
        WORD_AT(rec + 88) = WORD_AT(rec + 88) & 0xFFFF;
        WORD_AT(rec + 92) = WORD_AT(rec + 92) & 0xFFFF;
        seg_order++;
    }
}

int math_angle_delta16(int a4, int a5)
{
    register int t0;
    register int t1;

    if ((int)((unsigned short)a4 - (unsigned short)a5) >= 0) {
        t0 = ((unsigned short)a4 - (unsigned short)a5);
        if ((0x8000 & ((unsigned short)a4 - (unsigned short)a5)) != 0) {
            t0 = (((unsigned short)a4 - (unsigned short)a5) - 0x10000);
        }
        t1 = t0;
    } else {
        t0 = ((unsigned short)a4 - (unsigned short)a5);
        if ((0x8000 & ((unsigned short)a4 - (unsigned short)a5)) == 0) {
            t0 = (((unsigned short)a4 - (unsigned short)a5) + 0x10000);
        }
        t1 = t0;
    }
    return t1;
}

int math_angle3_delta(int a4, int a5, int a6)
{
    register int t8;

    *(unsigned int *)((a4 + 0x0)) = (math_angle_delta16((*(int *)((a5 + 0x0))), (*(int *)((a6 + 0x0)))));
    *(unsigned int *)((a4 + 0x4)) = (math_angle_delta16((*(int *)((a5 + 0x4))), (*(int *)((a6 + 0x4)))));
    t8 = math_angle_delta16((*(int *)((a5 + 0x8))), (*(int *)((a6 + 0x8))));
    *(unsigned int *)((a4 + 0x8)) = t8;
    return t8;
}

void sys_nop_09b700(void)
{
    
}
