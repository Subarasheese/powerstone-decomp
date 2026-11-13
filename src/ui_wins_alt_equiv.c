/* win counter text (0c0d46e4-0c0d54c0) */

extern int ui_draw_win_count();
int ending_main(void);
int FUN_0c0158ee(void);
int ending_scene_main(void);
int FUN_0c0d4d00(void);
int game_play_state_00(void);
int game_play_state_01(void);
int game_play_state_02(void);
int game_play_state_03(void);
int game_play_state_04(void);
int game_play_state_05(void);
int game_play_state_06(void);
int game_play_state_07(void);
int FUN_0c0d52aa(void);
int FUN_0c0d5428(void);
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct oE_short { char p[0xE]; short v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
int FUN_0c0593e0(int);
int obj_tick_class(int, int);
int FUN_0c05fc1c(void);
struct o0_float { float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int dbg_print_at(int, float, float);
int sprintf(int, int, int, int, int);

int ui_draw_win_counts_both(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = ((int (*)(int, int, int, int))(ui_draw_win_count))(0x0, a5, a6, a7);
    return ((int (*)(int))(ui_draw_win_count))(0x1);
}

int game_play_dispatch_state(void)
{
    register int t1;

    register int R0;
    register int R3;
    register int T_;
    FUN_0c0d4d00();
    t1 = *(signed char *)0xC7F2EE4;
    R0 = ((unsigned char)t1);
    if (((unsigned char)t1 == 0)) goto L_C0D4E2A;
    if ((R0 == 1)) goto L_C0D4E32;
    if ((R0 == 2)) goto L_C0D4E3A;
    if ((R0 == 3)) goto L_C0D4E42;
    if ((R0 == 4)) goto L_C0D4E4A;
    if ((R0 == 5)) goto L_C0D4E52;
    if ((R0 == 6)) goto L_C0D4E5A;
    if ((R0 == 7)) goto L_C0D4E62;
    if ((R0 == 8)) goto L_C0D4E6A;
    if ((R0 == 9)) goto L_C0D4E74;
    if ((R0 == 10)) goto L_C0D4E7E;
    L_C0D4E82:;
    FUN_0c0158ee();
    return FUN_0c0d5428();
    L_C0D4E7E:;
    FUN_0c0d52aa();
    goto L_C0D4E82;
    L_C0D4E74:;
    ending_scene_main();
    goto L_C0D4E82;
    L_C0D4E6A:;
    ending_main();
    goto L_C0D4E82;
    L_C0D4E62:;
    game_play_state_07();
    goto L_C0D4E82;
    L_C0D4E5A:;
    game_play_state_06();
    goto L_C0D4E82;
    L_C0D4E52:;
    game_play_state_05();
    goto L_C0D4E82;
    L_C0D4E4A:;
    game_play_state_04();
    goto L_C0D4E82;
    L_C0D4E42:;
    game_play_state_03();
    goto L_C0D4E82;
    L_C0D4E3A:;
    game_play_state_02();
    goto L_C0D4E82;
    L_C0D4E32:;
    game_play_state_01();
    goto L_C0D4E82;
    L_C0D4E2A:;
    game_play_state_00();
    goto L_C0D4E82;
}

int FUN_0c0d5222(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F2EE6;
    if ((unsigned char)t0 != 0) {
        t1 = 0xC7F2EE6;
        if ((unsigned char)t0 != 1) {
        } else {
            t0 = (((struct oE_short *)0xC7F2EE4)->v);
            (((struct oE_ushort *)0xC7F2EE4)->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o0_uchar *)0xC7F2EE4)->v) = 0x2;
                (((struct o1_uchar *)0xC7F2EE4)->v) = 0x1;
                (((struct o3_uchar *)0xC7F2EE4)->v) = 0x0;
                (((struct o2_uchar *)0xC7F2EE4)->v) = 0x0;
                FUN_0c05fc1c();
            } else {
                t0 = 0xC7F2EE6;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        (((struct o2_uchar *)0xC7F2EE4)->v) = ((*(signed char *)0xC7F2EE6) + 0x1);
        (((struct oE_ushort *)0xC7F2EE4)->v) = 0x64;
        t1 = (((struct oE_short *)0xC7F2EE4)->v);
        (((struct oE_ushort *)0xC7F2EE4)->v) = (t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            (((struct o0_uchar *)0xC7F2EE4)->v) = 0x2;
            (((struct o1_uchar *)0xC7F2EE4)->v) = 0x1;
            (((struct o3_uchar *)0xC7F2EE4)->v) = 0x0;
            (((struct o2_uchar *)0xC7F2EE4)->v) = 0x0;
            FUN_0c05fc1c();
        } else {
            t1 = 0xC7F2EE6;
        }
        t0 = t1;
    }
    obj_tick_class(0x6, t0);
    return FUN_0c0593e0(0x6);
}

int FUN_0c0d52e8(void)
{
    int stk[9];
    register int t0;
    register int t43;
    register float u25;

    t0 = *(signed char *)0xC7F3071;
    t43 = (unsigned char)t0;
    if (((unsigned char)t0 != 1) && ((unsigned char)t0 != 2)) {
    } else {
        *(unsigned short *)(((((int)stk + 24) + 0x4) + 0x0)) = (*(short *)((((unsigned char)((unsigned short)((unsigned char)t0 - 1) * (unsigned short)0x78) + 0xC7F2DF0) + 0x12)));
        *(unsigned short *)(((((int)stk + 24) + 0x4) + 0x2)) = (*(short *)((((unsigned char)((unsigned short)((unsigned char)t0 - 1) * (unsigned short)0x78) + 0xC7F2DF0) + 0x14)));
        *(unsigned short *)((((((int)stk + 24) + 0x4) + 0x4) + 0x0)) = (*(short *)((((unsigned char)((unsigned short)((unsigned char)t0 - 1) * (unsigned short)0x78) + 0xC7F2DF0) + 0x16)));
        *(unsigned short *)((((((int)stk + 24) + 0x4) + 0x4) + 0x0)) = ((*(short *)((((((int)stk + 24) + 0x4) + 0x4) + 0x0))) + (*(short *)((((unsigned char)((unsigned short)((unsigned char)t0 - 1) * (unsigned short)0x78) + 0xC7F2DF0) + 0x1C))));
        if ((int)(*(short *)((((((int)stk + 24) + 0x4) + 0x4) + 0x0))) >= (int)0x3C) {
            *(unsigned short *)(((((int)stk + 24) + 0x4) + 0x4)) = ((*(short *)(((((int)stk + 24) + 0x4) + 0x4))) - 60);
            *(unsigned short *)(((((int)stk + 24) + 0x4) + 0x2)) = ((*(short *)(((((int)stk + 24) + 0x4) + 0x2))) + 0x1);
        }
        *(unsigned short *)((((((int)stk + 24) + 0x4) + 0x2) + 0x0)) = ((*(short *)((((((int)stk + 24) + 0x4) + 0x2) + 0x0))) + (*(short *)((((unsigned char)((unsigned short)((unsigned char)t0 - 1) * (unsigned short)0x78) + 0xC7F2DF0) + 0x1A))));
        if ((int)(*(short *)((((((int)stk + 24) + 0x4) + 0x2) + 0x0))) >= (int)0x3C) {
            *(unsigned short *)(((((int)stk + 24) + 0x4) + 0x2)) = ((*(short *)(((((int)stk + 24) + 0x4) + 0x2))) - 60);
            *(unsigned short *)(((((int)stk + 24) + 0x4) + 0x0)) = ((*(short *)(((((int)stk + 24) + 0x4) + 0x0))) + 0x1);
        }
        *(unsigned int *)(((int)stk + 24)) = (((int)stk + 24) + 0x4);
        *(unsigned short *)(((((int)stk + 24) + 0x4) + 0x0)) = ((*(short *)(((((int)stk + 24) + 0x4) + 0x0))) + (*(short *)((((unsigned char)((unsigned short)((unsigned char)t0 - 1) * (unsigned short)0x78) + 0xC7F2DF0) + 0x18))));
        *(int *)((int)stk + 20) = ((*(short *)(((*(int *)(((int)stk + 24))) + 0x0))));
        *(int *)((int)stk + 16) = 0xC15486C;
        sprintf(0xC7F36B8, 0x3C, ((((int)stk + 24) + 0x4) + 0x2), 0xC7F2DF0, 0xC15486C);
        u25 = (((struct o0_float *)0xC0D5488)->v);
        *(volatile float *)0xC0D548C;
        dbg_print_at(0xC7F36B8, ((((struct o8_float *)0xC0D5488)->v)), u25);
        dbg_print_at(0xC154870, ((((struct oC_float *)0xC0D5488)->v)), u25);
        *(int *)((int)stk + 12) = ((*(short *)(((((int)stk + 24) + 0x4) + 0x2))));
        *(int *)((int)stk + 8) = 0xC15486C;
        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC15486C);
        dbg_print_at(0xC7F36B8, ((((struct o14_float *)0xC0D5488)->v)), u25);
        dbg_print_at(0xC154870, ((((struct o18_float *)0xC0D5488)->v)), u25);
        *(int *)((int)stk + 4) = ((*(short *)(((((int)stk + 24) + 0x4) + 0x4))));
        *(int *)((int)stk + 0) = 0xC15486C;
        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC15486C);
        t43 = (dbg_print_at(0xC7F36B8, ((((struct o1C_float *)0xC0D5488)->v)), u25));
    }
    return t43;
}
