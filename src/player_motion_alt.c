/* motion engine: start/step motion, key tables, attack record load (0c09a808-0c09b068) */

struct o7198_short { char p[0x7198]; short v; };
struct o719A_ushort { char p[0x719A]; unsigned short v; };
struct o719C_uchar { char p[0x719C]; unsigned char v; };
struct o719D_uchar { char p[0x719D]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o719E_ushort { char p[0x719E]; unsigned short v; };
struct o71A0_short { char p[0x71A0]; short v; };
struct o71A2_uchar { char p[0x71A2]; unsigned char v; };
struct o71A3_uchar { char p[0x71A3]; unsigned char v; };
struct o71A6_uchar { char p[0x71A6]; unsigned char v; };
struct o71A7_uchar { char p[0x71A7]; unsigned char v; };
struct o71AA_uchar { char p[0x71AA]; unsigned char v; };
int pl_load_motion_key(int, int);
int pl_load_motion_prev_key(int, int);
struct o100_uchar { char p[0x100]; unsigned char v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };

int pl_step_motion_impl(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    (((struct o719E_ushort *)(a4))->v) = (((((struct o719E_short *)(a4))->v)) + 0x1);
    (((struct o71A6_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x71A6))) - 1);
    if ((*(signed char *)((a4 + 0x71A6))) != 0) {
        return ((int (*)(int, int, int, int))(0xC09AC3A))(a4, a5, a6, a7);
    }
    if (((unsigned char)(*(signed char *)(((((((unsigned short)((((struct o7198_short *)(a4))->v)) + (unsigned char)(*(signed char *)((a4 + 0x719C)))) << 2) << 1) + (*(int *)(((((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2) + (0xA1234 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + 0x0)))) + 0x4))) & 0xFFFFFF80) == 0) {
        t0 = *(signed char *)((a4 + 0x719C));
        if ((unsigned char)t0 != 0) {
            if (((unsigned char)(*(signed char *)((((*(int *)(((((((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50) + 0xA1234) + ((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2)) + 0x0))) + (((((unsigned short)((((struct o7198_short *)(a4))->v)) + (unsigned char)t0) - 1) << 2) << 1)) + 0x4))) & 64) != 0) {
                pl_load_motion_prev_key(a4, a5);
                (((struct o719E_ushort *)(a4))->v) = (((((struct o719E_short *)(a4))->v)) - 1);
                return ((int (*)(void))(0xC09AC3A))();
            }
        }
        t0 = *(signed char *)((a4 + 0x719C));
        if ((unsigned char)t0 == 0) {
            if (((unsigned char)(*(signed char *)((((*(int *)(((((((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50) + 0xA1234) + ((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2)) + 0x0))) + ((((unsigned short)((((struct o7198_short *)(a4))->v)) + (unsigned char)t0) << 2) << 1)) + 0x4))) & 64) != 0) {
                pl_load_motion_key(a4, a5);
                (((struct o71AA_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x71AA))) ^ 0x40);
                (((struct o719A_ushort *)(a4))->v) = ((((struct o7198_short *)(a4))->v));
                (((struct o719D_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x719C)));
                (((struct o719C_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x719C))) + 0x1);
                (((struct o719E_ushort *)(a4))->v) = (((((struct o719E_short *)(a4))->v)) - 1);
                return ((int (*)(void))(0xC09AC3A))();
            }
        }
        pl_load_motion_key(a4, a5);
        (((struct o719A_ushort *)(a4))->v) = ((((struct o7198_short *)(a4))->v));
        (((struct o719D_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x719C)));
        (((struct o719C_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x719C))) + 0x1);
        if (((unsigned char)(*(signed char *)((a4 + 0x71AA))) & 64) != 0) {
            *(volatile signed char *)((a4 + 0x71AA));
            return ((int (*)(void))(0xC09AC36))();
        }
        return ((int (*)(void))(0xC09AC3A))();
    }
    (((struct o719A_ushort *)(a4))->v) = ((((struct o7198_short *)(a4))->v));
    (((struct o719D_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x719C)));
    (((struct o719C_uchar *)(a4))->v) = ((unsigned int)((unsigned int)((*(int *)(((((((unsigned short)((((struct o7198_short *)(a4))->v)) + (unsigned char)(*(signed char *)(((0x719C + a4) + 0x0)))) << 2) << 1) + (*(int *)(((((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2) + (0xA1234 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + 0x0)))) + 0x0))) & 0xFF000000) >> 16) >> 8);
    pl_load_motion_key(a4, a5);
    t0 = (((struct o7198_short *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x719C));
    t2 = *(int *)(((((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2) + (0xA1234 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + 0x0));
    (((struct o71A6_uchar *)(a4))->v) = (*(signed char *)(((((((unsigned short)t0 + (unsigned char)t1) << 2) << 1) + t2) + 0x5)));
    t3 = *(signed char *)((a4 + 0x71A6));
    (((struct o71A7_uchar *)(a4))->v) = t3;
    (((struct o71A2_uchar *)(a4))->v) = 0x0;
    (((struct o719E_ushort *)(a4))->v) = 0x0;
    t4 = (((((unsigned short)t0 + (unsigned char)t1) << 2) << 1) + t2);
    t0 = t3;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(unsigned char)(*(signed char *)((a4 + 0x719C)))) {
            break;
        }
        t4 = 0x7198;
        t0 = 0x71A4;
        t4 = (t4 + a4);
        t0 = (t0 + a4);
        t4 = (*(short *)((t4 + 0x0)));
        t0 = (*(signed char *)((t0 + 0x0)));
        t4 = (unsigned short)t4;
        t4 = (t4 + t1);
        t2 = 0x719E;
        t0 = (t0 << 2);
        t0 = (t0 + (0xA1234 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50)));
        t0 = (*(int *)((t0 + 0x0)));
        t4 = (t4 << 2);
        t4 = (t4 << 1);
        t4 = (t4 + t0);
        t2 = (t2 + a4);
        t0 = (*(short *)((t2 + 0x0)));
        t1 = (t1 + 0x1);
        t0 = (t0 + (unsigned char)(*(signed char *)((t4 + 0x5))));
        *(unsigned short *)((t2 + 0x0)) = t0;
    }
    t0 = (((struct o719E_short *)(a4))->v);
    for (;;) {
        if ((int)((unsigned char)(*(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x3))) + 0x1) >= (int)(unsigned short)t0) {
            break;
        }
        (((struct o71A2_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x71A2))) + 0x1);
    }
    (((struct o71A3_uchar *)(a4))->v) = ((*(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (0xC664B50 + ((*(signed char *)((a5 + 0x3))) * 0xB5EC8)))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x3))) + 0x1);
    (((struct o719C_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x719C))) + 0x1);
    return ((int (*)(int, int, int, int))(0xC09AC3A))((unsigned short)t0, a5, a6, a7);
}

int pl_load_motion_attack_record(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct o102_uchar *)(a4))->v) = (*(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x0)));
    (((struct o101_uchar *)(a4))->v) = (*(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x1)));
    (((struct o71A3_uchar *)(a4))->v) = (*(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x3)));
    t0 = *(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x2));
    t1 = t0;
    if (t0 != 0) {
        t0 = 0x100;
        if ((unsigned char)(*(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x2))) == 0xFF) {
        } else {
            (((struct o100_uchar *)(a4))->v) = (*(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (0xC664B50 + ((*(signed char *)((a5 + 0x3))) * 0xB5EC8)))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x2)));
            t2 = *(signed char *)(((0x100 + a4) + 0x0));
            (((struct oF4_uint *)(a4))->v) = ((((t2 << 2) + t2) << 2) + (*(int *)((0xC338A98 + ((*(signed char *)((a4 + 0x4))) << 2)))));
            (((struct o108_uchar *)(a4))->v) = 0x0;
            t2 = (0x11C + a4);
            t3 = 0x0;
            for (;;) {
                t3 = (t3 + 0x1);
                *(unsigned int *)((t2 + 0x0)) = 0x0;
                t2 = (t2 + 0x4);
                if ((int)t3 >= (int)0xA) {
                    break;
                }
            }
            t0 = 0x144;
        }
        *(unsigned char *)((a4 + t0)) = 0x0;
        t1 = t0;
    }
    return t1;
}
