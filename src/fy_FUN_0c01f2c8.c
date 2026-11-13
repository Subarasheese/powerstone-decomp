/* Step function of a menu-confirm state machine: state 0 starts it, state 1 waits for FUN_0c011600 and checks the player bit, state 2 waits for FUN_0c011ae0; the outcome (10 accepted / 11 refused) goes to the state record at 0xC362A50, which is reset. */
int FUN_0c01fdc8(void);
int FUN_0c01f4c8(int a);
int FUN_0c011600(int);
int FUN_0c011ae0(int);
struct Obj {
    char p0[4];
    signed char state;      /* 4 */
    char p5[19];
    int mask;               /* 24 */
    char p28[4];
    int player;             /* 32 */
    char p36[14];
    char timer;             /* 50 */
};
void FUN_0c01f2c8(struct Obj *o)
{
    signed char *g = (signed char *)0xC362A50;
    int r;

    switch (o->state) {
    case 0:
        o->state = o->state + 1;
        FUN_0c01fdc8();
        FUN_0c01f4c8(5);
        o->timer = 60;
        /* fall through */
    case 1:
        r = FUN_0c011600(o->player);
        if (r == -1)
            break;
        if (r == 0) {
            if ((1 << o->player) & o->mask) {
                o->state = o->state + 1;
                break;
            }
            g[49] = 10;
        } else {
            g[49] = 11;
        }
        g[4] = 0;
        break;
    case 2:
        r = FUN_0c011ae0(o->player);
        if (r == -1)
            break;
        if (r == 0)
            g[49] = 10;
        else
            g[49] = 11;
        g[4] = 0;
        break;
    }
}
