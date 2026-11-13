/* Picks the table entry named by the byte at 0xC7F4724+27, calls FUN_0c05fc68 on it, copies fields of its 20-byte row into the record at 0xC664AC0 and passes that to FUN_0c05fd86. */
struct Ent { int a; int k; };
struct Row { int w0; short h4; short h6; int w8; int w12; int w16; };
struct Out { short h0; short h2; int w4; int w8; int w12; int w16; int w20; };
extern void FUN_0c05fc68(int a);
extern void FUN_0c05fd86(struct Out *o, int q);
void FUN_0c06096c(void)
{
    struct Ent *t = (struct Ent *)0xC14DF30;
    struct Row *rows = (struct Row *)0xC31FD20;
    struct Out *o = (struct Out *)0xC664AC0;
    signed char *sel = (signed char *)(0xC7F4724 + 27);
    FUN_0c05fc68(t[*sel].a);
    o->w8 = rows[t[*sel].k].w0;
    o->h2 = rows[t[*sel].k].h4;
    o->w12 = rows[t[*sel].k].w16;
    o->w16 = rows[t[*sel].k].w8;
    o->w20 = rows[t[*sel].k].w12;
    o->w4 = 1500;
    FUN_0c05fd86(o, 0xC14DF68);
}
