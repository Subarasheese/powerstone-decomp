/* Queues the display records for the slot in byte 85 of the state at 0xC7F302C (or the idle one when it is 10): two FUN_0c05fd86 submissions, or FUN_0c05fd5e. */
struct Row { int w0; short h4; short h6; int w8; int w12; int w16; };
struct Out { short h0; short h2; int w4; int w8; int w12; int w16; int w20; };
extern void FUN_0c05fc68(int a);
extern void FUN_0c05fd86(struct Out *o, int q);
extern void FUN_0c05fd5e(int a, int b);
void FUN_0c060804(void)
{
    signed char *sel = (signed char *)(0xC7F302C + 85);
    struct Row *rows = (struct Row *)0xC31FD20;
    struct Out *o = (struct Out *)0xC6649B8;
    struct Out *o2;
    struct Row *r;
    if (*sel == 10) {
        FUN_0c05fc68(195);
        FUN_0c05fd5e(0xC17FE70, 0xC14DF08);
        return;
    }
    FUN_0c05fc68(((int *)0xC14DEB4)[*sel]);
    o->w8 = rows[*sel].w0;
    o->h2 = rows[*sel].h4;
    o->w12 = rows[*sel].w16;
    o->w16 = rows[*sel].w8;
    o->w20 = rows[*sel].w12;
    o->w4 = 1300;
    FUN_0c05fd86(o, 0xC14DEF4);
    FUN_0c05fc68(170);
    r = (struct Row *)((char *)rows + 300);
    o2 = (struct Out *)0xC6649D0;
    o2->w8 = r->w0;
    o2->h2 = r->h4;
    o2->w12 = r->w16;
    o2->w16 = r->w8;
    o2->w20 = r->w12;
    o2->w4 = 1200;
    FUN_0c05fd86(o2, 0xC14DEFC);
}
