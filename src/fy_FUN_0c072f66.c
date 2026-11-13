/* Update of a timed effect object: if its float at 60 is used up and FUN_0c09e7b8 agrees, hands over to FUN_0c0a2e26; otherwise runs the three per-frame helpers and steps the state byte at 10 (0 start the 30-frame timer, 1 count it down and set the float at 72, 3 hand over to FUN_0c0a2080). */
struct Obj {
    char p0[10];
    signed char state;      /* 10 */
    char p11[49];
    float f60;              /* 60 */
    char p64[8];
    float f72;              /* 72 */
    char p76[0xF0 - 76];
    short timer;            /* 0xF0 */
};
char FUN_0c09e7b8(struct Obj *, float);
void FUN_0c0a2e26(struct Obj *, int, int);
void FUN_0c09d990(struct Obj *);
void FUN_0c09d9bc(struct Obj *);
char FUN_0c09a910(struct Obj *);
void FUN_0c0a2080(struct Obj *);
void FUN_0c072f66(struct Obj *o)
{
    if (!(o->f60 > 0.0f) && FUN_0c09e7b8(o, 0.0f) != 0) {
        FUN_0c0a2e26(o, 6, 0);
        return;
    }
    FUN_0c09d990(o);
    FUN_0c09d9bc(o);
    FUN_0c09a910(o);
    switch (o->state) {
    case 0:
        o->timer = 30;
        o->state = 1;
        /* fall through */
    case 1:
        o->timer = o->timer - 1;
        if (o->timer == 0) {
            o->f72 = -0.5f;
            o->timer = 30;
            o->state = 2;
        }
        break;
    case 3:
        FUN_0c0a2080(o);
        break;
    }
}
