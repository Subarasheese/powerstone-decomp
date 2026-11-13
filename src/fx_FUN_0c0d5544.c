/* Bumps byte 5 of the record at 0x0C7F2EE0 and sets its halfword at +16 to 180. */
typedef struct { char pad0[5]; unsigned char b5, b6, b7; char pad1[8]; short h16; short pad18; short h20; } G;
void FUN_0c0d5544(void)
{
    G *g = (G *)0x0C7F2EE0;
    g->b5 = g->b5 + 1;
    g->h16 = 180;
}
