/* Per-frame decision step of a player: a chain of state tests (FUN_0c0a2334 / 0c0a25e0 / 0c0a22d6 / 0c0a2490 / 0c09e71c / 0c09e910 / 0c09e7a6 / 0c09e89a / 0c09e7fc) either starts a new animation through FUN_0c0a2e26(o, anim, flag) or, when none fires, keeps turning the player towards its target heading (word +48, 16-bit difference from +0x7248 divided by the counter at +236), updates (FUN_0c09a910, FUN_0c09d990) and plays the step sounds / effects of the current move (shorts +238 / +242, thunk_FUN_0c062242 and FUN_0c0421ee for mode 2, FUN_0c0a3e10). */
extern short g_w31e0;
int FUN_0c09c782(char *o);
void FUN_0c0634b4(char *o);
void FUN_0c09ed26(char *o);
signed char FUN_0c0a2334(char *o);
signed char FUN_0c0a25e0(char *o);
signed char FUN_0c0a22d6(char *o);
signed char FUN_0c0a2490(char *o);
int FUN_0c09e71c(char *o);
signed char FUN_0c09e910(char *o);
void FUN_0c09ea80(char *o);
int FUN_0c09e7a6(char *o);
signed char FUN_0c09e89a(char *o);
signed char FUN_0c09e7fc(char *o);
signed char FUN_0c09d544(char *o, float *p, float lim);
int FUN_0c09e7d2(char *o);
void FUN_0c09d9bc(char *o);
signed char FUN_0c09c6b8(char *o);
int FUN_0c09dbce(char *o);
int FUN_0c09ddfe(char *o);
void FUN_0c09df74(char *o, int a);
signed char FUN_0c09a910(char *o);
void FUN_0c09d990(char *o);
void thunk_FUN_0c062242(char *m, char *v);
void FUN_0c0421ee(char *p, int a);
void FUN_0c0a3e10(int slot, int a, int b);
void FUN_0c0a2e26(char *o, int a, int b);
#define I8(off) (*(signed char *)(o + (off)))
#define I16(off) (*(short *)(o + (off)))
#define I32(off) (*(int *)(o + (off)))
#define F32(off) (*(float *)(o + (off)))
#define BLK ((char *)0xC7E40C4 + (unsigned short)(I8(3) * 0x72D0))
void FUN_0c093998(char *o)
{
    int a;
    int b;
    int d;
    char *blk;
    if (o[0x7236] != 0) {
        if ((signed char)FUN_0c09c782(o) != 0) {
            FUN_0c0634b4(o);
            FUN_0c09ed26(o);
        }
    }
    if (FUN_0c0a2334(o) != 0) {
        if (FUN_0c0a25e0(o) != 0)
            return;
    }
    if (FUN_0c0a22d6(o) != 0) {
        if (FUN_0c0a2490(o) != 0)
            return;
    }
    if (FUN_0c09e71c(o) != 0) {
        a = 10; b = 0;
        goto anim;
    }
    if (FUN_0c09e910(o) != 0) {
        FUN_0c09ea80(o);
        return;
    }
    if (FUN_0c09e7a6(o) != 0) {
        a = 4; b = 0;
        goto anim;
    }
    if (FUN_0c09e89a(o) != 0) {
        a = 31; b = 1;
        goto anim;
    }
    if (FUN_0c09e7fc(o) == 0) {
        a = 31; b = 0;
        goto anim;
    }
    if (FUN_0c09d544(o, (float *)(o + 0x7254), 60.0f) == 2) {
        I8(0x7243) = I8(0x7243) - 1;
        if (I8(0x7243) == 0) {
            F32(36) = F32(36) + *(float *)(o + 0x7254);
            I8(0x7243) = 4;
        }
    } else {
        I8(0x7243) = 4;
    }
    if (FUN_0c09e7d2(o) != 0) {
        FUN_0c09d9bc(o);
        I16(238) = I16(238) + 1;
        if (I16(238) > 10) {
            a = 5; b = 6;
            goto anim;
        }
        goto tail;
    }
    I16(238) = 0;
    F32(60) = 0.0f;
    F32(72) = *(float *)(o + 0x71E4);
    if (I16(236) != 0) {
        if (FUN_0c09c6b8(o) != 0) {
            d = (unsigned short)(I16(0x7248) - I32(48));
            if (d & 0x8000)
                d |= 0xFFFF0000;
            I32(48) = (unsigned short)(I32(48) + d / I16(236));
            I16(236) = I16(236) - 1;
            if (I16(236) != 0)
                FUN_0c09ed26(o);
        } else {
            d = (unsigned short)(FUN_0c09dbce(o) - I32(48));
            if (d & 0x8000)
                d |= 0xFFFF0000;
            I32(48) = (unsigned short)(I32(48) + d / I16(236));
            I16(236) = I16(236) - 1;
        }
    } else {
        if (FUN_0c09c6b8(o) != 0)
            I32(48) = I32(0x7248);
        else
            I32(48) = FUN_0c09dbce(o);
    }
    if (I32(732) & 0xF0) {
        I32(0x7248) = (unsigned short)(FUN_0c09ddfe(o) + g_w31e0);
        FUN_0c09df74(o, I32(0x7248));
        if (I32(740) & 0xF0) {
            if (FUN_0c09c6b8(o) != 0) {
                I16(236) = 10;
                FUN_0c09ed26(o);
            } else {
                I16(236) = 6;
            }
        }
    } else {
        if (I16(236) == 0) {
            a = 0; b = 0;
            goto anim;
        }
    }
tail:
    if (FUN_0c09a910(o) != 0)
        FUN_0c09ed26(o);
    FUN_0c09d990(o);
    if (o[0x7236] == 0)
        return;
    if (I16(242) == 0) {
        if (I8(0x27C) == 2) {
            blk = BLK;
            thunk_FUN_0c062242(blk + 768 + (short)((signed char)blk[0x71F1] * 3520) + 3168, o + 0x727C);
            F32(0x7280) = F32(36);
            FUN_0c0421ee(o + 0x727C, 0);
        }
        FUN_0c0a3e10(I8(3), I8(0x27C), 0);
        I16(242) = 32;
    }
    if (I16(242) == 16) {
        if (I8(0x27C) == 2) {
            blk = BLK;
            thunk_FUN_0c062242(blk + 768 + (short)((signed char)blk[0x71F1] * 3520) + 2640, o + 0x727C);
            F32(0x7280) = F32(36);
            FUN_0c0421ee(o + 0x727C, 0);
        }
        FUN_0c0a3e10(I8(3), I8(0x27C), 1);
    }
    I16(242) = I16(242) - 1;
    return;
anim:
    FUN_0c0a2e26(o, a, b);
}
