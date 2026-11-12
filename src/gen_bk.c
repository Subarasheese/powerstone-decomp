/* Straight-line functions with calls and guards (batch gen_bk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o10E8_int { char p[0x10E8]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6C_int { char p[0x6C]; int v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o721A_uchar { char p[0x721A]; unsigned char v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXSTM_OpenRange(int, int, int);
int FUN_0c0195a2(int);
extern int FUN_0c022a5a();
int FUN_0c022d50(int, int, int);
int FUN_0c046830(int, int, int, int, int, int, int, int);
int FUN_0c04cdf2(void);
int FUN_0c04dfde(int, int);
int FUN_0c0555dc(void);
int FUN_0c058f78(int);
int FUN_0c059330(int);
int FUN_0c07d926(int);
int FUN_0c07d980(int);
int FUN_0c07d9ac(int);
int FUN_0c07d9fc(int);
int FUN_0c07da48(int);
int FUN_0c07daa4(int);
int FUN_0c07db30(int);
int FUN_0c07dbc4(int);
int FUN_0c07dbf8(int, int, int, int);
int FUN_0c08deec(int, int);
int FUN_0c08eba8(int, int);
int FUN_0c09a7b2(int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09a91a(int);
int FUN_0c09c45a(int);
int FUN_0c09c7be(int, int);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09da1c(int);
int FUN_0c09e7b8(int);
int FUN_0c09ec30(int);
int FUN_0c0a2080(int);
int FUN_0c0a2db4(int, int, float);
int FUN_0c0a2e26(int, int, int, int);
int FUN_0c0a2f7a(void);
int FUN_0c0a5630(int);
int FUN_0c0a56d8(int, int, int, int);
int FUN_0c0a58f4(int);
int FUN_0c0cb252(int);
int FUN_0c0dc18e(int);
float FUN_0c0df340(float);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c0e5d22(int);
int FUN_0c0eb640(int, int);
int FUN_0c0f42ec(int, int);
int FUN_0c0f4968(int);
int FUN_0c0f4c2c(int, int, int, int);
int FUN_0c0f5898(int, int, int, int);
int FUN_0c0fc5da(int, int, int, int);
int FUN_0c0fe978(int, int);
int FUN_0c0feba6(int, int);
int FUN_0c0ff4b4(int);
int FUN_0c100260(void);
int FUN_0c105a14(int, int, int);
int FUN_0c108474(void);
int FUN_0c10848c(int, int);
extern int _builtin_tas(char *);
int gdFsClose(int);
int kdSetCallback(int, int, int);
int kdSetGetMediaInfoEx(int, int, int, int);
int mpdrv_dpf(int, int, int, int, int);
int mpdrv_set_allstatreq_ns(int);
int mpdrv_set_arctrl_ns(int, int);
int mpdrv_set_bread_ns(int, int, int, int, int);
int mpdrv_set_dkill_ns(int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_ft4ctrl_ns(int, int);
int mpdrv_set_getcond_ns(int, int);
int mpdrv_set_getlerr_ns(int, int, int, int, int);
int syCfgConvLang(int);
int syCfgGetDefaultLanguage(int, int);
int FUN_0c0377ac(int a4);
int FUN_0c06ede0(int a4);
int FUN_0c0cb344(int a4, int a5, int a6, int a7);
int FUN_0c0a0984(int a4, int a5);
int FUN_0c0f0ae0(void);
int FUN_0c0590d2(int a4);
int FUN_0c07db64(int a4, int a5, int a6, int a7);
int FUN_0c077960(int a4);
int FUN_0c08818c(int a4);
int FUN_0c0f49a6(int a4, int a5, int a6, int a7);
int kdSetBlockReadEx(int a4, int a5, int a6, int a7, int a8, int a9);
int kdSetGetLastErrorEx(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c0232ca(int a4, int a5, int a6, int a7);
int FUN_0c0844f2(int a4);
int syCfgGetLanguage(int a4, int a5, int a6);
int FUN_0c0f449e(int a4, int a5, int a6);
int FUN_0c1086cc(int a4, int a5, int a6, int a7);
int FUN_0c04179a(int a4);
int FUN_0c050fe0(int a4);
int FUN_0c06e1fa(int a4);
int FUN_0c09068a(int a4, int a5, int a6, int a7);
int FUN_0c09ecca(int a4, int a5);
int FUN_0c0a5ae6(int a4, int a5, int a6, int a7);
int FUN_0c0e1900(int a4);
int FUN_0c0e5cc6(int a4, int a5);
int kdSetDeviceRequestEx(int a4, int a5, int a6, int a7);
int kdSetAllStatusRequestEx(int a4, int a5, int a6, int a7);
int kdSetGetConditionEx(int a4, int a5, int a6, int a7);
int kdSetDeviceKillEx(int a4, int a5, int a6, int a7);
int kdSetARControlEx(int a4, int a5, int a6, int a7);
int kdSetFT4ControlEx(int a4, int a5, int a6, int a7);
int FUN_0c07dcb2(int a4, int a5, int a6, int a7);
int FUN_0c0a5086(void);
int FUN_0c0dd9f0(int a4, int a5);
int FUN_0c04ec92(int a4);
int FUN_0c0779c6(int a4);
int gdDcfTrans32_(int a4, int a5, int a6);
int FUN_0c0520d0(void);
int FUN_0c05103c(int a4);
int FUN_0c019488(int a4);
int FUN_0c04e580(int a4, int a5);
int FUN_0c04e4d8(int a4, int a5);
int FUN_0c04e0c2(void);
float FUN_0c04ec40(int a4);

int FUN_0c0377ac(int a4)
{
    int t0;
    register int t1;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if ((t0 != 2) && (t0 != 3)) {
                return t0;
            }
            return FUN_0c059330(a4);
        }
    } else {
        (((struct oEC_ushort *)(a4))->v) = 0x10;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.049999997f);
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.049999997f);
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.049999997f);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) == 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c06ede0(int a4)
{
    register int t18;
    register int t17;

    FUN_0c09d990(a4);
    FUN_0c09d9bc(a4);
    FUN_0c09d990((*(int *)((a4 + 0x1C))));
    FUN_0c09d9bc((*(int *)((a4 + 0x1C))));
    FUN_0c09a910(a4);
    FUN_0c09da1c(a4);
    FUN_0c09a91a((*(int *)((a4 + 0x1C))));
    FUN_0c09da1c((*(int *)((a4 + 0x1C))));
    (((struct o102_uchar *)(a4))->v) = 0xC;
    (((struct o102_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0xC;
    t18 = 0x71AA;
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71AA))) != 0) {
        FUN_0c08eba8(a4, 0x34);
        FUN_0c08deec(a4, 0x34);
        t17 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t17 + 0x1);
        t18 = (t17 + 0x1);
    }
    return t18;
}

int FUN_0c0cb344(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
    }
    *(unsigned int *)((a4 + 0x30)) = (*(int *)0xC7F2B0C);
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c059330(a4);
            }
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            return FUN_0c059330(a4);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t0 = FUN_0c0cb252(a4);
    if ((signed char)t0 == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    return ((int (*)(int, int, int, int))(0xC0CB2AA))(a4, a5, a6, a7);
}

int FUN_0c0a0984(int a4, int a5)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a5;
    (((struct o71BA_uchar *)(a4))->v) = 0x26;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    FUN_0c09a7b2(a4);
    (((struct o721A_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x721A))) + 0x1);
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    FUN_0c09a808(a4, 0x2, 0xCE);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    *(unsigned int *)((a4 + 0x30)) = ((((((*(signed char *)(((int)stk + 0))) - 4) << 8) << 2) << 2) << 2);
    (((struct oEC_ushort *)(a4))->v) = 0x8;
    return 0xEC;
}

int FUN_0c0f0ae0(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o4_int *)0xC346BD8)->v);
    if (t0 != 0) {
        t1 = (FUN_0c0ff4b4(t0));
    }
    t0 = (((struct o8_int *)0xC346BD8)->v);
    t2 = t1;
    if (t0 != 0) {
        t2 = (FUN_0c0ff4b4(t0));
    }
    (((struct o4_uint *)0xC346BD8)->v) = 0x0;
    (((struct o8_uint *)0xC346BD8)->v) = 0x0;
    t0 = t2;
    t1 = (((((struct o0_int *)0xC346BD8)->v)) + 0x1080);
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)((*(int *)((((((struct o0_int *)0xC346BD8)->v)) + 0x0))) + 0x1)) {
            break;
        }
        t0 = (gdFsClose(t1));
        t2 = (t2 + 0x1);
        t1 = (t1 + 0x54);
    }
    (((struct o0_uint *)0xC346BD8)->v) = 0x0;
    return t0;
}

int FUN_0c0590d2(int a4)
{
    register int t1;
    register int t4;
    register int t0;
    register int t2;
    register int t3;

    t1 = a4;
    t4 = 0x0;
    for (;;) {
        if ((short)t4 != a4) {
            t2 = (short)t4;
            t2 = (t2 << 2);
            t0 = t2;
            t1 = (*(int *)((0xC7E4070 + t0)));
            for (;;) {
                if (t1 == 0) {
                    break;
                }
                t3 = (*(int *)((t1 + 0x18)));
                t0 = (FUN_0c058f78(t1));
                t1 = t3;
            }
            t0 = t2;
            *(unsigned int *)((0xC7E4070 + t0)) = 0x0;
            *(unsigned int *)((0xC7E4098 + t0)) = 0x0;
        }
        t4 = (t4 + 0x1);
        if ((int)(short)t4 >= (int)0xA) {
            break;
        }
    }
    return t0;
}

int FUN_0c07db64(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0a2e26(a4, 0xF, 0x1, a7);
    }
    FUN_0c09a91a(a4);
    FUN_0c09da1c(a4);
    t0 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t1 = *(signed char *)((a4 + 0xC));
        *(unsigned char *)((a4 + 0xC)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int FUN_0c077960(int a4)
{
    register int t0;

    FUN_0c09a910(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t0 = FUN_0c09e7b8(a4);
        if ((signed char)t0 != 0) {
            FUN_0c0dc18e(0x1E);
            FUN_0c09a808(a4, 0x1, 0x37);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            FUN_0c09c45a(a4);
            t0 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
            return (t0 + 0x1);
        }
    }
    FUN_0c09d990(a4);
    return FUN_0c09d9bc(a4);
}

int FUN_0c08818c(int a4)
{
    register int t0;

    FUN_0c09a910(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t0 = FUN_0c09e7b8(a4);
        if ((signed char)t0 != 0) {
            FUN_0c0dc18e(0x1E);
            FUN_0c09a808(a4, 0x1, 0x38);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            FUN_0c09c45a(a4);
            t0 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
            return (t0 + 0x1);
        }
    }
    FUN_0c09d990(a4);
    return FUN_0c09d9bc(a4);
}

int FUN_0c0f49a6(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t8;

    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 24)) = a6;
    FUN_0c0f4c2c(a4, a5, a6, a7);
    ADXCRS_Lock();
    FUN_0c0f5898((*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 24))), ((int)stk + 12), (((int)stk + 12) + 0x4));
    t8 = ADXSTM_OpenRange((*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 16))), (*(int *)((a4 + 0x10))));
    *(unsigned int *)((a4 + 0x8)) = t8;
    if (t8 == 0) {
        ADXCRS_Unlock();
        *(int *)((int)stk + 8) = ((*(int *)(((int)stk + 24))));
        *(int *)((int)stk + 4) = ((*(int *)(((int)stk + 20))));
        *(int *)((int)stk + 0) = 0xC15A7D8;
        ADXERR_CallErrFunc(0xC15A7D8);
    } else {
        FUN_0c0f4968(a4);
    }
    return (ADXCRS_Unlock());
}

int kdSetBlockReadEx(int a4, int a5, int a6, int a7, int a8, int a9)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC15B054);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_bread_ns(a4, a5, a6, a7, a8);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a9, t2);
    }
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t2;
}

int kdSetGetLastErrorEx(int a4, int a5, int a6, int a7, int a8, int a9)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC15B054);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getlerr_ns(a4, a5, a6, a7, a8);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a9, t2);
    }
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t2;
}

int FUN_0c0232ca(int a4, int a5, int a6, int a7)
{
    int stk[14];
    register int t1;
    register int t3;

    t1 = ((int (*)(int, int, int, int))(FUN_0c022a5a))(a4, (*(short *)((a6 + 0x2))), (((int)stk + 0) + 0x1C), a7);
    t3 = ((int (*)(int, int, int))(FUN_0c022a5a))(a5, (*(short *)((a7 + 0x2))), ((int)stk + 0));
    FUN_0c022d50(a4, (((int)stk + 0) + 0x1C), (*(signed char *)((a6 + 0x0))));
    FUN_0c022d50(a4, (((int)stk + 0) + 0x28), (*(signed char *)((a6 + 0x0))));
    FUN_0c022d50(a5, ((int)stk + 0), (*(signed char *)((a7 + 0x0))));
    FUN_0c022d50(a5, (((int)stk + 0) + 0xC), (*(signed char *)((a7 + 0x0))));
    return 0x0;
}

int FUN_0c0844f2(int a4)
{
    register int t0;
    register int t1;

    FUN_0c09d990(a4);
    FUN_0c09d9bc(a4);
    t0 = FUN_0c09a910(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = -15.0f;
        (((struct o48_float *)(a4))->v) = -1.0f;
        FUN_0c09a808(a4, 0x1, 0x36);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int syCfgGetLanguage(int a4, int a5, int a6)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t3;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        t0 = *(int *)0xC346C14;
        if (t0 != 0) {
            t1 = FUN_0c105a14(0x0, t0, a6);
            if (t1 == -1) {
                return 0xFFFFFFFF;
            }
            t3 = *(signed char *)0x8C00007D;
            if ((signed char)t3 == -1) {
                syCfgGetDefaultLanguage(((int)stk + 0), t3);
                if ((*(int *)(((int)stk + 0))) == -1) {
                    *(unsigned int *)((a4 + 0x0)) = 0x1;
                } else {
                    *(unsigned int *)((a4 + 0x0)) = (syCfgConvLang((*(int *)(((int)stk + 0)))));
                }
            } else {
                *(unsigned int *)((a4 + 0x0)) = (signed char)t3;
            }
            return 0x0;
        }
        return 0xFFFFFFFF;
    }
    return 0xFFFFFFFF;
}

int FUN_0c0f449e(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = 0xFFFFFFFF;
    if ((*(int *)((((a4 * 0x1C) + 0xC7FF2C8) + 0x0))) == 0) {
        *(unsigned int *)((((a4 * 0x1C) + 0xC7FF2C8) + 0x0)) = 0x1;
        *(unsigned int *)((((a4 * 0x1C) + 0xC7FF2C8) + 0x4)) = 0x0;
        *(unsigned int *)((((a4 * 0x1C) + 0xC7FF2C8) + 0x8)) = a6;
        *(unsigned int *)((((a4 * 0x1C) + 0xC7FF2C8) + 0xC)) = 0x0;
        *(unsigned int *)((((a4 * 0x1C) + 0xC7FF2C8) + 0x10)) = a5;
        *(unsigned int *)((((a4 * 0x1C) + 0xC7FF2C8) + 0x14)) = 0x1;
        t1 = FUN_0c0f42ec(a4, (((a4 * 0x1C) + 0xC7FF2C8) + 0x18));
        t0 = t1;
        if ((int)t1 >= 0) {
            t1 = kdSetGetMediaInfoEx(a4, 0x100, 0x1, 0xC0F4430);
            t0 = 0x0;
            if ((int)t1 < 0) {
                *(unsigned int *)((((a4 * 0x1C) + 0xC7FF2C8) + 0x0)) = 0x0;
                t0 = 0xFFFFFFFF;
            }
        }
    }
    return t0;
}

int FUN_0c1086cc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = FUN_0c108474();
    t1 = 0x0;
    if (a5 == 0) {
    } else {
        if (a5 == 1) {
            t1 = *(int *)((a4 + 0xC));
            t3 = a6;
            if ((int)t1 < (int)a6) {
                t3 = t1;
            }
            t1 = t3;
        } else {
            if ((*(int *)((a4 + 0x1C))) != 0) {
                t3 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD, a6, a7);
            }
            t1 = 0x0;
        }
    }
    *(unsigned int *)((a7 + 0x0)) = t1;
    FUN_0c10848c(a4, t0);
    return (((t1 == a6)) ? 1 : 0);
}

int FUN_0c04179a(int a4)
{
    register int t0;

    t0 = FUN_0c0555dc();
    if (t0 == 1) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    if ((*(signed char *)((a4 + 0x8))) == 0) {
        t0 = (((struct oEE_short *)(a4))->v);
        (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 4.0f);
        if (!(((float)t0 / 4.0f) > 0.0f)) {
            (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
        return 0xEE;
    }
    return FUN_0c059330(a4);
}

int FUN_0c050fe0(int a4)
{
    register int t1;

    t1 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BA));
    if ((t1 != 27) && ((t1 != 24) && ((t1 != 15) && (t1 != 16)))) {
        *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
        t1 = FUN_0c04cdf2();
        (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    } else {
        (((struct o4_ushort *)0xC3673E8)->v) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c06e1fa(int a4)
{
    FUN_0c09a808(a4, 0x1, 0x1E);
    FUN_0c046830((*(signed char *)((a4 + 0x3))), 0x0, 0xE, 0x0, 0x30, 0x43, 0xC336E38, 0xC336E44);
    FUN_0c046830((*(signed char *)((a4 + 0x3))), 0x0, 0x11, 0x0, 0x30, 0x43, 0xC336E38, 0xC336E44);
    return FUN_0c0a2db4(a4, 0x28, (*(float *)0xC06E2B8));
}

int FUN_0c09068a(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0xB))) > 0) && (t0 = *(signed char *)((a4 + 0x10B)), t0 != 0)) {
        return 0x10B;
    }
    FUN_0c09c7be(a4, ((0x723E + a4) + 0x2));
    if ((*(signed char *)((a4 + 0x7240))) == 0) {
        (((struct o7228_ushort *)(a4))->v) = 0x0;
        return FUN_0c0a2080(a4);
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0905A8))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC090578))(a4, a5, a6, a7);
}

int FUN_0c09ecca(int a4, int a5)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a5;
    (((struct o71BA_uchar *)(a4))->v) = 0x0;
    FUN_0c09a7b2(a4);
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    if ((*(signed char *)(((int)stk + 0))) != 0) {
        (((struct o71BC_uchar *)(a4))->v) = 0x1;
        return FUN_0c09a808(a4, 0x0, 0x1);
    }
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    return FUN_0c09ec30(a4);
}

int FUN_0c0a5ae6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F2EE6;
    t1 = *(signed char *)0xC7F3071;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    (((struct o0_uchar *)0xC7F2EE5)->v) = 0x3;
                    (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
                    return 0x0;
                }
                FUN_0c0a58f4((t1 - 1));
                return ((int (*)(void))(0xC0A4FEA))();
            }
            FUN_0c0a56d8((t1 - 1), a5, a6, a7);
            t0 = *(signed char *)0xC7F2EE7;
            if ((int)(unsigned char)t0 > (int)0x1) {
                return ((int (*)(void))(0xC0A4FEA))();
            }
            return (unsigned char)t0;
        }
        FUN_0c0a5630((t1 - 1));
        return ((int (*)(void))(0xC0A4FEA))();
    }
    return ((int (*)(int, int, int, int))(0xC0A5612))((t1 - 1), a5, a6, a7);
}

int FUN_0c0e1900(int a4)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t6;

    t0 = (((struct o0_short *)0xC7FCCB4)->v);
    t1 = a4;
    if ((int)a4 <= 0) {
        t1 = 0x1;
    }
    t3 = (((struct o2_short *)0xC7FCCB4)->v);
    t4 = (t0 - t1);
    if ((int)t0 < (int)t1) {
        t4 = 0x0;
    }
    t6 = (((struct o4_int *)0xC7FCCB4)->v);
    (((struct o0_ushort *)0xC7FCCB4)->v) = t4;
    if ((int)t4 < (int)t3) {
        (((struct o8_uint *)0xC7FCCB4)->v) = (t6 + ((unsigned int)(t4 << 8) >> 2));
    }
    return ((((int)t0 >= (int)t1)) ? 1 : 0);
}

int FUN_0c0e5cc6(int a4, int a5)
{
    register int t5;
    register int t0;

    t5 = 0xFFFFFFFE;
    if (a4 != 0xA3) {
    } else {
        t0 = FUN_0c0e5d22((a4 + ((a5 & 0xF) << 16)));
        t5 = t0;
        if (t0 != 0) {
        } else {
            t5 = (FUN_0c0e5d22(((a4 + ((a5 & 0xF) << 16)) + 0x100)));
        }
    }
    return t5;
}

int kdSetDeviceRequestEx(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC15B054);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreq_ns(a4);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a5, t2);
    }
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t2;
}

int kdSetAllStatusRequestEx(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC15B054);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_allstatreq_ns(a4);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a5, t2);
    }
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t2;
}

int kdSetGetConditionEx(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC15B054);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getcond_ns(a4, a5);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a6, t2);
    }
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t2;
}

int kdSetDeviceKillEx(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC15B054);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dkill_ns(a4);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a5, t2);
    }
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t2;
}

int kdSetARControlEx(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC15B054);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_arctrl_ns(a4, a5);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a6, t2);
    }
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t2;
}

int kdSetFT4ControlEx(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC15B054);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_ft4ctrl_ns(a4, a5);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a6, t2);
    }
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t2;
}

int FUN_0c07dcb2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    if (t0 != 8) {
                                        if (t0 != 9) {
                                            return t0;
                                        }
                                        return FUN_0c07dbf8(a4, a5, a6, a7);
                                    }
                                    return FUN_0c07dbc4(a4);
                                }
                                return FUN_0c07db64(a4, a5, a6, a7);
                            }
                            return FUN_0c07db30(a4);
                        }
                        return FUN_0c07daa4(a4);
                    }
                    return FUN_0c07da48(a4);
                }
                return FUN_0c07d9fc(a4);
            }
            return FUN_0c07d9ac(a4);
        }
        return FUN_0c07d980(a4);
    }
    return FUN_0c07d926(a4);
}

int FUN_0c0a5086(void)
{
    register int t6;

    if ((unsigned char)(*(signed char *)0xC7F2EE6) == 0) {
        (((struct o1_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE6) + 0x1);
        FUN_0c0a2f7a();
    }
    t6 = *(signed char *)0xC7F3071;
    if ((unsigned char)t6 != 0) {
        if (((unsigned char)t6 != 1) && ((unsigned char)t6 != 2)) {
            if ((unsigned char)t6 != 3) {
                (((struct o0_uchar *)0xC7F2EE5)->v) = 0x2;
                (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
            } else {
                (((struct o0_uchar *)0xC7F2EE5)->v) = 0x1;
                (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
                (((struct o2_uchar *)0xC7F2EE5)->v) = 0x0;
            }
        } else {
            (((struct o0_uchar *)0xC7F2EE5)->v) = 0x2;
            (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
        }
    } else {
        (((struct o0_uchar *)0xC7F2EE5)->v) = 0x1;
        (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
        (((struct o2_uchar *)0xC7F2EE5)->v) = 0x0;
    }
    return 0x0;
}

int FUN_0c0dd9f0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = a4;
    if ((int)a4 >= 0) {
        t0 = (a4 + (*(int *)0xC7FD490));
    }
    t1 = *(int *)0xC7F87C8;
    t2 = 0x0;
    if ((*(int *)(((((t0 << 2) << 1) + t1) + 0x0))) != 0) {
        t3 = *(int *)(((((t0 << 2) << 1) + t1) + 0x4));
        t0 = *(int *)0xC7FC4F0;
        t1 = 0x0;
        if ((*(int *)((((t3 * 0x3C) + t0) + 0x28))) == 0) {
            t4 = FUN_0c0fc5da(((t3 * 0x3C) + t0), a5, 0x0, 0x0);
            t0 = 0x1;
            if (t4 != 0) {
                t0 = 0x0;
            }
            t1 = t0;
        }
        t2 = t1;
    }
    return t2;
}

int FUN_0c04ec92(int a4)
{
    register int t0;

    t0 = *(signed char *)0xC3673EE;
    if (((((struct o71C8_int *)(a4))->v)) != 0) {
        (((struct o26_ushort *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v) = (*(signed char *)((((((struct o71C8_int *)(a4))->v)) + 0x30C)));
    } else {
        (((struct o26_ushort *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v) = 0x0;
    }
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t0 = FUN_0c04cdf2();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t0;
}

int FUN_0c0779c6(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c09a910(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        (((struct o38_float *)(a4))->v) = ((FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * (*(float *)0xC077A94));
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = ((FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * (*(float *)0xC077A94));
        FUN_0c09a808(a4, 0x1, 0x38);
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int gdDcfTrans32_(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;

    *(unsigned int *)((((int)stk + 0) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = a6;
    t0 = FUN_0c0eb640(a4, ((int)stk + 0));
    if ((t0 == 0) && (a6 != 0)) {
        if ((((int)a5 >> 28) & 0xF) != 10) {
            if ((0x1F & a5) == 0) {
                FUN_0c0fe978(a5, a6);
            } else {
                FUN_0c0feba6(a5, a6);
            }
        }
    }
    return t0;
}

int FUN_0c0520d0(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(short *)((((((struct o0_int *)0xC3673E8)->v)) + 0x0));
    if ((unsigned char)(*(signed char *)0xC3673F1) == (unsigned short)t0) {
        t1 = *(signed char *)0xC3673F2;
        t2 = (unsigned char)t1;
        if ((unsigned char)t1 == (unsigned short)t0) {
            t0 = *(signed char *)0xC3673EE;
            t1 = (((struct o0_int *)0xC3673E8)->v);
            (((struct o0_uint *)0xC3673E8)->v) = (t1 + 0x2);
            *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)t0 * (short)0x254)) + 0x0)) = (t1 + 0x2);
            (((struct oB_uchar *)0xC3673E8)->v) = (*(signed char *)0xC3673F1);
            (((struct oC_uchar *)0xC3673E8)->v) = (*(signed char *)0xC3673F2);
            t2 = (FUN_0c04cdf2());
        }
        t0 = t2;
    }
    (((struct o4_ushort *)0xC3673E8)->v) = 0x0;
    return t0;
}

int FUN_0c05103c(int a4)
{
    register int t0;
    float u4;
    register int t7;

    t0 = *(signed char *)0xC3673EE;
    if (((int)(short)(int)(((((struct o24_float *)(a4))->v)) - ((((struct o24_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v))))->v))) <= 0) && (u4 = (((struct o3C_float *)(a4))->v), !(1.0f > u4))) {
        (((struct o4_ushort *)0xC3673E8)->v) = 0x0;
        t7 = 0x3C;
    } else {
        *(unsigned int *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
        FUN_0c04cdf2();
        (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
        t7 = 0x1;
    }
    return t7;
}

int FUN_0c019488(int a4)
{
    register int t11;

    if ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x0))) == 0) {
        (((struct o5C_float *)(a4))->v) = (*(float *)0xC0195C4);
    }
    if ((*(signed char *)((0xC3622EA + (((*(signed char *)((a4 + 0x3))) << 2) << 2)))) == 1) {
        (((struct o5C_float *)(a4))->v) = 1.0f;
    }
    t11 = FUN_0c0195a2(a4);
    if ((signed char)t11 != 0) {
        return FUN_0c059330(a4);
    }
    return (signed char)t11;
}

int FUN_0c04e580(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = *(short *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F66));
    t1 = (((struct o0_int *)0xC3673E8)->v);
    (((struct o0_uint *)0xC3673E8)->v) = (t1 + 0x2);
    if (t0 != (*(short *)((((t1 + 0x2) - 2) + 0x0)))) {
        FUN_0c04dfde(a4, a5);
    }
    *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
    t0 = FUN_0c04cdf2();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t0;
}

int FUN_0c04e4d8(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = *(short *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F66));
    t1 = (((struct o0_int *)0xC3673E8)->v);
    (((struct o0_uint *)0xC3673E8)->v) = (t1 + 0x2);
    if ((int)t0 <= (int)(*(short *)((((t1 + 0x2) - 2) + 0x0)))) {
        FUN_0c04dfde(a4, a5);
    }
    *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
    t0 = FUN_0c04cdf2();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t0;
}

int FUN_0c04e0c2(void)
{
    register int t3;

    (((struct o38_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = 0x0;
    *(unsigned short *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0x6)) = 0x1;
    *(unsigned short *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0x8)) = 0x1;
    t3 = FUN_0c04cdf2();
    *(unsigned short *)0xC3673EC = 0x0;
    return t3;
}

float FUN_0c04ec40(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(signed char *)0xC3673EE;
    u0 = (((struct o20_float *)(a4))->v);
    u1 = (((struct o28_float *)(a4))->v);
    u2 = (u1 * u1);
    u2 = u2 + u0 * u0;
    u0 = FUN_0c0df340(u2);
    *(unsigned short *)(((0xC366F66 + (short)((short)(unsigned char)t0 * (short)0x254)) + 0x0)) = (int)u0;
    return u0;
}
