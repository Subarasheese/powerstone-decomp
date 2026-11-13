/* VMU save/load menu UI (handlers over the vmu_step_* state machines) (0c01e798-0c020258) */

/* named globals (symbols.txt) */
extern char g_res_system_font[];
int vmu_menu_update_objs(void);
int vmu_menu_spawn_message(int arg);
signed char vmu_menu_poll_yes_no(signed char *sm);
int FUN_0c01eb32(signed char *sm);
int FUN_0c0d7566(signed char *sm);
extern int vmu_menu_update_objs(void);
extern int vmu_menu_spawn_message(int);
extern void FUN_0c01f9a0(int, int);
extern char vmu_menu_poll_confirm_cancel(int, int);
int vmu_menu_update_objs(void);
int vmu_menu_spawn_message(int a);
signed char vmu_menu_poll_yes_no(signed char *obj);
struct o0_uchar { unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
extern int vmu_step_save();
int vmu_menu_spawn_message(int);
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
float math_sin_angle16(int);
int _quick_odd_mvn(int);
struct o300_int { char p[0x300]; int v; };
struct o8_float { char p[0x8]; float v; };
int obj_destroy(int);

int vmu_menu_spawn_choice_cursor(int a4);

int FUN_0c01e970(void)
{
    signed char *sm;
    signed char result;

    sm = (signed char *)0xC362A50;
    switch (*sm) {
    case 0:
        *sm = *sm + 1;
        sm[1] = 0;
        *(short *)(sm + 10) = 0;
        *(short *)(sm + 8) = 1;
        sm[47] = 99;
        sm[48] = 0;
        /* fall through */
    case 1:
        *sm = *sm + 1;
        vmu_menu_update_objs();
        vmu_menu_spawn_message(13);
        vmu_menu_spawn_choice_cursor(13);
        /* fall through */
    case 2:
        result = vmu_menu_poll_yes_no(sm);
        if (result == 0) {
            *sm = *sm + 1;
            sm[3] = 0;
            sm[2] = 0;
        } else if (result == 1) {
            *sm = 99;
        }
        return result;
    case 3:
        return FUN_0c01eb32(sm);
    default:
        return FUN_0c0d7566(sm);
    }
}

void FUN_0c01f00a(char *obj)
{
    char *rec;

    if (obj[3] == 0) {
        obj[3] = obj[3] + 1;
        vmu_menu_update_objs();
        vmu_menu_spawn_message(2);
        FUN_0c01f9a0(1, 4);
        FUN_0c01f9a0(2, 0x80);
    } else if (obj[3] != 1) {
        return;
    }
    if (vmu_menu_poll_confirm_cancel(0x3060E, 0) != 0) {
        vmu_menu_update_objs();
        rec = (char *)0x0C362A50;
        rec[0] = rec[48];
    }
}

void vmu_menu_step_choose_yes_no(signed char *obj)
{
    signed char result;
    signed char *flags;

    switch (obj[4]) {
    case 0:
        obj[4] = obj[4] + 1;
        vmu_menu_update_objs();
        vmu_menu_spawn_message(9);
        *(short *)(obj + 8) = 1;
        vmu_menu_spawn_choice_cursor(9);
        /* fall through */
    case 1:
        result = vmu_menu_poll_yes_no(obj);
        if (result == 0) {
            flags = (signed char *)0xC362A50;
            flags[49] = 6;
            flags[4] = 0;
        } else if (result == 1) {
            obj[2] = 0;
        }
        break;
    }
}

int vmu_menu_state_save(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x4));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = ((int (*)(int, int, int))(vmu_step_save))((*(int *)((a4 + 0x20))), a5, a6);
            t2 = t0;
            if (t0 != -1) {
                if (t0 == 0) {
                    (((struct o2D_uchar *)0xC362A54)->v) = 0x7;
                } else {
                    (((struct o2D_uchar *)0xC362A54)->v) = 0x8;
                }
                (((struct o0_uchar *)0xC362A54)->v) = 0x0;
                t2 = 0x0;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
        vmu_menu_update_objs();
        vmu_menu_spawn_message(0xA);
        (((struct o32_uchar *)(a4))->v) = 0x3C;
        t1 = ((int (*)(int))(vmu_step_save))((*(int *)((a4 + 0x20))));
        t2 = t1;
        if (t1 != -1) {
            if (t1 == 0) {
                (((struct o2D_uchar *)0xC362A54)->v) = 0x7;
            } else {
                (((struct o2D_uchar *)0xC362A54)->v) = 0x8;
            }
            (((struct o0_uchar *)0xC362A54)->v) = 0x0;
            t2 = 0x0;
        }
        t0 = t2;
    }
    return t0;
}

int vmu_menu_spawn_choice_cursor(int a4)
{
    int stk[1];
    register int t0;
    register int t20;
    register float u13;
    register int t14;
    register float u19;

    *(unsigned char *)(((int)stk + 0)) = a4;
    (((struct o6_uchar *)0xC362A78)->v) = 0x0;
    t0 = obj_create(0x5, 0x1, 0x1, 0x0);
    t20 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC01F574;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned char *)((t0 + 0xF)) = (*(signed char *)0xC362A58);
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(((((*(signed char *)(((int)stk + 0))) << 2) << 2) + 0xC11C644)); }
        (((struct o24_float *)(t0))->v) = ((((struct o0_float *)0xC362A78)->v));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x40F;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664B08, 0xF);
        u13 = ((((struct o0_float *)0xC01F794)->v));
        u13 = u13 + ((((struct o4_float *)0xC01F794)->v)) * (float)(*(signed char *)((t0 + 0xF)));
        (((struct o4_float *)(((((struct o2E0_int *)(t0))->v))))->v) = u13;
        t14 = (((struct o2E0_int *)(t0))->v);
        u19 = ((((struct oC_float *)0xC01F794)->v));
        u19 = u19 + ((((struct o10_float *)0xC01F794)->v)) * (math_sin_angle16(((((struct oEC_short *)(t0))->v))));
        (((struct o40_float *)(t14))->v) = u19;
        t20 = 0xC01F7A4;
    }
    return t20;
}

int FUN_0c01f6fc(int a4)
{
    int t1;
    register int t4;
    register float u6;
    register int t7;
    register int t22;
    register int t27;
    register float u29;
    register int t39;
    register float u42;
    register int t2;
    register int t3;
    int t24;
    register int t25;

    *(volatile signed char *)((a4 + 0x4));
    t1 = *(int *)0xC362A5C;
    t4 = 0x0;
    for (;;) {
        u6 = 0.0f;
        u6 = u6 + 120.0f * (float)(t4 & 0x1);
        t7 = *(int *)((((0x2E0 + a4) + (t4 << 2)) + 0x0));
        (((struct o4_float *)(t7))->v) = u6;
        (((struct o8_float *)(t7))->v) = (0.0f - (((float)(t4 >> 1) * 30.0f)));
        if ((((int)0x1 << (int)t4) & t1) != 0) {
            t2 = 0x2E0;
            t2 = (t2 + a4);
            (((struct o40_float *)((*(int *)((((t4 << 2) + t2) + 0x0)))))->v) = 1.0f;
        } else {
            t3 = 0x2E0;
            t3 = (t3 + a4);
            (((struct o40_float *)((*(int *)((((t4 << 2) + t3) + 0x0)))))->v) = 0.5f;
        }
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0x8) {
            break;
        }
    }
    t22 = *(signed char *)0xC362A7C;
    if (((*(signed char *)((a4 + 0xE))) == (signed char)t22) && (t24 = *(signed char *)((a4 + 0xF)), t25 = *(signed char *)0xC362A7D, t24 == t25)) {
    } else {
        *(unsigned char *)((a4 + 0xE)) = t22;
        *(unsigned char *)((a4 + 0xF)) = (*(signed char *)0xC362A7D);
        t27 = (((struct o300_int *)(a4))->v);
        u29 = 0.0f;
        u29 = u29 + 120.0f * (float)(*(signed char *)((a4 + 0xF)));
        (((struct o4_float *)(t27))->v) = u29;
        (((struct o8_float *)(t27))->v) = (((-((float)(*(signed char *)((a4 + 0xE))) * 30.0f))) + 0.0f);
    }
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x5B0);
    t39 = (((struct o300_int *)(a4))->v);
    u42 = 0.75f;
    u42 = u42 + 0.25f * (math_sin_angle16(((((struct oEC_short *)(a4))->v))));
    (((struct o40_float *)(t39))->v) = u42;
    if ((*(signed char *)0xC362A7E) != 0) {
        return obj_destroy(a4);
    }
    return 0x2E;
}
