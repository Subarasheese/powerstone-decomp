/* player state enter handlers (table 0xC339490) and state-specific helpers; same module as the following rows up to 0c0a18f8 (0c0a0eec-0c0a11f4) */

struct o106_uchar { char p[0x106]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o7205_uchar { char p[0x7205]; unsigned char v; };
struct o7214_uchar { char p[0x7214]; unsigned char v; };
struct o7243_uchar { char p[0x7243]; unsigned char v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int pl_reset_pose(int);
int pl_start_motion(int, int, int);
int pl_angle_to_opponent(int);
int pl_stick_dir_angle(int);
struct o0_float { float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
int math_vec3_normalize(int, float);
float math_signed_sqrt(float);
struct o24_float { char p[0x24]; float v; };
float FUN_0c02649a(int, int);
int hit_find_interactable_contact(int, int);

int FUN_0c0a10b6(int a4, int a5, float f4);

int pl_enter_state_16_29(int a4, int a5)
{
    int stk[1];
    register int t9;
    register int t10;
    register int t14;
    register int t15;
    register int t39;
    register int t40;
    register int t44;
    register int t45;
    register int t52;
    int t2;
    int t28;

    *(unsigned char *)(((int)stk + 0)) = a5;
    (((struct o71BA_uchar *)(a4))->v) = 0x10;
    (((struct o71BC_uchar *)(a4))->v) = 0x1;
    pl_reset_pose(a4);
    (((struct o710A_uchar *)(a4))->v) = 0x0;
    (((struct o710B_uchar *)(a4))->v) = 0x0;
    (((struct o710C_uchar *)(a4))->v) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x1E;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct oF2_ushort *)(a4))->v) = 0x0;
    (((struct o7243_uchar *)(a4))->v) = 0x4;
    (((struct o106_uchar *)(a4))->v) = 0x1;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    if (((*(signed char *)((a4 + 0x7214))) == 0) && (t2 = *(signed char *)((a4 + 0x71DF)), t2 == 0)) {
        if ((*(signed char *)((a4 + 0x7205))) != 0) {
            t9 = 0x0;
            t10 = 0x34;
            if ((*(signed char *)((a4 + 0x4))) != 3) {
                t9 = 0x2;
                t10 = 0x93;
            }
            pl_start_motion(a4, t9, t10);
        } else {
            t14 = 0x0;
            t15 = 0x33;
            if ((*(signed char *)((a4 + 0x4))) != 3) {
                t14 = 0x2;
                t15 = 0x92;
            }
            pl_start_motion(a4, t14, t15);
        }
        (((struct oF0_ushort *)(a4))->v) = 0x0;
    } else {
        if ((*(signed char *)((a4 + 0x71DF))) != 0) {
            (((struct o7214_uchar *)(a4))->v) = (*(signed char *)((0xC338E12 + (*(signed char *)((a4 + 0x4))))));
        }
        if (((((((struct o2DC_int *)(a4))->v)) & 240) == 0) && (t28 = *(signed char *)(((int)stk + 0)), t28 == 0)) {
            if ((*(signed char *)((a4 + 0x7205))) != 0) {
                t39 = 0x0;
                t40 = 0x34;
                if ((*(signed char *)((a4 + 0x4))) != 3) {
                    t39 = 0x2;
                    t40 = 0x93;
                }
                pl_start_motion(a4, t39, t40);
            } else {
                t44 = 0x0;
                t45 = 0x33;
                if ((*(signed char *)((a4 + 0x4))) != 3) {
                    t44 = 0x2;
                    t45 = 0x92;
                }
                pl_start_motion(a4, t44, t45);
            }
            (((struct oF0_ushort *)(a4))->v) = 0xA;
        } else {
            pl_start_motion(a4, 0x2, 0x94);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
            *(unsigned char *)((a4 + 0xA)) = 0x1;
            (((struct oEC_ushort *)(a4))->v) = 0x3C;
            (((struct oEE_ushort *)(a4))->v) = 0x0;
            (((struct oF0_ushort *)(a4))->v) = 0x4;
            t52 = *(signed char *)(((int)stk + 0));
            switch (t52) {
            case 0:
                *(unsigned int *)((a4 + 0x30)) = (((pl_stick_dir_angle(a4)) + (*(int *)0xC7F31E0)) & 0xFFFF);
                break;
            case 1:
                (((struct oEE_ushort *)(a4))->v) = 0x14;
                break;
            case 2:
                (((struct oEE_ushort *)(a4))->v) = 0x14;
                *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
                break;
            }
        }
    }
    (((struct o7205_uchar *)(a4))->v) = 0x0;
    return 0x7205;
}

int FUN_0c0a10b6(int a4, int a5, float f4)
{
    int stk[7];
    register float u5;
    register float u6;
    register float u8;
    register float t9;
    register float u10;
    register float u11;
    register float u13;
    register float t14;
    register float u17;
    register float u23;

    *(float *)(((int)stk + 16)) = (((((struct o20_float *)(a5))->v)) - ((((struct o20_float *)(a4))->v)));
    *(float *)(((int)stk + 24)) = (((((struct o28_float *)(a5))->v)) - ((((struct o28_float *)(a4))->v)));
    *(float *)(((int)stk + 20)) = 0.0f;
    math_vec3_normalize((((int)stk + 0) + 0x10), f4);
    u5 = (((struct o38_float *)(a4))->v);
    *(float *)(((int)stk + 12)) = u5;
    u6 = (((struct o40_float *)(a4))->v);
    *(float *)(((int)stk + 8)) = u6;
    u8 = (u6 * u6);
    u8 = u8 + u5 * (*(float *)(((int)stk + 12)));
    t9 = math_signed_sqrt(u8);
    u10 = *(float *)(((int)stk + 16));
    *(float *)(((int)stk + 4)) = u10;
    u11 = *(float *)(((int)stk + 24));
    *(float *)(((int)stk + 0)) = u11;
    u13 = (u11 * u11);
    u13 = u13 + u10 * (*(float *)(((int)stk + 4)));
    t14 = math_signed_sqrt(u13);
    u17 = (t9 * t14);
    if ((t9 * t14) == 0.0f) {
        u17 = ((((struct o0_float *)0xC0A11DC)->v));
    }
    u23 = (((((struct o40_float *)(a4))->v)) * (*(float *)(((int)stk + 24))));
    u23 = u23 + (*(float *)(((int)stk + 16))) * ((((struct o38_float *)(a4))->v));
    return ((((u23 / u17) > ((((struct o4_float *)0xC0A11DC)->v)))) ? 1 : 0);
}

int FUN_0c0a1162(int a4)
{
    int stk[2];
    register int t0;
    register int t1;
    register float t3;
    register float u4;
    register int t7;

    t0 = hit_find_interactable_contact(a4, 0x5);
    *(unsigned char *)(((int)stk + 4)) = t0;
    if ((signed char)t0 != 0) {
        t1 = *(signed char *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 0)) = ((t1 - 1) << 2);
        t3 = FUN_0c02649a((*(int *)(((((t1 - 1) << 2) + (0x294 + a4)) + 0x0))), 0x1);
        u4 = (((struct o24_float *)(a4))->v);
        if ((8.0f > (t3 - u4)) && ((t3 - u4) > -8.0f)) {
            t7 = FUN_0c0a10b6(a4, (*(int *)((((0x294 + a4) + (*(int *)(((int)stk + 0)))) + 0x0))), (t3 - u4));
            if ((signed char)t7 != 0) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}
