
int FUN_0c0c9b08(int a4)
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
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = *(int *)((a4 + 0x1C));
    if ((*(signed char *)((t0 + 0x71BA))) != 11) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
    }
    t1 = FUN_0c0555dc();
    if (t1 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
    }
    FUN_0c0c9a4c(a4, t0);
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                t2 = (((struct o2E0_int *)(a4))->v);
                (((struct o1C_float *)(t2))->v) = (((((struct o1C_float *)(t2))->v)) - 0.099999994f);
                t2 = (((struct o2E0_int *)(a4))->v);
                (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) - 0.099999994f);
                t2 = 0x1C;
                if (!(((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v)) > 0.0f)) {
                    t3 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t3 + 0x1);
                    t2 = (t3 + 0x1);
                }
                t3 = t2;
            } else {
                t2 = t1;
                if (t1 == 3) {
                    t2 = (FUN_0c059330(a4));
                }
                t3 = t2;
            }
            t1 = t3;
        } else {
            if ((*(signed char *)((a4 + 0xB))) != 0) {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) - 1);
            }
            if ((*(signed char *)((a4 + 0xC))) != 0) {
                *(unsigned char *)((a4 + 0xC)) = ((*(signed char *)((a4 + 0xC))) - 1);
            }
            if ((*(signed char *)((a4 + 0xD))) != 0) {
                *(unsigned char *)((a4 + 0xD)) = ((*(signed char *)((a4 + 0xD))) - 1);
                *(unsigned char *)((a4 + 0xB)) = 0x1;
            }
            if ((*(signed char *)((a4 + 0xD))) == 0) {
                u0 = (((struct oF0_float *)(a4))->v);
                FUN_0c0c9eb8(a4);
                if ((*(signed char *)((a4 + 0xF))) == 0) {
                    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x10B))) == 0) {
                        (((struct oF0_float *)(a4))->v) = (((((struct oF0_float *)(a4))->v)) + 100.0f);
                    }
                } else {
                    if ((*(signed char *)((a4 + 0xB))) != 0) {
                        u1 = (((struct oF0_float *)(a4))->v);
                        if ((((u1 - u0) + 100.0f) > 0.0f) && (200.0f > ((u1 - u0) + 100.0f))) {
                            (((struct oF0_float *)(a4))->v) = u0;
                        }
                    }
                }
            }
            FUN_0c0c99c0(a4, 0x0, 0x1, ((((struct oF0_float *)(a4))->v)));
            FUN_0c0c9d18(a4);
            FUN_0c0ca050(a4);
            t2 = (((struct oEE_short *)(a4))->v);
            u0 = *(float *)(((t2 << 2) + 0xC33C998));
            u1 = (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v);
            t3 = (t2 << 2);
            u2 = u0;
            if (!(u1 > u0)) {
                t2 = (((struct o2E0_int *)(a4))->v);
                (((struct o1C_float *)(t2))->v) = (((((struct o1C_float *)(t2))->v)) + 0.099999994f);
                t4 = (((struct o2E0_int *)(a4))->v);
                u0 = (((struct o20_float *)(t4))->v);
                (((struct o20_float *)(t4))->v) = (u0 + 0.099999994f);
                t3 = t2;
                u2 = (u0 + 0.099999994f);
            }
            t2 = (((struct oEE_short *)(t0))->v);
            t4 = 0xEE;
            if (t2 != 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                t5 = t3;
                t3 = t2;
                t2 = 0x0;
                t6 = (*(int *)((a4 + 0x18)));
                u0 = u1;
                u1 = u2;
                for (;;) {
                    if ((int)t2 >= (int)(*(signed char *)((a4 + 0xE)))) {
                        break;
                    }
                    t5 = (*(int *)((t6 + 0x10)));
                    if (t5 == 0xC0CA198) {
                        FUN_0c059330(t6);
                    } else {
                        t7 = t5;
                        t8 = t3;
                        u2 = u0;
                        u3 = u1;
                    }
                    u0 = u2;
                    u1 = u3;
                    t6 = (*(int *)((t6 + 0x18)));
                    t5 = t7;
                    t3 = t8;
                    t2 = (t2 + 0x1);
                }
                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                t4 = 0x2E4;
            }
            t1 = t4;
        }
        t2 = t1;
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        t1 = (((struct o2E0_int *)(a4))->v);
        (((struct o20_float *)(t1))->v) = 1.0f;
        (((struct o1C_float *)(t1))->v) = 1.0f;
        (((struct oF0_float *)(a4))->v) = 0.0f;
        *(unsigned char *)((a4 + 0xF)) = 0x0;
        *(unsigned char *)((a4 + 0xE)) = 0x0;
        *(unsigned char *)((a4 + 0xD)) = 0x0;
        *(unsigned char *)((a4 + 0xC)) = 0x0;
        *(unsigned char *)((a4 + 0xB)) = 0x0;
        if ((*(signed char *)((a4 + 0xB))) != 0) {
            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) - 1);
        }
        if ((*(signed char *)((a4 + 0xC))) != 0) {
            *(unsigned char *)((a4 + 0xC)) = ((*(signed char *)((a4 + 0xC))) - 1);
        }
        if ((*(signed char *)((a4 + 0xD))) != 0) {
            *(unsigned char *)((a4 + 0xD)) = ((*(signed char *)((a4 + 0xD))) - 1);
            *(unsigned char *)((a4 + 0xB)) = 0x1;
        }
        if ((*(signed char *)((a4 + 0xD))) == 0) {
            u0 = (((struct oF0_float *)(a4))->v);
            FUN_0c0c9eb8(a4);
            if ((*(signed char *)((a4 + 0xF))) == 0) {
                if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x10B))) == 0) {
                    (((struct oF0_float *)(a4))->v) = (((((struct oF0_float *)(a4))->v)) + 100.0f);
                }
            } else {
                if ((*(signed char *)((a4 + 0xB))) != 0) {
                    u1 = (((struct oF0_float *)(a4))->v);
                    if ((((u1 - u0) + 100.0f) > 0.0f) && (200.0f > ((u1 - u0) + 100.0f))) {
                        (((struct oF0_float *)(a4))->v) = u0;
                    }
                }
            }
        }
        FUN_0c0c99c0(a4, 0x0, 0x1, ((((struct oF0_float *)(a4))->v)));
        FUN_0c0c9d18(a4);
        FUN_0c0ca050(a4);
        t1 = (((struct oEE_short *)(a4))->v);
        u0 = *(float *)(((t1 << 2) + 0xC33C998));
        u1 = (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v);
        t3 = (t1 << 2);
        u2 = u0;
        if (!(u1 > u0)) {
            t1 = (((struct o2E0_int *)(a4))->v);
            (((struct o1C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) + 0.099999994f);
            t4 = (((struct o2E0_int *)(a4))->v);
            u0 = (((struct o20_float *)(t4))->v);
            (((struct o20_float *)(t4))->v) = (u0 + 0.099999994f);
            t3 = t1;
            u2 = (u0 + 0.099999994f);
        }
        t1 = (((struct oEE_short *)(t0))->v);
        t0 = 0xEE;
        if (t1 != 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            t4 = t3;
            t3 = t1;
            t1 = 0x0;
            t5 = (*(int *)((a4 + 0x18)));
            u0 = u1;
            u1 = u2;
            for (;;) {
                if ((int)t1 >= (int)(*(signed char *)((a4 + 0xE)))) {
                    break;
                }
                t4 = (*(int *)((t5 + 0x10)));
                if (t4 == 0xC0CA198) {
                    FUN_0c059330(t5);
                } else {
                    t6 = t4;
                    t7 = t3;
                    u2 = u0;
                    u3 = u1;
                }
                u0 = u2;
                u1 = u3;
                t5 = (*(int *)((t5 + 0x18)));
                t4 = t6;
                t3 = t7;
                t1 = (t1 + 0x1);
            }
            *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
            t0 = 0x2E4;
        }
        t2 = t0;
    }
    return t2;
}
