/* OPTION group screen 4 (0c01b66c-0c01b9f4) */

/* named globals (symbols.txt) */
extern char g_res_art_model[];
int memset(int, int, int);
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int opt_page_leave_reset(void);
int game_reset_objects(void);
int FUN_0c0593e0(int);
int obj_tick_class(int);
int FUN_0c05f2d4(int, int);
int res_switch_scene(int);
int FUN_0c0a2f66(int);
int bgm_stop_streams(void);
int snd_play_side_se(int, int);
int FUN_0c0d71f4(int);
int cam_request_mode(int, int, int);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(void);
struct o5C_float { char p[0x5C]; float v; };
struct oEC_int { char p[0xEC]; int v; };
struct oEC_uint { char p[0xEC]; unsigned int v; };
float math_sin_angle16(int);
struct o0_short { short v; };
struct o14_short { char p[0x14]; short v; };
struct o16_short { char p[0x16]; short v; };
struct o18_short { char p[0x18]; short v; };
struct o2_short { char p[0x2]; short v; };
struct o4_short { char p[0x4]; short v; };

void FUN_0c01b788(int);
void FUN_0c01b898(void);
int FUN_0c01b936(int a4, int a5);
int pad_get_start_mask(void);

int opt_page4_init(void)
{
    return memset(0xC362358, 0x0, 0x2);
}

int opt_page4_main(int a4)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t5;
    register int t31;
    register int t35;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = *(signed char *)0xC362358;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t1 = pad_get_start_mask();
        if (t1 != 0) {
            FUN_0c0d71f4(t1);
            snd_play_side_se(0x0, 0x4D);
            (((struct o19_uchar *)0xC7F4726)->v) = ((*(signed char *)(((int)stk + 0))) + 0x3);
            (((struct o0_uchar *)0xC7F4726)->v) = 0x3;
        } else {
            t5 = FUN_0c01b936(0x2, 0x2);
            if ((signed char)t5 != 0) {
                snd_play_side_se(0x0, 0x4D);
                opt_page_leave_reset();
            }
        }
    } else {
        FUN_0c05f2d4(0x3, 0x0);
        (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
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
        res_switch_scene(0xE);
        FUN_0c01b788((*(signed char *)(((int)stk + 0))));
        FUN_0c01b898();
        *(unsigned char *)0xC362358 = ((*(signed char *)0xC362358) + 0x1);
        t31 = pad_get_start_mask();
        if (t31 != 0) {
            FUN_0c0d71f4(t31);
            snd_play_side_se(0x0, 0x4D);
            (((struct o19_uchar *)0xC7F4726)->v) = ((*(signed char *)(((int)stk + 0))) + 0x3);
            (((struct o0_uchar *)0xC7F4726)->v) = 0x3;
        } else {
            t35 = FUN_0c01b936(0x2, 0x2);
            if ((signed char)t35 != 0) {
                snd_play_side_se(0x0, 0x4D);
                opt_page_leave_reset();
            }
        }
    }
    obj_tick_class(0x5);
    return FUN_0c0593e0(0x5);
}

void FUN_0c01b744(void)
{
    
}

void FUN_0c01b788(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x1, 0x0);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC01B744;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x0;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664AC0, (*(signed char *)(((((*(signed char *)((t0 + 0x4))) << 2) << 2) + 0xC11C24C))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E0_int *)(t0))->v)) + 0x4)) = *(struct mv3 *)(((((*(signed char *)((t0 + 0x4))) << 2) << 2) + 0xC11C240)); }
    }
}

int FUN_0c01b82e(int a4)
{
    register float u2;

    u2 = 0.599999964f;
    u2 = u2 + 0.399999976f * (math_sin_angle16(((((struct oEC_int *)(a4))->v))));
    (((struct o5C_float *)(a4))->v) = u2;
    (((struct oEC_uint *)(a4))->v) = (unsigned short)(((((struct oEC_int *)(a4))->v)) + 0x444);
    return 0xC01B894;
}

void FUN_0c01b898(void)
{
    register int t0;

    t0 = obj_create(0x5, 0x1, 0x1, 0x0);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC01B82E;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x0;
        *(unsigned char *)((t0 + 0x4)) = 0x0;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x40F;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664AC0, (*(signed char *)(((((*(signed char *)((t0 + 0x4))) << 2) << 2) + 0xC11C26C))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E0_int *)(t0))->v)) + 0x4)) = *(struct mv3 *)(((((*(signed char *)((t0 + 0x4))) << 2) << 2) + 0xC11C260)); }
    }
}

int FUN_0c01b936(int a4, int a5)
{
    if ((signed char)a4 != 0) {
        if ((signed char)a4 != 1) {
            if ((signed char)a4 != 2) {
                return 0x0;
            }
            if (((unsigned short)((((struct o4_short *)0xC361BF8)->v)) & a5) == 0) {
                if (((unsigned short)((((struct o18_short *)0xC361BF8)->v)) & a5) != 0) {
                    return 0x1;
                }
                return 0x0;
            }
            return 0x1;
        }
        if (((unsigned short)((((struct o2_short *)0xC361BF8)->v)) & a5) == 0) {
            if (((unsigned short)((((struct o16_short *)0xC361BF8)->v)) & a5) != 0) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x1;
    }
    if (((unsigned short)((((struct o0_short *)0xC361BF8)->v)) & a5) == 0) {
        if (((unsigned short)((((struct o14_short *)0xC361BF8)->v)) & a5) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int pad_get_start_mask(void)
{
    if (((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x8) != 0) {
        if (((unsigned short)((((struct o14_short *)0xC361BFC)->v)) & 0x8) != 0) {
            return 0x3;
        }
        if (((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x8) != 0) {
            return 0x1;
        }
    }
    if (((unsigned short)((((struct o14_short *)0xC361BFC)->v)) & 0x8) != 0) {
        return 0x2;
    }
    return 0x0;
}
