/* player state enter handlers (table 0xC339490) and state-specific helpers; same module as the following rows up to 0c0a18f8 (0c0a07e4-0c0a0b78) */

struct o10_float { char p[0x10]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o729C_float { char p[0x729C]; float v; };
float FUN_0c02651e(int);
int pl_timer_disable(int);
int pl_start_motion(int, int, int);
int hit_find_wall_entry_by_kind(int, int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int _quick_evn_mvn(int);
struct o7207_uchar { char p[0x7207]; unsigned char v; };
struct o720A_uchar { char p[0x720A]; unsigned char v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o7244_uint { char p[0x7244]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int pl_angle_to_opponent(int);
struct o721A_uchar { char p[0x721A]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o721C_uchar { char p[0x721C]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int pl_timer_arm_forever(int);

int pl_enter_state_36(int a4, int a5)
{
    int stk[7];
    register int t1;
    register int t9;
    register int t23;

    *(unsigned char *)(((int)stk + 0)) = a5;
    (((struct o71BA_uchar *)(a4))->v) = 0x24;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    pl_timer_disable(a4);
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    t1 = *(signed char *)(((int)stk + 0));
    if (t1 != 1) {
        pl_start_motion(a4, 0x2, 0xCF);
        snd_play_char_voice(a4, 0xF);
        snd_play_side_se((*(signed char *)((a4 + 0x3))), 0xE);
    } else {
        pl_start_motion(a4, 0x2, 0xD0);
        *(unsigned char *)((a4 + 0xA)) = 0x1;
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    if (t1 != 2) {
        t9 = hit_find_wall_entry_by_kind(a4, 0x9);
        t23 = (signed char)t9;
        if ((signed char)t9 != 0) {
            { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 0) + 0x4)) = *(struct mv6 *)((*(int *)((((((signed char)t9 - 1) << 2) + (0x2C0 + a4)) + 0x0)))); }
            (((struct o24_float *)(a4))->v) = (((((((struct o4_float *)((((int)stk + 0) + 0x4)))->v)) - ((((struct o10_float *)((((int)stk + 0) + 0x4)))->v))) - (FUN_0c02651e(a4))) + (*(float *)0xC0A0940));
            t23 = 0x24;
        }
    } else {
        (((struct o24_float *)(a4))->v) = (((((struct o729C_float *)(a4))->v)) + (*(float *)0xC0A0940));
        t23 = 0x24;
    }
    return t23;
}

int pl_enter_state_37(int a4, int a5)
{
    int stk[1];
    register int t13;

    *(unsigned char *)(((int)stk + 0)) = a5;
    (((struct o71BA_uchar *)(a4))->v) = 0x25;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_timer_disable(a4);
    (((struct o7236_uchar *)(a4))->v) = 0x0;
    (((struct o7244_uint *)(a4))->v) = (pl_angle_to_opponent(a4));
    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) == 15) {
        (((struct oEC_ushort *)(a4))->v) = 0x1;
        (((struct o720A_uchar *)(a4))->v) = 0x0;
        t13 = 0x720A;
    } else {
        if ((*(signed char *)(((int)stk + 0))) == 0) {
            (((struct oEC_ushort *)(a4))->v) = 0xA;
            (((struct o720A_uchar *)(a4))->v) = 0x0;
            pl_start_motion(a4, 0x1, 0x54);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            t13 = 0x71A8;
        } else {
            (((struct oEC_ushort *)(a4))->v) = 0x1;
            (((struct o720A_uchar *)(a4))->v) = 0x0;
            (((struct o7207_uchar *)(a4))->v) = 0x1;
            t13 = 0x7207;
        }
    }
    return t13;
}

int pl_enter_state_38(int a4, int a5)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a5;
    (((struct o71BA_uchar *)(a4))->v) = 0x26;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    pl_timer_disable(a4);
    (((struct o721A_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x721A))) + 0x1);
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    pl_start_motion(a4, 0x2, 0xCE);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    *(unsigned int *)((a4 + 0x30)) = ((((((*(signed char *)(((int)stk + 0))) - 4) << 8) << 2) << 2) << 2);
    (((struct oEC_ushort *)(a4))->v) = 0x8;
    return 0xEC;
}

float pl_enter_state_39(int a4, int a5)
{
    int stk[7];
    register float u18;
    register float u19;
    register float t20;
    register int t15;
    register float u16;

    *(unsigned char *)(((int)stk + 0)) = a5;
    (((struct o71BA_uchar *)(a4))->v) = 0x27;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    pl_timer_disable(a4);
    (((struct o721C_uchar *)(a4))->v) = 0x0;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    if ((*(signed char *)(((int)stk + 0))) == 0) {
        pl_start_motion(a4, 0x2, 0xCF);
        snd_play_side_se((*(signed char *)((a4 + 0x3))), 0xE);
        snd_play_char_voice(a4, 0xF);
    } else {
        pl_start_motion(a4, 0x2, 0xD0);
        *(unsigned char *)((a4 + 0xA)) = 0x1;
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 0) + 0x4)) = *(struct mv6 *)((*(int *)((((((signed char)(hit_find_wall_entry_by_kind(a4, 0xA)) - 1) << 2) + (0x2C0 + a4)) + 0x0)))); }
    if (((((struct oC_float *)((((int)stk + 0) + 0x4)))->v)) > ((((struct o14_float *)((((int)stk + 0) + 0x4)))->v))) {
        t15 = 0x28;
        u16 = ((((struct o8_float *)((((int)stk + 0) + 0x4)))->v));
    } else {
        t15 = 0x20;
        u16 = ((((struct o4_float *)(((int)stk + 0)))->v));
    }
    *(float *)((a4 + t15)) = u16;
    u18 = (((struct o10_float *)((((int)stk + 0) + 0x4)))->v);
    u19 = (((struct o4_float *)((((int)stk + 0) + 0x4)))->v);
    t20 = FUN_0c02651e(a4);
    (((struct o24_float *)(a4))->v) = (((u19 - u18) - t20) + (*(float *)0xC0A0B70));
    return t20;
}

int pl_enter_state_40(int a4, int a5)
{
    int stk[1];
    register int t5;

    *(unsigned char *)(((int)stk + 0)) = a5;
    (((struct o71BA_uchar *)(a4))->v) = 0x28;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_timer_arm_forever(a4);
    if ((*(signed char *)(((int)stk + 0))) != 0) {
        
        pl_start_motion(a4, 0x1, 0x3F);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0xA)) = 0x1;
        t5 = 0x1;
    } else {
        pl_start_motion(a4, 0x0, 0x0);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct oEC_ushort *)(a4))->v) = 0x3C;
        t5 = 0xEC;
    }
    return t5;
}
