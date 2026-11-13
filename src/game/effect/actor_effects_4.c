/* actor objects: reset/update routines sharing the entity header (counter byte 8, rotation 44..52, velocity 56..64); exact class not identified (0c05ec26-0c05eea0) */

int FUN_0c05ed92(int a4, int a5, int a6, int a7);
typedef struct { int w0, w1, w2; } vec3i;
typedef struct {
    char pad_a[8];
    char state;
    char pad_b[35];
    int field_44;
    int pad_c;
    int field_52;
    vec3i vec_56;
    vec3i vec_68;
    char pad_d[158];
    short field_238;
    char pad_e[21];
    char flag_261;
    char flag_262;
    char flag_263;
} effect_obj;
int fx_spawn_item_sparkle(char *);
void obj_set_mode_owner(char *, int, int);
float math_sin_angle16(int);
int math_rand_next(void);
void math_vec3_accumulate(char *, char *);
#define F(o) (*(float *)(p + (o)))
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };

void FUN_0c05ec26(effect_obj *obj)
{
    obj->state = obj->state + 1;
    obj->field_238 = 0;
    obj->field_44 = 0;
    obj->field_52 = 0;
    obj->vec_56 = *(vec3i *)0x0c3364d0;
    obj->vec_68 = *(vec3i *)0x0c3364e8;
    obj->flag_261 = 1;
    obj->flag_263 = 0;
}

void FUN_0c05ec88(char *p)
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
    math_vec3_accumulate(p + 32, p + 56);
    math_vec3_accumulate(p + 56, p + 68);
}

