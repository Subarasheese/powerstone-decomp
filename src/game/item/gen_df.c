/* Straight-line functions with calls and guards (batch gen_df): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2E4_int { char p[0x2E4]; int v; };
int FUN_0c0555dc(void);
int item_tick_falling(int);
int item_tick_free(int);
int FUN_0c05b18c(int);
int item_draw_marker(int);
int item_tick_held(int);
int item_tick_thrown(int);
int obj_destroy(int);
int item_tick_by_mode(int a4);

int item_tick_by_mode(int a4)
{
    int t0;
    int t1;

    t1 = FUN_0c0555dc();
    if (t1 != 0) {
        return obj_destroy(a4);
    }
    t1 = *(signed char *)((a4 + 0x30D));
    if ((t1 != 5) && (t1 != 14)) {
    } else {
        item_draw_marker(a4);
    }
    if (((*(signed char *)((a4 + 0x30C))) == 14) && (t0 = *(signed char *)((a4 + 0x30D)), t0 != 14)) {
        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
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
                        return item_tick_falling(a4);
                    }
                    return obj_destroy(a4);
                }
                return FUN_0c05b18c(a4);
            }
            return item_tick_held(a4);
        }
        return item_tick_thrown(a4);
    }
    return item_tick_free(a4);
}
