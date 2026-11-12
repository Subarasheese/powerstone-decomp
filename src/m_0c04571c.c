/* @unit 0c04571c-0c0457d0 -extra=a=400 */
typedef struct O { char c0; char c1; char p2; char c3; char p4; char c5; short s6; char st8; char p9[6]; char c15; void (*fn)(); char p20[0xec-20]; short s236; char p238[0x118-0xee]; int i280; } O;
extern O *FUN_0c059132(int a,int b,int c,int d);
extern void FUN_0c0a3796(int a,int b);
extern void FUN_0c059330(O*);
void FUN_0c045774(O*);
void FUN_0c04571c(char a,char b,char c)
{
    O *o;
    if ((o = FUN_0c059132(6,1,1,0))) {
        o->c0 = 1;
        o->c1 = 0;
        o->s6 = 33;
        o->c5 = 1;
        o->fn = FUN_0c045774;
        o->i280 = 0;
        o->c3 = a;
        o->s236 = c;
        o->c15 = b;
    }
}
void FUN_0c045774(O *o)
{
    switch (o->st8) {
    case 0:
        if (!o->s236) {
            FUN_0c0a3796(o->c3, o->c15);
            o->st8 = o->st8 + 1;
        }
        o->s236 = o->s236 - 1;
        break;
    case 1:
        FUN_0c059330(o);
        break;
    }
}
