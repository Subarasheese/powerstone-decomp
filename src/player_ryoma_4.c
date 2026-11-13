/* character 1 (Ryoma) (0c06d140-0c06d3d4) */

struct o14_float { char p[0x14]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_landed(int);
int FUN_0c0a3762(int, int);
int snd_play_side_se(int, int);
float math_signed_sqrt(float);
int thunk_FUN_0c062242(int);

int pl_ryoma_special2_phase3(int a4)
{
    int stk[16];
    register float u9;
    register float u10;
    register float u12;
    register float t13;
    register float u15;
    register float u21;
    register float u26;
    register int t33;
    register int t51;
    register int t79;
    register int t87;
    register int t88;
    register int t121;
    register int t129;
    register int t130;
    register int t36;
    register int t37;
    register int t131;
    register int t65;
    register int t66;
    register int t107;
    register int t108;

    pl_step_motion(a4);
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    *(float *)(((int)stk + 28)) = (((((struct o20_float *)(a4))->v)) - ((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v)));
    *(float *)(((int)stk + 36)) = (((((struct o28_float *)(a4))->v)) - ((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v)));
    *(float *)(((int)stk + 32)) = 0.0f;
    u9 = *(float *)(((int)stk + 28));
    *(float *)(((int)stk + 20)) = u9;
    u10 = *(float *)(((int)stk + 36));
    *(float *)(((int)stk + 16)) = u10;
    u12 = (u10 * u10);
    u12 = u12 + u9 * (*(float *)(((int)stk + 20)));
    t13 = math_signed_sqrt(u12);
    u15 = t13;
    if (t13 == 0.0f) {
        u15 = 9.99999997e-07f;
    }
    u21 = ((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v));
    u21 = u21 + 80.0f * (((*(float *)(((int)stk + 28))) / u15));
    *(float *)(((int)stk + 28)) = u21;
    u26 = ((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v));
    u26 = u26 + 80.0f * (((*(float *)(((int)stk + 36))) / u15));
    *(float *)(((int)stk + 36)) = u26;
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct oC_float *)(((int)stk + 16)))->v)) - ((((struct o20_float *)(a4))->v))) / 8.0f));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o14_float *)(((int)stk + 16)))->v)) - ((((struct o28_float *)(a4))->v))) / 8.0f));
    t33 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t33 + 0x1);
    if ((short)(t33 + 0x1) == 34) {
        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
            *(int *)((int)stk + 12) = 0xC14EECC;
            *(int *)((int)stk + 8) = 0xC14EEC0;
            t36 = 0xC14EECC;
            t37 = 0xC14EEC0;
        } else {
            *(int *)((int)stk + 12) = 0xC14EEE4;
            *(int *)((int)stk + 8) = 0xC14EED8;
            t36 = 0xC14EEE4;
            t37 = 0xC14EED8;
        }
        *(int *)((int)stk + 4) = 0x42;
        *(int *)((int)stk + 0) = 0x64;
        fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x1, 0x5, 0x1, 0x64, 0x42, t37, t36);
    }
    t51 = pl_landed(a4);
    if ((signed char)t51 == 0) {
        t131 = 0x3C;
        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
            t131 = 0x24;
            if (((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v)) > ((((struct o24_float *)(a4))->v))) {
                pl_start_motion(a4, 0x4, 0x4);
                if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                    *(int *)((int)stk + 12) = 0xC14EECC;
                    *(int *)((int)stk + 8) = 0xC14EEC0;
                    t65 = 0xC14EECC;
                    t66 = 0xC14EEC0;
                } else {
                    *(int *)((int)stk + 12) = 0xC14EEE4;
                    *(int *)((int)stk + 8) = 0xC14EED8;
                    t65 = 0xC14EEE4;
                    t66 = 0xC14EED8;
                }
                *(int *)((int)stk + 4) = 0x42;
                *(int *)((int)stk + 0) = 0x14;
                fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x1, 0x5, 0x1, 0x14, 0x42, t66, t65);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0xA);
                snd_play_side_se((*(signed char *)((a4 + 0x3))), 0xA);
                obj_set_owner_hit_record(a4, 0x31);
                obj_force_owner_state27(a4, 0x31);
                t79 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
                *(unsigned int *)(((int)stk + 24)) = ((unsigned short)((unsigned short)t79 * (unsigned short)0x72D0) + 0xC7E40C4);
                thunk_FUN_0c062242(((((unsigned short)((unsigned short)t79 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t79 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
                fx_spawn_hit_effect((((int)stk + 16) + 0xC), (a4 + 0x2C), (*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3))), 0x5, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
                pl_start_motion((*(int *)((a4 + 0x1C))), 0x2, 0x83);
                t87 = *(int *)((a4 + 0x1C));
                (((struct o71A9_uchar *)(t87))->v) = 0x1;
                (((struct o71A8_uchar *)(t87))->v) = 0x1;
                (((struct o40_float *)(a4))->v) = 0.0f;
                (((struct o38_float *)(a4))->v) = 0.0f;
                (((struct o3C_float *)(a4))->v) = 0.0f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                (((struct o48_float *)(a4))->v) = -1.0f;
                t88 = *(signed char *)((a4 + 0xA));
                *(unsigned char *)((a4 + 0xA)) = (t88 + 0x1);
                t131 = (t88 + 0x1);
            }
        }
    } else {
        pl_start_motion(a4, 0x4, 0x4);
        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
            *(int *)((int)stk + 12) = 0xC14EECC;
            *(int *)((int)stk + 8) = 0xC14EEC0;
            t107 = 0xC14EECC;
            t108 = 0xC14EEC0;
        } else {
            *(int *)((int)stk + 12) = 0xC14EEE4;
            *(int *)((int)stk + 8) = 0xC14EED8;
            t107 = 0xC14EEE4;
            t108 = 0xC14EED8;
        }
        *(int *)((int)stk + 4) = 0x42;
        *(int *)((int)stk + 0) = 0x14;
        fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x1, 0x5, 0x1, 0x14, 0x42, t108, t107);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0xA);
        snd_play_side_se((*(signed char *)((a4 + 0x3))), 0xA);
        obj_set_owner_hit_record(a4, 0x31);
        obj_force_owner_state27(a4, 0x31);
        t121 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
        *(unsigned int *)(((int)stk + 24)) = ((unsigned short)((unsigned short)t121 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242(((((unsigned short)((unsigned short)t121 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t121 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
        fx_spawn_hit_effect((((int)stk + 16) + 0xC), (a4 + 0x2C), (*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3))), 0x5, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
        pl_start_motion((*(int *)((a4 + 0x1C))), 0x2, 0x83);
        t129 = *(int *)((a4 + 0x1C));
        (((struct o71A9_uchar *)(t129))->v) = 0x1;
        (((struct o71A8_uchar *)(t129))->v) = 0x1;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = -1.0f;
        t130 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t130 + 0x1);
        t131 = (t130 + 0x1);
    }
    return t131;
}
