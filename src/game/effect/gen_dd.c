/* Straight-line functions with calls and guards (batch gen_dd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0555dc(void);
int FUN_0c05ae26(int);
int FUN_0c05e20c(int);
int FUN_0c05e3b8(int);
int FUN_0c05e4ec(int);
int FUN_0c05e9d2(int);
int item_draw_marker(int, int, int, int);
int obj_destroy(int);
int snd_play_side_se(int, int);
int FUN_0c05e118(int a4);

int FUN_0c05e118(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    int t3;
    register int t4;
    register int t5;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x32);
        return obj_destroy(a4);
    }
    if ((*(signed char *)((a4 + 0x30D))) != 14) {
        t0 = ((0x2E0 + a4) + 0x8);
        t1 = 0x2;
        for (;;) {
            t1 = (t1 + 0x1);
            t2 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            *(unsigned char *)((t2 + 0x0)) = 0x0;
            if ((int)t1 >= (int)0x6) {
                break;
            }
        }
        t0 = t1;
        t1 = 0x0;
        t2 = 0x6;
    }
    t3 = *(signed char *)((a4 + 0x30D));
    if ((t3 != 5) && (t3 != 14)) {
        t3 = t0;
        t4 = t1;
        t5 = t2;
    } else {
        item_draw_marker(a4, t0, t1, t2);
    }
    t0 = *(signed char *)((a4 + 0x30D));
    if ((t0 == 16) || (t0 == 0)) {
        *(unsigned char *)(((0xC7F2974 + (*(signed char *)((a4 + 0xD)))) + 0x0)) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x30D));
    if (t0 != 0) {
        if (t0 != 4) {
            if (t0 != 5) {
                if (t0 != 14) {
                    if (t0 == 16) {
                        return FUN_0c05ae26(a4);
                    }
                    return obj_destroy(a4);
                }
                return FUN_0c05e4ec(a4);
            }
            return FUN_0c05e3b8(a4);
        }
        return FUN_0c05e9d2(a4);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC05E244))(a4, t3, t4, t5);
    }
    return FUN_0c05e20c(a4);
}
