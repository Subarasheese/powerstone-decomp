/* Loads XMTRX from matrix b, transforms a copy of vector a by it back into a (nlCalcVector) and pops the matrix. */
struct V3 { float x, y, z; };
extern int FUN_0c0e19b0(void *m);
extern void nlCalcVector(void *src, void *dst);
extern int nlPopMatrix(int n);
void FUN_0c0621de(struct V3 *a, void *b)
{
    struct V3 v;
    FUN_0c0e19b0(b);
    v = *a;
    nlCalcVector(&v, a);
    nlPopMatrix(1);
}
