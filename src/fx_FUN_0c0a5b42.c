/* Step of a 3-state sequence on the record at 0x0C7F2EE0 (state byte 7): starts a 30-tick timer, counts down, then advances. */
typedef struct { char pad0[5]; unsigned char b5, b6, b7; char pad1[8]; short h16; short pad18; short h20; } G;
extern void FUN_0c0dc1c0(int, int, int, int);
extern void FUN_0c0a2f7a(void);
extern void FUN_0c0a2f66(int);
extern void FUN_0c0a34b8(void);
void FUN_0c0a5b42(void)
{
    G *g = (G *)0x0C7F2EE0;
    switch (g->b7) {
    case 0:
        g->b7 = g->b7 + 1;
        g->h20 = 30;
        FUN_0c0dc1c0(0, 0, 99, 0);
        /* fall through */
    case 1:
        g->h20 = g->h20 - 1;
        if (g->h20 >= 0)
            return;
        g->b7 = g->b7 + 1;
        FUN_0c0a2f7a();
        FUN_0c0a2f66(4);
        FUN_0c0a34b8();
        return;
    default:
        g->b6 = g->b6 + 1;
        g->b7 = 0;
        return;
    }
}
