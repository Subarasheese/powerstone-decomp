/* boot/init/shutdown of the system, file loader with retry (gd error handler), boot sequence returning the next scene (0c0612f4-0c061434) */

int FUN_0c0613c4(int a4);
int FUN_0c061400(int a4);

int FUN_0c0612f4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    if ((*(short *)((a4 + 0x0))) != 0) {
        t0 = a4;
        t1 = a5;
        t2 = (a4 + 0x2);
        t3 = 0x0;
        t4 = 0x0;
        t5 = a5;
        t6 = (a4 + 0x2);
        for (;;) {
            if ((int)t4 >= (int)(a6 - 1)) {
                return t3;
            }
            t7 = *(short *)((t6 + 0x0));
            if (((unsigned short)t7 & 0xF000) != 0) {
                if (((unsigned short)t7 & 0xF000) != 0x1000) {
                    break;
                }
                t0 = t6;
                t0 = (FUN_0c061400(t0));
                t1 = 0x0;
                t2 = 0x0;
                t6 = (t6 + 0x4);
                t4 = (t4 + 0x2);
                t3 = (t3 + t0);
                t2 = (t2 + 0xC383828);
                if ((int)t0 > 0) {
                    for (;;) {
                        t7 = *(short *)((t2 + 0x0));
                        t2 = (t2 + 0x2);
                        t1 = (t1 + 0x1);
                        *(unsigned short *)((t5 + 0x0)) = t7;
                        t5 = (t5 + 0x2);
                        if ((int)t1 >= (int)t0) {
                            break;
                        }
                    }
                }
                continue;
            }
            t0 = t6;
            t7 = FUN_0c0613c4(t0);
            t1 = t7;
            t1 = (t1 + 0x1);
            t4 = (t4 + t1);
            t0 = t7;
            t2 = 0x0;
            t7 = (t1 << 1);
            t1 = 0x0;
            t6 = (t6 + t7);
            t3 = (t3 + t0);
            t2 = (t2 + 0xC383828);
            if ((int)t0 > 0) {
                for (;;) {
                    t7 = (*(short *)((t2 + 0x0)));
                    t2 = (t2 + 0x2);
                    t1 = (t1 + 0x1);
                    *(unsigned short *)((t5 + 0x0)) = t7;
                    t5 = (t5 + 0x2);
                    if ((int)t1 >= (int)t0) {
                        break;
                    }
                }
            }
        }
        t0 = 0xFFFFFFFF;
    } else {
        if ((int)(a6 - 1) > 0) {
            t1 = 0x0;
            t2 = a5;
            t3 = (a4 + 0x2);
            for (;;) {
                t4 = *(short *)((t3 + 0x0));
                t3 = (t3 + 0x2);
                t1 = (t1 + 0x1);
                *(unsigned short *)((t2 + 0x0)) = t4;
                t2 = (t2 + 0x2);
                if ((int)t1 >= (int)(a6 - 1)) {
                    break;
                }
            }
        }
        t0 = (a6 - 1);
    }
    return t0;
}

int FUN_0c0613c4(int a4)
{
    int stk[1];
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    *(unsigned short *)(((int)stk + 0)) = ((*(short *)((a4 + 0x0))) & 0xFFF);
    t1 = *(short *)(((int)stk + 0));
    if ((int)(unsigned short)t1 > 0) {
        t2 = 0xC383828;
        t3 = 0x0;
        t4 = (a4 + 0x2);
        for (;;) {
            t3 = (t3 + 0x1);
            t5 = *(short *)((t4 + 0x0));
            t4 = (t4 + 0x2);
            *(unsigned short *)((t2 + 0x0)) = t5;
            t2 = (t2 + 0x2);
            if ((int)(unsigned short)t3 >= (int)(unsigned short)t1) {
                break;
            }
        }
    }
    return (unsigned short)t1;
}

int FUN_0c061400(int a4)
{
    int stk[1];
    register int t1;
    register int t2;
    register int t3;

    *(unsigned short *)(((int)stk + 0)) = ((*(short *)((a4 + 0x0))) & 0xFFF);
    t1 = *(short *)(((int)stk + 0));
    if ((int)(unsigned short)t1 > 0) {
        t2 = 0xC383828;
        t3 = 0x0;
        for (;;) {
            t3 = (t3 + 0x1);
            *(unsigned short *)((t2 + 0x0)) = (*(short *)(((a4 + 0x2) + 0x0)));
            t2 = (t2 + 0x2);
            if ((int)(unsigned short)t3 >= (int)(unsigned short)t1) {
                break;
            }
        }
    }
    return (unsigned short)t1;
}
