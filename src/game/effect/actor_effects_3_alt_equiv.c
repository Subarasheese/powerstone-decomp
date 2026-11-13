/* actor objects: reset/update routines sharing the entity header (counter byte 8, rotation 44..52, velocity 56..64); exact class not identified (0c05e20c-0c05ec26) */

/* named globals (symbols.txt) */
extern char g_item_state[];
extern char g_res_item[];
struct Vec12 { int x, y, z; };
extern void item_init_hold_pose(void *obj);
void FUN_0c0624c4(char *model, void *table, int kind);
int math_rand_next(void);
float math_cos_angle16(int angle);
float math_sin_angle16(int angle);
void fx_spawn_07(float *pos, int yaw, int side);
void obj_set_mode_owner(char *e, int kind, int side);
typedef struct { float x, y, z; } VEC3;
#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define MDL(e, n) (*(char **)((e) + (n)))

static void path(char *m, int t)
{
    int k;
    float f;
    float *key, *ang;

    k = t / 4;
    f = (float)(t % 4);
    key = (float *)((char *)0x0C336470 + (signed char)(k * 12));
    F(m, 4) = key[0] + f * ((key[3] - key[0]) / 4.0f);
    F(m, 8) = key[1] + f * ((key[4] - key[1]) / 4.0f);
    F(m, 12) = key[2] + f * ((key[5] - key[2]) / 4.0f);
    ang = (float *)0x0C3364B8 + k;
    I(m, 16) = (int)((ang[0] + f * ((ang[1] - ang[0]) / 4.0f)) * 65536.0f / 360.0f + 0.5f) & 0xFFFF;
}

void FUN_0c05e424(char *obj)
{
    char *owner = *(char **)(obj + 28);
    int i;
    obj[8]++;
    obj[3] = (*(char **)(obj + 28))[3];
    obj[1] = 1;
    obj[0x105] = 1;
    obj[0x107] = 1;
    item_init_hold_pose(obj);
    for (i = 0; i < 2; i++) {
        *(struct Vec12 *)(*(char **)(obj + 736 + i * 4) + 4) = *(struct Vec12 *)0xC336440;
        *(struct Vec12 *)(*(char **)(obj + 736 + i * 4) + 16) = *(struct Vec12 *)0xC336464;
    }
    for (i = 2; i < 6; i++)
        **(char **)(obj + 736 + i * 4 + 0) = 0;
    *(int *)(obj + 0x118) = (int)owner + 0x300 + 0x580 + (short)((signed char)owner[0x71f1] * 3520);
    if (obj[11] == 0) {
        *(char *)(((int)g_item_state) + 0x315) = obj[13];
        *(char *)(((int)g_item_state) + 0x316) = 1;
        obj[11] = 1;
    }
}

void FUN_0c05e4e8(void)
{
    
}

void FUN_0c05e59e(char *e)
{
    VEC3 p;
    char *f;
    float k, a;

    f = *(char **)(e + 28);
    I(MDL(e, 0x2E4), 24) = I(MDL(e, 0x2E4), 24) + 10923;
    if (*(int *)0x0C7F307C & 1) {
        FUN_0c0624c4(MDL(e, 0x2F4) + 156, (void *)g_res_item, B(e, 0xF0) + 25);
        H(e, 0xF0) = H(e, 0xF0) + 1;
        if (H(e, 0xF0) >= 4)
            H(e, 0xF0) = 0;
        MDL(e, 0x2F4)[0] = 1;
        I(MDL(e, 0x2F4), 24) = math_rand_next() % 0x10000;
    } else {
        MDL(e, 0x2F4)[0] = 0;
    }
    H(e, 0xEC) = H(e, 0xEC) + 1;
    if (H(e, 0xEC) >= 20)
        H(e, 0xEC) = 0;
    path(MDL(e, 0x2E8), H(e, 0xEC));
    path(MDL(e, 0x2EC), (H(e, 0xEC) + 7) % 20);
    path(MDL(e, 0x2F0), (H(e, 0xEC) + 14) % 20);
    if (H(e, 0xEE) == 0) {
        k = F(f, 0x7298);
        p = *(VEC3 *)(f + 32);
        a = math_cos_angle16(0x14000 - I(f, 48)) * 185.0f;
        a = a - math_cos_angle16(0x10000 - I(f, 48)) * 13.0f;
        p.x = p.x + k * a;
        a = math_sin_angle16(0x14000 - I(f, 48)) * 185.0f;
        a = a - math_sin_angle16(0x10000 - I(f, 48)) * 13.0f;
        p.z = p.z + k * a;
        p.y = p.y + (B(f, 0x71BC) == 2 ? 92.0f : 80.0f) * k;
        fx_spawn_07(&p.x, I(f, 48), B(f, 3));
        H(e, 0xF2) = H(e, 0xF2) - 1;
        if (H(e, 0xF2) < 0) {
            H(e, 0xF2) = 0;
            obj_set_mode_owner(e, 4, B(e, 3));
            return;
        }
    }
    H(e, 0xEE) = H(e, 0xEE) + 1;
    if (H(e, 0xEE) >= 5)
        H(e, 0xEE) = 0;
}
