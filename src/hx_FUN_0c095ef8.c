/* Fighter state: walking. Each frame: drops a held item when asked (+0x7236, FUN_0c09c782 -> FUN_0c0634b4,
   FUN_0c09fa84); leaves the walk for jumps/attacks/throws (FUN_0c0a2334 + FUN_0c0a25e0, FUN_0c0a22d6 + FUN_0c0a2490),
   guard (action 10), item use (FUN_0c09e910 -> FUN_0c09ea80), dash (5) or a 5-frame wall push (FUN_0c0a1162, then
   action 17); keeps its feet on the ground (FUN_0c09d544, step height +0x7254); turns towards the stick direction
   (+0x7248 from FUN_0c09ddfe and the camera angle g_w31e0, 3640 units per frame at most, or over +0xF0 frames when
   starting) and walks 4 units per frame along its heading; on the 36-frame step cycle (+0xF2) plays the footstep
   sound and, on soft ground (+0x27C == 2), a dust puff at each foot (FUN_0c062242, FUN_0c0421ee); then moves
   (FUN_0c09a910) and updates its motion (FUN_0c09d990). */
char FUN_0c09c782(char *o);
void FUN_0c0634b4(char *o);
void FUN_0c09fa84(char *o);
char FUN_0c0a2334(char *o);
char FUN_0c0a25e0(char *o);
char FUN_0c0a22d6(char *o);
char FUN_0c0a2490(char *o);
int FUN_0c09e71c(char *o);
char FUN_0c09e910(char *o);
void FUN_0c09ea80(char *o);
int FUN_0c09e7a6(char *o);
char FUN_0c0a1162(char *o);
void FUN_0c0a2e26(char *o, int action, int arg);
char FUN_0c09d544(char *o, float *step, float height);
int FUN_0c09e7d2(char *o);
void FUN_0c09d9bc(char *o);
void FUN_0c09f8e0(char *o);
int FUN_0c09ddfe(char *o);
float FUN_0c0df4d0(int angle);
float FUN_0c0dfa50(int angle);
void thunk_FUN_0c062242(char *slot, float *pos);
void FUN_0c0421ee(float *pos, int kind);
void FUN_0c0a3e10(int side, int ground, int foot);
void FUN_0c09a910(char *o);
void FUN_0c09d990(char *o);

#define PL(i) ((char *)((unsigned short)((unsigned short)(i) * (unsigned short)0x72D0) + 0xC7E40C4))
#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))

void FUN_0c095ef8(char *o)
{
    char *pl;
    short d;

    if (B(o, 0x7236) != 0 && FUN_0c09c782(o) != 0) {
        FUN_0c0634b4(o);
        FUN_0c09fa84(o);
    }
    if (FUN_0c0a2334(o) != 0 && FUN_0c0a25e0(o) != 0)
        return;
    if (FUN_0c0a22d6(o) != 0 && FUN_0c0a2490(o) != 0)
        return;
    if (FUN_0c09e71c(o) != 0) {
        FUN_0c0a2e26(o, 10, 2);
        return;
    }
    if (FUN_0c09e910(o) != 0) {
        FUN_0c09ea80(o);
        return;
    }
    if (FUN_0c09e7a6(o) != 0) {
        FUN_0c0a2e26(o, 5, 2);
        return;
    }
    if (FUN_0c0a1162(o) != 0) {
        H(o, 0xEE) = H(o, 0xEE) - 1;
        if (H(o, 0xEE) == 0) {
            B(o, 0x7243) = 5;
            FUN_0c0a2e26(o, 17, 0);
            return;
        }
    } else {
        H(o, 0xEE) = 5;
    }
    if (FUN_0c09d544(o, (float *)(o + 0x7254), 60.0f) == 2) {
        B(o, 0x7243) = B(o, 0x7243) - 1;
        if (B(o, 0x7243) != 0)
            goto steer;
        F(o, 36) = F(o, 36) + F(o, 0x7254);
    }
    B(o, 0x7243) = 4;
steer:
    if (FUN_0c09e7d2(o) != 0) {
        FUN_0c09d9bc(o);
    } else {
        F(o, 60) = 0.0f;
        F(o, 72) = F(o, 0x71E4);
        if (!(I(o, 0x2DC) & 0xF0)) {
            I(o, 48) = I(o, 0x7248);
            if (H(o, 0xF0) != 0) {
                FUN_0c0a2e26(o, 0, 0);
            } else {
                FUN_0c09f8e0(o);
                FUN_0c0a2e26(o, 32, 0);
            }
            return;
        }
        if (H(o, 0xF0) == 0) {
            if (I(o, 0x2DC) & 0xF0)
                I(o, 0x7248) = (unsigned short)(FUN_0c09ddfe(o) + *(short *)0x0C7F31E0 - I(o, 48));
            if (I(o, 0x7248) & 0x8000)
                I(o, 0x7248) = I(o, 0x7248) | 0xFFFF0000;
            if (!(I(o, 0x7248) > -3640))
                I(o, 48) = I(o, 48) - 3640;
            else if (I(o, 0x7248) >= 3640)
                I(o, 48) = I(o, 48) + 3640;
            else
                I(o, 48) = I(o, 48) + I(o, 0x7248) / 2;
            I(o, 48) = I(o, 48) & 0xFFFF;
        }
    }
    if (H(o, 0xF0) != 0) {
        d = (short)(H(o, 0x7248) - I(o, 48));
        F(o, 56) = FUN_0c0df4d0(0x14000 - I(o, 0x7248)) * 4.0f;
        F(o, 64) = FUN_0c0dfa50(0x14000 - I(o, 0x7248)) * 4.0f;
        I(o, 48) = (unsigned short)(I(o, 48) + d / H(o, 0xF0));
        H(o, 0xF0) = H(o, 0xF0) - 1;
        if (H(o, 0xF0) == 0)
            FUN_0c09fa84(o);
    } else {
        if (I(o, 0x2DC) & 0xF0)
            I(o, 0x7248) = (unsigned short)(FUN_0c09ddfe(o) + *(short *)0x0C7F31E0);
        FUN_0c09f8e0(o);
    }
    if (H(o, 0xF2) == 0) {
        if (B(o, 0x27C) == 2) {
            pl = PL(B(o, 3));
            thunk_FUN_0c062242(pl + 0x300 + (short)(B(pl, 0x71F1) * 3520) + 2640, (float *)(o + 0x727C));
            F(o, 0x7280) = F(o, 36);
            FUN_0c0421ee((float *)(o + 0x727C), 0);
        }
        FUN_0c0a3e10(B(o, 3), B(o, 0x27C), 0);
        H(o, 0xF2) = 36;
    }
    if (H(o, 0xF2) == 18) {
        if (B(o, 0x27C) == 2) {
            pl = PL(B(o, 3));
            thunk_FUN_0c062242(pl + 0x300 + (short)(B(pl, 0x71F1) * 3520) + 3168, (float *)(o + 0x727C));
            F(o, 0x7280) = F(o, 36);
            FUN_0c0421ee((float *)(o + 0x727C), 0);
        }
        FUN_0c0a3e10(B(o, 3), B(o, 0x27C), 1);
    }
    H(o, 0xF2) = H(o, 0xF2) - 1;
    FUN_0c09a910(o);
    FUN_0c09d990(o);
}
