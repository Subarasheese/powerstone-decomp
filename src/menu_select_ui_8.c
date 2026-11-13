/* UI task objects (spawn/update pairs) of the player-select and stage-select screens (0c0a99d0-0c0a9d9c) */

/* named globals (symbols.txt) */
extern char g_res_csel_ksel[];
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c06233a(int, int, int);
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_destroy(int, int, int, int);
typedef struct { int x, y, z; } vec3_int;
extern char *obj_create(int, int, int, int);
extern void menu_ui_task_25(void);

int menu_ui_task_24_bind_models(int a4, int a5);

int menu_ui_task_24_bind_models(int a4, int a5)
{
    register float u16;
    register int t10;

    if ((signed char)a5 == 0) {
        FUN_0c06233a((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0))), ((int)g_res_csel_ksel), 0x24);
        (((struct o28_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = ((((struct o0_float *)0xC0A9AE0)->v));
        t10 = (*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)));
    } else {
        FUN_0c06233a((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0))), ((int)g_res_csel_ksel), 0x25);
        (((struct o28_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = ((((struct o4_float *)0xC0A9AE0)->v));
        t10 = (*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)));
    }
    (((struct o2C_float *)(t10))->v) = ((((struct o8_float *)0xC0A9AE0)->v));
    *(unsigned char *)(((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0))) + 0x0)) = 0x1;
    *(unsigned short *)(((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0))) + 0x2)) = 0x11F;
    u16 = (((struct oC_float *)0xC0A9AE0)->v);
    (((struct o1C_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = ((-(((((struct o28_float *)(a4))->v)) * u16)) / ((((struct o10_float *)0xC0A9AE0)->v)));
    (((struct o20_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = ((-(((((struct o28_float *)(a4))->v)) * u16)) / ((((struct o14_float *)0xC0A9AE0)->v)));
    (((struct o24_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = 1.0f;
    return 0x24;
}

int menu_ui_task_24(int a4, int a5, int a6, int a7, float f4)
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
        (((struct o28_float *)(a4))->v) = -50.0f;
        (((struct o50_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 0.0f;
        menu_ui_task_24_bind_models(a4, 0x0);
        menu_ui_task_24_bind_models(a4, 0x1);
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
        u0 = (((struct o0_float *)0xC0A9D7C)->v);
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + u0);
        t0 = (((struct o2E4_int *)(a4))->v);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + u0);
        u0 = (((struct o4_float *)0xC0A9D7C)->v);
        if (!(u0 > ((((struct o2C_float *)(((((struct o2E0_int *)(a4))->v))))->v)))) {
            (((struct o2C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = u0;
            (((struct o2C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = u0;
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        }
        break;
    default:
        if ((unsigned char)(*(signed char *)0xC7F2EE5) == 3) {
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

void menu_ui_spawn_25(char player_index, char short_a, char short_b)
{
    vec3_int tmpl;
    char *obj;

    tmpl = *(vec3_int *)0x0C152C5C;
    obj = obj_create(5, 1, 8, 0);
    if (obj) {
        *obj = 1;
        *(vec3_int *)(obj + 80) = tmpl;
        *(void (**)(void))(obj + 16) = menu_ui_task_25;
        obj[3] = player_index;
        *(short *)(obj + 240) = short_a;
        *(short *)(obj + 242) = short_b;
    }
}
