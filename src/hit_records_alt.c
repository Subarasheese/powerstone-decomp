/* attack records, hit data setup, hit-stop shake, combo counter, damage helpers (0c08d644-0c09111e) */

int FUN_0c0555c4(void);
float hit_calc_damage(char *o, float power);
void pl_vib_start_preset(char *o, int state);
#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define S ((signed char *)0x0C7F4750)
#define ATK(o) (*(unsigned char **)((o) + 0xF8))
#define BY(o) (*(char **)((o) + 28))
void pl_hitreact_step(char *o);
void pl_hitreact_finish(char *o);
void FUN_0c091eee(char *o);
void pl_hitreact_phase4_update(char *o);
void pl_reset_pose(char *o);
void pl_timer_arm_forever(char *o);
void pl_hitreact_calc_hit_side(char *o);
void FUN_0c08e704(char *o);
void pl_hitreact_start_vibration(char *o);
void FUN_0c08e980(char *o);
void FUN_0c08e4bc(char *o);
void FUN_0c0d905e(int sound);
void cam_request_mode_04(int voice, int side);
#define F(o, n) (*(float *)((o) + (n)))
struct o24_float { char p[0x24]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
int fx_spawn_044094(int);
int FUN_0c08e382(int);
int pl_change_state(int, int, int);
int FUN_0c0a3cd6(int);
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int pl_hitreact_00_phase0(int);
int pl_step_motion(int);
void thunk_FUN_0c062242(char *slot, float *pos);
void FUN_0c08e5b4(char *o);
void fx_spawn_04b054(int side);
void pl_start_motion(char *o, int layer, int motion);
void pl_set_power_form_off(char *o);
#define PL(i) ((char *)((unsigned short)((unsigned short)(i) * (unsigned short)0x72D0) + 0xC7E40C4))

int pl_hitreact_00_phase3(int a4);

void FUN_0c08dfa4(char *o)
{
    unsigned char *w;
    char *q;
    float f, m, t;
    int n;
    short v;

    if (FUN_0c0555c4() == 0)
        return;
    f = hit_calc_damage(o, (float)ATK(o)[1]);
    switch (ATK(o)[8]) {
    case 1:
        f = f * ((float *)0x0C338EA4)[B(BY(o), 4)];
        break;
    case 2:
        f = f * ((float *)0x0C338ED0)[B(BY(o), 4)];
        break;
    case 3:
        f = f * ((float *)0x0C338EFC)[B(BY(o), 4) * 4 + B(BY(o), 0x721D)];
        break;
    }
    if (ATK(o)[4] != 2) {
        m = 1.0f;
        q = *(char **)(o + 0x7294);
        if (q != 0 && B(q, 3) != 2 && ATK(o)[4] != 7) {
            if (ATK(o)[4] == 3 || ATK(o)[4] == 4 || B(BY(o), 0x71F3) != 0)
                m = 1.19999993f;
            if (B(BY(o), 0x7230) == 2)
                m = 1.09999990f;
            else if (B(BY(o), 0x7230) == 1)
                m = 1.04999995f;
        }
        f = f * m;
    }
    if (1.0f > f)
        f = 1.0f;
    if (B(o, 0x71F3) != 0) {
        f = f * 0.5f;
        switch (S[27]) {
        case 0: f = 0.0f; break;
        case 1: f = f * 1.0f; break;
        case 2: f = f * 2.0f; break;
        case 3: f = f * 4.0f; break;
        }
    }
    if (ATK(o)[4] != 7 && B(BY(o), 0x71F3) != 0) {
        switch (S[28]) {
        case 0: f = f * 0.5f; break;
        case 1: f = f * 1.0f; break;
        case 2: f = f * 1.5f; break;
        case 3: f = f * 2.0f; break;
        }
    }
    if (f != 0.0f && 1.0f > f)
        f = 1.0f;
    if (H(o, 0x71D4) != H(o, 0x71D6) && B(BY(o), 0x720E) == 1) {
        v = H(o, 0x71D4);
        H(o, 0x71D8) = v;
        H(o, 0x71D6) = v;
    }
    n = (int)f;
    t = f / 240.0f;
    if (ATK(o)[4] != 0 || *(signed char *)0x0C7F4767 != 0) {
        if (H(o, 0x71D4) >= 0) {
            H(o, 0x71D4) = H(o, 0x71D4) - n;
            if (H(o, 0x71D4) < 0)
                H(o, 0x71D4) = -1;
            v = H(o, 0x71D4);
            H(o, 0x71D8) = v;
            H(o, 0x71D6) = v;
            if (H(o, 0x71D4) < 0) {
                if (ATK(o)[16] & 2) {
                    H(o, 0x71D6) = 0;
                    H(o, 0x71D8) = 0;
                    H(o, 0x71D4) = 0;
                } else {
                    H(o, 0x71D6) = -1;
                    H(o, 0x71D8) = -1;
                    H(o, 0x71D4) = -1;
                }
            }
        }
        if (B(o, 0x71F3) != 0) {
            H(o, 0x71F4) = H(o, 0x71F4) - (int)(t * 5519.99951f);
            if (H(o, 0x71F4) <= 0)
                H(o, 0x71F4) = 0;
        }
    } else {
        if (H(o, 0x71D4) >= 0) {
            H(o, 0x71D4) = H(o, 0x71D4) - n;
            if (H(o, 0x71D4) < 0) {
                if (ATK(o)[16] & 2) {
                    H(o, 0x71D6) = 0;
                    H(o, 0x71D8) = 0;
                    H(o, 0x71D4) = 0;
                } else {
                    H(o, 0x71D6) = -1;
                    H(o, 0x71D8) = -1;
                    H(o, 0x71D4) = -1;
                }
            }
        }
        H(o, 0x71D6) = H(o, 0x71D6) - (int)(f * 0.199999988f);
        if (H(o, 0x71D4) > H(o, 0x71D6))
            H(o, 0x71D6) = H(o, 0x71D4);
        if (B(o, 0x71F3) != 0) {
            H(o, 0x71F4) = H(o, 0x71F4) - (int)(t * 1800.0f);
            if (H(o, 0x71F4) <= 0)
                H(o, 0x71F4) = 0;
        }
    }
    B(o, 0x720F) = 40;
    if (B(o, 0x71F3) == 0 || S[27] != 0)
        B(o, 0x7214) = B(o, 0x7214) - (ATK(o)[7] & 63);
    if (B(o, 0x7214) < 0)
        B(o, 0x7214) = 0;
    B(o, 0x7215) = 180;
    if (*(signed char *)(0x0C7F302C + 75) == 0)
        *(signed char *)(0x0C7F302C + 75) = 2 - B(o, 3);
    if (H(o, 0x71D4) < 0)
        pl_vib_start_preset(o, 9);
}

void pl_hitreact_update(char *o)
{
    signed char *w;

    switch (B(o, 10)) {
    case 0:
        B(o, 10) = B(o, 10) + 1;
        B(o, 13) = 0;
        B(o, 12) = 0;
        B(o, 11) = 0;
        F(o, 64) = 0.0f;
        F(o, 60) = 0.0f;
        F(o, 56) = 0.0f;
        F(o, 76) = 0.0f;
        F(o, 72) = 0.0f;
        F(o, 68) = 0.0f;
        F(o, 0x71E8) = 0.0f;
        B(o, 0x72AC) = 0;
        H(o, 0x72A4) = 20;
        B(o, 0x721A) = 0;
        pl_reset_pose(o);
        pl_timer_arm_forever(o);
        B(o, 0x720A) = 0;
        if (B(o, 0x71F1) == 0)
            B(o, 0x710A) = 1;
        B(o, 0x710B) = 1;
        B(o, 0x710C) = 1;
        pl_hitreact_calc_hit_side(o);
        B(o, 0x7216) = 0;
        FUN_0c08e704(o);
        pl_hitreact_start_vibration(o);
        FUN_0c08e980(o);
        FUN_0c08e4bc(o);
        w = *(signed char **)(o + 0xF8);
        if (w[5] == 0) {
            if ((*(signed char **)(o + 0xF8))[19] == 0)
                FUN_0c0d905e(10);
            else
                cam_request_mode_04((*(signed char **)(o + 0xF8))[19], B(o, 3));
        }
        pl_hitreact_step(o);
        return;
    case 1:
        pl_hitreact_step(o);
        return;
    case 2:
        pl_hitreact_finish(o);
        return;
    case 3:
        FUN_0c091eee(o);
        return;
    case 4:
        pl_hitreact_phase4_update(o);
        return;
    }
}

int FUN_0c08ee66(int a4)
{
    FUN_0c08e382(a4);
    if (((((struct o24_float *)(a4))->v)) > (((((struct o2D4_float *)(a4))->v)) + 100.0f)) {
        fx_spawn_044094((a4 + 0x20));
        FUN_0c0a3cd6((*(signed char *)((a4 + 0x3))));
        return pl_change_state(a4, 0x18, 0x4);
    }
    (((struct o24_float *)(a4))->v) = (((((struct o2D4_float *)(a4))->v)) + -1.0f);
    return pl_change_state(a4, 0x10, 0x2);
}

int pl_hitreact_00_phase3(int a4)
{
    register int t0;

    pl_step_motion(a4);
    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        t0 = 0x18;
        if ((*(signed char *)((a4 + 0x7214))) == 0) {
            t0 = 0xD;
        }
        return pl_change_state(a4, t0, 0x0);
    }
    return 0xF0;
}

int pl_hitreact_00_update(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0xB))) > 0) && (t0 = *(signed char *)((a4 + 0x10B)), t0 != 0)) {
        return 0x10B;
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return pl_hitreact_00_phase3(a4);
            }
            return ((int (*)(int, int, int, int))(0xC08F310))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC08F2E4))(a4, a5, a6, a7);
    }
    return pl_hitreact_00_phase0(a4);
}

void pl_hitreact_01_phase0(char *o)
{
    char *pl;
    unsigned char *w;
    float t;

    pl = PL(B(o, 3));
    thunk_FUN_0c062242(pl + 0x300 + (short)(B(pl, 0x71F1) * 3520) + 0x160, (float *)(o + 0x20));
    FUN_0c08e5b4(o);
    B(o, 0x71BC) = 2;
    H(o, 0xEC) = 0;
    H(o, 0xF0) = 3;
    t = F(o, 0x3C) / F(o, 0x48);
    H(o, 0xEE) = (int)(0.0f > t ? -t : t);
    if (*(int *)(o + 0x7294) != 0) {
        w = *(unsigned char **)(o + 0xF8);
        if ((B(o, 0x71DD) == 1 || B(o, 0x71DD) == 2) && (w[0] == 1 || w[0] == 2)) {
            switch ((*(unsigned char **)(o + 0xF8))[6]) {
            case 2:
                switch (B(o, 0x7205)) {
                case 0: case 2: case 3:
                    H(o, 0xF2) = 128;
                    B(o, 0x7205) = 1;
                    break;
                case 1:
                    H(o, 0xF2) = 96;
                    B(o, 0x7205) = 0;
                    break;
                }
                break;
            case 3:
                H(o, 0xF2) = 112;
                fx_spawn_04b054(B(o, 3));
                break;
            case 4:
                H(o, 0xF2) = 112;
                break;
            default:
                switch (B(o, 0x7205)) {
                case 0: case 2: case 3:
                    H(o, 0xF2) = 96;
                    break;
                case 1:
                    H(o, 0xF2) = 128;
                    break;
                }
                break;
            }
        } else {
            if (B(o, 0x7205) == 1)
                H(o, 0xF2) = 128;
            else
                H(o, 0xF2) = 96;
        }
    } else {
        w = *(unsigned char **)(o + 0xF8);
        if ((B(o, 0x71DD) == 1 || B(o, 0x71DD) == 2) && (w[0] == 1 || w[0] == 2)) {
            switch ((*(unsigned char **)(o + 0xF8))[6]) {
            case 2:
                H(o, 0xF2) = 128;
                B(o, 0x7205) = 1;
                break;
            case 3:
                H(o, 0xF2) = 112;
                fx_spawn_04b054(B(o, 3));
                break;
            case 4:
                H(o, 0xF2) = 112;
                break;
            default:
                H(o, 0xF2) = 96;
                B(o, 0x7205) = 0;
                break;
            }
        }
        if (B(o, 0x7205) == 1)
            H(o, 0xF2) = 128;
        else
            H(o, 0xF2) = 96;
    }
    pl_start_motion(o, 2, H(o, 0xF2));
    B(o, 0x71A9) = 1;
    B(o, 0x71A8) = 1;
    if (H(o, 0x71D4) < 0 && B(o, 0x71F3) != 0) {
        pl_set_power_form_off(o);
        B(o, 0x7230) = 0;
    }
    B(o, 11) = B(o, 11) + 1;
}

int pl_hitreact_01_phase2(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        FUN_0c08e382(a4);
        return pl_change_state(a4, 0xF, ((((*(signed char *)((a4 + 0x7205))) == 1)) ? 1 : 0));
    }
    return (signed char)t0;
}
