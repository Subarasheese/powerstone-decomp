/* Spawns `count` effect actors (1, or 2 when kind is 0) of the type chosen by the table at 0xC148E14, each with `n` sprite children, and sets their timers. */
int FUN_0c029268(void);
int FUN_0c059132(int, int, int, int);
int FUN_0c06233a(int, int, int);

struct Pair { int v[2]; };
struct Act {
    char on;                /* 0x00 */
    char c1;                /* 0x01 */
    char p2;
    char c3;                /* 0x03 */
    char kind;              /* 0x04 */
    char c5;                /* 0x05 */
    unsigned short flags;   /* 0x06 */
    char p8[0x10 - 8];
    int fn;                 /* 0x10 */
    char p14[0x20 - 0x14];
    float f20, f24, f28;    /* 0x20 */
    int i2c, i30, i34;      /* 0x2C */
    char p38[0xEC - 0x38];
    unsigned short t0;      /* 0xEC */
    unsigned short t1;      /* 0xEE */
    char pF0[2];
    unsigned short idx;     /* 0xF2 */
};
struct Kid { char on; char c1; unsigned short flags; };

void FUN_0c029546(int kind, int n)
{
    struct Pair tbl;
    int count, cnt, i, j;
    struct Act *e;
    struct Kid **kp;

    tbl = *(struct Pair *)0xC148E14;
    if (*(int *)0xC386830 != 0) {
        n = (int)((float)n * 0.833333313f);
    }
    cnt = tbl.v[kind];
    count = (kind == 0) ? 2 : 1;
    for (i = 0; i < count; i++) {
        e = (struct Act *)FUN_0c059132(5, 1, cnt, 0);
        if (e == 0) {
            continue;
        }
        e->fn = 0xC029268;
        e->on = 1;
        e->c3 = 2;
        e->c1 = 1;
        e->kind = kind;
        e->flags = 15;
        e->c5 = 0;
        e->f28 = 0.0f;
        e->f24 = 0.0f;
        e->f20 = 0.0f;
        e->i34 = 0;
        e->i30 = 0;
        e->i2c = 0;
        kp = (struct Kid **)((char *)e + 0x2E0);
        if (cnt > 0) {
            j = 0;
            do {
                struct Kid *k = *kp++;
                k->on = 1;
                k->c1 = 0;
                k->flags = 0x101F;
                FUN_0c06233a((int)k, 0xC6649E8, 0x1C);
                j++;
            } while (j < cnt);
        }
        e->t1 = n;
        e->t0 = n;
        e->idx = i;
    }
}
