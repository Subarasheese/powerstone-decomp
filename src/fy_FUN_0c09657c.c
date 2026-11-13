/* Per-frame step of an object: if FUN_0c09a910 says it is done, call FUN_0c09a808(o,2,0xD4) and clear byte 10; else, while the counter at +236 is nonzero, move the value at +48 toward FUN_0c09db78(o) by (difference / counter) and count down. */
struct O {
    char p0[10];
    char b10;
    char p1[37];
    int v48;
    char p2[184];
    short cnt;
};
extern signed char FUN_0c09a910(struct O *);
extern int FUN_0c09a808(struct O *, int, int);
extern int FUN_0c09db78(struct O *);

void FUN_0c09657c(struct O *o)
{
    short d;
    short c;

    if (FUN_0c09a910(o)) {
        FUN_0c09a808(o, 2, 0xD4);
        o->b10 = 0;
        return;
    }
    if (o->cnt != 0) {
        d = FUN_0c09db78(o) - o->v48;
        c = o->cnt--;
        o->v48 = (unsigned short)(o->v48 + d / c);
    }
}
