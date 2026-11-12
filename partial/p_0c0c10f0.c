/* @unit 0c0c10f0-0c0c1360 */
typedef struct Q { char pad0[3]; char b3; char pad1[5]; char b9; char pad2[18]; struct Q *q28; } Q;
typedef struct {
    char pad0[8]; char b8; char pad1[28-9]; Q *q28; float x, y, z;
    int i44, i48; char pad3[4]; float f56, f60, f64;
    char pad4[236-68]; short s236; short s238; char pad5[736-240]; int *p736;
} O;
typedef struct { float x, y, z; } V3;
typedef struct { char pad[768]; } T;
extern char g7e40c4[];
extern int g7f307c;
extern int FUN_0c0555dc(O *);
extern void FUN_0c059330(O *);
extern void thunk_FUN_0c062242(char *, V3 *);
extern void FUN_0c0e24f0(float *);
extern int FUN_0c0df400(float, float);
extern void FUN_0c0a1d88(O *, int);
extern void FUN_0c0e21b0(float *, float *);
extern float _builtin_sqrtf(float);
extern char g7f3051;
char FUN_0c0c10f0(O *p)
{
    if (g7f3051 == 10) {
        if (p->x < -1600.0f || p->x > 1600.0f || p->y < -100.0f || p->y > 1000.0f
            || p->z < -1600.0f || p->z > 1600.0f) return 1;
        return 0;
    }
    if (p->x < -949.0f || p->x > 949.0f || p->y < -100.0f || p->y > 2000.0f
        || p->z < -949.0f || p->z > 949.0f) return 1;
    return 0;
}

void FUN_0c0c1186(O *p)
{
    V3 v;
    char *base;
    float a, b;
    if (FUN_0c0555dc(p)) { FUN_0c059330(p); return; }
    if (p->b8 != 0) { FUN_0c059330(p); return; }
    if (FUN_0c0c10f0(p)) {
        if (p->q28->b9 == 3 || ++p->s238 > 3) { p->b8++; return; }
        base = g7e40c4 + (unsigned short)(p->q28->q28->b3 * 29392);
        thunk_FUN_0c062242(base + 768 + (short)(base[29169] * 3520) + 1408, &v);
        p->f56 = v.x - p->x;
        p->f60 = v.y - p->y;
        p->f64 = v.z - p->z;
        FUN_0c0e24f0(&p->f56);
        if (p->f64 == 0.0f) p->f64 = 1.0e-5f;
        a = p->f56;
        b = p->f64;
        p->i44 = FUN_0c0df400(-p->f60, _builtin_sqrtf(b * b + a * a));
        p->i48 = FUN_0c0df400(p->f56, p->f64);
        p->f56 *= 40.0f; p->f60 *= 40.0f; p->f64 *= 40.0f;
    }
    if ((unsigned int)g7f307c % 30u == 0) /* _modlu */  FUN_0c0a1d88(p, 114);
    if (++p->s236 >= 180) p->b8++;
    FUN_0c0e21b0(&p->x, &p->f56);
    p->p736[4] += 0x1555;
}
