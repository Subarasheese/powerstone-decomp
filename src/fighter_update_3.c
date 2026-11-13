/* input snapshot, round-level update of the two fighters, per-player update (part 3 of 4 of the same module) (0c092908-0c093254) */

struct snap { int words[9]; };
extern int pl_try_char_special_move();
struct o71B4_uchar { char p[0x71B4]; unsigned char v; };
struct o71F3_uchar { char p[0x71F3]; unsigned char v; };
int pl_update_frame(int);
int FUN_0c09788c(int);
int pl_blend_motion_pose(int);
int cam_publish_active_position(int);

void keycfg_remap_player_buttons(int slot)
{
    char *pl;
    struct snap snap;
    int bit, word_idx;
    signed char *sel;
    int *mask, *val;
    signed char *vtab;

    pl = (char *)0xC7E40C4 + (unsigned short)((unsigned short)slot * (unsigned short)0x72D0);
    snap = *(struct snap *)(pl + 0x2DC);
    *(int *)(pl + 0x2DC) &= 0xFFFCF8F8;
    *(int *)(pl + 0x2E0) &= 0xFFFCF8F8;
    *(int *)(pl + 0x2E4) &= 0xFFFCF8F8;
    *(int *)(pl + 0x2E8) &= 0xFFFCF8F8;
    *(unsigned char *)(pl + 0x7204) = 0;
    mask = (int *)0xC1508D0;
    val = (int *)0xC1508F0;
    vtab = (signed char *)0xC150914;
    sel = (signed char *)0xC7F4750 + 29 + slot * 8;
    for (bit = 0; bit < 8; bit++) {
        for (word_idx = 0; word_idx < 4; word_idx++) {
            if (snap.words[word_idx] & mask[bit])
                *(int *)(pl + 0x2DC + 4 * word_idx) |= val[sel[bit]];
            if (word_idx == 2 && (snap.words[2] & mask[bit]))
                *(signed char *)(pl + 0x7204) = vtab[sel[bit]];
        }
    }
}

int FUN_0c092a58(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if (((*(int *)0xC7F307C) & 1) != 0) {
        if ((*(signed char *)0xC7EB2CB) != 0) {
            t0 = ((int (*)(int, int, int, int))(pl_try_char_special_move))(0xC7E40C4, a5, a6, a7);
            t1 = (signed char)t0;
            if ((signed char)t0 == 0) {
                t0 = 0x7207;
                if ((*(signed char *)0xC7F259B) != 0) {
                    t0 = (signed char)(((int (*)(int))(pl_try_char_special_move))(0xC7EB394));
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            t1 = 0x7207;
            if ((*(signed char *)0xC7F259B) != 0) {
                t1 = (signed char)(((int (*)(int, int, int, int))(pl_try_char_special_move))(0xC7EB394, a5, a6, a7));
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        if ((*(signed char *)0xC7F259B) != 0) {
            t0 = ((int (*)(int, int, int, int))(pl_try_char_special_move))(0xC7EB394, a5, a6, a7);
            t2 = (signed char)t0;
            if ((signed char)t0 == 0) {
                t0 = 0x7207;
                if ((*(signed char *)0xC7EB2CB) != 0) {
                    t0 = (signed char)(((int (*)(int))(pl_try_char_special_move))(0xC7E40C4));
                }
                t2 = t0;
            }
            t0 = t2;
        } else {
            t2 = 0x7207;
            if ((*(signed char *)0xC7EB2CB) != 0) {
                t2 = (signed char)(((int (*)(int, int, int, int))(pl_try_char_special_move))(0xC7E40C4, a5, a6, a7));
            }
            t0 = t2;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c092ace(int a4)
{
    register int t12;
    register int t17;

    cam_publish_active_position(a4);
    if ((*(signed char *)((((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x7232))) == 0) {
        (((struct o71B4_uchar *)(((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = 0x0;
        if ((*(signed char *)((((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4))) != 10) {
            pl_update_frame(((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4));
        } else {
            FUN_0c09788c(((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4));
        }
        pl_blend_motion_pose(((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4));
    }
    t12 = *(signed char *)((((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71BA));
    t17 = t12;
    if (t12 != 23) {
        t17 = t12;
        if (t12 != 42) {
            (((struct o71F3_uchar *)(((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = (*(signed char *)((((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1)));
            t17 = 0x71F3;
        }
    }
    return t17;
}
