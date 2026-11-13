/* stage object helpers: layout position load contact lists mode/owner setters (0c0abf64-0c0ac7f0) */

float math_cos_angle16(int angle);
float math_sin_angle16(int angle);
float FUN_0c02649a(char *obj, int top);
void thunk_FUN_0c062242(char *slot, float *pos);
float FUN_0c0e2340(float *v);
extern float _builtin_sqrtf(float);
extern float _builtin_fabsf(float);
#define PL(i) ((char *)((unsigned short)((unsigned short)(i) * (unsigned short)0x72D0) + 0xC7E40C4))
#define B(o, n) (*(signed char *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define NEXT(n) (*(char **)((n) + 24))
#define TYPE(n, k) (*(unsigned char *)((char *)0x0C33BFD8 + B(n, 0x314) * 10 + (k)))

void obj_collect_slot_contacts(char *o)
{
    struct { char *pl; float a, b, c, d, e, f, g; float hand[3]; float v[3]; } s;
    char *n, *best;
    float bd, d, r, lo;
    signed char t;

    math_cos_angle16(0x14000 - *(int *)(o + 48));
    math_sin_angle16(0x14000 - *(int *)(o + 48));
    bd = 9999.0f;
    best = 0;
    for (n = *(char **)0x0C7E4078; n != 0; n = NEXT(n)) {
        switch (B(n, 4)) {
        case 1:
            if (B(o, 0x71F1) == 0) {
                if (TYPE(n, 6) == 1) {
                    t = B(o, 4);
                    if (t == 3 || t == 6 || t == 7)
                        continue;
                } else if (TYPE(n, 6) == 2) {
                    t = B(o, 4);
                    if (!(t == 4 || t == 5 || t == 9))
                        continue;
                }
            }
            t = B(n, 0x30D);
            if (t == 12 || t == 10 || t == 11 || t == 6 || t == 7 || t == 8 || t == 9) {
                s.pl = PL(B(o, 3));
                thunk_FUN_0c062242(s.pl + 0x300 + (short)(B(s.pl, 0x71F1) * 3520) + 704, s.hand);
                s.v[0] = s.hand[0] - F(n, 32);
                s.v[1] = s.hand[1] - F(n, 36);
                s.v[2] = s.hand[2] - F(n, 40);
                d = FUN_0c0e2340(s.v);
                if (!(300.0f > d))
                    continue;
                if (!(bd > d))
                    continue;
            } else {
                if (B(n, 0x30D) != 0)
                    continue;
                s.v[1] = F(o, 36) - FUN_0c02649a(n, 1);
                if (!(100.0f > _builtin_fabsf(s.v[1])))
                    continue;
                s.v[0] = F(n, 32) - F(o, 32);
                s.v[2] = F(n, 40) - F(o, 40);
                d = _builtin_sqrtf(s.v[2] * s.v[2] + s.v[0] * s.v[0]);
                if (((unsigned char *)0x0C33BFDE)[B(n, 0x314) * 10] == 2)
                    d = d - 100.0f;
                if (!(200.0f > d))
                    continue;
                if (!(bd > d))
                    continue;
            }
            break;
        case 2:
            if (B(n, 0x30D) != 0)
                continue;
            if (B(o, 0x71BC) == 2) {
                r = 150.0f;
            } else {
                if (*(signed char *)(0x0C7F302C + 37) == 8) {
                    if (B(o, 0x71F1) != 0)
                        continue;
                    t = B(o, 4);
                    if (t == 4 || t == 5 || t == 9)
                        continue;
                }
                r = 100.0f;
            }
            s.f = r;
            s.e = FUN_0c02649a(n, 1);
            s.a = FUN_0c02649a(o, 1) + 100.0f;
            s.b = FUN_0c02649a(n, 0);
            lo = FUN_0c02649a(o, 0) + -100.0f;
            if (!(s.a > s.e))
                continue;
            if (!(s.b > lo))
                continue;
            s.v[0] = F(o, 32) - F(n, 32);
            s.v[2] = F(o, 40) - F(n, 40);
            d = _builtin_sqrtf(s.v[2] * s.v[2] + s.v[0] * s.v[0]);
            if (!(s.f > d))
                continue;
            if (!(bd > d))
                continue;
            break;
        case 3:
            if (B(o, 0x71BC) != 2)
                continue;
            if (B(n, 0x30D) != 0)
                continue;
            s.c = FUN_0c02649a(n, 1);
            s.d = FUN_0c02649a(o, 1) + 100.0f;
            s.e = FUN_0c02649a(n, 0);
            lo = FUN_0c02649a(o, 0) + -100.0f;
            if (!(s.d > s.c))
                continue;
            if (!(s.e > lo))
                continue;
            s.v[0] = F(o, 32) - F(n, 32);
            s.v[2] = F(o, 40) - F(n, 40);
            d = _builtin_sqrtf(s.v[2] * s.v[2] + s.v[0] * s.v[0]);
            if (B(o, 0x71BC) != 2)
                continue;
            if (!(150.0f > d))
                continue;
            if (!(bd > d))
                continue;
            break;
        case 4:
            if (B(n, 0x30D) != 0)
                continue;
            s.v[1] = F(o, 36) - F(n, 36);
            if (!(250.0f > _builtin_fabsf(s.v[1])))
                continue;
            s.v[0] = F(o, 32) - F(n, 32);
            s.v[2] = F(o, 40) - F(n, 40);
            d = _builtin_sqrtf(s.v[2] * s.v[2] + s.v[0] * s.v[0]);
            if (!(200.0f > d))
                continue;
            if (!(bd > d))
                continue;
            break;
        default:
            continue;
        }
        best = n;
        bd = d;
    }
    for (n = *(char **)0x0C7E407C; n != 0; n = NEXT(n)) {
        if (B(n, 4) != 6)
            continue;
        if (B(n, 0x30D) == 15) {
            s.pl = PL(B(o, 3));
            thunk_FUN_0c062242(s.pl + 0x300 + (short)(B(s.pl, 0x71F1) * 3520) + 704, s.hand);
            s.v[0] = s.hand[0] - F(n, 32);
            s.v[1] = s.hand[1] - F(n, 36);
            s.v[2] = s.hand[2] - F(n, 40);
            d = FUN_0c0e2340(s.v);
            if (!(400.0f > d))
                continue;
            if (!(bd > d))
                continue;
        } else {
            if (B(n, 0x30D) != 0)
                continue;
            s.v[1] = F(o, 36) - FUN_0c02649a(n, 1);
            if (!(100.0f > _builtin_fabsf(s.v[1])))
                continue;
            s.v[0] = F(n, 32) - F(o, 32);
            s.v[2] = F(n, 40) - F(o, 40);
            d = _builtin_sqrtf(s.v[2] * s.v[2] + s.v[0] * s.v[0]);
            if (!(200.0f > d))
                continue;
            if (!(bd > d))
                continue;
        }
        best = n;
        bd = d;
    }
    if (best != 0)
        best[0x310 + B(o, 3)] = 1;
    *(char **)(o + 0x71C8) = best;
}

int FUN_0c0ac4d0(void)
{
    *(volatile int *)0xC7E4078;
    return ((int (*)(void))(0xC0AC54C))();
}

int FUN_0c0ac55c(int a4, int a5)
{
    int t0;
    register int t1;

    if ((*(signed char *)((a5 + 0x30D))) == 0) {
        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
            t0 = *(signed char *)((a5 + 0x314));
            t1 = *(signed char *)((0xC33BFDE + (((t0 << 2) + t0) << 1)));
            if ((unsigned char)t1 != 1) {
                if ((unsigned char)t1 != 2) {
                    return 0x1;
                }
                t0 = *(signed char *)((a4 + 0x4));
                if ((t0 != 4) && ((t0 != 5) && (t0 != 9))) {
                    return 0x0;
                }
                return 0x1;
            }
            t0 = *(signed char *)((a4 + 0x4));
            if (t0 != 3) {
                if (t0 != 6) {
                    if (t0 != 7) {
                        t0 = *(signed char *)((a4 + 0x4));
                        if ((t0 != 4) && ((t0 != 5) && (t0 != 9))) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0ac5c4(int a4, int a5, int a6, int a7)
{
    return ((int (*)(int, int, int, int))(0xC0AC5F2))(a4, 0x0, a6, a7);
}

int obj_find_hitting_player(int a4)
{
    register int t0;
    register int t9;
    register int t10;
    int t11;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(signed char *)((a4 + 0x2A8)))) {
            return 0x0;
        }
        if (((*(signed char *)(((*(int *)((((0x294 + a4) + (t0 << 2)) + 0x0))) + 0x2))) == 0) && ((t9 = *(int *)((((t0 << 2) + (0x294 + a4)) + 0x0)), t10 = *(signed char *)((t9 + 0x9)), t10 == 1) && (t11 = *(signed char *)((t9 + 0x71DD)), t11 == 22))) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return t9;
}

int FUN_0c0ac640(int a4)
{
    register int t0;
    register int t5;
    int t7;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(signed char *)((a4 + 0x2A8)))) {
            return 0x0;
        }
        t5 = *(int *)((((t0 << 2) + (0x294 + a4)) + 0x0));
        if (((*(signed char *)((t5 + 0x2))) == 0) && (t7 = *(signed char *)((t5 + 0x71BA)), t7 == 6)) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return 0x1;
}

int FUN_0c0ac672(int a4)
{
    register int t0;
    register int t5;
    int t7;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(signed char *)((a4 + 0x2A8)))) {
            return 0x0;
        }
        t5 = *(int *)((((t0 << 2) + (0x294 + a4)) + 0x0));
        if (((*(signed char *)((t5 + 0x2))) == 2) && (t7 = *(signed char *)((t5 + 0x4)), t7 == 2)) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return 0x1;
}

int obj_touched_by_slot(int a4, int a5)
{
    if ((*(signed char *)((((signed char)a5 + (0x310 + a4)) + 0x0))) != 0) {
        return 0x1;
    }
    return 0x0;
}

int obj_can_interact(int a4, int a5, int a6, int a7)
{
    if ((signed char)a5 != 0) {
        if ((signed char)a5 != 1) {
            if ((signed char)a5 != 2) {
                if ((signed char)a5 != 5) {
                    if ((signed char)a5 != 6) {
                        if ((signed char)a5 != 7) {
                            if ((signed char)a5 != 9) {
                                if ((signed char)a5 != 10) {
                                    if ((signed char)a5 != 11) {
                                        return 0x0;
                                    }
                                    return ((int (*)(int, int, int, int))(0xC0AC762))(a4, a6, a6, a7);
                                }
                                return ((int (*)(int, int, int, int))(0xC0AC75E))(a4, a6, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(0xC0AC752))(a4, a6, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC0AC748))(a4, a6, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC0AC72E))(a4, a6, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0AC714))(a4, a6, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0AC6F6))(a4, a6, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0AC6CC))(a4, a6, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0AC6BA))(a4, a6, a6, a7);
}
