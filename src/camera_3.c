/* camera follow computation and mode handlers 1..28 (0c0d9288-0c0db1c0) */

float math_cos_angle16(int angle);
float math_sin_angle16(int angle);
float math_tan_angle16(int angle);
float math_signed_sqrt(float x);
int math_atan2_angle16(float x, float z);
void thunk_FUN_0c062242(char *slot, float *pos);
typedef struct { float x, y, z; } VEC3;
#define H(o, n) (*(short *)((o) + (n)))
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define FA ((float *)*(char **)(o + 0x1A0))
#define FB ((float *)*(char **)(o + 0x1A4))
#define PLX(i) ((char *)0xC7E40C4 + (unsigned short)((unsigned short)(i) * (unsigned short)0x72D0))
#define DEG(v) (int)((float)(v) * 65536.0f / 360.0f)
#define ABSD(a, b) (0.0f > (a) - (b) ? (b) - (a) : (a) - (b))
int cam_request_mode(int, int, int);
int cam_force_mode(int, int, int);
int cam_step_keyframe_script(int, int);
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
int FUN_0c0dc994(void);
extern float math_rand_float(void);
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
int cam_request_mode_with_args(int, int, int, int);
struct R52 { int w[13]; };
extern char g_cam_records[];
struct o1A8_short { char p[0x1A8]; short v; };
struct o1A8_ushort { char p[0x1A8]; unsigned short v; };
struct s52 { char c[52]; };
extern void FUN_0c0e24f0(float *);
struct o1B2_short { char p[0x1B2]; short v; };
struct o1B4_short { char p[0x1B4]; short v; };
struct o1B4_ushort { char p[0x1B4]; unsigned short v; };
struct o1B6_short { char p[0x1B6]; short v; };
struct o1B6_ushort { char p[0x1B6]; unsigned short v; };
int FUN_0c0e7140(int);

void cam_compute_follow(char *o, char *p);
int cam_force_mode_10(int a4, int a5);

static void shift(unsigned char *obj, int dst, int src)
{
    *(int *)(obj + 272 + dst) = *(int *)(obj + 272 + src);
    *(int *)(obj + 288 + dst) = *(int *)(obj + 288 + src);
    *(float *)(obj + 304 + dst) = *(float *)(obj + 304 + src);
    *(int *)(obj + 320 + dst) = *(int *)(obj + 320 + src);
    *(int *)(obj + 336 + dst) = *(int *)(obj + 336 + src);
}

void cam_compute_follow(char *o, char *p)
{
    struct { char *pl; float vz2, vx2; float t3, t4, t5, t6, t7, t8; VEC3 v; } s;
    float dx, dy, dz, h, z, k, c;
    int a, r6;
    char *pl;

    if (o[6] == 0) {
        o[6] = o[6] + 1;
        *(VEC3 *)(o + 0xC8) = *(VEC3 *)(o + 0xBC);
        *(VEC3 *)(o + 0xF8) = *(VEC3 *)(o + 0xEC);
        I(o, 0x118) = I(o, 0x114);
        I(o, 0x128) = I(o, 0x124);
        F(o, 0x138) = F(o, 0x134);
        I(o, 0x148) = I(o, 0x144);
        I(o, 0x158) = I(o, 0x154);
    }
    switch (H(p, 2) & 0xF000) {
    case 0x1000:
        switch (H(p, 4) & 15) {
        case 1:
            F(o, 0xE0) = FA[0] + (float)H(p, 8);
            F(o, 0xE4) = FA[1] + (float)H(p, 10);
            F(o, 0xE8) = FA[2] + (float)H(p, 12);
            break;
        case 2:
            F(o, 0xE0) = FB[0] + (float)H(p, 8);
            F(o, 0xE4) = FB[1] + (float)H(p, 10);
            F(o, 0xE8) = FB[2] + (float)H(p, 12);
            break;
        case 3:     /* the original stores the y midpoint over x too and leaves +0xE4 as it was */
            F(o, 0xE0) = (FA[0] + FB[0]) / 2.0f;
            F(o, 0xE0) = (FA[1] + FB[1]) / 2.0f;
            F(o, 0xE8) = (FA[2] + FB[2]) / 2.0f;
            break;
        case 4:
            F(o, 0xE0) = F(o, 0xEC);
            F(o, 0xE4) = F(o, 0xF0);
            F(o, 0xE8) = F(o, 0xF4);
            break;
        default:
            F(o, 0xE0) = (float)H(p, 8);
            F(o, 0xE4) = (float)H(p, 10);
            F(o, 0xE8) = (float)H(p, 12);
            break;
        }
        switch (H(p, 4) & 0xF0) {
        case 3:     /* as above: the y midpoint overwrites x, +0xB4 is left as it was */
            F(o, 0xB0) = (FA[0] + FB[0]) / 2.0f;
            F(o, 0xB0) = (FA[1] + FB[1]) / 2.0f;
            F(o, 0xB8) = (FA[2] + FB[2]) / 2.0f;
            break;
        case 16:
            F(o, 0xB0) = FA[0] + (float)H(p, 14);
            F(o, 0xB4) = FA[1] + (float)H(p, 16);
            F(o, 0xB8) = FA[2] + (float)H(p, 18);
            break;
        case 32:
            F(o, 0xB0) = FB[0] + (float)H(p, 14);
            F(o, 0xB4) = FB[1] + (float)H(p, 16);
            F(o, 0xB8) = FB[2] + (float)H(p, 18);
            break;
        case 64:
            F(o, 0xB0) = F(o, 0xBC);
            F(o, 0xB4) = F(o, 0xC0);
            F(o, 0xB8) = F(o, 0xC4);
            break;
        default:
            F(o, 0xB0) = (float)H(p, 14);
            F(o, 0xB4) = (float)H(p, 16);
            F(o, 0xB8) = (float)H(p, 18);
            break;
        }
        I(o, 0x120) = DEG(H(p, 6));
        switch (H(p, 2) & 15) {
        case 0:
            F(o, 0xEC) = F(o, 0xEC) + (F(o, 0xE0) - F(o, 0xEC)) / (float)H(p, 20);
            F(o, 0xF0) = F(o, 0xF0) + (F(o, 0xE4) - F(o, 0xF0)) / (float)H(p, 22);
            F(o, 0xF4) = F(o, 0xF4) + (F(o, 0xE8) - F(o, 0xF4)) / (float)H(p, 24);
            F(o, 0xBC) = F(o, 0xBC) + (F(o, 0xB0) - F(o, 0xBC)) / (float)H(p, 26);
            F(o, 0xC0) = F(o, 0xC0) + (F(o, 0xB4) - F(o, 0xC0)) / (float)H(p, 28);
            F(o, 0xC4) = F(o, 0xC4) + (F(o, 0xB8) - F(o, 0xC4)) / (float)H(p, 30);
            I(o, 0x124) = I(o, 0x124) + (short)(I(o, 0x120) - I(o, 0x124)) / 10;
            break;
        case 1:
            F(o, 0xEC) = F(o, 0xE0);
            F(o, 0xF0) = F(o, 0xE4);
            F(o, 0xF4) = F(o, 0xE8);
            F(o, 0xBC) = F(o, 0xB0);
            F(o, 0xC0) = F(o, 0xB4);
            F(o, 0xC4) = F(o, 0xB8);
            I(o, 0x124) = I(o, 0x120);
            break;
        case 2:
            F(o, 0xEC) = F(o, 0xEC) + (F(o, 0xE0) - F(o, 0xF8)) / (float)H(p, 20);
            F(o, 0xF0) = F(o, 0xF0) + (F(o, 0xE4) - F(o, 0xFC)) / (float)H(p, 22);
            F(o, 0xF4) = F(o, 0xF4) + (F(o, 0xE8) - F(o, 0x100)) / (float)H(p, 24);
            F(o, 0xBC) = F(o, 0xBC) + (F(o, 0xB0) - F(o, 0xC8)) / (float)H(p, 26);
            F(o, 0xC0) = F(o, 0xC0) + (F(o, 0xB4) - F(o, 0xCC)) / (float)H(p, 28);
            F(o, 0xC4) = F(o, 0xC4) + (F(o, 0xB8) - F(o, 0xD0)) / (float)H(p, 30);
            I(o, 0x124) = I(o, 0x124) + (short)(I(o, 0x120) - I(o, 0x128)) / H(p, 0);
            break;
        }
        s.v.x = F(o, 0xBC) - F(o, 0xEC);
        s.v.z = F(o, 0xC4) - F(o, 0xF4);
        if (s.v.z == 0.0f)
            s.v.z = 9.99999997e-07f;
        I(o, 0x114) = math_atan2_angle16(s.v.x, s.v.z);
        I(o, 0x114) = (unsigned short)I(o, 0x114);
        dx = F(o, 0xEC) - F(o, 0xBC);
        dy = F(o, 0xF0) - F(o, 0xC0);
        dz = F(o, 0xF4) - F(o, 0xC4);
        F(o, 0x134) = math_signed_sqrt(dy * dy + dx * dx + dz * dz);
        dx = F(o, 0xEC) - F(o, 0xBC);
        dz = F(o, 0xF4) - F(o, 0xC4);
        h = math_signed_sqrt(dz * dz + dx * dx);
        if (h == 0.0f)
            h = 9.99999997e-07f;
        I(o, 0x144) = math_atan2_angle16(F(o, 0xF0), h);
        I(o, 0x154) = math_atan2_angle16(F(o, 0xC0) - F(o, 0xF0), h);
        return;
    case 0:
        break;
    default:
        return;
    }
    I(o, 0x140) = DEG(H(p, 8));
    I(o, 0x150) = DEG(H(p, 10));
    I(o, 0x110) = DEG(H(p, 12));
    s.v.x = FB[0] - FA[0];
    s.v.z = FB[2] - FA[2];
    s.v.y = ABSD(FA[1], FB[1]) + 170.0f;
    if (H(p, 14) == -1) {
        s.vx2 = s.v.x;
        s.vz2 = s.v.z;
        F(o, 0x130) = math_signed_sqrt(s.vz2 * s.vz2 + s.v.x * s.vx2);
        z = F(o, 0x130) * 0.100000024f / 1500.0f + 0.899999976f;
        if (z > 1.0f)
            z = 1.0f;
        F(o, 0x130) = F(o, 0x130) / 2.0f * F(o, 24) / (F(o, 28) / 2.0f * z);
        h = s.v.y / 2.0f * F(o, 24) / (F(o, 32) / 2.0f * 0.799999952f);
        if (h > F(o, 0x130))
            F(o, 0x130) = h;
        if (600.0f > F(o, 0x130))
            F(o, 0x130) = 600.0f;
    } else {
        F(o, 0x130) = (float)H(p, 14);
    }
    if (H(p, 2) & 0x30) {
        if (ABSD(F(o, 0x130), F(o, 0x134)) > ABSD(F(o, 0x130), F(o, 0x134)) / (float)(H(p, 16) + 1))
            F(o, 0x134) = F(o, 0x134) + (F(o, 0x130) - F(o, 0x138)) / (float)(H(p, 16) + 1);
        else
            F(o, 0x134) = F(o, 0x130);
    } else if (!(F(o, 0x134) == F(o, 0x130))) {
        if (ABSD(F(o, 0x130), F(o, 0x134)) > ABSD(F(o, 0x130), F(o, 0x134)) / (float)(H(p, 16) + 1))
            F(o, 0x134) = F(o, 0x134) + (F(o, 0x130) - F(o, 0x134)) / (float)(H(p, 16) + 1);
        else
            F(o, 0x134) = F(o, 0x130);
    }
    switch (H(p, 4) & 0xF0) {
    case 0:
        I(o, 0x110) = I(o, 0x110) + I(o, 0x118);
        break;
    case 32:
        if (s.v.z == 0.0f)
            s.v.z = 9.99999997e-07f;
        I(o, 0x110) = I(o, 0x110) + math_atan2_angle16(s.v.x, s.v.z);
        break;
    case 48:
        if (s.v.z == 0.0f)
            s.v.z = 9.99999997e-07f;
        a = math_atan2_angle16(s.v.x, s.v.z);
        if ((unsigned short)(I(o, 0x114) - a) > 0x8000)
            I(o, 0x110) = 0x10000 - I(o, 0x110);
        I(o, 0x110) = I(o, 0x110) + a;
        break;
    case 64:
        if ((H(p, 4) & 15) == 1 || (H(p, 4) & 15) == 4)
            pl = PLX(1 - *(signed char *)(o + 0x184));
        else
            pl = PLX(*(signed char *)(o + 0x184));
        I(o, 0x110) = I(pl, 48) + I(o, 0x110);
        break;
    case 144:
        if (s.v.z == 0.0f)
            s.v.z = 9.99999997e-07f;
        a = math_atan2_angle16(s.v.x, s.v.z);
        r6 = (unsigned short)(a - H(o, 0x114) + 0x4000);
        if (r6 >= 0x4000 && !(r6 > 0xC000))
            r6 = a + 0xC000;
        else
            r6 = a + 0x4000;
        I(o, 0x110) = I(o, 0x110) + r6;
        break;
    }
    if (I(o, 0x110) - I(o, 0x114) > 0x8000)
        I(o, 0x110) = I(o, 0x110) - 0x10000;
    if (I(o, 0x110) - I(o, 0x114) < -32768)
        I(o, 0x110) = I(o, 0x110) + 0x10000;
    if (H(p, 2) & 16)
        I(o, 0x114) = I(o, 0x114) + (short)(I(o, 0x110) - I(o, 0x118)) / H(p, 24);
    else
        I(o, 0x114) = I(o, 0x114) + (short)(I(o, 0x110) - I(o, 0x114)) / H(p, 24);
    I(o, 0x114) = (unsigned short)I(o, 0x114);
    if ((H(p, 4) & 0xF00) == 0x100) {
        k = math_cos_angle16(I(o, 0x154));
        k = F(o, 0x134) * k;
    } else if (H(p, 2) & 15) {
        k = math_cos_angle16(I(o, 0x150));
        k = F(o, 0x130) * k;
    } else {
        I(o, 0x154) = I(o, 0x154) + (short)(I(o, 0x150) - I(o, 0x154)) / H(p, 22);
        k = math_cos_angle16(I(o, 0x154));
        k = F(o, 0x134) * k;
    }
    switch (H(p, 4) & 15) {
    case 0:
        F(o, 0xE0) = FA[0];
        F(o, 0xE4) = FA[1];
        F(o, 0xE8) = FA[2];
        F(o, 0xE4) = F(o, 0xE4) + (float)H(p, 8);
        break;
    case 1:
        F(o, 0xE0) = FB[0];
        F(o, 0xE4) = FB[1];
        F(o, 0xE8) = FB[2];
        F(o, 0xE4) = F(o, 0xE4) + (float)H(p, 8);
        break;
    case 2:
        F(o, 0xE0) = (FA[0] + FB[0]) / 2.0f;
        F(o, 0xE4) = (FA[1] + FB[1]) / 2.0f;
        F(o, 0xE8) = (FA[2] + FB[2]) / 2.0f;
        F(o, 0xE4) = F(o, 0xE4) + (float)H(p, 8);
        break;
    case 3:
    case 4:
    case 5:
        if ((H(p, 4) & 15) == 3) {
            F(o, 0xE0) = FA[0];
            F(o, 0xE8) = FA[2];
        } else if ((H(p, 4) & 15) == 4) {
            F(o, 0xE0) = FB[0];
            F(o, 0xE8) = FB[2];
        } else {
            F(o, 0xE0) = (FA[0] + FB[0]) / 2.0f;
            F(o, 0xE8) = (FA[2] + FB[2]) / 2.0f;
        }
        if (H(p, 2) & 15) {
            c = math_tan_angle16(I(o, 0x140));
        } else {
            I(o, 0x144) = I(o, 0x144) + (short)(I(o, 0x140) - I(o, 0x144)) / H(p, 20);
            c = math_tan_angle16(I(o, 0x144));
        }
        F(o, 0xE4) = k * c;
        break;
    case 6:
        *(VEC3 *)(o + 0xE0) = *(VEC3 *)(o + 0xEC);
        break;
    case 7:
        s.pl = PLX(*(signed char *)(o + 0x184));
        thunk_FUN_0c062242(s.pl + 0x300 + (short)(*(signed char *)(s.pl + 0x71F1) * 3520) + (short)(H(p, 8) * 176), (float *)(o + 0xE0));
        break;
    case 8:
        s.pl = PLX(1 - *(signed char *)(o + 0x184));
        thunk_FUN_0c062242(s.pl + 0x300 + (short)(*(signed char *)(s.pl + 0x71F1) * 3520) + (short)(H(p, 8) * 176), (float *)(o + 0xE0));
        break;
    }
    F(o, 0xEC) = F(o, 0xEC) + (float)((short)(int)(F(o, 0xE0) - F(o, 0xEC)) / (H(p, 18) + 1));
    F(o, 0xF0) = F(o, 0xF0) + (float)((short)(int)(F(o, 0xE4) - F(o, 0xF0)) / (H(p, 18) + 1));
    F(o, 0xF4) = F(o, 0xF4) + (float)((short)(int)(F(o, 0xE8) - F(o, 0xF4)) / (H(p, 18) + 1));
    *(VEC3 *)(o + 0xEC) = *(VEC3 *)(o + 0xE0);
    F(o, 0xBC) = F(o, 0xEC) + k * math_sin_angle16(I(o, 0x114));
    F(o, 0xC4) = F(o, 0xF4) + k * math_cos_angle16(I(o, 0x114));
    F(o, 0xC0) = F(o, 0xF0) + F(o, 0x134) * math_sin_angle16(I(o, 0x154));
    I(o, 0x120) = DEG(H(p, 6));
    if (H(p, 2) & 32)
        I(o, 0x124) = I(o, 0x124) + (short)(I(o, 0x120) - I(o, 0x128)) / H(p, 0);
    else
        I(o, 0x124) = I(o, 0x124) + (short)(I(o, 0x120) - I(o, 0x124)) / 10;
    if (H(p, 2) & 1) {
        I(o, 0x114) = I(o, 0x110);
        I(o, 0x154) = I(o, 0x150);
        F(o, 0x134) = F(o, 0x130);
        k = math_cos_angle16(I(o, 0x154));
        k = F(o, 0x134) * k;
        *(VEC3 *)(o + 0xEC) = *(VEC3 *)(o + 0xE0);
        I(o, 0x124) = I(o, 0x120);
        F(o, 0xBC) = F(o, 0xEC) + k * math_sin_angle16(I(o, 0x114));
        F(o, 0xC4) = F(o, 0xF4) + k * math_cos_angle16(I(o, 0x114));
        F(o, 0xC0) = F(o, 0xF0) + F(o, 0x134) * math_sin_angle16(I(o, 0x154));
    }
}

int cam_request_mode_01(int a4)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = cam_request_mode(0x1, 0x0, 0x80);
    t2 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)0xC7F29FF = t2;
    }
    return t2;
}

int cam_mode_01(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x4));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return cam_step_keyframe_script(a4, (*(int *)((((*(signed char *)((a4 + 0x7))) << 2) + 0xC34568C))));
    }
    *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
    *(unsigned char *)(((a4 + 0x1) + 0x5)) = 0x0;
    *(unsigned char *)(((a4 + 0x1) + 0x4)) = 0x0;
    return cam_step_keyframe_script(a4, (*(int *)((((*(signed char *)((a4 + 0x7))) << 2) + 0xC34568C))));
}

int cam_request_mode_02(int a4)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = cam_request_mode(0x2, 0x0, 0x80);
    t2 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)0xC7F29FC = t2;
    }
    return t2;
}

int cam_mode_02(int a4)
{
    return cam_step_keyframe_script(a4, (*(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC33FFC0))));
}

int cam_request_mode_05(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = cam_request_mode(0x5, a5, 0x80);
    t2 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)0xC7F29FC = t2;
    }
    return t2;
}

int cam_mode_05(int a4)
{
    return cam_step_keyframe_script(a4, (*(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC340048))));
}

int cam_request_mode_06(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = cam_request_mode(0x6, a5, 0x80);
    t2 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)0xC7F29FC = t2;
    }
    return t2;
}

int FUN_0c0da5b2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC7F3073;
    if ((unsigned char)t0 != 0) {
        if (((unsigned char)t0 != 1) && ((unsigned char)t0 != 2)) {
            if ((unsigned char)t0 != 3) {
                return ((int (*)(int, int, int, int))(0xC0DA632))(a4, t0, 0xC7F31F0, a7);
            }
            *(volatile signed char *)((a4 + 0x184));
            return ((int (*)(int, int, int, int))(0xC0DA61A))(a4, t0, 0xC7F31F0, a7);
        }
        if ((*(signed char *)((a4 + 0x184))) == ((unsigned char)t0 - 1)) {
            if ((*(int *)((((signed char)(((((t0 - 1) << 2) << 1) + (t0 - 1)) << 2) + 0xC7F31F0) + 0x8))) != 4) {
                return ((int (*)(int, int, int, int))(0xC0DA632))(a4, t0, 0xC7F31F0, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0DA62E))(a4, t0, 0xC7F31F0, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0DA632))(a4, t0, 0xC7F31F0, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0DA632))(a4, t0, 0xC7F31F0, a7);
}

int cam_request_mode_07(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = cam_request_mode(0x7, a5, 0x80);
    t2 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)0xC7F29FC = t2;
    }
    return t2;
}

int cam_mode_07(int a4)
{
    return cam_step_keyframe_script(a4, (*(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC3407EC))));
}

int cam_mode_13(int a4)
{
    return cam_step_keyframe_script(a4, 0xC340814);
}

int cam_request_mode_18(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = cam_request_mode(0x12, a5, 0x80);
    t2 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)0xC7F29FC = t2;
    }
    return t2;
}

int cam_mode_18(int a4)
{
    return cam_step_keyframe_script(a4, (*(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC3425E8))));
}

int cam_force_mode_14(int a4, int a5, int a6)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    (((struct o0_uchar *)0xC7F29FB)->v) = a5;
    (((struct o1_uchar *)0xC7F29FB)->v) = a6;
    return cam_force_mode(0xE, (*(signed char *)(((int)stk + 0))), 0x40);
}

int cam_mode_14(int a4)
{
    return cam_step_keyframe_script(a4, 0xC3463BC);
}

void FUN_0c0da990(char *owner, char variant)
{
    char *slot = (char *)0x0C7F29F8;
    char *row;
    unsigned int rnd;
    unsigned char *unused_ptr;

    if ((unsigned char)slot[172] > 96)
        return;
    slot[172] = 96;
    slot[2] = 19;
    slot[4] = 0;
    slot[5] = 0;
    slot[6] = 0;
    slot[0x184] = owner[3];
    *(char **)(slot + 0x1A0) = (char *)0x0C7E40C4 + (unsigned short)(owner[3] * 29392) + 32;
    *(char **)(slot + 0x1A4) = (char *)0x0C7E40C4 + (unsigned short)((owner[3] == 0) * 29392) + 32;
    row = (char *)0x0C344E34 + owner[4] * 16 + variant * 4;
    rnd = (unsigned int)(math_rand_float() * 255.0f);
    slot[3] = row[rnd % 4];
}

int FUN_0c0daa3e(int a4)
{
    register int t4;

    t4 = 0xAC;
    if ((int)(unsigned char)(*(signed char *)0xC7F2AA4) <= (int)0x60) {
        *(unsigned char *)0xC7F2AA4 = 0x60;
        (((struct o0_uchar *)0xC7F29FA)->v) = 0x14;
        (((struct o2_uchar *)0xC7F29FA)->v) = 0x0;
        (((struct o3_uchar *)0xC7F29FA)->v) = 0x0;
        (((struct o4_uchar *)0xC7F29FA)->v) = 0x0;
        (((struct o0_uchar *)0xC7F2B7C)->v) = (*(signed char *)((a4 + 0x3)));
        (((struct o1C_uint *)0xC7F2B7C)->v) = (((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20);
        (((struct o20_uint *)0xC7F2B7C)->v) = ((0xC7E40C4 + (unsigned short)((unsigned short)((((*(signed char *)((a4 + 0x3))) == 0)) ? 1 : 0) * (unsigned short)0x72D0)) + 0x20);
        t4 = 0x1A4;
    }
    return t4;
}

int cam_mode_20(int a4)
{
    register int t1;
    register int t3;

    cam_step_keyframe_script(a4, 0xC3440FC);
    t1 = *(signed char *)0xC7E40CD;
    if (t1 != 2) {
        t3 = *(signed char *)0xC7EB39D;
        if (t3 != 2) {
            return cam_force_mode(0x0, 0x0, 0x40);
        }
        return t3;
    }
    return t1;
}

int cam_request_mode_03(int a4, int a5)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = cam_request_mode(0x3, a5, 0x60);
    if ((signed char)t0 != 0) {
        *(unsigned char *)0xC7F29FC = (*(signed char *)(((int)stk + 0)));
        return 0x1;
    }
    return 0x0;
}

int cam_mode_03(int a4)
{
    if ((*(signed char *)((0xC7E40CD + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x184))) * (unsigned short)0x72D0)))) == 1) {
        return cam_force_mode(0x0, 0x0, 0x40);
    }
    return cam_step_keyframe_script(a4, (*(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC34342C))));
}

int FUN_0c0dab5e(int a4, int a5, int a6)
{
    int stk[3];
    register int t1;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t1 = cam_request_mode_with_args(0x60, 0x4, (*(int *)(((int)stk + 4))), a6);
    if ((signed char)t1 != 0) {
        *(unsigned char *)0xC7F29FC = (*(signed char *)(((int)stk + 0)));
        return 0x1;
    }
    return 0x0;
}

int cam_request_mode_04(int a4, int a5)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = cam_request_mode(0x4, a5, 0x60);
    if ((signed char)t0 != 0) {
        *(unsigned char *)0xC7F29FC = (*(signed char *)(((int)stk + 0)));
        return 0x1;
    }
    return 0x0;
}

int cam_mode_04(int a4)
{
    return cam_step_keyframe_script(a4, (*(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC343B60))));
}

int FUN_0c0dabd0(char *p)
{
    *(struct R52 *)(g_cam_records + 0x1A8) = *(struct R52 *)0xC340CC0;
    *(unsigned short *)(g_cam_records + 0x1A8) = p[0x10B];
    return cam_request_mode(17, p[3], 80);
}

int cam_mode_17(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x4));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(0xC0DAC6E))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0DAC66))(a4, a5, a6, a7);
    }
    (((struct o1A8_ushort *)(a4))->v) = (((((struct o1A8_short *)(a4))->v)) - 1);
    return ((int (*)(int, int, int, int))(0xC0DAC46))(a4, a5, a6, a7);
}

void cam_mode_27_debug_free(char *o)
{
    float d[3];
    float *V;
    unsigned short pad;
    float f5;
    short *sa;
    short *sb;
    short *sc;

    switch (o[4]) {
    case 0:
        o[4] = o[4] + 1;
        *(struct s52 *)(o + 0x1A8) = *(struct s52 *)0xC155230;
        /* fall through */
    case 1:
        pad = *(unsigned short *)0xC361C34;
        sa = (short *)(o + 0x1B4);
        sb = (short *)(o + 0x1B2);
        sc = (short *)(o + 0x1B6);
        if (!(pad & 0x400)) {
            if (pad & 0x40)
                *sa = *sa + 4;
            else if (*(unsigned short *)0xC361C34 & 0x80)
                *sa = *sa - 4;
            if (*sa < 0)
                *(short *)(o + 0x1B4) = *(short *)(o + 0x1B4) + 360;
            if (*sa > 360)
                *(short *)(o + 0x1B4) = *(short *)(o + 0x1B4) - 360;
            pad = *(unsigned short *)0xC361C34;
            if (pad & 0x10)
                *sb = *sb + 4;
            else if (pad & 0x20)
                *sb = *sb - 4;
            if (*sb < 0)
                *(short *)(o + 0x1B2) = *(short *)(o + 0x1B2) + 360;
            if (*sb > 360)
                *(short *)(o + 0x1B2) = *(short *)(o + 0x1B2) - 360;
            pad = *(unsigned short *)0xC361C34;
            if (pad & 4) {
                *sc = *sc - 20;
                if (*sc < 1)
                    *sc = 1;
            } else if (pad & 2) {
                *sc = *sc + 20;
            }
        } else {
            V = (float *)0xC33F9BC;
            d[0] = *(float *)(o + 0xEC) - *(float *)(o + 0xBC);
            d[1] = *(float *)(o + 0xF0) - *(float *)(o + 0xC0);
            d[2] = *(float *)(o + 0xF4) - *(float *)(o + 0xC4);
            if (d[0] == 0.0f && d[2] == 0.0f) {
                d[2] = 9.99999975e-05f;
                d[0] = 9.99999975e-05f;
            }
            FUN_0c0e24f0(d);
            pad = *(unsigned short *)0xC361C34;
            f5 = d[2] * 10.0f;
            if (pad & 0x40) {
                V[0] = V[0] + f5;
                V[2] = V[2] + (-(d[0] * 10.0f));
            } else if (pad & 0x80) {
                V[0] = V[0] - f5;
                V[2] = V[2] - (-(d[0] * 10.0f));
            }
            if (pad & 0x10)
                V[1] = V[1] + 10.0f;
            else if (pad & 0x20)
                V[1] = V[1] - 10.0f;
            f5 = d[0] * 10.0f;
            if (pad & 4) {
                V[0] = V[0] + f5;
                V[1] = V[1] + 10.0f * d[1];
                V[2] = V[2] + 10.0f * d[2];
            } else if (pad & 2) {
                V[0] = V[0] - f5;
                V[1] = V[1] - d[1] * 10.0f;
                V[2] = V[2] - d[2] * 10.0f;
            }
        }
        cam_compute_follow(o, o + 0x1A8);
        return;
    default:
        return;
    }
}

int cam_mode_15(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x4));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(0xC0DAFBE))(a4, a5, a6, a7);
        }
        t0 = (((struct o1B4_short *)(a4))->v);
        (((struct o1B4_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x168) {
            (((struct o1B4_ushort *)(a4))->v) = 0x0;
        }
        if ((int)((((struct o1B6_short *)(a4))->v)) > (int)0x100) {
            (((struct o1B6_ushort *)(a4))->v) = (((((struct o1B6_short *)(a4))->v)) - 1);
        }
        if ((int)((((struct o1B2_short *)(a4))->v)) > (int)0xFFFFFFFB) {
            *(volatile short *)((a4 + 0x1B2));
            return ((int (*)(int, int, int, int))(0xC0DAFBA))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0DAFBE))(a4, a5, a6, a7);
    }
    *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
    FUN_0c0e7140(a4);
    t0 = (((struct o1B4_short *)(a4))->v);
    (((struct o1B4_ushort *)(a4))->v) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0x168) {
        (((struct o1B4_ushort *)(a4))->v) = 0x0;
    }
    if ((int)((((struct o1B6_short *)(a4))->v)) > (int)0x100) {
        (((struct o1B6_ushort *)(a4))->v) = (((((struct o1B6_short *)(a4))->v)) - 1);
    }
    if ((int)((((struct o1B2_short *)(a4))->v)) > (int)0xFFFFFFFB) {
        *(volatile short *)((a4 + 0x1B2));
        return ((int (*)(void))(0xC0DAFBA))();
    }
    return ((int (*)(void))(0xC0DAFBE))();
}

int cam_mode_08_09(int a4)
{
    return cam_step_keyframe_script(a4, 0xC340D90);
}

int cam_force_mode_10(int a4, int a5)
{
    int stk[1];
    register int t1;

    *(unsigned char *)(((int)stk + 0)) = a4;
    cam_force_mode(0xA, a5, 0x80);
    t1 = *(signed char *)(((int)stk + 0));
    *(unsigned char *)0xC7F29FC = t1;
    return t1;
}

int cam_mode_10(int a4)
{
    if ((*(signed char *)0xC7F306C) != (*(signed char *)((a4 + 0x4)))) {
        cam_force_mode_10((*(signed char *)0xC7F306C), (*(signed char *)((a4 + 0x184))));
    }
    return cam_step_keyframe_script(a4, (*(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC342318))));
}

int cam_mode_21(int a4)
{
    if ((*(signed char *)((0xC7EB27E + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x184))) * (unsigned short)0x72D0)))) != 23) {
        return FUN_0c0dc994();
    }
    return cam_step_keyframe_script(a4, 0xC342344);
}

int cam_mode_22(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x4));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(0xC0DB0C6))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0DB096))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0DB08C))(a4, a5, a6, a7);
}

int cam_force_mode_23(int a4)
{
    int stk[1];
    register int t1;

    *(unsigned char *)(((int)stk + 0)) = a4;
    cam_force_mode(0x17, 0x0, 0x40);
    t1 = *(signed char *)(((int)stk + 0));
    *(unsigned char *)0xC7F29FC = t1;
    return t1;
}

int cam_mode_23(int a4)
{
    return cam_step_keyframe_script(a4, (*(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC33FE44))));
}

int cam_mode_25(int a4)
{
    register int t3;
    register int t5;

    cam_step_keyframe_script(a4, (*(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC346868))));
    t3 = *(signed char *)0xC7E40CD;
    if (t3 == 1) {
        t5 = *(signed char *)0xC7EB39D;
        if (t5 == 1) {
            return cam_force_mode(0x0, 0x0, 0x40);
        }
        return t5;
    }
    return t3;
}

int cam_mode_26(int a4)
{
    return cam_step_keyframe_script(a4, 0xC33F9D4);
}
