/* float helper loops and weapon pose setup (059C44..05A6E8) (0c059c44-0c05a6e8) */

int math_vec3_sub(int, int, int);
float math_vec3_length(int);
struct Vec12 { int a, b, c; };
int FUN_0c0e1550(int);

float FUN_0c059c44(int a4, int a5, float f4)
{
    int stk[7];
    register float u0;
    register int t1;
    register int t2;
    register int t7;
    register float u12;
    register int t16;
    register int t47;
    register int t30;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t8;
    register float u9;
    register float u10;
    register float u11;
    register float u13;
    register int t44;
    register float u48;
    register float u49;
    register float u41;
    register float u42;

    u0 = *(float *)0xC059DC8;
    t1 = 0xC059DC8;
    t2 = a5;
    t7 = 0x0;
    u12 = f4;
    for (;;) {
        if ((int)(short)t7 >= (int)(*(int *)((a5 + 0x28)))) {
            break;
        }
        t4 = (short)t7;
        u13 = u0;
        t16 = t4;
        t4 = (t4 << 1);
        t4 = (t4 + t16);
        t6 = (short)t7;
        t3 = (short)t7;
        t4 = (t4 << 2);
        t6 = (t6 << 2);
        t8 = 0x0;
        t3 = (t3 << 1);
        for (;;) {
            if ((int)(short)t8 >= (int)(*(int *)((a5 + 0x28)))) {
                break;
            }
            t47 = t2;
            if ((short)t7 != (short)t8) {
                t1 = (*(int *)((a5 + 0x38)));
                u10 = (*(float *)((((short)t8 << 2) + t1)));
                u11 = (*(float *)((t6 + t1)));
                if (u11 > u10) {
                    t2 = (short)t8;
                    t5 = (*(int *)((a5 + 0x2C)));
                    t30 = t2;
                    t2 = (t2 << 1);
                    t2 = (t2 + t30);
                    t2 = (t2 << 2);
                    t2 = (t2 + t5);
                    t1 = (math_vec3_sub(((int)stk + 0), t2, (t5 + t4)));
                    u9 = (math_vec3_length(((int)stk + 0)));
                    u12 = u9;
                    if (u13 > u12) {
                        t1 = (*(int *)((a5 + 0x20)));
                        u13 = u12;
                        *(unsigned short *)((t3 + t1)) = t8;
                        t1 = (*(int *)((a5 + 0x3C)));
                        *(float *)((t6 + t1)) = u12;
                        t44 = t1;
                    }
                } else {
                    t44 = t1;
                    t47 = t2;
                    u41 = u10;
                    u42 = u11;
                }
                u48 = u41;
                u49 = u42;
            } else {
                t44 = t1;
                u48 = u10;
                u49 = u11;
            }
            u10 = u48;
            u11 = u49;
            t1 = t44;
            t8 = (t8 + 0x1);
            t2 = t47;
        }
        t7 = (t7 + 0x1);
    }
    return u9;
}

int FUN_0c059cec(struct Vec12 *out, int *idx, int *stream)
{
    int *cur = stream + 6;
    int count = 0;
    int item, nitems, rec_flags;

    while (*cur != 0) {
        if (*cur < 0)
            cur += 20;
        rec_flags = *cur++;
        nitems = *cur++;
        if (!(rec_flags & 16))
            nitems = nitems * 3;
        for (item = 0; item < nitems; item++) {
            if (*cur & 1) {
                idx[count] = cur - stream;
                out[count] = *(struct Vec12 *)cur;
                count++;
                cur += 8;
            } else {
                cur += 2;
            }
        }
    }
    return count;
}

int FUN_0c059d7e(int a4, int a5, int a6, int a7)
{

    return ((int (*)(int, int, int, int))(0xC05A112))(a4, a5, a6, a7);
}

int FUN_0c05a164(int a4, int a5, int a6, int a7)
{
    int stk[29];
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x3));
    t1 = *(signed char *)(((0x71F1 + a4) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = (*(int *)((((t1 << 2) + (0xC3837F0 + (((signed char)t0 << 2) << 1))) + 0x0)));
    *(unsigned int *)(((int)stk + 24)) = (*(signed char *)(((t1 + (0xC383800 + ((signed char)t0 << 1))) + 0x0)));
    *(unsigned int *)(((int)stk + 4)) = (((*(int *)0xC7F307C) << 8) << 2);
    if ((*(signed char *)((a4 + 0x1))) == 0) {
        return ((int (*)(int, int, int, int))(0xC05A6C6))((t1 + (0xC383800 + ((signed char)t0 << 1))), t0, a6, a7);
    }
    if ((*(signed char *)((a4 + 0x8))) == 0) {
        return ((int (*)(int, int, int, int))(0xC05A6C6))((t1 + (0xC383800 + ((signed char)t0 << 1))), t0, a6, a7);
    }
    FUN_0c0e1550(0x1);
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 0)));
    return ((int (*)(void))(0xC05A6BA))();
}
