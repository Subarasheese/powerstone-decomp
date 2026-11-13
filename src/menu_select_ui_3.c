/* UI task objects (spawn/update pairs) of the player-select and stage-select screens (0c0a80c4-0c0a8388) */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int obj_destroy(int, int, int, int);
int FUN_0c0623a6(int, int, int);
int FUN_0c0e6fe8(float);
struct vec3i { int x, y, z; };
struct obj_rec { char used; char pad[15]; void *handler; char pad2[60]; struct vec3i template; };
extern int menu_ui_task_17(void);
extern struct obj_rec *obj_create(int, int, int, int);
#define SRC (*(struct vec3i *)0xC152B3C)

int menu_ui_task_16(int a4, int a5, int a6, int a7, float f4)
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
        *(unsigned short *)((a4 + 0x6)) = 0xF;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        *(unsigned char *)((a4 + 0x4)) = (*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0)));
        FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A48, (((*(signed char *)((a4 + 0x3))) << 1) + 0xB));
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
        (((struct o28_float *)(a4))->v) = 0.0f;
        (((struct o24_float *)(a4))->v) = 0.0f;
        (((struct o20_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o50_float *)(a4))->v) = 1.0f;
        *(unsigned int *)((a4 + 0x2C)) = (*(int *)((((((struct o2E0_int *)(a4))->v)) + 0x10)));
        *(unsigned int *)((((((struct o2E0_int *)(a4))->v)) + 0x10)) = 0x0;
        *(volatile int *)((a4 + 0x2E0));
        FUN_0c0e6fe8(0.0f);
        t0 = *(signed char *)((a4 + 0x4));
        (((struct o20_float *)(a4))->v) = (*(float *)((0xC152644 + (unsigned char)(((t0 << 1) + t0) << 2))));
        (((struct o4_float *)(((((struct o2E0_int *)(a4))->v))))->v) = f4;
        (((struct o8_float *)(((((struct o2E0_int *)(a4))->v))))->v) = f4;
        (((struct oC_float *)(((((struct o2E0_int *)(a4))->v))))->v) = f4;
    }
    t0 = *(signed char *)((a4 + 0x4));
    t1 = 0x0;
    if (((int)t0 >= (int)0x1) && ((int)t0 <= (int)0x8)) {
        t1 = 0x1;
    }
    *(unsigned char *)((a4 + 0x1)) = t1;
    if (((*(signed char *)0xC7F3074) & ((*(signed char *)((a4 + 0x3))) + 0x1)) != 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
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
        }
        *(unsigned char *)((a4 + 0x4)) = (*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0)));
    }
    t0 = *(signed char *)((a4 + 0x4));
    if (((((struct o20_float *)(a4))->v)) != (*(float *)((0xC152644 + (unsigned char)(((t0 << 1) + t0) << 2))))) {
        u0 = *(float *)0xC0A836C;
        t0 = *(signed char *)((a4 + 0x4));
        if (((((struct o20_float *)(a4))->v)) > (*(float *)(((0xC152644 + (unsigned char)(((t0 << 1) + t0) << 2)) + 0x0)))) {
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) - u0);
            t0 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) - 0x1000);
            t0 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) & 0xFFFF);
            t0 = *(signed char *)((a4 + 0x4));
            if (!((*(float *)((0xC152644 + (unsigned char)(((t0 << 1) + t0) << 2)))) > ((((struct o20_float *)(a4))->v)))) {
            } else {
                t0 = *(signed char *)((a4 + 0x4));
                (((struct o20_float *)(a4))->v) = (*(float *)(((0xC152644 + (unsigned char)(((t0 << 1) + t0) << 2)) + 0x0)));
            }
        } else {
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + u0);
            t0 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) + 0x1000);
            t0 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) & 0xFFFF);
            t0 = *(signed char *)((a4 + 0x4));
            if (((((struct o20_float *)(a4))->v)) > (*(float *)((0xC152644 + (unsigned char)(((t0 << 1) + t0) << 2))))) {
                t0 = *(signed char *)((a4 + 0x4));
                (((struct o20_float *)(a4))->v) = (*(float *)(((0xC152644 + (unsigned char)(((t0 << 1) + t0) << 2)) + 0x0)));
            }
        }
    }
    return 0x20;
}

void menu_ui_spawn_17(void)
{
    struct vec3i template;
    struct obj_rec *item;

    template = SRC;
    item = obj_create(5, 1, 10, 0);
    if (item) {
        item->used = 1;
        item->template = template;
        item->handler = (void *)menu_ui_task_17;
    }
}
