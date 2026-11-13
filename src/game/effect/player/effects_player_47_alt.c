/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c3544-0c0c571c) */

typedef struct { float x, y, z; } Vec3f;
extern void thunk_math_mat_get_translate(char *, Vec3f *);
extern float math_sin_angle16(int);
extern float math_cos_angle16(int);
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c0c3408(int, int);
int fx31_spin_kid_angles(int);
int fx31_orbit_attack(int);
extern int FUN_0c0c3ab2();
int fx31_popup_update(int);
int fx31_thrown_update(int, float);
int fx31_shrink_follow_owner(int);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
float math_rand_float(void);
int _modlu(void);
int _quick_odd_mvn(void);

void fx31_follow_circle(char *obj)
{
    signed char *owner;
    signed char *owner_base;
    Vec3f anchor;

    owner = *(signed char **)(obj + 28);
    owner_base = (signed char *)0xC7E40C4 + (unsigned short)((unsigned short)owner[3] * 0x72D0);
    thunk_math_mat_get_translate(owner_base + 0x300 + (short)(owner_base[0x71F1] * 3520) + 704, &anchor);
    *(int *)(obj + 48) += 0x400;
    *(int *)(obj + 48) &= 0xFFFF;
    anchor.x += 100.0f * math_sin_angle16(*(int *)(obj + 48));
    anchor.z += 100.0f * math_cos_angle16(*(int *)(obj + 48));
    *(float *)(obj + 32) += (anchor.x - *(float *)(obj + 32)) / 20.0f;
    *(float *)(obj + 36) += (anchor.y - *(float *)(obj + 36)) / 20.0f;
    *(float *)(obj + 40) += (anchor.z - *(float *)(obj + 40)) / 20.0f;
}

int fx31_mode_attack(int a4, int a5, int a6, int a7)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R9;
    register int R12;
    register int R13;
    register float F0;
    register float F1;
    register float F2;
    register float F3;
    register float F4;
    register float F12;
    register float F13;
    register float F14;
    register float F15;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    v0_2 = a4;
    v0_3 = a5;
    v0_4 = a6;
    v0_5 = a7;
    v0_6 = *(signed char *)((v0_2 + 0xA));
    v0_1 = (v0_6);
    v0_0 = (v0_2);
    v0_2 = (0x0);
    if ((v0_6 == 0)) goto L_C0C49F6;
    if ((v0_1 == 1)) goto L_C0C4A22;
    *(unsigned char *)((v0_0 + 0xA)) = v0_2;
    *(unsigned char *)((v0_0 + 0x9)) = v0_2;
    FUN_0c0c3408(v0_0, 0x0);
    L_C0C4AEA:;
    return fx31_orbit_attack(v0_0);
    L_C0C4A22:;
    v0_1 = (((int (*)(int, int, int, int))(FUN_0c0c3ab2))(v0_0, v0_3, v0_4, v0_5)) == 0;
    if (v0_1) goto L_C0C4A36;
    v0_1 = *(signed char *)((v0_0 + 0xA));
    *(unsigned char *)((v0_0 + 0xA)) = (v0_1 + 0x1);
    return (v0_1 + 0x1);
    L_C0C4A36:;
    v0_2 = *(signed char *)((v0_0 + 0xB));
    v0_1 = (v0_2);
    if ((v0_2 == 1)) goto L_C0C4A8E;
    if ((v0_1 == 2)) goto L_C0C4AAC;
    if ((v0_1 == 3)) goto L_C0C4A5C;
    if ((v0_1 == 4)) goto L_C0C4AAC;
    if ((v0_1 == 5)) goto L_C0C4A6A;
    if ((v0_1 == 6)) goto L_C0C4AAC;
    if ((v0_1 == 7)) goto L_C0C4A78;
    if (!((v0_1 == 8))) goto L_C0C4AAC;
    return fx31_thrown_update(v0_0, F4);
    L_C0C4AAC:;
    fx31_spin_kid_angles(v0_0);
    (((struct o58_float *)(v0_0))->v) = (((((struct o58_float *)(v0_0))->v)) - 0.099999994f);
    v0_1 = (0x58);
    F4 = (0.199999988f);
    FPUL_ = (0x3DCCCCCC);
    if ((!(0.199999988f > ((((struct o58_float *)(v0_0))->v))))) goto L_C0C4ACE;
    *(float *)((v0_0 + v0_1)) = F4;
    L_C0C4ACE:;
    w0_0 = *(float *)((v0_0 + v0_1));
    (((struct o54_float *)(v0_0))->v) = w0_0;
    (((struct o50_float *)(v0_0))->v) = w0_0;
    goto L_C0C4AEA;
    L_C0C4A78:;
    fx31_spin_kid_angles(v0_0);
    return fx31_popup_update(v0_0);
    L_C0C4A6A:;
    fx31_spin_kid_angles(v0_0);
    return ((int (*)(int, int, int, int))(0xC0C3E24))(v0_0, a5, a6, a7);
    L_C0C4A5C:;
    fx31_spin_kid_angles(v0_0);
    return ((int (*)(int, int, int, int))(0xC0C3C68))(v0_0, a5, a6, a7);
    L_C0C4A8E:;
    fx31_spin_kid_angles(v0_0);
    return fx31_shrink_follow_owner(v0_0);
    L_C0C49F6:;
    *(unsigned char *)((v0_0 + 0xA)) = ((*(signed char *)((v0_0 + 0xA))) + 0x1);
    *(unsigned char *)((v0_0 + 0xC)) = v0_2;
    (((struct oF0_ushort *)(v0_0))->v) = 0x12C;
    *(unsigned char *)(((0x105 + v0_0) + 0x1)) = 0x1;
    (((struct o105_uchar *)(v0_0))->v) = 0x1;
    (((struct o107_uchar *)(v0_0))->v) = v0_2;
    FUN_0c0c3408(v0_0, 0x0);
    goto L_C0C4A22;
}

int fx_spawn_33(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t29;
    register float t5;
    register float u8;
    register int t14;

    *(unsigned char *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = obj_create(0x5, 0x1, 0x1, 0x0);
    t29 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C5140;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        (((struct oF0_ushort *)(t0))->v) = 0x4;
        t5 = math_rand_float();
        u8 = (t5 * 255.0f);
        if (!(2.14748365e+09f > (t5 * 255.0f))) {
            u8 = (((t5 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        (((struct oF2_ushort *)(t0))->v) = ((int)((unsigned int)(int)u8 % (unsigned int)0x10));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x23F;
        t14 = *(signed char *)((t0 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t14 << 1) + t14) << 2) << 1) + 0xC6002D0), ((*(signed char *)((t0 + 0xF2))) + 0xA));
        (((struct o1C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = ((((struct o50_float *)(t0))->v));
        (((struct o20_float *)(((((struct o2E0_int *)(t0))->v))))->v) = ((((struct o54_float *)(t0))->v));
        (((struct o24_float *)(((((struct o2E0_int *)(t0))->v))))->v) = ((((struct o58_float *)(t0))->v));
        (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        (((struct o44_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        (((struct o48_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        (((struct o4C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        t29 = 0x4C;
    }
    return t29;
}
