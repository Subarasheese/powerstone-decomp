/* level/difficulty tables g_305c and random picks (0597CE..0599FC) (0c0599fc-0c059c44) */

#define GAME ((unsigned char *)0xC7F302C)
extern float math_rand_float(void);

int pl_adjust_power_gauge(int step);

int pl_adjust_power_gauge(int step)
{
    unsigned int mode;
    int rec_idx;
    int delta;
    int char_id;
    int gauge_idx;
    char *rec;
    char *limit_tbl;
    int level;

    mode = GAME[69];
    if (mode == 3)
        return 3;
    rec_idx = (mode == 0) ? 1 : mode;
    delta = step;
    if (GAME[49] < -(signed char)delta) {
        delta = 0;
        GAME[49] = 0;
    }
    if (255 - GAME[49] < (signed char)delta) {
        delta = 0;
        GAME[49] = 255;
    }
    GAME[49] = delta + GAME[49];
    char_id = *(signed char *)0xC7F2F11;
    rec = (char *)0xC7F2DF0 + (unsigned char)((unsigned short)(rec_idx + 255) * 120);
    gauge_idx = rec[86];
    limit_tbl = (char *)0xC32E180 + (signed char)(char_id * 9);
    if (GAME[49] > ((unsigned char)limit_tbl[gauge_idx] << 3))
        GAME[49] = limit_tbl[gauge_idx] << 3;
    char_id = *(signed char *)0xC7F2F11;
    rec = (char *)0xC7F2DF0 + (unsigned char)((unsigned short)(rec_idx + 255) * 120);
    limit_tbl = (char *)0xC32E1C8 + (signed char)(char_id * 9);
    gauge_idx = rec[86];
    if (GAME[49] < ((unsigned char)limit_tbl[gauge_idx] << 3))
        GAME[49] = limit_tbl[gauge_idx] << 3;
    level = GAME[49] / 8;
    GAME[48] = level;
    return level;
}

int FUN_0c059b04(void)
{
    return pl_adjust_power_gauge(0x1);
}

int FUN_0c059b08(int a4)
{
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71ED))) != 0) {
        return pl_adjust_power_gauge(0x1);
    }
    return 0x71ED;
}

int FUN_0c059b1a(int a4)
{
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71ED))) != 0) {
        return pl_adjust_power_gauge(0x1);
    }
    return 0x71ED;
}

int FUN_0c059b48(int a4)
{
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71ED))) != 0) {
        return pl_adjust_power_gauge(0x2);
    }
    return 0x71ED;
}

int FUN_0c059b5a(int a4)
{
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71ED))) != 0) {
        return pl_adjust_power_gauge(0x4);
    }
    return 0x71ED;
}

void pl_add_gauge_by_percent(unsigned char pct)
{
    int pct_clamped = pct;
    if (pct_clamped > 99)
        pct_clamped = 99;
    pl_adjust_power_gauge(((signed char *)0x0C32E210)[pct_clamped / 20]);
}

int pl_add_gauge_by_value(unsigned char level)
{
    int clamped = level;
    unsigned char bucket;
    if (clamped > 200)
        clamped = 200;
    bucket = clamped / 20;
    return pl_adjust_power_gauge(*(signed char *)(0xC32E216 + bucket));
}

void pl_add_gauge_random(void)
{
    unsigned int rand_val = (unsigned int)(math_rand_float() * 255.0f);
    pl_adjust_power_gauge(((signed char *)0x0C32E221)[rand_val % 16]);
}

int FUN_0c059bf8(int a4)
{
    register int t0;
    register int t2;
    register int t4;

    t0 = a4;
    if ((int)(unsigned char)a4 < 0) {
        t0 = 0x0;
    }
    t2 = t0;
    if ((int)(unsigned char)t0 > (int)0x10) {
        t2 = 0x10;
    }
    t4 = *(signed char *)(((unsigned char)t2 + 0xC32E231));
    return pl_adjust_power_gauge(t4);
}
