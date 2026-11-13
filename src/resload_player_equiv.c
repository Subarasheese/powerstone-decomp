/* per-player motion data and sound pointer table setup, model utilities (0c062b1c-0c062de8) */

extern int res_load_file_raw(int);
extern void *memcpy(void *, const void *, unsigned int);
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };

int res_load_pl_motion_data(char slot_idx, char stage)
{
    char *base = (char *)0x0C664B50 + slot_idx * 0xB5EC8;
    char *dst;
    int *row;
    int *entry;
    int idx, off, len, size;

    res_load_file_raw(((int *)0x0C14E488)[stage]);
    dst = base + 0xAAE88;
    row = (int *)(0x0C14E4C0 + (short)(stage * 120));
    for (idx = 0; idx < 5; idx++) {
        memcpy(dst, (char *)(row[2 * idx] + 0x0CC00000), row[2 * idx + 1]);
        dst += 512;
    }
    *(int *)base = (int)(base + 20);
    for (idx = 0; idx < 5; idx++) {
        entry = row + 2 * (5 + idx);
        len = entry[1];
        memcpy(*(char **)(base + 4 * idx), (char *)(entry[0] + 0x0CC00000), len);
        if (idx + 1 < 5)
            *(int *)(base + 4 * idx + 4) = *(int *)(base + 4 * idx) + len;
    }
    *(int *)(base + 0xA1234) = (int)(base + 0xA1248);
    entry = row + 20;
    off = 0;
    for (idx = 0; idx < 5; idx++) {
        len = entry[1];
        memcpy(*(char **)(base + 0xA1234 + 4 * idx), (char *)(entry[0] + 0x0CC00000), len);
        if (idx + 1 < 5)
            *(int *)(base + 0xA1234 + off + 4) = *(int *)(base + 0xA1234 + off) + len;
        entry += 2;
        off += 4;
    }
    size = res_load_file_raw(((int *)0x0C14EAD8)[stage]);
    memcpy(base + 0xAB888, (char *)0x0CC00000, size);
    return 0;
}

int FUN_0c062cf4(int a4, int a5)
{
    *(unsigned int *)((((((((signed char)a4 << 1) << 2) << 2) << 1) + 0xC7D08E0) + 0x0)) = (*(int *)(((((signed char)a5 << 2) + 0xC336660) + 0x0)));
    *(unsigned int *)((((((((signed char)a4 << 1) << 2) << 2) << 1) + 0xC7D08E0) + 0x4)) = ((*(int *)(((((signed char)a5 << 2) + 0xC336660) + 0x0))) + 0x640);
    *(unsigned int *)((((((((signed char)a4 << 1) << 2) << 2) << 1) + 0xC7D08E0) + 0x8)) = ((*(int *)(((((signed char)a5 << 2) + 0xC336660) + 0x0))) + 0x1900);
    *(unsigned int *)((((((((signed char)a4 << 1) << 2) << 2) << 1) + 0xC7D08E0) + 0xC)) = ((*(int *)(((((signed char)a5 << 2) + 0xC336660) + 0x0))) + 0x1F40);
    *(unsigned int *)((((((((signed char)a4 << 1) << 2) << 2) << 1) + 0xC7D08E0) + 0x10)) = ((*(int *)(((((signed char)a5 << 2) + 0xC336660) + 0x0))) + 0x20D0);
    *(unsigned int *)((((((((signed char)a4 << 1) << 2) << 2) << 1) + 0xC7D08E0) + 0x14)) = ((*(int *)(((((signed char)a5 << 2) + 0xC336660) + 0x0))) + 0x22C4);
    *(unsigned int *)(((((((((signed char)a4 << 1) << 2) << 2) << 1) + 0xC7D08E0) + 0x20) + 0x0)) = ((*(int *)(((((signed char)a5 << 2) + 0xC336660) + 0x0))) + 0x251C);
    *(unsigned int *)(((((((((signed char)a4 << 1) << 2) << 2) << 1) + 0xC7D08E0) + 0x20) + 0x4)) = ((*(int *)(((((signed char)a5 << 2) + 0xC336660) + 0x0))) + 0x26AC);
    *(unsigned int *)(((((((((signed char)a4 << 1) << 2) << 2) << 1) + 0xC7D08E0) + 0x20) + 0x8)) = ((*(int *)(((((signed char)a5 << 2) + 0xC336660) + 0x0))) + 0x2904);
    *(unsigned int *)(((((((((signed char)a4 << 1) << 2) << 2) << 1) + 0xC7D08E0) + 0x20) + 0xC)) = ((*(int *)(((((signed char)a5 << 2) + 0xC336660) + 0x0))) + 0x2C24);
    *(unsigned int *)(((((((((signed char)a4 << 1) << 2) << 2) << 1) + 0xC7D08E0) + 0x20) + 0x10)) = ((*(int *)(((((signed char)a5 << 2) + 0xC336660) + 0x0))) + 0x2DB4);
    *(unsigned int *)(((((((((signed char)a4 << 1) << 2) << 2) << 1) + 0xC7D08E0) + 0x20) + 0x14)) = ((*(int *)(((((signed char)a5 << 2) + 0xC336660) + 0x0))) + 0x2FA8);
    return 0x0;
}

int FUN_0c062d78(void)
{
    (((struct o0_uint *)0xC7D0960)->v) = 0xC13FDB0;
    (((struct o4_uint *)0xC7D0960)->v) = 0xC1405B0;
    (((struct o8_uint *)0xC7D0960)->v) = 0xC1411B0;
    (((struct oC_uint *)0xC7D0960)->v) = 0xC1419B0;
    (((struct o10_uint *)0xC7D0960)->v) = 0xC1421B0;
    (((struct o14_uint *)0xC7D0960)->v) = 0xC142BB0;
    return 0x0;
}

int FUN_0c062da2(void)
{
    return 0x0;
}

int FUN_0c062da6(void)
{
    return 0x0;
}
