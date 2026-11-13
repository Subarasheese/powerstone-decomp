/* character 4 (Gunrock) (0c079386-0c07a1e4) */

struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_gunrock_step_scale_script(int);
int pl_detect_special_input(int, int);
struct GaugeTable { float vals[560]; };
int pl_reset_scale(int);

int pl_gunrock_state31_phase1(int a4);

int pl_gunrock_state11_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_step_motion(a4);
    }
    t0 = *(signed char *)((a4 + 0xB));
    switch (t0) {
    case 0:
        pl_start_motion(a4, 0x3, 0x2);
        break;
    case 1:
        pl_start_motion(a4, 0x3, 0x3);
        break;
    case 2:
        pl_start_motion(a4, 0x3, 0x5);
        break;
    case 3:
        pl_start_motion(a4, 0x3, 0x6);
        break;
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int pl_gunrock_state12_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC079418))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0793EE))(a4, a5, a6, a7);
}

int pl_gunrock_state31_phase1(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_gunrock_step_scale_script(a4);
    t1 = t0;
    if (t0 != 0) {
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_gunrock_state31_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_gunrock_state31_phase1(a4);
    }
    return ((int (*)(int, int, int, int))(0xC07946A))(a4, a5, a6, a7);
}

int pl_gunrock_check_special_input(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_detect_special_input(a4, 0xC337184);
    t1 = 0x1;
    if ((signed char)t0 != 0) {
    } else {
        t0 = pl_detect_special_input(a4, 0xC337170);
        t1 = 0x0;
        if ((signed char)t0 != 0) {
        } else {
            t0 = pl_detect_special_input(a4, 0xC337198);
            t1 = 0x63;
            if ((signed char)t0 != 0) {
                t1 = 0x2;
            }
        }
    }
    return t1;
}

/* Dispatches through a handler table indexed by the byte at offset 0x7209 of the object, passing the object on. */
void pl_gunrock_special_move_dispatch(char *obj)
{
    void (**handlers)(char *) = (void (**)(char *))0xC3371AC;
    handlers[(unsigned char)obj[0x7209]](obj);
}

int pl_gunrock_special0_dispatch(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC0797EC))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0796B8))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0795FA))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC079530))(a4, a5, a6, a7);
}

int pl_gunrock_special2_dispatch(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return ((int (*)(int, int, int, int))(0xC079A9C))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC079A5C))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC079A14))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC07997A))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0798A4))(a4, a5, a6, a7);
}

void pl_gunrock_ease_scale(char *player, short rec_idx, int lower, short table_idx)
{
    struct GaugeTable table;
    float *row;
    float *row2;
    char *rec;
    int col;
    table = *(struct GaugeTable *)0xC14F2E0;
    col = (signed char)player[0x72BC + 2];
    row = (float *)((char *)&table + (short)(table_idx * 448));
    if (lower == 0) {
        if (rec_idx == -1) {
            if (row[col] > *(float *)(player + 80)) {
                *(float *)(player + 80) = *(float *)(player + 80) + row[col] / 8.0f;
                *(float *)(player + 88) = *(float *)(player + 80);
                *(float *)(player + 84) = *(float *)(player + 80);
                if (!(*(float *)(player + 80) > row[col]))
                    return;
            }
            row2 = (float *)((char *)&table + (short)(table_idx * 448));
            *(float *)(player + 80) = row2[col];
            *(float *)(player + 88) = row2[col];
            *(float *)(player + 84) = row2[col];
        } else {
            rec = player + 768 + (short)((signed char)player[0x71F1] * 3520) + (short)(rec_idx * 176);
            if (row[col] > *(float *)(rec + 108)) {
                rec = player + 768 + (short)((signed char)player[0x71F1] * 3520) + (short)(rec_idx * 176);
                *(float *)(rec + 108) = *(float *)(rec + 108) + row[col] / 8.0f;
                rec = player + 768 + (short)((signed char)player[0x71F1] * 3520) + (short)(rec_idx * 176);
                *(float *)(rec + 116) = *(float *)(rec + 108);
                *(float *)(rec + 112) = *(float *)(rec + 108);
                rec = player + 768 + (short)((signed char)player[0x71F1] * 3520) + (short)(rec_idx * 176);
                if (!(*(float *)(rec + 108) > row[col]))
                    return;
                row2 = (float *)((char *)&table + (short)(table_idx * 448));
                rec = player + 768 + (short)((signed char)player[0x71F1] * 3520) + (short)(rec_idx * 176);
                *(float *)(rec + 108) = row2[col];
                *(float *)(rec + 116) = row2[col];
                *(float *)(rec + 112) = row2[col];
            } else {
                rec = player + 768 + (short)((signed char)player[0x71F1] * 3520) + (short)(rec_idx * 176);
                *(float *)(rec + 108) = row[col];
                *(float *)(rec + 116) = row[col];
                *(float *)(rec + 112) = row[col];
            }
        }
    } else {
        if (rec_idx == -1) {
            if (*(float *)(player + 80) > 1.0f) {
                *(float *)(player + 80) = *(float *)(player + 80) - row[col] / 8.0f;
                *(float *)(player + 88) = *(float *)(player + 80);
                *(float *)(player + 84) = *(float *)(player + 80);
                if (!(1.0f > *(float *)(player + 80)))
                    return;
            }
            *(float *)(player + 80) = 1.0f;
            *(float *)(player + 88) = 1.0f;
            *(float *)(player + 84) = 1.0f;
        } else {
            rec = player + 768 + (short)((signed char)player[0x71F1] * 3520) + (short)(rec_idx * 176);
            if (*(float *)(rec + 108) > 1.0f) {
                *(float *)(rec + 108) = *(float *)(rec + 108) - row[col] / 8.0f;
                *(float *)(rec + 116) = *(float *)(rec + 108);
                *(float *)(rec + 112) = *(float *)(rec + 108);
                if (!(1.0f > *(float *)(rec + 108)))
                    return;
            }
            *(float *)(rec + 108) = 1.0f;
            *(float *)(rec + 116) = 1.0f;
            *(float *)(rec + 112) = 1.0f;
        }
    }
}

int pl_gunrock_start_motion_reset_slots(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t2;

    *(unsigned char *)(((int)stk + 4)) = a5;
    *(unsigned char *)(((int)stk + 0)) = a6;
    t0 = ((0x72BC + a4) + 0x8);
    t1 = ((0x72BC + a4) + 0x3);
    t2 = 0x0;
    for (;;) {
        t2 = (t2 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = 0x0;
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x1);
        if ((int)t2 >= (int)0x5) {
            break;
        }
    }
    *(unsigned char *)(((0x72BC + a4) + 0x2)) = (*(signed char *)(((int)stk + 0)));
    pl_reset_scale(a4);
    return pl_start_motion(a4, (*(signed char *)(((int)stk + 4))), (*(signed char *)(((int)stk + 0))));
}
