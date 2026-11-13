/* player state enter handlers (table 0xC339490) and state-specific helpers; same module as the following rows up to 0c0a18f8 (0c0a11f4-0c0a16bc) */

struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
int pl_start_motion(int, int, int);
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o720C_ushort { char p[0x720C]; unsigned short v; };
struct o7225_uchar { char p[0x7225]; unsigned char v; };
struct o7232_uchar { char p[0x7232]; unsigned char v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int fx_spawn_04b1f0(int);
int FUN_0c05fbee(int);
int pl_reset_pose(int);
int pl_vib_start_preset(int, int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int cam_request_mode(int, int, int);

int pl_enter_state_19(int a4)
{
    (((struct o71BA_uchar *)(a4))->v) = 0x13;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    return pl_start_motion(a4, 0x1, 0x52);
}

int pl_enter_state_23(int a4)
{
    register int t0;

    (((struct o71BA_uchar *)(a4))->v) = 0x17;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o7225_uchar *)(a4))->v) = 0x0;
    pl_reset_pose(a4);
    (((struct o710A_uchar *)(a4))->v) = 0x0;
    (((struct o710B_uchar *)(a4))->v) = 0x0;
    (((struct o710C_uchar *)(a4))->v) = 0x0;
    if (((((struct o71CC_int *)(a4))->v)) != 0) {
        *(unsigned char *)((((((struct o71CC_int *)(a4))->v)) + 0x1)) = 0x0;
    }
    if ((*(signed char *)((a4 + 0x71F1))) != 0) {
        if ((*(signed char *)((a4 + 0x4))) == 1) {
            (((struct o710C_uchar *)(a4))->v) = 0x1;
        }
        (((struct oEE_ushort *)(a4))->v) = 0x1;
        (((struct oF0_ushort *)(a4))->v) = 0x1;
        pl_start_motion(a4, 0x3, 0x9);
        (((struct o7236_uchar *)(a4))->v) = 0x0;
        (((struct o71CC_uint *)(a4))->v) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0x78;
        (((struct o720C_ushort *)(a4))->v) = 0x28;
        *(unsigned char *)((a4 + 0xA)) = 0x1;
        return 0x1;
    }
    pl_vib_start_preset(a4, 0xC);
    fx_spawn_04b1f0(a4);
    cam_request_mode(0x15, (*(signed char *)((a4 + 0x3))), 0x70);
    snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x13);
    *(unsigned int *)((a4 + 0x30)) = (*(int *)0xC7F2B0C);
    t0 = 0x17;
    if ((*(signed char *)((a4 + 0x3))) == 0) {
        t0 = 0x16;
    }
    snd_play_char_voice(a4, t0);
    t0 = *(signed char *)((a4 + 0x4));
    switch (t0) {
    case 0:
        if ((*(signed char *)((a4 + 0x71BC))) != 2) {
            pl_start_motion(a4, 0x3, 0x8);
            if ((*(signed char *)((a4 + 0x4))) == 4) {
                (((struct oEE_ushort *)(a4))->v) = 0x46;
            } else {
                (((struct oEE_ushort *)(a4))->v) = 0x3C;
            }
        } else {
            pl_start_motion(a4, 0x3, 0xB);
            (((struct oEE_ushort *)(a4))->v) = 0x3C;
        }
        break;
    case 1:
        if ((*(signed char *)((a4 + 0x71BC))) != 2) {
            pl_start_motion(a4, 0x3, 0x8);
            t0 = 0x22;
        } else {
            pl_start_motion(a4, 0x3, 0xB);
            (((struct o71A8_uchar *)(a4))->v) = 0x0;
            (((struct o71A9_uchar *)(a4))->v) = 0x5;
            t0 = 0x1E;
        }
        (((struct oEE_ushort *)(a4))->v) = t0;
        break;
    case 2:
        pl_start_motion(a4, 0x3, 0x8);
        (((struct oEE_ushort *)(a4))->v) = 0x46;
        break;
    case 3:
        pl_start_motion(a4, 0x3, 0x8);
        (((struct oEE_ushort *)(a4))->v) = 0x31;
        break;
    case 4:
        if ((*(signed char *)((a4 + 0x71BC))) != 2) {
            pl_start_motion(a4, 0x3, 0x8);
            if ((*(signed char *)((a4 + 0x4))) == 4) {
                (((struct oEE_ushort *)(a4))->v) = 0x46;
            } else {
                (((struct oEE_ushort *)(a4))->v) = 0x3C;
            }
        } else {
            pl_start_motion(a4, 0x3, 0xB);
            (((struct oEE_ushort *)(a4))->v) = 0x3C;
        }
        break;
    case 5:
        if ((*(signed char *)((a4 + 0x71BC))) == 2) {
            pl_start_motion(a4, 0x3, 0xB);
            (((struct oEE_ushort *)(a4))->v) = 0x3A;
        } else {
            pl_start_motion(a4, 0x3, 0x8);
            (((struct oEE_ushort *)(a4))->v) = 0x3D;
        }
        break;
    case 6:
        if ((*(signed char *)((a4 + 0x71BC))) != 2) {
            pl_start_motion(a4, 0x3, 0x8);
        } else {
            pl_start_motion(a4, 0x3, 0xB);
        }
        (((struct oEE_ushort *)(a4))->v) = 0x3D;
        break;
    case 7:
        if ((*(signed char *)((a4 + 0x71BC))) != 2) {
            pl_start_motion(a4, 0x3, 0x8);
            t0 = 0x29;
        } else {
            pl_start_motion(a4, 0x3, 0xB);
            t0 = 0x27;
        }
        (((struct oEE_ushort *)(a4))->v) = t0;
        break;
    case 9:
        if ((*(signed char *)((a4 + 0x71BC))) != 2) {
            pl_start_motion(a4, 0x3, 0x8);
        } else {
            pl_start_motion(a4, 0x3, 0xB);
        }
        (((struct oEE_ushort *)(a4))->v) = 0x3C;
        break;
    default:
        if ((*(signed char *)((a4 + 0x71BC))) != 2) {
            pl_start_motion(a4, 0x3, 0x8);
            if ((*(signed char *)((a4 + 0x4))) == 4) {
                (((struct oEE_ushort *)(a4))->v) = 0x46;
            } else {
                (((struct oEE_ushort *)(a4))->v) = 0x3C;
            }
        } else {
            pl_start_motion(a4, 0x3, 0xB);
            (((struct oEE_ushort *)(a4))->v) = 0x3C;
        }
        break;
    }
    (((struct oEC_ushort *)(a4))->v) = 0x82;
    (((struct o720C_ushort *)(a4))->v) = 0x3C;
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    (((struct o7232_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    *(unsigned short *)0xC7F3194 = ((((struct oEC_short *)(a4))->v));
    return FUN_0c05fbee((*(short *)0xC7F3194));
}
