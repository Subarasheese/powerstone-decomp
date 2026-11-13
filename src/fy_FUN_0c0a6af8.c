/* Update function of an effect object: state byte at 8 steps 0 (arms a 130-frame timer at 0xEC), 1 (counts it down) and 2 (waits on the byte at 0xC7F2EE4, counts at 0xEE and every fifth tick runs FUN_0c0a6a7e); any other state goes to FUN_0c059330. */
struct Obj {
    char p0[8];
    signed char state;      /* 8 */
    char p9[0xEC - 9];
    short timer;            /* 0xEC */
    short count;            /* 0xEE */
};
void FUN_0c0a6a7e(void);
int FUN_0c059330(struct Obj *);
void FUN_0c0a6af8(struct Obj *o)
{
    switch (o->state) {
    case 0:
        o->state = o->state + 1;
        o->timer = 130;
        o->count = 0;
        /* fall through */
    case 1:
        o->timer = o->timer - 1;
        if (o->timer <= 0)
            o->state = o->state + 1;
        break;
    case 2:
        if (*(unsigned char *)0xC7F2EE4 >= 2)
            o->state = o->state + 1;
        o->count = o->count + 1;
        if (o->count % 5 == 0)
            FUN_0c0a6a7e();
        break;
    default:
        FUN_0c059330(o);
        break;
    }
}
