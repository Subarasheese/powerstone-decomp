/* item objects (class 2): create, modes, held/thrown ticks; consecutive rows are one module game_item (0c05cd68-0c05d254) */

int FUN_0c0555dc(void);
int obj_destroy(int);
int FUN_0c05cdb2(int);
int FUN_0c05d1cc(void);
struct vec12 { int a, b, c; };
typedef struct { int x, y, z; } Vec12;
extern float math_sin_angle16(int);
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int fx_spawn_0454b4(int, int);
float FUN_0c0e2240(int, int);

int obj_tick_05ca54(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        return obj_destroy(a4);
    }
    t0 = *(signed char *)((a4 + 0x30D));
    if (t0 != 0) {
        if (t0 != 3) {
        } else {
            FUN_0c05d1cc();
        }
    } else {
        FUN_0c05cdb2(a4);
    }
    t0 = *(signed char *)((a4 + 0xD));
    t1 = t0;
    if (t0 != -1) {
        t0 = *(signed char *)((a4 + 0xD));
        *(unsigned char *)(((0xC7F2974 + t0) + 0x0)) = 0x1;
        t1 = t0;
    }
    return t1;
}

void FUN_0c05ceea(char *obj)
{
    char *slot = *(char **)(obj + 736);
    if (*(short *)(obj + 0xec) >= 40) {
        *(struct vec12 *)(*(char **)(obj + 736) + 28) = *(struct vec12 *)0xC33632C;
    } else {
        *(float *)(slot + 28) = *(float *)(slot + 28) + 0.0249999985f;
        if (*(float *)(*(char **)(obj + 736) + 28) > 1.0f)
            *(float *)(*(char **)(obj + 736) + 28) = 1.0f;
        *(float *)(*(char **)(obj + 736) + 32) = *(float *)(*(char **)(obj + 736) + 28);
        *(float *)(*(char **)(obj + 736) + 36) = *(float *)(*(char **)(obj + 736) + 28);
    }
    if (*(float *)(obj + 628) > 0.0f) {
        obj[9]++;
        obj[10] = 1;
        **(char **)(obj + 740) = 1;
        **(char **)(obj + 744) = 1;
        **(char **)(obj + 748) = 1;
        *(struct vec12 *)(*(char **)(obj + 736) + 28) = *(struct vec12 *)0xC33632C;
    }
    if (obj[728] != 0) {
        if (*(float *)(obj + 624) != 0.0f)
            *(float *)(obj + 56) = *(float *)(obj + 56) * -0.5f;
        if (*(float *)(obj + 632) != 0.0f)
            *(float *)(obj + 64) = *(float *)(obj + 64) * -0.5f;
    }
}

void FUN_0c05cff8(char *obj)
{
    char *child0 = *(char **)(obj + 0x2E0);
    char *game = (char *)0x0C7F2EE0;
    float sin_v, scale;
    int counter = *(short *)(obj + 0xEC);

    sin_v = math_sin_angle16((int)((float)(6 * counter) * 65536.0f / 360.0f + 0.5f) & 0xFFFF);
    *(float *)(child0 + 8) = sin_v * 10.0f;
    *(Vec12 *)(*(char **)(obj + 0x2E4) + 4) = *(Vec12 *)(*(char **)(obj + 0x2E0) + 4);
    *(Vec12 *)(*(char **)(obj + 0x2E8) + 4) = *(Vec12 *)(*(char **)(obj + 0x2E0) + 4);
    *(int *)(*(char **)(obj + 0x2E4) + 16) += 182;
    *(int *)(*(char **)(obj + 0x2E4) + 20) += 364;
    **(char **)(obj + 0x2E8) = *(int *)(game + 0x134) % 2;
    scale = (float)(*(int *)(game + 0x134) % 7 + 1) * 0.0999999940f;
    *(float *)(*(char **)(obj + 0x2EC) + 28) = scale;
    *(float *)(*(char **)(obj + 0x2EC) + 32) = scale;
    *(float *)(*(char **)(obj + 0x2EC) + 36) = scale;
    if (*(float *)(obj + 0x274) > 0.0f)
        *(Vec12 *)(obj + 56) = *(Vec12 *)0x0C336320;
}

int FUN_0c05d0d8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(0xC05D1C8))(0x0, a5, a6, a7);
        }
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o8_float *)(t0))->v) = (((((struct o8_float *)(t0))->v)) + 2.0f);
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0xEAAC);
        t0 = (((struct o2E0_int *)(a4))->v);
        *(volatile float *)0xC05D23C;
        return ((int (*)(int, int, int, int))(0xC05D18C))(0x0, t0, a6, a7);
    }
    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct o107_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
    *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
    *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x0;
    *(unsigned char *)((a4 + 0xA)) = 0x1;
    return fx_spawn_0454b4((a4 + 0x20), (*(signed char *)((a4 + 0xE))));
}

int FUN_0c05d1d0(int a4)
{
    int t1;

    if (((*(signed char *)((a4 + 0x30D))) == 0) && (t1 = *(signed char *)((a4 + 0x8)), (int)t1 < (int)0x2)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c05d1ea(int a4)
{
    register float t0;
    register float t1;

    t0 = FUN_0c0e2240((a4 + 0x20), 0xC7E40E4);
    t1 = FUN_0c0e2240((a4 + 0x20), 0xC7EB3B4);
    if (!(300.0f > t0) && !(300.0f > t1)) {
        return 0x0;
    }
    return 0x1;
}
