/* Two-step state machine on byte +4 of the object: step 0 advances it, starts effect 18 and sets a 60-frame timer at +50; step 1 polls FUN_0c011870 and stores 15 or 13 into the global at 0xC362A50+49 and clears its state byte. */
extern void FUN_0c01fdc8(void);
extern int FUN_0c01f4c8(int a);
extern int FUN_0c011870(int a, int b);
void FUN_0c01f3e0(char *o)
{
    char *g = (char *)0xC362A50;
    int r;
    switch (o[4]) {
    case 0:
        o[4] = o[4] + 1;
        FUN_0c01fdc8();
        FUN_0c01f4c8(18);
        o[50] = 60;
    case 1:
        r = FUN_0c011870(*(int *)(o + 32), o[52]);
        if (r == -1)
            return;
        if (r == 0)
            g[49] = 15;
        else
            g[49] = 13;
        g[4] = 0;
        break;
    default:
        break;
    }
}
