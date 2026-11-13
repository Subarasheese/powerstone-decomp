/* player state enter handlers (table 0xC339490) and state-specific helpers; same module as the following rows up to 0c0a18f8 (0c09f8e0-0c09fe58) */

struct o3C_float { char p[0x3C]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71E4_float { char p[0x71E4]; float v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o7243_uchar { char p[0x7243]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int pl_timer_disable(int);
int pl_start_motion(int, int, int);
int pl_get_held_item_class(int);
int pl_stick_dir_angle(int);
int FUN_0c09f8e0(int);
int FUN_0c09fa84(int, int);

int pl_enter_state_31(int a4, int a5)
{
    int stk[1];
    register int t5;
    register int t9;
    register int t10;
    register int t19;

    *(unsigned char *)(((int)stk + 0)) = a5;
    (((struct o71BA_uchar *)(a4))->v) = 0x1F;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_timer_disable(a4);
    (((struct o7243_uchar *)(a4))->v) = 0x4;
    (((struct oEE_ushort *)(a4))->v) = 0x5;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = ((((struct o71E4_float *)(a4))->v));
    (((struct o7248_uint *)(a4))->v) = (unsigned short)((pl_stick_dir_angle(a4)) + (*(short *)0xC7F31E0));
    if ((*(signed char *)(((int)stk + 0))) == 0) {
        (((struct oF0_ushort *)(a4))->v) = 0x8;
        (((struct oF2_ushort *)(a4))->v) = 0x10;
        t5 = pl_get_held_item_class(a4);
        if (((signed char)t5 != 5) && (((signed char)t5 != 6) && ((signed char)t5 != 7))) {
            if ((signed char)t5 == 8) {
                pl_start_motion(a4, 0x2, 0x4E);
            } else {
                if ((signed char)t5 == 13) {
                    pl_start_motion(a4, 0x2, 0x39);
                } else {
                    t9 = 0x2;
                    t10 = 0x44;
                    if ((signed char)t5 == 14) {
                    } else {
                        (((struct o7236_uchar *)(a4))->v) = 0x0;
                        t9 = 0x0;
                        t10 = 0x18;
                    }
                    pl_start_motion(a4, t9, t10);
                }
            }
        } else {
            pl_start_motion(a4, 0x2, 0xCA);
        }
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
    } else {
        t19 = pl_get_held_item_class(a4);
        if (((signed char)t19 != 5) && (((signed char)t19 != 6) && (((signed char)t19 != 7) && (((signed char)t19 != 8) && (((signed char)t19 != 13) && ((signed char)t19 != 14)))))) {
            (((struct o7236_uchar *)(a4))->v) = 0x0;
        }
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        (((struct oF2_ushort *)(a4))->v) = 0x8;
        FUN_0c09fa84(a4, t19);
        *(unsigned int *)((a4 + 0x30)) = ((((struct o7248_int *)(a4))->v));
    }
    return FUN_0c09f8e0(a4);
}
