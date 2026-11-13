/* attract/demo screen objects (bank SYUKYAKU/DEMO COMN) (0c029ec4-0c02a1f4) */

/* named globals (symbols.txt) */
extern char g_res_syukyaku[];
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int obj_destroy(int);
float math_rand_float(void);
struct Kid {
    char pad0[4];
    float vel_a;               /* 0x04 */
    float vel_b;               /* 0x08 */
    char padc[0x18 - 0xC];
    int cur;                /* 0x18 */
    char pad1c[0x38 - 0x1C];
    int base;               /* 0x38 */
    int step;               /* 0x3C */
};
struct Obj {
    char pad0[6];
    short flags;            /* 0x06 */
    signed char state;      /* 0x08 */
    char pad9[0x60 - 9];
    float scale[3];         /* 0x60 */
    char pad6c[0xEC - 0x6C];
    short age;              /* 0xEC */
    short timer;            /* 0xEE */
    char padf0[0x2DC - 0xF0];
    signed char nkids;      /* 0x2DC */
    char pad2dd[3];
    struct Kid *kid[1];     /* 0x2E0 */
};

int FUN_0c029ec4(void)
{
    register int t0;
    register int t2;
    register int t6;
    register int t4;
    register int t1;

    t0 = 0x5;
    for (;;) {
        t2 = obj_create(0x5, 0x1, 0xA);
        t6 = t2;
        if (t2 != 0) {
            *(unsigned int *)((t2 + 0x10)) = 0xC029BC0;
            *(unsigned char *)((t2 + 0x0)) = 0x1;
            *(unsigned char *)((t2 + 0x3)) = 0x2;
            *(unsigned char *)((t2 + 0x1)) = 0x1;
            *(unsigned short *)((t2 + 0x6)) = 0xF;
            *(unsigned char *)((t2 + 0x5)) = 0x0;
            (((struct o28_float *)(t2))->v) = 0.0f;
            (((struct o24_float *)(t2))->v) = 0.0f;
            (((struct o20_float *)(t2))->v) = 0.0f;
            *(unsigned int *)((t2 + 0x34)) = 0x0;
            *(unsigned int *)((t2 + 0x30)) = 0x0;
            *(unsigned int *)((t2 + 0x2C)) = 0x0;
            t1 = 0x0;
            for (;;) {
                if ((int)t1 >= (int)(*(signed char *)((t2 + 0x2DC)))) {
                    break;
                }
                t4 = *(int *)((((t1 << 2) + (0x2E0 + t2)) + 0x0));
                *(unsigned char *)((t4 + 0x0)) = 0x1;
                *(unsigned char *)((t4 + 0x1)) = 0x0;
                *(unsigned short *)((t4 + 0x2)) = 0x1F;
                FUN_0c06233a(t4, ((int)g_res_syukyaku), 0x49);
                t1 = (t1 + 0x1);
            }
            t6 = 0x2DC;
        }
        t0 = (t0 - 0x1);
        if (t0 == 0) {
            break;
        }
    }
    return t6;
}

void demo_tick_jitter_sparkle(struct Obj *obj)
{
    int idx;
    struct Kid *child;
    float flicker;

    if (obj->state == 0) {
        obj->flags = obj->flags | 0x200;
        obj->state = obj->state + 1;
    }
    if (obj->timer > 0) {
        obj->timer = obj->timer - 1;
        if (obj->timer == 0) {
            for (idx = 0; idx < obj->nkids; idx++) {
                child = obj->kid[idx];
                child->cur = child->base;
                child->vel_b = (float)(obj->age % 3 - 1) * (float)((unsigned)(math_rand_float() * 255.0f) % 3);
                child->vel_a = (float)(obj->age % 3 - 1) * (float)((unsigned)(math_rand_float() * 255.0f) % 2);
            }
        } else {
            for (idx = 0; idx < obj->nkids; idx++) {
                child = obj->kid[idx];
                child->cur = child->cur + child->step;
                child->vel_b = (float)(obj->age % 3 - 1) * (float)((unsigned)(math_rand_float() * 255.0f) % 3);
                child->vel_a = (float)(obj->age % 3 - 1) * (float)((unsigned)(math_rand_float() * 255.0f) % 2);
            }
        }
    }
    flicker = ((unsigned)(math_rand_float() * 255.0f) % 8 == 0) ? *(float *)0xC02A1EC : 1.0f;
    obj->scale[2] = flicker;
    obj->scale[1] = flicker;
    obj->scale[0] = flicker;
    obj->age = obj->age - 1;
    if (obj->age <= 0) {
        obj_destroy((int)obj);
    }
}
