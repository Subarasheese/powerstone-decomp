/* sound/BGM layer: ADX stream control bgm_play_* and snd_play_* table lookups (0c0a2eec-0c0a4030) */

int FUN_0c0a3988(int a4, int a5, int a6, int a7);
int FUN_0c0a3824(int a4, int a5, int a6, int a7);
struct o719E_short { char p[0x719E]; short v; };
struct o71D4_short { char p[0x71D4]; short v; };
int FUN_0c0e5d22(int);
int FUN_0c0e59e8(int, int, int);
int FUN_0c0f4a06(int);
int FUN_0c0f4db4(int, int);
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
int res_load_file_raw_c(int);
int FUN_0c0e55e0(int, int);
int FUN_0c0e5884(int);
int FUN_0c0f4c2c(void);
int FUN_0c0f4cc6(int);
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c0f4dc8(int);
struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int FUN_0c0e540c(int, int);
int FUN_0c0e5d98(int, int, int);
int FUN_0c0f46d0(int, int, int);
int FUN_0c0f4f14(int);
int FUN_0c0f4f1a(int);

int snd_play_se(int a4);
int snd_play_se_raw(int a4);
int FUN_0c0a2f5c(void);
int bgm_stop_streams(void);
int snd_play_side_se(int a4, int a5);
int snd_play_char_voice(int a4, int a5);

int snd_play_se(int a4)
{
    int t1;

    if (((*(signed char *)0xC7F2F0C) == 0) && (t1 = *(signed char *)0xC7F2F03, t1 != 0)) {
        return 0x23;
    }
    return FUN_0c0e5d22(a4);
}

int snd_play_se_raw(int a4)
{
    return FUN_0c0e5d22(a4);
}

void bgm_start_file(int a4, int a5)
{
    if ((*(int *)((((a4 << 2) + 0xC494048) + 0x0))) != 0) {
        *(volatile int *)(((a5 << 2) + 0xC180BD0));
        FUN_0c0f4a06((*(int *)((((a4 << 2) + 0xC494048) + 0x0))));
        FUN_0c0f4db4((*(int *)((((a4 << 2) + 0xC494048) + 0x0))), (*(int *)0xC494058));
    return;
    }
}

int bgm_stop_all(void)
{
    FUN_0c0a2f5c();
    return bgm_stop_streams();
}

int FUN_0c0a2f5c(void)
{
    return FUN_0c0e59e8(0x0, 0x300A0, 0x0);
}

int FUN_0c0a2f66(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    return FUN_0c0e59e8((*(signed char *)(((int)stk + 0))), 0x1300A0, 0x0);
}

int bgm_stop_streams(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o0_int *)0xC494048)->v);
    if (t0 != 0) {
        t1 = FUN_0c0f4cc6(t0);
        t0 = t1;
        if (t1 != 0) {
            *(volatile int *)0xC494048;
            t0 = (FUN_0c0f4c2c());
        }
        t1 = t0;
    }
    t0 = (((struct o4_int *)0xC494048)->v);
    if (t0 != 0) {
        t2 = FUN_0c0f4cc6(t0);
        if (t2 != 0) {
            *(volatile int *)0xC49404C;
            return FUN_0c0f4c2c();
        }
        return t2;
    }
    return t1;
}

int bgm_stop_slot(int a4)
{
    int stk[2];
    register int t1;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t1 = *(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC494048));
    *(unsigned int *)(((int)stk + 4)) = t1;
    if (t1 != 0) {
        t2 = FUN_0c0f4cc6(t1);
        if (t2 != 0) {
            *(volatile int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC494048));
            return FUN_0c0f4c2c();
        }
        return t2;
    }
    return 0xC494048;
}

int FUN_0c0a3062(int a4)
{
    register int t0;
    register int t1;

    if ((unsigned char)a4 == 0) {
        t0 = FUN_0c0e59e8(0x0, 0x900A0, 0x0);
        *(unsigned int *)0xC494058 = 0xFFFFFFC9;
        t1 = t0;
    } else {
        t0 = FUN_0c0e59e8(0x0, 0x800A0, 0x0);
        *(unsigned int *)0xC494058 = 0xFFFFFFF1;
        t1 = t0;
    }
    return t1;
}

int bgm_duck(void)
{
    register int t0;

    t0 = FUN_0c0f4cc6(((((struct o0_int *)0xC494048)->v)));
    if (t0 != 0) {
        (((struct o8_uint *)0xC494048)->v) = (FUN_0c0f4dc8(((((struct o0_int *)0xC494048)->v))));
        FUN_0c0f4db4(((((struct o0_int *)0xC494048)->v)), 0xFFFFFC40);
        FUN_0c0a2f5c();
    }
    t0 = FUN_0c0f4cc6(((((struct o4_int *)0xC494048)->v)));
    if (t0 != 0) {
        (((struct oC_uint *)0xC494048)->v) = (FUN_0c0f4dc8(((((struct o4_int *)0xC494048)->v))));
        FUN_0c0f4db4(((((struct o4_int *)0xC494048)->v)), 0xFFFFFC40);
        return FUN_0c0a2f5c();
    }
    return t0;
}

int bgm_unduck(void)
{
    register int t0;

    t0 = FUN_0c0f4cc6(((((struct o0_int *)0xC494048)->v)));
    if (t0 != 0) {
        FUN_0c0f4db4(((((struct o0_int *)0xC494048)->v)), ((((struct o8_int *)0xC494048)->v)));
    }
    t0 = FUN_0c0f4cc6(((((struct o4_int *)0xC494048)->v)));
    if (t0 != 0) {
        return FUN_0c0f4db4(((((struct o4_int *)0xC494048)->v)), ((((struct oC_int *)0xC494048)->v)));
    }
    return t0;
}

int snd_init_adx(void)
{
    register int t9;

    FUN_0c0e540c(0xC16C40C, 0x0);
    FUN_0c0e5884(0x1);
    FUN_0c0e5884(0x0);
    res_load_file_raw_c(0xC5);
    FUN_0c0e55e0(0xCC00000, 0x0);
    res_load_file_raw_c(0xC7);
    FUN_0c0e55e0(0xCC00000, 0x1);
    FUN_0c0e5d98(0x4, 0x2, 0x0);
    (((struct o0_uint *)0xC494048)->v) = (FUN_0c0f46d0(0x2, 0xC439EC0, 0x2D0C4));
    t9 = FUN_0c0f46d0(0x2, 0xC466F84, 0x2D0C4);
    (((struct o4_uint *)0xC494048)->v) = t9;
    return t9;
}

int FUN_0c0a3274(void)
{
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t18;
    register int t20;
    register int t0;
    register int t1;

    t2 = 0xC494048;
    t3 = 0x0;
    t4 = 0xC494048;
    t5 = 0xC494048;
    t6 = 0xC494048;
    for (;;) {
        t18 = t1;
        t20 = t2;
        if ((*(int *)((t4 + 0x0))) != 0) {
            t2 = (*(int *)((t5 + 0x0)));
            t0 = (FUN_0c0f4f14(t2));
            t2 = t0;
            if (t2 != 0) {
                t2 = (*(int *)((t6 + 0x0)));
                t0 = (FUN_0c0f4f1a(t2));
                t2 = (*(int *)((t6 + 0x0)));
                t0 = (FUN_0c0f4c2c());
                t1 = (*(int *)0xC339C80);
                t1 = (t1 + 0x1);
                *(unsigned int *)0xC339C80 = t1;
                t18 = t1;
            } else {
                t20 = t2;
            }
        }
        t3 = (t3 + 0x1);
        t1 = t18;
        t2 = t20;
        t5 = (t5 + 0x4);
        t6 = (t6 + 0x4);
        t4 = (t4 + 0x4);
        if ((int)t3 >= (int)0x2) {
            break;
        }
    }
    return t0;
}

int FUN_0c0a32dc(void)
{
    FUN_0c0e5884(0x4);
    FUN_0c0e5884(0x3);
    FUN_0c0e5884(0x2);
    res_load_file_raw_c(0xC8);
    return (FUN_0c0e55e0(0xCC00000, 0x2));
}

void FUN_0c0a3304(void)
{
    
}

int FUN_0c0a3308(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    FUN_0c0e5884(0x4);
    FUN_0c0e5884(0x3);
    FUN_0c0e5884(0x2);
    res_load_file_raw_c(0xEA);
    FUN_0c0e55e0(0xCC00000, 0x2);
    res_load_file_raw_c((*(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC151B80))));
    return (FUN_0c0e55e0(0xCC00000, 0x3));
}

void res_load_match_sound_banks(int obj, int arg1, int arg2)
{
    int stack_args[3];
    register int tmp3;
    register int tmp6;
    register int tmp11;
    register int tmp14;
    int tmp5;
    int tmp13;

    *(unsigned char *)(((int)stack_args + 4)) = obj;
    *(unsigned char *)(((int)stack_args + 8)) = arg1;
    *(unsigned char *)(((int)stack_args + 0)) = arg2;
    FUN_0c0e5884(0x4);
    FUN_0c0e5884(0x3);
    FUN_0c0e5884(0x2);
    tmp3 = *(signed char *)(((int)stack_args + 8));
    tmp6 = 0xC151BA8;
    if (((unsigned char)(*(signed char *)0xC7F2F08) == 1) && (tmp5 = *(signed char *)0xC7F2F10, tmp5 == 0)) {
        tmp6 = 0xC151BD4;
    }
    res_load_file_raw_c((*(int *)(((tmp3 << 2) + tmp6))));
    FUN_0c0e55e0(0xCC00000, 0x2);
    tmp11 = *(signed char *)(((int)stack_args + 0));
    tmp14 = 0xC151BA8;
    if (((unsigned char)(*(signed char *)0xC7F2F08) == 1) && (tmp13 = *(signed char *)0xC7F2F10, tmp13 == 0)) {
        tmp14 = 0xC151BD4;
    }
    res_load_file_raw_c((*(int *)(((tmp11 << 2) + tmp14))));
    FUN_0c0e55e0(0xCC00000, 0x3);
    res_load_file_raw_c((*(int *)((((*(signed char *)(((int)stack_args + 4))) << 2) + 0xC151C00))));
    FUN_0c0e55e0(0xCC00000, 0x4);
}

int FUN_0c0a3426(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    FUN_0c0e5884(0x4);
    FUN_0c0e5884(0x3);
    FUN_0c0e5884(0x2);
    res_load_file_raw_c((*(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC151BA8))));
    return (FUN_0c0e55e0(0xCC00000, 0x2));
}

int FUN_0c0a375c(void)
{
    return snd_play_se_raw(0x1A9);
}

int FUN_0c0a3762(int a4, int a5)
{
    int stk[2];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = *(signed char *)(((int)stk + 4));
    if ((int)(unsigned char)t0 <= (int)0xA) {
        *(unsigned char *)(((int)stk + 0)) = ((*(signed char *)(((int)stk + 0))) & 0x1);
        return snd_play_se(((*(int *)((((*(signed char *)(((int)stk + 4))) << 2) + 0xC151D04))) + (*(signed char *)(((int)stk + 0)))));
    }
    return (unsigned char)t0;
}

void FUN_0c0a3792(void)
{
    
}

int snd_play_side_se(int a4, int a5)
{
    int stk[2];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = *(signed char *)(((int)stk + 4));
    if (((int)(unsigned char)t0 <= (int)0x4F) && (((int)(unsigned char)t0 < (int)0x37) || ((int)(unsigned char)t0 > (int)0x3F))) {
        *(unsigned char *)(((int)stk + 0)) = ((*(signed char *)(((int)stk + 0))) & 0x1);
        return snd_play_se(((*(int *)((((*(signed char *)(((int)stk + 4))) << 2) + 0xC151D30))) + (*(signed char *)(((int)stk + 0)))));
    }
    return t0;
}

int pl_play_side_se_at_frame(int a4, int a5, int a6)
{
    int stk[2];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a6;
    if ((unsigned short)((((struct o719E_short *)((*(int *)(((int)stk + 0)))))->v)) == (unsigned char)a5) {
        return snd_play_side_se((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x3))), (*(signed char *)(((int)stk + 4))));
    }
    return 0x719E;
}


int snd_play_char_voice(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t2;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = *(signed char *)(((int)stk + 4));
    if (((int)(unsigned char)t0 <= (int)0x3F) && (((int)(unsigned char)t0 < (int)0x20) || ((int)(unsigned char)t0 > (int)0x2F))) {
        t2 = *(int *)(((int)stk + 0));
        return snd_play_se((((*(int *)((((*(signed char *)(((int)stk + 4))) << 2) + 0xC151E70))) + (((*(signed char *)((t2 + 0x4))) << 8) << 1)) + (*(signed char *)((t2 + 0x3)))));
    }
    return t0;
}

int pl_play_voice_at_frame(int a4, int a5, int a6)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a6;
    if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
        if ((unsigned short)((((struct o719E_short *)(a4))->v)) == (unsigned char)a5) {
            return snd_play_char_voice(a4, (*(signed char *)(((int)stk + 0))));
        }
        return 0x719E;
    }
    return 0x71D4;
}


int FUN_0c0a3cb0(int a4, int a5)
{
    if ((signed char)a5 == 0) {
        return snd_play_se((((((struct o0_int *)0xC151D64)->v)) + (signed char)(a4 & 0x1)));
    }
    return snd_play_se((((((struct o8_int *)0xC151D64)->v)) + (signed char)(a4 & 0x1)));
}

int FUN_0c0a3cd6(int a4)
{
    snd_play_se(((*(int *)0xC151D6C) + (signed char)(a4 & 0x1)));
    return snd_play_se((((*(int *)0xC151EB4) + (((*(signed char *)(((unsigned short)((unsigned short)(signed char)(a4 & 0x1) * (unsigned short)0x72D0) + 0xC7E40C8))) << 8) << 1)) + (signed char)(a4 & 0x1)));
}

int FUN_0c0a3d16(int a4)
{
    register int t9;

    if ((*(signed char *)(((unsigned short)((unsigned short)(signed char)(a4 & 0x1) * (unsigned short)0x72D0) + 0xC7EB2B5))) == 0) {
        t9 = (((*(int *)0xC151D90) - (signed char)(a4 & 0x1)) + 0x1);
    } else {
        snd_play_se((((((struct o0_int *)0xC151DD8)->v)) + (signed char)(a4 & 0x1)));
        t9 = (((((struct o4_int *)0xC151DD8)->v)) + (signed char)(a4 & 0x1));
    }
    return snd_play_se(t9);
}

void FUN_0c0a3d5c(int a4, int a5)
{
    int stk[1];
    register int t1;

    *(unsigned char *)(((int)stk + 0)) = a4;
    if ((int)(unsigned char)a5 <= (int)0x5) {
        *(unsigned char *)(((int)stk + 0)) = ((*(signed char *)(((int)stk + 0))) & 0x1);
        t1 = *(signed char *)0xC7F3051;
        if ((*(int *)(((((((t1 << 1) + (t1 << 2)) + (signed char)a5) << 2) + 0xC151F70) + 0x0))) != 0xFFFFFF) {
            snd_play_se(((*(signed char *)(((int)stk + 0))) + (*(int *)(((((((t1 << 1) + (t1 << 2)) + (signed char)a5) << 2) + 0xC151F70) + 0x0)))));
    return;
        }
        return;
    }
}

void FUN_0c0a3dcc(int a4, int a5)
{
    int stk[1];
    register int t1;

    *(unsigned char *)(((int)stk + 0)) = a4;
    if ((int)(unsigned char)a5 <= (int)0x5) {
        *(unsigned char *)(((int)stk + 0)) = ((*(signed char *)(((int)stk + 0))) & 0x1);
        t1 = *(signed char *)0xC7F3051;
        if ((*(int *)(((((((t1 << 1) + (t1 << 2)) + (signed char)a5) << 2) + 0xC152078) + 0x0))) != 0xFFFFFF) {
            snd_play_se(((*(signed char *)(((int)stk + 0))) + (*(int *)(((((((t1 << 1) + (t1 << 2)) + (signed char)a5) << 2) + 0xC152078) + 0x0)))));
    return;
        }
        return;
    }
}

void FUN_0c0a3e10(int a4, int a5, int a6)
{
    register int t0;

    if ((int)(unsigned char)a5 <= (int)0x5) {
        t0 = *(signed char *)0xC7F3051;
        if ((*(int *)(((((((t0 << 1) + (t0 << 2)) + (signed char)a5) << 2) + 0xC152180) + 0x0))) != 0xFFFFFF) {
            if ((signed char)a6 == 0) {
                snd_play_se(((*(int *)(((((((t0 << 1) + (t0 << 2)) + (signed char)a5) << 2) + 0xC152180) + 0x0))) + (signed char)(a4 & 0x1)));
    return;
            }
            snd_play_se((((*(int *)(((((((t0 << 1) + (t0 << 2)) + (signed char)a5) << 2) + 0xC152180) + 0x0))) + (signed char)(a4 & 0x1)) + 0x10000));
    return;
        }
        return;
    }
}

void FUN_0c0a3e64(int a4, int a5)
{
    int stk[1];
    register int t1;

    *(unsigned char *)(((int)stk + 0)) = a4;
    if ((int)(unsigned char)a5 <= (int)0x5) {
        *(unsigned char *)(((int)stk + 0)) = ((*(signed char *)(((int)stk + 0))) & 0x1);
        t1 = *(signed char *)0xC7F3051;
        if ((*(int *)(((((((t1 << 1) + (t1 << 2)) + (signed char)a5) << 2) + 0xC152288) + 0x0))) != 0xFFFFFF) {
            snd_play_se(((*(signed char *)(((int)stk + 0))) + (*(int *)(((((((t1 << 1) + (t1 << 2)) + (signed char)a5) << 2) + 0xC152288) + 0x0)))));
    return;
        }
        return;
    }
}

int FUN_0c0a3ea8(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = *(signed char *)(((int)stk + 0));
    *(unsigned char *)(((int)stk + 0)) = (t0 & 0x1);
    return snd_play_se(((signed char)(t0 & 0x1) + 0x502A9));
}

int snd_play_stage_obj_se(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a5;
    *(unsigned char *)(((int)stk + 4)) = a6;
    t0 = *(signed char *)(((int)stk + 4));
    if ((int)(unsigned char)t0 <= (int)0x8) {
        *(unsigned char *)(((int)stk + 0)) = ((*(signed char *)(((int)stk + 0))) & 0x1);
        return snd_play_se(((*(int *)((((*(signed char *)(((int)stk + 4))) << 2) + 0xC152390))) + (*(signed char *)(((int)stk + 0)))));
    }
    return (unsigned char)t0;
}

void FUN_0c0a3eec(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    if ((int)(unsigned char)(*(signed char *)(((int)stk + 0))) <= (int)0x13) {
        snd_play_se((*(int *)((((unsigned char)(*(signed char *)(((int)stk + 0))) << 2) + 0xC1523B4))));
    return;
    }
}

void FUN_0c0a3f0e(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    if ((int)(unsigned char)(*(signed char *)(((int)stk + 0))) <= (int)0x7) {
        snd_play_se((*(int *)((((unsigned char)(*(signed char *)(((int)stk + 0))) << 2) + 0xC152404))));
    return;
    }
}

void FUN_0c0a3f30(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    if ((int)(unsigned char)(*(signed char *)(((int)stk + 0))) <= (int)0x2D) {
        snd_play_se((*(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC152424))));
    return;
    }
}

void FUN_0c0a3f50(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = *(signed char *)(((int)stk + 0));
    if (((int)(unsigned char)t0 >= (int)0x3) && ((int)(unsigned char)t0 <= (int)0x7)) {
        snd_play_se((*(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC1524DC))));
    return;
    }
}

void snd_play_announcer(int a4, int a5)
{
    if ((int)(unsigned char)(((unsigned short)(a4 & 0x1) * (unsigned short)0xB) + a5) <= (int)0x18) {
        snd_play_se((*(int *)((((unsigned char)(((unsigned short)(a4 & 0x1) * (unsigned short)0xB) + a5) << 2) + 0xC152500))));
    return;
    }
}

int FUN_0c0a3fa4(int a4, int a5)
{
    int stk[2];

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    if ((int)(*(signed char *)(((int)stk + 0))) <= (int)0xF) {
        return snd_play_se(((*(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC152564))) + ((*(signed char *)(((int)stk + 4))) << 8)));
    }
    return a4;
}

void FUN_0c0a3fce(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    if ((int)(unsigned char)(*(signed char *)(((int)stk + 0))) <= (int)0x27) {
        snd_play_se((*(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC1510B8))));
    return;
    }
}
