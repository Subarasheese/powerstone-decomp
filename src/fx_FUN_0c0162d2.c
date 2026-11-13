/* Fade-in/out step: waits for a counter, then slides two sprites' scale in opposite directions until a limit; releases on a control byte. */
int FUN_0c059330(int);

struct Spr { char p[8]; float s; };
struct Obj {
    char p0[8];
    signed char state;      /* 0x08 */
    signed char phase;      /* 0x09 */
    char pa[0x2E0 - 0xA];
    struct Spr *up;         /* 0x2E0 */
    struct Spr *down;       /* 0x2E4 */
};

void FUN_0c0162d2(struct Obj *o)
{
    if (o->state == 0) {
        o->state = o->state + 1;
    }
    if (o->phase == 0) {
        if (*(short *)0xC7F2EEE >= 0x13B0) {
            o->phase = o->phase + 1;
        }
    } else {
        o->down->s = o->down->s - 1.0f;
        o->up->s = o->up->s + 1.0f;
        if (!(300.0f > o->up->s)) {
            FUN_0c059330((int)o);
        }
    }
    if (*(unsigned char *)0xC7F2EE5 > 1) {
        FUN_0c059330((int)o);
    }
}
