/* Straight-line functions with calls and guards (batch gen_cl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o71A6_uchar { char p[0x71A6]; unsigned char v; };
struct o71A7_uchar { char p[0x71A7]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o7248_short { char p[0x7248]; short v; };
struct o72BC_uint { char p[0x72BC]; unsigned int v; };
struct o74_float { char p[0x74]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
int FUN_0c085606(int);
int FUN_0c08ebfa(int, int);
int FUN_0c0c6094(int, int);
int obj_set_record_char(int, int);
int pl_apply_motion_translation(int);
int pl_change_state(int, int, int);
int pl_start_hit_freeze(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int snd_play_char_voice(int, int);
int FUN_0c085996(int a4);
int FUN_0c08f310(int a4);
int FUN_0c08642c(int a4);
int FUN_0c085d0e(int a4);

int FUN_0c085996(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    u0 = (((struct o6C_float *)(((0x300 + a4) + 0x1080)))->v);
    u1 = (u0 + 0.166666657f);
    if ((u0 + 0.166666657f) > 3.0f) {
        u1 = 3.0f;
    }
    (((struct o74_float *)(((0x300 + a4) + 0x1080)))->v) = u1;
    (((struct o70_float *)(((0x300 + a4) + 0x1080)))->v) = u1;
    (((struct o6C_float *)(((0x300 + a4) + 0x1080)))->v) = u1;
    t0 = *(int *)((a4 + 0x30));
    t1 = (((struct o7248_short *)(a4))->v);
    t2 = *(int *)((a4 + 0x30));
    t3 = (unsigned short)(t1 - t0);
    if ((0x8000 & (unsigned short)(t1 - t0)) != 0) {
        t3 = ((unsigned short)(t1 - t0) | 0xFFFF0000);
    }
    *(unsigned int *)((a4 + 0x30)) = (unsigned short)(t2 + ((int)((int)t3 / (int)((((struct oEC_short *)(a4))->v)))));
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct oEC_ushort *)(a4))->v) = 0x1;
    }
    pl_step_motion(a4);
    FUN_0c085606(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x78;
        pl_start_motion(a4, 0x1, 0x6C);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct o74_float *)(((0x300 + a4) + 0x1080)))->v) = 3.0f;
        (((struct o70_float *)(((0x300 + a4) + 0x1080)))->v) = 3.0f;
        (((struct o6C_float *)(((0x300 + a4) + 0x1080)))->v) = 3.0f;
        (((struct o72BC_uint *)(a4))->v) = 0xC337BCC;
        FUN_0c085606(a4);
        snd_play_char_voice(a4, 0x34);
        obj_set_record_char(a4, 0x74);
        return pl_start_hit_freeze(a4);
    }
    return 0x71AA;
}

int FUN_0c08f310(int a4)
{
    int stk[2];
    register int t0;
    register int t17;
    register int t24;
    register int t27;

    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        pl_step_motion(a4);
    }
    if (!(0.0f > (*(float *)(((((((struct oF2_short *)(a4))->v)) << 2) + (*(int *)((0xC338C34 + ((*(signed char *)((a4 + 0x7213))) << 2))))))))) {
        FUN_0c08ebfa(a4, (0xF2 + a4));
    } else {
        pl_start_motion(a4, 0x2, ((*(signed char *)((a4 + 0xEC))) + 0x2));
        if ((int)((((struct oF0_short *)(a4))->v)) <= (int)0x1) {
            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
        }
        t17 = *(signed char *)((a4 + 0xF0));
        (((struct o71A7_uchar *)(a4))->v) = (t17 + 0xFF);
        (((struct o71A6_uchar *)(a4))->v) = (t17 + 0xFF);
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    }
    t24 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t24 - 1);
    if ((int)(short)(t24 - 1) <= 0) {
        t27 = 0x18;
        if ((*(signed char *)((a4 + 0x7214))) == 0) {
            t27 = 0xD;
        }
        return pl_change_state(a4, t27, 0x0);
    }
    return 0xF0;
}

int FUN_0c08642c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = (*(short *)((((*(signed char *)((a4 + 0x721D))) << 1) + 0xC337B9C)));
        pl_start_motion(a4, 0x1, 0x6F);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        return pl_start_hit_freeze(a4);
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct oEC_ushort *)(a4))->v) = 0x1;
    }
    t0 = *(int *)((a4 + 0x30));
    t1 = (((struct o7248_short *)(a4))->v);
    t2 = *(int *)((a4 + 0x30));
    t3 = (unsigned short)(t1 - t0);
    if ((0x8000 & (unsigned short)(t1 - t0)) != 0) {
        t3 = ((unsigned short)(t1 - t0) | 0xFFFF0000);
    }
    t0 = (int)((int)t3 / (int)((((struct oEC_short *)(a4))->v)));
    *(unsigned int *)((a4 + 0x30)) = (unsigned short)(t2 + t0);
    return t0;
}

int FUN_0c085d0e(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        snd_play_char_voice(a4, 0x36);
        FUN_0c0c6094(a4, 0x1);
    } else {
        t0 = *(int *)((a4 + 0x30));
        t1 = (((struct o7248_short *)(a4))->v);
        t2 = *(int *)((a4 + 0x30));
        t3 = (unsigned short)(t1 - t0);
        if ((0x8000 & (unsigned short)(t1 - t0)) != 0) {
            t3 = ((unsigned short)(t1 - t0) | 0xFFFF0000);
        }
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)(t2 + ((int)((int)t3 / (int)((((struct oEC_short *)(a4))->v)))));
    }
    return pl_step_motion(a4);
}
