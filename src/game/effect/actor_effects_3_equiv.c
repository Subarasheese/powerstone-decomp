/* actor objects: reset/update routines sharing the entity header (counter byte 8, rotation 44..52, velocity 56..64); exact class not identified (0c05e20c-0c05ec26) */

int FUN_0c05e9d2(int a4, int a5, int a6, int a7);
typedef struct { int x, y, z; } vec3i;
typedef struct {
    char pad0[8];
    char counter;
    char pad1[35];
    int field_44;
    int pad2;
    int field_52;
    vec3i vec_56;
    vec3i vec_68;
    char pad3[158];
    short half_238;
    char pad4[21];
    char flag_261;
    char flag_262;
    char flag_263;
} effect_obj;
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
int FUN_0c05e424(int);
int FUN_0c05e4e8(void);
int FUN_0c05e59e(int);
int snd_play_side_se(int, int);
int obj_set_mode_owner(int, int, int);
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0e21b0(int, int);
int _quick_odd_mvn(int);
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))

int FUN_0c05e564(int a4);

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

void FUN_0c05e20c(effect_obj *effect)
{
    effect->counter = effect->counter + 1;
    effect->half_238 = 0;
    effect->field_44 = 0;
    effect->field_52 = 0;
    effect->vec_56 = *(vec3i *)0x0c336440;
    effect->vec_68 = *(vec3i *)0x0c336458;
    effect->flag_261 = 1;
    effect->flag_263 = 0;
}

int FUN_0c05e3b8(int a4)
{
    register int t1;
    register int t6;

    t1 = *(int *)((a4 + 0x1C));
    snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x32);
    if ((*(signed char *)((t1 + 0x7236))) == 0) {
        return obj_set_mode_owner(a4, 0x4, (*(signed char *)((a4 + 0x3))));
    }
    t6 = *(signed char *)((a4 + 0x8));
    if (t6 != 0) {
        if (t6 != 1) {
        } else {
            FUN_0c05e4e8();
        }
    } else {
        FUN_0c05e424(a4);
    }
    (((struct o71CC_uint *)(t1))->v) = a4;
    return 0x71CC;
}

int FUN_0c05e4ec(int a4)
{
    register int t0;
    register int t4;

    t0 = *(int *)((a4 + 0x1C));
    if ((*(signed char *)((t0 + 0x7236))) == 0) {
        return obj_set_mode_owner(a4, 0x4, (*(signed char *)((a4 + 0x3))));
    }
    t4 = *(signed char *)((a4 + 0x8));
    if (t4 != 0) {
        if (t4 != 1) {
        } else {
            FUN_0c05e59e(a4);
        }
    } else {
        FUN_0c05e564(a4);
    }
    (((struct o71CC_uint *)(t0))->v) = a4;
    return 0x71CC;
}

int FUN_0c05e564(int a4)
{
    register int t1;
    register int t2;
    register int t3;

    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    t1 = ((0x2E0 + a4) + 0x8);
    t2 = 0x2;
    for (;;) {
        t2 = (t2 + 0x1);
        t3 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        *(unsigned char *)((t3 + 0x0)) = 0x1;
        if ((int)t2 >= (int)0x5) {
            break;
        }
    }
    return snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x31);
}

