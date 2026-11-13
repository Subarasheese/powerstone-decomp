/* actor objects: reset/update routines sharing the entity header (counter byte 8, rotation 44..52, velocity 56..64); exact class not identified (0c05d970-0c05dd00) */

typedef struct { int x, y, z; } vec3_int;
typedef struct {
    char pad0[8];
    char counter;
    char pad1[35];
    int field_44;
    int pad2;
    int field_52;
    vec3_int vec_56;
    vec3_int vec_68;
    char pad3[158];
    short field_238;
    char pad4[21];
    char flag_261;
    char flag_262;
    char flag_263;
} object_t;
int fx_spawn_item_sparkle(char *);
void obj_set_mode_owner(char *, int, int);
float math_sin_angle16(int);
int math_rand_next(void);
void FUN_0c0e21b0(char *, char *);
#define F(o) (*(float *)(p + (o)))
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
int item_init_hold_pose(int);
int FUN_0c0abd84(int);

void FUN_0c05d970(object_t *obj)
{
    obj->counter = obj->counter + 1;
    obj->field_238 = 0;
    obj->field_44 = 0;
    obj->field_52 = 0;
    obj->vec_56 = *(vec3_int *)0x0c3363e0;
    obj->vec_68 = *(vec3_int *)0x0c3363f8;
    obj->flag_261 = 1;
    obj->flag_263 = 0;
}

void FUN_0c05d9d4(char *p)
{
    char *q;
    int n;
    int m;

    *(short *)(p + 0xEC) = *(short *)(p + 0xEC) + 1;
    q = *(char **)(p + 0x2E0);
    n = *(short *)(p + 0xEC);
    *(float *)(q + 8) = math_sin_angle16((int)((float)(6 * n) * 65536.0f / 360.0f + 0.5f) & 0xFFFF) * 10.0f + 50.0f;
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

int FUN_0c05db76(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x1C));
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x3)) = (*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3)));
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
    (((struct o105_uchar *)(a4))->v) = 0x1;
    (((struct o107_uchar *)(a4))->v) = 0x1;
    item_init_hold_pose(a4);
    FUN_0c0abd84(a4);
    (((struct o118_uint *)(a4))->v) = (((short)((short)(*(signed char *)((t0 + 0x71F1))) * (short)0xDC0) + (0x300 + t0)) + 0x840);
    t0 = *(signed char *)((a4 + 0xB));
    t1 = t0;
    if (t0 == 0) {
        (((struct o0_uchar *)0xC7F2979)->v) = (*(signed char *)((a4 + 0xD)));
        (((struct o1_uchar *)0xC7F2979)->v) = 0x1;
        *(unsigned char *)((a4 + 0xB)) = 0x1;
        t1 = 0x1;
    }
    return t1;
}

void FUN_0c05dbf4(void)
{
    
}
