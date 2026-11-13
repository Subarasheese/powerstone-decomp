/* Wrapper: sets the Kamui fog table colour from a packed ARGB word. */
typedef struct { unsigned int v; } PACKED;
int kmSetFogTableColor(PACKED c);

void FUN_0c0de510(unsigned int c)
{
    PACKED p;
    p.v = c;
    kmSetFogTableColor(p);
}

