/* Two registration calls, then fills a short record and registers it. */
typedef struct { char b0; char b1; short h2; int w4; int w8; int w12; int w16; int w20; } Dst;
typedef struct { int w0; short h4; short pad6; int w8; int w12; int w16; } Src;
extern void FUN_0c05fc68(int);
extern void FUN_0c05fd86(Dst *, char *);
extern void FUN_0c05fd5e(void *, char *);
void FUN_0c0605c2(void)
{
    Src *s;
    Dst *d;
    FUN_0c05fc68(125);
    FUN_0c05fd5e((void *)0x0c17fdbc, (char *)0x0c14de50);
    FUN_0c05fc68(150);
    s = (Src *)0x0c1d773c;
    d = (Dst *)0x0c4cfa80;
    d->w8 = s->w0;
    d->h2 = s->h4;
    d->w12 = s->w16;
    d->w4 = 50;
    FUN_0c05fd86(d, (char *)0x0c14de58);
}
