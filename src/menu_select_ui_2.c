/* UI task objects (spawn/update pairs) of the player-select and stage-select screens (0c0a7320-0c0a80c4) */

/* named globals (symbols.txt) */
extern char g_res_csel_csel[];
extern char g_res_csel_ksel[];
extern char g_select_ready_mask[];
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o94_float { char p[0x94]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);
int FUN_0c0623a6(int, int, int);
int ui_task_create(void);
typedef struct { int x, y, z; } vec3i;
extern char *obj_create(int, int, int, int);
extern void menu_ui_task_12(void);
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int menu_ui_spawn_21(int);
int FUN_0c0e6fe8(void);
struct o1C_float { char p[0x1C]; float v; };
int FUN_0c06233a(int, int, int);
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
typedef struct { int a, b, c; } vec12;
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E4_int { char p[0x2E4]; int v; };

int menu_ui_task_14_bind_models(int a4);
int menu_ui_task_15_bind_models(int a4, int a5);

int FUN_0c0a7320(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
        t0 = (((struct o2E0_int *)(a4))->v);
        t1 = 0xFFFFFFF8;
        if ((*(signed char *)((a4 + 0x4))) != 0) {
            t1 = 0x8;
        }
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + t1);
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) & 0xFFFF);
        return 0x2E0;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0xA;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), ((int)g_res_csel_ksel), ((*(signed char *)((a4 + 0x4))) + 0x4));
    (((struct o94_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
    (((struct o24_float *)(a4))->v) = 0.0f;
    (((struct o20_float *)(a4))->v) = 0.0f;
    (((struct o28_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 1.0f;
    (((struct o54_float *)(a4))->v) = 1.0f;
    (((struct o50_float *)(a4))->v) = 1.0f;
    return 0x50;
}

int menu_ui_spawn_11(void)
{
    register int t0;

    t0 = ui_task_create();
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC0A73E2;
    }
    return t0;
}

int menu_ui_task_11(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
        return t0;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0xA;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), ((int)g_res_csel_ksel), 0x5);
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
    (((struct o24_float *)(a4))->v) = 0.0f;
    (((struct o20_float *)(a4))->v) = 0.0f;
    (((struct o28_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 1.0f;
    (((struct o54_float *)(a4))->v) = 1.0f;
    (((struct o50_float *)(a4))->v) = 1.0f;
    return 0x50;
}

void menu_ui_spawn_12(void)
{
    vec3i template;
    char *item;

    template = *(vec3i *)0x0C152B24;
    item = obj_create(5, 1, 1, 0);
    if (item) {
        *item = 1;
        *(vec3i *)(item + 80) = template;
        *(void (**)(void))(item + 16) = menu_ui_task_12;
    }
}

int menu_ui_task_13(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            
            return obj_destroy(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned short *)((a4 + 0x6)) = 0xF;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        *(unsigned char *)((a4 + 0x4)) = (*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0)));
        FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), ((int)g_res_csel_csel), (((*(signed char *)((a4 + 0x3))) << 1) + 0xA));
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
        t0 = *(signed char *)((a4 + 0x4));
        (((struct o4_float *)(((((struct o2E0_int *)(a4))->v))))->v) = (*(float *)((0xC152644 + (unsigned char)(((t0 << 1) + t0) << 2))));
        *(volatile int *)((a4 + 0x2E0));
        FUN_0c0e6fe8();
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct oC_float *)(t0))->v) = 0.0f;
        (((struct o8_float *)(t0))->v) = 0.0f;
        (((struct o4_float *)(t0))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o50_float *)(a4))->v) = 1.0f;
    }
    if (((*(signed char *)g_select_ready_mask) & ((*(signed char *)((a4 + 0x3))) + 0x1)) != 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x4));
    t1 = 0x0;
    if (((int)t0 >= (int)0x1) && ((int)t0 <= (int)0x8)) {
        t1 = 0x1;
    }
    *(unsigned char *)((a4 + 0x1)) = t1;
    if ((*(signed char *)((a4 + 0x4))) != (*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0)))) {
        t0 = *(signed char *)((a4 + 0x4));
        t1 = *(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0));
        t2 = (t1 - t0);
        if ((int)(t1 - t0) < 0) {
            t2 = (t0 - t1);
        }
        if ((int)t2 > (int)0x1) {
            t0 = *(signed char *)((((0xC7F2DF0 + (unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78)) + 0x64) + 0x0));
            (((struct o20_float *)(a4))->v) = (*(float *)((((unsigned char)(((t0 << 1) + t0) << 2) + 0xC152644) + 0x0)));
            menu_ui_spawn_21((*(signed char *)((a4 + 0x3))));
        }
        *(unsigned char *)((a4 + 0x4)) = (*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0)));
    }
    t0 = *(signed char *)((a4 + 0x4));
    if (((((struct o20_float *)(a4))->v)) != (*(float *)((0xC152644 + (unsigned char)(((t0 << 1) + t0) << 2))))) {
        u0 = *(float *)0xC0A77DC;
        t0 = *(signed char *)((a4 + 0x4));
        if (((((struct o20_float *)(a4))->v)) > (*(float *)(((0xC152644 + (unsigned char)(((t0 << 1) + t0) << 2)) + 0x0)))) {
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) - u0);
            t0 = *(signed char *)((a4 + 0x4));
            if (!((*(float *)((0xC152644 + (unsigned char)(((t0 << 1) + t0) << 2)))) > ((((struct o20_float *)(a4))->v)))) {
                return 0x20;
            }
            t0 = *(signed char *)((a4 + 0x4));
            (((struct o20_float *)(a4))->v) = (*(float *)((0xC152644 + (unsigned char)(((t0 << 1) + t0) << 2))));
            return menu_ui_spawn_21((*(signed char *)((a4 + 0x3))));
        }
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + u0);
        t0 = *(signed char *)((a4 + 0x4));
        if (((((struct o20_float *)(a4))->v)) > (*(float *)((0xC152644 + (unsigned char)(((t0 << 1) + t0) << 2))))) {
            t0 = *(signed char *)((a4 + 0x4));
            (((struct o20_float *)(a4))->v) = (*(float *)((0xC152644 + (unsigned char)(((t0 << 1) + t0) << 2))));
            return menu_ui_spawn_21((*(signed char *)((a4 + 0x3))));
        }
        return 0x20;
    }
    return 0x20;
}

int menu_ui_task_14_bind_models(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t1 = 0x0;
    for (;;) {
        if (t1 == 0) {
            t2 = *(signed char *)((a4 + 0x4));
            t3 = 0x47;
            if (t2 == 10) {
            } else {
                t3 = ((*(signed char *)((0xC1525B4 + t2))) + 0xF);
            }
            FUN_0c06233a((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0))), ((int)g_res_csel_ksel), t3);
            t2 = *(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0));
            t3 = 0x8000;
            if ((*(signed char *)((a4 + 0x3))) != 0) {
                t3 = 0x0;
            }
            *(unsigned int *)((t2 + 0x14)) = t3;
            t2 = *(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0));
            t3 = 0xFFFFFFCE;
            if ((*(signed char *)((a4 + 0x3))) == 0) {
                t3 = 0x32;
            }
            (((struct o4_float *)(t2))->v) = (float)t3;
            (((struct o8_float *)((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0)))))->v) = 50.0f;
            t2 = *(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0));
            u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o4_float *)(t2))->v)));
            (((struct o4_float *)(t2))->v) = ((-(u0 * 1.0f)) / 640.0f);
            t2 = *(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0));
            u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o8_float *)(t2))->v)));
            (((struct o8_float *)(t2))->v) = ((-(u0 * 1.0f)) / 480.0f);
            (((struct o1C_float *)((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0)))))->v) = ((-(((((struct o28_float *)(a4))->v)) * 0.849999964f)) / 640.0f);
            (((struct o20_float *)((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0)))))->v) = ((-(((((struct o28_float *)(a4))->v)) * 0.699999988f)) / 480.0f);
        } else {
            if (((*(signed char *)0xC7F2F08) != 0) && (t0 = *(signed char *)((a4 + 0x4)), t0 == 0)) {
                FUN_0c06233a((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0))), ((int)g_res_csel_ksel), 0x3);
            } else {
                t2 = *(signed char *)((a4 + 0x4));
                t3 = 0x46;
                if (t2 == 10) {
                } else {
                    t3 = ((*(signed char *)((0xC1525B4 + t2))) + 0x19);
                }
                FUN_0c06233a((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0))), ((int)g_res_csel_ksel), t3);
            }
            t2 = *(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0));
            t3 = 0xFFFFFFCE;
            if ((*(signed char *)((a4 + 0x3))) == 0) {
                t3 = 0x32;
            }
            (((struct o4_float *)(t2))->v) = (float)t3;
            (((struct o8_float *)((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0)))))->v) = (*(float *)0xC0A7A68);
            t2 = *(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0));
            u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o4_float *)(t2))->v)));
            (((struct o4_float *)(t2))->v) = ((-(u0 * 1.0f)) / 640.0f);
            t2 = *(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0));
            u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o8_float *)(t2))->v)));
            (((struct o8_float *)(t2))->v) = ((-(u0 * 1.0f)) / 480.0f);
            (((struct o1C_float *)((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0)))))->v) = ((-(((((struct o28_float *)(a4))->v)) * 1.0f)) / 640.0f);
            (((struct o20_float *)((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0)))))->v) = ((-(((((struct o28_float *)(a4))->v)) * 1.0f)) / 480.0f);
        }
        *(unsigned char *)(((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0))) + 0x0)) = 0x1;
        t2 = *(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0));
        t3 = (t1 << 2);
        t1 = (t1 + 0x1);
        *(unsigned short *)((t2 + 0x2)) = 0x11F;
        (((struct o24_float *)((*(int *)((((0x2E0 + a4) + t3) + 0x0)))))->v) = 1.0f;
        if ((int)t1 < (int)0x2) continue;
        break;
    }
    return 0x24;
}

int menu_ui_task_14(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t0 = *(signed char *)((a4 + 0x3));
                if (t0 == 0) {
                    t1 = *(signed char *)((a4 + 0x3));
                    if (((((struct o38_float *)(a4))->v)) > (*(float *)(((0xC152878 + (signed char)(((t1 << 1) + t1) << 2)) + 0x0)))) {
                        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - 50.0f);
                    } else {
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    }
                } else {
                    if ((*(float *)(((0xC152878 + (signed char)(((t0 << 1) + t0) << 2)) + 0x0))) > ((((struct o38_float *)(a4))->v))) {
                        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + 50.0f);
                    } else {
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    }
                }
                u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o38_float *)(a4))->v)));
                (((struct o20_float *)(a4))->v) = ((-(u0 * 1.0f)) / 640.0f);
                u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o3C_float *)(a4))->v)));
                (((struct o24_float *)(a4))->v) = ((-(u0 * 1.0f)) / 480.0f);
                return 0x24;
            }
            return obj_destroy(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned short *)((a4 + 0x6)) = 0xF;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        (((struct o20_float *)(a4))->v) = 0.0f;
        (((struct o24_float *)(a4))->v) = 0.0f;
        (((struct o28_float *)(a4))->v) = -20.0f;
        (((struct o50_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        t0 = *(signed char *)((a4 + 0x3));
        (((struct o38_float *)(a4))->v) = (*(float *)((0xC152878 + (signed char)(((t0 << 1) + t0) << 2))));
        (((struct o3C_float *)(a4))->v) = 0.0f;
        *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4)));
        menu_ui_task_14_bind_models(a4);
    }
    t0 = *(signed char *)((a4 + 0x9));
    switch (t0) {
    case 0:
        if ((*(signed char *)((a4 + 0x3))) == 0) {
            (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + 50.0f);
            t0 = *(signed char *)((a4 + 0x3));
            if ((*(float *)((0xC152860 + (signed char)(((t0 << 1) + t0) << 2)))) > ((((struct o38_float *)(a4))->v))) {
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                t0 = *(signed char *)((a4 + 0x3));
                (((struct o38_float *)(a4))->v) = (*(float *)(((0xC152860 + (signed char)(((t0 << 1) + t0) << 2)) + 0x0)));
            }
        } else {
            (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - 50.0f);
            t0 = *(signed char *)((a4 + 0x3));
            if (((((struct o38_float *)(a4))->v)) > (*(float *)((0xC152860 + (signed char)(((t0 << 1) + t0) << 2))))) {
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                t0 = *(signed char *)((a4 + 0x3));
                (((struct o38_float *)(a4))->v) = (*(float *)(((0xC152860 + (signed char)(((t0 << 1) + t0) << 2)) + 0x0)));
            }
        }
        break;
    case 1:
        if ((*(signed char *)((a4 + 0x4))) != (*(signed char *)(((0xC7E40C4 + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0)) + 0x4)))) {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4)));
        }
        if ((int)(unsigned char)(*(signed char *)0xC7F2EE4) >= (int)0x3) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x9)) = 0x0;
        }
        break;
    case 2:
        if ((*(signed char *)((a4 + 0x4))) != (*(signed char *)((((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4)))) {
            *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4)));
            *(unsigned char *)((a4 + 0x9)) = 0x0;
            t0 = *(signed char *)((a4 + 0x3));
            (((struct o38_float *)(a4))->v) = (*(float *)(((0xC152878 + (signed char)(((t0 << 1) + t0) << 2)) + 0x0)));
            menu_ui_task_14_bind_models(a4);
        } else {
            t0 = *(signed char *)((a4 + 0x3));
            if (t0 == 0) {
                t1 = *(signed char *)((a4 + 0x3));
                if (((((struct o38_float *)(a4))->v)) > (*(float *)((0xC152878 + (signed char)(((t1 << 1) + t1) << 2))))) {
                    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - 50.0f);
                } else {
                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                    t1 = *(signed char *)((a4 + 0x3));
                    (((struct o38_float *)(a4))->v) = (*(float *)(((0xC152878 + (signed char)(((t1 << 1) + t1) << 2)) + 0x0)));
                    menu_ui_task_14_bind_models(a4);
                }
            } else {
                if ((*(float *)((0xC152878 + (signed char)(((t0 << 1) + t0) << 2)))) > ((((struct o38_float *)(a4))->v))) {
                    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + 50.0f);
                } else {
                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                    t0 = *(signed char *)((a4 + 0x3));
                    (((struct o38_float *)(a4))->v) = (*(float *)(((0xC152878 + (signed char)(((t0 << 1) + t0) << 2)) + 0x0)));
                    menu_ui_task_14_bind_models(a4);
                }
            }
        }
        break;
    }
    u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o38_float *)(a4))->v)));
    (((struct o20_float *)(a4))->v) = ((-(u0 * 1.0f)) / 640.0f);
    u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o3C_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = ((-(u0 * 1.0f)) / 480.0f);
    return 0x24;
}

void menu_ui_spawn_15(void)
{
    vec12 tmpl;
    char *obj;

    tmpl = *(vec12 *)0x0C152B30;
    obj = obj_create(5, 1, 2, 0);
    if (obj) {
        *obj = 1;
        *(vec12 *)(obj + 80) = tmpl;
        *(int *)(obj + 16) = 0x0C0A7DFC;
    }
}

int menu_ui_task_15_bind_models(int a4, int a5)
{
    register float u16;
    register int t10;

    if ((signed char)a5 == 0) {
        FUN_0c06233a((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0))), ((int)g_res_csel_ksel), 0x23);
        (((struct o28_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = ((((struct o0_float *)0xC0A7E48)->v));
        t10 = (*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)));
    } else {
        FUN_0c06233a((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0))), ((int)g_res_csel_ksel), 0x25);
        (((struct o28_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = ((((struct o4_float *)0xC0A7E48)->v));
        t10 = (*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)));
    }
    (((struct o2C_float *)(t10))->v) = ((((struct o8_float *)0xC0A7E48)->v));
    *(unsigned char *)(((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0))) + 0x0)) = 0x1;
    *(unsigned short *)(((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0))) + 0x2)) = 0x11F;
    u16 = (((struct oC_float *)0xC0A7E48)->v);
    (((struct o1C_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = ((-(((((struct o28_float *)(a4))->v)) * u16)) / ((((struct o10_float *)0xC0A7E48)->v)));
    (((struct o20_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = ((-(((((struct o28_float *)(a4))->v)) * u16)) / ((((struct o14_float *)0xC0A7E48)->v)));
    (((struct o24_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = 1.0f;
    return 0x24;
}

int menu_ui_task_15(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned short *)((a4 + 0x6)) = 0x1F;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7F3051))));
        (((struct o20_float *)(a4))->v) = 0.0f;
        (((struct o24_float *)(a4))->v) = 0.0f;
        (((struct o28_float *)(a4))->v) = -15.0f;
        (((struct o50_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 0.0f;
        menu_ui_task_15_bind_models(a4, 0x0);
        menu_ui_task_15_bind_models(a4, 0x1);
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            t1 = (t1 + 0x1);
            t2 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
            u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o28_float *)(t2))->v)));
            (((struct o4_float *)(t2))->v) = ((-(u0 * 1.0f)) / 640.0f);
            t2 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
            u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o2C_float *)(t2))->v)));
            (((struct o8_float *)(t2))->v) = ((-(u0 * 1.0f)) / 480.0f);
            t0 = (t0 + 0x4);
            if ((int)t1 >= (int)0x2) {
                break;
            }
        }
        u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o38_float *)(a4))->v)));
        (((struct o20_float *)(a4))->v) = ((-(u0 * 1.0f)) / 640.0f);
        u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o3C_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = ((-(u0 * 1.0f)) / 480.0f);
    }
    t0 = *(signed char *)((a4 + 0x9));
    switch (t0) {
    case 0:
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + 50.0f);
        t0 = (((struct o2E4_int *)(a4))->v);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) - 50.0f);
        if (!(0.0f > ((((struct o28_float *)(((((struct o2E0_int *)(a4))->v))))->v)))) {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            (((struct o28_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            (((struct o28_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
        }
        break;
    case 1:
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + 50.0f);
        t0 = (((struct o2E4_int *)(a4))->v);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) - 50.0f);
        if (!(0.0f > ((((struct o28_float *)(((((struct o2E0_int *)(a4))->v))))->v)))) {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            (((struct o28_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            (((struct o28_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
        }
        break;
    case 2:
        u0 = (((struct o0_float *)0xC0A80AC)->v);
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + u0);
        t0 = (((struct o2E4_int *)(a4))->v);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + u0);
        u0 = (((struct o4_float *)0xC0A80AC)->v);
        if (!(u0 > ((((struct o2C_float *)(((((struct o2E0_int *)(a4))->v))))->v)))) {
            (((struct o2C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = u0;
            (((struct o2C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = u0;
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        }
        break;
    default:
        if ((int)(unsigned char)(*(signed char *)0xC7F2EE4) >= (int)0x3) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x9)) = 0x0;
        }
        break;
    }
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t1 = (t1 + 0x1);
        t2 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
        u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o28_float *)(t2))->v)));
        (((struct o4_float *)(t2))->v) = ((-(u0 * 1.0f)) / 640.0f);
        t2 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
        u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o2C_float *)(t2))->v)));
        (((struct o8_float *)(t2))->v) = ((-(u0 * 1.0f)) / 480.0f);
        t0 = (t0 + 0x4);
        if ((int)t1 >= (int)0x2) {
            break;
        }
    }
    u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o38_float *)(a4))->v)));
    (((struct o20_float *)(a4))->v) = ((-(u0 * 1.0f)) / 640.0f);
    u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o3C_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = ((-(u0 * 1.0f)) / 480.0f);
    return 0x24;
}
