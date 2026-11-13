/* Pushes the matrix selected by a5, copies the 12-byte vector at a4 to a local and calls nlCalcPoint on the copy and a4, then pops the matrix. */
struct V { int x, y, z; };
int FUN_0c0e19b0(int);
int nlCalcPoint(struct V *, struct V *);
int nlPopMatrix(int);

void FUN_0c062210(struct V *a4, int a5)
{
    struct V v;

    FUN_0c0e19b0(a5);
    v = *a4;
    nlCalcPoint(&v, a4);
    nlPopMatrix(1);
}
