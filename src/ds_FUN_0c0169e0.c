/* Creates a 4-slot effect object with FUN_0c059132(5,1,4,0): initialises it with FUN_0c01628c, installs handler FUN_0c0165cc at +16, copies two 12-byte vectors (from 0xC1169E0 and 0xC1169EC) to +32 and +44, then for each child pointer in the table at +0x2E0 (count at +0x2DC) calls FUN_0c0162ba(child, 0xC116BCC[i]) and copies two 12-byte vectors from the tables at 0xC17EB38 / 0xC17EB68 (entry (signed char)(12*i)) into the child at +4 and +16. */
struct V { int x, y, z; };
extern unsigned char *FUN_0c059132(int, int, int, int);
extern void FUN_0c01628c(unsigned char *);
extern void FUN_0c0162ba(unsigned char *, int);
extern int FUN_0c0165cc(void);

void FUN_0c0169e0(void)
{
    unsigned char *o;
    unsigned char *p;
    int i;

    o = FUN_0c059132(5, 1, 4, 0);
    if (o) {
        FUN_0c01628c(o);
        *(void **)(o + 16) = (void *)FUN_0c0165cc;
        *(struct V *)(o + 32) = *(struct V *)(0xC1169D8 + 8);
        *(struct V *)(o + 44) = *(struct V *)(0xC1169D8 + 20);
        for (i = 0; i < (signed char)o[0x2DC]; i++) {
            p = *(unsigned char **)(o + 0x2E0 + 4 * i);
            FUN_0c0162ba(p, *(int *)(0xC116BCC + 4 * i));
            *(struct V *)(p + 4) = *(struct V *)(0xC17EB38 + (signed char)(i * 12));
            *(struct V *)(p + 16) = *(struct V *)(0xC17EB68 + (signed char)(i * 12));
        }
    }
}
