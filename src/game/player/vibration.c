/* controller vibration start/update/stop for both ports (0c09b7a4-0c09c974) */

/* named globals (symbols.txt) */
extern char g_vib_disabled[];
extern char g_vib_handles[];
struct o72B2_uchar { char p[0x72B2]; unsigned char v; };
struct o72B3_uchar { char p[0x72B3]; unsigned char v; };
struct o72B4_uchar { char p[0x72B4]; unsigned char v; };
struct o72B5_uchar { char p[0x72B5]; unsigned char v; };
struct o72B6_uchar { char p[0x72B6]; unsigned char v; };
struct o72B7_uchar { char p[0x72B7]; unsigned char v; };
struct o72B8_uchar { char p[0x72B8]; unsigned char v; };
int FUN_0c0555c4(void);
int FUN_0c0f4128(int);
int FUN_0c0f414e(int, int, int, int);
int FUN_0c0f4202(int, int);
int pdVibMxStop(int);
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o7232_uchar { char p[0x7232]; unsigned char v; };
int fx_spawn_04aa24(int, int);
int FUN_0c05fbee(int);
int snd_play_side_se(int a4, int a5);
int fx_spawn_eight_point_effect(int, int, int, int, float, float, float, float, float, float);
int FUN_0c0a3dcc(int, int);
int FUN_0c0421ee(int a4, int a5);
struct o7225_uchar { char p[0x7225]; unsigned char v; };
struct o7226_uchar { char p[0x7226]; unsigned char v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o7294_int { char p[0x7294]; int v; };
struct o72A8_int { char p[0x72A8]; int v; };
struct o72A8_uint { char p[0x72A8]; unsigned int v; };
extern int pl_change_state();
int obj_clear_slot_contact(int);
int obj_collect_slot_contacts(int);
struct o2E4_int { char p[0x2E4]; int v; };
struct o71F8_int { char p[0x71F8]; int v; };
struct o71FC_int { char p[0x71FC]; int v; };
struct o720E_uchar { char p[0x720E]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
float math_cos_angle16(int);
float math_sin_angle16(int);
struct o71CC_int { char p[0x71CC]; int v; };
struct oF2_short { char p[0xF2]; short v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o72AD_uchar { char p[0x72AD]; unsigned char v; };
struct o72AE_uchar { char p[0x72AE]; unsigned char v; };

int pl_vib_start_preset(int a4, int a5);
int pl_reset_combo_counter(int a4);

int pl_vib_start_preset(int a4, int a5)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_2 = a4;
    v0_0 = a5;
    *(unsigned char *)(((int)stk + 0)) = v0_0;
    *(unsigned char *)(((int)stk + 8)) = (*(signed char *)0xC1510A1);
    *(unsigned char *)(((int)stk + 4)) = (*(signed char *)0xC1510A2);
    v0_3 = (((int)g_vib_disabled));
    v0_0 = ((((int)stk + 0) + 0x4));
    v0_1 = (0x0);
    v0_2 = (v0_2);
    if (((*(signed char *)g_vib_disabled) != 0)) goto L_C09B86C;
    v0_4 = FUN_0c0555c4();
    v0_3 = (v0_4);
    if ((v0_4 == 0)) goto L_C09B86C;
    v0_3 = (0x71ED);
    if (((*(signed char *)((v0_2 + 0x71ED))) != 0)) goto L_C09B86C;
    v0_3 = (FUN_0c0f4128((*(int *)((((((*(signed char *)((v0_2 + 0x3))) << 2) << 1) + ((int)g_vib_handles)) + 0x0))))) != 0;
    v0_4 = (((int)g_vib_handles));
    if (v0_3) goto L_C09B816;
    v0_5 = FUN_0c0f4128((*(int *)((((v0_1 + 0x1) << 2) + ((((*(signed char *)((v0_2 + 0x3))) << 2) << 1) + v0_4)))));
    v0_3 = (v0_5);
    v0_1 = ((v0_1 + 0x1));
    if ((v0_5 == 0)) goto L_C09B86C;
    L_C09B816:;
    (((struct o72B4_uchar *)(v0_2))->v) = 0x1;
    (((struct o72B5_uchar *)(v0_2))->v) = 0x1;
    v0_3 = *(signed char *)(((int)stk + 0));
    (((struct o72B6_uchar *)(v0_2))->v) = (*(signed char *)((((v0_3 << 2) + 0xC339428) + 0x0)));
    (((struct o72B7_uchar *)(v0_2))->v) = (*(signed char *)((((v0_3 << 2) + 0xC339428) + 0x1)));
    (((struct o72B8_uchar *)(v0_2))->v) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = (((v0_3 << 2) + 0xC339428) + 0x2);
    *(unsigned char *)((v0_0 + 0x0)) = (*(signed char *)(((((v0_3 << 2) + 0xC339428) + 0x2) + 0x0)));
    FUN_0c0f414e((*(int *)(((v0_1 << 2) + ((((*(signed char *)((v0_2 + 0x3))) << 2) << 1) + v0_4)))), (((int)stk + 0) + 0x8), v0_0, 0x1);
    (((struct o72B2_uchar *)(v0_2))->v) = 0x2;
    (((struct o72B3_uchar *)(v0_2))->v) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)));
    v0_3 = (0x72B3);
    L_C09B86C:;
    return v0_3;
}

int pl_vib_start_custom(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t47;
    register int t8;
    register int t12;

    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned char *)(((int)stk + 0)) = a6;
    *(unsigned char *)(((int)stk + 4)) = a7;
    *(unsigned char *)(((int)stk + 16)) = (*(signed char *)0xC1510A3);
    *(unsigned char *)(((int)stk + 12)) = (*(signed char *)0xC1510A4);
    t47 = ((int)g_vib_disabled);
    if ((*(signed char *)g_vib_disabled) == 0) {
        t47 = 0x71ED;
        if ((*(signed char *)((a4 + 0x71ED))) == 0) {
            t8 = FUN_0c0f4128((*(int *)((((((*(signed char *)((a4 + 0x3))) << 2) << 1) + ((int)g_vib_handles)) + 0x0))));
            if (t8 == 0) {
                t12 = FUN_0c0f4128((*(int *)((0x4 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + ((int)g_vib_handles))))));
                t47 = t12;
                if (t12 != 0) {
                    (((struct o72B4_uchar *)(a4))->v) = 0x1;
                    (((struct o72B5_uchar *)(a4))->v) = 0x1;
                    (((struct o72B6_uchar *)(a4))->v) = (*(signed char *)(((int)stk + 8)));
                    (((struct o72B7_uchar *)(a4))->v) = (*(signed char *)(((int)stk + 0)));
                    (((struct o72B8_uchar *)(a4))->v) = 0x0;
                    *(unsigned char *)(((((int)stk + 0) + 0xC) + 0x0)) = 0xFF;
                    FUN_0c0f414e((*(int *)((0x4 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + ((int)g_vib_handles))))), (((int)stk + 0) + 0x10), (((int)stk + 0) + 0xC), 0x1);
                    (((struct o72B2_uchar *)(a4))->v) = 0x2;
                    t47 = *(signed char *)(((int)stk + 4));
                    (((struct o72B3_uchar *)(a4))->v) = t47;
                }
            } else {
                (((struct o72B4_uchar *)(a4))->v) = 0x1;
                (((struct o72B5_uchar *)(a4))->v) = 0x1;
                (((struct o72B6_uchar *)(a4))->v) = (*(signed char *)(((int)stk + 8)));
                (((struct o72B7_uchar *)(a4))->v) = (*(signed char *)(((int)stk + 0)));
                (((struct o72B8_uchar *)(a4))->v) = 0x0;
                *(unsigned char *)(((((int)stk + 0) + 0xC) + 0x0)) = 0xFF;
                FUN_0c0f414e((*(int *)((0x0 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + ((int)g_vib_handles))))), (((int)stk + 0) + 0x10), (((int)stk + 0) + 0xC), 0x1);
                (((struct o72B2_uchar *)(a4))->v) = 0x2;
                t47 = *(signed char *)(((int)stk + 4));
                (((struct o72B3_uchar *)(a4))->v) = t47;
            }
        }
    }
    return t47;
}

int pl_vib_update(int a4)
{
    int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x72B2))) != 0) {
        t1 = *(signed char *)((a4 + 0x72B2));
        (((struct o72B2_uchar *)(a4))->v) = (t1 - 1);
        if (((unsigned char)(t1 - 1) == 0) && (t0 = *(signed char *)((a4 + 0x71ED)), t0 == 0)) {
            t0 = FUN_0c0f4128((*(int *)((((((*(signed char *)((a4 + 0x3))) << 2) << 1) + ((int)g_vib_handles)) + 0x0))));
            if (t0 == 0) {
                t0 = FUN_0c0f4128((*(int *)((0x4 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + ((int)g_vib_handles))))));
                if (t0 != 0) {
                    if ((*(signed char *)g_vib_disabled) == 0) {
                        FUN_0c0f4202((*(int *)((0x4 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + ((int)g_vib_handles))))), (0x72B4 + a4));
                    }
                    if ((*(signed char *)((a4 + 0x72B3))) != 0) {
                        t1 = *(signed char *)((a4 + 0x72B3));
                        (((struct o72B3_uchar *)(a4))->v) = (t1 - 1);
                        if ((unsigned char)(t1 - 1) == 0) {
                            if ((*(signed char *)((a4 + 0x71ED))) == 0) {
                                t1 = FUN_0c0f4128((*(int *)((0x4 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + ((int)g_vib_handles))))));
                                if (t1 == 0) {
                                    t1 = FUN_0c0f4128((*(int *)((0x8 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + ((int)g_vib_handles))))));
                                    if (t1 != 0) {
                                        return pdVibMxStop((*(int *)((0x8 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + ((int)g_vib_handles))))));
                                    }
                                    return t1;
                                }
                                return pdVibMxStop((*(int *)((0x4 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + ((int)g_vib_handles))))));
                            }
                            return 0x71ED;
                        }
                        return 0x72B3;
                    }
                    return 0x72B3;
                }
                return t0;
            }
            if ((*(signed char *)g_vib_disabled) == 0) {
                FUN_0c0f4202((*(int *)((0x0 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + ((int)g_vib_handles))))), (0x72B4 + a4));
            }
        }
    }
    if ((*(signed char *)((a4 + 0x72B3))) != 0) {
        t0 = *(signed char *)((a4 + 0x72B3));
        (((struct o72B3_uchar *)(a4))->v) = (t0 - 1);
        if ((unsigned char)(t0 - 1) == 0) {
            if ((*(signed char *)((a4 + 0x71ED))) == 0) {
                t0 = FUN_0c0f4128((*(int *)((0x0 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + ((int)g_vib_handles))))));
                if (t0 == 0) {
                    t0 = FUN_0c0f4128((*(int *)((0x4 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + ((int)g_vib_handles))))));
                    if (t0 != 0) {
                        return pdVibMxStop((*(int *)((0x4 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + ((int)g_vib_handles))))));
                    }
                    return t0;
                }
                return pdVibMxStop((*(int *)((0x0 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + ((int)g_vib_handles))))));
            }
            return 0x71ED;
        }
        return 0x72B3;
    }
    return 0x72B3;
}

int pl_vib_stop(int a4)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x71ED))) == 0) {
        t0 = FUN_0c0f4128((*(int *)((((((*(signed char *)((a4 + 0x3))) << 2) << 1) + ((int)g_vib_handles)) + 0x0))));
        if (t0 == 0) {
            t0 = FUN_0c0f4128((*(int *)((0x4 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + ((int)g_vib_handles))))));
            if (t0 != 0) {
                return pdVibMxStop((*(int *)((0x4 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + ((int)g_vib_handles))))));
            }
            return t0;
        }
        return pdVibMxStop((*(int *)((0x0 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + ((int)g_vib_handles))))));
    }
    return 0x71ED;
}

int vib_stop_all(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = ((int)g_vib_handles);
    t1 = ((int)g_vib_handles);
    t2 = 0x0;
    t3 = ((int)g_vib_handles);
    for (;;) {
        t5 = FUN_0c0f4128((*(int *)((((t2 << 2) << 1) + ((int)g_vib_handles)))));
        if (t5 != 0) {
            pdVibMxStop((*(int *)((t1 + 0x0))));
        }
        t5 = FUN_0c0f4128((*(int *)((t0 + 0x4))));
        t4 = t5;
        if (t5 != 0) {
            t4 = (pdVibMxStop((*(int *)((t3 + 0x4)))));
        }
        t2 = (t2 + 0x1);
        t0 = (t0 + 0x8);
        t3 = (t3 + 0x8);
        t1 = (t1 + 0x8);
        if ((int)t2 >= (int)0x2) {
            break;
        }
    }
    return t4;
}

int vib_is_any_active(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x0;
    t1 = ((int)g_vib_handles);
    t2 = ((int)g_vib_handles);
    for (;;) {
        t3 = FUN_0c0f4128((*(int *)((t1 + 0x0))));
        if (t3 == 0) {
            t3 = FUN_0c0f4128((*(int *)((t2 + 0x4))));
            if (t3 != 0) {
                break;
            }
            t0 = (t0 + 0x1);
            t2 = (t2 + 0x8);
            t1 = (t1 + 0x8);
            if ((int)t0 >= (int)0x2) {
                return 0x0;
            }
            continue;
        }
        break;
    }
    return 0x1;
}

int FUN_0c09bb9e(int a4, int a5)
{
    return ((int (*)(int, int, int, int))(0xC09BC2A))(a4, a5, (0x0 + a5), 0x0);
}

int FUN_0c09bc3a(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x4));
    (((struct o710A_uchar *)(a4))->v) = (*(signed char *)((a5 + ((t0 << 1) + t0))));
    t0 = *(signed char *)((a4 + 0x4));
    (((struct o710B_uchar *)(a4))->v) = (*(signed char *)(((((t0 << 1) + t0) + a5) + 0x1)));
    t0 = *(signed char *)((a4 + 0x4));
    t1 = *(signed char *)(((a5 + ((t0 << 1) + t0)) + 0x2));
    (((struct o710C_uchar *)(a4))->v) = t1;
    return t1;
}

int FUN_0c09bc6e(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = 0x719E;
    if ((int)(unsigned short)((((struct o719E_short *)(a4))->v)) >= (int)(signed char)a5) {
        t1 = *(signed char *)((a4 + 0x4));
        (((struct o710A_uchar *)(a4))->v) = (*(signed char *)((a6 + ((t1 << 1) + t1))));
        t1 = *(signed char *)((a4 + 0x4));
        (((struct o710B_uchar *)(a4))->v) = (*(signed char *)(((((t1 << 1) + t1) + a6) + 0x1)));
        t1 = *(signed char *)((a4 + 0x4));
        t0 = *(signed char *)(((a6 + ((t1 << 1) + t1)) + 0x2));
        (((struct o710C_uchar *)(a4))->v) = t0;
    }
    return t0;
}

int FUN_0c09bcbc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)(((0x71A5 + a4) + 0x0));
    t1 = *(signed char *)((a4 + 0x71A4));
    if (((t1 << 8) + (unsigned char)t0) == 0) {
        return ((int (*)(int, int, int, int))(0xC09C2BC))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 3) {
        return ((int (*)(int, int, int, int))(0xC09C2BC))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 4) {
        return ((int (*)(int, int, int, int))(0xC09C2BC))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 6) {
        return ((int (*)(int, int, int, int))(0xC09C2BC))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 9) {
        return ((int (*)(int, int, int, int))(0xC09C2BC))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 25) {
        return ((int (*)(int, int, int, int))(0xC09C2BC))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 27) {
        return ((int (*)(int, int, int, int))(0xC09C2BC))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 28) {
        return ((int (*)(int, int, int, int))(0xC09C2BC))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x21A) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x21E) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x21F) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x220) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x236) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x237) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x238) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x239) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x23A) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x23B) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x242) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x243) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x244) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x248) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x249) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x24A) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x24E) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150D89, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x24F) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150D89, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x250) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DAA, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x251) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DAA, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x252) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DAA, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x253) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DAA, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x254) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DAA, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x255) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DAA, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x256) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DAA, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x257) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DAA, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x258) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DAA, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x259) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DAA, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x25A) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x25B) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x25C) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x25D) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x25E) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x25F) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x264) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x265) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x266) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x267) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x268) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x269) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x26A) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x26B) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x26D) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x26E) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x271) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x272) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x276) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x277) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x278) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x279) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x27A) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C2) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C3) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C4) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C5) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C6) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C7) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C8) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C9) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2CA) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2CB) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2CC) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2CF) {
        return ((int (*)(int, int, int, int))(0xC09C222))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2D0) {
        return ((int (*)(int, int, int, int))(0xC09C222))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2D1) {
        return ((int (*)(int, int, int, int))(0xC09C228))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2D3) {
        return ((int (*)(int, int, int, int))(0xC09C246))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2D4) {
        return ((int (*)(int, int, int, int))(0xC09C24C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2D7) {
        return ((int (*)(int, int, int, int))(0xC09C252))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2D8) {
        return ((int (*)(int, int, int, int))(0xC09C268))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2D9) {
        return ((int (*)(int, int, int, int))(0xC09C26E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2DA) {
        return ((int (*)(int, int, int, int))(0xC09C292))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2DB) {
        return ((int (*)(int, int, int, int))(0xC09C2B0))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2DC) {
        return ((int (*)(int, int, int, int))(0xC09C2B0))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2DD) {
        return ((int (*)(int, int, int, int))(0xC09C2B0))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2DE) {
        return ((int (*)(int, int, int, int))(0xC09C2B0))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2DF) {
        return ((int (*)(int, int, int, int))(0xC09C2B0))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2E0) {
        return ((int (*)(int, int, int, int))(0xC09C2B0))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2E5) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2E6) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2E7) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2E8) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2E9) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2EA) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2EB) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2EC) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2ED) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2EE) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2EF) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F0) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F1) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F2) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F3) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F4) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F5) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F6) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F7) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F8) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F9) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2FA) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2FB) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2FC) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) != 0x2FD) {
        if (((t1 << 8) + (unsigned char)t0) != 0x2FE) {
            if (((t1 << 8) + (unsigned char)t0) != 0x2FF) {
                return ((t1 << 8) + (unsigned char)t0);
            }
            return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
}

int FUN_0c09c2ce(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)0xC7E40CD) != 2) {
        if ((*(signed char *)0xC7E40CD) != 3) {
            if ((*(signed char *)0xC7EB39D) != 2) {
                if ((*(signed char *)0xC7EB39D) == 3) {
                    return 0x1;
                }
                return ((int (*)(int, int, int, int))(0xC09C358))(0xC7E40C4, 0x72D0, a6, a7);
            }
            return 0x1;
        }
        return 0x1;
    }
    return 0x1;
}

int FUN_0c09c35e(void)
{
    int stk[3];
    register float u0;
    register int t1;
    register int t5;
    register int t13;
    register int t20;

    u0 = *(float *)0xC09C484;
    t1 = *(signed char *)0xC7EB27E;
    if ((t1 == 36) || (t1 == 39)) {
        *(float *)0xC7E40E8 = ((*(float *)0xC7E40E8) + u0);
    }
    t5 = *(signed char *)0xC7F254E;
    if ((t5 == 36) || (t5 == 39)) {
        *(float *)0xC7EB3B8 = ((*(float *)0xC7EB3B8) + u0);
    }
    if ((*(signed char *)0xC7EB27E) == 34) {
        obj_clear_slot_contact((*(signed char *)0xC7E40C7));
        obj_collect_slot_contacts(0xC7E40C4);
        t13 = ((int (*)(int, int, int, int, int, int, int, int, int))(pl_change_state))(0xC7E40C4, 0x22, 0x1, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
    }
    t20 = *(signed char *)0xC7F254E;
    if (t20 == 34) {
        obj_clear_slot_contact((*(signed char *)0xC7EB397));
        obj_collect_slot_contacts(0xC7EB394);
        return ((int (*)(int, int, int))(pl_change_state))(0xC7EB394, 0x22, 0x1);
    }
    return t20;
}

int FUN_0c09c3f8(int a4, int a5)
{
    int t3;

    if (((((((((struct o71FC_int *)(a4))->v)) | ((((struct o71F8_int *)(a4))->v))) | ((((struct o2E4_int *)(a4))->v))) & 0x4) == 0) && (t3 = (((struct o2E4_int *)(a4))->v), ((a5 & t3) & 0x600) != 0)) {
        return 0x1;
    }
    return 0x0;
}

int pl_spawn_hit_effect_with_se(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9)
{
    if ((*(signed char *)((a4 + 0x27C))) == 2) {
        FUN_0c0421ee((a4 + 0x20), 0x1);
    } else {
        fx_spawn_eight_point_effect((*(signed char *)((a4 + 0x3))), (a4 + 0x20), a6, a7, f4, f5, f6, f7, f8, f9);
    }
    return FUN_0c0a3dcc((*(signed char *)((a4 + 0x3))), (*(signed char *)((a4 + 0x27C))));
}

int FUN_0c09c45a(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((a4 + 0x27C))) == 2) {
        FUN_0c0421ee((a4 + 0x20), 0x2);
        return ((int (*)(void))(0xC09C4B0))();
    }
    return ((int (*)(int, int, int, int))(0xC09C4A4))(a4, a5, a6, a7);
}

int pl_start_hit_freeze(int a4)
{
    (((struct o7232_uchar *)(a4))->v) = 0x1;
    (((struct o7232_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    *(unsigned short *)0xC7F3194 = 0x28;
    FUN_0c05fbee(0x28);
    fx_spawn_04aa24(a4, ((((*(signed char *)((a4 + 0x71BC))) == 2)) ? 1 : 0));
    snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x29);
    (((struct o71F4_ushort *)(a4))->v) = 0x0;
    return pl_vib_start_preset(a4, 0xB);
}

int pl_reset_combo_counter(int a4)
{
    if ((int)(*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x720E))) > (int)0xA) {
        (((struct o720E_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0xA;
    }
    (((struct o720E_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x0;
    return 0x720E;
}

int FUN_0c09c51e(int a4)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x71BA))) == 11) {
        (((struct o7225_uchar *)(a4))->v) = 0x0;
        return 0x7225;
    }
    if (((((struct o7294_int *)(a4))->v)) != 0) {
        t0 = (((((struct o72A8_int *)(a4))->v)) - (int)(((float)(*(signed char *)((a4 + 0x7212))) * 737280.0f) / 360.0f));
    } else {
        t0 = ((*(int *)((a4 + 0x30))) - (int)(((float)(*(signed char *)((a4 + 0x7212))) * 737280.0f) / 360.0f));
    }
    (((struct o72A8_uint *)(a4))->v) = t0;
    (((struct o72A8_uint *)(a4))->v) = (((((struct o72A8_int *)(a4))->v)) & 0xFFFF);
    t0 = 0x0;
    for (;;) {
        if (!((*(float *)(((t0 << 2) + (*(int *)((0xC338C34 + ((*(signed char *)((a4 + 0x7213))) << 2))))))) > 0.0f)) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    *(volatile signed char *)((a4 + 0x10B));
    (((struct o7225_uchar *)(a4))->v) = 0x1;
    (((struct o7226_uchar *)(a4))->v) = 0x40;
    (((struct o7228_ushort *)(a4))->v) = 0x5;
    return 0x7228;
}

int FUN_0c09c5f4(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = 0x0;
    if ((*(signed char *)((a4 + 0x7225))) != 0) {
        if ((*(float *)(((((*(signed char *)(((0x7225 + a4) + 0x0))) - 1) << 2) + (*(int *)((0xC338C34 + ((*(signed char *)((a4 + 0x7213))) << 2))))))) > 0.0f) {
            u0 = (((struct o20_float *)(a4))->v);
            u1 = *(float *)0xC09C6E0;
            u2 = ((math_cos_angle16(((-((((struct o72A8_int *)(a4))->v))) + 0x14000))) * (*(float *)((((*(signed char *)(((0x7225 + a4) + 0x0))) << 2) + (*(int *)(((((*(signed char *)(((0x7213 + a4) + 0x0))) << 2) + 0xC338C34) + 0x0)))))));
            u3 = u0;
            u3 = u3 + u1 * u2;
            (((struct o20_float *)(a4))->v) = u3;
            u0 = (((struct o28_float *)(a4))->v);
            u1 = *(float *)0xC09C6E0;
            u2 = ((math_sin_angle16(((-((((struct o72A8_int *)(a4))->v))) + 0x14000))) * (*(float *)((((*(signed char *)(((0x7225 + a4) + 0x0))) << 2) + (*(int *)(((0xC338C34 + ((*(signed char *)(((0x7213 + a4) + 0x0))) << 2)) + 0x0)))))));
            u3 = u0;
            u3 = u3 + u1 * u2;
            (((struct o28_float *)(a4))->v) = u3;
            (((struct o7225_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x7225))) + 0x1);
            t0 = 0x1;
        } else {
            (((struct o7225_uchar *)(a4))->v) = 0x0;
            pl_reset_combo_counter(a4);
            t0 = 0x0;
        }
    }
    return t0;
}

/* Hand-written: classifies the object a player points at: 0 none, 1 for kind 1, 2..19 for kind 6 by its sub-kind. */
int pl_get_held_item_class(char *player)
{
    char *target;
    unsigned int sub_kind;

    target = *(char **)(player + 0x71CC);
    if (target == 0) {
        return 0;
    }
    if (target[4] == 1) {
        return 1;
    }
    if (target[4] != 6) {
        return 0;
    }
    sub_kind = *(signed char *)(target + 0x30C);
    if (sub_kind >= 18) {
        return 0;
    }
    return sub_kind + 2;
}

int FUN_0c09c782(int a4)
{
    int t15;
    register int t16;
    int t27;
    register int t28;

    if (((((struct o71CC_int *)(a4))->v)) != 0) {
        if (((*(signed char *)((((((struct o71CC_int *)(a4))->v)) + 0x4))) == 1) && (t15 = (((struct o71CC_int *)(a4))->v), t16 = *(signed char *)((0x30D + t15)), t16 == 5)) {
            return 0x0;
        }
        if (((*(signed char *)((((((struct o71CC_int *)(a4))->v)) + 0x4))) == 6) && (t27 = (((struct o71CC_int *)(a4))->v), t28 = (((struct oF2_short *)(t27))->v), t28 != 0)) {
            return 0x0;
        }
        return 0x1;
    }
    return 0x1;
}

int pl_mash_reduce_counter(int a4, int a5)
{
    int t0;
    int t1;
    int t2;

    if (((((((struct o2E4_int *)(a4))->v)) & 0x6C4) != 0) && (t0 = *(signed char *)((a5 + 0x0)), t0 != 0)) {
        *(unsigned char *)((a5 + 0x0)) = ((*(signed char *)((a5 + 0x0))) - 1);
    }
    if (((((((struct o2E4_int *)(a4))->v)) & 48) != 0) && (t1 = *(signed char *)((a5 + 0x0)), (int)(unsigned char)t1 > (int)0x1)) {
        *(unsigned char *)((a5 + 0x0)) = ((*(signed char *)((a5 + 0x0))) - 2);
    }
    t0 = 0x2DC;
    if ((((((struct o2DC_int *)(a4))->v)) & 0xF0) == 0) {
        if (((((((struct o2E8_int *)(a4))->v)) & 0xF0) != 0) && (t2 = *(signed char *)((a5 + 0x0)), t2 != 0)) {
            *(unsigned char *)((a5 + 0x0)) = ((*(signed char *)((a5 + 0x0))) - 1);
        }
        t0 = 0x2E8;
    }
    return t0;
}

int FUN_0c09c80e(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x4));
    if (!((*(float *)((((((t0 << 1) + t0) << 2) + 0xC339BC8) + 0x0))) > (*(float *)0xC494D1C))) {
        (((struct o72AD_uchar *)(a4))->v) = 0x0;
    } else {
        (((struct o72AD_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x4));
    if (((((struct o4_float *)(((((t0 << 1) + t0) << 2) + 0xC339BC8)))->v)) > (*(float *)0xC494D1C)) {
        (((struct o72AE_uchar *)(a4))->v) = 0x1;
    } else {
        (((struct o72AE_uchar *)(a4))->v) = 0x0;
    }
    *(volatile signed char *)((a4 + 0x4));
    *(volatile float *)0xC494D1C;
    return ((int (*)(int, int, int, int))(0xC09C878))(a4, 0x0, 0x1, 0xC494D1C);
}

int pl_get_hit_count_of_opponent(int a4)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((int)(signed char)t0 >= (int)(*(signed char *)((a4 + 0x144)))) {
            return 0x0;
        }
        if ((*(int *)(((((signed char)t0 << 2) + (0x11C + a4)) + 0x0))) == ((unsigned short)((unsigned short)((-(*(signed char *)((a4 + 0x3)))) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4)) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return (*(signed char *)((a4 + 0x108)));
}

int pl_find_opponent_in_hit_list(int a4)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((int)(signed char)t0 >= (int)(*(signed char *)((a4 + 0x144)))) {
            return 0x0;
        }
        if ((*(int *)((((0x11C + a4) + ((signed char)t0 << 2)) + 0x0))) == ((unsigned short)((unsigned short)((-(*(signed char *)((a4 + 0x3)))) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4)) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return (*(int *)((((signed char)t0 << 2) + (0x11C + a4))));
}

int pl_find_opponent_in_target_list(int a4)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((int)(signed char)t0 >= (int)(*(signed char *)((a4 + 0x2A8)))) {
            return 0x0;
        }
        if ((*(int *)((((0x294 + a4) + ((signed char)t0 << 2)) + 0x0))) == ((unsigned short)((unsigned short)((-(*(signed char *)((a4 + 0x3)))) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4)) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return (*(int *)((((signed char)t0 << 2) + (0x294 + a4))));
}
