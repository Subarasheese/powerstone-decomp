/* player state enter handlers (table 0xC339490) and state-specific helpers; same module as the following rows up to 0c0a18f8 (0c09f8e0-0c09fe58) */

/* named globals (symbols.txt) */
extern char g_pl_char_param_tbl[];
struct o2FC_short { char p[0x2FC]; short v; };
struct o2FE_short { char p[0x2FE]; short v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o7254_float { char p[0x7254]; float v; };
float math_cos_angle16(int);
float math_sin_angle16(int);
struct o0_float { float v; };
struct o24_float { char p[0x24]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float FUN_0c02649a(int, int);
int pl_start_motion(int, int, int);
int FUN_0c0a3cd6(int);
int pl_get_held_item_class(int, int, int);
int FUN_0c0555c4(void);

float FUN_0c09f8e0(int a4, int a5, float f4, float f5)
{
    register float u0;
    register float u1;
    register float u2;

    (((struct o7254_float *)(a4))->v) = ((((struct o38_float *)(((((short)(*(signed char *)((a4 + 0x4))) * (short)0x98) + ((int)g_pl_char_param_tbl)) + (unsigned char)((unsigned short)(*(signed char *)(((0x71F1 + a4) + 0x0))) * (unsigned short)0x4C))))->v));
    if (!(80.0f > (*(float *)0xC494D1C))) {
        if (((((struct o2FC_short *)(a4))->v)) != 0) {
            u0 = (((struct o7254_float *)(a4))->v);
            u1 = (((float)(unsigned short)((((struct o2FE_short *)(a4))->v)) / 128.0f) * u0);
            u2 = (u1 * 0.599999964f);
            u2 = u2 + 0.399999976f * u0;
            (((struct o7254_float *)(a4))->v) = u2;
        }
        if (((((struct o7254_float *)(a4))->v)) > ((((struct o3C_float *)(((((short)(*(signed char *)((a4 + 0x4))) * (short)0x98) + ((int)g_pl_char_param_tbl)) + (unsigned char)((unsigned short)(*(signed char *)(((0x71F1 + a4) + 0x0))) * (unsigned short)0x4C))))->v))) {
            (((struct o7254_float *)(a4))->v) = ((((struct o3C_float *)(((((int)g_pl_char_param_tbl) + ((short)(*(signed char *)((a4 + 0x4))) * (short)0x98)) + (unsigned char)((unsigned short)(*(signed char *)((a4 + 0x71F1))) * (unsigned short)0x4C))))->v));
        }
    }
    (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o7254_float *)(a4))->v)));
    u0 = math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
    u1 = (((struct o7254_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = (u0 * u1);
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    return (u0 * u1);
}

float pl_enter_state_30(int a4)
{
    register float t11;

    (((struct o71BA_uchar *)(a4))->v) = 0x1E;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC09FB08)->v))));
    (((struct o40_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC09FB08)->v))));
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = ((((struct o8_float *)0xC09FB08)->v));
    (((struct o48_float *)(a4))->v) = ((((struct oC_float *)0xC09FB08)->v));
    FUN_0c0a3cd6((*(signed char *)((a4 + 0x3))));
    pl_start_motion(a4, 0x2, 0xD2);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t11 = FUN_0c02649a(a4, 0x0);
    (((struct o24_float *)(a4))->v) = t11;
    return t11;
}

int FUN_0c09fa84(int a4, int a5, int a6)
{
    register int t0;
    register int t2;
    register int t3;

    t0 = pl_get_held_item_class(a4, a5, a6);
    if (((signed char)t0 != 5) && (((signed char)t0 != 6) && (((signed char)t0 != 7) && ((signed char)t0 != 8)))) {
        if ((signed char)t0 == 13) {
            pl_start_motion(a4, 0x2, 0x3A);
        } else {
            t2 = 0x0;
            t3 = 0x19;
            if ((signed char)t0 == 14) {
                t2 = 0x2;
                t3 = 0x48;
            }
            pl_start_motion(a4, t2, t3);
        }
    } else {
        pl_start_motion(a4, 0x2, 0xCB);
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    return 0x71A8;
}

int FUN_0c09fdf6(int a4)
{
    int t0;
    int t1;

    if (((*(signed char *)((a4 + 0x71ED))) == 0) && (t0 = *(signed char *)((a4 + 0x7236)), t0 == 0)) {
        t0 = FUN_0c0555c4();
        if ((t0 != 0) && (t1 = *(signed char *)((a4 + 0x7204)), t1 == 2)) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}
