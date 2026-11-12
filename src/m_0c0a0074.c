/* @unit 0c0a0074-0c0a0188 */
struct O { char p[686]; char c686[10]; char c696[8]; int i704[6]; char n728; char q[29114-729]; char c71ba, c71bb, c71bc; };
extern char FUN_0c09c6b8(struct O *);
extern void FUN_0c023524(struct O *, void *);
extern char FUN_0c025f7a(int, int, void *, int);
int FUN_0c0a0074(struct O *o)
{
    int buf[6];
    register int i;
    int *pb;
    if (FUN_0c09c6b8(o)) return 0;
    FUN_0c023524(o, buf);
    for (i = 0, pb = buf; i < o->n728; i++) {
        if (o->c686[i] == 9) {
            if (FUN_0c025f7a(1, o->c696[i], pb, o->i704[i]) == 3)
                return 1;
        }
    }
    return 0;
}
int FUN_0c0a00e4(struct O *o)
{
    int buf[6];
    int i;
    FUN_0c023524(o, buf);
    if (FUN_0c09c6b8(o) == 0) {
        if (o->c71ba == 10 && o->c71bb == 39) return 0;
        if (o->c71bc == 2) {
            for (i = 0; i < o->n728; i++) {
                if (o->c686[i] == 10) {
                    if (FUN_0c025f7a(1, o->c696[i], buf, o->i704[i]) == 3)
                        return 1;
                }
            }
        }
    }
    return 0;
}
