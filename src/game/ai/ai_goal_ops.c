/* AI goal/angle helpers and movement/pick opcodes (0c04fed8-0c050edc) */

/* named globals (symbols.txt) */
extern char g_tab_char_radius[];
extern char g_tab_pad_dir_bits[];
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_int { char p[0x6C]; int v; };
float math_signed_sqrt(float);
int math_atan_angle16(int, int, float);
extern short g_cam_yaw16;
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int ai_clear_op_state(void);

int ai_calc_goal_angle(int a4, int a5, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = a5;
    if ((*(signed char *)((((((struct o6C_int *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v)) + 0x0))) != 0) {
        t1 = *(int *)((a4 + 0x1C));
        u0 = (((struct o20_float *)(a4))->v);
        u1 = (((struct o20_float *)(t1))->v);
        u2 = (((struct o28_float *)(a4))->v);
        u3 = (((struct o28_float *)(t1))->v);
        u4 = ((u2 - u3) * (u2 - u3));
        u4 = u4 + ((u0 - u1)) * ((u0 - u1));
        u0 = math_signed_sqrt(u4);
        if (u0 > 300.0f) {
            t1 = *(signed char *)0xC3673EE;
            t2 = (((struct o6C_int *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v);
            u0 = ((((struct o20_float *)(t2))->v));
            u0 = u0 + 10.0f * ((((struct o38_float *)(t2))->v));
            (((struct o60_float *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v) = u0;
            t1 = *(signed char *)0xC3673EE;
            u0 = (((struct o24_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v))))->v);
            (((struct o64_float *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v) = u0;
            t1 = *(signed char *)0xC3673EE;
            t2 = (((struct o6C_int *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v);
            u0 = ((((struct o28_float *)(t2))->v));
            u0 = u0 + 10.0f * ((((struct o40_float *)(t2))->v));
            (((struct o68_float *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v) = u0;
            t2 = ((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40);
        } else {
            t1 = *(signed char *)0xC3673EE;
            u0 = (((struct o20_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v))))->v);
            (((struct o60_float *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v) = u0;
            t1 = *(signed char *)0xC3673EE;
            u0 = (((struct o24_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v))))->v);
            (((struct o64_float *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v) = u0;
            t1 = *(signed char *)0xC3673EE;
            u0 = (((struct o28_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v))))->v);
            (((struct o68_float *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v) = u0;
        }
        t0 = t2;
    }
    t1 = *(signed char *)0xC3673EE;
    u0 = (((struct o20_float *)(a4))->v);
    u1 = (((struct o60_float *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v);
    u2 = (((struct o28_float *)(a4))->v);
    u3 = (((struct o68_float *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v);
    u4 = (u1 - u0);
    if ((u1 - u0) == 0.0f) {
        u4 = 9.99999997e-07f;
    }
    u0 = (u3 - u2);
    u0 = -u0;
    t2 = math_atan_angle16(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40), t0, (u0 / u4));
    t0 = t2;
    if (0.0f > u4) {
        t0 = (t2 + 0x8000);
    }
    return (unsigned short)(t0 + 0x4000);
}

int ai_calc_dist_to_goal_obj(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = *(int *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366FAC));
    u0 = (((struct o20_float *)(a4))->v);
    u1 = (((struct o28_float *)(a4))->v);
    u2 = (((struct o20_float *)(t0))->v);
    u3 = (((struct o28_float *)(t0))->v);
    u4 = ((u1 - u3) * (u1 - u3));
    u4 = u4 + ((u0 - u2)) * ((u0 - u2));
    u0 = math_signed_sqrt(u4);
    t1 = (int)u0;
    if ((*(signed char *)((t0 + 0x2))) == 0) {
        t1 = ((int)u0 - (*(short *)((((int)g_tab_char_radius) + ((*(signed char *)((t0 + 0x4))) << 1)))));
    }
    return t1;
}

int ai_calc_dist_to_goal_point(int a4)
{
    register float u0;
    register float u1;
    register int t2;
    register float u3;
    register float u4;
    register float u7;

    u0 = (((struct o20_float *)(a4))->v);
    u1 = (((struct o28_float *)(a4))->v);
    t2 = *(signed char *)0xC3673EE;
    u3 = (((struct o60_float *)(((short)((short)(unsigned char)t2 * (short)0x254) + 0xC366F40)))->v);
    u4 = (((struct o68_float *)(((short)((short)(unsigned char)t2 * (short)0x254) + 0xC366F40)))->v);
    u7 = ((u1 - u4) * (u1 - u4));
    u7 = u7 + ((u0 - u3)) * ((u0 - u3));
    return (int)(math_signed_sqrt(u7));
}

short ai_angle_to_pad_dir(int angle)
{
    short *sector_tbl = (short *)g_tab_pad_dir_bits;
    int sector = (unsigned short)(angle - g_cam_yaw16 + 0xD000) / 0x2000;
    return sector_tbl[sector & 7];
}

int ai_op2(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct o0_int *)0xC3673E8)->v);
    (((struct o0_uint *)0xC3673E8)->v) = (t0 + 0x2);
    t1 = *(short *)((((t0 + 0x2) - 2) + 0x0));
    t0 = *(signed char *)((0xC366F40 + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)));
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                t2 = (unsigned char)t0;
                if ((unsigned char)t0 != 3) {
                } else {
                    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
                    t3 = ai_clear_op_state();
                    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
                    t2 = t3;
                }
                t3 = t2;
            } else {
                (((struct o4_ushort *)0xC3673E8)->v) = (((((struct o4_short *)0xC3673E8)->v)) | t1);
                t2 = *(signed char *)0xC3673EE;
                *(unsigned char *)((((short)((short)(unsigned char)t2 * (short)0x254) + 0xC366F40) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)t2 * (short)0x254) + 0xC366F40) + 0x0))) + 0x1);
                t3 = (unsigned char)t0;
            }
            t0 = t3;
        } else {
            (((struct o4_ushort *)0xC3673E8)->v) = 0x0;
            (((struct o2DC_uint *)(a4))->v) = (((((struct o2DC_int *)(a4))->v)) | (unsigned short)t1);
            t2 = *(signed char *)0xC3673EE;
            *(unsigned char *)((((short)((short)(unsigned char)t2 * (short)0x254) + 0xC366F40) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)t2 * (short)0x254) + 0xC366F40) + 0x0))) + 0x1);
            t0 = 0x2DC;
        }
        t2 = t0;
    } else {
        (((struct o4_ushort *)0xC3673E8)->v) = 0x0;
        t0 = 0x2E0;
        if (((((struct o2E0_int *)(a4))->v)) == 0) {
            t3 = *(signed char *)0xC3673EE;
            *(unsigned char *)((((short)((short)(unsigned char)t3 * (short)0x254) + 0xC366F40) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)t3 * (short)0x254) + 0xC366F40) + 0x0))) + 0x1);
            (((struct o4_ushort *)0xC3673E8)->v) = 0x0;
            (((struct o2DC_uint *)(a4))->v) = (((((struct o2DC_int *)(a4))->v)) | (unsigned short)t1);
            t1 = *(signed char *)0xC3673EE;
            *(unsigned char *)((((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40) + 0x0))) + 0x1);
            t0 = 0x2DC;
        }
        t2 = t0;
    }
    return t2;
}

int ai_op42_wait_until_idle(int a4)
{
    register int t4;

    if ((*(signed char *)((a4 + 0x71BA))) == 0) {
        *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
        t4 = ai_clear_op_state();
        (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    } else {
        (((struct o4_ushort *)0xC3673E8)->v) = 0x0;
        t4 = 0x71BA;
    }
    return t4;
}
