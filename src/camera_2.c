/* camera mode request / priority functions (0c0d8f10-0c0d9288) */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o184_uchar { char p[0x184]; unsigned char v; };
struct o1A0_uint { char p[0x1A0]; unsigned int v; };
struct o1A4_uint { char p[0x1A4]; unsigned int v; };
struct oAC_uchar { char p[0xAC]; unsigned char v; };
float math_rand_float(void);
int FUN_0c0e6f24(void);

int cam_force_mode(int a4, int a5, int a6);

int cam_force_mode(int a4, int a5, int a6)
{
    (((struct o0_uchar *)0xC7F29FA)->v) = a4;
    (((struct o3_uchar *)0xC7F29FA)->v) = 0x0;
    (((struct o2_uchar *)0xC7F29FA)->v) = 0x0;
    (((struct o1_uchar *)0xC7F29FA)->v) = 0x0;
    (((struct o4_uchar *)0xC7F29FA)->v) = 0x0;
    *(unsigned char *)0xC7F2AA4 = a6;
    (((struct o0_uchar *)0xC7F2B7C)->v) = a5;
    (((struct o1C_uint *)0xC7F2B7C)->v) = (((unsigned short)((unsigned short)(signed char)a5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20);
    (((struct o20_uint *)0xC7F2B7C)->v) = (((unsigned short)((unsigned short)((((signed char)a5 == 0)) ? 1 : 0) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20);
    return 0x1A4;
}

int cam_request_mode_with_args(int a4, int a5, int a6, int a7)
{
    if ((int)(unsigned char)a5 >= (int)(unsigned char)(*(signed char *)0xC7F2AA4)) {
        (((struct o0_uchar *)0xC7F29FA)->v) = a4;
        (((struct o3_uchar *)0xC7F29FA)->v) = 0x0;
        (((struct o2_uchar *)0xC7F29FA)->v) = 0x0;
        (((struct o1_uchar *)0xC7F29FA)->v) = 0x0;
        (((struct o4_uchar *)0xC7F29FA)->v) = 0x0;
        *(unsigned char *)0xC7F2AA4 = a5;
        (((struct o0_uint *)0xC7F2B98)->v) = a6;
        (((struct o4_uint *)0xC7F2B98)->v) = a7;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0d8fe8(int a4, int a5)
{
    int t0;
    register int t1;

    if (((*(signed char *)0xC7E40CD) == 1) && (t0 = *(signed char *)0xC7EB39D, t0 == 1)) {
        t1 = t0;
    } else {
        t0 = 0xAC;
        if ((int)(unsigned char)(*(signed char *)0xC7F2AA4) <= (int)0x50) {
            (((struct o0_uchar *)0xC7F29FA)->v) = 0x19;
            (((struct o2_uchar *)0xC7F29FA)->v) = a5;
            (((struct o1_uchar *)0xC7F29FA)->v) = a5;
            (((struct o3_uchar *)0xC7F29FA)->v) = 0x0;
            (((struct o4_uchar *)0xC7F29FA)->v) = 0x0;
            *(unsigned char *)0xC7F2AA4 = 0x50;
            (((struct o0_uchar *)0xC7F2B7C)->v) = a4;
            (((struct o1C_uint *)0xC7F2B7C)->v) = (((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20);
            (((struct o20_uint *)0xC7F2B7C)->v) = (((unsigned short)((unsigned short)((((signed char)a4 == 0)) ? 1 : 0) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20);
            t0 = 0x1A4;
        }
        t1 = t0;
    }
    return t1;
}

void FUN_0c0d905e(void)
{
    
}

int FUN_0c0d9078(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    if (((*(signed char *)0xC7E40CD) == 2) && (t0 = *(signed char *)0xC7EB306, t0 != 0)) {
        t0 = 0xC7EB394;
        if ((*(signed char *)0xC7E40CD) == 2) {
            t0 = 0xC7E40C4;
        }
        if ((*(signed char *)((t0 + 0x7242))) == 2) {
            t1 = *(signed char *)((t0 + 0xB));
            t2 = t1;
            if (t1 != 3) {
                t1 = 0xAC;
                if ((int)(unsigned char)(*(signed char *)0xC7F2AA4) <= (int)0x60) {
                    (((struct oAC_uchar *)(a4))->v) = 0x60;
                    *(unsigned char *)((a4 + 0x2)) = 0x3;
                    *(unsigned char *)((a4 + 0x4)) = 0x0;
                    *(unsigned char *)((a4 + 0x5)) = 0x0;
                    *(unsigned char *)((a4 + 0x6)) = 0x0;
                    (((struct o184_uchar *)(a4))->v) = (*(signed char *)((t0 + 0x3)));
                    (((struct o1A0_uint *)(a4))->v) = (((unsigned short)((unsigned short)(*(signed char *)((t0 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20);
                    (((struct o1A4_uint *)(a4))->v) = ((0xC7E40C4 + (unsigned short)((unsigned short)((((*(signed char *)((t0 + 0x3))) == 0)) ? 1 : 0) * (unsigned short)0x72D0)) + 0x20);
                    *(unsigned char *)((a4 + 0x3)) = 0x10;
                    t1 = 0x10;
                }
                t2 = t1;
            }
            t1 = t2;
        } else {
            t2 = 0xAC;
            if ((int)(unsigned char)(*(signed char *)0xC7F2AA4) <= (int)0x60) {
                (((struct oAC_uchar *)(a4))->v) = 0x60;
                *(unsigned char *)((a4 + 0x2)) = 0x3;
                *(unsigned char *)((a4 + 0x4)) = 0x0;
                *(unsigned char *)((a4 + 0x5)) = 0x0;
                *(unsigned char *)((a4 + 0x6)) = 0x0;
                (((struct o184_uchar *)(a4))->v) = (*(signed char *)((t0 + 0x3)));
                (((struct o1A0_uint *)(a4))->v) = (((unsigned short)((unsigned short)(*(signed char *)((t0 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20);
                (((struct o1A4_uint *)(a4))->v) = ((0xC7E40C4 + (unsigned short)((unsigned short)((((*(signed char *)((t0 + 0x3))) == 0)) ? 1 : 0) * (unsigned short)0x72D0)) + 0x20);
                t3 = *(signed char *)((t0 + 0x4));
                t4 = *(signed char *)(((0x7209 + t0) + 0x0));
                math_rand_float();
                *(volatile float *)0xC0D9278;
                t0 = *(signed char *)((((((t3 << 2) << 2) + 0xC344E34) + (t4 << 2)) + (FUN_0c0e6f24())));
                *(unsigned char *)((a4 + 0x3)) = t0;
                t2 = t0;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = *(signed char *)0xC7EB39D;
        t2 = t1;
        if (t1 != 2) {
        } else {
            t1 = 0xE512;
            if ((*(signed char *)0xC7F25D6) == 0) {
            } else {
                t3 = 0xC7EB394;
                if ((*(signed char *)0xC7E40CD) == 2) {
                    t3 = 0xC7E40C4;
                }
                if ((*(signed char *)((t3 + 0x7242))) == 2) {
                    t4 = *(signed char *)((t3 + 0xB));
                    t5 = t4;
                    if (t4 != 3) {
                        t4 = 0xAC;
                        if ((int)(unsigned char)(*(signed char *)0xC7F2AA4) <= (int)0x60) {
                            (((struct oAC_uchar *)(a4))->v) = 0x60;
                            *(unsigned char *)((a4 + 0x2)) = 0x3;
                            *(unsigned char *)((a4 + 0x4)) = 0x0;
                            *(unsigned char *)((a4 + 0x5)) = 0x0;
                            *(unsigned char *)((a4 + 0x6)) = 0x0;
                            (((struct o184_uchar *)(a4))->v) = (*(signed char *)((t3 + 0x3)));
                            (((struct o1A0_uint *)(a4))->v) = (((unsigned short)((unsigned short)(*(signed char *)((t3 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20);
                            (((struct o1A4_uint *)(a4))->v) = ((0xC7E40C4 + (unsigned short)((unsigned short)((((*(signed char *)((t3 + 0x3))) == 0)) ? 1 : 0) * (unsigned short)0x72D0)) + 0x20);
                            *(unsigned char *)((a4 + 0x3)) = 0x10;
                            t4 = 0x10;
                        }
                        t5 = t4;
                    }
                    t4 = t5;
                } else {
                    t5 = 0xAC;
                    if ((int)(unsigned char)(*(signed char *)0xC7F2AA4) <= (int)0x60) {
                        (((struct oAC_uchar *)(a4))->v) = 0x60;
                        *(unsigned char *)((a4 + 0x2)) = 0x3;
                        *(unsigned char *)((a4 + 0x4)) = 0x0;
                        *(unsigned char *)((a4 + 0x5)) = 0x0;
                        *(unsigned char *)((a4 + 0x6)) = 0x0;
                        (((struct o184_uchar *)(a4))->v) = (*(signed char *)((t3 + 0x3)));
                        (((struct o1A0_uint *)(a4))->v) = (((unsigned short)((unsigned short)(*(signed char *)((t3 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20);
                        (((struct o1A4_uint *)(a4))->v) = ((0xC7E40C4 + (unsigned short)((unsigned short)((((*(signed char *)((t3 + 0x3))) == 0)) ? 1 : 0) * (unsigned short)0x72D0)) + 0x20);
                        t6 = *(signed char *)((t3 + 0x4));
                        t7 = *(signed char *)(((0x7209 + t3) + 0x0));
                        math_rand_float();
                        *(volatile float *)0xC0D9278;
                        t3 = *(signed char *)((((((t6 << 2) << 2) + 0xC344E34) + (t7 << 2)) + (FUN_0c0e6f24())));
                        *(unsigned char *)((a4 + 0x3)) = t3;
                        t5 = t3;
                    }
                    t4 = t5;
                }
                t1 = t4;
            }
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c0d91d6(int a4)
{
    int t0;
    register int t1;
    register int t2;

    if (((*(signed char *)0xC7E40CD) != 2) && (t0 = *(signed char *)0xC7EB39D, t0 != 2)) {
        return cam_force_mode(0x0, 0x0, 0x40);
    }
    t0 = *(signed char *)((a4 + 0x3));
    t1 = 0xC7EB394;
    if ((*(signed char *)0xC7E40CD) == 2) {
        t1 = 0xC7E40C4;
    }
    t2 = t0;
    if (t0 != 17) {
        t0 = *(signed char *)((t1 + 0x7242));
        t2 = t0;
        if (t0 == 2) {
            t0 = *(signed char *)((t1 + 0xB));
            t2 = t0;
            if (t0 == 3) {
                *(unsigned char *)((a4 + 0x3)) = 0x11;
                *(unsigned char *)(((a4 + 0x1) + 0x5)) = 0x0;
                *(unsigned char *)(((a4 + 0x1) + 0x4)) = 0x0;
                *(unsigned char *)(((a4 + 0x1) + 0x3)) = 0x0;
                (((struct o184_uchar *)(a4))->v) = (*(signed char *)((t1 + 0x3)));
                (((struct o1A0_uint *)(a4))->v) = (((unsigned short)((unsigned short)(*(signed char *)((t1 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20);
                (((struct o1A4_uint *)(a4))->v) = ((0xC7E40C4 + (unsigned short)((unsigned short)((((*(signed char *)((t1 + 0x3))) == 0)) ? 1 : 0) * (unsigned short)0x72D0)) + 0x20);
                t2 = 0x1A4;
            }
        }
    }
    return t2;
}
