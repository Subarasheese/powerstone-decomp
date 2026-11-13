/* Draft: proven, but its cases embedded slices of the game data tables, so it is withdrawn until synthetic cases exist. */
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
