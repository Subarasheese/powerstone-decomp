/* motion-id sound table of the secondary actors (0c08c864-0c08d644) */

struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
int ai_roll_chance(int, int);

int ai_run_reaction_script(int a4)
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

    t0 = a4;
    t1 = (*(int *)((a4 + 0x10)));
    for (;;) {
        t3 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        if (t3 != 0) {
            if (t3 != 1) {
                if (t3 != 2) {
                    if (t3 != 3) {
                        if (t3 != 4) {
                            if (t3 != 5) {
                                if (t3 != 6) {
                                    if (t3 != 7) {
                                        if (t3 != 8) {
                                            if (t3 != 9) {
                                                if (t3 != 10) {
                                                    *(unsigned char *)((a4 + 0x0)) = 0x0;
                                                    *(unsigned char *)((a4 + 0x1)) = 0x0;
                                                    *(unsigned char *)((a4 + 0x2)) = 0x0;
                                                    *(unsigned char *)((a4 + 0x3)) = 0x0;
                                                    (((struct o1D_uchar *)(a4))->v) = 0x0;
                                                    (((struct o1E_uchar *)(a4))->v) = 0x0;
                                                    t3 = 0x1E;
                                                } else {
                                                    t4 = ((*(signed char *)((t1 + 0x0))) << 8);
                                                    t5 = *(signed char *)((t1 + 0x1));
                                                    t1 = (t1 + 0x2);
                                                    *(unsigned short *)((a4 + 0xC)) = (t5 | t4);
                                                    *(unsigned char *)((a4 + 0xB)) = 0x1;
                                                    *(unsigned char *)((a4 + 0x6)) = (*(signed char *)((a4 + 0x5)));
                                                    *(unsigned char *)((a4 + 0x5)) = 0x1;
                                                    *(unsigned char *)((a4 + 0x2)) = 0x0;
                                                    *(unsigned char *)((a4 + 0x3)) = 0x0;
                                                    t3 = 0x0;
                                                }
                                                t5 = t3;
                                                t3 = 0x0;
                                            } else {
                                                (((struct o1D_uchar *)(a4))->v) = 0x0;
                                                (((struct o1E_uchar *)(a4))->v) = 0x0;
                                                t5 = 0x1E;
                                                t3 = 0x1;
                                            }
                                            t6 = t5;
                                            t5 = t3;
                                        } else {
                                            (((struct o1E_uchar *)(a4))->v) = 0x0;
                                            t6 = 0x1E;
                                            t5 = 0x1;
                                        }
                                        t3 = t6;
                                        t6 = t5;
                                    } else {
                                        (((struct o1E_uchar *)(a4))->v) = 0x1;
                                        t3 = 0x1E;
                                        t6 = 0x1;
                                    }
                                    t5 = t3;
                                    t3 = t6;
                                } else {
                                    t0 = 0x4;
                                    *(unsigned char *)((a4 + 0x6)) = (*(signed char *)((a4 + 0x5)));
                                    *(unsigned char *)((a4 + 0x5)) = t0;
                                    *(unsigned char *)((a4 + 0x2)) = 0x0;
                                    *(unsigned char *)((a4 + 0x3)) = 0x0;
                                    t5 = 0x0;
                                    t3 = 0x0;
                                }
                                t6 = t5;
                                t5 = t3;
                                t3 = t4;
                                t7 = t0;
                            } else {
                                t8 = 0xC338540;
                                t0 = a4;
                                t9 = ai_roll_chance(t0, (*(int *)((t8 + ((*(signed char *)((a4 + 0x9))) << 2)))));
                                if ((signed char)t9 != 0) {
                                    *(unsigned char *)((a4 + 0x0)) = 0x1;
                                    *(unsigned char *)((a4 + 0x1)) = 0x0;
                                    *(unsigned char *)((a4 + 0x2)) = 0x0;
                                    *(unsigned char *)((a4 + 0x3)) = 0x0;
                                    t9 = 0x0;
                                } else {
                                    *(unsigned char *)((a4 + 0x0)) = 0x0;
                                    *(unsigned char *)((a4 + 0x1)) = 0x0;
                                    *(unsigned char *)((a4 + 0x2)) = 0x0;
                                    *(unsigned char *)((a4 + 0x3)) = 0x0;
                                    (((struct o1D_uchar *)(a4))->v) = 0x0;
                                    (((struct o1E_uchar *)(a4))->v) = 0x0;
                                    t9 = 0x1E;
                                }
                                t6 = t9;
                                t5 = 0x0;
                            }
                            t9 = t6;
                            t6 = t5;
                            t5 = t3;
                            t3 = t7;
                        } else {
                            t7 = *(signed char *)((t1 + 0x0));
                            t1 = (t1 + 0x1);
                            t0 = 0x3;
                            *(unsigned short *)((a4 + 0xC)) = t7;
                            t7 = *(signed char *)((t1 + 0x0));
                            t1 = (t1 + 0x1);
                            *(unsigned short *)((a4 + 0xE)) = t7;
                            *(unsigned char *)((a4 + 0x6)) = (*(signed char *)((a4 + 0x5)));
                            *(unsigned char *)((a4 + 0x5)) = t0;
                            *(unsigned char *)((a4 + 0x2)) = 0x0;
                            *(unsigned char *)((a4 + 0x3)) = 0x0;
                            t9 = 0x0;
                            t6 = 0x0;
                            t5 = t4;
                            t3 = t0;
                        }
                        t7 = t9;
                        t9 = t6;
                        t6 = t5;
                        t5 = t3;
                    } else {
                        t8 = 0xC150774;
                        t0 = a4;
                        t3 = ai_roll_chance(t0, t8);
                        t8 = (signed char)t3;
                        t9 = 0x1;
                        if ((signed char)t3 != 0) {
                            *(unsigned char *)((a4 + 0x0)) = 0x1;
                            *(unsigned char *)((a4 + 0x1)) = 0x0;
                            *(unsigned char *)((a4 + 0x2)) = 0x0;
                            *(unsigned char *)((a4 + 0x3)) = 0x0;
                            t8 = 0x0;
                            t9 = 0x0;
                        }
                        t7 = t8;
                    }
                    t3 = t7;
                    t7 = t9;
                    t8 = t6;
                    t6 = t5;
                } else {
                    t5 = *(signed char *)((t1 + 0x0));
                    t1 = (t1 + 0x1);
                    t0 = 0xC3383CC;
                    t4 = (*(int *)((t0 + (t5 << 2))));
                    *(unsigned int *)((a4 + 0x14)) = t4;
                    t4 = ((*(signed char *)((t1 + 0x0))) << 8);
                    t5 = *(signed char *)((t1 + 0x1));
                    t1 = (t1 + 0x2);
                    *(unsigned short *)((a4 + 0xC)) = (t5 | t4);
                    t5 = *(signed char *)((t1 + 0x0));
                    t1 = (t1 + 0x1);
                    t4 = (*(int *)((t0 + (t5 << 2))));
                    t0 = 0x2;
                    *(unsigned int *)((a4 + 0x18)) = t4;
                    *(unsigned char *)((a4 + 0x6)) = (*(signed char *)((a4 + 0x5)));
                    *(unsigned char *)((a4 + 0x5)) = t0;
                    *(unsigned char *)((a4 + 0x2)) = 0x0;
                    *(unsigned char *)((a4 + 0x3)) = 0x0;
                    t3 = 0x0;
                    t7 = 0x0;
                    t8 = t4;
                    t6 = t0;
                }
                t5 = t3;
                t3 = t7;
                t7 = t8;
                t8 = t6;
            } else {
                t4 = ((*(signed char *)((t1 + 0x0))) << 8);
                t6 = *(signed char *)((t1 + 0x1));
                t1 = (t1 + 0x2);
                *(unsigned short *)((a4 + 0xC)) = (t6 | t4);
                *(unsigned char *)((a4 + 0xB)) = 0x0;
                *(unsigned char *)((a4 + 0x6)) = (*(signed char *)((a4 + 0x5)));
                *(unsigned char *)((a4 + 0x5)) = 0x1;
                *(unsigned char *)((a4 + 0x2)) = 0x0;
                *(unsigned char *)((a4 + 0x3)) = 0x0;
                t5 = 0x0;
                t3 = 0x0;
                t7 = t4;
                t8 = t0;
            }
            t2 = t5;
            t5 = t3;
            t3 = t7;
            t6 = t8;
        } else {
            t4 = ((*(signed char *)((t1 + 0x0))) << 8);
            t7 = *(signed char *)((t1 + 0x1));
            t1 = (t1 + 0x2);
            *(unsigned short *)((a4 + 0xC)) = (t7 | t4);
            *(unsigned char *)((a4 + 0x6)) = (*(signed char *)((a4 + 0x5)));
            *(unsigned char *)((a4 + 0x5)) = 0x0;
            *(unsigned char *)((a4 + 0x2)) = 0x0;
            *(unsigned char *)((a4 + 0x3)) = 0x0;
            t2 = 0x0;
            t5 = 0x0;
            t3 = t4;
            t6 = t0;
        }
        t4 = t3;
        t0 = t6;
        if ((signed char)t5 != 0) continue;
        break;
    }
    *(unsigned int *)((a4 + 0x10)) = t1;
    return t2;
}
