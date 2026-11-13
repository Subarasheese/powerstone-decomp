/* motion engine: start/step motion, key tables, attack record load (0c09a808-0c09b068) */

struct o7198_short { char p[0x7198]; short v; };
struct o7198_ushort { char p[0x7198]; unsigned short v; };
struct o719A_ushort { char p[0x719A]; unsigned short v; };
struct o719C_uchar { char p[0x719C]; unsigned char v; };
struct o719D_uchar { char p[0x719D]; unsigned char v; };
struct o719E_ushort { char p[0x719E]; unsigned short v; };
struct o71A0_ushort { char p[0x71A0]; unsigned short v; };
struct o71A2_uchar { char p[0x71A2]; unsigned char v; };
struct o71A4_uchar { char p[0x71A4]; unsigned char v; };
struct o71A5_uchar { char p[0x71A5]; unsigned char v; };
struct o71A6_uchar { char p[0x71A6]; unsigned char v; };
struct o71A7_uchar { char p[0x71A7]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
int pl_load_motion_attack_record(int, int);
struct o71B4_uchar { char p[0x71B4]; unsigned char v; };
int pl_step_motion_impl(int, int);
struct o718C_int { char p[0x718C]; int v; };
struct o718C_uint { char p[0x718C]; unsigned int v; };
struct o7190_int { char p[0x7190]; int v; };
struct o7190_uint { char p[0x7190]; unsigned int v; };
struct o7194_uint { char p[0x7194]; unsigned int v; };
struct o71AA_uchar { char p[0x71AA]; unsigned char v; };

int pl_load_motion_key(int a4, int a5);

int pl_start_motion(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t2;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    *(unsigned char *)(((int)stk + 8)) = a6;
    t0 = *(signed char *)(((int)stk + 8));
    t1 = *(int *)(((int)stk + 0));
    t2 = *(signed char *)(((int)stk + 4));
    return ((int (*)(int, int, int, int))(0xC09A848))(t1, t1, t2, t0);
}

int pl_start_motion_owner(int a4, int a5, int a6)
{
    int stk[7];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t7;
    register int t10;
    register int t14;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned char *)(((int)stk + 20)) = a5;
    *(unsigned char *)(((int)stk + 24)) = a6;
    t0 = *(signed char *)(((int)stk + 24));
    t2 = *(signed char *)(((int)stk + 20));
    t3 = *(int *)(((int)stk + 16));
    t4 = *(int *)(((*(int *)(((int)stk + 16))) + 0x1C));
    (((struct o71A4_uchar *)(t3))->v) = t2;
    (((struct o71A5_uchar *)(t3))->v) = t0;
    (((struct o719A_ushort *)(t3))->v) = ((((struct o7198_short *)(t3))->v));
    (((struct o719D_uchar *)(t3))->v) = (*(signed char *)((t3 + 0x719C)));
    t7 = *(signed char *)((t4 + 0x3));
    *(unsigned int *)(((int)stk + 4)) = (((signed char)t2 << 8) << 1);
    t10 = *(short *)((((unsigned char)t0 << 1) + ((((t7 * 0xB5EC8) + 0xC664B50) + 0xAAE88) + (((signed char)t2 << 8) << 1))));
    *(unsigned int *)(((int)stk + 0)) = (unsigned short)t10;
    (((struct o7198_ushort *)(t3))->v) = (((int)((unsigned short)t10 & 0xFF00) >> 8) | ((unsigned char)(*(int *)(((int)stk + 0))) << 8));
    (((struct o719C_uchar *)(t3))->v) = 0x0;
    t14 = *(short *)((((unsigned char)t0 << 1) + (((((*(signed char *)((t4 + 0x3))) * 0xB5EC8) + 0xC664B50) + 0xAB888) + (*(int *)(((int)stk + 4))))));
    (((struct o71A0_ushort *)(t3))->v) = (((int)(0xFF00 & (unsigned short)t14) >> 8) | ((unsigned char)(unsigned short)t14 << 8));
    (((struct o71A2_uchar *)(t3))->v) = 0x0;
    pl_load_motion_attack_record(t3, t4);
    (((struct o71A6_uchar *)(t3))->v) = 0x1;
    (((struct o71A7_uchar *)(t3))->v) = 0x1;
    (((struct o71A9_uchar *)(t3))->v) = 0x4;
    (((struct o71A8_uchar *)(t3))->v) = 0x0;
    (((struct o719E_ushort *)(t3))->v) = 0x0;
    pl_load_motion_key(t3, t4);
    (((struct o719C_uchar *)(t3))->v) = ((*(signed char *)((t3 + 0x719C))) + 0x1);
    return 0x719C;
}

int pl_step_motion(int a4)
{
    return pl_step_motion_impl(a4, a4);
}

int pl_step_motion_owner(int a4)
{
    (((struct o71B4_uchar *)(a4))->v) = 0x1;
    return pl_step_motion_impl(a4, (*(int *)((a4 + 0x1C))));
}

int pl_load_motion_key(int a4, int a5)
{
    int t9;

    (((struct o718C_uint *)(a4))->v) = (*(int *)((((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2) + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))));
    t9 = *(int *)((((*(int *)(((((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2) + (0xA1234 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + 0x0))) + ((((unsigned short)((((struct o7198_short *)(a4))->v)) + (unsigned char)(*(signed char *)((a4 + 0x719C)))) << 2) << 1)) + 0x0));
    (((struct o718C_uint *)(a4))->v) = (((((struct o718C_int *)(a4))->v)) + ((((((unsigned int)((unsigned int)(0xFF000000 & t9) >> 16) >> 8) | ((unsigned int)(0xFF0000 & t9) >> 8)) | ((0xFF00 & t9) << 8)) | (((unsigned char)t9 << 16) << 8)) << 1));
    (((struct o71AA_uchar *)(a4))->v) = (*(signed char *)(((((((unsigned short)((((struct o7198_short *)(a4))->v)) + (unsigned char)(*(signed char *)((a4 + 0x719C)))) << 2) << 1) + (*(int *)(((((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2) + (0xA1234 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + 0x0)))) + 0x4)));
    (((struct o71A6_uchar *)(a4))->v) = (*(signed char *)(((((((unsigned short)((((struct o7198_short *)(a4))->v)) + (unsigned char)(*(signed char *)((a4 + 0x719C)))) << 2) << 1) + (*(int *)(((((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2) + (0xA1234 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + 0x0)))) + 0x5)));
    (((struct o71A7_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71A6)));
    (((struct o7194_uint *)(a4))->v) = ((((struct o7190_int *)(a4))->v));
    (((struct o7190_uint *)(a4))->v) = ((((struct o718C_int *)(a4))->v));
    return 0x7190;
}

int pl_load_motion_prev_key(int a4, int a5)
{
    int t9;

    (((struct o718C_uint *)(a4))->v) = (*(int *)((((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2) + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))));
    t9 = *(int *)((((*(int *)(((((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2) + (0xA1234 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + 0x0))) + (((((unsigned short)((((struct o7198_short *)(a4))->v)) + (unsigned char)(*(signed char *)((a4 + 0x719C)))) - 1) << 2) << 1)) + 0x0));
    (((struct o718C_uint *)(a4))->v) = (((((struct o718C_int *)(a4))->v)) + ((((((unsigned int)((unsigned int)(0xFF000000 & t9) >> 16) >> 8) | ((unsigned int)(0xFF0000 & t9) >> 8)) | ((0xFF00 & t9) << 8)) | (((unsigned char)t9 << 16) << 8)) << 1));
    (((struct o71AA_uchar *)(a4))->v) = (*(signed char *)((((((((unsigned short)((((struct o7198_short *)(a4))->v)) + (unsigned char)(*(signed char *)((a4 + 0x719C)))) - 1) << 2) << 1) + (*(int *)(((((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2) + (0xA1234 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + 0x0)))) + 0x4)));
    (((struct o71A6_uchar *)(a4))->v) = (*(signed char *)((((((((unsigned short)((((struct o7198_short *)(a4))->v)) + (unsigned char)(*(signed char *)((a4 + 0x719C)))) - 1) << 2) << 1) + (*(int *)(((((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2) + (0xA1234 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + 0x0)))) + 0x5)));
    (((struct o71A7_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71A6)));
    (((struct o7194_uint *)(a4))->v) = ((((struct o7190_int *)(a4))->v));
    (((struct o7190_uint *)(a4))->v) = ((((struct o718C_int *)(a4))->v));
    return 0x7190;
}
