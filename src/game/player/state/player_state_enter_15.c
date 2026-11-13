/* player state enter handlers (table 0xC339490) and state-specific helpers; same module as the following rows up to 0c0a18f8 (0c0a16bc-0c0a18f8) */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A6_uchar { char p[0x71A6]; unsigned char v; };
struct o71A7_uchar { char p[0x71A7]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71DF_uchar { char p[0x71DF]; unsigned char v; };
struct o720C_ushort { char p[0x720C]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int pl_reset_pose(int);
int pl_start_motion(int, int, int);
int pl_reset_combo_counter(int);
int pl_angle_to_opponent(int);
int pl_stick_dir_angle(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
int obj_set_mode_owner(int, int, int);
int obj_touched_by_slot(int, int);

int pl_enter_state_24(int a4, int a5)
{
    int stk[1];
    register int t3;
    register int t5;
    register int t17;
    register float u18;
    register int t19;
    register int t21;
    register float u26;
    register int t59;
    register int t62;

    *(unsigned char *)(((int)stk + 0)) = a5;
    (((struct o71BA_uchar *)(a4))->v) = 0x18;
    (((struct o71DF_uchar *)(a4))->v) = 0x0;
    pl_reset_pose(a4);
    (((struct o710A_uchar *)(a4))->v) = 0x0;
    (((struct o710B_uchar *)(a4))->v) = 0x0;
    (((struct o710C_uchar *)(a4))->v) = 0x0;
    pl_reset_combo_counter(a4);
    (((struct oF0_ushort *)(a4))->v) = (*(signed char *)(((int)stk + 0)));
    t3 = *(signed char *)(((int)stk + 0));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                if (t3 != 3) {
                    if (t3 != 4) {
                        t5 = 0x0;
                        if ((*(signed char *)((a4 + 0x71BC))) == 1) {
                            t5 = 0x1;
                        }
                        pl_start_motion(a4, 0x0, t5);
                        (((struct o71A7_uchar *)(a4))->v) = 0x8;
                        (((struct o71A6_uchar *)(a4))->v) = 0x8;
                        (((struct oEC_ushort *)(a4))->v) = 0x8;
                        (((struct oEE_ushort *)(a4))->v) = 0x0;
                        (((struct o720C_ushort *)(a4))->v) = 0x5;
                        t62 = 0x720C;
                    } else {
                        pl_start_motion(a4, 0x2, 0x9D);
                        (((struct o71A9_uchar *)(a4))->v) = 0x1;
                        (((struct o71A8_uchar *)(a4))->v) = 0x1;
                        (((struct o720C_ushort *)(a4))->v) = 0x5;
                        if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
                            *(unsigned int *)((a4 + 0x30)) = (unsigned short)(((pl_stick_dir_angle(a4)) + (*(short *)0xC7F31E0)) + 0x8000);
                        }
                        t17 = *(int *)((a4 + 0x30));
                        u18 = (((struct o0_float *)0xC0A18CC)->v);
                        t19 = pl_angle_to_opponent(a4);
                        t21 = (unsigned short)(t17 - t19);
                        if ((0x8000 & (unsigned short)(t17 - t19)) != 0) {
                            t21 = ((unsigned short)(t17 - t19) | 0xFFFF0000);
                        }
                        u26 = u18;
                        if (((int)t21 > (int)0x4000) || ((int)t21 < (int)0xFFFFC000)) {
                            u26 = ((((struct oC_float *)0xC0A18CC)->v));
                        }
                        (((struct o3C_float *)(a4))->v) = ((((struct o10_float *)0xC0A18CC)->v));
                        (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * u26);
                        (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * u26);
                        (((struct o106_uchar *)(a4))->v) = 0xA;
                        t62 = 0x106;
                    }
                } else {
                    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                    pl_start_motion(a4, 0x1, 0x53);
                    (((struct o71A9_uchar *)(a4))->v) = 0x1;
                    (((struct o71A8_uchar *)(a4))->v) = 0x1;
                    t62 = 0x71A8;
                }
            } else {
                pl_start_motion(a4, 0x2, 0x9D);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                (((struct o720C_ushort *)(a4))->v) = 0x5;
                t62 = 0x720C;
            }
        } else {
            pl_start_motion(a4, 0x2, 0x9C);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            (((struct o720C_ushort *)(a4))->v) = 0x5;
            t62 = 0x720C;
        }
    } else {
        t59 = 0x0;
        if ((*(signed char *)((a4 + 0x71BC))) == 1) {
            t59 = 0x1;
        }
        pl_start_motion(a4, 0x0, t59);
        (((struct o71A7_uchar *)(a4))->v) = 0x8;
        (((struct o71A6_uchar *)(a4))->v) = 0x8;
        (((struct oEC_ushort *)(a4))->v) = 0x8;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        (((struct o720C_ushort *)(a4))->v) = 0x5;
        t62 = 0x720C;
    }
    return t62;
}

int pl_enter_state_25_pickup_item(int a4)
{
    register int t2;
    register int t10;
    register int t4;

    (((struct o71BA_uchar *)(a4))->v) = 0x19;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_start_motion(a4, 0x2, 0xE2);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    t2 = (((struct o71C8_int *)(a4))->v);
    t10 = 0x71C8;
    if (t2 != 0) {
        t4 = obj_touched_by_slot(t2, (*(signed char *)((a4 + 0x3))));
        t10 = (signed char)t4;
        if ((signed char)t4 != 0) {
            obj_set_mode_owner(t2, 0x5, (*(signed char *)((a4 + 0x3))));
            (((struct o71CC_uint *)(a4))->v) = t2;
            (((struct o7236_uchar *)(a4))->v) = 0x1;
            t10 = 0x7236;
        }
    }
    return t10;
}
