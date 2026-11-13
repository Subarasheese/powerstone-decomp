/* UI task objects (spawn/update pairs) of the player-select and stage-select screens (0c0a8600-0c0a8d6c) */

/* named globals (symbols.txt) */
extern char g_res_csel_csel[];
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int obj_destroy(int, int, int, int);
int FUN_0c06231c(int, int, int);
int FUN_0c0623a6(int, int, int);
struct Vec3f { float x, y, z; };
struct Obj {
    char live;
    char p1[15];
    void (*update)(void);   /* 16 */
    char p20[60];
    struct Vec3f pos;          /* 80 */
};
struct Obj *obj_create(int, int, int, int);
void menu_ui_task_22(void);

int menu_ui_task_21(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
        if ((int)((((struct oF0_short *)(a4))->v)) >= (int)0x5) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        t0 = 0x14;
        if ((*(signed char *)((a4 + 0x3))) == 0) {
            t0 = 0x1A;
        }
        return FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((int)g_res_csel_csel), (t0 + (*(signed char *)((a4 + 0xF0)))));
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    *(unsigned short *)((a4 + 0x6)) = 0x1F;
    *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC7E40C8 + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0))));
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    (((struct o28_float *)(a4))->v) = 0.0f;
    (((struct o24_float *)(a4))->v) = 0.0f;
    (((struct o20_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 1.0f;
    (((struct o54_float *)(a4))->v) = 1.0f;
    (((struct o50_float *)(a4))->v) = 1.0f;
    t0 = 0x14;
    if ((*(signed char *)((a4 + 0x3))) == 0) {
        t0 = 0x1A;
    }
    FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), ((int)g_res_csel_csel), t0);
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
    return 0xF;
}

void menu_ui_spawn_22(void)
{
    struct Vec3f pos;
    struct Obj *obj;
    pos = *(struct Vec3f *)0xC152BB4;
    obj = obj_create(5, 1, 4, 0);
    if (obj != 0) {
        obj->live = 1;
        obj->pos = pos;
        obj->update = menu_ui_task_22;
    }
}
