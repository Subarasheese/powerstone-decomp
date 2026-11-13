/* Fills a short record and registers it, then makes a second registration call. */
typedef struct { char b0; char b1; short h2; int w4; int w8; int w12; int w16; int w20; } Dst;
typedef struct { int w0; short h4; short pad6; int w8; int w12; int w16; } Src;
extern void FUN_0c05fc68(int);
extern void FUN_0c05fd86(Dst *, char *);
extern void FUN_0c05fd5e(void *, char *);
void FUN_0c060c26(void)
{
    Src *s;
    Dst *d;
    FUN_0c05fc68(151);
    s = (Src *)0x0c1d7714;
    d = (Dst *)0x0c4cfa68;
    d->w8 = s->w0;
    d->h2 = s->h4;
    d->w12 = s->w16;
    d->w4 = 900;
    FUN_0c05fd86(d, (char *)0x0c14e024);
    FUN_0c05fc68(153);
    FUN_0c05fd5e((void *)0x0c33f66c, (char *)0x0c14e030);
}
