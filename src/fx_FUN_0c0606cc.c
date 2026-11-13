/* Fills a 24-byte record at a fixed address from a source record and registers it (calls the setup helpers). */
typedef struct { char b0; char b1; short h2; int w4; int w8; int w12; int w16; int w20; } Dst;
typedef struct { int w0; short h4; short pad6; int w8; int w12; int w16; } Src;
extern void FUN_0c05fc68(int);
extern void FUN_0c05fd86(Dst *, char *);
extern void FUN_0c05fd5e(void *, char *);
void FUN_0c0606cc(void)
{
    Src *s;
    Dst *d;
    FUN_0c05fc68(169);
    s = (Src *)0x0c31fe38;
    d = (Dst *)0x0c664a78;
    d->w8 = s->w0;
    d->h2 = s->h4;
    d->w12 = s->w16;
    d->w16 = s->w8;
    d->w20 = s->w12;
    d->w4 = 1400;
    FUN_0c05fd86(d, (char *)0x0c14de78);
}
