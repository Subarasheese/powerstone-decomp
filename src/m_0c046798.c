/* @unit 0c046798-0c046830 */
typedef struct P { char b[16]; int k; } P;
typedef struct O { char b0[9]; char st9; char b1[6]; void (*fn)(); char b2[8]; P *p; char b3[0x308-32]; int v; } O;
extern O *FUN_0c047c6c(int a,int b,int c,int d,int e,short f,char g,int h,int i);
extern char g_14a788[];
extern void FUN_0c059330(O*);
extern void FUN_0c0469fa(O*);
void FUN_0c0467e0(O*);
void FUN_0c046798(int a,int b,P *c,int d,int e,short f,char g,int h,int i)
{
    O *o = FUN_0c047c6c(a,b,d,e,(int)&g_14a788,f,g,h,i);
    if (o) {
        o->fn = FUN_0c0467e0;
        o->p = c;
        o->v = c->k;
    }
}
void FUN_0c0467e0(O *o)
{
    P *p = o->p;
    if (!(p->b[0] && o->v == p->k)) {
        FUN_0c059330(o);
        return;
    }
    switch (o->st9) {
    case 0: o->st9 = o->st9 + 1; break;
    case 1: FUN_0c0469fa(o); break;
    }
}
