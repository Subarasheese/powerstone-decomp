/* INLINE-ASM: only the trapa #48 (a debugger trap C cannot emit); the rest is C. */
/* Fatal-error display: sets the screen border colour by error kind (1 red, 2 yellow, 3 green, 4 magenta; another kind
   leaves the colour uninitialised, as the original does), then spins forever for kind 1 or raises trap 48. */
typedef struct { unsigned int v; } PACKED;
int kmSetBorderColor(PACKED c);
#pragma inline_asm(trapa48)
static void trapa48(void)
{
    trapa #48
}

void FUN_0c0defe0(int kind)
{
    PACKED c;

    switch (kind) {
    case 1: c.v = 0xFF0000FF; break;
    case 2: c.v = 0xFFFF0000; break;
    case 3: c.v = 0xFF00FF00; break;
    case 4: c.v = 0xFFFF00FF; break;
    }
    kmSetBorderColor(c);
    if (kind == 1)
        for (;;)
            ;
    trapa48();
}
