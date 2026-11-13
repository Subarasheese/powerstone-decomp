/* velocity/acceleration/gravity, angle to opponent, stick direction (part 3 of 3 of the same module) (0c09db78-0c09f6a8) */

struct o2DC_int { char p[0x2DC]; int v; };
struct o2FE_short { char p[0x2FE]; short v; };
int pl_get_held_item_class(int, int, int);
int pl_angle_to_opponent(int);
int pl_stick_dir_angle(int);
struct o24_float { char p[0x24]; float v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o7221_uchar { char p[0x7221]; unsigned char v; };
struct o72B1_uchar { char p[0x72B1]; unsigned char v; };

int FUN_0c09e7fc(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t6;

    t0 = pl_get_held_item_class(a4, a5, a6);
    t1 = (((struct o2FE_short *)(a4))->v);
    t2 = 0x1;
    if ((((int)(unsigned short)t1 <= (int)0xF) || ((int)(unsigned short)t1 >= (int)0x28)) && (((signed char)t0 == 0) || (((signed char)t0 == 5) || (((signed char)t0 == 6) || (((signed char)t0 == 7) || (((signed char)t0 == 8) || (((signed char)t0 == 13) || ((signed char)t0 == 14)))))))) {
        t0 = 0x0;
        if ((*(signed char *)((a4 + 0x72AD))) != 0) {
            t1 = 0x1;
            if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
                t1 = pl_angle_to_opponent(a4);
                t4 = *(short *)0xC7F31E0;
                t5 = pl_stick_dir_angle(a4);
                t6 = (unsigned short)((t1 - t4) - t5);
                if ((0x8000 & (unsigned short)((t1 - t4) - t5)) != 0) {
                    t6 = ((unsigned short)((t1 - t4) - t5) | 0xFFFF0000);
                }
                t1 = 0x0;
                if (((int)t6 > (int)0xFFFFA000) && ((int)t6 < (int)0x6000)) {
                    t1 = 0x1;
                }
            }
            t0 = t1;
        }
        t2 = t0;
    }
    return t2;
}

int FUN_0c09e910(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;
    int t4;
    register int t5;
    register int t6;
    register float u0;

    t6 = pl_get_held_item_class(a4, a5, a6);
    if ((signed char)t6 != 0) {
        return 0x0;
    }
    if ((*(signed char *)((a4 + 0x72AF))) == 0) {
        return 0x0;
    }
    if (0.0f > (((((struct o24_float *)(a4))->v)) - ((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v)))) {
        u0 = ((-((((struct o24_float *)(a4))->v))) + ((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v)));
    } else {
        u0 = (((((struct o24_float *)(a4))->v)) - ((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v)));
    }
    if (u0 > 100.0f) {
        return 0x0;
    }
    if (((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC))) == 0) && (((t0 = *(int *)((a4 + 0x1C)), t5 = *(signed char *)((t0 + 0x71BA)), t5 == 10) && ((t1 = *(signed char *)((t0 + 0x7206)), (int)(unsigned char)t1 <= (int)0xF) && (t2 = *(signed char *)((t0 + 0x100)), t2 != 0))) || ((t5 == 11) && ((t3 = *(signed char *)((t0 + 0x7206)), (int)(unsigned char)t3 <= (int)0xF) && (t4 = *(signed char *)((t0 + 0x100)), t4 != 0))))) {
        if ((((((struct o2E4_int *)(a4))->v)) & 4) != 0) {
            (((struct o72B1_uchar *)(a4))->v) = 0x1;
            (((struct o7221_uchar *)(a4))->v) = 0xC;
            return ((int (*)(int, int, int, int))(0xC09EA50))(0x1, t5, a6, a7);
        }
        if ((((((struct o2E4_int *)(a4))->v)) & 240) != 0) {
            (((struct o72B1_uchar *)(a4))->v) = 0x1;
            t0 = pl_stick_dir_angle(a4);
            t1 = *(short *)0xC7F31E0;
            t2 = pl_angle_to_opponent(a4);
            t3 = *(int *)((a4 + 0x1C));
            t4 = (unsigned short)((unsigned short)(t1 + t0) - t2);
            if ((0x8000 & (unsigned short)((unsigned short)(t1 + t0) - t2)) != 0) {
                t4 = ((unsigned short)((unsigned short)(t1 + t0) - t2) | 0xFFFF0000);
            }
            if (((*(signed char *)((0x71BA + t3))) != 11) && (((int)t4 >= (int)0xFFFFF1C8) && ((int)t4 <= (int)0xE38))) {
                (((struct o7221_uchar *)(a4))->v) = 0x9;
                return ((int (*)(void))(0xC09EA50))();
            }
            if (((int)t4 > 0) && ((int)t4 <= (int)0x471C)) {
                (((struct o7221_uchar *)(a4))->v) = 0xA;
                return ((int (*)(void))(0xC09EA50))();
            }
            if ((int)t4 < 0) {
                if ((int)t4 >= (int)0xFFFFB8E4) {
                    (((struct o7221_uchar *)(a4))->v) = 0xB;
                    return ((int (*)(void))(0xC09EA50))();
                }
                return ((int (*)(void))(0xC09EA46))();
            }
            return ((int (*)(void))(0xC09EA46))();
        }
        return 0x0;
    }
    return 0x0;
}
