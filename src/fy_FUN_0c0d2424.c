/* Per-step update of a sprite object: loads two 16-bit frame values from the table at 0xC33F5EC by the signed type byte at +4, runs a handler from a 3x4 table of function pointers (copied from 0xC1544F0 to the stack) chosen by the halfwords at +84 and +86, then recomputes two row pointers (+108, +112) into the tables at 0xC7D08E0 (32-byte entries, selected by halfwords at +160 and +104) and, for type 2 with bit 1 of the word at +68 set, calls FUN_0c0d16d2. */
struct T48 { int (*f[12])(unsigned char *); };
struct E32 { int *a; int *b; char pad[24]; };
extern int FUN_0c0d16d2(unsigned char *);

void FUN_0c0d2424(unsigned char *o)
{
    struct T48 t;
    short *T = (short *)0xC33F5EC;
    struct E32 *E = (struct E32 *)0xC7D08E0;

    t = *(struct T48 *)0xC1544F0;
    *(short *)(o + 0x80) = T[(signed char)o[4]];
    *(short *)(o + 0x82) = T[(signed char)o[4] + 3];
    t.f[((unsigned short)*(unsigned short *)(o + 84) << 2) + *(unsigned short *)(o + 86)](o);
    *(int **)(o + 108) = E[*(unsigned short *)(o + 0xA0)].a + (unsigned short)(*(unsigned short *)(o + 100)) * (unsigned short)(*(unsigned short *)(o + 128));
    *(int **)(o + 112) = E[*(unsigned short *)(o + 0xA0)].b + (unsigned short)(*(unsigned short *)(o + 104)) * (unsigned short)(*(unsigned short *)(o + 130));
    if ((signed char)o[4] == 2 && (*(int *)(o + 68) & 2))
        FUN_0c0d16d2(o);
}
