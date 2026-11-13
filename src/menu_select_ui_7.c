/* UI task objects (spawn/update pairs) of the player-select and stage-select screens (0c0a8d6c-0c0a99d0) */

/* named globals (symbols.txt) */
extern char g_res_csel_ssel[];
typedef struct { int a, b, c; } vec12;
extern char *obj_create(int, int, int, int);
void obj_destroy(char *e, int a);
void FUN_0c0623a6(char *model, void *table, int kind);
typedef struct { float x, y, z; } VEC3;
#define G ((signed char *)0x0C7F302C)
#define MDL(e, i) (*(char **)((e) + 0x2E0 + (i) * 4))
#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define REC ((signed char *)0x0C7F2DF0 + (unsigned char)((unsigned short)(G[69] + 255) * (unsigned short)120))
typedef struct { int x, y, z; } Vec12;
struct V3 { float x, y, z; };
struct Sub {
    char field_00;
    char pad_01;
    short field_02;
    float screen_x, screen_y;
    char pad_0c[20 - 12];
    int field_14;
    char pad_18[28 - 24];
    float scale_x, scale_y, scale_z;
    struct V3 rec;
};
struct Obj {
    char pad_01[4];
    signed char kind4;
    char pad_0c[40 - 5];
    float size;
    char pad_18[736 - 44];
    struct Sub *sub[8];
};
void FUN_0c06233a(struct Sub *dst, int tbl, int type);
typedef struct { int w0, w1, w2; } vec3i;
extern void menu_ui_task_24(void);

void menu_ui_spawn_23(int arg)
{
    vec12 tmpl;
    char *obj;

    tmpl = *(vec12 *)0x0C152BF0;
    obj = obj_create(5, 1, 10, 0);
    if (obj) {
        *obj = 1;
        *(vec12 *)(obj + 80) = tmpl;
        *(int *)(obj + 16) = 0x0C0A8DB2;
        *(int *)(obj + 28) = arg;
    }
}

void menu_ui_task_23(char *e)
{
    struct { int i; int k; VEC3 scale; VEC3 base; } s;
    int i, j;
    float *t;
    signed char m;
    unsigned char *q;

    s.base = *(VEC3 *)0x0C152BFC;
    s.scale = *(VEC3 *)0x0C152C08;
    if (*(int *)(e + 28) == 0) {
        obj_destroy(e, 0);
        return;
    }
    switch (B(e, 8)) {
    case 0:
        B(e, 8) = B(e, 8) + 1;
        B(e, 9) = 0;
        B(e, 1) = 1;
        H(e, 6) = 15;
        B(e, 5) = 25;
        for (s.i = 0; s.i < 8; s.i++) {
            s.k = s.i * 4;
            FUN_0c0623a6(MDL(e, s.i), (void *)g_res_csel_ssel, 0);
            H(MDL(e, s.i), 2) = 15;
            *(VEC3 *)(MDL(e, s.i) + 28) = s.scale;
            t = (float *)((char *)0x0C152970 + (unsigned char)(s.i * 12));
            F(MDL(e, s.i), 4) = t[0];
            F(MDL(e, s.i), 8) = t[1] + 650.0f;
            F(MDL(e, s.i), 12) = t[2];
        }
        FUN_0c0623a6(MDL(e, 8), (void *)g_res_csel_ssel, 8);
        H(MDL(e, 8), 2) = 47;
        *(VEC3 *)(MDL(e, 8) + 28) = s.scale;
        F(MDL(e, 8), 8) = F(MDL(e, 8), 8) + 650.0f;
        FUN_0c0623a6(MDL(e, 9), (void *)g_res_csel_ssel, 9);
        H(MDL(e, 9), 2) = 15;
        *(VEC3 *)(MDL(e, 9) + 28) = s.scale;
        F(MDL(e, 9), 4) = -485.0f;
        F(MDL(e, 9), 8) = 205.0f;
        F(MDL(e, 9), 12) = -300.0f;
        switch ((unsigned char)G[69]) {
        case 1:
        case 2:
            if (REC[86] >= 7)
                MDL(e, 9)[0] = 0;
            if (REC[86] >= 7)
                return;
            for (j = REC[86]; j < 7; j++)
                MDL(e, ((signed char *)0x0C1525BF + (signed char)(REC[85] * 9))[j])[0] = 1;
            return;
        case 0:
        case 3:
            for (i = 0; i < 8; i++)
                MDL(e, i)[0] = 1;
            m = *(signed char *)0x0C7F4751;
            if (m == 0)
                return;
            if (m == 1) {
                MDL(e, 8)[0] = 1;
                return;
            }
            if (m == 2 || m == 3) {
                MDL(e, 8)[0] = 1;
                MDL(e, 9)[0] = 1;
            }
            return;
        }
        return;
    case 1:
        switch (B(e, 9)) {
        case 0:
            B(e, 9) = B(e, 9) + 1;
            H(e, 0xEC) = 20;
        case 1:
            H(e, 0xEC) = H(e, 0xEC) - 1;
            if (H(e, 0xEC) <= 0) {
                B(e, 8) = B(e, 8) + 1;
                B(e, 9) = 0;
            }
            switch ((unsigned char)G[69]) {
            case 0:
            case 3:
                for (i = 0; i < 8; i++)
                    F(MDL(e, i), 8) = F(MDL(e, i), 8) - 30.0f;
                m = *(signed char *)0x0C7F4751;
                if (m == 1 || m == 2 || m == 3)
                    F(MDL(e, 8), 8) = F(MDL(e, 8), 8) - 30.0f;
                break;
            case 1:
            case 2:
                for (i = 0; i < 9; i++)
                    if (!(*(short *)(REC + 88) & (1 << i)))
                        F(MDL(e, i), 8) = F(MDL(e, i), 8) - 30.0f;
                break;
            }
            break;
        default:
            B(e, 8) = B(e, 8) + 1;
            B(e, 9) = 0;
            H(e, 0xEC) = 0;
            H(e, 0xEE) = 0;
            break;
        }
        I(e, 48) = I(MDL(*(char **)(e + 28), 0), 20) & 0xFFFF;
        return;
    case 2:
        q = (unsigned char *)0x0C7F2EE4;
        if (q[2] >= 3 && q[3] >= 3) {
            B(e, 8) = B(e, 8) + 1;
            B(e, 9) = 0;
        }
        for (i = 0; i < 8; i++) {
            I(MDL(e, i), 20) = I(MDL(e, i), 20) + 256;
            I(MDL(e, i), 20) = I(MDL(e, i), 20) & 0xFFFF;
        }
        I(e, 48) = I(MDL(*(char **)(e + 28), 0), 20) & 0xFFFF;
        if (q[2] < 3)
            return;
        if (q[3] != 2)
            return;
        if (q[4] < 1)
            return;
        H(e, 0xEE) = H(e, 0xEE) + 1;
        if (REC[86] < 7)
            return;
        if (H(e, 0xEE) < 30)
            MDL(e, 9)[0] = MDL(e, 9)[0] ^ 1;
        else
            MDL(e, 9)[0] = 1;
        return;
    case 3:
        if (B(e, 9) == 0) {
            H(e, 0xEC) = 20;
            H(e, 0xEE) = H(e, 0xEE) + 1;
        }
        H(e, 0xEC) = H(e, 0xEC) - 1;
        if (H(e, 0xEC) <= 0)
            B(e, 8) = B(e, 8) + 1;
        switch ((unsigned char)G[69]) {
        case 0:
        case 3:
            for (i = 0; i < 10; i++)
                F(MDL(e, i), 8) = F(MDL(e, i), 8) - 30.0f;
            break;
        case 1:
        case 2:
            for (i = 0; i < 9; i++)
                if (!(*(short *)(REC + 88) & (1 << i)))
                    F(MDL(e, i), 8) = F(MDL(e, i), 8) - 30.0f;
            break;
        }
        return;
    default:
        obj_destroy(e, 9);
        return;
    }
}

void menu_stage_select_spawn_marker(int link)
{
    Vec12 tmpl;
    char *obj;

    tmpl = *(Vec12 *)0x0C152C14;
    obj = obj_create(5, 1, 3, 0);
    if (obj) {
        *obj = 1;
        *(Vec12 *)(obj + 80) = tmpl;
        *(int *)(obj + 16) = 0x0C0A94F0;
        *(int *)(obj + 28) = link;
    }
}

void menu_ui_setup_subobject(struct Obj *obj, int n, int flag)
{
    int type;
    struct Sub *sub_obj;
    if (n >= 2)
        type = 35;
    else
        type = *(signed char *)(0xC152C2C + n * 16) + obj->kind4;
    FUN_0c06233a(obj->sub[n], ((int)g_res_csel_ssel), type);
    obj->sub[n]->field_00 = 1;
    obj->sub[n]->field_02 = 287;
    obj->sub[n]->rec = *(struct V3 *)(0xC152C20 + n * 16);
    if (n == 2) {
        obj->sub[n]->rec.x = obj->sub[n]->rec.x * (float)(flag != 0 ? -1 : 1);
        obj->sub[n]->field_14 = flag != 0 ? 0x8000 : 0;
    }
    sub_obj = obj->sub[n];
    sub_obj->screen_x = -(obj->size * sub_obj->rec.x * 1.0f) / 640.0f;
    sub_obj = obj->sub[n];
    sub_obj->screen_y = -(obj->size * sub_obj->rec.y * 1.0f) / 480.0f;
    if (n == 0) {
        obj->sub[n]->scale_x = -(obj->size * 0.899999976f) / 640.0f;
        obj->sub[n]->scale_y = -(obj->size * 0.899999976f) / 480.0f;
    } else {
        obj->sub[n]->scale_x = -(obj->size * 1.0f) / 640.0f;
        obj->sub[n]->scale_y = -(obj->size * 1.0f) / 480.0f;
    }
    obj->sub[n]->scale_z = 1.0f;
}

void menu_ui_spawn_24(void)
{
    vec3i tmpl;
    char *obj;

    tmpl = *(vec3i *)0x0C152C50;
    obj = obj_create(5, 1, 2, 0);
    if (obj) {
        *obj = 1;
        *(vec3i *)(obj + 80) = tmpl;
        *(void (**)(void))(obj + 16) = menu_ui_task_24;
    }
}
