/* Timer step on the record at 0x0C7F2EE0: starts a 16-tick fade on first call, then counts down and advances b5. */
typedef struct { char pad0[5]; unsigned char b5, b6, b7; char pad1[8]; short h16; short pad18; short h20; } G;
extern void FUN_0c031496(int, int, int, int);
void FUN_0c0d414c(void)
{
    G *g = (G *)0x0C7F2EE0;
    if (g->b7 == 0) {
        g->b7 = g->b7 + 1;
        g->h20 = 16;
        FUN_0c031496(0xff000000, 0, 1, 15);
    }
    g->h20 = g->h20 - 1;
    if (g->h20 == 0) {
        g->b5 = g->b5 + 1;
        g->b6 = 0;
        g->b7 = 0;
    }
}
