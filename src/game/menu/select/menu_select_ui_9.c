/* UI task objects (spawn/update pairs) of the player-select and stage-select screens (0c0a9d9c-0c0aba84) */

/* named globals (symbols.txt) */
extern char g_res_csel_ksel[];
extern char g_res_csel_ssel[];
struct o24_float { char p[0x24]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int obj_destroy(int);
int FUN_0c0623a6(int, int, int);
int _quick_odd_mvn(void);
int menu_find_cursor_task(void);
int ui_task_create(void);
struct o2E0_int { char p[0x2E0]; int v; };
struct o40_float { char p[0x40]; float v; };
struct oC_float { char p[0xC]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o94_float { char p[0x94]; float v; };
int FUN_0c06233a(int, int, int);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
typedef struct { int w0, w1, w2; } vec3i;
extern char *obj_create(int, int, int, int);
struct o0_float { float v; };
struct o28_float { char p[0x28]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int menu_ui_task_32_layout(int);
typedef struct { int x, y, z; } vec3_int;
typedef struct { int x, y, z; } vec3i_r13;
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o2C_float { char p[0x2C]; float v; };
typedef struct { int x, y, z; } S12;
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2F0_int { char p[0x2F0]; int v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
extern int _modls();
typedef struct { int x, y, z; } Vec3i;

int menu_ui_spawn_27(int a4);
int menu_ui_spawn_29(int a4);
int menu_ui_task_34_bind_models(int a4, int a5);

int menu_ui_task_25(int a4)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 == 1) {
            t3 = *(signed char *)((a4 + 0x9));
            if (t3 != 0) {
                if (t3 != 1) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                    t3 = 0xEE;
                    if (((*(signed char *)((a4 + 0x4))) != 0) && (t0 = (((struct oEE_short *)(a4))->v), (int)t0 <= (int)0x7)) {
                    } else {
                        *(unsigned char *)((a4 + 0x9)) = 0x2;
                        t3 = 0x2;
                    }
                    t0 = t3;
                } else {
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 10.0f);
                    if (!(((((struct o24_float *)(a4))->v)) > 0.0f)) {
                    } else {
                        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                        (((struct o24_float *)(a4))->v) = 0.0f;
                    }
                    t0 = 0x24;
                }
                t3 = t0;
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct o24_float *)(a4))->v) = -100.0f;
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 10.0f);
                if (!(((((struct o24_float *)(a4))->v)) > 0.0f)) {
                } else {
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                    (((struct o24_float *)(a4))->v) = 0.0f;
                }
                t3 = 0x24;
            }
            return t3;
        }
        if (t2 == 2) {
            t0 = *(signed char *)((a4 + 0x9));
            if (t0 != 0) {
                if (t0 != 1) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                    *(unsigned int *)(((*(int *)((((((((struct oF0_short *)(a4))->v)) << 2) + (0x2E0 + a4)) + 0x0))) + 0x10)) = 0xFFFFEFA5;
                    t0 = 0xF0;
                } else {
                    t3 = *(int *)((((((((struct oF0_short *)(a4))->v)) << 2) + (0x2E0 + a4)) + 0x0));
                    *(unsigned int *)((t3 + 0x10)) = ((*(int *)((t3 + 0x10))) - 0x1000);
                    t3 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t3 - 1);
                    t4 = 0xEC;
                    if ((int)(short)(t3 - 1) >= 0) {
                    } else {
                        t3 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t3 + 0x1);
                        t4 = (t3 + 0x1);
                    }
                    t0 = t4;
                }
                t3 = t0;
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x1E;
                t0 = *(int *)((((((((struct oF0_short *)(a4))->v)) << 2) + (0x2E0 + a4)) + 0x0));
                *(unsigned int *)((t0 + 0x10)) = ((*(int *)((t0 + 0x10))) - 0x1000);
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                t4 = 0xEC;
                if ((int)(short)(t0 - 1) >= 0) {
                } else {
                    t0 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
                    t4 = (t0 + 0x1);
                }
                t3 = t4;
            }
            return t3;
        }
        if (t2 == 3) {
            t0 = *(signed char *)((a4 + 0x9));
            if (t0 != 0) {
                if (t0 != 1) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                    t0 = 0x0;
                } else {
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 10.0f);
                    t2 = 0x24;
                    if ((*(float *)0xC0AA0A4) > ((((struct o24_float *)(a4))->v))) {
                        t3 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t3 + 0x1);
                        t2 = (t3 + 0x1);
                    }
                    t0 = t2;
                }
                t2 = t0;
            } else {
                t0 = *(signed char *)0xC7F2EE7;
                t3 = (unsigned char)t0;
                if ((int)(unsigned char)t0 >= (int)0x4) {
                    t0 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
                    t3 = (t0 + 0x1);
                }
                t2 = t3;
            }
            return t2;
        }
        return obj_destroy(a4);
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    (((struct oEE_ushort *)(a4))->v) = ((((struct oF0_short *)(a4))->v));
    if ((int)((((struct oF0_short *)(a4))->v)) >= (int)0x7) {
        (((struct oF0_ushort *)(a4))->v) = 0x7;
    }
    if ((int)((((struct oF0_short *)(a4))->v)) < 0) {
        (((struct oF0_ushort *)(a4))->v) = 0x0;
    }
    t0 = 0x0;
    if ((unsigned char)(*(signed char *)0xC7F2EE6) != 2) {
        t0 = 0x1;
    }
    *(unsigned char *)((a4 + 0x4)) = t0;
    t2 = t0;
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)0x8) {
            break;
        }
        t2 = (*(signed char *)((a4 + 0x3)));
        t3 = 0xC7F2E45;
        t4 = t0;
        t4 = (t4 << 2);
        t2 = ((unsigned short)t2 * (unsigned short)0x78);
        t2 = (unsigned char)t2;
        t2 = (*(signed char *)((t3 + t2)));
        t5 = t2;
        t2 = (t2 << 2);
        t2 = (t2 << 1);
        t2 = (t2 + t5);
        t5 = 0xC0623A6;
        t2 = (signed char)t2;
        t2 = (FUN_0c0623a6((*(int *)((((0x2E0 + a4) + t4) + 0x0))), 0xC664A78, ((*(signed char *)((((0xC1525BF + t2) + t0) + 0x0))) + 0x3A)));
        t2 = 0xF2;
        if ((int)t0 < (int)(*(short *)((a4 + t2)))) {
            t5 = 0x2E0;
            t5 = (t5 + a4);
            t5 = (t5 + t4);
            *(unsigned char *)(((*(int *)((t5 + 0x0))) + 0x0)) = 0x1;
        }
        t5 = 0x2E0;
        t5 = (t5 + a4);
        t5 = (t5 + t4);
        t6 = *(int *)((t5 + 0x0));
        t2 = 0xF;
        t3 = 0x2E0;
        t5 = t0;
        *(unsigned short *)((t6 + 0x2)) = t2;
        t5 = (t5 << 1);
        t2 = 0xC1529F4;
        t3 = (t3 + a4);
        t5 = (t5 + t0);
        t3 = (t3 + t4);
        t5 = (t5 << 2);
        t3 = (*(int *)((t3 + 0x0)));
        t5 = (signed char)t5;
        t3 = (t3 + 0x4);
        t5 = (t5 + t2);
        t2 = 0xC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t3) = *(struct mv3 *)(t5); }
        t2 = 0xEE;
        if ((int)t0 >= (int)(*(short *)((a4 + t2)))) {
            t5 = 0x2E0;
            t5 = (t5 + a4);
            t5 = (t5 + t4);
            t4 = *(int *)((t5 + 0x0));
            t5 = 0x8000;
            t3 = (*(int *)((t4 + 0x10)));
            t3 = (t3 + t5);
            *(unsigned int *)((t4 + 0x10)) = t3;
        }
        t2 = (*(signed char *)((a4 + 0x4)));
        t0 = (t0 + 0x1);
        if (t2 == 0) {
            t2 = 0xF0;
            t5 = 0x2E0;
            t5 = (t5 + a4);
            t3 = (*(int *)(((((*(short *)((a4 + t2))) << 2) + t5) + 0x0)));
            *(unsigned int *)((t3 + 0x10)) = 0xFFFFEFA5;
        }
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x9)) = 0x0;
            t0 = 0xEE;
            if (((*(signed char *)((a4 + 0x4))) != 0) && (t1 = (((struct oEE_short *)(a4))->v), (int)t1 <= (int)0x7)) {
            } else {
                *(unsigned char *)((a4 + 0x9)) = 0x2;
                t0 = 0x2;
            }
            t1 = t0;
        } else {
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 10.0f);
            if (!(((((struct o24_float *)(a4))->v)) > 0.0f)) {
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct o24_float *)(a4))->v) = 0.0f;
            }
            t1 = 0x24;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        (((struct o24_float *)(a4))->v) = -100.0f;
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 10.0f);
        if (!(((((struct o24_float *)(a4))->v)) > 0.0f)) {
        } else {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            (((struct o24_float *)(a4))->v) = 0.0f;
        }
        t0 = 0x24;
    }
    return t0;
}

int menu_ui_spawn_26(int a4)
{
    register int t0;

    t0 = ui_task_create();
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC0AA078;
        *(unsigned int *)((t0 + 0x1C)) = a4;
    }
    return t0;
}

int menu_ui_task_26(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return obj_destroy(a4);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                if ((*(signed char *)((a4 + 0x4))) != (*(signed char *)((((*(signed char *)0xC7F3051) + 0xC1525B4) + 0x0)))) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) - 1);
                    *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7F3051))));
                }
                t0 = *(signed char *)0xC7F2EE6;
                t1 = (unsigned char)t0;
                if ((unsigned char)t0 == 2) {
                    t0 = *(signed char *)0xC7F2EE7;
                    t2 = (unsigned char)t0;
                    if ((unsigned char)t0 == 3) {
                        *(unsigned char *)((a4 + 0x8)) = 0x63;
                        t2 = 0x63;
                    }
                    t1 = t2;
                }
                return t1;
            }
            
            return obj_destroy(a4);
        }
        *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7F3051))));
        if ((int)((((struct oEE_short *)((*(int *)((a4 + 0x1C)))))->v)) < (int)0xB4) {
            t0 = (((struct oEE_short *)((*(int *)((a4 + 0x1C)))))->v);
            (((struct oEC_ushort *)(a4))->v) = (((int)((unsigned int)((int)((unsigned int)t0 + (unsigned int)0x0)) + ((((int)0x0 > (int)t0)) ? 1u : 0u))) >> 1);
        } else {
            t0 = (((struct oEE_short *)((*(int *)((a4 + 0x1C)))))->v);
            (((struct oEC_ushort *)(a4))->v) = (((int)((unsigned int)((int)((unsigned int)((-t0) + 0x168) + (unsigned int)0x0)) + ((((int)0x0 > (int)((-t0) + 0x168))) ? 1u : 0u))) >> 1);
        }
        (((struct o40_float *)(a4))->v) = (((*(float *)((0xC152944 + ((*(signed char *)((a4 + 0x4))) << 2)))) - ((((struct oC_float *)(((((struct o2E0_int *)(a4))->v))))->v))) / (float)((((struct oEC_short *)(a4))->v)));
        u0 = *(float *)((0xC152944 + ((*(signed char *)((a4 + 0x4))) << 2)));
        u1 = (((struct oC_float *)(((((struct o2E0_int *)(a4))->v))))->v);
        u2 = (u0 - u1);
        if (0.0f > (u0 - u1)) {
            u2 = (u1 - u0);
        }
        if (u2 > ((((struct o40_float *)(a4))->v))) {
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct oC_float *)(t0))->v) = (((((struct oC_float *)(t0))->v)) + ((((struct o40_float *)(a4))->v)));
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oC_float *)(((((struct o2E0_int *)(a4))->v))))->v) = (*(float *)((0xC152944 + ((*(signed char *)((a4 + 0x4))) << 2))));
        }
        t0 = *(signed char *)0xC7F2EE6;
        t1 = (unsigned char)t0;
        if ((unsigned char)t0 == 2) {
            t0 = *(signed char *)0xC7F2EE7;
            t2 = (unsigned char)t0;
            if ((int)(unsigned char)t0 < (int)0x3) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = 0x63;
                t2 = 0x63;
            }
            t1 = t2;
        }
        return t1;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A60, 0x20);
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E0_int *)(a4))->v)) + 0x4)) = *(struct mv3 *)(0xC152920); }
    (((struct o24_float *)(a4))->v) = 120.0f;
    *(unsigned int *)((a4 + 0x2C)) = 0x5B0;
    menu_ui_spawn_29(a4);
    menu_ui_spawn_27(a4);
    *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7F3051))));
    if ((int)((((struct oEE_short *)((*(int *)((a4 + 0x1C)))))->v)) < (int)0xB4) {
        t0 = (((struct oEE_short *)((*(int *)((a4 + 0x1C)))))->v);
        (((struct oEC_ushort *)(a4))->v) = (((int)((unsigned int)((int)((unsigned int)t0 + (unsigned int)0x0)) + ((((int)0x0 > (int)t0)) ? 1u : 0u))) >> 1);
    } else {
        t0 = (((struct oEE_short *)((*(int *)((a4 + 0x1C)))))->v);
        (((struct oEC_ushort *)(a4))->v) = (((int)((unsigned int)((int)((unsigned int)((-t0) + 0x168) + (unsigned int)0x0)) + ((((int)0x0 > (int)((-t0) + 0x168))) ? 1u : 0u))) >> 1);
    }
    (((struct o40_float *)(a4))->v) = (((*(float *)((0xC152944 + ((*(signed char *)((a4 + 0x4))) << 2)))) - ((((struct oC_float *)(((((struct o2E0_int *)(a4))->v))))->v))) / (float)((((struct oEC_short *)(a4))->v)));
    u0 = *(float *)((0xC152944 + ((*(signed char *)((a4 + 0x4))) << 2)));
    u1 = (((struct oC_float *)(((((struct o2E0_int *)(a4))->v))))->v);
    u2 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u2 = (u1 - u0);
    }
    if (u2 > ((((struct o40_float *)(a4))->v))) {
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct oC_float *)(t0))->v) = (((((struct oC_float *)(t0))->v)) + ((((struct o40_float *)(a4))->v)));
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oC_float *)(((((struct o2E0_int *)(a4))->v))))->v) = (*(float *)((0xC152944 + ((*(signed char *)((a4 + 0x4))) << 2))));
    }
    t0 = *(signed char *)0xC7F2EE6;
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 == 2) {
        t0 = *(signed char *)0xC7F2EE7;
        t2 = (unsigned char)t0;
        if ((int)(unsigned char)t0 < (int)0x3) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = 0x63;
            t2 = 0x63;
        }
        t1 = t2;
    }
    return t1;
}

int menu_ui_spawn_27(int a4)
{
    register int t0;

    t0 = ui_task_create();
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC0AA286;
        *(unsigned int *)((t0 + 0x1C)) = a4;
    }
    return t0;
}

int menu_ui_spawn_28(void)
{
    register int t0;

    t0 = ui_task_create();
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC0AA3C2;
    }
    return t0;
}

int menu_ui_task_28(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned short *)((a4 + 0x6)) = 0xF;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), ((int)g_res_csel_ssel), 0x1E);
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
    }
    t0 = *(signed char *)0xC7F2EE6;
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 == 2) {
        t0 = *(signed char *)0xC7F2EE7;
        t1 = (unsigned char)t0;
        if ((unsigned char)t0 == 3) {
            *(unsigned char *)((a4 + 0x8)) = 0x63;
            t1 = 0x63;
        }
    }
    return t1;
}

int menu_ui_spawn_29(int a4)
{
    register int t0;

    t0 = ui_task_create();
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC0AA484;
        *(unsigned int *)((t0 + 0x1C)) = a4;
    }
    return t0;
}

int menu_ui_task_29(int a4)
{
    register int t0;
    register int t1;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return obj_destroy(a4);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4);
        }
        (((struct o4C_float *)(a4))->v) = (((((struct oC_float *)(((((struct o2E0_int *)((*(int *)((a4 + 0x1C)))))->v))))->v)) - ((((struct o40_float *)(a4))->v)));
        (((struct o40_float *)(a4))->v) = ((((struct oC_float *)(((((struct o2E0_int *)((*(int *)((a4 + 0x1C)))))->v))))->v));
        *(unsigned int *)((a4 + 0x30)) = (int)((float)(*(int *)((a4 + 0x30))) + ((((((struct o4C_float *)(a4))->v)) * (*(float *)0xC0AA62C))));
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
        t0 = *(signed char *)0xC7F2EE6;
        t1 = (unsigned char)t0;
        if ((unsigned char)t0 == 2) {
            t0 = *(signed char *)0xC7F2EE7;
            t1 = (unsigned char)t0;
            if ((unsigned char)t0 == 3) {
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            }
        }
        return t1;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664A60, 0x21);
    (((struct o94_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)(0xC15292C); }
    (((struct o40_float *)(a4))->v) = ((((struct oC_float *)(((((struct o2E0_int *)((*(int *)((a4 + 0x1C)))))->v))))->v));
    return 0x40;
}

int menu_ui_spawn_30(int a4)
{
    register int t0;

    t0 = ui_task_create();
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC0AA5BC;
        *(unsigned int *)((t0 + 0x1C)) = a4;
    }
    return t0;
}

void menu_ui_task_30(int a4)
{
    register int t0;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        obj_destroy(a4);
    return;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            obj_destroy(a4);
    return;
        }
        *(unsigned int *)((((((struct o2E0_int *)(a4))->v)) + 0x14)) = (*(int *)((((((struct o2E0_int *)((*(int *)((a4 + 0x1C)))))->v)) + 0x14)));
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) & 0xFFFF);
        if ((unsigned char)(*(signed char *)0xC7F2EE6) == 2) {
            if ((unsigned char)(*(signed char *)0xC7F2EE7) == 3) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
        }
        return;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664A60, 0x1F);
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)(0xC152938); }
}

int menu_ui_spawn_31(void)
{
    register int t0;
    register int t2;

    t0 = ui_task_create();
    t2 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC0AA6BA;
        t2 = menu_find_cursor_task();
        *(unsigned int *)((t0 + 0x1C)) = t2;
    }
    return t2;
}

int menu_ui_task_31(int a4, int a5, int a6, int a7, float f4, float f5)
{
    register int t0;
    register float u0;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return obj_destroy(a4);
    }
    t0 = *(signed char *)((a4 + 0x8));
    switch (t0) {
    case 0:
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned short *)((a4 + 0x6)) = 0xF;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        t0 = 0x0;
        if ((*(signed char *)0xC7F3052) == 8) {
            t0 = 0x8;
        }
        FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), ((int)g_res_csel_ssel), t0);
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x1F;
        t0 = *(signed char *)0xC7F3052;
        (((struct o4_float *)(((((struct o2E0_int *)(a4))->v))))->v) = (*(float *)((((unsigned char)(((t0 << 1) + t0) << 2) + 0xC152970) + 0x0)));
        t0 = *(signed char *)0xC7F3052;
        (((struct o8_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o4_float *)(((unsigned char)(((t0 << 1) + t0) << 2) + 0xC152970)))->v));
        t0 = *(signed char *)0xC7F3052;
        (((struct oC_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o8_float *)((0xC152970 + (unsigned char)(((t0 << 1) + t0) << 2))))->v));
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x9)) = 0x0;
            (((struct oEC_ushort *)(a4))->v) = 0x14;
        }
        *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) ^ 0x1);
        break;
    case 1:
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x9)) = 0x0;
            (((struct oEC_ushort *)(a4))->v) = 0x14;
        }
        *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) ^ 0x1);
        break;
    case 2:
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x9)) = 0x0;
            (((struct oEC_ushort *)(a4))->v) = 0x14;
        }
        if (2.0f > ((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.099999994f);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.099999994f);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.099999994f);
        }
        if (((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v)) > 2.0f) {
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o24_float *)(t0))->v) = 2.0f;
            (((struct o20_float *)(t0))->v) = 2.0f;
            (((struct o1C_float *)(t0))->v) = 2.0f;
        }
        break;
    default:
        if (t0 == 3) {
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                *(unsigned char *)((a4 + 0x9)) = 0x0;
                (((struct oEC_ushort *)(a4))->v) = 0xA;
            }
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((((((struct o2E0_int *)((*(int *)((a4 + 0x1C)))))->v)) + 0x14))) & 0xFFFF);
            t0 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x100);
            t0 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) & 0xFFFF);
            if (((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v)) > 0.0f) {
                u0 = *(float *)0xC0AA9C0;
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - u0);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - u0);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) - u0);
            }
            if (0.0f > ((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o24_float *)(t0))->v) = 0.0f;
                (((struct o20_float *)(t0))->v) = 0.0f;
                (((struct o1C_float *)(t0))->v) = 0.0f;
            }
            return 0x1C;
        }
        return obj_destroy(a4);
    }
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((((((struct o2E0_int *)((*(int *)((a4 + 0x1C)))))->v)) + 0x14))) & 0xFFFF);
    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x100);
    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) & 0xFFFF);
    return 0x2E0;
}

int FUN_0c0aa93c(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return obj_destroy(a4);
    }
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    return obj_destroy(a4);
                }
                return t1;
            }
        } else {
            t1 = *(int *)((a4 + 0x1C));
            if (((*(signed char *)((t1 + 0x8))) == 2) && (t0 = *(signed char *)((t1 + 0x9)), t0 == 3)) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
        }
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((((((struct o2E0_int *)((*(int *)((a4 + 0x1C)))))->v)) + 0x14))) & 0xFFFF);
        return 0x2E0;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0x1F;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), ((int)g_res_csel_ssel), 0x9);
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x1F;
    return 0x1F;
}

void menu_ui_spawn_32(char arg)
{
    vec3i tmpl;
    char *obj;

    tmpl = *(vec3i *)0x0C152C74;
    obj = obj_create(5, 1, 2, 0);
    if (obj) {
        *obj = 1;
        *(vec3i *)(obj + 80) = tmpl;
        *(int *)(obj + 16) = 0x0C0AAC9C;
        *(char *)(obj + 3) = arg;
    }
}

int menu_ui_task_32(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned short *)((a4 + 0x6)) = 0x1F;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        (((struct o20_float *)(a4))->v) = 0.0f;
        (((struct o24_float *)(a4))->v) = 0.0f;
        (((struct o28_float *)(a4))->v) = -30.0f;
        (((struct o50_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        t0 = *(signed char *)((a4 + 0x3));
        (((struct o38_float *)(a4))->v) = (*(float *)((0xC152878 + (signed char)(((t0 << 1) + t0) << 2))));
        (((struct o3C_float *)(a4))->v) = 0.0f;
        *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC7E40C8 + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0))));
        menu_ui_task_32_layout(a4);
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        t1 = t0;
    } else {
        u0 = (((struct o0_float *)0xC0AAE9C)->v);
        if ((*(signed char *)((a4 + 0x3))) == 0) {
            (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + u0);
            t0 = *(signed char *)((a4 + 0x3));
            if ((*(float *)((0xC152860 + (signed char)(((t0 << 1) + t0) << 2)))) > ((((struct o38_float *)(a4))->v))) {
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                t0 = *(signed char *)((a4 + 0x3));
                (((struct o38_float *)(a4))->v) = (*(float *)(((0xC152860 + (signed char)(((t0 << 1) + t0) << 2)) + 0x0)));
            }
        } else {
            (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - u0);
            t0 = *(signed char *)((a4 + 0x3));
            if (!(((((struct o38_float *)(a4))->v)) > (*(float *)((0xC152860 + (signed char)(((t0 << 1) + t0) << 2)))))) {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                t0 = *(signed char *)((a4 + 0x3));
                (((struct o38_float *)(a4))->v) = (*(float *)(((0xC152860 + (signed char)(((t0 << 1) + t0) << 2)) + 0x0)));
            }
        }
        u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o38_float *)(a4))->v)));
        (((struct o20_float *)(a4))->v) = ((-(u0 * 1.0f)) / ((((struct o8_float *)0xC0AAE9C)->v)));
        u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o3C_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = ((-(u0 * 1.0f)) / ((((struct oC_float *)0xC0AAE9C)->v)));
        t1 = 0x24;
    }
    return t1;
}

void menu_ui_spawn_33(void)
{
    vec3_int tmpl;
    char *obj;
    int i;

    tmpl = *(vec3_int *)0x0C152C80;
    for (i = 0; i < 2; i++) {
        obj = obj_create(6, 1, 2, 0);
        if (obj) {
            *obj = 1;
            obj[4] = i;
            *(int *)(obj + 16) = 0x0C0AAE48;
            *(vec3_int *)(obj + 80) = tmpl;
        }
    }
}

void menu_ui_spawn_34(int target)
{
    vec3i_r13 template;
    char *item;

    template = *(vec3i_r13 *)0x0C152CC4;
    item = obj_create(5, 1, 2, 0);
    if (item) {
        *item = 1;
        *(vec3i_r13 *)(item + 80) = template;
        *(int *)(item + 16) = 0x0C0AB25E;
        *(int *)(item + 28) = target;
    }
}

int menu_ui_task_34_bind_models(int a4, int a5)
{
    register int t12;

    if ((signed char)a5 == 0) {
        FUN_0c06233a((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0))), ((int)g_res_csel_ksel), 0x24);
        (((struct o28_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = ((((struct o0_float *)0xC0AB29C)->v));
        t12 = (*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)));
    } else {
        FUN_0c06233a((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0))), ((int)g_res_csel_ksel), ((*(signed char *)(((unsigned char)((unsigned short)((*(signed char *)0xC7F3071) + 0xFF) * (unsigned short)0x78) + 0xC7F2E46))) + 0x26));
        (((struct o28_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = ((((struct oC_float *)0xC0AB29C)->v));
        t12 = (*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)));
    }
    (((struct o2C_float *)(t12))->v) = ((((struct o10_float *)0xC0AB29C)->v));
    *(unsigned char *)(((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0))) + 0x0)) = 0x1;
    *(unsigned short *)(((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0))) + 0x2)) = 0x11F;
    (((struct o1C_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = ((-(((((struct o28_float *)(a4))->v)) * 1.0f)) / ((((struct o14_float *)0xC0AB29C)->v)));
    (((struct o20_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = ((-(((((struct o28_float *)(a4))->v)) * 1.0f)) / ((((struct o18_float *)0xC0AB29C)->v)));
    (((struct o24_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = 1.0f;
    return 0x24;
}

int menu_ui_task_34(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return obj_destroy(a4);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        *(unsigned char *)((a4 + 0x3)) = (*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3)));
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned short *)((a4 + 0x6)) = 0x1F;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        *(unsigned char *)((a4 + 0x4)) = (*(signed char *)0xC7F3051);
        (((struct o20_float *)(a4))->v) = 0.0f;
        (((struct o24_float *)(a4))->v) = 0.0f;
        (((struct o28_float *)(a4))->v) = ((((struct o0_float *)0xC0AB410)->v));
        (((struct o50_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 0.0f;
        menu_ui_task_34_bind_models(a4, 0x0);
        menu_ui_task_34_bind_models(a4, 0x1);
        u0 = (((struct o4_float *)0xC0AB410)->v);
        u1 = (((struct o8_float *)0xC0AB410)->v);
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            t1 = (t1 + 0x1);
            t2 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
            u2 = (((((struct o28_float *)(a4))->v)) * ((((struct o28_float *)(t2))->v)));
            (((struct o4_float *)(t2))->v) = ((-(u2 * 1.0f)) / u0);
            t2 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
            u2 = (((((struct o28_float *)(a4))->v)) * ((((struct o2C_float *)(t2))->v)));
            (((struct o8_float *)(t2))->v) = ((-(u2 * 1.0f)) / u1);
            t0 = (t0 + 0x4);
            if ((int)t1 >= (int)0x2) {
                break;
            }
        }
        u2 = (((((struct o28_float *)(a4))->v)) * ((((struct o38_float *)(a4))->v)));
        (((struct o20_float *)(a4))->v) = ((-(u2 * 1.0f)) / u0);
        u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o3C_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = ((-(u0 * 1.0f)) / u1);
    }
    t0 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x9));
    t1 = t0;
    if ((int)t0 >= (int)0x3) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

void menu_ui_spawn_35(char value)
{
    S12 tmpl;
    char *obj;

    tmpl = *(S12 *)0x0C152D60;
    obj = obj_create(5, 1, 6, 0);
    if (obj) {
        *obj = 1;
        *(S12 *)(obj + 80) = tmpl;
        *(int *)(obj + 16) = 0x0C0AB430;
        *(char *)(obj + 3) = value;
    }
}

int menu_ui_task_35(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned short *)((a4 + 0x6)) = 0x1F;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        (((struct oF2_ushort *)(a4))->v) = 0x0;
        t0 = 0x0;
        for (;;) {
            FUN_0c0623a6((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0))), 0xC664A60, (*(signed char *)((t0 + 0xC339C88))));
            *(unsigned char *)(((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0))) + 0x2)) = 0x1F;
            t1 = *(signed char *)((a4 + 0x3));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0))) + 0x4)) = *(struct mv3 *)((((unsigned char)(((((t1 << 2) << 1) + t1) << 2) << 1) + 0xC152CD0) + (signed char)(((t0 << 1) + t0) << 2))); }
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x6) {
                break;
            }
        }
    }
    if ((int)(unsigned char)(*(signed char *)0xC7F2EE6) >= (int)0x2) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
    if (((int)((int)((((struct oEE_short *)(a4))->v)) % (int)0x5)) == 0) {
        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) ^ 0x1);
    }
    if (((((struct oF0_short *)(a4))->v)) != 0) {
        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct o2F0_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x1;
    } else {
        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2F0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    if (((int)((int)((((struct oEE_short *)(a4))->v)) % (int)0xA)) == 0) {
        (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) ^ 0x1);
    }
    if (((((struct oF2_short *)(a4))->v)) != 0) {
        t0 = ((((struct o2E0_int *)(a4))->v));
        t1 = 0xFFFFEAAB;
    } else {
        t0 = ((((struct o2E0_int *)(a4))->v));
        t1 = 0x1555;
    }
    *(unsigned int *)((t0 + 0x18)) = t1;
    return 0x2E0;
}

void menu_ui_spawn_36(char kind)
{
    vec3_int tmpl;
    char *obj;

    tmpl = *(vec3_int *)0x0C152D6C;
    obj = obj_create(5, 1, kind, 0);
    if (obj) {
        *obj = 1;
        *(vec3_int *)(obj + 80) = tmpl;
        *(int *)(obj + 16) = 0x0C0AB626;
        *(short *)(obj + 240) = kind;
    }
}

int menu_ui_task_36(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(signed char *)((a4 + 0x9));
            if (t1 != 0) {
                if (t1 != 1) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                    t1 = 0x0;
                } else {
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 10.0f);
                    if (!(((((struct o24_float *)(a4))->v)) > 0.0f)) {
                    } else {
                        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                        (((struct o24_float *)(a4))->v) = 0.0f;
                    }
                    t1 = 0x24;
                }
                t2 = t1;
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct o24_float *)(a4))->v) = -100.0f;
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 10.0f);
                if (!(((((struct o24_float *)(a4))->v)) > 0.0f)) {
                } else {
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                    (((struct o24_float *)(a4))->v) = 0.0f;
                }
                t2 = 0x24;
            }
            return t2;
        }
        if (t0 == 2) {
            t1 = *(signed char *)((a4 + 0x9));
            if (t1 != 0) {
                if (t1 != 1) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                    *(unsigned int *)(((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0))) + 0x10)) = 0xFFFFEFA5;
                    t1 = 0xF0;
                } else {
                    if ((*(signed char *)((a4 + 0x4))) == 0) {
                        *(unsigned char *)(((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0))) + 0x0)) = 0x1;
                        t2 = *(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0));
                        (((struct o1C_float *)(t2))->v) = (((((struct o1C_float *)(t2))->v)) - 0.099999994f);
                        t2 = *(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0));
                        (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) - 0.099999994f);
                        if (!(((((struct o1C_float *)((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0)))))->v)) > 1.0f)) {
                            (((struct o1C_float *)((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0)))))->v) = 1.0f;
                        }
                        if (!(((((struct o20_float *)((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0)))))->v)) > 1.0f)) {
                            (((struct o20_float *)((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0)))))->v) = 1.0f;
                        }
                    }
                    t2 = (((struct oEE_short *)(a4))->v);
                    (((struct oEE_ushort *)(a4))->v) = (t2 - 1);
                    t3 = 0xEE;
                    if ((int)(short)(t2 - 1) >= 0) {
                    } else {
                        t2 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                        t3 = (t2 + 0x1);
                    }
                    t1 = t3;
                }
                t2 = t1;
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct oEE_ushort *)(a4))->v) = 0x1E;
                if ((*(signed char *)((a4 + 0x4))) == 0) {
                    *(unsigned char *)(((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0))) + 0x0)) = 0x1;
                    t1 = *(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0));
                    (((struct o1C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) - 0.099999994f);
                    t1 = *(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0));
                    (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) - 0.099999994f);
                    if (!(((((struct o1C_float *)((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0)))))->v)) > 1.0f)) {
                        (((struct o1C_float *)((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0)))))->v) = 1.0f;
                    }
                    if (!(((((struct o20_float *)((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0)))))->v)) > 1.0f)) {
                        (((struct o20_float *)((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0)))))->v) = 1.0f;
                    }
                }
                t1 = (((struct oEE_short *)(a4))->v);
                (((struct oEE_ushort *)(a4))->v) = (t1 - 1);
                t3 = 0xEE;
                if ((int)(short)(t1 - 1) >= 0) {
                } else {
                    t1 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                    t3 = (t1 + 0x1);
                }
                t2 = t3;
            }
            return t2;
        }
        if (t0 == 3) {
            t0 = *(signed char *)((a4 + 0x9));
            if (t0 != 0) {
                if (t0 != 1) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                    t0 = 0x0;
                } else {
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 10.0f);
                    t1 = 0x24;
                    if (-100.0f > ((((struct o24_float *)(a4))->v))) {
                        t2 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                        t1 = (t2 + 0x1);
                    }
                    t0 = t1;
                }
                t1 = t0;
            } else {
                t0 = *(signed char *)0xC7F2EE7;
                t2 = (unsigned char)t0;
                if ((int)(unsigned char)t0 >= (int)0x4) {
                    t0 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
                    t2 = (t0 + 0x1);
                }
                t1 = t2;
            }
            return t1;
        }
        return obj_destroy(a4);
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    t0 = 0x0;
    if ((unsigned char)(*(signed char *)0xC7F2EE6) != 2) {
        t0 = 0x1;
    }
    *(unsigned char *)((a4 + 0x4)) = t0;
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)((((struct oF0_short *)(a4))->v))) {
            break;
        }
        t1 = t0;
        t2 = 0xC0623A6;
        t1 = (t1 << 2);
        FUN_0c0623a6((*(int *)((((0x2E0 + a4) + t1) + 0x0))), 0xC664A78, 0x44);
        t2 = (*(int *)((((0x2E0 + a4) + t1) + 0x0)));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        t2 = (*(int *)((((0x2E0 + a4) + t1) + 0x0)));
        t3 = 0x2E0;
        *(unsigned short *)((t2 + 0x2)) = 0x1F;
        t2 = t0;
        t3 = (t3 + a4);
        t4 = ((t0 << 1) + t2);
        t2 = 0xC0E6FE8;
        t3 = (t3 + t1);
        t3 = (*(int *)((t3 + 0x0)));
        t3 = (t3 + 0x4);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t3) = *(struct mv3 *)(((signed char)(t4 << 2) + 0xC1529F4)); }
        t0 = (t0 + 0x1);
    }
    if ((*(signed char *)((a4 + 0x4))) == 0) {
        *(unsigned char *)(((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0))) + 0x0)) = 0x0;
        (((struct o1C_float *)((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0)))))->v) = 2.0f;
        (((struct o20_float *)((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0)))))->v) = 2.0f;
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x9)) = 0x0;
            t0 = 0x0;
        } else {
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 10.0f);
            if (!(((((struct o24_float *)(a4))->v)) > 0.0f)) {
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct o24_float *)(a4))->v) = 0.0f;
            }
            t0 = 0x24;
        }
        t1 = t0;
    } else {
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        (((struct o24_float *)(a4))->v) = -100.0f;
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 10.0f);
        if (!(((((struct o24_float *)(a4))->v)) > 0.0f)) {
        } else {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            (((struct o24_float *)(a4))->v) = 0.0f;
        }
        t1 = 0x24;
    }
    return t1;
}

void menu_ui_spawn_37(void)
{
    Vec3i template;
    char *slot;

    template = *(Vec3i *)0x0C152D78;
    slot = obj_create(5, 1, 1, 0);
    if (slot) {
        *slot = 1;
        *(Vec3i *)(slot + 80) = template;
        *(int *)(slot + 16) = 0x0C0AB97C;
    }
}

int menu_ui_task_37(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4);
        }
        return t0;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0x1F;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), ((int)g_res_csel_ksel), 0x4);
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x11F;
    (((struct o4_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
    (((struct o8_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
    (((struct oC_float *)(((((struct o2E0_int *)(a4))->v))))->v) = -20.0000095f;
    t0 = (((struct o2E0_int *)(a4))->v);
    u0 = (((((struct oC_float *)(t0))->v)) * ((((struct o4_float *)(t0))->v)));
    (((struct o4_float *)(t0))->v) = ((-(u0 * 1.0f)) / 640.0f);
    t0 = (((struct o2E0_int *)(a4))->v);
    u0 = (((((struct oC_float *)(t0))->v)) * ((((struct o8_float *)(t0))->v)));
    (((struct o8_float *)(t0))->v) = ((-(u0 * 1.0f)) / 480.0f);
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o1C_float *)(t0))->v) = ((-(((((struct oC_float *)(t0))->v)) * 1.0f)) / 640.0f);
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o20_float *)(t0))->v) = ((-(((((struct oC_float *)(t0))->v)) * 1.0f)) / 480.0f);
    (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
    return 0x24;
}
