/* item objects (class 2): create, modes, held/thrown ticks; consecutive rows are one module game_item (0c05ca54-0c05cd68) */

/* named globals (symbols.txt) */
extern char g_item_state[];
extern char g_res_kyoutsuu[];
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o30F_uchar { char p[0x30F]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
extern int _quick_odd_mvn();
void FUN_0c0624c4(char *model, void *table, int kind);
float math_cos_angle16(int angle);
float math_sin_angle16(int angle);
void fx_spawn_0498c4(char *e);
void snd_play_side_se(int side, int action);
typedef struct { float x, y, z; } VEC3;
#define G ((char *)g_item_state)
#define SLOT(i) (((char **)(G + 0x318))[i])
#define H(o, n) (*(short *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define MDL(e, n) (*(char **)((e) + 0x2E0 + (n)))

int obj_spawn_05ca54(int a4)
{
    int stk[1];
    register int t0;
    register int t17;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = obj_create(0x3, 0x1, 0x4, 0x0);
    t17 = 0x0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x4)) = 0x5;
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x20;
        (((struct o30D_uchar *)(t0))->v) = 0x3;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned char *)((t0 + 0xA)) = 0x0;
        *(unsigned char *)((t0 + 0xB)) = 0x0;
        *(unsigned char *)((t0 + 0xC)) = 0x0;
        *(unsigned char *)((t0 + 0xD)) = 0xFFFFFFFF;
        *(unsigned char *)((t0 + 0xE)) = (*(signed char *)(((int)stk + 0)));
        (((struct o30F_uchar *)(t0))->v) = 0x1;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33632C); }
        *(unsigned int *)((t0 + 0x10)) = 0xC05CD68;
        (((struct o2D9_uchar *)(t0))->v) = 0x0;
        (((struct o101_uchar *)(t0))->v) = 0x0;
        (((struct o102_uchar *)(t0))->v) = 0x5;
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC4CFA68, ((*(signed char *)(((int)stk + 0))) + 0x59));
        FUN_0c06233a(((((struct o2E4_int *)(t0))->v)), 0xC4CFA68, 0x35);
        FUN_0c06233a(((((struct o2E8_int *)(t0))->v)), 0xC4CFA68, 0x36);
        FUN_0c06233a(((((struct o2EC_int *)(t0))->v)), 0xC4CFA68, 0x37);
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x15;
        *(unsigned short *)((((((struct o2E4_int *)(t0))->v)) + 0x2)) = 0x7;
        *(unsigned short *)((((((struct o2E8_int *)(t0))->v)) + 0x2)) = 0x20;
        *(unsigned short *)((((((struct o2EC_int *)(t0))->v)) + 0x2)) = 0x11;
        (((struct o8_float *)(((((struct o2EC_int *)(t0))->v))))->v) = (*(float *)0xC05CBCC);
        t17 = t0;
    }
    return t17;
}

int FUN_0c05cb42(int a4, int a5, int a6)
{
    return ((int (*)(int, int, int, int))(0xC05CB5C))(a4, a5, a6, 0xFFFFFFFF);
}

void FUN_0c05cb46(VEC3 *pos, char kind, char dir)
{
    struct { signed char dir; float step; int ang; float speed; } s;
    char *e;
    int i, n, a;

    s.ang = 0;
    s.speed = 0.0f;
    s.dir = dir;
    n = *(signed char *)(G + 0x32C);
    if (n > 3) {
        for (i = 0; i < n; i++) {
            if (SLOT(i)[0x30D] != 0) {
                e = SLOT(i);
                break;
            }
        }
    } else {
        e = SLOT((signed char)kind);
    }
    e[1] = 0;
    e[0x30D] = 0;
    e[8] = 0;
    e[9] = 0;
    e[10] = 0;
    e[11] = 0;
    e[12] = 0;
    e[13] = s.dir;
    e[14] = kind;
    H(e, 0xEC) = 0;
    H(e, 0xEE) = 0;
    *(VEC3 *)(e + 32) = *pos;
    FUN_0c0624c4(MDL(e, 0) + 156, (void *)g_res_kyoutsuu, kind + 89);
    if (s.dir == -1) {
        a = 0x14000 - s.ang;
        F(e, 32) = F(e, 32) + 100.0f * math_cos_angle16(a);
        F(e, 40) = F(e, 40) + 100.0f * math_sin_angle16(a);
        s.step = s.speed / 20.0f;
        F(e, 56) = math_cos_angle16(a) * 20.0f;
        F(e, 60) = s.step * 0.599999964f;
        F(e, 64) = math_sin_angle16(a) * 20.0f;
        *(VEC3 *)(MDL(e, 0) + 28) = *(VEC3 *)0x0C336320;
    } else {
        *(VEC3 *)(e + 56) = *(VEC3 *)0x0C336320;
        F(e, 60) = 20.0f;
        *(VEC3 *)(MDL(e, 0) + 28) = *(VEC3 *)0x0C33632C;
    }
    *(VEC3 *)(e + 68) = *(VEC3 *)0x0C336338;
    e[0x107] = 0;
    MDL(e, 0)[0] = 1;
    MDL(e, 4)[0] = 0;
    MDL(e, 8)[0] = 0;
    MDL(e, 12)[0] = 0;
    fx_spawn_0498c4(e);
    snd_play_side_se(*(signed char *)(e + 3), 17);
}
