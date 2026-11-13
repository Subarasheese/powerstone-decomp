/* Wrapper: sets the Kamui fog vertex colour from a packed ARGB word. */
typedef struct { unsigned int v; } PACKED;
int kmSetFogVertexColor(PACKED c);

void FUN_0c0de530(unsigned int c)
{
    PACKED p;
    p.v = c;
    kmSetFogVertexColor(p);
}

