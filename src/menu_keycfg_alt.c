/* KEY CFG screen (two player columns, settings and button maps) (0c017a24-0c0195f0) */

extern void snd_play_side_se(int, int);
extern void keycfg_edit_button_value(int, int);
extern void keycfg_reset_player_keys(int);
typedef struct {
    int word_0;
    float x, y, z;
    float float_4, float_5;
    int word_6, word_7, word_8, word_9;
    int word_10;
    float float_11;
    int word_12;
    int word_13;
} cell_rec;
extern int g_res_option;
void ui_sprite_queue_add(cell_rec *src, int *o, short idx, int n, char c5, char c6);
struct o40_float { char p[0x40]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int keycfg_obj_in_mask(int);
int obj_destroy(int, int, int);
int FUN_0c06231c(int, int, int);
int obj_tick_class(int, int, int, int);

void keycfg_step_cursor_row(int slot_idx)
{
    char *cursor;
    char *pad_state;
    unsigned short pad_bits;

    pad_state = (char *)0xC361BF0;
    cursor = (char *)0xC3622C0 + 42 + ((signed char)slot_idx << 4);
    cursor[3] = cursor[2];
    if (*(unsigned short *)(pad_state + (signed char)(cursor[1] * 20) + 12) & 16) {
        cursor[2] = cursor[2] - 1;
        snd_play_side_se(0, 75);
    }
    if (*(unsigned short *)(pad_state + (signed char)(cursor[1] * 20) + 12) & 32) {
        cursor[2] = cursor[2] + 1;
        snd_play_side_se(0, 75);
    }
    if (cursor[2] < 0)
        cursor[2] = 7;
    if (cursor[2] > 7)
        cursor[2] = 0;
    pad_bits = *(unsigned short *)(pad_state + (signed char)(slot_idx * 20) + 12);
    switch (cursor[2]) {
    case 0:
        keycfg_edit_button_value(slot_idx, 0);
        return;
    case 1:
        keycfg_edit_button_value(slot_idx, 1);
        return;
    case 2:
        if (cursor[13] != 0)
            keycfg_edit_button_value(slot_idx, 6);
        else
            keycfg_edit_button_value(slot_idx, 2);
        return;
    case 3:
        if (cursor[13] != 0)
            keycfg_edit_button_value(slot_idx, 2);
        else
            keycfg_edit_button_value(slot_idx, 3);
        return;
    case 4:
        if (cursor[13] != 0)
            keycfg_edit_button_value(slot_idx, 3);
        else
            keycfg_edit_button_value(slot_idx, 4);
        return;
    case 5:
        if (cursor[13] != 0)
            keycfg_edit_button_value(slot_idx, 7);
        else
            keycfg_edit_button_value(slot_idx, 5);
        return;
    case 6:
        if (pad_bits & 4) {
            snd_play_side_se(0, 77);
            keycfg_reset_player_keys(slot_idx);
        }
        return;
    default:
        if (pad_bits & 4) {
            snd_play_side_se(0, 77);
            cursor[0] = 0;
        }
        return;
    }
}

void keycfg_queue_table_sprite(signed char idx)
{
    short *entry;
    cell_rec cell;

    entry = (short *)(0xC11B3D0 + (short)(idx * 12));
    cell.x = ((float *)entry)[1];
    cell.y = ((float *)entry)[2];
    cell.z = 7.0f;
    cell.float_4 = 1.0f;
    cell.float_5 = 1.0f;
    cell.word_10 = 0;
    cell.float_11 = 1.0f;
    cell.word_13 = 5;
    ui_sprite_queue_add(&cell, &g_res_option, 0, *entry, 0, 0);
}

int FUN_0c018830(int a4, float f4)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    v0_5 = a4;
    w0_1 = f4;
    v0_4 = *(signed char *)((v0_5 + 0x3));
    v0_1 = (0x0);
    v0_2 = (v0_4);
    v0_3 = (0xC3622C0);
    v0_0 = (v0_5);
    w0_0 = (1.0f);
    if (((*(signed char *)((((((signed char)v0_4 << 2) << 2) + 0xC3622EA) + 0x2))) == (*(signed char *)((((((signed char)v0_4 << 2) << 2) + 0xC3622EA) + 0x3))))) goto L_C0188AA;
    *(unsigned int *)(((int)stk + 4)) = (((signed char)v0_2 << 2) << 2);
    v0_4 = *(signed char *)((((((signed char)v0_2 << 2) << 2) + (v0_3 + 0x2A)) + 0x3));
    *(unsigned char *)(((int)stk + 0)) = v0_4;
    FUN_0c06231c((*(int *)(((((*(signed char *)(((int)stk + 0))) << 2) + (0x2E0 + v0_0)) + 0x0))), 0xC664AF0, (*(signed char *)((((signed char)v0_4 << 1) + 0xC11B764))));
    (((struct o40_float *)((*(int *)(((0x2E0 + v0_0) + ((*(signed char *)((((v0_3 + 0x2A) + (*(int *)(((int)stk + 4)))) + 0x3))) << 2))))))->v) = w0_0;
    *(unsigned char *)((v0_0 + 0x8)) = v0_1;
    *(unsigned char *)((v0_0 + 0x9)) = v0_1;
    L_C0188AA:;
    v0_4 = *(signed char *)((v0_0 + 0x8));
    v0_6 = (v0_4);
    if ((v0_4 == 0)) goto L_C0188BC;
    if ((v0_6 == 1)) goto L_C018936;
    if (!((v0_6 == 2))) goto L_C0189B4;
    *(unsigned char *)((v0_0 + 0xF)) = ((-(*(signed char *)((v0_0 + 0xF)))) + 0x1);
    v0_4 = *(signed char *)((((((signed char)v0_2 << 2) << 2) + (v0_3 + 0x2A)) + 0x2));
    *(unsigned char *)(((int)stk + 0)) = v0_4;
    FUN_0c06231c((*(int *)(((((*(signed char *)(((int)stk + 0))) << 2) + (0x2E0 + v0_0)) + 0x0))), 0xC664AF0, (*(signed char *)(((((signed char)v0_4 << 1) + (*(signed char *)((v0_0 + 0xF)))) + 0xC11B764))));
    *(unsigned char *)((v0_0 + 0x8)) = v0_1;
    goto L_C0189B4;
    L_C0189B4:;
    *(unsigned char *)((((v0_3 + 0x2A) + (((signed char)v0_2 << 2) << 2)) + 0xC)) = v0_1;
    v0_7 = *(signed char *)((((v0_3 + 0x2A) + (((signed char)v0_2 << 2) << 2)) + 0x2));
    v0_6 = (v0_7);
    v0_5 = (0x1);
    v0_4 = (0x400);
    if ((v0_7 == 0)) goto L_C0189F8;
    if ((v0_6 == 1)) goto L_C0189F8;
    if ((v0_6 == 2)) goto L_C0189F8;
    if ((v0_6 == 3)) goto L_C0189F8;
    if ((v0_6 == 4)) goto L_C018A80;
    if ((v0_6 == 5)) goto L_C018AB8;
    if ((v0_6 == 6)) goto L_C0189F8;
    if ((v0_6 == 7)) goto L_C0189F8;
    L_C018AF4:;
    v0_5 = (0x7);
    if (((*(signed char *)((((((signed char)v0_2 << 2) << 2) + (v0_3 + 0x2A)) + 0x0))) != 0)) goto L_C018B2C;
    v0_4 = ((0x2E0 + v0_0));
    R6 = (v0_1);
    w0_1 = (0.5f);
    L_C018B28:;
    if (!(((int)R6 < (int)v0_5))) goto L_C018B2C;
    (((struct o40_float *)((*(int *)((v0_4 + 0x0)))))->v) = w0_1;
    v0_4 = ((v0_4 + 0x4));
    R6 = ((R6 + 0x1));
    goto L_C018B28;
    L_C018B2C:;
    if ((((*(signed char *)(((v0_3 + 0x2A) + (((signed char)v0_2 << 2) << 2)))) - (*(signed char *)((v0_0 + 0xE)))) != 1)) goto L_C018B5A;
    v0_4 = ((0x2E0 + v0_0));
    R6 = (v0_1);
    L_C018B56:;
    if (!(((int)R6 < (int)v0_5))) goto L_C018B5A;
    (((struct o40_float *)((*(int *)((v0_4 + 0x0)))))->v) = w0_0;
    v0_4 = ((v0_4 + 0x4));
    R6 = ((R6 + 0x1));
    goto L_C018B56;
    L_C018B5A:;
    *(unsigned char *)((v0_0 + 0xE)) = (*(signed char *)(((v0_3 + 0x2A) + (((signed char)v0_2 << 2) << 2))));
    v0_1 = keycfg_obj_in_mask(v0_0);
    v0_6 = ((signed char)v0_1);
    if (((signed char)v0_1 == 0)) goto L_C018B86;
    return obj_destroy(v0_0, v0_4, R6);
    L_C018B86:;
    return v0_6;
    L_C0189F8:;
    v0_7 = *(signed char *)((v0_0 + 0x9));
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C018A20;
    if ((v0_6 == 1)) goto L_C018A36;
    if ((v0_6 == 2)) goto L_C018A58;
    *(unsigned int *)((v0_0 + 0x30)) = v0_1;
    goto L_C018AF4;
    L_C018A58:;
    *(unsigned char *)((((((signed char)v0_2 << 2) << 2) + (v0_3 + 0x2A)) + 0xC)) = v0_5;
    v0_5 = *(int *)((v0_0 + 0x30));
    *(unsigned int *)((v0_0 + 0x30)) = (v0_5 - v0_4);
    if (((int)(v0_5 - v0_4) > 0)) goto L_C018AF4;
    L_C018A76:;
    *(unsigned char *)((v0_0 + 0x9)) = 0xFFFFFFFF;
    goto L_C018AF4;
    L_C018A36:;
    *(unsigned char *)((((((signed char)v0_2 << 2) << 2) + (v0_3 + 0x2A)) + 0xC)) = v0_5;
    v0_5 = *(int *)((v0_0 + 0x30));
    *(unsigned int *)((v0_0 + 0x30)) = (v0_5 + v0_4);
    if (((int)(v0_5 + v0_4) < 0)) goto L_C018AF4;
    goto L_C018A76;
    L_C018A20:;
    if (((*(int *)((v0_0 + 0x30))) == 0)) goto L_C018A76;
    if (((int)(*(int *)((v0_0 + 0x30))) >= 0)) goto L_C018A30;
    v0_6 = (v0_5);
    L_C018A32:;
    *(unsigned char *)((v0_0 + 0x9)) = v0_6;
    goto L_C018AF4;
    L_C018A30:;
    v0_6 = (0x2);
    goto L_C018A32;
    L_C018AB8:;
    v0_7 = *(signed char *)((v0_0 + 0x9));
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C018AC6;
    if ((v0_6 == 1)) goto L_C018ACC;
    goto L_C018AF4;
    L_C018ACC:;
    *(unsigned char *)((((((signed char)v0_2 << 2) << 2) + (v0_3 + 0x2A)) + 0xC)) = v0_5;
    v0_6 = *(int *)((v0_0 + 0x30));
    *(unsigned int *)((v0_0 + 0x30)) = (v0_6 - v0_4);
    v0_5 = (0xFFFFC800);
    if (((int)(v0_6 - v0_4) > (int)0xFFFFC800)) goto L_C018AF4;
    L_C018AEC:;
    *(unsigned int *)((v0_0 + 0x30)) = v0_5;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C018AF4;
    L_C018AC6:;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C018ACC;
    L_C018A80:;
    v0_7 = *(signed char *)((v0_0 + 0x9));
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C018A8E;
    if ((v0_6 == 1)) goto L_C018A94;
    goto L_C018AF4;
    L_C018A94:;
    *(unsigned char *)((((((signed char)v0_2 << 2) << 2) + (v0_3 + 0x2A)) + 0xC)) = v0_5;
    v0_6 = *(int *)((v0_0 + 0x30));
    *(unsigned int *)((v0_0 + 0x30)) = (v0_6 + v0_4);
    v0_5 = (0x3800);
    if (((int)(v0_6 + v0_4) < (int)0x3800)) goto L_C018AF4;
    goto L_C018AEC;
    L_C018A8E:;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C018A94;
    L_C018936:;
    (((struct o40_float *)((*(int *)(((0x2E0 + v0_0) + ((*(signed char *)((((((signed char)v0_2 << 2) << 2) + (v0_3 + 0x2A)) + 0x2))) << 2))))))->v) = (*(float *)(((((((struct oEC_short *)(v0_0))->v)) << 2) + 0xC11B724)));
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) & 0xF);
    if ((((((struct oEC_short *)(v0_0))->v)) != 0)) goto L_C0189B4;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C0189B4;
    L_C0188BC:;
    if (((int)(*(signed char *)((((((signed char)v0_2 << 2) << 2) + (v0_3 + 0x2A)) + 0x2))) < (int)0x6)) goto L_C018910;
    *(unsigned char *)((v0_0 + 0x8)) = 0xFFFFFFFF;
    (((struct o40_float *)((*(int *)(((0x2E0 + v0_0) + ((*(signed char *)((((((signed char)v0_2 << 2) << 2) + (v0_3 + 0x2A)) + 0x2))) << 2))))))->v) = w0_0;
    goto L_C0189B4;
    L_C018910:;
    (((struct o40_float *)((*(int *)(((0x2E0 + v0_0) + ((*(signed char *)((((((signed char)v0_2 << 2) << 2) + (v0_3 + 0x2A)) + 0x2))) << 2))))))->v) = 0.0f;
    (((struct oEC_ushort *)(v0_0))->v) = v0_1;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C018936;
}

int keycfg_run_objects_in_mask(int a4, int a5, int a6, int a7)
{
    register int t0;

    *(unsigned short *)0xC3622D0 = a4;
    t0 = obj_tick_class(0x5, a5, a6, a7);
    *(unsigned short *)0xC3622D0 = 0x0;
    return t0;
}
