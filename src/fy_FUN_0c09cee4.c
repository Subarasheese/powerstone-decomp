/* Direction test: turns the object's angle (field at 48, rotated by 0xA000) into one of four quadrants and answers 1 if a matching entry exists, first among the 0x2d8-counted ones (FUN_0c025f7a) then among the active listed entries (FUN_0c026076), else 0. */
struct Ent {
    char p0[2];
    signed char kind;       /* 2 */
    char p3[0x2d9 - 3];
    signed char flag;       /* 0x2d9 */
};
struct Obj {
    char p0[48];
    int ang;                /* 48 */
    char p52[0x280 - 52];
    int v[5];               /* 0x280 */
    struct Ent *e[5];       /* 0x294 */
    signed char count;      /* 0x2a8 */
    signed char b[8];       /* 0x2a9 */
    char p2b1[7];
    signed char b2[8];      /* 0x2b8 */
    int w[4];               /* 0x2c0 */
    char p2d0[8];
    signed char count2;     /* 0x2d8 */
};
void FUN_0c023524(struct Obj *, void *);
signed char FUN_0c025f7a(int, int, void *, int);
signed char FUN_0c026076(int, int, void *, int, struct Ent *);
int FUN_0c09cee4(struct Obj *o)
{
    int buf[6];
    int i;
    signed char want;

    FUN_0c023524(o, buf);
    want = (unsigned short)(o->ang + 0xA000) / 0x4000 + 4;
    for (i = 0; i < o->count2; i++) {
        if (FUN_0c025f7a(1, o->b2[i], buf, o->w[i]) == want)
            return 1;
    }
    for (i = 0; i < o->count; i++) {
        struct Ent *e = o->e[i];
        if (e->kind == 2 && e->flag != 2) {
            if (FUN_0c026076(1, o->b[i], buf, o->v[i], o->e[i]) == want)
                return 1;
        }
    }
    return 0;
}
