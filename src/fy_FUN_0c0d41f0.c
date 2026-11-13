/* Round start for the two players: once (flag at +7), clears/toggles state in the 0x0C7F2EE0 block, resets the table at 0x0C7F31BC, copies a side/colour byte into the first player entry (0x0C7E40C4, stride 0x72D0), rolls random values for the second, then toggles the +0x71EC flag of each player whose state matches its partner's, and fires FUN_0c031496; always bumps the counter at +6 and clears +7/+8. */
extern void FUN_0c058f4e(void);
extern void FUN_0c0a2f52(void);
extern void FUN_0c0158d8(void);
extern float FUN_0c0df940(void);
extern void FUN_0c031496(int, int, int, int);

void FUN_0c0d41f0(void)
{
    char *G = (char *)0x0C7F2EE0;
    char *tbl = (char *)0x0C7E40C4;
    char *e1;
    char *p;
    char *q;
    int i;

    if ((unsigned char)G[7] == 0) {
        G[7] = G[7] + 1;
        G[8] = 0;
        FUN_0c058f4e();
        FUN_0c0a2f52();
        ((int *)0x0C7F31BC)[2] = -1;
        ((int *)0x0C7F31BC)[1] = -1;
        ((int *)0x0C7F31BC)[0] = -1;
        FUN_0c0158d8();
        G[0x138] = G[0x138] ^ 1;
        tbl[3] = 0;
        if (G[0x138] == 0)
            tbl[4] = *(char *)0x0C7F3083;
        else
            tbl[4] = *(char *)0x0C7F314C;
        e1 = tbl + 0x72D0;
        tbl[0x71ED] = 1;
        tbl[0x71EC] = 1;
        e1[3] = 1;
        e1[4] = (unsigned int)(FUN_0c0df940() * 255.0f) % 8;
        e1[0x71ED] = 1;
        e1[0x71EC] = (unsigned int)(FUN_0c0df940() * 255.0f) % 2 + 1;
        *(char *)0x0C7F3051 = e1[4];
        for (i = 0; i < 2; i++) {
            p = tbl + (unsigned short)(i * 29392);
            q = *(char **)(p + 28);
            if (p[4] == q[4] && p[0x71EC] == q[0x71EC]) {
                p = tbl + (unsigned short)(i * 29392);
                if (p[0x71EC] == 1)
                    p[0x71EC] = 2;
                else
                    p[0x71EC] = 1;
            }
        }
        FUN_0c031496(0xFF000000, 0, 0, 15);
    }
    G[6] = G[6] + 1;
    G[7] = 0;
    G[8] = 0;
}
