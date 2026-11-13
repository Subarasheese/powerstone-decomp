typedef struct { int w[3]; } Stk3;
/* item objects (class 2): create, modes, held/thrown ticks; consecutive rows are one module game_item (0c05ae26-0c05b6dc) */

/* named globals (symbols.txt) */
extern char g_item_state[];
typedef struct { int a, b, c; } vec12;
typedef struct {
    char pad0[8];
    char state;
    char pad1[35];
    int f44;
    int pad2;
    int f52;
    vec12 vec_56;
    vec12 vec_68;
    char pad3[158];
    short h238;
    char pad4[21];
    char b261;
    char b262;
    char b263;
} ObjRec;
int fx_spawn_item_sparkle(char *);
void obj_set_mode_owner(char *, int, int);
float math_sin_angle16(int);
int math_rand_next(void);
void math_vec3_accumulate(char *, char *);
#define F(o) (*(float *)(p + (o)))
struct Vec12 { int a, b, c; };
struct Link {
    char pad0[3];
    signed char tag;        /* 3 */
    char pad4[0x300 - 4];
    char base[0x71f1 - 0x300];
    signed char sel;        /* 0x71f1 */
};
struct Sub {
    char pad0[2];
    short s2;               /* 2 */
    struct Vec12 vec_at_4;           /* 4 */
    struct Vec12 vec_at_16;          /* 16 */
};
void item_init_hold_pose(char *);
void snd_play_side_se(int, int);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o7298_float { char p[0x7298]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int fx_spawn_05(int, int, int);
float math_cos_angle16(int, Stk3);
int _quick_odd_mvn(int);

void item_free_init(ObjRec *obj)
{
    obj->state = obj->state + 1;
    obj->h238 = 0;
    obj->f44 = 0;
    obj->f52 = 0;
    obj->vec_56 = *(vec12 *)0x0c336220;
    obj->vec_68 = *(vec12 *)0x0c33625c;
    obj->b261 = 1;
    obj->b263 = 0;
}

void item_free_update(char *p)
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
        if (*(short *)(p + 0xEE) >= 240) {
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

void item_attach_to_hand(char *obj)
{
    struct Link *link = *(struct Link **)(obj + 28);
    struct Sub *sub_rec;

    obj[8] = obj[8] + 1;
    obj[3] = link->tag;
    obj[1] = 1;
    obj[0x105] = 1;
    obj[0x107] = 1;
    item_init_hold_pose(obj);
    sub_rec = *(struct Sub **)(obj + 0x2e0);
    sub_rec->vec_at_4 = *(struct Vec12 *)0xC336220;
    sub_rec = *(struct Sub **)(obj + 0x2e0);
    sub_rec->vec_at_16 = *(struct Vec12 *)0xC336238;
    if (obj[0x30c] == 14)
        snd_play_side_se(obj[3], 53);
    if (obj[0x30c] == 2)
        (*(struct Sub **)(obj + 0x2e0))->s2 = 15;
    *(int *)(obj + 0x118) = (short)(link->sel * 3520) + (int)((char *)link + 0x300) + 0x580;
    if (obj[11] == 0) {
        *(char *)(((int)g_item_state) + 0x315) = obj[13];
        *(char *)(((int)g_item_state) + 0x316) = 1;
        obj[11] = 1;
    }
}

void FUN_0c05b188(void)
{
    
}

int FUN_0c05b400(int a4, float f4)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t45;
    int t3;
    register float u4;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register float u14;
    register float u15;
    register float u16;
    register int t26;
    register int t28;
    register int t30;
    register int t32;
    register int t34;
    register int t36;

    t0 = *(signed char *)((a4 + 0x30C));
    t1 = *(int *)((a4 + 0x1C));
    t45 = t0;
    if (t0 == 14) {
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        t3 = (((struct oEC_short *)(a4))->v);
        if ((t3 != 5) && ((t3 != 10) && ((t3 != 15) && (t3 != 20)))) {
        } else {
            u4 = (((struct o7298_float *)(t1))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((t1 + 0x20)); }
            u7 = *(float *)(((int)stk + 0));
            u8 = ((math_cos_angle16(((-(*(int *)((t1 + 0x30)))) + 0x14000), *(Stk3 *)(((int)stk + 0)))) * u4);
            u9 = u7;
            u9 = u9 + 100.0f * u8;
            *(float *)(((int)stk + 0)) = u9;
            u11 = (*(float *)(((int)stk + 4)));
            u11 = u11 + 160.0f * u4;
            *(float *)(((int)stk + 4)) = u11;
            u14 = *(float *)(((int)stk + 8));
            u15 = ((math_sin_angle16(((-(*(int *)((t1 + 0x30)))) + 0x14000))) * u4);
            u16 = u14;
            u16 = u16 + 100.0f * u15;
            *(float *)(((int)stk + 8)) = u16;
            fx_spawn_05(((int)stk + 0), (*(int *)((t1 + 0x30))), (*(signed char *)((t1 + 0x3))));
        }
        if (((((struct o44_float *)(((((struct o2E4_int *)(a4))->v))))->v)) > 0.0f) {
            t26 = (((struct o2E4_int *)(a4))->v);
            (((struct o1C_float *)(t26))->v) = (((((struct o1C_float *)(t26))->v)) + 0.049999997f);
            t28 = (((struct o2E4_int *)(a4))->v);
            (((struct o20_float *)(t28))->v) = (((((struct o20_float *)(t28))->v)) + 0.049999997f);
            t30 = (((struct o2E4_int *)(a4))->v);
            (((struct o24_float *)(t30))->v) = (((((struct o24_float *)(t30))->v)) + 0.049999997f);
            t32 = (((struct o2E4_int *)(a4))->v);
            (((struct o44_float *)(t32))->v) = (((((struct o44_float *)(t32))->v)) - 0.049999997f);
            t34 = (((struct o2E4_int *)(a4))->v);
            (((struct o48_float *)(t34))->v) = (((((struct o48_float *)(t34))->v)) - 0.049999997f);
            t36 = (((struct o2E4_int *)(a4))->v);
            (((struct o4C_float *)(t36))->v) = (((((struct o4C_float *)(t36))->v)) - 0.049999997f);
            t45 = 0x4C;
        } else {
            *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
            t45 = 0x2E4;
        }
    }
    return t45;
}
