/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0afac2-0c0b0150) */

extern int FUN_0c06231c(int *, int, int);
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_set_record(int, int);
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
int FUN_0c0555dc(void);

void FUN_0c0afac2(unsigned char *owner)
{
    int *sub_obj = *(int **)(owner + 0x2E4);

    if (--sub_obj[11] == 0) {
        sub_obj[11] = 2;
        sub_obj[10] = (sub_obj[10] + 1) % 3;
        FUN_0c06231c(sub_obj, 0xC664958, sub_obj[10] + 39);
    }
}

int FUN_0c0afb0a(int a4)
{
    register int t0;

    t0 = (((struct oF2_short *)(a4))->v);
    (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct oF2_ushort *)(a4))->v) = 0x3C;
        (((struct o101_uchar *)(a4))->v) = 0x1A;
        (((struct o102_uchar *)(a4))->v) = 0x0;
        return obj_set_record(a4, 0x2A);
    }
    return 0xF2;
}

int FUN_0c0b0048(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;

    t0 = *(signed char *)((a4 + 0x8));
    t1 = *(int *)((a4 + 0x1C));
    t2 = t0;
    if (t0 == 0) {
        t0 = FUN_0c0555dc();
        if (t0 != 0) {
            *(unsigned int *)((((((struct o2E0_int *)(a4))->v)) + 0x10)) = 0x0;
            *(unsigned int *)((((((struct o2E4_int *)(a4))->v)) + 0x10)) = 0x0;
            *(unsigned char *)((a4 + 0x8)) = 0x1;
            t0 = 0x1;
        } else {
            t0 = *(signed char *)((a4 + 0x9));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        t4 = t0;
                        if (t0 != 3) {
                        } else {
                            t0 = *(int *)((((((struct o2E0_int *)(a4))->v)) + 0x10));
                            t5 = (unsigned short)(t0 + 0xFC72);
                            if ((int)(short)(unsigned short)(t0 + 0xFC72) <= 0) {
                                *(unsigned char *)((a4 + 0x9)) = 0x0;
                                t5 = 0x0;
                            }
                            *(unsigned int *)((((((struct o2E0_int *)(a4))->v)) + 0x10)) = t5;
                            *(unsigned int *)((((((struct o2E4_int *)(a4))->v)) + 0x10)) = (unsigned short)(-t5);
                            t4 = 0x2E4;
                        }
                        t0 = t4;
                    } else {
                        t4 = *(signed char *)((t1 + 0x8));
                        t5 = t4;
                        if (((int)t4 >= (int)0x5) && ((int)t4 < (int)0x9)) {
                        } else {
                            t4 = *(signed char *)((a4 + 0x9));
                            *(unsigned char *)((a4 + 0x9)) = (t4 + 0x1);
                            t5 = (t4 + 0x1);
                        }
                        t0 = t5;
                    }
                    t4 = t0;
                } else {
                    t0 = *(int *)((((((struct o2E0_int *)(a4))->v)) + 0x10));
                    t5 = (unsigned short)(t0 + 0x71C);
                    if ((int)(unsigned short)(t0 + 0x71C) >= (int)0x2E38) {
                        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                        t5 = 0x2E38;
                    }
                    *(unsigned int *)((((((struct o2E0_int *)(a4))->v)) + 0x10)) = t5;
                    *(unsigned int *)((((((struct o2E4_int *)(a4))->v)) + 0x10)) = (unsigned short)(-t5);
                    t4 = 0x2E4;
                }
                t0 = t4;
            } else {
                t4 = *(signed char *)((t1 + 0x8));
                t1 = t4;
                if (((int)t4 >= (int)0x5) && ((int)t4 < (int)0x9)) {
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                    *(unsigned int *)((((((struct o2E0_int *)(a4))->v)) + 0x10)) = 0x0;
                    *(unsigned int *)((((((struct o2E4_int *)(a4))->v)) + 0x10)) = 0x0;
                    t1 = 0x2E4;
                }
                t0 = t1;
            }
        }
        t2 = t0;
    }
    return t2;
}
