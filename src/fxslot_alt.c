/* 8 record slots (144 bytes) at 0xc7f3238: clear, start by priority level, HUD/effect sprite helpers (0c05eea0-0c05f6d8) */

/* named globals (symbols.txt) */
extern char g_fxslots[];
int fxslot_start(int, int, int, int, int, int, float);
struct o0_uchar { unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
int fxslot_clear_all(void);
int FUN_0c05f136(void);
int FUN_0c05f20e(int, float, float);
int FUN_0c0e7140(int);

int FUN_0c05ef8c(int player_idx);
int FUN_0c05f0b8(int a4);

int FUN_0c05ef8c(int player_idx)
{
    signed char idx;
    signed char slot_ids[2];
    unsigned short rec_off;
    int rec;
    signed char sel, val;

    idx = (signed char)player_idx;
    slot_ids[0] = *(signed char *)0xC14D835;
    slot_ids[1] = *(signed char *)0xC14D836;
    rec_off = (unsigned short)((unsigned short)idx * (unsigned short)0x72D0);
    rec = 0xC7E40C4 + rec_off;
    sel = *(signed char *)(rec + 0x71F1);
    val = *(signed char *)(0xC14D817 + sel + 2 * *(signed char *)(rec + 4));
    if (val == -1) {
        fxslot_start(slot_ids[idx], 0x80, 3, 0, 0xC14D7D8, *(int *)0xC336548, 1.0f);
        *(unsigned char *)((short)(slot_ids[idx] * 144) + ((int)g_fxslots) + 4) = 1;
        return 1;
    }
    if (val == -2) {
        fxslot_start(slot_ids[idx], 0x80, 3, 0, 0xC14D7D8,
                     *(int *)(0xC336550 + 4 * *(signed char *)(0xC14D808 + *(signed char *)0xC7F3051)), 1.0f);
    } else {
        fxslot_start(slot_ids[idx], 0x80, 3, 0, 0xC14D7D8, *(int *)(0xC336548 + 4 * val), 1.0f);
    }
    *(unsigned char *)((short)(slot_ids[idx] * 144) + ((int)g_fxslots) + 4) = 0;
    return 0;
}

int FUN_0c05f0b8(int a4)
{
    int stk[3];
    register int t0;
    register int t2;
    register int t4;
    register int t8;

    *(unsigned char *)(((int)stk + 8)) = a4;
    t0 = *(signed char *)(((int)stk + 8));
    t2 = *(signed char *)((((t0 << 1) + 0xC14D837) + 0x0));
    if ((int)(signed char)t2 >= 0) {
        if ((signed char)t2 == 0) {
            t4 = (*(int *)0xC336510);
            *(int *)((int)stk + 4) = t4;
            *(int *)((int)stk + 0) = 0xC14D7D8;
            fxslot_start(0x0, 0x80, (*(signed char *)((((t0 << 1) + 0xC14D837) + 0x1))), 0x0, 0xC14D7D8, t4, 1.0f);
            (((struct o4_uchar *)g_fxslots)->v) = 0x1;
        } else {
            t8 = (*(int *)((0xC336510 + ((signed char)t2 << 2))));
            *(int *)((int)stk + 4) = t8;
            *(int *)((int)stk + 0) = 0xC14D7D8;
            fxslot_start(0x0, 0x80, (*(signed char *)((((t0 << 1) + 0xC14D837) + 0x1))), 0x0, 0xC14D7D8, t8, 1.0f);
        }
    } else {
        (((struct o0_uchar *)g_fxslots)->v) = 0x0;
    }
    *(float *)0xC7F32B4 = (*(float *)((((*(signed char *)(((int)stk + 8))) << 2) + 0xC14D858)));
    return 0x7C;
}

int FUN_0c05f2d4(int a4, int a5)
{
    int stk[8];
    register int t2;
    register int t5;
    register int t14;
    register int t30;
    register int t32;
    register int t48;
    register int t52;
    register int t55;
    register int t19;

    *(unsigned char *)(((int)stk + 24)) = a4;
    *(unsigned char *)(((int)stk + 20)) = a5;
    FUN_0c0e7140(a4);
    fxslot_clear_all();
    *(unsigned int *)(((int)stk + 16)) = 0xC336504;
    t2 = *(signed char *)(((int)stk + 24));
    if (t2 != 1) {
        if (t2 != 2) {
            if (t2 != 3) {
                *(unsigned int *)(((int)stk + 16)) = 0xC336510;
                t5 = (*(int *)0xC336510);
                *(int *)((int)stk + 12) = t5;
                *(int *)((int)stk + 8) = 0xC14D7D8;
                fxslot_start(0x0, 0x80, 0x3, 0x0, 0xC14D7D8, t5, 1.0f);
                *(unsigned char *)0xC7F323C = 0x1;
                FUN_0c05ef8c(0x0);
                (((struct o4_uchar *)0xC7F32C8)->v) = 0x1;
                FUN_0c05ef8c(0x1);
                (((struct o4_uchar *)0xC7F3358)->v) = 0x1;
                *(unsigned char *)0xC7F33E8 = 0x0;
                *(unsigned char *)0xC7F3478 = 0x0;
                *(unsigned char *)0xC7F3598 = 0x0;
                *(unsigned char *)0xC7F3628 = 0x0;
                t19 = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
                *(int *)((int)stk + 4) = t19;
            } else {
                t14 = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
                *(int *)((int)stk + 12) = t14;
                *(int *)((int)stk + 8) = 0xC14D7D8;
                fxslot_start(0x0, 0x80, 0x3, 0x0, 0xC14D7D8, t14, 1.0f);
                *(unsigned char *)0xC7F323C = 0x1;
                (((struct o0_uchar *)0xC7F32C8)->v) = 0x0;
                (((struct o0_uchar *)0xC7F3358)->v) = 0x0;
                *(unsigned char *)0xC7F33E8 = 0x0;
                *(unsigned char *)0xC7F3478 = 0x0;
                *(unsigned char *)0xC7F3598 = 0x0;
                *(unsigned char *)0xC7F3628 = 0x0;
                t19 = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
                *(int *)((int)stk + 4) = t19;
            }
            *(int *)((int)stk + 0) = 0xC14D7D8;
            fxslot_start(0x5, 0x80, 0x3, 0x0, 0xC14D7D8, t19, 1.0f);
            *(unsigned char *)0xC7F350C = 0x1;
            t55 = (FUN_0c05f136());
        } else {
            FUN_0c05f0b8((*(signed char *)(((int)stk + 20))));
            FUN_0c05ef8c(0x0);
            FUN_0c05ef8c(0x1);
            *(unsigned char *)0xC7F33E8 = 0x0;
            *(unsigned char *)0xC7F3478 = 0x0;
            *(unsigned char *)0xC7F3598 = 0x0;
            *(unsigned char *)0xC7F3628 = 0x0;
            t30 = (*(int *)0xC336510);
            *(int *)((int)stk + 12) = t30;
            *(int *)((int)stk + 8) = 0xC14D7D8;
            fxslot_start(0x5, 0x80, 0x3, 0x0, 0xC14D7D8, t30, 1.0f);
            *(unsigned char *)0xC7F350C = 0x1;
            t32 = *(signed char *)(((int)stk + 20));
            if (!(0.0f > (*(float *)((((unsigned char)(((t32 << 1) + t32) << 2) + 0xC14D894) + 0x0))))) {
                t55 = (FUN_0c05f20e((*(int *)((((unsigned char)(((t32 << 1) + t32) << 2) + 0xC14D894) + 0x8))), (*(float *)((((unsigned char)(((t32 << 1) + t32) << 2) + 0xC14D894) + 0x0))), ((((struct o4_float *)(((unsigned char)(((t32 << 1) + t32) << 2) + 0xC14D894)))->v))));
            } else {
                t55 = (FUN_0c05f136());
            }
        }
    } else {
        *(volatile signed char *)(((int)stk + 20));
        t48 = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
        *(int *)((int)stk + 12) = t48;
        *(int *)((int)stk + 8) = 0xC14D7D8;
        fxslot_start(0x0, 0x80, 0x3, 0x0, 0xC14D7D8, t48, 1.0f);
        (((struct o0_uchar *)0xC7F32C8)->v) = 0x0;
        (((struct o0_uchar *)0xC7F3358)->v) = 0x0;
        *(unsigned char *)0xC7F33E8 = 0x0;
        *(unsigned char *)0xC7F3478 = 0x0;
        *(unsigned char *)0xC7F3598 = 0x0;
        *(unsigned char *)0xC7F3628 = 0x0;
        t52 = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
        *(int *)((int)stk + 4) = t52;
        *(int *)((int)stk + 0) = 0xC14D7D8;
        fxslot_start(0x5, 0x80, 0x3, 0x0, 0xC14D7D8, t52, 1.0f);
        *(unsigned char *)0xC7F350C = 0x1;
        t55 = (FUN_0c05f136());
    }
    return t55;
}
