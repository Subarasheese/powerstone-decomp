/* player state change (pl_change_state) power form flags input chords and character move hooks (0c0a18f8-0c0a2ee8) */

struct o7222_uchar { char p[0x7222]; unsigned char v; };
int pl_change_state(int, int, int);
struct o2E4_int { char p[0x2E4]; int v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o721E_uchar { char p[0x721E]; unsigned char v; };
int pl_check_power_form_attack_input(int, int, int);
int pl_start_power_form_attack(int);

int FUN_0c0a1a60(int a4);

int FUN_0c0a1a60(int a4)
{
    if ((*(signed char *)((a4 + 0x71BC))) != 2) {
        if ((*(signed char *)((a4 + 0x721E))) == 0) {
            (((struct o7222_uchar *)(a4))->v) = 0x1;
        }
        if ((*(signed char *)((a4 + 0x721E))) == 1) {
            (((struct o7222_uchar *)(a4))->v) = 0x2;
        }
    } else {
        if ((*(signed char *)((a4 + 0x721E))) == 0) {
            (((struct o7222_uchar *)(a4))->v) = 0x3;
        }
        if ((*(signed char *)((a4 + 0x721E))) == 1) {
            (((struct o7222_uchar *)(a4))->v) = 0x4;
        }
    }
    return pl_change_state(a4, 0xB, 0x0);
}

int FUN_0c0a2666(int a4, int a5, int a6)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t4;
    int t9;
    register int t20;
    int t25;
    int t1;
    int t12;
    int t28;

    *(unsigned char *)(((int)stk + 0)) = a5;
    if (((*(signed char *)((a4 + 0x71F1))) != 0) && (t1 = (((struct o71F4_short *)(a4))->v), t1 != 0)) {
        t2 = pl_check_power_form_attack_input(a4, a5, a6);
        if ((signed char)t2 != 0) {
            t3 = pl_start_power_form_attack(a4);
            if ((signed char)t3 == 0) {
                t4 = *(signed char *)(((int)stk + 0));
                if (t4 != 3) {
                    t9 = 0x600;
                    if (t4 != 0) {
                        t9 = 0x400;
                        if (t4 != 1) {
                            t9 = 0x200;
                            if (t4 != 2) {
                                t9 = t4;
                            }
                        }
                    }
                    if (((0x600 & ((((struct o2E4_int *)(a4))->v))) != 0) && (t12 = (((struct o2E4_int *)(a4))->v), (t12 & t9) != 0)) {
                        if (((t9 & ((((struct o2E4_int *)(a4))->v))) & 0x400) != 0) {
                            (((struct o721E_uchar *)(a4))->v) = 0x0;
                        } else {
                            (((struct o721E_uchar *)(a4))->v) = 0x1;
                        }
                        FUN_0c0a1a60(a4);
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x1;
        }
        t20 = *(signed char *)(((int)stk + 0));
        if (t20 != 3) {
            t25 = 0x600;
            if (t20 != 0) {
                t25 = 0x400;
                if (t20 != 1) {
                    t25 = 0x200;
                    if (t20 != 2) {
                        t25 = t20;
                    }
                }
            }
            if (((0x600 & ((((struct o2E4_int *)(a4))->v))) != 0) && (t28 = (((struct o2E4_int *)(a4))->v), (t28 & t25) != 0)) {
                if (((t25 & ((((struct o2E4_int *)(a4))->v))) & 0x400) != 0) {
                    (((struct o721E_uchar *)(a4))->v) = 0x0;
                } else {
                    (((struct o721E_uchar *)(a4))->v) = 0x1;
                }
                FUN_0c0a1a60(a4);
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}
