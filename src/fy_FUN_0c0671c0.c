/* Per-frame state step of a player object: while it is turning (byte +0x721E zero and the short at +236 above 0) it moves the heading (+48) by the 16-bit difference to the target from FUN_0c09db78 divided by the counter, then counts the short at +236 down and tail-calls the action handler picked by the mode byte at +10 (2..16) and the flag byte at +11 (one handler when it is 0, another otherwise). */
struct Obj {
    char pad0[10];
    signed char mode;
    signed char flag;
    char pad1[48 - 12];
    int w48;
    char pad2[236 - 52];
    short s236;
    char pad3[0x721E - 238];
    char b721e;
};
int FUN_0c09db78(struct Obj *o);
void FUN_0c065cb4(struct Obj *o);
void FUN_0c065d10(struct Obj *o);
void FUN_0c065d66(struct Obj *o);
void FUN_0c065fa2(struct Obj *o);
void FUN_0c066428(struct Obj *o);
void FUN_0c066540(struct Obj *o);
void FUN_0c0666e4(struct Obj *o);
void FUN_0c0668e2(struct Obj *o);
void FUN_0c0669da(struct Obj *o);
void FUN_0c066bbe(struct Obj *o);
void FUN_0c066d62(struct Obj *o);
void FUN_0c066e8e(struct Obj *o);
void FUN_0c066118(struct Obj *o);
void FUN_0c06625c(struct Obj *o);
void FUN_0c066340(struct Obj *o);
void FUN_0c066398(struct Obj *o);
void FUN_0c066eb0(struct Obj *o);
void FUN_0c067004(struct Obj *o);
void FUN_0c0671c0(struct Obj *o)
{
    int d;
    if (o->b721e == 0 && o->s236 != 0) {
        d = (unsigned short)(FUN_0c09db78(o) - o->w48);
        if (d & 0x8000)
            d |= 0xFFFF0000;
        if (o->s236 > 0)
            o->w48 = (unsigned short)(o->w48 + d / o->s236);
    }
    o->s236 = o->s236 - 1;
    switch (o->mode) {
    case 11:
        if (o->flag == 0) FUN_0c065cb4(o); else FUN_0c065d10(o);
        break;
    case 2:
        if (o->flag == 0) FUN_0c065d66(o); else FUN_0c065fa2(o);
        break;
    case 4:
    case 16:
        if (o->flag == 0) FUN_0c066428(o); else FUN_0c066540(o);
        break;
    case 15:
        if (o->flag == 0) FUN_0c0666e4(o); else FUN_0c0668e2(o);
        break;
    case 5:
    case 6:
    case 7:
        if (o->flag == 0) FUN_0c0669da(o); else FUN_0c066bbe(o);
        break;
    case 14:
        if (o->flag == 0) FUN_0c066d62(o); else FUN_0c066e8e(o);
        break;
    case 8:
        if (o->flag == 0) FUN_0c066118(o); else FUN_0c06625c(o);
        break;
    case 9:
    case 10:
    case 12:
        if (o->flag == 0) FUN_0c066340(o); else FUN_0c066398(o);
        break;
    case 3:
        if (o->flag == 0) FUN_0c066eb0(o); else FUN_0c067004(o);
        break;
    default:
        break;
    }
}
