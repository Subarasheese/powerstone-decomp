/* Wrapper: sets the Kamui border colour from an RGB word, forcing the alpha byte to 0xFF. */
typedef struct { unsigned int v; } PACKED;
int kmSetBorderColor(PACKED c);

void FUN_0c0de590(unsigned int c)
{
    PACKED p;
    p.v = c | 0xFF000000;
    kmSetBorderColor(p);
}
