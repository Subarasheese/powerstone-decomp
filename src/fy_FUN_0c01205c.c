/* Step function of a timed screen: after FUN_0c0122e6 reports done, state byte 3 starts it (state 0: init calls, 600-frame timer at 0x1C) and then counts the timer down until it runs out or FUN_0c01251c fires, finishing with FUN_0c010b84 and mode 4 at 0xC361BC9. */
struct Obj {
    char p0[3];
    signed char state;      /* 3 */
    char p4[24];
    short timer;            /* 28 */
};
signed char FUN_0c0122e6(struct Obj *);
void FUN_0c012504(void);
void FUN_0c012420(int);
void FUN_0c0124ce(int, int);
signed char FUN_0c01251c(void);
void FUN_0c010b84(void);
void FUN_0c01205c(struct Obj *o)
{
    if (FUN_0c0122e6(o) != 0)
        return;
    switch (o->state) {
    case 0:
        o->state = o->state + 1;
        FUN_0c012504();
        FUN_0c012420(0);
        FUN_0c012420(1);
        FUN_0c0124ce(0, 4);
        o->timer = 600;
        /* fall through */
    case 1:
        o->timer = o->timer - 1;
        if (o->timer == 0 || FUN_0c01251c() != 0) {
            FUN_0c010b84();
            FUN_0c012504();
            *(char *)0xC361BC9 = 4;
        }
        break;
    }
}
