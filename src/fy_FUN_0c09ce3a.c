/* Searches the object's entries for the first (1-based) that is active (kind 2, mode 1, flag at 0x2d9 not 2) and for which FUN_0c026076 answers 2; returns its number, or 0. */
struct Ent {
    char p0[2];
    signed char kind;       /* 2 */
    char p3;
    signed char mode;       /* 4 */
    char p5[0x2d9 - 5];
    signed char flag;       /* 0x2d9 */
};
struct Obj {
    char p0[0x280];
    int v[5];               /* 0x280 */
    struct Ent *e[5];       /* 0x294 */
    signed char count;      /* 0x2a8 */
    signed char b[8];       /* 0x2a9 */
};
void FUN_0c023524(struct Obj *, void *);
signed char FUN_0c026076(int, int, void *, int, struct Ent *);
int FUN_0c09ce3a(struct Obj *o)
{
    int buf[6];
    int i;

    FUN_0c023524(o, buf);
    for (i = 0; i < o->count; i++) {
        struct Ent *e = o->e[i];
        if (e->kind == 2 && e->mode == 1 && e->flag != 2) {
            if (FUN_0c026076(1, o->b[i], buf, o->v[i], o->e[i]) == 2)
                return i + 1;
        }
    }
    return 0;
}
