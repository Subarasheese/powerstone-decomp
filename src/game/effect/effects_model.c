/* @unit 0c046798-0c046830 */
typedef struct P { char b[16]; int k; } P;
typedef struct O { char b0[9]; char st9; char b1[6]; void (*fn)(); char b2[8]; P *p; char b3[0x308-32]; int v; } O;
extern O *fx_spawn_model_effect(int a,int b,int c,int d,int e,short f,char g,int h,int i);
extern char g_14a788[];
extern void obj_destroy(O*);
extern void fx_tick_model_effect(O*);
void fx_tick_linked_effect(O*);
void fx_spawn_linked_effect(int a,int b,P *c,int d,int e,short f,char g,int h,int i)
{
    O *o = fx_spawn_model_effect(a,b,d,e,(int)&g_14a788,f,g,h,i);
    if (o) {
        o->fn = fx_tick_linked_effect;
        o->p = c;
        o->v = c->k;
    }
}
void fx_tick_linked_effect(O *o)
{
    P *p = o->p;
    if (!(p->b[0] && o->v == p->k)) {
        obj_destroy(o);
        return;
    }
    switch (o->st9) {
    case 0: o->st9 = o->st9 + 1; break;
    case 1: fx_tick_model_effect(o); break;
    }
}
