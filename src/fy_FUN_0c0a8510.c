/* Update of a two-part effect: state 0 sets the object up (timer 10 at 0xEC, size 31 at 6) and starts its two sub-objects from the table at 0x2e0 (FUN_0c0623a6), state 1 waits for the byte at 0xC7F2EE4 to reach 3, any other state is handled by FUN_0c059330. */
struct V3 { float x, y, z; };
struct Sub {
    char live;
    char p1;
    short size;             /* 2 */
};
struct Obj {
    char p0[1];
    char f1;                /* 1 */
    char p2[3];
    char f5;                /* 5 */
    short size;             /* 6 */
    signed char state;      /* 8 */
    char tag;               /* 9 */
    char pa[0xEC - 10];
    short timer;            /* 0xEC */
    short count;            /* 0xEE */
    char pf0[0x2e0 - 0xF0];
    struct Sub *sub[2];     /* 0x2e0 */
};
void FUN_0c0623a6(struct Sub *, int, int);
void FUN_0c059330(struct Obj *);
void FUN_0c0a8510(struct Obj *o)
{
    struct V3 v;
    int i;

    v = *(struct V3 *)0xC152B6C;
    switch (o->state) {
    case 0:
        o->state = o->state + 1;
        o->tag = 0;
        o->timer = 10;
        o->count = 0;
        o->f1 = 1;
        o->size = 31;
        o->f5 = 25;
        for (i = 0; i < 2; i++) {
            FUN_0c0623a6(o->sub[i], 0xC664A48, i + 14);
            o->sub[i]->live = 1;
            o->sub[i]->size = 31;
        }
        /* fall through */
    case 1:
        if (*(unsigned char *)0xC7F2EE4 >= 3)
            o->state = o->state + 1;
        break;
    default:
        FUN_0c059330(o);
        break;
    }
}
