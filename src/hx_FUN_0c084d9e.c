/* Fighter state: carrying/lifting an object. In motion 11 the two arm parts (+0x1E80 + 0x1760 / + 0x1810, angle +84)
   swing by a quarter turn; in motion 13 it picks up the nearest item (FUN_0c0c571c, kept at +0x72C4): on success the
   item is taken (FUN_0c03d254), the arms reset, the carry action 50 starts (FUN_0c0a3914), the attempt is counted at +11
   and the timer +0xEC set to 180; otherwise the grab fails (+0x7223 = 0, FUN_0c0a2080). Every frame it moves
   (FUN_0c09a910, FUN_0c09da1c) and turns its yaw +0x30 towards +0x7248 by 1/(+0xF0) of the gap. */
void *FUN_0c0c571c(char *o, int kind);
void FUN_0c03d254(char *o, int a);
void FUN_0c0a3914(char *o, int action);
void FUN_0c0a2080(char *o);
void FUN_0c09a910(char *o);
void FUN_0c09da1c(char *o);

#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define I(o, n) (*(int *)((o) + (n)))
#define ARM0 (o + 0x1E80 + 0x1760)
#define ARM1 (o + 0x1E80 + 0x1810)

void FUN_0c084d9e(char *o)
{
    void *item;
    short d;

    if (*(unsigned short *)(o + 0x719E) == 11) {
        I(ARM0, 84) = I(ARM0, 84) - 0x4000;
        I(ARM1, 84) = I(ARM1, 84) + 0x4000;
    }
    if (*(unsigned short *)(o + 0x719E) == 13) {
        item = FUN_0c0c571c(o, 0);
        *(void **)(o + 0x72BC + 8) = item;
        if (item == 0) {
            B(o, 0x7223) = 0;
            FUN_0c0a2080(o);
        } else {
            FUN_0c03d254(o, 0);
            I(ARM0, 84) = 0;
            I(ARM1, 84) = 0;
            ARM0[64] = 0;
            ARM1[64] = 0;
            B(o, 0x5CA0) = 0;
            FUN_0c0a3914(o, 50);
            B(o, 11) = B(o, 11) + 1;
            H(o, 0xEC) = 180;
        }
    }
    FUN_0c09a910(o);
    FUN_0c09da1c(o);
    H(o, 0xF0) = H(o, 0xF0) - 1;
    if (H(o, 0xF0) == 0)
        H(o, 0xF0) = 1;
    d = (short)(H(o, 0x7248) - I(o, 48));
    I(o, 48) = (unsigned short)(I(o, 48) + d / H(o, 0xF0));
}
