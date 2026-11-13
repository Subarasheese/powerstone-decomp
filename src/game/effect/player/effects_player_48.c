/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c571c-0c0c6094) */

typedef struct { int a, b, c; } vec12;
extern char *obj_create(int, int, int, int);
extern char g_players[];
extern char g_spr_bank_player_fx[];
extern void thunk_math_mat_get_translate(char *, char *);
extern void obj_set_record_char(char *, int);
extern void FUN_0c06233a(char *, char *, int);
extern void FUN_0c0c5920(void);
struct o105_uchar { char p[0x105]; unsigned char v; };

char *FUN_0c0c571c(char *fighter, char marker_kind)
{
    char *slot, *child, *rec;
    int idx, val;

    slot = obj_create(1, 1, 3, 0);
    if (slot == 0) {
        return 0;
    }
    slot[0] = 1;
    slot[3] = fighter[3];
    slot[1] = 1;
    *(short *)(slot + 6) = 31;
    slot[5] = (fighter[3] != 0) ? 4 : 2;
    *(void (**)(void))(slot + 16) = FUN_0c0c5920;
    rec = g_players + (unsigned short)((unsigned short)fighter[3] * 0x72D0);
    thunk_math_mat_get_translate(rec + 0x300 + (short)(rec[0x71F1] * 3520) + 1408, slot + 32);
    *(vec12 *)(slot + 44) = *(vec12 *)(fighter + 44);
    *(char **)(slot + 28) = fighter;
    slot[4] = marker_kind;
    slot[0x101] = 1;
    slot[0x102] = 1;
    obj_set_record_char(slot, slot[4] * 3 + 120);
    for (idx = 0; idx < 3; idx++) {
        child = *(char **)(slot + 0x2E0 + idx * 4);
        child[0] = 1;
        *(short *)(child + 2) = 31;
        FUN_0c06233a(child, g_spr_bank_player_fx + (signed char)(fighter[3] * 24), 0);
        child = *(char **)(slot + 0x2E0 + idx * 4);
        *(float *)(child + 36) = 1.0f;
        *(float *)(child + 32) = 1.0f;
        *(float *)(child + 28) = 1.0f;
        if (idx == 0) {
            val = *(int *)(fighter + 7808 + (short)(fighter[0x71F1] * 5280) + 848);
            *(int *)(child + 156) = val;
        } else if (idx == 1) {
            val = *(int *)(fighter + 7808 + (short)(fighter[0x71F1] * 5280) + 1024);
            *(int *)(child + 156) = val;
        } else if (idx == 2) {
            val = *(int *)(fighter + 21888 + (short)(fighter[0x71F1] * 1760) + 144);
            *(int *)(child + 156) = val;
        }
    }
    slot[0x308] = 1;
    return slot;
}

int FUN_0c0c58da(int a4)
{
    register int t1;
    register int t2;

    if ((*(signed char *)((a4 + 0x2A8))) != 0) {
        t1 = (0x294 + a4);
        t2 = 0x0;
        for (;;) {
            if ((*(int *)((t1 + 0x0))) != (*(int *)(((*(int *)((a4 + 0x1C))) + 0x1C)))) {
                t2 = (t2 + 0x1);
                t1 = (t1 + 0x4);
                if ((int)t2 >= (int)0x5) {
                    break;
                }
                continue;
            }
            return 0x0;
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0c5906(int a4, int a5)
{
    *(unsigned char *)((a5 + 0x0)) = 0x3;
    *(unsigned char *)((a4 + 0x9)) = 0x2;
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x1;
    *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x1;
    (((struct o105_uchar *)(a4))->v) = 0x1;
    return 0x1;
}
