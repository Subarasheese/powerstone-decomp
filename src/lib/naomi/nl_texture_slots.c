/* texture slot helpers (0c0ead50-0c0eafb0) */

struct slot_rec { short idx; signed char field_02; unsigned char count; short timer; short field_06; };
extern struct slot_rec *g_w638;
int FUN_0c0eb0c0(int, int, int);

void res_texture_slot_tick_release(int slot_idx)
{
    struct slot_rec *slot = g_w638 + slot_idx;
    short *bits;
    int mask;
    int bit_idx;
    int remaining;
    if (slot->timer > 1) {
        slot->timer = slot->timer - 1;
        return;
    }
    remaining = slot->count;
    bit_idx = slot->idx;
    slot->field_06 = -1;
    slot->idx = -1;
    slot->field_02 = -1;
    slot->timer = 0;
    mask = 1 << (bit_idx & 15);
    bits = (short *)0xC7FD480 + (bit_idx >> 4);
    while (remaining-- > 0) {
        *bits = *bits & ~mask;
        mask += mask;
        if (mask == 0x10000) {
            bits++;
            mask = 1;
        }
    }
}

int FUN_0c0eadd0(int a4, int a5)
{
    register int t1;
    register int t2;

    t1 = *(int *)0xC7FD638;
    t2 = *(short *)(((t1 + ((a4 << 2) << 1)) + 0x4));
    if (t2 != 0) {
        return FUN_0c0eb0c0((((*(short *)(((t1 + ((a4 << 2) << 1)) + 0x0))) << 2) << 2), a5, (((unsigned char)(*(signed char *)(((t1 + ((a4 << 2) << 1)) + 0x3))) << 2) << 2));
    }
    return t2;
}

int FUN_0c0eae20(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t1;
    int t5;
    register int t6;
    register int t7;
    register int t14;
    register int t15;
    register int t16;
    register int t24;
    register int t25;
    register int t26;

    *(unsigned int *)(((int)stk + 0)) = 0xC7FD480;
    if (a4 == 16) {
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            *(unsigned int *)(((int)stk + 4)) = ((t1 << 1) + (*(int *)(((int)stk + 0))));
            t5 = 0x1;
            t6 = 0x0;
            t7 = ((t1 << 2) << 2);
            for (;;) {
                if (((*(short *)(((*(int *)(((int)stk + 4))) + 0x0))) & t5) == 0) {
                    t0 = (t0 + 0x1);
                    if ((int)t0 < (int)((int)(a5 + 0xF) >> 4)) {
                        t6 = (t6 + 0x1);
                        t5 = (t5 + t5);
                        t7 = (t7 + 0x1);
                        if ((int)t6 >= (int)0x10) {
                            break;
                        }
                        continue;
                    }
                    break;
                }
                t0 = 0x0;
                t6 = (t6 + 0x1);
                t5 = (t5 + t5);
                t7 = (t7 + 0x1);
                if ((int)t6 >= (int)0x10) {
                    break;
                }
            }
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x4) {
                break;
            }
        }
        t24 = t0;
        t25 = 0x0;
        t26 = t5;
    } else {
        t14 = (*(int *)(((int)stk + 0)));
        t15 = 0x0;
        t16 = 0x0;
        for (;;) {
            if (((*(short *)((t14 + 0x0))) & (((int)0x1 << (int)((int)(a5 + 0xF) >> 4)) - 1)) == 0) {
                break;
            }
            t16 = (t16 + 0x1);
            t15 = (t15 + 0x10);
            t14 = (t14 + 0x2);
            if ((int)t16 >= (int)0x4) {
                if ((int)0x0 < (int)((int)(a5 + 0xF) >> 4)) {
                    return ((int (*)(int, int, int, int))(0xC0EAED0))(0x0, ((int)(a5 + 0xF) >> 4), t14, t15);
                }
                return ((int (*)(int, int, int, int))(0xC0EAED0))(0x0, ((int)(a5 + 0xF) >> 4), t14, t15);
            }
        }
        t24 = ((int)(a5 + 0xF) >> 4);
        t25 = t14;
        t26 = t15;
    }
    if ((int)t24 < (int)((int)(a5 + 0xF) >> 4)) {
        return ((int (*)(int, int, int, int))(0xC0EAED0))(t24, ((int)(a5 + 0xF) >> 4), t25, t26);
    }
    return ((int (*)(int, int, int, int))(0xC0EAED0))(t24, ((int)(a5 + 0xF) >> 4), t25, t26);
}

int FUN_0c0eaef0(int a4, int a5)
{
    return ((int (*)(int, int, int, int))(0xC0EAF50))(((int)0x1 << (int)(a4 & 0xF)), ((int)(a5 + 0xF) >> 4), ((((int)a4 >> 4) << 1) + 0xC7FD480), 0x1);
}
