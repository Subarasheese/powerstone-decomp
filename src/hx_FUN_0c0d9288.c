/* Camera script step (camera o, script command p; called every frame of a cut). On the first frame (o[6] == 0) the
   current eye / look-at / yaw / roll / distance / pitch values are saved as the start values (+0xC8, +0xF8, +0x118,
   +0x128, +0x138, +0x148, +0x158). Command kind p[2] & 0xF000:
   0x1000 - free camera: look-at (+0xE0) and eye (+0xB0) targets from the command (absolute, relative to the two focus
            points *(o+0x1A0) / *(o+0x1A4), their midpoint or the current ones; p[4] low / high nibble), roll from
            p[6] degrees, then (p[2] & 15) eased by p[20..30] (0), snapped (1) or interpolated from the start values
            over p[0] frames (2); yaw, distance and pitches are derived back from the eye and look-at points
            (FUN_0c0df400 = atan2, FUN_0c0df340 = sqrtf).
   0      - orbit camera: pitch / roll pitch / yaw from p[8..12] degrees, distance from p[14] (or framed from the
            focus points when -1), eased by p[16] frames; the yaw is made relative to the focus direction, a fighter's
            facing (+0x184 selects it) or the previous yaw (p[4] high nibble); the look-at point follows a focus point,
            a fighter's body part (FUN_0c062242) or the current point (p[4] low nibble) over p[18] frames, and the eye
            is placed around it (FUN_0c0df4d0 / FUN_0c0dfa50 / FUN_0c0dfce0). p[2] bit 0 snaps everything at once. */
float FUN_0c0df4d0(int angle);
float FUN_0c0dfa50(int angle);
float FUN_0c0dfce0(int angle);
float FUN_0c0df340(float x);
int FUN_0c0df400(float x, float z);
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

void FUN_0c0d9288(char *o, char *p)
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
        I(o, 0x114) = FUN_0c0df400(s.v.x, s.v.z);
        I(o, 0x114) = (unsigned short)I(o, 0x114);
        dx = F(o, 0xEC) - F(o, 0xBC);
        dy = F(o, 0xF0) - F(o, 0xC0);
        dz = F(o, 0xF4) - F(o, 0xC4);
        F(o, 0x134) = FUN_0c0df340(dy * dy + dx * dx + dz * dz);
        dx = F(o, 0xEC) - F(o, 0xBC);
        dz = F(o, 0xF4) - F(o, 0xC4);
        h = FUN_0c0df340(dz * dz + dx * dx);
        if (h == 0.0f)
            h = 9.99999997e-07f;
        I(o, 0x144) = FUN_0c0df400(F(o, 0xF0), h);
        I(o, 0x154) = FUN_0c0df400(F(o, 0xC0) - F(o, 0xF0), h);
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
        F(o, 0x130) = FUN_0c0df340(s.vz2 * s.vz2 + s.v.x * s.vx2);
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
        I(o, 0x110) = I(o, 0x110) + FUN_0c0df400(s.v.x, s.v.z);
        break;
    case 48:
        if (s.v.z == 0.0f)
            s.v.z = 9.99999997e-07f;
        a = FUN_0c0df400(s.v.x, s.v.z);
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
        a = FUN_0c0df400(s.v.x, s.v.z);
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
        k = FUN_0c0df4d0(I(o, 0x154));
        k = F(o, 0x134) * k;
    } else if (H(p, 2) & 15) {
        k = FUN_0c0df4d0(I(o, 0x150));
        k = F(o, 0x130) * k;
    } else {
        I(o, 0x154) = I(o, 0x154) + (short)(I(o, 0x150) - I(o, 0x154)) / H(p, 22);
        k = FUN_0c0df4d0(I(o, 0x154));
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
            c = FUN_0c0dfce0(I(o, 0x140));
        } else {
            I(o, 0x144) = I(o, 0x144) + (short)(I(o, 0x140) - I(o, 0x144)) / H(p, 20);
            c = FUN_0c0dfce0(I(o, 0x144));
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
    F(o, 0xBC) = F(o, 0xEC) + k * FUN_0c0dfa50(I(o, 0x114));
    F(o, 0xC4) = F(o, 0xF4) + k * FUN_0c0df4d0(I(o, 0x114));
    F(o, 0xC0) = F(o, 0xF0) + F(o, 0x134) * FUN_0c0dfa50(I(o, 0x154));
    I(o, 0x120) = DEG(H(p, 6));
    if (H(p, 2) & 32)
        I(o, 0x124) = I(o, 0x124) + (short)(I(o, 0x120) - I(o, 0x128)) / H(p, 0);
    else
        I(o, 0x124) = I(o, 0x124) + (short)(I(o, 0x120) - I(o, 0x124)) / 10;
    if (H(p, 2) & 1) {
        I(o, 0x114) = I(o, 0x110);
        I(o, 0x154) = I(o, 0x150);
        F(o, 0x134) = F(o, 0x130);
        k = FUN_0c0df4d0(I(o, 0x154));
        k = F(o, 0x134) * k;
        *(VEC3 *)(o + 0xEC) = *(VEC3 *)(o + 0xE0);
        I(o, 0x124) = I(o, 0x120);
        F(o, 0xBC) = F(o, 0xEC) + k * FUN_0c0dfa50(I(o, 0x114));
        F(o, 0xC4) = F(o, 0xF4) + k * FUN_0c0df4d0(I(o, 0x114));
        F(o, 0xC0) = F(o, 0xF0) + F(o, 0x134) * FUN_0c0dfa50(I(o, 0x154));
    }
}
