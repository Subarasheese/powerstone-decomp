/* state 41/42 phases, defaults, Valgas/boss specific handlers and setup helpers (part 1 of 2 of the same module) (0c097c26-0c098160) */

struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o7206_uchar { char p[0x7206]; unsigned char v; };
struct o7248_short { char p[0x7248]; short v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c08a7d4(int, int);
int pl_step_motion(int);
int pl_stick_dir_angle(int);
int pl_change_state(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c08a9a8(int);
int pl_tick_hitstop(int);
int FUN_0c08bf90(int);
int FUN_0c08c114(int, int, int, int);
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o7237_uchar { char p[0x7237]; unsigned char v; };
int pl_start_motion(int, int, int);
struct o2E4_int { char p[0x2E4]; int v; };
struct o71F8_int { char p[0x71F8]; int v; };
struct o71FC_int { char p[0x71FC]; int v; };
struct o7222_uchar { char p[0x7222]; unsigned char v; };
int FUN_0c08a842(void);
int FUN_0c08a928(int a4);

int FUN_0c097eb6(int a4);
int FUN_0c097f3c(int a4);
int FUN_0c097f5c(int a4, int a5, int a6);
int FUN_0c097fc4(int a4);
int FUN_0c098026(int a4);

float FUN_0c097c26(int a4)
{
    int stk[4];

    register int R2;
    register int R6;
    register float F0;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_3 = (signed char)(FUN_0c097fc4(v0_1)) == 0;
    v0_2 = (0xC0A2E26);
    v0_0 = (v0_1);
    if (v0_3) goto L_C097C44;
    pl_change_state(v0_0, 0xB, 0x0, 0x0);
    v0_2 = (0x0);
    L_C097C58:;
    (((struct o7206_uchar *)(v0_0))->v) = v0_2;
    v0_1 = (0x7206);
    L_C097E1A:;
    return F0;
    L_C097C44:;
    v0_1 = (signed char)(FUN_0c098026(v0_0)) == 0;
    if (v0_1) goto L_C097C5E;
    pl_change_state(v0_0, 0xB, 0x0, 0x0);
    v0_2 = (0x1);
    goto L_C097C58;
    L_C097C5E:;
    FUN_0c097eb6(v0_0);
    (((struct o7248_uint *)(v0_0))->v) = (unsigned short)((pl_stick_dir_angle(v0_0)) + (*(short *)0xC7F31E0));
    v0_3 = *(int *)((v0_0 + 0x30));
    v0_4 = (((struct o7248_short *)(v0_0))->v);
    v0_2 = (0x5B);
    v0_1 = ((unsigned short)(v0_4 - v0_3));
    if (((0x8000 & (unsigned short)(v0_4 - v0_3)) == 0)) goto L_C097C8C;
    v0_1 = ((v0_1 | 0xFFFF0000));
    L_C097C8C:;
    if (((int)v0_1 < (int)v0_2)) goto L_C097CB4;
    v0_2 = (((*(int *)((v0_0 + 0x30))) + 0x5B));
    L_C097CC0:;
    *(unsigned int *)((v0_0 + 0x30)) = (unsigned short)v0_2;
    L_C097CCE:;
    if (((((((struct o2DC_int *)(v0_0))->v)) & 240) == 0)) goto L_C097D1E;
    v0_2 = ((unsigned short)v0_1);
    if (((int)(unsigned short)v0_1 < (int)0x4000)) goto L_C097CE4;
    if (((int)v0_2 <= (int)0xC000)) goto L_C097D26;
    L_C097CE4:;
    *(int *)((int)stk + 0) = (v0_0 + 0x20);
    w0_0 = ((((struct o20_float *)(v0_0))->v));
    w0_0 = w0_0 + 4.0f * (math_sin_angle16((*(int *)((v0_0 + 0x30)))));
    (((struct o20_float *)(v0_0))->v) = w0_0;
    *(int *)((int)stk + 0) = (v0_0 + 0x28);
    w0_0 = ((((struct o28_float *)(v0_0))->v));
    w0_0 = w0_0 + 4.0f * (math_cos_angle16((*(int *)((v0_0 + 0x30)))));
    (((struct o28_float *)(v0_0))->v) = w0_0;
    L_C097D26:;
    pl_step_motion(v0_0);
    v0_1 = (0x20);
    w0_0 = (-950.0f);
    if ((!(-950.0f > ((((struct o20_float *)(v0_0))->v))))) goto L_C097D3A;
    *(float *)((v0_0 + v0_1)) = w0_0;
    L_C097D3A:;
    v0_1 = (0x20);
    w0_1 = (950.0f);
    if ((!(((((struct o20_float *)(v0_0))->v)) > 950.0f))) goto L_C097D48;
    *(float *)((v0_0 + v0_1)) = w0_1;
    L_C097D48:;
    v0_1 = (0x28);
    if ((!(w0_0 > ((((struct o28_float *)(v0_0))->v))))) goto L_C097D52;
    *(float *)((v0_0 + v0_1)) = w0_0;
    L_C097D52:;
    if ((!((*(float *)((v0_0 + v0_1))) > w0_1))) goto L_C097D5A;
    *(float *)((v0_0 + v0_1)) = w0_1;
    L_C097D5A:;
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) + 0x1);
    v0_3 = *(signed char *)((v0_0 + 0x7237));
    v0_1 = (v0_3);
    v0_2 = (0xC08A7D4);
    if ((v0_3 == 0)) goto L_C097DA4;
    if ((v0_1 == 1)) goto L_C097DCE;
    if ((v0_1 == 2)) goto L_C097DEE;
    goto L_C097E1A;
    L_C097DEE:;
    if ((((((struct oEC_short *)(v0_0))->v)) != 31)) goto L_C097DFC;
    FUN_0c08a7d4(v0_0, 0x1);
    L_C097DFC:;
    if ((((((struct oEC_short *)(v0_0))->v)) != 36)) goto L_C097E0A;
    FUN_0c08a7d4(v0_0, 0x0);
    L_C097E0A:;
    v0_1 = (0xEC);
    if (((int)((((struct oEC_short *)(v0_0))->v)) <= (int)0x31)) goto L_C097E1A;
    L_C097E14:;
    (((struct oEC_ushort *)(v0_0))->v) = 0x0;
    v0_1 = (0xEC);
    goto L_C097E1A;
    L_C097DCE:;
    if ((((((struct oEC_short *)(v0_0))->v)) != 27)) goto L_C097DDC;
    FUN_0c08a7d4(v0_0, 0x0);
    L_C097DDC:;
    if ((((((struct oEC_short *)(v0_0))->v)) != 31)) goto L_C097E0A;
    FUN_0c08a7d4(v0_0, 0x1);
    goto L_C097E0A;
    L_C097DA4:;
    if ((((((struct oEC_short *)(v0_0))->v)) != 65)) goto L_C097DB2;
    FUN_0c08a7d4(v0_0, 0x0);
    L_C097DB2:;
    if ((((((struct oEC_short *)(v0_0))->v)) != 75)) goto L_C097DC0;
    FUN_0c08a7d4(v0_0, 0x1);
    L_C097DC0:;
    v0_1 = (0xEC);
    if (((int)((((struct oEC_short *)(v0_0))->v)) > (int)0x63)) goto L_C097E14;
    goto L_C097E1A;
    L_C097D1E:;
    pl_change_state(v0_0, 0x0, 0x0, 0x0);
    goto L_C097D26;
    L_C097CB4:;
    if (((int)v0_1 > (int)0xFFFFFFA5)) goto L_C097CC6;
    v0_2 = (((*(int *)((v0_0 + 0x30))) + 0xFFA5));
    goto L_C097CC0;
    L_C097CC6:;
    *(unsigned int *)((v0_0 + 0x30)) = (unsigned short)((*(int *)((v0_0 + 0x30))) + v0_1);
    goto L_C097CCE;
}

int FUN_0c097e22(int a4)
{
    int stk[2];
    register int t0;
    register int t4;

    t0 = pl_tick_hitstop(a4);
    if ((signed char)t0 == 0) {
        if ((*(signed char *)((a4 + 0x7206))) != 0) {
            (((struct o7206_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x7206))) - 1);
            t4 = FUN_0c097fc4(a4);
            if ((signed char)t4 != 0) {
                pl_change_state(a4, 0xB, 0x0, 0x0);
            }
        }
        return FUN_0c08a9a8(a4);
    }
    return (signed char)t0;
}

int FUN_0c097e64(int a4)
{
    return FUN_0c08bf90(a4);
}

int FUN_0c097e6a(int a4, int a5, int a6, int a7)
{
    return FUN_0c08c114(a4, a5, a6, a7);
}

int FUN_0c097e7a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC097E76))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC097E70))(a4, a5, a6, a7);
}

int FUN_0c097eb6(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = pl_stick_dir_angle(a4);
    t1 = *(int *)((a4 + 0x30));
    t2 = *(short *)0xC7F31E0;
    t3 = (unsigned short)((t0 + t2) - t1);
    if ((0x8000 & (unsigned short)((t0 + t2) - t1)) != 0) {
        t3 = ((unsigned short)((t0 + t2) - t1) | 0xFFFF0000);
    }
    t0 = 0x2;
    if ((int)t3 >= (int)0x5B) {
    } else {
        t1 = 0x0;
        if ((int)t3 <= (int)0xFFFFFFA5) {
            t1 = 0x1;
        }
        t0 = t1;
    }
    t1 = 0x7237;
    if ((*(signed char *)((a4 + 0x7237))) != (signed char)t0) {
        (((struct oEC_ushort *)(a4))->v) = 0x0;
        (((struct o7237_uchar *)(a4))->v) = t0;
        t0 = *(signed char *)((a4 + 0x7237));
        switch (t0) {
        case 0:
            pl_start_motion(a4, 0x0, 0x3);
            break;
        case 1:
            pl_start_motion(a4, 0x0, 0x1);
            break;
        case 2:
            pl_start_motion(a4, 0x0, 0x2);
            break;
        }
        (((struct o71A8_uchar *)(a4))->v) = 0x0;
        (((struct o71A9_uchar *)(a4))->v) = 0x8;
        t1 = 0x71A9;
    }
    return t1;
}

int FUN_0c097f3c(int a4)
{
    if ((((((((struct o2E4_int *)(a4))->v)) | ((((struct o71F8_int *)(a4))->v))) | ((((struct o71FC_int *)(a4))->v))) & 240) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c097f5c(int a4, int a5, int a6)
{
    int t10;
    int t16;

    if ((((((((struct o2E4_int *)(a4))->v)) | ((((struct o71F8_int *)(a4))->v))) | ((((struct o71FC_int *)(a4))->v))) & (a5 | a6)) != (a5 | a6)) {
        if (((((((struct o2DC_int *)(a4))->v)) & a5) != 0) && (t10 = (((struct o2E4_int *)(a4))->v), (t10 & a6) != 0)) {
            return 0x1;
        }
        if (((a6 & ((((struct o2DC_int *)(a4))->v))) != 0) && (t16 = (((struct o2E4_int *)(a4))->v), (a5 & t16) != 0)) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c097fc4(int a4)
{
    register int t0;

    t0 = FUN_0c097f5c(a4, 0x400, 0x200);
    if ((signed char)t0 != 0) {
        t0 = FUN_0c08a842();
        if (t0 == 0) {
            (((struct o7222_uchar *)(a4))->v) = 0x9;
        } else {
            (((struct o7222_uchar *)(a4))->v) = 0xA;
        }
        return 0x1;
    }
    t0 = FUN_0c097f5c(a4, 0x400, 0x4);
    if ((signed char)t0 != 0) {
        (((struct o7222_uchar *)(a4))->v) = 0x6;
        return 0x1;
    }
    t0 = FUN_0c097f5c(a4, 0x200, 0x4);
    if ((signed char)t0 != 0) {
        (((struct o7222_uchar *)(a4))->v) = 0x7;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c098026(int a4)
{
    register int t0;

    if ((((((struct o2E4_int *)(a4))->v)) & 0x400) != 0) {
        t0 = FUN_0c097f3c(a4);
        if ((signed char)t0 != 0) {
            (((struct o7222_uchar *)(a4))->v) = 0x3;
        } else {
            t0 = FUN_0c08a928(a4);
            if ((signed char)t0 != 0) {
                (((struct o7222_uchar *)(a4))->v) = 0x8;
            } else {
                (((struct o7222_uchar *)(a4))->v) = 0x1;
            }
        }
        return 0x1;
    }
    if ((((((struct o2E4_int *)(a4))->v)) & 0x200) != 0) {
        (((struct o7222_uchar *)(a4))->v) = 0x2;
        return 0x1;
    }
    if ((((((struct o2E4_int *)(a4))->v)) & 4) != 0) {
        t0 = FUN_0c097f3c(a4);
        if ((signed char)t0 == 0) {
            (((struct o7222_uchar *)(a4))->v) = 0x4;
        } else {
            (((struct o7222_uchar *)(a4))->v) = 0x5;
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c098136(int a4)
{
    return ((((*(signed char *)((a4 + 0x7204))) == 2)) ? 1 : 0);
}
