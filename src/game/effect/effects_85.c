/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c040550-0c040a84) */

struct vec3i { int x, y, z; };
extern unsigned char *obj_create(int, int, int, int);
extern int FUN_0c06233a(unsigned char *, int, int);
extern float math_cos_angle16(int);
extern float math_rand_float(void);
extern float math_sin_angle16(int);
extern int fx_tick_040550(void);
#define RND(n) ((unsigned int)(math_rand_float() * 255.0f) % (n))
struct o2E0_int { char p[0x2E0]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
int math_vec3_add(int, int, int);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2C_float { char p[0x2C]; float v; };
int FUN_0c0e6fe8(void);

void fx_spawn_040550(char obj, char arg1, struct vec3i *arg2)
{
    unsigned char *burst;
    unsigned char *first_child;
    unsigned char *child;
    int model_base;
    int i;
    int ang;
    float speed;
    float lift;

    burst = obj_create(5, 1, 5, 0);
    if (!burst)
        return;
    burst[0] = 1;
    burst[3] = obj;
    burst[1] = 1;
    *(short *)(burst + 6) = 15;
    burst[5] = 25;
    *(void **)(burst + 16) = (void *)fx_tick_040550;
    *(struct vec3i *)(burst + 32) = *arg2;
    *(struct vec3i *)(burst + 80) = *(struct vec3i *)0xC149AEC;
    *(struct vec3i *)(burst + 44) = *(struct vec3i *)0xC149AF8;
    *(int *)(burst + 280) = 0;
    first_child = *(unsigned char **)(burst + 736);
    first_child[0] = 1;
    FUN_0c06233a(first_child, (signed char)(obj * 24) + 0xC6002D0, arg1 + 9);
    *(short *)(first_child + 2) = 543;
    *(struct vec3i *)(first_child + 28) = *(struct vec3i *)0xC149AE0;
    *(struct vec3i *)(first_child + 16) = *(struct vec3i *)0xC149AF8;
    *(int *)(first_child + 20) = (int)((float)(RND(36) * 10) * 65536.0f / 360.0f);
    *(struct vec3i *)(first_child + 68) = *(struct vec3i *)0xC149AEC;
    *(float *)(first_child + 48) = 0.125f;
    *(float *)(first_child + 44) = 0.125f;
    *(float *)(first_child + 40) = 0.125f;
    *(float *)(first_child + 64) = 10.0f;
    model_base = (signed char)(obj * 24) + 0xC6002D0;
    for (i = 1; i < 5; i++) {
        child = *(unsigned char **)(burst + 736 + 4 * i);
        child[0] = 0;
        *(float *)(child + 64) = 0.0f;
        FUN_0c06233a(child, model_base, i % 2 + 14);
        *(short *)(child + 2) = 575;
        *(struct vec3i *)(child + 4) = *(struct vec3i *)0xC149AE0;
        *(struct vec3i *)(child + 28) = *(struct vec3i *)0xC149AEC;
        *(struct vec3i *)(child + 16) = *(struct vec3i *)0xC149AF8;
        *(int *)(child + 24) = (int)((float)(RND(36) * 10) * 65536.0f / 360.0f);
        *(struct vec3i *)(child + 68) = *(struct vec3i *)0xC149AEC;
        ang = (int)((float)RND(16) * 1474560.0f / 360.0f);
        speed = (float)RND(10) + 10.0f;
        *(float *)(child + 40) = math_sin_angle16(ang) * speed;
        *(float *)(child + 48) = math_cos_angle16(ang) * speed;
        lift = (float)RND(20) + 20.0f;
        *(float *)(child + 44) = lift;
        *(float *)(child + 56) = -(lift / 10.0f);
        *(int *)(child + 52) = RND(4) + 4;
    }
}

int FUN_0c0408d0(int a4)
{
    register int t0;
    register float u5;
    register float u8;

    t0 = (((struct o2E0_int *)(a4))->v);
    if ((*(signed char *)((t0 + 0x0))) == 0) {
        return 0x0;
    }
    math_vec3_add((t0 + 0x1C), (t0 + 0x1C), (t0 + 0x28));
    if (((((struct o40_float *)(t0))->v)) != 0.0f) {
        (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) - 1.0f);
    } else {
        u5 = *(float *)0xC04099C;
        (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - u5);
        (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - u5);
        u8 = (((struct o4C_float *)(t0))->v);
        (((struct o4C_float *)(t0))->v) = (u8 - u5);
        if (!((u8 - u5) > 0.0f)) {
            *(unsigned char *)((t0 + 0x0)) = 0x0;
        }
    }
    return 0x1;
}

int FUN_0c040938(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t6;
    register int t46;
    register int t47;
    register float u48;
    register float u19;
    register float u4;
    register float u41;
    register float u34;
    register float u25;

    *(unsigned int *)(((int)stk + 0)) = ((0x2E0 + a4) + 0x4);
    t0 = ((0x2E0 + a4) + 0x4);
    t1 = a4;
    t2 = 0x0;
    t3 = 0x1;
    for (;;) {
        t5 = *(int *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 0)) = (t5 + 0x4);
        t6 = *(int *)((((t5 + 0x4) - 4) + 0x0));
        t46 = t0;
        t47 = t1;
        u48 = u4;
        if (((((struct o1C_float *)(t6))->v)) != 0.0f) {
            t2 = (t2 + 0x1);
            if (((((struct o40_float *)(t6))->v)) != 0.0f) {
                (((struct o40_float *)(t6))->v) = (((((struct o40_float *)(t6))->v)) - 1.0f);
                t46 = t0;
                t47 = t1;
                u41 = u4;
            } else {
                t1 = t6;
                *(unsigned char *)((t6 + 0x0)) = 0x1;
                t1 = (t1 + 0x4);
                math_vec3_add(t1, (t6 + 0x4), (t6 + 0x28));
                t0 = t6;
                t0 = (t0 + 0x38);
                (((struct o2C_float *)(t6))->v) = (((((struct o2C_float *)(t6))->v)) + (*(float *)((t0 + 0x0))));
                t0 = (*(int *)((t6 + 0x34)));
                if ((float)t0 == 0.0f) {
                    (((struct o44_float *)(t6))->v) = (((((struct o44_float *)(t6))->v)) - 0.099999994f);
                    u4 = ((((struct o48_float *)(t6))->v));
                    u4 = (u4 - 0.099999994f);
                    (((struct o48_float *)(t6))->v) = u4;
                    (((struct o4C_float *)(t6))->v) = (((((struct o4C_float *)(t6))->v)) - 0.099999994f);
                    u4 = ((((struct o1C_float *)(t6))->v));
                    u4 = (u4 - 0.099999994f);
                    (((struct o1C_float *)(t6))->v) = u4;
                    u19 = (((struct o20_float *)(t6))->v);
                    (((struct o20_float *)(t6))->v) = (u19 - 0.099999994f);
                    if (!((u19 - 0.099999994f) > 0.0f)) {
                        t0 = 0xC0E6FE8;
                        FUN_0c0e6fe8();
                        FUN_0c0e6fe8();
                        *(unsigned char *)((t6 + 0x0)) = 0x0;
                    } else {
                        t46 = t0;
                        u25 = u4;
                    }
                    u34 = u25;
                } else {
                    t0 = (*(int *)((t6 + 0x34)));
                    t0 = (t0 - 1);
                    *(unsigned int *)((t6 + 0x34)) = t0;
                    t46 = t0;
                }
                u41 = u34;
            }
            u48 = u41;
        }
        u4 = u48;
        t3 = (t3 + 0x1);
        t0 = t46;
        t1 = t47;
        if ((int)t3 >= (int)0x5) {
            return ((int (*)(int, int, int, int))(0xC040A28))(t1, a5, a6, a7);
        }
    }
}
