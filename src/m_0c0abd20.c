/* @unit 0c0abd20-0c0abe44 -macsave=1 */
/* _quick_odd_mvn */
struct V { int a, b, c; };
struct Ent { char p[24]; struct V *p24; struct V *p28; char q[20]; };
struct EE { char p[2]; signed char k; };
struct W { int a; struct V v; int pad[4]; struct V w; char rest[1]; };
struct O { char p0[32]; struct V v32; struct V v44; char p1[732 - 56]; signed char n; char p2[3]; struct W *arr[3]; char pp[28]; struct EE *e; };
struct G { char p[37]; signed char i; };
struct Ent *E(short);
extern struct G g_302c;
extern struct Ent tbl_350b60[];
extern struct V vA_339c90, vB_339ca8, vC_339c9c;
void FUN_0c0abd20(struct O *o);
void FUN_0c0abd84(struct O *o);
void FUN_0c0abde0(struct O *o);
void FUN_0c0abd20(struct O *o)
{
    o->v32 = ((struct Ent *)((char *)tbl_350b60 + (short)(g_302c.i * 52)))->p24[o->e->k];
    o->v44 = ((struct Ent *)((char *)tbl_350b60 + (short)(g_302c.i * 52)))->p28[o->e->k];
}
void FUN_0c0abd84(struct O *o)
{
    int i;
    for (i = 0; i < o->n; i++) {
        *(struct V *)((char *)o->arr[i] + 4) = vA_339c90;
        *(struct V *)((char *)o->arr[i] + 16) = vB_339ca8;
        *(struct V *)((char *)o->arr[i] + 28) = vC_339c9c;
    }
}
void FUN_0c0abde0(struct O *o)
{
    int i;
    for (i = 0; i < o->n; i++) {
        *(struct V *)((char *)o->arr[i] + 4) = vA_339c90;
        *(struct V *)((char *)o->arr[i] + 16) = vB_339ca8;
    }
}
