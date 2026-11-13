/* Fills two 24-byte records from source records and registers each. */
typedef struct { char b0; char b1; short h2; int w4; int w8; int w12; int w16; int w20; } Dst;
typedef struct { int w0; short h4; short pad6; int w8; int w12; int w16; } Src;
extern void FUN_0c05fc68(int);
extern void FUN_0c05fd86(Dst *, char *);
extern void FUN_0c05fd5e(void *, char *);
void FUN_0c0607a0(void)
{
    Src *s;
    Dst *d;
    FUN_0c05fc68(165);
    s = (Src *)0x0c31fde8;
    d = (Dst *)0x0c6649e8;
    d->w8 = s->w0;
    d->h2 = s->h4;
    d->w12 = s->w16;
    d->w16 = s->w8;
    d->w20 = s->w12;
    d->w4 = 1300;
    FUN_0c05fd86(d, (char *)0x0c14de9c);
    FUN_0c05fc68(171);
    s = (Src *)0x0c31fe60;
    d = (Dst *)0x0c6649a0;
    d->w8 = s->w0;
    d->h2 = s->h4;
    d->w12 = s->w16;
    d->w16 = s->w8;
    d->w20 = s->w12;
    d->w4 = 1100;
    FUN_0c05fd86(d, (char *)0x0c14dea8);
}
