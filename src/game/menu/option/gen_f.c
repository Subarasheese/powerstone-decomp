/* Straight-line functions with calls and guards (batch gen_f): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o13E_uchar { char p[0x13E]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o148_int { char p[0x148]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o34_float { char p[0x34]; float v; };
struct o36_uchar { char p[0x36]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_uchar { char p[0x40]; unsigned char v; };
struct o47_uchar { char p[0x47]; unsigned char v; };
struct o4A_uchar { char p[0x4A]; unsigned char v; };
struct o54_uchar { char p[0x54]; unsigned char v; };
struct o55_uchar { char p[0x55]; unsigned char v; };
struct o5E_uchar { char p[0x5E]; unsigned char v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o68_uchar { char p[0x68]; unsigned char v; };
struct o72_uchar { char p[0x72]; unsigned char v; };
struct o7218_uchar { char p[0x7218]; unsigned char v; };
struct o7221_uchar { char p[0x7221]; unsigned char v; };
struct o7222_uchar { char p[0x7222]; unsigned char v; };
struct o7224_uchar { char p[0x7224]; unsigned char v; };
struct o7C_uchar { char p[0x7C]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c01b144(int, int);
int FUN_0c01b274(int);
int FUN_0c01b4d6(int);
int FUN_0c01b4f2(int);
extern int FUN_0c01b570();
int FUN_0c01c75e(int);
int FUN_0c01c7c4(int);
int FUN_0c01c80a(int);
int FUN_0c01c850(int, int);
int FUN_0c01c99e(int, int);
int FUN_0c01cab6(int);
int FUN_0c01cb1e(int);
int FUN_0c01cb86(int);
int FUN_0c01d1ce(int, int);
int FUN_0c01d226(void);
int FUN_0c01ea20(int, int, int, int);
int FUN_0c020468(int);
int FUN_0c0215b8(int, int, int, int);
int FUN_0c02180c(int, int, int, int);
int FUN_0c021e20(int, int, int, int);
int FUN_0c023bf4(int, int);
int FUN_0c023c72(int, int);
int FUN_0c023d04(int, int);
int FUN_0c025958(int, int);
int FUN_0c0259ee(int, int);
int FUN_0c02cb4a(int);
int FUN_0c0593e0(int);
int FUN_0c05a164(int);
int FUN_0c05a6e8(int);
int FUN_0c05f2d4(int, int);
int FUN_0c05fb58(int);
int FUN_0c06231c(int, int, int);
int FUN_0c0a2f66(int);
int FUN_0c0d71f4(int);
int FUN_0c0d7566(int, int, int);
int FUN_0c0dcd20(float, float, float);
int FUN_0c0e1240(int);
int FUN_0c0e1550(int);
int _divls(void);
int _modls(int);
int _modlu(void);
int _quick_odd_mvn(void);
int FUN_0c0ef980(int);
int bgm_play_omake(void);
int bgm_stop_streams(void);
int cam_force_mode(int, int, int);
int cam_request_mode(int, int, int);
int ending_main(int, int, int);
extern int ending_scene_main();
int game_reset_objects(void);
int hit_push_apart_boxes(int, int, int, int, int, int, int, int, int);
int hit_push_apart_spheres(int, int, int, int, int, int, int, int, int);
float math_rand_float(void);
float math_sin_angle16(int);
int nlObjPutUseViewMatrix(int);
extern int obj_tick_class();
int omake_is_item_unlocked(int);
extern int opt_page3_run_objects_in_mask();
int opt_page3_spawn_bg_scroll(int);
int opt_page_leave_reset(void);
extern int res_switch_scene();
int snd_play_side_se(int, int);
int ui_sprite_queue_add(int, int, int, int, int, int);
int vmu_menu_reset(void);
int FUN_0c0276c4(int a4);
int omake_menu_main(int a4, int a5, int a6);
int FUN_0c021238(int a4, int a5, int a6, int a7);
int FUN_0c025a0e(int a4, int a5);
int FUN_0c02d1cc(int a4);
int opt_page3_main(int a4, int a5, int a6);
int FUN_0c0c8580(int a4);

int FUN_0c0276c4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x4));
    if ((unsigned int)(unsigned char)t0 < (unsigned int)0x10) {
        switch (((unsigned char)t0 << 1)) {
            default:
            {
            }
                break;
        }
        t1 = *(signed char *)((a4 + 0x3));
        (((struct o7222_uchar *)(a4))->v) = 0x0;
        (((struct o7221_uchar *)(a4))->v) = 0x0;
        (((struct o7218_uchar *)(a4))->v) = 0x0;
        if ((unsigned char)(*(signed char *)((((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0x7C))) == 1) {
            (((struct o7C_uchar *)(((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))->v) = 0x0;
        }
        if ((*(signed char *)((a4 + 0x71BC))) == 2) {
            t2 = *(signed char *)((a4 + 0x4));
            t3 = t2;
            if (t2 == 7) {
                if ((unsigned char)(*(signed char *)(((((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0xC8) + 0x4))) == 1) {
                    *(unsigned char *)(((((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0xC8) + 0x4)) = 0x0;
                    (((struct o7221_uchar *)(a4))->v) = 0x8;
                }
                t2 = *(signed char *)(((((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0xD2) + 0x4));
                t4 = (unsigned char)t2;
                if ((unsigned char)t2 == 1) {
                    *(unsigned char *)(((((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0xD2) + 0x4)) = 0x0;
                    (((struct o7221_uchar *)(a4))->v) = 0x9;
                    t4 = 0x7221;
                }
                t3 = t4;
            }
            t2 = t3;
        } else {
            if ((unsigned char)(*(signed char *)((((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0x4))) == 1) {
                *(unsigned char *)((((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0x4)) = 0x0;
                (((struct o7221_uchar *)(a4))->v) = 0x1;
            }
            if ((unsigned char)(*(signed char *)((((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0xE))) == 1) {
                *(unsigned char *)((((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0xE)) = 0x0;
                (((struct o7221_uchar *)(a4))->v) = 0x5;
            }
            if ((unsigned char)(*(signed char *)((0x18 + ((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))) == 1) {
                (((struct o18_uchar *)(((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))->v) = 0x0;
                (((struct o7221_uchar *)(a4))->v) = 0x7;
            }
            if ((unsigned char)(*(signed char *)((0x22 + ((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))) == 1) {
                (((struct o22_uchar *)(((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))->v) = 0x0;
                (((struct o7221_uchar *)(a4))->v) = 0x3;
            }
            if ((unsigned char)(*(signed char *)((0x2C + ((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))) == 1) {
                (((struct o2C_uchar *)(((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))->v) = 0x0;
                (((struct o7221_uchar *)(a4))->v) = 0x8;
            }
            if ((unsigned char)(*(signed char *)((0x36 + ((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))) == 1) {
                (((struct o36_uchar *)(((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))->v) = 0x0;
                (((struct o7221_uchar *)(a4))->v) = 0x2;
            }
            if ((unsigned char)(*(signed char *)((0x40 + ((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))) == 1) {
                (((struct o40_uchar *)(((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))->v) = 0x0;
                (((struct o7221_uchar *)(a4))->v) = 0x6;
            }
            if ((unsigned char)(*(signed char *)((0x4A + ((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))) == 1) {
                (((struct o4A_uchar *)(((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))->v) = 0x0;
                (((struct o7221_uchar *)(a4))->v) = 0x4;
            }
            if ((unsigned char)(*(signed char *)((0x54 + ((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))) == 1) {
                (((struct o54_uchar *)(((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))->v) = 0x0;
                (((struct o7218_uchar *)(a4))->v) = 0x1;
            }
            if ((unsigned char)(*(signed char *)((0x5E + ((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))) == 1) {
                (((struct o5E_uchar *)(((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))->v) = 0x0;
                (((struct o7218_uchar *)(a4))->v) = 0x2;
            }
            if ((unsigned char)(*(signed char *)((0x68 + ((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))) == 1) {
                (((struct o68_uchar *)(((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))->v) = 0x0;
                (((struct o7221_uchar *)(a4))->v) = 0x9;
            }
            if ((unsigned char)(*(signed char *)((0x72 + ((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))) == 1) {
                (((struct o72_uchar *)(((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))->v) = 0x0;
                (((struct o7218_uchar *)(a4))->v) = 0x3;
            }
            if ((unsigned char)(*(signed char *)((0xA4 + ((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))) == 1) {
                *(unsigned char *)(((0x4 + (((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0xA0)) + 0x0)) = 0x0;
                (((struct o7222_uchar *)(a4))->v) = 0x1;
                (((struct o7224_uchar *)(a4))->v) = (*(signed char *)(((((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0xA0) + 0x5)));
            }
            if ((unsigned char)(*(signed char *)((0xAE + ((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))) == 1) {
                *(unsigned char *)(((0x4 + (((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0xAA)) + 0x0)) = 0x0;
                (((struct o7222_uchar *)(a4))->v) = 0x2;
                (((struct o7224_uchar *)(a4))->v) = (*(signed char *)(((((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0xAA) + 0x5)));
            }
            if ((unsigned char)(*(signed char *)((0xB8 + ((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))) == 1) {
                *(unsigned char *)(((0x4 + (((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0xB4)) + 0x0)) = 0x0;
                (((struct o7222_uchar *)(a4))->v) = 0x3;
                (((struct o7224_uchar *)(a4))->v) = (*(signed char *)(((((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0xB4) + 0x5)));
            }
            if ((unsigned char)(*(signed char *)((0xC2 + ((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)))) == 1) {
                *(unsigned char *)(((0x4 + (((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0xBE)) + 0x0)) = 0x0;
                (((struct o7222_uchar *)(a4))->v) = 0x4;
                (((struct o7224_uchar *)(a4))->v) = (*(signed char *)(((((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0xBE) + 0x5)));
            }
            if ((unsigned char)(*(signed char *)(((((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0xC8) + 0x4))) == 1) {
                *(unsigned char *)(((((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0xC8) + 0x4)) = 0x0;
                (((struct o7222_uchar *)(a4))->v) = 0x5;
                (((struct o7224_uchar *)(a4))->v) = (*(signed char *)(((((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0xC8) + 0x5)));
            }
            if ((unsigned char)(*(signed char *)(((((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0xD2) + 0x4))) == 1) {
                *(unsigned char *)(((((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0xD2) + 0x4)) = 0x0;
                (((struct o7222_uchar *)(a4))->v) = 0x6;
                (((struct o7224_uchar *)(a4))->v) = (*(signed char *)(((((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0xD2) + 0x5)));
            }
            t3 = *(signed char *)((0xE0 + ((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70)));
            t4 = (unsigned char)t3;
            if ((unsigned char)t3 == 1) {
                *(unsigned char *)(((((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0xDC) + 0x4)) = 0x0;
                (((struct o7222_uchar *)(a4))->v) = 0x7;
                t3 = *(signed char *)(((((short)((short)(unsigned char)t1 * (short)0x190) + 0xC362E70) + 0xDC) + 0x5));
                (((struct o7224_uchar *)(a4))->v) = t3;
                t4 = t3;
            }
            t2 = t4;
        }
        return t2;
    }
    return (unsigned char)t0;
}


int omake_menu_main(int a4, int a5, int a6)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    int R9;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_0 = a5;
    v0_1 = a6;
    v0_2 = R9;
    *(int *)((int)stk + 8) = v0_2;
    v0_3 = R8;
    *(int *)((int)stk + 4) = v0_3;
    v0_4 = (*(signed char *)0xC7F300B) == 0;
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    v0_5 = (0x12B);
    v0_3 = (0x0);
    v0_2 = (0xC362360);
    v0_7 = (0xC7F2EE0);
    if (v0_4) goto L_C01CBF6;
    L_C01D07E:;
    *(volatile int *)((int)stk + 0);
    *(volatile int *)((int)stk + 4);
    return v0_5;
    L_C01CBF6:;
    v0_4 = (*(signed char *)((v0_7 + 0x12E))) == 0;
    v0_5 = (0x12E);
    if (v0_4) goto L_C01CC02;
    goto L_C01D07E;
    L_C01CC02:;
    v0_6 = *(signed char *)((v0_2 + 0x0));
    v0_5 = ((unsigned char)v0_6);
    v0_4 = (0xC7F4724);
    v0_7 = (v0_2);
    if (((unsigned char)v0_6 == 0)) goto L_C01CC16;
    if ((v0_5 == 1)) goto L_C01CC84;
    FUN_0c0d7566(v0_7, v0_0, v0_1);
    L_C01D062:;
    obj_tick_class(0x5, v0_0, v0_1);
    *(volatile int *)((int)stk + 0);
    *(volatile int *)((int)stk + 4);
    return FUN_0c0593e0(0x5);
    L_C01CC84:;
    v0_5 = (*(short *)(((v0_2 + 0xA) + 0x0))) == 0;
    v0_7 = ((v0_2 + 0xA));
    v0_0 = (0x1E);
    if (v0_5) goto L_C01CC96;
    *(unsigned short *)((v0_7 + 0x0)) = ((*(short *)((v0_7 + 0x0))) - 1);
    L_C01CC96:;
    v0_8 = *(signed char *)((v0_2 + 0x1));
    v0_5 = ((unsigned char)v0_8);
    v0_6 = (0x3);
    v0_7 = (0xC0A3796);
    v0_7 = ((v0_2 + 0x6));
    R8 = (0x2);
    R9 = (0x6);
    if (((unsigned char)v0_8 == 0)) goto L_C01CD08;
    if ((v0_5 != 1)) goto L_C01CCB2;
    v0_3 = *(signed char *)((v0_2 + 0x2));
    v0_5 = ((unsigned char)v0_3);
    if (((unsigned char)v0_3 == 0)) goto L_C01CE52;
    if ((v0_5 == 1)) goto L_C01CE70;
    goto L_C01D062;
    L_C01CE70:;
    (((struct oC_float *)(v0_2))->v) = (((((struct oC_float *)(v0_2))->v)) + -0.0333333313f);
    v0_3 = *(short *)((v0_2 + 0x6));
    *(unsigned short *)((v0_2 + 0x6)) = (v0_3 - 1);
    FPUL_ = (0xBD088888);
    if (((int)(short)(v0_3 - 1) < 0)) goto L_C01CE8E;
    goto L_C01D062;
    L_C01CE8E:;
    (((struct oC_float *)(v0_2))->v) = 0.0f;
    v0_3 = *(signed char *)((v0_4 + 0x1A));
    v0_5 = (v0_3);
    if ((v0_3 == 4)) goto L_C01CEB0;
    if ((v0_5 == 5)) goto L_C01CEB8;
    if ((v0_5 == 12)) goto L_C01CEBE;
    if ((v0_5 == 13)) goto L_C01CEBE;
    if ((v0_5 == 14)) goto L_C01CEBE;
    *(unsigned char *)((v0_2 + 0x0)) = R8;
    goto L_C01D062;
    L_C01CEBE:;
    (((struct o1B_uchar *)(v0_4))->v) = ((*(signed char *)((v0_4 + 0x1A))) - 12);
    L_C01CEC8:;
    *(unsigned char *)((v0_4 + 0x2)) = v0_6;
    goto L_C01D062;
    L_C01CEB8:;
    (((struct o1B_uchar *)(v0_4))->v) = R9;
    goto L_C01CEC8;
    L_C01CEB0:;
    (((struct o1B_uchar *)(v0_4))->v) = 0x5;
    goto L_C01CEC8;
    L_C01CE52:;
    (((struct oC_float *)(v0_2))->v) = 1.0f;
    *(unsigned short *)((v0_2 + 0x6)) = v0_0;
    FUN_0c01c850(0x1, (*(signed char *)((v0_4 + 0x1A))));
    FUN_0c01cab6(0x1);
    *(unsigned char *)((v0_2 + 0x2)) = ((*(signed char *)((v0_2 + 0x2))) + 0x1);
    goto L_C01CE70;
    L_C01CCB2:;
    if ((v0_5 != 2)) goto L_C01CCBA;
    v0_6 = *(signed char *)((v0_2 + 0x2));
    v0_5 = ((unsigned char)v0_6);
    if (((unsigned char)v0_6 == 0)) goto L_C01CEEC;
    if ((v0_5 == 1)) goto L_C01CF0A;
    goto L_C01D062;
    L_C01CF0A:;
    v0_4 = (signed char)(FUN_0c01d1ce(0x2, 0x2)) != 0;
    if (v0_4) goto L_C01CFA6;
    v0_4 = *(short *)((v0_2 + 0x6));
    *(unsigned short *)((v0_2 + 0x6)) = (v0_4 - 1);
    if (((int)(short)(v0_4 - 1) < 0)) goto L_C01CF26;
    goto L_C01D062;
    L_C01CF26:;
    L_C01D04E:;
    *(unsigned char *)((v0_2 + 0x1)) = v0_3;
    L_C01D054:;
    *(unsigned char *)((v0_2 + 0x2)) = v0_3;
    goto L_C01D062;
    L_C01CFA6:;
    *(unsigned char *)((v0_2 + 0x0)) = R8;
    goto L_C01D062;
    L_C01CEEC:;
    *(unsigned short *)((v0_7 + 0x0)) = v0_0;
    FUN_0c01c850(0x2, (*(signed char *)((v0_4 + 0x1A))));
    FUN_0c01c99e(0x2, (*(signed char *)((v0_2 + 0x10))));
    snd_play_side_se(0x0, 0x4F);
    *(unsigned char *)((v0_2 + 0x2)) = ((*(signed char *)((v0_2 + 0x2))) + 0x1);
    goto L_C01CF0A;
    L_C01CCBA:;
    if ((v0_5 != 3)) goto L_C01CCC2;
    v0_6 = *(signed char *)((v0_2 + 0x2));
    v0_5 = ((unsigned char)v0_6);
    if (((unsigned char)v0_6 == 0)) goto L_C01CF3A;
    if ((v0_5 == 1)) goto L_C01CF58;
    goto L_C01D062;
    L_C01CF58:;
    v0_4 = (signed char)(FUN_0c01d1ce(0x2, 0x2)) != 0;
    if (v0_4) goto L_C01CFA6;
    v0_4 = *(short *)((v0_2 + 0x6));
    *(unsigned short *)((v0_2 + 0x6)) = (v0_4 - 1);
    if (((int)(short)(v0_4 - 1) < 0)) goto L_C01CF74;
    goto L_C01D062;
    L_C01CF74:;
    goto L_C01D04E;
    L_C01CF3A:;
    *(unsigned short *)((v0_7 + 0x0)) = v0_0;
    FUN_0c01c850(0x3, (*(signed char *)((v0_2 + 0x10))));
    FUN_0c01c99e(0x3, (*(signed char *)((v0_4 + 0x1A))));
    snd_play_side_se(0x0, 0x4F);
    *(unsigned char *)((v0_2 + 0x2)) = ((*(signed char *)((v0_2 + 0x2))) + 0x1);
    goto L_C01CF58;
    L_C01CCC2:;
    if ((v0_5 != 4)) goto L_C01CCCA;
    v0_4 = *(signed char *)((v0_2 + 0x2));
    v0_5 = ((unsigned char)v0_4);
    if (((unsigned char)v0_4 == 0)) goto L_C01CF88;
    if ((v0_5 == 1)) goto L_C01CF9A;
    goto L_C01D062;
    L_C01CF9A:;
    v0_4 = (signed char)(FUN_0c01d1ce(0x2, 0x2)) == 0;
    if (v0_4) goto L_C01CFAA;
    goto L_C01CFA6;
    L_C01CFAA:;
    v0_4 = *(short *)((v0_2 + 0x6));
    *(unsigned short *)((v0_2 + 0x6)) = (v0_4 - 1);
    if (((int)(short)(v0_4 - 1) >= 0)) goto L_C01D062;
    *(unsigned char *)((v0_2 + 0x1)) = R8;
    goto L_C01D054;
    L_C01CF88:;
    *(unsigned short *)((v0_7 + 0x0)) = 0x5;
    FUN_0c01c850(0x4, (*(signed char *)((v0_2 + 0x10))));
    *(unsigned char *)((v0_2 + 0x2)) = ((*(signed char *)((v0_2 + 0x2))) + 0x1);
    goto L_C01CF9A;
    L_C01CCCA:;
    if ((v0_5 != 5)) goto L_C01CCD2;
    v0_7 = *(signed char *)((v0_2 + 0x2));
    v0_5 = ((unsigned char)v0_7);
    if (((unsigned char)v0_7 == 0)) goto L_C01CFD6;
    if ((v0_5 == 1)) goto L_C01CFFA;
    goto L_C01D062;
    L_C01CFFA:;
    v0_4 = FUN_0c01ea20((*(signed char *)((v0_2 + 0x11))), v0_0, v0_1, 0x0);
    v0_5 = ((unsigned char)v0_4);
    if (((unsigned char)v0_4 == 0)) goto L_C01D062;
    if ((v0_5 == 1)) goto L_C01D014;
    if ((v0_5 == 2)) goto L_C01D048;
    goto L_C01D062;
    L_C01D048:;
    (((struct o12_uchar *)(v0_2))->v) = 0x1;
    goto L_C01D04E;
    L_C01D014:;
    v0_4 = *(signed char *)((v0_2 + 0x3));
    v0_5 = ((unsigned char)v0_4);
    if (((unsigned char)v0_4 == 0)) goto L_C01D024;
    if ((v0_5 == 1)) goto L_C01D062;
    goto L_C01D062;
    L_C01D024:;
    v0_4 = (v0_3);
    L_C01D02E:;
    if (((int)v0_4 < (int)R9)) goto L_C01D028;
    v0_4 = (v0_3);
    L_C01D03C:;
    if (((int)v0_4 < (int)v0_6)) goto L_C01D036;
    *(unsigned char *)((v0_2 + 0x3)) = ((*(signed char *)((v0_2 + 0x3))) + 0x1);
    goto L_C01D062;
    L_C01D036:;
    FUN_0c01c80a(v0_4);
    v0_4 = ((v0_4 + 0x1));
    goto L_C01D03C;
    L_C01D028:;
    FUN_0c01c7c4(v0_4);
    v0_4 = ((v0_4 + 0x1));
    goto L_C01D02E;
    L_C01CFD6:;
    FUN_0c01c850(0x5, (*(signed char *)((v0_4 + 0x1A))));
    (((struct o11_uchar *)(v0_2))->v) = ((*(signed char *)((v0_4 + 0x1A))) + 0xFA);
    vmu_menu_reset();
    *(unsigned char *)((v0_2 + 0x3)) = v0_3;
    *(unsigned char *)((v0_2 + 0x2)) = ((*(signed char *)((v0_2 + 0x2))) + 0x1);
    goto L_C01CFFA;
    L_C01CCD2:;
    goto L_C01D062;
    L_C01CD08:;
    v0_7 = *(signed char *)((v0_2 + 0x2));
    v0_5 = ((unsigned char)v0_7);
    if (((unsigned char)v0_7 == 0)) goto L_C01CD18;
    if ((v0_5 == 1)) goto L_C01CD26;
    goto L_C01D062;
    L_C01CD26:;
    v0_5 = (signed char)(FUN_0c01d1ce(0x2, 0x2)) == 0;
    if (v0_5) goto L_C01CD3C;
    snd_play_side_se(0x0, 0x4D);
    goto L_C01CFA6;
    L_C01CD3C:;
    v0_5 = (signed char)(FUN_0c01d1ce(0x2, 0x4)) == 0;
    R9 = (0x4);
    if (v0_5) goto L_C01CDE4;
    v0_5 = (signed char)(FUN_0c01d226()) == 0;
    if (v0_5) goto L_C01CDCC;
    v0_5 = (signed char)(omake_is_item_unlocked((*(signed char *)0xC7F473E))) == 0;
    if (v0_5) goto L_C01CDCC;
    v0_4 = *(signed char *)((v0_4 + 0x1A));
    v0_5 = (v0_4);
    if ((v0_4 == 4)) goto L_C01CD92;
    if ((v0_5 == 5)) goto L_C01CD92;
    if ((v0_5 == 6)) goto L_C01CD88;
    if ((v0_5 == 7)) goto L_C01CD88;
    if ((v0_5 == 8)) goto L_C01CD88;
    if ((v0_5 == 12)) goto L_C01CDB6;
    if ((v0_5 == 13)) goto L_C01CDB2;
    if ((v0_5 == 14)) goto L_C01CDB2;
    snd_play_side_se(0x0, 0x4E);
    goto L_C01D062;
    L_C01CDB2:;
    FUN_0c01cb86(0x3C);
    L_C01CDB6:;
    snd_play_side_se(0x0, 0x4D);
    v0_5 = (0x1);
    L_C01CDBE:;
    *(unsigned char *)((v0_2 + 0x1)) = v0_5;
    L_C01CFBE:;
    *(unsigned char *)((v0_2 + 0x2)) = v0_3;
    goto L_C01D062;
    L_C01CD88:;
    snd_play_side_se(0x0, 0x4D);
    v0_5 = (0x5);
    L_C01CE0E:;
    *(unsigned char *)((v0_2 + 0x1)) = v0_5;
    goto L_C01CFBE;
    L_C01CD92:;
    v0_4 = ((unsigned short)(*(short *)0xC361BFC) & R9) == 0;
    v0_7 = (v0_3);
    v0_0 = (0xC361BF0);
    if (v0_4) goto L_C01CDA0;
    v0_7 = (0x1);
    L_C01CDA0:;
    v0_4 = ((unsigned short)((((struct o20_short *)(v0_0))->v)) & R9) == 0;
    if (v0_4) goto L_C01CDAC;
    v0_7 = ((v0_7 | R8));
    L_C01CDAC:;
    FUN_0c0d71f4(v0_7);
    goto L_C01CDB2;
    L_C01CDCC:;
    snd_play_side_se(0x0, 0x4E);
    goto L_C01D062;
    L_C01CDE4:;
    v0_5 = (int)(*(signed char *)((v0_4 + 0x1A))) >= (int)0xE;
    if (v0_5) goto L_C01CE12;
    v0_5 = (signed char)(FUN_0c01d1ce(0x0, 0x80)) == 0;
    if (v0_5) goto L_C01CE12;
    (((struct o10_uchar *)(v0_2))->v) = (*(signed char *)((v0_4 + 0x1A)));
    (((struct o1A_uchar *)(v0_4))->v) = ((*(signed char *)((v0_4 + 0x1A))) + 0x1);
    v0_5 = (R9);
    goto L_C01CE0E;
    L_C01CE12:;
    v0_5 = (int)(*(signed char *)((v0_4 + 0x1A))) > 0;
    if (v0_5) goto L_C01CE1E;
    goto L_C01D062;
    L_C01CE1E:;
    v0_5 = (signed char)(FUN_0c01d1ce(0x0, 0x40)) != 0;
    if (v0_5) goto L_C01CE2E;
    goto L_C01D062;
    L_C01CE2E:;
    (((struct o10_uchar *)(v0_2))->v) = (*(signed char *)((v0_4 + 0x1A)));
    (((struct o1A_uchar *)(v0_4))->v) = ((*(signed char *)((v0_4 + 0x1A))) - 1);
    v0_5 = (v0_6);
    goto L_C01CDBE;
    L_C01CD18:;
    FUN_0c01c850(0x0, (*(signed char *)((v0_4 + 0x1A))));
    *(unsigned char *)((v0_2 + 0x2)) = ((*(signed char *)((v0_2 + 0x2))) + 0x1);
    goto L_C01CD26;
    L_C01CC16:;
    *(unsigned char *)((v0_7 + 0x0)) = ((*(signed char *)((v0_7 + 0x0))) + 0x1);
    *(unsigned char *)((v0_2 + 0x1)) = v0_3;
    *(unsigned char *)((v0_2 + 0x2)) = v0_3;
    *(unsigned short *)((v0_2 + 0x8)) = v0_3;
    *(unsigned short *)((v0_2 + 0xA)) = v0_3;
    (((struct oC_float *)(v0_2))->v) = 1.0f;
    (((struct o10_uchar *)(v0_2))->v) = 0x63;
    (((struct o12_uchar *)(v0_2))->v) = v0_3;
    game_reset_objects();
    cam_force_mode(0x1C, 0x0, 0xF0);
    FUN_0c05f2d4(0x3, 0x0);
    (((struct o8_uint *)0xC7F31BC)->v) = v0_3;
    (((struct o4_uint *)0xC7F31BC)->v) = v0_3;
    (((struct o0_uint *)0xC7F31BC)->v) = v0_3;
    res_switch_scene(0xC);
    *(unsigned char *)0xC7F3082 = 0x0;
    v0_5 = (*(signed char *)((v0_4 + 0x1A))) == 12;
    if (v0_5) goto L_C01CC70;
    bgm_play_omake();
    L_C01CC70:;
    v0_6 = (0xB);
    v0_7 = (v0_3);
    L_C01CC7C:;
    if (((int)v0_7 < (int)v0_6)) goto L_C01CC76;
    FUN_0c01cb1e(0x0);
    goto L_C01CC84;
    L_C01CC76:;
    FUN_0c01c75e(v0_7);
    v0_7 = ((v0_7 + 0x1));
    goto L_C01CC7C;
}

int FUN_0c021238(int a4, int a5, int a6, int a7)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_3 = a7;
    w0_4 = *(float *)((v0_2 + 0x0));
    w0_5 = *(float *)((v0_3 + 0x0));
    v0_4 = ((((int)stk + 0) + 0x4));
    w0_1 = (0.0f);
    w0_1 = ((((((struct oC_float *)(v0_2))->v)) + ((((struct oC_float *)(v0_3))->v))));
    w0_0 = (w0_5);
    w0_2 = (w0_4);
    w0_3 = ((w0_4 - w0_5));
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C02125E;
    w0_0 = ((w0_0 - w0_2));
    L_C021260:;
    *(float *)((v0_4 + 0x0)) = (w0_1 - w0_0);
    w0_4 = (((struct o4_float *)(v0_2))->v);
    w0_5 = (((struct o4_float *)(v0_3))->v);
    v0_5 = (0x4);
    w0_1 = ((((((struct o10_float *)(v0_2))->v)) + ((((struct o10_float *)(v0_3))->v))));
    w0_0 = ((w0_4 - w0_5));
    w0_2 = (w0_4);
    w0_3 = (w0_5);
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C021282;
    w0_0 = ((w0_3 - w0_2));
    L_C021284:;
    *(float *)((v0_4 + v0_5)) = (w0_1 - w0_0);
    w0_4 = (((struct o8_float *)(v0_2))->v);
    w0_5 = (((struct o8_float *)(v0_3))->v);
    v0_5 = (0x8);
    w0_1 = ((((((struct o14_float *)(v0_2))->v)) + ((((struct o14_float *)(v0_3))->v))));
    w0_0 = ((w0_4 - w0_5));
    w0_2 = (w0_4);
    w0_3 = (w0_5);
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C0212C4;
    w0_0 = ((w0_3 - w0_2));
    L_C0212C6:;
    *(float *)((v0_4 + v0_5)) = (w0_1 - w0_0);
    w0_0 = (0.0f);
    if (!((!(0.0f > (*(float *)((v0_4 + 0x0))))))) goto L_C0215A6;
    if ((!(w0_0 > (*(float *)((v0_4 + v0_5)))))) goto L_C0212E0;
    goto L_C0215A6;
    L_C0215A6:;
    v0_5 = (0x0);
    L_C0215A8:;
    return v0_5;
    L_C0212E0:;
    if ((!(0.0f > ((((struct o4_float *)(v0_4))->v))))) goto L_C0212EE;
    goto L_C0215A6;
    L_C0212EE:;
    v0_5 = *(signed char *)((v0_0 + 0x2D9));
    *(unsigned int *)(((int)stk + 0)) = v0_5;
    if (!((v0_5 != 2))) goto L_C0215A2;
    if (((*(signed char *)((v0_1 + 0x2D9))) != 2)) goto L_C021308;
    goto L_C0215A2;
    L_C0215A2:;
    v0_5 = (0x1);
    goto L_C0215A8;
    L_C021308:;
    if (((*(int *)(((int)stk + 0))) != 1)) goto L_C02131A;
    if (((*(signed char *)((v0_1 + 0x2D9))) != 1)) goto L_C02131A;
    goto L_C0215A2;
    L_C02131A:;
    w0_0 = *(float *)((v0_4 + 0x0));
    w0_3 = (((struct o4_float *)(v0_4))->v);
    w0_1 = (w0_0);
    w0_2 = (w0_3);
    if ((w0_0 > w0_3)) goto L_C021342;
    if ((w0_1 > ((((struct o8_float *)(v0_4))->v)))) goto L_C021342;
    v0_5 = (0x2D9);
    if (((*(signed char *)((v0_0 + 0x2D9))) != 0)) goto L_C021410;
    if (!(((*(signed char *)((v0_1 + v0_5))) == 0))) goto L_C021432;
    goto L_C02144E;
    L_C021432:;
    v0_5 = (0x20);
    if ((!((*(float *)((v0_3 + 0x0))) > (*(float *)((v0_2 + 0x0)))))) goto L_C021446;
    w0_0 = ((-((((struct o4_float *)(((int)stk + 0)))->v))));
    L_C021514:;
    *(float *)((v0_0 + v0_5)) = ((*(float *)((v0_0 + v0_5))) + w0_0);
    goto L_C0215A2;
    L_C021446:;
    w0_0 = (((((struct o4_float *)(((int)stk + 0)))->v)));
    goto L_C021514;
    L_C02144E:;
    v0_5 = (0x20);
    if ((!((*(float *)((v0_3 + 0x0))) > (*(float *)((v0_2 + 0x0)))))) goto L_C021468;
    w0_1 = (2.0f);
    w0_0 = ((-((((struct o4_float *)(((int)stk + 0)))->v))));
    FPUL_ = (0x40000000);
    L_C021474:;
    *(float *)((v0_0 + v0_5)) = ((*(float *)((v0_0 + v0_5))) + (w0_0 / w0_1));
    if ((!((*(float *)((v0_2 + 0x0))) > (*(float *)((v0_3 + 0x0)))))) goto L_C02149C;
    w0_1 = (2.0f);
    w0_0 = ((-((((struct o4_float *)(((int)stk + 0)))->v))));
    FPUL_ = (0x40000000);
    L_C0214A8:;
    *(float *)((v0_1 + v0_5)) = ((*(float *)((v0_1 + v0_5))) + (w0_0 / w0_1));
    goto L_C0215A2;
    L_C02149C:;
    w0_1 = (2.0f);
    w0_0 = (((((struct o4_float *)(((int)stk + 0)))->v)));
    FPUL_ = (0x40000000);
    goto L_C0214A8;
    L_C021468:;
    w0_1 = (2.0f);
    w0_0 = (((((struct o4_float *)(((int)stk + 0)))->v)));
    FPUL_ = (0x40000000);
    goto L_C021474;
    L_C021410:;
    v0_5 = (0x20);
    if ((!((*(float *)((v0_2 + 0x0))) > (*(float *)((v0_3 + 0x0)))))) goto L_C021424;
    w0_0 = ((-((((struct o4_float *)(((int)stk + 0)))->v))));
    L_C0214E4:;
    *(float *)((v0_1 + v0_5)) = ((*(float *)((v0_1 + v0_5))) + w0_0);
    goto L_C0215A2;
    L_C021424:;
    w0_0 = (((((struct o4_float *)(((int)stk + 0)))->v)));
    goto L_C0214E4;
    L_C021342:;
    w0_0 = (((struct o8_float *)(v0_4))->v);
    w0_3 = (w0_0);
    if ((!(w0_1 > w0_0))) goto L_C021368;
    if ((!(w0_2 > w0_3))) goto L_C021368;
    v0_5 = (0x2D9);
    if (!(((*(signed char *)((v0_0 + 0x2D9))) == 0))) goto L_C0214C2;
    if (((*(signed char *)((v0_1 + v0_5))) == 0)) goto L_C021364;
    goto L_C0214F2;
    L_C0214C2:;
    v0_5 = (0x28);
    if ((!(((((struct o8_float *)(v0_2))->v)) > ((((struct o8_float *)(v0_3))->v))))) goto L_C0214DE;
    w0_0 = ((-((((struct oC_float *)(((int)stk + 0)))->v))));
    goto L_C0214E4;
    L_C0214DE:;
    w0_0 = (((((struct oC_float *)(((int)stk + 0)))->v)));
    goto L_C0214E4;
    L_C0214F2:;
    v0_5 = (0x28);
    if ((!(((((struct o8_float *)(v0_3))->v)) > ((((struct o8_float *)(v0_2))->v))))) goto L_C02150E;
    w0_0 = ((-((((struct oC_float *)(((int)stk + 0)))->v))));
    goto L_C021514;
    L_C02150E:;
    w0_0 = (((((struct oC_float *)(((int)stk + 0)))->v)));
    goto L_C021514;
    L_C021364:;
    L_C02151C:;
    v0_5 = (0x28);
    if ((!(((((struct o8_float *)(v0_3))->v)) > ((((struct o8_float *)(v0_2))->v))))) goto L_C02153E;
    w0_1 = (2.0f);
    w0_0 = ((-((((struct oC_float *)(((int)stk + 0)))->v))));
    FPUL_ = (0x40000000);
    L_C02154A:;
    *(float *)((v0_0 + v0_5)) = ((*(float *)((v0_0 + v0_5))) + (w0_0 / w0_1));
    if ((!(((((struct o8_float *)(v0_2))->v)) > ((((struct o8_float *)(v0_3))->v))))) goto L_C021572;
    w0_1 = (2.0f);
    w0_0 = ((-((((struct oC_float *)(((int)stk + 0)))->v))));
    FPUL_ = (0x40000000);
    L_C02157E:;
    *(float *)((v0_1 + v0_5)) = ((*(float *)((v0_1 + v0_5))) + (w0_0 / w0_1));
    goto L_C0215A2;
    L_C021572:;
    w0_1 = (2.0f);
    w0_0 = (((((struct oC_float *)(((int)stk + 0)))->v)));
    FPUL_ = (0x40000000);
    goto L_C02157E;
    L_C02153E:;
    w0_1 = (2.0f);
    w0_0 = (((((struct oC_float *)(((int)stk + 0)))->v)));
    FPUL_ = (0x40000000);
    goto L_C02154A;
    L_C021368:;
    if ((!(w0_2 > w0_1))) goto L_C021370;
    goto L_C0215A2;
    L_C021370:;
    if ((!(w0_2 > w0_3))) goto L_C021378;
    goto L_C0215A2;
    L_C021378:;
    w0_0 = (5.0f);
    if ((!(((((struct o4_float *)(v0_2))->v)) > ((((struct o4_float *)(v0_3))->v))))) goto L_C0213F2;
    if (((*(signed char *)((v0_1 + 0x2DA))) == 0)) goto L_C0213D6;
    if ((!(w0_3 > w0_1))) goto L_C0213B4;
    if ((!(w0_1 > w0_0))) goto L_C021398;
    *(float *)((v0_4 + 0x0)) = w0_0;
    L_C021398:;
    v0_5 = (0x2D9);
    if (((*(signed char *)((v0_0 + 0x2D9))) != 0)) goto L_C021410;
    if (((*(signed char *)((v0_1 + v0_5))) == 0)) goto L_C02144E;
    goto L_C021432;
    L_C0213B4:;
    if ((!(w0_3 > w0_0))) goto L_C0213BC;
    (((struct o8_float *)(v0_4))->v) = w0_0;
    L_C0213BC:;
    v0_5 = (0x2D9);
    if (((*(signed char *)((v0_0 + 0x2D9))) == 0)) goto L_C0213C8;
    goto L_C0214C2;
    L_C0213C8:;
    if (((*(signed char *)((v0_1 + v0_5))) != 0)) goto L_C0213D2;
    goto L_C02151C;
    L_C0213D2:;
    goto L_C0214F2;
    L_C0213D6:;
    if (((*(signed char *)((v0_0 + 0x2D9))) == 0)) goto L_C0213E8;
    (((struct o24_float *)(v0_1))->v) = (((((struct o24_float *)(v0_1))->v)) - w0_2);
    goto L_C0215A2;
    L_C0213E8:;
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + w0_2);
    goto L_C0215A2;
    L_C0213F2:;
    if (((*(signed char *)((v0_0 + 0x2DA))) != 0)) goto L_C0213FE;
    if (((*(signed char *)((v0_1 + 0x2D9))) == 0)) goto L_C02159A;
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) - w0_2);
    goto L_C0215A2;
    L_C02159A:;
    (((struct o24_float *)(v0_1))->v) = (((((struct o24_float *)(v0_1))->v)) + w0_2);
    goto L_C0215A2;
    L_C0213FE:;
    if ((!(w0_3 > w0_1))) goto L_C0214B2;
    if ((!(w0_1 > w0_0))) goto L_C021408;
    *(float *)((v0_4 + 0x0)) = w0_0;
    L_C021408:;
    v0_5 = (0x2D9);
    if (((*(signed char *)((v0_0 + 0x2D9))) == 0)) goto L_C02142C;
    goto L_C021410;
    L_C02142C:;
    if (((*(signed char *)((v0_1 + v0_5))) == 0)) goto L_C02144E;
    goto L_C021432;
    L_C0214B2:;
    if ((!(w0_3 > w0_0))) goto L_C0214BA;
    (((struct o8_float *)(v0_4))->v) = w0_0;
    L_C0214BA:;
    v0_5 = (0x2D9);
    if (((*(signed char *)((v0_0 + 0x2D9))) == 0)) goto L_C0214EC;
    goto L_C0214C2;
    L_C0214EC:;
    if (((*(signed char *)((v0_1 + v0_5))) == 0)) goto L_C02151C;
    goto L_C0214F2;
    L_C0212C4:;
    w0_0 = (w0_0);
    goto L_C0212C6;
    L_C021282:;
    w0_0 = (w0_0);
    goto L_C021284;
    L_C02125E:;
    w0_0 = (w0_3);
    goto L_C021260;
}

int FUN_0c025a0e(int a4, int a5)
{
    int stk[4];

    register int R0;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register int R9;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_1 = a5;
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    v0_0 = (v0_0);
    L_C025CDE:;
    if ((v0_0 == 0)) goto L_C025CE6;
    v0_1 = ((*(int *)(((int)stk + 0))));
    L_C025CD4:;
    if ((v0_1 == 0)) goto L_C025CDC;
    if (!((v0_0 != v0_1))) goto L_C025CD2;
    R0 = (0x107);
    if (((*(signed char *)((v0_0 + 0x107))) == 0)) goto L_C025A44;
    goto L_C025CD2;
    L_C025CD2:;
    v0_1 = ((*(int *)((v0_1 + 0x18))));
    goto L_C025CD4;
    L_C025A44:;
    if (((*(signed char *)((v0_1 + R0))) == 0)) goto L_C025A4E;
    goto L_C025CD2;
    L_C025A4E:;
    if (((*(signed char *)((v0_0 + 0x3))) == 2)) goto L_C025A74;
    if (((*(signed char *)((v0_1 + 0x3))) == 2)) goto L_C025A74;
    if (((*(signed char *)((v0_0 + 0x3))) == 3)) goto L_C025A74;
    if (((*(signed char *)((v0_1 + 0x3))) == 3)) goto L_C025A74;
    v0_2 = *(signed char *)((v0_1 + 0x3));
    R0 = (v0_2);
    if (((*(signed char *)((v0_0 + 0x3))) != v0_2)) goto L_C025A74;
    goto L_C025CD2;
    L_C025A74:;
    v0_2 = FUN_0c0259ee(v0_0, v0_1);
    R0 = (v0_2);
    if ((v0_2 != 0)) goto L_C025A82;
    goto L_C025CD2;
    L_C025A82:;
    v0_2 = *(signed char *)((v0_0 + 0x248));
    R0 = (v0_2);
    if ((v0_2 != 0)) goto L_C025A8E;
    v0_2 = *(signed char *)((v0_1 + 0x248));
    R0 = (v0_2);
    if ((v0_2 == 0)) goto L_C025C9C;
    if ((R0 == 1)) goto L_C025C62;
    if ((R0 != 2)) goto L_C025CD2;
    v0_2 = (FUN_0c021e20(v0_1, v0_0, (0x24C + v0_1), (0x24C + v0_0))) == 0;
    if (v0_2) goto L_C025C4E;
    FUN_0c020468(v0_0);
    FUN_0c020468(v0_1);
    FUN_0c025958(v0_0, v0_1);
    L_C025C4E:;
    v0_2 = *(signed char *)((v0_1 + 0x2));
    R0 = (v0_2);
    if ((v0_2 == 0)) goto L_C025CD2;
    L_C025C54:;
    R0 = ((FUN_0c023bf4(v0_0, (0x24C + v0_1))));
    goto L_C025CD2;
    L_C025C62:;
    v0_2 = (hit_push_apart_boxes(v0_0, v0_1, (0x24C + v0_0), (0x24C + v0_1), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16))) == 0;
    if (v0_2) goto L_C025C88;
    FUN_0c020468(v0_0);
    FUN_0c020468(v0_1);
    FUN_0c025958(v0_0, v0_1);
    L_C025C88:;
    v0_2 = *(signed char *)((v0_1 + 0x2));
    R0 = (v0_2);
    if ((v0_2 == 0)) goto L_C025CD2;
    L_C025C8E:;
    R0 = ((FUN_0c023c72(v0_0, (0x24C + v0_1))));
    goto L_C025CD2;
    L_C025C9C:;
    v0_2 = (hit_push_apart_spheres(v0_0, v0_1, (0x24C + v0_0), (0x24C + v0_1), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16))) == 0;
    if (v0_2) goto L_C025CC2;
    FUN_0c020468(v0_0);
    FUN_0c020468(v0_1);
    FUN_0c025958(v0_0, v0_1);
    L_C025CC2:;
    v0_2 = *(signed char *)((v0_1 + 0x2));
    R0 = (v0_2);
    if ((v0_2 == 0)) goto L_C025CD2;
    L_C025CC8:;
    R0 = ((FUN_0c023d04(v0_0, (0x24C + v0_1))));
    goto L_C025CD2;
    L_C025A8E:;
    if ((R0 == 1)) goto L_C025B5C;
    if ((R0 == 2)) goto L_C025A9A;
    goto L_C025CD2;
    L_C025A9A:;
    v0_2 = *(signed char *)((v0_1 + 0x248));
    R0 = (v0_2);
    if ((v0_2 == 0)) goto L_C025B28;
    if ((R0 == 1)) goto L_C025AE2;
    if ((R0 == 2)) goto L_C025AAE;
    goto L_C025CD2;
    L_C025AAE:;
    v0_2 = (FUN_0c021238(v0_0, v0_1, (0x24C + v0_0), (0x24C + v0_1))) == 0;
    if (v0_2) goto L_C025AD4;
    FUN_0c020468(v0_0);
    FUN_0c020468(v0_1);
    FUN_0c025958(v0_0, v0_1);
    L_C025AD4:;
    v0_2 = *(signed char *)((v0_1 + 0x2));
    R0 = (v0_2);
    if ((v0_2 == 0)) goto L_C025ADE;
    goto L_C025C54;
    L_C025ADE:;
    goto L_C025CD2;
    L_C025AE2:;
    v0_2 = (FUN_0c02180c(v0_0, v0_1, (0x24C + v0_0), (0x24C + v0_1))) == 0;
    if (v0_2) goto L_C025B08;
    FUN_0c020468(v0_0);
    FUN_0c020468(v0_1);
    FUN_0c025958(v0_0, v0_1);
    L_C025B08:;
    v0_2 = *(signed char *)((v0_1 + 0x2));
    R0 = (v0_2);
    if ((v0_2 == 0)) goto L_C025B12;
    goto L_C025C8E;
    L_C025B12:;
    goto L_C025CD2;
    L_C025B28:;
    v0_2 = (FUN_0c021e20(v0_0, v0_1, (0x24C + v0_0), (0x24C + v0_1))) == 0;
    if (v0_2) goto L_C025B4E;
    FUN_0c020468(v0_0);
    FUN_0c020468(v0_1);
    FUN_0c025958(v0_0, v0_1);
    L_C025B4E:;
    v0_2 = *(signed char *)((v0_1 + 0x2));
    R0 = (v0_2);
    if ((v0_2 == 0)) goto L_C025B58;
    goto L_C025CC8;
    L_C025B58:;
    goto L_C025CD2;
    L_C025B5C:;
    v0_2 = *(signed char *)((v0_1 + 0x248));
    R0 = (v0_2);
    if ((v0_2 == 0)) goto L_C025BD0;
    if ((R0 == 1)) goto L_C025BA0;
    if ((R0 == 2)) goto L_C025B70;
    goto L_C025CD2;
    L_C025B70:;
    v0_2 = (FUN_0c02180c(v0_1, v0_0, (0x24C + v0_1), (0x24C + v0_0))) == 0;
    if (v0_2) goto L_C025B96;
    FUN_0c020468(v0_0);
    FUN_0c020468(v0_1);
    FUN_0c025958(v0_0, v0_1);
    L_C025B96:;
    v0_2 = *(signed char *)((v0_1 + 0x2));
    R0 = (v0_2);
    if ((v0_2 != 0)) goto L_C025C54;
    goto L_C025CD2;
    L_C025BA0:;
    v0_2 = (FUN_0c0215b8(v0_0, v0_1, (0x24C + v0_0), (0x24C + v0_1))) == 0;
    if (v0_2) goto L_C025BC6;
    FUN_0c020468(v0_0);
    FUN_0c020468(v0_1);
    FUN_0c025958(v0_0, v0_1);
    L_C025BC6:;
    v0_2 = *(signed char *)((v0_1 + 0x2));
    R0 = (v0_2);
    if ((v0_2 != 0)) goto L_C025C8E;
    goto L_C025CD2;
    L_C025BD0:;
    v0_2 = (hit_push_apart_boxes(v0_1, v0_0, (0x24C + v0_1), (0x24C + v0_0), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16))) == 0;
    if (v0_2) goto L_C025BF6;
    FUN_0c020468(v0_0);
    FUN_0c020468(v0_1);
    FUN_0c025958(v0_0, v0_1);
    L_C025BF6:;
    v0_2 = *(signed char *)((v0_1 + 0x2));
    R0 = (v0_2);
    if ((v0_2 == 0)) goto L_C025CD2;
    goto L_C025CC8;
    L_C025CDC:;
    v0_0 = ((*(int *)((v0_0 + 0x18))));
    goto L_C025CDE;
    L_C025CE6:;
    return R0;
}

int FUN_0c02d1cc(int a4)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    int t4;
    register int t5;
    int t6;
    register int t7;
    register int t8;
    int t9;
    register int t10;
    int t11;
    register int t12;
    register int t13;
    int t14;
    register int t15;
    register int t16;
    int t17;
    register int t18;
    int t19;
    register int t20;
    register int t21;
    int t22;
    register int t23;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t28;
    register int t29;
    register int t30;
    register int t31;
    register int t32;
    register int t33;
    register int t34;
    register int t35;
    register int t36;
    register int t38;
    register int t40;
    register int t41;
    register int t42;
    register int t45;
    register int t46;
    register int t50;

    if ((*(signed char *)((a4 + 0x0))) != 0) {
        t24 = *(signed char *)((a4 + 0x1));
        if (t24 == 0) {
            t25 = t24;
        } else {
            FUN_0c0e1550(0x1);
            FUN_0c05fb58((*(signed char *)((a4 + 0x5))));
            if (((unsigned short)(*(short *)((a4 + 0x6))) & 0x200) != 0) {
                FUN_0c0dcd20(((((struct o60_float *)(a4))->v)), ((((struct o64_float *)(a4))->v)), ((((struct o68_float *)(a4))->v)));
            }
            FUN_0c05a164(a4);
            t24 = (FUN_0c05a6e8(a4));
            t26 = 0x0;
            for (;;) {
                if ((int)(short)t26 < (int)0x5) {
                    t24 = (short)t26;
                    if (t24 != 0) {
                        if (t24 != 1) {
                            if (t24 != 2) {
                                if (t24 != 3) {
                                    t27 = 0x4;
                                    if (t24 != 4) {
                                    } else {
                                        t24 = 0x710A;
                                        if ((int)(*(signed char *)((a4 + t24))) < (int)0x4) {
                                            t24 = 0x71F1;
                                            t28 = (*(signed char *)((a4 + t24)));
                                            t29 = 0x6340;
                                            t24 = 0x710C;
                                            t29 = (t29 + a4);
                                            t28 = ((short)t28 * (short)0x6E0);
                                            t28 = (short)t28;
                                            t28 = (t28 + t29);
                                            t29 = 0xB0;
                                            t30 = (*(signed char *)((a4 + t24)));
                                            t30 = ((short)t30 * (short)t29);
                                            t30 = (short)t30;
                                            t28 = (t28 + t30);
                                        } else {
                                            t24 = 0x71F1;
                                            t28 = (*(signed char *)((a4 + t24)));
                                            t29 = 0x6340;
                                            t29 = (t29 + a4);
                                            t28 = ((short)t28 * (short)0x6E0);
                                            t28 = (short)t28;
                                            t28 = (t28 + t29);
                                        }
                                        t31 = 0x1;
                                        t27 = 0x1;
                                    }
                                    t32 = t27;
                                } else {
                                    t24 = 0x710A;
                                    t29 = (*(signed char *)((a4 + t24)));
                                    if ((int)t29 < (int)0x4) {
                                        t24 = 0x71F1;
                                        t28 = (*(signed char *)((a4 + t24)));
                                        t29 = 0x5580;
                                        t24 = 0x710B;
                                        t29 = (t29 + a4);
                                        t28 = ((short)t28 * (short)0x6E0);
                                        t28 = (short)t28;
                                        t28 = (t28 + t29);
                                        t29 = 0xB0;
                                        t30 = (*(signed char *)((a4 + t24)));
                                        t30 = ((short)t30 * (short)t29);
                                        t30 = (short)t30;
                                        t28 = (t28 + t30);
                                    } else {
                                        t24 = 0x71F1;
                                        t28 = (*(signed char *)((a4 + t24)));
                                        t29 = 0x5580;
                                        t29 = (t29 + a4);
                                        t28 = ((short)t28 * (short)0x6E0);
                                        t28 = (short)t28;
                                        t28 = (t28 + t29);
                                    }
                                    t31 = 0x1;
                                    t32 = 0x1;
                                }
                                t27 = t32;
                            } else {
                                t24 = 0x710A;
                                if ((int)(*(signed char *)((a4 + t24))) < (int)0x2) {
                                    t24 = 0x71F1;
                                    t28 = (*(signed char *)((a4 + t24)));
                                    t29 = 0x47C0;
                                    t24 = 0x710A;
                                    t29 = (t29 + a4);
                                    t28 = ((short)t28 * (short)0x6E0);
                                    t28 = (short)t28;
                                    t28 = (t28 + t29);
                                    t29 = 0xB0;
                                    t30 = (*(signed char *)((a4 + t24)));
                                    t30 = ((short)t30 * (short)t29);
                                    t30 = (short)t30;
                                    t28 = (t28 + t30);
                                } else {
                                    t24 = 0x71F1;
                                    t28 = (*(signed char *)((a4 + t24)));
                                    t29 = 0x47C0;
                                    t29 = (t29 + a4);
                                    t28 = ((short)t28 * (short)0x6E0);
                                    t28 = (short)t28;
                                    t28 = (t28 + t29);
                                }
                                t31 = 0x1;
                                t27 = 0x1;
                            }
                            t32 = t27;
                        } else {
                            t24 = 0x71F1;
                            t27 = *(signed char *)((a4 + t24));
                            t29 = 0x1E80;
                            t29 = (t29 + a4);
                            t31 = (signed char)t27;
                            t28 = ((short)t27 * (short)0x14A0);
                            t28 = (short)t28;
                            t28 = (t28 + t29);
                            t29 = 0x7102;
                            t29 = (t29 + a4);
                            t31 = (t31 + t29);
                            t31 = (*(signed char *)((t31 + 0x0)));
                            t32 = t27;
                        }
                        t27 = t32;
                    } else {
                        t24 = 0x71F1;
                        t32 = *(signed char *)((a4 + t24));
                        t29 = 0x300;
                        t29 = (t29 + a4);
                        t28 = ((short)t32 * (short)0xDC0);
                        t28 = (short)t28;
                        t28 = (t28 + t29);
                        t29 = 0x7100;
                        t31 = (signed char)t32;
                        t29 = (t29 + a4);
                        t31 = (t31 + t29);
                        t31 = (*(signed char *)((t31 + 0x0)));
                        t27 = t32;
                    }
                    t32 = 0x0;
                    t33 = t27;
                    for (;;) {
                        t29 = (short)t32;
                        if ((int)t29 >= (int)(short)t31) {
                            break;
                        }
                        t24 = 0x40;
                        t27 = t30;
                        t34 = t33;
                        t35 = t0;
                        if ((*(signed char *)((t28 + t24))) != 0) {
                            t24 = (short)t26;
                            if (t24 == 1) {
                                t24 = 0x46;
                                t24 = (*(signed char *)((t28 + t24)));
                                if (t24 == 2) {
                                    t24 = 0x47;
                                    t29 = (*(signed char *)((t28 + t24)));
                                    t24 = 0x710A;
                                    t36 = t0;
                                    if (t29 == (*(signed char *)((a4 + t24)))) {
                                        t0 = 0xC0E1240;
                                        t33 = t28;
                                        t24 = (FUN_0c0e1240(t33));
                                        t24 = 0x90;
                                        t29 = (*(int *)((t28 + t24)));
                                        t34 = 0xC0E1240;
                                        if ((t29 != 0) && (t1 = *(int *)((t28 + t24)), t2 = *(int *)((t1 + 0x0)), t3 = (t29 == 0), t29 = t2, (int)t29 >= 0)) {
                                            t24 = (*(signed char *)((a4 + 0x4)));
                                            t38 = 0xC0E1240;
                                            if ((t24 == 1) && (t4 = (t24 == 1), t24 = 0x71F1, t5 = *(signed char *)((a4 + t24)), t24 = t5, t24 == 1)) {
                                                t24 = 0x90;
                                                t0 = 0xC0EF980;
                                                t33 = (*(int *)((t28 + t24)));
                                                t24 = (FUN_0c0ef980(t33));
                                                t38 = 0xC0EF980;
                                            } else {
                                                t35 = t29;
                                            }
                                            t24 = 0x90;
                                            t29 = t35;
                                            t0 = t38;
                                            t33 = (*(int *)((t28 + t24)));
                                            t24 = (FUN_0c02cb4a(t33));
                                            t24 = 0x90;
                                            t0 = 0xC0DCBD0;
                                            t33 = (*(int *)((t28 + t24)));
                                            t24 = (nlObjPutUseViewMatrix(t33));
                                            t34 = 0xC0DCBD0;
                                        } else {
                                            t38 = t29;
                                        }
                                        t35 = t38;
                                        t36 = t34;
                                    } else {
                                        t34 = t30;
                                        t35 = t29;
                                        t38 = t33;
                                    }
                                    t40 = t34;
                                    t34 = t35;
                                    t35 = t38;
                                    t38 = t36;
                                } else {
                                    if (t24 == 3) {
                                        t24 = 0x47;
                                        t29 = (*(signed char *)((t28 + t24)));
                                        t24 = 0x710B;
                                        t36 = t0;
                                        if (t29 != (*(signed char *)((a4 + t24)))) {
                                            t41 = t30;
                                            t42 = t29;
                                            t38 = t33;
                                        } else {
                                            t0 = 0xC0E1240;
                                            t33 = t28;
                                            t24 = (FUN_0c0e1240(t33));
                                            t24 = 0x90;
                                            t29 = (*(int *)((t28 + t24)));
                                            t40 = 0xC0E1240;
                                            if ((t29 != 0) && (t6 = *(int *)((t28 + t24)), t7 = *(int *)((t6 + 0x0)), t8 = (t29 == 0), t29 = t7, (int)t29 >= 0)) {
                                                t24 = (*(signed char *)((a4 + 0x4)));
                                                t45 = 0xC0E1240;
                                                if ((t24 == 1) && (t9 = (t24 == 1), t24 = 0x71F1, t10 = *(signed char *)((a4 + t24)), t24 = t10, t24 == 1)) {
                                                    t24 = 0x90;
                                                    t0 = 0xC0EF980;
                                                    t33 = (*(int *)((t28 + t24)));
                                                    t24 = (FUN_0c0ef980(t33));
                                                    t45 = 0xC0EF980;
                                                } else {
                                                    t46 = t29;
                                                }
                                                t24 = 0x90;
                                                t29 = t46;
                                                t0 = t45;
                                                t33 = (*(int *)((t28 + t24)));
                                                t24 = (FUN_0c02cb4a(t33));
                                                t24 = 0x90;
                                                t0 = 0xC0DCBD0;
                                                t33 = (*(int *)((t28 + t24)));
                                                t24 = (nlObjPutUseViewMatrix(t33));
                                                t40 = 0xC0DCBD0;
                                            } else {
                                                t45 = t29;
                                            }
                                            t42 = t45;
                                            t36 = t40;
                                        }
                                        t40 = t41;
                                        t41 = t42;
                                        t42 = t38;
                                        t38 = t36;
                                    } else {
                                        t24 = 0x46;
                                        t24 = (*(signed char *)((t28 + t24)));
                                        t36 = t0;
                                        if ((t24 == 4) && (t11 = (t24 == 4), t24 = 0x47, t12 = *(signed char *)((t28 + t24)), t29 = t12, t24 = 0x710C, t13 = *(signed char *)((a4 + t24)), t29 != t13)) {
                                            t45 = t30;
                                            t46 = t29;
                                            t42 = t33;
                                        } else {
                                            t0 = 0xC0E1240;
                                            t33 = t28;
                                            t24 = (FUN_0c0e1240(t33));
                                            t24 = 0x90;
                                            t29 = (*(int *)((t28 + t24)));
                                            t36 = 0xC0E1240;
                                            if ((t29 != 0) && (t14 = *(int *)((t28 + t24)), t15 = *(int *)((t14 + 0x0)), t16 = (t29 == 0), t29 = t15, (int)t29 >= 0)) {
                                                t24 = (*(signed char *)((a4 + 0x4)));
                                                t46 = 0xC0E1240;
                                                if ((t24 == 1) && (t17 = (t24 == 1), t24 = 0x71F1, t18 = *(signed char *)((a4 + t24)), t24 = t18, t24 == 1)) {
                                                    t24 = 0x90;
                                                    t0 = 0xC0EF980;
                                                    t33 = (*(int *)((t28 + t24)));
                                                    t24 = (FUN_0c0ef980(t33));
                                                    t46 = 0xC0EF980;
                                                } else {
                                                    t50 = t29;
                                                }
                                                t24 = 0x90;
                                                t29 = t50;
                                                t0 = t46;
                                                t33 = (*(int *)((t28 + t24)));
                                                t24 = (FUN_0c02cb4a(t33));
                                                t24 = 0x90;
                                                t0 = 0xC0DCBD0;
                                                t33 = (*(int *)((t28 + t24)));
                                                t24 = (nlObjPutUseViewMatrix(t33));
                                                t36 = 0xC0DCBD0;
                                            } else {
                                                t46 = t29;
                                            }
                                        }
                                        t40 = t45;
                                        t41 = t46;
                                        t38 = t36;
                                    }
                                    t34 = t41;
                                    t35 = t42;
                                }
                                t36 = t40;
                                t40 = t34;
                                t34 = t35;
                                t35 = t38;
                            } else {
                                t0 = 0xC0E1240;
                                t33 = t28;
                                t24 = (FUN_0c0e1240(t33));
                                t24 = 0x90;
                                t29 = (*(int *)((t28 + t24)));
                                t38 = 0xC0E1240;
                                if ((t29 != 0) && (t19 = *(int *)((t28 + t24)), t20 = *(int *)((t19 + 0x0)), t21 = (t29 == 0), t29 = t20, (int)t29 >= 0)) {
                                    t24 = (*(signed char *)((a4 + 0x4)));
                                    t41 = 0xC0E1240;
                                    if ((t24 == 1) && (t22 = (t24 == 1), t24 = 0x71F1, t23 = *(signed char *)((a4 + t24)), t24 = t23, t24 == 1)) {
                                        t24 = 0x90;
                                        t0 = 0xC0EF980;
                                        t33 = (*(int *)((t28 + t24)));
                                        t24 = (FUN_0c0ef980(t33));
                                        t41 = 0xC0EF980;
                                    } else {
                                        t42 = t29;
                                    }
                                    t24 = 0x90;
                                    t29 = t42;
                                    t0 = t41;
                                    t33 = (*(int *)((t28 + t24)));
                                    t24 = (FUN_0c02cb4a(t33));
                                    t24 = 0x90;
                                    t0 = 0xC0DCBD0;
                                    t33 = (*(int *)((t28 + t24)));
                                    t24 = (nlObjPutUseViewMatrix(t33));
                                    t38 = 0xC0DCBD0;
                                } else {
                                    t41 = t29;
                                }
                                t40 = t41;
                                t35 = t38;
                            }
                            t27 = t36;
                            t36 = t40;
                        } else {
                            t36 = t29;
                        }
                        t30 = t27;
                        t29 = t36;
                        t33 = t34;
                        t0 = t35;
                        t32 = (t32 + 0x1);
                        t28 = (t28 + 0xB0);
                    }
                    t26 = (t26 + 0x1);
                    continue;
                }
                break;
            }
            t25 = t24;
        }
        t0 = t25;
    }
    return t0;
}

int opt_page3_main(int a4, int a5, int a6)
{
    int stk[7];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_0 = a6;
    v0_9 = *(signed char *)0xC362348;
    v0_7 = (v0_9);
    v0_4 = (0x1);
    v0_5 = (0xC7F302C);
    v0_6 = (0xC7F2EE0);
    v0_1 = (0x0);
    v0_2 = (0xC362348);
    v0_8 = (0xC362348);
    v0_3 = (0xC362349);
    if ((v0_9 == 0)) goto L_C01AE9C;
    if ((v0_7 == 1)) goto L_C01AEF4;
    if ((v0_7 != 2)) goto L_C01AE90;
    v0_9 = *(signed char *)((v0_3 + 0x0));
    v0_7 = (v0_9);
    if ((v0_9 == 0)) goto L_C01AFF4;
    if ((v0_7 == 1)) goto L_C01B004;
    L_C01B094:;
    return v0_7;
    L_C01B004:;
    (((struct o13E_uchar *)(v0_6))->v) = v0_4;
    ending_main(v0_8, v0_3, v0_0);
    if (((*(signed char *)((v0_6 + 0x13E))) == 1)) goto L_C01B016;
    *(unsigned char *)((v0_2 + 0x0)) = v0_1;
    L_C01B016:;
    (((struct o13E_uchar *)(v0_6))->v) = v0_1;
    v0_7 = (0x13E);
    goto L_C01B094;
    L_C01AFF4:;
    *(unsigned char *)((v0_5 + 0x0)) = v0_1;
    (((struct o55_uchar *)(v0_5))->v) = (*(signed char *)((v0_2 + 0x8)));
    *(unsigned char *)((v0_2 + 0x1)) = ((*(signed char *)((v0_2 + 0x1))) + 0x1);
    goto L_C01B004;
    L_C01AE90:;
    if ((v0_7 != 3)) goto L_C01AE98;
    v0_8 = *(signed char *)((v0_3 + 0x0));
    v0_7 = (v0_8);
    if ((v0_8 == 0)) goto L_C01B04C;
    if ((v0_7 == 1)) goto L_C01B062;
    goto L_C01B094;
    L_C01B062:;
    *(unsigned int *)(((int)stk + 0)) = (unsigned char)(*(signed char *)((((v0_6 + 0x4) + 0x1) + 0x0)));
    *(unsigned char *)((((v0_6 + 0x4) + 0x1) + 0x0)) = (*(signed char *)(((v0_6 + 0x4) + 0x6)));
    (((struct o13E_uchar *)(v0_6))->v) = v0_4;
    v0_0 = ((int (*)(int, int, int, int, int, int, int, int, int))(ending_scene_main))((v0_6 + 0x4), ((v0_6 + 0x4) + 0x1), v0_0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
    (((struct o13E_uchar *)(v0_6))->v) = v0_1;
    *(unsigned char *)(((v0_6 + 0x4) + 0x6)) = (*(signed char *)(((v0_6 + 0x4) + 0x1)));
    *(unsigned char *)((v0_6 + 0x5)) = (*(int *)(((int)stk + 0)));
    v0_0 = *(signed char *)((v0_6 + 0xA));
    v0_7 = (v0_0);
    if ((v0_0 != 0)) goto L_C01B094;
    *(unsigned char *)((v0_2 + 0x0)) = v0_1;
    goto L_C01B094;
    L_C01B04C:;
    (((struct o55_uchar *)(v0_5))->v) = v0_1;
    v0_3 = ((int (*)(int, int, int))(res_switch_scene))(0x9, v0_3, v0_0);
    *(unsigned char *)((v0_6 + 0xA)) = v0_1;
    *(unsigned char *)((v0_2 + 0x1)) = ((*(signed char *)((v0_2 + 0x1))) + 0x1);
    goto L_C01B062;
    L_C01AE98:;
    goto L_C01B094;
    L_C01AEF4:;
    v0_6 = *(signed char *)((v0_2 + 0x1));
    v0_7 = (v0_6);
    if ((v0_6 == 0)) goto L_C01AF02;
    if (!((v0_7 == 1))) goto L_C01AFCC;
    *(unsigned short *)((v0_2 + 0x6)) = ((*(short *)((v0_2 + 0x6))) + 0x5B0);
    v0_6 = ((int (*)(int, int, int))(FUN_0c01b570))(v0_8, v0_3, v0_0);
    v0_6 = (signed char)(FUN_0c01b4f2(0x2)) == 0;
    if (v0_6) goto L_C01AFB2;
    v0_6 = (short)(FUN_0c01b4d6((*(signed char *)0xC362350))) == 0;
    if (v0_6) goto L_C01AFB2;
    snd_play_side_se(0x0, 0x4D);
    if (((unsigned char)(*(signed char *)((v0_2 + 0x8))) != 10)) goto L_C01AF92;
    *(unsigned char *)((v0_2 + 0x0)) = 0x3;
    *(unsigned char *)((v0_2 + 0x1)) = v0_1;
    goto L_C01AFCC;
    L_C01AFCC:;
    v0_0 = ((int (*)(int, int, int))(obj_tick_class))(0x5, v0_3, v0_0);
    return FUN_0c0593e0(0x5);
    L_C01AF92:;
    *(unsigned char *)((v0_2 + 0x0)) = 0x2;
    *(unsigned char *)((v0_2 + 0x1)) = v0_1;
    v0_8 = (0x2);
    if ((((unsigned short)(*(short *)0xC361BFC) & 4) == 0)) goto L_C01AFAC;
    (((struct o47_uchar *)(v0_5))->v) = v0_4;
    goto L_C01AFCC;
    L_C01AFAC:;
    (((struct o47_uchar *)(v0_5))->v) = v0_8;
    goto L_C01AFCC;
    L_C01AFB2:;
    v0_1 = (signed char)(FUN_0c01b4f2(0x2)) == 0;
    if (v0_1) goto L_C01AFCC;
    snd_play_side_se(0x0, 0x4D);
    opt_page_leave_reset();
    goto L_C01AFCC;
    L_C01AF02:;
    *(unsigned char *)((v0_2 + 0x1)) = ((*(signed char *)((v0_2 + 0x1))) + 0x1);
    v0_2 = ((int (*)(int, int, int))(opt_page3_run_objects_in_mask))(0xF, v0_3, v0_0);
    FUN_0c01b274(0x1);
    v0_6 = (0xB);
    v0_2 = (v0_1);
    L_C01AF14:;
    FUN_0c01b144(0x1, v0_2);
    v0_1 = (int)(signed char)(v0_2 + 0x1) < (int)v0_6;
    v0_2 = ((v0_2 + 0x1));
    if (v0_1) goto L_C01AF14;
    goto L_C01AFCC;
    L_C01AE9C:;
    *(unsigned char *)((v0_8 + 0x0)) = ((*(signed char *)((v0_8 + 0x0))) + 0x1);
    *(unsigned char *)((v0_2 + 0x1)) = v0_1;
    FUN_0c05f2d4(0x3, 0x0);
    (((struct o8_uint *)0xC7F31BC)->v) = v0_1;
    (((struct o4_uint *)0xC7F31BC)->v) = v0_1;
    (((struct o0_uint *)0xC7F31BC)->v) = v0_1;
    game_reset_objects();
    bgm_stop_streams();
    FUN_0c0a2f66(0x0);
    FUN_0c0a2f66(0x2);
    FUN_0c0a2f66(0x1);
    FUN_0c0a2f66(0x1);
    FUN_0c0a2f66(0x2);
    FUN_0c0a2f66(0x3);
    FUN_0c0a2f66(0x4);
    cam_request_mode(0x1C, 0x0, 0xF0);
    v0_6 = ((int (*)(int))(res_switch_scene))(0xE);
    opt_page3_spawn_bg_scroll(0x0);
    goto L_C01AEF4;
}

int FUN_0c0c8580(int a4)
{
    int stk[3];
    register int t2;
    register int t3;
    register int t9;
    register int t14;
    register int t16;
    register int t19;
    register int t52;
    register int t53;
    register int t54;
    register int t55;
    register int t56;
    register int t57;
    register int t58;
    register int t59;
    register float u60;
    register float u61;
    register float u62;
    register int t92;
    register int t95;
    register float u96;
    register float u97;
    register float u98;
    register float u88;
    register float u89;
    register float u90;
    register int t68;
    register int t73;
    int t0;
    register int t1;
    register float u5;
    register float u6;
    register float u7;
    register int t23;
    register float u80;
    register float u81;
    register float u82;

    *(unsigned int *)(((int)stk + 4)) = a4;
    t2 = a4;
    t3 = 0x4;
    for (;;) {
        t9 = *(int *)((((t3 << 2) + (0x2E0 + (*(int *)(((int)stk + 4))))) + 0x0));
        if (t3 == 4) {
            *(unsigned int *)((t9 + 0x18)) = ((*(int *)((t9 + 0x18))) + 0x71C);
        } else {
            t0 = (*(int *)((t9 + 0x18)));
            t0 = (t0 - 0x71C);
            *(unsigned int *)((t9 + 0x18)) = t0;
        }
        t14 = *(signed char *)(((t9 + 0x34) + 0xA));
        *(unsigned char *)(((t9 + 0x34) + 0xA)) = (t14 - 1);
        if ((signed char)(t14 - 1) == 0) {
            *(unsigned char *)(((t9 + 0x34) + 0xA)) = 0x1;
            t0 = (*(signed char *)(((t9 + 0x34) + 0x9)));
            t0 = (t0 + 0x1);
            t16 = (int)((int)t0 % (int)0x4);
            t0 = t9;
            t0 = (t0 + 0x44);
            *(unsigned char *)(((t9 + 0x34) + 0x9)) = t16;
            *(unsigned int *)(((int)stk + 0)) = t0;
            u7 = 255.0f;
            u6 = ((math_rand_float()));
            u6 = (u6 * u7);
            u5 = 2.14748365e+09f;
            if (!(u5 > u6)) {
                u5 = (u5 + u5);
                u6 = (u6 - u5);
            }
            t1 = 0xC0E6F24;
            t0 = (int)u6;
            t19 = (int)((unsigned int)t0 % (unsigned int)0x4);
            t0 = (*(int *)(((int)stk + 0)));
            t1 = (signed char)(((t19 << 1) + t19) << 2);
            t1 = (t1 + 0xC15331C);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
        } else {
            t23 = t2;
        }
        t2 = t23;
        if ((*(signed char *)(((t9 + 0x34) + 0x8))) != 0) {
            u7 = ((((struct o1C_float *)(t9))->v));
            u7 = (u7 + 0.399999976f);
            (((struct o1C_float *)(t9))->v) = u7;
            u6 = ((((struct o20_float *)(t9))->v));
            u6 = (u6 + 0.399999976f);
            (((struct o20_float *)(t9))->v) = u6;
            u7 = ((((struct o4_float *)((t9 + 0x34)))->v));
            if (!(u7 > u6)) {
                u7 = ((((struct o4_float *)((t9 + 0x34)))->v));
                t0 = 0x3F4CCCCC;
                (((struct o1C_float *)(t9))->v) = u7;
                u7 = ((((struct o4_float *)((t9 + 0x34)))->v));
                (((struct o20_float *)(t9))->v) = u7;
                u7 = (*(float *)&(t0));
                *(unsigned char *)(((t9 + 0x34) + 0x8)) = ((*(signed char *)(((t9 + 0x34) + 0x8))) ^ 0x1);
                u6 = ((((struct o4_float *)((t9 + 0x34)))->v));
                u6 = (u6 + u7);
                (((struct o4_float *)((t9 + 0x34)))->v) = u6;
                if (!(3.0f > u6)) {
                    (((struct o4_float *)((t9 + 0x34)))->v) = 3.0f;
                }
            }
        } else {
            u7 = ((((struct o1C_float *)(t9))->v));
            u7 = (u7 - 0.399999976f);
            (((struct o1C_float *)(t9))->v) = u7;
            u6 = ((((struct o20_float *)(t9))->v));
            u6 = (u6 - 0.399999976f);
            (((struct o20_float *)(t9))->v) = u6;
            u7 = ((((struct o34_float *)(t9))->v));
            if (!(u6 > u7)) {
                u7 = ((((struct o34_float *)(t9))->v));
                (((struct o1C_float *)(t9))->v) = u7;
                u7 = ((((struct o34_float *)(t9))->v));
                (((struct o20_float *)(t9))->v) = u7;
                *(unsigned char *)(((t9 + 0x34) + 0x8)) = ((*(signed char *)(((t9 + 0x34) + 0x8))) ^ 0x1);
                u6 = ((((struct o34_float *)(t9))->v));
                u7 = 0.799999952f;
                u6 = (u6 + u7);
                (((struct o34_float *)(t9))->v) = u6;
                if (!(2.5999999f > u6)) {
                    (((struct o4_float *)((t9 + 0x34)))->v) = 2.5999999f;
                }
            }
        }
        u7 = ((((struct o1C_float *)(t9))->v));
        t3 = (t3 + 0x1);
        u7 = (u7 / 1.5f);
        (((struct o1C_float *)(t9))->v) = u7;
        u6 = ((((struct o20_float *)(t9))->v));
        u6 = (u6 / 1.5f);
        (((struct o20_float *)(t9))->v) = u6;
        u7 = ((((struct o24_float *)(t9))->v));
        u7 = (u7 / 1.5f);
        (((struct o24_float *)(t9))->v) = u7;
        if ((int)t3 < (int)0x6) continue;
        break;
    }
    *(unsigned char *)(((int)stk + 8)) = 0x0;
    t52 = *(int *)(((int)stk + 4));
    t53 = 0x0;
    t54 = t0;
    t55 = (t52 + 0x2E0);
    t56 = 0x0;
    t57 = (t52 + 0x2E0);
    t58 = (t52 + 0x2E0);
    t59 = (t9 + 0x34);
    u60 = u5;
    u61 = u6;
    u62 = u7;
    for (;;) {
        t92 = t54;
        t95 = t55;
        u96 = u60;
        u97 = u61;
        u98 = u62;
        if ((*(signed char *)(((*(int *)((t57 + 0x0))) + 0x0))) != 0) {
            t53 = (*(signed char *)(((int)stk + 8)));
            t53 = (t53 + 0x1);
            *(unsigned char *)(((int)stk + 8)) = t53;
            t55 = (*(int *)((t58 + 0x0)));
            t59 = t55;
            t59 = (t59 + 0x34);
            t53 = (*(signed char *)((t59 + 0x1)));
            t53 = (t53 - 1);
            *(unsigned char *)((t59 + 0x1)) = t53;
            t53 = (signed char)t53;
            t92 = t54;
            t95 = t55;
            u88 = u60;
            u89 = u61;
            u90 = u62;
            if (t53 == 0) {
                t68 = *(signed char *)((t59 + 0x0));
                *(unsigned char *)((t59 + 0x0)) = (t68 + 0x1);
                if ((int)(signed char)(t68 + 0x1) >= (int)0x4) {
                    *(unsigned char *)((t55 + 0x0)) = 0x0;
                    t92 = t54;
                    t95 = t55;
                    u80 = u60;
                    u81 = u61;
                    u82 = u62;
                } else {
                    t53 = 0x2;
                    *(unsigned char *)((t59 + 0x1)) = t53;
                    t53 = (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x3)));
                    t54 = 0xC06231C;
                    t73 = t53;
                    t53 = (t53 << 1);
                    t53 = (t53 + t73);
                    t53 = (t53 << 2);
                    t53 = (t53 << 1);
                    t53 = (FUN_0c06231c(t55, ((signed char)t53 + 0xC6002D0), ((*(signed char *)((t59 + 0x0))) + 0x1C)));
                }
                u88 = u80;
                u89 = u81;
                u90 = u82;
            }
            u96 = u88;
            u97 = u89;
            u98 = u90;
        }
        u60 = u96;
        u61 = u97;
        u62 = u98;
        t54 = t92;
        t56 = (t56 + 0x1);
        t55 = t95;
        t58 = (t58 + 0x4);
        t57 = (t57 + 0x4);
        if ((int)t56 >= (int)0x3) {
            break;
        }
    }
    return (*(signed char *)(((int)stk + 8)));
}
