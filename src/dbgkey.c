/* debug key-frame viewer text (0c0d2a8c-0c0d2dd8) */

extern int sprintf(char *, int, int, int, const char *, int);
extern void dbg_print_at(char *s, int n, float y, float x, float sx, float sy);
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };

void dbgkey_draw_info(char *obj)
{
    char *buf = (char *)0xC7F36B8;
    char *player;
    float eight = 8.0f;

    sprintf(buf, 0, 0, 0, (const char *)0xC154588, obj[6]);
    dbg_print_at(buf, 7, (float)((obj[5] * 30 + 10) * 8), 24.0f, eight, eight);
    sprintf(buf, 0, 0, 0, (const char *)0xC15459C, (unsigned char)obj[7]);
    dbg_print_at(buf, 7, (float)((obj[5] * 30 + 10) * 8), 32.0f, eight, eight);
    sprintf(buf, 0, 0, 0, (const char *)0xC1545B0, obj[8]);
    dbg_print_at(buf, 7, (float)((obj[5] * 30 + 10) * 8), 40.0f, eight, eight);
    sprintf(buf, 0, 0, 0, (const char *)0xC1545C4, (unsigned char)obj[9]);
    dbg_print_at(buf, 7, (float)((obj[5] * 30 + 10) * 8), 48.0f, eight, eight);
    player = (char *)(0xC7E40C4 + (unsigned short)(obj[5] * 29392));
    sprintf(buf, 0, 0, 0, (const char *)0xC1545D8, (unsigned char)player[29084]);
    dbg_print_at(buf, 7, (float)((obj[5] * 30 + 10) * 8), 56.0f, eight, eight);
    player = (char *)(0xC7E40C4 + (unsigned short)(obj[5] * 29392));
    sprintf(buf, 0, 0, 0, (const char *)0xC1545EC, (unsigned char)player[29094]);
    dbg_print_at(buf, 7, (float)((obj[5] * 30 + 10) * 8), 64.0f, eight, eight);
    player = (char *)(0xC7E40C4 + (unsigned short)(obj[5] * 29392));
    sprintf(buf, 0, 0, 0, (const char *)0xC154600, *(unsigned short *)(player + 29086));
    dbg_print_at(buf, 7, (float)((obj[5] * 30 + 10) * 8), 72.0f, eight, eight);
    sprintf(buf, 0, 0, 0, (const char *)0xC154614, *(unsigned short *)(obj + 162));
    dbg_print_at(buf, 7, (float)((obj[5] * 30 + 10) * 8), 80.0f, eight, eight);
    sprintf(buf, 0, 0, 0, (const char *)0xC154628, (unsigned char)(*(char **)(obj + 28))[257]);
    dbg_print_at(buf, 7, (float)((obj[5] * 30 + 10) * 8), 88.0f, eight, eight);
    sprintf(buf, 0, 0, 0, (const char *)0xC15463C, (unsigned char)(*(char **)(obj + 28))[258]);
    dbg_print_at(buf, 7, (float)((obj[5] * 30 + 10) * 8), 96.0f, eight, eight);
}

int FUN_0c0d2d22(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x5));
    (((struct o48_uint *)(a4))->v) = (*(int *)((((signed char)((((t0 << 2) << 1) + t0) << 2) + 0xC7F31F0) + 0x8)));
    t0 = *(signed char *)((a4 + 0x5));
    (((struct o44_uint *)(a4))->v) = (*(int *)((0xC7F31F0 + (signed char)((((t0 << 2) << 1) + t0) << 2))));
    t0 = *(signed char *)((a4 + 0x5));
    t1 = *(int *)((0xC7F31F0 + (signed char)((((t0 << 2) << 1) + t0) << 2)));
    if ((t1 & 240) != 0) {
        if ((int)((((struct o4C_int *)(a4))->v)) < (int)0xA) {
            (((struct o4C_uint *)(a4))->v) = (((((struct o4C_int *)(a4))->v)) + 0x1);
        }
    } else {
        (((struct o4C_uint *)(a4))->v) = 0x0;
    }
    t0 = t1;
    if ((int)((((struct o4C_int *)(a4))->v)) >= (int)0xA) {
        t1 = *(int *)(((a4 + 0x4C) + 0x4));
        *(unsigned int *)(((a4 + 0x4C) + 0x4)) = (t1 ^ 0x1);
        t0 = (t1 ^ 0x1);
        if ((t1 ^ 0x1) != 0) {
            t1 = *(signed char *)((a4 + 0x5));
            (((struct o48_uint *)(a4))->v) = (*(int *)(((0xC7F31F0 + (signed char)((((t1 << 2) << 1) + t1) << 2)) + 0x0)));
            t0 = 0x48;
        }
    }
    return t0;
}
