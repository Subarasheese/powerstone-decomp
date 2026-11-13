/* Turning step of a player object: when its flags (+732) have a turn bit (0xF0) it takes the target angle from FUN_0c09ddfe, stores the (16-bit, sign-extended) difference to its heading (+48) at +0x7248 and, when that is beyond +-364, clamps it and adds the clamp to the heading; it then counts down the short at +238 (wraps to 4), updates (FUN_0c09a910, FUN_0c09da1c) and, if FUN_0c09c782 reports and the slot checks pass, calls FUN_0c0634b4 and FUN_0c0a2080; with no turn flags and no timer (+242) it takes the other branch; ends by counting down the timer at +242. */
struct Obj {
    char pad0[3];
    signed char b3;
    char pad1[48 - 4];
    int w48;
    char pad2[238 - 52];
    short s238;
    short s240;
    short s242;
    char pad3[732 - 244];
    int flags;
};
extern short g_w31e0;
int FUN_0c09ddfe(struct Obj *o);
void FUN_0c09a910(struct Obj *o);
void FUN_0c09da1c(struct Obj *o);
signed char FUN_0c09c782(struct Obj *o);
void FUN_0c0634b4(struct Obj *o);
void FUN_0c0a2080(struct Obj *o);
void FUN_0c0abe44(int a, int b, int c);

void FUN_0c066eb0(char *p)
{
    struct Obj *o = (struct Obj *)p;
    short t;
    if ((o->flags & 0x600) == 0 && o->s242 == 0) {
        if (FUN_0c09c782(o) != 0) {
            FUN_0c0634b4(o);
            p[0x7236] = 0;
            *(int *)(p + 0x71CC) = 0;
        } else {
            FUN_0c0abe44(*(int *)(p + 0x71CC), 5, o->b3);
        }
        FUN_0c0a2080(o);
    } else {
        if (o->flags & 0xF0) {
            *(int *)(p + 0x7248) = (unsigned short)(FUN_0c09ddfe(o) + g_w31e0 - o->w48);
            if (*(int *)(p + 0x7248) & 0x8000)
                *(int *)(p + 0x7248) |= 0xFFFF0000;
            if (*(int *)(p + 0x7248) > 364 || *(int *)(p + 0x7248) < -364) {
                if (*(int *)(p + 0x7248) > 0)
                    *(int *)(p + 0x7248) = 364;
                else
                    *(int *)(p + 0x7248) = -364;
                o->w48 = (unsigned short)(o->w48 + *(short *)(p + 0x7248));
            }
        }
        t = o->s238 - 1;
        o->s238 = t;
        if (t < 0)
            o->s238 = 4;
        FUN_0c09a910(o);
        FUN_0c09da1c(o);
        if (FUN_0c09c782(o) != 0 && (p[0x71F1] == 0 || *(short *)(p + 0x71F4) != 0)) {
            FUN_0c0634b4(o);
            p[0x7236] = 0;
            *(int *)(p + 0x71CC) = 0;
            FUN_0c0a2080(o);
        }
    }
    if (o->s242 != 0)
        o->s242 = o->s242 - 1;
}
