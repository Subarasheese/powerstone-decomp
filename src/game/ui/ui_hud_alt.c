/* HUD: init, gauges, combo and hit counter, win marks, per-frame draw dispatcher (0c02d774-0c02d9e0) */

/* named globals (symbols.txt) */
extern char g_hud_state[];
int memset(int, int, int);
struct o71D4_short { char p[0x71D4]; short v; };
struct o71D6_short { char p[0x71D6]; short v; };
struct o71D8_short { char p[0x71D8]; short v; };
int FUN_0c0e6d00(void);

int FUN_0c02d84a(void)
{
    register int t0;
    register int t3;
    register int t4;
    register int t5;

    t0 = 0x0;
    for (;;) {
        memset((0xC366EA4 + (signed char)((((t0 << 2) << 1) + t0) << 2)), 0x0, 0x24);
        t3 = (signed char)((((t0 << 2) << 1) + t0) << 2);
        t4 = ((unsigned short)t0 * (unsigned short)0x78);
        t0 = (t0 + 0x1);
        t5 = *(signed char *)((0x4F + ((unsigned char)t4 + 0xC7F2DF0)));
        *(unsigned char *)(((0xC366EA4 + t3) + 0x4)) = t5;
        *(unsigned char *)(((0xC366EA4 + t3) + 0x3)) = t5;
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    return t5;
}

int FUN_0c02d8e0(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t1 = ((int)g_hud_state);
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        *(unsigned char *)((((0xD4 + t1) + (short)(((((t2 << 1) + t2) << 2) << 2) << 2)) + 0x1)) = t2;
        *(unsigned short *)((((0xD4 + t1) + (short)(((((t2 << 1) + t2) << 2) << 2) << 2)) + 0x8)) = ((((struct o71D4_short *)(((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4)))->v));
        *(unsigned short *)((((0xD4 + t1) + (short)(((((t2 << 1) + t2) << 2) << 2) << 2)) + 0xA)) = ((((struct o71D8_short *)(((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4)))->v));
        t5 = (((struct o71D6_short *)(((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4)))->v);
        *(unsigned short *)((((0xD4 + t1) + (short)(((((t2 << 1) + t2) << 2) << 2) << 2)) + 0xC)) = t5;
        if (t5 != 0) {
            t5 = 0x72D0;
            t5 = ((unsigned short)t2 * (unsigned short)t5);
            t5 = (unsigned short)t5;
            t5 = (t5 + 0xC7E40C4);
            t5 = ((((struct o71D6_short *)(t5))->v));
            t5 = (t5 - 1);
            t6 = FUN_0c0e6d00();
            *(unsigned char *)((t0 + 0x1)) = (t6 + 0x1);
            *(unsigned char *)((t0 + 0x0)) = (t6 + 0x1);
        } else {
            *(unsigned char *)((((0xD4 + t1) + (short)(((((t2 << 1) + t2) << 2) << 2) << 2)) + 0x3)) = 0x1;
            t6 = t5;
            t7 = t1;
            t8 = t2;
            t9 = t3;
        }
        t4 = (short)(((((t2 << 1) + t2) << 2) << 2) << 2);
        t5 = t6;
        t1 = t7;
        t2 = t8;
        t3 = t9;
        t5 = 0x1E;
        t6 = t9;
        for (;;) {
            *(unsigned short *)((((t6 << 1) + (0xB0 + ((0xD4 + t1) + t4))) + 0x0)) = t5;
            t7 = ((0xBA + ((0xD4 + t1) + t4)) + t6);
            t6 = (t6 + 0x1);
            *(unsigned char *)((t7 + 0x0)) = t3;
            t5 = (t5 + 0x8);
            if ((int)t6 >= (int)0x5) {
                break;
            }
        }
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)0x2) {
            break;
        }
    }
    return ((0xD4 + t1) + t4);
}
