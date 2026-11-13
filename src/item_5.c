/* item objects (class 2): create, modes, held/thrown ticks; consecutive rows are one module game_item (0c05b6dc-0c05c1c0) */

/* named globals (symbols.txt) */
extern char g_item_player_flags[];
extern char g_item_state[];
typedef struct { int x, y, z; } S12;
extern int FUN_0c0555dc(void);
extern int obj_destroy(void *);
extern int item_draw_marker(void *);
extern int FUN_0c05ae26(void *);
extern int item_tick_thrown(void *);
extern int item_tick_held(void *);
extern int FUN_0c05b9a4(void *);
extern int FUN_0c05b9e4(void *);
extern void obj_set_mode_owner(void *, int, int);
extern float math_sin_angle16(int);
extern int math_rand_next(void);
extern void fx_spawn_item_sparkle(void *);
extern void FUN_0c0e21b0(void *, void *);
#define ST (*(signed char *)(actor + 8))
#define CNT (*(short *)(actor + 0xEC))
#define TIMER (*(short *)(actor + 0xEE))
#define MODE (*(signed char *)(actor + 781))
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
float math_cos_angle16(int);
int math_rand_next(void);
float math_sin_angle16(int);
int FUN_0c0e6fe8(int);

void item_tick(char *actor)
{
    char *child;
    char *owner;
    int phase_a, phase_b;

    if (FUN_0c0555dc() != 0) {
        obj_destroy(actor);
        return;
    }
    if (MODE == 5 || MODE == 13) {
        item_draw_marker(actor);
        *(short *)(actor + 242) = *(short *)(actor + 242) - 1;
        if (*(short *)(actor + 242) < 0) {
            *(short *)(actor + 242) = 0;
        }
    }
    if (MODE == 16 || MODE == 0) {
        *(char *)(((int)g_item_player_flags) + actor[13]) = 1;
    }
    switch (MODE) {
    case 0:
        if (ST == 0) {
            ST = ST + 1;
            TIMER = 0;
            *(int *)(actor + 44) = 0;
            *(int *)(actor + 52) = 0;
            *(S12 *)(actor + 56) = *(S12 *)0xC336268;
            *(S12 *)(actor + 68) = *(S12 *)0xC336280;
            actor[261] = 1;
            actor[263] = 0;
        } else if (ST == 1) {
            CNT = CNT + 1;
            child = *(char **)(actor + 736);
            *(float *)(child + 8) = 50.0f + 10.0f * math_sin_angle16((int)((float)(CNT * 6) * 65536.0f / 360.0f + 0.5f) & 0xFFFF);
            *(int *)(*(char **)(actor + 736) + 20) += 182;
            phase_a = CNT % 30;
            phase_b = math_rand_next() % 30;
            if (phase_a == phase_b) {
                fx_spawn_item_sparkle(actor + 32);
            }
            if (*(float *)(actor + 628) > 0.0f) {
                *(float *)(actor + 60) = 0.0f;
            }
            if (actor[784] == 0 && actor[785] == 0) {
                TIMER = TIMER + 1;
                if (TIMER >= 300) {
                    if (TIMER > 360) {
                        *(char *)(((int)g_item_state) + 789) = actor[13];
                        *(char *)(((int)g_item_state) + 790) = 1;
                        obj_set_mode_owner(actor, 3, 2);
                        return;
                    }
                    actor[1] = CNT % 2;
                }
            } else {
                actor[1] = 1;
                TIMER = 0;
            }
            FUN_0c0e21b0(actor + 32, actor + 56);
            FUN_0c0e21b0(actor + 56, actor + 68);
        }
        break;
    case 4:
        item_tick_thrown(actor);
        break;
    case 5:
        item_tick_held(actor);
        break;
    case 13:
        owner = *(char **)(actor + 28);
        if (owner[29238] == 0) {
            obj_set_mode_owner(actor, 4, actor[3]);
            return;
        }
        switch (ST) {
        case 0:
            FUN_0c05b9a4(actor);
            break;
        case 1:
            FUN_0c05b9e4(actor);
            break;
        }
        *(char **)(owner + 29132) = actor;
        break;
    case 16:
        FUN_0c05ae26(actor);
        break;
    default:
        obj_destroy(actor);
        break;
    }
}

int FUN_0c05bcde(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC05BE3A))(a4, a5, a6, a7);
        }
        if (((((struct o274_float *)(a4))->v)) > 0.0f) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            return 0xEC;
        }
        return ((int (*)(int, int, int, int))(0xC05BE0C))(a4, a5, a6, a7);
    }
    t0 = *(int *)((a4 + 0x1C));
    *(unsigned char *)((a4 + 0x3)) = 0x2;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned int *)((a4 + 0x1C)) = 0x0;
    FUN_0c0e6fe8(a4);
    u0 = (((struct o0_float *)0xC05BE7C)->v);
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + u0);
    math_rand_next();
    (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((t0 + 0x30)))) + 0x14000))) * ((((struct o10_float *)0xC05BE7C)->v))));
    (((struct o3C_float *)(a4))->v) = ((((struct o14_float *)0xC05BE7C)->v));
    (((struct o40_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((t0 + 0x30)))) + 0x14000))) * ((((struct o10_float *)0xC05BE7C)->v))));
    (((struct o44_float *)(a4))->v) = ((-((((struct o38_float *)(a4))->v))) / u0);
    (((struct o48_float *)(a4))->v) = ((((struct o1C_float *)0xC05BE7C)->v));
    (((struct o4C_float *)(a4))->v) = ((-((((struct o40_float *)(a4))->v))) / u0);
    (((struct o118_uint *)(a4))->v) = 0x0;
    (((struct o107_uchar *)(a4))->v) = 0x0;
    return 0x107;
}
