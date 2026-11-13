/* item objects (class 2): create, modes, held/thrown ticks; consecutive rows are one module game_item (0c05c1c0-0c05c6e0) */

typedef struct { int x, y, z; } Vec3i;
typedef struct {
    char pad0[8];
    char cnt;
    char pad1[35];
    int f44;
    int pad2;
    int f52;
    Vec3i s56;
    Vec3i s68;
    char pad3[158];
    short h238;
    char pad4[21];
    char b261;
    char b262;
    char b263;
} Obj;
int fx_spawn_item_sparkle(char *);
void obj_set_mode_owner(char *, int, int);
float math_sin_angle16(int);
int math_rand_next(void);
void FUN_0c0e21b0(char *, char *);
#define F(o) (*(float *)(p + (o)))
struct Vec3i_r3 { int x, y, z; };
extern int item_init_hold_pose(unsigned char *);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int snd_play_side_se(int, int);
struct sub_obj { char pad0[24]; int field_24; float scale_x, scale_y, scale_z; };
float math_sin_angle16(int a);
int FUN_0c0e1550(int a);
int FUN_0c0e1240(char *m);
int nlCalcPoint(float *in, float *out);
void fx_spawn_heading_shot(float *p, char *q, int a, int b);

void FUN_0c05c1c0(Obj *obj)
{
    obj->cnt = obj->cnt + 1;
    obj->h238 = 0;
    obj->f44 = 0;
    obj->f52 = 0;
    obj->s56 = *(Vec3i *)0x0c3362c8;
    obj->s68 = *(Vec3i *)0x0c3362e0;
    obj->b261 = 1;
    obj->b263 = 0;
}

void FUN_0c05c220(char *p)
{
    char *q;
    int n;
    int m;

    *(short *)(p + 0xEC) = *(short *)(p + 0xEC) + 1;
    q = *(char **)(p + 0x2E0);
    n = *(short *)(p + 0xEC);
    *(float *)(q + 8) = math_sin_angle16((int)((float)(6 * n) * 65536.0f / 360.0f + 0.5f) & 0xFFFF) * 10.0f;
    q = *(char **)(p + 0x2E0);
    *(int *)(q + 20) = *(int *)(q + 20) + 0xB6;
    m = *(short *)(p + 0xEC) % 30;
    if (m == math_rand_next() % 30)
        fx_spawn_item_sparkle(p + 32);
    if (*(float *)(p + 0x274) > 0.0f)
        F(60) = 0.0f;
    if (p[0x310] == 0 && p[0x311] == 0) {
        *(short *)(p + 0xEE) = *(short *)(p + 0xEE) + 1;
        if (*(short *)(p + 0xEE) >= 300) {
            if (*(short *)(p + 0xEE) >= 360) {
                *(char *)0xC7F2979 = p[13];
                *(char *)0xC7F297A = 1;
                obj_set_mode_owner(p, 3, 2);
                return;
            }
            p[1] = *(short *)(p + 0xEC) % 2;
        }
    } else {
        p[1] = 1;
        *(short *)(p + 0xEE) = 0;
    }
    FUN_0c0e21b0(p + 32, p + 56);
    FUN_0c0e21b0(p + 56, p + 68);
}

void FUN_0c05c3be(unsigned char *obj)
{
    unsigned char *owner = *(unsigned char **)(obj + 28);
    unsigned char *global_block;

    obj[8]++;
    obj[3] = (*(unsigned char **)(obj + 28))[3];
    *(short *)(obj + 6) = 15;
    obj[1] = 1;
    obj[0x105] = 1;
    obj[0x107] = 1;
    item_init_hold_pose(obj);
    *(struct Vec3i_r3 *)(*(unsigned char **)(obj + 0x2E0) + 4) = *(struct Vec3i_r3 *)0xC3362C8;
    *(struct Vec3i_r3 *)(*(unsigned char **)(obj + 0x2E0) + 16) = *(struct Vec3i_r3 *)0xC3362EC;
    *(unsigned char **)(obj + 280) = owner + 768 + (short)((signed char)owner[0x71F1] * 3520) + 1408;
    if (obj[11] == 0) {
        global_block = (unsigned char *)0xC7F2664;
        global_block[789] = obj[13];
        global_block[790] = 1;
        obj[11] = 1;
    }
}

void FUN_0c05c44e(void)
{
    
}

int FUN_0c05c4ea(int a4)
{
    register float u2;

    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
    u2 = *(float *)0xC05C5A8;
    (((struct o1C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = u2;
    (((struct o20_float *)(((((struct o2E4_int *)(a4))->v))))->v) = u2;
    (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = u2;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    return snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x1C);
}

void fx_tick_pulsing_emitter(char *obj)
{
    float pts[6];
    char *owner = *(char **)(obj + 28);
    struct sub_obj *sub = *(struct sub_obj **)(obj + 0x2E4);
    sub->field_24 = sub->field_24 + 12743;
    switch (*(signed char *)(obj + 9)) {
    case 0:
        (*(struct sub_obj **)(obj + 0x2E4))->scale_x = (*(struct sub_obj **)(obj + 0x2E4))->scale_x + 0.199999988f;
        (*(struct sub_obj **)(obj + 0x2E4))->scale_y = (*(struct sub_obj **)(obj + 0x2E4))->scale_y + 0.199999988f;
        (*(struct sub_obj **)(obj + 0x2E4))->scale_z = (*(struct sub_obj **)(obj + 0x2E4))->scale_z + 0.199999988f;
        *(short *)(obj + 236) = *(short *)(obj + 236) + 1;
        if (*(short *)(obj + 236) >= 3) {
            *(signed char *)(obj + 9) = *(signed char *)(obj + 9) + 1;
            *(short *)(obj + 236) = 0;
        }
        break;
    case 1:
        (*(struct sub_obj **)(obj + 0x2E4))->scale_x = 1.0f + 0.5f * math_sin_angle16((short)(*(short *)(obj + 236) * 30));
        (*(struct sub_obj **)(obj + 0x2E4))->scale_y = 1.0f + 0.5f * math_sin_angle16((short)(*(short *)(obj + 236) * 30));
        (*(struct sub_obj **)(obj + 0x2E4))->scale_z = 1.0f + 0.25f * math_sin_angle16(*(short *)(obj + 236) * 15);
        *(short *)(obj + 236) = *(short *)(obj + 236) + 1;
        if (*(short *)(obj + 236) >= 12)
            *(short *)(obj + 236) = 0;
        break;
    default:
        break;
    }
    FUN_0c0e1550(1);
    FUN_0c0e1240(obj + 108);
    pts[3] = 0.0f;
    pts[4] = 12.3999996f;
    pts[5] = 76.0f;
    nlCalcPoint(&pts[3], &pts[0]);
    if (*(short *)(obj + 238) == 0) {
        fx_spawn_heading_shot(&pts[0], owner + 44, *(signed char *)(owner + 3), 1);
    } else if (*(short *)(obj + 238) % 4 == 0) {
        fx_spawn_heading_shot(&pts[0], owner + 44, *(signed char *)(owner + 3), 0);
    }
    *(short *)(obj + 238) = *(short *)(obj + 238) + 1;
    if (*(short *)(obj + 238) >= 16)
        *(short *)(obj + 238) = 0;
}
